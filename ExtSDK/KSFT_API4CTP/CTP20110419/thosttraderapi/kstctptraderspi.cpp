/**
* @file kstctptraderspi.cpp
* 金仕达转CTP接口
* @author kevin.shen
*/

#include "kstctptraderspi.h"

// 构造函数
CThostFtdcTraderSpi_obj::CThostFtdcTraderSpi_obj(::CThostFtdcTraderSpi * pCTPSpi)
{
	m_pCTPSpi = pCTPSpi;
}

// 析构函数
CThostFtdcTraderSpi_obj::~CThostFtdcTraderSpi_obj()
{

}

///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
void CThostFtdcTraderSpi_obj:: OnFrontConnected()
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnFrontConnected();
	}
}

///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
void CThostFtdcTraderSpi_obj:: OnFrontDisconnected(int nReason)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnFrontDisconnected(nReason);
	}
}

///心跳超时警告。当长时间未收到报文时，该方法被调用。
void CThostFtdcTraderSpi_obj:: OnHeartBeatWarning(int nTimeLapse)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnHeartBeatWarning(nTimeLapse);
	}
}

///客户端认证响应
void CThostFtdcTraderSpi_obj:: OnRspAuthenticate(KingstarAPI::CThostFtdcRspAuthenticateField *pRspAuthenticateField, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspAuthenticate((::CThostFtdcRspAuthenticateField *)pRspAuthenticateField, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///登录请求响应
void CThostFtdcTraderSpi_obj:: OnRspUserLogin(KingstarAPI::CThostFtdcRspUserLoginField *pRspUserLogin, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspUserLogin((::CThostFtdcRspUserLoginField *)pRspUserLogin, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///登出请求响应
void CThostFtdcTraderSpi_obj:: OnRspUserLogout(KingstarAPI::CThostFtdcUserLogoutField *pUserLogout, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspUserLogout((::CThostFtdcUserLogoutField *)pUserLogout, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///用户口令更新请求响应
void CThostFtdcTraderSpi_obj:: OnRspUserPasswordUpdate(KingstarAPI::CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspUserPasswordUpdate((::CThostFtdcUserPasswordUpdateField *)pUserPasswordUpdate, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///资金账户口令更新请求响应
void CThostFtdcTraderSpi_obj:: OnRspTradingAccountPasswordUpdate(KingstarAPI::CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspTradingAccountPasswordUpdate((::CThostFtdcTradingAccountPasswordUpdateField *)pTradingAccountPasswordUpdate, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///报单录入请求响应
void CThostFtdcTraderSpi_obj:: OnRspOrderInsert(KingstarAPI::CThostFtdcInputOrderField *pInputOrder, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspOrderInsert((::CThostFtdcInputOrderField *)pInputOrder, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///预埋单录入请求响应
void CThostFtdcTraderSpi_obj:: OnRspParkedOrderInsert(KingstarAPI::CThostFtdcParkedOrderField *pParkedOrder, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspParkedOrderInsert((::CThostFtdcParkedOrderField *)pParkedOrder, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///预埋撤单录入请求响应
void CThostFtdcTraderSpi_obj:: OnRspParkedOrderAction(KingstarAPI::CThostFtdcParkedOrderActionField *pParkedOrderAction, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspParkedOrderAction((::CThostFtdcParkedOrderActionField *)pParkedOrderAction, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///报单操作请求响应
void CThostFtdcTraderSpi_obj:: OnRspOrderAction(KingstarAPI::CThostFtdcInputOrderActionField *pInputOrderAction, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspOrderAction((::CThostFtdcInputOrderActionField *)pInputOrderAction, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///查询最大报单数量响应
void CThostFtdcTraderSpi_obj:: OnRspQueryMaxOrderVolume(KingstarAPI::CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQueryMaxOrderVolume((::CThostFtdcQueryMaxOrderVolumeField *)pQueryMaxOrderVolume, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///投资者结算结果确认响应
void CThostFtdcTraderSpi_obj:: OnRspSettlementInfoConfirm(KingstarAPI::CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspSettlementInfoConfirm((::CThostFtdcSettlementInfoConfirmField *)pSettlementInfoConfirm, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///删除预埋单响应
void CThostFtdcTraderSpi_obj:: OnRspRemoveParkedOrder(KingstarAPI::CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspRemoveParkedOrder((::CThostFtdcRemoveParkedOrderField *)pRemoveParkedOrder, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///删除预埋撤单响应
void CThostFtdcTraderSpi_obj:: OnRspRemoveParkedOrderAction(KingstarAPI::CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspRemoveParkedOrderAction((::CThostFtdcRemoveParkedOrderActionField *)pRemoveParkedOrderAction, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///请求查询报单响应
void CThostFtdcTraderSpi_obj:: OnRspQryOrder(KingstarAPI::CThostFtdcOrderField *pOrder, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryOrder((::CThostFtdcOrderField *)pOrder, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///请求查询成交响应
void CThostFtdcTraderSpi_obj:: OnRspQryTrade(KingstarAPI::CThostFtdcTradeField *pTrade, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryTrade((::CThostFtdcTradeField *)pTrade, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///请求查询投资者持仓响应
void CThostFtdcTraderSpi_obj:: OnRspQryInvestorPosition(KingstarAPI::CThostFtdcInvestorPositionField *pInvestorPosition, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryInvestorPosition((::CThostFtdcInvestorPositionField *)pInvestorPosition, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///请求查询资金账户响应
void CThostFtdcTraderSpi_obj:: OnRspQryTradingAccount(KingstarAPI::CThostFtdcTradingAccountField *pTradingAccount, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryTradingAccount((::CThostFtdcTradingAccountField *)pTradingAccount, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///请求查询投资者响应
void CThostFtdcTraderSpi_obj:: OnRspQryInvestor(KingstarAPI::CThostFtdcInvestorField *pInvestor, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryInvestor((::CThostFtdcInvestorField *)pInvestor, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///请求查询交易编码响应
void CThostFtdcTraderSpi_obj:: OnRspQryTradingCode(KingstarAPI::CThostFtdcTradingCodeField *pTradingCode, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryTradingCode((::CThostFtdcTradingCodeField *)pTradingCode, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///请求查询合约保证金率响应
void CThostFtdcTraderSpi_obj:: OnRspQryInstrumentMarginRate(KingstarAPI::CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryInstrumentMarginRate((::CThostFtdcInstrumentMarginRateField *)pInstrumentMarginRate, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///请求查询合约手续费率响应
void CThostFtdcTraderSpi_obj:: OnRspQryInstrumentCommissionRate(KingstarAPI::CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryInstrumentCommissionRate((::CThostFtdcInstrumentCommissionRateField *)pInstrumentCommissionRate, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///请求查询交易所响应
void CThostFtdcTraderSpi_obj:: OnRspQryExchange(KingstarAPI::CThostFtdcExchangeField *pExchange, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi-> OnRspQryExchange((::CThostFtdcExchangeField *)pExchange, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///请求查询合约响应
void CThostFtdcTraderSpi_obj:: OnRspQryInstrument(KingstarAPI::CThostFtdcInstrumentField *pInstrument, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryInstrument((::CThostFtdcInstrumentField *)pInstrument, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///请求查询行情响应
void CThostFtdcTraderSpi_obj:: OnRspQryDepthMarketData(KingstarAPI::CThostFtdcDepthMarketDataField *pDepthMarketData, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryDepthMarketData((::CThostFtdcDepthMarketDataField *)pDepthMarketData, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///请求查询投资者结算结果响应
void CThostFtdcTraderSpi_obj:: OnRspQrySettlementInfo(KingstarAPI::CThostFtdcSettlementInfoField *pSettlementInfo, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQrySettlementInfo((::CThostFtdcSettlementInfoField *)pSettlementInfo, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///请求查询转帐银行响应
void CThostFtdcTraderSpi_obj:: OnRspQryTransferBank(KingstarAPI::CThostFtdcTransferBankField *pTransferBank, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryTransferBank((::CThostFtdcTransferBankField *)pTransferBank, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///请求查询投资者持仓明细响应
void CThostFtdcTraderSpi_obj:: OnRspQryInvestorPositionDetail(KingstarAPI::CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryInvestorPositionDetail((::CThostFtdcInvestorPositionDetailField *)pInvestorPositionDetail, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///请求查询客户通知响应
void CThostFtdcTraderSpi_obj:: OnRspQryNotice(KingstarAPI::CThostFtdcNoticeField *pNotice, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryNotice((::CThostFtdcNoticeField *)pNotice, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///请求查询结算信息确认响应
void CThostFtdcTraderSpi_obj:: OnRspQrySettlementInfoConfirm(KingstarAPI::CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQrySettlementInfoConfirm((::CThostFtdcSettlementInfoConfirmField *)pSettlementInfoConfirm, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///请求查询投资者持仓明细响应
void CThostFtdcTraderSpi_obj:: OnRspQryInvestorPositionCombineDetail(KingstarAPI::CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryInvestorPositionCombineDetail((::CThostFtdcInvestorPositionCombineDetailField *)pInvestorPositionCombineDetail, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///查询保证金监管系统经纪公司资金账户密钥响应
void CThostFtdcTraderSpi_obj:: OnRspQryCFMMCTradingAccountKey(KingstarAPI::CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryCFMMCTradingAccountKey((::CThostFtdcCFMMCTradingAccountKeyField *)pCFMMCTradingAccountKey, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///请求查询仓单折抵信息响应
void CThostFtdcTraderSpi_obj:: OnRspQryEWarrantOffset(KingstarAPI::CThostFtdcEWarrantOffsetField *pEWarrantOffset, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryEWarrantOffset((::CThostFtdcEWarrantOffsetField *)pEWarrantOffset, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///请求查询转帐流水响应
void CThostFtdcTraderSpi_obj:: OnRspQryTransferSerial(KingstarAPI::CThostFtdcTransferSerialField *pTransferSerial, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryTransferSerial((::CThostFtdcTransferSerialField *)pTransferSerial, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///请求查询银期签约关系响应
void CThostFtdcTraderSpi_obj:: OnRspQryAccountregister(KingstarAPI::CThostFtdcAccountregisterField *pAccountregister, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryAccountregister((::CThostFtdcAccountregisterField *)pAccountregister, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///错误应答
void CThostFtdcTraderSpi_obj:: OnRspError(KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspError((::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///报单通知
void CThostFtdcTraderSpi_obj:: OnRtnOrder(KingstarAPI::CThostFtdcOrderField *pOrder)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnOrder((::CThostFtdcOrderField *)pOrder);
	}
}

///成交通知
void CThostFtdcTraderSpi_obj:: OnRtnTrade(KingstarAPI::CThostFtdcTradeField *pTrade)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnTrade((::CThostFtdcTradeField *)pTrade);
	}
}

///报单录入错误回报
void CThostFtdcTraderSpi_obj:: OnErrRtnOrderInsert(KingstarAPI::CThostFtdcInputOrderField *pInputOrder, KingstarAPI::CThostFtdcRspInfoField *pRspInfo)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnErrRtnOrderInsert((::CThostFtdcInputOrderField *)pInputOrder, (::CThostFtdcRspInfoField *)pRspInfo);
	}
}

///报单操作错误回报
void CThostFtdcTraderSpi_obj:: OnErrRtnOrderAction(KingstarAPI::CThostFtdcOrderActionField *pOrderAction, KingstarAPI::CThostFtdcRspInfoField *pRspInfo)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnErrRtnOrderAction((::CThostFtdcOrderActionField *)pOrderAction, (::CThostFtdcRspInfoField *)pRspInfo);
	}
}

///合约交易状态通知
void CThostFtdcTraderSpi_obj:: OnRtnInstrumentStatus(KingstarAPI::CThostFtdcInstrumentStatusField *pInstrumentStatus)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnInstrumentStatus((::CThostFtdcInstrumentStatusField *)pInstrumentStatus);
	}
}

///交易通知
void CThostFtdcTraderSpi_obj:: OnRtnTradingNotice(KingstarAPI::CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnTradingNotice((::CThostFtdcTradingNoticeInfoField *)pTradingNoticeInfo);
	}
}

///提示条件单校验错误
void CThostFtdcTraderSpi_obj:: OnRtnErrorConditionalOrder(KingstarAPI::CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnErrorConditionalOrder((::CThostFtdcErrorConditionalOrderField *)pErrorConditionalOrder);
	}
}

///请求查询签约银行响应
void CThostFtdcTraderSpi_obj:: OnRspQryContractBank(KingstarAPI::CThostFtdcContractBankField *pContractBank, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryContractBank((::CThostFtdcContractBankField *)pContractBank, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///请求查询预埋单响应
void CThostFtdcTraderSpi_obj:: OnRspQryParkedOrder(KingstarAPI::CThostFtdcParkedOrderField *pParkedOrder, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryParkedOrder((::CThostFtdcParkedOrderField *)pParkedOrder, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///请求查询预埋撤单响应
void CThostFtdcTraderSpi_obj:: OnRspQryParkedOrderAction(KingstarAPI::CThostFtdcParkedOrderActionField *pParkedOrderAction, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryParkedOrderAction((::CThostFtdcParkedOrderActionField *)pParkedOrderAction, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///请求查询交易通知响应
void CThostFtdcTraderSpi_obj:: OnRspQryTradingNotice(KingstarAPI::CThostFtdcTradingNoticeField *pTradingNotice, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryTradingNotice((::CThostFtdcTradingNoticeField *)pTradingNotice, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///请求查询经纪公司交易参数响应
void CThostFtdcTraderSpi_obj:: OnRspQryBrokerTradingParams(KingstarAPI::CThostFtdcBrokerTradingParamsField *pBrokerTradingParams, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryBrokerTradingParams((::CThostFtdcBrokerTradingParamsField *)pBrokerTradingParams, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///请求查询经纪公司交易算法响应
void CThostFtdcTraderSpi_obj:: OnRspQryBrokerTradingAlgos(KingstarAPI::CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryBrokerTradingAlgos((::CThostFtdcBrokerTradingAlgosField *)pBrokerTradingAlgos, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///银行发起银行资金转期货通知
void CThostFtdcTraderSpi_obj:: OnRtnFromBankToFutureByBank(KingstarAPI::CThostFtdcRspTransferField *pRspTransfer)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnFromBankToFutureByBank((::CThostFtdcRspTransferField *)pRspTransfer);
	}
}

///银行发起期货资金转银行通知
void CThostFtdcTraderSpi_obj:: OnRtnFromFutureToBankByBank(KingstarAPI::CThostFtdcRspTransferField *pRspTransfer)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnFromFutureToBankByBank((::CThostFtdcRspTransferField *)pRspTransfer);
	}
}

///银行发起冲正银行转期货通知
void CThostFtdcTraderSpi_obj:: OnRtnRepealFromBankToFutureByBank(KingstarAPI::CThostFtdcRspRepealField *pRspRepeal)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnRepealFromBankToFutureByBank((::CThostFtdcRspRepealField *)pRspRepeal);
	}
}

///银行发起冲正期货转银行通知
void CThostFtdcTraderSpi_obj:: OnRtnRepealFromFutureToBankByBank(KingstarAPI::CThostFtdcRspRepealField *pRspRepeal)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnRepealFromFutureToBankByBank((::CThostFtdcRspRepealField *)pRspRepeal);
	}
}

///期货发起银行资金转期货通知
void CThostFtdcTraderSpi_obj:: OnRtnFromBankToFutureByFuture(KingstarAPI::CThostFtdcRspTransferField *pRspTransfer)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnFromBankToFutureByFuture((::CThostFtdcRspTransferField *)pRspTransfer);
	}
}

///期货发起期货资金转银行通知
void CThostFtdcTraderSpi_obj:: OnRtnFromFutureToBankByFuture(KingstarAPI::CThostFtdcRspTransferField *pRspTransfer)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnFromFutureToBankByFuture((::CThostFtdcRspTransferField *)pRspTransfer);
	}
}

///系统运行时期货端手工发起冲正银行转期货请求，银行处理完毕后报盘发回的通知
void CThostFtdcTraderSpi_obj:: OnRtnRepealFromBankToFutureByFutureManual(KingstarAPI::CThostFtdcRspRepealField *pRspRepeal)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnRepealFromBankToFutureByFutureManual((::CThostFtdcRspRepealField *)pRspRepeal);
	}
}

///系统运行时期货端手工发起冲正期货转银行请求，银行处理完毕后报盘发回的通知
void CThostFtdcTraderSpi_obj:: OnRtnRepealFromFutureToBankByFutureManual(KingstarAPI::CThostFtdcRspRepealField *pRspRepeal)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnRepealFromFutureToBankByFutureManual((::CThostFtdcRspRepealField *)pRspRepeal);
	}
}

///期货发起查询银行余额通知
void CThostFtdcTraderSpi_obj:: OnRtnQueryBankBalanceByFuture(KingstarAPI::CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnQueryBankBalanceByFuture((::CThostFtdcNotifyQueryAccountField *)pNotifyQueryAccount);
	}
}

///期货发起银行资金转期货错误回报
void CThostFtdcTraderSpi_obj:: OnErrRtnBankToFutureByFuture(KingstarAPI::CThostFtdcReqTransferField *pReqTransfer, KingstarAPI::CThostFtdcRspInfoField *pRspInfo)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnErrRtnBankToFutureByFuture((::CThostFtdcReqTransferField *)pReqTransfer, (::CThostFtdcRspInfoField *)pRspInfo);
	}
}

///期货发起期货资金转银行错误回报
void CThostFtdcTraderSpi_obj:: OnErrRtnFutureToBankByFuture(KingstarAPI::CThostFtdcReqTransferField *pReqTransfer, KingstarAPI::CThostFtdcRspInfoField *pRspInfo)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnErrRtnFutureToBankByFuture((::CThostFtdcReqTransferField *)pReqTransfer, (::CThostFtdcRspInfoField *)pRspInfo);
	}
}

///系统运行时期货端手工发起冲正银行转期货错误回报
void CThostFtdcTraderSpi_obj:: OnErrRtnRepealBankToFutureByFutureManual(KingstarAPI::CThostFtdcReqRepealField *pReqRepeal, KingstarAPI::CThostFtdcRspInfoField *pRspInfo)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnErrRtnRepealBankToFutureByFutureManual((::CThostFtdcReqRepealField *)pReqRepeal, (::CThostFtdcRspInfoField *)pRspInfo);
	}
}

///系统运行时期货端手工发起冲正期货转银行错误回报
void CThostFtdcTraderSpi_obj:: OnErrRtnRepealFutureToBankByFutureManual(KingstarAPI::CThostFtdcReqRepealField *pReqRepeal, KingstarAPI::CThostFtdcRspInfoField *pRspInfo)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnErrRtnRepealFutureToBankByFutureManual((::CThostFtdcReqRepealField *)pReqRepeal, (::CThostFtdcRspInfoField *)pRspInfo);
	}
}

///期货发起查询银行余额错误回报
void CThostFtdcTraderSpi_obj:: OnErrRtnQueryBankBalanceByFuture(KingstarAPI::CThostFtdcReqQueryAccountField *pReqQueryAccount, KingstarAPI::CThostFtdcRspInfoField *pRspInfo)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnErrRtnQueryBankBalanceByFuture((::CThostFtdcReqQueryAccountField *)pReqQueryAccount, (::CThostFtdcRspInfoField *)pRspInfo);
	}
}

///期货发起冲正银行转期货请求，银行处理完毕后报盘发回的通知
void CThostFtdcTraderSpi_obj:: OnRtnRepealFromBankToFutureByFuture(KingstarAPI::CThostFtdcRspRepealField *pRspRepeal)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnRepealFromBankToFutureByFuture((::CThostFtdcRspRepealField *)pRspRepeal);
	}
}

///期货发起冲正期货转银行请求，银行处理完毕后报盘发回的通知
void CThostFtdcTraderSpi_obj:: OnRtnRepealFromFutureToBankByFuture(KingstarAPI::CThostFtdcRspRepealField *pRspRepeal)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnRepealFromFutureToBankByFuture((::CThostFtdcRspRepealField *)pRspRepeal);
	}
}

///期货发起银行资金转期货应答
void CThostFtdcTraderSpi_obj:: OnRspFromBankToFutureByFuture(KingstarAPI::CThostFtdcReqTransferField *pReqTransfer, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspFromBankToFutureByFuture((::CThostFtdcReqTransferField *)pReqTransfer, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///期货发起期货资金转银行应答
void CThostFtdcTraderSpi_obj:: OnRspFromFutureToBankByFuture(KingstarAPI::CThostFtdcReqTransferField *pReqTransfer, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspFromFutureToBankByFuture((::CThostFtdcReqTransferField *)pReqTransfer, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///期货发起查询银行余额应答
void CThostFtdcTraderSpi_obj:: OnRspQueryBankAccountMoneyByFuture(KingstarAPI::CThostFtdcReqQueryAccountField *pReqQueryAccount, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQueryBankAccountMoneyByFuture((::CThostFtdcReqQueryAccountField *)pReqQueryAccount, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///银行发起银期开户通知
void CThostFtdcTraderSpi_obj:: OnRtnOpenAccountByBank(KingstarAPI::CThostFtdcOpenAccountField *pOpenAccount)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnOpenAccountByBank((::CThostFtdcOpenAccountField *)pOpenAccount);
	}
}

///银行发起银期销户通知
void CThostFtdcTraderSpi_obj:: OnRtnCancelAccountByBank(KingstarAPI::CThostFtdcCancelAccountField *pCancelAccount)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnCancelAccountByBank((::CThostFtdcCancelAccountField *)pCancelAccount);
	}
}

///银行发起变更银行账号通知
void CThostFtdcTraderSpi_obj:: OnRtnChangeAccountByBank(KingstarAPI::CThostFtdcChangeAccountField *pChangeAccount)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnChangeAccountByBank((::CThostFtdcChangeAccountField *)pChangeAccount);
	}
}