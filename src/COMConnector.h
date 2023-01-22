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

#ifndef _COMConnector_h_
#define _COMConnector_h_

#define _WIN32_WINNT 0x0502

#include <vector>
#include <string>
#include <windows.h>

#include "comcntr.h"

template <typename T> class Property //Caveat emptor
{
	private:
		T *v;

	public:
		Property()
		{
			v = new T();
		}

		Property(T value)
		{
			*this = value;
		}

		Property(const Property<T> &source)
		{
			v = new T(*source.v);
			return *this;
		}

		~Property()
		{
			if(v)
				delete v;
		}

		operator const T&() const
		{
			return *v;
		}

		Property<T>& operator=(const Property<T>& source)
		{
			if (this != &source)
			{
				if (v)
					delete v;
				v = new T(*source.v);
			}

			return *this;
		}

		Property<T>& operator=(T* value)
		{
			if(v)
				delete v;

			v = value;
			return *this;
		}

		Property<T>& operator=(T value)
		{
			if(v)
				delete v;

			v = new T(value);
			return *this;
		}

		const T& GetValue() const
		{
			return *v;
		}

		const T* GetPValue() const
		{
			return v;
		}
};

class ServerAgent;
class Cluster;
class Session;

class COMConnector
{
	private:
		static HRESULT __stdcall CoCreateInstanceDirect(LPCTSTR szDllName, IN REFCLSID rclsid, IUnknown* pUnkOuter, IN REFIID riid, OUT LPVOID FAR* ppv);

	public:
		const static ServerAgent* ConnectAgent(wchar_t* binPath, wchar_t* server, HRESULT *result = NULL);
};

class ServerAgent
{
	private:
		IServerAgentConnection* serverAgentConnection;
		BSTR message;

	public:
		ServerAgent(IServerAgentConnection* serverAgentConnection);
		ServerAgent(const ServerAgent& source);
		~ServerAgent();

		ServerAgent& operator=(const ServerAgent& source);

		int Authenticate(const Cluster *cluster, wchar_t* login, wchar_t* password) const;
		std::vector<Cluster*>* GetClusters() const;
		std::vector<Session *> *GetSessions(const Cluster* cluster) const;
		int TerminateSession(const Cluster *cluster, Session *session) const;
};

class Cluster
{
	private:
		IClusterInfo* clusterInfo;

	public:
		Cluster(IClusterInfo* sourceClusterInfo);
		Cluster(const Cluster& source);
		~Cluster();

		Cluster& operator=(const Cluster& source);

		friend int ServerAgent::Authenticate(const Cluster *cluster, wchar_t* login, wchar_t* password) const;
		friend std::vector<Session*> *ServerAgent::GetSessions(const Cluster* cluster) const;
		friend int ServerAgent::TerminateSession(const Cluster *cluster, Session *session) const;

		Property<std::wstring> Name;
};

class Session
{
	private:
		ISessionInfo* sessionInfo;

	public:
		Session(ISessionInfo* sourceSessionInfo);
		Session(const Session& source);
		~Session();

		Session& operator=(const Session& source);

		friend int ServerAgent::TerminateSession(const Cluster *cluster, Session *session) const;

		Property<int> SessionId;
		Property<std::wstring> Infobase;
		Property<std::wstring> Application;
		Property<std::wstring> UserName;
		Property<std::wstring> Host;
		Property<SYSTEMTIME> StartedAt;
		Property<SYSTEMTIME> LastActiveAt;
};

#endif //_COMConnector_h_
