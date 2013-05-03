/////////////////////////////////////////////////////////////////////////
/// ���˴� KSFT C++ => .Net Framework Adapter
/// Summary: ���顢���ס�����������ί��
/// Author:	ksftapi@gmail.com
/// Date: 20130304
/// Update List:
///   20130314 ��ӽ��׽ӿڵ�ί��
///   20130326 ���ע��
/////////////////////////////////////////////////////////////////////////

#pragma once

namespace KSFT
{
	// common deleagats

	///<summary>
	///�ͻ����뽻�׺�̨������ͨ������
	///</summary>
	public delegate void FrontConnected();
	///<summary>
	///�ͻ����뽻�׺�̨ͨ�����ӶϿ�
	///</summary>
	public delegate void FrontDisconnected(int nReason);
	///<summary>
	///������ʱ����
	///</summary>
	public delegate void HeartBeatWarning(int nTimeLapse);
	///<summary>
	///��¼������Ӧ
	///</summary>
	public delegate void RspUserLogin(ThostFtdcRspUserLoginField^ pRspUserLogin, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�ǳ�������Ӧ
	///</summary>
	public delegate void RspUserLogout(ThostFtdcUserLogoutField^ pUserLogout, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///����Ӧ��
	///</summary>
	public delegate void RspError(ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

	// marketdata 

	///<summary>
	///��������Ӧ��
	///</summary>
	public delegate void RspSubMarketData(ThostFtdcSpecificInstrumentField^ pSpecificInstrument, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///ȡ����������Ӧ��
	///</summary>
	public delegate void RspUnSubMarketData(ThostFtdcSpecificInstrumentField^ pSpecificInstrument, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�������֪ͨ
	///</summary>
	public delegate void RtnDepthMarketData(ThostFtdcDepthMarketDataField^ pDepthMarketData);

	// trader

	///<summary>
	///�ͻ�����֤��Ӧ
	///</summary>
	public delegate void RspAuthenticate(ThostFtdcRspAuthenticateField^ pRspAuthenticateField, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�û��������������Ӧ
	///</summary>
	public delegate void RspUserPasswordUpdate(ThostFtdcUserPasswordUpdateField^ pUserPasswordUpdate, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�ʽ��˻��������������Ӧ
	///</summary>
	public delegate void RspTradingAccountPasswordUpdate(ThostFtdcTradingAccountPasswordUpdateField^ pTradingAccountPasswordUpdate, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///����¼��������Ӧ
	///</summary>
	public delegate void RspOrderInsert(ThostFtdcInputOrderField^ pInputOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///Ԥ��¼��������Ӧ
	///</summary>
	public delegate void RspParkedOrderInsert(ThostFtdcParkedOrderField^ pParkedOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///Ԥ�񳷵�¼��������Ӧ
	///</summary>
	public delegate void RspParkedOrderAction(ThostFtdcParkedOrderActionField^ pParkedOrderAction, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///��������������Ӧ
	///</summary>
	public delegate void RspOrderAction(ThostFtdcInputOrderActionField^ pInputOrderAction, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///��ѯ��󱨵�������Ӧ
	///</summary>
	public delegate void RspQueryMaxOrderVolume(ThostFtdcQueryMaxOrderVolumeField^ pQueryMaxOrderVolume, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///Ͷ���߽�����ȷ����Ӧ
	///</summary>
	public delegate void RspSettlementInfoConfirm(ThostFtdcSettlementInfoConfirmField^ pSettlementInfoConfirm, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///ɾ��Ԥ����Ӧ
	///</summary>
	public delegate void RspRemoveParkedOrder(ThostFtdcRemoveParkedOrderField^ pRemoveParkedOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///ɾ��Ԥ�񳷵���Ӧ
	///</summary>
	public delegate void RspRemoveParkedOrderAction(ThostFtdcRemoveParkedOrderActionField^ pRemoveParkedOrderAction, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�����ѯ������Ӧ
	///</summary>
	public delegate void RspQryOrder(ThostFtdcOrderField^ pOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�����ѯ�ɽ���Ӧ
	///</summary>
	public delegate void RspQryTrade(ThostFtdcTradeField^ pTrade, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�����ѯͶ���ֲ߳���Ӧ
	///</summary>
	public delegate void RspQryInvestorPosition(ThostFtdcInvestorPositionField^ pInvestorPosition, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�����ѯ�ʽ��˻���Ӧ
	///</summary>
	public delegate void RspQryTradingAccount(ThostFtdcTradingAccountField^ pTradingAccount, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�����ѯͶ������Ӧ
	///</summary>
	public delegate void RspQryInvestor(ThostFtdcInvestorField^ pInvestor, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�����ѯ���ױ�����Ӧ
	///</summary>
	public delegate void RspQryTradingCode(ThostFtdcTradingCodeField^ pTradingCode, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�����ѯ��Լ��֤������Ӧ
	///</summary>
	public delegate void RspQryInstrumentMarginRate(ThostFtdcInstrumentMarginRateField^ pInstrumentMarginRate, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�����ѯ��Լ����������Ӧ
	///</summary>
	public delegate void RspQryInstrumentCommissionRate(ThostFtdcInstrumentCommissionRateField^ pInstrumentCommissionRate, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�����ѯ��������Ӧ
	///</summary>
	public delegate void RspQryExchange(ThostFtdcExchangeField^ pExchange, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�����ѯ��Լ��Ӧ
	///</summary>
	public delegate void RspQryInstrument(ThostFtdcInstrumentField^ pInstrument, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�����ѯ������Ӧ
	///</summary>
	public delegate void RspQryDepthMarketData(ThostFtdcDepthMarketDataField^ pDepthMarketData, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�����ѯͶ���߽�������Ӧ
	///</summary>
	public delegate void RspQrySettlementInfo(ThostFtdcSettlementInfoField^ pSettlementInfo, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�����ѯת��������Ӧ
	///</summary>
	public delegate void RspQryTransferBank(ThostFtdcTransferBankField^ pTransferBank, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�����ѯͶ���ֲ߳���ϸ��Ӧ
	///</summary>
	public delegate void RspQryInvestorPositionDetail(ThostFtdcInvestorPositionDetailField^ pInvestorPositionDetail, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�����ѯ�ͻ�֪ͨ��Ӧ
	///</summary>
	public delegate void RspQryNotice(ThostFtdcNoticeField^ pNotice, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�����ѯ������Ϣȷ����Ӧ
	///</summary>
	public delegate void RspQrySettlementInfoConfirm(ThostFtdcSettlementInfoConfirmField^ pSettlementInfoConfirm, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�����ѯͶ���ֲ߳���ϸ��Ӧ
	///</summary>
	public delegate void RspQryInvestorPositionCombineDetail(ThostFtdcInvestorPositionCombineDetailField^ pInvestorPositionCombineDetail, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///��ѯ��֤����ϵͳ���͹�˾�ʽ��˻���Կ��Ӧ
	///</summary>
	public delegate void RspQryCFMMCTradingAccountKey(ThostFtdcCFMMCTradingAccountKeyField^ pCFMMCTradingAccountKey, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
    ///�����ѯ�ֵ��۵���Ϣ��Ӧ
	///</summary>
	public delegate void RspQryEWarrantOffset(ThostFtdcEWarrantOffsetField^ pEWarrantOffset, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�����ѯת����ˮ��Ӧ
	///</summary>
	public delegate void RspQryTransferSerial(ThostFtdcTransferSerialField^ pTransferSerial, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�����ѯ����ǩԼ��ϵ��Ӧ
	///</summary>
	public delegate void RspQryAccountregister(ThostFtdcAccountregisterField^ pAccountregister, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///����֪ͨ
	///</summary>
	public delegate void RtnOrder(ThostFtdcOrderField^ pOrder);
	///<summary>
	///�ɽ�֪ͨ
	///</summary>
	public delegate void RtnTrade(ThostFtdcTradeField^ pTrade);
	///<summary>
	///����¼�����ر�
	///</summary>
	public delegate void ErrRtnOrderInsert(ThostFtdcInputOrderField^ pInputOrder, ThostFtdcRspInfoField^ pRspInfo);
	///<summary>
	///������������ر�
	///</summary>
	public delegate void ErrRtnOrderAction(ThostFtdcOrderActionField^ pOrderAction, ThostFtdcRspInfoField^ pRspInfo);
	///<summary>
	///��Լ����״̬֪ͨ
	///</summary>
	public delegate void RtnInstrumentStatus(ThostFtdcInstrumentStatusField^ pInstrumentStatus);
	///<summary>
	///����֪ͨ
	///</summary>
	public delegate void RtnTradingNotice(ThostFtdcTradingNoticeInfoField^ pTradingNoticeInfo);
	///<summary>
	///��ʾ������У�����
	///</summary>
	public delegate void RtnErrorConditionalOrder(ThostFtdcErrorConditionalOrderField^ pErrorConditionalOrder);
	///<summary>
	///�����ѯǩԼ������Ӧ
	///</summary>
	public delegate void RspQryContractBank(ThostFtdcContractBankField^ pContractBank, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�����ѯԤ����Ӧ
	///</summary>
	public delegate void RspQryParkedOrder(ThostFtdcParkedOrderField^ pParkedOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�����ѯԤ�񳷵���Ӧ
	///</summary>
	public delegate void RspQryParkedOrderAction(ThostFtdcParkedOrderActionField^ pParkedOrderAction, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�����ѯ����֪ͨ��Ӧ
	///</summary>
	public delegate void RspQryTradingNotice(ThostFtdcTradingNoticeField^ pTradingNotice, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�����ѯ���͹�˾���ײ�����Ӧ
	///</summary>
	public delegate void RspQryBrokerTradingParams(ThostFtdcBrokerTradingParamsField^ pBrokerTradingParams, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�����ѯ���͹�˾�����㷨��Ӧ
	///</summary>
	public delegate void RspQryBrokerTradingAlgos(ThostFtdcBrokerTradingAlgosField^ pBrokerTradingAlgos, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///���з��������ʽ�ת�ڻ�֪ͨ
	///</summary>
	public delegate void RtnFromBankToFutureByBank(ThostFtdcRspTransferField^ pRspTransfer);
	///<summary>
	///���з����ڻ��ʽ�ת����֪ͨ
	///</summary>
	public delegate void RtnFromFutureToBankByBank(ThostFtdcRspTransferField^ pRspTransfer);
	///<summary>
	///���з����������ת�ڻ�֪ͨ
	///</summary>
	public delegate void RtnRepealFromBankToFutureByBank(ThostFtdcRspRepealField^ pRspRepeal);
	///<summary>
	///���з�������ڻ�ת����֪ͨ
	///</summary>
	public delegate void RtnRepealFromFutureToBankByBank(ThostFtdcRspRepealField^ pRspRepeal);
	///<summary>
	///�ڻ����������ʽ�ת�ڻ�֪ͨ
	///</summary>
	public delegate void RtnFromBankToFutureByFuture(ThostFtdcRspTransferField^ pRspTransfer);
	///<summary>
	///�ڻ������ڻ��ʽ�ת����֪ͨ
	///</summary>
	public delegate void RtnFromFutureToBankByFuture(ThostFtdcRspTransferField^ pRspTransfer);
	///<summary>
	///ϵͳ����ʱ�ڻ����ֹ������������ת�ڻ��������д�����Ϻ��̷��ص�֪ͨ
	///</summary>
	public delegate void RtnRepealFromBankToFutureByFutureManual(ThostFtdcRspRepealField^ pRspRepeal);
	///<summary>
	///ϵͳ����ʱ�ڻ����ֹ���������ڻ�ת�����������д�����Ϻ��̷��ص�֪ͨ
	///</summary>
	public delegate void RtnRepealFromFutureToBankByFutureManual(ThostFtdcRspRepealField^ pRspRepeal);
	///<summary>
	///�ڻ������ѯ�������֪ͨ
	///</summary>
	public delegate void RtnQueryBankBalanceByFuture(ThostFtdcNotifyQueryAccountField^ pNotifyQueryAccount);
	///<summary>
	///�ڻ����������ʽ�ת�ڻ�����ر�
	///</summary>
	public delegate void ErrRtnBankToFutureByFuture(ThostFtdcReqTransferField^ pReqTransfer, ThostFtdcRspInfoField^ pRspInfo);
	///<summary>
	///�ڻ������ڻ��ʽ�ת���д���ر�
	///</summary>
	public delegate void ErrRtnFutureToBankByFuture(ThostFtdcReqTransferField^ pReqTransfer, ThostFtdcRspInfoField^ pRspInfo);
	///<summary>
	///ϵͳ����ʱ�ڻ����ֹ������������ת�ڻ�����ر�
	///</summary>
	public delegate void ErrRtnRepealBankToFutureByFutureManual(ThostFtdcReqRepealField^ pReqRepeal, ThostFtdcRspInfoField^ pRspInfo);
	///<summary>
	///ϵͳ����ʱ�ڻ����ֹ���������ڻ�ת���д���ر�
	///</summary>
	public delegate void ErrRtnRepealFutureToBankByFutureManual(ThostFtdcReqRepealField^ pReqRepeal, ThostFtdcRspInfoField^ pRspInfo);
	///<summary>
	///�ڻ������ѯ����������ر�
	///</summary>
	public delegate void ErrRtnQueryBankBalanceByFuture(ThostFtdcReqQueryAccountField^ pReqQueryAccount, ThostFtdcRspInfoField^ pRspInfo);
	///<summary>
	///�ڻ������������ת�ڻ��������д�����Ϻ��̷��ص�֪ͨ
	///</summary>
	public delegate void RtnRepealFromBankToFutureByFuture(ThostFtdcRspRepealField^ pRspRepeal);
	///<summary>
	///�ڻ���������ڻ�ת�����������д�����Ϻ��̷��ص�֪ͨ
	///</summary>
	public delegate void RtnRepealFromFutureToBankByFuture(ThostFtdcRspRepealField^ pRspRepeal);
	///<summary>
	///�ڻ����������ʽ�ת�ڻ�Ӧ��
	///</summary>
	public delegate void RspFromBankToFutureByFuture(ThostFtdcReqTransferField^ pReqTransfer, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�ڻ������ڻ��ʽ�ת����Ӧ��
	///</summary>
	public delegate void RspFromFutureToBankByFuture(ThostFtdcReqTransferField^ pReqTransfer, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�ڻ������ѯ�������Ӧ��
	///</summary>
	public delegate void RspQueryBankAccountMoneyByFuture(ThostFtdcReqQueryAccountField^ pReqQueryAccount, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///���з������ڿ���֪ͨ
	///</summary>
	public delegate void RtnOpenAccountByBank(ThostFtdcOpenAccountField^ pOpenAccount);
	///<summary>
	///���з�����������֪ͨ
	///</summary>
	public delegate void RtnCancelAccountByBank(ThostFtdcCancelAccountField^ pCancelAccount);
	///<summary>
	///���з����������˺�֪ͨ
	///</summary>
	public delegate void RtnChangeAccountByBank(ThostFtdcChangeAccountField^ pChangeAccount);
	///<summary>
	///��ѯ����ǰ�ĳֲ���ϸӦ��(20110808)
	///</summary>
	public delegate void RspQryInvestorOpenPosition(ThostFtdcInvestorPositionDetailField^ pInvestorPositionDetail, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///��ѯ����ǰ����ϳֲ���ϸӦ��(20110808)
	///</summary>
	public delegate void RspQryInvestorOpenCombinePosition(ThostFtdcInvestorPositionCombineDetailField^ pInvestorPositionCombineDetail, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///������������������Ӧ
	///</summary>
	public delegate void RspBulkCancelOrder(ThostFtdcBulkCancelOrderField^ pBulkCancelOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);


	//Conditionalorderserver delegates

	///<summary>
	///������¼����Ӧ
	///</summary>
	public delegate void RspInitInsertConditionalOrder(TKSConditionalOrderOperResultField^ pInitInsertConditionalOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///��������ѯ��Ӧ
	///</summary>
	public delegate void RspQueryConditionalOrder(TKSConditionalOrderOperResultField^ pQueryConditionalOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///�������޸���Ӧ
	///</summary>
	public delegate void RspModifyConditionalOrder(TKSConditionalOrderOperResultField^ pModifyConditionalOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///��������ͣ������Ӧ
	///</summary>
	public delegate void RspPauseConditionalOrder(TKSConditionalOrderOperResultField^ pPauseConditionalOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///������ɾ����Ӧ
	///</summary>
	public delegate void RspRemoveConditionalOrder(TKSConditionalOrderRspResultField^ pRemoveConditionalOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///������ѡ����Ӧ
	///</summary>
	public delegate void RspSelectConditionalOrder(TKSConditionalOrderRspResultField^ pSelectConditionalOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///ֹ��ֹӯ��¼����Ӧ
	///</summary>
	public delegate void RspInsertProfitAndLossOrder(TKSProfitAndLossOrderOperResultField^ pInsertProfitAndLossOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///ֹ��ֹӯ���޸���Ӧ
	///</summary>
	public delegate void RspModifyProfitAndLossOrder(TKSProfitAndLossOrderOperResultField^ pModifyProfitAndLossOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///ֹ��ֹӯ��ɾ����Ӧ
	///</summary>
	public delegate void RspRemoveProfitAndLossOrder(TKSProfitAndLossOrderRemoveField^ pRemoveProfitAndLossOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///ֹ��ֹӯ����ѯ��Ӧ
	///</summary>
	public delegate void RspQueryProfitAndLossOrder(TKSProfitAndLossOrderOperResultField^ pQueryProfitAndLossOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	///<summary>
	///����������ѡ��֪ͨ
	///</summary>
	public delegate void RtnCOSAskSelect(TKSCOSAskSelectField^ pCOSAskSelect);
	///<summary>
	///������״̬֪ͨ
	///</summary>
	public delegate void RtnCOSStatus(TKSCOSStatusField^ pCOSStatus);
	///<summary>
	///ֹ��ֹӯ��״̬֪ͨ
	///</summary>
	public delegate void RtnPLStatus(TKSPLStatusField^ pPLStatus);
}