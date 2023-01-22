//NVD 1C Session Manager
//Copyright © 2023, Nikolay Dudkin

//This program is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.
//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
//GNU General Public License for more details.
//You should have received a copy of the GNU General Public License
//along with this program.If not, see<https://www.gnu.org/licenses/>.

#include "COMConnector.h"

HRESULT __stdcall COMConnector::CoCreateInstanceDirect(LPCTSTR szDllName, IN REFCLSID rclsid, IUnknown* pUnkOuter, IN REFIID riid, OUT LPVOID FAR* ppv)
{
	typedef HRESULT(__stdcall* pDllGetClassObject)(IN REFCLSID rclsid, IN REFIID riid, OUT LPVOID FAR* ppv);

	HMODULE hDll = LoadLibrary(szDllName);
	if (!hDll)
		return ERROR_FILE_NOT_FOUND;

	pDllGetClassObject GetClassObject = (pDllGetClassObject)GetProcAddress(hDll, "DllGetClassObject");
	if (!GetClassObject)
	{
		FreeLibrary(hDll);
		return TYPE_E_DLLFUNCTIONNOTFOUND;
	}

	IClassFactory* pIFactory = NULL;
	HRESULT hr = GetClassObject(rclsid, IID_IClassFactory, (LPVOID*)&pIFactory);
	if (FAILED(hr))
		return hr;

	hr = pIFactory->CreateInstance(pUnkOuter, riid, ppv);
	pIFactory->Release();

	return hr;
}

const ServerAgent* COMConnector::ConnectAgent(wchar_t* binPath, wchar_t* server, HRESULT *result)
{
	ServerAgent* serverAgent = NULL;
	IV8COMConnector3* comConnector = NULL;

	if(binPath)
		SetDllDirectory(binPath);

	HRESULT hr = COMConnector::CoCreateInstanceDirect(L"comcntr.dll", CLSID_COMConnector, NULL, IID_IV8COMConnector3, (LPVOID*)&comConnector);
	if (hr == S_OK)
	{
		IServerAgentConnection* serverAgentConnection;

		BSTR serverName = SysAllocString(server);
		if (!serverName)
			throw 0x101;

		if (comConnector->ConnectAgent(serverName, &serverAgentConnection) == S_OK)
		{
			serverAgent = new ServerAgent(serverAgentConnection);
		}

		SysFreeString(serverName);
		comConnector->Release();
	}

	if(binPath)
		SetDllDirectory(NULL);

	if(result)
		*result = hr;

	return serverAgent;
}

ServerAgent::ServerAgent(IServerAgentConnection* serverAgentConnection)
{
	this->serverAgentConnection = serverAgentConnection;

	message = SysAllocString(L"");
	if (!message)
		throw 0x102;
}

ServerAgent::ServerAgent(const ServerAgent& source)
{
	serverAgentConnection = source.serverAgentConnection;
	if(serverAgentConnection)
		serverAgentConnection->AddRef();

	message = SysAllocString(L"");
	if (!message)
		throw 0x103;
}

ServerAgent::~ServerAgent()
{
	if (serverAgentConnection)
	{
		serverAgentConnection->Release();
		serverAgentConnection = NULL;
	}

	SysFreeString(message);
}

ServerAgent& ServerAgent::operator=(const ServerAgent& source)
{
	if (this != &source)
	{
		serverAgentConnection = source.serverAgentConnection;
		if (serverAgentConnection)
			serverAgentConnection->AddRef();

		message = SysAllocString(L"");
		if (!message)
			throw 0x104;
	}

	return *this;
}

int ServerAgent::Authenticate(const Cluster* cluster, wchar_t* login, wchar_t* password) const
{
	int retval = 0;

	BSTR l = SysAllocString(login);
	if (!l)
		throw 0x105;

	BSTR p = SysAllocString(password);
	if (!p)
		throw 0x106;

	if (SUCCEEDED(serverAgentConnection->Authenticate(cluster->clusterInfo, l, p)))
		retval = 1;

	SysFreeString(l);
	SysFreeString(p);

	return retval;
}

std::vector<Cluster*>* ServerAgent::GetClusters() const
{
	std::vector<Cluster*>* v = NULL;
	SAFEARRAY* clustersArray = NULL;

	if (SUCCEEDED(serverAgentConnection->GetClusters(&clustersArray)))
	{
		v = new std::vector<Cluster*>();
		if (!SUCCEEDED(SafeArrayLock(clustersArray)))
		{
			delete v;
			throw 0x201;
		}
		VARIANT* clustersVariants = static_cast<VARIANT*>(clustersArray->pvData);
		for (ULONG i = clustersArray->rgsabound->lLbound; i < clustersArray->rgsabound->cElements; i++)
		{
			IClusterInfo* clusterInfo = static_cast<IClusterInfo*>(clustersVariants[i].pdispVal);
			v->push_back(new Cluster(clusterInfo));
		}
		if (!SUCCEEDED(SafeArrayUnlock(clustersArray)))
		{
			delete v;
			throw 0x301;
		}
	}

	return v;
}

std::vector<Session*> *ServerAgent::GetSessions(const Cluster* cluster) const
{
	std::vector<Session*>* v = NULL;
	SAFEARRAY* sessionsArray = NULL;

	if (SUCCEEDED(serverAgentConnection->GetSessions(cluster->clusterInfo, &sessionsArray)))
	{
		v = new std::vector<Session*>();
		if (!SUCCEEDED(SafeArrayLock(sessionsArray)))
		{
			delete v;
			throw 0x202;
		}
		VARIANT* sessionsVariants = static_cast<VARIANT*>(sessionsArray->pvData);
		for (ULONG i = sessionsArray->rgsabound->lLbound; i < sessionsArray->rgsabound->cElements; i++)
		{
			ISessionInfo* si = static_cast<ISessionInfo*>(sessionsVariants[i].pdispVal);
			v->push_back(new Session(si));
		}
		if (!SUCCEEDED(SafeArrayUnlock(sessionsArray)))
		{
			delete v;
			throw 0x302;
		}
	}

	return v;
}

int ServerAgent::TerminateSession(const Cluster *cluster, Session *session) const
{
	HRESULT hr = 0;
	#ifndef _WIN64
		int kludge = 0;
		__asm
		{
			mov kludge, esp;
		}
	#endif

	hr = serverAgentConnection->TerminateSession(cluster->clusterInfo, session->sessionInfo, message);

	#ifndef _WIN64
		__asm
		{
			mov esp, kludge;
		}
	#endif

	return SUCCEEDED(hr);
}

Cluster::Cluster(IClusterInfo* sourceClusterInfo)
{
	clusterInfo = sourceClusterInfo;

	BSTR str = NULL;

	if (SUCCEEDED(sourceClusterInfo->get_ClusterName(&str)))
		Name = (wchar_t *) str;
	else
		Name = L"";

	SysFreeString(str);
}

Cluster::Cluster(const Cluster& source)
{
	clusterInfo = source.clusterInfo;
	if (clusterInfo)
		clusterInfo->AddRef();

	Name = source.Name;
}

Cluster::~Cluster()
{
	if (clusterInfo)
	{
		clusterInfo->Release();
		clusterInfo = NULL;
	}
}

Cluster& Cluster::operator=(const Cluster& source)
{
	if (this != &source)
	{
		clusterInfo = source.clusterInfo;
		if (clusterInfo)
			clusterInfo->AddRef();

		Name = source.Name;
	}

	return *this;
}



Session::Session(ISessionInfo *sourceSessionInfo)
{
	sessionInfo = sourceSessionInfo;

	int i = 0;
	DATE d;
	SYSTEMTIME t;
	BSTR str = NULL;
	IInfoBaseShort *infoBase = NULL;

	if (SUCCEEDED(sourceSessionInfo->get_SessionID(&i)))
		SessionId = i;

	if (SUCCEEDED(sourceSessionInfo->get_infoBase(&infoBase)))
	{
		if (SUCCEEDED(infoBase->get_Name(&str)))
			Infobase = (wchar_t *) str;
		else
			Infobase = L"";

		infoBase->Release();
	}
	else
		Infobase = L"";

	if (SUCCEEDED(sourceSessionInfo->get_AppID(&str)))
	{
		Application = (wchar_t *)str;
		SysFreeString(str);
	}
	else
		Application = L"";

	if (SUCCEEDED(sourceSessionInfo->get_userName(&str)))
	{
		UserName = (wchar_t *)str;
		SysFreeString(str);
	}
	else
		UserName = L"";

	if (SUCCEEDED(sourceSessionInfo->get_Host(&str)))
	{
		Host = (wchar_t *)str;
		SysFreeString(str);
	}
	else
		Host = L"";

	if (SUCCEEDED(sourceSessionInfo->get_StartedAt(&d)))
		VariantTimeToSystemTime(d, &t);
	else
		memset(&t, 0, sizeof(SYSTEMTIME));
	StartedAt = t;

	if (SUCCEEDED(sourceSessionInfo->get_LastActiveAt(&d)))
		VariantTimeToSystemTime(d, &t);
	else
		memset(&t, 0, sizeof(SYSTEMTIME));
	LastActiveAt = t;
}

Session::Session(const Session& source)
{
	sessionInfo = source.sessionInfo;
	if (sessionInfo)
		sessionInfo->AddRef();

	SessionId = source.SessionId;
	Infobase = source.Infobase;
	Application = source.Application;
	UserName = source.UserName;
	Host = source.Host;
	StartedAt = source.StartedAt;
	LastActiveAt = source.LastActiveAt;
}

Session::~Session()
{
	if (sessionInfo)
	{
		sessionInfo->Release();
		sessionInfo = NULL;
	}
}

Session& Session::operator=(const Session& source)
{
	if (this != &source)
	{
		sessionInfo = source.sessionInfo;
		if (sessionInfo)
			sessionInfo->AddRef();

		SessionId = source.SessionId;
		Infobase = source.Infobase;
		Application = source.Application;
		UserName = source.UserName;
		Host = source.Host;
		StartedAt = source.StartedAt;
		LastActiveAt = source.LastActiveAt;
	}

	return *this;
}
