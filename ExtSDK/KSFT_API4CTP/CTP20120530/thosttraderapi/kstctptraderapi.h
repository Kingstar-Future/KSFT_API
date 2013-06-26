/**
* @file kstctptraderapi.h
* 金仕达转CTP请求接口
* @author kevin.shen
*/

#ifndef KSTCTPTRADERAPI_H
#define  KSTCTPTRADERAPI_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "kstctptraderspi.h"

// Api接口实体类
class CThostFtdcTraderApi_obj:public CThostFtdcTraderApi
{
public:
	// 构造函数
	CThostFtdcTraderApi_obj(KingstarAPI::CThostFtdcTraderApi *pKSapi);

	///删除接口对象本身
	virtual void Release();

	///初始化
	virtual void Init();

	///等待接口线程结束运行
	virtual int Join();

	///获取当前交易日
	virtual const char *GetTradingDay();

	///注册前置机网络地址
	virtual void RegisterFront(char *pszFrontAddress);

	///注册名字服务器网络地址
	virtual void RegisterNameServer(char *pszNsAddress);

	///注册回调接口
	virtual void RegisterSpi(::CThostFtdcTraderSpi *pSpi);

	///订阅私有流。
	virtual void SubscribePrivateTopic(::THOST_TE_RESUME_TYPE nResumeType);

	///订阅公共流。
	virtual void SubscribePublicTopic(::THOST_TE_RESUME_TYPE nResumeType);

	///客户端认证请求
	virtual int ReqAuthenticate(::CThostFtdcReqAuthenticateField *pReqAuthenticateField, int nRequestID);

	///用户登录请求
	virtual int ReqUserLogin(::CThostFtdcReqUserLoginField *pReqUserLoginField, int nRequestID);

	///登出请求
	virtual int ReqUserLogout(::CThostFtdcUserLogoutField *pUserLogout, int nRequestID);

	///用户口令更新请求
	virtual int ReqUserPasswordUpdate(::CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, int nRequestID);

	///资金账户口令更新请求
	virtual int ReqTradingAccountPasswordUpdate(::CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, int nRequestID);

	///报单录入请求
	virtual int ReqOrderInsert(::CThostFtdcInputOrderField *pInputOrder, int nRequestID);

	///预埋单录入请求
	virtual int ReqParkedOrderInsert(::CThostFtdcParkedOrderField *pParkedOrder, int nRequestID);

	///预埋撤单录入请求
	virtual int ReqParkedOrderAction(::CThostFtdcParkedOrderActionField *pParkedOrderAction, int nRequestID);

	///报单操作请求
	virtual int ReqOrderAction(::CThostFtdcInputOrderActionField *pInputOrderAction, int nRequestID);

	///查询最大报单数量请求
	virtual int ReqQueryMaxOrderVolume(::CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, int nRequestID);

	///投资者结算结果确认
	virtual int ReqSettlementInfoConfirm(::CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, int nRequestID);

	///请求删除预埋单
	virtual int ReqRemoveParkedOrder(::CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, int nRequestID);

	///请求删除预埋撤单
	virtual int ReqRemoveParkedOrderAction(::CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, int nRequestID);

	///请求查询报单
	virtual int ReqQryOrder(::CThostFtdcQryOrderField *pQryOrder, int nRequestID);

	///请求查询成交
	virtual int ReqQryTrade(::CThostFtdcQryTradeField *pQryTrade, int nRequestID);

	///请求查询投资者持仓
	virtual int ReqQryInvestorPosition(::CThostFtdcQryInvestorPositionField *pQryInvestorPosition, int nRequestID);

	///请求查询资金账户
	virtual int ReqQryTradingAccount(::CThostFtdcQryTradingAccountField *pQryTradingAccount, int nRequestID);

	///请求查询投资者
	virtual int ReqQryInvestor(::CThostFtdcQryInvestorField *pQryInvestor, int nRequestID);

	///请求查询交易编码
	virtual int ReqQryTradingCode(::CThostFtdcQryTradingCodeField *pQryTradingCode, int nRequestID);

	///请求查询合约保证金率
	virtual int ReqQryInstrumentMarginRate(::CThostFtdcQryInstrumentMarginRateField *pQryInstrumentMarginRate, int nRequestID);

	///请求查询合约手续费率
	virtual int ReqQryInstrumentCommissionRate(::CThostFtdcQryInstrumentCommissionRateField *pQryInstrumentCommissionRate, int nRequestID);

	///请求查询交易所
	virtual int ReqQryExchange(::CThostFtdcQryExchangeField *pQryExchange, int nRequestID);

	///请求查询合约
	virtual int ReqQryInstrument(::CThostFtdcQryInstrumentField *pQryInstrument, int nRequestID);

	///请求查询行情
	virtual int ReqQryDepthMarketData(::CThostFtdcQryDepthMarketDataField *pQryDepthMarketData, int nRequestID);

	///请求查询投资者结算结果
	virtual int ReqQrySettlementInfo(::CThostFtdcQrySettlementInfoField *pQrySettlementInfo, int nRequestID);

	///请求查询转帐银行
	virtual int ReqQryTransferBank(::CThostFtdcQryTransferBankField *pQryTransferBank, int nRequestID);

	///请求查询投资者持仓明细
	virtual int ReqQryInvestorPositionDetail(::CThostFtdcQryInvestorPositionDetailField *pQryInvestorPositionDetail, int nRequestID);

	///请求查询客户通知
	virtual int ReqQryNotice(::CThostFtdcQryNoticeField *pQryNotice, int nRequestID);

	///请求查询结算信息确认
	virtual int ReqQrySettlementInfoConfirm(::CThostFtdcQrySettlementInfoConfirmField *pQrySettlementInfoConfirm, int nRequestID);

	///请求查询投资者持仓明细
	virtual int ReqQryInvestorPositionCombineDetail(::CThostFtdcQryInvestorPositionCombineDetailField *pQryInvestorPositionCombineDetail, int nRequestID);

	///请求查询保证金监管系统经纪公司资金账户密钥
	virtual int ReqQryCFMMCTradingAccountKey(::CThostFtdcQryCFMMCTradingAccountKeyField *pQryCFMMCTradingAccountKey, int nRequestID);

	///请求查询仓单折抵信息
	virtual int ReqQryEWarrantOffset(::CThostFtdcQryEWarrantOffsetField *pQryEWarrantOffset, int nRequestID);

	///请求查询转帐流水
	virtual int ReqQryTransferSerial(::CThostFtdcQryTransferSerialField *pQryTransferSerial, int nRequestID);

	///请求查询银期签约关系
	virtual int ReqQryAccountregister(::CThostFtdcQryAccountregisterField *pQryAccountregister, int nRequestID);

	///请求查询签约银行
	virtual int ReqQryContractBank(::CThostFtdcQryContractBankField *pQryContractBank, int nRequestID);

	///请求查询预埋单
	virtual int ReqQryParkedOrder(::CThostFtdcQryParkedOrderField *pQryParkedOrder, int nRequestID);

	///请求查询预埋撤单
	virtual int ReqQryParkedOrderAction(::CThostFtdcQryParkedOrderActionField *pQryParkedOrderAction, int nRequestID);

	///请求查询交易通知
	virtual int ReqQryTradingNotice(::CThostFtdcQryTradingNoticeField *pQryTradingNotice, int nRequestID);

	///请求查询经纪公司交易参数
	virtual int ReqQryBrokerTradingParams(::CThostFtdcQryBrokerTradingParamsField *pQryBrokerTradingParams, int nRequestID);

	///请求查询经纪公司交易算法
	virtual int ReqQryBrokerTradingAlgos(::CThostFtdcQryBrokerTradingAlgosField *pQryBrokerTradingAlgos, int nRequestID);

	///期货发起银行资金转期货请求
	virtual int ReqFromBankToFutureByFuture(::CThostFtdcReqTransferField *pReqTransfer, int nRequestID);

	///期货发起期货资金转银行请求
	virtual int ReqFromFutureToBankByFuture(::CThostFtdcReqTransferField *pReqTransfer, int nRequestID);

	///期货发起查询银行余额请求
	virtual int ReqQueryBankAccountMoneyByFuture(::CThostFtdcReqQueryAccountField *pReqQueryAccount, int nRequestID);

protected:
	// 析构函数
	~CThostFtdcTraderApi_obj();

private:
	KingstarAPI::CThostFtdcTraderApi *m_pKSapi;     // 金仕达接口api指针
	CThostFtdcTraderSpi_obj *m_pKSSpi;				   //金仕达接口spi指针
};

#endif 
