#ifndef __KSOPTIONAPISTRUCT_H_INCLUDED__
#define __KSOPTIONAPISTRUCT_H_INCLUDED__
/**
* @file KSOptionApiStruct.h
* @author kevin.shen
* system：KSTradeAPI
* company：Kingstar
* history：
* 2013/11/18	kevin.shen	 create
*/

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "KSUserApiStructEx.h"
#include "KSOptionApiDataType.h"

namespace KingstarAPI
{
///输入执行宣告操作
struct CThostFtdcInputKSExecOrderActionField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///执行宣告操作引用
	TThostFtdcOrderActionRefType	ExecOrderActionRef;
	///执行宣告引用
	TThostFtdcOrderRefType	ExecOrderRef;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///前置编号
	TThostFtdcFrontIDType	FrontID;
	///会话编号
	TThostFtdcSessionIDType	SessionID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///执行宣告操作编号
	TThostFtdcExecOrderSysIDType	ExecOrderSysID;
	///操作标志
	TThostFtdcActionFlagType	ActionFlag;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///买卖标志
	TThostFtdcDirectionType	Direction;
	///执行类型  -- 对应是否免于对冲
	TThostFtdcStrikeTypeType StrikeType;
	///是否保留头寸
	TThostFtdcIsHoldType IsHold;
};

///执行宣告
struct CThostFtdcKSExecOrderField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///执行宣告引用
	TThostFtdcOrderRefType	ExecOrderRef;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///数量
	TThostFtdcVolumeType	Volume;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///业务单元
	TThostFtdcBusinessUnitType	BusinessUnit;
	///开平标志
	TThostFtdcOffsetFlagType	OffsetFlag;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///本地执行宣告编号
	TThostFtdcOrderLocalIDType	ExecOrderLocalID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///执行宣告提交状态
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///报单提示序号
	TThostFtdcSequenceNoType	NotifySequence;
	///交易日
	TThostFtdcDateType	TradingDay;
	///结算编号
	TThostFtdcSettlementIDType	SettlementID;
	///执行宣告编号
	TThostFtdcExecOrderSysIDType	ExecOrderSysID;
	///报单日期
	TThostFtdcDateType	InsertDate;
	///插入时间
	TThostFtdcTimeType	InsertTime;
	///撤销时间
	TThostFtdcTimeType	CancelTime;
	///执行结果
	TThostFtdcExecResultType	ExecResult;
	///结算会员编号
	TThostFtdcParticipantIDType	ClearingPartID;
	///序号
	TThostFtdcSequenceNoType	SequenceNo;
	///前置编号
	TThostFtdcFrontIDType	FrontID;
	///会话编号
	TThostFtdcSessionIDType	SessionID;
	///用户端产品信息
	TThostFtdcProductInfoType	UserProductInfo;
	///状态信息
	TThostFtdcErrorMsgType	StatusMsg;
	///操作用户代码
	TThostFtdcUserIDType	ActiveUserID;
	///经纪公司报单编号
	TThostFtdcSequenceNoType	BrokerExecOrderSeq;
	///申请类型
	TKSOptionApplyFlagType OptionApplyFlag;
	///产品代码
	TThostFtdcInstrumentIDType	ProductID;
	///买卖标志
	TThostFtdcDirectionType	Direction;
	///执行类型  -- 对应是否免于对冲
	TThostFtdcStrikeTypeType StrikeType;
	///是否保留头寸
	TThostFtdcIsHoldType IsHold;
};

///执行宣告查询
struct CThostFtdcQryKSExecOrderField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///执行宣告编号
	TThostFtdcExecOrderSysIDType	ExecOrderSysID;
	///开始时间
	TThostFtdcTimeType	InsertTimeStart;
	///结束时间
	TThostFtdcTimeType	InsertTimeEnd;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///申请类型
	TKSOptionApplyFlagType OptionApplyFlag;
	///产品代码
	TThostFtdcInstrumentIDType	ProductID;
};

///输入的执行宣告 
struct CThostFtdcInputKSExecOrderField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///执行宣告引用
	TThostFtdcOrderRefType	ExecOrderRef;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///数量
	TThostFtdcVolumeType	Volume;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///业务单元
	TThostFtdcBusinessUnitType	BusinessUnit;
	///开平标志
	TThostFtdcOffsetFlagType	OffsetFlag;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///买卖标志
	TThostFtdcDirectionType	Direction;
	///执行类型  -- 对应是否免于对冲
	TThostFtdcStrikeTypeType StrikeType;
	///是否保留头寸
	TThostFtdcIsHoldType IsHold;
	///申请类型
	TKSOptionApplyFlagType OptionApplyFlag;
};

///输入查询宣告数量
struct CKSQryExecOrderVolumeField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///申请类型
	TKSOptionApplyFlagType OptionApplyFlag;
	///买卖标志
	TThostFtdcDirectionType	Direction;
};

///输出查询宣告数量
struct CKSExecOrderVolumeField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///可申请执行量
	TThostFtdcVolumeType	ExecVolume;
	///可申请放弃量
	TThostFtdcVolumeType	ActionVolume;
	///已申请执行量
	TThostFtdcVolumeType	ExecedVolume;
	///已申请放弃量 
	TThostFtdcVolumeType	ActionedVolume;
	///买卖标志
	TThostFtdcDirectionType	Direction;
};

///输入查询现货期权参数请求
struct CKSQrySpotOptionParamsField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///产品代码
	TThostFtdcInstrumentIDType	ProductID;
	///产品类型
	TThostFtdcProductClassType	ProductClass;
};

///输出查询现货期权参数请求
struct CKSSpotOptionParamsField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///产品代码
	TThostFtdcInstrumentIDType	ProductID;
	///标的券昨收盘
	TThostFtdcPriceType	StockPreClosePrice;
	///产品类型
	TThostFtdcProductClassType	ProductClass;
};

//输入查询期权合约相关信息请求
struct CKSQryOptionInsInfoField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
};

//输出查询期权合约相关信息请求
struct CKSOptionInsInfoField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///产品代码
	TThostFtdcInstrumentIDType	ProductID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///最低保障系数分子
	TThostFtdcVolumeType RiskFactorNum;
	///最低保障系数分母
	TThostFtdcVolumeType	RiskFactorDen;
	///单位（手）期权合约最小保证金
	TThostFtdcMoneyType	MinMargin;
};

///输入查询个股期权手续费率请求
struct CKSQryStockOptionInsCommRateField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
};

///输出查询个股期权合约手续费率
struct CKSStockOptionInsCommRateField
{
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///开仓手续费率
	TThostFtdcRatioType	OpenRatioByMoney;
	///开仓手续费
	TThostFtdcRatioType	OpenRatioByVolume;
	///平仓手续费率
	TThostFtdcRatioType	CloseRatioByMoney;
	///平仓手续费
	TThostFtdcRatioType	CloseRatioByVolume;
	///执行手续费率
	TThostFtdcRatioType	StrikeRatioByMoney;
	///执行手续费
	TThostFtdcRatioType	StrikeRatioByVolume;
};

///输入查询个股期权保证金率请求
struct CKSQryStockOptionInsMarginRateField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
};

///输出查询个股期权保证金率
struct CKSStockOptionInsMarginRateField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///保证金率
	TThostFtdcRatioType	MarginRateByMoney;
	///当前保证金金额
	TThostFtdcMoneyType	CurrMargin;
};

///KS期权报单
struct CThostFtdcKSExecOrderRtnField
{
	///宣告结构体
	CThostFtdcExecOrderField	 ExecOrder;
	///申请类型
	TKSOptionApplyFlagType OptionApplyFlag;
	///个股期权报单状态
	TKSStockOptionNonTradingOrderStatusType	StockOptionOrderStatus;
	///买卖标志
	TThostFtdcDirectionType	Direction;
	///执行类型  -- 对应是否免于对冲
	TThostFtdcStrikeTypeType StrikeType;
	///是否保留头寸
	TThostFtdcIsHoldType IsHold;
};

///输入个股行权指派信息
struct CKSQryStockOptionAssignmentField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///买卖
	TThostFtdcDirectionType	Direction;
};

///输出个股行权指派信息
struct CKSStockOptionAssignmentField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///买卖
	TThostFtdcDirectionType	Direction;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///合约名称
	TThostFtdcInstrumentNameType	InstrumentName;
	///产品代码
	TThostFtdcInstrumentIDType	ProductID;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///上日持仓
	TThostFtdcVolumeType	YdPosition;
	///行权指派合约数量
	TThostFtdcVolumeType AssInsVo;
	///行权标的证券数量
	TThostFtdcVolumeType AssProVol;
	///行权指派应付金额
	TThostFtdcMoneyType  FeePay;
	///期权C/P标志
	TThostFtdcOptionsTypeType OptionsType;
	///行权交收日
	TThostFtdcDateType DeliveryDay;
	///个股合约标识码
	TThostFtdcInstrumentIDType StockID;
};

}	// end of namespace KingstarAPI
#endif