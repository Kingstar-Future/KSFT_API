#ifndef __KSCOSAPISTRUCT_H_INCLUDED_
#define __KSCOSAPISTRUCT_H_INCLUDED_
/**
* @file KSCosApiStruct.h
* @author kevin.shen
* system��KSTradeAPI
* company��Kingstar
* history��
* 2012/11/12	kevin.shen	 create
*/
#include "KSUserApiDataTypeEx.h"
#include "KSCosApiDataType.h"

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

namespace KingstarAPI
{

///��ʼ¼��������
struct CKSConditionalOrderInitInsert
{
    ///Ӫҵ������
    TThostFtdcBrokerIDType BrokerID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType InvestorID;
    ///��Լ����
    TThostFtdcInstrumentIDType	InstrumentID;
    ///����������
    TThostFtdcExchangeIDType	ExchangeID;
    ///�ͻ�����
    TThostFtdcClientIDType	ClientID;
    ///��������
    TThostFtdcDirectionType	Direction;
    ///��ƽ��־
    TThostFtdcOffsetFlagType	CombOffsetFlag;
    ///Ͷ���ױ���־
    TThostFtdcHedgeFlagType	CombHedgeFlag;
    ///����
    TThostFtdcVolumeType	VolumeTotalOriginal;
    ///�۸�
    TThostFtdcPriceType	LimitPrice;
    ///�۸����
    TKSOrderPriceTypeType OrderPriceType;             
    ///��������
    TKSConditionalTypeType  ConditionalType;
    ///������
    TThostFtdcPriceType ConditionalPrice;
    ///���������
    TKSConditionalOrderIDType	ConditionalOrderID;
    ///��������
    TThostFtdcVolumeType TriggeredTimes;
    ///����������
    TKSConditionalOrderType OrderType;
    ///��Чʱ��
    TThostFtdcTimeType  ActiveTime;
    ///ʧЧʱ��
    TThostFtdcTimeType InActiveTime;
    ///���Ҵ���
    TThostFtdcCurrencyIDType    CurrencyID;
};

///�޸�������
struct CKSConditionalOrderModify
{
    ///Ӫҵ������
    TThostFtdcBrokerIDType BrokerID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType InvestorID;
    ///��Լ����
    TThostFtdcInstrumentIDType	InstrumentID;
    ///����������
    TThostFtdcExchangeIDType	ExchangeID;
    ///�ͻ�����
    TThostFtdcClientIDType	ClientID;
    ///��������
    TThostFtdcDirectionType	Direction;
    ///��ƽ��־
    TThostFtdcOffsetFlagType	CombOffsetFlag;
    ///Ͷ���ױ���־
    TThostFtdcHedgeFlagType	CombHedgeFlag;
    ///����
    TThostFtdcVolumeType	VolumeTotalOriginal;
    ///�۸�
    TThostFtdcPriceType	LimitPrice;
    ///�۸����
    TKSOrderPriceTypeType OrderPriceType;          
    ///��������
    TKSConditionalTypeType  ConditionalType;
    ///������
    TThostFtdcPriceType ConditionalPrice;
    ///���������
    TKSConditionalOrderIDType	ConditionalOrderID;
    ///��������
    TThostFtdcVolumeType TriggeredTimes;
    ///����������
    TKSConditionalOrderType OrderType;
    ///��Чʱ��
    TThostFtdcTimeType  ActiveTime;
    ///ʧЧʱ��
    TThostFtdcTimeType InActiveTime;
    ///���Ҵ���
    TThostFtdcCurrencyIDType    CurrencyID;
};

///��ѯ������
struct CKSConditionalOrderQuery
{
    ///Ӫҵ������
    TThostFtdcBrokerIDType BrokerID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType InvestorID;
    ///���������
    TKSConditionalOrderIDType	ConditionalOrderID;
};

///ɾ��������
struct CKSConditionalOrderRemove
{
    ///Ӫҵ������
    TThostFtdcBrokerIDType BrokerID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType InvestorID;
    ///���������
    TKSConditionalOrderIDType	ConditionalOrderID;
};

///��ͣ�򼤻�������
struct CKSConditionalOrderStateAlter
{
    ///Ӫҵ������
    TThostFtdcBrokerIDType BrokerID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType InvestorID;
    ///���������
    TKSConditionalOrderIDType	ConditionalOrderID;
    ///��ͣ�򼤻������־
    TKSConditionalOrderStateAlterType	ConditionalOrderStateAlter;
};

///ѡ��������
struct CKSConditionalOrderSelect
{
    ///Ӫҵ������
    TThostFtdcBrokerIDType BrokerID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType InvestorID;
    ///���������
    TKSConditionalOrderIDType	ConditionalOrderID;
    ///ѡ����
    TKSConditionalOrderSelectResultType SelectResult;
};


///��������������Ϣ
struct CKSConditionalOrderRspResultField
{
    ///Ӫҵ������
    TThostFtdcBrokerIDType BrokerID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType InvestorID;
    ///���������
    TKSConditionalOrderIDType	ConditionalOrderID;
};

///��������Ӧ
struct CKSConditionalOrderOperResultField
{
    ///Ӫҵ������
    TThostFtdcBrokerIDType BrokerID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType InvestorID;
    ///���������
    TKSConditionalOrderIDType	ConditionalOrderID;
    ///���ر������
    TThostFtdcOrderLocalIDType	OrderLocalID;
    ///����������
    TThostFtdcExchangeIDType	ExchangeID;
    ///��Լ����
    TThostFtdcInstrumentIDType	InstrumentID;
    ///����״̬
    TThostFtdcOrderStatusType	OrderStatus;
    ///��ƽ��־
    TThostFtdcOffsetFlagType	CombOffsetFlag;
    ///Ͷ���ױ���־
    TThostFtdcHedgeFlagType	CombHedgeFlag;
    ///��������
    TThostFtdcDirectionType	Direction;
    ///�۸�
    TThostFtdcPriceType	LimitPrice;
    ///����
    TThostFtdcVolumeType	VolumeTotalOriginal;
    ///������
    TThostFtdcTradeDateType	TradingDay;
    ///�����û�
    TThostFtdcUserIDType	UserID;
    ///����ʱ��
    TThostFtdcTimeType	CancelTime;
    ///�ͻ�����
    TThostFtdcClientIDType	ClientID;
    ///������״̬
    TKSConditionalOrderStatusType ConditionalOrderStatus;
    ///������Ϣ
    TThostFtdcErrorMsgType	ErrorMsg;
    ///�۸����
    TThostFtdcOrderPriceTypeType OrderPriceType;
    ///��������
    TThostFtdcVolumeType TriggeredTimes;
    ///����������
    TKSConditionalOrderType OrderType;
    ///��ע
    TThostFtdcMemoType	Memo;
    ///��Чʱ��
    TThostFtdcTimeType  ActiveTime;
    ///ʧЧʱ��
    TThostFtdcTimeType InActiveTime;
};

///¼��ֹ��ֹӯ��
struct CKSProfitAndLossOrderInsert
{
    ///Ӫҵ������
    TThostFtdcBrokerIDType BrokerID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType InvestorID;
    ///���ر������
    TThostFtdcOrderLocalIDType	OrderLocalID;
    ///ֹ���
    TThostFtdcPriceType  StopLossPrice;
    ///ֹӯ��
    TThostFtdcPriceType  TakeProfitPrice;
    ///ƽ�ַ�ʽ
    TKSCloseModeType CloseMode;
    //ƽ�ַ���Ӽ���λ����ƽ�ַ�ʽ=1��2ʱ��Ч��
    TThostFtdcPriceType FiguresPrice;
    ///����������
    TThostFtdcExchangeIDType	ExchangeID;
    ///ҵ��Ԫ
    TThostFtdcBusinessUnitType	BusinessUnit;
    ///����ӯ��۵ķ�ʽ
    TKSOffsetValueType OffsetValue;
    ///�����������۸�����
    TKSSpringTypeType SpringType;
    ///����ֹ���
    TThostFtdcPriceType	FloatLimitPrice;
    ///ֹ�𵥴�������
    TThostFtdcVolumeType TriggeredTimes;
    ///���Ҵ���
    TThostFtdcCurrencyIDType    CurrencyID;
};

///ɾ��ֹ��ֹӯ��
struct CKSProfitAndLossOrderRemove
{
    ///Ӫҵ������
    TThostFtdcBrokerIDType BrokerID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType InvestorID;
    ///ֹ��ֹӯ����
    TKSProfitAndLossOrderIDType ProfitAndLossOrderID;
    ///���ر������
    TThostFtdcOrderLocalIDType	OrderLocalID;
    ///����������
    TThostFtdcExchangeIDType	ExchangeID;
    ///ҵ��Ԫ
    TThostFtdcBusinessUnitType	BusinessUnit;
};

///��ѯֹ��ֹӯ��
struct CKSProfitAndLossOrderQuery
{
    ///Ӫҵ������
    TThostFtdcBrokerIDType BrokerID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType InvestorID;
    ///ֹ��ֹӯ����
    TKSProfitAndLossOrderIDType ProfitAndLossOrderID;
    ///���ر������
    TThostFtdcOrderLocalIDType	OrderLocalID;
    ///����������
    TThostFtdcExchangeIDType	ExchangeID;
    ///ҵ��Ԫ
    TThostFtdcBusinessUnitType	BusinessUnit;
};

///�޸�ֹ��ֹӯ��
struct CKSProfitAndLossOrderModify
{
    ///Ӫҵ������
    TThostFtdcBrokerIDType BrokerID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType InvestorID;
    ///ֹ��ֹӯ����
    TKSProfitAndLossOrderIDType ProfitAndLossOrderID;
    ///ֹ���
    TThostFtdcPriceType  StopLossPrice;
    ///ֹӯ��
    TThostFtdcPriceType  TakeProfitPrice;
    ///ƽ�ַ�ʽ
    TKSCloseModeType CloseMode;
    //ƽ�ַ����λ����ƽ�ַ�ʽ=1��2ʱ��Ч��
    TThostFtdcPriceType FiguresPrice;
    ///����ӯ��۵ķ�ʽ
    TKSOffsetValueType OffsetValue;
    ///�����������۸�����
    TKSSpringTypeType SpringType;
    ///����ֹ���
    TThostFtdcPriceType	FloatLimitPrice;
    ///��������
    TThostFtdcVolumeType TriggeredTimes;
};

///ֹ��ֹӯ��ɾ��
struct CKSProfitAndLossOrderRemoveField
{
    ///Ӫҵ������
    TThostFtdcBrokerIDType BrokerID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType InvestorID;
    ///ֹ��ֹӯ����
    TKSProfitAndLossOrderIDType ProfitAndLossOrderID;
};

///ֹ��ֹӯ������
struct CKSProfitAndLossOrderOperResultField
{
    ///Ӫҵ������
    TThostFtdcBrokerIDType BrokerID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType InvestorID;
    ///ֹ��ֹӯ����
    TKSProfitAndLossOrderIDType ProfitAndLossOrderID;
    ///����Ա
    TThostFtdcUserIDType	UserID;
    ///Ͷ��������
    TThostFtdcPartyNameType InvestorName;
    ///���ر������
    TThostFtdcOrderLocalIDType	OrderLocalID;
    ///ֹ���
    TThostFtdcPriceType  StopLossPrice;
    ///ֹӯ��
    TThostFtdcPriceType  TakeProfitPrice;
    ///ƽ�ַ�ʽ
    TKSCloseModeType CloseMode;
	///ƽ�ַ���Ӽ���λ����ƽ�ַ�ʽ=1��2ʱ��Ч��
    TThostFtdcPriceType Figures;
    ///���鴥��ʱ�����¼�
    TThostFtdcPriceType LastPrice;
    ///����ֹ��ֹӯ��ʱ��
    TThostFtdcTimeType	ProfitAndLossOrderFormTime;
     ///����������ʱ��
    TThostFtdcTimeType	ConditionalOrderFormTime;
     ///����ί�е�ʱ��
    TThostFtdcTimeType	OrderFormTime;
     ///ֹ��ֹӯ��״̬
    TKSConditionalOrderStatusType ProfitAndLossOrderStatus;
    ///���������
    TKSConditionalOrderIDType	ConditionalOrderID;
    ///����������
    TThostFtdcExchangeIDType	ExchangeID;
    ///�ͻ�����
    TThostFtdcClientIDType	ClientID;
    ///��Լ����
    TThostFtdcInstrumentIDType	InstrumentID;
    ///��ƽ��־
    TThostFtdcOffsetFlagType	CombOffsetFlag;
    ///Ͷ���ױ���־
    TThostFtdcHedgeFlagType	CombHedgeFlag;
    ///��������
    TThostFtdcDirectionType	Direction;
    ///�۸�
    TThostFtdcPriceType	LimitPrice;
    ///����
    TThostFtdcVolumeType	VolumeTotalOriginal;
    ///����ӯ��۵ķ�ʽ
    TKSOffsetValueType OffsetValue;
    ///ҵ��Ԫ
    TThostFtdcBusinessUnitType	BusinessUnit;
    ///�����������۸�����
    TKSSpringTypeType SpringType;
    ///����ֹ���
    TThostFtdcPriceType	FloatLimitPrice;
    ///���ֳɽ��۸�
    TThostFtdcPriceType OpenTradePrice;
};

// ����������ѡ����Ϣ
struct CKSCOSAskSelectField
{
    ///Ӫҵ������
    TThostFtdcBrokerIDType BrokerID;   
    ///����Ա
    TThostFtdcUserIDType	UserID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType InvestorID;
    ///���
    TThostFtdcSequenceNoType	SequenceNo;
    ///���������
    TKSConditionalOrderIDType	ConditionalOrderID;
    ///��ע
    TThostFtdcMemoType	Memo;
    ///ѡ��ʽ
    TKSConditionalOrderSelectTypeType SelectType;
};

// ������״̬��Ϣ
struct CKSCOSStatusField
{
    ///Ӫҵ������
    TThostFtdcBrokerIDType BrokerID;   
    ///����Ա
    TThostFtdcUserIDType	UserID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType InvestorID;
    ///���
    TThostFtdcSequenceNoType	SequenceNo;
    ///���������
    TKSConditionalOrderIDType	ConditionalOrderID;
    ///������״̬
    TKSConditionalOrderStatusType ConditionalOrderStatus;
    ///��ע
    TThostFtdcMemoType	Memo;
    ///���ر������
    TThostFtdcOrderLocalIDType	OrderLocalID;
    ///����������
    TThostFtdcExchangeIDType	ExchangeID;
    ///��Լ����
    TThostFtdcInstrumentIDType	InstrumentID;
    ///����״̬
    TThostFtdcOrderStatusType	OrderStatus;
    ///��ƽ��־
    TThostFtdcOffsetFlagType	CombOffsetFlag;
    ///Ͷ���ױ���־
    TThostFtdcHedgeFlagType	CombHedgeFlag;
    ///��������
    TThostFtdcDirectionType	Direction;
    ///�۸�
    TThostFtdcPriceType	LimitPrice;
    ///����
    TThostFtdcVolumeType	VolumeTotalOriginal;
    ///������
    TThostFtdcTradeDateType	TradingDay;
    ///�����û�
    TThostFtdcUserIDType	CancelUserID;
    ///����ʱ��
    TThostFtdcTimeType	CancelTime;
    ///�ͻ�����
    TThostFtdcClientIDType	ClientID;
    ///ҵ��Ԫ
    TThostFtdcBusinessUnitType	BusinessUnit;
    ///�������
    TThostFtdcOrderSysIDType	OrderSysID;
    ///��ɽ�����
    TThostFtdcVolumeType	VolumeTraded;
    ///ʣ������
    TThostFtdcVolumeType	VolumeTotal;
    ///ί��ʱ��
    TThostFtdcTimeType	InsertTime;
    ///����ʱ��
    TThostFtdcTimeType	ActiveTime;
    ///�ɽ��۸�
    TThostFtdcPriceType	TradePrice;
    ///���Ҵ���
    TThostFtdcCurrencyIDType    CurrencyID;
};

// ֹ��ֹӯ��״̬��Ϣ
struct CKSPLStatusField
{
    ///Ӫҵ������
    TThostFtdcBrokerIDType BrokerID;   
    ///����Ա
    TThostFtdcUserIDType	UserID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType InvestorID;
    ///���
    TThostFtdcSequenceNoType	SequenceNo;
    ///ֹ��ֹӯ�����
    TKSProfitAndLossOrderIDType	ProfitAndLossOrderID;
    ///ֹ�����������
    TKSConditionalOrderIDType	StopLossOrderID;
    ///ֹӯ���������
    TKSConditionalOrderIDType	TakeProfitOrderID;
    ///ӯ��״̬
    TKSConditionalOrderStatusType ProfitAndLossOrderStatus;
    ///ֹ���
    TThostFtdcPriceType  StopLossPrice;
    ///ֹӯ��
    TThostFtdcPriceType  TakeProfitPrice;
    ///����ӯ��۵ķ�ʽ
    TKSOffsetValueType OffsetValue;
    ///���ֳɽ��۸�
    TThostFtdcPriceType OpenTradePrice;
    ///��ע
    TThostFtdcMemoType	Memo;
    ///���ر������
    TThostFtdcOrderLocalIDType	OrderLocalID;
    ///����������
    TThostFtdcExchangeIDType	ExchangeID;
    ///��Լ����
    TThostFtdcInstrumentIDType	InstrumentID;
    ///����״̬
    TThostFtdcOrderStatusType	OrderStatus;
    ///��ƽ��־
    TThostFtdcOffsetFlagType	CombOffsetFlag;
    ///Ͷ���ױ���־
    TThostFtdcHedgeFlagType	CombHedgeFlag;
    ///��������
    TThostFtdcDirectionType	Direction;
    ///�۸�
    TThostFtdcPriceType	LimitPrice;
    ///����
    TThostFtdcVolumeType	VolumeTotalOriginal;
    ///������
    TThostFtdcTradeDateType	TradingDay;
    ///�����û�
    TThostFtdcUserIDType	CancelUserID;
    ///����ʱ��
    TThostFtdcTimeType	CancelTime;
    ///�ͻ�����
    TThostFtdcClientIDType	ClientID;
    ///ҵ��Ԫ
    TThostFtdcBusinessUnitType	BusinessUnit;
    ///�������
    TThostFtdcOrderSysIDType	OrderSysID;
    ///��ɽ�����
    TThostFtdcVolumeType	VolumeTraded;
    ///ʣ������
    TThostFtdcVolumeType	VolumeTotal;
    ///ί��ʱ��
    TThostFtdcTimeType	InsertTime;
    ///����ʱ��
    TThostFtdcTimeType	ActiveTime;
    ///�ɽ��۸�
    TThostFtdcPriceType	TradePrice;
    ///���Ҵ���
    TThostFtdcCurrencyIDType    CurrencyID;
};

}	// end of namespace KingstarAPI
#endif