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
#FtdcCommApiTypeType��һ��ͨѶAPI��������
THOST_FTDC_CAPIT_Server = '2' #�����
THOST_FTDC_CAPIT_UserApi = '3' #����ϵͳ��UserApi
THOST_FTDC_CAPIT_Client = '1' #�ͻ���
#FtdcVirBankAccTypeType��һ�������ʻ���������
THOST_FTDC_VBAT_BankCard = '2' #���
THOST_FTDC_VBAT_CreditCard = '3' #���ÿ�
THOST_FTDC_VBAT_BankBook = '1' #����
#FtdcSettleManagerGroupType��һ��ģ���������
THOST_FTDC_SMG_ASP = '2' #�ڲ��˶�
THOST_FTDC_SMG_Exhcange = '1' #�������˶�
THOST_FTDC_SMG_CSRC = '3' #�ϱ����ݺ˶�
#TKSConditionalOrderSelectTypeType///������ѡ��ʽ����
KSCOS_Select_ConfirmORCancel = '1' #ȷ�ϡ�ȡ��
KS_Select_AgainOrSkipOrAbort = '2' #���ԡ���������ֹ
#FtdcTransferValidFlagType��һ��ת����Ч��־����
THOST_FTDC_TVF_Valid = '1' #��Ч
THOST_FTDC_TVF_Reverse = '2' #����
THOST_FTDC_TVF_Invalid = '0' #��Ч��ʧ��
#FtdcUOAAutoSendType��һ��ͳһ���������Զ���������
THOST_FTDC_UOAA_ASNR = '2' #�Զ����ͣ����Զ�����
THOST_FTDC_UOAA_NSAR = '3' #���Զ����ͣ��Զ�����
THOST_FTDC_UOAA_ASR = '1' #�Զ����Ͳ�����
THOST_FTDC_UOAA_NSR = '4' #���Զ����ͣ�Ҳ���Զ�����
#FtdcDepartmentRangeType��һ��Ͷ���߷�Χ����
THOST_FTDC_DR_All = '1' #����
THOST_FTDC_DR_Single = '3' #��һͶ����
THOST_FTDC_DR_Group = '2' #��֯�ܹ�
#FtdcCodeSourceTypeType��һ�����ױ�����Դ����
THOST_FTDC_CST_ManualEntry = '1' #�ֹ�¼��(δ�淶)
THOST_FTDC_CST_UnifyAccount = '0' #ͳһ����(�ѹ淶)
#FtdcRiskNotifyStatusType��һ������֪ͨ״̬����
THOST_FTDC_RNS_Confirmed = '5' #��ȷ��
THOST_FTDC_RNS_NotGen = '0' #δ����
THOST_FTDC_RNS_SendOk = '3' #�ѷ���δ����
THOST_FTDC_RNS_Generated = '1' #������δ����
THOST_FTDC_RNS_SendError = '2' #����ʧ��
THOST_FTDC_RNS_Received = '4' #�ѽ���δȷ��
#FtdcHandleTradingAccountAlgoIDType��һ���ʽ����㷨�������
THOST_FTDC_HTAA_DCE = '2' #������Ʒ������
THOST_FTDC_HTAA_Base = '1' #����
THOST_FTDC_HTAA_CZCE = '3' #֣����Ʒ������
#FtdcProtocalIDType��һ��Э����������
THOST_FTDC_PID_FBTPlateFormProtocal = 'X' #����ת��ƽ̨Э��
THOST_FTDC_PID_CCBProtocal = '4' #����Э��
THOST_FTDC_PID_FutureProtocal = '0' #����Э��
THOST_FTDC_PID_BOCOMProtocal = '5' #����Э��
THOST_FTDC_PID_ICBCProtocal = '1' #����Э��
THOST_FTDC_PID_ABCProtocal = '2' #ũ��Э��
THOST_FTDC_PID_CBCProtocal = '3' #�й�����Э��
#FtdcSettlementStatusType��һ������״̬����
THOST_FTDC_STS_Settlementing = '1' #������
THOST_FTDC_STS_Initialize = '0' #��ʼ
THOST_FTDC_STS_Settlemented = '2' #�ѽ���
THOST_FTDC_STS_Finished = '3' #�������
#FtdcUserTypeType��һ���û���������
THOST_FTDC_UT_Investor = '0' #Ͷ����
THOST_FTDC_UT_SuperUser = '2' #����Ա
THOST_FTDC_UT_Operator = '1' #����Ա
#FtdcCloseStyleType��һ��ƽ�ַ�ʽ����
THOST_FTDC_ICS_CloseToday = '1' #��ƽ����ƽ��
THOST_FTDC_ICS_Close = '0' #�ȿ���ƽ
#FtdcQueryInvestorRangeType��һ����ѯ��Χ����
THOST_FTDC_QIR_Group = '2' #��ѯ����
THOST_FTDC_QIR_Single = '3' #��һͶ����
THOST_FTDC_QIR_All = '1' #����
#FtdcCSRCDataQueyTypeType��һ���ϱ����ݲ�ѯ��������
THOST_FTDC_CSRCQ_History = '1' #��ѯ��ʷ���͵Ĵ����͹�˾������
THOST_FTDC_CSRCQ_Current = '0' #��ѯ��ǰ�����ձ��͵�����
#FtdcHedgeFlagType��һ��Ͷ���ױ���־����
THOST_FTDC_HF_Speculation = '1' #Ͷ��
THOST_FTDC_HF_Arbitrage = '2' #����
THOST_FTDC_HF_Hedge = '3' #�ױ�
#FtdcRiskUserEventType��һ������û������¼�����
THOST_FTDC_RUE_ExportData = '0' #��������
#FtdcMonthBillTradeSumType��һ�����㵥�±��ɽ����ܷ�ʽ����
THOST_FTDC_MBTS_ByInstrument = '0' #ͬ��ͬ��Լ
THOST_FTDC_MBTS_ByDayInsPrc = '1' #ͬ��ͬ��Լͬ�۸�
THOST_FTDC_MBTS_ByDayIns = '2' #ͬ��Լ
#FtdcBrokerUserTypeType��һ�����ù�˾�û���������
THOST_FTDC_BUT_Investor = '1' #Ͷ����
THOST_FTDC_BUT_BrokerUser = '2' #����Ա
#TKSOrderPriceTypeType///�����۸���������
KSCOS_OrderPrice_LastPrice = '0' #���¼�
KSCOS_OrderPrice_AskPrice = '2' #����
KSCOS_OrderPrice_BidPrice = '1' #���
#FtdcOrderStatusType��һ������״̬����
THOST_FTDC_OST_NotTouched = 'b' #��δ����
THOST_FTDC_OST_NoTradeQueueing = '3' #δ�ɽ����ڶ�����
THOST_FTDC_OST_AllTraded = '0' #ȫ���ɽ�
THOST_FTDC_OST_NoTradeNotQueueing = '4' #δ�ɽ����ڶ�����
THOST_FTDC_OST_Unknown = 'a' #δ֪
THOST_FTDC_OST_PartTradedQueueing = '1' #���ֳɽ����ڶ�����
THOST_FTDC_OST_PartTradedNotQueueing = '2' #���ֳɽ����ڶ�����
THOST_FTDC_OST_Touched = 'c' #�Ѵ���
THOST_FTDC_OST_Canceled = '5' #����
#FtdcVirementTradeCodeType��һ�����״�������
THOST_FTDC_VTC_FutureFutureToBank = '202002' #�ڻ������ڻ��ʽ�ת����
THOST_FTDC_VTC_BankFutureToBank = '102002' #���з����ڻ��ʽ�ת����
THOST_FTDC_VTC_BankBankToFuture = '102001' #���з��������ʽ�ת�ڻ�
THOST_FTDC_VTC_FutureBankToFuture = '202001' #�ڻ����������ʽ�ת�ڻ�
#FtdcFileUploadStatusType��һ���ļ�״̬����
THOST_FTDC_FUS_SucceedLoad = '3' #����ɹ�
THOST_FTDC_FUS_FailedUpload = '2' #�ϴ�ʧ��
THOST_FTDC_FUS_FailedLoad = '5' #����ʧ��
THOST_FTDC_FUS_SucceedUpload = '1' #�ϴ��ɹ�
THOST_FTDC_FUS_PartSucceedLoad = '4' #���벿�ֳɹ�
#FtdcFileTypeType��һ���ļ��ϴ���������
THOST_FTDC_FUT_Settlement = '0' #����
THOST_FTDC_FUT_Check = '1' #�˶�
#FtdcFutureAccTypeType��һ���ڻ���˾�ʺ���������
THOST_FTDC_FAT_BankBook = '1' #���д���
THOST_FTDC_FAT_SavingCard = '2' #���
THOST_FTDC_FAT_CreditCard = '3' #���ÿ�
#FtdcMortgageTypeType��һ����Ѻ��������
THOST_FTDC_MT_In = '1' #����
THOST_FTDC_MT_Out = '0' #�ʳ�
#FtdcClientIDStatusType��һ�����ױ���״̬����
THOST_FTDC_UOACS_Refuse = '5' #�ܾ�
THOST_FTDC_UOACS_Cancel = '6' #�ѳ�������
THOST_FTDC_UOACS_Success = '4' #���
THOST_FTDC_UOACS_Sended = '3' #�ѷ�������
THOST_FTDC_UOACS_NoApply = '1' #δ����
THOST_FTDC_UOACS_Submited = '2' #���ύ����
#FtdcTradingRoleType��һ�����׽�ɫ����
THOST_FTDC_ER_Host = '2' #��Ӫ
THOST_FTDC_ER_Broker = '1' #����
THOST_FTDC_ER_Maker = '3' #������
#FtdcPositionDateType��һ���ֲ���������
THOST_FTDC_PSD_Today = '1' #���ճֲ�
THOST_FTDC_PSD_History = '2' #��ʷ�ֲ�
#FtdcSyncModeType��һ���׽���ͨ�ŷ�ʽ����
THOST_FTDC_SRM_ASync = '0' #�첽
THOST_FTDC_SRM_Sync = '1' #ͬ��
#FtdcRateInvestorRangeType��һ��Ͷ���߷�Χ����
THOST_FTDC_RIR_All = '1' #����
THOST_FTDC_RIR_Single = '3' #��һͶ����
THOST_FTDC_RIR_Model = '2' #����ģ��
#FtdcBrokerRepealFlagType��һ�����̳�����־����
THOST_FTDC_BRORF_BrokerNotNeedRepeal = '0' #���������Զ�����
THOST_FTDC_BRORF_BrokerBeenRepealed = '2' #�������Զ�����
THOST_FTDC_BRORF_BrokerWaitingRepeal = '1' #���̴��Զ�����
#TKSConditionalOrderStateAlterType///��ͣ�򼤻������־
KSCOS_State_ACTIVE = '1' #����
KSCOS_State_PAUSE = '0' #��ͣ
#FtdcBankRepealFlagType��һ�����г�����־����
THOST_FTDC_BRF_BankWaitingRepeal = '1' #���д��Զ�����
THOST_FTDC_BRF_BankNotNeedRepeal = '0' #���������Զ�����
THOST_FTDC_BRF_BankBeenRepealed = '2' #�������Զ�����
#FtdcPwdFlagType��һ������˶Ա�־����
THOST_FTDC_BPWDF_BlankCheck = '1' #���ĺ˶�
THOST_FTDC_BPWDF_NoCheck = '0' #���˶�
THOST_FTDC_BPWDF_EncryptCheck = '2' #���ĺ˶�
#FtdcDataResourceType��һ��������Դ����
THOST_FTDC_DAR_CSRC = '3' #��������
THOST_FTDC_DAR_Settle = '1' #��ϵͳ
THOST_FTDC_DAR_Exchange = '2' #������
#FtdcDataStatusType��һ����ϴǮ��˱�����״̬����
THOST_FTDC_AMLDS_Deleted = '1' #��ɾ��
THOST_FTDC_AMLDS_Normal = '0' #����
#FtdcForceCloseReasonType��һ��ǿƽԭ������
THOST_FTDC_FCC_PersonDeliv = '7' #��Ȼ���ٽ�����
THOST_FTDC_FCC_ClientOverPositionLimit = '2' #�ͻ�����
THOST_FTDC_FCC_NotForceClose = '0' #��ǿƽ
THOST_FTDC_FCC_NotMultiple = '4' #�ֲַ�������
THOST_FTDC_FCC_MemberOverPositionLimit = '3' #��Ա����
THOST_FTDC_FCC_LackDeposit = '1' #�ʽ���
THOST_FTDC_FCC_Other = '6' #����
THOST_FTDC_FCC_Violation = '5' #Υ��
#FtdcApplyStatusIDType��һ������״̬����
THOST_FTDC_ASID_Submited = '2' #���ύ
THOST_FTDC_ASID_Checked = '3' #�����
THOST_FTDC_ASID_Refused = '4' #�Ѿܾ�
THOST_FTDC_ASID_NoComplete = '1' #δ��ȫ
THOST_FTDC_ASID_Deleted = '5' #��ɾ��
#FtdcOrgSystemIDType��һ��ԭ��ϵͳ��������
THOST_FTDC_ORGS_Standard = '0' #�ۺϽ���ƽ̨
THOST_FTDC_ORGS_ESunny = '1' #��ʢϵͳ
THOST_FTDC_ORGS_KingStarV6 = '2' #���˴�V6ϵͳ
#FtdcVolumeConditionType��һ���ɽ�����������
THOST_FTDC_VC_MV = '2' #��С����
THOST_FTDC_VC_CV = '3' #ȫ������
THOST_FTDC_VC_AV = '1' #�κ�����
#FtdcTradeTypeType��һ���ɽ���������
THOST_FTDC_TRDT_EFPDerived = '3' #��ת�������ɽ�
THOST_FTDC_TRDT_OTC = '2' #OTC�ɽ�
THOST_FTDC_TRDT_OptionsExecution = '1' #��Ȩִ��
THOST_FTDC_TRDT_Common = '0' #��ͨ�ɽ�
THOST_FTDC_TRDT_CombinationDerived = '4' #��������ɽ�
#FtdcSysOperModeType��һ��ϵͳ��־������������
THOST_FTDC_SoM_Copy = '4' #����
THOST_FTDC_SoM_ReSet = '7' #����
THOST_FTDC_SoM_Update = '2' #�޸�
THOST_FTDC_SoM_Add = '1' #����
THOST_FTDC_SoM_AcTive = '5' #����
THOST_FTDC_SoM_Delete = '3' #ɾ��
THOST_FTDC_SoM_CanCel = '6' #ע��
#FtdcActionFlagType��һ��������־����
THOST_FTDC_AF_Delete = '0' #ɾ��
THOST_FTDC_AF_Modify = '3' #�޸�
#FtdcSettlementStyleType��һ�����㵥��ʽ����
THOST_FTDC_SBS_Volume = '2' #��ʶԳ�
THOST_FTDC_SBS_Day = '1' #���ն���
#FtdcPriceSourceType��һ���ɽ�����Դ����
THOST_FTDC_PSRC_Sell = '2' #��ί�м�
THOST_FTDC_PSRC_Buy = '1' #��ί�м�
THOST_FTDC_PSRC_LastPrice = '0' #ǰ�ɽ���
#FtdcCashExchangeCodeType��һ���㳮��־����
THOST_FTDC_CEC_Exchange = '1' #��
THOST_FTDC_CEC_Cash = '2' #��
#FtdcInvestorRangeType��һ��Ͷ���߷�Χ����
THOST_FTDC_IR_All = '1' #����
THOST_FTDC_IR_Group = '2' #Ͷ������
THOST_FTDC_IR_Single = '3' #��һͶ����
#FtdcBillGenStatusType��һ�����㵥����״̬����
THOST_FTDC_BGS_None = '0' #������
THOST_FTDC_BGS_NoGenerated = '1' #δ����
THOST_FTDC_BGS_Generated = '2' #������
#FtdcParkedOrderStatusType��һ��Ԥ��״̬����
THOST_FTDC_PAOS_Send = '2' #�ѷ���
THOST_FTDC_PAOS_Deleted = '3' #��ɾ��
THOST_FTDC_PAOS_NotSend = '1' #δ����
#FtdcPasswordTypeType��һ��������������
THOST_FTDC_PWDT_Trade = '1' #��������
THOST_FTDC_PWDT_Account = '2' #�ʽ�����
#FtdcEventModeType��һ��������������
THOST_FTDC_EvM_CANCEL = '6' #ע��
THOST_FTDC_EvM_Reverse = '7' #����
THOST_FTDC_EvM_ADD = '1' #����
THOST_FTDC_EvM_CHECK = '4' #����
THOST_FTDC_EvM_COPY = '5' #����
THOST_FTDC_EvM_DELETE = '3' #ɾ��
THOST_FTDC_EvM_UPDATE = '2' #�޸�
#FtdcBankAccTypeType��һ�������ʺ���������
THOST_FTDC_BAT_SavingCard = '2' #���
THOST_FTDC_BAT_CreditCard = '3' #���ÿ�
THOST_FTDC_BAT_BankBook = '1' #���д���
#FtdcClientIDTypeType��һ�����ױ�����������
THOST_FTDC_CIDT_Hedge = '3' #�ױ�
THOST_FTDC_CIDT_Arbitrage = '2' #����
THOST_FTDC_CIDT_Speculation = '1' #Ͷ��
#FtdcBankAccStatusType��һ�������˻�״̬����
THOST_FTDC_BAS_ReportLoss = '2' #��ʧ
THOST_FTDC_BAS_Freeze = '1' #����
THOST_FTDC_BAS_Normal = '0' #����
#FtdcReqRspTypeType��һ��������Ӧ�������
THOST_FTDC_REQRSP_Request = '0' #����
THOST_FTDC_REQRSP_Response = '1' #��Ӧ
#FtdcFutureTypeType��һ���ڻ���������
THOST_FTDC_FUTT_Financial = '2' #�����ڻ�
THOST_FTDC_FUTT_Commodity = '1' #��Ʒ�ڻ�
#FtdcFuturePwdFlagType��һ���ʽ�����˶Ա�־����
THOST_FTDC_FPWD_Check = '1' #�˶�
THOST_FTDC_FPWD_UnCheck = '0' #���˶�
#FtdcExchangeSettlementParamIDType��һ�����������������������
THOST_FTDC_ESPI_DCEDelivFee = '5' #������������������ȡ��ʽ
THOST_FTDC_ESPI_CFFEXMinPrepa = '6' #�н���������Ϳ��ý��
THOST_FTDC_ESPI_OtherFundImport = '3' #�����ʽ��뽻���������
THOST_FTDC_ESPI_SHFEDelivFee = '4' #������������������ȡ��ʽ
THOST_FTDC_ESPI_OtherFundItem = '2' #�����ʽ�����
THOST_FTDC_ESPI_MortgageRatio = '1' #��Ѻ����
#FtdcInstStatusEnterReasonType��һ��Ʒ�ֽ��뽻��״̬ԭ������
THOST_FTDC_IER_Fuse = '3' #�۶�
THOST_FTDC_IER_Automatic = '1' #�Զ��л�
THOST_FTDC_IER_Manual = '2' #�ֶ��л�
#FtdcReturnLevelType��һ��������������
THOST_FTDC_RL_Level2 = '2' #����2
THOST_FTDC_RL_Level3 = '3' #����3
THOST_FTDC_RL_Level1 = '1' #����1
THOST_FTDC_RL_Level6 = '6' #����6
THOST_FTDC_RL_Level7 = '7' #����7
THOST_FTDC_RL_Level4 = '4' #����4
THOST_FTDC_RL_Level5 = '5' #����5
THOST_FTDC_RL_Level8 = '8' #����8
THOST_FTDC_RL_Level9 = '9' #����9
#FtdcPublishStatusType��һ������״̬����
THOST_FTDC_PS_Publishing = '2' #���ڷ���
THOST_FTDC_PS_None = '1' #δ����
THOST_FTDC_PS_Published = '3' #�ѷ���
#FtdcSystemTypeType��һ��Ӧ��ϵͳ��������
THOST_FTDC_SYT_TheThirdPartStore = '2' #���������
THOST_FTDC_SYT_StockBankTransfer = '1' #��֤ת��
THOST_FTDC_SYT_FutureBankTransfer = '0' #����ת��
#FtdcTransferStatusType��һ��ת�˽���״̬����
THOST_FTDC_TRFS_Normal = '0' #����
THOST_FTDC_TRFS_Repealed = '1' #������
#FtdcBanlanceTypeType��һ�������������
THOST_FTDC_BLT_CurrentMoney = '0' #��ǰ���
THOST_FTDC_BLT_UsableMoney = '1' #�������
THOST_FTDC_BLT_FetchableMoney = '2' #��ȡ���
THOST_FTDC_BLT_FreezeMoney = '3' #�������
#FtdcSettleManagerTypeType��һ������������������
THOST_FTDC_SMT_Settlement = '2' #����
THOST_FTDC_SMT_After = '3' #�����˶�
THOST_FTDC_SMT_Before = '1' #����ǰ׼��
THOST_FTDC_SMT_Settlemented = '4' #�������
#FtdcFileGenStyleType��һ���ļ����ɷ�ʽ����
THOST_FTDC_FGS_FileGen = '1' #����
THOST_FTDC_FGS_FileTransmit = '0' #�·�
#FtdcSystemParamIDType��һ��ϵͳ������������
THOST_FTDC_SPI_UserRightLogon = '3' #Ͷ���߿���Ĭ�ϵ�¼Ȩ��
THOST_FTDC_SPI_InvestorPhoto = 'P' #Ͷ������Ƭ·��
THOST_FTDC_SPI_CFFEXInvestorSettleFile = 'F' #Ͷ�����н��������ļ�����·��
THOST_FTDC_SPI_SettlementBillTrade = '4' #Ͷ���߽��׽��㵥�ɽ����ܷ�ʽ
THOST_FTDC_SPI_InvestorPwdModel = 'I' #��������¼�뷽ʽ
THOST_FTDC_SPI_InvestorIDMinLength = '1' #Ͷ���ߴ�����С����
THOST_FTDC_SPI_CheckFund = '6' #�����Ƿ��жϴ���δ���˵ĳ����ͷ����ʽ�
THOST_FTDC_SPI_DownloadCSRCFile = 'D' #�ϱ���֤���������ļ�·��
THOST_FTDC_SPI_UploadSettlementFile = 'U' #�ϴ��Ľ����������ļ�·��
THOST_FTDC_SPI_InvestorIDType = 'a' #Ͷ���ߴ�����뷽ʽ
THOST_FTDC_SPI_AccountIDMinLength = '2' #Ͷ�����ʺŴ�����С����
THOST_FTDC_SPI_CSRCData = 'R' #ȫ�ᾭ�͹�˾�ϴ��ļ�·��
THOST_FTDC_SPI_IsStandardActive = '8' #�Ƿ�淶�û����ܼ���
THOST_FTDC_SPI_SettlementBillFile = 'S' #���ɵĽ��㵥�ļ�·��
THOST_FTDC_SPI_TradingCode = '5' #ͳһ�������½��ױ��뷽ʽ
THOST_FTDC_SPI_CommModelRight = '7' #�Ƿ�����������ģ������Ȩ��
THOST_FTDC_SPI_CSRCOthersFile = 'C' #֤����ļ���ʶ
#FtdcConditionalOrderSortTypeType��һ��������������������
THOST_FTDC_COST_BidPriceDesc = '5' #ʹ����۽���
THOST_FTDC_COST_LastPriceDesc = '1' #ʹ�����¼۽���
THOST_FTDC_COST_LastPriceAsc = '0' #ʹ�����¼�����
THOST_FTDC_COST_AskPriceDesc = '3' #ʹ�����۽���
THOST_FTDC_COST_AskPriceAsc = '2' #ʹ����������
THOST_FTDC_COST_BidPriceAsc = '4' #ʹ���������
#FtdcLinkStatusType��һ������״̬����
THOST_FTDC_LS_Disconnected = '2' #û������
THOST_FTDC_LS_Connected = '1' #�Ѿ�����
#FtdcCfmmcReturnCodeType��һ��������ķ���������
THOST_FTDC_CRC_OtherFail = '4' #��������
THOST_FTDC_CRC_Working = '1' #�ÿͻ��Ѿ��������ڴ�����
THOST_FTDC_CRC_Success = '0' #�ɹ�
THOST_FTDC_CRC_IDCardFail = '3' #�����ʵ���Ƽ��ʧ��
THOST_FTDC_CRC_InfoFail = '2' #����пͻ����ϼ��ʧ��
#TKSOffsetType///����ֹ��ֹӯ�۵ķ�ʽ����
KSPL_OffsetValue_TradePrice = '1' #���ֳɽ��۵����ƫ��ֵ
KSPL_OffsetValue_TermPrice = '0' #ָ��ֵ
#FtdcDeliveryModeType��һ�����ʽ����
THOST_FTDC_DM_CashDeliv = '1' #�ֽ𽻸�
THOST_FTDC_DM_CommodityDeliv = '2' #ʵ�ｻ��
#FtdcNotifyClassType��һ������֪ͨ��������
THOST_FTDC_NC_Call = '2' #׷��
THOST_FTDC_NC_CHUANCANG = '4' #����
THOST_FTDC_NC_Exception = '5' #�쳣
THOST_FTDC_NC_NOERROR = '0' #����
THOST_FTDC_NC_Warn = '1' #��ʾ
THOST_FTDC_NC_Force = '3' #ǿƽ
#FtdcClientTypeType��һ���ͻ���������
THOST_FTDC_CfMMCCT_Person = '1' #����
THOST_FTDC_CfMMCCT_All = '0' #����
THOST_FTDC_CfMMCCT_Company = '2' #��λ
#FtdcAMLCheckStatusType��һ�����״̬����
THOST_FTDC_AMLCHS_RefuseReport = '3' #�ܾ��ϱ�
THOST_FTDC_AMLCHS_Init = '0' #δ����
THOST_FTDC_AMLCHS_Checked = '2' #�Ѹ���
THOST_FTDC_AMLCHS_Checking = '1' #������
#FtdcVirementStatusType��һ�������ʻ���������
THOST_FTDC_VMS_Natural = '0' #����
THOST_FTDC_VMS_Canceled = '9' #����
#FtdcTraderConnectStatusType��һ������������Ա����״̬����
THOST_FTDC_TCS_NotConnected = '1' #û���κ�����
THOST_FTDC_TCS_SubPrivateFlow = '4' #����˽����
THOST_FTDC_TCS_QryInstrumentSent = '3' #�Ѿ�������Լ��ѯ����
THOST_FTDC_TCS_Connected = '2' #�Ѿ�����
#FtdcProductClassType��һ����Ʒ��������
THOST_FTDC_PC_Futures = '1' #�ڻ�
THOST_FTDC_PC_Combination = '3' #���
THOST_FTDC_PC_Options = '2' #��Ȩ
THOST_FTDC_PC_EFP = '5' #��ת��
THOST_FTDC_PC_Spot = '4' #����
#FtdcOrderSourceType��һ��������Դ����
THOST_FTDC_OSRC_Participant = '0' #���Բ�����
THOST_FTDC_OSRC_Administrator = '1' #���Թ���Ա
#FtdcSyncDataStatusType��һ��������ϵͳ����ͬ��״̬����
THOST_FTDC_SDS_Initialize = '0' #δͬ��
THOST_FTDC_SDS_Settlementing = '1' #ͬ����
THOST_FTDC_SDS_Settlemented = '2' #��ͬ��
#FtdcTradeSumStatModeType��һ������ͳ�Ʊ���Χͳ�Ʒ�ʽ����
THOST_FTDC_TSSM_Exchange = '3' #��������ͳ��
THOST_FTDC_TSSM_Instrument = '1' #����Լͳ��
THOST_FTDC_TSSM_Product = '2' #����Ʒͳ��
#FtdcVirDealStatusType��һ������״̬����
THOST_FTDC_VDS_Dealing = '1' #���ڴ���
THOST_FTDC_VDS_DeaclSucceed = '2' #����ɹ�
#FtdcFileBusinessCodeType��һ���ļ�ҵ��������
THOST_FTDC_FBC_TransferDetails = '1' #ת�˽�����ϸ����
THOST_FTDC_FBC_FutureAccountChangeInfoDetails = '4' #�ڻ��˻���Ϣ�����ϸ����
THOST_FTDC_FBC_CustMoneyDetail = '5' #�ͻ��ʽ�̨�������ϸ����
THOST_FTDC_FBC_MainPartMonitorData = 'd' #�ܷ�ƽ��������
THOST_FTDC_FBC_CustAccStatus = '2' #�ͻ��˻�״̬����
THOST_FTDC_FBC_PreparationMoney = 'e' #������б��������
THOST_FTDC_FBC_CustMoneySendAndReceiveDetails = 'a' #�ͻ��ʽ�����ϸ
THOST_FTDC_FBC_MainbodyMoneyTotal = 'c' #������ʽ��ջ���
THOST_FTDC_FBC_BankMoneyMonitorData = 'f' #Э���������ʽ�������
THOST_FTDC_FBC_AccountTradeDetails = '3' #�˻��ཻ����ϸ����
THOST_FTDC_FBC_CustInterestNetMoneyDetails = '9' #�ͻ���Ϣ������ϸ
THOST_FTDC_FBC_OthersExceptionResult = '8' #���������쳣����ļ�
THOST_FTDC_FBC_Others = '0' #����
THOST_FTDC_FBC_CorporationMoneyTotal = 'b' #���˴�������ʽ��ջ���
THOST_FTDC_FBC_CustMoneyResult = '7' #�ͻ��ʽ������˽��
THOST_FTDC_FBC_CustCancelAccountInfo = '6' #�ͻ�������Ϣ��ϸ����
#FtdcConnectModeType��һ���׽������ӷ�ʽ����
THOST_FTDC_CM_ShortConnect = '0' #������
THOST_FTDC_CM_LongConnect = '1' #������
#FtdcLastFragmentType��һ������Ƭ��־����
THOST_FTDC_LF_No = '1' #��������Ƭ
THOST_FTDC_LF_Yes = '0' #������Ƭ
#FtdcVirementAvailAbilityType��һ����Ч��־����
THOST_FTDC_VAA_Repeal = '2' #����
THOST_FTDC_VAA_AvailAbility = '1' #��Ч
THOST_FTDC_VAA_NoAvailAbility = '0' #δȷ��
#FtdcFileStatusType��һ���ļ�״̬����
THOST_FTDC_FIS_NoCreate = '0' #δ����
THOST_FTDC_FIS_Created = '1' #������
THOST_FTDC_FIS_Failed = '2' #����ʧ��
#FtdcUserEventTypeType��һ���û��¼���������
THOST_FTDC_UET_Authenticate = '6' #�ͻ�����֤
THOST_FTDC_UET_Login = '1' #��¼
THOST_FTDC_UET_TradingError = '4' #����ʧ��
THOST_FTDC_UET_UpdatePassword = '5' #�޸�����
THOST_FTDC_UET_Other = '9' #����
THOST_FTDC_UET_Trading = '3' #���׳ɹ�
THOST_FTDC_UET_Logout = '2' #�ǳ�
#FtdcStatModeType��һ��ͳ�Ʒ�ʽ����
THOST_FTDC_SM_Investor = '3' #��Ͷ����ͳ��
THOST_FTDC_SM_Instrument = '1' #����Լͳ��
THOST_FTDC_SM_Product = '2' #����Ʒͳ��
THOST_FTDC_SM_Non = '0' #----
#FtdcInvestorRiskStatusType��һ��Ͷ���߷���״̬����
THOST_FTDC_IRS_Exception = '5' #�쳣
THOST_FTDC_IRS_Call = '3' #׷��
THOST_FTDC_IRS_Normal = '1' #����
THOST_FTDC_IRS_Force = '4' #ǿƽ
THOST_FTDC_IRS_Warn = '2' #����
#FtdcCCBFeeModeType��һ�������շ�ģʽ����
THOST_FTDC_CCBFM_ByAmount = '1' #��������
THOST_FTDC_CCBFM_ByMonth = '2' #���¿���
#FtdcOrganStatusType��һ���������״̬����
THOST_FTDC_OS_Invalid = '9' #ע��
THOST_FTDC_OS_DayEndClean = '5' #��������
THOST_FTDC_OS_Ready = '0' #����
THOST_FTDC_OS_CheckOut = '2' #ǩ��
THOST_FTDC_OS_CheckIn = '1' #ǩ��
THOST_FTDC_OS_CheckDetail = '4' #����
THOST_FTDC_OS_CheckFileArrived = '3' #�����ļ�����
#FtdcTradingRightType��һ������Ȩ������
THOST_FTDC_TR_Allow = '0' #���Խ���
THOST_FTDC_TR_Forbidden = '2' #���ܽ���
THOST_FTDC_TR_CloseOnly = '1' #ֻ��ƽ��
#FtdcAllWithoutTradeType��һ���Ƿ��ܿ��������������
THOST_FTDC_AWT_Enable = '0' #���ܿ����������
THOST_FTDC_AWT_Disable = '2' #�ܿ����������
#FtdcNoteTypeType��һ��֪ͨ��������
THOST_FTDC_NOTETYPE_TradeSettleMonth = '2' #���׽����±�
THOST_FTDC_NOTETYPE_ForceCloseNotes = '4' #ǿ��ƽ��֪ͨ��
THOST_FTDC_NOTETYPE_CallMarginNotes = '3' #׷�ӱ�֤��֪ͨ��
THOST_FTDC_NOTETYPE_TradeSettleBill = '1' #���׽��㵥
THOST_FTDC_NOTETYPE_TradeNotes = '5' #�ɽ�֪ͨ��
THOST_FTDC_NOTETYPE_DelivNotes = '6' #����֪ͨ��
#FtdcPositionDateTypeType��һ���ֲ�������������
THOST_FTDC_PDT_UseHistory = '1' #ʹ����ʷ�ֲ�
THOST_FTDC_PDT_NoUseHistory = '2' #��ʹ����ʷ�ֲ�
#FtdcStandardStatusType��һ���淶״̬����
THOST_FTDC_STST_Standard = '0' #�ѹ淶
THOST_FTDC_STST_NonStandard = '1' #δ�淶
#FtdcTradeSourceType��һ���ɽ���Դ����
THOST_FTDC_TSRC_NORMAL = '0' #���Խ�������ͨ�ر�
THOST_FTDC_TSRC_QUERY = '1' #���Բ�ѯ
#FtdcFBTPassWordTypeType��һ��������������
THOST_FTDC_PWT_Transfer = '2' #ת��
THOST_FTDC_PWT_Trade = '3' #����
THOST_FTDC_PWT_Query = '0' #��ѯ
THOST_FTDC_PWT_Fetch = '1' #ȡ��
#FtdcGenderType��һ���Ա�����
THOST_FTDC_GD_Unknown = '0' #δ֪״̬
THOST_FTDC_GD_Female = '2' #Ů
THOST_FTDC_GD_Male = '1' #��
#TKSConditionalOrderSelectResultType///ѡ����
KSCOS_Select_ABORT = '2' #��ֹ
KSCOS_Select_AGAIN = '0' #����
KSCOS_Select_SKIP = '1' #����
#FtdcContingentConditionType��һ��������������
THOST_FTDC_CC_BidPriceGreaterThanStopPrice = 'D' #��һ�۴���������
THOST_FTDC_CC_AskPriceLesserEqualStopPrice = 'C' #��һ��С�ڵ���������
THOST_FTDC_CC_AskPriceGreaterThanStopPrice = '9' #��һ�۴���������
THOST_FTDC_CC_LastPriceLesserThanStopPrice = '7' #���¼�С��������
THOST_FTDC_CC_LastPriceGreaterEqualStopPrice = '6' #���¼۴��ڵ���������
THOST_FTDC_CC_BidPriceGreaterEqualStopPrice = 'E' #��һ�۴��ڵ���������
THOST_FTDC_CC_LastPriceLesserEqualStopPrice = '8' #���¼�С�ڵ���������
THOST_FTDC_CC_TouchProfit = '3' #ֹӮ
THOST_FTDC_CC_ParkedOrder = '4' #Ԥ��
THOST_FTDC_CC_AskPriceGreaterEqualStopPrice = 'A' #��һ�۴��ڵ���������
THOST_FTDC_CC_BidPriceLesserEqualStopPrice = 'H' #��һ��С�ڵ���������
THOST_FTDC_CC_LastPriceGreaterThanStopPrice = '5' #���¼۴���������
THOST_FTDC_CC_BidPriceLesserThanStopPrice = 'F' #��һ��С��������
THOST_FTDC_CC_AskPriceLesserThanStopPrice = 'B' #��һ��С��������
THOST_FTDC_CC_Immediately = '1' #����
THOST_FTDC_CC_Touch = '2' #ֹ��
#FtdcFileFormatType��һ���ļ���ʽ����
THOST_FTDC_FFT_Txt = '0' #�ı��ļ�(.txt)
THOST_FTDC_FFT_DBF = '2' #DBF�ļ�(.dbf)
THOST_FTDC_FFT_Zip = '1' #ѹ���ļ�(.zip)
#FtdcInstLifePhaseType��һ����Լ��������״̬����
THOST_FTDC_IP_NotStart = '0' #δ����
THOST_FTDC_IP_Expired = '3' #����
THOST_FTDC_IP_Pause = '2' #ͣ��
THOST_FTDC_IP_Started = '1' #����
#FtdcFundStatusType��һ���ʽ�״̬����
THOST_FTDC_FS_Check = '2' #�Ѹ���
THOST_FTDC_FS_Charge = '3' #�ѳ���
THOST_FTDC_FS_Record = '1' #��¼��
#FtdcAlgoTypeType��һ���㷨��������
THOST_FTDC_AT_HandlePositionAlgo = '1' #�ֲִ����㷨
THOST_FTDC_AT_FindMarginRateAlgo = '2' #Ѱ�ұ�֤�����㷨
#FtdcHandlePositionAlgoIDType��һ���ֲִ����㷨�������
THOST_FTDC_HPA_Base = '1' #����
THOST_FTDC_HPA_CZCE = '3' #֣����Ʒ������
THOST_FTDC_HPA_DCE = '2' #������Ʒ������
#FtdcForceCloseTypeType��һ��ǿƽ����������
THOST_FTDC_FCT_Single = '1' #��һͶ���߸���ǿƽ
THOST_FTDC_FCT_Group = '2' #����Ͷ���߸���ǿƽ
THOST_FTDC_FCT_Manual = '0' #�ֹ�ǿƽ
#FtdcDataSyncStatusType��һ������ͬ��״̬����
THOST_FTDC_DS_Synchronized = '3' #��ͬ��
THOST_FTDC_DS_Asynchronous = '1' #δͬ��
THOST_FTDC_DS_Synchronizing = '2' #ͬ����
#FtdcFBTEncryModeType��һ�����ܷ�ʽ����
THOST_FTDC_EM_NoEncry = '0' #������
THOST_FTDC_EM_3DES = '2' #3DES
THOST_FTDC_EM_DES = '1' #DES
#FtdcBrokerDataSyncStatusType��һ�����͹�˾����ͬ��״̬����
THOST_FTDC_BDS_Synchronizing = '2' #ͬ����
THOST_FTDC_BDS_Synchronized = '1' #��ͬ��
#FtdcMarginPriceTypeType��һ����֤��۸���������
THOST_FTDC_MPT_OpenPrice = '4' #���ּ�
THOST_FTDC_MPT_PreSettlementPrice = '1' #������
THOST_FTDC_MPT_AveragePrice = '3' #�ɽ�����
THOST_FTDC_MPT_SettlementPrice = '2' #���¼�
#FtdcCheckStatusType��һ�����˼�������
THOST_FTDC_CHS_Init = '0' #δ����
THOST_FTDC_CHS_Checking = '1' #������
THOST_FTDC_CHS_Refuse = '3' #�ܾ�
THOST_FTDC_CHS_Cancel = '4' #����
THOST_FTDC_CHS_Checked = '2' #�Ѹ���
#FtdcOrderPriceTypeType��һ�������۸���������
THOST_FTDC_OPT_AskPrice1PlusTwoTicks = 'A' #��һ�۸����ϸ�2��ticks
THOST_FTDC_OPT_LastPricePlusTwoTicks = '6' #���¼۸����ϸ�2��ticks
THOST_FTDC_OPT_AskPrice1PlusOneTicks = '9' #��һ�۸����ϸ�1��ticks
THOST_FTDC_OPT_BidPrice1 = 'C' #��һ��
THOST_FTDC_OPT_LimitPrice = '2' #�޼�
THOST_FTDC_OPT_LastPricePlusOneTicks = '5' #���¼۸����ϸ�1��ticks
THOST_FTDC_OPT_LastPrice = '4' #���¼�
THOST_FTDC_OPT_AskPrice1 = '8' #��һ��
THOST_FTDC_OPT_AskPrice1PlusThreeTicks = 'B' #��һ�۸����ϸ�3��ticks
THOST_FTDC_OPT_AnyPrice = '1' #�����
THOST_FTDC_OPT_BestPrice = '3' #���ż�
THOST_FTDC_OPT_LastPricePlusThreeTicks = '7' #���¼۸����ϸ�3��ticks
THOST_FTDC_OPT_BidPrice1PlusOneTicks = 'D' #��һ�۸����ϸ�1��ticks
THOST_FTDC_OPT_BidPrice1PlusTwoTicks = 'E' #��һ�۸����ϸ�2��ticks
THOST_FTDC_OPT_BidPrice1PlusThreeTicks = 'F' #��һ�۸����ϸ�3��ticks
#FtdcFundEventTypeType��һ���ʽ���������������
THOST_FTDC_FET_InvestorWithdrawAlm = '4' #Ͷ���߿����ʽ����
THOST_FTDC_FET_TodayRestriction = '1' #����ת���޶�
THOST_FTDC_FET_Credit = '3' #�ʽ𶳽�
THOST_FTDC_FET_Transfer = '2' #������ˮ
THOST_FTDC_FET_InvestorFundIO = '8' #Ͷ���߳����
THOST_FTDC_FET_ExchangeFundIO = '7' #�����������
THOST_FTDC_FET_Restriction = '0' #ת���޶�
THOST_FTDC_FET_BankRestriction = '5' #���������ʻ�ת���޶�
THOST_FTDC_FET_Accountregister = '6' #����ǩԼ�˻�
#FtdcIncludeCloseProfitType��һ���Ƿ����ƽ��ӯ������
THOST_FTDC_ICP_NotInclude = '2' #������ƽ��ӯ��
THOST_FTDC_ICP_Include = '0' #����ƽ��ӯ��
#FtdcExchangeIDTypeType��һ���������������
THOST_FTDC_EIDT_CFFEX = 'J' #�й������ڻ�������
THOST_FTDC_EIDT_DCE = 'D' #������Ʒ������
THOST_FTDC_EIDT_SHFE = 'S' #�Ϻ��ڻ�������
THOST_FTDC_EIDT_CZCE = 'Z' #֣����Ʒ������
#FtdcTxnEndFlagType��һ������ת�ʻ�ת�����־����
THOST_FTDC_TEF_Success = '1' #�ɹ�����
THOST_FTDC_TEF_Failed = '2' #ʧ�ܽ���
THOST_FTDC_TEF_CommuFailedNeedManualProcess = '5' #ͨѶ�쳣 �����˹�����
THOST_FTDC_TEF_Abnormal = '3' #�쳣��
THOST_FTDC_TEF_ManualProcessedForException = '4' #���˹��쳣����
THOST_FTDC_TEF_NormalProcessing = '0' #����������
THOST_FTDC_TEF_SysErrorNeedManualProcess = '6' #ϵͳ�������˹�����
#FtdcSendMethodType��һ�����ͷ�ʽ����
THOST_FTDC_UOASM_ByFile = '2' #���ӷ���
THOST_FTDC_UOASM_ByAPI = '1' #�ļ�����
#FtdcTransferTypeType��һ������ת����������
THOST_FTDC_TT_BankToFuture = '0' #����ת�ڻ�
THOST_FTDC_TT_FutureToBank = '1' #�ڻ�ת����
#FtdcIdCardTypeType��һ��֤����������
THOST_FTDC_ICT_LicenseNo = '9' #Ӫҵִ�պ�
THOST_FTDC_ICT_TaxNo = 'A' #˰��ǼǺ�
THOST_FTDC_ICT_OfficerIDCard = '2' #����֤
THOST_FTDC_ICT_IDCard = '1' #���֤
THOST_FTDC_ICT_TaiwanCompatriotIDCard = '7' #̨��֤
THOST_FTDC_ICT_OtherCard = 'x' #����֤��
THOST_FTDC_ICT_PoliceIDCard = '3' #����֤
THOST_FTDC_ICT_Passport = '6' #����
THOST_FTDC_ICT_EID = '0' #��֯��������
THOST_FTDC_ICT_HomeComingCard = '8' #����֤
THOST_FTDC_ICT_HouseholdRegister = '5' #���ڲ�
THOST_FTDC_ICT_SoldierIDCard = '4' #ʿ��֤
#FtdcAMLGenStatusType��һ��Aml���ɷ�ʽ����
THOST_FTDC_GEN_Program = '0' #��������
THOST_FTDC_GEN_HandWork = '1' #�˹�����
#FtdcRiskLevelType��һ�����յȼ�����
THOST_FTDC_FAS_Normal = '2' #��ͨ�ͻ�
THOST_FTDC_FAS_Risk = '4' #���տͻ�
THOST_FTDC_FAS_Focus = '3' #��ע�ͻ�
THOST_FTDC_FAS_Low = '1' #�ͷ��տͻ�
#FtdcInstrumentStatusType��һ����Լ����״̬����
THOST_FTDC_IS_Continous = '2' #��������
THOST_FTDC_IS_AuctionMatch = '5' #���Ͼ��۴��
THOST_FTDC_IS_BeforeTrading = '0' #����ǰ
THOST_FTDC_IS_Closed = '6' #����
THOST_FTDC_IS_AuctionOrdering = '3' #���Ͼ��۱���
THOST_FTDC_IS_AuctionBalance = '4' #���Ͼ��ۼ۸�ƽ��
THOST_FTDC_IS_NoTrading = '1' #�ǽ���
#FtdcSettlementBillTypeType��һ�����㵥��������
THOST_FTDC_ST_Day = '0' #�ձ�
THOST_FTDC_ST_Month = '1' #�±�
#FtdcOrganLevelType��һ��������������
THOST_FTDC_OL_Branch = '2' #���з����Ļ��ڻ���˾Ӫҵ��
THOST_FTDC_OL_HeadQuarters = '1' #�������л������ܲ�
#FtdcInstitutionTypeType��һ�������������
THOST_FTDC_TS_Future = '1' #����
THOST_FTDC_TS_Bank = '0' #����
THOST_FTDC_TS_Store = '2' #ȯ��
#FtdcSecuAccTypeType��һ���ڻ��ʺ���������
THOST_FTDC_SAT_CardID = '2' #�ʽ𿨺�
THOST_FTDC_SAT_SZStockholderID = '4' #���ڹɶ��ʺ�
THOST_FTDC_SAT_AccountID = '1' #�ʽ��ʺ�
THOST_FTDC_SAT_SHStockholderID = '3' #�Ϻ��ɶ��ʺ�
#FtdcYesNoIndicatorType��һ���ǻ���ʶ����
THOST_FTDC_YNI_No = '1' #��
THOST_FTDC_YNI_Yes = '0' #��
#FtdcDirectionType��һ��������������
THOST_FTDC_D_Buy = '0' #��
THOST_FTDC_D_Sell = '1' #��
#FtdcByInvestorRangeType��һ��Ͷ���߷�Χͳ�Ʒ�ʽ����
THOST_FTDC_BIR_All = '2' #ͳ������
THOST_FTDC_BIR_Property = '1' #����ͳ��
#FtdcPassWordKeyTypeType��һ����Կ��������
THOST_FTDC_PWKT_MessageKey = '3' #������Կ
THOST_FTDC_PWKT_ExchangeKey = '0' #������Կ
THOST_FTDC_PWKT_MACKey = '2' #MAC��Կ
THOST_FTDC_PWKT_PassWordKey = '1' #������Կ
#FtdcExchangePropertyType��һ����������������
THOST_FTDC_EXP_GenOrderByTrade = '1' #���ݳɽ����ɱ���
THOST_FTDC_EXP_Normal = '0' #����
#FtdcUserRightTypeType��һ���ͻ�Ȩ����������
THOST_FTDC_URT_EMail = '3' #�ʼĽ��㵥
THOST_FTDC_URT_Logon = '1' #��¼
THOST_FTDC_URT_Transfer = '2' #����ת��
THOST_FTDC_URT_Fax = '4' #������㵥
THOST_FTDC_URT_ConditionOrder = '5' #������
#FtdcBusinessTypeType��һ��ҵ����������
THOST_FTDC_BT_Notice = '3' #֪ͨ
THOST_FTDC_BT_Response = '2' #Ӧ��
THOST_FTDC_BT_Request = '1' #����
#FtdcTradeParamIDType��һ������ϵͳ������������
THOST_FTDC_TPID_RiskModeGlobal = 'G' #ϵͳ�����㷨�Ƿ�ȫ�� 0-�� 1-��
THOST_FTDC_TPID_EncryptionStandard = 'E' #ϵͳ�����㷨
THOST_FTDC_TPID_RiskMode = 'R' #ϵͳ�����㷨
#FtdcReturnPatternType��һ������ģʽ����
THOST_FTDC_RP_ByFeeOnHand = '2' #������������
THOST_FTDC_RP_ByVolume = '1' #���ɽ�����
#FtdcFBTTransferDirectionType��һ������ת�ʷ�������
THOST_FTDC_FBTTD_FromBankToFuture = '1' #�������ת�ڻ�
THOST_FTDC_FBTTD_FromFutureToBank = '2' #�����ڻ�ת����
#FtdcFlexStatModeType��һ����Ʒ��Լͳ�Ʒ�ʽ����
THOST_FTDC_FSM_Product = '1' #��Ʒͳ��
THOST_FTDC_FSM_Exchange = '2' #������ͳ��
THOST_FTDC_FSM_All = '3' #ͳ������
#FtdcTransferDirectionType��һ���Ʋַ�������
THOST_FTDC_TD_Out = '0' #�Ƴ�
THOST_FTDC_TD_In = '1' #����
#FtdcBillHedgeFlagType��һ��Ͷ���ױ���־����
THOST_FTDC_BHF_Hedge = '3' #�ױ�
THOST_FTDC_BHF_Speculation = '1' #Ͷ��
THOST_FTDC_BHF_Arbitrage = '2' #����
#FtdcFBTTradeCodeEnumType��һ�����ڽ��״���ö������
THOST_FTDC_FTC_BrokerLaunchBankToBroker = '202001' #�ڻ���������ת�ڻ�
THOST_FTDC_FTC_BrokerLaunchBrokerToBank = '202002' #�ڻ������ڻ�ת����
THOST_FTDC_FTC_BankLaunchBrokerToBank = '102002' #���з����ڻ�ת����
THOST_FTDC_FTC_BankLaunchBankToBroker = '102001' #���з�������ת�ڻ�
#FtdcFreezeStatusType��һ������״̬����
THOST_FTDC_FRS_Normal = '1' #��Ծ
THOST_FTDC_FRS_Freeze = '0' #����
#FtdcProcessTypeType��һ�����̹�����������
THOST_FTDC_PT_ModifyIDCard = '3' #�޸������Ϣ
THOST_FTDC_PT_ExchCancelBak = '6' #��������������
THOST_FTDC_PT_StandardAccount = '7' #�����淶����
THOST_FTDC_PT_ExchOpenBak = '5' #��������������
THOST_FTDC_PT_ActiveFreezeAccount = '9' #���������˻�
THOST_FTDC_PT_CancelTradingCode = '2' #�������ױ���
THOST_FTDC_PT_ModifyNoIDCard = '4' #�޸�һ����Ϣ
THOST_FTDC_PT_ApplyTradingCode = '1' #���뽻�ױ���
THOST_FTDC_PT_FreezeAccount = '8' #�˻�����
#FtdcPositionTypeType��һ���ֲ���������
THOST_FTDC_PT_Net = '1' #���ֲ�
THOST_FTDC_PT_Gross = '2' #�ۺϳֲ�
#FtdcOffsetFlagType��һ����ƽ��־����
THOST_FTDC_OF_CloseToday = '3' #ƽ��
THOST_FTDC_OF_ForceOff = '5' #ǿ��
THOST_FTDC_OF_LocalForceClose = '6' #����ǿƽ
THOST_FTDC_OF_Close = '1' #ƽ��
THOST_FTDC_OF_Open = '0' #����
THOST_FTDC_OF_CloseYesterday = '4' #ƽ��
THOST_FTDC_OF_ForceClose = '2' #ǿƽ
#FtdcUsedStatusType��һ����Ч״̬����
THOST_FTDC_CHU_Fail = '2' #��Чʧ��
THOST_FTDC_CHU_Unused = '0' #δ��Ч
THOST_FTDC_CHU_Used = '1' #����Ч
#FtdcProcessStatusType��һ������ת�ʷ�����״̬����
THOST_FTDC_PSS_Finished = '2' #�������
THOST_FTDC_PSS_NotProcess = '0' #δ����
THOST_FTDC_PSS_StartProcess = '1' #��ʼ����
#FtdcFeeAcceptStyleType��һ����������ȡ��ʽ����
THOST_FTDC_FAS_FixFee = '4' #��ָ����������ȡ
THOST_FTDC_FAS_ByDeliv = '2' #��������ȡ
THOST_FTDC_FAS_None = '3' #����
THOST_FTDC_FAS_ByTrade = '1' #��������ȡ
#FtdcPosiDirectionType��һ���ֲֶ�շ�������
THOST_FTDC_PD_Net = '1' #��
THOST_FTDC_PD_Short = '3' #��ͷ
THOST_FTDC_PD_Long = '2' #��ͷ
#FtdcBankFlagType��һ������ͳһ��ʶ��������
THOST_FTDC_BF_CBC = '4' #��������
THOST_FTDC_BF_ABC = '2' #ũҵ����
THOST_FTDC_BF_BOC = '5' #��ͨ����
THOST_FTDC_BF_BC = '3' #�й�����
THOST_FTDC_BF_ICBC = '1' #��������
THOST_FTDC_BF_Other = 'Z' #��������
#FtdcFileIDType��һ���ļ���ʶ����
THOST_FTDC_FI_SubEntryFund = 'O' #Ͷ���߷����ʽ�����
THOST_FTDC_FI_InvestorPosition = 'P' #Ͷ���ֲ߳�����
THOST_FTDC_FI_CSRCData = 'R' #�ϱ���֤������������
THOST_FTDC_FI_CZCECombinationPos = 'C' #֣������ϳֲ�����
THOST_FTDC_FI_SettlementFund = 'F' #�ʽ�����
THOST_FTDC_FI_Trade = 'T' #�ɽ�����
#FtdcVirTradeStatusType��һ������״̬����
THOST_FTDC_VTS_SucceedEnd = '1' #�ɹ�����
THOST_FTDC_VTS_NaturalDeal = '0' #����������
THOST_FTDC_VTS_Exception = '3' #�쳣��
THOST_FTDC_VTS_FailedEND = '2' #ʧ�ܽ���
THOST_FTDC_VTS_SysException = '6' #ϵͳ�������˹�����
THOST_FTDC_VTS_MesException = '5' #ͨѶ�쳣 �����˹�����
THOST_FTDC_VTS_ManualDeal = '4' #���˹��쳣����
#FtdcExchangeConnectStatusType��һ������������״̬����
THOST_FTDC_ECS_GotInformation = '9' #�Ѿ���ȡ��Ϣ
THOST_FTDC_ECS_QryInstrumentSent = '2' #�Ѿ�������Լ��ѯ����
THOST_FTDC_ECS_NoConnection = '1' #û���κ�����
#FtdcSysSettlementStatusType��һ��ϵͳ����״̬����
THOST_FTDC_SS_NonActive = '1' #����Ծ
THOST_FTDC_SS_Settlement = '4' #����
THOST_FTDC_SS_Operating = '3' #����
THOST_FTDC_SS_Startup = '2' #����
THOST_FTDC_SS_SettlementFinished = '5' #�������
#FtdcInvestorTypeType��һ��Ͷ������������
THOST_FTDC_CT_Company = '1' #����
THOST_FTDC_CT_Fund = '2' #Ͷ�ʻ���
THOST_FTDC_CT_Person = '0' #��Ȼ��
#FtdcReturnStyleType��һ����Ʒ�ַ�����ʽ����
THOST_FTDC_RS_ByProduct = '2' #��Ʒ��
THOST_FTDC_RS_All = '1' #������Ʒ��
#FtdcUpdateFlagType��һ������״̬����
THOST_FTDC_UF_TCSuccess = '3' #���½��ױ���ɹ�
THOST_FTDC_UF_Fail = '2' #����ȫ����Ϣʧ��
THOST_FTDC_UF_TCFail = '4' #���½��ױ���ʧ��
THOST_FTDC_UF_Cancel = '5' #�Ѷ���
THOST_FTDC_UF_NoUpdate = '0' #δ����
THOST_FTDC_UF_Success = '1' #����ȫ����Ϣ�ɹ�
#FtdcByGroupType��һ������ͳ�Ʊ��ͻ�ͳ�Ʒ�ʽ����
THOST_FTDC_BG_Group = '1' #����ͳ��
THOST_FTDC_BG_Investor = '2' #��Ͷ����ͳ��
#FtdcOpenOrDestroyType��һ���������������
THOST_FTDC_OOD_Destroy = '0' #����
THOST_FTDC_OOD_Open = '1' #����
#FtdcSettleManagerLevelType��һ���������õȼ�����
THOST_FTDC_SML_Must = '1' #��Ҫ
THOST_FTDC_SML_Alarm = '2' #����
THOST_FTDC_SML_Ignore = '4' #�����
THOST_FTDC_SML_Prompt = '3' #��ʾ
#FtdcCustTypeType��һ���ͻ���������
THOST_FTDC_CUSTT_Institution = '1' #������
THOST_FTDC_CUSTT_Person = '0' #��Ȼ��
#FtdcBasisPriceTypeType��һ�����ƻ�׼����������
THOST_FTDC_IPT_LaseClose = '2' #��һ��Լ���̼�
THOST_FTDC_IPT_LastSettlement = '1' #��һ��Լ�����
#FtdcCheckLevelType��һ�����˼�������
THOST_FTDC_CL_Two = '2' #��������
THOST_FTDC_CL_One = '1' #һ������
THOST_FTDC_CL_Zero = '0' #�㼶����
#FtdcExportFileTypeType��һ�������ļ���������
THOST_FTDC_EFT_DBF = '2' #DBF
THOST_FTDC_EFT_CSV = '0' #CSV
THOST_FTDC_EFT_EXCEL = '1' #Excel
#FtdcRightParamTypeType��һ��������������
THOST_FTDC_RPT_Freeze = '1' #���߻�
THOST_FTDC_RPT_FreezeActive = '2' #�������߻�
#FtdcBrokerTypeType��һ�����͹�˾��������
THOST_FTDC_BT_Trade = '0' #���׻�Ա
THOST_FTDC_BT_TradeSettle = '1' #���׽����Ա
#FtdcOrderTypeType��һ��������������
THOST_FTDC_ORDT_Combination = '3' #��ϱ���
THOST_FTDC_ORDT_Normal = '0' #����
THOST_FTDC_ORDT_DeriveFromCombination = '2' #�������
THOST_FTDC_ORDT_DeriveFromQuote = '1' #��������
THOST_FTDC_ORDT_Swap = '5' #������
THOST_FTDC_ORDT_ConditionalOrder = '4' #������
#TKSCloseModeType///ƽ�ּ۸�����
KSPL_Close_SalePrice = '1' #�Ӽ�������
KSPL_Close_MarketPrice = '0' #�м�
KSPL_Close_LastPrice = '2' #�Ӽ����¼�
#FtdcCFMMCKeyKindType��һ����̬��Կ���(��֤����)����
THOST_FTDC_CFMMCKK_MANUAL = 'M' #CFMMC�ֶ�����
THOST_FTDC_CFMMCKK_REQUEST = 'R' #�����������
THOST_FTDC_CFMMCKK_AUTO = 'A' #CFMMC�Զ�����
#FtdcBankAcountOriginType��һ���˻���Դ����
THOST_FTDC_BAO_ByFBTransfer = '1' #����ת��
THOST_FTDC_BAO_ByAccProperty = '0' #�ֹ�¼��
#FtdcAvailabilityFlagType��һ����Ч��־����
THOST_FTDC_AVAF_Invalid = '0' #δȷ��
THOST_FTDC_AVAF_Valid = '1' #��Ч
THOST_FTDC_AVAF_Repeal = '2' #����
#FtdcLimitUseTypeType��һ����ֵ���ʹ����������
THOST_FTDC_LUT_Repeatable = '1' #���ظ�ʹ��
THOST_FTDC_LUT_Unrepeatable = '2' #�����ظ�ʹ��
#FtdcAmlDateTypeType��һ��������������
THOST_FTDC_AMLDT_DrawDay = '0' #�������
THOST_FTDC_AMLDT_TouchDay = '1' #��������
#FtdcInvestorSettlementParamIDType��һ��Ͷ���߽��������������
THOST_FTDC_ISPI_MortgageRatio = '4' #��Ѻ����
THOST_FTDC_ISPI_BaseMargin = '1' #������֤��
THOST_FTDC_ISPI_BillDeposit = '9' #���㵥(����)Ȩ����ڽ��
THOST_FTDC_ISPI_MarginWay = '5' #��֤���㷨
THOST_FTDC_ISPI_LowestInterest = '2' #���Ȩ���׼
#FtdcSponsorTypeType��һ����������
THOST_FTDC_SPTYPE_Bank = '1' #����
THOST_FTDC_SPTYPE_Broker = '0' #����
#FtdcBrokerFunctionCodeType��һ�����͹�˾���ܴ�������
THOST_FTDC_BFC_TradeQry = 'c' #���ײ�ѯ�����ɽ���ί��
THOST_FTDC_BFC_CfgRiskLevelStd = 'G' #���ռ����׼����
THOST_FTDC_BFC_QueryFund = 'k' #�ʽ��ѯ
THOST_FTDC_BFC_RiskPredict = 'y' #����Ԥ��
THOST_FTDC_BFC_log = 'a' #ϵͳ���ܣ�����/�ǳ�/�޸������
THOST_FTDC_BFC_BachSyncBrokerData = '4' #����ͬ�����͹�˾����
THOST_FTDC_BFC_QueryTrade = 'm' #�ɽ���ѯ
THOST_FTDC_BFC_OrderAction = '6' #��������
THOST_FTDC_BFC_SyncBrokerData = '3' #ͬ�����͹�˾����
THOST_FTDC_BFC_RemainCalc = 'w' #Ȩ�淴��
THOST_FTDC_BFC_UserPasswordUpdate = '2' #����û�����
THOST_FTDC_BFC_RiskTargetSetup = 'A' #���ָ������
THOST_FTDC_BFC_QueryRiskNotify = 'q' #����֪ͨ��ѯ
THOST_FTDC_BFC_Trade = 'd' #���׹��ܣ�����������
THOST_FTDC_BFC_QueryMarketData = 'o' #�����ѯ
THOST_FTDC_BFC_PressTest = 'v' #ѹ������
THOST_FTDC_BFC_QueryInvestor = 's' #Ͷ������Ϣ��ѯ
THOST_FTDC_BFC_AllQuery = '7' #ȫ����ѯ
THOST_FTDC_BFC_QueryOrder = 'l' #������ѯ
THOST_FTDC_BFC_QueryUserEvent = 'p' #�û��¼���ѯ
THOST_FTDC_BFC_MarketDataWarn = 'B' #����Ԥ��
THOST_FTDC_BFC_OrderInsert = '5' #��������
THOST_FTDC_BFC_BrokerDeposit = 'j' #�쿴���͹�˾�ʽ�Ȩ��
THOST_FTDC_BFC_Virement = 'e' #����ת��
THOST_FTDC_BFC_CfgBizNotice = 'D' #ҵ��֪ͨģ������
THOST_FTDC_BFC_BaseQry = 'b' #������ѯ����ѯ�������ݣ����Լ���������ȳ���
THOST_FTDC_BFC_ForceClose = 'u' #ǿƽ
THOST_FTDC_BFC_RiskNotice = 'i' #���֪ͨ����
THOST_FTDC_BFC_NetPositionInd = 'x' #���ֱֲ�֤��ָ��
THOST_FTDC_BFC_QueryFundChange = 'r' #������ѯ
THOST_FTDC_BFC_QueryPosition = 'n' #�ֲֲ�ѯ
THOST_FTDC_BFC_QryBizNotice = 'C' #ҵ��֪ͨ��ѯ
THOST_FTDC_BFC_SyncOTP = 'E' #ͬ����̬����
THOST_FTDC_BFC_QueryTradingCode = 't' #���ױ����ѯ
THOST_FTDC_BFC_DataExport = 'z' #���ݵ���
THOST_FTDC_BFC_ForceUserLogout = '1' #ǿ���û��ǳ�
THOST_FTDC_BFC_Risk = 'f' #���ռ��
THOST_FTDC_BFC_Session = 'g' #��ѯ/������ѯ�Ự�����˵�
THOST_FTDC_BFC_RiskNoticeCtl = 'h' #���֪ͨ����
THOST_FTDC_BFC_SendBizNotice = 'F' #����ҵ��֪ͨ
#FtdcOTPStatusType��һ����̬����״̬����
THOST_FTDC_OTPS_Unused = '0' #δʹ��
THOST_FTDC_OTPS_Used = '1' #��ʹ��
THOST_FTDC_OTPS_Disuse = '2' #ע��
#FtdcSendTypeType��һ������״̬����
THOST_FTDC_UOAST_Success = '4' #���ճɹ�
THOST_FTDC_UOAST_Generated = '2' #������
THOST_FTDC_UOAST_Sended = '1' #�ѷ���
THOST_FTDC_UOAST_SendFail = '3' #����ʧ��
THOST_FTDC_UOAST_NoSend = '0' #δ����
THOST_FTDC_UOAST_Cancel = '6' #ȡ������
THOST_FTDC_UOAST_Fail = '5' #����ʧ��
#FtdcOrganTypeType��һ��������������
THOST_FTDC_OT_Future = '2' #����ǰ��
THOST_FTDC_OT_Bank = '1' #���д���
THOST_FTDC_OT_PlateForm = '9' #����ת��ƽ̨����
#FtdcReturnStandardType��һ��������׼����
THOST_FTDC_RSD_ByPeriod = '1' #�ֽ׶η���
THOST_FTDC_RSD_ByStandard = '2' #��ĳһ��׼
#FtdcOrderActionStatusType��һ����������״̬����
THOST_FTDC_OAS_Rejected = 'c' #�Ѿ����ܾ�
THOST_FTDC_OAS_Submitted = 'a' #�Ѿ��ύ
THOST_FTDC_OAS_Accepted = 'b' #�Ѿ�����
#FtdcRateTypeType��һ��������������
THOST_FTDC_RATETYPE_MarginRate = '2' #��֤����
#FtdcSysOperTypeType��һ��ϵͳ��־������������
THOST_FTDC_SoT_BaseParam = '4' #������������
THOST_FTDC_SoT_InvestorPersonalityInfo = 'F' #Ͷ���߸�����Ϣά��
THOST_FTDC_SoT_RoleManager = '2' #��ɫ����
THOST_FTDC_SoT_InvestorAuthority = 'C' #Ͷ����Ȩ�޹���
THOST_FTDC_SoT_DepartmentCopy = '9' #��֯�ܹ����ѯ���ิ��
THOST_FTDC_SoT_UpdatePassword = '0' #�޸Ĳ���Ա����
THOST_FTDC_SoT_PropertySet = 'D' #��������
THOST_FTDC_SoT_SetUserID = '5' #���ò���Ա
THOST_FTDC_SoT_Tradingcode = 'A' #���ױ������
THOST_FTDC_SoT_DepartmentManager = '8' #��֯�ܹ�����
THOST_FTDC_SoT_UserIpRestriction = '7' #�û�IP����
THOST_FTDC_SoT_ReSetInvestorPasswd = 'E' #����Ͷ��������
THOST_FTDC_SoT_UserDepartment = '1' #����Ա��֯�ܹ���ϵ
THOST_FTDC_SoT_RoleFunction = '3' #��ɫ��������
THOST_FTDC_SoT_InvestorStatus = 'B' #Ͷ����״̬ά��
THOST_FTDC_SoT_SetUserRole = '6' #�û���ɫ����
#FtdcPropertyInvestorRangeType��һ��Ͷ���߷�Χ����
THOST_FTDC_PIR_All = '1' #����
THOST_FTDC_PIR_Property = '2' #Ͷ��������
THOST_FTDC_PIR_Single = '3' #��һͶ����
#FtdcApplyOperateIDType��һ�����붯������
THOST_FTDC_AOID_CancelInvestor = '6' #����
THOST_FTDC_AOID_OpenInvestor = '1' #����
THOST_FTDC_AOID_CancelTradingCode = '5' #�������ױ���
THOST_FTDC_AOID_FreezeAccount = '8' #�˻�����
THOST_FTDC_AOID_ActiveFreezeAccount = '9' #���������˻�
THOST_FTDC_AOID_ModifyIDCard = '2' #�޸������Ϣ
THOST_FTDC_AOID_ModifyNoIDCard = '3' #�޸�һ����Ϣ
THOST_FTDC_AOID_ApplyTradingCode = '4' #���뽻�ױ���
#FtdcTimeConditionType��һ����Ч����������
THOST_FTDC_TC_GTC = '5' #����ǰ��Ч
THOST_FTDC_TC_GTD = '4' #ָ������ǰ��Ч
THOST_FTDC_TC_GFD = '3' #������Ч
THOST_FTDC_TC_GFA = '6' #���Ͼ�����Ч
THOST_FTDC_TC_IOC = '1' #������ɣ�������
THOST_FTDC_TC_GFS = '2' #������Ч
#TKSConditionalOrderType///��������������
KSCOS_TRIGGERTYPE_QUOTAIONANDTIME = '5' #�����ʱ�䴥��
KSCOS_TRIGGERTYPE_TIME = '2' #ʱ�䴥��
KSCOS_TRIGGERTYPE_QUOTATION = '0' #���鴥��
KSCOS_TRIGGERTYPE_OPEN = '1' #���̴���
#FtdcBatchStatusType��һ������״̬����
THOST_FTDC_BS_Uploaded = '2' #���ϴ�
THOST_FTDC_BS_NoUpload = '1' #δ�ϴ�
THOST_FTDC_BS_Failed = '3' #���ʧ��
#FtdcFeePayFlagType��һ������֧����־����
THOST_FTDC_FPF_BEN = '0' #�����淽֧������
THOST_FTDC_FPF_SHA = '2' #�ɷ��ͷ�֧������ķ��ã����淽֧�����ܵķ���
THOST_FTDC_FPF_OUR = '1' #�ɷ��ͷ�֧������
#FtdcSystemStatusType��һ��ϵͳ״̬����
THOST_FTDC_ES_Initialized = '4' #������ɳ�ʼ��
THOST_FTDC_ES_Closed = '6' #�������
THOST_FTDC_ES_Initialize = '3' #���׿�ʼ��ʼ��
THOST_FTDC_ES_Settlement = '7' #����
THOST_FTDC_ES_Close = '5' #���п�ʼ
THOST_FTDC_ES_NonActive = '1' #����Ծ
THOST_FTDC_ES_Startup = '2' #����
#FtdcPersonTypeType��һ����ϵ����������
THOST_FTDC_PST_LinkMan = '7' #Ͷ������ϵ��
THOST_FTDC_PST_Corporation = '6' #���˴���
THOST_FTDC_PST_Settlement = '4' #���㵥ȷ����
THOST_FTDC_PST_Open = '2' #������Ȩ��
THOST_FTDC_PST_Company = '5' #����
THOST_FTDC_PST_Order = '1' #ָ���µ���
THOST_FTDC_PST_Fund = '3' #�ʽ������
#FtdcFindMarginRateAlgoIDType��һ��Ѱ�ұ�֤�����㷨�������
THOST_FTDC_FMRA_DCE = '2' #������Ʒ������
THOST_FTDC_FMRA_Base = '1' #����
THOST_FTDC_FMRA_CZCE = '3' #֣����Ʒ������
#FtdcMoneyAccountStatusType��һ���ʽ��˻�״̬����
THOST_FTDC_MAS_Cancel = '1' #����
THOST_FTDC_MAS_Normal = '0' #����
#FtdcUserRangeType��һ������Ա��Χ����
THOST_FTDC_UR_Single = '1' #��һ����Ա
THOST_FTDC_UR_All = '0' #����
#FtdcAmlCheckLevelType��һ����˼�������
THOST_FTDC_AMLCL_CheckLevel1 = '1' #һ�����
THOST_FTDC_AMLCL_CheckLevel0 = '0' #�㼶���
THOST_FTDC_AMLCL_CheckLevel3 = '3' #�������
THOST_FTDC_AMLCL_CheckLevel2 = '2' #�������
#FtdcOTPTypeType��һ����̬������������
THOST_FTDC_OTP_NONE = '0' #�޶�̬����
THOST_FTDC_OTP_TOTP = '1' #ʱ������
#FtdcQuestionTypeType��һ��������Ϣ��������
THOST_FTDC_QT_Blank = '3' #���
THOST_FTDC_QT_Radio = '1' #��ѡ
THOST_FTDC_QT_Option = '2' #��ѡ
#FtdcFlowIDType��һ������ID����
THOST_FTDC_EvM_InvestorCommRateModel = '3' #Ͷ������������ģ���ϵ����
THOST_FTDC_EvM_InvestorRate = '2' #Ͷ����������������
THOST_FTDC_EvM_InvestorGroupFlow = '1' #Ͷ���߶�ӦͶ����������
#FtdcReasonType��һ����������
THOST_FTDC_RN_ZT = '1' #�ʽ���;
THOST_FTDC_RN_QT = '2' #����
THOST_FTDC_RN_CD = '0' #��
#FtdcFunctionCodeType��һ�����ܴ�������
THOST_FTDC_FC_OrderAction = '7' #��������
THOST_FTDC_FC_OrderInsert = '6' #��������
THOST_FTDC_FC_ParkedOrderAction = 'D' #��������
THOST_FTDC_FC_BrokerPasswordUpdate = '4' #������͹�˾����
THOST_FTDC_FC_SyncBrokerData = '9' #ͬ�����͹�˾����
THOST_FTDC_FC_DataAsync = '1' #�����첽��
THOST_FTDC_FC_ParkedOrderInsert = 'C' #��������
THOST_FTDC_FC_BachSyncBrokerData = 'A' #����ͬ�����͹�˾����
THOST_FTDC_FC_ForceUserLogout = '2' #ǿ���û��ǳ�
THOST_FTDC_FC_InvestorPasswordUpdate = '5' #���Ͷ���߿���
THOST_FTDC_FC_SyncSystemData = '8' #ͬ��ϵͳ����
THOST_FTDC_FC_SuperQuery = 'B' #������ѯ
THOST_FTDC_FC_UserPasswordUpdate = '3' #��������û�����
THOST_FTDC_FC_SyncOTP = 'E' #ͬ����̬����
#FtdcAlgorithmType��һ��ӯ���㷨����
THOST_FTDC_AG_OnlyLost = '2' #��ӯ���ƣ�������
THOST_FTDC_AG_None = '4' #��ӯ������������
THOST_FTDC_AG_All = '1' #��ӯ����������
THOST_FTDC_AG_OnlyGain = '3' #��ӯ�ƣ���������
#FtdcAccountSourceTypeType��һ���ʽ��˻���Դ����
THOST_FTDC_AST_FBTransfer = '0' #����ͬ��
THOST_FTDC_AST_ManualEntry = '1' #�ֹ�¼��
#FtdcSpecialCreateRuleType��һ������Ĵ�����������
THOST_FTDC_SC_NoSpringFestival = '1' #����������
THOST_FTDC_SC_NoSpecialRule = '0' #û�����ⴴ������
#FtdcRatioAttrType��һ��������������
THOST_FTDC_RA_Trade = '0' #���׷���
THOST_FTDC_RA_Settlement = '1' #�������
#FtdcSexType��һ���Ա�����
THOST_FTDC_SEX_None = '0' #δ֪
THOST_FTDC_SEX_Man = '1' #��
THOST_FTDC_SEX_Woman = '2' #Ů
#FtdcFundDirectionType��һ�������������
THOST_FTDC_FD_In = '1' #���
THOST_FTDC_FD_Out = '2' #����
#TKSConditionalTypeType///������������
KSCOS_GreaterEqualTermPrice = '0' #���ڵ���������
KSCOS_LesserThanTermPrice = '1' #С�ڵ���������
#FtdcExClientIDTypeType��һ�����ױ�����������
THOST_FTDC_ECIDT_Speculation = '3' #Ͷ��
THOST_FTDC_ECIDT_Arbitrage = '2' #����
THOST_FTDC_ECIDT_Hedge = '1' #�ױ�
#FtdcOrderSubmitStatusType��һ�������ύ״̬����
THOST_FTDC_OSS_InsertSubmitted = '0' #�Ѿ��ύ
THOST_FTDC_OSS_InsertRejected = '4' #�����Ѿ����ܾ�
THOST_FTDC_OSS_CancelSubmitted = '1' #�����Ѿ��ύ
THOST_FTDC_OSS_CancelRejected = '5' #�����Ѿ����ܾ�
THOST_FTDC_OSS_Accepted = '3' #�Ѿ�����
THOST_FTDC_OSS_ModifySubmitted = '2' #�޸��Ѿ��ύ
THOST_FTDC_OSS_ModifyRejected = '6' #�ĵ��Ѿ����ܾ�
#TKSConditionalOrderStatusType///������״̬
KSCOS_OrderStatus_WAITSELECT = '6' #�ȴ�ѡ��
KSCOS_OrderStatus_Deleted = '2' #ɾ��
KSCOS_OrderStatus_SENDTIMEOUT = '4' #���ͳ�ʱ
KSCOS_OrderStatus_TOUCHEDNOSEND = '3' #�Ѵ���δ����
KSCOS_OrderStatus_PAUSENOTOUCHED = '0' #��ͣ
KSCOS_OrderStatus_SENDSUCCESS = '5' #���ͳɹ�
KSCOS_OrderStatus_SELECTABORT = '8' #ѡ����ֹ
KSCOS_OrderStatus_ACTIVENOTOUCHED = '1' #δ����
KSCOS_OrderStatus_SELECTSKIP = '7' #ѡ������
#FtdcProductLifePhaseType��һ����Ʒ��������״̬����
THOST_FTDC_PLP_Active = '1' #��Ծ
THOST_FTDC_PLP_Canceled = '3' #ע��
THOST_FTDC_PLP_NonActive = '2' #����Ծ
#FtdcFundIOTypeType��һ���������������
THOST_FTDC_FIOT_Transfer = '2' #����ת��
THOST_FTDC_FIOT_FundIO = '1' #�����
#TKSSpringTypeType��һ�������۸���������
KSPL_SPRING_LastPrice = '0' #���¼�
KSPL_SPRING_SalePrice = '1' #������
#FtdcFBTUserEventTypeType��һ������ת���û��¼���������
THOST_FTDC_FBTUET_RepealFromFutureToBank = '7' #�����ڻ�ת����
THOST_FTDC_FBTUET_SignIn = '0' #ǩ��
THOST_FTDC_FBTUET_SyncKey = 'B' #��Կͬ��
THOST_FTDC_FBTUET_Other = 'Z' #����
THOST_FTDC_FBTUET_SignOut = 'A' #ǩ��
THOST_FTDC_FBTUET_RepealFromBankToFuture = '6' #��������ת�ڻ�
THOST_FTDC_FBTUET_FromFutureToBank = '2' #�ڻ�ת����
THOST_FTDC_FBTUET_FromBankToFuture = '1' #����ת�ڻ�
THOST_FTDC_FBTUET_OpenAccount = '3' #����
THOST_FTDC_FBTUET_ChangeAccount = '5' #��������˻�
THOST_FTDC_FBTUET_QueryBankAccount = '8' #��ѯ�����˻�
THOST_FTDC_FBTUET_QueryFutureAccount = '9' #��ѯ�ڻ��˻�
THOST_FTDC_FBTUET_CancelAccount = '4' #����
#FtdcManageStatusType��һ�����״̬����
THOST_FTDC_MSS_Point = '0' #ָ�����
THOST_FTDC_MSS_PrePoint = '1' #Ԥָ��
THOST_FTDC_MSS_CancelPoint = '2' #����ָ��
#FtdcFundTypeType��һ���ʽ���������
THOST_FTDC_FT_Deposite = '1' #���д��
THOST_FTDC_FT_ItemFund = '2' #�����ʽ�
THOST_FTDC_FT_Company = '3' #��˾����
#FtdcCertificationTypeType��һ��֤����������
THOST_FTDC_CFT_OtherCard = 'x' #����֤��
THOST_FTDC_CFT_SoldierIDCard = '3' #ʿ��֤
THOST_FTDC_CFT_HouseholdRegister = '5' #���ڲ�
THOST_FTDC_CFT_InstitutionCodeCard = '7' #��֯��������֤
THOST_FTDC_CFT_SuperDepAgree = 'a' #���ܲ�������
THOST_FTDC_CFT_IDCard = '0' #���֤
THOST_FTDC_CFT_OfficerIDCard = '2' #����֤
THOST_FTDC_CFT_TempLicenseNo = '8' #��ʱӪҵִ�պ�
THOST_FTDC_CFT_HomeComingCard = '4' #����֤
THOST_FTDC_CFT_Passport = '1' #����
THOST_FTDC_CFT_LicenseNo = '6' #Ӫҵִ�պ�
THOST_FTDC_CFT_NoEnterpriseLicenseNo = '9' #������ҵ�Ǽ�֤��
#FtdcRiskNotifyMethodType��һ������֪ͨ;������
THOST_FTDC_RNM_System = '0' #ϵͳ֪ͨ
THOST_FTDC_RNM_SMS = '1' #����֪ͨ
THOST_FTDC_RNM_Manual = '3' #�˹�֪ͨ
THOST_FTDC_RNM_EMail = '2' #�ʼ�֪ͨ
