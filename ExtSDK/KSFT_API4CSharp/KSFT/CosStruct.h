/////////////////////////////////////////////////////////////////////////
/// 金仕达 KSFT C++ => .Net Framework Adapter
/// Summary: 条件单结构体定义
/// Author:	ksftapi@gmail.com
/// Date: 20130314
/// Update List:
///   20130318 修改
///   20130321 修改
///   20130326 添加注释
/////////////////////////////////////////////////////////////////////////
namespace KSFT
{
	/// <summary>
	/// TTKSConditionalTypeType///条件类型类型
	/// </summary>
	public enum struct EnumConditionalTypeType:Byte
	{
		/// <summary>
		/// 大于等于条件价
		/// </summary>
		GreaterEqualTermPrice = (Byte)'0',

		/// <summary>
		/// 小于等于条件价
		/// </summary>
		LesserThanTermPrice = (Byte)'1'
	};

	/// <summary>
	/// TTKSConditionalOrderType是一个条件单类型类型
	/// </summary>
	public enum struct EnumConditionalOrderType:Byte
	{
		///<summary>
		/// 行情触发
		///</summary>
		QUOTATION = (Byte)'0',

		///<summary>
		/// 开盘触发
		///</summary>
		OPEN = (Byte)'1',

		///<summary>
		/// 时间触发
		///</summary>
		TIME = (Byte)'2',

		///<summary>
		/// 行情和时间触发
		///</summary>
		QUOTAIONANDTIME = (Byte)'5'
	};

	/// <summary>
	/// TTKSConditionalOrderStateAlterType///暂停或激活操作标志
	/// </summary>
	public enum struct EnumConditionalOrderStateAlterType:Byte
	{
		/// <summary>
		/// 暂停
		/// </summary>
		PAUSE = (Byte)'0',

		/// <summary>
		/// 激活
		/// </summary>
		ACTIVE = (Byte)'1'
	};

	/// <summary>
	/// TTKSConditionalOrderSelectResultType///选择结果
	/// </summary>
	public enum struct EnumConditionalOrderSelectResultType:Byte
	{
		/// <summary>
		/// 重试
		/// </summary>
		AGAIN = (Byte)'0',

		/// <summary>
		/// 跳过
		/// </summary>
		SKIP = (Byte)'1',

		/// <summary>
		/// 终止
		/// </summary>
		ABORT = (Byte)'2'
	};

	/// <summary>
	/// TTKSOrderPriceTypeType///报单价格类型类型
	/// </summary>
	public enum struct EnumKSOrderPriceTypeType:Byte
	{
		/// <summary>
		/// 最新价
		/// </summary>
		LastPrice = (Byte)'0',

		/// <summary>
		/// 买价
		/// </summary>
		BidPrice = (Byte)'1',

		/// <summary>
		/// 卖价
		/// </summary>
		AskPrice = (Byte)'2'
	};

	/// <summary>
	/// TTKSCloseModeType///平仓价格类型
	/// </summary>
	public enum struct EnumCloseModeType:Byte
	{
		/// <summary>
		/// 市价
		/// </summary>
		MarketPrice = (Byte)'0',

		/// <summary>
		/// 加减买卖价
		/// </summary>
		SalePrice = (Byte)'1',

		/// <summary>
		/// 加减最新价
		/// </summary>
		LastPrice = (Byte)'2'
	};

	/// <summary>
	/// TTKSOffsetType///生成止损止盈价的方式类型
	/// </summary>
	public enum struct EnumOffsetValueType:Byte
	{
		/// <summary>
		/// 指定值
		/// </summary>
		TermPrice = (Byte)'0',

		/// <summary>
		/// 开仓成交价的相对偏移值
		/// </summary>
		TradePrice = (Byte)'1'
	};

    /// <summary>
	/// TTKSSpringTypeType是一个报单价格条件类型
	/// </summary>
	public enum struct EnumSpringTypeType:Byte
	{
		/// <summary>
		/// 最新价
		/// </summary>
		LastPrice = (Byte)'0',

		/// <summary>
		/// 买卖价
		/// </summary>
		SalePrice = (Byte)'1'
	};

	 /// <summary>
	/// TTKSConditionalOrderStatusType///条件单状态
	/// </summary>
	public enum struct EnumConditionalOrderStatusType:Byte
	{
		/// <summary>
		/// 暂停
		/// </summary>
		PAUSENOTOUCHED = (Byte)'0',

		/// <summary>
		/// 未触发
		/// </summary>
		ACTIVENOTOUCHED = (Byte)'1',

		/// <summary>
		/// 删除
		/// </summary>
		Deleted = (Byte)'2',

		/// <summary>
		/// 已触发未发送
		/// </summary>
		TOUCHEDNOSEND = (Byte)'3',

		/// <summary>
		/// 发送超时
		/// </summary>
		SENDTIMEOUT = (Byte)'4',

		/// <summary>
		/// 发送成功
		/// </summary>
		SENDSUCCESS = (Byte)'5',

		/// <summary>
		/// 等待选择
		/// </summary>
		WAITSELECT = (Byte)'6',

		/// <summary>
		/// 选择跳过
		/// </summary>
		SELECTSKIP = (Byte)'7',

		/// <summary>
		/// 选择终止
		/// </summary>
		SELECTABORT = (Byte)'8'
	};

	/// <summary>
	/// TTKSConditionalOrderSelectTypeType///条件单选择方式类型
	/// </summary>
	public enum struct EnumConditionalOrderSelectTypeType:Byte
	{
		/// <summary>
		/// 确认、取消 
		/// </summary>
		ConfirmORCancel = (Byte)'1',

		/// <summary>
		/// 重试、跳过、终止 
		/// </summary>
		AgainOrSkipOrAbort = (Byte)'2'
	};




	/// --------------------------------------------------------------------------------------------------------------------



	/// <summary>
	/// 初始录入条件单
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct TKSConditionalOrderInitInsert
	{
		/// <summary>
		/// 营业部代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// 买卖方向
		/// </summary>
		EnumDirectionType Direction;		
		/// <summary>
		/// 开平标志
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag;
		/// <summary>
		/// 投机套保标志
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag;
		/// <summary>
		/// 数量
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// 价格
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// 价格类别
		/// </summary>
		EnumKSOrderPriceTypeType OrderPriceType;
		/// <summary>
		/// 条件类型
		/// </summary>
		EnumConditionalTypeType ConditionalType;
		/// <summary>
		/// 条件价
		/// </summary>
		double ConditionalPrice;
		/// <summary>
		/// 条件单编号
		/// </summary>
		int ConditionalOrderID;
		/// <summary>
		/// 触发次数
		/// </summary>
		int TriggeredTimes;
		/// <summary>
		/// 条件单类型
		/// </summary>
		EnumConditionalOrderType ConditionalOrderType;
		/// <summary>
		/// 有效时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActiveTime;
		/// <summary>
		/// 失效时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InActiveTime;
		/// <summary>
		/// 货币代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
	};

	/// <summary>
	/// 修改条件单
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct TKSConditionalOrderModify
	{
		/// <summary>
		/// 营业部代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// 买卖方向
		/// </summary>
		EnumDirectionType Direction;
	    /// <summary>
		/// 开平标志
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag;
		/// <summary>
		/// 投机套保标志
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag;
		/// <summary>
		/// 数量
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// 价格
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// 价格类别
		/// </summary>
		EnumKSOrderPriceTypeType OrderPriceType;
		/// <summary>
		/// 条件类型
		/// </summary>
		EnumConditionalTypeType ConditionalType;
		/// <summary>
		/// 条件价
		/// </summary>
		double ConditionalPrice;
		/// <summary>
		/// 条件单编号
		/// </summary>
		int ConditionalOrderID;
		/// <summary>
		/// 触发次数
		/// </summary>
		int TriggeredTimes;
		/// <summary>
		/// 条件单类型
		/// </summary>
		EnumConditionalOrderType ConditionalOrderType;
		/// <summary>
		/// 有效时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActiveTime;
		/// <summary>
		/// 失效时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InActiveTime;
		/// <summary>
		/// 货币代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
	};

	/// <summary>
	/// 查询条件单
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct TKSConditionalOrderQuery
	{
		/// <summary>
		/// 营业部代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 条件单编号
		/// </summary>
		int ConditionalOrderID;
	};

	/// <summary>
	/// 删除条件单
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct TKSConditionalOrderRemove
	{
		/// <summary>
		/// 营业部代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 条件单编号
		/// </summary>
		int ConditionalOrderID;
    };

	/// <summary>
	/// 暂停或激活条件单
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct TKSConditionalOrderStateAlter
	{
		/// <summary>
		/// 营业部代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 条件单编号
		/// </summary>
		int ConditionalOrderID;
		/// <summary>
		/// 暂停或激活操作标志
		/// </summary>
		EnumConditionalOrderStateAlterType ConditionalOrderStateAlter;
	};

	/// <summary>
	/// 选择条件单
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct TKSConditionalOrderSelect
	{
		/// <summary>
		/// 营业部代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 条件单编号
		/// </summary>
		int ConditionalOrderID;
		/// <summary>
		/// 选择结果
		/// </summary>
		EnumConditionalOrderSelectResultType ConditionalOrderSelectResultType;
	};

	/// <summary>
	/// 条件单处理结果信息
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct TKSConditionalOrderRspResultField
	{
		/// <summary>
		/// 营业部代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 条件单编号
		/// </summary>
		int ConditionalOrderID;
	};

	/// <summary>
	/// 条件单响应
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct TKSConditionalOrderOperResultField
	{
		/// <summary>
		/// 营业部代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 条件单编号
		/// </summary>
		int ConditionalOrderID;
		/// <summary>
		/// 本地报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 报单状态
		/// </summary>
		EnumOrderStatusType OrderStatus;
		/// <summary>
		/// 开平标志
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombOffsetFlag;
		/// <summary>
		/// 投机套保标志
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombHedgeFlag;
		/// <summary>
		/// 买卖方向
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// 价格
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// 数量
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 撤销用户
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 撤销时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CancelTime;
		/// <summary>
		/// 客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// 条件单状态
		/// </summary>
		EnumConditionalOrderStatusType ConditionalOrderStatus;
		/// <summary>
		/// 错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
		/// <summary>
		/// 价格类别
		/// </summary>
		EnumKSOrderPriceTypeType OrderPriceType;
		/// <summary>
		/// 触发次数
		/// </summary>
		int TriggeredTimes;
		/// <summary>
		/// 条件单类型
		/// </summary>
		EnumConditionalOrderType ConditionalOrderType;
		/// <summary>
		/// 备注
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
		String^ Memo;
		/// <summary>
		/// 有效时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActiveTime;
		/// <summary>
		/// 失效时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InActiveTime;
	};

	/// <summary>
	/// 录入止损止盈单
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct TKSProfitAndLossOrderInsert
	{
		/// <summary>
		/// 营业部代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 本地报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// 止损价
		/// </summary>
		double StopLossPrice;
		/// <summary>
		/// 止盈价
		/// </summary>
		double TakeProfitPrice;
		/// <summary>
		/// 平仓方式
		/// </summary>
		EnumCloseModeType CloseMode;
		/// <summary>
		/// 平仓反向加减价位数（平仓方式=1或2时有效）
		/// </summary>
		double FiguresPrice;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// 生成盈损价的方式
		/// </summary>
		EnumOffsetValueType OffsetValue;
		/// <summary>
		/// 条件单触发价格类型
		/// </summary>
		EnumSpringTypeType SpringType;
		/// <summary>
		/// 浮动止损价
		/// </summary>
		double FloatLimitPrice;
		/// <summary>
		/// 触发次数
		/// </summary>
		int TriggeredTimes;
		/// <summary>
		/// 货币代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		};

    /// <summary>
	/// 删除止损止盈单
	/// </summary>
    [StructLayout(LayoutKind::Sequential)]
	public ref struct TKSProfitAndLossOrderRemove
	{
		/// <summary>
		/// 营业部代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 止损止盈单号
		/// </summary>
		int ProfitAndLossOrderID;
		/// <summary>
		/// 本地报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
	};

	/// <summary>
	/// 查询止损止盈单
	/// </summary>
    [StructLayout(LayoutKind::Sequential)]
	public ref struct TKSProfitAndLossOrderQuery
	{
		/// <summary>
		/// 营业部代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 止损止盈单号
		/// </summary>
		int ProfitAndLossOrderID;
		/// <summary>
		/// 本地报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
	};

	/// <summary>
	/// 修改止损止盈单
	/// </summary>
    [StructLayout(LayoutKind::Sequential)]
	public ref struct TKSProfitAndLossOrderModify
	{
		/// <summary>
		/// 营业部代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 止损止盈单号
		/// </summary>
		int ProfitAndLossOrderID;
		/// <summary>
		/// 止损价
		/// </summary>
		double StopLossPrice;
		/// <summary>
		/// 止盈价
		/// </summary>
		double TakeProfitPrice;
		/// <summary>
		/// 平仓方式
		/// </summary>
		EnumCloseModeType CloseMode;
		/// <summary>
		/// 平仓反向加减价位数（平仓方式=1或2时有效）
		/// </summary>
		double FiguresPrice;
		/// <summary>
		/// 生成盈损价的方式
		/// </summary>
		EnumOffsetValueType OffsetValue;
		/// <summary>
		/// 条件单触发价格类型
		/// </summary>
		EnumSpringTypeType SpringType;
		/// <summary>
		/// 浮动止损价
		/// </summary>
		double FloatLimitPrice;
		/// <summary>
		/// 触发次数
		/// </summary>
		int TriggeredTimes;
	};

	/// <summary>
	/// 止损止盈单删除
	/// </summary>
    [StructLayout(LayoutKind::Sequential)]
	public ref struct TKSProfitAndLossOrderRemoveField
	{
		/// <summary>
		/// 营业部代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 止损止盈单号
		/// </summary>
		int ProfitAndLossOrderID;
	};

	/// <summary>
	/// 止损止盈单处理
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct TKSProfitAndLossOrderOperResultField
	{
		/// <summary>
		/// 营业部代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 止损止盈单号
		/// </summary>
		int ProfitAndLossOrderID;
		/// <summary>
		/// 操作员
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 投资者名称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ InvestorName;
		/// <summary>
		/// 本地报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// 止损价
		/// </summary>
		double StopLossPrice;
		/// <summary>
		/// 止盈价
		/// </summary>
		double TakeProfitPrice;
		/// <summary>
		/// 平仓方式
		/// </summary>
		EnumCloseModeType CloseMode;
		/// <summary>
		/// 平仓反向加减价位数（平仓方式=1或2时有效）
		/// </summary>
		double FiguresPrice;
		/// <summary>
		/// 行情触发时的最新价
		/// </summary>
		double LastPrice;
		/// <summary>
		/// 生成止损止盈单时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ProfitAndLossOrderFormTime;
		/// <summary>
		/// 生成条件单时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConditionalOrderFormTime;
		/// <summary>
		/// 生成委托单时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ OrderFormTime;
		/// <summary>
		/// 止损止盈单状态
		/// </summary>
		EnumConditionalOrderStatusType ProfitAndLossOrderStatus;
		/// <summary>
		/// 条件单编号
		/// </summary>
		int ConditionalOrderID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 开平标志
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombOffsetFlag;
		/// <summary>
		/// 投机套保标志
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombHedgeFlag;
		/// <summary>
		/// 买卖方向
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// 价格
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// 数量
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// 生成盈损价的方式
		/// </summary>
		EnumOffsetValueType OffsetValue;
		/// <summary>
		/// 业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// 条件单触发价格类型
		/// </summary>
		EnumSpringTypeType SpringType;
		/// <summary>
		/// 浮动止损价
		/// </summary>
		double FloatLimitPrice;
		/// <summary>
		/// 开仓成交价格
		/// </summary>
		double OpenTradePrice;
		};

	/// <summary>
	/// 条件单请求选择信息
	/// </summary>
    [StructLayout(LayoutKind::Sequential)]
	public ref struct TKSCOSAskSelectField
	{
		/// <summary>
		/// 营业部代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 操作员
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 序号
		/// </summary>
		int SequenceNo;
		/// <summary>
		/// 条件单编号
		/// </summary>
		int ConditionalOrderID;
		/// <summary>
		/// 备注
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
		String^ Memo;
		/// <summary>
		/// 选择方式
		/// </summary>
		EnumConditionalOrderSelectTypeType SelectType;
	};

	/// <summary>
	/// 条件单状态信息
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct TKSCOSStatusField
	{
		/// <summary>
		/// 营业部代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 操作员
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 序号
		/// </summary>
		int SequenceNo;
		/// <summary>
		/// 条件单编号
		/// </summary>
		int ConditionalOrderID;
		/// <summary>
		/// 条件单状态
		/// </summary>
		EnumConditionalOrderStatusType ConditionalOrderStatus;
		/// <summary>
		/// 备注
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
		String^ Memo;
		/// <summary>
		/// 本地报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 报单状态
		/// </summary>
		EnumOrderStatusType OrderStatus;
		/// <summary>
		/// 开平标志
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombOffsetFlag;
		/// <summary>
		/// 投机套保标志
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombHedgeFlag;
		/// <summary>
		/// 买卖方向
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// 价格
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// 数量
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 撤销用户
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ CancelUserID;
		/// <summary>
		/// 撤销时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CancelTime;
		/// <summary>
		/// 客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// 业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// 报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// 今成交数量
		/// </summary>
		int VolumeTraded;
		/// <summary>
		/// 剩余数量
		/// </summary>
		int VolumeTotal;
		/// <summary>
		/// 委托时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTime;
		/// <summary>
		/// 激活时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActiveTime;
		/// <summary>
		/// 成交价格
		/// </summary>
		double TradePrice;
		/// <summary>
		/// 货币代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		};

	/// <summary>
	/// 止损止盈单状态信息
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct TKSPLStatusField
	{
		/// <summary>
		/// 营业部代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 操作员
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 序号
		/// </summary>
		int SequenceNo;
		/// <summary>
		/// 止损止盈单号
		/// </summary>
		int ProfitAndLossOrderID;
		/// <summary>
		/// 止损条件单编号
		/// </summary>
		int StopLossOrderID;
		/// <summary>
		/// 止盈条件单编号
		/// </summary>
		int TakeProfitOrderID;
		/// <summary>
		/// 盈损单状态
		/// </summary>
		EnumConditionalOrderStatusType ProfitAndLossOrderStatus;
		/// <summary>
		/// 止损价
		/// </summary>
		double StopLossPrice;
		/// <summary>
		/// 止盈价
		/// </summary>
		double TakeProfitPrice;
		/// <summary>
		/// 生成盈损价的方式
		/// </summary>
		EnumOffsetValueType OffsetValue;
		/// <summary>
		/// 开仓成交价格
		/// </summary>
		double OpenTradePrice;
		/// <summary>
		/// 备注
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
		String^ Memo;
		/// <summary>
		/// 本地报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 报单状态
		/// </summary>
		EnumOrderStatusType OrderStatus;
		/// <summary>
		/// 开平标志
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombOffsetFlag;
		/// <summary>
		/// 投机套保标志
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombHedgeFlag;
		/// <summary>
		/// 买卖方向
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// 价格
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// 数量
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 撤销用户
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ CancelUserID;
		/// <summary>
		/// 撤销时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CancelTime;
		/// <summary>
		/// 客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// 业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// 报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// 今成交数量
		/// </summary>
		int VolumeTraded;
		/// <summary>
		/// 剩余数量
		/// </summary>
		int VolumeTotal;
		/// <summary>
		/// 委托时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTime;
		/// <summary>
		/// 激活时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActiveTime;
		/// <summary>
		/// 成交价格
		/// </summary>
		double TradePrice;
		/// <summary>
		/// 货币代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		};
}