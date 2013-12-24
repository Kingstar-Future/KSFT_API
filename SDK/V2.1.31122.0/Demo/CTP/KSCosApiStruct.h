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

using namespace KingstarAPI;

///��ʼ¼��������
struct CTKSConditionalOrderInitInsert
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
    TTKSOrderPriceTypeType OrderPriceType;             
    ///��������
    TTKSConditionalTypeType  ConditionalType;
    ///������
    TThostFtdcPriceType ConditionalPrice;
    ///���������
    TTKSConditionalOrderIDType	ConditionalOrderID;
    ///��������
    TThostFtdcVolumeType TriggeredTimes;
    ///����������
    TTKSConditionalOrderType OrderType;
    ///��Чʱ��
    TThostFtdcTimeType  ActiveTime;
    ///ʧЧʱ��
    TThostFtdcTimeType InActiveTime;
    ///���Ҵ���
    TThostFtdcCurrencyIDType    CurrencyID;
};

///�޸�������
struct CTKSConditionalOrderModify
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
    TTKSOrderPriceTypeType OrderPriceType;          
    ///��������
    TTKSConditionalTypeType  ConditionalType;
    ///������
    TThostFtdcPriceType ConditionalPrice;
    ///���������
    TTKSConditionalOrderIDType	ConditionalOrderID;
    ///��������
    TThostFtdcVolumeType TriggeredTimes;
    ///����������
    TTKSConditionalOrderType OrderType;
    ///��Чʱ��
    TThostFtdcTimeType  ActiveTime;
    ///ʧЧʱ��
    TThostFtdcTimeType InActiveTime;
    ///���Ҵ���
    TThostFtdcCurrencyIDType    CurrencyID;
};

///��ѯ������
struct CTKSConditionalOrderQuery
{
    ///Ӫҵ������
    TThostFtdcBrokerIDType BrokerID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType InvestorID;
    ///���������
    TTKSConditionalOrderIDType	ConditionalOrderID;
};

///ɾ��������
struct CTKSConditionalOrderRemove
{
    ///Ӫҵ������
    TThostFtdcBrokerIDType BrokerID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType InvestorID;
    ///���������
    TTKSConditionalOrderIDType	ConditionalOrderID;
};

///��ͣ�򼤻�������
struct CTKSConditionalOrderStateAlter
{
    ///Ӫҵ������
    TThostFtdcBrokerIDType BrokerID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType InvestorID;
    ///���������
    TTKSConditionalOrderIDType	ConditionalOrderID;
    ///��ͣ�򼤻������־
    TTKSConditionalOrderStateAlterType	ConditionalOrderStateAlter;
};

///ѡ��������
struct CTKSConditionalOrderSelect
{
    ///Ӫҵ������
    TThostFtdcBrokerIDType BrokerID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType InvestorID;
    ///���������
    TTKSConditionalOrderIDType	ConditionalOrderID;
    ///ѡ����
    TTKSConditionalOrderSelectResultType SelectResult;
};


///��������������Ϣ
struct CTKSConditionalOrderRspResultField
{
    ///Ӫҵ������
    TThostFtdcBrokerIDType BrokerID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType InvestorID;
    ///���������
    TTKSConditionalOrderIDType	ConditionalOrderID;
};

///��������Ӧ
struct CTKSConditionalOrderOperResultField
{
    ///Ӫҵ������
    TThostFtdcBrokerIDType BrokerID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType InvestorID;
    ///���������
    TTKSConditionalOrderIDType	ConditionalOrderID;
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
    TTKSConditionalOrderStatusType ConditionalOrderStatus;
    ///������Ϣ
    TThostFtdcErrorMsgType	ErrorMsg;
    ///�۸����
    TThostFtdcOrderPriceTypeType OrderPriceType;
    ///��������
    TThostFtdcVolumeType TriggeredTimes;
    ///����������
    TTKSConditionalOrderType OrderType;
    ///��ע
    TThostFtdcMemoType	Memo;
    ///��Чʱ��
    TThostFtdcTimeType  ActiveTime;
    ///ʧЧʱ��
    TThostFtdcTimeType InActiveTime;
};

///¼��ֹ��ֹӯ��
struct CTKSProfitAndLossOrderInsert
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
    TTKSCloseModeType CloseMode;
    //ƽ�ַ���Ӽ���λ����ƽ�ַ�ʽ=1��2ʱ��Ч��
    TThostFtdcPriceType FiguresPrice;
    ///����������
    TThostFtdcExchangeIDType	ExchangeID;
    ///ҵ��Ԫ
    TThostFtdcBusinessUnitType	BusinessUnit;
    ///����ӯ��۵ķ�ʽ
    TTKSOffsetValueType OffsetValue;
    ///�����������۸�����
    TTKSSpringTypeType SpringType;
    ///����ֹ���
    TThostFtdcPriceType	FloatLimitPrice;
    ///ֹ�𵥴�������
    TThostFtdcVolumeType TriggeredTimes;
    ///���Ҵ���
    TThostFtdcCurrencyIDType    CurrencyID;
};

///ɾ��ֹ��ֹӯ��
struct CTKSProfitAndLossOrderRemove
{
    ///Ӫҵ������
    TThostFtdcBrokerIDType BrokerID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType InvestorID;
    ///ֹ��ֹӯ����
    TTKSProfitAndLossOrderIDType ProfitAndLossOrderID;
    ///���ر������
    TThostFtdcOrderLocalIDType	OrderLocalID;
    ///����������
    TThostFtdcExchangeIDType	ExchangeID;
    ///ҵ��Ԫ
    TThostFtdcBusinessUnitType	BusinessUnit;
};

///��ѯֹ��ֹӯ��
struct CTKSProfitAndLossOrderQuery
{
    ///Ӫҵ������
    TThostFtdcBrokerIDType BrokerID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType InvestorID;
    ///ֹ��ֹӯ����
    TTKSProfitAndLossOrderIDType ProfitAndLossOrderID;
    ///���ر������
    TThostFtdcOrderLocalIDType	OrderLocalID;
    ///����������
    TThostFtdcExchangeIDType	ExchangeID;
    ///ҵ��Ԫ
    TThostFtdcBusinessUnitType	BusinessUnit;
};

///�޸�ֹ��ֹӯ��
struct CTKSProfitAndLossOrderModify
{
    ///Ӫҵ������
    TThostFtdcBrokerIDType BrokerID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType InvestorID;
    ///ֹ��ֹӯ����
    TTKSProfitAndLossOrderIDType ProfitAndLossOrderID;
    ///ֹ���
    TThostFtdcPriceType  StopLossPrice;
    ///ֹӯ��
    TThostFtdcPriceType  TakeProfitPrice;
    ///ƽ�ַ�ʽ
    TTKSCloseModeType CloseMode;
    //ƽ�ַ����λ����ƽ�ַ�ʽ=1��2ʱ��Ч��
    TThostFtdcPriceType FiguresPrice;
    ///����ӯ��۵ķ�ʽ
    TTKSOffsetValueType OffsetValue;
    ///�����������۸�����
    TTKSSpringTypeType SpringType;
    ///����ֹ���
    TThostFtdcPriceType	FloatLimitPrice;
    ///��������
    TThostFtdcVolumeType TriggeredTimes;
};

///ֹ��ֹӯ��ɾ��
struct CTKSProfitAndLossOrderRemoveField
{
    ///Ӫҵ������
    TThostFtdcBrokerIDType BrokerID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType InvestorID;
    ///ֹ��ֹӯ����
    TTKSProfitAndLossOrderIDType ProfitAndLossOrderID;
};

///ֹ��ֹӯ������
struct CTKSProfitAndLossOrderOperResultField
{
    ///Ӫҵ������
    TThostFtdcBrokerIDType BrokerID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType InvestorID;
    ///ֹ��ֹӯ����
    TTKSProfitAndLossOrderIDType ProfitAndLossOrderID;
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
    TTKSCloseModeType CloseMode;
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
    TTKSConditionalOrderStatusType ProfitAndLossOrderStatus;
    ///���������
    TTKSConditionalOrderIDType	ConditionalOrderID;
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
    TTKSOffsetValueType OffsetValue;
    ///ҵ��Ԫ
    TThostFtdcBusinessUnitType	BusinessUnit;
    ///�����������۸�����
    TTKSSpringTypeType SpringType;
    ///����ֹ���
    TThostFtdcPriceType	FloatLimitPrice;
    ///���ֳɽ��۸�
    TThostFtdcPriceType OpenTradePrice;
};

// ����������ѡ����Ϣ
struct CTKSCOSAskSelectField
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
    TTKSConditionalOrderIDType	ConditionalOrderID;
    ///��ע
    TThostFtdcMemoType	Memo;
    ///ѡ��ʽ
    TTKSConditionalOrderSelectTypeType SelectType;
};

// ������״̬��Ϣ
struct CTKSCOSStatusField
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
    TTKSConditionalOrderIDType	ConditionalOrderID;
    ///������״̬
    TTKSConditionalOrderStatusType ConditionalOrderStatus;
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
struct CTKSPLStatusField
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
    TTKSProfitAndLossOrderIDType	ProfitAndLossOrderID;
    ///ֹ�����������
    TTKSConditionalOrderIDType	StopLossOrderID;
    ///ֹӯ���������
    TTKSConditionalOrderIDType	TakeProfitOrderID;
    ///ӯ��״̬
    TTKSConditionalOrderStatusType ProfitAndLossOrderStatus;
    ///ֹ���
    TThostFtdcPriceType  StopLossPrice;
    ///ֹӯ��
    TThostFtdcPriceType  TakeProfitPrice;
    ///����ӯ��۵ķ�ʽ
    TTKSOffsetValueType OffsetValue;
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
#endif