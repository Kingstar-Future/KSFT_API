/**
* @file kstctptraderapi.cpp
* 金仕达转CTP接口
* @author kevin.shen
*/

#include "kstctptraderapi.h"

// 构造函数
CThostFtdcTraderApi_obj::CThostFtdcTraderApi_obj(KingstarAPI::CThostFtdcTraderApi *pKSapi)
{
	m_pKSapi = pKSapi;
	m_pKSSpi = NULL;
}

// 析构函数
CThostFtdcTraderApi_obj::~CThostFtdcTraderApi_obj()
{
	
}

///删除接口对象本身
void CThostFtdcTraderApi_obj::Release()
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
void CThostFtdcTraderApi_obj::Init()
{
	if (NULL != m_pKSapi)
	{
		m_pKSapi->Init();
	}
}

///等待接口线程结束运行
int CThostFtdcTraderApi_obj::Join()
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
const char *CThostFtdcTraderApi_obj::GetTradingDay()
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->GetTradingDay();
	}
	else
	{
		return NULL;
	}
}

///注册前置机网络地址
void CThostFtdcTraderApi_obj::RegisterFront(char *pszFrontAddress)
{
	if (NULL != m_pKSapi)
	{
		m_pKSapi->RegisterFront(pszFrontAddress);
	}	
}

///注册回调接口
void CThostFtdcTraderApi_obj::RegisterSpi(::CThostFtdcTraderSpi *pSpi)
{
	// 金仕达接口spi指针
	m_pKSSpi = new CThostFtdcTraderSpi_obj(pSpi);  

	if (NULL != m_pKSapi)
	{
		m_pKSapi->RegisterSpi(m_pKSSpi);
	}
}

///订阅私有流。
void CThostFtdcTraderApi_obj::SubscribePrivateTopic(::THOST_TE_RESUME_TYPE nResumeType)
{
	if (NULL != m_pKSapi)
	{
		m_pKSapi->SubscribePrivateTopic((KingstarAPI::THOST_TE_RESUME_TYPE )nResumeType);
	}
}

///订阅公共流。
void CThostFtdcTraderApi_obj::SubscribePublicTopic(::THOST_TE_RESUME_TYPE nResumeType)
{
	if (NULL != m_pKSapi)
	{
		m_pKSapi->SubscribePublicTopic((KingstarAPI::THOST_TE_RESUME_TYPE )nResumeType);
	}
}

///客户端认证请求
int CThostFtdcTraderApi_obj::ReqAuthenticate(::CThostFtdcReqAuthenticateField *pReqAuthenticateField, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqAuthenticate((KingstarAPI::CThostFtdcReqAuthenticateField *)pReqAuthenticateField, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///用户登录请求
int CThostFtdcTraderApi_obj::ReqUserLogin(::CThostFtdcReqUserLoginField *pReqUserLoginField, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqUserLogin((KingstarAPI::CThostFtdcReqUserLoginField *)pReqUserLoginField, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///登出请求
int CThostFtdcTraderApi_obj::ReqUserLogout(::CThostFtdcUserLogoutField *pUserLogout, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqUserLogout((KingstarAPI::CThostFtdcUserLogoutField *)pUserLogout, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///用户口令更新请求
int CThostFtdcTraderApi_obj::ReqUserPasswordUpdate(::CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqUserPasswordUpdate((KingstarAPI::CThostFtdcUserPasswordUpdateField *)pUserPasswordUpdate, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///资金账户口令更新请求
int CThostFtdcTraderApi_obj::ReqTradingAccountPasswordUpdate(::CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
	return m_pKSapi->ReqTradingAccountPasswordUpdate((KingstarAPI::CThostFtdcTradingAccountPasswordUpdateField *)pTradingAccountPasswordUpdate, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///报单录入请求
int CThostFtdcTraderApi_obj::ReqOrderInsert(::CThostFtdcInputOrderField *pInputOrder, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqOrderInsert((KingstarAPI::CThostFtdcInputOrderField *)pInputOrder, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///预埋单录入请求
int CThostFtdcTraderApi_obj::ReqParkedOrderInsert(::CThostFtdcParkedOrderField *pParkedOrder, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqParkedOrderInsert((KingstarAPI::CThostFtdcParkedOrderField *)pParkedOrder, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///预埋撤单录入请求
int CThostFtdcTraderApi_obj::ReqParkedOrderAction(::CThostFtdcParkedOrderActionField *pParkedOrderAction, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqParkedOrderAction((KingstarAPI::CThostFtdcParkedOrderActionField *)pParkedOrderAction, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///报单操作请求
int CThostFtdcTraderApi_obj::ReqOrderAction(::CThostFtdcInputOrderActionField *pInputOrderAction, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqOrderAction((KingstarAPI::CThostFtdcInputOrderActionField *)pInputOrderAction, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///查询最大报单数量请求
int CThostFtdcTraderApi_obj::ReqQueryMaxOrderVolume(::CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQueryMaxOrderVolume((KingstarAPI::CThostFtdcQueryMaxOrderVolumeField *)pQueryMaxOrderVolume, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///投资者结算结果确认
int CThostFtdcTraderApi_obj::ReqSettlementInfoConfirm(::CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqSettlementInfoConfirm((KingstarAPI::CThostFtdcSettlementInfoConfirmField *)pSettlementInfoConfirm, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///请求删除预埋单
int CThostFtdcTraderApi_obj::ReqRemoveParkedOrder(::CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqRemoveParkedOrder((KingstarAPI::CThostFtdcRemoveParkedOrderField *)pRemoveParkedOrder, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///请求删除预埋撤单
int CThostFtdcTraderApi_obj::ReqRemoveParkedOrderAction(::CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqRemoveParkedOrderAction((KingstarAPI::CThostFtdcRemoveParkedOrderActionField *)pRemoveParkedOrderAction, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///请求查询报单
int CThostFtdcTraderApi_obj::ReqQryOrder(::CThostFtdcQryOrderField *pQryOrder, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryOrder((KingstarAPI::CThostFtdcQryOrderField *)pQryOrder, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///请求查询成交
int CThostFtdcTraderApi_obj::ReqQryTrade(::CThostFtdcQryTradeField *pQryTrade, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryTrade((KingstarAPI::CThostFtdcQryTradeField *)pQryTrade, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///请求查询投资者持仓
int CThostFtdcTraderApi_obj::ReqQryInvestorPosition(::CThostFtdcQryInvestorPositionField *pQryInvestorPosition, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryInvestorPosition((KingstarAPI::CThostFtdcQryInvestorPositionField *)pQryInvestorPosition, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///请求查询资金账户
int CThostFtdcTraderApi_obj::ReqQryTradingAccount(::CThostFtdcQryTradingAccountField *pQryTradingAccount, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryTradingAccount((KingstarAPI::CThostFtdcQryTradingAccountField *)pQryTradingAccount, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///请求查询投资者
int CThostFtdcTraderApi_obj::ReqQryInvestor(::CThostFtdcQryInvestorField *pQryInvestor, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryInvestor((KingstarAPI::CThostFtdcQryInvestorField *)pQryInvestor, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}	

///请求查询交易编码
int CThostFtdcTraderApi_obj::ReqQryTradingCode(::CThostFtdcQryTradingCodeField *pQryTradingCode, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryTradingCode((KingstarAPI::CThostFtdcQryTradingCodeField *)pQryTradingCode, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///请求查询合约保证金率
int CThostFtdcTraderApi_obj::ReqQryInstrumentMarginRate(::CThostFtdcQryInstrumentMarginRateField *pQryInstrumentMarginRate, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryInstrumentMarginRate((KingstarAPI::CThostFtdcQryInstrumentMarginRateField *)pQryInstrumentMarginRate, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///请求查询合约手续费率
int CThostFtdcTraderApi_obj::ReqQryInstrumentCommissionRate(::CThostFtdcQryInstrumentCommissionRateField *pQryInstrumentCommissionRate, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryInstrumentCommissionRate((KingstarAPI::CThostFtdcQryInstrumentCommissionRateField *)pQryInstrumentCommissionRate, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///请求查询交易所
int CThostFtdcTraderApi_obj::ReqQryExchange(::CThostFtdcQryExchangeField *pQryExchange, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryExchange((KingstarAPI::CThostFtdcQryExchangeField *)pQryExchange, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///请求查询合约
int CThostFtdcTraderApi_obj::ReqQryInstrument(::CThostFtdcQryInstrumentField *pQryInstrument, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryInstrument((KingstarAPI::CThostFtdcQryInstrumentField *)pQryInstrument, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///请求查询行情
int CThostFtdcTraderApi_obj::ReqQryDepthMarketData(::CThostFtdcQryDepthMarketDataField *pQryDepthMarketData, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryDepthMarketData((KingstarAPI::CThostFtdcQryDepthMarketDataField *)pQryDepthMarketData, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///请求查询投资者结算结果
int CThostFtdcTraderApi_obj::ReqQrySettlementInfo(::CThostFtdcQrySettlementInfoField *pQrySettlementInfo, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQrySettlementInfo((KingstarAPI::CThostFtdcQrySettlementInfoField *)pQrySettlementInfo, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///请求查询转帐银行
int CThostFtdcTraderApi_obj::ReqQryTransferBank(::CThostFtdcQryTransferBankField *pQryTransferBank, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryTransferBank((KingstarAPI::CThostFtdcQryTransferBankField *)pQryTransferBank, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///请求查询投资者持仓明细
int CThostFtdcTraderApi_obj::ReqQryInvestorPositionDetail(::CThostFtdcQryInvestorPositionDetailField *pQryInvestorPositionDetail, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryInvestorPositionDetail((KingstarAPI::CThostFtdcQryInvestorPositionDetailField *)pQryInvestorPositionDetail, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///请求查询客户通知
int CThostFtdcTraderApi_obj::ReqQryNotice(::CThostFtdcQryNoticeField *pQryNotice, int nRequestID)
{	
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryNotice((KingstarAPI::CThostFtdcQryNoticeField *)pQryNotice, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///请求查询结算信息确认
int CThostFtdcTraderApi_obj::ReqQrySettlementInfoConfirm(::CThostFtdcQrySettlementInfoConfirmField *pQrySettlementInfoConfirm, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQrySettlementInfoConfirm((KingstarAPI::CThostFtdcQrySettlementInfoConfirmField *)pQrySettlementInfoConfirm, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///请求查询投资者持仓明细
int CThostFtdcTraderApi_obj::ReqQryInvestorPositionCombineDetail(::CThostFtdcQryInvestorPositionCombineDetailField *pQryInvestorPositionCombineDetail, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryInvestorPositionCombineDetail((KingstarAPI::CThostFtdcQryInvestorPositionCombineDetailField *)pQryInvestorPositionCombineDetail, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///请求查询保证金监管系统经纪公司资金账户密钥
int CThostFtdcTraderApi_obj::ReqQryCFMMCTradingAccountKey(::CThostFtdcQryCFMMCTradingAccountKeyField *pQryCFMMCTradingAccountKey, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryCFMMCTradingAccountKey((KingstarAPI::CThostFtdcQryCFMMCTradingAccountKeyField *)pQryCFMMCTradingAccountKey, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///请求查询仓单折抵信息
int CThostFtdcTraderApi_obj::ReqQryEWarrantOffset(::CThostFtdcQryEWarrantOffsetField *pQryEWarrantOffset, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryEWarrantOffset((KingstarAPI::CThostFtdcQryEWarrantOffsetField *)pQryEWarrantOffset, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///请求查询转帐流水
int CThostFtdcTraderApi_obj::ReqQryTransferSerial(::CThostFtdcQryTransferSerialField *pQryTransferSerial, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryTransferSerial((KingstarAPI::CThostFtdcQryTransferSerialField *)pQryTransferSerial, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///请求查询银期签约关系
int CThostFtdcTraderApi_obj::ReqQryAccountregister(::CThostFtdcQryAccountregisterField *pQryAccountregister, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryAccountregister((KingstarAPI::CThostFtdcQryAccountregisterField *)pQryAccountregister, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///请求查询签约银行
int CThostFtdcTraderApi_obj::ReqQryContractBank(::CThostFtdcQryContractBankField *pQryContractBank, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryContractBank((KingstarAPI::CThostFtdcQryContractBankField *)pQryContractBank, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///请求查询预埋单
int CThostFtdcTraderApi_obj::ReqQryParkedOrder(::CThostFtdcQryParkedOrderField *pQryParkedOrder, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryParkedOrder((KingstarAPI::CThostFtdcQryParkedOrderField *)pQryParkedOrder, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///请求查询预埋撤单
int CThostFtdcTraderApi_obj::ReqQryParkedOrderAction(::CThostFtdcQryParkedOrderActionField *pQryParkedOrderAction, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryParkedOrderAction((KingstarAPI::CThostFtdcQryParkedOrderActionField *)pQryParkedOrderAction, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///请求查询交易通知
int CThostFtdcTraderApi_obj::ReqQryTradingNotice(::CThostFtdcQryTradingNoticeField *pQryTradingNotice, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryTradingNotice((KingstarAPI::CThostFtdcQryTradingNoticeField *)pQryTradingNotice, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///请求查询经纪公司交易参数
int CThostFtdcTraderApi_obj::ReqQryBrokerTradingParams(::CThostFtdcQryBrokerTradingParamsField *pQryBrokerTradingParams, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryBrokerTradingParams((KingstarAPI::CThostFtdcQryBrokerTradingParamsField *)pQryBrokerTradingParams, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///请求查询经纪公司交易算法
int CThostFtdcTraderApi_obj::ReqQryBrokerTradingAlgos(::CThostFtdcQryBrokerTradingAlgosField *pQryBrokerTradingAlgos, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryBrokerTradingAlgos((KingstarAPI::CThostFtdcQryBrokerTradingAlgosField *)pQryBrokerTradingAlgos, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///期货发起银行资金转期货请求
int CThostFtdcTraderApi_obj::ReqFromBankToFutureByFuture(::CThostFtdcReqTransferField *pReqTransfer, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqFromBankToFutureByFuture((KingstarAPI::CThostFtdcReqTransferField *)pReqTransfer, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///期货发起期货资金转银行请求
int CThostFtdcTraderApi_obj::ReqFromFutureToBankByFuture(::CThostFtdcReqTransferField *pReqTransfer, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqFromFutureToBankByFuture((KingstarAPI::CThostFtdcReqTransferField *)pReqTransfer, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///期货发起查询银行余额请求
int CThostFtdcTraderApi_obj::ReqQueryBankAccountMoneyByFuture(::CThostFtdcReqQueryAccountField *pReqQueryAccount, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQueryBankAccountMoneyByFuture((KingstarAPI::CThostFtdcReqQueryAccountField *)pReqQueryAccount, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}
