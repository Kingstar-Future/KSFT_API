// thosttraderapi.cpp : ���� DLL Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "kstctptraderapi.h"

#ifdef _MANAGED
#pragma managed(push, off)
#endif

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call) 
	{
	case DLL_PROCESS_ATTACH:
		break;

	case DLL_THREAD_ATTACH:
		break;

	case DLL_THREAD_DETACH:
		break;

	case DLL_PROCESS_DETACH:
		break;
	}
    return TRUE;
}

///����TraderApi
CThostFtdcTraderApi *CThostFtdcTraderApi::CreateFtdcTraderApi(const char *pszFlowPath, const bool bIsUsingUdp)
{
	// �������˴�ʵ��
	KingstarAPI::CThostFtdcTraderApi *pKSObj = KingstarAPI::CThostFtdcTraderApi::CreateFtdcTraderApi(pszFlowPath, bIsUsingUdp);

	if (NULL == pKSObj)
	{
		throw pKSObj;
	}

	// ����CTPʵ��
	CThostFtdcTraderApi_obj *pCTPObj= new CThostFtdcTraderApi_obj(pKSObj);

	return pCTPObj;
}

#ifdef _MANAGED
#pragma managed(pop)
#endif

