#ifndef __KSOPTIONAPISTRUCT_H_INCLUDED__
#define __KSOPTIONAPISTRUCT_H_INCLUDED__
/**
* @file KSOptionApiStruct.h
* @author kevin.shen
* system��KSTradeAPI
* company��Kingstar
* history��
* 2013/11/18	kevin.shen	 create
*/

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "KSUserApiStructEx.h"
#include "KSOptionApiDataType.h"

namespace KingstarAPI
{
///����ִ���������
struct CThostFtdcInputKSExecOrderActionField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///ִ�������������
	TThostFtdcOrderActionRefType	ExecOrderActionRef;
	///ִ����������
	TThostFtdcOrderRefType	ExecOrderRef;
	///������
	TThostFtdcRequestIDType	RequestID;
	///ǰ�ñ��
	TThostFtdcFrontIDType	FrontID;
	///�Ự���
	TThostFtdcSessionIDType	SessionID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///ִ������������
	TThostFtdcExecOrderSysIDType	ExecOrderSysID;
	///������־
	TThostFtdcActionFlagType	ActionFlag;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///������־
	TThostFtdcDirectionType	Direction;
	///ִ������  -- ��Ӧ�Ƿ����ڶԳ�
	TThostFtdcStrikeTypeType StrikeType;
	///�Ƿ���ͷ��
	TThostFtdcIsHoldType IsHold;
};

///ִ������
struct CThostFtdcKSExecOrderField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///ִ����������
	TThostFtdcOrderRefType	ExecOrderRef;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///����
	TThostFtdcVolumeType	Volume;
	///������
	TThostFtdcRequestIDType	RequestID;
	///ҵ��Ԫ
	TThostFtdcBusinessUnitType	BusinessUnit;
	///��ƽ��־
	TThostFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TThostFtdcHedgeFlagType	HedgeFlag;
	///����ִ��������
	TThostFtdcOrderLocalIDType	ExecOrderLocalID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TThostFtdcClientIDType	ClientID;
	///��Լ�ڽ������Ĵ���
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///����������Ա����
	TThostFtdcTraderIDType	TraderID;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///ִ�������ύ״̬
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///������ʾ���
	TThostFtdcSequenceNoType	NotifySequence;
	///������
	TThostFtdcDateType	TradingDay;
	///������
	TThostFtdcSettlementIDType	SettlementID;
	///ִ��������
	TThostFtdcExecOrderSysIDType	ExecOrderSysID;
	///��������
	TThostFtdcDateType	InsertDate;
	///����ʱ��
	TThostFtdcTimeType	InsertTime;
	///����ʱ��
	TThostFtdcTimeType	CancelTime;
	///ִ�н��
	TThostFtdcExecResultType	ExecResult;
	///�����Ա���
	TThostFtdcParticipantIDType	ClearingPartID;
	///���
	TThostFtdcSequenceNoType	SequenceNo;
	///ǰ�ñ��
	TThostFtdcFrontIDType	FrontID;
	///�Ự���
	TThostFtdcSessionIDType	SessionID;
	///�û��˲�Ʒ��Ϣ
	TThostFtdcProductInfoType	UserProductInfo;
	///״̬��Ϣ
	TThostFtdcErrorMsgType	StatusMsg;
	///�����û�����
	TThostFtdcUserIDType	ActiveUserID;
	///���͹�˾�������
	TThostFtdcSequenceNoType	BrokerExecOrderSeq;
	///��������
	TKSOptionApplyFlagType OptionApplyFlag;
	///��Ʒ����
	TThostFtdcInstrumentIDType	ProductID;
	///������־
	TThostFtdcDirectionType	Direction;
	///ִ������  -- ��Ӧ�Ƿ����ڶԳ�
	TThostFtdcStrikeTypeType StrikeType;
	///�Ƿ���ͷ��
	TThostFtdcIsHoldType IsHold;
};

///ִ�������ѯ
struct CThostFtdcQryKSExecOrderField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///ִ��������
	TThostFtdcExecOrderSysIDType	ExecOrderSysID;
	///��ʼʱ��
	TThostFtdcTimeType	InsertTimeStart;
	///����ʱ��
	TThostFtdcTimeType	InsertTimeEnd;
	///Ͷ���ױ���־
	TThostFtdcHedgeFlagType	HedgeFlag;
	///��������
	TKSOptionApplyFlagType OptionApplyFlag;
	///��Ʒ����
	TThostFtdcInstrumentIDType	ProductID;
};

///�����ִ������ 
struct CThostFtdcInputKSExecOrderField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///ִ����������
	TThostFtdcOrderRefType	ExecOrderRef;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///����
	TThostFtdcVolumeType	Volume;
	///������
	TThostFtdcRequestIDType	RequestID;
	///ҵ��Ԫ
	TThostFtdcBusinessUnitType	BusinessUnit;
	///��ƽ��־
	TThostFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TThostFtdcHedgeFlagType	HedgeFlag;
	///������־
	TThostFtdcDirectionType	Direction;
	///ִ������  -- ��Ӧ�Ƿ����ڶԳ�
	TThostFtdcStrikeTypeType StrikeType;
	///�Ƿ���ͷ��
	TThostFtdcIsHoldType IsHold;
	///��������
	TKSOptionApplyFlagType OptionApplyFlag;
};

///�����ѯ��������
struct CKSQryExecOrderVolumeField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///Ͷ���ױ���־
	TThostFtdcHedgeFlagType	HedgeFlag;
	///��������
	TKSOptionApplyFlagType OptionApplyFlag;
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

///�����ѯ�ֻ���Ȩ��������
struct CKSQrySpotOptionParamsField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///��Ʒ����
	TThostFtdcInstrumentIDType	ProductID;
	///��Ʒ����
	TThostFtdcProductClassType	ProductClass;
};

///�����ѯ�ֻ���Ȩ��������
struct CKSSpotOptionParamsField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///��Ʒ����
	TThostFtdcInstrumentIDType	ProductID;
	///���ȯ������
	TThostFtdcPriceType	StockPreClosePrice;
	///��Ʒ����
	TThostFtdcProductClassType	ProductClass;
};

//�����ѯ��Ȩ��Լ�����Ϣ����
struct CKSQryOptionInsInfoField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
};

//�����ѯ��Ȩ��Լ�����Ϣ����
struct CKSOptionInsInfoField
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
	///��ͱ���ϵ������
	TThostFtdcVolumeType RiskFactorNum;
	///��ͱ���ϵ����ĸ
	TThostFtdcVolumeType	RiskFactorDen;
	///��λ���֣���Ȩ��Լ��С��֤��
	TThostFtdcMoneyType	MinMargin;
};

///�����ѯ������Ȩ������������
struct CKSQryStockOptionInsCommRateField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
};

///�����ѯ������Ȩ��Լ��������
struct CKSStockOptionInsCommRateField
{
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///������������
	TThostFtdcRatioType	OpenRatioByMoney;
	///����������
	TThostFtdcRatioType	OpenRatioByVolume;
	///ƽ����������
	TThostFtdcRatioType	CloseRatioByMoney;
	///ƽ��������
	TThostFtdcRatioType	CloseRatioByVolume;
	///ִ����������
	TThostFtdcRatioType	StrikeRatioByMoney;
	///ִ��������
	TThostFtdcRatioType	StrikeRatioByVolume;
};

///�����ѯ������Ȩ��֤��������
struct CKSQryStockOptionInsMarginRateField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
};

///�����ѯ������Ȩ��֤����
struct CKSStockOptionInsMarginRateField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///��֤����
	TThostFtdcRatioType	MarginRateByMoney;
	///��ǰ��֤����
	TThostFtdcMoneyType	CurrMargin;
};

///KS��Ȩ����
struct CThostFtdcKSExecOrderRtnField
{
	///����ṹ��
	CThostFtdcExecOrderField	 ExecOrder;
	///��������
	TKSOptionApplyFlagType OptionApplyFlag;
	///������Ȩ����״̬
	TKSStockOptionNonTradingOrderStatusType	StockOptionOrderStatus;
	///������־
	TThostFtdcDirectionType	Direction;
	///ִ������  -- ��Ӧ�Ƿ����ڶԳ�
	TThostFtdcStrikeTypeType StrikeType;
	///�Ƿ���ͷ��
	TThostFtdcIsHoldType IsHold;
};

///���������Ȩָ����Ϣ
struct CKSQryStockOptionAssignmentField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
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

}	// end of namespace KingstarAPI
#endif