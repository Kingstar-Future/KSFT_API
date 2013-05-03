/////////////////////////////////////////////////////////////////////////
/// 金仕达 KSFT C++ => .Net Framework Adapter
/// Summary: 行情、交易、条件单方法委托
/// Author:	ksftapi@gmail.com
/// Date: 20130304
/// Update List:
///   20130314 添加交易接口的委托
///   20130326 添加注释
/////////////////////////////////////////////////////////////////////////

#pragma once

namespace KSFT
{
	// common deleagats

	///<summary>
	///客户端与交易后台建立起通信连接
	///</summary>
	public delegate void FrontConnected();
	///<summary>
	///客户端与交易后台通信连接断开
	///</summary>
	public delegate void FrontDisconnected(int nReason);
	///<summary>
	///心跳超时警告
	///</summary>
	public delegate void HeartBeatWarning(int nTimeLapse);
	///<summary>
	///登录请求响应
	///</summary>
	public delegate void RspUserLogin(ThostFtdcRspUserLoginField^ pRspUserLogin, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///登出请求响应
	///</summary>
	public delegate void RspUserLogout(ThostFtdcUserLogoutField^ pUserLogout, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///报错应答
	///</summary>
	public delegate void RspError(ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

	// marketdata 

	///<summary>
	///订阅行情应答
	///</summary>
	public delegate void RspSubMarketData(ThostFtdcSpecificInstrumentField^ pSpecificInstrument, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///取消订阅行情应答
	///</summary>
	public delegate void RspUnSubMarketData(ThostFtdcSpecificInstrumentField^ pSpecificInstrument, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///深度行情通知
	///</summary>
	public delegate void RtnDepthMarketData(ThostFtdcDepthMarketDataField^ pDepthMarketData);

	// trader

	///<summary>
	///客户端认证响应
	///</summary>
	public delegate void RspAuthenticate(ThostFtdcRspAuthenticateField^ pRspAuthenticateField, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///用户口令更新请求响应
	///</summary>
	public delegate void RspUserPasswordUpdate(ThostFtdcUserPasswordUpdateField^ pUserPasswordUpdate, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///资金账户口令更新请求响应
	///</summary>
	public delegate void RspTradingAccountPasswordUpdate(ThostFtdcTradingAccountPasswordUpdateField^ pTradingAccountPasswordUpdate, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///报单录入请求响应
	///</summary>
	public delegate void RspOrderInsert(ThostFtdcInputOrderField^ pInputOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///预埋单录入请求响应
	///</summary>
	public delegate void RspParkedOrderInsert(ThostFtdcParkedOrderField^ pParkedOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///预埋撤单录入请求响应
	///</summary>
	public delegate void RspParkedOrderAction(ThostFtdcParkedOrderActionField^ pParkedOrderAction, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///报单操作请求响应
	///</summary>
	public delegate void RspOrderAction(ThostFtdcInputOrderActionField^ pInputOrderAction, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///查询最大报单数量响应
	///</summary>
	public delegate void RspQueryMaxOrderVolume(ThostFtdcQueryMaxOrderVolumeField^ pQueryMaxOrderVolume, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///投资者结算结果确认响应
	///</summary>
	public delegate void RspSettlementInfoConfirm(ThostFtdcSettlementInfoConfirmField^ pSettlementInfoConfirm, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///删除预埋单响应
	///</summary>
	public delegate void RspRemoveParkedOrder(ThostFtdcRemoveParkedOrderField^ pRemoveParkedOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///删除预埋撤单响应
	///</summary>
	public delegate void RspRemoveParkedOrderAction(ThostFtdcRemoveParkedOrderActionField^ pRemoveParkedOrderAction, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///请求查询报单响应
	///</summary>
	public delegate void RspQryOrder(ThostFtdcOrderField^ pOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///请求查询成交响应
	///</summary>
	public delegate void RspQryTrade(ThostFtdcTradeField^ pTrade, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///请求查询投资者持仓响应
	///</summary>
	public delegate void RspQryInvestorPosition(ThostFtdcInvestorPositionField^ pInvestorPosition, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///请求查询资金账户响应
	///</summary>
	public delegate void RspQryTradingAccount(ThostFtdcTradingAccountField^ pTradingAccount, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///请求查询投资者响应
	///</summary>
	public delegate void RspQryInvestor(ThostFtdcInvestorField^ pInvestor, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///请求查询交易编码响应
	///</summary>
	public delegate void RspQryTradingCode(ThostFtdcTradingCodeField^ pTradingCode, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///请求查询合约保证金率响应
	///</summary>
	public delegate void RspQryInstrumentMarginRate(ThostFtdcInstrumentMarginRateField^ pInstrumentMarginRate, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///请求查询合约手续费率响应
	///</summary>
	public delegate void RspQryInstrumentCommissionRate(ThostFtdcInstrumentCommissionRateField^ pInstrumentCommissionRate, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///请求查询交易所响应
	///</summary>
	public delegate void RspQryExchange(ThostFtdcExchangeField^ pExchange, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///请求查询合约响应
	///</summary>
	public delegate void RspQryInstrument(ThostFtdcInstrumentField^ pInstrument, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///请求查询行情响应
	///</summary>
	public delegate void RspQryDepthMarketData(ThostFtdcDepthMarketDataField^ pDepthMarketData, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///请求查询投资者结算结果响应
	///</summary>
	public delegate void RspQrySettlementInfo(ThostFtdcSettlementInfoField^ pSettlementInfo, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///请求查询转帐银行响应
	///</summary>
	public delegate void RspQryTransferBank(ThostFtdcTransferBankField^ pTransferBank, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///请求查询投资者持仓明细响应
	///</summary>
	public delegate void RspQryInvestorPositionDetail(ThostFtdcInvestorPositionDetailField^ pInvestorPositionDetail, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///请求查询客户通知响应
	///</summary>
	public delegate void RspQryNotice(ThostFtdcNoticeField^ pNotice, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///请求查询结算信息确认响应
	///</summary>
	public delegate void RspQrySettlementInfoConfirm(ThostFtdcSettlementInfoConfirmField^ pSettlementInfoConfirm, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///请求查询投资者持仓明细响应
	///</summary>
	public delegate void RspQryInvestorPositionCombineDetail(ThostFtdcInvestorPositionCombineDetailField^ pInvestorPositionCombineDetail, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///查询保证金监管系统经纪公司资金账户密钥响应
	///</summary>
	public delegate void RspQryCFMMCTradingAccountKey(ThostFtdcCFMMCTradingAccountKeyField^ pCFMMCTradingAccountKey, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
    ///请求查询仓单折抵信息响应
	///</summary>
	public delegate void RspQryEWarrantOffset(ThostFtdcEWarrantOffsetField^ pEWarrantOffset, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///请求查询转帐流水响应
	///</summary>
	public delegate void RspQryTransferSerial(ThostFtdcTransferSerialField^ pTransferSerial, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///请求查询银期签约关系响应
	///</summary>
	public delegate void RspQryAccountregister(ThostFtdcAccountregisterField^ pAccountregister, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///报单通知
	///</summary>
	public delegate void RtnOrder(ThostFtdcOrderField^ pOrder);
	///<summary>
	///成交通知
	///</summary>
	public delegate void RtnTrade(ThostFtdcTradeField^ pTrade);
	///<summary>
	///报单录入错误回报
	///</summary>
	public delegate void ErrRtnOrderInsert(ThostFtdcInputOrderField^ pInputOrder, ThostFtdcRspInfoField^ pRspInfo);
	///<summary>
	///报单操作错误回报
	///</summary>
	public delegate void ErrRtnOrderAction(ThostFtdcOrderActionField^ pOrderAction, ThostFtdcRspInfoField^ pRspInfo);
	///<summary>
	///合约交易状态通知
	///</summary>
	public delegate void RtnInstrumentStatus(ThostFtdcInstrumentStatusField^ pInstrumentStatus);
	///<summary>
	///交易通知
	///</summary>
	public delegate void RtnTradingNotice(ThostFtdcTradingNoticeInfoField^ pTradingNoticeInfo);
	///<summary>
	///提示条件单校验错误
	///</summary>
	public delegate void RtnErrorConditionalOrder(ThostFtdcErrorConditionalOrderField^ pErrorConditionalOrder);
	///<summary>
	///请求查询签约银行响应
	///</summary>
	public delegate void RspQryContractBank(ThostFtdcContractBankField^ pContractBank, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///请求查询预埋单响应
	///</summary>
	public delegate void RspQryParkedOrder(ThostFtdcParkedOrderField^ pParkedOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///请求查询预埋撤单响应
	///</summary>
	public delegate void RspQryParkedOrderAction(ThostFtdcParkedOrderActionField^ pParkedOrderAction, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///请求查询交易通知响应
	///</summary>
	public delegate void RspQryTradingNotice(ThostFtdcTradingNoticeField^ pTradingNotice, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///请求查询经纪公司交易参数响应
	///</summary>
	public delegate void RspQryBrokerTradingParams(ThostFtdcBrokerTradingParamsField^ pBrokerTradingParams, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///请求查询经纪公司交易算法响应
	///</summary>
	public delegate void RspQryBrokerTradingAlgos(ThostFtdcBrokerTradingAlgosField^ pBrokerTradingAlgos, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///银行发起银行资金转期货通知
	///</summary>
	public delegate void RtnFromBankToFutureByBank(ThostFtdcRspTransferField^ pRspTransfer);
	///<summary>
	///银行发起期货资金转银行通知
	///</summary>
	public delegate void RtnFromFutureToBankByBank(ThostFtdcRspTransferField^ pRspTransfer);
	///<summary>
	///银行发起冲正银行转期货通知
	///</summary>
	public delegate void RtnRepealFromBankToFutureByBank(ThostFtdcRspRepealField^ pRspRepeal);
	///<summary>
	///银行发起冲正期货转银行通知
	///</summary>
	public delegate void RtnRepealFromFutureToBankByBank(ThostFtdcRspRepealField^ pRspRepeal);
	///<summary>
	///期货发起银行资金转期货通知
	///</summary>
	public delegate void RtnFromBankToFutureByFuture(ThostFtdcRspTransferField^ pRspTransfer);
	///<summary>
	///期货发起期货资金转银行通知
	///</summary>
	public delegate void RtnFromFutureToBankByFuture(ThostFtdcRspTransferField^ pRspTransfer);
	///<summary>
	///系统运行时期货端手工发起冲正银行转期货请求，银行处理完毕后报盘发回的通知
	///</summary>
	public delegate void RtnRepealFromBankToFutureByFutureManual(ThostFtdcRspRepealField^ pRspRepeal);
	///<summary>
	///系统运行时期货端手工发起冲正期货转银行请求，银行处理完毕后报盘发回的通知
	///</summary>
	public delegate void RtnRepealFromFutureToBankByFutureManual(ThostFtdcRspRepealField^ pRspRepeal);
	///<summary>
	///期货发起查询银行余额通知
	///</summary>
	public delegate void RtnQueryBankBalanceByFuture(ThostFtdcNotifyQueryAccountField^ pNotifyQueryAccount);
	///<summary>
	///期货发起银行资金转期货错误回报
	///</summary>
	public delegate void ErrRtnBankToFutureByFuture(ThostFtdcReqTransferField^ pReqTransfer, ThostFtdcRspInfoField^ pRspInfo);
	///<summary>
	///期货发起期货资金转银行错误回报
	///</summary>
	public delegate void ErrRtnFutureToBankByFuture(ThostFtdcReqTransferField^ pReqTransfer, ThostFtdcRspInfoField^ pRspInfo);
	///<summary>
	///系统运行时期货端手工发起冲正银行转期货错误回报
	///</summary>
	public delegate void ErrRtnRepealBankToFutureByFutureManual(ThostFtdcReqRepealField^ pReqRepeal, ThostFtdcRspInfoField^ pRspInfo);
	///<summary>
	///系统运行时期货端手工发起冲正期货转银行错误回报
	///</summary>
	public delegate void ErrRtnRepealFutureToBankByFutureManual(ThostFtdcReqRepealField^ pReqRepeal, ThostFtdcRspInfoField^ pRspInfo);
	///<summary>
	///期货发起查询银行余额错误回报
	///</summary>
	public delegate void ErrRtnQueryBankBalanceByFuture(ThostFtdcReqQueryAccountField^ pReqQueryAccount, ThostFtdcRspInfoField^ pRspInfo);
	///<summary>
	///期货发起冲正银行转期货请求，银行处理完毕后报盘发回的通知
	///</summary>
	public delegate void RtnRepealFromBankToFutureByFuture(ThostFtdcRspRepealField^ pRspRepeal);
	///<summary>
	///期货发起冲正期货转银行请求，银行处理完毕后报盘发回的通知
	///</summary>
	public delegate void RtnRepealFromFutureToBankByFuture(ThostFtdcRspRepealField^ pRspRepeal);
	///<summary>
	///期货发起银行资金转期货应答
	///</summary>
	public delegate void RspFromBankToFutureByFuture(ThostFtdcReqTransferField^ pReqTransfer, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///期货发起期货资金转银行应答
	///</summary>
	public delegate void RspFromFutureToBankByFuture(ThostFtdcReqTransferField^ pReqTransfer, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///期货发起查询银行余额应答
	///</summary>
	public delegate void RspQueryBankAccountMoneyByFuture(ThostFtdcReqQueryAccountField^ pReqQueryAccount, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///银行发起银期开户通知
	///</summary>
	public delegate void RtnOpenAccountByBank(ThostFtdcOpenAccountField^ pOpenAccount);
	///<summary>
	///银行发起银期销户通知
	///</summary>
	public delegate void RtnCancelAccountByBank(ThostFtdcCancelAccountField^ pCancelAccount);
	///<summary>
	///银行发起变更银行账号通知
	///</summary>
	public delegate void RtnChangeAccountByBank(ThostFtdcChangeAccountField^ pChangeAccount);
	///<summary>
	///查询开盘前的持仓明细应答(20110808)
	///</summary>
	public delegate void RspQryInvestorOpenPosition(ThostFtdcInvestorPositionDetailField^ pInvestorPositionDetail, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///查询开盘前的组合持仓明细应答(20110808)
	///</summary>
	public delegate void RspQryInvestorOpenCombinePosition(ThostFtdcInvestorPositionCombineDetailField^ pInvestorPositionCombineDetail, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///批量报单撤除请求响应
	///</summary>
	public delegate void RspBulkCancelOrder(ThostFtdcBulkCancelOrderField^ pBulkCancelOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);


	//Conditionalorderserver delegates

	///<summary>
	///条件单录入响应
	///</summary>
	public delegate void RspInitInsertConditionalOrder(TKSConditionalOrderOperResultField^ pInitInsertConditionalOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///条件单查询响应
	///</summary>
	public delegate void RspQueryConditionalOrder(TKSConditionalOrderOperResultField^ pQueryConditionalOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///条件单修改响应
	///</summary>
	public delegate void RspModifyConditionalOrder(TKSConditionalOrderOperResultField^ pModifyConditionalOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///条件单暂停激活响应
	///</summary>
	public delegate void RspPauseConditionalOrder(TKSConditionalOrderOperResultField^ pPauseConditionalOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///条件单删除响应
	///</summary>
	public delegate void RspRemoveConditionalOrder(TKSConditionalOrderRspResultField^ pRemoveConditionalOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///条件单选择响应
	///</summary>
	public delegate void RspSelectConditionalOrder(TKSConditionalOrderRspResultField^ pSelectConditionalOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///止损止盈单录入响应
	///</summary>
	public delegate void RspInsertProfitAndLossOrder(TKSProfitAndLossOrderOperResultField^ pInsertProfitAndLossOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///止损止盈单修改响应
	///</summary>
	public delegate void RspModifyProfitAndLossOrder(TKSProfitAndLossOrderOperResultField^ pModifyProfitAndLossOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///止损止盈单删除响应
	///</summary>
	public delegate void RspRemoveProfitAndLossOrder(TKSProfitAndLossOrderRemoveField^ pRemoveProfitAndLossOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///止损止盈单查询响应
	///</summary>
	public delegate void RspQueryProfitAndLossOrder(TKSProfitAndLossOrderOperResultField^ pQueryProfitAndLossOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///条件单请求选择通知
	///</summary>
	public delegate void RtnCOSAskSelect(TKSCOSAskSelectField^ pCOSAskSelect);
	///<summary>
	///条件单状态通知
	///</summary>
	public delegate void RtnCOSStatus(TKSCOSStatusField^ pCOSStatus);
	///<summary>
	///止损止盈单状态通知
	///</summary>
	public delegate void RtnPLStatus(TKSPLStatusField^ pPLStatus);
}