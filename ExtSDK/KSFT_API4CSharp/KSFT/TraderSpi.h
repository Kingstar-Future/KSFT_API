/////////////////////////////////////////////////////////////////////////
/// 金仕达 KSFT C++ => .Net Framework Adapter
/// Summary: 交易应答接口托管转非托管类
/// Author:	ksftapi@gmail.com
/// Date: 20130304
/// Update List：
///   20130306 添加接口
///   20130326 添加注释 
/////////////////////////////////////////////////////////////////////////

#pragma once

#include "Util.h"
#include "KSFTTraderAdapter.h"
#include <vcclr.h>

using namespace KingstarAPI;

namespace Native
{
	///<summary>
	/// 非托管类
	///</summary>
	public class CTraderSpi : public CThostFtdcTraderSpi
	{
	public:
		CTraderSpi(KSFTTraderAdapter^ pAdapter) {
			m_pAdapter = pAdapter;
		};

		///<summary>
		///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
		///</summary>
		virtual void OnFrontConnected(){
			m_pAdapter->OnFrontConnected();
		};
		
		///<summary>
		///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
		///@param nReason 错误原因
		///        0x1001 网络读失败
		///        0x1002 网络写失败
		///        0x2001 接收心跳超时
		///        0x2002 发送心跳失败
		///        0x2003 收到错误报文
		///</summary>
		virtual void OnFrontDisconnected(int nReason){
			m_pAdapter->OnFrontDisconnected(nReason);
		};
		
		///<summary>
		///心跳超时警告。当长时间未收到报文时，该方法被调用。
		///@param nTimeLapse 距离上次接收报文的时间
		///</summary>
		virtual void OnHeartBeatWarning(int nTimeLapse){
			m_pAdapter->OnHeartBeatWarning(nTimeLapse);
		};
		
		///<summary>
		///客户端认证响应
		///</summary>
		virtual void OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspAuthenticate(MNConv<ThostFtdcRspAuthenticateField^,CThostFtdcRspAuthenticateField>::N2M(pRspAuthenticateField), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///登录请求响应
		///</summary>
		virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {

			m_pAdapter->OnRspUserLogin(MNConv<ThostFtdcRspUserLoginField^,CThostFtdcRspUserLoginField>::N2M(pRspUserLogin), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///登出请求响应
		///</summary>
		virtual void OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspUserLogout(MNConv<ThostFtdcUserLogoutField^,CThostFtdcUserLogoutField>::N2M(pUserLogout), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///用户口令更新请求响应
		///</summary>
		virtual void OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspUserPasswordUpdate(MNConv<ThostFtdcUserPasswordUpdateField^,CThostFtdcUserPasswordUpdateField>::N2M(pUserPasswordUpdate), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///资金账户口令更新请求响应
		///</summary>
		virtual void OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspTradingAccountPasswordUpdate(MNConv<ThostFtdcTradingAccountPasswordUpdateField^,CThostFtdcTradingAccountPasswordUpdateField>::N2M(pTradingAccountPasswordUpdate), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///报单录入请求响应
		///</summary>
		virtual void OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspOrderInsert(MNConv<ThostFtdcInputOrderField^,CThostFtdcInputOrderField>::N2M(pInputOrder), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///预埋单录入请求响应
		///</summary>
		virtual void OnRspParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspParkedOrderInsert(MNConv<ThostFtdcParkedOrderField^,CThostFtdcParkedOrderField>::N2M(pParkedOrder), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///预埋撤单录入请求响应
		///</summary>
		virtual void OnRspParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspParkedOrderAction(MNConv<ThostFtdcParkedOrderActionField^,CThostFtdcParkedOrderActionField>::N2M(pParkedOrderAction), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///报单操作请求响应
		///</summary>
		virtual void OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspOrderAction(MNConv<ThostFtdcInputOrderActionField^,CThostFtdcInputOrderActionField>::N2M(pInputOrderAction), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///查询最大报单数量响应
		///</summary>
		virtual void OnRspQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQueryMaxOrderVolume(MNConv<ThostFtdcQueryMaxOrderVolumeField^,CThostFtdcQueryMaxOrderVolumeField>::N2M(pQueryMaxOrderVolume), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///投资者结算结果确认响应
		///</summary>
		virtual void OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspSettlementInfoConfirm(MNConv<ThostFtdcSettlementInfoConfirmField^,CThostFtdcSettlementInfoConfirmField>::N2M(pSettlementInfoConfirm), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///删除预埋单响应
		///</summary>
		virtual void OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspRemoveParkedOrder(MNConv<ThostFtdcRemoveParkedOrderField^,CThostFtdcRemoveParkedOrderField>::N2M(pRemoveParkedOrder), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///删除预埋撤单响应
		///</summary>
		virtual void OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspRemoveParkedOrderAction(MNConv<ThostFtdcRemoveParkedOrderActionField^,CThostFtdcRemoveParkedOrderActionField>::N2M(pRemoveParkedOrderAction), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///请求查询报单响应
		///</summary>
		virtual void OnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQryOrder(MNConv<ThostFtdcOrderField^,CThostFtdcOrderField>::N2M(pOrder), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///请求查询成交响应
		///</summary>
		virtual void OnRspQryTrade(CThostFtdcTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQryTrade(MNConv<ThostFtdcTradeField^,CThostFtdcTradeField>::N2M(pTrade), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///请求查询投资者持仓响应
		///</summary>
		virtual void OnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQryInvestorPosition(MNConv<ThostFtdcInvestorPositionField^,CThostFtdcInvestorPositionField>::N2M(pInvestorPosition), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///请求查询资金账户响应
		///</summary>
		virtual void OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQryTradingAccount(MNConv<ThostFtdcTradingAccountField^,CThostFtdcTradingAccountField>::N2M(pTradingAccount), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///请求查询投资者响应
		///</summary>
		virtual void OnRspQryInvestor(CThostFtdcInvestorField *pInvestor, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQryInvestor(MNConv<ThostFtdcInvestorField^,CThostFtdcInvestorField>::N2M(pInvestor), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///请求查询交易编码响应
		///</summary>
		virtual void OnRspQryTradingCode(CThostFtdcTradingCodeField *pTradingCode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQryTradingCode(MNConv<ThostFtdcTradingCodeField^,CThostFtdcTradingCodeField>::N2M(pTradingCode), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///请求查询合约保证金率响应
		///</summary>
		virtual void OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQryInstrumentMarginRate(MNConv<ThostFtdcInstrumentMarginRateField^,CThostFtdcInstrumentMarginRateField>::N2M(pInstrumentMarginRate), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///请求查询合约手续费率响应
		///</summary>
		virtual void OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQryInstrumentCommissionRate(MNConv<ThostFtdcInstrumentCommissionRateField^,CThostFtdcInstrumentCommissionRateField>::N2M(pInstrumentCommissionRate), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///请求查询交易所响应
		///</summary>
		virtual void OnRspQryExchange(CThostFtdcExchangeField *pExchange, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQryExchange(MNConv<ThostFtdcExchangeField^,CThostFtdcExchangeField>::N2M(pExchange), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///请求查询合约响应
		///</summary>
		virtual void OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQryInstrument(MNConv<ThostFtdcInstrumentField^,CThostFtdcInstrumentField>::N2M(pInstrument), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///请求查询行情响应
		///</summary>
		virtual void OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQryDepthMarketData(MNConv<ThostFtdcDepthMarketDataField^,CThostFtdcDepthMarketDataField>::N2M(pDepthMarketData), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///请求查询投资者结算结果响应
		///</summary>
		virtual void OnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQrySettlementInfo(MNConv<ThostFtdcSettlementInfoField^,CThostFtdcSettlementInfoField>::N2M(pSettlementInfo), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///请求查询转帐银行响应
		///</summary>
		virtual void OnRspQryTransferBank(CThostFtdcTransferBankField *pTransferBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQryTransferBank(MNConv<ThostFtdcTransferBankField^,CThostFtdcTransferBankField>::N2M(pTransferBank), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///请求查询投资者持仓明细响应
		///</summary>
		virtual void OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQryInvestorPositionDetail(MNConv<ThostFtdcInvestorPositionDetailField^,CThostFtdcInvestorPositionDetailField>::N2M(pInvestorPositionDetail), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///请求查询客户通知响应
		///</summary>
		virtual void OnRspQryNotice(CThostFtdcNoticeField *pNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQryNotice(MNConv<ThostFtdcNoticeField^,CThostFtdcNoticeField>::N2M(pNotice), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///请求查询结算信息确认响应
		///</summary>
		virtual void OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQrySettlementInfoConfirm(MNConv<ThostFtdcSettlementInfoConfirmField^,CThostFtdcSettlementInfoConfirmField>::N2M(pSettlementInfoConfirm), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///请求查询投资者持仓明细响应
		///</summary>
		virtual void OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQryInvestorPositionCombineDetail(MNConv<ThostFtdcInvestorPositionCombineDetailField^,CThostFtdcInvestorPositionCombineDetailField>::N2M(pInvestorPositionCombineDetail), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///查询保证金监管系统经纪公司资金账户密钥响应
		///</summary>
		virtual void OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQryCFMMCTradingAccountKey(MNConv<ThostFtdcCFMMCTradingAccountKeyField^,CThostFtdcCFMMCTradingAccountKeyField>::N2M(pCFMMCTradingAccountKey), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///请求查询仓单折抵信息响应
		///</summary>
		virtual void OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField *pEWarrantOffset, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQryEWarrantOffset(MNConv<ThostFtdcEWarrantOffsetField^,CThostFtdcEWarrantOffsetField>::N2M(pEWarrantOffset), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///请求查询转帐流水响应
		///</summary>
		virtual void OnRspQryTransferSerial(CThostFtdcTransferSerialField *pTransferSerial, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQryTransferSerial(MNConv<ThostFtdcTransferSerialField^,CThostFtdcTransferSerialField>::N2M(pTransferSerial), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///请求查询银期签约关系响应
		///</summary>
		virtual void OnRspQryAccountregister(CThostFtdcAccountregisterField *pAccountregister, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQryAccountregister(MNConv<ThostFtdcAccountregisterField^,CThostFtdcAccountregisterField>::N2M(pAccountregister), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///错误应答
		///</summary>
		virtual void OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspError(RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///报单通知
		///</summary>
		virtual void OnRtnOrder(CThostFtdcOrderField *pOrder) {
			m_pAdapter->OnRtnOrder(MNConv<ThostFtdcOrderField^,CThostFtdcOrderField>::N2M(pOrder));
		};

		///<summary>
		///成交通知
		///</summary>
		virtual void OnRtnTrade(CThostFtdcTradeField *pTrade) {
			m_pAdapter->OnRtnTrade(MNConv<ThostFtdcTradeField^,CThostFtdcTradeField>::N2M(pTrade));
		};

		///<summary>
		///报单录入错误回报
		///</summary>
		virtual void OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo) {
			m_pAdapter->OnErrRtnOrderInsert(MNConv<ThostFtdcInputOrderField^,CThostFtdcInputOrderField>::N2M(pInputOrder), RspInfoField(pRspInfo));
		};

		///<summary>
		///报单操作错误回报
		///</summary>
		virtual void OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo) {
			m_pAdapter->OnErrRtnOrderAction(MNConv<ThostFtdcOrderActionField^,CThostFtdcOrderActionField>::N2M(pOrderAction), RspInfoField(pRspInfo));
		};

		///<summary>
		///合约交易状态通知
		///</summary>
		virtual void OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus) {
			m_pAdapter->OnRtnInstrumentStatus(MNConv<ThostFtdcInstrumentStatusField^,CThostFtdcInstrumentStatusField>::N2M(pInstrumentStatus));
		};

		///<summary>
		///交易通知
		///</summary>
		virtual void OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo) {
			m_pAdapter->OnRtnTradingNotice(MNConv<ThostFtdcTradingNoticeInfoField^,CThostFtdcTradingNoticeInfoField>::N2M(pTradingNoticeInfo));
		};

		///<summary>
		///提示条件单校验错误
		///</summary>
		virtual void OnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder) {
			m_pAdapter->OnRtnErrorConditionalOrder(MNConv<ThostFtdcErrorConditionalOrderField^,CThostFtdcErrorConditionalOrderField>::N2M(pErrorConditionalOrder));
		};

		///<summary>
		///请求查询签约银行响应
		///</summary>
		virtual void OnRspQryContractBank(CThostFtdcContractBankField *pContractBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQryContractBank(MNConv<ThostFtdcContractBankField^,CThostFtdcContractBankField>::N2M(pContractBank), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///请求查询预埋单响应
		///</summary>
		virtual void OnRspQryParkedOrder(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQryParkedOrder(MNConv<ThostFtdcParkedOrderField^,CThostFtdcParkedOrderField>::N2M(pParkedOrder), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///请求查询预埋撤单响应
		///</summary>
		virtual void OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQryParkedOrderAction(MNConv<ThostFtdcParkedOrderActionField^,CThostFtdcParkedOrderActionField>::N2M(pParkedOrderAction), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///请求查询交易通知响应
		///</summary>
		virtual void OnRspQryTradingNotice(CThostFtdcTradingNoticeField *pTradingNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQryTradingNotice(MNConv<ThostFtdcTradingNoticeField^,CThostFtdcTradingNoticeField>::N2M(pTradingNotice), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///请求查询经纪公司交易参数响应
		///</summary>
		virtual void OnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField *pBrokerTradingParams, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQryBrokerTradingParams(MNConv<ThostFtdcBrokerTradingParamsField^,CThostFtdcBrokerTradingParamsField>::N2M(pBrokerTradingParams), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///请求查询经纪公司交易算法响应
		///</summary>
		virtual void OnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQryBrokerTradingAlgos(MNConv<ThostFtdcBrokerTradingAlgosField^,CThostFtdcBrokerTradingAlgosField>::N2M(pBrokerTradingAlgos), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///银行发起银行资金转期货通知
		///</summary>
		virtual void OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField *pRspTransfer) {
			m_pAdapter->OnRtnFromBankToFutureByBank(MNConv<ThostFtdcRspTransferField^,CThostFtdcRspTransferField>::N2M(pRspTransfer));
		};

		///<summary>
		///银行发起期货资金转银行通知
		///</summary>
		virtual void OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField *pRspTransfer) {
			m_pAdapter->OnRtnFromFutureToBankByBank(MNConv<ThostFtdcRspTransferField^,CThostFtdcRspTransferField>::N2M(pRspTransfer));
		};

		///<summary>
		///银行发起冲正银行转期货通知
		///</summary>
		virtual void OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField *pRspRepeal) {
			m_pAdapter->OnRtnRepealFromBankToFutureByBank(MNConv<ThostFtdcRspRepealField^,CThostFtdcRspRepealField>::N2M(pRspRepeal));
		};

		///<summary>
		///银行发起冲正期货转银行通知
		///</summary>
		virtual void OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField *pRspRepeal) {
			m_pAdapter->OnRtnRepealFromFutureToBankByBank(MNConv<ThostFtdcRspRepealField^,CThostFtdcRspRepealField>::N2M(pRspRepeal));
		};

		///<summary>
		///期货发起银行资金转期货通知
		///</summary>
		virtual void OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField *pRspTransfer) {
			m_pAdapter->OnRtnFromBankToFutureByFuture(MNConv<ThostFtdcRspTransferField^,CThostFtdcRspTransferField>::N2M(pRspTransfer));
		};

		///<summary>
		///期货发起期货资金转银行通知
		///</summary>
		virtual void OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField *pRspTransfer) {
			m_pAdapter->OnRtnFromFutureToBankByFuture(MNConv<ThostFtdcRspTransferField^,CThostFtdcRspTransferField>::N2M(pRspTransfer));
		};

		///<summary>
		///系统运行时期货端手工发起冲正银行转期货请求，银行处理完毕后报盘发回的通知
		///</summary>
		virtual void OnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField *pRspRepeal) {
			m_pAdapter->OnRtnRepealFromBankToFutureByFutureManual(MNConv<ThostFtdcRspRepealField^,CThostFtdcRspRepealField>::N2M(pRspRepeal));
		};

		///<summary>
		///系统运行时期货端手工发起冲正期货转银行请求，银行处理完毕后报盘发回的通知
		///</summary>
		virtual void OnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField *pRspRepeal) {
			m_pAdapter->OnRtnRepealFromFutureToBankByFutureManual(MNConv<ThostFtdcRspRepealField^,CThostFtdcRspRepealField>::N2M(pRspRepeal));
		};

		///<summary>
		///期货发起查询银行余额通知
		///</summary>
		virtual void OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount) {
			m_pAdapter->OnRtnQueryBankBalanceByFuture(MNConv<ThostFtdcNotifyQueryAccountField^,CThostFtdcNotifyQueryAccountField>::N2M(pNotifyQueryAccount));
		};

		///<summary>
		///期货发起银行资金转期货错误回报
		///</summary>
		virtual void OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo) {
			m_pAdapter->OnErrRtnBankToFutureByFuture(MNConv<ThostFtdcReqTransferField^,CThostFtdcReqTransferField>::N2M(pReqTransfer), RspInfoField(pRspInfo));
		};

		///<summary>
		///期货发起期货资金转银行错误回报
		///</summary>
		virtual void OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo) {
			m_pAdapter->OnErrRtnFutureToBankByFuture(MNConv<ThostFtdcReqTransferField^,CThostFtdcReqTransferField>::N2M(pReqTransfer), RspInfoField(pRspInfo));
		};

		///<summary>
		///系统运行时期货端手工发起冲正银行转期货错误回报
		///</summary>
		virtual void OnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo) {
			m_pAdapter->OnErrRtnRepealBankToFutureByFutureManual(MNConv<ThostFtdcReqRepealField^,CThostFtdcReqRepealField>::N2M(pReqRepeal), RspInfoField(pRspInfo));
		};

		///<summary>
		///系统运行时期货端手工发起冲正期货转银行错误回报
		///</summary>
		virtual void OnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo) {
			m_pAdapter->OnErrRtnRepealFutureToBankByFutureManual(MNConv<ThostFtdcReqRepealField^,CThostFtdcReqRepealField>::N2M(pReqRepeal), RspInfoField(pRspInfo));
		};

		///<summary>
		///期货发起查询银行余额错误回报
		///</summary>
		virtual void OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo) {
			m_pAdapter->OnErrRtnQueryBankBalanceByFuture(MNConv<ThostFtdcReqQueryAccountField^,CThostFtdcReqQueryAccountField>::N2M(pReqQueryAccount), RspInfoField(pRspInfo));
		};

		///<summary>
		///期货发起冲正银行转期货请求，银行处理完毕后报盘发回的通知
		///</summary>
		virtual void OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField *pRspRepeal) {
			m_pAdapter->OnRtnRepealFromBankToFutureByFuture(MNConv<ThostFtdcRspRepealField^,CThostFtdcRspRepealField>::N2M(pRspRepeal));
		};

		///<summary>
		///期货发起冲正期货转银行请求，银行处理完毕后报盘发回的通知
		///</summary>
		virtual void OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField *pRspRepeal) {
			m_pAdapter->OnRtnRepealFromFutureToBankByFuture(MNConv<ThostFtdcRspRepealField^,CThostFtdcRspRepealField>::N2M(pRspRepeal));
		};

		///<summary>
		///期货发起银行资金转期货应答
		///</summary>
		virtual void OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspFromBankToFutureByFuture(MNConv<ThostFtdcReqTransferField^,CThostFtdcReqTransferField>::N2M(pReqTransfer), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///期货发起期货资金转银行应答
		///</summary>
		virtual void OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspFromFutureToBankByFuture(MNConv<ThostFtdcReqTransferField^,CThostFtdcReqTransferField>::N2M(pReqTransfer), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///期货发起查询银行余额应答
		///</summary>
		virtual void OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
			m_pAdapter->OnRspQueryBankAccountMoneyByFuture(MNConv<ThostFtdcReqQueryAccountField^,CThostFtdcReqQueryAccountField>::N2M(pReqQueryAccount), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///银行发起银期开户通知
		///</summary>
		virtual void OnRtnOpenAccountByBank(CThostFtdcOpenAccountField *pOpenAccount) {
			m_pAdapter->OnRtnOpenAccountByBank(MNConv<ThostFtdcOpenAccountField^,CThostFtdcOpenAccountField>::N2M(pOpenAccount));
		};

		///<summary>
		///银行发起银期销户通知
		///</summary>
		virtual void OnRtnCancelAccountByBank(CThostFtdcCancelAccountField *pCancelAccount) {
			m_pAdapter->OnRtnCancelAccountByBank(MNConv<ThostFtdcCancelAccountField^,CThostFtdcCancelAccountField>::N2M(pCancelAccount));
		};

		///<summary>
		///银行发起变更银行账号通知
		///</summary>
		virtual void OnRtnChangeAccountByBank(CThostFtdcChangeAccountField *pChangeAccount) {
			m_pAdapter->OnRtnChangeAccountByBank(MNConv<ThostFtdcChangeAccountField^,CThostFtdcChangeAccountField>::N2M(pChangeAccount));
		};

		///<summary>
		///查询开盘前的持仓明细应答(20110808)
		///</summary>
		virtual void OnRspQryInvestorOpenPosition(CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
			m_pAdapter->OnRspQryInvestorOpenPosition(MNConv<ThostFtdcInvestorPositionDetailField^,CThostFtdcInvestorPositionDetailField>::N2M(pInvestorPositionDetail), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///查询开盘前的组合持仓明细应答(20110808)
		///</summary>
		virtual void OnRspQryInvestorOpenCombinePosition(CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
			m_pAdapter->OnRspQryInvestorOpenCombinePosition(MNConv<ThostFtdcInvestorPositionCombineDetailField^,CThostFtdcInvestorPositionCombineDetailField>::N2M(pInvestorPositionCombineDetail), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///批量报单撤除请求响应
		///</summary>
        virtual void OnRspBulkCancelOrder(CThostFtdcBulkCancelOrderField *pBulkCancelOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspBulkCancelOrder(MNConv<ThostFtdcBulkCancelOrderField^,CThostFtdcBulkCancelOrderField>::N2M(pBulkCancelOrder), RspInfoField(pRspInfo), nRequestID, bIsLast);
	    };


	private:
		gcroot<KSFTTraderAdapter^> m_pAdapter;
	};

};