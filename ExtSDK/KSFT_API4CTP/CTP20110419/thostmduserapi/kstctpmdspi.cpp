/**
* @file kstctpmdspi.cpp
* 金仕达转CTP接口
* @author kevin.shen
*/

#include "kstctpmdspi.h"

// 构造函数
CThostFtdcMdSpi_obj::CThostFtdcMdSpi_obj(::CThostFtdcMdSpi * pCTPSpi)
{
	m_pCTPSpi =pCTPSpi;
}

// 析构函数
CThostFtdcMdSpi_obj::~CThostFtdcMdSpi_obj()
{

}

///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
void CThostFtdcMdSpi_obj::OnFrontConnected()
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnFrontConnected();
	}
}

///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
void CThostFtdcMdSpi_obj::OnFrontDisconnected(int nReason)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnFrontDisconnected(nReason);
	}
}

///心跳超时警告。当长时间未收到报文时，该方法被调用。
void CThostFtdcMdSpi_obj::OnHeartBeatWarning(int nTimeLapse)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnHeartBeatWarning(nTimeLapse);
	}
}

///登录请求响应
void CThostFtdcMdSpi_obj::OnRspUserLogin(KingstarAPI::CThostFtdcRspUserLoginField *pRspUserLogin, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspUserLogin((::CThostFtdcRspUserLoginField *)pRspUserLogin, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///登出请求响应
void CThostFtdcMdSpi_obj::OnRspUserLogout(KingstarAPI::CThostFtdcUserLogoutField *pUserLogout, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspUserLogout((::CThostFtdcUserLogoutField *)pUserLogout, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///错误应答
void CThostFtdcMdSpi_obj::OnRspError(KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspError((::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///订阅行情应答
void CThostFtdcMdSpi_obj::OnRspSubMarketData(KingstarAPI::CThostFtdcSpecificInstrumentField *pSpecificInstrument, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspSubMarketData((::CThostFtdcSpecificInstrumentField *)pSpecificInstrument, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///取消订阅行情应答
void CThostFtdcMdSpi_obj::OnRspUnSubMarketData(KingstarAPI::CThostFtdcSpecificInstrumentField *pSpecificInstrument, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspSubMarketData((::CThostFtdcSpecificInstrumentField *)pSpecificInstrument, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///深度行情通知
void CThostFtdcMdSpi_obj::OnRtnDepthMarketData(KingstarAPI::CThostFtdcDepthMarketDataField *pDepthMarketData)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnDepthMarketData((::CThostFtdcDepthMarketDataField *)pDepthMarketData);
	}
}