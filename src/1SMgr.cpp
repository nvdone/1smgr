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

#define _WIN32_WINNT 0x0502

#include <vector>
#include <locale>
#include <wchar.h>
#include <stdio.h>
#include <windows.h>

#include "COMConnector.h"
#include "..\lib\cmdline.hpp"

#define foreach(type, iter, iterable) for(std::vector<type>::iterator iter = (iterable)->begin(); iter != (iterable)->end(); ++iter)

std::wstring *systemTimeToStr(SYSTEMTIME t)
{
	wchar_t buf[256];
	memset(buf, 0, sizeof(wchar_t) * 256);

	swprintf(buf, 255, L"%04d-%02d-%02d %02d:%02d:%02d", t.wYear, t.wMonth, t.wDay, t.wHour, t.wMinute, t.wSecond);
	return new std::wstring(buf);
}

int act(int kill, const ServerAgent* serverAgent, wchar_t* victimClusterName, wchar_t* login, wchar_t* password, int sessionId)
{
	std::vector<Cluster*>* clusters = serverAgent->GetClusters();
	if (!clusters)
	{
		wprintf(L"ERROR: failed to obtain a list of clusters!\r\n");
		return 0;
	}

	int clusterFound = 0;

	foreach(Cluster*, cluster, clusters)
	{
		const wchar_t *clusterName = (*cluster)->Name.GetPValue()->c_str();

		int terminatedSessionId = 0;
		if (!victimClusterName || !wcscmp(victimClusterName, clusterName))
		{
			clusterFound = 1;

			if (!serverAgent->Authenticate(*cluster, login, password))
				wprintf(L"WARNING: failed to authenticate in the cluster.\r\n");

			std::vector<Session*>* sessions = serverAgent->GetSessions(*cluster);

			if (sessions)
			{
				if (!kill)
				{
					wprintf(L"\r\n%s\r\n", std::wstring(wprintf(L"%s: %d", clusterName, (int)sessions->size()), L'-').c_str());
					wprintf(L"%-7s  %-15.15s  %-15.15s  %-37.37s  %-20.20s  %-19.19s  %-19.19s\r\n", L"Session", L"Infobase", L"Application", L"User", L"Host", L"Started", L"LastActive");
				}
				foreach(Session*, session, sessions)
				{
					if (!kill)
					{
						std::wstring* startedAt = systemTimeToStr((SYSTEMTIME)(*session)->StartedAt);
						std::wstring* lastActiveAt = systemTimeToStr((SYSTEMTIME)(*session)->LastActiveAt);
						wprintf(L"%-7d  %-15.15s  %-15.15s  %-37.37s  %-20.20s  %-19.19s  %-19.19s\r\n", (int)(*session)->SessionId, (*session)->Infobase.GetPValue()->c_str(), (*session)->Application.GetPValue()->c_str(), (*session)->UserName.GetPValue()->c_str(), (*session)->Host.GetPValue()->c_str(), startedAt->c_str(), lastActiveAt->c_str());
						delete lastActiveAt;
						delete startedAt;
					}
					else
					{
						if (!sessionId || sessionId == (int)(*session)->SessionId)
						{
							if (serverAgent->TerminateSession(*cluster, *session))
							{
								terminatedSessionId = sessionId;
								wprintf(L"SUCCESS: terminated session %d.\r\n", (int)(*session)->SessionId);
							}
							else
								wprintf(L"ERROR: failed to terminate session %d!\r\n", (int)(*session)->SessionId);
						}
					}
					delete* session;
				}

				delete sessions;
			}
			else
			{
				wprintf(L"WARNING: failed to obtain session list for cluster %s.\r\n", clusterName);
			}

		}

		if(kill && sessionId && !terminatedSessionId)
			wprintf(L"WARNING: did not find session %d.\r\n", sessionId);

		delete *cluster;
	}

	if (victimClusterName && !clusterFound)
	{
		wprintf(L"ERROR: did not find cluster with a specified name!\r\n");

		delete clusters;
		return 0;
	}

	delete clusters;
	return 1;
}

int main()
{
	#ifndef WATCOM
		setlocale(LC_ALL, "RU_ru");
	#endif

	LPTSTR cmdLine = GetCommandLine();
	CmdLine* cl = new CmdLine(cmdLine);

	int list = cl->HasParam(L"list", 1);
	int kill = cl->HasParam(L"kill", 1);

	if ((!list && !kill) || cl->HasParam(L"-?", 0))
	{
		wprintf(L"NVD 1C Session Manager\r\n(C) 2023, Nikolay Dudkin\r\n\r\nUsage: %s <list | kill [-session:X]> [-path:\"1C installation bin folder path\"] [-server:\"1CServerName:port\"] [-cluster:\"1C cluster name\"] [-login:\"1C cluster admin login\"] [-password:\"1C cluster admin password\"]\r\n", cl->GetCommand(0)->GetName(1));

		delete cl;
		return 1;
	}

	int sessionId = 0;
	if (cl->HasParam(L"-session", 1))
		sessionId = _wtoi(cl->GetOptionValue(L"-session", 1, 0));

	wchar_t* path = cl->GetOptionValue(L"-path", 1, 0);

	wchar_t* server = cl->GetOptionValue(L"-server", 1, 0);
	if (!server)
		server = (wchar_t*)L"localhost:1540";

	wchar_t* victimClusterName = cl->GetOptionValue(L"-cluster", 1, 0);

	wchar_t* login = cl->GetOptionValue(L"-login", 1, 0);
	if (!login)
		login = (wchar_t*)L"";

	wchar_t* password = cl->GetOptionValue(L"-password", 1, 0);
	if (!password)
		password = (wchar_t*)L"";

	HRESULT result;

	try
	{
		const ServerAgent* serverAgent = COMConnector::ConnectAgent(path, server, &result);

		if (!serverAgent)
		{
			switch (result)
			{
			case ERROR_FILE_NOT_FOUND:
				wprintf(L"ERROR: failed to load comcntr.dll!\r\n");
				break;

			case TYPE_E_DLLFUNCTIONNOTFOUND:
				wprintf(L"ERROR: bad comcntr.dll!\r\n");
				break;

			default:
				wprintf(L"ERROR: failed to connect to 1C server!\r\n");
				break;
			}

			delete cl;
			return 2;
		}

		if (list)
		{
			if (!act(0, serverAgent, victimClusterName, login, password, 0))
			{
				delete serverAgent;
				delete cl;
				return 3;
			}
		}

		if (kill)
		{
			if (!act(1, serverAgent, victimClusterName, login, password, sessionId))
			{
				delete serverAgent;
				delete cl;
				return 4;
			}
		}

		delete serverAgent;
	}
	catch (int exception)
	{
		wprintf(L"EXCEPTION: 0x%04x\r\n", exception);
	}

	delete cl;
	return 0;
}
