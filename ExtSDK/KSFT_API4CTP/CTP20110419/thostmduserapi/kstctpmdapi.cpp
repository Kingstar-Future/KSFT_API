/**
* @file kstctpmdapi.cpp
* 金仕达转CTP接口
* @author kevin.shen
*/

#include "kstctpmdapi.h"

// 构造函数
CThostFtdcMdApi_obj::CThostFtdcMdApi_obj(KingstarAPI::CThostFtdcMdApi *pKSapi)
{
	m_pKSapi =pKSapi;
	m_pKSSpi = NULL;
}

// 析构函数
CThostFtdcMdApi_obj::~CThostFtdcMdApi_obj()
{

}

///删除接口对象本身
void CThostFtdcMdApi_obj::Release()
{
	if (NULL != m_pKSapi)
	{
		m_pKSapi->Release();
		m_pKSapi = NULL;
		delete m_pKSSpi;
		m_pKSSpi = NULL;
	}
}

///初始化
void CThostFtdcMdApi_obj::Init()
{
	if (NULL != m_pKSapi)
	{
		m_pKSapi->Init();
	}
}

///等待接口线程结束运行
int CThostFtdcMdApi_obj::Join()
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->Join();
	}
	else
	{
		return PISNULL;
	}
}

///获取当前交易日
const char *CThostFtdcMdApi_obj::GetTradingDay()
{
	if(NULL != m_pKSapi)
	{
		return m_pKSapi->GetTradingDay();
	}
	else
	{
		return NULL;
	}
}

///注册前置机网络地址
void CThostFtdcMdApi_obj::RegisterFront(char *pszFrontAddress)
{
	if(NULL != m_pKSapi)
	{
		m_pKSapi->RegisterFront(pszFrontAddress);
	}
}

///注册回调接口
void CThostFtdcMdApi_obj::RegisterSpi(::CThostFtdcMdSpi *pSpi)
{
	 // 金仕达接口spi指针,传入CTP spi指针
    m_pKSSpi = new CThostFtdcMdSpi_obj(pSpi); 
	
	if (NULL != m_pKSapi)
	{
		m_pKSapi->RegisterSpi(m_pKSSpi);
	}
}

///订阅行情。
int CThostFtdcMdApi_obj::SubscribeMarketData(char *ppInstrumentID[], int nCount)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->SubscribeMarketData(ppInstrumentID, nCount);
	}
	else
	{
		return PISNULL;
	}
}

///退订行情。
int CThostFtdcMdApi_obj::UnSubscribeMarketData(char *ppInstrumentID[], int nCount)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->UnSubscribeMarketData(ppInstrumentID, nCount);
	}
	else
	{
		return PISNULL;
	}
}

///用户登录请求
int CThostFtdcMdApi_obj::ReqUserLogin(::CThostFtdcReqUserLoginField *pReqUserLoginField, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqUserLogin((KingstarAPI::CThostFtdcReqUserLoginField*)pReqUserLoginField, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///登出请求
int CThostFtdcMdApi_obj::ReqUserLogout(::CThostFtdcUserLogoutField *pUserLogout, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqUserLogout((KingstarAPI::CThostFtdcUserLogoutField*)pUserLogout, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}
