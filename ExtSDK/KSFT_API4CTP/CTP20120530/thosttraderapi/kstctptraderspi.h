/**
* @file kstctptraderspi.h
* 金仕达转CTP回调接口
* @author kevin.shen
*/

#ifndef KSTCTPTRADERSPI_H
#define  KSTCTPTRADERSPI_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// include CTP api头文件前，设为export方式
#define ISLIB
#define LIB_TRADER_API_EXPORT
#include <stdlib.h>
#include "../CTP/ThostFtdcTraderApi.h"
#include "../KSFT_API/KSTradeAPI.h"
#pragma comment(lib, "../KSFT_API/KSTradeAPI.lib")
#pragma message("Automatically linking with KSTradeAPI.lib")

// 指针空处理
const int PISNULL = -1;

class CThostFtdcTraderSpi_obj : public KingstarAPI::CThostFtdcTraderSpi
{
public:
	// 构造函数
	CThostFtdcTraderSpi_obj(::CThostFtdcTraderSpi * pCTPSpi);

	///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
	virtual void OnFrontConnected();

	///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
	virtual void OnFrontDisconnected(int nReason);

	///心跳超时警告。当长时间未收到报文时，该方法被调用。
	virtual void OnHeartBeatWarning(int nTimeLapse);

	///客户端认证响应
	virtual void OnRspAuthenticate(KingstarAPI::CThostFtdcRspAuthenticateField *pRspAuthenticateField, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///登录请求响应
	virtual void OnRspUserLogin(KingstarAPI::CThostFtdcRspUserLoginField *pRspUserLogin, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///登出请求响应
	virtual void OnRspUserLogout(KingstarAPI::CThostFtdcUserLogoutField *pUserLogout, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///用户口令更新请求响应
	virtual void OnRspUserPasswordUpdate(KingstarAPI::CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///资金账户口令更新请求响应
	virtual void OnRspTradingAccountPasswordUpdate(KingstarAPI::CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///报单录入请求响应
	virtual void OnRspOrderInsert(KingstarAPI::CThostFtdcInputOrderField *pInputOrder, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///预埋单录入请求响应
	virtual void OnRspParkedOrderInsert(KingstarAPI::CThostFtdcParkedOrderField *pParkedOrder, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///预埋撤单录入请求响应
	virtual void OnRspParkedOrderAction(KingstarAPI::CThostFtdcParkedOrderActionField *pParkedOrderAction, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///报单操作请求响应
	virtual void OnRspOrderAction(KingstarAPI::CThostFtdcInputOrderActionField *pInputOrderAction, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///查询最大报单数量响应
	virtual void OnRspQueryMaxOrderVolume(KingstarAPI::CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///投资者结算结果确认响应
	virtual void OnRspSettlementInfoConfirm(KingstarAPI::CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///删除预埋单响应
	virtual void OnRspRemoveParkedOrder(KingstarAPI::CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///删除预埋撤单响应
	virtual void OnRspRemoveParkedOrderAction(KingstarAPI::CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询报单响应
	virtual void OnRspQryOrder(KingstarAPI::CThostFtdcOrderField *pOrder, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询成交响应
	virtual void OnRspQryTrade(KingstarAPI::CThostFtdcTradeField *pTrade, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询投资者持仓响应
	virtual void OnRspQryInvestorPosition(KingstarAPI::CThostFtdcInvestorPositionField *pInvestorPosition, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询资金账户响应
	virtual void OnRspQryTradingAccount(KingstarAPI::CThostFtdcTradingAccountField *pTradingAccount, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询投资者响应
	virtual void OnRspQryInvestor(KingstarAPI::CThostFtdcInvestorField *pInvestor, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询交易编码响应
	virtual void OnRspQryTradingCode(KingstarAPI::CThostFtdcTradingCodeField *pTradingCode, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询合约保证金率响应
	virtual void OnRspQryInstrumentMarginRate(KingstarAPI::CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询合约手续费率响应
	virtual void OnRspQryInstrumentCommissionRate(KingstarAPI::CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询交易所响应
	virtual void OnRspQryExchange(KingstarAPI::CThostFtdcExchangeField *pExchange, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询合约响应
	virtual void OnRspQryInstrument(KingstarAPI::CThostFtdcInstrumentField *pInstrument, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询行情响应
	virtual void OnRspQryDepthMarketData(KingstarAPI::CThostFtdcDepthMarketDataField *pDepthMarketData, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询投资者结算结果响应
	virtual void OnRspQrySettlementInfo(KingstarAPI::CThostFtdcSettlementInfoField *pSettlementInfo, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询转帐银行响应
	virtual void OnRspQryTransferBank(KingstarAPI::CThostFtdcTransferBankField *pTransferBank, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询投资者持仓明细响应
	virtual void OnRspQryInvestorPositionDetail(KingstarAPI::CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询客户通知响应
	virtual void OnRspQryNotice(KingstarAPI::CThostFtdcNoticeField *pNotice, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询结算信息确认响应
	virtual void OnRspQrySettlementInfoConfirm(KingstarAPI::CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询投资者持仓明细响应
	virtual void OnRspQryInvestorPositionCombineDetail(KingstarAPI::CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///查询保证金监管系统经纪公司资金账户密钥响应
	virtual void OnRspQryCFMMCTradingAccountKey(KingstarAPI::CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询仓单折抵信息响应
	virtual void OnRspQryEWarrantOffset(KingstarAPI::CThostFtdcEWarrantOffsetField *pEWarrantOffset, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询转帐流水响应
	virtual void OnRspQryTransferSerial(KingstarAPI::CThostFtdcTransferSerialField *pTransferSerial, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询银期签约关系响应
	virtual void OnRspQryAccountregister(KingstarAPI::CThostFtdcAccountregisterField *pAccountregister, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///错误应答
	virtual void OnRspError(KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///报单通知
	virtual void OnRtnOrder(KingstarAPI::CThostFtdcOrderField *pOrder);

	///成交通知
	virtual void OnRtnTrade(KingstarAPI::CThostFtdcTradeField *pTrade);

	///报单录入错误回报
	virtual void OnErrRtnOrderInsert(KingstarAPI::CThostFtdcInputOrderField *pInputOrder, KingstarAPI::CThostFtdcRspInfoField *pRspInfo);

	///报单操作错误回报
	virtual void OnErrRtnOrderAction(KingstarAPI::CThostFtdcOrderActionField *pOrderAction, KingstarAPI::CThostFtdcRspInfoField *pRspInfo);

	///合约交易状态通知
	virtual void OnRtnInstrumentStatus(KingstarAPI::CThostFtdcInstrumentStatusField *pInstrumentStatus);

	///交易通知
	virtual void OnRtnTradingNotice(KingstarAPI::CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo);

	///提示条件单校验错误
	virtual void OnRtnErrorConditionalOrder(KingstarAPI::CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder);

	///请求查询签约银行响应
	virtual void OnRspQryContractBank(KingstarAPI::CThostFtdcContractBankField *pContractBank, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询预埋单响应
	virtual void OnRspQryParkedOrder(KingstarAPI::CThostFtdcParkedOrderField *pParkedOrder, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询预埋撤单响应
	virtual void OnRspQryParkedOrderAction(KingstarAPI::CThostFtdcParkedOrderActionField *pParkedOrderAction, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询交易通知响应
	virtual void OnRspQryTradingNotice(KingstarAPI::CThostFtdcTradingNoticeField *pTradingNotice, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询经纪公司交易参数响应
	virtual void OnRspQryBrokerTradingParams(KingstarAPI::CThostFtdcBrokerTradingParamsField *pBrokerTradingParams, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询经纪公司交易算法响应
	virtual void OnRspQryBrokerTradingAlgos(KingstarAPI::CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///银行发起银行资金转期货通知
	virtual void OnRtnFromBankToFutureByBank(KingstarAPI::CThostFtdcRspTransferField *pRspTransfer);

	///银行发起期货资金转银行通知
	virtual void OnRtnFromFutureToBankByBank(KingstarAPI::CThostFtdcRspTransferField *pRspTransfer);

	///银行发起冲正银行转期货通知
	virtual void OnRtnRepealFromBankToFutureByBank(KingstarAPI::CThostFtdcRspRepealField *pRspRepeal);

	///银行发起冲正期货转银行通知
	virtual void OnRtnRepealFromFutureToBankByBank(KingstarAPI::CThostFtdcRspRepealField *pRspRepeal);

	///期货发起银行资金转期货通知
	virtual void OnRtnFromBankToFutureByFuture(KingstarAPI::CThostFtdcRspTransferField *pRspTransfer);

	///期货发起期货资金转银行通知
	virtual void OnRtnFromFutureToBankByFuture(KingstarAPI::CThostFtdcRspTransferField *pRspTransfer);

	///系统运行时期货端手工发起冲正银行转期货请求，银行处理完毕后报盘发回的通知
	virtual void OnRtnRepealFromBankToFutureByFutureManual(KingstarAPI::CThostFtdcRspRepealField *pRspRepeal);

	///系统运行时期货端手工发起冲正期货转银行请求，银行处理完毕后报盘发回的通知
	virtual void OnRtnRepealFromFutureToBankByFutureManual(KingstarAPI::CThostFtdcRspRepealField *pRspRepeal);

	///期货发起查询银行余额通知
	virtual void OnRtnQueryBankBalanceByFuture(KingstarAPI::CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount);

	///期货发起银行资金转期货错误回报
	virtual void OnErrRtnBankToFutureByFuture(KingstarAPI::CThostFtdcReqTransferField *pReqTransfer, KingstarAPI::CThostFtdcRspInfoField *pRspInfo);

	///期货发起期货资金转银行错误回报
	virtual void OnErrRtnFutureToBankByFuture(KingstarAPI::CThostFtdcReqTransferField *pReqTransfer, KingstarAPI::CThostFtdcRspInfoField *pRspInfo);

	///系统运行时期货端手工发起冲正银行转期货错误回报
	virtual void OnErrRtnRepealBankToFutureByFutureManual(KingstarAPI::CThostFtdcReqRepealField *pReqRepeal, KingstarAPI::CThostFtdcRspInfoField *pRspInfo);

	///系统运行时期货端手工发起冲正期货转银行错误回报
	virtual void OnErrRtnRepealFutureToBankByFutureManual(KingstarAPI::CThostFtdcReqRepealField *pReqRepeal, KingstarAPI::CThostFtdcRspInfoField *pRspInfo);

	///期货发起查询银行余额错误回报
	virtual void OnErrRtnQueryBankBalanceByFuture(KingstarAPI::CThostFtdcReqQueryAccountField *pReqQueryAccount, KingstarAPI::CThostFtdcRspInfoField *pRspInfo);

	///期货发起冲正银行转期货请求，银行处理完毕后报盘发回的通知
	virtual void OnRtnRepealFromBankToFutureByFuture(KingstarAPI::CThostFtdcRspRepealField *pRspRepeal);

	///期货发起冲正期货转银行请求，银行处理完毕后报盘发回的通知
	virtual void OnRtnRepealFromFutureToBankByFuture(KingstarAPI::CThostFtdcRspRepealField *pRspRepeal);

	///期货发起银行资金转期货应答
	virtual void OnRspFromBankToFutureByFuture(KingstarAPI::CThostFtdcReqTransferField *pReqTransfer, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///期货发起期货资金转银行应答
	virtual void OnRspFromFutureToBankByFuture(KingstarAPI::CThostFtdcReqTransferField *pReqTransfer, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///期货发起查询银行余额应答
	virtual void OnRspQueryBankAccountMoneyByFuture(KingstarAPI::CThostFtdcReqQueryAccountField *pReqQueryAccount, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///银行发起银期开户通知
	virtual void OnRtnOpenAccountByBank(KingstarAPI::CThostFtdcOpenAccountField *pOpenAccount);

	///银行发起银期销户通知
	virtual void OnRtnCancelAccountByBank(KingstarAPI::CThostFtdcCancelAccountField *pCancelAccount);

	///银行发起变更银行账号通知
	virtual void OnRtnChangeAccountByBank(KingstarAPI::CThostFtdcChangeAccountField *pChangeAccount);

public:
	// 析构函数
	~CThostFtdcTraderSpi_obj();

private:
	::CThostFtdcTraderSpi * m_pCTPSpi;			                 // CTP回调接口类对象指针
};

#endif 