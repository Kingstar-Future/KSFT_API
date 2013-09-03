#ifndef __KSCOSAPISTRUCT_H_INCLUDED_
#define __KSCOSAPISTRUCT_H_INCLUDED_
/**
* @file KSCosApiStruct.h
* @author kevin.shen
* system：KSTradeAPI
* company：Kingstar
* history：
* 2012/11/12	kevin.shen	 create
*/
#include "KSUserApiDataTypeEx.h"
#include "KSCosApiDataType.h"

using namespace KingstarAPI;

///初始录入条件单
struct CTKSConditionalOrderInitInsert
{
    ///营业部代码
    TThostFtdcBrokerIDType BrokerID;
    ///投资者代码
    TThostFtdcInvestorIDType InvestorID;
    ///合约代码
    TThostFtdcInstrumentIDType	InstrumentID;
    ///交易所代码
    TThostFtdcExchangeIDType	ExchangeID;
    ///客户代码
    TThostFtdcClientIDType	ClientID;
    ///买卖方向
    TThostFtdcDirectionType	Direction;
    ///开平标志
    TThostFtdcOffsetFlagType	CombOffsetFlag;
    ///投机套保标志
    TThostFtdcHedgeFlagType	CombHedgeFlag;
    ///数量
    TThostFtdcVolumeType	VolumeTotalOriginal;
    ///价格
    TThostFtdcPriceType	LimitPrice;
    ///价格类别
    TTKSOrderPriceTypeType OrderPriceType;             
    ///条件类型
    TTKSConditionalTypeType  ConditionalType;
    ///条件价
    TThostFtdcPriceType ConditionalPrice;
    ///条件单编号
    TTKSConditionalOrderIDType	ConditionalOrderID;
    ///触发次数
    TThostFtdcVolumeType TriggeredTimes;
    ///条件单类型
    TTKSConditionalOrderType OrderType;
    ///有效时间
    TThostFtdcTimeType  ActiveTime;
    ///失效时间
    TThostFtdcTimeType InActiveTime;
    ///货币代码
    TThostFtdcCurrencyIDType    CurrencyID;
};

///修改条件单
struct CTKSConditionalOrderModify
{
    ///营业部代码
    TThostFtdcBrokerIDType BrokerID;
    ///投资者代码
    TThostFtdcInvestorIDType InvestorID;
    ///合约代码
    TThostFtdcInstrumentIDType	InstrumentID;
    ///交易所代码
    TThostFtdcExchangeIDType	ExchangeID;
    ///客户代码
    TThostFtdcClientIDType	ClientID;
    ///买卖方向
    TThostFtdcDirectionType	Direction;
    ///开平标志
    TThostFtdcOffsetFlagType	CombOffsetFlag;
    ///投机套保标志
    TThostFtdcHedgeFlagType	CombHedgeFlag;
    ///数量
    TThostFtdcVolumeType	VolumeTotalOriginal;
    ///价格
    TThostFtdcPriceType	LimitPrice;
    ///价格类别
    TTKSOrderPriceTypeType OrderPriceType;          
    ///条件类型
    TTKSConditionalTypeType  ConditionalType;
    ///条件价
    TThostFtdcPriceType ConditionalPrice;
    ///条件单编号
    TTKSConditionalOrderIDType	ConditionalOrderID;
    ///触发次数
    TThostFtdcVolumeType TriggeredTimes;
    ///条件单类型
    TTKSConditionalOrderType OrderType;
    ///有效时间
    TThostFtdcTimeType  ActiveTime;
    ///失效时间
    TThostFtdcTimeType InActiveTime;
    ///货币代码
    TThostFtdcCurrencyIDType    CurrencyID;
};

///查询条件单
struct CTKSConditionalOrderQuery
{
    ///营业部代码
    TThostFtdcBrokerIDType BrokerID;
    ///投资者代码
    TThostFtdcInvestorIDType InvestorID;
    ///条件单编号
    TTKSConditionalOrderIDType	ConditionalOrderID;
};

///删除条件单
struct CTKSConditionalOrderRemove
{
    ///营业部代码
    TThostFtdcBrokerIDType BrokerID;
    ///投资者代码
    TThostFtdcInvestorIDType InvestorID;
    ///条件单编号
    TTKSConditionalOrderIDType	ConditionalOrderID;
};

///暂停或激活条件单
struct CTKSConditionalOrderStateAlter
{
    ///营业部代码
    TThostFtdcBrokerIDType BrokerID;
    ///投资者代码
    TThostFtdcInvestorIDType InvestorID;
    ///条件单编号
    TTKSConditionalOrderIDType	ConditionalOrderID;
    ///暂停或激活操作标志
    TTKSConditionalOrderStateAlterType	ConditionalOrderStateAlter;
};

///选择条件单
struct CTKSConditionalOrderSelect
{
    ///营业部代码
    TThostFtdcBrokerIDType BrokerID;
    ///投资者代码
    TThostFtdcInvestorIDType InvestorID;
    ///条件单编号
    TTKSConditionalOrderIDType	ConditionalOrderID;
    ///选择结果
    TTKSConditionalOrderSelectResultType SelectResult;
};


///条件单处理结果信息
struct CTKSConditionalOrderRspResultField
{
    ///营业部代码
    TThostFtdcBrokerIDType BrokerID;
    ///投资者代码
    TThostFtdcInvestorIDType InvestorID;
    ///条件单编号
    TTKSConditionalOrderIDType	ConditionalOrderID;
};

///条件单响应
struct CTKSConditionalOrderOperResultField
{
    ///营业部代码
    TThostFtdcBrokerIDType BrokerID;
    ///投资者代码
    TThostFtdcInvestorIDType InvestorID;
    ///条件单编号
    TTKSConditionalOrderIDType	ConditionalOrderID;
    ///本地报单编号
    TThostFtdcOrderLocalIDType	OrderLocalID;
    ///交易所代码
    TThostFtdcExchangeIDType	ExchangeID;
    ///合约代码
    TThostFtdcInstrumentIDType	InstrumentID;
    ///报单状态
    TThostFtdcOrderStatusType	OrderStatus;
    ///开平标志
    TThostFtdcOffsetFlagType	CombOffsetFlag;
    ///投机套保标志
    TThostFtdcHedgeFlagType	CombHedgeFlag;
    ///买卖方向
    TThostFtdcDirectionType	Direction;
    ///价格
    TThostFtdcPriceType	LimitPrice;
    ///数量
    TThostFtdcVolumeType	VolumeTotalOriginal;
    ///交易日
    TThostFtdcTradeDateType	TradingDay;
    ///撤销用户
    TThostFtdcUserIDType	UserID;
    ///撤销时间
    TThostFtdcTimeType	CancelTime;
    ///客户代码
    TThostFtdcClientIDType	ClientID;
    ///条件单状态
    TTKSConditionalOrderStatusType ConditionalOrderStatus;
    ///错误信息
    TThostFtdcErrorMsgType	ErrorMsg;
    ///价格类别
    TThostFtdcOrderPriceTypeType OrderPriceType;
    ///触发次数
    TThostFtdcVolumeType TriggeredTimes;
    ///条件单类型
    TTKSConditionalOrderType OrderType;
    ///备注
    TThostFtdcMemoType	Memo;
    ///有效时间
    TThostFtdcTimeType  ActiveTime;
    ///失效时间
    TThostFtdcTimeType InActiveTime;
};

///录入止损止盈单
struct CTKSProfitAndLossOrderInsert
{
    ///营业部代码
    TThostFtdcBrokerIDType BrokerID;
    ///投资者代码
    TThostFtdcInvestorIDType InvestorID;
    ///本地报单编号
    TThostFtdcOrderLocalIDType	OrderLocalID;
    ///止损价
    TThostFtdcPriceType  StopLossPrice;
    ///止盈价
    TThostFtdcPriceType  TakeProfitPrice;
    ///平仓方式
    TTKSCloseModeType CloseMode;
    ///平仓反向加减价位数（平仓方式=1或2时有效）
    TThostFtdcPriceType FiguresPrice;
    ///交易所代码
    TThostFtdcExchangeIDType	ExchangeID;
    ///业务单元
    TThostFtdcBusinessUnitType	BusinessUnit;
    ///生成盈损价的方式
    TTKSOffsetValueType OffsetValue;
    ///条件单触发价格类型
    TTKSSpringTypeType SpringType;
    ///浮动止损价
    TThostFtdcPriceType	FloatLimitPrice;
    ///止损单触发次数
    TThostFtdcVolumeType TriggeredTimes;
    ///货币代码
    TThostFtdcCurrencyIDType    CurrencyID;
};

///删除止损止盈单
struct CTKSProfitAndLossOrderRemove
{
    ///营业部代码
    TThostFtdcBrokerIDType BrokerID;
    ///投资者代码
    TThostFtdcInvestorIDType InvestorID;
    ///止损止盈单号
    TTKSProfitAndLossOrderIDType ProfitAndLossOrderID;
    ///本地报单编号
    TThostFtdcOrderLocalIDType	OrderLocalID;
    ///交易所代码
    TThostFtdcExchangeIDType	ExchangeID;
    ///业务单元
    TThostFtdcBusinessUnitType	BusinessUnit;
};

///查询止损止盈单
struct CTKSProfitAndLossOrderQuery
{
    ///营业部代码
    TThostFtdcBrokerIDType BrokerID;
    ///投资者代码
    TThostFtdcInvestorIDType InvestorID;
    ///止损止盈单号
    TTKSProfitAndLossOrderIDType ProfitAndLossOrderID;
    ///本地报单编号
    TThostFtdcOrderLocalIDType	OrderLocalID;
    ///交易所代码
    TThostFtdcExchangeIDType	ExchangeID;
    ///业务单元
    TThostFtdcBusinessUnitType	BusinessUnit;
};

///修改止损止盈单
struct CTKSProfitAndLossOrderModify
{
    ///营业部代码
    TThostFtdcBrokerIDType BrokerID;
    ///投资者代码
    TThostFtdcInvestorIDType InvestorID;
    ///止损止盈单号
    TTKSProfitAndLossOrderIDType ProfitAndLossOrderID;
    ///止损价
    TThostFtdcPriceType  StopLossPrice;
    ///止盈价
    TThostFtdcPriceType  TakeProfitPrice;
    ///平仓方式
    TTKSCloseModeType CloseMode;
    ///平仓反向价位数（平仓方式=1或2时有效）
    TThostFtdcPriceType FiguresPrice;
    ///生成盈损价的方式
    TTKSOffsetValueType OffsetValue;
    ///条件单触发价格类型
    TTKSSpringTypeType SpringType;
    ///浮动止损价
    TThostFtdcPriceType	FloatLimitPrice;
    ///触发次数
    TThostFtdcVolumeType TriggeredTimes;
};

///止损止盈单删除
struct CTKSProfitAndLossOrderRemoveField
{
    ///营业部代码
    TThostFtdcBrokerIDType BrokerID;
    ///投资者代码
    TThostFtdcInvestorIDType InvestorID;
    ///止损止盈单号
    TTKSProfitAndLossOrderIDType ProfitAndLossOrderID;
};

///止损止盈单处理
struct CTKSProfitAndLossOrderOperResultField
{
    ///营业部代码
    TThostFtdcBrokerIDType BrokerID;
    ///投资者代码
    TThostFtdcInvestorIDType InvestorID;
    ///止损止盈单号
    TTKSProfitAndLossOrderIDType ProfitAndLossOrderID;
    ///操作员
    TThostFtdcUserIDType	UserID;
    ///投资者名称
    TThostFtdcPartyNameType InvestorName;
    ///本地报单编号
    TThostFtdcOrderLocalIDType	OrderLocalID;
    ///止损价
    TThostFtdcPriceType  StopLossPrice;
    ///止盈价
    TThostFtdcPriceType  TakeProfitPrice;
    ///平仓方式
    TTKSCloseModeType CloseMode;
	///平仓反向加减价位数（平仓方式=1或2时有效）
    TThostFtdcPriceType Figures;
    ///行情触发时的最新价
    TThostFtdcPriceType LastPrice;
    ///生成止损止盈单时间
    TThostFtdcTimeType	ProfitAndLossOrderFormTime;
    ///生成条件单时间
    TThostFtdcTimeType	ConditionalOrderFormTime;
    ///生成委托单时间
    TThostFtdcTimeType	OrderFormTime;
    ///止损止盈单状态
    TTKSConditionalOrderStatusType ProfitAndLossOrderStatus;
    ///条件单编号
    TTKSConditionalOrderIDType	ConditionalOrderID;
    ///交易所代码
    TThostFtdcExchangeIDType	ExchangeID;
    ///客户代码
    TThostFtdcClientIDType	ClientID;
    ///合约代码
    TThostFtdcInstrumentIDType	InstrumentID;
    ///开平标志
    TThostFtdcOffsetFlagType	CombOffsetFlag;
    ///投机套保标志
    TThostFtdcHedgeFlagType	CombHedgeFlag;
    ///买卖方向
    TThostFtdcDirectionType	Direction;
    ///价格
    TThostFtdcPriceType	LimitPrice;
    ///数量
    TThostFtdcVolumeType	VolumeTotalOriginal;
    ///生成盈损价的方式
    TTKSOffsetValueType OffsetValue;
    ///业务单元
    TThostFtdcBusinessUnitType	BusinessUnit;
    ///条件单触发价格类型
    TTKSSpringTypeType SpringType;
    ///浮动止损价
    TThostFtdcPriceType	FloatLimitPrice;
    ///开仓成交价格
    TThostFtdcPriceType OpenTradePrice;
};

/// 条件单请求选择信息
struct CTKSCOSAskSelectField
{
    ///营业部代码
    TThostFtdcBrokerIDType BrokerID;   
    ///操作员
    TThostFtdcUserIDType	UserID;
    ///投资者代码
    TThostFtdcInvestorIDType InvestorID;
    ///序号
    TThostFtdcSequenceNoType	SequenceNo;
    ///条件单编号
    TTKSConditionalOrderIDType	ConditionalOrderID;
    ///备注
    TThostFtdcMemoType	Memo;
    ///选择方式
    TTKSConditionalOrderSelectTypeType SelectType;
};

/// 条件单状态信息
struct CTKSCOSStatusField
{
    ///营业部代码
    TThostFtdcBrokerIDType BrokerID;   
    ///操作员
    TThostFtdcUserIDType	UserID;
    ///投资者代码
    TThostFtdcInvestorIDType InvestorID;
    ///序号
    TThostFtdcSequenceNoType	SequenceNo;
    ///条件单编号
    TTKSConditionalOrderIDType	ConditionalOrderID;
    ///条件单状态
    TTKSConditionalOrderStatusType ConditionalOrderStatus;
    ///备注
    TThostFtdcMemoType	Memo;
    ///本地报单编号
    TThostFtdcOrderLocalIDType	OrderLocalID;
    ///交易所代码
    TThostFtdcExchangeIDType	ExchangeID;
    ///合约代码
    TThostFtdcInstrumentIDType	InstrumentID;
    ///报单状态
    TThostFtdcOrderStatusType	OrderStatus;
    ///开平标志
    TThostFtdcOffsetFlagType	CombOffsetFlag;
    ///投机套保标志
    TThostFtdcHedgeFlagType	CombHedgeFlag;
    ///买卖方向
    TThostFtdcDirectionType	Direction;
    ///价格
    TThostFtdcPriceType	LimitPrice;
    ///数量
    TThostFtdcVolumeType	VolumeTotalOriginal;
    ///交易日
    TThostFtdcTradeDateType	TradingDay;
    ///撤销用户
    TThostFtdcUserIDType	CancelUserID;
    ///撤销时间
    TThostFtdcTimeType	CancelTime;
    ///客户代码
    TThostFtdcClientIDType	ClientID;
    ///业务单元
    TThostFtdcBusinessUnitType	BusinessUnit;
    ///报单编号
    TThostFtdcOrderSysIDType	OrderSysID;
    ///今成交数量
    TThostFtdcVolumeType	VolumeTraded;
    ///剩余数量
    TThostFtdcVolumeType	VolumeTotal;
    ///委托时间
    TThostFtdcTimeType	InsertTime;
    ///激活时间
    TThostFtdcTimeType	ActiveTime;
    ///成交价格
    TThostFtdcPriceType	TradePrice;
    ///货币代码
    TThostFtdcCurrencyIDType    CurrencyID;
};

/// 止损止盈单状态信息
struct CTKSPLStatusField
{
    ///营业部代码
    TThostFtdcBrokerIDType BrokerID;   
    ///操作员
    TThostFtdcUserIDType	UserID;
    ///投资者代码
    TThostFtdcInvestorIDType InvestorID;
    ///序号
    TThostFtdcSequenceNoType	SequenceNo;
    ///止损止盈单编号
    TTKSProfitAndLossOrderIDType	ProfitAndLossOrderID;
    ///止损条件单编号
    TTKSConditionalOrderIDType	StopLossOrderID;
    ///止盈条件单编号
    TTKSConditionalOrderIDType	TakeProfitOrderID;
    ///盈损单状态
    TTKSConditionalOrderStatusType ProfitAndLossOrderStatus;
    ///止损价
    TThostFtdcPriceType  StopLossPrice;
    ///止盈价
    TThostFtdcPriceType  TakeProfitPrice;
    ///生成盈损价的方式
    TTKSOffsetValueType OffsetValue;
    ///开仓成交价格
    TThostFtdcPriceType OpenTradePrice;
    ///备注
    TThostFtdcMemoType	Memo;
    ///本地报单编号
    TThostFtdcOrderLocalIDType	OrderLocalID;
    ///交易所代码
    TThostFtdcExchangeIDType	ExchangeID;
    ///合约代码
    TThostFtdcInstrumentIDType	InstrumentID;
    ///报单状态
    TThostFtdcOrderStatusType	OrderStatus;
    ///开平标志
    TThostFtdcOffsetFlagType	CombOffsetFlag;
    ///投机套保标志
    TThostFtdcHedgeFlagType	CombHedgeFlag;
    ///买卖方向
    TThostFtdcDirectionType	Direction;
    ///价格
    TThostFtdcPriceType	LimitPrice;
    ///数量
    TThostFtdcVolumeType	VolumeTotalOriginal;
    ///交易日
    TThostFtdcTradeDateType	TradingDay;
    ///撤销用户
    TThostFtdcUserIDType	CancelUserID;
    ///撤销时间
    TThostFtdcTimeType	CancelTime;
    ///客户代码
    TThostFtdcClientIDType	ClientID;
    ///业务单元
    TThostFtdcBusinessUnitType	BusinessUnit;
    ///报单编号
    TThostFtdcOrderSysIDType	OrderSysID;
    ///今成交数量
    TThostFtdcVolumeType	VolumeTraded;
    ///剩余数量
    TThostFtdcVolumeType	VolumeTotal;
    ///委托时间
    TThostFtdcTimeType	InsertTime;
    ///激活时间
    TThostFtdcTimeType	ActiveTime;
    ///成交价格
    TThostFtdcPriceType	TradePrice;
    ///货币代码
    TThostFtdcCurrencyIDType    CurrencyID;
};
#endif