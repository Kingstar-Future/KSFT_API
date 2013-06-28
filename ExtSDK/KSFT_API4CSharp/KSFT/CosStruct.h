/////////////////////////////////////////////////////////////////////////
/// ���˴� KSFT C++ => .Net Framework Adapter
/// Summary: �������ṹ�嶨��
/// Author:	ksftapi@gmail.com
/// Date: 20130314
/// Update List:
///   20130318 �޸�
///   20130321 �޸�
///   20130326 ���ע��
/////////////////////////////////////////////////////////////////////////
namespace KSFT
{
	/// <summary>
	/// TTKSConditionalTypeType///������������
	/// </summary>
	public enum struct EnumConditionalTypeType:Byte
	{
		/// <summary>
		/// ���ڵ���������
		/// </summary>
		GreaterEqualTermPrice = (Byte)'0',

		/// <summary>
		/// С�ڵ���������
		/// </summary>
		LesserThanTermPrice = (Byte)'1'
	};

	/// <summary>
	/// TTKSConditionalOrderType��һ����������������
	/// </summary>
	public enum struct EnumConditionalOrderType:Byte
	{
		///<summary>
		/// ���鴥��
		///</summary>
		QUOTATION = (Byte)'0',

		///<summary>
		/// ���̴���
		///</summary>
		OPEN = (Byte)'1',

		///<summary>
		/// ʱ�䴥��
		///</summary>
		TIME = (Byte)'2',

		///<summary>
		/// �����ʱ�䴥��
		///</summary>
		QUOTAIONANDTIME = (Byte)'5'
	};

	/// <summary>
	/// TTKSConditionalOrderStateAlterType///��ͣ�򼤻������־
	/// </summary>
	public enum struct EnumConditionalOrderStateAlterType:Byte
	{
		/// <summary>
		/// ��ͣ
		/// </summary>
		PAUSE = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		ACTIVE = (Byte)'1'
	};

	/// <summary>
	/// TTKSConditionalOrderSelectResultType///ѡ����
	/// </summary>
	public enum struct EnumConditionalOrderSelectResultType:Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		AGAIN = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		SKIP = (Byte)'1',

		/// <summary>
		/// ��ֹ
		/// </summary>
		ABORT = (Byte)'2'
	};

	/// <summary>
	/// TTKSOrderPriceTypeType///�����۸���������
	/// </summary>
	public enum struct EnumKSOrderPriceTypeType:Byte
	{
		/// <summary>
		/// ���¼�
		/// </summary>
		LastPrice = (Byte)'0',

		/// <summary>
		/// ���
		/// </summary>
		BidPrice = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		AskPrice = (Byte)'2'
	};

	/// <summary>
	/// TTKSCloseModeType///ƽ�ּ۸�����
	/// </summary>
	public enum struct EnumCloseModeType:Byte
	{
		/// <summary>
		/// �м�
		/// </summary>
		MarketPrice = (Byte)'0',

		/// <summary>
		/// �Ӽ�������
		/// </summary>
		SalePrice = (Byte)'1',

		/// <summary>
		/// �Ӽ����¼�
		/// </summary>
		LastPrice = (Byte)'2'
	};

	/// <summary>
	/// TTKSOffsetType///����ֹ��ֹӯ�۵ķ�ʽ����
	/// </summary>
	public enum struct EnumOffsetValueType:Byte
	{
		/// <summary>
		/// ָ��ֵ
		/// </summary>
		TermPrice = (Byte)'0',

		/// <summary>
		/// ���ֳɽ��۵����ƫ��ֵ
		/// </summary>
		TradePrice = (Byte)'1'
	};

    /// <summary>
	/// TTKSSpringTypeType��һ�������۸���������
	/// </summary>
	public enum struct EnumSpringTypeType:Byte
	{
		/// <summary>
		/// ���¼�
		/// </summary>
		LastPrice = (Byte)'0',

		/// <summary>
		/// ������
		/// </summary>
		SalePrice = (Byte)'1'
	};

	 /// <summary>
	/// TTKSConditionalOrderStatusType///������״̬
	/// </summary>
	public enum struct EnumConditionalOrderStatusType:Byte
	{
		/// <summary>
		/// ��ͣ
		/// </summary>
		PAUSENOTOUCHED = (Byte)'0',

		/// <summary>
		/// δ����
		/// </summary>
		ACTIVENOTOUCHED = (Byte)'1',

		/// <summary>
		/// ɾ��
		/// </summary>
		Deleted = (Byte)'2',

		/// <summary>
		/// �Ѵ���δ����
		/// </summary>
		TOUCHEDNOSEND = (Byte)'3',

		/// <summary>
		/// ���ͳ�ʱ
		/// </summary>
		SENDTIMEOUT = (Byte)'4',

		/// <summary>
		/// ���ͳɹ�
		/// </summary>
		SENDSUCCESS = (Byte)'5',

		/// <summary>
		/// �ȴ�ѡ��
		/// </summary>
		WAITSELECT = (Byte)'6',

		/// <summary>
		/// ѡ������
		/// </summary>
		SELECTSKIP = (Byte)'7',

		/// <summary>
		/// ѡ����ֹ
		/// </summary>
		SELECTABORT = (Byte)'8'
	};

	/// <summary>
	/// TTKSConditionalOrderSelectTypeType///������ѡ��ʽ����
	/// </summary>
	public enum struct EnumConditionalOrderSelectTypeType:Byte
	{
		/// <summary>
		/// ȷ�ϡ�ȡ�� 
		/// </summary>
		ConfirmORCancel = (Byte)'1',

		/// <summary>
		/// ���ԡ���������ֹ 
		/// </summary>
		AgainOrSkipOrAbort = (Byte)'2'
	};




	/// --------------------------------------------------------------------------------------------------------------------



	/// <summary>
	/// ��ʼ¼��������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct TKSConditionalOrderInitInsert
	{
		/// <summary>
		/// Ӫҵ������
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
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;		
		/// <summary>
		/// ��ƽ��־
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag;
		/// <summary>
		/// ����
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// �۸�
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// �۸����
		/// </summary>
		EnumKSOrderPriceTypeType OrderPriceType;
		/// <summary>
		/// ��������
		/// </summary>
		EnumConditionalTypeType ConditionalType;
		/// <summary>
		/// ������
		/// </summary>
		double ConditionalPrice;
		/// <summary>
		/// ���������
		/// </summary>
		int ConditionalOrderID;
		/// <summary>
		/// ��������
		/// </summary>
		int TriggeredTimes;
		/// <summary>
		/// ����������
		/// </summary>
		EnumConditionalOrderType ConditionalOrderType;
		/// <summary>
		/// ��Чʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActiveTime;
		/// <summary>
		/// ʧЧʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InActiveTime;
		/// <summary>
		/// ���Ҵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
	};

	/// <summary>
	/// �޸�������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct TKSConditionalOrderModify
	{
		/// <summary>
		/// Ӫҵ������
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
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
	    /// <summary>
		/// ��ƽ��־
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag;
		/// <summary>
		/// ����
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// �۸�
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// �۸����
		/// </summary>
		EnumKSOrderPriceTypeType OrderPriceType;
		/// <summary>
		/// ��������
		/// </summary>
		EnumConditionalTypeType ConditionalType;
		/// <summary>
		/// ������
		/// </summary>
		double ConditionalPrice;
		/// <summary>
		/// ���������
		/// </summary>
		int ConditionalOrderID;
		/// <summary>
		/// ��������
		/// </summary>
		int TriggeredTimes;
		/// <summary>
		/// ����������
		/// </summary>
		EnumConditionalOrderType ConditionalOrderType;
		/// <summary>
		/// ��Чʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActiveTime;
		/// <summary>
		/// ʧЧʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InActiveTime;
		/// <summary>
		/// ���Ҵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
	};

	/// <summary>
	/// ��ѯ������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct TKSConditionalOrderQuery
	{
		/// <summary>
		/// Ӫҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ���������
		/// </summary>
		int ConditionalOrderID;
	};

	/// <summary>
	/// ɾ��������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct TKSConditionalOrderRemove
	{
		/// <summary>
		/// Ӫҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ���������
		/// </summary>
		int ConditionalOrderID;
    };

	/// <summary>
	/// ��ͣ�򼤻�������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct TKSConditionalOrderStateAlter
	{
		/// <summary>
		/// Ӫҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ���������
		/// </summary>
		int ConditionalOrderID;
		/// <summary>
		/// ��ͣ�򼤻������־
		/// </summary>
		EnumConditionalOrderStateAlterType ConditionalOrderStateAlter;
	};

	/// <summary>
	/// ѡ��������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct TKSConditionalOrderSelect
	{
		/// <summary>
		/// Ӫҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ���������
		/// </summary>
		int ConditionalOrderID;
		/// <summary>
		/// ѡ����
		/// </summary>
		EnumConditionalOrderSelectResultType ConditionalOrderSelectResultType;
	};

	/// <summary>
	/// ��������������Ϣ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct TKSConditionalOrderRspResultField
	{
		/// <summary>
		/// Ӫҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ���������
		/// </summary>
		int ConditionalOrderID;
	};

	/// <summary>
	/// ��������Ӧ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct TKSConditionalOrderOperResultField
	{
		/// <summary>
		/// Ӫҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ���������
		/// </summary>
		int ConditionalOrderID;
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
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ����״̬
		/// </summary>
		EnumOrderStatusType OrderStatus;
		/// <summary>
		/// ��ƽ��־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombOffsetFlag;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombHedgeFlag;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// �۸�
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// ����
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// �����û�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CancelTime;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// ������״̬
		/// </summary>
		EnumConditionalOrderStatusType ConditionalOrderStatus;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
		/// <summary>
		/// �۸����
		/// </summary>
		EnumKSOrderPriceTypeType OrderPriceType;
		/// <summary>
		/// ��������
		/// </summary>
		int TriggeredTimes;
		/// <summary>
		/// ����������
		/// </summary>
		EnumConditionalOrderType ConditionalOrderType;
		/// <summary>
		/// ��ע
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
		String^ Memo;
		/// <summary>
		/// ��Чʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActiveTime;
		/// <summary>
		/// ʧЧʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InActiveTime;
	};

	/// <summary>
	/// ¼��ֹ��ֹӯ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct TKSProfitAndLossOrderInsert
	{
		/// <summary>
		/// Ӫҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// ֹ���
		/// </summary>
		double StopLossPrice;
		/// <summary>
		/// ֹӯ��
		/// </summary>
		double TakeProfitPrice;
		/// <summary>
		/// ƽ�ַ�ʽ
		/// </summary>
		EnumCloseModeType CloseMode;
		/// <summary>
		/// ƽ�ַ���Ӽ���λ����ƽ�ַ�ʽ=1��2ʱ��Ч��
		/// </summary>
		double FiguresPrice;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ҵ��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// ����ӯ��۵ķ�ʽ
		/// </summary>
		EnumOffsetValueType OffsetValue;
		/// <summary>
		/// �����������۸�����
		/// </summary>
		EnumSpringTypeType SpringType;
		/// <summary>
		/// ����ֹ���
		/// </summary>
		double FloatLimitPrice;
		/// <summary>
		/// ��������
		/// </summary>
		int TriggeredTimes;
		/// <summary>
		/// ���Ҵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		};

    /// <summary>
	/// ɾ��ֹ��ֹӯ��
	/// </summary>
    [StructLayout(LayoutKind::Sequential)]
	public ref struct TKSProfitAndLossOrderRemove
	{
		/// <summary>
		/// Ӫҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ֹ��ֹӯ����
		/// </summary>
		int ProfitAndLossOrderID;
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
		/// ҵ��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
	};

	/// <summary>
	/// ��ѯֹ��ֹӯ��
	/// </summary>
    [StructLayout(LayoutKind::Sequential)]
	public ref struct TKSProfitAndLossOrderQuery
	{
		/// <summary>
		/// Ӫҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ֹ��ֹӯ����
		/// </summary>
		int ProfitAndLossOrderID;
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
		/// ҵ��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
	};

	/// <summary>
	/// �޸�ֹ��ֹӯ��
	/// </summary>
    [StructLayout(LayoutKind::Sequential)]
	public ref struct TKSProfitAndLossOrderModify
	{
		/// <summary>
		/// Ӫҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ֹ��ֹӯ����
		/// </summary>
		int ProfitAndLossOrderID;
		/// <summary>
		/// ֹ���
		/// </summary>
		double StopLossPrice;
		/// <summary>
		/// ֹӯ��
		/// </summary>
		double TakeProfitPrice;
		/// <summary>
		/// ƽ�ַ�ʽ
		/// </summary>
		EnumCloseModeType CloseMode;
		/// <summary>
		/// ƽ�ַ���Ӽ���λ����ƽ�ַ�ʽ=1��2ʱ��Ч��
		/// </summary>
		double FiguresPrice;
		/// <summary>
		/// ����ӯ��۵ķ�ʽ
		/// </summary>
		EnumOffsetValueType OffsetValue;
		/// <summary>
		/// �����������۸�����
		/// </summary>
		EnumSpringTypeType SpringType;
		/// <summary>
		/// ����ֹ���
		/// </summary>
		double FloatLimitPrice;
		/// <summary>
		/// ��������
		/// </summary>
		int TriggeredTimes;
	};

	/// <summary>
	/// ֹ��ֹӯ��ɾ��
	/// </summary>
    [StructLayout(LayoutKind::Sequential)]
	public ref struct TKSProfitAndLossOrderRemoveField
	{
		/// <summary>
		/// Ӫҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ֹ��ֹӯ����
		/// </summary>
		int ProfitAndLossOrderID;
	};

	/// <summary>
	/// ֹ��ֹӯ������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct TKSProfitAndLossOrderOperResultField
	{
		/// <summary>
		/// Ӫҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ֹ��ֹӯ����
		/// </summary>
		int ProfitAndLossOrderID;
		/// <summary>
		/// ����Ա
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// Ͷ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ InvestorName;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// ֹ���
		/// </summary>
		double StopLossPrice;
		/// <summary>
		/// ֹӯ��
		/// </summary>
		double TakeProfitPrice;
		/// <summary>
		/// ƽ�ַ�ʽ
		/// </summary>
		EnumCloseModeType CloseMode;
		/// <summary>
		/// ƽ�ַ���Ӽ���λ����ƽ�ַ�ʽ=1��2ʱ��Ч��
		/// </summary>
		double FiguresPrice;
		/// <summary>
		/// ���鴥��ʱ�����¼�
		/// </summary>
		double LastPrice;
		/// <summary>
		/// ����ֹ��ֹӯ��ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ProfitAndLossOrderFormTime;
		/// <summary>
		/// ����������ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConditionalOrderFormTime;
		/// <summary>
		/// ����ί�е�ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ OrderFormTime;
		/// <summary>
		/// ֹ��ֹӯ��״̬
		/// </summary>
		EnumConditionalOrderStatusType ProfitAndLossOrderStatus;
		/// <summary>
		/// ���������
		/// </summary>
		int ConditionalOrderID;
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
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ��ƽ��־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombOffsetFlag;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombHedgeFlag;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// �۸�
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// ����
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// ����ӯ��۵ķ�ʽ
		/// </summary>
		EnumOffsetValueType OffsetValue;
		/// <summary>
		/// ҵ��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// �����������۸�����
		/// </summary>
		EnumSpringTypeType SpringType;
		/// <summary>
		/// ����ֹ���
		/// </summary>
		double FloatLimitPrice;
		/// <summary>
		/// ���ֳɽ��۸�
		/// </summary>
		double OpenTradePrice;
		};

	/// <summary>
	/// ����������ѡ����Ϣ
	/// </summary>
    [StructLayout(LayoutKind::Sequential)]
	public ref struct TKSCOSAskSelectField
	{
		/// <summary>
		/// Ӫҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ����Ա
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
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
		/// ���������
		/// </summary>
		int ConditionalOrderID;
		/// <summary>
		/// ��ע
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
		String^ Memo;
		/// <summary>
		/// ѡ��ʽ
		/// </summary>
		EnumConditionalOrderSelectTypeType SelectType;
	};

	/// <summary>
	/// ������״̬��Ϣ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct TKSCOSStatusField
	{
		/// <summary>
		/// Ӫҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ����Ա
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
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
		/// ���������
		/// </summary>
		int ConditionalOrderID;
		/// <summary>
		/// ������״̬
		/// </summary>
		EnumConditionalOrderStatusType ConditionalOrderStatus;
		/// <summary>
		/// ��ע
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
		String^ Memo;
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
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ����״̬
		/// </summary>
		EnumOrderStatusType OrderStatus;
		/// <summary>
		/// ��ƽ��־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombOffsetFlag;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombHedgeFlag;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// �۸�
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// ����
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// �����û�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ CancelUserID;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CancelTime;
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
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// ��ɽ�����
		/// </summary>
		int VolumeTraded;
		/// <summary>
		/// ʣ������
		/// </summary>
		int VolumeTotal;
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
		/// �ɽ��۸�
		/// </summary>
		double TradePrice;
		/// <summary>
		/// ���Ҵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		};

	/// <summary>
	/// ֹ��ֹӯ��״̬��Ϣ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct TKSPLStatusField
	{
		/// <summary>
		/// Ӫҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ����Ա
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
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
		/// ֹ��ֹӯ����
		/// </summary>
		int ProfitAndLossOrderID;
		/// <summary>
		/// ֹ�����������
		/// </summary>
		int StopLossOrderID;
		/// <summary>
		/// ֹӯ���������
		/// </summary>
		int TakeProfitOrderID;
		/// <summary>
		/// ӯ��״̬
		/// </summary>
		EnumConditionalOrderStatusType ProfitAndLossOrderStatus;
		/// <summary>
		/// ֹ���
		/// </summary>
		double StopLossPrice;
		/// <summary>
		/// ֹӯ��
		/// </summary>
		double TakeProfitPrice;
		/// <summary>
		/// ����ӯ��۵ķ�ʽ
		/// </summary>
		EnumOffsetValueType OffsetValue;
		/// <summary>
		/// ���ֳɽ��۸�
		/// </summary>
		double OpenTradePrice;
		/// <summary>
		/// ��ע
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
		String^ Memo;
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
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ����״̬
		/// </summary>
		EnumOrderStatusType OrderStatus;
		/// <summary>
		/// ��ƽ��־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombOffsetFlag;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombHedgeFlag;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// �۸�
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// ����
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// �����û�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ CancelUserID;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CancelTime;
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
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// ��ɽ�����
		/// </summary>
		int VolumeTraded;
		/// <summary>
		/// ʣ������
		/// </summary>
		int VolumeTotal;
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
		/// �ɽ��۸�
		/// </summary>
		double TradePrice;
		/// <summary>
		/// ���Ҵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		};
}