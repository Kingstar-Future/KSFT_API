// thostmduserapi.cpp : 定义 DLL 应用程序的入口点。
//

#include "stdafx.h"
#include "kstctpmdapi.h"

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

///创建MdApi
CThostFtdcMdApi * CThostFtdcMdApi::CreateFtdcMdApi(const char *pszFlowPath, const bool bIsUsingUdp)
{
	// 创建金仕达实例
	KingstarAPI::CThostFtdcMdApi *pKSObj = KingstarAPI::CThostFtdcMdApi::CreateFtdcMdApi(pszFlowPath, bIsUsingUdp);

	if (NULL == pKSObj)
	{
		throw pKSObj;
	}

	// 创建CTP实例
	CThostFtdcMdApi_obj *pCTPObj=new CThostFtdcMdApi_obj(pKSObj);

	return pCTPObj;
}

#ifdef _MANAGED
#pragma managed(pop)
#endif

