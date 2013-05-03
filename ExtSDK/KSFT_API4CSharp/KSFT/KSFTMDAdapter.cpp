/////////////////////////////////////////////////////////////////////////
/// 金仕达 KSFT C++ => .Net Framework Adapter
/// Summary: 行情请求接口的托管改造
/// Author:	ksftapi@gmail.com
/// Date: 20130304
/// Update List：
///   20130326 添加注释
/////////////////////////////////////////////////////////////////////////

#include "StdAfx.h"

#include "MdSpi.h"
#include "KSFTMDAdapter.h"
#include <memory.h>

using namespace KingstarAPI;

KSFTMDAdapter::KSFTMDAdapter(void)
{
	m_pApi = CThostFtdcMdApi::CreateFtdcMdApi();
	m_pSpi = new CMdSpi(this);
	m_pApi->RegisterSpi(m_pSpi);
}

KSFTMDAdapter::KSFTMDAdapter(String^ pszFlowPath, bool bIsUsingUdp)
{
	CAutoStrPtr asp(pszFlowPath);
	m_pApi = CThostFtdcMdApi::CreateFtdcMdApi(asp.m_pChar, bIsUsingUdp);
	m_pSpi = new CMdSpi(this);
	m_pApi->RegisterSpi(m_pSpi);
}

KSFTMDAdapter::~KSFTMDAdapter(void)
{
	Release();
}

void KSFTMDAdapter::Release(void)
{
	if(m_pApi)
	{
		m_pApi->RegisterSpi(0);
		m_pApi->Release();
		m_pApi = nullptr;
		delete m_pSpi;
	}
}

void KSFTMDAdapter::RegisterFront(String^  pszFrontAddress)
{
	CAutoStrPtr asp = CAutoStrPtr(pszFrontAddress);
	m_pApi->RegisterFront(asp.m_pChar);
}

void KSFTMDAdapter::RegisterNameServer(String^  pszNameServerAddress)
{
	CAutoStrPtr asp = CAutoStrPtr(pszNameServerAddress);
	m_pApi->RegisterNameServer(asp.m_pChar);
}

void KSFTMDAdapter::Init(void)
{
	m_pApi->Init();
}

void KSFTMDAdapter::Join(void)
{
	m_pApi->Join();
}

String^ KSFTMDAdapter::GetTradingDay()
{
	return gcnew String(m_pApi->GetTradingDay());
}

///<summary>
///登入请求
///</summary>
int KSFTMDAdapter::ReqUserLogin(ThostFtdcReqUserLoginField^ pReqUserLoginField, int nRequestID)
{
	CThostFtdcReqUserLoginField native;
	MNConv<ThostFtdcReqUserLoginField^, CThostFtdcReqUserLoginField>::M2N(pReqUserLoginField, &native);
	return m_pApi->ReqUserLogin(&native, nRequestID);
}

///<summary>
///登出请求
///</summary>
int KSFTMDAdapter::ReqUserLogout(ThostFtdcUserLogoutField^ pUserLogout, int nRequestID)
{
	CThostFtdcUserLogoutField native;
	MNConv<ThostFtdcUserLogoutField^, CThostFtdcUserLogoutField>::M2N(pUserLogout, &native);
	return m_pApi->ReqUserLogout(&native, nRequestID);
}

int KSFTMDAdapter::SubscribeMarketData(array<String^>^ ppInstrumentID)
{
	if(ppInstrumentID == nullptr || ppInstrumentID->Length <= 0)
		return -1;

	int count = ppInstrumentID->Length;
	char** pp = new char*[count];
	CAutoStrPtr** asp = new CAutoStrPtr*[count];
	for(int i=0; i<count; i++)
	{
		CAutoStrPtr* ptr = new CAutoStrPtr(ppInstrumentID[i]);
		asp[i] = ptr;
		pp[i] = ptr->m_pChar;
	}

	int result = m_pApi->SubscribeMarketData(pp, count);
	
	///<summary>
	/// 释放所有分配的字符串内存
	///</summary>
	for(int i=0; i<count; i++)
		delete asp[i];
	delete asp;
	delete pp;

	return result;
}

int KSFTMDAdapter::UnSubscribeMarketData(array<String^>^ ppInstrumentID)
{
	if(ppInstrumentID == nullptr || ppInstrumentID->Length <= 0)
		return -1;

	int count = ppInstrumentID->Length;
	char** pp = new char*[count];
	CAutoStrPtr** asp = new CAutoStrPtr*[count];
	for(int i=0; i<count; i++)
	{
		CAutoStrPtr* ptr = new CAutoStrPtr(ppInstrumentID[i]);
		asp[i] = ptr;
		pp[i] = ptr->m_pChar;
	}

	int result = m_pApi->UnSubscribeMarketData(pp, count);
	
	///<summary>
	/// 释放所分配的字符串内存
	///</summary>
	for(int i=0; i<count; i++)
		delete asp[i];
	delete asp;
	delete pp;

	return result;
}

int KSFTMDAdapter::SetWritablePath(String^ szpath)
{
	CAutoStrPtr asp = CAutoStrPtr(szpath);
	return m_pApi->SetWritablePath(asp.m_pChar);
}
