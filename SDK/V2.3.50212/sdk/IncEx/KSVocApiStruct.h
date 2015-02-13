/////////////////////////////////////////////////////////////////////////
///@system ��һ������ϵͳ
///@company SunGard China
///@file KSVocApiStruct.h
///@brief �����˿ͻ��˽ӿ�ʹ�õ�ҵ�����ݽṹ
/////////////////////////////////////////////////////////////////////////

#ifndef __KSVOCAPISTRUCT_H_INCLUDED_
#define __KSVOCAPISTRUCT_H_INCLUDED_

#include "KSUserApiDataTypeEx.h"
#include "KSVocApiDataType.h"
#include "KSUserApiStructEx.h"

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
		///��������
		TKSConditionalTypeType  ConditionalType;
		///������
		TThostFtdcPriceType ConditionalPrice;
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

	///�����ѯ�ֻ�ָ��
	struct CKSQryIndexPriceField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
	};

	///�����ѯ�ֻ�ָ��
	struct CKSIndexPriceField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///ָ���ֻ����̼�
		TThostFtdcPriceType	ClosePrice;
		///��ȫϵ��
		TThostFtdcRatioType	GuarantRatio;
	};

	///�����ѯ��Ȩ��Լ����ϵ��
	struct CKSQryOptionInstrGuardField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
	};

	///�����ѯ��Ȩ��Լ����ϵ��
	struct CKSOptionInstrGuardField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///��ͱ���ϵ������
		TThostFtdcVolumeType	MiniNumerator;
		///��ͱ���ϵ����ĸ
		TThostFtdcVolumeType	MiniDenominator ;
		///��Ȩ��Լ��С��֤��
		TThostFtdcMoneyType	MiniMargin;
	};

	///�����ѯ��������
	struct CKSQryExecOrderVolumeField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///��Ʒ����
		TThostFtdcInstrumentIDType	ProductID;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///������־
		TThostFtdcDirectionType	Direction;
	};

	///�����ѯ��������
	struct CKSExecOrderVolumeField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///��Ʒ����
		TThostFtdcInstrumentIDType	ProductID;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///������ִ����
		TThostFtdcVolumeType	ExecVolume;
		///�����������
		TThostFtdcVolumeType	ActionVolume;
		///������ִ����
		TThostFtdcVolumeType	ExecedVolume;
		///����������� 
		TThostFtdcVolumeType	ActionedVolume;
		///������־
		TThostFtdcDirectionType	Direction;
	};

	///���������Ȩָ����Ϣ
	struct CKSQryStockOptionAssignmentField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///����
		TThostFtdcDirectionType	Direction;
	};

	///���������Ȩָ����Ϣ
	struct CKSStockOptionAssignmentField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///����
		TThostFtdcDirectionType	Direction;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ����
		TThostFtdcInstrumentNameType	InstrumentName;
		///��Ʒ����
		TThostFtdcInstrumentIDType	ProductID;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///���ճֲ�
		TThostFtdcVolumeType	YdPosition;
		///��Ȩָ�ɺ�Լ����
		TThostFtdcVolumeType AssInsVo;
		///��Ȩ���֤ȯ����
		TThostFtdcVolumeType AssProVol;
		///��Ȩָ��Ӧ�����
		TThostFtdcMoneyType  FeePay;
		///��ȨC/P��־
		TThostFtdcOptionsTypeType OptionsType;
		///��Ȩ������
		TThostFtdcDateType DeliveryDay;
		///���ɺ�Լ��ʶ��
		TThostFtdcInstrumentIDType StockID;
	};

	///����Key
	struct CThostOrderKeyField
	{
		///��������
		TThostFtdcOrderRefType      OrderRef;
		///ǰ�ñ��
		TThostFtdcFrontIDType  FrontID;
		///�Ự���
		TThostFtdcSessionIDType     SessionID;
		///����������
		TThostFtdcExchangeIDType  ExchangeID;
		///�������
		TThostFtdcOrderSysIDType  OrderSysID;
	};

	///����������������
	struct CThostFtdcBulkCancelOrderField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType      BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType    InvestorID;
		///�û�����
		TThostFtdcUserIDType  UserID;
		///��������
		TThostFtdcOrderTypeType    OrderType;
		///��������
		TThostFtdcVolumeType nCount;
		///��������
		CThostOrderKeyField OrderKey[MAX_ORDER_COUNT];
	};

	///ƽ�ֲ���
	struct CKSCloseStrategy
	{
		///Ӫҵ������
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType InvestorID;
	};

	///ƽ�ֲ�����Ӧ
	struct CKSCloseStrategyResultField
	{
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///����������
		TThostFtdcExchangeNameType	ExchangeName;
		///ƽ�ֲ���
		TKSCloseStrategyType CloseStrategy;
	};

	///��ϲ���
	struct CKSCombStrategy
	{
		///Ӫҵ������
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType InvestorID;
		///�������(1:�ڻ�;2:��Ȩ;��:ȫ��)
		TThostFtdcProductClassType	ProductClass;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///���Դ���(SP/SPD)
		TKSStrategyIDType StrategyID;
		///�������
		TKSCombTypeType CombType;
	};

	///��ϲ�����Ӧ
	struct CKSCombStrategyResultField
	{
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///���Դ���
		TKSStrategyIDType	StrategyID;
		///�������
		TKSCombTypeType CombType;
		///�����������
		TThostFtdcDirectionType	CombDirection;
		///��Ͽ�ƽ��־
		TThostFtdcCombOffsetFlagType	CombOffsetFlag;
		///����
		TThostFtdcVolumeType	Volume;
		///��������һ
		TThostFtdcDirectionType	Direction1;
		///��ƽ��־һ
		TThostFtdcOffsetFlagType	OffsetFlag1;
		///��������һ
		TThostFtdcVolRatioType	VolRatio1;
		///�������һ
		TKSCalcFlagType CalcFlag1;
		///��֤�����һ
		TThostFtdcMoneyRatioType	MarginRatio1;
		///���������
		TThostFtdcDirectionType	Direction2;
		///��ƽ��־��
		TThostFtdcOffsetFlagType	OffsetFlag2;
		///����������
		TThostFtdcVolRatioType	VolRatio2;
		///������Ŷ�
		TKSCalcFlagType CalcFlag2;
		///��֤�������
		TThostFtdcMoneyRatioType	MarginRatio2;
		///����������
		TThostFtdcDirectionType	Direction3;
		///��ƽ��־��
		TThostFtdcOffsetFlagType	OffsetFlag3;
		///����������
		TThostFtdcVolRatioType	VolRatio3;
		///���������
		TKSCalcFlagType CalcFlag3;
		///��֤�������
		TThostFtdcMoneyRatioType	MarginRatio3;
		///����������
		TThostFtdcDirectionType	Direction4;
		///��ƽ��־��
		TThostFtdcOffsetFlagType	OffsetFlag4;
		///����������
		TThostFtdcVolRatioType	VolRatio4;
		///���������
		TKSCalcFlagType CalcFlag4;
		///��֤�������
		TThostFtdcMoneyRatioType	MarginRatio4;
		///��Ϻ�Լ����
		TThostFtdcInstrumentIDType	CombInstrumentID;
	};

	///��Ȩ��ϲ���
	struct CKSOptionCombStrategy
	{
		///Ӫҵ������
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///���Դ���
		TKSStrategyIDType	StrategyID;
		///�����������
		TThostFtdcDirectionType	CombDirection;
		///��Ͽ�ƽ��־
		TThostFtdcCombOffsetFlagType	CombOffsetFlag;
	};

	///��Ȩ��ϲ�����Ӧ
	struct CKSOptionCombStrategyResultField
	{
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///���Դ���
		TKSStrategyIDType	StrategyID;
		///�����������
		TThostFtdcDirectionType	CombDirection;
		///��Ͽ�ƽ��־
		TThostFtdcCombOffsetFlagType	CombOffsetFlag;
		///����
		TThostFtdcVolumeType	Volume;
		///��������һ
		TThostFtdcDirectionType	Direction1;
		///��Ȩ����һ
		TThostFtdcOptionsTypeType	OptionsType1;
		///ִ�м�����һ
		TKSStrikePriceType StrikeType1;
		///��ƽ��־һ
		TThostFtdcOffsetFlagType	OffsetFlag1;
		///��������һ
		TThostFtdcVolRatioType	VolRatio1;
		///��֤�����һ
		TThostFtdcMoneyRatioType	MarginRatio1;
		///�������һ
		TKSCalcFlagType CalcFlag1;
		///���������
		TThostFtdcDirectionType	Direction2;
		///��Ȩ���Ͷ�
		TThostFtdcOptionsTypeType	OptionsType2;
		///ִ�м����Ͷ�
		TKSStrikePriceType StrikeType2;
		///��ƽ��־��
		TThostFtdcOffsetFlagType	OffsetFlag2;
		///����������
		TThostFtdcVolRatioType	VolRatio2;
		///��֤�������
		TThostFtdcMoneyRatioType	MarginRatio2;
		///������Ŷ�
		TKSCalcFlagType CalcFlag2;
		///����������
		TThostFtdcDirectionType	Direction3;
		///��Ȩ������
		TThostFtdcOptionsTypeType	OptionsType3;
		///ִ�м�������
		TKSStrikePriceType StrikeType3;
		///��ƽ��־��
		TThostFtdcOffsetFlagType	OffsetFlag3;
		///����������
		TThostFtdcVolRatioType	VolRatio3;
		///��֤�������
		TThostFtdcMoneyRatioType	MarginRatio3;
		///���������
		TKSCalcFlagType CalcFlag3;
		///����������
		TThostFtdcDirectionType	Direction4;
		///��Ȩ������
		TThostFtdcOptionsTypeType	OptionsType4;
		///ִ�м�������
		TKSStrikePriceType StrikeType4;
		///��ƽ��־��
		TThostFtdcOffsetFlagType	OffsetFlag4;
		///����������
		TThostFtdcVolRatioType	VolRatio4;
		///��֤�������
		TThostFtdcMoneyRatioType	MarginRatio4;
		///���������
		TKSCalcFlagType CalcFlag4;
	};

	///��ѯ�ͻ�ת����Ϣ����
	struct CKSTransferInfo
	{
		///���д���
		TThostFtdcBankIDType	BankID;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	///��ѯ�ͻ�ת����Ϣ��Ӧ
	struct CKSTransferInfoResultField
	{
		///���ʼʱ��
		TThostFtdcTimeType	DepositBegin;
		///������ʱ��
		TThostFtdcTimeType	DepositEnd;
		///����ʼʱ��
		TThostFtdcTimeType	WithdrawBegin;
		///�������ʱ��
		TThostFtdcTimeType	WithdrawEnd;
		///�������
		TThostFtdcLargeVolumeType	WithdrawVolume;
		///�����޶�
		TThostFtdcMoneyType	WithdrawLimit;
		///���𵥱��޶�
		TThostFtdcMoneyType	WithdrawLimitByTrade;
		///�����ʽ�
		TThostFtdcMoneyType	Available;
		///�ѳ�����
		TThostFtdcLargeVolumeType	WithdrawedVolume;
		///�ѳ����
		TThostFtdcMoneyType	WithdrawedAmount;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	///��ѯKingstar�����¼�֪ͨ
	struct CKSQryTradingNoticeField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Ϣ����
		TKSInfoTypeType InfoType;
		///ȷ�ϱ�־
		TKSConfirmFlagType ConfirmFlag;
		///��ʼʱ��
		TThostFtdcTimeType	TimeStart;
		///����ʱ��
		TThostFtdcTimeType	TimeEnd;
	};

	///�û��¼�֪ͨ
	struct CKSTradingNoticeField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Ϣ����
		TKSInfoTypeType InfoType;
		///��ϢժҪ
		TThostFtdcDigestType	InfoDigest;
		///��Ϣ����
		TThostFtdcContentType	FieldContent;
		///��������
		TThostFtdcTimeType	SendDate;
		///����ʱ��
		TThostFtdcTimeType	SendTime;
		///���к�
		TThostFtdcSequenceNoType	SequenceNo;
		///ȷ�ϱ�־
		TKSConfirmFlagType ConfirmFlag;
	};

	///�û��˲�Ʒ��Դ��ѯ
	struct CKSQryUserProductUrlField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///�û��˲�Ʒ��Ϣ
		TThostFtdcProductInfoType	 UserProductInfo;
	};

	///�û��˲�Ʒ��Դ
	struct CKSUserProductUrlField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///�û��˲�Ʒ��Ϣ
		TThostFtdcProductInfoType	 UserProductInfo;
		///�û��˲�Ʒ���°汾��
		TKSProductVersionType	 LastProductVersion;
		///�û��˲�Ʒ������Ͱ汾��
		TKSProductVersionType	 MinUseProductVersion;
		///�û��˲�Ʒ��������Ͱ汾��
		TKSProductVersionType	 MinUpdateVersion;
		///�û��˲�Ʒ���°汾��װ����С
		TThostFtdcLargeVolumeType  InstallPackSize;
		///�û��˲�Ʒ���°汾��������
		TThostFtdcTradeDateType	 PublishDate;
		///�û��˲�Ʒ���°汾˵��
		TThostFtdcUserProductMemoType  ProductMemo;
		///�û��˲�Ʒ��ԴUrl��ַ
		TThostFtdcFunctionUrlType Url;
	};

	///��ѯ�ͻ����׼���
	struct CKSQryInvestorTradeLevelField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType BrokerID;
		///����������
		TThostFtdcExchangeIDType ExchangeID;
		///��Ʒ����
		TThostFtdcInstrumentIDType ProductID;
	};

	///�ͻ����׼���
	struct CKSInvestorTradeLevelField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType ExchangeID;
		///��Ʒ����
		TThostFtdcInstrumentIDType ProductID;
		///���׼���
		TKSTradeLevelType TradeLevel;
	};

	///��ѯ�����޹����
	struct CKSQryPurchaseLimitAmtField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType BrokerID;
		///����������
		TThostFtdcExchangeIDType ExchangeID;
	};

	///�����޹����
	struct CKSPurchaseLimitAmtField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType ExchangeID;
		///�޹����
		TThostFtdcMoneyType	PurLimitAmt;
	};

	///��ѯ�����޲ֶ��
	struct CKSQryPositionLimitVolField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType BrokerID;
		///����������
		TThostFtdcExchangeIDType ExchangeID;
		///��Ʒ����
		TThostFtdcInstrumentIDType ProductID;
		///�����Ա�־
		TKSProtectFlagType ProtectFlag;
		///��ȨC/P��־
		TThostFtdcOptionsTypeType OptionsType;
		///���Ʒ�Χ
		TKSControlRangeType ControlRange;
	};

	///��ѯ�����޲ֶ��
	struct CKSPositionLimitVolField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType ExchangeID;
		///��Ʒ����
		TThostFtdcInstrumentIDType ProductID;
		///�����Ա�־
		TKSProtectFlagType ProtectFlag;
		///��ȨC/P��־
		TThostFtdcOptionsTypeType OptionsType;
		///���Ʒ�Χ
		TKSControlRangeType ControlRange;
		///�޲ֶ��
		TThostFtdcVolumeType	PosiLimitVol;
	};

	///��ѯ��ʷ����
	struct CKSQryHistoryOrderField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///���ر������
		TThostFtdcOrderLocalIDType	OrderLocalID;
		///Ʒ�ִ���
		TThostFtdcInstrumentIDType	ProductID;
		///��ʼ����
		TThostFtdcDateType	OrderDataStart;
		///��������
		TThostFtdcDateType	OrderDataEnd;
	};

	///��ѯ��ʷ�ɽ�
	struct CKSQryHistoryTradeField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///Ʒ�ִ���
		TThostFtdcInstrumentIDType	ProductID;
		///��ʼ����
		TThostFtdcDateType	TradeDataStart;
		///��������
		TThostFtdcDateType	TradeDataEnd;
	};

	///��ʷ����
	struct CKSHistoryOrderField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///�ͻ�����
		TThostFtdcIndividualNameType	CustomerName;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///���ر������
		TThostFtdcOrderLocalIDType	OrderLocalID;
		///�걨ʱ��
		TThostFtdcTimeType	InsertTime;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///�ɽ��۸�
		TThostFtdcPriceType	TradePrice;
		///�ɽ����
		TThostFtdcMoneyType	TradeAmount;
		///�ɽ�����
		TThostFtdcVolumeType	VolumeTraded;
		///����ⶳ���
		TThostFtdcMoneyType	FrozenAmount;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///���
		TThostFtdcSequenceNoType	SequenceNo;
		///��������
		TThostFtdcDirectionType	Direction;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///�û��˲�Ʒ��Ϣ
		TThostFtdcProductInfoType	UserProductInfo;
		///������
		TThostFtdcRequestIDType	RequestID;
		///��������
		TThostFtdcOrderRefType	OrderRef;
		///ǰ�ñ��
		TThostFtdcFrontIDType	FrontID;
		///�Ự���
		TThostFtdcSessionIDType	SessionID;
		///ί�м۸�
		TThostFtdcPriceType	OrderPrice;
		///ί����Դ
		TThostFtdcOrderSourceType	OrderSource;
		///ί������
		TThostFtdcDateType	InsertDate;
		///ί��ʱ��
		TThostFtdcTimeType	OrderTime;
		///ί������
		TThostFtdcVolumeType	VolumeTotalOriginal;
		///ί��״̬
		TThostFtdcOrderStatusType	OrderStatus;
		///��Ʒ����
		TThostFtdcInstrumentIDType	ProductID;
		///��Ʒ����
		TThostFtdcProductNameType	ProductName;
		///��Ʒ����
		TThostFtdcProductClassType	ProductClass;
		///Ͷ��������ƽ��־
		TThostFtdcOffsetFlagType	OffsetFlag;
		///ҵ����������
		TThostFtdcFunctionNameType	FunctionName;
	};

	///��ʷ�ɽ�
	struct CKSHistoryTradeField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///�ͻ�����
		TThostFtdcIndividualNameType	CustomerName;
		///���ر������
		TThostFtdcOrderLocalIDType	OrderLocalID;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Ʒ����
		TThostFtdcInstrumentIDType	ProductID;
		///��Ʒ����
		TThostFtdcProductNameType	ProductName;
		///�ɽ�����
		TThostFtdcVolumeType	VolumeTraded;
		///�ɽ����
		TThostFtdcMoneyType	TradeAmount;
		///�ɽ�����
		TThostFtdcDateType	TradeDate;
		///�ɽ�ʱ��
		TThostFtdcTimeType	TradeTime;
		///Ͷ��������ƽ��־
		TThostFtdcOffsetFlagType	OffsetFlag;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///������
		TThostFtdcMoneyType	Commission;
		///��ע
		TThostFtdcMemoType	Memo;
		///����ʱ��
		TThostFtdcTimeType	TraderOfferTime;
		///�ɽ��۸�
		TThostFtdcPriceType	TradePrice;	
		///��Ȩ���ױ���
		TThostFtdcClientIDType	ClientID;
		///��Ȩ����
		TThostFtdcOptionsTypeType	OptionsType;
		///���ұ�־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///Ȩ��������
		TThostFtdcVolumeType RoyaltyVolume;
		///���������
		TThostFtdcVolumeType ObligationVolume;
		///Ȩ���ֽ��
		TThostFtdcMoneyType	RoyaltyAmount;
		///����ֽ��
		TThostFtdcMoneyType	ObligationAmount;
		///�ɽ����
		TThostFtdcTradeIDType	TradeID;
		///ҵ����������
		TThostFtdcFunctionNameType	FunctionName;
	};

	///�����ϲ�ֵ�����ѯ����
	struct CKSQryMaxCombActionVolumeField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ͷ�����
		TThostFtdcHedgeFlagType	HedgeFlag;
		///��������
		TThostFtdcDirectionType	Direction;
		//��ϲ�ֱ��
		TThostFtdcCombDirectionType	CombDirection;
	};

	///��ϲ�ֵ������
	struct CKSMaxCombActionVolumeField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///�����������
		TThostFtdcVolumeType	MaxCombVolume;
		///���ɲ������
		TThostFtdcVolumeType	MaxActionVolume;
	};

	///��ѯ��Ȩָ����ϸ
	struct CKSQryHistoryAssignmentField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Ʒ����
		TThostFtdcInstrumentIDType	ProductID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ͷ�����
		TThostFtdcHedgeFlagType	HedgeFlag;
		///��Ȩ����
		TThostFtdcOptionsTypeType	OptionsType;
		///������
		TThostFtdcDateType	DeliveryMonth;
		///�ֲַ���
		TKSSOPosiDirectionType PosiDirection;
	};

	///��ѯ��Ȩ������ϸ
	struct CKSQrySODelivDetailField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Ʒ����
		TThostFtdcInstrumentIDType	ProductID;
		///������
		TThostFtdcDateType	DeliveryMonth;
		///���ɽ��ղ�ѯ����
		TKSSODelivModeType	DelivMode;
	};

	///�Զ���Ȩִ�в���
	struct CKSAutoExecOrderActionField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///�Զ���Ȩ��ֵ(0-���Զ���Ȩ,��0-��������ֵ���Զ���Ȩ(20����20%))
		TThostFtdcVolumeType RangeVol;
	};

	///��Ȩָ����ϸ
	struct CKSHistoryAssignmentField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��������
		TThostFtdcTradeDateType	TradingDay;
		///��Ʒ����
		TThostFtdcInstrumentIDType	ProductID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///���֤ȯ����
		TThostFtdcInstrumentIDType	StockInstr;
		///Ͷ�����
		TThostFtdcHedgeFlagType	HedgeFlag;
		///��Ȩ����
		TThostFtdcOptionsTypeType	OptionsType;
		///�ֲַ���
		TKSSOPosiDirectionType PosiDirection;
		///ִ�м�
		TThostFtdcPriceType	StrikePrice;
		///��Ȩָ������
		TThostFtdcVolumeType ExecVol;
		///���֤ȯӦ�ո�����
		TThostFtdcVolumeType IOVol;
		///Ӧ�ո����
		TThostFtdcMoneyType	IOAmt;
		///��Ȩ������
		TThostFtdcDateType	DelivDate;
	};

	///��Ȩ������ϸ
	struct CKSSODelivDetailField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///���֤ȯ����
		TThostFtdcInstrumentIDType	StockInstr;
		///Ӧ��/Ӧ��/��ȯ֤ȯ����
		TThostFtdcVolumeType IOVol;
		///ʵ�ո�����
		TThostFtdcVolumeType IOVolInFact;
		///�����
		TThostFtdcPriceType	SettlementPrice;
		///��ȯ��ֵ/������
		TThostFtdcMoneyType	SettlementAmt;
		///��Ȩ������
		TThostFtdcDateType	DelivDate;
		///ҵ����������
		TThostFtdcFunctionNameType	FunctionName;
	};

}	// end of namespace KingstarAPI
#endif