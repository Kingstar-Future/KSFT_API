#-*- coding=utf-8 -*-
"""

A wrapper for KSFT_API
author: ksftapi@gmail.com(authorized by Lvsoft@gmail.com)
date: 2013-07-10

This file is part of KSFT_API4Py

KSFT_API4Py is free software; you can redistribute it and/or modify it
under the terms of the GUL Lesser General Public License as published
by the Free Software Foundation; either version 2.1 of the License, or
(at your option) any later version.

KSFT_API4Py is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY of FITNESS FOR A PARTICULAR PURPOSE. See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along the KSFT_API4Py; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
02110-1301 USA
"""

#This file is auto generated! Please don't edit directly.
#FtdcCommApiTypeType是一个通讯API类型类型
THOST_FTDC_CAPIT_Server = '2' #服务端
THOST_FTDC_CAPIT_UserApi = '3' #交易系统的UserApi
THOST_FTDC_CAPIT_Client = '1' #客户端
#FtdcVirBankAccTypeType是一个银行帐户类型类型
THOST_FTDC_VBAT_BankCard = '2' #储蓄卡
THOST_FTDC_VBAT_CreditCard = '3' #信用卡
THOST_FTDC_VBAT_BankBook = '1' #存折
#FtdcSettleManagerGroupType是一个模块分组类型
THOST_FTDC_SMG_ASP = '2' #内部核对
THOST_FTDC_SMG_Exhcange = '1' #交易所核对
THOST_FTDC_SMG_CSRC = '3' #上报数据核对
#TKSConditionalOrderSelectTypeType///条件单选择方式类型
KSCOS_Select_ConfirmORCancel = '1' #确认、取消
KS_Select_AgainOrSkipOrAbort = '2' #重试、跳过、终止
#FtdcTransferValidFlagType是一个转账有效标志类型
THOST_FTDC_TVF_Valid = '1' #有效
THOST_FTDC_TVF_Reverse = '2' #冲正
THOST_FTDC_TVF_Invalid = '0' #无效或失败
#FtdcUOAAutoSendType是一个统一开户申请自动发送类型
THOST_FTDC_UOAA_ASNR = '2' #自动发送，不自动接收
THOST_FTDC_UOAA_NSAR = '3' #不自动发送，自动接收
THOST_FTDC_UOAA_ASR = '1' #自动发送并接收
THOST_FTDC_UOAA_NSR = '4' #不自动发送，也不自动接收
#FtdcDepartmentRangeType是一个投资者范围类型
THOST_FTDC_DR_All = '1' #所有
THOST_FTDC_DR_Single = '3' #单一投资者
THOST_FTDC_DR_Group = '2' #组织架构
#FtdcCodeSourceTypeType是一个交易编码来源类型
THOST_FTDC_CST_ManualEntry = '1' #手工录入(未规范)
THOST_FTDC_CST_UnifyAccount = '0' #统一开户(已规范)
#FtdcRiskNotifyStatusType是一个风险通知状态类型
THOST_FTDC_RNS_Confirmed = '5' #已确认
THOST_FTDC_RNS_NotGen = '0' #未生成
THOST_FTDC_RNS_SendOk = '3' #已发送未接收
THOST_FTDC_RNS_Generated = '1' #已生成未发送
THOST_FTDC_RNS_SendError = '2' #发送失败
THOST_FTDC_RNS_Received = '4' #已接收未确认
#FtdcHandleTradingAccountAlgoIDType是一个资金处理算法编号类型
THOST_FTDC_HTAA_DCE = '2' #大连商品交易所
THOST_FTDC_HTAA_Base = '1' #基本
THOST_FTDC_HTAA_CZCE = '3' #郑州商品交易所
#FtdcProtocalIDType是一个协议类型类型
THOST_FTDC_PID_FBTPlateFormProtocal = 'X' #银期转帐平台协议
THOST_FTDC_PID_CCBProtocal = '4' #建行协议
THOST_FTDC_PID_FutureProtocal = '0' #期商协议
THOST_FTDC_PID_BOCOMProtocal = '5' #交行协议
THOST_FTDC_PID_ICBCProtocal = '1' #工行协议
THOST_FTDC_PID_ABCProtocal = '2' #农行协议
THOST_FTDC_PID_CBCProtocal = '3' #中国银行协议
#FtdcSettlementStatusType是一个结算状态类型
THOST_FTDC_STS_Settlementing = '1' #结算中
THOST_FTDC_STS_Initialize = '0' #初始
THOST_FTDC_STS_Settlemented = '2' #已结算
THOST_FTDC_STS_Finished = '3' #结算完成
#FtdcUserTypeType是一个用户类型类型
THOST_FTDC_UT_Investor = '0' #投资者
THOST_FTDC_UT_SuperUser = '2' #管理员
THOST_FTDC_UT_Operator = '1' #操作员
#FtdcCloseStyleType是一个平仓方式类型
THOST_FTDC_ICS_CloseToday = '1' #先平今再平昨
THOST_FTDC_ICS_Close = '0' #先开先平
#FtdcQueryInvestorRangeType是一个查询范围类型
THOST_FTDC_QIR_Group = '2' #查询分类
THOST_FTDC_QIR_Single = '3' #单一投资者
THOST_FTDC_QIR_All = '1' #所有
#FtdcCSRCDataQueyTypeType是一个上报数据查询类型类型
THOST_FTDC_CSRCQ_History = '1' #查询历史报送的代理经纪公司的数据
THOST_FTDC_CSRCQ_Current = '0' #查询当前交易日报送的数据
#FtdcHedgeFlagType是一个投机套保标志类型
THOST_FTDC_HF_Speculation = '1' #投机
THOST_FTDC_HF_Arbitrage = '2' #套利
THOST_FTDC_HF_Hedge = '3' #套保
#FtdcRiskUserEventType是一个风控用户操作事件类型
THOST_FTDC_RUE_ExportData = '0' #导出数据
#FtdcMonthBillTradeSumType是一个结算单月报成交汇总方式类型
THOST_FTDC_MBTS_ByInstrument = '0' #同日同合约
THOST_FTDC_MBTS_ByDayInsPrc = '1' #同日同合约同价格
THOST_FTDC_MBTS_ByDayIns = '2' #同合约
#FtdcBrokerUserTypeType是一个经济公司用户类型类型
THOST_FTDC_BUT_Investor = '1' #投资者
THOST_FTDC_BUT_BrokerUser = '2' #操作员
#TKSOrderPriceTypeType///报单价格类型类型
KSCOS_OrderPrice_LastPrice = '0' #最新价
KSCOS_OrderPrice_AskPrice = '2' #卖价
KSCOS_OrderPrice_BidPrice = '1' #买价
#FtdcOrderStatusType是一个报单状态类型
THOST_FTDC_OST_NotTouched = 'b' #尚未触发
THOST_FTDC_OST_NoTradeQueueing = '3' #未成交还在队列中
THOST_FTDC_OST_AllTraded = '0' #全部成交
THOST_FTDC_OST_NoTradeNotQueueing = '4' #未成交不在队列中
THOST_FTDC_OST_Unknown = 'a' #未知
THOST_FTDC_OST_PartTradedQueueing = '1' #部分成交还在队列中
THOST_FTDC_OST_PartTradedNotQueueing = '2' #部分成交不在队列中
THOST_FTDC_OST_Touched = 'c' #已触发
THOST_FTDC_OST_Canceled = '5' #撤单
#FtdcVirementTradeCodeType是一个交易代码类型
THOST_FTDC_VTC_FutureFutureToBank = '202002' #期货发起期货资金转银行
THOST_FTDC_VTC_BankFutureToBank = '102002' #银行发起期货资金转银行
THOST_FTDC_VTC_BankBankToFuture = '102001' #银行发起银行资金转期货
THOST_FTDC_VTC_FutureBankToFuture = '202001' #期货发起银行资金转期货
#FtdcFileUploadStatusType是一个文件状态类型
THOST_FTDC_FUS_SucceedLoad = '3' #导入成功
THOST_FTDC_FUS_FailedUpload = '2' #上传失败
THOST_FTDC_FUS_FailedLoad = '5' #导入失败
THOST_FTDC_FUS_SucceedUpload = '1' #上传成功
THOST_FTDC_FUS_PartSucceedLoad = '4' #导入部分成功
#FtdcFileTypeType是一个文件上传类型类型
THOST_FTDC_FUT_Settlement = '0' #结算
THOST_FTDC_FUT_Check = '1' #核对
#FtdcFutureAccTypeType是一个期货公司帐号类型类型
THOST_FTDC_FAT_BankBook = '1' #银行存折
THOST_FTDC_FAT_SavingCard = '2' #储蓄卡
THOST_FTDC_FAT_CreditCard = '3' #信用卡
#FtdcMortgageTypeType是一个质押类型类型
THOST_FTDC_MT_In = '1' #质入
THOST_FTDC_MT_Out = '0' #质出
#FtdcClientIDStatusType是一个交易编码状态类型
THOST_FTDC_UOACS_Refuse = '5' #拒绝
THOST_FTDC_UOACS_Cancel = '6' #已撤销编码
THOST_FTDC_UOACS_Success = '4' #完成
THOST_FTDC_UOACS_Sended = '3' #已发送申请
THOST_FTDC_UOACS_NoApply = '1' #未申请
THOST_FTDC_UOACS_Submited = '2' #已提交申请
#FtdcTradingRoleType是一个交易角色类型
THOST_FTDC_ER_Host = '2' #自营
THOST_FTDC_ER_Broker = '1' #代理
THOST_FTDC_ER_Maker = '3' #做市商
#FtdcPositionDateType是一个持仓日期类型
THOST_FTDC_PSD_Today = '1' #今日持仓
THOST_FTDC_PSD_History = '2' #历史持仓
#FtdcSyncModeType是一个套接字通信方式类型
THOST_FTDC_SRM_ASync = '0' #异步
THOST_FTDC_SRM_Sync = '1' #同步
#FtdcRateInvestorRangeType是一个投资者范围类型
THOST_FTDC_RIR_All = '1' #所有
THOST_FTDC_RIR_Single = '3' #单一投资者
THOST_FTDC_RIR_Model = '2' #费率模板
#FtdcBrokerRepealFlagType是一个期商冲正标志类型
THOST_FTDC_BRORF_BrokerNotNeedRepeal = '0' #期商无需自动冲正
THOST_FTDC_BRORF_BrokerBeenRepealed = '2' #期商已自动冲正
THOST_FTDC_BRORF_BrokerWaitingRepeal = '1' #期商待自动冲正
#TKSConditionalOrderStateAlterType///暂停或激活操作标志
KSCOS_State_ACTIVE = '1' #激活
KSCOS_State_PAUSE = '0' #暂停
#FtdcBankRepealFlagType是一个银行冲正标志类型
THOST_FTDC_BRF_BankWaitingRepeal = '1' #银行待自动冲正
THOST_FTDC_BRF_BankNotNeedRepeal = '0' #银行无需自动冲正
THOST_FTDC_BRF_BankBeenRepealed = '2' #银行已自动冲正
#FtdcPwdFlagType是一个密码核对标志类型
THOST_FTDC_BPWDF_BlankCheck = '1' #明文核对
THOST_FTDC_BPWDF_NoCheck = '0' #不核对
THOST_FTDC_BPWDF_EncryptCheck = '2' #密文核对
#FtdcDataResourceType是一个数据来源类型
THOST_FTDC_DAR_CSRC = '3' #报送数据
THOST_FTDC_DAR_Settle = '1' #本系统
THOST_FTDC_DAR_Exchange = '2' #交易所
#FtdcDataStatusType是一个反洗钱审核表数据状态类型
THOST_FTDC_AMLDS_Deleted = '1' #已删除
THOST_FTDC_AMLDS_Normal = '0' #正常
#FtdcForceCloseReasonType是一个强平原因类型
THOST_FTDC_FCC_PersonDeliv = '7' #自然人临近交割
THOST_FTDC_FCC_ClientOverPositionLimit = '2' #客户超仓
THOST_FTDC_FCC_NotForceClose = '0' #非强平
THOST_FTDC_FCC_NotMultiple = '4' #持仓非整数倍
THOST_FTDC_FCC_MemberOverPositionLimit = '3' #会员超仓
THOST_FTDC_FCC_LackDeposit = '1' #资金不足
THOST_FTDC_FCC_Other = '6' #其它
THOST_FTDC_FCC_Violation = '5' #违规
#FtdcApplyStatusIDType是一个申请状态类型
THOST_FTDC_ASID_Submited = '2' #已提交
THOST_FTDC_ASID_Checked = '3' #已审核
THOST_FTDC_ASID_Refused = '4' #已拒绝
THOST_FTDC_ASID_NoComplete = '1' #未补全
THOST_FTDC_ASID_Deleted = '5' #已删除
#FtdcOrgSystemIDType是一个原有系统代码类型
THOST_FTDC_ORGS_Standard = '0' #综合交易平台
THOST_FTDC_ORGS_ESunny = '1' #易盛系统
THOST_FTDC_ORGS_KingStarV6 = '2' #金仕达V6系统
#FtdcVolumeConditionType是一个成交量类型类型
THOST_FTDC_VC_MV = '2' #最小数量
THOST_FTDC_VC_CV = '3' #全部数量
THOST_FTDC_VC_AV = '1' #任何数量
#FtdcTradeTypeType是一个成交类型类型
THOST_FTDC_TRDT_EFPDerived = '3' #期转现衍生成交
THOST_FTDC_TRDT_OTC = '2' #OTC成交
THOST_FTDC_TRDT_OptionsExecution = '1' #期权执行
THOST_FTDC_TRDT_Common = '0' #普通成交
THOST_FTDC_TRDT_CombinationDerived = '4' #组合衍生成交
#FtdcSysOperModeType是一个系统日志操作方法类型
THOST_FTDC_SoM_Copy = '4' #复制
THOST_FTDC_SoM_ReSet = '7' #重置
THOST_FTDC_SoM_Update = '2' #修改
THOST_FTDC_SoM_Add = '1' #增加
THOST_FTDC_SoM_AcTive = '5' #激活
THOST_FTDC_SoM_Delete = '3' #删除
THOST_FTDC_SoM_CanCel = '6' #注销
#FtdcActionFlagType是一个操作标志类型
THOST_FTDC_AF_Delete = '0' #删除
THOST_FTDC_AF_Modify = '3' #修改
#FtdcSettlementStyleType是一个结算单方式类型
THOST_FTDC_SBS_Volume = '2' #逐笔对冲
THOST_FTDC_SBS_Day = '1' #逐日盯市
#FtdcPriceSourceType是一个成交价来源类型
THOST_FTDC_PSRC_Sell = '2' #卖委托价
THOST_FTDC_PSRC_Buy = '1' #买委托价
THOST_FTDC_PSRC_LastPrice = '0' #前成交价
#FtdcCashExchangeCodeType是一个汇钞标志类型
THOST_FTDC_CEC_Exchange = '1' #汇
THOST_FTDC_CEC_Cash = '2' #钞
#FtdcInvestorRangeType是一个投资者范围类型
THOST_FTDC_IR_All = '1' #所有
THOST_FTDC_IR_Group = '2' #投资者组
THOST_FTDC_IR_Single = '3' #单一投资者
#FtdcBillGenStatusType是一个结算单生成状态类型
THOST_FTDC_BGS_None = '0' #不生成
THOST_FTDC_BGS_NoGenerated = '1' #未生成
THOST_FTDC_BGS_Generated = '2' #已生成
#FtdcParkedOrderStatusType是一个预埋单状态类型
THOST_FTDC_PAOS_Send = '2' #已发送
THOST_FTDC_PAOS_Deleted = '3' #已删除
THOST_FTDC_PAOS_NotSend = '1' #未发送
#FtdcPasswordTypeType是一个密码类型类型
THOST_FTDC_PWDT_Trade = '1' #交易密码
THOST_FTDC_PWDT_Account = '2' #资金密码
#FtdcEventModeType是一个操作方法类型
THOST_FTDC_EvM_CANCEL = '6' #注销
THOST_FTDC_EvM_Reverse = '7' #冲销
THOST_FTDC_EvM_ADD = '1' #增加
THOST_FTDC_EvM_CHECK = '4' #复核
THOST_FTDC_EvM_COPY = '5' #复制
THOST_FTDC_EvM_DELETE = '3' #删除
THOST_FTDC_EvM_UPDATE = '2' #修改
#FtdcBankAccTypeType是一个银行帐号类型类型
THOST_FTDC_BAT_SavingCard = '2' #储蓄卡
THOST_FTDC_BAT_CreditCard = '3' #信用卡
THOST_FTDC_BAT_BankBook = '1' #银行存折
#FtdcClientIDTypeType是一个交易编码类型类型
THOST_FTDC_CIDT_Hedge = '3' #套保
THOST_FTDC_CIDT_Arbitrage = '2' #套利
THOST_FTDC_CIDT_Speculation = '1' #投机
#FtdcBankAccStatusType是一个银行账户状态类型
THOST_FTDC_BAS_ReportLoss = '2' #挂失
THOST_FTDC_BAS_Freeze = '1' #冻结
THOST_FTDC_BAS_Normal = '0' #正常
#FtdcReqRspTypeType是一个请求响应类别类型
THOST_FTDC_REQRSP_Request = '0' #请求
THOST_FTDC_REQRSP_Response = '1' #响应
#FtdcFutureTypeType是一个期货类型类型
THOST_FTDC_FUTT_Financial = '2' #金融期货
THOST_FTDC_FUTT_Commodity = '1' #商品期货
#FtdcFuturePwdFlagType是一个资金密码核对标志类型
THOST_FTDC_FPWD_Check = '1' #核对
THOST_FTDC_FPWD_UnCheck = '0' #不核对
#FtdcExchangeSettlementParamIDType是一个交易所结算参数代码类型
THOST_FTDC_ESPI_DCEDelivFee = '5' #大商所交割手续费收取方式
THOST_FTDC_ESPI_CFFEXMinPrepa = '6' #中金所开户最低可用金额
THOST_FTDC_ESPI_OtherFundImport = '3' #分项资金入交易所出入金
THOST_FTDC_ESPI_SHFEDelivFee = '4' #上期所交割手续费收取方式
THOST_FTDC_ESPI_OtherFundItem = '2' #分项资金导入项
THOST_FTDC_ESPI_MortgageRatio = '1' #质押比例
#FtdcInstStatusEnterReasonType是一个品种进入交易状态原因类型
THOST_FTDC_IER_Fuse = '3' #熔断
THOST_FTDC_IER_Automatic = '1' #自动切换
THOST_FTDC_IER_Manual = '2' #手动切换
#FtdcReturnLevelType是一个返还级别类型
THOST_FTDC_RL_Level2 = '2' #级别2
THOST_FTDC_RL_Level3 = '3' #级别3
THOST_FTDC_RL_Level1 = '1' #级别1
THOST_FTDC_RL_Level6 = '6' #级别6
THOST_FTDC_RL_Level7 = '7' #级别7
THOST_FTDC_RL_Level4 = '4' #级别4
THOST_FTDC_RL_Level5 = '5' #级别5
THOST_FTDC_RL_Level8 = '8' #级别8
THOST_FTDC_RL_Level9 = '9' #级别9
#FtdcPublishStatusType是一个发布状态类型
THOST_FTDC_PS_Publishing = '2' #正在发布
THOST_FTDC_PS_None = '1' #未发布
THOST_FTDC_PS_Published = '3' #已发布
#FtdcSystemTypeType是一个应用系统类型类型
THOST_FTDC_SYT_TheThirdPartStore = '2' #第三方存管
THOST_FTDC_SYT_StockBankTransfer = '1' #银证转帐
THOST_FTDC_SYT_FutureBankTransfer = '0' #银期转帐
#FtdcTransferStatusType是一个转账交易状态类型
THOST_FTDC_TRFS_Normal = '0' #正常
THOST_FTDC_TRFS_Repealed = '1' #被冲正
#FtdcBanlanceTypeType是一个余额类型类型
THOST_FTDC_BLT_CurrentMoney = '0' #当前余额
THOST_FTDC_BLT_UsableMoney = '1' #可用余额
THOST_FTDC_BLT_FetchableMoney = '2' #可取余额
THOST_FTDC_BLT_FreezeMoney = '3' #冻结余额
#FtdcSettleManagerTypeType是一个结算配置类型类型
THOST_FTDC_SMT_Settlement = '2' #结算
THOST_FTDC_SMT_After = '3' #结算后核对
THOST_FTDC_SMT_Before = '1' #结算前准备
THOST_FTDC_SMT_Settlemented = '4' #结算完成
#FtdcFileGenStyleType是一个文件生成方式类型
THOST_FTDC_FGS_FileGen = '1' #生成
THOST_FTDC_FGS_FileTransmit = '0' #下发
#FtdcSystemParamIDType是一个系统参数代码类型
THOST_FTDC_SPI_UserRightLogon = '3' #投资者开户默认登录权限
THOST_FTDC_SPI_InvestorPhoto = 'P' #投资者照片路径
THOST_FTDC_SPI_CFFEXInvestorSettleFile = 'F' #投资者中金所结算文件下载路径
THOST_FTDC_SPI_SettlementBillTrade = '4' #投资者交易结算单成交汇总方式
THOST_FTDC_SPI_InvestorPwdModel = 'I' #开户密码录入方式
THOST_FTDC_SPI_InvestorIDMinLength = '1' #投资者代码最小长度
THOST_FTDC_SPI_CheckFund = '6' #结算是否判断存在未复核的出入金和分项资金
THOST_FTDC_SPI_DownloadCSRCFile = 'D' #上报保证金监控中心文件路径
THOST_FTDC_SPI_UploadSettlementFile = 'U' #上传的交易所结算文件路径
THOST_FTDC_SPI_InvestorIDType = 'a' #投资者代码编码方式
THOST_FTDC_SPI_AccountIDMinLength = '2' #投资者帐号代码最小长度
THOST_FTDC_SPI_CSRCData = 'R' #全结经纪公司上传文件路径
THOST_FTDC_SPI_IsStandardActive = '8' #是否规范用户才能激活
THOST_FTDC_SPI_SettlementBillFile = 'S' #生成的结算单文件路径
THOST_FTDC_SPI_TradingCode = '5' #统一开户更新交易编码方式
THOST_FTDC_SPI_CommModelRight = '7' #是否启用手续费模板数据权限
THOST_FTDC_SPI_CSRCOthersFile = 'C' #证监会文件标识
#FtdcConditionalOrderSortTypeType是一个条件单索引条件类型
THOST_FTDC_COST_BidPriceDesc = '5' #使用买价降序
THOST_FTDC_COST_LastPriceDesc = '1' #使用最新价降序
THOST_FTDC_COST_LastPriceAsc = '0' #使用最新价升序
THOST_FTDC_COST_AskPriceDesc = '3' #使用卖价降序
THOST_FTDC_COST_AskPriceAsc = '2' #使用卖价升序
THOST_FTDC_COST_BidPriceAsc = '4' #使用买价升序
#FtdcLinkStatusType是一个连接状态类型
THOST_FTDC_LS_Disconnected = '2' #没有连接
THOST_FTDC_LS_Connected = '1' #已经连接
#FtdcCfmmcReturnCodeType是一个监控中心返回码类型
THOST_FTDC_CRC_OtherFail = '4' #其他错误
THOST_FTDC_CRC_Working = '1' #该客户已经有流程在处理中
THOST_FTDC_CRC_Success = '0' #成功
THOST_FTDC_CRC_IDCardFail = '3' #监控中实名制检查失败
THOST_FTDC_CRC_InfoFail = '2' #监控中客户资料检查失败
#TKSOffsetType///生成止损止盈价的方式类型
KSPL_OffsetValue_TradePrice = '1' #开仓成交价的相对偏移值
KSPL_OffsetValue_TermPrice = '0' #指定值
#FtdcDeliveryModeType是一个交割方式类型
THOST_FTDC_DM_CashDeliv = '1' #现金交割
THOST_FTDC_DM_CommodityDeliv = '2' #实物交割
#FtdcNotifyClassType是一个风险通知类型类型
THOST_FTDC_NC_Call = '2' #追保
THOST_FTDC_NC_CHUANCANG = '4' #穿仓
THOST_FTDC_NC_Exception = '5' #异常
THOST_FTDC_NC_NOERROR = '0' #正常
THOST_FTDC_NC_Warn = '1' #警示
THOST_FTDC_NC_Force = '3' #强平
#FtdcClientTypeType是一个客户类型类型
THOST_FTDC_CfMMCCT_Person = '1' #个人
THOST_FTDC_CfMMCCT_All = '0' #所有
THOST_FTDC_CfMMCCT_Company = '2' #单位
#FtdcAMLCheckStatusType是一个审核状态类型
THOST_FTDC_AMLCHS_RefuseReport = '3' #拒绝上报
THOST_FTDC_AMLCHS_Init = '0' #未复核
THOST_FTDC_AMLCHS_Checked = '2' #已复核
THOST_FTDC_AMLCHS_Checking = '1' #复核中
#FtdcVirementStatusType是一个银行帐户类型类型
THOST_FTDC_VMS_Natural = '0' #正常
THOST_FTDC_VMS_Canceled = '9' #销户
#FtdcTraderConnectStatusType是一个交易所交易员连接状态类型
THOST_FTDC_TCS_NotConnected = '1' #没有任何连接
THOST_FTDC_TCS_SubPrivateFlow = '4' #订阅私有流
THOST_FTDC_TCS_QryInstrumentSent = '3' #已经发出合约查询请求
THOST_FTDC_TCS_Connected = '2' #已经连接
#FtdcProductClassType是一个产品类型类型
THOST_FTDC_PC_Futures = '1' #期货
THOST_FTDC_PC_Combination = '3' #组合
THOST_FTDC_PC_Options = '2' #期权
THOST_FTDC_PC_EFP = '5' #期转现
THOST_FTDC_PC_Spot = '4' #即期
#FtdcOrderSourceType是一个报单来源类型
THOST_FTDC_OSRC_Participant = '0' #来自参与者
THOST_FTDC_OSRC_Administrator = '1' #来自管理员
#FtdcSyncDataStatusType是一个主次用系统数据同步状态类型
THOST_FTDC_SDS_Initialize = '0' #未同步
THOST_FTDC_SDS_Settlementing = '1' #同步中
THOST_FTDC_SDS_Settlemented = '2' #已同步
#FtdcTradeSumStatModeType是一个交易统计表按范围统计方式类型
THOST_FTDC_TSSM_Exchange = '3' #按交易所统计
THOST_FTDC_TSSM_Instrument = '1' #按合约统计
THOST_FTDC_TSSM_Product = '2' #按产品统计
#FtdcVirDealStatusType是一个处理状态类型
THOST_FTDC_VDS_Dealing = '1' #正在处理
THOST_FTDC_VDS_DeaclSucceed = '2' #处理成功
#FtdcFileBusinessCodeType是一个文件业务功能类型
THOST_FTDC_FBC_TransferDetails = '1' #转账交易明细对账
THOST_FTDC_FBC_FutureAccountChangeInfoDetails = '4' #期货账户信息变更明细对账
THOST_FTDC_FBC_CustMoneyDetail = '5' #客户资金台账余额明细对账
THOST_FTDC_FBC_MainPartMonitorData = 'd' #总分平衡监管数据
THOST_FTDC_FBC_CustAccStatus = '2' #客户账户状态对账
THOST_FTDC_FBC_PreparationMoney = 'e' #存管银行备付金余额
THOST_FTDC_FBC_CustMoneySendAndReceiveDetails = 'a' #客户资金交收明细
THOST_FTDC_FBC_MainbodyMoneyTotal = 'c' #主体间资金交收汇总
THOST_FTDC_FBC_BankMoneyMonitorData = 'f' #协办存管银行资金监管数据
THOST_FTDC_FBC_AccountTradeDetails = '3' #账户类交易明细对账
THOST_FTDC_FBC_CustInterestNetMoneyDetails = '9' #客户结息净额明细
THOST_FTDC_FBC_OthersExceptionResult = '8' #其它对账异常结果文件
THOST_FTDC_FBC_Others = '0' #其他
THOST_FTDC_FBC_CorporationMoneyTotal = 'b' #法人存管银行资金交收汇总
THOST_FTDC_FBC_CustMoneyResult = '7' #客户资金余额对账结果
THOST_FTDC_FBC_CustCancelAccountInfo = '6' #客户销户结息明细对账
#FtdcConnectModeType是一个套接字连接方式类型
THOST_FTDC_CM_ShortConnect = '0' #短连接
THOST_FTDC_CM_LongConnect = '1' #长连接
#FtdcLastFragmentType是一个最后分片标志类型
THOST_FTDC_LF_No = '1' #不是最后分片
THOST_FTDC_LF_Yes = '0' #是最后分片
#FtdcVirementAvailAbilityType是一个有效标志类型
THOST_FTDC_VAA_Repeal = '2' #冲正
THOST_FTDC_VAA_AvailAbility = '1' #有效
THOST_FTDC_VAA_NoAvailAbility = '0' #未确认
#FtdcFileStatusType是一个文件状态类型
THOST_FTDC_FIS_NoCreate = '0' #未生成
THOST_FTDC_FIS_Created = '1' #已生成
THOST_FTDC_FIS_Failed = '2' #生成失败
#FtdcUserEventTypeType是一个用户事件类型类型
THOST_FTDC_UET_Authenticate = '6' #客户端认证
THOST_FTDC_UET_Login = '1' #登录
THOST_FTDC_UET_TradingError = '4' #交易失败
THOST_FTDC_UET_UpdatePassword = '5' #修改密码
THOST_FTDC_UET_Other = '9' #其他
THOST_FTDC_UET_Trading = '3' #交易成功
THOST_FTDC_UET_Logout = '2' #登出
#FtdcStatModeType是一个统计方式类型
THOST_FTDC_SM_Investor = '3' #按投资者统计
THOST_FTDC_SM_Instrument = '1' #按合约统计
THOST_FTDC_SM_Product = '2' #按产品统计
THOST_FTDC_SM_Non = '0' #----
#FtdcInvestorRiskStatusType是一个投资者风险状态类型
THOST_FTDC_IRS_Exception = '5' #异常
THOST_FTDC_IRS_Call = '3' #追保
THOST_FTDC_IRS_Normal = '1' #正常
THOST_FTDC_IRS_Force = '4' #强平
THOST_FTDC_IRS_Warn = '2' #警告
#FtdcCCBFeeModeType是一个建行收费模式类型
THOST_FTDC_CCBFM_ByAmount = '1' #按金额扣收
THOST_FTDC_CCBFM_ByMonth = '2' #按月扣收
#FtdcOrganStatusType是一个接入机构状态类型
THOST_FTDC_OS_Invalid = '9' #注销
THOST_FTDC_OS_DayEndClean = '5' #日终清理
THOST_FTDC_OS_Ready = '0' #启用
THOST_FTDC_OS_CheckOut = '2' #签退
THOST_FTDC_OS_CheckIn = '1' #签到
THOST_FTDC_OS_CheckDetail = '4' #对帐
THOST_FTDC_OS_CheckFileArrived = '3' #对帐文件到达
#FtdcTradingRightType是一个交易权限类型
THOST_FTDC_TR_Allow = '0' #可以交易
THOST_FTDC_TR_Forbidden = '2' #不能交易
THOST_FTDC_TR_CloseOnly = '1' #只能平仓
#FtdcAllWithoutTradeType是一个是否受可提比例限制类型
THOST_FTDC_AWT_Enable = '0' #不受可提比例限制
THOST_FTDC_AWT_Disable = '2' #受可提比例限制
#FtdcNoteTypeType是一个通知类型类型
THOST_FTDC_NOTETYPE_TradeSettleMonth = '2' #交易结算月报
THOST_FTDC_NOTETYPE_ForceCloseNotes = '4' #强行平仓通知书
THOST_FTDC_NOTETYPE_CallMarginNotes = '3' #追加保证金通知书
THOST_FTDC_NOTETYPE_TradeSettleBill = '1' #交易结算单
THOST_FTDC_NOTETYPE_TradeNotes = '5' #成交通知书
THOST_FTDC_NOTETYPE_DelivNotes = '6' #交割通知书
#FtdcPositionDateTypeType是一个持仓日期类型类型
THOST_FTDC_PDT_UseHistory = '1' #使用历史持仓
THOST_FTDC_PDT_NoUseHistory = '2' #不使用历史持仓
#FtdcStandardStatusType是一个规范状态类型
THOST_FTDC_STST_Standard = '0' #已规范
THOST_FTDC_STST_NonStandard = '1' #未规范
#FtdcTradeSourceType是一个成交来源类型
THOST_FTDC_TSRC_NORMAL = '0' #来自交易所普通回报
THOST_FTDC_TSRC_QUERY = '1' #来自查询
#FtdcFBTPassWordTypeType是一个密码类型类型
THOST_FTDC_PWT_Transfer = '2' #转帐
THOST_FTDC_PWT_Trade = '3' #交易
THOST_FTDC_PWT_Query = '0' #查询
THOST_FTDC_PWT_Fetch = '1' #取款
#FtdcGenderType是一个性别类型
THOST_FTDC_GD_Unknown = '0' #未知状态
THOST_FTDC_GD_Female = '2' #女
THOST_FTDC_GD_Male = '1' #男
#TKSConditionalOrderSelectResultType///选择结果
KSCOS_Select_ABORT = '2' #终止
KSCOS_Select_AGAIN = '0' #重试
KSCOS_Select_SKIP = '1' #跳过
#FtdcContingentConditionType是一个触发条件类型
THOST_FTDC_CC_BidPriceGreaterThanStopPrice = 'D' #买一价大于条件价
THOST_FTDC_CC_AskPriceLesserEqualStopPrice = 'C' #卖一价小于等于条件价
THOST_FTDC_CC_AskPriceGreaterThanStopPrice = '9' #卖一价大于条件价
THOST_FTDC_CC_LastPriceLesserThanStopPrice = '7' #最新价小于条件价
THOST_FTDC_CC_LastPriceGreaterEqualStopPrice = '6' #最新价大于等于条件价
THOST_FTDC_CC_BidPriceGreaterEqualStopPrice = 'E' #买一价大于等于条件价
THOST_FTDC_CC_LastPriceLesserEqualStopPrice = '8' #最新价小于等于条件价
THOST_FTDC_CC_TouchProfit = '3' #止赢
THOST_FTDC_CC_ParkedOrder = '4' #预埋单
THOST_FTDC_CC_AskPriceGreaterEqualStopPrice = 'A' #卖一价大于等于条件价
THOST_FTDC_CC_BidPriceLesserEqualStopPrice = 'H' #买一价小于等于条件价
THOST_FTDC_CC_LastPriceGreaterThanStopPrice = '5' #最新价大于条件价
THOST_FTDC_CC_BidPriceLesserThanStopPrice = 'F' #买一价小于条件价
THOST_FTDC_CC_AskPriceLesserThanStopPrice = 'B' #卖一价小于条件价
THOST_FTDC_CC_Immediately = '1' #立即
THOST_FTDC_CC_Touch = '2' #止损
#FtdcFileFormatType是一个文件格式类型
THOST_FTDC_FFT_Txt = '0' #文本文件(.txt)
THOST_FTDC_FFT_DBF = '2' #DBF文件(.dbf)
THOST_FTDC_FFT_Zip = '1' #压缩文件(.zip)
#FtdcInstLifePhaseType是一个合约生命周期状态类型
THOST_FTDC_IP_NotStart = '0' #未上市
THOST_FTDC_IP_Expired = '3' #到期
THOST_FTDC_IP_Pause = '2' #停牌
THOST_FTDC_IP_Started = '1' #上市
#FtdcFundStatusType是一个资金状态类型
THOST_FTDC_FS_Check = '2' #已复核
THOST_FTDC_FS_Charge = '3' #已冲销
THOST_FTDC_FS_Record = '1' #已录入
#FtdcAlgoTypeType是一个算法类型类型
THOST_FTDC_AT_HandlePositionAlgo = '1' #持仓处理算法
THOST_FTDC_AT_FindMarginRateAlgo = '2' #寻找保证金率算法
#FtdcHandlePositionAlgoIDType是一个持仓处理算法编号类型
THOST_FTDC_HPA_Base = '1' #基本
THOST_FTDC_HPA_CZCE = '3' #郑州商品交易所
THOST_FTDC_HPA_DCE = '2' #大连商品交易所
#FtdcForceCloseTypeType是一个强平单类型类型
THOST_FTDC_FCT_Single = '1' #单一投资者辅助强平
THOST_FTDC_FCT_Group = '2' #批量投资者辅助强平
THOST_FTDC_FCT_Manual = '0' #手工强平
#FtdcDataSyncStatusType是一个数据同步状态类型
THOST_FTDC_DS_Synchronized = '3' #已同步
THOST_FTDC_DS_Asynchronous = '1' #未同步
THOST_FTDC_DS_Synchronizing = '2' #同步中
#FtdcFBTEncryModeType是一个加密方式类型
THOST_FTDC_EM_NoEncry = '0' #不加密
THOST_FTDC_EM_3DES = '2' #3DES
THOST_FTDC_EM_DES = '1' #DES
#FtdcBrokerDataSyncStatusType是一个经纪公司数据同步状态类型
THOST_FTDC_BDS_Synchronizing = '2' #同步中
THOST_FTDC_BDS_Synchronized = '1' #已同步
#FtdcMarginPriceTypeType是一个保证金价格类型类型
THOST_FTDC_MPT_OpenPrice = '4' #开仓价
THOST_FTDC_MPT_PreSettlementPrice = '1' #昨结算价
THOST_FTDC_MPT_AveragePrice = '3' #成交均价
THOST_FTDC_MPT_SettlementPrice = '2' #最新价
#FtdcCheckStatusType是一个复核级别类型
THOST_FTDC_CHS_Init = '0' #未复核
THOST_FTDC_CHS_Checking = '1' #复核中
THOST_FTDC_CHS_Refuse = '3' #拒绝
THOST_FTDC_CHS_Cancel = '4' #作废
THOST_FTDC_CHS_Checked = '2' #已复核
#FtdcOrderPriceTypeType是一个报单价格条件类型
THOST_FTDC_OPT_AskPrice1PlusTwoTicks = 'A' #卖一价浮动上浮2个ticks
THOST_FTDC_OPT_LastPricePlusTwoTicks = '6' #最新价浮动上浮2个ticks
THOST_FTDC_OPT_AskPrice1PlusOneTicks = '9' #卖一价浮动上浮1个ticks
THOST_FTDC_OPT_BidPrice1 = 'C' #买一价
THOST_FTDC_OPT_LimitPrice = '2' #限价
THOST_FTDC_OPT_LastPricePlusOneTicks = '5' #最新价浮动上浮1个ticks
THOST_FTDC_OPT_LastPrice = '4' #最新价
THOST_FTDC_OPT_AskPrice1 = '8' #卖一价
THOST_FTDC_OPT_AskPrice1PlusThreeTicks = 'B' #卖一价浮动上浮3个ticks
THOST_FTDC_OPT_AnyPrice = '1' #任意价
THOST_FTDC_OPT_BestPrice = '3' #最优价
THOST_FTDC_OPT_LastPricePlusThreeTicks = '7' #最新价浮动上浮3个ticks
THOST_FTDC_OPT_BidPrice1PlusOneTicks = 'D' #买一价浮动上浮1个ticks
THOST_FTDC_OPT_BidPrice1PlusTwoTicks = 'E' #买一价浮动上浮2个ticks
THOST_FTDC_OPT_BidPrice1PlusThreeTicks = 'F' #买一价浮动上浮3个ticks
#FtdcFundEventTypeType是一个资金管理操作类型类型
THOST_FTDC_FET_InvestorWithdrawAlm = '4' #投资者可提资金比例
THOST_FTDC_FET_TodayRestriction = '1' #当日转账限额
THOST_FTDC_FET_Credit = '3' #资金冻结
THOST_FTDC_FET_Transfer = '2' #期商流水
THOST_FTDC_FET_InvestorFundIO = '8' #投资者出入金
THOST_FTDC_FET_ExchangeFundIO = '7' #交易所出入金
THOST_FTDC_FET_Restriction = '0' #转账限额
THOST_FTDC_FET_BankRestriction = '5' #单个银行帐户转账限额
THOST_FTDC_FET_Accountregister = '6' #银期签约账户
#FtdcIncludeCloseProfitType是一个是否包含平仓盈利类型
THOST_FTDC_ICP_NotInclude = '2' #不包含平仓盈利
THOST_FTDC_ICP_Include = '0' #包含平仓盈利
#FtdcExchangeIDTypeType是一个交易所编号类型
THOST_FTDC_EIDT_CFFEX = 'J' #中国金融期货交易所
THOST_FTDC_EIDT_DCE = 'D' #大连商品交易所
THOST_FTDC_EIDT_SHFE = 'S' #上海期货交易所
THOST_FTDC_EIDT_CZCE = 'Z' #郑州商品交易所
#FtdcTxnEndFlagType是一个银期转帐划转结果标志类型
THOST_FTDC_TEF_Success = '1' #成功结束
THOST_FTDC_TEF_Failed = '2' #失败结束
THOST_FTDC_TEF_CommuFailedNeedManualProcess = '5' #通讯异常 ，请人工处理
THOST_FTDC_TEF_Abnormal = '3' #异常中
THOST_FTDC_TEF_ManualProcessedForException = '4' #已人工异常处理
THOST_FTDC_TEF_NormalProcessing = '0' #正常处理中
THOST_FTDC_TEF_SysErrorNeedManualProcess = '6' #系统出错，请人工处理
#FtdcSendMethodType是一个发送方式类型
THOST_FTDC_UOASM_ByFile = '2' #电子发送
THOST_FTDC_UOASM_ByAPI = '1' #文件发送
#FtdcTransferTypeType是一个银期转账类型类型
THOST_FTDC_TT_BankToFuture = '0' #银行转期货
THOST_FTDC_TT_FutureToBank = '1' #期货转银行
#FtdcIdCardTypeType是一个证件类型类型
THOST_FTDC_ICT_LicenseNo = '9' #营业执照号
THOST_FTDC_ICT_TaxNo = 'A' #税务登记号
THOST_FTDC_ICT_OfficerIDCard = '2' #军官证
THOST_FTDC_ICT_IDCard = '1' #身份证
THOST_FTDC_ICT_TaiwanCompatriotIDCard = '7' #台胞证
THOST_FTDC_ICT_OtherCard = 'x' #其他证件
THOST_FTDC_ICT_PoliceIDCard = '3' #警官证
THOST_FTDC_ICT_Passport = '6' #护照
THOST_FTDC_ICT_EID = '0' #组织机构代码
THOST_FTDC_ICT_HomeComingCard = '8' #回乡证
THOST_FTDC_ICT_HouseholdRegister = '5' #户口簿
THOST_FTDC_ICT_SoldierIDCard = '4' #士兵证
#FtdcAMLGenStatusType是一个Aml生成方式类型
THOST_FTDC_GEN_Program = '0' #程序生成
THOST_FTDC_GEN_HandWork = '1' #人工生成
#FtdcRiskLevelType是一个风险等级类型
THOST_FTDC_FAS_Normal = '2' #普通客户
THOST_FTDC_FAS_Risk = '4' #风险客户
THOST_FTDC_FAS_Focus = '3' #关注客户
THOST_FTDC_FAS_Low = '1' #低风险客户
#FtdcInstrumentStatusType是一个合约交易状态类型
THOST_FTDC_IS_Continous = '2' #连续交易
THOST_FTDC_IS_AuctionMatch = '5' #集合竞价撮合
THOST_FTDC_IS_BeforeTrading = '0' #开盘前
THOST_FTDC_IS_Closed = '6' #收盘
THOST_FTDC_IS_AuctionOrdering = '3' #集合竞价报单
THOST_FTDC_IS_AuctionBalance = '4' #集合竞价价格平衡
THOST_FTDC_IS_NoTrading = '1' #非交易
#FtdcSettlementBillTypeType是一个结算单类型类型
THOST_FTDC_ST_Day = '0' #日报
THOST_FTDC_ST_Month = '1' #月报
#FtdcOrganLevelType是一个机构级别类型
THOST_FTDC_OL_Branch = '2' #银行分中心或期货公司营业部
THOST_FTDC_OL_HeadQuarters = '1' #银行总行或期商总部
#FtdcInstitutionTypeType是一个机构类别类型
THOST_FTDC_TS_Future = '1' #期商
THOST_FTDC_TS_Bank = '0' #银行
THOST_FTDC_TS_Store = '2' #券商
#FtdcSecuAccTypeType是一个期货帐号类型类型
THOST_FTDC_SAT_CardID = '2' #资金卡号
THOST_FTDC_SAT_SZStockholderID = '4' #深圳股东帐号
THOST_FTDC_SAT_AccountID = '1' #资金帐号
THOST_FTDC_SAT_SHStockholderID = '3' #上海股东帐号
#FtdcYesNoIndicatorType是一个是或否标识类型
THOST_FTDC_YNI_No = '1' #否
THOST_FTDC_YNI_Yes = '0' #是
#FtdcDirectionType是一个买卖方向类型
THOST_FTDC_D_Buy = '0' #买
THOST_FTDC_D_Sell = '1' #卖
#FtdcByInvestorRangeType是一个投资者范围统计方式类型
THOST_FTDC_BIR_All = '2' #统计所有
THOST_FTDC_BIR_Property = '1' #属性统计
#FtdcPassWordKeyTypeType是一个密钥类型类型
THOST_FTDC_PWKT_MessageKey = '3' #报文密钥
THOST_FTDC_PWKT_ExchangeKey = '0' #交换密钥
THOST_FTDC_PWKT_MACKey = '2' #MAC密钥
THOST_FTDC_PWKT_PassWordKey = '1' #密码密钥
#FtdcExchangePropertyType是一个交易所属性类型
THOST_FTDC_EXP_GenOrderByTrade = '1' #根据成交生成报单
THOST_FTDC_EXP_Normal = '0' #正常
#FtdcUserRightTypeType是一个客户权限类型类型
THOST_FTDC_URT_EMail = '3' #邮寄结算单
THOST_FTDC_URT_Logon = '1' #登录
THOST_FTDC_URT_Transfer = '2' #银期转帐
THOST_FTDC_URT_Fax = '4' #传真结算单
THOST_FTDC_URT_ConditionOrder = '5' #条件单
#FtdcBusinessTypeType是一个业务类型类型
THOST_FTDC_BT_Notice = '3' #通知
THOST_FTDC_BT_Response = '2' #应答
THOST_FTDC_BT_Request = '1' #请求
#FtdcTradeParamIDType是一个交易系统参数代码类型
THOST_FTDC_TPID_RiskModeGlobal = 'G' #系统风险算法是否全局 0-否 1-是
THOST_FTDC_TPID_EncryptionStandard = 'E' #系统加密算法
THOST_FTDC_TPID_RiskMode = 'R' #系统风险算法
#FtdcReturnPatternType是一个返还模式类型
THOST_FTDC_RP_ByFeeOnHand = '2' #按留存手续费
THOST_FTDC_RP_ByVolume = '1' #按成交手数
#FtdcFBTTransferDirectionType是一个银期转帐方向类型
THOST_FTDC_FBTTD_FromBankToFuture = '1' #入金，银行转期货
THOST_FTDC_FBTTD_FromFutureToBank = '2' #出金，期货转银行
#FtdcFlexStatModeType是一个产品合约统计方式类型
THOST_FTDC_FSM_Product = '1' #产品统计
THOST_FTDC_FSM_Exchange = '2' #交易所统计
THOST_FTDC_FSM_All = '3' #统计所有
#FtdcTransferDirectionType是一个移仓方向类型
THOST_FTDC_TD_Out = '0' #移出
THOST_FTDC_TD_In = '1' #移入
#FtdcBillHedgeFlagType是一个投机套保标志类型
THOST_FTDC_BHF_Hedge = '3' #套保
THOST_FTDC_BHF_Speculation = '1' #投机
THOST_FTDC_BHF_Arbitrage = '2' #套利
#FtdcFBTTradeCodeEnumType是一个银期交易代码枚举类型
THOST_FTDC_FTC_BrokerLaunchBankToBroker = '202001' #期货发起银行转期货
THOST_FTDC_FTC_BrokerLaunchBrokerToBank = '202002' #期货发起期货转银行
THOST_FTDC_FTC_BankLaunchBrokerToBank = '102002' #银行发起期货转银行
THOST_FTDC_FTC_BankLaunchBankToBroker = '102001' #银行发起银行转期货
#FtdcFreezeStatusType是一个休眠状态类型
THOST_FTDC_FRS_Normal = '1' #活跃
THOST_FTDC_FRS_Freeze = '0' #休眠
#FtdcProcessTypeType是一个流程功能类型类型
THOST_FTDC_PT_ModifyIDCard = '3' #修改身份信息
THOST_FTDC_PT_ExchCancelBak = '6' #交易所销户报备
THOST_FTDC_PT_StandardAccount = '7' #补报规范资料
THOST_FTDC_PT_ExchOpenBak = '5' #交易所开户报备
THOST_FTDC_PT_ActiveFreezeAccount = '9' #激活休眠账户
THOST_FTDC_PT_CancelTradingCode = '2' #撤销交易编码
THOST_FTDC_PT_ModifyNoIDCard = '4' #修改一般信息
THOST_FTDC_PT_ApplyTradingCode = '1' #申请交易编码
THOST_FTDC_PT_FreezeAccount = '8' #账户休眠
#FtdcPositionTypeType是一个持仓类型类型
THOST_FTDC_PT_Net = '1' #净持仓
THOST_FTDC_PT_Gross = '2' #综合持仓
#FtdcOffsetFlagType是一个开平标志类型
THOST_FTDC_OF_CloseToday = '3' #平今
THOST_FTDC_OF_ForceOff = '5' #强减
THOST_FTDC_OF_LocalForceClose = '6' #本地强平
THOST_FTDC_OF_Close = '1' #平仓
THOST_FTDC_OF_Open = '0' #开仓
THOST_FTDC_OF_CloseYesterday = '4' #平昨
THOST_FTDC_OF_ForceClose = '2' #强平
#FtdcUsedStatusType是一个生效状态类型
THOST_FTDC_CHU_Fail = '2' #生效失败
THOST_FTDC_CHU_Unused = '0' #未生效
THOST_FTDC_CHU_Used = '1' #已生效
#FtdcProcessStatusType是一个银期转帐服务处理状态类型
THOST_FTDC_PSS_Finished = '2' #处理完成
THOST_FTDC_PSS_NotProcess = '0' #未处理
THOST_FTDC_PSS_StartProcess = '1' #开始处理
#FtdcFeeAcceptStyleType是一个手续费收取方式类型
THOST_FTDC_FAS_FixFee = '4' #按指定手续费收取
THOST_FTDC_FAS_ByDeliv = '2' #按交割收取
THOST_FTDC_FAS_None = '3' #不收
THOST_FTDC_FAS_ByTrade = '1' #按交易收取
#FtdcPosiDirectionType是一个持仓多空方向类型
THOST_FTDC_PD_Net = '1' #净
THOST_FTDC_PD_Short = '3' #空头
THOST_FTDC_PD_Long = '2' #多头
#FtdcBankFlagType是一个银行统一标识类型类型
THOST_FTDC_BF_CBC = '4' #建设银行
THOST_FTDC_BF_ABC = '2' #农业银行
THOST_FTDC_BF_BOC = '5' #交通银行
THOST_FTDC_BF_BC = '3' #中国银行
THOST_FTDC_BF_ICBC = '1' #工商银行
THOST_FTDC_BF_Other = 'Z' #其他银行
#FtdcFileIDType是一个文件标识类型
THOST_FTDC_FI_SubEntryFund = 'O' #投资者分项资金数据
THOST_FTDC_FI_InvestorPosition = 'P' #投资者持仓数据
THOST_FTDC_FI_CSRCData = 'R' #上报保证金监控中心数据
THOST_FTDC_FI_CZCECombinationPos = 'C' #郑商所组合持仓数据
THOST_FTDC_FI_SettlementFund = 'F' #资金数据
THOST_FTDC_FI_Trade = 'T' #成交数据
#FtdcVirTradeStatusType是一个交易状态类型
THOST_FTDC_VTS_SucceedEnd = '1' #成功结束
THOST_FTDC_VTS_NaturalDeal = '0' #正常处理中
THOST_FTDC_VTS_Exception = '3' #异常中
THOST_FTDC_VTS_FailedEND = '2' #失败结束
THOST_FTDC_VTS_SysException = '6' #系统出错，请人工处理
THOST_FTDC_VTS_MesException = '5' #通讯异常 ，请人工处理
THOST_FTDC_VTS_ManualDeal = '4' #已人工异常处理
#FtdcExchangeConnectStatusType是一个交易所连接状态类型
THOST_FTDC_ECS_GotInformation = '9' #已经获取信息
THOST_FTDC_ECS_QryInstrumentSent = '2' #已经发出合约查询请求
THOST_FTDC_ECS_NoConnection = '1' #没有任何连接
#FtdcSysSettlementStatusType是一个系统结算状态类型
THOST_FTDC_SS_NonActive = '1' #不活跃
THOST_FTDC_SS_Settlement = '4' #结算
THOST_FTDC_SS_Operating = '3' #操作
THOST_FTDC_SS_Startup = '2' #启动
THOST_FTDC_SS_SettlementFinished = '5' #结算完成
#FtdcInvestorTypeType是一个投资者类型类型
THOST_FTDC_CT_Company = '1' #法人
THOST_FTDC_CT_Fund = '2' #投资基金
THOST_FTDC_CT_Person = '0' #自然人
#FtdcReturnStyleType是一个按品种返还方式类型
THOST_FTDC_RS_ByProduct = '2' #按品种
THOST_FTDC_RS_All = '1' #按所有品种
#FtdcUpdateFlagType是一个更新状态类型
THOST_FTDC_UF_TCSuccess = '3' #更新交易编码成功
THOST_FTDC_UF_Fail = '2' #更新全部信息失败
THOST_FTDC_UF_TCFail = '4' #更新交易编码失败
THOST_FTDC_UF_Cancel = '5' #已丢弃
THOST_FTDC_UF_NoUpdate = '0' #未更新
THOST_FTDC_UF_Success = '1' #更新全部信息成功
#FtdcByGroupType是一个交易统计表按客户统计方式类型
THOST_FTDC_BG_Group = '1' #按类统计
THOST_FTDC_BG_Investor = '2' #按投资者统计
#FtdcOpenOrDestroyType是一个开销户类别类型
THOST_FTDC_OOD_Destroy = '0' #销户
THOST_FTDC_OOD_Open = '1' #开户
#FtdcSettleManagerLevelType是一个结算配置等级类型
THOST_FTDC_SML_Must = '1' #必要
THOST_FTDC_SML_Alarm = '2' #警告
THOST_FTDC_SML_Ignore = '4' #不检查
THOST_FTDC_SML_Prompt = '3' #提示
#FtdcCustTypeType是一个客户类型类型
THOST_FTDC_CUSTT_Institution = '1' #机构户
THOST_FTDC_CUSTT_Person = '0' #自然人
#FtdcBasisPriceTypeType是一个挂牌基准价类型类型
THOST_FTDC_IPT_LaseClose = '2' #上一合约收盘价
THOST_FTDC_IPT_LastSettlement = '1' #上一合约结算价
#FtdcCheckLevelType是一个复核级别类型
THOST_FTDC_CL_Two = '2' #二级复核
THOST_FTDC_CL_One = '1' #一级复核
THOST_FTDC_CL_Zero = '0' #零级复核
#FtdcExportFileTypeType是一个导出文件类型类型
THOST_FTDC_EFT_DBF = '2' #DBF
THOST_FTDC_EFT_CSV = '0' #CSV
THOST_FTDC_EFT_EXCEL = '1' #Excel
#FtdcRightParamTypeType是一个配置类型类型
THOST_FTDC_RPT_Freeze = '1' #休眠户
THOST_FTDC_RPT_FreezeActive = '2' #激活休眠户
#FtdcBrokerTypeType是一个经纪公司类型类型
THOST_FTDC_BT_Trade = '0' #交易会员
THOST_FTDC_BT_TradeSettle = '1' #交易结算会员
#FtdcOrderTypeType是一个报单类型类型
THOST_FTDC_ORDT_Combination = '3' #组合报单
THOST_FTDC_ORDT_Normal = '0' #正常
THOST_FTDC_ORDT_DeriveFromCombination = '2' #组合衍生
THOST_FTDC_ORDT_DeriveFromQuote = '1' #报价衍生
THOST_FTDC_ORDT_Swap = '5' #互换单
THOST_FTDC_ORDT_ConditionalOrder = '4' #条件单
#TKSCloseModeType///平仓价格类型
KSPL_Close_SalePrice = '1' #加减买卖价
KSPL_Close_MarketPrice = '0' #市价
KSPL_Close_LastPrice = '2' #加减最新价
#FtdcCFMMCKeyKindType是一个动态密钥类别(保证金监管)类型
THOST_FTDC_CFMMCKK_MANUAL = 'M' #CFMMC手动更新
THOST_FTDC_CFMMCKK_REQUEST = 'R' #主动请求更新
THOST_FTDC_CFMMCKK_AUTO = 'A' #CFMMC自动更新
#FtdcBankAcountOriginType是一个账户来源类型
THOST_FTDC_BAO_ByFBTransfer = '1' #银期转账
THOST_FTDC_BAO_ByAccProperty = '0' #手工录入
#FtdcAvailabilityFlagType是一个有效标志类型
THOST_FTDC_AVAF_Invalid = '0' #未确认
THOST_FTDC_AVAF_Valid = '1' #有效
THOST_FTDC_AVAF_Repeal = '2' #冲正
#FtdcLimitUseTypeType是一个保值额度使用类型类型
THOST_FTDC_LUT_Repeatable = '1' #可重复使用
THOST_FTDC_LUT_Unrepeatable = '2' #不可重复使用
#FtdcAmlDateTypeType是一个日期类型类型
THOST_FTDC_AMLDT_DrawDay = '0' #检查日期
THOST_FTDC_AMLDT_TouchDay = '1' #发生日期
#FtdcInvestorSettlementParamIDType是一个投资者结算参数代码类型
THOST_FTDC_ISPI_MortgageRatio = '4' #质押比例
THOST_FTDC_ISPI_BaseMargin = '1' #基础保证金
THOST_FTDC_ISPI_BillDeposit = '9' #结算单(盯市)权益等于结存
THOST_FTDC_ISPI_MarginWay = '5' #保证金算法
THOST_FTDC_ISPI_LowestInterest = '2' #最低权益标准
#FtdcSponsorTypeType是一个发起方类型
THOST_FTDC_SPTYPE_Bank = '1' #银行
THOST_FTDC_SPTYPE_Broker = '0' #期商
#FtdcBrokerFunctionCodeType是一个经纪公司功能代码类型
THOST_FTDC_BFC_TradeQry = 'c' #交易查询：如查成交，委托
THOST_FTDC_BFC_CfgRiskLevelStd = 'G' #风险级别标准设置
THOST_FTDC_BFC_QueryFund = 'k' #资金查询
THOST_FTDC_BFC_RiskPredict = 'y' #风险预算
THOST_FTDC_BFC_log = 'a' #系统功能：登入/登出/修改密码等
THOST_FTDC_BFC_BachSyncBrokerData = '4' #批量同步经纪公司数据
THOST_FTDC_BFC_QueryTrade = 'm' #成交查询
THOST_FTDC_BFC_OrderAction = '6' #报单操作
THOST_FTDC_BFC_SyncBrokerData = '3' #同步经纪公司数据
THOST_FTDC_BFC_RemainCalc = 'w' #权益反算
THOST_FTDC_BFC_UserPasswordUpdate = '2' #变更用户口令
THOST_FTDC_BFC_RiskTargetSetup = 'A' #风控指标设置
THOST_FTDC_BFC_QueryRiskNotify = 'q' #风险通知查询
THOST_FTDC_BFC_Trade = 'd' #交易功能：报单，撤单
THOST_FTDC_BFC_QueryMarketData = 'o' #行情查询
THOST_FTDC_BFC_PressTest = 'v' #压力测试
THOST_FTDC_BFC_QueryInvestor = 's' #投资者信息查询
THOST_FTDC_BFC_AllQuery = '7' #全部查询
THOST_FTDC_BFC_QueryOrder = 'l' #报单查询
THOST_FTDC_BFC_QueryUserEvent = 'p' #用户事件查询
THOST_FTDC_BFC_MarketDataWarn = 'B' #行情预警
THOST_FTDC_BFC_OrderInsert = '5' #报单插入
THOST_FTDC_BFC_BrokerDeposit = 'j' #察看经纪公司资金权限
THOST_FTDC_BFC_Virement = 'e' #银期转账
THOST_FTDC_BFC_CfgBizNotice = 'D' #业务通知模板设置
THOST_FTDC_BFC_BaseQry = 'b' #基本查询：查询基础数据，如合约，交易所等常量
THOST_FTDC_BFC_ForceClose = 'u' #强平
THOST_FTDC_BFC_RiskNotice = 'i' #风控通知发送
THOST_FTDC_BFC_NetPositionInd = 'x' #净持仓保证金指标
THOST_FTDC_BFC_QueryFundChange = 'r' #出入金查询
THOST_FTDC_BFC_QueryPosition = 'n' #持仓查询
THOST_FTDC_BFC_QryBizNotice = 'C' #业务通知查询
THOST_FTDC_BFC_SyncOTP = 'E' #同步动态令牌
THOST_FTDC_BFC_QueryTradingCode = 't' #交易编码查询
THOST_FTDC_BFC_DataExport = 'z' #数据导出
THOST_FTDC_BFC_ForceUserLogout = '1' #强制用户登出
THOST_FTDC_BFC_Risk = 'f' #风险监控
THOST_FTDC_BFC_Session = 'g' #查询/管理：查询会话，踢人等
THOST_FTDC_BFC_RiskNoticeCtl = 'h' #风控通知控制
THOST_FTDC_BFC_SendBizNotice = 'F' #发送业务通知
#FtdcOTPStatusType是一个动态令牌状态类型
THOST_FTDC_OTPS_Unused = '0' #未使用
THOST_FTDC_OTPS_Used = '1' #已使用
THOST_FTDC_OTPS_Disuse = '2' #注销
#FtdcSendTypeType是一个报送状态类型
THOST_FTDC_UOAST_Success = '4' #接收成功
THOST_FTDC_UOAST_Generated = '2' #已生成
THOST_FTDC_UOAST_Sended = '1' #已发送
THOST_FTDC_UOAST_SendFail = '3' #报送失败
THOST_FTDC_UOAST_NoSend = '0' #未发送
THOST_FTDC_UOAST_Cancel = '6' #取消报送
THOST_FTDC_UOAST_Fail = '5' #接收失败
#FtdcOrganTypeType是一个机构类型类型
THOST_FTDC_OT_Future = '2' #交易前置
THOST_FTDC_OT_Bank = '1' #银行代理
THOST_FTDC_OT_PlateForm = '9' #银期转帐平台管理
#FtdcReturnStandardType是一个返还标准类型
THOST_FTDC_RSD_ByPeriod = '1' #分阶段返还
THOST_FTDC_RSD_ByStandard = '2' #按某一标准
#FtdcOrderActionStatusType是一个报单操作状态类型
THOST_FTDC_OAS_Rejected = 'c' #已经被拒绝
THOST_FTDC_OAS_Submitted = 'a' #已经提交
THOST_FTDC_OAS_Accepted = 'b' #已经接受
#FtdcRateTypeType是一个费率类型类型
THOST_FTDC_RATETYPE_MarginRate = '2' #保证金率
#FtdcSysOperTypeType是一个系统日志操作类型类型
THOST_FTDC_SoT_BaseParam = '4' #基础参数设置
THOST_FTDC_SoT_InvestorPersonalityInfo = 'F' #投资者个性信息维护
THOST_FTDC_SoT_RoleManager = '2' #角色管理
THOST_FTDC_SoT_InvestorAuthority = 'C' #投资者权限管理
THOST_FTDC_SoT_DepartmentCopy = '9' #组织架构向查询分类复制
THOST_FTDC_SoT_UpdatePassword = '0' #修改操作员密码
THOST_FTDC_SoT_PropertySet = 'D' #属性设置
THOST_FTDC_SoT_SetUserID = '5' #设置操作员
THOST_FTDC_SoT_Tradingcode = 'A' #交易编码管理
THOST_FTDC_SoT_DepartmentManager = '8' #组织架构管理
THOST_FTDC_SoT_UserIpRestriction = '7' #用户IP限制
THOST_FTDC_SoT_ReSetInvestorPasswd = 'E' #重置投资者密码
THOST_FTDC_SoT_UserDepartment = '1' #操作员组织架构关系
THOST_FTDC_SoT_RoleFunction = '3' #角色功能设置
THOST_FTDC_SoT_InvestorStatus = 'B' #投资者状态维护
THOST_FTDC_SoT_SetUserRole = '6' #用户角色设置
#FtdcPropertyInvestorRangeType是一个投资者范围类型
THOST_FTDC_PIR_All = '1' #所有
THOST_FTDC_PIR_Property = '2' #投资者属性
THOST_FTDC_PIR_Single = '3' #单一投资者
#FtdcApplyOperateIDType是一个申请动作类型
THOST_FTDC_AOID_CancelInvestor = '6' #销户
THOST_FTDC_AOID_OpenInvestor = '1' #开户
THOST_FTDC_AOID_CancelTradingCode = '5' #撤销交易编码
THOST_FTDC_AOID_FreezeAccount = '8' #账户休眠
THOST_FTDC_AOID_ActiveFreezeAccount = '9' #激活休眠账户
THOST_FTDC_AOID_ModifyIDCard = '2' #修改身份信息
THOST_FTDC_AOID_ModifyNoIDCard = '3' #修改一般信息
THOST_FTDC_AOID_ApplyTradingCode = '4' #申请交易编码
#FtdcTimeConditionType是一个有效期类型类型
THOST_FTDC_TC_GTC = '5' #撤销前有效
THOST_FTDC_TC_GTD = '4' #指定日期前有效
THOST_FTDC_TC_GFD = '3' #当日有效
THOST_FTDC_TC_GFA = '6' #集合竞价有效
THOST_FTDC_TC_IOC = '1' #立即完成，否则撤销
THOST_FTDC_TC_GFS = '2' #本节有效
#TKSConditionalOrderType///条件单类型类型
KSCOS_TRIGGERTYPE_QUOTAIONANDTIME = '5' #行情和时间触发
KSCOS_TRIGGERTYPE_TIME = '2' #时间触发
KSCOS_TRIGGERTYPE_QUOTATION = '0' #行情触发
KSCOS_TRIGGERTYPE_OPEN = '1' #开盘触发
#FtdcBatchStatusType是一个处理状态类型
THOST_FTDC_BS_Uploaded = '2' #已上传
THOST_FTDC_BS_NoUpload = '1' #未上传
THOST_FTDC_BS_Failed = '3' #审核失败
#FtdcFeePayFlagType是一个费用支付标志类型
THOST_FTDC_FPF_BEN = '0' #由受益方支付费用
THOST_FTDC_FPF_SHA = '2' #由发送方支付发起的费用，受益方支付接受的费用
THOST_FTDC_FPF_OUR = '1' #由发送方支付费用
#FtdcSystemStatusType是一个系统状态类型
THOST_FTDC_ES_Initialized = '4' #交易完成初始化
THOST_FTDC_ES_Closed = '6' #收市完成
THOST_FTDC_ES_Initialize = '3' #交易开始初始化
THOST_FTDC_ES_Settlement = '7' #结算
THOST_FTDC_ES_Close = '5' #收市开始
THOST_FTDC_ES_NonActive = '1' #不活跃
THOST_FTDC_ES_Startup = '2' #启动
#FtdcPersonTypeType是一个联系人类型类型
THOST_FTDC_PST_LinkMan = '7' #投资者联系人
THOST_FTDC_PST_Corporation = '6' #法人代表
THOST_FTDC_PST_Settlement = '4' #结算单确认人
THOST_FTDC_PST_Open = '2' #开户授权人
THOST_FTDC_PST_Company = '5' #法人
THOST_FTDC_PST_Order = '1' #指定下单人
THOST_FTDC_PST_Fund = '3' #资金调拨人
#FtdcFindMarginRateAlgoIDType是一个寻找保证金率算法编号类型
THOST_FTDC_FMRA_DCE = '2' #大连商品交易所
THOST_FTDC_FMRA_Base = '1' #基本
THOST_FTDC_FMRA_CZCE = '3' #郑州商品交易所
#FtdcMoneyAccountStatusType是一个资金账户状态类型
THOST_FTDC_MAS_Cancel = '1' #销户
THOST_FTDC_MAS_Normal = '0' #正常
#FtdcUserRangeType是一个操作员范围类型
THOST_FTDC_UR_Single = '1' #单一操作员
THOST_FTDC_UR_All = '0' #所有
#FtdcAmlCheckLevelType是一个审核级别类型
THOST_FTDC_AMLCL_CheckLevel1 = '1' #一级审核
THOST_FTDC_AMLCL_CheckLevel0 = '0' #零级审核
THOST_FTDC_AMLCL_CheckLevel3 = '3' #三级审核
THOST_FTDC_AMLCL_CheckLevel2 = '2' #二级审核
#FtdcOTPTypeType是一个动态令牌类型类型
THOST_FTDC_OTP_NONE = '0' #无动态令牌
THOST_FTDC_OTP_TOTP = '1' #时间令牌
#FtdcQuestionTypeType是一个特有信息类型类型
THOST_FTDC_QT_Blank = '3' #填空
THOST_FTDC_QT_Radio = '1' #单选
THOST_FTDC_QT_Option = '2' #多选
#FtdcFlowIDType是一个流程ID类型
THOST_FTDC_EvM_InvestorCommRateModel = '3' #投资者手续费率模板关系设置
THOST_FTDC_EvM_InvestorRate = '2' #投资者手续费率设置
THOST_FTDC_EvM_InvestorGroupFlow = '1' #投资者对应投资者组设置
#FtdcReasonType是一个事由类型
THOST_FTDC_RN_ZT = '1' #资金在途
THOST_FTDC_RN_QT = '2' #其它
THOST_FTDC_RN_CD = '0' #错单
#FtdcFunctionCodeType是一个功能代码类型
THOST_FTDC_FC_OrderAction = '7' #报单操作
THOST_FTDC_FC_OrderInsert = '6' #报单插入
THOST_FTDC_FC_ParkedOrderAction = 'D' #报单操作
THOST_FTDC_FC_BrokerPasswordUpdate = '4' #变更经纪公司口令
THOST_FTDC_FC_SyncBrokerData = '9' #同步经纪公司数据
THOST_FTDC_FC_DataAsync = '1' #数据异步化
THOST_FTDC_FC_ParkedOrderInsert = 'C' #报单插入
THOST_FTDC_FC_BachSyncBrokerData = 'A' #批量同步经纪公司数据
THOST_FTDC_FC_ForceUserLogout = '2' #强制用户登出
THOST_FTDC_FC_InvestorPasswordUpdate = '5' #变更投资者口令
THOST_FTDC_FC_SyncSystemData = '8' #同步系统数据
THOST_FTDC_FC_SuperQuery = 'B' #超级查询
THOST_FTDC_FC_UserPasswordUpdate = '3' #变更管理用户口令
THOST_FTDC_FC_SyncOTP = 'E' #同步动态令牌
#FtdcAlgorithmType是一个盈亏算法类型
THOST_FTDC_AG_OnlyLost = '2' #浮盈不计，浮亏计
THOST_FTDC_AG_None = '4' #浮盈浮亏都不计算
THOST_FTDC_AG_All = '1' #浮盈浮亏都计算
THOST_FTDC_AG_OnlyGain = '3' #浮盈计，浮亏不计
#FtdcAccountSourceTypeType是一个资金账户来源类型
THOST_FTDC_AST_FBTransfer = '0' #银期同步
THOST_FTDC_AST_ManualEntry = '1' #手工录入
#FtdcSpecialCreateRuleType是一个特殊的创建规则类型
THOST_FTDC_SC_NoSpringFestival = '1' #不包含春节
THOST_FTDC_SC_NoSpecialRule = '0' #没有特殊创建规则
#FtdcRatioAttrType是一个费率属性类型
THOST_FTDC_RA_Trade = '0' #交易费率
THOST_FTDC_RA_Settlement = '1' #结算费率
#FtdcSexType是一个性别类型
THOST_FTDC_SEX_None = '0' #未知
THOST_FTDC_SEX_Man = '1' #男
THOST_FTDC_SEX_Woman = '2' #女
#FtdcFundDirectionType是一个出入金方向类型
THOST_FTDC_FD_In = '1' #入金
THOST_FTDC_FD_Out = '2' #出金
#TKSConditionalTypeType///条件类型类型
KSCOS_GreaterEqualTermPrice = '0' #大于等于条件价
KSCOS_LesserThanTermPrice = '1' #小于等于条件价
#FtdcExClientIDTypeType是一个交易编码类型类型
THOST_FTDC_ECIDT_Speculation = '3' #投机
THOST_FTDC_ECIDT_Arbitrage = '2' #套利
THOST_FTDC_ECIDT_Hedge = '1' #套保
#FtdcOrderSubmitStatusType是一个报单提交状态类型
THOST_FTDC_OSS_InsertSubmitted = '0' #已经提交
THOST_FTDC_OSS_InsertRejected = '4' #报单已经被拒绝
THOST_FTDC_OSS_CancelSubmitted = '1' #撤单已经提交
THOST_FTDC_OSS_CancelRejected = '5' #撤单已经被拒绝
THOST_FTDC_OSS_Accepted = '3' #已经接受
THOST_FTDC_OSS_ModifySubmitted = '2' #修改已经提交
THOST_FTDC_OSS_ModifyRejected = '6' #改单已经被拒绝
#TKSConditionalOrderStatusType///条件单状态
KSCOS_OrderStatus_WAITSELECT = '6' #等待选择
KSCOS_OrderStatus_Deleted = '2' #删除
KSCOS_OrderStatus_SENDTIMEOUT = '4' #发送超时
KSCOS_OrderStatus_TOUCHEDNOSEND = '3' #已触发未发送
KSCOS_OrderStatus_PAUSENOTOUCHED = '0' #暂停
KSCOS_OrderStatus_SENDSUCCESS = '5' #发送成功
KSCOS_OrderStatus_SELECTABORT = '8' #选择终止
KSCOS_OrderStatus_ACTIVENOTOUCHED = '1' #未触发
KSCOS_OrderStatus_SELECTSKIP = '7' #选择跳过
#FtdcProductLifePhaseType是一个产品生命周期状态类型
THOST_FTDC_PLP_Active = '1' #活跃
THOST_FTDC_PLP_Canceled = '3' #注销
THOST_FTDC_PLP_NonActive = '2' #不活跃
#FtdcFundIOTypeType是一个出入金类型类型
THOST_FTDC_FIOT_Transfer = '2' #银期转帐
THOST_FTDC_FIOT_FundIO = '1' #出入金
#TKSSpringTypeType是一个报单价格条件类型
KSPL_SPRING_LastPrice = '0' #最新价
KSPL_SPRING_SalePrice = '1' #买卖价
#FtdcFBTUserEventTypeType是一个银期转帐用户事件类型类型
THOST_FTDC_FBTUET_RepealFromFutureToBank = '7' #冲正期货转银行
THOST_FTDC_FBTUET_SignIn = '0' #签到
THOST_FTDC_FBTUET_SyncKey = 'B' #密钥同步
THOST_FTDC_FBTUET_Other = 'Z' #其他
THOST_FTDC_FBTUET_SignOut = 'A' #签退
THOST_FTDC_FBTUET_RepealFromBankToFuture = '6' #冲正银行转期货
THOST_FTDC_FBTUET_FromFutureToBank = '2' #期货转银行
THOST_FTDC_FBTUET_FromBankToFuture = '1' #银行转期货
THOST_FTDC_FBTUET_OpenAccount = '3' #开户
THOST_FTDC_FBTUET_ChangeAccount = '5' #变更银行账户
THOST_FTDC_FBTUET_QueryBankAccount = '8' #查询银行账户
THOST_FTDC_FBTUET_QueryFutureAccount = '9' #查询期货账户
THOST_FTDC_FBTUET_CancelAccount = '4' #销户
#FtdcManageStatusType是一个存管状态类型
THOST_FTDC_MSS_Point = '0' #指定存管
THOST_FTDC_MSS_PrePoint = '1' #预指定
THOST_FTDC_MSS_CancelPoint = '2' #撤销指定
#FtdcFundTypeType是一个资金类型类型
THOST_FTDC_FT_Deposite = '1' #银行存款
THOST_FTDC_FT_ItemFund = '2' #分项资金
THOST_FTDC_FT_Company = '3' #公司调整
#FtdcCertificationTypeType是一个证件类型类型
THOST_FTDC_CFT_OtherCard = 'x' #其他证件
THOST_FTDC_CFT_SoldierIDCard = '3' #士兵证
THOST_FTDC_CFT_HouseholdRegister = '5' #户口簿
THOST_FTDC_CFT_InstitutionCodeCard = '7' #组织机构代码证
THOST_FTDC_CFT_SuperDepAgree = 'a' #主管部门批文
THOST_FTDC_CFT_IDCard = '0' #身份证
THOST_FTDC_CFT_OfficerIDCard = '2' #军官证
THOST_FTDC_CFT_TempLicenseNo = '8' #临时营业执照号
THOST_FTDC_CFT_HomeComingCard = '4' #回乡证
THOST_FTDC_CFT_Passport = '1' #护照
THOST_FTDC_CFT_LicenseNo = '6' #营业执照号
THOST_FTDC_CFT_NoEnterpriseLicenseNo = '9' #民办非企业登记证书
#FtdcRiskNotifyMethodType是一个风险通知途径类型
THOST_FTDC_RNM_System = '0' #系统通知
THOST_FTDC_RNM_SMS = '1' #短信通知
THOST_FTDC_RNM_Manual = '3' #人工通知
THOST_FTDC_RNM_EMail = '2' #邮件通知
