/**
* @file kstctpmdapi.cpp
* ���˴�תCTP�ӿ�
* @author kevin.shen
*/

#include "kstctpmdapi.h"

// ���캯��
CThostFtdcMdApi_obj::CThostFtdcMdApi_obj(KingstarAPI::CThostFtdcMdApi *pKSapi)
{
	m_pKSapi =pKSapi;
	m_pKSSpi = NULL;
}

// ��������
CThostFtdcMdApi_obj::~CThostFtdcMdApi_obj()
{

}

///ɾ���ӿڶ�����
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

///��ʼ��
void CThostFtdcMdApi_obj::Init()
{
	if (NULL != m_pKSapi)
	{
		m_pKSapi->Init();
	}
}

///�ȴ��ӿ��߳̽�������
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

///��ȡ��ǰ������
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

///ע��ǰ�û������ַ
void CThostFtdcMdApi_obj::RegisterFront(char *pszFrontAddress)
{
	if(NULL != m_pKSapi)
	{
		m_pKSapi->RegisterFront(pszFrontAddress);
	}
}

///ע��ص��ӿ�
void CThostFtdcMdApi_obj::RegisterSpi(::CThostFtdcMdSpi *pSpi)
{
	 // ���˴�ӿ�spiָ��,����CTP spiָ��
    m_pKSSpi = new CThostFtdcMdSpi_obj(pSpi); 
	
	if (NULL != m_pKSapi)
	{
		m_pKSapi->RegisterSpi(m_pKSSpi);
	}
}

///�������顣
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

///�˶����顣
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

///�û���¼����
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

///�ǳ�����
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
