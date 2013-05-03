/////////////////////////////////////////////////////////////////////////
/// ���˴� KSFT C++ ==> .Net Framework Adapter
/// Summary: ��������Ӧ��ӿ��йܸ���
/// Author:	ksftapi@gmail.com
/// Date: 20130304
/// Update List��
///   20130304 ��ӽӿ�
///   20130314 �޸�
///   20130326 ���ע��
/////////////////////////////////////////////////////////////////////////

#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace KSFT
{
	///<summary>
	///����������
	///</summary>
	public enum struct EnumTeResumeType//THOST_TE_RESUME_TYPE
	{
		THOST_TERT_RESTART = 0,
		THOST_TERT_RESUME,
		THOST_TERT_QUICK
	};

	/// <summary>
	/// TFtdcExchangePropertyType��һ����������������
	/// </summary>
	public enum struct EnumExchangePropertyType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal = (Byte)'0',

		/// <summary>
		/// ���ݳɽ����ɱ���
		/// </summary>
		GenOrderByTrade = (Byte)'1'
	};

	/// <summary>
	/// TFtdcIdCardTypeType��һ��֤����������
	/// </summary>
	public enum struct EnumIdCardTypeType:Byte
	{
		/// <summary>
		/// ��֯��������
		/// </summary>
		EID = (Byte)'0',

		/// <summary>
		/// ���֤
		/// </summary>
		IDCard = (Byte)'1',

		/// <summary>
		/// ����֤
		/// </summary>
		OfficerIDCard = (Byte)'2',

		/// <summary>
		/// ����֤
		/// </summary>
		PoliceIDCard = (Byte)'3',

		/// <summary>
		/// ʿ��֤
		/// </summary>
		SoldierIDCard = (Byte)'4',

		/// <summary>
		/// ���ڲ�
		/// </summary>
		HouseholdRegister = (Byte)'5',

		/// <summary>
		/// ����
		/// </summary>
		Passport = (Byte)'6',

		/// <summary>
		/// ̨��֤
		/// </summary>
		TaiwanCompatriotIDCard = (Byte)'7',

		/// <summary>
		/// ����֤
		/// </summary>
		HomeComingCard = (Byte)'8',

		/// <summary>
		/// Ӫҵִ�պ�
		/// </summary>
		LicenseNo = (Byte)'9',

		/// <summary>
		/// ����֤��
		/// </summary>
		OtherCard = (Byte)'x'
	};

	/// <summary>
	/// TFtdcInvestorRangeType��һ��Ͷ���߷�Χ����
	/// </summary>
	public enum struct EnumInvestorRangeType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		All = (Byte)'1',

		/// <summary>
		/// Ͷ������
		/// </summary>
		Group = (Byte)'2',

		/// <summary>
		/// ��һͶ����
		/// </summary>
		Single = (Byte)'3'
	};

	/// <summary>
	/// TFtdcDepartmentRangeType��һ��Ͷ���߷�Χ����
	/// </summary>
	public enum struct EnumDepartmentRangeType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		All = (Byte)'1',

		/// <summary>
		/// ��֯�ܹ�
		/// </summary>
		Group = (Byte)'2',

		/// <summary>
		/// ��һͶ����
		/// </summary>
		Single = (Byte)'3'
	};

	/// <summary>
	/// TFtdcDataSyncStatusType��һ������ͬ��״̬����
	/// </summary>
	public enum struct EnumDataSyncStatusType:Byte
	{
		/// <summary>
		/// δͬ��
		/// </summary>
		Asynchronous = (Byte)'1',

		/// <summary>
		/// ͬ����
		/// </summary>
		Synchronizing = (Byte)'2',

		/// <summary>
		/// ��ͬ��
		/// </summary>
		Synchronized = (Byte)'3'
	};

	/// <summary>
	/// TFtdcBrokerDataSyncStatusType��һ�����͹�˾����ͬ��״̬����
	/// </summary>
	public enum struct EnumBrokerDataSyncStatusType:Byte
	{
		/// <summary>
		/// ��ͬ��
		/// </summary>
		Synchronized = (Byte)'1',

		/// <summary>
		/// ͬ����
		/// </summary>
		Synchronizing = (Byte)'2'
	};

	/// <summary>
	/// TFtdcExchangeConnectStatusType��һ������������״̬����
	/// </summary>
	public enum struct EnumExchangeConnectStatusType:Byte
	{
		/// <summary>
		/// û���κ�����
		/// </summary>
		NoConnection = (Byte)'1',

		/// <summary>
		/// �Ѿ�������Լ��ѯ����
		/// </summary>
		QryInstrumentSent = (Byte)'2',

		/// <summary>
		/// �Ѿ���ȡ��Ϣ
		/// </summary>
		GotInformation = (Byte)'9'
	};

	/// <summary>
	/// TFtdcTraderConnectStatusType��һ������������Ա����״̬����
	/// </summary>
	public enum struct EnumTraderConnectStatusType:Byte
	{
		/// <summary>
		/// û���κ�����
		/// </summary>
		NotConnected = (Byte)'1',

		/// <summary>
		/// �Ѿ�����
		/// </summary>
		Connected = (Byte)'2',

		/// <summary>
		/// �Ѿ�������Լ��ѯ����
		/// </summary>
		QryInstrumentSent = (Byte)'3',

		/// <summary>
		/// ����˽����
		/// </summary>
		SubPrivateFlow = (Byte)'4'
	};

	/// <summary>
	/// TFtdcFunctionCodeType��һ�����ܴ�������
	/// </summary>
	public enum struct EnumFunctionCodeType:Byte
	{
		/// <summary>
		/// �����첽��
		/// </summary>
		DataAsync = (Byte)'1',

		/// <summary>
		/// ǿ���û��ǳ�
		/// </summary>
		ForceUserLogout = (Byte)'2',

		/// <summary>
		/// ��������û�����
		/// </summary>
		UserPasswordUpdate = (Byte)'3',

		/// <summary>
		/// ������͹�˾����
		/// </summary>
		BrokerPasswordUpdate = (Byte)'4',

		/// <summary>
		/// ���Ͷ���߿���
		/// </summary>
		InvestorPasswordUpdate = (Byte)'5',

		/// <summary>
		/// ��������
		/// </summary>
		OrderInsert = (Byte)'6',

		/// <summary>
		/// ��������
		/// </summary>
		OrderAction = (Byte)'7',

		/// <summary>
		/// ͬ��ϵͳ����
		/// </summary>
		SyncSystemData = (Byte)'8',

		/// <summary>
		/// ͬ�����͹�˾����
		/// </summary>
		SyncBrokerData = (Byte)'9',

		/// <summary>
		/// ����ͬ�����͹�˾����
		/// </summary>
		BachSyncBrokerData = (Byte)'A',

		/// <summary>
		/// ������ѯ
		/// </summary>
		SuperQuery = (Byte)'B',

		/// <summary>
		/// ��������
		/// </summary>
		ParkedOrderInsert = (Byte)'C',

		/// <summary>
		/// ��������
		/// </summary>
		ParkedOrderAction = (Byte)'D',

		/// <summary>
		/// ͬ����̬����
		/// </summary>
		SyncOTP = (Byte)'E'
	};

	/// <summary>
	/// TFtdcBrokerFunctionCodeType��һ�����͹�˾���ܴ�������
	/// </summary>
	public enum struct EnumBrokerFunctionCodeType:Byte
	{
		/// <summary>
		/// ǿ���û��ǳ�
		/// </summary>
		ForceUserLogout = (Byte)'1',

		/// <summary>
		/// ����û�����
		/// </summary>
		UserPasswordUpdate = (Byte)'2',

		/// <summary>
		/// ͬ�����͹�˾����
		/// </summary>
		SyncBrokerData = (Byte)'3',

		/// <summary>
		/// ����ͬ�����͹�˾����
		/// </summary>
		BachSyncBrokerData = (Byte)'4',

		/// <summary>
		/// ��������
		/// </summary>
		OrderInsert = (Byte)'5',

		/// <summary>
		/// ��������
		/// </summary>
		OrderAction = (Byte)'6',

		/// <summary>
		/// ȫ����ѯ
		/// </summary>
		AllQuery = (Byte)'7',

		/// <summary>
		/// ϵͳ���ܣ�����/�ǳ�/�޸������
		/// </summary>
		log = (Byte)'a',

		/// <summary>
		/// ������ѯ����ѯ�������ݣ����Լ���������ȳ���
		/// </summary>
		BaseQry = (Byte)'b',

		/// <summary>
		/// ���ײ�ѯ�����ɽ���ί��
		/// </summary>
		TradeQry = (Byte)'c',

		/// <summary>
		/// ���׹��ܣ�����������
		/// </summary>
		Trade = (Byte)'d',

		/// <summary>
		/// ����ת��
		/// </summary>
		Virement = (Byte)'e',

		/// <summary>
		/// ���ռ��
		/// </summary>
		Risk = (Byte)'f',

		/// <summary>
		/// ��ѯ/������ѯ�Ự�����˵�
		/// </summary>
		Session = (Byte)'g',

		/// <summary>
		/// ���֪ͨ����
		/// </summary>
		RiskNoticeCtl = (Byte)'h',

		/// <summary>
		/// ���֪ͨ����
		/// </summary>
		RiskNotice = (Byte)'i',

		/// <summary>
		/// �쿴���͹�˾�ʽ�Ȩ��
		/// </summary>
		BrokerDeposit = (Byte)'j',

		/// <summary>
		/// �ʽ��ѯ
		/// </summary>
		QueryFund = (Byte)'k',

		/// <summary>
		/// ������ѯ
		/// </summary>
		QueryOrder = (Byte)'l',

		/// <summary>
		/// �ɽ���ѯ
		/// </summary>
		QueryTrade = (Byte)'m',

		/// <summary>
		/// �ֲֲ�ѯ
		/// </summary>
		QueryPosition = (Byte)'n',

		/// <summary>
		/// �����ѯ
		/// </summary>
		QueryMarketData = (Byte)'o',

		/// <summary>
		/// �û��¼���ѯ
		/// </summary>
		QueryUserEvent = (Byte)'p',

		/// <summary>
		/// ����֪ͨ��ѯ
		/// </summary>
		QueryRiskNotify = (Byte)'q',

		/// <summary>
		/// ������ѯ
		/// </summary>
		QueryFundChange = (Byte)'r',

		/// <summary>
		/// Ͷ������Ϣ��ѯ
		/// </summary>
		QueryInvestor = (Byte)'s',

		/// <summary>
		/// ���ױ����ѯ
		/// </summary>
		QueryTradingCode = (Byte)'t',

		/// <summary>
		/// ǿƽ
		/// </summary>
		ForceClose = (Byte)'u',

		/// <summary>
		/// ѹ������
		/// </summary>
		PressTest = (Byte)'v',

		/// <summary>
		/// Ȩ�淴��
		/// </summary>
		RemainCalc = (Byte)'w',

		/// <summary>
		/// ���ֱֲ�֤��ָ��
		/// </summary>
		NetPositionInd = (Byte)'x',

		/// <summary>
		/// ����Ԥ��
		/// </summary>
		RiskPredict = (Byte)'y',

		/// <summary>
		/// ���ݵ���
		/// </summary>
		DataExport = (Byte)'z',

		/// <summary>
		/// ���ָ������
		/// </summary>
		RiskTargetSetup = (Byte)'A',

		/// <summary>
		/// ����Ԥ��
		/// </summary>
		MarketDataWarn = (Byte)'B',

		/// <summary>
		/// ͬ����̬����
		/// </summary>
		SyncOTP = (Byte)'E'
	};

	/// <summary>
	/// TFtdcOrderActionStatusType��һ����������״̬����
	/// </summary>
	public enum struct EnumOrderActionStatusType:Byte
	{
		/// <summary>
		/// �Ѿ��ύ
		/// </summary>
		Submitted = (Byte)'a',

		/// <summary>
		/// �Ѿ�����
		/// </summary>
		Accepted = (Byte)'b',

		/// <summary>
		/// �Ѿ����ܾ�
		/// </summary>
		Rejected = (Byte)'c'
	};

	/// <summary>
	/// TFtdcOrderStatusType��һ������״̬����
	/// </summary>
	public enum struct EnumOrderStatusType:Byte
	{
		/// <summary>
		/// ȫ���ɽ�
		/// </summary>
		AllTraded = (Byte)'0',

		/// <summary>
		/// ���ֳɽ����ڶ�����
		/// </summary>
		PartTradedQueueing = (Byte)'1',

		/// <summary>
		/// ���ֳɽ����ڶ�����
		/// </summary>
		PartTradedNotQueueing = (Byte)'2',

		/// <summary>
		/// δ�ɽ����ڶ�����
		/// </summary>
		NoTradeQueueing = (Byte)'3',

		/// <summary>
		/// δ�ɽ����ڶ�����
		/// </summary>
		NoTradeNotQueueing = (Byte)'4',

		/// <summary>
		/// ����
		/// </summary>
		Canceled = (Byte)'5',

		/// <summary>
		/// δ֪
		/// </summary>
		Unknown = (Byte)'a',

		/// <summary>
		/// ��δ����
		/// </summary>
		NotTouched = (Byte)'b',

		/// <summary>
		/// �Ѵ���
		/// </summary>
		Touched = (Byte)'c'
	};

	/// <summary>
	/// TFtdcOrderSubmitStatusType��һ�������ύ״̬����
	/// </summary>
	public enum struct EnumOrderSubmitStatusType:Byte
	{
		/// <summary>
		/// �Ѿ��ύ
		/// </summary>
		InsertSubmitted = (Byte)'0',

		/// <summary>
		/// �����Ѿ��ύ
		/// </summary>
		CancelSubmitted = (Byte)'1',

		/// <summary>
		/// �޸��Ѿ��ύ
		/// </summary>
		ModifySubmitted = (Byte)'2',

		/// <summary>
		/// �Ѿ�����
		/// </summary>
		Accepted = (Byte)'3',

		/// <summary>
		/// �����Ѿ����ܾ�
		/// </summary>
		InsertRejected = (Byte)'4',

		/// <summary>
		/// �����Ѿ����ܾ�
		/// </summary>
		CancelRejected = (Byte)'5',

		/// <summary>
		/// �ĵ��Ѿ����ܾ�
		/// </summary>
		ModifyRejected = (Byte)'6'
	};

	/// <summary>
	/// TFtdcPositionDateType��һ���ֲ���������
	/// </summary>
	public enum struct EnumPositionDateType:Byte
	{
		/// <summary>
		/// ���ճֲ�
		/// </summary>
		Today = (Byte)'1',

		/// <summary>
		/// ��ʷ�ֲ�
		/// </summary>
		History = (Byte)'2'
	};

	/// <summary>
	/// TFtdcPositionDateTypeType��һ���ֲ�������������
	/// </summary>
	public enum struct EnumPositionDateTypeType:Byte
	{
		/// <summary>
		/// ʹ����ʷ�ֲ�
		/// </summary>
		UseHistory = (Byte)'1',

		/// <summary>
		/// ��ʹ����ʷ�ֲ�
		/// </summary>
		NoUseHistory = (Byte)'2'
	};

	/// <summary>
	/// TFtdcTradingRoleType��һ�����׽�ɫ����
	/// </summary>
	public enum struct EnumTradingRoleType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Broker = (Byte)'1',

		/// <summary>
		/// ��Ӫ
		/// </summary>
		Host = (Byte)'2',

		/// <summary>
		/// ������
		/// </summary>
		Maker = (Byte)'3'
	};

	/// <summary>
	/// TFtdcProductClassType��һ����Ʒ��������
	/// </summary>
	public enum struct EnumProductClassType:Byte
	{
		/// <summary>
		/// �ڻ�
		/// </summary>
		Futures = (Byte)'1',

		/// <summary>
		/// ��Ȩ
		/// </summary>
		Options = (Byte)'2',

		/// <summary>
		/// ���
		/// </summary>
		Combination = (Byte)'3',

		/// <summary>
		/// ����
		/// </summary>
		Spot = (Byte)'4',

		/// <summary>
		/// ��ת��
		/// </summary>
		EFP = (Byte)'5'
	};

	/// <summary>
	/// TFtdcInstLifePhaseType��һ����Լ��������״̬����
	/// </summary>
	public enum struct EnumInstLifePhaseType:Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		NotStart = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Started = (Byte)'1',

		/// <summary>
		/// ͣ��
		/// </summary>
		Pause = (Byte)'2',

		/// <summary>
		/// ����
		/// </summary>
		Expired = (Byte)'3'
	};

	/// <summary>
	/// TFtdcDirectionType��һ��������������
	/// </summary>
	public enum struct EnumDirectionType:Byte
	{
		/// <summary>
		/// ��
		/// </summary>
		Buy = (Byte)'0',

		/// <summary>
		/// ��
		/// </summary>
		Sell = (Byte)'1'
	};

	/// <summary>
	/// TFtdcPositionTypeType��һ���ֲ���������
	/// </summary>
	public enum struct EnumPositionTypeType:Byte
	{
		/// <summary>
		/// ���ֲ�
		/// </summary>
		Net = (Byte)'1',

		/// <summary>
		/// �ۺϳֲ�
		/// </summary>
		Gross = (Byte)'2'
	};

	/// <summary>
	/// TFtdcPosiDirectionType��һ���ֲֶ�շ�������
	/// </summary>
	public enum struct EnumPosiDirectionType:Byte
	{
		/// <summary>
		/// ��
		/// </summary>
		Net = (Byte)'1',

		/// <summary>
		/// ��ͷ
		/// </summary>
		Long = (Byte)'2',

		/// <summary>
		/// ��ͷ
		/// </summary>
		Short = (Byte)'3'
	};

	/// <summary>
	/// TFtdcSysSettlementStatusType��һ��ϵͳ����״̬����
	/// </summary>
	public enum struct EnumSysSettlementStatusType:Byte
	{
		/// <summary>
		/// ����Ծ
		/// </summary>
		NonActive = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Startup = (Byte)'2',

		/// <summary>
		/// ����
		/// </summary>
		Operating = (Byte)'3',

		/// <summary>
		/// ����
		/// </summary>
		Settlement = (Byte)'4',

		/// <summary>
		/// �������
		/// </summary>
		SettlementFinished = (Byte)'5'
	};

	/// <summary>
	/// TFtdcRatioAttrType��һ��������������
	/// </summary>
	public enum struct EnumRatioAttrType:Byte
	{
		/// <summary>
		/// ���׷���
		/// </summary>
		Trade = (Byte)'0',

		/// <summary>
		/// �������
		/// </summary>
		Settlement = (Byte)'1'
	};

	/// <summary>
	/// TFtdcHedgeFlagType��һ��Ͷ���ױ���־����
	/// </summary>
	public enum struct EnumHedgeFlagType:Byte
	{
		/// <summary>
		/// Ͷ��
		/// </summary>
		Speculation = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Arbitrage = (Byte)'2',

		/// <summary>
		/// �ױ�
		/// </summary>
		Hedge = (Byte)'3'
	};

	/// <summary>
	/// TFtdcClientIDTypeType��һ�����ױ�����������
	/// </summary>
	public enum struct EnumClientIDTypeType:Byte
	{
		/// <summary>
		/// Ͷ��
		/// </summary>
		Speculation = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Arbitrage = (Byte)'2',

		/// <summary>
		/// �ױ�
		/// </summary>
		Hedge = (Byte)'3'
	};

	/// <summary>
	/// TFtdcOrderPriceTypeType��һ�������۸���������
	/// </summary>
	public enum struct EnumOrderPriceTypeType:Byte
	{
		/// <summary>
		/// �����
		/// </summary>
		AnyPrice = (Byte)'1',

		/// <summary>
		/// �޼�
		/// </summary>
		LimitPrice = (Byte)'2',

		/// <summary>
		/// ���ż�
		/// </summary>
		BestPrice = (Byte)'3',

		/// <summary>
		/// ���¼�
		/// </summary>
		LastPrice = (Byte)'4',

		/// <summary>
		/// ���¼۸����ϸ�1��ticks
		/// </summary>
		LastPricePlusOneTicks = (Byte)'5',

		/// <summary>
		/// ���¼۸����ϸ�2��ticks
		/// </summary>
		LastPricePlusTwoTicks = (Byte)'6',

		/// <summary>
		/// ���¼۸����ϸ�3��ticks
		/// </summary>
		LastPricePlusThreeTicks = (Byte)'7',

		/// <summary>
		/// ��һ��
		/// </summary>
		AskPrice1 = (Byte)'8',

		/// <summary>
		/// ��һ�۸����ϸ�1��ticks
		/// </summary>
		AskPrice1PlusOneTicks = (Byte)'9',

		/// <summary>
		/// ��һ�۸����ϸ�2��ticks
		/// </summary>
		AskPrice1PlusTwoTicks = (Byte)'A',

		/// <summary>
		/// ��һ�۸����ϸ�3��ticks
		/// </summary>
		AskPrice1PlusThreeTicks = (Byte)'B',

		/// <summary>
		/// ��һ��
		/// </summary>
		BidPrice1 = (Byte)'C',

		/// <summary>
		/// ��һ�۸����ϸ�1��ticks
		/// </summary>
		BidPrice1PlusOneTicks = (Byte)'D',

		/// <summary>
		/// ��һ�۸����ϸ�2��ticks
		/// </summary>
		BidPrice1PlusTwoTicks = (Byte)'E',

		/// <summary>
		/// ��һ�۸����ϸ�3��ticks
		/// </summary>
		BidPrice1PlusThreeTicks = (Byte)'F'
	};

	/// <summary>
	/// TFtdcOffsetFlagType��һ����ƽ��־����
	/// </summary>
	public enum struct EnumOffsetFlagType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Open = (Byte)'0',

		/// <summary>
		/// ƽ��
		/// </summary>
		Close = (Byte)'1',

		/// <summary>
		/// ǿƽ
		/// </summary>
		ForceClose = (Byte)'2',

		/// <summary>
		/// ƽ��
		/// </summary>
		CloseToday = (Byte)'3',

		/// <summary>
		/// ƽ��
		/// </summary>
		CloseYesterday = (Byte)'4',

		/// <summary>
		/// ǿ��
		/// </summary>
		ForceOff = (Byte)'5',

		/// <summary>
		/// ����ǿƽ
		/// </summary>
		LocalForceClose = (Byte)'6'
	};

	/// <summary>
	/// TFtdcForceCloseReasonType��һ��ǿƽԭ������
	/// </summary>
	public enum struct EnumForceCloseReasonType:Byte
	{
		/// <summary>
		/// ��ǿƽ
		/// </summary>
		NotForceClose = (Byte)'0',

		/// <summary>
		/// �ʽ���
		/// </summary>
		LackDeposit = (Byte)'1',

		/// <summary>
		/// �ͻ�����
		/// </summary>
		ClientOverPositionLimit = (Byte)'2',

		/// <summary>
		/// ��Ա����
		/// </summary>
		MemberOverPositionLimit = (Byte)'3',

		/// <summary>
		/// �ֲַ�������
		/// </summary>
		NotMultiple = (Byte)'4',

		/// <summary>
		/// Υ��
		/// </summary>
		Violation = (Byte)'5',

		/// <summary>
		/// ����
		/// </summary>
		Other = (Byte)'6',

		/// <summary>
		/// ��Ȼ���ٽ�����
		/// </summary>
		PersonDeliv = (Byte)'7'
	};

	/// <summary>
	/// TFtdcOrderTypeType��һ��������������
	/// </summary>
	public enum struct EnumOrderTypeType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal = (Byte)'0',

		/// <summary>
		/// ��������
		/// </summary>
		DeriveFromQuote = (Byte)'1',

		/// <summary>
		/// �������
		/// </summary>
		DeriveFromCombination = (Byte)'2',

		/// <summary>
		/// ��ϱ���
		/// </summary>
		Combination = (Byte)'3',

		/// <summary>
		/// ������
		/// </summary>
		ConditionalOrder = (Byte)'4',

		/// <summary>
		/// ������
		/// </summary>
		Swap = (Byte)'5'
	};

	/// <summary>
	/// TFtdcTimeConditionType��һ����Ч����������
	/// </summary>
	public enum struct EnumTimeConditionType:Byte
	{
		/// <summary>
		/// ������ɣ�������
		/// </summary>
		IOC = (Byte)'1',

		/// <summary>
		/// ������Ч
		/// </summary>
		GFS = (Byte)'2',

		/// <summary>
		/// ������Ч
		/// </summary>
		GFD = (Byte)'3',

		/// <summary>
		/// ָ������ǰ��Ч
		/// </summary>
		GTD = (Byte)'4',

		/// <summary>
		/// ����ǰ��Ч
		/// </summary>
		GTC = (Byte)'5',

		/// <summary>
		/// ���Ͼ�����Ч
		/// </summary>
		GFA = (Byte)'6'
	};

	/// <summary>
	/// TFtdcVolumeConditionType��һ���ɽ�����������
	/// </summary>
	public enum struct EnumVolumeConditionType:Byte
	{
		/// <summary>
		/// �κ�����
		/// </summary>
		AV = (Byte)'1',

		/// <summary>
		/// ��С����
		/// </summary>
		MV = (Byte)'2',

		/// <summary>
		/// ȫ������
		/// </summary>
		CV = (Byte)'3'
	};

	/// <summary>
	/// TFtdcContingentConditionType��һ��������������
	/// </summary>
	public enum struct EnumContingentConditionType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Immediately = (Byte)'1',

		/// <summary>
		/// ֹ��
		/// </summary>
		Touch = (Byte)'2',

		/// <summary>
		/// ֹӮ
		/// </summary>
		TouchProfit = (Byte)'3',

		/// <summary>
		/// Ԥ��
		/// </summary>
		ParkedOrder = (Byte)'4',

		/// <summary>
		/// ���¼۴���������
		/// </summary>
		LastPriceGreaterThanStopPrice = (Byte)'5',

		/// <summary>
		/// ���¼۴��ڵ���������
		/// </summary>
		LastPriceGreaterEqualStopPrice = (Byte)'6',

		/// <summary>
		/// ���¼�С��������
		/// </summary>
		LastPriceLesserThanStopPrice = (Byte)'7',

		/// <summary>
		/// ���¼�С�ڵ���������
		/// </summary>
		LastPriceLesserEqualStopPrice = (Byte)'8',

		/// <summary>
		/// ��һ�۴���������
		/// </summary>
		AskPriceGreaterThanStopPrice = (Byte)'9',

		/// <summary>
		/// ��һ�۴��ڵ���������
		/// </summary>
		AskPriceGreaterEqualStopPrice = (Byte)'A',

		/// <summary>
		/// ��һ��С��������
		/// </summary>
		AskPriceLesserThanStopPrice = (Byte)'B',

		/// <summary>
		/// ��һ��С�ڵ���������
		/// </summary>
		AskPriceLesserEqualStopPrice = (Byte)'C',

		/// <summary>
		/// ��һ�۴���������
		/// </summary>
		BidPriceGreaterThanStopPrice = (Byte)'D',

		/// <summary>
		/// ��һ�۴��ڵ���������
		/// </summary>
		BidPriceGreaterEqualStopPrice = (Byte)'E',

		/// <summary>
		/// ��һ��С��������
		/// </summary>
		BidPriceLesserThanStopPrice = (Byte)'F',

		/// <summary>
		/// ��һ��С�ڵ���������
		/// </summary>
		BidPriceLesserEqualStopPrice = (Byte)'H'
	};

	/// <summary>
	/// TFtdcActionFlagType��һ��������־����
	/// </summary>
	public enum struct EnumActionFlagType:Byte
	{
		/// <summary>
		/// ɾ��
		/// </summary>
		Delete = (Byte)'0',

		/// <summary>
		/// �޸�
		/// </summary>
		Modify = (Byte)'3'
	};

	/// <summary>
	/// TFtdcTradingRightType��һ������Ȩ������
	/// </summary>
	public enum struct EnumTradingRightType:Byte
	{
		/// <summary>
		/// ���Խ���
		/// </summary>
		Allow = (Byte)'0',

		/// <summary>
		/// ֻ��ƽ��
		/// </summary>
		CloseOnly = (Byte)'1',

		/// <summary>
		/// ���ܽ���
		/// </summary>
		Forbidden = (Byte)'2'
	};

	/// <summary>
	/// TFtdcOrderSourceType��һ��������Դ����
	/// </summary>
	public enum struct EnumOrderSourceType:Byte
	{
		/// <summary>
		/// ���Բ�����
		/// </summary>
		Participant = (Byte)'0',

		/// <summary>
		/// ���Թ���Ա
		/// </summary>
		Administrator = (Byte)'1'
	};

	/// <summary>
	/// TFtdcTradeTypeType��һ���ɽ���������
	/// </summary>
	public enum struct EnumTradeTypeType:Byte
	{
		/// <summary>
		/// ��ͨ�ɽ�
		/// </summary>
		Common = (Byte)'0',

		/// <summary>
		/// ��Ȩִ��
		/// </summary>
		OptionsExecution = (Byte)'1',

		/// <summary>
		/// OTC�ɽ�
		/// </summary>
		OTC = (Byte)'2',

		/// <summary>
		/// ��ת�������ɽ�
		/// </summary>
		EFPDerived = (Byte)'3',

		/// <summary>
		/// ��������ɽ�
		/// </summary>
		CombinationDerived = (Byte)'4'
	};

	/// <summary>
	/// TFtdcPriceSourceType��һ���ɽ�����Դ����
	/// </summary>
	public enum struct EnumPriceSourceType:Byte
	{
		/// <summary>
		/// ǰ�ɽ���
		/// </summary>
		LastPrice = (Byte)'0',

		/// <summary>
		/// ��ί�м�
		/// </summary>
		Buy = (Byte)'1',

		/// <summary>
		/// ��ί�м�
		/// </summary>
		Sell = (Byte)'2'
	};

	/// <summary>
	/// TFtdcInstrumentStatusType��һ����Լ����״̬����
	/// </summary>
	public enum struct EnumInstrumentStatusType:Byte
	{
		/// <summary>
		/// ����ǰ
		/// </summary>
		BeforeTrading = (Byte)'0',

		/// <summary>
		/// �ǽ���
		/// </summary>
		NoTrading = (Byte)'1',

		/// <summary>
		/// ��������
		/// </summary>
		Continous = (Byte)'2',

		/// <summary>
		/// ���Ͼ��۱���
		/// </summary>
		AuctionOrdering = (Byte)'3',

		/// <summary>
		/// ���Ͼ��ۼ۸�ƽ��
		/// </summary>
		AuctionBalance = (Byte)'4',

		/// <summary>
		/// ���Ͼ��۴��
		/// </summary>
		AuctionMatch = (Byte)'5',

		/// <summary>
		/// ����
		/// </summary>
		Closed = (Byte)'6'
	};

	/// <summary>
	/// TFtdcInstStatusEnterReasonType��һ��Ʒ�ֽ��뽻��״̬ԭ������
	/// </summary>
	public enum struct EnumInstStatusEnterReasonType:Byte
	{
		/// <summary>
		/// �Զ��л�
		/// </summary>
		Automatic = (Byte)'1',

		/// <summary>
		/// �ֶ��л�
		/// </summary>
		Manual = (Byte)'2',

		/// <summary>
		/// �۶�
		/// </summary>
		Fuse = (Byte)'3'
	};

	/// <summary>
	/// TFtdcBatchStatusType��һ������״̬����
	/// </summary>
	public enum struct EnumBatchStatusType:Byte
	{
		/// <summary>
		/// δ�ϴ�
		/// </summary>
		NoUpload = (Byte)'1',

		/// <summary>
		/// ���ϴ�
		/// </summary>
		Uploaded = (Byte)'2',

		/// <summary>
		/// ���ʧ��
		/// </summary>
		Failed = (Byte)'3'
	};

	/// <summary>
	/// TFtdcReturnStyleType��һ����Ʒ�ַ�����ʽ����
	/// </summary>
	public enum struct EnumReturnStyleType:Byte
	{
		/// <summary>
		/// ������Ʒ��
		/// </summary>
		All = (Byte)'1',

		/// <summary>
		/// ��Ʒ��
		/// </summary>
		ByProduct = (Byte)'2'
	};

	/// <summary>
	/// TFtdcReturnPatternType��һ������ģʽ����
	/// </summary>
	public enum struct EnumReturnPatternType:Byte
	{
		/// <summary>
		/// ���ɽ�����
		/// </summary>
		ByVolume = (Byte)'1',

		/// <summary>
		/// ������������
		/// </summary>
		ByFeeOnHand = (Byte)'2'
	};

	/// <summary>
	/// TFtdcReturnLevelType��һ��������������
	/// </summary>
	public enum struct EnumReturnLevelType:Byte
	{
		/// <summary>
		/// ����1
		/// </summary>
		Level1 = (Byte)'1',

		/// <summary>
		/// ����2
		/// </summary>
		Level2 = (Byte)'2',

		/// <summary>
		/// ����3
		/// </summary>
		Level3 = (Byte)'3',

		/// <summary>
		/// ����4
		/// </summary>
		Level4 = (Byte)'4',

		/// <summary>
		/// ����5
		/// </summary>
		Level5 = (Byte)'5',

		/// <summary>
		/// ����6
		/// </summary>
		Level6 = (Byte)'6',

		/// <summary>
		/// ����7
		/// </summary>
		Level7 = (Byte)'7',

		/// <summary>
		/// ����8
		/// </summary>
		Level8 = (Byte)'8',

		/// <summary>
		/// ����9
		/// </summary>
		Level9 = (Byte)'9'
	};

	/// <summary>
	/// TFtdcReturnStandardType��һ��������׼����
	/// </summary>
	public enum struct EnumReturnStandardType:Byte
	{
		/// <summary>
		/// �ֽ׶η���
		/// </summary>
		ByPeriod = (Byte)'1',

		/// <summary>
		/// ��ĳһ��׼
		/// </summary>
		ByStandard = (Byte)'2'
	};

	/// <summary>
	/// TFtdcMortgageTypeType��һ����Ѻ��������
	/// </summary>
	public enum struct EnumMortgageTypeType:Byte
	{
		/// <summary>
		/// �ʳ�
		/// </summary>
		Out = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		In = (Byte)'1'
	};

	/// <summary>
	/// TFtdcInvestorSettlementParamIDType��һ��Ͷ���߽��������������
	/// </summary>
	public enum struct EnumInvestorSettlementParamIDType:Byte
	{
		/// <summary>
		/// ������֤��
		/// </summary>
		BaseMargin = (Byte)'1',

		/// <summary>
		/// ���Ȩ���׼
		/// </summary>
		LowestInterest = (Byte)'2',

		/// <summary>
		/// ��Ѻ����
		/// </summary>
		MortgageRatio = (Byte)'4',

		/// <summary>
		/// ��֤���㷨
		/// </summary>
		MarginWay = (Byte)'5',

		/// <summary>
		/// ���㵥(����)Ȩ����ڽ��
		/// </summary>
		BillDeposit = (Byte)'9'
	};

	/// <summary>
	/// TFtdcExchangeSettlementParamIDType��һ�����������������������
	/// </summary>
	public enum struct EnumExchangeSettlementParamIDType:Byte
	{
		/// <summary>
		/// ��Ѻ����
		/// </summary>
		MortgageRatio = (Byte)'1',

		/// <summary>
		/// �����ʽ�����
		/// </summary>
		OtherFundItem = (Byte)'2',

		/// <summary>
		/// �����ʽ��뽻���������
		/// </summary>
		OtherFundImport = (Byte)'3',

		/// <summary>
		/// ������������������ȡ��ʽ
		/// </summary>
		SHFEDelivFee = (Byte)'4',

		/// <summary>
		/// ������������������ȡ��ʽ
		/// </summary>
		DCEDelivFee = (Byte)'5',

		/// <summary>
		/// �н���������Ϳ��ý��
		/// </summary>
		CFFEXMinPrepa = (Byte)'6'
	};

	/// <summary>
	/// TFtdcSystemParamIDType��һ��ϵͳ������������
	/// </summary>
	public enum struct EnumSystemParamIDType:Byte
	{
		/// <summary>
		/// Ͷ���ߴ�����С����
		/// </summary>
		InvestorIDMinLength = (Byte)'1',

		/// <summary>
		/// Ͷ�����ʺŴ�����С����
		/// </summary>
		AccountIDMinLength = (Byte)'2',

		/// <summary>
		/// Ͷ���߿���Ĭ�ϵ�¼Ȩ��
		/// </summary>
		UserRightLogon = (Byte)'3',

		/// <summary>
		/// Ͷ���߽��׽��㵥�ɽ����ܷ�ʽ
		/// </summary>
		SettlementBillTrade = (Byte)'4',

		/// <summary>
		/// ͳһ�������½��ױ��뷽ʽ
		/// </summary>
		TradingCode = (Byte)'5',

		/// <summary>
		/// �����Ƿ��жϴ���δ���˵ĳ����ͷ����ʽ�
		/// </summary>
		CheckFund = (Byte)'6',

		/// <summary>
		/// �ϴ��Ľ����ļ���ʶ
		/// </summary>
		UploadSettlementFile = (Byte)'U',

		/// <summary>
		/// ���صı�֤�����ļ�
		/// </summary>
		DownloadCSRCFile = (Byte)'D',

		/// <summary>
		/// ���㵥�ļ���ʶ
		/// </summary>
		SettlementBillFile = (Byte)'S',

		/// <summary>
		/// ֤����ļ���ʶ
		/// </summary>
		CSRCOthersFile = (Byte)'C',

		/// <summary>
		/// Ͷ������Ƭ·��
		/// </summary>
		InvestorPhoto = (Byte)'P',

		/// <summary>
		/// �ϱ���֤������������
		/// </summary>
		CSRCData = (Byte)'R',

		/// <summary>
		/// ��������¼�뷽ʽ
		/// </summary>
		InvestorPwdModel = (Byte)'I'
	};

	/// <summary>
	/// TFtdcTradeParamIDType��һ������ϵͳ������������
	/// </summary>
	public enum struct EnumTradeParamIDType:Byte
	{
		/// <summary>
		/// ϵͳ�����㷨
		/// </summary>
		EncryptionStandard = (Byte)'E',

		/// <summary>
		/// ϵͳ�����㷨
		/// </summary>
		RiskMode = (Byte)'R',

		/// <summary>
		/// ϵͳ�����㷨�Ƿ�ȫ�� 0-�� 1-��
		/// </summary>
		RiskModeGlobal = (Byte)'G'
	};

	/// <summary>
	/// TFtdcFileIDType��һ���ļ���ʶ����
	/// </summary>
	public enum struct EnumFileIDType:Byte
	{
		/// <summary>
		/// �ʽ�����
		/// </summary>
		SettlementFund = (Byte)'F',

		/// <summary>
		/// �ɽ�����
		/// </summary>
		Trade = (Byte)'T',

		/// <summary>
		/// Ͷ���ֲ߳�����
		/// </summary>
		InvestorPosition = (Byte)'P',

		/// <summary>
		/// Ͷ���߷����ʽ�����
		/// </summary>
		SubEntryFund = (Byte)'O',

		/// <summary>
		/// ֣������ϳֲ�����
		/// </summary>
		CZCECombinationPos = (Byte)'C',

		/// <summary>
		/// �ϱ���֤������������
		/// </summary>
		CSRCData = (Byte)'R'
	};

	/// <summary>
	/// TFtdcFileTypeType��һ���ļ��ϴ���������
	/// </summary>
	public enum struct EnumFileTypeType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Settlement = (Byte)'0',

		/// <summary>
		/// �˶�
		/// </summary>
		Check = (Byte)'1'
	};

	/// <summary>
	/// TFtdcFileFormatType��һ���ļ���ʽ����
	/// </summary>
	public enum struct EnumFileFormatType:Byte
	{
		/// <summary>
		/// �ı��ļ�(.txt)
		/// </summary>
		Txt = (Byte)'0',

		/// <summary>
		/// ѹ���ļ�(.zip)
		/// </summary>
		Zip = (Byte)'1',

		/// <summary>
		/// DBF�ļ�(.dbf)
		/// </summary>
		DBF = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFileUploadStatusType��һ���ļ�״̬����
	/// </summary>
	public enum struct EnumFileUploadStatusType:Byte
	{
		/// <summary>
		/// �ϴ��ɹ�
		/// </summary>
		SucceedUpload = (Byte)'1',

		/// <summary>
		/// �ϴ�ʧ��
		/// </summary>
		FailedUpload = (Byte)'2',

		/// <summary>
		/// ����ɹ�
		/// </summary>
		SucceedLoad = (Byte)'3',

		/// <summary>
		/// ���벿�ֳɹ�
		/// </summary>
		PartSucceedLoad = (Byte)'4',

		/// <summary>
		/// ����ʧ��
		/// </summary>
		FailedLoad = (Byte)'5'
	};

	/// <summary>
	/// TFtdcTransferDirectionType��һ���Ʋַ�������
	/// </summary>
	public enum struct EnumTransferDirectionType:Byte
	{
		/// <summary>
		/// �Ƴ�
		/// </summary>
		Out = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		In = (Byte)'1'
	};

	/// <summary>
	/// TFtdcBankFlagType��һ������ͳһ��ʶ��������
	/// </summary>
	public enum struct EnumBankFlagType:Byte
	{
		/// <summary>
		/// ��������
		/// </summary>
		ICBC = (Byte)'1',

		/// <summary>
		/// ũҵ����
		/// </summary>
		ABC = (Byte)'2',

		/// <summary>
		/// �й�����
		/// </summary>
		BC = (Byte)'3',

		/// <summary>
		/// ��������
		/// </summary>
		CBC = (Byte)'4',

		/// <summary>
		/// ��ͨ����
		/// </summary>
		BOC = (Byte)'5',

		/// <summary>
		/// ��������
		/// </summary>
		Other = (Byte)'Z'
	};

	/// <summary>
	/// TFtdcSpecialCreateRuleType��һ������Ĵ�����������
	/// </summary>
	public enum struct EnumSpecialCreateRuleType:Byte
	{
		/// <summary>
		/// û�����ⴴ������
		/// </summary>
		NoSpecialRule = (Byte)'0',

		/// <summary>
		/// ����������
		/// </summary>
		NoSpringFestival = (Byte)'1'
	};

	/// <summary>
	/// TFtdcBasisPriceTypeType��һ�����ƻ�׼����������
	/// </summary>
	public enum struct EnumBasisPriceTypeType:Byte
	{
		/// <summary>
		/// ��һ��Լ�����
		/// </summary>
		LastSettlement = (Byte)'1',

		/// <summary>
		/// ��һ��Լ���̼�
		/// </summary>
		LaseClose = (Byte)'2'
	};

	/// <summary>
	/// TFtdcProductLifePhaseType��һ����Ʒ��������״̬����
	/// </summary>
	public enum struct EnumProductLifePhaseType:Byte
	{
		/// <summary>
		/// ��Ծ
		/// </summary>
		Active = (Byte)'1',

		/// <summary>
		/// ����Ծ
		/// </summary>
		NonActive = (Byte)'2',

		/// <summary>
		/// ע��
		/// </summary>
		Canceled = (Byte)'3'
	};

	/// <summary>
	/// TFtdcDeliveryModeType��һ�����ʽ����
	/// </summary>
	public enum struct EnumDeliveryModeType:Byte
	{
		/// <summary>
		/// �ֽ𽻸�
		/// </summary>
		CashDeliv = (Byte)'1',

		/// <summary>
		/// ʵ�ｻ��
		/// </summary>
		CommodityDeliv = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFundIOTypeType��һ���������������
	/// </summary>
	public enum struct EnumFundIOTypeType:Byte
	{
		/// <summary>
		/// �����
		/// </summary>
		FundIO = (Byte)'1',

		/// <summary>
		/// ����ת��
		/// </summary>
		Transfer = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFundTypeType��һ���ʽ���������
	/// </summary>
	public enum struct EnumFundTypeType:Byte
	{
		/// <summary>
		/// ���д��
		/// </summary>
		Deposite = (Byte)'1',

		/// <summary>
		/// �����ʽ�
		/// </summary>
		ItemFund = (Byte)'2',

		/// <summary>
		/// ��˾����
		/// </summary>
		Company = (Byte)'3'
	};

	/// <summary>
	/// TFtdcFundDirectionType��һ�������������
	/// </summary>
	public enum struct EnumFundDirectionType:Byte
	{
		/// <summary>
		/// ���
		/// </summary>
		In = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Out = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFundStatusType��һ���ʽ�״̬����
	/// </summary>
	public enum struct EnumFundStatusType:Byte
	{
		/// <summary>
		/// ��¼��
		/// </summary>
		Record = (Byte)'1',

		/// <summary>
		/// �Ѹ���
		/// </summary>
		Check = (Byte)'2',

		/// <summary>
		/// �ѳ���
		/// </summary>
		Charge = (Byte)'3'
	};

	/// <summary>
	/// TFtdcPublishStatusType��һ������״̬����
	/// </summary>
	public enum struct EnumPublishStatusType:Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		None = (Byte)'1',

		/// <summary>
		/// ���ڷ���
		/// </summary>
		Publishing = (Byte)'2',

		/// <summary>
		/// �ѷ���
		/// </summary>
		Published = (Byte)'3'
	};

	/// <summary>
	/// TFtdcSystemStatusType��һ��ϵͳ״̬����
	/// </summary>
	public enum struct EnumSystemStatusType:Byte
	{
		/// <summary>
		/// ����Ծ
		/// </summary>
		NonActive = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Startup = (Byte)'2',

		/// <summary>
		/// ���׿�ʼ��ʼ��
		/// </summary>
		Initialize = (Byte)'3',

		/// <summary>
		/// ������ɳ�ʼ��
		/// </summary>
		Initialized = (Byte)'4',

		/// <summary>
		/// ���п�ʼ
		/// </summary>
		Close = (Byte)'5',

		/// <summary>
		/// �������
		/// </summary>
		Closed = (Byte)'6',

		/// <summary>
		/// ����
		/// </summary>
		Settlement = (Byte)'7'
	};

	/// <summary>
	/// TFtdcSettlementStatusType��һ������״̬����
	/// </summary>
	public enum struct EnumSettlementStatusType:Byte
	{
		/// <summary>
		/// ��ʼ
		/// </summary>
		Initialize = (Byte)'0',

		/// <summary>
		/// ������
		/// </summary>
		Settlementing = (Byte)'1',

		/// <summary>
		/// �ѽ���
		/// </summary>
		Settlemented = (Byte)'2',

		/// <summary>
		/// �������
		/// </summary>
		Finished = (Byte)'3'
	};

	/// <summary>
	/// TFtdcInvestorTypeType��һ��Ͷ������������
	/// </summary>
	public enum struct EnumInvestorTypeType:Byte
	{
		/// <summary>
		/// ��Ȼ��
		/// </summary>
		Person = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Company = (Byte)'1',

		/// <summary>
		/// Ͷ�ʻ���
		/// </summary>
		Fund = (Byte)'2'
	};

	/// <summary>
	/// TFtdcBrokerTypeType��һ�����͹�˾��������
	/// </summary>
	public enum struct EnumBrokerTypeType:Byte
	{
		/// <summary>
		/// ���׻�Ա
		/// </summary>
		Trade = (Byte)'0',

		/// <summary>
		/// ���׽����Ա
		/// </summary>
		TradeSettle = (Byte)'1'
	};

	/// <summary>
	/// TFtdcRiskLevelType��һ�����յȼ�����
	/// </summary>
	public enum struct EnumRiskLevelType:Byte
	{
		/// <summary>
		/// �ͷ��տͻ�
		/// </summary>
		Low = (Byte)'1',

		/// <summary>
		/// ��ͨ�ͻ�
		/// </summary>
		Normal = (Byte)'2',

		/// <summary>
		/// ��ע�ͻ�
		/// </summary>
		Focus = (Byte)'3',

		/// <summary>
		/// ���տͻ�
		/// </summary>
		Risk = (Byte)'4'
	};

	/// <summary>
	/// TFtdcFeeAcceptStyleType��һ����������ȡ��ʽ����
	/// </summary>
	public enum struct EnumFeeAcceptStyleType:Byte
	{
		/// <summary>
		/// ��������ȡ
		/// </summary>
		ByTrade = (Byte)'1',

		/// <summary>
		/// ��������ȡ
		/// </summary>
		ByDeliv = (Byte)'2',

		/// <summary>
		/// ����
		/// </summary>
		None = (Byte)'3',

		/// <summary>
		/// ��ָ����������ȡ
		/// </summary>
		FixFee = (Byte)'4'
	};

	/// <summary>
	/// TFtdcPasswordTypeType��һ��������������
	/// </summary>
	public enum struct EnumPasswordTypeType:Byte
	{
		/// <summary>
		/// ��������
		/// </summary>
		Trade = (Byte)'1',

		/// <summary>
		/// �ʽ�����
		/// </summary>
		Account = (Byte)'2'
	};

	/// <summary>
	/// TFtdcAlgorithmType��һ��ӯ���㷨����
	/// </summary>
	public enum struct EnumAlgorithmType:Byte
	{
		/// <summary>
		/// ��ӯ����������
		/// </summary>
		All = (Byte)'1',

		/// <summary>
		/// ��ӯ���ƣ�������
		/// </summary>
		OnlyLost = (Byte)'2',

		/// <summary>
		/// ��ӯ�ƣ���������
		/// </summary>
		OnlyGain = (Byte)'3',

		/// <summary>
		/// ��ӯ������������
		/// </summary>
		None = (Byte)'4'
	};

	/// <summary>
	/// TFtdcIncludeCloseProfitType��һ���Ƿ����ƽ��ӯ������
	/// </summary>
	public enum struct EnumIncludeCloseProfitType:Byte
	{
		/// <summary>
		/// ����ƽ��ӯ��
		/// </summary>
		Include = (Byte)'0',

		/// <summary>
		/// ������ƽ��ӯ��
		/// </summary>
		NotInclude = (Byte)'2'
	};

	/// <summary>
	/// TFtdcAllWithoutTradeType��һ���Ƿ��ܿ��������������
	/// </summary>
	public enum struct EnumAllWithoutTradeType:Byte
	{
		/// <summary>
		/// ���ܿ����������
		/// </summary>
		Enable = (Byte)'0',

		/// <summary>
		/// �ܿ����������
		/// </summary>
		Disable = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFuturePwdFlagType��һ���ʽ�����˶Ա�־����
	/// </summary>
	public enum struct EnumFuturePwdFlagType:Byte
	{
		/// <summary>
		/// ���˶�
		/// </summary>
		UnCheck = (Byte)'0',

		/// <summary>
		/// �˶�
		/// </summary>
		Check = (Byte)'1'
	};

	/// <summary>
	/// TFtdcTransferTypeType��һ������ת����������
	/// </summary>
	public enum struct EnumTransferTypeType:Byte
	{
		/// <summary>
		/// ����ת�ڻ�
		/// </summary>
		BankToFuture = (Byte)'0',

		/// <summary>
		/// �ڻ�ת����
		/// </summary>
		FutureToBank = (Byte)'1'
	};

	/// <summary>
	/// TFtdcTransferValidFlagType��һ��ת����Ч��־����
	/// </summary>
	public enum struct EnumTransferValidFlagType:Byte
	{
		/// <summary>
		/// ��Ч��ʧ��
		/// </summary>
		Invalid = (Byte)'0',

		/// <summary>
		/// ��Ч
		/// </summary>
		Valid = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Reverse = (Byte)'2'
	};

	/// <summary>
	/// TFtdcReasonType��һ����������
	/// </summary>
	public enum struct EnumReasonType:Byte
	{
		/// <summary>
		/// ��
		/// </summary>
		CD = (Byte)'0',

		/// <summary>
		/// �ʽ���;
		/// </summary>
		ZT = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		QT = (Byte)'2'
	};

	/// <summary>
	/// TFtdcSexType��һ���Ա�����
	/// </summary>
	public enum struct EnumSexType:Byte
	{
		/// <summary>
		/// δ֪
		/// </summary>
		None = (Byte)'0',

		/// <summary>
		/// ��
		/// </summary>
		Man = (Byte)'1',

		/// <summary>
		/// Ů
		/// </summary>
		Woman = (Byte)'2'
	};

	/// <summary>
	/// TFtdcUserTypeType��һ���û���������
	/// </summary>
	public enum struct EnumUserTypeType:Byte
	{
		/// <summary>
		/// Ͷ����
		/// </summary>
		Investor = (Byte)'0',

		/// <summary>
		/// ����Ա
		/// </summary>
		Operator = (Byte)'1',

		/// <summary>
		/// ����Ա
		/// </summary>
		SuperUser = (Byte)'2'
	};

	/// <summary>
	/// TFtdcRateTypeType��һ��������������
	/// </summary>
	public enum struct EnumRateTypeType:Byte
	{
		/// <summary>
		/// ��֤����
		/// </summary>
		MarginRate = (Byte)'2',

		/// <summary>
		/// ��������
		/// </summary>
		CommRate = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		AllRate = (Byte)'0'
	};

	/// <summary>
	/// TFtdcNoteTypeType��һ��֪ͨ��������
	/// </summary>
	public enum struct EnumNoteTypeType:Byte
	{
		/// <summary>
		/// ���׽��㵥
		/// </summary>
		TradeSettleBill = (Byte)'1',

		/// <summary>
		/// ���׽����±�
		/// </summary>
		TradeSettleMonth = (Byte)'2',

		/// <summary>
		/// ׷�ӱ�֤��֪ͨ��
		/// </summary>
		CallMarginNotes = (Byte)'3',

		/// <summary>
		/// ǿ��ƽ��֪ͨ��
		/// </summary>
		ForceCloseNotes = (Byte)'4',

		/// <summary>
		/// �ɽ�֪ͨ��
		/// </summary>
		TradeNotes = (Byte)'5',

		/// <summary>
		/// ����֪ͨ��
		/// </summary>
		DelivNotes = (Byte)'6'
	};

	/// <summary>
	/// TFtdcSettlementStyleType��һ�����㵥��ʽ����
	/// </summary>
	public enum struct EnumSettlementStyleType:Byte
	{
		/// <summary>
		/// ���ն���
		/// </summary>
		Day = (Byte)'1',

		/// <summary>
		/// ��ʶԳ�
		/// </summary>
		Volume = (Byte)'2'
	};

	/// <summary>
	/// TFtdcSettlementBillTypeType��һ�����㵥��������
	/// </summary>
	public enum struct EnumSettlementBillTypeType:Byte
	{
		/// <summary>
		/// �ձ�
		/// </summary>
		Day = (Byte)'0',

		/// <summary>
		/// �±�
		/// </summary>
		Month = (Byte)'1'
	};

	/// <summary>
	/// TFtdcUserRightTypeType��һ���ͻ�Ȩ����������
	/// </summary>
	public enum struct EnumUserRightTypeType:Byte
	{
		/// <summary>
		/// ��¼
		/// </summary>
		Logon = (Byte)'1',

		/// <summary>
		/// ����ת��
		/// </summary>
		Transfer = (Byte)'2',

		/// <summary>
		/// �ʼĽ��㵥
		/// </summary>
		EMail = (Byte)'3',

		/// <summary>
		/// ������㵥
		/// </summary>
		Fax = (Byte)'4',

		/// <summary>
		/// ������
		/// </summary>
		ConditionOrder = (Byte)'5'
	};

	/// <summary>
	/// TFtdcMarginPriceTypeType��һ����֤��۸���������
	/// </summary>
	public enum struct EnumMarginPriceTypeType:Byte
	{
		/// <summary>
		/// ������
		/// </summary>
		PreSettlementPrice = (Byte)'1',

		/// <summary>
		/// ���¼�
		/// </summary>
		SettlementPrice = (Byte)'2',

		/// <summary>
		/// �ɽ�����
		/// </summary>
		AveragePrice = (Byte)'3',

		/// <summary>
		/// ���ּ�
		/// </summary>
		OpenPrice = (Byte)'4'
	};

	/// <summary>
	/// TFtdcBillGenStatusType��һ�����㵥����״̬����
	/// </summary>
	public enum struct EnumBillGenStatusType:Byte
	{
		/// <summary>
		/// ������
		/// </summary>
		None = (Byte)'0',

		/// <summary>
		/// δ����
		/// </summary>
		NoGenerated = (Byte)'1',

		/// <summary>
		/// ������
		/// </summary>
		Generated = (Byte)'2'
	};

	/// <summary>
	/// TFtdcAlgoTypeType��һ���㷨��������
	/// </summary>
	public enum struct EnumAlgoTypeType:Byte
	{
		/// <summary>
		/// �ֲִ����㷨
		/// </summary>
		HandlePositionAlgo = (Byte)'1',

		/// <summary>
		/// Ѱ�ұ�֤�����㷨
		/// </summary>
		FindMarginRateAlgo = (Byte)'2'
	};

	/// <summary>
	/// TFtdcHandlePositionAlgoIDType��һ���ֲִ����㷨�������
	/// </summary>
	public enum struct EnumHandlePositionAlgoIDType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Base = (Byte)'1',

		/// <summary>
		/// ������Ʒ������
		/// </summary>
		DCE = (Byte)'2',

		/// <summary>
		/// ֣����Ʒ������
		/// </summary>
		CZCE = (Byte)'3'
	};

	/// <summary>
	/// TFtdcFindMarginRateAlgoIDType��һ��Ѱ�ұ�֤�����㷨�������
	/// </summary>
	public enum struct EnumFindMarginRateAlgoIDType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Base = (Byte)'1',

		/// <summary>
		/// ������Ʒ������
		/// </summary>
		DCE = (Byte)'2',

		/// <summary>
		/// ֣����Ʒ������
		/// </summary>
		CZCE = (Byte)'3'
	};

	/// <summary>
	/// TFtdcHandleTradingAccountAlgoIDType��һ���ʽ����㷨�������
	/// </summary>
	public enum struct EnumHandleTradingAccountAlgoIDType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Base = (Byte)'1',

		/// <summary>
		/// ������Ʒ������
		/// </summary>
		DCE = (Byte)'2',

		/// <summary>
		/// ֣����Ʒ������
		/// </summary>
		CZCE = (Byte)'3'
	};

	/// <summary>
	/// TFtdcPersonTypeType��һ����ϵ����������
	/// </summary>
	public enum struct EnumPersonTypeType:Byte
	{
		/// <summary>
		/// ָ���µ���
		/// </summary>
		Order = (Byte)'1',

		/// <summary>
		/// ������Ȩ��
		/// </summary>
		Open = (Byte)'2',

		/// <summary>
		/// �ʽ������
		/// </summary>
		Fund = (Byte)'3',

		/// <summary>
		/// ���㵥ȷ����
		/// </summary>
		Settlement = (Byte)'4'
	};

	/// <summary>
	/// TFtdcQueryInvestorRangeType��һ����ѯ��Χ����
	/// </summary>
	public enum struct EnumQueryInvestorRangeType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		All = (Byte)'1',

		/// <summary>
		/// ��ѯ����
		/// </summary>
		Group = (Byte)'2',

		/// <summary>
		/// ��һͶ����
		/// </summary>
		Single = (Byte)'3'
	};

	/// <summary>
	/// TFtdcInvestorRiskStatusType��һ��Ͷ���߷���״̬����
	/// </summary>
	public enum struct EnumInvestorRiskStatusType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Warn = (Byte)'2',

		/// <summary>
		/// ׷��
		/// </summary>
		Call = (Byte)'3',

		/// <summary>
		/// ǿƽ
		/// </summary>
		Force = (Byte)'4',

		/// <summary>
		/// �쳣
		/// </summary>
		Exception = (Byte)'5'
	};

	/// <summary>
	/// TFtdcUserEventTypeType��һ���û��¼���������
	/// </summary>
	public enum struct EnumUserEventTypeType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		All = (Byte)' ',

		/// <summary>
		/// ��¼
		/// </summary>
		Login = (Byte)'1',

		/// <summary>
		/// �ǳ�
		/// </summary>
		Logout = (Byte)'2',

		/// <summary>
		/// ���׳ɹ�
		/// </summary>
		Trading = (Byte)'3',

		/// <summary>
		/// ����ʧ��
		/// </summary>
		TradingError = (Byte)'4',

		/// <summary>
		/// �޸�����
		/// </summary>
		UpdatePassword = (Byte)'5',

		/// <summary>
		/// ����
		/// </summary>
		Other = (Byte)'9'
	};

	/// <summary>
	/// TFtdcCloseStyleType��һ��ƽ�ַ�ʽ����
	/// </summary>
	public enum struct EnumCloseStyleType:Byte
	{
		/// <summary>
		/// �ȿ���ƽ
		/// </summary>
		Close = (Byte)'0',

		/// <summary>
		/// ��ƽ����ƽ��
		/// </summary>
		CloseToday = (Byte)'1'
	};

	/// <summary>
	/// TFtdcStatModeType��һ��ͳ�Ʒ�ʽ����
	/// </summary>
	public enum struct EnumStatModeType:Byte
	{
		/// <summary>
		/// ----
		/// </summary>
		Non = (Byte)'0',

		/// <summary>
		/// ����Լͳ��
		/// </summary>
		Instrument = (Byte)'1',

		/// <summary>
		/// ����Ʒͳ��
		/// </summary>
		Product = (Byte)'2',

		/// <summary>
		/// ��Ͷ����ͳ��
		/// </summary>
		Investor = (Byte)'3'
	};

	/// <summary>
	/// TFtdcParkedOrderStatusType��һ��Ԥ��״̬����
	/// </summary>
	public enum struct EnumParkedOrderStatusType:Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		NotSend = (Byte)'1',

		/// <summary>
		/// �ѷ���
		/// </summary>
		Send = (Byte)'2',

		/// <summary>
		/// ��ɾ��
		/// </summary>
		Deleted = (Byte)'3'
	};

	/// <summary>
	/// TFtdcVirDealStatusType��һ������״̬����
	/// </summary>
	public enum struct EnumVirDealStatusType:Byte
	{
		/// <summary>
		/// ���ڴ���
		/// </summary>
		Dealing = (Byte)'1',

		/// <summary>
		/// ����ɹ�
		/// </summary>
		DeaclSucceed = (Byte)'2'
	};

	/// <summary>
	/// TFtdcOrgSystemIDType��һ��ԭ��ϵͳ��������
	/// </summary>
	public enum struct EnumOrgSystemIDType:Byte
	{
		/// <summary>
		/// �ۺϽ���ƽ̨
		/// </summary>
		Standard = (Byte)'0',

		/// <summary>
		/// ��ʢϵͳ
		/// </summary>
		ESunny = (Byte)'1',

		/// <summary>
		/// ���˴�V6ϵͳ
		/// </summary>
		KingStarV6 = (Byte)'2'
	};

	/// <summary>
	/// TFtdcVirTradeStatusType��һ������״̬����
	/// </summary>
	public enum struct EnumVirTradeStatusType:Byte
	{
		/// <summary>
		/// ����������
		/// </summary>
		NaturalDeal = (Byte)'0',

		/// <summary>
		/// �ɹ�����
		/// </summary>
		SucceedEnd = (Byte)'1',

		/// <summary>
		/// ʧ�ܽ���
		/// </summary>
		FailedEND = (Byte)'2',

		/// <summary>
		/// �쳣��
		/// </summary>
		Exception = (Byte)'3',

		/// <summary>
		/// ���˹��쳣����
		/// </summary>
		ManualDeal = (Byte)'4',

		/// <summary>
		/// ͨѶ�쳣 �����˹�����
		/// </summary>
		MesException = (Byte)'5',

		/// <summary>
		/// ϵͳ�������˹�����
		/// </summary>
		SysException = (Byte)'6'
	};

	/// <summary>
	/// TFtdcVirBankAccTypeType��һ�������ʻ���������
	/// </summary>
	public enum struct EnumVirBankAccTypeType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		BankBook = (Byte)'1',

		/// <summary>
		/// ���
		/// </summary>
		BankCard = (Byte)'2',

		/// <summary>
		/// ���ÿ�
		/// </summary>
		CreditCard = (Byte)'3'
	};

	/// <summary>
	/// TFtdcVirementStatusType��һ�������ʻ���������
	/// </summary>
	public enum struct EnumVirementStatusType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Natural = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Canceled = (Byte)'9'
	};

	/// <summary>
	/// TFtdcVirementAvailAbilityType��һ����Ч��־����
	/// </summary>
	public enum struct EnumVirementAvailAbilityType:Byte
	{
		/// <summary>
		/// δȷ��
		/// </summary>
		NoAvailAbility = (Byte)'0',

		/// <summary>
		/// ��Ч
		/// </summary>
		AvailAbility = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Repeal = (Byte)'2'
	};

	/// <summary>
	/// TFtdcVirementTradeCodeType��һ�����״�������
	/// </summary>
	public enum struct EnumVirementTradeCodeType:Byte
	{
		/// <summary>
		/// ���з��������ʽ�ת�ڻ�
		/// </summary>
		BankBankToFuture_102001 = (Byte)'1',//'102001',

		/// <summary>
		/// ���з����ڻ��ʽ�ת����
		/// </summary>
		BankFutureToBank_102002 = (Byte)'2',//'102002',

		/// <summary>
		/// �ڻ����������ʽ�ת�ڻ�
		/// </summary>
		FutureBankToFuture_202001 = (Byte)'3',//'202001',

		/// <summary>
		/// �ڻ������ڻ��ʽ�ת����
		/// </summary>
		FutureFutureToBank_202002 = (Byte)'4'//'202002'
	};

	/// <summary>
	/// TFtdcCFMMCKeyKindType��һ����̬��Կ���(��֤����)����
	/// </summary>
	public enum struct EnumCFMMCKeyKindType:Byte
	{
		/// <summary>
		/// �����������
		/// </summary>
		REQUEST = (Byte)'R',

		/// <summary>
		/// CFMMC�Զ�����
		/// </summary>
		AUTO = (Byte)'A',

		/// <summary>
		/// CFMMC�ֶ�����
		/// </summary>
		MANUAL = (Byte)'M'
	};

	/// <summary>
	/// TFtdcCertificationTypeType��һ��֤����������
	/// </summary>
	public enum struct EnumCertificationTypeType:Byte
	{
		/// <summary>
		/// ���֤
		/// </summary>
		IDCard = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Passport = (Byte)'1',

		/// <summary>
		/// ����֤
		/// </summary>
		OfficerIDCard = (Byte)'2',

		/// <summary>
		/// ʿ��֤
		/// </summary>
		SoldierIDCard = (Byte)'3',

		/// <summary>
		/// ����֤
		/// </summary>
		HomeComingCard = (Byte)'4',

		/// <summary>
		/// ���ڲ�
		/// </summary>
		HouseholdRegister = (Byte)'5',

		/// <summary>
		/// Ӫҵִ�պ�
		/// </summary>
		LicenseNo = (Byte)'6',

		/// <summary>
		/// ��֯��������֤
		/// </summary>
		InstitutionCodeCard = (Byte)'7',

		/// <summary>
		/// ��ʱӪҵִ�պ�
		/// </summary>
		TempLicenseNo = (Byte)'8',

		/// <summary>
		/// ������ҵ�Ǽ�֤��
		/// </summary>
		NoEnterpriseLicenseNo = (Byte)'9',

		/// <summary>
		/// ����֤��
		/// </summary>
		OtherCard = (Byte)'x',

		/// <summary>
		/// ���ܲ�������
		/// </summary>
		SuperDepAgree = (Byte)'a'
	};

	/// <summary>
	/// TFtdcFileBusinessCodeType��һ���ļ�ҵ��������
	/// </summary>
	public enum struct EnumFileBusinessCodeType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Others = (Byte)'0',

		/// <summary>
		/// ת�˽�����ϸ����
		/// </summary>
		TransferDetails = (Byte)'1',

		/// <summary>
		/// �ͻ��˻�״̬����
		/// </summary>
		CustAccStatus = (Byte)'2',

		/// <summary>
		/// �˻��ཻ����ϸ����
		/// </summary>
		AccountTradeDetails = (Byte)'3',

		/// <summary>
		/// �ڻ��˻���Ϣ�����ϸ����
		/// </summary>
		FutureAccountChangeInfoDetails = (Byte)'4',

		/// <summary>
		/// �ͻ��ʽ�̨�������ϸ����
		/// </summary>
		CustMoneyDetail = (Byte)'5',

		/// <summary>
		/// �ͻ�������Ϣ��ϸ����
		/// </summary>
		CustCancelAccountInfo = (Byte)'6',

		/// <summary>
		/// �ͻ��ʽ������˽��
		/// </summary>
		CustMoneyResult = (Byte)'7',

		/// <summary>
		/// ���������쳣����ļ�
		/// </summary>
		OthersExceptionResult = (Byte)'8',

		/// <summary>
		/// �ͻ���Ϣ������ϸ
		/// </summary>
		CustInterestNetMoneyDetails = (Byte)'9',

		/// <summary>
		/// �ͻ��ʽ�����ϸ
		/// </summary>
		CustMoneySendAndReceiveDetails = (Byte)'a',

		/// <summary>
		/// ���˴�������ʽ��ջ���
		/// </summary>
		CorporationMoneyTotal = (Byte)'b',

		/// <summary>
		/// ������ʽ��ջ���
		/// </summary>
		MainbodyMoneyTotal = (Byte)'c',

		/// <summary>
		/// �ܷ�ƽ��������
		/// </summary>
		MainPartMonitorData = (Byte)'d',

		/// <summary>
		/// ������б��������
		/// </summary>
		PreparationMoney = (Byte)'e',

		/// <summary>
		/// Э���������ʽ�������
		/// </summary>
		BankMoneyMonitorData = (Byte)'f'
	};

	/// <summary>
	/// TFtdcCashExchangeCodeType��һ���㳮��־����
	/// </summary>
	public enum struct EnumCashExchangeCodeType:Byte
	{
		/// <summary>
		/// ��
		/// </summary>
		Exchange = (Byte)'1',

		/// <summary>
		/// ��
		/// </summary>
		Cash = (Byte)'2'
	};

	/// <summary>
	/// TFtdcYesNoIndicatorType��һ���ǻ���ʶ����
	/// </summary>
	public enum struct EnumYesNoIndicatorType:Byte
	{
		/// <summary>
		/// ��
		/// </summary>
		Yes = (Byte)'0',

		/// <summary>
		/// ��
		/// </summary>
		No = (Byte)'1'
	};

	/// <summary>
	/// TFtdcBanlanceTypeType��һ�������������
	/// </summary>
	public enum struct EnumBanlanceTypeType:Byte
	{
		/// <summary>
		/// ��ǰ���
		/// </summary>
		CurrentMoney = (Byte)'0',

		/// <summary>
		/// �������
		/// </summary>
		UsableMoney = (Byte)'1',

		/// <summary>
		/// ��ȡ���
		/// </summary>
		FetchableMoney = (Byte)'2',

		/// <summary>
		/// �������
		/// </summary>
		FreezeMoney = (Byte)'3'
	};

	/// <summary>
	/// TFtdcGenderType��һ���Ա�����
	/// </summary>
	public enum struct EnumGenderType:Byte
	{
		/// <summary>
		/// δ֪״̬
		/// </summary>
		Unknown = (Byte)'0',

		/// <summary>
		/// ��
		/// </summary>
		Male = (Byte)'1',

		/// <summary>
		/// Ů
		/// </summary>
		Female = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFeePayFlagType��һ������֧����־����
	/// </summary>
	public enum struct EnumFeePayFlagType:Byte
	{
		/// <summary>
		/// �����淽֧������
		/// </summary>
		BEN = (Byte)'0',

		/// <summary>
		/// �ɷ��ͷ�֧������
		/// </summary>
		OUR = (Byte)'1',

		/// <summary>
		/// �ɷ��ͷ�֧������ķ��ã����淽֧�����ܵķ���
		/// </summary>
		SHA = (Byte)'2'
	};

	/// <summary>
	/// TFtdcPassWordKeyTypeType��һ����Կ��������
	/// </summary>
	public enum struct EnumPassWordKeyTypeType:Byte
	{
		/// <summary>
		/// ������Կ
		/// </summary>
		ExchangeKey = (Byte)'0',

		/// <summary>
		/// ������Կ
		/// </summary>
		PassWordKey = (Byte)'1',

		/// <summary>
		/// MAC��Կ
		/// </summary>
		MACKey = (Byte)'2',

		/// <summary>
		/// ������Կ
		/// </summary>
		MessageKey = (Byte)'3'
	};

	/// <summary>
	/// TFtdcFBTPassWordTypeType��һ��������������
	/// </summary>
	public enum struct EnumFBTPassWordTypeType:Byte
	{
		/// <summary>
		/// ��ѯ
		/// </summary>
		Query = (Byte)'0',

		/// <summary>
		/// ȡ��
		/// </summary>
		Fetch = (Byte)'1',

		/// <summary>
		/// ת��
		/// </summary>
		Transfer = (Byte)'2',

		/// <summary>
		/// ����
		/// </summary>
		Trade = (Byte)'3'
	};

	/// <summary>
	/// TFtdcFBTEncryModeType��һ�����ܷ�ʽ����
	/// </summary>
	public enum struct EnumFBTEncryModeType:Byte
	{
		/// <summary>
		/// ������
		/// </summary>
		NoEncry = (Byte)'0',

		/// <summary>
		/// DES
		/// </summary>
		DES = (Byte)'1',

		/// <summary>
		/// 3DES
		/// </summary>
		DES3 = (Byte)'2'
	};

	/// <summary>
	/// TFtdcBankRepealFlagType��һ�����г�����־����
	/// </summary>
	public enum struct EnumBankRepealFlagType:Byte
	{
		/// <summary>
		/// ���������Զ�����
		/// </summary>
		BankNotNeedRepeal = (Byte)'0',

		/// <summary>
		/// ���д��Զ�����
		/// </summary>
		BankWaitingRepeal = (Byte)'1',

		/// <summary>
		/// �������Զ�����
		/// </summary>
		BankBeenRepealed = (Byte)'2'
	};

	/// <summary>
	/// TFtdcBrokerRepealFlagType��һ�����̳�����־����
	/// </summary>
	public enum struct EnumBrokerRepealFlagType:Byte
	{
		/// <summary>
		/// ���������Զ�����
		/// </summary>
		BrokerNotNeedRepeal = (Byte)'0',

		/// <summary>
		/// ���̴��Զ�����
		/// </summary>
		BrokerWaitingRepeal = (Byte)'1',

		/// <summary>
		/// �������Զ�����
		/// </summary>
		BrokerBeenRepealed = (Byte)'2'
	};

	/// <summary>
	/// TFtdcInstitutionTypeType��һ�������������
	/// </summary>
	public enum struct EnumInstitutionTypeType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Bank = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Future = (Byte)'1',

		/// <summary>
		/// ȯ��
		/// </summary>
		Store = (Byte)'2'
	};

	/// <summary>
	/// TFtdcLastFragmentType��һ������Ƭ��־����
	/// </summary>
	public enum struct EnumLastFragmentType:Byte
	{
		/// <summary>
		/// ������Ƭ
		/// </summary>
		Yes = (Byte)'0',

		/// <summary>
		/// ��������Ƭ
		/// </summary>
		No = (Byte)'1'
	};

	/// <summary>
	/// TFtdcBankAccStatusType��һ�������˻�״̬����
	/// </summary>
	public enum struct EnumBankAccStatusType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Freeze = (Byte)'1',

		/// <summary>
		/// ��ʧ
		/// </summary>
		ReportLoss = (Byte)'2'
	};

	/// <summary>
	/// TFtdcMoneyAccountStatusType��һ���ʽ��˻�״̬����
	/// </summary>
	public enum struct EnumMoneyAccountStatusType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Cancel = (Byte)'1'
	};

	/// <summary>
	/// TFtdcManageStatusType��һ�����״̬����
	/// </summary>
	public enum struct EnumManageStatusType:Byte
	{
		/// <summary>
		/// ָ�����
		/// </summary>
		Point = (Byte)'0',

		/// <summary>
		/// Ԥָ��
		/// </summary>
		PrePoint = (Byte)'1',

		/// <summary>
		/// ����ָ��
		/// </summary>
		CancelPoint = (Byte)'2'
	};

	/// <summary>
	/// TFtdcSystemTypeType��һ��Ӧ��ϵͳ��������
	/// </summary>
	public enum struct EnumSystemTypeType:Byte
	{
		/// <summary>
		/// ����ת��
		/// </summary>
		FutureBankTransfer = (Byte)'0',

		/// <summary>
		/// ��֤ת��
		/// </summary>
		StockBankTransfer = (Byte)'1',

		/// <summary>
		/// ���������
		/// </summary>
		TheThirdPartStore = (Byte)'2'
	};

	/// <summary>
	/// TFtdcTxnEndFlagType��һ������ת�ʻ�ת�����־����
	/// </summary>
	public enum struct EnumTxnEndFlagType:Byte
	{
		/// <summary>
		/// ����������
		/// </summary>
		NormalProcessing = (Byte)'0',

		/// <summary>
		/// �ɹ�����
		/// </summary>
		Success = (Byte)'1',

		/// <summary>
		/// ʧ�ܽ���
		/// </summary>
		Failed = (Byte)'2',

		/// <summary>
		/// �쳣��
		/// </summary>
		Abnormal = (Byte)'3',

		/// <summary>
		/// ���˹��쳣����
		/// </summary>
		ManualProcessedForException = (Byte)'4',

		/// <summary>
		/// ͨѶ�쳣 �����˹�����
		/// </summary>
		CommuFailedNeedManualProcess = (Byte)'5',

		/// <summary>
		/// ϵͳ�������˹�����
		/// </summary>
		SysErrorNeedManualProcess = (Byte)'6'
	};

	/// <summary>
	/// TFtdcProcessStatusType��һ������ת�ʷ�����״̬����
	/// </summary>
	public enum struct EnumProcessStatusType:Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		NotProcess = (Byte)'0',

		/// <summary>
		/// ��ʼ����
		/// </summary>
		StartProcess = (Byte)'1',

		/// <summary>
		/// �������
		/// </summary>
		Finished = (Byte)'2'
	};

	/// <summary>
	/// TFtdcCustTypeType��һ���ͻ���������
	/// </summary>
	public enum struct EnumCustTypeType:Byte
	{
		/// <summary>
		/// ��Ȼ��
		/// </summary>
		Person = (Byte)'0',

		/// <summary>
		/// ������
		/// </summary>
		Institution = (Byte)'1'
	};

	/// <summary>
	/// TFtdcFBTTransferDirectionType��һ������ת�ʷ�������
	/// </summary>
	public enum struct EnumFBTTransferDirectionType:Byte
	{
		/// <summary>
		/// �������ת�ڻ�
		/// </summary>
		FromBankToFuture = (Byte)'1',

		/// <summary>
		/// �����ڻ�ת����
		/// </summary>
		FromFutureToBank = (Byte)'2'
	};

	/// <summary>
	/// TFtdcOpenOrDestroyType��һ���������������
	/// </summary>
	public enum struct EnumOpenOrDestroyType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Open = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Destroy = (Byte)'0'
	};

	/// <summary>
	/// TFtdcAvailabilityFlagType��һ����Ч��־����
	/// </summary>
	public enum struct EnumAvailabilityFlagType:Byte
	{
		/// <summary>
		/// δȷ��
		/// </summary>
		Invalid = (Byte)'0',

		/// <summary>
		/// ��Ч
		/// </summary>
		Valid = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Repeal = (Byte)'2'
	};

	/// <summary>
	/// TFtdcOrganTypeType��һ��������������
	/// </summary>
	public enum struct EnumOrganTypeType:Byte
	{
		/// <summary>
		/// ���д���
		/// </summary>
		Bank = (Byte)'1',

		/// <summary>
		/// ����ǰ��
		/// </summary>
		Future = (Byte)'2',

		/// <summary>
		/// ����ת��ƽ̨����
		/// </summary>
		PlateForm = (Byte)'9'
	};

	/// <summary>
	/// TFtdcOrganLevelType��һ��������������
	/// </summary>
	public enum struct EnumOrganLevelType:Byte
	{
		/// <summary>
		/// �������л������ܲ�
		/// </summary>
		HeadQuarters = (Byte)'1',

		/// <summary>
		/// ���з����Ļ��ڻ���˾Ӫҵ��
		/// </summary>
		Branch = (Byte)'2'
	};

	/// <summary>
	/// TFtdcProtocalIDType��һ��Э����������
	/// </summary>
	public enum struct EnumProtocalIDType:Byte
	{
		/// <summary>
		/// ����Э��
		/// </summary>
		FutureProtocal = (Byte)'0',

		/// <summary>
		/// ����Э��
		/// </summary>
		ICBCProtocal = (Byte)'1',

		/// <summary>
		/// ũ��Э��
		/// </summary>
		ABCProtocal = (Byte)'2',

		/// <summary>
		/// �й�����Э��
		/// </summary>
		CBCProtocal = (Byte)'3',

		/// <summary>
		/// ����Э��
		/// </summary>
		CCBProtocal = (Byte)'4',

		/// <summary>
		/// ����Э��
		/// </summary>
		BOCOMProtocal = (Byte)'5',

		/// <summary>
		/// ����ת��ƽ̨Э��
		/// </summary>
		FBTPlateFormProtocal = (Byte)'X'
	};

	/// <summary>
	/// TFtdcConnectModeType��һ���׽������ӷ�ʽ����
	/// </summary>
	public enum struct EnumConnectModeType:Byte
	{
		/// <summary>
		/// ������
		/// </summary>
		ShortConnect = (Byte)'0',

		/// <summary>
		/// ������
		/// </summary>
		LongConnect = (Byte)'1'
	};

	/// <summary>
	/// TFtdcSyncModeType��һ���׽���ͨ�ŷ�ʽ����
	/// </summary>
	public enum struct EnumSyncModeType:Byte
	{
		/// <summary>
		/// �첽
		/// </summary>
		ASync = (Byte)'0',

		/// <summary>
		/// ͬ��
		/// </summary>
		Sync = (Byte)'1'
	};

	/// <summary>
	/// TFtdcBankAccTypeType��һ�������ʺ���������
	/// </summary>
	public enum struct EnumBankAccTypeType:Byte
	{
		/// <summary>
		/// ���д���
		/// </summary>
		BankBook = (Byte)'1',

		/// <summary>
		/// ���
		/// </summary>
		SavingCard = (Byte)'2',

		/// <summary>
		/// ���ÿ�
		/// </summary>
		CreditCard = (Byte)'3'
	};

	/// <summary>
	/// TFtdcFutureAccTypeType��һ���ڻ���˾�ʺ���������
	/// </summary>
	public enum struct EnumFutureAccTypeType:Byte
	{
		/// <summary>
		/// ���д���
		/// </summary>
		BankBook = (Byte)'1',

		/// <summary>
		/// ���
		/// </summary>
		SavingCard = (Byte)'2',

		/// <summary>
		/// ���ÿ�
		/// </summary>
		CreditCard = (Byte)'3'
	};

	/// <summary>
	/// TFtdcOrganStatusType��һ���������״̬����
	/// </summary>
	public enum struct EnumOrganStatusType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Ready = (Byte)'0',

		/// <summary>
		/// ǩ��
		/// </summary>
		CheckIn = (Byte)'1',

		/// <summary>
		/// ǩ��
		/// </summary>
		CheckOut = (Byte)'2',

		/// <summary>
		/// �����ļ�����
		/// </summary>
		CheckFileArrived = (Byte)'3',

		/// <summary>
		/// ����
		/// </summary>
		CheckDetail = (Byte)'4',

		/// <summary>
		/// ��������
		/// </summary>
		DayEndClean = (Byte)'5',

		/// <summary>
		/// ע��
		/// </summary>
		Invalid = (Byte)'9'
	};

	/// <summary>
	/// TFtdcCCBFeeModeType��һ�������շ�ģʽ����
	/// </summary>
	public enum struct EnumCCBFeeModeType:Byte
	{
		/// <summary>
		/// ��������
		/// </summary>
		ByAmount = (Byte)'1',

		/// <summary>
		/// ���¿���
		/// </summary>
		ByMonth = (Byte)'2'
	};

	/// <summary>
	/// TFtdcCommApiTypeType��һ��ͨѶAPI��������
	/// </summary>
	public enum struct EnumCommApiTypeType:Byte
	{
		/// <summary>
		/// �ͻ���
		/// </summary>
		Client = (Byte)'1',

		/// <summary>
		/// �����
		/// </summary>
		Server = (Byte)'2',

		/// <summary>
		/// ����ϵͳ��UserApi
		/// </summary>
		UserApi = (Byte)'3'
	};

	/// <summary>
	/// TFtdcLinkStatusType��һ������״̬����
	/// </summary>
	public enum struct EnumLinkStatusType:Byte
	{
		/// <summary>
		/// �Ѿ�����
		/// </summary>
		Connected = (Byte)'1',

		/// <summary>
		/// û������
		/// </summary>
		Disconnected = (Byte)'2'
	};

	/// <summary>
	/// TFtdcPwdFlagType��һ������˶Ա�־����
	/// </summary>
	public enum struct EnumPwdFlagType:Byte
	{
		/// <summary>
		/// ���˶�
		/// </summary>
		NoCheck = (Byte)'0',

		/// <summary>
		/// ���ĺ˶�
		/// </summary>
		BlankCheck = (Byte)'1',

		/// <summary>
		/// ���ĺ˶�
		/// </summary>
		EncryptCheck = (Byte)'2'
	};

	/// <summary>
	/// TFtdcSecuAccTypeType��һ���ڻ��ʺ���������
	/// </summary>
	public enum struct EnumSecuAccTypeType:Byte
	{
		/// <summary>
		/// �ʽ��ʺ�
		/// </summary>
		AccountID = (Byte)'1',

		/// <summary>
		/// �ʽ𿨺�
		/// </summary>
		CardID = (Byte)'2',

		/// <summary>
		/// �Ϻ��ɶ��ʺ�
		/// </summary>
		SHStockholderID = (Byte)'3',

		/// <summary>
		/// ���ڹɶ��ʺ�
		/// </summary>
		SZStockholderID = (Byte)'4'
	};

	/// <summary>
	/// TFtdcTransferStatusType��һ��ת�˽���״̬����
	/// </summary>
	public enum struct EnumTransferStatusType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal = (Byte)'0',

		/// <summary>
		/// ������
		/// </summary>
		Repealed = (Byte)'1'
	};

	/// <summary>
	/// TFtdcSponsorTypeType��һ����������
	/// </summary>
	public enum struct EnumSponsorTypeType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Broker = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Bank = (Byte)'1'
	};

	/// <summary>
	/// TFtdcReqRspTypeType��һ��������Ӧ�������
	/// </summary>
	public enum struct EnumReqRspTypeType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Request = (Byte)'0',

		/// <summary>
		/// ��Ӧ
		/// </summary>
		Response = (Byte)'1'
	};

	/// <summary>
	/// TFtdcFBTUserEventTypeType��һ������ת���û��¼���������
	/// </summary>
	public enum struct EnumFBTUserEventTypeType:Byte
	{
		/// <summary>
		/// ǩ��
		/// </summary>
		SignIn = (Byte)'0',

		/// <summary>
		/// ����ת�ڻ�
		/// </summary>
		FromBankToFuture = (Byte)'1',

		/// <summary>
		/// �ڻ�ת����
		/// </summary>
		FromFutureToBank = (Byte)'2',

		/// <summary>
		/// ����
		/// </summary>
		OpenAccount = (Byte)'3',

		/// <summary>
		/// ����
		/// </summary>
		CancelAccount = (Byte)'4',

		/// <summary>
		/// ��������˻�
		/// </summary>
		ChangeAccount = (Byte)'5',

		/// <summary>
		/// ��������ת�ڻ�
		/// </summary>
		RepealFromBankToFuture = (Byte)'6',

		/// <summary>
		/// �����ڻ�ת����
		/// </summary>
		RepealFromFutureToBank = (Byte)'7',

		/// <summary>
		/// ��ѯ�����˻�
		/// </summary>
		QueryBankAccount = (Byte)'8',

		/// <summary>
		/// ��ѯ�ڻ��˻�
		/// </summary>
		QueryFutureAccount = (Byte)'9',

		/// <summary>
		/// ǩ��
		/// </summary>
		SignOut = (Byte)'A',

		/// <summary>
		/// ��Կͬ��
		/// </summary>
		SyncKey = (Byte)'B',

		/// <summary>
		/// ����
		/// </summary>
		Other = (Byte)'Z'
	};

	/// <summary>
	/// TFtdcNotifyClassType��һ������֪ͨ��������
	/// </summary>
	public enum struct EnumNotifyClassType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		NOERROR = (Byte)'0',

		/// <summary>
		/// ��ʾ
		/// </summary>
		Warn = (Byte)'1',

		/// <summary>
		/// ׷��
		/// </summary>
		Call = (Byte)'2',

		/// <summary>
		/// ǿƽ
		/// </summary>
		Force = (Byte)'3',

		/// <summary>
		/// ����
		/// </summary>
		CHUANCANG = (Byte)'4',

		/// <summary>
		/// �쳣
		/// </summary>
		Exception = (Byte)'5'
	};

	/// <summary>
	/// TFtdcForceCloseTypeType��һ��ǿƽ����������
	/// </summary>
	public enum struct EnumForceCloseTypeType:Byte
	{
		/// <summary>
		/// �ֹ�ǿƽ
		/// </summary>
		Manual = (Byte)'0',

		/// <summary>
		/// ��һͶ���߸���ǿƽ
		/// </summary>
		Single = (Byte)'1',

		/// <summary>
		/// ����Ͷ���߸���ǿƽ
		/// </summary>
		Group = (Byte)'2'
	};

	/// <summary>
	/// TFtdcRiskNotifyMethodType��һ������֪ͨ;������
	/// </summary>
	public enum struct EnumRiskNotifyMethodType:Byte
	{
		/// <summary>
		/// ϵͳ֪ͨ
		/// </summary>
		System = (Byte)'0',

		/// <summary>
		/// ����֪ͨ
		/// </summary>
		SMS = (Byte)'1',

		/// <summary>
		/// �ʼ�֪ͨ
		/// </summary>
		EMail = (Byte)'2',

		/// <summary>
		/// �˹�֪ͨ
		/// </summary>
		Manual = (Byte)'3'
	};

	/// <summary>
	/// TFtdcRiskNotifyStatusType��һ������֪ͨ״̬����
	/// </summary>
	public enum struct EnumRiskNotifyStatusType:Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		NotGen = (Byte)'0',

		/// <summary>
		/// ������δ����
		/// </summary>
		Generated = (Byte)'1',

		/// <summary>
		/// ����ʧ��
		/// </summary>
		SendError = (Byte)'2',

		/// <summary>
		/// �ѷ���δ����
		/// </summary>
		SendOk = (Byte)'3',

		/// <summary>
		/// �ѽ���δȷ��
		/// </summary>
		Received = (Byte)'4',

		/// <summary>
		/// ��ȷ��
		/// </summary>
		Confirmed = (Byte)'5'
	};

	/// <summary>
	/// TFtdcRiskUserEventType��һ������û������¼�����
	/// </summary>
	public enum struct EnumRiskUserEventType:Byte
	{
		/// <summary>
		/// ��������
		/// </summary>
		ExportData = (Byte)'0'
	};

	/// <summary>
	/// TFtdcConditionalOrderSortTypeType��һ��������������������
	/// </summary>
	public enum struct EnumConditionalOrderSortTypeType:Byte
	{
		/// <summary>
		/// ʹ�����¼�����
		/// </summary>
		LastPriceAsc = (Byte)'0',

		/// <summary>
		/// ʹ�����¼۽���
		/// </summary>
		LastPriceDesc = (Byte)'1',

		/// <summary>
		/// ʹ����������
		/// </summary>
		AskPriceAsc = (Byte)'2',

		/// <summary>
		/// ʹ�����۽���
		/// </summary>
		AskPriceDesc = (Byte)'3',

		/// <summary>
		/// ʹ���������
		/// </summary>
		BidPriceAsc = (Byte)'4',

		/// <summary>
		/// ʹ����۽���
		/// </summary>
		BidPriceDesc = (Byte)'5'
	};

	/// <summary>
	/// TFtdcSendTypeType��һ������״̬����
	/// </summary>
	public enum struct EnumSendTypeType:Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		NoSend = (Byte)'0',

		/// <summary>
		/// �ѷ���
		/// </summary>
		Sended = (Byte)'1',

		/// <summary>
		/// ������
		/// </summary>
		Generated = (Byte)'2',

		/// <summary>
		/// ����ʧ��
		/// </summary>
		SendFail = (Byte)'3',

		/// <summary>
		/// ���ճɹ�
		/// </summary>
		Success = (Byte)'4',

		/// <summary>
		/// ����ʧ��
		/// </summary>
		Fail = (Byte)'5',

		/// <summary>
		/// ȡ������
		/// </summary>
		Cancel = (Byte)'6'
	};

	/// <summary>
	/// TFtdcClientIDStatusType��һ�����ױ���״̬����
	/// </summary>
	public enum struct EnumClientIDStatusType:Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		NoApply = (Byte)'1',

		/// <summary>
		/// ���ύ����
		/// </summary>
		Submited = (Byte)'2',

		/// <summary>
		/// �ѷ�������
		/// </summary>
		Sended = (Byte)'3',

		/// <summary>
		/// ���
		/// </summary>
		Success = (Byte)'4',

		/// <summary>
		/// �ܾ�
		/// </summary>
		Refuse = (Byte)'5',

		/// <summary>
		/// �ѳ�������
		/// </summary>
		Cancel = (Byte)'6'
	};

	/// <summary>
	/// TFtdcQuestionTypeType��һ��������Ϣ��������
	/// </summary>
	public enum struct EnumQuestionTypeType:Byte
	{
		/// <summary>
		/// ��ѡ
		/// </summary>
		Radio = (Byte)'1',

		/// <summary>
		/// ��ѡ
		/// </summary>
		Option = (Byte)'2',

		/// <summary>
		/// ���
		/// </summary>
		Blank = (Byte)'3'
	};

	/// <summary>
	/// TFtdcProcessTypeType��һ�����̹�����������
	/// </summary>
	public enum struct EnumProcessTypeType:Byte
	{
		/// <summary>
		/// ���뽻�ױ���
		/// </summary>
		ApplyTradingCode = (Byte)'1',

		/// <summary>
		/// �������ױ���
		/// </summary>
		CancelTradingCode = (Byte)'2',

		/// <summary>
		/// �޸������Ϣ
		/// </summary>
		ModifyIDCard = (Byte)'3',

		/// <summary>
		/// �޸�һ����Ϣ
		/// </summary>
		ModifyNoIDCard = (Byte)'4',

		/// <summary>
		/// ��������������
		/// </summary>
		ExchOpenBak = (Byte)'5',

		/// <summary>
		/// ��������������
		/// </summary>
		ExchCancelBak = (Byte)'6'
	};

	/// <summary>
	/// TFtdcBusinessTypeType��һ��ҵ����������
	/// </summary>
	public enum struct EnumBusinessTypeType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Request = (Byte)'1',

		/// <summary>
		/// Ӧ��
		/// </summary>
		Response = (Byte)'2',

		/// <summary>
		/// ֪ͨ
		/// </summary>
		Notice = (Byte)'3'
	};

	/// <summary>
	/// TFtdcCfmmcReturnCodeType��һ��������ķ���������
	/// </summary>
	public enum struct EnumCfmmcReturnCodeType:Byte
	{
		/// <summary>
		/// �ɹ�
		/// </summary>
		Success = (Byte)'0',

		/// <summary>
		/// �ÿͻ��Ѿ��������ڴ�����
		/// </summary>
		Working = (Byte)'1',

		/// <summary>
		/// ����пͻ����ϼ��ʧ��
		/// </summary>
		InfoFail = (Byte)'2',

		/// <summary>
		/// �����ʵ���Ƽ��ʧ��
		/// </summary>
		IDCardFail = (Byte)'3',

		/// <summary>
		/// ��������
		/// </summary>
		OtherFail = (Byte)'4'
	};

	/// <summary>
	/// TFtdcClientTypeType��һ���ͻ���������
	/// </summary>
	public enum struct EnumClientTypeType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		All = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Person = (Byte)'1',

		/// <summary>
		/// ��λ
		/// </summary>
		Company = (Byte)'2'
	};

	/// <summary>
	/// TFtdcExchangeIDTypeType��һ���������������
	/// </summary>
	public enum struct EnumExchangeIDTypeType:Byte
	{
		/// <summary>
		/// �Ϻ��ڻ�������
		/// </summary>
		SHFE = (Byte)'S',

		/// <summary>
		/// ֣����Ʒ������
		/// </summary>
		CZCE = (Byte)'Z',

		/// <summary>
		/// ������Ʒ������
		/// </summary>
		DCE = (Byte)'D',

		/// <summary>
		/// �й������ڻ�������
		/// </summary>
		CFFEX = (Byte)'J'
	};

	/// <summary>
	/// TFtdcExClientIDTypeType��һ�����ױ�����������
	/// </summary>
	public enum struct EnumExClientIDTypeType:Byte
	{
		/// <summary>
		/// �ױ�
		/// </summary>
		Hedge = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Arbitrage = (Byte)'2',

		/// <summary>
		/// Ͷ��
		/// </summary>
		Speculation = (Byte)'3'
	};

	/// <summary>
	/// TFtdcUpdateFlagType��һ������״̬����
	/// </summary>
	public enum struct EnumUpdateFlagType:Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		NoUpdate = (Byte)'0',

		/// <summary>
		/// ����ȫ����Ϣ�ɹ�
		/// </summary>
		Success = (Byte)'1',

		/// <summary>
		/// ����ȫ����Ϣʧ��
		/// </summary>
		Fail = (Byte)'2',

		/// <summary>
		/// ���½��ױ���ɹ�
		/// </summary>
		TCSuccess = (Byte)'3',

		/// <summary>
		/// ���½��ױ���ʧ��
		/// </summary>
		TCFail = (Byte)'4',

		/// <summary>
		/// �Ѷ���
		/// </summary>
		Cancel = (Byte)'5'
	};

	/// <summary>
	/// TFtdcApplyOperateIDType��һ�����붯������
	/// </summary>
	public enum struct EnumApplyOperateIDType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		OpenInvestor = (Byte)'1',

		/// <summary>
		/// �޸������Ϣ
		/// </summary>
		ModifyIDCard = (Byte)'2',

		/// <summary>
		/// �޸�һ����Ϣ
		/// </summary>
		ModifyNoIDCard = (Byte)'3',

		/// <summary>
		/// ���뽻�ױ���
		/// </summary>
		ApplyTradingCode = (Byte)'4',

		/// <summary>
		/// �������ױ���
		/// </summary>
		CancelTradingCode = (Byte)'5',

		/// <summary>
		/// ����
		/// </summary>
		CancelInvestor = (Byte)'6'
	};

	/// <summary>
	/// TFtdcApplyStatusIDType��һ������״̬����
	/// </summary>
	public enum struct EnumApplyStatusIDType:Byte
	{
		/// <summary>
		/// δ��ȫ
		/// </summary>
		NoComplete = (Byte)'1',

		/// <summary>
		/// ���ύ
		/// </summary>
		Submited = (Byte)'2',

		/// <summary>
		/// �����
		/// </summary>
		Checked = (Byte)'3',

		/// <summary>
		/// �Ѿܾ�
		/// </summary>
		Refused = (Byte)'4',

		/// <summary>
		/// ��ɾ��
		/// </summary>
		Deleted = (Byte)'5'
	};

	/// <summary>
	/// TFtdcSendMethodType��һ�����ͷ�ʽ����
	/// </summary>
	public enum struct EnumSendMethodType:Byte
	{
		/// <summary>
		/// ���ӷ���
		/// </summary>
		ByAPI = (Byte)'1',

		/// <summary>
		/// �ļ�����
		/// </summary>
		ByFile = (Byte)'2'
	};

	/// <summary>
	/// TFtdcEventModeType��һ��������������
	/// </summary>
	public enum struct EnumEventModeType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		ADD = (Byte)'1',

		/// <summary>
		/// �޸�
		/// </summary>
		UPDATE = (Byte)'2',

		/// <summary>
		/// ɾ��
		/// </summary>
		DELETE = (Byte)'3',

		/// <summary>
		/// ����
		/// </summary>
		CHECK = (Byte)'4'
	};

	/// <summary>
	/// TFtdcUOAAutoSendType��һ��ͳһ���������Զ���������
	/// </summary>
	public enum struct EnumUOAAutoSendType:Byte
	{
		/// <summary>
		/// �Զ����Ͳ�����
		/// </summary>
		ASR = (Byte)'1',

		/// <summary>
		/// �Զ����ͣ����Զ�����
		/// </summary>
		ASNR = (Byte)'2',

		/// <summary>
		/// ���Զ����ͣ��Զ�����
		/// </summary>
		NSAR = (Byte)'3',

		/// <summary>
		/// ���Զ����ͣ�Ҳ���Զ�����
		/// </summary>
		NSR = (Byte)'4'
	};

	/// <summary>
	/// TFtdcFlowIDType��һ������ID����
	/// </summary>
	public enum struct EnumFlowIDType:Byte
	{
		/// <summary>
		/// Ͷ���߶�ӦͶ����������
		/// </summary>
		InvestorGroupFlow = (Byte)'1'
	};

	/// <summary>
	/// TFtdcCheckLevelType��һ�����˼�������
	/// </summary>
	public enum struct EnumCheckLevelType:Byte
	{
		/// <summary>
		/// �㼶����
		/// </summary>
		Zero = (Byte)'0',

		/// <summary>
		/// һ������
		/// </summary>
		One = (Byte)'1',

		/// <summary>
		/// ��������
		/// </summary>
		Two = (Byte)'2'
	};

	/// <summary>
	/// TFtdcCheckStatusType��һ�����˼�������
	/// </summary>
	public enum struct EnumCheckStatusType:Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		Init = (Byte)'0',

		/// <summary>
		/// ������
		/// </summary>
		Checking = (Byte)'1',

		/// <summary>
		/// �Ѹ���
		/// </summary>
		Checked = (Byte)'2',

		/// <summary>
		/// �ܾ�
		/// </summary>
		Refuse = (Byte)'3',

		/// <summary>
		/// ����
		/// </summary>
		Cancel = (Byte)'4'
	};

	/// <summary>
	/// TFtdcUsedStatusType��һ����Ч״̬����
	/// </summary>
	public enum struct EnumUsedStatusType:Byte
	{
		/// <summary>
		/// δ��Ч
		/// </summary>
		Unused = (Byte)'0',

		/// <summary>
		/// ����Ч
		/// </summary>
		Used = (Byte)'1',

		/// <summary>
		/// ��Чʧ��
		/// </summary>
		Fail = (Byte)'2'
	};

	/// <summary>
	/// TFtdcBankAcountOriginType��һ���˻���Դ����
	/// </summary>
	public enum struct EnumBankAcountOriginType:Byte
	{
		/// <summary>
		/// �ֹ�¼��
		/// </summary>
		ByAccProperty = (Byte)'0',

		/// <summary>
		/// ����ת��
		/// </summary>
		ByFBTransfer = (Byte)'1'
	};

	/// <summary>
	/// TFtdcMonthBillTradeSumType��һ�����㵥�±��ɽ����ܷ�ʽ����
	/// </summary>
	public enum struct EnumMonthBillTradeSumType:Byte
	{
		/// <summary>
		/// ͬ��ͬ��Լ
		/// </summary>
		ByInstrument = (Byte)'0',

		/// <summary>
		/// ͬ��ͬ��Լͬ�۸�
		/// </summary>
		ByDayInsPrc = (Byte)'1',

		/// <summary>
		/// ͬ��Լ
		/// </summary>
		ByDayIns = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFBTTradeCodeEnumType��һ�����ڽ��״���ö������
	/// </summary>
	public enum struct EnumFBTTradeCodeEnumType:Byte
	{
		/// <summary>
		/// ���з�������ת�ڻ�
		/// </summary>
		BankLaunchBankToBroker_102001 = (Byte)'1',//'102001',

		/// <summary>
		/// �ڻ���������ת�ڻ�
		/// </summary>
		BrokerLaunchBankToBroker_202001 = (Byte)'2',//'202001',

		/// <summary>
		/// ���з����ڻ�ת����
		/// </summary>
		BankLaunchBrokerToBank_102002 = (Byte)'3',//'102002',

		/// <summary>
		/// �ڻ������ڻ�ת����
		/// </summary>
		BrokerLaunchBrokerToBank_202002 = (Byte)'4'//'202002'
	};

	/// <summary>
	/// TFtdcOTPTypeType��һ����̬������������
	/// </summary>
	public enum struct EnumOTPTypeType:Byte
	{
		/// <summary>
		/// �޶�̬����
		/// </summary>
		NONE = (Byte)'0',

		/// <summary>
		/// ʱ������
		/// </summary>
		TOTP = (Byte)'1'
	};

	/// <summary>
	/// TFtdcOTPStatusType��һ����̬����״̬����
	/// </summary>
	public enum struct EnumOTPStatusType:Byte
	{
		/// <summary>
		/// δʹ��
		/// </summary>
		Unused = (Byte)'0',

		/// <summary>
		/// ��ʹ��
		/// </summary>
		Used = (Byte)'1',

		/// <summary>
		/// ע��
		/// </summary>
		Disuse = (Byte)'2'
	};

	/// <summary>
	/// TFtdcBrokerUserTypeType��һ�����ù�˾�û���������
	/// </summary>
	public enum struct EnumBrokerUserTypeType:Byte
	{
		/// <summary>
		/// Ͷ����
		/// </summary>
		Investor = (Byte)'1'
	};

	/// <summary>
	/// TFtdcFutureTypeType��һ���ڻ���������
	/// </summary>
	public enum struct EnumFutureTypeType:Byte
	{
		/// <summary>
		/// ��Ʒ�ڻ�
		/// </summary>
		Commodity = (Byte)'1',

		/// <summary>
		/// �����ڻ�
		/// </summary>
		Financial = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFundEventTypeType��һ���ʽ���������������
	/// </summary>
	public enum struct EnumFundEventTypeType:Byte
	{
		/// <summary>
		/// ת���޶�
		/// </summary>
		Restriction = (Byte)'0',

		/// <summary>
		/// ����ת���޶�
		/// </summary>
		TodayRestriction = (Byte)'1',

		/// <summary>
		/// ������ˮ
		/// </summary>
		Transfer = (Byte)'2',

		/// <summary>
		/// �ʽ𶳽�
		/// </summary>
		Credit = (Byte)'3',

		/// <summary>
		/// Ͷ���߿����ʽ����
		/// </summary>
		InvestorWithdrawAlm = (Byte)'4',

		/// <summary>
		/// ���������ʻ�ת���޶�
		/// </summary>
		BankRestriction = (Byte)'5'
	};

	/// <summary>
	/// TFtdcAccountSourceTypeType��һ���ʽ��˻���Դ����
	/// </summary>
	public enum struct EnumAccountSourceTypeType:Byte
	{
		/// <summary>
		/// ����ͬ��
		/// </summary>
		FBTransfer = (Byte)'0',

		/// <summary>
		/// �ֹ�¼��
		/// </summary>
		ManualEntry = (Byte)'1'
	};

	/// <summary>
	/// TFtdcCodeSourceTypeType��һ�����ױ�����Դ����
	/// </summary>
	public enum struct EnumCodeSourceTypeType:Byte
	{
		/// <summary>
		/// ͳһ����
		/// </summary>
		UnifyAccount = (Byte)'0',

		/// <summary>
		/// �ֹ�¼��
		/// </summary>
		ManualEntry = (Byte)'1'
	};

	/// <summary>
	/// TFtdcUserRangeType��һ������Ա��Χ����
	/// </summary>
	public enum struct EnumUserRangeType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		All = (Byte)'0',

		/// <summary>
		/// ��һ����Ա
		/// </summary>
		Single = (Byte)'1'
	};

	/// <summary>
	/// TFtdcByGroupType��һ������ͳ�Ʊ��ͻ�ͳ�Ʒ�ʽ����
	/// </summary>
	public enum struct EnumByGroupType:Byte
	{
		/// <summary>
		/// ��Ͷ����ͳ��
		/// </summary>
		Investor = (Byte)'2',

		/// <summary>
		/// ����ͳ��
		/// </summary>
		Group = (Byte)'1'
	};

	/// <summary>
	/// TFtdcTradeSumStatModeType��һ������ͳ�Ʊ���Χͳ�Ʒ�ʽ����
	/// </summary>
	public enum struct EnumTradeSumStatModeType:Byte
	{
		/// <summary>
		/// ����Լͳ��
		/// </summary>
		Instrument = (Byte)'1',

		/// <summary>
		/// ����Ʒͳ��
		/// </summary>
		Product = (Byte)'2',

		/// <summary>
		/// ��������ͳ��
		/// </summary>
		Exchange = (Byte)'3'
	};

	/// <summary>
	/// bool����
	/// </summary>
	public enum struct EnumBoolType:int
	{
		/// <summary>
		/// 
		/// </summary>
		No=0,
		/// <summary>
		/// 
		/// </summary>
		Yes=1
	};




	/// --------------------------------------------------------------------------------------------------------------------


	/// <summary>
	/// ��Ϣ�ַ�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcDisseminationField
	{
		/// <summary>
		/// ����ϵ�к�
		/// </summary>
		short SequenceSeries;
		/// <summary>
		/// ���к�
		/// </summary>
		int SequenceNo;
	};

	/// <summary>
	/// �û���¼����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcReqUserLoginField
	{
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// �û��˲�Ʒ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ UserProductInfo;
		/// <summary>
		/// �ӿڶ˲�Ʒ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ InterfaceProductInfo;
		/// <summary>
		/// Э����Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ProtocolInfo;
		/// <summary>
		/// Mac��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ MacAddress;
		/// <summary>
		/// ��̬����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ OneTimePassword;
		/// <summary>
		/// �ն�IP��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ ClientIPAddress;
	};

	/// <summary>
	/// �û���¼Ӧ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcRspUserLoginField
	{
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ��¼�ɹ�ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LoginTime;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ SystemName;
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// ��󱨵�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ MaxOrderRef;
		/// <summary>
		/// ������ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ SHFETime;
		/// <summary>
		/// ������ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ DCETime;
		/// <summary>
		/// ֣����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CZCETime;
		/// <summary>
		/// �н���ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ FFEXTime;
	};

	/// <summary>
	/// �û��ǳ�����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcUserLogoutField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};

	/// <summary>
	/// ǿ�ƽ���Ա�˳�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcForceUserLogoutField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};

	/// <summary>
	/// �ͻ�����֤����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcReqAuthenticateField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		///�û��˲�Ʒ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	UserProductInfo;
		/// <summary>
		///��֤��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	AuthCode;
	};

	/// <summary>
	/// �ͻ�����֤��Ӧ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcRspAuthenticateField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		///�û��˲�Ʒ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	UserProductInfo;
	};

	/// <summary>
	///�ͻ�����֤��Ϣ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	ref struct ThostFtdcAuthenticationInfoField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// �û��˲�Ʒ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	UserProductInfo;
		/// <summary>
		/// ��֤��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^	AuthInfo;
		/// <summary>
		/// �Ƿ�Ϊ��֤���
		/// </summary>
		int	IsResult;
	};

	/// <summary>
	/// ����ת�ʱ���ͷ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferHeaderField
	{
		/// <summary>
		/// �汾�ţ�������1.0
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ Version;
		/// <summary>
		/// ���״��룬����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// �������ڣ������ʽ��yyyymmdd
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ�䣬�����ʽ��hhmmss
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ������ˮ�ţ�N/A
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeSerial;
		/// <summary>
		/// �ڻ���˾���룬����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ FutureID;
		/// <summary>
		/// ���д��룬���ݲ�ѯ���еõ�������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з����Ĵ��룬���ݲ�ѯ���еõ�������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBrchID;
		/// <summary>
		/// ����Ա��N/A
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ OperNo;
		/// <summary>
		/// �����豸���ͣ�N/A
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^ DeviceID;
		/// <summary>
		/// ��¼����N/A
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ RecordNum;
		/// <summary>
		/// �Ự��ţ�N/A
		/// </summary>
		int SessionID;
		/// <summary>
		/// �����ţ�N/A
		/// </summary>
		int RequestID;
	};

	/// <summary>
	/// �����ʽ�ת�ڻ�����TradeCode=202001
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferBankToFutureReqField
	{
		/// <summary>
		/// �ڻ��ʽ��˻�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ FutureAccount;
		/// <summary>
		/// �����־
		/// </summary>
		EnumFuturePwdFlagType FuturePwdFlag;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ FutureAccPwd;
		/// <summary>
		/// ת�˽��
		/// </summary>
		double TradeAmt;
		/// <summary>
		/// �ͻ�������
		/// </summary>
		double CustFee;
		/// <summary>
		/// ���֣�RMB-����� USD-��Բ HKD-��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyCode;
	};

	/// <summary>
	/// �����ʽ�ת�ڻ�������Ӧ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferBankToFutureRspField
	{
		/// <summary>
		/// ��Ӧ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ RetCode;
		/// <summary>
		/// ��Ӧ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^ RetInfo;
		/// <summary>
		/// �ʽ��˻�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ FutureAccount;
		/// <summary>
		/// ת�ʽ��
		/// </summary>
		double TradeAmt;
		/// <summary>
		/// Ӧ�տͻ�������
		/// </summary>
		double CustFee;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyCode;
	};

	/// <summary>
	/// �ڻ��ʽ�ת��������TradeCode=202002
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferFutureToBankReqField
	{
		/// <summary>
		/// �ڻ��ʽ��˻�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ FutureAccount;
		/// <summary>
		/// �����־
		/// </summary>
		EnumFuturePwdFlagType FuturePwdFlag;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ FutureAccPwd;
		/// <summary>
		/// ת�˽��
		/// </summary>
		double TradeAmt;
		/// <summary>
		/// �ͻ�������
		/// </summary>
		double CustFee;
		/// <summary>
		/// ���֣�RMB-����� USD-��Բ HKD-��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyCode;
	};

	/// <summary>
	/// �ڻ��ʽ�ת����������Ӧ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferFutureToBankRspField
	{
		/// <summary>
		/// ��Ӧ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ RetCode;
		/// <summary>
		/// ��Ӧ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^ RetInfo;
		/// <summary>
		/// �ʽ��˻�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ FutureAccount;
		/// <summary>
		/// ת�ʽ��
		/// </summary>
		double TradeAmt;
		/// <summary>
		/// Ӧ�տͻ�������
		/// </summary>
		double CustFee;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyCode;
	};

	/// <summary>
	/// ��ѯ�����ʽ�����TradeCode=204002
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferQryBankReqField
	{
		/// <summary>
		/// �ڻ��ʽ��˻�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ FutureAccount;
		/// <summary>
		/// �����־
		/// </summary>
		EnumFuturePwdFlagType FuturePwdFlag;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ FutureAccPwd;
		/// <summary>
		/// ���֣�RMB-����� USD-��Բ HKD-��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyCode;
	};

	/// <summary>
	/// ��ѯ�����ʽ�������Ӧ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferQryBankRspField
	{
		/// <summary>
		/// ��Ӧ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ RetCode;
		/// <summary>
		/// ��Ӧ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^ RetInfo;
		/// <summary>
		/// �ʽ��˻�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ FutureAccount;
		/// <summary>
		/// �������
		/// </summary>
		double TradeAmt;
		/// <summary>
		/// ���п������
		/// </summary>
		double UseAmt;
		/// <summary>
		/// ���п�ȡ���
		/// </summary>
		double FetchAmt;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyCode;
	};

	/// <summary>
	/// ��ѯ���н�����ϸ����TradeCode=204999
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferQryDetailReqField
	{
		/// <summary>
		/// �ڻ��ʽ��˻�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ FutureAccount;
	};

	/// <summary>
	/// ��ѯ���н�����ϸ������Ӧ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferQryDetailRspField
	{
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ���״���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// �ڻ���ˮ��
		/// </summary>
		int FutureSerial;
		/// <summary>
		/// �ڻ���˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ FutureID;
		/// <summary>
		/// �ʽ��ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 22)]
		String^ FutureAccount;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		int BankSerial;
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з����Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBrchID;
		/// <summary>
		/// �����˺�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankAccount;
		/// <summary>
		/// ֤������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ CertCode;
		/// <summary>
		/// ���Ҵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyCode;
		/// <summary>
		/// �������
		/// </summary>
		double TxAmount;
		/// <summary>
		/// ��Ч��־
		/// </summary>
		EnumTransferValidFlagType Flag;
	};

	/// <summary>
	/// ��Ӧ��Ϣ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcRspInfoField
	{
		/// <summary>
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	/// ������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcExchangeField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeName;
		/// <summary>
		/// ����������
		/// </summary>
		EnumExchangePropertyType ExchangeProperty;
	};

	/// <summary>
	/// ��Ʒ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcProductField
	{
		/// <summary>
		/// ��Ʒ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ProductID;
		/// <summary>
		/// ��Ʒ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ProductName;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Ʒ����
		/// </summary>
		EnumProductClassType ProductClass;
		/// <summary>
		/// ��Լ��������
		/// </summary>
		int VolumeMultiple;
		/// <summary>
		/// ��С�䶯��λ
		/// </summary>
		double PriceTick;
		/// <summary>
		/// �м۵�����µ���
		/// </summary>
		int MaxMarketOrderVolume;
		/// <summary>
		/// �м۵���С�µ���
		/// </summary>
		int MinMarketOrderVolume;
		/// <summary>
		/// �޼۵�����µ���
		/// </summary>
		int MaxLimitOrderVolume;
		/// <summary>
		/// �޼۵���С�µ���
		/// </summary>
		int MinLimitOrderVolume;
		/// <summary>
		/// �ֲ�����
		/// </summary>
		EnumPositionTypeType PositionType;
		/// <summary>
		/// �ֲ���������
		/// </summary>
		EnumPositionDateTypeType PositionDateType;
	};

	/// <summary>
	/// ��Լ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInstrumentField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ InstrumentName;
		/// <summary>
		/// ��Լ�ڽ������Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// ��Ʒ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ProductID;
		/// <summary>
		/// ��Ʒ����
		/// </summary>
		EnumProductClassType ProductClass;
		/// <summary>
		/// �������
		/// </summary>
		int DeliveryYear;
		/// <summary>
		/// ������
		/// </summary>
		int DeliveryMonth;
		/// <summary>
		/// �м۵�����µ���
		/// </summary>
		int MaxMarketOrderVolume;
		/// <summary>
		/// �м۵���С�µ���
		/// </summary>
		int MinMarketOrderVolume;
		/// <summary>
		/// �޼۵�����µ���
		/// </summary>
		int MaxLimitOrderVolume;
		/// <summary>
		/// �޼۵���С�µ���
		/// </summary>
		int MinLimitOrderVolume;
		/// <summary>
		/// ��Լ��������
		/// </summary>
		int VolumeMultiple;
		/// <summary>
		/// ��С�䶯��λ
		/// </summary>
		double PriceTick;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CreateDate;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ OpenDate;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExpireDate;
		/// <summary>
		/// ��ʼ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ StartDelivDate;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ EndDelivDate;
		/// <summary>
		/// ��Լ��������״̬
		/// </summary>
		EnumInstLifePhaseType InstLifePhase;
		/// <summary>
		/// ��ǰ�Ƿ���
		/// </summary>
		int IsTrading;
		/// <summary>
		/// �ֲ�����
		/// </summary>
		EnumPositionTypeType PositionType;
		/// <summary>
		/// �ֲ���������
		/// </summary>
		EnumPositionDateTypeType PositionDateType;
		/// <summary>
		/// ��ͷ��֤����
		/// </summary>
		double LongMarginRatio;
		/// <summary>
		/// ��ͷ��֤����
		/// </summary>
		double ShortMarginRatio;
	};

	/// <summary>
	/// ���͹�˾
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcBrokerField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���͹�˾���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ BrokerAbbr;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ BrokerName;
		/// <summary>
		/// �Ƿ��Ծ
		/// </summary>
		int IsActive;
	};

	/// <summary>
	/// ����������Ա
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTraderField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// ��װ����
		/// </summary>
		int InstallCount;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
	};

	/// <summary>
	/// Ͷ����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInvestorField
	{
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���߷������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorGroupID;
		/// <summary>
		/// Ͷ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ InvestorName;
		/// <summary>
		/// ֤������
		/// </summary>
		EnumIdCardTypeType IdentifiedCardType;
		/// <summary>
		/// ֤������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ IdentifiedCardNo;
		/// <summary>
		/// �Ƿ��Ծ
		/// </summary>
		int IsActive;
		/// <summary>
		/// ��ϵ�绰
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Telephone;
		/// <summary>
		/// ͨѶ��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
		String^ Address;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ OpenDate;
		/// <summary>
		/// �ֻ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Mobile;
	};

	/// <summary>
	/// ���ױ���
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTradingCodeField
	{
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// �Ƿ��Ծ
		/// </summary>
		int IsActive;
		/// <summary>
		/// ���ױ�������
		/// </summary>
		EnumClientIDTypeType ClientIDType;
	};

	/// <summary>
	/// ��Ա����;��͹�˾������ձ�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcPartBrokerField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// �Ƿ��Ծ
		/// </summary>
		int IsActive;
	};

	/// <summary>
	/// �����û�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSuperUserField
	{
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ UserName;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// �Ƿ��Ծ
		/// </summary>
		int IsActive;
	};

	/// <summary>
	/// �����û�����Ȩ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSuperUserFunctionField
	{
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ���ܴ���
		/// </summary>
		EnumFunctionCodeType FunctionCode;
	};

	/// <summary>
	/// Ͷ������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInvestorGroupField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���߷������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorGroupID;
		/// <summary>
		/// Ͷ���߷�������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ InvestorGroupName;
	};

	/// <summary>
	/// �ʽ��˻�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTradingAccountField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// �ϴ���Ѻ���
		/// </summary>
		double PreMortgage;
		/// <summary>
		/// �ϴ����ö��
		/// </summary>
		double PreCredit;
		/// <summary>
		/// �ϴδ���
		/// </summary>
		double PreDeposit;
		/// <summary>
		/// �ϴν���׼����
		/// </summary>
		double PreBalance;
		/// <summary>
		/// �ϴ�ռ�õı�֤��
		/// </summary>
		double PreMargin;
		/// <summary>
		/// ��Ϣ����
		/// </summary>
		double InterestBase;
		/// <summary>
		/// ��Ϣ����
		/// </summary>
		double Interest;
		/// <summary>
		/// �����
		/// </summary>
		double Deposit;
		/// <summary>
		/// ������
		/// </summary>
		double Withdraw;
		/// <summary>
		/// ����ı�֤��
		/// </summary>
		double FrozenMargin;
		/// <summary>
		/// ������ʽ�
		/// </summary>
		double FrozenCash;
		/// <summary>
		/// �����������
		/// </summary>
		double FrozenCommission;
		/// <summary>
		/// ��ǰ��֤���ܶ�
		/// </summary>
		double CurrMargin;
		/// <summary>
		/// �ʽ���
		/// </summary>
		double CashIn;
		/// <summary>
		/// ������
		/// </summary>
		double Commission;
		/// <summary>
		/// ƽ��ӯ��
		/// </summary>
		double CloseProfit;
		/// <summary>
		/// �ֲ�ӯ��
		/// </summary>
		double PositionProfit;
		/// <summary>
		/// �ڻ�����׼����
		/// </summary>
		double Balance;
		/// <summary>
		/// �����ʽ�
		/// </summary>
		double Available;
		/// <summary>
		/// ��ȡ�ʽ�
		/// </summary>
		double WithdrawQuota;
		/// <summary>
		/// ����׼����
		/// </summary>
		double Reserve;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ������
		/// </summary>
		int SettlementID;
		/// <summary>
		/// ���ö��
		/// </summary>
		double Credit;
		/// <summary>
		/// ��Ѻ���
		/// </summary>
		double Mortgage;
		/// <summary>
		/// ��������֤��
		/// </summary>
		double ExchangeMargin;
		/// <summary>
		/// Ͷ���߽��֤��
		/// </summary>
		double DeliveryMargin;
		/// <summary>
		/// ���������֤��
		/// </summary>
		double ExchangeDeliveryMargin;
	};

	/// <summary>
	/// Ͷ���ֲ߳�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInvestorPositionField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// �ֲֶ�շ���
		/// </summary>
		EnumPosiDirectionType PosiDirection;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// �ֲ�����
		/// </summary>
		EnumPositionDateType PositionDate;
		/// <summary>
		/// ���ճֲ�
		/// </summary>
		int YdPosition;
		/// <summary>
		/// ���ճֲ�
		/// </summary>
		int Position;
		/// <summary>
		/// ��ͷ����
		/// </summary>
		int LongFrozen;
		/// <summary>
		/// ��ͷ����
		/// </summary>
		int ShortFrozen;
		/// <summary>
		/// ���ֶ�����
		/// </summary>
		double LongFrozenAmount;
		/// <summary>
		/// ���ֶ�����
		/// </summary>
		double ShortFrozenAmount;
		/// <summary>
		/// ������
		/// </summary>
		int OpenVolume;
		/// <summary>
		/// ƽ����
		/// </summary>
		int CloseVolume;
		/// <summary>
		/// ���ֽ��
		/// </summary>
		double OpenAmount;
		/// <summary>
		/// ƽ�ֽ��
		/// </summary>
		double CloseAmount;
		/// <summary>
		/// �ֲֳɱ�
		/// </summary>
		double PositionCost;
		/// <summary>
		/// �ϴ�ռ�õı�֤��
		/// </summary>
		double PreMargin;
		/// <summary>
		/// ռ�õı�֤��
		/// </summary>
		double UseMargin;
		/// <summary>
		/// ����ı�֤��
		/// </summary>
		double FrozenMargin;
		/// <summary>
		/// ������ʽ�
		/// </summary>
		double FrozenCash;
		/// <summary>
		/// �����������
		/// </summary>
		double FrozenCommission;
		/// <summary>
		/// �ʽ���
		/// </summary>
		double CashIn;
		/// <summary>
		/// ������
		/// </summary>
		double Commission;
		/// <summary>
		/// ƽ��ӯ��
		/// </summary>
		double CloseProfit;
		/// <summary>
		/// �ֲ�ӯ��
		/// </summary>
		double PositionProfit;
		/// <summary>
		/// �ϴν����
		/// </summary>
		double PreSettlementPrice;
		/// <summary>
		/// ���ν����
		/// </summary>
		double SettlementPrice;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ������
		/// </summary>
		int SettlementID;
		/// <summary>
		/// ���ֳɱ�
		/// </summary>
		double OpenCost;
		/// <summary>
		/// ��������֤��
		/// </summary>
		double ExchangeMargin;
		/// <summary>
		/// ��ϳɽ��γɵĳֲ�
		/// </summary>
		int CombPosition;
		/// <summary>
		/// ��϶�ͷ����
		/// </summary>
		int CombLongFrozen;
		/// <summary>
		/// ��Ͽ�ͷ����
		/// </summary>
		int CombShortFrozen;
		/// <summary>
		/// ���ն���ƽ��ӯ��
		/// </summary>
		double CloseProfitByDate;
		/// <summary>
		/// ��ʶԳ�ƽ��ӯ��
		/// </summary>
		double CloseProfitByTrade;
		/// <summary>
		/// ���ճֲ�
		/// </summary>
		int TodayPosition;
		/// <summary>
		/// ��֤����
		/// </summary>
		double MarginRateByMoney;
		/// <summary>
		/// ��֤����(������)
		/// </summary>
		double MarginRateByVolume;
	};

	/// <summary>
	/// ��Լ��֤����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInstrumentMarginRateField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// Ͷ���߷�Χ
		/// </summary>
		EnumInvestorRangeType InvestorRange;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// ��ͷ��֤����
		/// </summary>
		double LongMarginRatioByMoney;
		/// <summary>
		/// ��ͷ��֤���
		/// </summary>
		double LongMarginRatioByVolume;
		/// <summary>
		/// ��ͷ��֤����
		/// </summary>
		double ShortMarginRatioByMoney;
		/// <summary>
		/// ��ͷ��֤���
		/// </summary>
		double ShortMarginRatioByVolume;
		/// <summary>
		/// �Ƿ���Խ�������ȡ
		/// </summary>
		EnumBoolType IsRelative;
	};

	/// <summary>
	/// ��Լ��������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInstrumentCommissionRateField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// Ͷ���߷�Χ
		/// </summary>
		EnumInvestorRangeType InvestorRange;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ������������
		/// </summary>
		double OpenRatioByMoney;
		/// <summary>
		/// ����������
		/// </summary>
		double OpenRatioByVolume;
		/// <summary>
		/// ƽ����������
		/// </summary>
		double CloseRatioByMoney;
		/// <summary>
		/// ƽ��������
		/// </summary>
		double CloseRatioByVolume;
		/// <summary>
		/// ƽ����������
		/// </summary>
		double CloseTodayRatioByMoney;
		/// <summary>
		/// ƽ��������
		/// </summary>
		double CloseTodayRatioByVolume;
	};

	/// <summary>
	/// �������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcDepthMarketDataField
	{
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Լ�ڽ������Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// ���¼�
		/// </summary>
		double LastPrice;
		/// <summary>
		/// �ϴν����
		/// </summary>
		double PreSettlementPrice;
		/// <summary>
		/// ������
		/// </summary>
		double PreClosePrice;
		/// <summary>
		/// ��ֲ���
		/// </summary>
		double PreOpenInterest;
		/// <summary>
		/// ����
		/// </summary>
		double OpenPrice;
		/// <summary>
		/// ��߼�
		/// </summary>
		double HighestPrice;
		/// <summary>
		/// ��ͼ�
		/// </summary>
		double LowestPrice;
		/// <summary>
		/// ����
		/// </summary>
		int Volume;
		/// <summary>
		/// �ɽ����
		/// </summary>
		double Turnover;
		/// <summary>
		/// �ֲ���
		/// </summary>
		double OpenInterest;
		/// <summary>
		/// ������
		/// </summary>
		double ClosePrice;
		/// <summary>
		/// ���ν����
		/// </summary>
		double SettlementPrice;
		/// <summary>
		/// ��ͣ���
		/// </summary>
		double UpperLimitPrice;
		/// <summary>
		/// ��ͣ���
		/// </summary>
		double LowerLimitPrice;
		/// <summary>
		/// ����ʵ��
		/// </summary>
		double PreDelta;
		/// <summary>
		/// ����ʵ��
		/// </summary>
		double CurrDelta;
		/// <summary>
		/// ����޸�ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ UpdateTime;
		/// <summary>
		/// ����޸ĺ���
		/// </summary>
		int UpdateMillisec;
		/// <summary>
		/// �����һ
		/// </summary>
		double BidPrice1;
		/// <summary>
		/// ������һ
		/// </summary>
		int BidVolume1;
		/// <summary>
		/// ������һ
		/// </summary>
		double AskPrice1;
		/// <summary>
		/// ������һ
		/// </summary>
		int AskVolume1;
		/// <summary>
		/// ����۶�
		/// </summary>
		double BidPrice2;
		/// <summary>
		/// ��������
		/// </summary>
		int BidVolume2;
		/// <summary>
		/// �����۶�
		/// </summary>
		double AskPrice2;
		/// <summary>
		/// ��������
		/// </summary>
		int AskVolume2;
		/// <summary>
		/// �������
		/// </summary>
		double BidPrice3;
		/// <summary>
		/// ��������
		/// </summary>
		int BidVolume3;
		/// <summary>
		/// ��������
		/// </summary>
		double AskPrice3;
		/// <summary>
		/// ��������
		/// </summary>
		int AskVolume3;
		/// <summary>
		/// �������
		/// </summary>
		double BidPrice4;
		/// <summary>
		/// ��������
		/// </summary>
		int BidVolume4;
		/// <summary>
		/// ��������
		/// </summary>
		double AskPrice4;
		/// <summary>
		/// ��������
		/// </summary>
		int AskVolume4;
		/// <summary>
		/// �������
		/// </summary>
		double BidPrice5;
		/// <summary>
		/// ��������
		/// </summary>
		int BidVolume5;
		/// <summary>
		/// ��������
		/// </summary>
		double AskPrice5;
		/// <summary>
		/// ��������
		/// </summary>
		int AskVolume5;
		/// <summary>
		/// ���վ���
		/// </summary>
		double AveragePrice;
	};

	/// <summary>
	/// Ͷ���ߺ�Լ����Ȩ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInstrumentTradingRightField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// Ͷ���߷�Χ
		/// </summary>
		EnumInvestorRangeType InvestorRange;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ����Ȩ��
		/// </summary>
		EnumTradingRightType TradingRight;
	};

	/// <summary>
	/// ���͹�˾�û�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcBrokerUserField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ UserName;
		/// <summary>
		/// �û�����
		/// </summary>
		EnumUserTypeType UserType;
		/// <summary>
		/// �Ƿ��Ծ
		/// </summary>
		int IsActive;
		/// <summary>
		/// �Ƿ�ʹ������
		/// </summary>
		int IsUsingOTP;
	};

	/// <summary>
	/// ���͹�˾�û�����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcBrokerUserPasswordField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
	};

	/// <summary>
	/// ���͹�˾�û�����Ȩ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcBrokerUserFunctionField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ���͹�˾���ܴ���
		/// </summary>
		EnumBrokerFunctionCodeType BrokerFunctionCode;
	};

	/// <summary>
	/// ����������Ա���̻�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTraderOfferField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// ����������Ա����״̬
		/// </summary>
		EnumTraderConnectStatusType TraderConnectStatus;
		/// <summary>
		/// �����������������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectRequestDate;
		/// <summary>
		/// �������������ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectRequestTime;
		/// <summary>
		/// �ϴα�������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LastReportDate;
		/// <summary>
		/// �ϴα���ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LastReportTime;
		/// <summary>
		/// �����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectDate;
		/// <summary>
		/// �������ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectTime;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ StartDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ StartTime;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
	};

	/// <summary>
	/// Ͷ���߽�����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSettlementInfoField
	{
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ������
		/// </summary>
		int SettlementID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ���
		/// </summary>
		int SequenceNo;
		/// <summary>
		/// ��Ϣ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 501)]
		String^ Content;
	};

	/// <summary>
	/// ��Լ��֤���ʵ���
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInstrumentMarginRateAdjustField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// Ͷ���߷�Χ
		/// </summary>
		EnumInvestorRangeType InvestorRange;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// ��ͷ��֤����
		/// </summary>
		double LongMarginRatioByMoney;
		/// <summary>
		/// ��ͷ��֤���
		/// </summary>
		double LongMarginRatioByVolume;
		/// <summary>
		/// ��ͷ��֤����
		/// </summary>
		double ShortMarginRatioByMoney;
		/// <summary>
		/// ��ͷ��֤���
		/// </summary>
		double ShortMarginRatioByVolume;
		/// <summary>
		/// �Ƿ���Խ�������ȡ
		/// </summary>
		int IsRelative;
	};

	/// <summary>
	/// ��������֤����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcExchangeMarginRateField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// ��ͷ��֤����
		/// </summary>
		double LongMarginRatioByMoney;
		/// <summary>
		/// ��ͷ��֤���
		/// </summary>
		double LongMarginRatioByVolume;
		/// <summary>
		/// ��ͷ��֤����
		/// </summary>
		double ShortMarginRatioByMoney;
		/// <summary>
		/// ��ͷ��֤���
		/// </summary>
		double ShortMarginRatioByVolume;
	};

	/// <summary>
	/// ��������֤���ʵ���
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcExchangeMarginRateAdjustField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// ���潻����Ͷ���߶�ͷ��֤����
		/// </summary>
		double LongMarginRatioByMoney;
		/// <summary>
		/// ���潻����Ͷ���߶�ͷ��֤���
		/// </summary>
		double LongMarginRatioByVolume;
		/// <summary>
		/// ���潻����Ͷ���߿�ͷ��֤����
		/// </summary>
		double ShortMarginRatioByMoney;
		/// <summary>
		/// ���潻����Ͷ���߿�ͷ��֤���
		/// </summary>
		double ShortMarginRatioByVolume;
		/// <summary>
		/// ��������ͷ��֤����
		/// </summary>
		double ExchLongMarginRatioByMoney;
		/// <summary>
		/// ��������ͷ��֤���
		/// </summary>
		double ExchLongMarginRatioByVolume;
		/// <summary>
		/// ��������ͷ��֤����
		/// </summary>
		double ExchShortMarginRatioByMoney;
		/// <summary>
		/// ��������ͷ��֤���
		/// </summary>
		double ExchShortMarginRatioByVolume;
		/// <summary>
		/// �����潻����Ͷ���߶�ͷ��֤����
		/// </summary>
		double NoLongMarginRatioByMoney;
		/// <summary>
		/// �����潻����Ͷ���߶�ͷ��֤���
		/// </summary>
		double NoLongMarginRatioByVolume;
		/// <summary>
		/// �����潻����Ͷ���߿�ͷ��֤����
		/// </summary>
		double NoShortMarginRatioByMoney;
		/// <summary>
		/// �����潻����Ͷ���߿�ͷ��֤���
		/// </summary>
		double NoShortMarginRatioByVolume;
	};

	/// <summary>
	/// ��������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSettlementRefField
	{
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ������
		/// </summary>
		int SettlementID;
	};

	/// <summary>
	/// ��ǰʱ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcCurrentTimeField
	{
		/// <summary>
		/// ��ǰ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CurrDate;
		/// <summary>
		/// ��ǰʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CurrTime;
		/// <summary>
		/// ��ǰʱ�䣨���룩
		/// </summary>
		int CurrMillisec;
	};

	/// <summary>
	/// ͨѶ�׶�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcCommPhaseField
	{
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ͨѶʱ�α��
		/// </summary>
		short CommPhaseNo;
	};

	/// <summary>
	/// ��¼��Ϣ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcLoginInfoField
	{
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ��¼����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LoginDate;
		/// <summary>
		/// ��¼ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LoginTime;
		/// <summary>
		/// IP��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ IPAddress;
		/// <summary>
		/// �û��˲�Ʒ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ UserProductInfo;
		/// <summary>
		/// �ӿڶ˲�Ʒ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ InterfaceProductInfo;
		/// <summary>
		/// Э����Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ProtocolInfo;
		/// <summary>
		/// ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ SystemName;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// ��󱨵�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ MaxOrderRef;
		/// <summary>
		/// ������ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ SHFETime;
		/// <summary>
		/// ������ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ DCETime;
		/// <summary>
		/// ֣����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CZCETime;
		/// <summary>
		/// �н���ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ FFEXTime;
		/// <summary>
		/// Mac��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ MacAddress;
		/// <summary>
		/// ��̬����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ OneTimePassword;
	};

	/// <summary>
	/// ��¼��Ϣ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcLogoutAllField
	{
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ SystemName;
	};

	/// <summary>
	/// ǰ��״̬
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcFrontStatusField
	{
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �ϴα�������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LastReportDate;
		/// <summary>
		/// �ϴα���ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LastReportTime;
		/// <summary>
		/// �Ƿ��Ծ
		/// </summary>
		int IsActive;
	};

	/// <summary>
	/// �û�������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcUserPasswordUpdateField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ԭ���Ŀ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ OldPassword;
		/// <summary>
		/// �µĿ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ NewPassword;
	};

	/// <summary>
	/// ���뱨��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInputOrderField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// �����۸�����
		/// </summary>
		EnumOrderPriceTypeType OrderPriceType;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_0;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_1;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_2;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_3;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_4;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_0;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_1;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_2;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_3;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_4;
		/// <summary>
		/// �۸�
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// ����
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// ��Ч������
		/// </summary>
		EnumTimeConditionType TimeCondition;
		/// <summary>
		/// GTD����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ GTDDate;
		/// <summary>
		/// �ɽ�������
		/// </summary>
		EnumVolumeConditionType VolumeCondition;
		/// <summary>
		/// ��С�ɽ���
		/// </summary>
		int MinVolume;
		/// <summary>
		/// ��������
		/// </summary>
		EnumContingentConditionType ContingentCondition;
		/// <summary>
		/// ֹ���
		/// </summary>
		double StopPrice;
		/// <summary>
		/// ǿƽԭ��
		/// </summary>
		EnumForceCloseReasonType ForceCloseReason;
		/// <summary>
		/// �Զ������־
		/// </summary>
		int IsAutoSuspend;
		/// <summary>
		/// ҵ��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// �û�ǿ����־
		/// </summary>
		int UserForceClose;
	};

	/// <summary>
	/// ����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcOrderField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// �����۸�����
		/// </summary>
		EnumOrderPriceTypeType OrderPriceType;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_0;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_1;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_2;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_3;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_4;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_0;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_1;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_2;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_3;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_4;
		/// <summary>
		/// �۸�
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// ����
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// ��Ч������
		/// </summary>
		EnumTimeConditionType TimeCondition;
		/// <summary>
		/// GTD����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ GTDDate;
		/// <summary>
		/// �ɽ�������
		/// </summary>
		EnumVolumeConditionType VolumeCondition;
		/// <summary>
		/// ��С�ɽ���
		/// </summary>
		int MinVolume;
		/// <summary>
		/// ��������
		/// </summary>
		EnumContingentConditionType ContingentCondition;
		/// <summary>
		/// ֹ���
		/// </summary>
		double StopPrice;
		/// <summary>
		/// ǿƽԭ��
		/// </summary>
		EnumForceCloseReasonType ForceCloseReason;
		/// <summary>
		/// �Զ������־
		/// </summary>
		int IsAutoSuspend;
		/// <summary>
		/// ҵ��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// ��Լ�ڽ������Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// �����ύ״̬
		/// </summary>
		EnumOrderSubmitStatusType OrderSubmitStatus;
		/// <summary>
		/// ������ʾ���
		/// </summary>
		int NotifySequence;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ������
		/// </summary>
		int SettlementID;
		/// <summary>
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// ������Դ
		/// </summary>
		EnumOrderSourceType OrderSource;
		/// <summary>
		/// ����״̬
		/// </summary>
		EnumOrderStatusType OrderStatus;
		/// <summary>
		/// ��������
		/// </summary>
		EnumOrderTypeType OrderType;
		/// <summary>
		/// ��ɽ�����
		/// </summary>
		int VolumeTraded;
		/// <summary>
		/// ʣ������
		/// </summary>
		int VolumeTotal;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertDate;
		/// <summary>
		/// ί��ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTime;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActiveTime;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ SuspendTime;
		/// <summary>
		/// ����޸�ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ UpdateTime;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CancelTime;
		/// <summary>
		/// ����޸Ľ���������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ActiveTraderID;
		/// <summary>
		/// �����Ա���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClearingPartID;
		/// <summary>
		/// ���
		/// </summary>
		int SequenceNo;
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// �û��˲�Ʒ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ UserProductInfo;
		/// <summary>
		/// ״̬��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ StatusMsg;
		/// <summary>
		/// �û�ǿ����־
		/// </summary>
		int UserForceClose;
		/// <summary>
		/// �����û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ ActiveUserID;
		/// <summary>
		/// ���͹�˾�������
		/// </summary>
		int BrokerOrderSeq;
		/// <summary>
		/// ��ر���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ RelativeOrderSysID;
	};

	/// <summary>
	/// ����������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcExchangeOrderField
	{
		/// <summary>
		/// �����۸�����
		/// </summary>
		EnumOrderPriceTypeType OrderPriceType;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombOffsetFlag;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombHedgeFlag;
		/// <summary>
		/// �۸�
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// ����
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// ��Ч������
		/// </summary>
		EnumTimeConditionType TimeCondition;
		/// <summary>
		/// GTD����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ GTDDate;
		/// <summary>
		/// �ɽ�������
		/// </summary>
		EnumVolumeConditionType VolumeCondition;
		/// <summary>
		/// ��С�ɽ���
		/// </summary>
		int MinVolume;
		/// <summary>
		/// ��������
		/// </summary>
		EnumContingentConditionType ContingentCondition;
		/// <summary>
		/// ֹ���
		/// </summary>
		double StopPrice;
		/// <summary>
		/// ǿƽԭ��
		/// </summary>
		EnumForceCloseReasonType ForceCloseReason;
		/// <summary>
		/// �Զ������־
		/// </summary>
		int IsAutoSuspend;
		/// <summary>
		/// ҵ��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// ��Լ�ڽ������Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// �����ύ״̬
		/// </summary>
		EnumOrderSubmitStatusType OrderSubmitStatus;
		/// <summary>
		/// ������ʾ���
		/// </summary>
		int NotifySequence;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ������
		/// </summary>
		int SettlementID;
		/// <summary>
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// ������Դ
		/// </summary>
		EnumOrderSourceType OrderSource;
		/// <summary>
		/// ����״̬
		/// </summary>
		EnumOrderStatusType OrderStatus;
		/// <summary>
		/// ��������
		/// </summary>
		EnumOrderTypeType OrderType;
		/// <summary>
		/// ��ɽ�����
		/// </summary>
		int VolumeTraded;
		/// <summary>
		/// ʣ������
		/// </summary>
		int VolumeTotal;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertDate;
		/// <summary>
		/// ί��ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTime;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActiveTime;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ SuspendTime;
		/// <summary>
		/// ����޸�ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ UpdateTime;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CancelTime;
		/// <summary>
		/// ����޸Ľ���������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ActiveTraderID;
		/// <summary>
		/// �����Ա���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClearingPartID;
		/// <summary>
		/// ���
		/// </summary>
		int SequenceNo;
	};

	/// <summary>
	/// ��������������ʧ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcExchangeOrderInsertErrorField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	/// ���뱨������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInputOrderActionField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ������������
		/// </summary>
		int OrderActionRef;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// ������־
		/// </summary>
		EnumActionFlagType ActionFlag;
		/// <summary>
		/// �۸�
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// �����仯
		/// </summary>
		int VolumeChange;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};

	/// <summary>
	/// ��������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcOrderActionField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ������������
		/// </summary>
		int OrderActionRef;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// ������־
		/// </summary>
		EnumActionFlagType ActionFlag;
		/// <summary>
		/// �۸�
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// �����仯
		/// </summary>
		int VolumeChange;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionTime;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// �������ر��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ActionLocalID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// ҵ��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// ��������״̬
		/// </summary>
		EnumOrderActionStatusType OrderActionStatus;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ״̬��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ StatusMsg;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};

	/// <summary>
	/// ��������������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcExchangeOrderActionField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// ������־
		/// </summary>
		EnumActionFlagType ActionFlag;
		/// <summary>
		/// �۸�
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// �����仯
		/// </summary>
		int VolumeChange;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionTime;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// �������ر��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ActionLocalID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// ҵ��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// ��������״̬
		/// </summary>
		EnumOrderActionStatusType OrderActionStatus;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};

	/// <summary>
	/// ��������������ʧ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcExchangeOrderActionErrorField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// �������ر��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ActionLocalID;
		/// <summary>
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	/// �������ɽ�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcExchangeTradeField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �ɽ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TradeID;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// ���׽�ɫ
		/// </summary>
		EnumTradingRoleType TradingRole;
		/// <summary>
		/// ��Լ�ڽ������Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// ��ƽ��־
		/// </summary>
		EnumOffsetFlagType OffsetFlag;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// �۸�
		/// </summary>
		double Price;
		/// <summary>
		/// ����
		/// </summary>
		int Volume;
		/// <summary>
		/// �ɽ�ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// �ɽ�ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// �ɽ�����
		/// </summary>
		EnumTradeTypeType TradeType;
		/// <summary>
		/// �ɽ�����Դ
		/// </summary>
		EnumPriceSourceType PriceSource;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// �����Ա���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClearingPartID;
		/// <summary>
		/// ҵ��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// ���
		/// </summary>
		int SequenceNo;
	};

	/// <summary>
	/// �ɽ�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTradeField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �ɽ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TradeID;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// ���׽�ɫ
		/// </summary>
		EnumTradingRoleType TradingRole;
		/// <summary>
		/// ��Լ�ڽ������Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// ��ƽ��־
		/// </summary>
		EnumOffsetFlagType OffsetFlag;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// �۸�
		/// </summary>
		double Price;
		/// <summary>
		/// ����
		/// </summary>
		int Volume;
		/// <summary>
		/// �ɽ�ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// �ɽ�ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// �ɽ�����
		/// </summary>
		EnumTradeTypeType TradeType;
		/// <summary>
		/// �ɽ�����Դ
		/// </summary>
		EnumPriceSourceType PriceSource;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// �����Ա���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClearingPartID;
		/// <summary>
		/// ҵ��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// ���
		/// </summary>
		int SequenceNo;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ������
		/// </summary>
		int SettlementID;
		/// <summary>
		/// ���͹�˾�������
		/// </summary>
		int BrokerOrderSeq;
	};

	/// <summary>
	/// �û��Ự
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcUserSessionField
	{
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ��¼����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LoginDate;
		/// <summary>
		/// ��¼ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LoginTime;
		/// <summary>
		/// IP��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ IPAddress;
		/// <summary>
		/// �û��˲�Ʒ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ UserProductInfo;
		/// <summary>
		/// �ӿڶ˲�Ʒ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ InterfaceProductInfo;
		/// <summary>
		/// Э����Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ProtocolInfo;
		/// <summary>
		/// Mac��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ MacAddress;
	};

	/// <summary>
	/// ��ѯ��󱨵�����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQueryMaxOrderVolumeField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// ��ƽ��־
		/// </summary>
		EnumOffsetFlagType OffsetFlag;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// �������������
		/// </summary>
		int MaxVolume;
	};

	/// <summary>
	/// Ͷ���߽�����ȷ����Ϣ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSettlementInfoConfirmField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ȷ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConfirmDate;
		/// <summary>
		/// ȷ��ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConfirmTime;
	};

	/// <summary>
	/// �����ͬ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSyncDepositField
	{
		/// <summary>
		/// �������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ DepositSeqNo;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// �����
		/// </summary>
		double Deposit;
		/// <summary>
		/// �Ƿ�ǿ�ƽ���
		/// </summary>
		int IsForce;
	};

	/// <summary>
	/// ���͹�˾ͬ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcBrokerSyncField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
	};

	/// <summary>
	/// ����ͬ���е�Ͷ����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSyncingInvestorField
	{
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���߷������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorGroupID;
		/// <summary>
		/// Ͷ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ InvestorName;
		/// <summary>
		/// ֤������
		/// </summary>
		EnumIdCardTypeType IdentifiedCardType;
		/// <summary>
		/// ֤������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ IdentifiedCardNo;
		/// <summary>
		/// �Ƿ��Ծ
		/// </summary>
		int IsActive;
		/// <summary>
		/// ��ϵ�绰
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Telephone;
		/// <summary>
		/// ͨѶ��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
		String^ Address;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ OpenDate;
		/// <summary>
		/// �ֻ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Mobile;
	};

	/// <summary>
	/// ����ͬ���еĽ��״���
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSyncingTradingCodeField
	{
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// �Ƿ��Ծ
		/// </summary>
		int IsActive;
		/// <summary>
		/// ���ױ�������
		/// </summary>
		EnumClientIDTypeType ClientIDType;
	};

	/// <summary>
	/// ����ͬ���е�Ͷ���߷���
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSyncingInvestorGroupField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���߷������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorGroupID;
		/// <summary>
		/// Ͷ���߷�������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ InvestorGroupName;
	};

	/// <summary>
	/// ����ͬ���еĽ����˺�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSyncingTradingAccountField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// �ϴ���Ѻ���
		/// </summary>
		double PreMortgage;
		/// <summary>
		/// �ϴ����ö��
		/// </summary>
		double PreCredit;
		/// <summary>
		/// �ϴδ���
		/// </summary>
		double PreDeposit;
		/// <summary>
		/// �ϴν���׼����
		/// </summary>
		double PreBalance;
		/// <summary>
		/// �ϴ�ռ�õı�֤��
		/// </summary>
		double PreMargin;
		/// <summary>
		/// ��Ϣ����
		/// </summary>
		double InterestBase;
		/// <summary>
		/// ��Ϣ����
		/// </summary>
		double Interest;
		/// <summary>
		/// �����
		/// </summary>
		double Deposit;
		/// <summary>
		/// ������
		/// </summary>
		double Withdraw;
		/// <summary>
		/// ����ı�֤��
		/// </summary>
		double FrozenMargin;
		/// <summary>
		/// ������ʽ�
		/// </summary>
		double FrozenCash;
		/// <summary>
		/// �����������
		/// </summary>
		double FrozenCommission;
		/// <summary>
		/// ��ǰ��֤���ܶ�
		/// </summary>
		double CurrMargin;
		/// <summary>
		/// �ʽ���
		/// </summary>
		double CashIn;
		/// <summary>
		/// ������
		/// </summary>
		double Commission;
		/// <summary>
		/// ƽ��ӯ��
		/// </summary>
		double CloseProfit;
		/// <summary>
		/// �ֲ�ӯ��
		/// </summary>
		double PositionProfit;
		/// <summary>
		/// �ڻ�����׼����
		/// </summary>
		double Balance;
		/// <summary>
		/// �����ʽ�
		/// </summary>
		double Available;
		/// <summary>
		/// ��ȡ�ʽ�
		/// </summary>
		double WithdrawQuota;
		/// <summary>
		/// ����׼����
		/// </summary>
		double Reserve;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ������
		/// </summary>
		int SettlementID;
		/// <summary>
		/// ���ö��
		/// </summary>
		double Credit;
		/// <summary>
		/// ��Ѻ���
		/// </summary>
		double Mortgage;
		/// <summary>
		/// ��������֤��
		/// </summary>
		double ExchangeMargin;
		/// <summary>
		/// Ͷ���߽��֤��
		/// </summary>
		double DeliveryMargin;
		/// <summary>
		/// ���������֤��
		/// </summary>
		double ExchangeDeliveryMargin;
	};

	/// <summary>
	/// ����ͬ���е�Ͷ���ֲ߳�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSyncingInvestorPositionField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// �ֲֶ�շ���
		/// </summary>
		EnumPosiDirectionType PosiDirection;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// �ֲ�����
		/// </summary>
		EnumPositionDateType PositionDate;
		/// <summary>
		/// ���ճֲ�
		/// </summary>
		int YdPosition;
		/// <summary>
		/// ���ճֲ�
		/// </summary>
		int Position;
		/// <summary>
		/// ��ͷ����
		/// </summary>
		int LongFrozen;
		/// <summary>
		/// ��ͷ����
		/// </summary>
		int ShortFrozen;
		/// <summary>
		/// ���ֶ�����
		/// </summary>
		double LongFrozenAmount;
		/// <summary>
		/// ���ֶ�����
		/// </summary>
		double ShortFrozenAmount;
		/// <summary>
		/// ������
		/// </summary>
		int OpenVolume;
		/// <summary>
		/// ƽ����
		/// </summary>
		int CloseVolume;
		/// <summary>
		/// ���ֽ��
		/// </summary>
		double OpenAmount;
		/// <summary>
		/// ƽ�ֽ��
		/// </summary>
		double CloseAmount;
		/// <summary>
		/// �ֲֳɱ�
		/// </summary>
		double PositionCost;
		/// <summary>
		/// �ϴ�ռ�õı�֤��
		/// </summary>
		double PreMargin;
		/// <summary>
		/// ռ�õı�֤��
		/// </summary>
		double UseMargin;
		/// <summary>
		/// ����ı�֤��
		/// </summary>
		double FrozenMargin;
		/// <summary>
		/// ������ʽ�
		/// </summary>
		double FrozenCash;
		/// <summary>
		/// �����������
		/// </summary>
		double FrozenCommission;
		/// <summary>
		/// �ʽ���
		/// </summary>
		double CashIn;
		/// <summary>
		/// ������
		/// </summary>
		double Commission;
		/// <summary>
		/// ƽ��ӯ��
		/// </summary>
		double CloseProfit;
		/// <summary>
		/// �ֲ�ӯ��
		/// </summary>
		double PositionProfit;
		/// <summary>
		/// �ϴν����
		/// </summary>
		double PreSettlementPrice;
		/// <summary>
		/// ���ν����
		/// </summary>
		double SettlementPrice;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ������
		/// </summary>
		int SettlementID;
		/// <summary>
		/// ���ֳɱ�
		/// </summary>
		double OpenCost;
		/// <summary>
		/// ��������֤��
		/// </summary>
		double ExchangeMargin;
		/// <summary>
		/// ��ϳɽ��γɵĳֲ�
		/// </summary>
		int CombPosition;
		/// <summary>
		/// ��϶�ͷ����
		/// </summary>
		int CombLongFrozen;
		/// <summary>
		/// ��Ͽ�ͷ����
		/// </summary>
		int CombShortFrozen;
		/// <summary>
		/// ���ն���ƽ��ӯ��
		/// </summary>
		double CloseProfitByDate;
		/// <summary>
		/// ��ʶԳ�ƽ��ӯ��
		/// </summary>
		double CloseProfitByTrade;
		/// <summary>
		/// ���ճֲ�
		/// </summary>
		int TodayPosition;
		/// <summary>
		/// ��֤����
		/// </summary>
		double MarginRateByMoney;
		/// <summary>
		/// ��֤����(������)
		/// </summary>
		double MarginRateByVolume;
	};

	/// <summary>
	/// ����ͬ���еĺ�Լ��֤����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSyncingInstrumentMarginRateField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// Ͷ���߷�Χ
		/// </summary>
		EnumInvestorRangeType InvestorRange;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// ��ͷ��֤����
		/// </summary>
		double LongMarginRatioByMoney;
		/// <summary>
		/// ��ͷ��֤���
		/// </summary>
		double LongMarginRatioByVolume;
		/// <summary>
		/// ��ͷ��֤����
		/// </summary>
		double ShortMarginRatioByMoney;
		/// <summary>
		/// ��ͷ��֤���
		/// </summary>
		double ShortMarginRatioByVolume;
		/// <summary>
		/// �Ƿ���Խ�������ȡ
		/// </summary>
		int IsRelative;
	};

	/// <summary>
	/// ����ͬ���еĺ�Լ��������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSyncingInstrumentCommissionRateField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// Ͷ���߷�Χ
		/// </summary>
		EnumInvestorRangeType InvestorRange;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ������������
		/// </summary>
		double OpenRatioByMoney;
		/// <summary>
		/// ����������
		/// </summary>
		double OpenRatioByVolume;
		/// <summary>
		/// ƽ����������
		/// </summary>
		double CloseRatioByMoney;
		/// <summary>
		/// ƽ��������
		/// </summary>
		double CloseRatioByVolume;
		/// <summary>
		/// ƽ����������
		/// </summary>
		double CloseTodayRatioByMoney;
		/// <summary>
		/// ƽ��������
		/// </summary>
		double CloseTodayRatioByVolume;
	};

	/// <summary>
	/// ����ͬ���еĺ�Լ����Ȩ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSyncingInstrumentTradingRightField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// Ͷ���߷�Χ
		/// </summary>
		EnumInvestorRangeType InvestorRange;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ����Ȩ��
		/// </summary>
		EnumTradingRightType TradingRight;
	};

	/// <summary>
	/// ��ѯ����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryOrderField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// ��ʼʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTimeStart;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTimeEnd;
	};

	/// <summary>
	/// ��ѯ�ɽ�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryTradeField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �ɽ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TradeID;
		/// <summary>
		/// ��ʼʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTimeStart;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTimeEnd;
	};

	/// <summary>
	/// ��ѯͶ���ֲ߳�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryInvestorPositionField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};

	/// <summary>
	/// ��ѯ�ʽ��˻�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryTradingAccountField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
	};

	/// <summary>
	/// ��ѯͶ����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryInvestorField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
	};

	/// <summary>
	/// ��ѯ���ױ���
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryTradingCodeField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// ���ױ�������
		/// </summary>
		EnumClientIDTypeType ClientIDType;
	};

	/// <summary>
	/// ��ѯ���ױ���
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryInvestorGroupField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
	};

	/// <summary>
	/// ��ѯ���ױ���
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryInstrumentMarginRateField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
	};

	/// <summary>
	/// ��ѯ���ױ���
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryInstrumentCommissionRateField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};

	/// <summary>
	/// ��ѯ���ױ���
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryInstrumentTradingRightField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};

	/// <summary>
	/// ��ѯ���͹�˾
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryBrokerField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
	};

	/// <summary>
	/// ��ѯ����Ա
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryTraderField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
	};

	/// <summary>
	/// ��ѯ���͹�˾��Ա����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryPartBrokerField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
	};

	/// <summary>
	/// ��ѯ�����û�����Ȩ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQrySuperUserFunctionField
	{
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};

	/// <summary>
	/// ��ѯ�û��Ự
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryUserSessionField
	{
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};

	/// <summary>
	/// ��ѯǰ��״̬
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryFrontStatusField
	{
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
	};

	/// <summary>
	/// ��ѯ����������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryExchangeOrderField
	{
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// ��Լ�ڽ������Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
	};

	/// <summary>
	/// ��ѯ��������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryOrderActionField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};

	/// <summary>
	/// ��ѯ��������������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryExchangeOrderActionField
	{
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
	};

	/// <summary>
	/// ��ѯ�����û�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQrySuperUserField
	{
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};

	/// <summary>
	/// ��ѯ������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryExchangeField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};

	/// <summary>
	/// ��ѯ��Ʒ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryProductField
	{
		/// <summary>
		/// ��Ʒ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ProductID;
	};

	/// <summary>
	/// ��ѯ��Լ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryInstrumentField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Լ�ڽ������Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// ��Ʒ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ProductID;
	};

	/// <summary>
	/// ��ѯ����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryDepthMarketDataField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};

	/// <summary>
	/// ��ѯ���͹�˾�û�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryBrokerUserField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};

	/// <summary>
	/// ��ѯ���͹�˾�û�Ȩ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryBrokerUserFunctionField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};

	/// <summary>
	/// ��ѯ����Ա���̻�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryTraderOfferField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
	};

	/// <summary>
	/// ��ѯ�������ˮ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQrySyncDepositField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ DepositSeqNo;
	};

	/// <summary>
	/// ��ѯͶ���߽�����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQrySettlementInfoField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
	};

	/// <summary>
	/// ��ѯ����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryHisOrderField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// ��ʼʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTimeStart;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTimeEnd;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ������
		/// </summary>
		int SettlementID;
	};

	/// <summary>
	/// �г�����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcMarketDataField
	{
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Լ�ڽ������Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// ���¼�
		/// </summary>
		double LastPrice;
		/// <summary>
		/// �ϴν����
		/// </summary>
		double PreSettlementPrice;
		/// <summary>
		/// ������
		/// </summary>
		double PreClosePrice;
		/// <summary>
		/// ��ֲ���
		/// </summary>
		double PreOpenInterest;
		/// <summary>
		/// ����
		/// </summary>
		double OpenPrice;
		/// <summary>
		/// ��߼�
		/// </summary>
		double HighestPrice;
		/// <summary>
		/// ��ͼ�
		/// </summary>
		double LowestPrice;
		/// <summary>
		/// ����
		/// </summary>
		int Volume;
		/// <summary>
		/// �ɽ����
		/// </summary>
		double Turnover;
		/// <summary>
		/// �ֲ���
		/// </summary>
		double OpenInterest;
		/// <summary>
		/// ������
		/// </summary>
		double ClosePrice;
		/// <summary>
		/// ���ν����
		/// </summary>
		double SettlementPrice;
		/// <summary>
		/// ��ͣ���
		/// </summary>
		double UpperLimitPrice;
		/// <summary>
		/// ��ͣ���
		/// </summary>
		double LowerLimitPrice;
		/// <summary>
		/// ����ʵ��
		/// </summary>
		double PreDelta;
		/// <summary>
		/// ����ʵ��
		/// </summary>
		double CurrDelta;
		/// <summary>
		/// ����޸�ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ UpdateTime;
		/// <summary>
		/// ����޸ĺ���
		/// </summary>
		int UpdateMillisec;
	};

	/// <summary>
	/// �����������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcMarketDataBaseField
	{
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// �ϴν����
		/// </summary>
		double PreSettlementPrice;
		/// <summary>
		/// ������
		/// </summary>
		double PreClosePrice;
		/// <summary>
		/// ��ֲ���
		/// </summary>
		double PreOpenInterest;
		/// <summary>
		/// ����ʵ��
		/// </summary>
		double PreDelta;
	};

	/// <summary>
	/// ���龲̬����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcMarketDataStaticField
	{
		/// <summary>
		/// ����
		/// </summary>
		double OpenPrice;
		/// <summary>
		/// ��߼�
		/// </summary>
		double HighestPrice;
		/// <summary>
		/// ��ͼ�
		/// </summary>
		double LowestPrice;
		/// <summary>
		/// ������
		/// </summary>
		double ClosePrice;
		/// <summary>
		/// ��ͣ���
		/// </summary>
		double UpperLimitPrice;
		/// <summary>
		/// ��ͣ���
		/// </summary>
		double LowerLimitPrice;
		/// <summary>
		/// ���ν����
		/// </summary>
		double SettlementPrice;
		/// <summary>
		/// ����ʵ��
		/// </summary>
		double CurrDelta;
	};

	/// <summary>
	/// �������³ɽ�����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcMarketDataLastMatchField
	{
		/// <summary>
		/// ���¼�
		/// </summary>
		double LastPrice;
		/// <summary>
		/// ����
		/// </summary>
		int Volume;
		/// <summary>
		/// �ɽ����
		/// </summary>
		double Turnover;
		/// <summary>
		/// �ֲ���
		/// </summary>
		double OpenInterest;
	};

	/// <summary>
	/// �������ż�����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcMarketDataBestPriceField
	{
		/// <summary>
		/// �����һ
		/// </summary>
		double BidPrice1;
		/// <summary>
		/// ������һ
		/// </summary>
		int BidVolume1;
		/// <summary>
		/// ������һ
		/// </summary>
		double AskPrice1;
		/// <summary>
		/// ������һ
		/// </summary>
		int AskVolume1;
	};

	/// <summary>
	/// �����������������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcMarketDataBid23Field
	{
		/// <summary>
		/// ����۶�
		/// </summary>
		double BidPrice2;
		/// <summary>
		/// ��������
		/// </summary>
		int BidVolume2;
		/// <summary>
		/// �������
		/// </summary>
		double BidPrice3;
		/// <summary>
		/// ��������
		/// </summary>
		int BidVolume3;
	};

	/// <summary>
	/// ������������������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcMarketDataAsk23Field
	{
		/// <summary>
		/// �����۶�
		/// </summary>
		double AskPrice2;
		/// <summary>
		/// ��������
		/// </summary>
		int AskVolume2;
		/// <summary>
		/// ��������
		/// </summary>
		double AskPrice3;
		/// <summary>
		/// ��������
		/// </summary>
		int AskVolume3;
	};

	/// <summary>
	/// ���������ġ�������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcMarketDataBid45Field
	{
		/// <summary>
		/// �������
		/// </summary>
		double BidPrice4;
		/// <summary>
		/// ��������
		/// </summary>
		int BidVolume4;
		/// <summary>
		/// �������
		/// </summary>
		double BidPrice5;
		/// <summary>
		/// ��������
		/// </summary>
		int BidVolume5;
	};

	/// <summary>
	/// ���������ġ�������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcMarketDataAsk45Field
	{
		/// <summary>
		/// ��������
		/// </summary>
		double AskPrice4;
		/// <summary>
		/// ��������
		/// </summary>
		int AskVolume4;
		/// <summary>
		/// ��������
		/// </summary>
		double AskPrice5;
		/// <summary>
		/// ��������
		/// </summary>
		int AskVolume5;
	};

	/// <summary>
	/// �������ʱ������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcMarketDataUpdateTimeField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ����޸�ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ UpdateTime;
		/// <summary>
		/// ����޸ĺ���
		/// </summary>
		int UpdateMillisec;
	};

	/// <summary>
	/// ָ���ĺ�Լ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSpecificInstrumentField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};

	/// <summary>
	/// ��Լ״̬
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInstrumentStatusField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Լ�ڽ������Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// ���������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ SettlementGroupID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ��Լ����״̬
		/// </summary>
		EnumInstrumentStatusType InstrumentStatus;
		/// <summary>
		/// ���׽׶α��
		/// </summary>
		int TradingSegmentSN;
		/// <summary>
		/// ���뱾״̬ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ EnterTime;
		/// <summary>
		/// ���뱾״̬ԭ��
		/// </summary>
		EnumInstStatusEnterReasonType EnterReason;
	};

	/// <summary>
	/// ��ѯ��Լ״̬
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryInstrumentStatusField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Լ�ڽ������Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
	};

	/// <summary>
	/// Ͷ�����˻�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInvestorAccountField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
	};

	/// <summary>
	/// ����ӯ���㷨
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcPositionProfitAlgorithmField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// ӯ���㷨
		/// </summary>
		EnumAlgorithmType Algorithm;
		/// <summary>
		/// ��ע
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
		String^ Memo;
	};

	/// <summary>
	/// ��Ա�ʽ��ۿ�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcDiscountField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���߷�Χ
		/// </summary>
		EnumInvestorRangeType InvestorRange;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// �ʽ��ۿ۱���
		/// </summary>
		double Discount;
	};

	/// <summary>
	/// ��ѯת������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryTransferBankField
	{
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з����Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBrchID;
	};

	/// <summary>
	/// ת������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferBankField
	{
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з����Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBrchID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
		String^ BankName;
		/// <summary>
		/// �Ƿ��Ծ
		/// </summary>
		int IsActive;
	};

	/// <summary>
	/// ��ѯͶ���ֲ߳���ϸ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryInvestorPositionDetailField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};

	/// <summary>
	/// Ͷ���ֲ߳���ϸ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInvestorPositionDetailField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// ����
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ OpenDate;
		/// <summary>
		/// �ɽ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TradeID;
		/// <summary>
		/// ����
		/// </summary>
		int Volume;
		/// <summary>
		/// ���ּ�
		/// </summary>
		double OpenPrice;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ������
		/// </summary>
		int SettlementID;
		/// <summary>
		/// �ɽ�����
		/// </summary>
		EnumTradeTypeType TradeType;
		/// <summary>
		/// ��Ϻ�Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ CombInstrumentID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ���ն���ƽ��ӯ��
		/// </summary>
		double CloseProfitByDate;
		/// <summary>
		/// ��ʶԳ�ƽ��ӯ��
		/// </summary>
		double CloseProfitByTrade;
		/// <summary>
		/// ���ն��гֲ�ӯ��
		/// </summary>
		double PositionProfitByDate;
		/// <summary>
		/// ��ʶԳ�ֲ�ӯ��
		/// </summary>
		double PositionProfitByTrade;
		/// <summary>
		/// Ͷ���߱�֤��
		/// </summary>
		double Margin;
		/// <summary>
		/// ��������֤��
		/// </summary>
		double ExchMargin;
		/// <summary>
		/// ��֤����
		/// </summary>
		double MarginRateByMoney;
		/// <summary>
		/// ��֤����(������)
		/// </summary>
		double MarginRateByVolume;
		/// <summary>
		/// ������
		/// </summary>
		double LastSettlementPrice;
		/// <summary>
		/// �����
		/// </summary>
		double SettlementPrice;
		/// <summary>
		/// ƽ����
		/// </summary>
		int CloseVolume;
		/// <summary>
		/// ƽ�ֽ��
		/// </summary>
		double CloseAmount;
	};

	/// <summary>
	/// �ʽ��˻�������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTradingAccountPasswordField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
	};

	/// <summary>
	/// ���������鱨�̻�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcMDTraderOfferField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// ����������Ա����״̬
		/// </summary>
		EnumTraderConnectStatusType TraderConnectStatus;
		/// <summary>
		/// �����������������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectRequestDate;
		/// <summary>
		/// �������������ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectRequestTime;
		/// <summary>
		/// �ϴα�������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LastReportDate;
		/// <summary>
		/// �ϴα���ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LastReportTime;
		/// <summary>
		/// �����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectDate;
		/// <summary>
		/// �������ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectTime;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ StartDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ StartTime;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
	};

	/// <summary>
	/// ��ѯ���鱨�̻�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryMDTraderOfferField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
	};

	/// <summary>
	/// ��ѯ�ͻ�֪ͨ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryNoticeField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
	};

	/// <summary>
	/// �ͻ�֪ͨ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcNoticeField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ��Ϣ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 501)]
		String^ Content;
		/// <summary>
		/// ���͹�˾֪ͨ�������к�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 2)]
		String^ SequenceLabel;
	};

	/// <summary>
	/// �û�Ȩ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcUserRightField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// �ͻ�Ȩ������
		/// </summary>
		EnumUserRightTypeType UserRightType;
		/// <summary>
		/// �Ƿ��ֹ
		/// </summary>
		int IsForbidden;
	};

	/// <summary>
	/// ��ѯ������Ϣȷ����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQrySettlementInfoConfirmField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
	};

	/// <summary>
	/// װ�ؽ�����Ϣ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcLoadSettlementInfoField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
	};

	/// <summary>
	/// ���͹�˾�����ʽ��㷨��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcBrokerWithdrawAlgorithmField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �����ʽ��㷨
		/// </summary>
		EnumAlgorithmType WithdrawAlgorithm;
		/// <summary>
		/// �ʽ�ʹ����
		/// </summary>
		double UsingRatio;
		/// <summary>
		/// �����Ƿ����ƽ��ӯ��
		/// </summary>
		EnumIncludeCloseProfitType IncludeCloseProfit;
		/// <summary>
		/// �����޲����޳ɽ��ͻ��Ƿ��ܿ����������
		/// </summary>
		EnumAllWithoutTradeType AllWithoutTrade;
		/// <summary>
		/// �����Ƿ����ƽ��ӯ��
		/// </summary>
		EnumIncludeCloseProfitType AvailIncludeCloseProfit;
		/// <summary>
		/// �Ƿ������û��¼�
		/// </summary>
		int IsBrokerUserEvent;
	};

	/// <summary>
	/// �ʽ��˻���������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTradingAccountPasswordUpdateV1Field
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ԭ���Ŀ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ OldPassword;
		/// <summary>
		/// �µĿ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ NewPassword;
	};

	/// <summary>
	/// �ʽ��˻���������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTradingAccountPasswordUpdateField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// ԭ���Ŀ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ OldPassword;
		/// <summary>
		/// �µĿ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ NewPassword;
	};

	/// <summary>
	/// ��ѯ��Ϻ�Լ����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryCombinationLegField
	{
		/// <summary>
		/// ��Ϻ�Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ CombInstrumentID;
		/// <summary>
		/// ���ȱ��
		/// </summary>
		int LegID;
		/// <summary>
		/// ���Ⱥ�Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ LegInstrumentID;
	};

	/// <summary>
	/// ��ѯ��Ϻ�Լ����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQrySyncStatusField
	{
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
	};

	/// <summary>
	/// ��Ͻ��׺�Լ�ĵ���
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcCombinationLegField
	{
		/// <summary>
		/// ��Ϻ�Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ CombInstrumentID;
		/// <summary>
		/// ���ȱ��
		/// </summary>
		int LegID;
		/// <summary>
		/// ���Ⱥ�Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ LegInstrumentID;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// ���ȳ���
		/// </summary>
		int LegMultiple;
		/// <summary>
		/// ��������
		/// </summary>
		int ImplyLevel;
	};

	/// <summary>
	/// ����ͬ��״̬
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSyncStatusField
	{
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����ͬ��״̬
		/// </summary>
		EnumDataSyncStatusType DataSyncStatus;
	};

	/// <summary>
	/// ��ѯ��ϵ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryLinkManField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
	};

	/// <summary>
	/// ��ϵ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcLinkManField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ��ϵ������
		/// </summary>
		EnumPersonTypeType PersonType;
		/// <summary>
		/// ֤������
		/// </summary>
		EnumIdCardTypeType IdentifiedCardType;
		/// <summary>
		/// ֤������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ IdentifiedCardNo;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ PersonName;
		/// <summary>
		/// ��ϵ�绰
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Telephone;
		/// <summary>
		/// ͨѶ��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
		String^ Address;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ ZipCode;
		/// <summary>
		/// ���ȼ�
		/// </summary>
		int Priority;
	};

	/// <summary>
	/// ��ѯ���͹�˾�û��¼�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryBrokerUserEventField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// �û��¼�����
		/// </summary>
		EnumUserEventTypeType UserEventType;
	};

	/// <summary>
	/// ��ѯ���͹�˾�û��¼�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcBrokerUserEventField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// �û��¼�����
		/// </summary>
		EnumUserEventTypeType UserEventType;
		/// <summary>
		/// �û��¼����
		/// </summary>
		int EventSequenceNo;
		/// <summary>
		/// �¼���������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ EventDate;
		/// <summary>
		/// �¼�����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ EventTime;
		/// <summary>
		/// �û��¼���Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 1025)]
		String^ UserEventInfo;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};

	/// <summary>
	/// ��ѯǩԼ��������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryContractBankField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з����Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBrchID;
	};

	/// <summary>
	/// ��ѯǩԼ������Ӧ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcContractBankField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з����Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBrchID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
		String^ BankName;
	};

	/// <summary>
	/// Ͷ������ϳֲ���ϸ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInvestorPositionCombineDetailField
	{
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ OpenDate;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ������
		/// </summary>
		int SettlementID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ��ϱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ComTradeID;
		/// <summary>
		/// ��ϱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TradeID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// ����
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// �ֲ���
		/// </summary>
		int TotalAmt;
		/// <summary>
		/// Ͷ���߱�֤��
		/// </summary>
		double Margin;
		/// <summary>
		/// ��������֤��
		/// </summary>
		double ExchMargin;
		/// <summary>
		/// ��֤����
		/// </summary>
		double MarginRateByMoney;
		/// <summary>
		/// ��֤����(������)
		/// </summary>
		double MarginRateByVolume;
		/// <summary>
		/// ���ȱ��
		/// </summary>
		int LegID;
		/// <summary>
		/// ���ȳ���
		/// </summary>
		int LegMultiple;
		/// <summary>
		/// ��ϳֲֺ�Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ CombInstrumentID;
	};

	/// <summary>
	/// Ԥ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcParkedOrderField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// �����۸�����
		/// </summary>
		EnumOrderPriceTypeType OrderPriceType;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_0;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_1;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_2;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_3;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_4;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_0;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_1;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_2;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_3;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_4;
		/// <summary>
		/// �۸�
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// ����
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// ��Ч������
		/// </summary>
		EnumTimeConditionType TimeCondition;
		/// <summary>
		/// GTD����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ GTDDate;
		/// <summary>
		/// �ɽ�������
		/// </summary>
		EnumVolumeConditionType VolumeCondition;
		/// <summary>
		/// ��С�ɽ���
		/// </summary>
		int MinVolume;
		/// <summary>
		/// ��������
		/// </summary>
		EnumContingentConditionType ContingentCondition;
		/// <summary>
		/// ֹ���
		/// </summary>
		double StopPrice;
		/// <summary>
		/// ǿƽԭ��
		/// </summary>
		EnumForceCloseReasonType ForceCloseReason;
		/// <summary>
		/// �Զ������־
		/// </summary>
		int IsAutoSuspend;
		/// <summary>
		/// ҵ��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// �û�ǿ����־
		/// </summary>
		int UserForceClose;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// Ԥ�񱨵����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ParkedOrderID;
		/// <summary>
		/// �û�����
		/// </summary>
		EnumUserTypeType UserType;
		/// <summary>
		/// Ԥ��״̬
		/// </summary>
		EnumParkedOrderStatusType Status;
		/// <summary>
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	/// ����Ԥ�񵥲���
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcParkedOrderActionField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ������������
		/// </summary>
		int OrderActionRef;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// ������־
		/// </summary>
		EnumActionFlagType ActionFlag;
		/// <summary>
		/// �۸�
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// �����仯
		/// </summary>
		int VolumeChange;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// Ԥ�񳷵������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ParkedOrderActionID;
		/// <summary>
		/// �û�����
		/// </summary>
		EnumUserTypeType UserType;
		/// <summary>
		/// Ԥ�񳷵�״̬
		/// </summary>
		EnumParkedOrderStatusType Status;
		/// <summary>
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	/// ��ѯԤ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryParkedOrderField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};

	/// <summary>
	/// ��ѯԤ�񳷵�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryParkedOrderActionField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};

	/// <summary>
	/// ɾ��Ԥ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcRemoveParkedOrderField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// Ԥ�񱨵����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ParkedOrderID;
	};

	/// <summary>
	/// ɾ��Ԥ�񳷵�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcRemoveParkedOrderActionField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// Ԥ�񳷵����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ParkedOrderActionID;
	};

	/// <summary>
	/// ���͹�˾�����ʽ��㷨��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInvestorWithdrawAlgorithmField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���߷�Χ
		/// </summary>
		EnumInvestorRangeType InvestorRange;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// �����ʽ����
		/// </summary>
		double UsingRatio;
	};

	/// <summary>
	/// ��ѯ��ϳֲ���ϸ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryInvestorPositionCombineDetailField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ��ϳֲֺ�Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ CombInstrumentID;
	};

	/// <summary>
	/// �ɽ�����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcMarketDataAveragePriceField
	{
		/// <summary>
		/// ���վ���
		/// </summary>
		double AveragePrice;
	};

	/// <summary>
	/// У��Ͷ��������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcVerifyInvestorPasswordField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
	};

	/// <summary>
	/// �û�IP
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcUserIPField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// IP��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ IPAddress;
		/// <summary>
		/// IP��ַ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ IPMask;
		/// <summary>
		/// Mac��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ MacAddress;
	};

	/// <summary>
	/// �û��¼�֪ͨ��Ϣ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTradingNoticeInfoField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ SendTime;
		/// <summary>
		/// ��Ϣ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 501)]
		String^ FieldContent;
		/// <summary>
		/// ����ϵ�к�
		/// </summary>
		short SequenceSeries;
		/// <summary>
		/// ���к�
		/// </summary>
		int SequenceNo;
	};

	/// <summary>
	/// �û��¼�֪ͨ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTradingNoticeField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���߷�Χ
		/// </summary>
		EnumInvestorRangeType InvestorRange;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ����ϵ�к�
		/// </summary>
		short SequenceSeries;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ SendTime;
		/// <summary>
		/// ���к�
		/// </summary>
		int SequenceNo;
		/// <summary>
		/// ��Ϣ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 501)]
		String^ FieldContent;
	};

	/// <summary>
	/// ��ѯ�����¼�֪ͨ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryTradingNoticeField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
	};

	/// <summary>
	/// ��ѯ���󱨵�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryErrOrderField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
	};

	/// <summary>
	/// ���󱨵�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcErrOrderField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// �����۸�����
		/// </summary>
		EnumOrderPriceTypeType OrderPriceType;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombOffsetFlag;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombHedgeFlag;
		/// <summary>
		/// �۸�
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// ����
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// ��Ч������
		/// </summary>
		EnumTimeConditionType TimeCondition;
		/// <summary>
		/// GTD����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ GTDDate;
		/// <summary>
		/// �ɽ�������
		/// </summary>
		EnumVolumeConditionType VolumeCondition;
		/// <summary>
		/// ��С�ɽ���
		/// </summary>
		int MinVolume;
		/// <summary>
		/// ��������
		/// </summary>
		EnumContingentConditionType ContingentCondition;
		/// <summary>
		/// ֹ���
		/// </summary>
		double StopPrice;
		/// <summary>
		/// ǿƽԭ��
		/// </summary>
		EnumForceCloseReasonType ForceCloseReason;
		/// <summary>
		/// �Զ������־
		/// </summary>
		int IsAutoSuspend;
		/// <summary>
		/// ҵ��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// �û�ǿ����־
		/// </summary>
		int UserForceClose;
		/// <summary>
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	/// ��ѯ���󱨵�����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcErrorConditionalOrderField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// �����۸�����
		/// </summary>
		EnumOrderPriceTypeType OrderPriceType;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombOffsetFlag;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombHedgeFlag;
		/// <summary>
		/// �۸�
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// ����
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// ��Ч������
		/// </summary>
		EnumTimeConditionType TimeCondition;
		/// <summary>
		/// GTD����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ GTDDate;
		/// <summary>
		/// �ɽ�������
		/// </summary>
		EnumVolumeConditionType VolumeCondition;
		/// <summary>
		/// ��С�ɽ���
		/// </summary>
		int MinVolume;
		/// <summary>
		/// ��������
		/// </summary>
		EnumContingentConditionType ContingentCondition;
		/// <summary>
		/// ֹ���
		/// </summary>
		double StopPrice;
		/// <summary>
		/// ǿƽԭ��
		/// </summary>
		EnumForceCloseReasonType ForceCloseReason;
		/// <summary>
		/// �Զ������־
		/// </summary>
		int IsAutoSuspend;
		/// <summary>
		/// ҵ��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// ��Լ�ڽ������Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// �����ύ״̬
		/// </summary>
		EnumOrderSubmitStatusType OrderSubmitStatus;
		/// <summary>
		/// ������ʾ���
		/// </summary>
		int NotifySequence;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ������
		/// </summary>
		int SettlementID;
		/// <summary>
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// ������Դ
		/// </summary>
		EnumOrderSourceType OrderSource;
		/// <summary>
		/// ����״̬
		/// </summary>
		EnumOrderStatusType OrderStatus;
		/// <summary>
		/// ��������
		/// </summary>
		EnumOrderTypeType OrderType;
		/// <summary>
		/// ��ɽ�����
		/// </summary>
		int VolumeTraded;
		/// <summary>
		/// ʣ������
		/// </summary>
		int VolumeTotal;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertDate;
		/// <summary>
		/// ί��ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTime;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActiveTime;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ SuspendTime;
		/// <summary>
		/// ����޸�ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ UpdateTime;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CancelTime;
		/// <summary>
		/// ����޸Ľ���������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ActiveTraderID;
		/// <summary>
		/// �����Ա���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClearingPartID;
		/// <summary>
		/// ���
		/// </summary>
		int SequenceNo;
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// �û��˲�Ʒ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ UserProductInfo;
		/// <summary>
		/// ״̬��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ StatusMsg;
		/// <summary>
		/// �û�ǿ����־
		/// </summary>
		int UserForceClose;
		/// <summary>
		/// �����û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ ActiveUserID;
		/// <summary>
		/// ���͹�˾�������
		/// </summary>
		int BrokerOrderSeq;
		/// <summary>
		/// ��ر���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ RelativeOrderSysID;
		/// <summary>
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	/// ��ѯ���󱨵�����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryErrOrderActionField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
	};

	/// <summary>
	/// ���󱨵�����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcErrOrderActionField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ������������
		/// </summary>
		int OrderActionRef;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// ������־
		/// </summary>
		EnumActionFlagType ActionFlag;
		/// <summary>
		/// �۸�
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// �����仯
		/// </summary>
		int VolumeChange;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionTime;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// �������ر��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ActionLocalID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// ҵ��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// ��������״̬
		/// </summary>
		EnumOrderActionStatusType OrderActionStatus;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ״̬��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ StatusMsg;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	/// ��ѯ������״̬
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryExchangeSequenceField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};

	/// <summary>
	/// ������״̬
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcExchangeSequenceField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ���
		/// </summary>
		int SequenceNo;
		/// <summary>
		/// ��Լ����״̬
		/// </summary>
		EnumInstrumentStatusType MarketStatus;
	};

	/// <summary>
	/// ���ݼ۸��ѯ��󱨵�����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQueryMaxOrderVolumeWithPriceField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// ��ƽ��־
		/// </summary>
		EnumOffsetFlagType OffsetFlag;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// �������������
		/// </summary>
		int MaxVolume;
		/// <summary>
		/// �����۸�
		/// </summary>
		double Price;
	};

	/// <summary>
	/// ��ѯ���͹�˾���ײ���
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryBrokerTradingParamsField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
	};

	/// <summary>
	/// ���͹�˾���ײ���
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcBrokerTradingParamsField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ��֤��۸�����
		/// </summary>
		EnumMarginPriceTypeType MarginPriceType;
		/// <summary>
		/// ӯ���㷨
		/// </summary>
		EnumAlgorithmType Algorithm;
		/// <summary>
		/// �����Ƿ����ƽ��ӯ��
		/// </summary>
		EnumIncludeCloseProfitType AvailIncludeCloseProfit;
	};

	/// <summary>
	/// ��ѯ���͹�˾�����㷨
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryBrokerTradingAlgosField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};

	/// <summary>
	/// ���͹�˾�����㷨
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcBrokerTradingAlgosField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// �ֲִ����㷨���
		/// </summary>
		EnumHandlePositionAlgoIDType HandlePositionAlgoID;
		/// <summary>
		/// Ѱ�ұ�֤�����㷨���
		/// </summary>
		EnumFindMarginRateAlgoIDType FindMarginRateAlgoID;
		/// <summary>
		/// �ʽ����㷨���
		/// </summary>
		EnumHandleTradingAccountAlgoIDType HandleTradingAccountAlgoID;
	};

	/// <summary>
	/// ��ѯ���͹�˾�ʽ�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQueryBrokerDepositField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};

	/// <summary>
	/// ���͹�˾�ʽ�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcBrokerDepositField
	{
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �ϴν���׼����
		/// </summary>
		double PreBalance;
		/// <summary>
		/// ��ǰ��֤���ܶ�
		/// </summary>
		double CurrMargin;
		/// <summary>
		/// ƽ��ӯ��
		/// </summary>
		double CloseProfit;
		/// <summary>
		/// �ڻ�����׼����
		/// </summary>
		double Balance;
		/// <summary>
		/// �����
		/// </summary>
		double Deposit;
		/// <summary>
		/// ������
		/// </summary>
		double Withdraw;
		/// <summary>
		/// �����ʽ�
		/// </summary>
		double Available;
		/// <summary>
		/// ����׼����
		/// </summary>
		double Reserve;
		/// <summary>
		/// ����ı�֤��
		/// </summary>
		double FrozenMargin;
	};

	/// <summary>
	/// ��ѯ��֤����ϵͳ���͹�˾��Կ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryCFMMCBrokerKeyField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
	};

	/// <summary>
	/// ��֤����ϵͳ���͹�˾��Կ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcCFMMCBrokerKeyField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���͹�˾ͳһ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// ��Կ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CreateDate;
		/// <summary>
		/// ��Կ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CreateTime;
		/// <summary>
		/// ��Կ���
		/// </summary>
		int KeyID;
		/// <summary>
		/// ��̬��Կ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ CurrentKey;
		/// <summary>
		/// ��̬��Կ����
		/// </summary>
		EnumCFMMCKeyKindType KeyKind;
	};

	/// <summary>
	/// ��֤����ϵͳ���͹�˾�ʽ��˻���Կ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcCFMMCTradingAccountKeyField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���͹�˾ͳһ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// ��Կ���
		/// </summary>
		int KeyID;
		/// <summary>
		/// ��̬��Կ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ CurrentKey;
	};

	/// <summary>
	/// �����ѯ��֤����ϵͳ���͹�˾�ʽ��˻���Կ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryCFMMCTradingAccountKeyField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
	};

	/// <summary>
	/// �û���̬���Ʋ���
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcBrokerUserOTPParamField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ��̬�����ṩ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 2)]
		String^ OTPVendorsID;
		/// <summary>
		/// ��̬�������к�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ SerialNumber;
		/// <summary>
		/// ������Կ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ AuthKey;
		/// <summary>
		/// Ư��ֵ
		/// </summary>
		int LastDrift;
		/// <summary>
		/// �ɹ�ֵ
		/// </summary>
		int LastSuccess;
		/// <summary>
		/// ��̬��������
		/// </summary>
		EnumOTPTypeType OTPType;
	};

	/// <summary>
	/// �ֹ�ͬ���û���̬����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcManualSyncBrokerUserOTPField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ��̬��������
		/// </summary>
		EnumOTPTypeType OTPType;
		/// <summary>
		/// ��һ����̬����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ FirstOTP;
		/// <summary>
		/// �ڶ�����̬����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ SecondOTP;
	};

	/// <summary>
	/// Ͷ������������ģ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	ref struct ThostFtdcCommRateModelField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ��������ģ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	CommModelID;
		/// <summary>
		/// ģ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
		String^	CommModelName;
	};

	/// <summary>
	/// �����ѯͶ������������ģ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	ref struct ThostFtdcQryCommRateModelField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ��������ģ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	CommModelID;
	};

	/// <summary>
	/// �ֵ��۵���Ϣ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcEWarrantOffsetField
	{
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		///��������
		/// </summary>
		EnumDirectionType	Direction;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType	HedgeFlag;
		/// <summary>
		/// ����
		/// </summary>
		int	Volume;
	};

	/// <summary>
	/// ��ѯ�ֵ��۵���Ϣ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryEWarrantOffsetField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};


	/// <summary>
	/// ת�ʿ�������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcReqOpenAccountField
	{
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBranchID;
		/// <summary>
		/// ���̴���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���̷�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ BrokerBranchID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankSerial;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����ƽ̨��Ϣ��ˮ��
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// ����Ƭ��־
		/// </summary>
		EnumLastFragmentType LastFragment;
		/// <summary>
		/// �Ự��
		/// </summary>
		int SessionID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ CustomerName;
		/// <summary>
		/// ֤������
		/// </summary>
		EnumIdCardTypeType IdCardType;
		/// <summary>
		/// ֤������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ IdentifiedCardNo;
		/// <summary>
		/// �Ա�
		/// </summary>
		EnumGenderType Gender;
		/// <summary>
		/// ���Ҵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ CountryCode;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		EnumCustTypeType CustType;
		/// <summary>
		/// ��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
		String^ Address;
		/// <summary>
		/// �ʱ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ ZipCode;
		/// <summary>
		/// �绰����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Telephone;
		/// <summary>
		/// �ֻ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ MobilePhone;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Fax;
		/// <summary>
		/// �����ʼ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ EMail;
		/// <summary>
		/// �ʽ��˻�״̬
		/// </summary>
		EnumMoneyAccountStatusType MoneyAccountStatus;
		/// <summary>
		/// �����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankAccount;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankPassWord;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// �ڻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// ��֤�ͻ�֤�������־
		/// </summary>
		EnumYesNoIndicatorType VerifyCertNoFlag;
		/// <summary>
		/// ���ִ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		/// <summary>
		/// �㳮��־
		/// </summary>
		EnumCashExchangeCodeType CashExchangeCode;
		/// <summary>
		/// ժҪ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ Digest;
		/// <summary>
		/// �����ʺ�����
		/// </summary>
		EnumBankAccTypeType BankAccType;
		/// <summary>
		/// ������־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^ DeviceID;
		/// <summary>
		/// �ڻ���λ�ʺ�����
		/// </summary>
		EnumBankAccTypeType BankSecuAccType;
		/// <summary>
		/// �ڻ���˾���б���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
		String^ BrokerIDByBank;
		/// <summary>
		/// �ڻ���λ�ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankSecuAcc;
		/// <summary>
		/// ���������־
		/// </summary>
		EnumPwdFlagType BankPwdFlag;
		/// <summary>
		/// �ڻ��ʽ�����˶Ա�־
		/// </summary>
		EnumPwdFlagType SecuPwdFlag;
		/// <summary>
		/// ���׹�Ա
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ OperNo;
		/// <summary>
		/// ����ID
		/// </summary>
		int TID;
	};

	/// <summary>
	/// ת����������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcReqCancelAccountField
	{
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBranchID;
		/// <summary>
		/// ���̴���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���̷�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ BrokerBranchID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankSerial;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����ƽ̨��Ϣ��ˮ��
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// ����Ƭ��־
		/// </summary>
		EnumLastFragmentType LastFragment;
		/// <summary>
		/// �Ự��
		/// </summary>
		int SessionID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ CustomerName;
		/// <summary>
		/// ֤������
		/// </summary>
		EnumIdCardTypeType IdCardType;
		/// <summary>
		/// ֤������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ IdentifiedCardNo;
		/// <summary>
		/// �Ա�
		/// </summary>
		EnumGenderType Gender;
		/// <summary>
		/// ���Ҵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ CountryCode;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		EnumCustTypeType CustType;
		/// <summary>
		/// ��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
		String^ Address;
		/// <summary>
		/// �ʱ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ ZipCode;
		/// <summary>
		/// �绰����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Telephone;
		/// <summary>
		/// �ֻ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ MobilePhone;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Fax;
		/// <summary>
		/// �����ʼ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ EMail;
		/// <summary>
		/// �ʽ��˻�״̬
		/// </summary>
		EnumMoneyAccountStatusType MoneyAccountStatus;
		/// <summary>
		/// �����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankAccount;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankPassWord;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// �ڻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// ��֤�ͻ�֤�������־
		/// </summary>
		EnumYesNoIndicatorType VerifyCertNoFlag;
		/// <summary>
		/// ���ִ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		/// <summary>
		/// �㳮��־
		/// </summary>
		EnumCashExchangeCodeType CashExchangeCode;
		/// <summary>
		/// ժҪ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ Digest;
		/// <summary>
		/// �����ʺ�����
		/// </summary>
		EnumBankAccTypeType BankAccType;
		/// <summary>
		/// ������־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^ DeviceID;
		/// <summary>
		/// �ڻ���λ�ʺ�����
		/// </summary>
		EnumBankAccTypeType BankSecuAccType;
		/// <summary>
		/// �ڻ���˾���б���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
		String^ BrokerIDByBank;
		/// <summary>
		/// �ڻ���λ�ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankSecuAcc;
		/// <summary>
		/// ���������־
		/// </summary>
		EnumPwdFlagType BankPwdFlag;
		/// <summary>
		/// �ڻ��ʽ�����˶Ա�־
		/// </summary>
		EnumPwdFlagType SecuPwdFlag;
		/// <summary>
		/// ���׹�Ա
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ OperNo;
		/// <summary>
		/// ����ID
		/// </summary>
		int TID;
	};

	/// <summary>
	/// ��������˻�����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcReqChangeAccountField
	{
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBranchID;
		/// <summary>
		/// ���̴���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���̷�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ BrokerBranchID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankSerial;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����ƽ̨��Ϣ��ˮ��
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// ����Ƭ��־
		/// </summary>
		EnumLastFragmentType LastFragment;
		/// <summary>
		/// �Ự��
		/// </summary>
		int SessionID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ CustomerName;
		/// <summary>
		/// ֤������
		/// </summary>
		EnumIdCardTypeType IdCardType;
		/// <summary>
		/// ֤������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ IdentifiedCardNo;
		/// <summary>
		/// �Ա�
		/// </summary>
		EnumGenderType Gender;
		/// <summary>
		/// ���Ҵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ CountryCode;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		EnumCustTypeType CustType;
		/// <summary>
		/// ��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
		String^ Address;
		/// <summary>
		/// �ʱ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ ZipCode;
		/// <summary>
		/// �绰����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Telephone;
		/// <summary>
		/// �ֻ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ MobilePhone;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Fax;
		/// <summary>
		/// �����ʼ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ EMail;
		/// <summary>
		/// �ʽ��˻�״̬
		/// </summary>
		EnumMoneyAccountStatusType MoneyAccountStatus;
		/// <summary>
		/// �����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankAccount;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankPassWord;
		/// <summary>
		/// �������ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ NewBankAccount;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ NewBankPassWord;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// �ڻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// �����ʺ�����
		/// </summary>
		EnumBankAccTypeType BankAccType;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// ��֤�ͻ�֤�������־
		/// </summary>
		EnumYesNoIndicatorType VerifyCertNoFlag;
		/// <summary>
		/// ���ִ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		/// <summary>
		/// �ڻ���˾���б���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
		String^ BrokerIDByBank;
		/// <summary>
		/// ���������־
		/// </summary>
		EnumPwdFlagType BankPwdFlag;
		/// <summary>
		/// �ڻ��ʽ�����˶Ա�־
		/// </summary>
		EnumPwdFlagType SecuPwdFlag;
		/// <summary>
		/// ����ID
		/// </summary>
		int TID;
		/// <summary>
		/// ժҪ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ Digest;
	};

	/// <summary>
	/// ת������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcReqTransferField
	{
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBranchID;
		/// <summary>
		/// ���̴���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���̷�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ BrokerBranchID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankSerial;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����ƽ̨��Ϣ��ˮ��
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// ����Ƭ��־
		/// </summary>
		EnumLastFragmentType LastFragment;
		/// <summary>
		/// �Ự��
		/// </summary>
		int SessionID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ CustomerName;
		/// <summary>
		/// ֤������
		/// </summary>
		EnumIdCardTypeType IdCardType;
		/// <summary>
		/// ֤������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ IdentifiedCardNo;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		EnumCustTypeType CustType;
		/// <summary>
		/// �����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankAccount;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankPassWord;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// �ڻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// �ڻ���˾��ˮ��
		/// </summary>
		int FutureSerial;
		/// <summary>
		/// �û���ʶ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ��֤�ͻ�֤�������־
		/// </summary>
		EnumYesNoIndicatorType VerifyCertNoFlag;
		/// <summary>
		/// ���ִ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		/// <summary>
		/// ת�ʽ��
		/// </summary>
		double TradeAmount;
		/// <summary>
		/// �ڻ���ȡ���
		/// </summary>
		double FutureFetchAmount;
		/// <summary>
		/// ����֧����־
		/// </summary>
		EnumFeePayFlagType FeePayFlag;
		/// <summary>
		/// Ӧ�տͻ�����
		/// </summary>
		double CustFee;
		/// <summary>
		/// Ӧ���ڻ���˾����
		/// </summary>
		double BrokerFee;
		/// <summary>
		/// ���ͷ������շ�����Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^ Message;
		/// <summary>
		/// ժҪ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ Digest;
		/// <summary>
		/// �����ʺ�����
		/// </summary>
		EnumBankAccTypeType BankAccType;
		/// <summary>
		/// ������־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^ DeviceID;
		/// <summary>
		/// �ڻ���λ�ʺ�����
		/// </summary>
		EnumBankAccTypeType BankSecuAccType;
		/// <summary>
		/// �ڻ���˾���б���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
		String^ BrokerIDByBank;
		/// <summary>
		/// �ڻ���λ�ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankSecuAcc;
		/// <summary>
		/// ���������־
		/// </summary>
		EnumPwdFlagType BankPwdFlag;
		/// <summary>
		/// �ڻ��ʽ�����˶Ա�־
		/// </summary>
		EnumPwdFlagType SecuPwdFlag;
		/// <summary>
		/// ���׹�Ա
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ OperNo;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ����ID
		/// </summary>
		int TID;
		/// <summary>
		/// ת�˽���״̬
		/// </summary>
		EnumTransferStatusType TransferStatus;
	};

	/// <summary>
	/// ���з��������ʽ�ת�ڻ���Ӧ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcRspTransferField
	{
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBranchID;
		/// <summary>
		/// ���̴���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���̷�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ BrokerBranchID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankSerial;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����ƽ̨��Ϣ��ˮ��
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// ����Ƭ��־
		/// </summary>
		EnumLastFragmentType LastFragment;
		/// <summary>
		/// �Ự��
		/// </summary>
		int SessionID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ CustomerName;
		/// <summary>
		/// ֤������
		/// </summary>
		EnumIdCardTypeType IdCardType;
		/// <summary>
		/// ֤������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ IdentifiedCardNo;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		EnumCustTypeType CustType;
		/// <summary>
		/// �����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankAccount;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankPassWord;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// �ڻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// �ڻ���˾��ˮ��
		/// </summary>
		int FutureSerial;
		/// <summary>
		/// �û���ʶ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ��֤�ͻ�֤�������־
		/// </summary>
		EnumYesNoIndicatorType VerifyCertNoFlag;
		/// <summary>
		/// ���ִ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		/// <summary>
		/// ת�ʽ��
		/// </summary>
		double TradeAmount;
		/// <summary>
		/// �ڻ���ȡ���
		/// </summary>
		double FutureFetchAmount;
		/// <summary>
		/// ����֧����־
		/// </summary>
		EnumFeePayFlagType FeePayFlag;
		/// <summary>
		/// Ӧ�տͻ�����
		/// </summary>
		double CustFee;
		/// <summary>
		/// Ӧ���ڻ���˾����
		/// </summary>
		double BrokerFee;
		/// <summary>
		/// ���ͷ������շ�����Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^ Message;
		/// <summary>
		/// ժҪ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ Digest;
		/// <summary>
		/// �����ʺ�����
		/// </summary>
		EnumBankAccTypeType BankAccType;
		/// <summary>
		/// ������־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^ DeviceID;
		/// <summary>
		/// �ڻ���λ�ʺ�����
		/// </summary>
		EnumBankAccTypeType BankSecuAccType;
		/// <summary>
		/// �ڻ���˾���б���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
		String^ BrokerIDByBank;
		/// <summary>
		/// �ڻ���λ�ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankSecuAcc;
		/// <summary>
		/// ���������־
		/// </summary>
		EnumPwdFlagType BankPwdFlag;
		/// <summary>
		/// �ڻ��ʽ�����˶Ա�־
		/// </summary>
		EnumPwdFlagType SecuPwdFlag;
		/// <summary>
		/// ���׹�Ա
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ OperNo;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ����ID
		/// </summary>
		int TID;
		/// <summary>
		/// ת�˽���״̬
		/// </summary>
		EnumTransferStatusType TransferStatus;
		/// <summary>
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	/// ��������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcReqRepealField
	{
		/// <summary>
		/// ����ʱ����
		/// </summary>
		int RepealTimeInterval;
		/// <summary>
		/// �Ѿ���������
		/// </summary>
		int RepealedTimes;
		/// <summary>
		/// ���г�����־
		/// </summary>
		EnumBankRepealFlagType BankRepealFlag;
		/// <summary>
		/// ���̳�����־
		/// </summary>
		EnumBrokerRepealFlagType BrokerRepealFlag;
		/// <summary>
		/// ������ƽ̨��ˮ��
		/// </summary>
		int PlateRepealSerial;
		/// <summary>
		/// ������������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankRepealSerial;
		/// <summary>
		/// �������ڻ���ˮ��
		/// </summary>
		int FutureRepealSerial;
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBranchID;
		/// <summary>
		/// ���̴���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���̷�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ BrokerBranchID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankSerial;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����ƽ̨��Ϣ��ˮ��
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// ����Ƭ��־
		/// </summary>
		EnumLastFragmentType LastFragment;
		/// <summary>
		/// �Ự��
		/// </summary>
		int SessionID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ CustomerName;
		/// <summary>
		/// ֤������
		/// </summary>
		EnumIdCardTypeType IdCardType;
		/// <summary>
		/// ֤������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ IdentifiedCardNo;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		EnumCustTypeType CustType;
		/// <summary>
		/// �����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankAccount;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankPassWord;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// �ڻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// �ڻ���˾��ˮ��
		/// </summary>
		int FutureSerial;
		/// <summary>
		/// �û���ʶ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ��֤�ͻ�֤�������־
		/// </summary>
		EnumYesNoIndicatorType VerifyCertNoFlag;
		/// <summary>
		/// ���ִ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		/// <summary>
		/// ת�ʽ��
		/// </summary>
		double TradeAmount;
		/// <summary>
		/// �ڻ���ȡ���
		/// </summary>
		double FutureFetchAmount;
		/// <summary>
		/// ����֧����־
		/// </summary>
		EnumFeePayFlagType FeePayFlag;
		/// <summary>
		/// Ӧ�տͻ�����
		/// </summary>
		double CustFee;
		/// <summary>
		/// Ӧ���ڻ���˾����
		/// </summary>
		double BrokerFee;
		/// <summary>
		/// ���ͷ������շ�����Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^ Message;
		/// <summary>
		/// ժҪ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ Digest;
		/// <summary>
		/// �����ʺ�����
		/// </summary>
		EnumBankAccTypeType BankAccType;
		/// <summary>
		/// ������־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^ DeviceID;
		/// <summary>
		/// �ڻ���λ�ʺ�����
		/// </summary>
		EnumBankAccTypeType BankSecuAccType;
		/// <summary>
		/// �ڻ���˾���б���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
		String^ BrokerIDByBank;
		/// <summary>
		/// �ڻ���λ�ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankSecuAcc;
		/// <summary>
		/// ���������־
		/// </summary>
		EnumPwdFlagType BankPwdFlag;
		/// <summary>
		/// �ڻ��ʽ�����˶Ա�־
		/// </summary>
		EnumPwdFlagType SecuPwdFlag;
		/// <summary>
		/// ���׹�Ա
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ OperNo;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ����ID
		/// </summary>
		int TID;
		/// <summary>
		/// ת�˽���״̬
		/// </summary>
		EnumTransferStatusType TransferStatus;
	};

	/// <summary>
	/// ������Ӧ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcRspRepealField
	{
		/// <summary>
		/// ����ʱ����
		/// </summary>
		int RepealTimeInterval;
		/// <summary>
		/// �Ѿ���������
		/// </summary>
		int RepealedTimes;
		/// <summary>
		/// ���г�����־
		/// </summary>
		EnumBankRepealFlagType BankRepealFlag;
		/// <summary>
		/// ���̳�����־
		/// </summary>
		EnumBrokerRepealFlagType BrokerRepealFlag;
		/// <summary>
		/// ������ƽ̨��ˮ��
		/// </summary>
		int PlateRepealSerial;
		/// <summary>
		/// ������������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankRepealSerial;
		/// <summary>
		/// �������ڻ���ˮ��
		/// </summary>
		int FutureRepealSerial;
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBranchID;
		/// <summary>
		/// ���̴���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���̷�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ BrokerBranchID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankSerial;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����ƽ̨��Ϣ��ˮ��
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// ����Ƭ��־
		/// </summary>
		EnumLastFragmentType LastFragment;
		/// <summary>
		/// �Ự��
		/// </summary>
		int SessionID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ CustomerName;
		/// <summary>
		/// ֤������
		/// </summary>
		EnumIdCardTypeType IdCardType;
		/// <summary>
		/// ֤������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ IdentifiedCardNo;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		EnumCustTypeType CustType;
		/// <summary>
		/// �����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankAccount;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankPassWord;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// �ڻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// �ڻ���˾��ˮ��
		/// </summary>
		int FutureSerial;
		/// <summary>
		/// �û���ʶ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ��֤�ͻ�֤�������־
		/// </summary>
		EnumYesNoIndicatorType VerifyCertNoFlag;
		/// <summary>
		/// ���ִ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		/// <summary>
		/// ת�ʽ��
		/// </summary>
		double TradeAmount;
		/// <summary>
		/// �ڻ���ȡ���
		/// </summary>
		double FutureFetchAmount;
		/// <summary>
		/// ����֧����־
		/// </summary>
		EnumFeePayFlagType FeePayFlag;
		/// <summary>
		/// Ӧ�տͻ�����
		/// </summary>
		double CustFee;
		/// <summary>
		/// Ӧ���ڻ���˾����
		/// </summary>
		double BrokerFee;
		/// <summary>
		/// ���ͷ������շ�����Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^ Message;
		/// <summary>
		/// ժҪ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ Digest;
		/// <summary>
		/// �����ʺ�����
		/// </summary>
		EnumBankAccTypeType BankAccType;
		/// <summary>
		/// ������־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^ DeviceID;
		/// <summary>
		/// �ڻ���λ�ʺ�����
		/// </summary>
		EnumBankAccTypeType BankSecuAccType;
		/// <summary>
		/// �ڻ���˾���б���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
		String^ BrokerIDByBank;
		/// <summary>
		/// �ڻ���λ�ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankSecuAcc;
		/// <summary>
		/// ���������־
		/// </summary>
		EnumPwdFlagType BankPwdFlag;
		/// <summary>
		/// �ڻ��ʽ�����˶Ա�־
		/// </summary>
		EnumPwdFlagType SecuPwdFlag;
		/// <summary>
		/// ���׹�Ա
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ OperNo;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ����ID
		/// </summary>
		int TID;
		/// <summary>
		/// ת�˽���״̬
		/// </summary>
		EnumTransferStatusType TransferStatus;
		/// <summary>
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	/// ��ѯ�˻���Ϣ����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcReqQueryAccountField
	{
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBranchID;
		/// <summary>
		/// ���̴���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���̷�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ BrokerBranchID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankSerial;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����ƽ̨��Ϣ��ˮ��
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// ����Ƭ��־
		/// </summary>
		EnumLastFragmentType LastFragment;
		/// <summary>
		/// �Ự��
		/// </summary>
		int SessionID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ CustomerName;
		/// <summary>
		/// ֤������
		/// </summary>
		EnumIdCardTypeType IdCardType;
		/// <summary>
		/// ֤������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ IdentifiedCardNo;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		EnumCustTypeType CustType;
		/// <summary>
		/// �����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankAccount;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankPassWord;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// �ڻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// �ڻ���˾��ˮ��
		/// </summary>
		int FutureSerial;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// �û���ʶ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ��֤�ͻ�֤�������־
		/// </summary>
		EnumYesNoIndicatorType VerifyCertNoFlag;
		/// <summary>
		/// ���ִ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		/// <summary>
		/// ժҪ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ Digest;
		/// <summary>
		/// �����ʺ�����
		/// </summary>
		EnumBankAccTypeType BankAccType;
		/// <summary>
		/// ������־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^ DeviceID;
		/// <summary>
		/// �ڻ���λ�ʺ�����
		/// </summary>
		EnumBankAccTypeType BankSecuAccType;
		/// <summary>
		/// �ڻ���˾���б���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
		String^ BrokerIDByBank;
		/// <summary>
		/// �ڻ���λ�ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankSecuAcc;
		/// <summary>
		/// ���������־
		/// </summary>
		EnumPwdFlagType BankPwdFlag;
		/// <summary>
		/// �ڻ��ʽ�����˶Ա�־
		/// </summary>
		EnumPwdFlagType SecuPwdFlag;
		/// <summary>
		/// ���׹�Ա
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ OperNo;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ����ID
		/// </summary>
		int TID;
	};

	/// <summary>
	/// ��ѯ�˻���Ϣ��Ӧ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcRspQueryAccountField
	{
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBranchID;
		/// <summary>
		/// ���̴���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���̷�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ BrokerBranchID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankSerial;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����ƽ̨��Ϣ��ˮ��
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// ����Ƭ��־
		/// </summary>
		EnumLastFragmentType LastFragment;
		/// <summary>
		/// �Ự��
		/// </summary>
		int SessionID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ CustomerName;
		/// <summary>
		/// ֤������
		/// </summary>
		EnumIdCardTypeType IdCardType;
		/// <summary>
		/// ֤������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ IdentifiedCardNo;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		EnumCustTypeType CustType;
		/// <summary>
		/// �����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankAccount;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankPassWord;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// �ڻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// �ڻ���˾��ˮ��
		/// </summary>
		int FutureSerial;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// �û���ʶ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ��֤�ͻ�֤�������־
		/// </summary>
		EnumYesNoIndicatorType VerifyCertNoFlag;
		/// <summary>
		/// ���ִ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		/// <summary>
		/// ժҪ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ Digest;
		/// <summary>
		/// �����ʺ�����
		/// </summary>
		EnumBankAccTypeType BankAccType;
		/// <summary>
		/// ������־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^ DeviceID;
		/// <summary>
		/// �ڻ���λ�ʺ�����
		/// </summary>
		EnumBankAccTypeType BankSecuAccType;
		/// <summary>
		/// �ڻ���˾���б���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
		String^ BrokerIDByBank;
		/// <summary>
		/// �ڻ���λ�ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankSecuAcc;
		/// <summary>
		/// ���������־
		/// </summary>
		EnumPwdFlagType BankPwdFlag;
		/// <summary>
		/// �ڻ��ʽ�����˶Ա�־
		/// </summary>
		EnumPwdFlagType SecuPwdFlag;
		/// <summary>
		/// ���׹�Ա
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ OperNo;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ����ID
		/// </summary>
		int TID;
		/// <summary>
		/// ���п��ý��
		/// </summary>
		double BankUseAmount;
		/// <summary>
		/// ���п�ȡ���
		/// </summary>
		double BankFetchAmount;
	};

	/// <summary>
	/// ����ǩ��ǩ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcFutureSignIOField
	{
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBranchID;
		/// <summary>
		/// ���̴���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���̷�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ BrokerBranchID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankSerial;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����ƽ̨��Ϣ��ˮ��
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// ����Ƭ��־
		/// </summary>
		EnumLastFragmentType LastFragment;
		/// <summary>
		/// �Ự��
		/// </summary>
		int SessionID;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// �û���ʶ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ժҪ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ Digest;
		/// <summary>
		/// ���ִ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		/// <summary>
		/// ������־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^ DeviceID;
		/// <summary>
		/// �ڻ���˾���б���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
		String^ BrokerIDByBank;
		/// <summary>
		/// ���׹�Ա
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ OperNo;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ����ID
		/// </summary>
		int TID;
	};

	/// <summary>
	/// ����ǩ����Ӧ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcRspFutureSignInField
	{
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBranchID;
		/// <summary>
		/// ���̴���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���̷�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ BrokerBranchID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankSerial;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����ƽ̨��Ϣ��ˮ��
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// ����Ƭ��־
		/// </summary>
		EnumLastFragmentType LastFragment;
		/// <summary>
		/// �Ự��
		/// </summary>
		int SessionID;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// �û���ʶ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ժҪ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ Digest;
		/// <summary>
		/// ���ִ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		/// <summary>
		/// ������־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^ DeviceID;
		/// <summary>
		/// �ڻ���˾���б���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
		String^ BrokerIDByBank;
		/// <summary>
		/// ���׹�Ա
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ OperNo;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ����ID
		/// </summary>
		int TID;
		/// <summary>
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
		/// <summary>
		/// PIN��Կ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^ PinKey;
		/// <summary>
		/// MAC��Կ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^ MacKey;
	};

	/// <summary>
	/// ����ǩ������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcReqFutureSignOutField
	{
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBranchID;
		/// <summary>
		/// ���̴���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���̷�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ BrokerBranchID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankSerial;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����ƽ̨��Ϣ��ˮ��
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// ����Ƭ��־
		/// </summary>
		EnumLastFragmentType LastFragment;
		/// <summary>
		/// �Ự��
		/// </summary>
		int SessionID;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// �û���ʶ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ժҪ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ Digest;
		/// <summary>
		/// ���ִ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		/// <summary>
		/// ������־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^ DeviceID;
		/// <summary>
		/// �ڻ���˾���б���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
		String^ BrokerIDByBank;
		/// <summary>
		/// ���׹�Ա
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ OperNo;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ����ID
		/// </summary>
		int TID;
	};

	/// <summary>
	/// ����ǩ����Ӧ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcRspFutureSignOutField
	{
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBranchID;
		/// <summary>
		/// ���̴���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���̷�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ BrokerBranchID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankSerial;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����ƽ̨��Ϣ��ˮ��
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// ����Ƭ��־
		/// </summary>
		EnumLastFragmentType LastFragment;
		/// <summary>
		/// �Ự��
		/// </summary>
		int SessionID;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// �û���ʶ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ժҪ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ Digest;
		/// <summary>
		/// ���ִ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		/// <summary>
		/// ������־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^ DeviceID;
		/// <summary>
		/// �ڻ���˾���б���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
		String^ BrokerIDByBank;
		/// <summary>
		/// ���׹�Ա
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ OperNo;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ����ID
		/// </summary>
		int TID;
		/// <summary>
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	/// ��ѯָ����ˮ�ŵĽ��׽������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcReqQueryTradeResultBySerialField
	{
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBranchID;
		/// <summary>
		/// ���̴���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���̷�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ BrokerBranchID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankSerial;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����ƽ̨��Ϣ��ˮ��
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// ����Ƭ��־
		/// </summary>
		EnumLastFragmentType LastFragment;
		/// <summary>
		/// �Ự��
		/// </summary>
		int SessionID;
		/// <summary>
		/// ��ˮ��
		/// </summary>
		int Reference;
		/// <summary>
		/// ����ˮ�ŷ����ߵĻ�������
		/// </summary>
		EnumInstitutionTypeType RefrenceIssureType;
		/// <summary>
		/// ����ˮ�ŷ����߻�������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ RefrenceIssure;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ CustomerName;
		/// <summary>
		/// ֤������
		/// </summary>
		EnumIdCardTypeType IdCardType;
		/// <summary>
		/// ֤������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ IdentifiedCardNo;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		EnumCustTypeType CustType;
		/// <summary>
		/// �����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankAccount;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankPassWord;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// �ڻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// ���ִ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		/// <summary>
		/// ת�ʽ��
		/// </summary>
		double TradeAmount;
		/// <summary>
		/// ժҪ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ Digest;
	};

	/// <summary>
	/// ��ѯָ����ˮ�ŵĽ��׽����Ӧ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcRspQueryTradeResultBySerialField
	{
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBranchID;
		/// <summary>
		/// ���̴���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���̷�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ BrokerBranchID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankSerial;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����ƽ̨��Ϣ��ˮ��
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// ����Ƭ��־
		/// </summary>
		EnumLastFragmentType LastFragment;
		/// <summary>
		/// �Ự��
		/// </summary>
		int SessionID;
		/// <summary>
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
		/// <summary>
		/// ��ˮ��
		/// </summary>
		int Reference;
		/// <summary>
		/// ����ˮ�ŷ����ߵĻ�������
		/// </summary>
		EnumInstitutionTypeType RefrenceIssureType;
		/// <summary>
		/// ����ˮ�ŷ����߻�������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ RefrenceIssure;
		/// <summary>
		/// ԭʼ���ش���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ OriginReturnCode;
		/// <summary>
		/// ԭʼ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^ OriginDescrInfoForReturnCode;
		/// <summary>
		/// �����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankAccount;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankPassWord;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// �ڻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// ���ִ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		/// <summary>
		/// ת�ʽ��
		/// </summary>
		double TradeAmount;
		/// <summary>
		/// ժҪ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ Digest;
	};

	/// <summary>
	/// �����ļ���������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcReqDayEndFileReadyField
	{
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBranchID;
		/// <summary>
		/// ���̴���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���̷�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ BrokerBranchID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankSerial;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����ƽ̨��Ϣ��ˮ��
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// ����Ƭ��־
		/// </summary>
		EnumLastFragmentType LastFragment;
		/// <summary>
		/// �Ự��
		/// </summary>
		int SessionID;
		/// <summary>
		/// �ļ�ҵ����
		/// </summary>
		EnumFileBusinessCodeType FileBusinessCode;
		/// <summary>
		/// ժҪ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ Digest;
	};

	/// <summary>
	/// ���ؽ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcReturnResultField
	{
		/// <summary>
		/// ���ش���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ ReturnCode;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^ DescrInfoForReturnCode;
	};

	/// <summary>
	/// ��֤�ڻ��ʽ�����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcVerifyFuturePasswordField
	{
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBranchID;
		/// <summary>
		/// ���̴���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���̷�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ BrokerBranchID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankSerial;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����ƽ̨��Ϣ��ˮ��
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// ����Ƭ��־
		/// </summary>
		EnumLastFragmentType LastFragment;
		/// <summary>
		/// �Ự��
		/// </summary>
		int SessionID;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// �ڻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// �����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankAccount;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankPassWord;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// ����ID
		/// </summary>
		int TID;
	};

	/// <summary>
	/// ��֤�ͻ���Ϣ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcVerifyCustInfoField
	{
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ CustomerName;
		/// <summary>
		/// ֤������
		/// </summary>
		EnumIdCardTypeType IdCardType;
		/// <summary>
		/// ֤������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ IdentifiedCardNo;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		EnumCustTypeType CustType;
	};

	/// <summary>
	/// ��֤�ڻ��ʽ�����Ϳͻ���Ϣ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcVerifyFuturePasswordAndCustInfoField
	{
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ CustomerName;
		/// <summary>
		/// ֤������
		/// </summary>
		EnumIdCardTypeType IdCardType;
		/// <summary>
		/// ֤������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ IdentifiedCardNo;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		EnumCustTypeType CustType;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// �ڻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
	};

	/// <summary>
	/// ��֤�ڻ��ʽ�����Ϳͻ���Ϣ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcDepositResultInformField
	{
		/// <summary>
		/// �������ˮ�ţ�����ˮ��Ϊ���ڱ��̷��ص���ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ DepositSeqNo;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// �����
		/// </summary>
		double Deposit;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ���ش���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ ReturnCode;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^ DescrInfoForReturnCode;
	};

	/// <summary>
	/// ���׺��������ڱ��̷�����Կͬ������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcReqSyncKeyField
	{
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBranchID;
		/// <summary>
		/// ���̴���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���̷�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ BrokerBranchID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankSerial;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����ƽ̨��Ϣ��ˮ��
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// ����Ƭ��־
		/// </summary>
		EnumLastFragmentType LastFragment;
		/// <summary>
		/// �Ự��
		/// </summary>
		int SessionID;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// �û���ʶ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ���׺��ĸ����ڱ��̵���Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^ Message;
		/// <summary>
		/// ������־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^ DeviceID;
		/// <summary>
		/// �ڻ���˾���б���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
		String^ BrokerIDByBank;
		/// <summary>
		/// ���׹�Ա
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ OperNo;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ����ID
		/// </summary>
		int TID;
	};

	/// <summary>
	/// ���׺��������ڱ��̷�����Կͬ����Ӧ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcRspSyncKeyField
	{
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBranchID;
		/// <summary>
		/// ���̴���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���̷�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ BrokerBranchID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankSerial;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����ƽ̨��Ϣ��ˮ��
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// ����Ƭ��־
		/// </summary>
		EnumLastFragmentType LastFragment;
		/// <summary>
		/// �Ự��
		/// </summary>
		int SessionID;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// �û���ʶ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ���׺��ĸ����ڱ��̵���Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^ Message;
		/// <summary>
		/// ������־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^ DeviceID;
		/// <summary>
		/// �ڻ���˾���б���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
		String^ BrokerIDByBank;
		/// <summary>
		/// ���׹�Ա
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ OperNo;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ����ID
		/// </summary>
		int TID;
		/// <summary>
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	/// ��ѯ�˻���Ϣ֪ͨ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcNotifyQueryAccountField
	{
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBranchID;
		/// <summary>
		/// ���̴���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���̷�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ BrokerBranchID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankSerial;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����ƽ̨��Ϣ��ˮ��
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// ����Ƭ��־
		/// </summary>
		EnumLastFragmentType LastFragment;
		/// <summary>
		/// �Ự��
		/// </summary>
		int SessionID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ CustomerName;
		/// <summary>
		/// ֤������
		/// </summary>
		EnumIdCardTypeType IdCardType;
		/// <summary>
		/// ֤������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ IdentifiedCardNo;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		EnumCustTypeType CustType;
		/// <summary>
		/// �����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankAccount;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankPassWord;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// �ڻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// �ڻ���˾��ˮ��
		/// </summary>
		int FutureSerial;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// �û���ʶ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ��֤�ͻ�֤�������־
		/// </summary>
		EnumYesNoIndicatorType VerifyCertNoFlag;
		/// <summary>
		/// ���ִ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		/// <summary>
		/// ժҪ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ Digest;
		/// <summary>
		/// �����ʺ�����
		/// </summary>
		EnumBankAccTypeType BankAccType;
		/// <summary>
		/// ������־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^ DeviceID;
		/// <summary>
		/// �ڻ���λ�ʺ�����
		/// </summary>
		EnumBankAccTypeType BankSecuAccType;
		/// <summary>
		/// �ڻ���˾���б���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
		String^ BrokerIDByBank;
		/// <summary>
		/// �ڻ���λ�ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankSecuAcc;
		/// <summary>
		/// ���������־
		/// </summary>
		EnumPwdFlagType BankPwdFlag;
		/// <summary>
		/// �ڻ��ʽ�����˶Ա�־
		/// </summary>
		EnumPwdFlagType SecuPwdFlag;
		/// <summary>
		/// ���׹�Ա
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ OperNo;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ����ID
		/// </summary>
		int TID;
		/// <summary>
		/// ���п��ý��
		/// </summary>
		double BankUseAmount;
		/// <summary>
		/// ���п�ȡ���
		/// </summary>
		double BankFetchAmount;
		/// <summary>
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	/// ����ת�˽�����ˮ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferSerialField
	{
		/// <summary>
		/// ƽ̨��ˮ��
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// ���׷�������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ���״���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// ���б���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBranchID;
		/// <summary>
		/// �����ʺ�����
		/// </summary>
		EnumBankAccTypeType BankAccType;
		/// <summary>
		/// �����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankAccount;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankSerial;
		/// <summary>
		/// �ڻ���˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���̷�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ BrokerBranchID;
		/// <summary>
		/// �ڻ���˾�ʺ�����
		/// </summary>
		EnumFutureAccTypeType FutureAccType;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// �ڻ���˾��ˮ��
		/// </summary>
		int FutureSerial;
		/// <summary>
		/// ֤������
		/// </summary>
		EnumIdCardTypeType IdCardType;
		/// <summary>
		/// ֤������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ IdentifiedCardNo;
		/// <summary>
		/// ���ִ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		/// <summary>
		/// ���׽��
		/// </summary>
		double TradeAmount;
		/// <summary>
		/// Ӧ�տͻ�����
		/// </summary>
		double CustFee;
		/// <summary>
		/// Ӧ���ڻ���˾����
		/// </summary>
		double BrokerFee;
		/// <summary>
		/// ��Ч��־
		/// </summary>
		EnumAvailabilityFlagType AvailabilityFlag;
		/// <summary>
		/// ����Ա
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ OperatorCode;
		/// <summary>
		/// �������ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankNewAccount;
		/// <summary>
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	/// �����ѯת����ˮ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryTransferSerialField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// ���б���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
	};

	/// <summary>
	/// ����ǩ��֪ͨ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcNotifyFutureSignInField
	{
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBranchID;
		/// <summary>
		/// ���̴���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���̷�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ BrokerBranchID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankSerial;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����ƽ̨��Ϣ��ˮ��
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// ����Ƭ��־
		/// </summary>
		EnumLastFragmentType LastFragment;
		/// <summary>
		/// �Ự��
		/// </summary>
		int SessionID;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// �û���ʶ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ժҪ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ Digest;
		/// <summary>
		/// ���ִ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		/// <summary>
		/// ������־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^ DeviceID;
		/// <summary>
		/// �ڻ���˾���б���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
		String^ BrokerIDByBank;
		/// <summary>
		/// ���׹�Ա
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ OperNo;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ����ID
		/// </summary>
		int TID;
		/// <summary>
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
		/// <summary>
		/// PIN��Կ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^ PinKey;
		/// <summary>
		/// MAC��Կ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^ MacKey;
	};

	/// <summary>
	/// ����ǩ��֪ͨ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcNotifyFutureSignOutField
	{
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBranchID;
		/// <summary>
		/// ���̴���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���̷�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ BrokerBranchID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankSerial;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����ƽ̨��Ϣ��ˮ��
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// ����Ƭ��־
		/// </summary>
		EnumLastFragmentType LastFragment;
		/// <summary>
		/// �Ự��
		/// </summary>
		int SessionID;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// �û���ʶ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ժҪ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ Digest;
		/// <summary>
		/// ���ִ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		/// <summary>
		/// ������־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^ DeviceID;
		/// <summary>
		/// �ڻ���˾���б���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
		String^ BrokerIDByBank;
		/// <summary>
		/// ���׹�Ա
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ OperNo;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ����ID
		/// </summary>
		int TID;
		/// <summary>
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	/// ���׺��������ڱ��̷�����Կͬ����������֪ͨ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcNotifySyncKeyField
	{
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBranchID;
		/// <summary>
		/// ���̴���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���̷�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ BrokerBranchID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankSerial;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����ƽ̨��Ϣ��ˮ��
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// ����Ƭ��־
		/// </summary>
		EnumLastFragmentType LastFragment;
		/// <summary>
		/// �Ự��
		/// </summary>
		int SessionID;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// �û���ʶ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ���׺��ĸ����ڱ��̵���Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^ Message;
		/// <summary>
		/// ������־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^ DeviceID;
		/// <summary>
		/// �ڻ���˾���б���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
		String^ BrokerIDByBank;
		/// <summary>
		/// ���׹�Ա
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ OperNo;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ����ID
		/// </summary>
		int TID;
		/// <summary>
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	///<summary>
	///�����ѯ����ǩԼ��ϵ
	///</summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryAccountregisterField
	{
		///���͹�˾����
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		///���б���
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
	};

	///<summary>
	///�ͻ���������Ϣ��
	///</summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcAccountregisterField
	{
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		///���б���
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		/// <summary>
		/// ���з�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBranchID;
		/// <summary>
		/// �����˺�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankAccount;
		/// <summary>
		/// �ڻ���˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���̷�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ BrokerBranchID;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// ֤������
		/// </summary>
		EnumIdCardTypeType IdCardType;
		///֤������
		/// <summary>
		/// ֤������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ IdentifiedCardNo;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ CustomerName;
		/// <summary>
		/// ���ִ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		/// <summary>
		/// ���������
		/// </summary>
		EnumOpenOrDestroyType OpenOrDestroy;
		/// <summary>
		/// ǩԼ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ RegDate;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ OutDate;
		/// <summary>
		/// ����ID
		/// </summary>
		int TID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		EnumCustTypeType CustType;
		/// <summary>
		/// �����ʺ�����
		/// </summary>
		EnumBankAccTypeType BankAccType;
	};

	///<summary>
	///���ڿ�����Ϣ
	///</summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcOpenAccountField
	{
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		///���д���
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		/// <summary>
		/// ���з�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBranchID;
		/// <summary>
		/// �ڻ���˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���̷�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ BrokerBranchID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankSerial;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����ƽ̨��Ϣ��ˮ��
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// ����Ƭ��־
		/// </summary>
		EnumLastFragmentType LastFragment;
		/// <summary>
		/// �Ự��
		/// </summary>
		int SessionID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ CustomerName;
		/// <summary>
		/// ֤������
		/// </summary>
		EnumIdCardTypeType IdCardType;
		/// <summary>
		/// ֤������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ IdentifiedCardNo;
		/// <summary>
		/// �Ա�
		/// </summary>
		EnumGenderType Gender;
		/// <summary>
		/// ���Ҵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ CountryCode;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		EnumCustTypeType CustType;
		/// <summary>
		/// ��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
		String^ Address;
		/// <summary>
		/// �ʱ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ ZipCode;
		/// <summary>
		/// �绰����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Telephone;
		/// <summary>
		/// �ֻ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ MobilePhone;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Fax;
		/// <summary>
		/// �����ʼ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ EMail;
		/// <summary>
		/// �ʽ��˻�״̬
		/// </summary>
		EnumMoneyAccountStatusType MoneyAccountStatus;
		/// <summary>
		/// �����˺�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankAccount;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankPassWord;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// �ڻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		///��֤�ͻ�֤�������־
		/// <summary>
		/// ��֤�ͻ�֤�������־
		/// </summary>
		EnumYesNoIndicatorType VerifyCertNoFlag;
		/// <summary>
		/// ���ִ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		/// <summary>
		/// �㳮��־
		/// </summary>
		EnumCashExchangeCodeType CashExchangeCode;
		/// <summary>
		/// ժҪ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ Digest;
		/// <summary>
		/// �����ʺ�����
		/// </summary>
		EnumBankAccTypeType BankAccType;
		/// <summary>
		/// ������־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^ DeviceID;
		/// <summary>
		/// �ڻ���λ�ʺ�����
		/// </summary>
		EnumBankAccTypeType BankSecuAccType;
		/// <summary>
		/// �ڻ���˾���б���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
		String^ BrokerIDByBank;
		/// <summary>
		/// �ڻ���λ�ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankSecuAcc;
		/// <summary>
		/// ���������־
		/// </summary>
		EnumPwdFlagType BankPwdFlag;
		/// <summary>
		/// �ڻ��ʽ�����˶Ա�־
		/// </summary>
		EnumPwdFlagType SecuPwdFlag;
		/// <summary>
		/// ���׹�Ա
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ OperNo;
		/// <summary>
		/// ����ID
		/// </summary>
		int TID;
		/// <summary>
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};
	///<summary>
	///����������Ϣ
	///</summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcCancelAccountField
	{
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		///���д���
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		/// <summary>
		/// ���з�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBranchID;
		/// <summary>
		/// �ڻ���˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���̷�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ BrokerBranchID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankSerial;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����ƽ̨��Ϣ��ˮ��
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// ����Ƭ��־
		/// </summary>
		EnumLastFragmentType LastFragment;
		/// <summary>
		/// �Ự��
		/// </summary>
		int SessionID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ CustomerName;
		/// <summary>
		/// ֤������
		/// </summary>
		EnumIdCardTypeType IdCardType;
		/// <summary>
		/// ֤������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ IdentifiedCardNo;
		/// <summary>
		/// �Ա�
		/// </summary>
		EnumGenderType Gender;
		/// <summary>
		/// ���Ҵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ CountryCode;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		EnumCustTypeType CustType;
		/// <summary>
		/// ��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
		String^ Address;
		/// <summary>
		/// �ʱ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ ZipCode;
		/// <summary>
		/// �绰����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Telephone;
		/// <summary>
		/// �ֻ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ MobilePhone;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Fax;
		/// <summary>
		/// �����ʼ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ EMail;
		/// <summary>
		/// �ʽ��˻�״̬
		/// </summary>
		EnumMoneyAccountStatusType MoneyAccountStatus;
		/// <summary>
		/// �����˺�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankAccount;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankPassWord;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// �ڻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		///��֤�ͻ�֤�������־
		/// <summary>
		/// ��֤�ͻ�֤�������־
		/// </summary>
		EnumYesNoIndicatorType VerifyCertNoFlag;
		/// <summary>
		/// ���ִ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		/// <summary>
		/// �㳮��־
		/// </summary>
		EnumCashExchangeCodeType CashExchangeCode;
		/// <summary>
		/// ժҪ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ Digest;
		/// <summary>
		/// �����ʺ�����
		/// </summary>
		EnumBankAccTypeType BankAccType;
		/// <summary>
		/// ������־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^ DeviceID;
		/// <summary>
		/// �ڻ���λ�ʺ�����
		/// </summary>
		EnumBankAccTypeType BankSecuAccType;
		/// <summary>
		/// �ڻ���˾���б���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
		String^ BrokerIDByBank;
		/// <summary>
		/// �ڻ���λ�ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankSecuAcc;
		/// <summary>
		/// ���������־
		/// </summary>
		EnumPwdFlagType BankPwdFlag;
		/// <summary>
		/// �ڻ��ʽ�����˶Ա�־
		/// </summary>
		EnumPwdFlagType SecuPwdFlag;
		/// <summary>
		/// ���׹�Ա
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ OperNo;
		/// <summary>
		/// ����ID
		/// </summary>
		int TID;
		/// <summary>
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	///<summary>
	///���ڱ�������˺���Ϣ
	///</summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcChangeAccountField
	{
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		///���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		/// <summary>
		/// ���з�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBranchID;
		/// <summary>
		/// �ڻ���˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���̷�֧��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ BrokerBranchID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BankSerial;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����ƽ̨��Ϣ��ˮ��
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// ����Ƭ��־
		/// </summary>
		EnumLastFragmentType LastFragment;
		/// <summary>
		/// �Ự��
		/// </summary>
		int SessionID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ CustomerName;
		/// <summary>
		/// ֤������
		/// </summary>
		EnumIdCardTypeType IdCardType;
		/// <summary>
		/// ֤������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ IdentifiedCardNo;
		/// <summary>
		/// �Ա�
		/// </summary>
		EnumGenderType Gender;
		/// <summary>
		/// ���Ҵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ CountryCode;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		EnumCustTypeType CustType;
		/// <summary>
		/// ��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
		String^ Address;
		/// <summary>
		/// �ʱ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ ZipCode;
		/// <summary>
		/// �绰����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Telephone;
		/// <summary>
		/// �ֻ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ MobilePhone;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Fax;
		/// <summary>
		/// �����ʼ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ EMail;
		/// <summary>
		/// �ʽ��˻�״̬
		/// </summary>
		EnumMoneyAccountStatusType MoneyAccountStatus;
		/// <summary>
		/// �����˺�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankAccount;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankPassWord;
		/// <summary>
		/// �������ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ NewBankAccount;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ NewBankPassWord;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// �ڻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// �����ʺ�����
		/// </summary>
		EnumBankAccTypeType BankAccType;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// ��֤�ͻ�֤�������־
		/// </summary>
		EnumYesNoIndicatorType VerifyCertNoFlag;
		/// <summary>
		/// ���ִ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		/// <summary>
		/// �ڻ���˾���б���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
		String^ BrokerIDByBank;
		/// <summary>
		/// ���������־
		/// </summary>
		EnumPwdFlagType BankPwdFlag;
		/// <summary>
		/// �ڻ��ʽ�����˶Ա�־
		/// </summary>
		EnumPwdFlagType SecuPwdFlag;
		/// <summary>
		/// ����ID
		/// </summary>
		int TID;
		/// <summary>
		/// ժҪ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ Digest;
		/// <summary>
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	///<summary>
	///�ֱ����Ľ���Ȩ��
	///</summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcUserRightsAssignField
	{
		/// <summary>
		/// Ӧ�õ�Ԫ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// �������Ĵ���
		/// </summary>
		int	DRIdentityID;
	};

	///<summary>
	///���ù�˾�Ƿ����ڱ���ʾ�Ľ���Ȩ��
	///</summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcBrokerUserRightAssignField
	{
		/// <summary>
		/// Ӧ�õ�Ԫ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �������Ĵ���
		/// </summary>
		int	DRIdentityID;
		/// <summary>
		/// �ܷ���
		/// </summary>
		int	Tradeable;
	};

	///<summary>
	///�ֱ�����ת������
	///</summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcDRTransferField
	{
		/// <summary>
		/// ԭ�������Ĵ���
		/// </summary>
		int	OrigDRIdentityID;
		/// <summary>
		/// Ŀ�꽻�����Ĵ���
		/// </summary>
		int	DestDRIdentityID;
		/// <summary>
		/// ԭӦ�õ�Ԫ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	OrigBrokerID;
		/// <summary>
		/// Ŀ�����õ�Ԫ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	DestBrokerID;
    };

	///<summary>
	///����Key
	///</summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostOrderKeyField
	{
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	OrderRef;
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int	FrontID;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ExchangeID;
		/// <summary>
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	OrderSysID;
	};

	///<summary>
	///����������������
	///</summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcBulkCancelOrderField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	InvestorID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		/// <summary>
		/// ��������
		/// </summary>
		EnumOrderTypeType OrderType;
		/// <summary>
		/// ��������
		/// </summary>
		int nCount;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::Struct)]
		ThostOrderKeyField^ OrderKey_0;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::Struct)]
		ThostOrderKeyField^ OrderKey_1;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::Struct)]
		ThostOrderKeyField^ OrderKey_2;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::Struct)]
		ThostOrderKeyField^ OrderKey_3;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::Struct)]
		ThostOrderKeyField^ OrderKey_4;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::Struct)]
		ThostOrderKeyField^ OrderKey_5;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::Struct)]
		ThostOrderKeyField^ OrderKey_6;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::Struct)]
		ThostOrderKeyField^ OrderKey_7;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::Struct)]
		ThostOrderKeyField^ OrderKey_8;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::Struct)]
		ThostOrderKeyField^ OrderKey_9;		
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::Struct)]
		ThostOrderKeyField^ OrderKey_10;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::Struct)]
		ThostOrderKeyField^ OrderKey_11;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::Struct)]
		ThostOrderKeyField^ OrderKey_12;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::Struct)]
		ThostOrderKeyField^ OrderKey_13;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::Struct)]
		ThostOrderKeyField^ OrderKey_14;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::Struct)]
		ThostOrderKeyField^ OrderKey_15;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::Struct)]
		ThostOrderKeyField^ OrderKey_16;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::Struct)]
		ThostOrderKeyField^ OrderKey_17;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::Struct)]
		ThostOrderKeyField^ OrderKey_18;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::Struct)]
		ThostOrderKeyField^ OrderKey_19;
	};
};
