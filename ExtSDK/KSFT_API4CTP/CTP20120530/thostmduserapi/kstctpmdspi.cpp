/**
* @file kstctpmdspi.cpp
* ���˴�תCTP�ӿ�
* @author kevin.shen
*/

#include "kstctpmdspi.h"

// ���캯��
CThostFtdcMdSpi_obj::CThostFtdcMdSpi_obj(::CThostFtdcMdSpi * pCTPSpi)
{
	m_pCTPSpi =pCTPSpi;
}

// ��������
CThostFtdcMdSpi_obj::~CThostFtdcMdSpi_obj()
{

}

///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
void CThostFtdcMdSpi_obj::OnFrontConnected()
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnFrontConnected();
	}
}

///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
void CThostFtdcMdSpi_obj::OnFrontDisconnected(int nReason)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnFrontDisconnected(nReason);
	}
}

///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
void CThostFtdcMdSpi_obj::OnHeartBeatWarning(int nTimeLapse)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnHeartBeatWarning(nTimeLapse);
	}
}

///��¼������Ӧ
void CThostFtdcMdSpi_obj::OnRspUserLogin(KingstarAPI::CThostFtdcRspUserLoginField *pRspUserLogin, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspUserLogin((::CThostFtdcRspUserLoginField *)pRspUserLogin, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�ǳ�������Ӧ
void CThostFtdcMdSpi_obj::OnRspUserLogout(KingstarAPI::CThostFtdcUserLogoutField *pUserLogout, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspUserLogout((::CThostFtdcUserLogoutField *)pUserLogout, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///����Ӧ��
void CThostFtdcMdSpi_obj::OnRspError(KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspError((::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///��������Ӧ��
void CThostFtdcMdSpi_obj::OnRspSubMarketData(KingstarAPI::CThostFtdcSpecificInstrumentField *pSpecificInstrument, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspSubMarketData((::CThostFtdcSpecificInstrumentField *)pSpecificInstrument, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///ȡ����������Ӧ��
void CThostFtdcMdSpi_obj::OnRspUnSubMarketData(KingstarAPI::CThostFtdcSpecificInstrumentField *pSpecificInstrument, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspSubMarketData((::CThostFtdcSpecificInstrumentField *)pSpecificInstrument, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�������֪ͨ
void CThostFtdcMdSpi_obj::OnRtnDepthMarketData(KingstarAPI::CThostFtdcDepthMarketDataField *pDepthMarketData)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnDepthMarketData((::CThostFtdcDepthMarketDataField *)pDepthMarketData);
	}
}