/**
* @file kstctptraderspi.h
* ���˴�תCTP�ص��ӿ�
* @author kevin.shen
*/

#ifndef KSTCTPTRADERSPI_H
#define  KSTCTPTRADERSPI_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// include CTP apiͷ�ļ�ǰ����Ϊexport��ʽ
#define ISLIB
#define LIB_TRADER_API_EXPORT
#include <stdlib.h>
#include "../CTP/ThostFtdcTraderApi.h"
#include "../KSFT_API/KSTradeAPI.h"
#pragma comment(lib, "../KSFT_API/KSTradeAPI.lib")
#pragma message("Automatically linking with KSTradeAPI.lib")

// ָ��մ���
const int PISNULL = -1;

class CThostFtdcTraderSpi_obj : public KingstarAPI::CThostFtdcTraderSpi
{
public:
	// ���캯��
	CThostFtdcTraderSpi_obj(::CThostFtdcTraderSpi * pCTPSpi);

	///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
	virtual void OnFrontConnected();

	///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
	virtual void OnFrontDisconnected(int nReason);

	///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
	virtual void OnHeartBeatWarning(int nTimeLapse);

	///�ͻ�����֤��Ӧ
	virtual void OnRspAuthenticate(KingstarAPI::CThostFtdcRspAuthenticateField *pRspAuthenticateField, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///��¼������Ӧ
	virtual void OnRspUserLogin(KingstarAPI::CThostFtdcRspUserLoginField *pRspUserLogin, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�ǳ�������Ӧ
	virtual void OnRspUserLogout(KingstarAPI::CThostFtdcUserLogoutField *pUserLogout, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�û��������������Ӧ
	virtual void OnRspUserPasswordUpdate(KingstarAPI::CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�ʽ��˻��������������Ӧ
	virtual void OnRspTradingAccountPasswordUpdate(KingstarAPI::CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///����¼��������Ӧ
	virtual void OnRspOrderInsert(KingstarAPI::CThostFtdcInputOrderField *pInputOrder, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///Ԥ��¼��������Ӧ
	virtual void OnRspParkedOrderInsert(KingstarAPI::CThostFtdcParkedOrderField *pParkedOrder, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///Ԥ�񳷵�¼��������Ӧ
	virtual void OnRspParkedOrderAction(KingstarAPI::CThostFtdcParkedOrderActionField *pParkedOrderAction, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///��������������Ӧ
	virtual void OnRspOrderAction(KingstarAPI::CThostFtdcInputOrderActionField *pInputOrderAction, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///��ѯ��󱨵�������Ӧ
	virtual void OnRspQueryMaxOrderVolume(KingstarAPI::CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///Ͷ���߽�����ȷ����Ӧ
	virtual void OnRspSettlementInfoConfirm(KingstarAPI::CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///ɾ��Ԥ����Ӧ
	virtual void OnRspRemoveParkedOrder(KingstarAPI::CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///ɾ��Ԥ�񳷵���Ӧ
	virtual void OnRspRemoveParkedOrderAction(KingstarAPI::CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯ������Ӧ
	virtual void OnRspQryOrder(KingstarAPI::CThostFtdcOrderField *pOrder, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯ�ɽ���Ӧ
	virtual void OnRspQryTrade(KingstarAPI::CThostFtdcTradeField *pTrade, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯͶ���ֲ߳���Ӧ
	virtual void OnRspQryInvestorPosition(KingstarAPI::CThostFtdcInvestorPositionField *pInvestorPosition, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯ�ʽ��˻���Ӧ
	virtual void OnRspQryTradingAccount(KingstarAPI::CThostFtdcTradingAccountField *pTradingAccount, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯͶ������Ӧ
	virtual void OnRspQryInvestor(KingstarAPI::CThostFtdcInvestorField *pInvestor, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯ���ױ�����Ӧ
	virtual void OnRspQryTradingCode(KingstarAPI::CThostFtdcTradingCodeField *pTradingCode, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯ��Լ��֤������Ӧ
	virtual void OnRspQryInstrumentMarginRate(KingstarAPI::CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯ��Լ����������Ӧ
	virtual void OnRspQryInstrumentCommissionRate(KingstarAPI::CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯ��������Ӧ
	virtual void OnRspQryExchange(KingstarAPI::CThostFtdcExchangeField *pExchange, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯ��Լ��Ӧ
	virtual void OnRspQryInstrument(KingstarAPI::CThostFtdcInstrumentField *pInstrument, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯ������Ӧ
	virtual void OnRspQryDepthMarketData(KingstarAPI::CThostFtdcDepthMarketDataField *pDepthMarketData, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯͶ���߽�������Ӧ
	virtual void OnRspQrySettlementInfo(KingstarAPI::CThostFtdcSettlementInfoField *pSettlementInfo, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯת��������Ӧ
	virtual void OnRspQryTransferBank(KingstarAPI::CThostFtdcTransferBankField *pTransferBank, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯͶ���ֲ߳���ϸ��Ӧ
	virtual void OnRspQryInvestorPositionDetail(KingstarAPI::CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯ�ͻ�֪ͨ��Ӧ
	virtual void OnRspQryNotice(KingstarAPI::CThostFtdcNoticeField *pNotice, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯ������Ϣȷ����Ӧ
	virtual void OnRspQrySettlementInfoConfirm(KingstarAPI::CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯͶ���ֲ߳���ϸ��Ӧ
	virtual void OnRspQryInvestorPositionCombineDetail(KingstarAPI::CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///��ѯ��֤����ϵͳ���͹�˾�ʽ��˻���Կ��Ӧ
	virtual void OnRspQryCFMMCTradingAccountKey(KingstarAPI::CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯ�ֵ��۵���Ϣ��Ӧ
	virtual void OnRspQryEWarrantOffset(KingstarAPI::CThostFtdcEWarrantOffsetField *pEWarrantOffset, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯת����ˮ��Ӧ
	virtual void OnRspQryTransferSerial(KingstarAPI::CThostFtdcTransferSerialField *pTransferSerial, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯ����ǩԼ��ϵ��Ӧ
	virtual void OnRspQryAccountregister(KingstarAPI::CThostFtdcAccountregisterField *pAccountregister, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///����Ӧ��
	virtual void OnRspError(KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///����֪ͨ
	virtual void OnRtnOrder(KingstarAPI::CThostFtdcOrderField *pOrder);

	///�ɽ�֪ͨ
	virtual void OnRtnTrade(KingstarAPI::CThostFtdcTradeField *pTrade);

	///����¼�����ر�
	virtual void OnErrRtnOrderInsert(KingstarAPI::CThostFtdcInputOrderField *pInputOrder, KingstarAPI::CThostFtdcRspInfoField *pRspInfo);

	///������������ر�
	virtual void OnErrRtnOrderAction(KingstarAPI::CThostFtdcOrderActionField *pOrderAction, KingstarAPI::CThostFtdcRspInfoField *pRspInfo);

	///��Լ����״̬֪ͨ
	virtual void OnRtnInstrumentStatus(KingstarAPI::CThostFtdcInstrumentStatusField *pInstrumentStatus);

	///����֪ͨ
	virtual void OnRtnTradingNotice(KingstarAPI::CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo);

	///��ʾ������У�����
	virtual void OnRtnErrorConditionalOrder(KingstarAPI::CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder);

	///�����ѯǩԼ������Ӧ
	virtual void OnRspQryContractBank(KingstarAPI::CThostFtdcContractBankField *pContractBank, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯԤ����Ӧ
	virtual void OnRspQryParkedOrder(KingstarAPI::CThostFtdcParkedOrderField *pParkedOrder, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯԤ�񳷵���Ӧ
	virtual void OnRspQryParkedOrderAction(KingstarAPI::CThostFtdcParkedOrderActionField *pParkedOrderAction, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯ����֪ͨ��Ӧ
	virtual void OnRspQryTradingNotice(KingstarAPI::CThostFtdcTradingNoticeField *pTradingNotice, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯ���͹�˾���ײ�����Ӧ
	virtual void OnRspQryBrokerTradingParams(KingstarAPI::CThostFtdcBrokerTradingParamsField *pBrokerTradingParams, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯ���͹�˾�����㷨��Ӧ
	virtual void OnRspQryBrokerTradingAlgos(KingstarAPI::CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///���з��������ʽ�ת�ڻ�֪ͨ
	virtual void OnRtnFromBankToFutureByBank(KingstarAPI::CThostFtdcRspTransferField *pRspTransfer);

	///���з����ڻ��ʽ�ת����֪ͨ
	virtual void OnRtnFromFutureToBankByBank(KingstarAPI::CThostFtdcRspTransferField *pRspTransfer);

	///���з����������ת�ڻ�֪ͨ
	virtual void OnRtnRepealFromBankToFutureByBank(KingstarAPI::CThostFtdcRspRepealField *pRspRepeal);

	///���з�������ڻ�ת����֪ͨ
	virtual void OnRtnRepealFromFutureToBankByBank(KingstarAPI::CThostFtdcRspRepealField *pRspRepeal);

	///�ڻ����������ʽ�ת�ڻ�֪ͨ
	virtual void OnRtnFromBankToFutureByFuture(KingstarAPI::CThostFtdcRspTransferField *pRspTransfer);

	///�ڻ������ڻ��ʽ�ת����֪ͨ
	virtual void OnRtnFromFutureToBankByFuture(KingstarAPI::CThostFtdcRspTransferField *pRspTransfer);

	///ϵͳ����ʱ�ڻ����ֹ������������ת�ڻ��������д�����Ϻ��̷��ص�֪ͨ
	virtual void OnRtnRepealFromBankToFutureByFutureManual(KingstarAPI::CThostFtdcRspRepealField *pRspRepeal);

	///ϵͳ����ʱ�ڻ����ֹ���������ڻ�ת�����������д�����Ϻ��̷��ص�֪ͨ
	virtual void OnRtnRepealFromFutureToBankByFutureManual(KingstarAPI::CThostFtdcRspRepealField *pRspRepeal);

	///�ڻ������ѯ�������֪ͨ
	virtual void OnRtnQueryBankBalanceByFuture(KingstarAPI::CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount);

	///�ڻ����������ʽ�ת�ڻ�����ر�
	virtual void OnErrRtnBankToFutureByFuture(KingstarAPI::CThostFtdcReqTransferField *pReqTransfer, KingstarAPI::CThostFtdcRspInfoField *pRspInfo);

	///�ڻ������ڻ��ʽ�ת���д���ر�
	virtual void OnErrRtnFutureToBankByFuture(KingstarAPI::CThostFtdcReqTransferField *pReqTransfer, KingstarAPI::CThostFtdcRspInfoField *pRspInfo);

	///ϵͳ����ʱ�ڻ����ֹ������������ת�ڻ�����ر�
	virtual void OnErrRtnRepealBankToFutureByFutureManual(KingstarAPI::CThostFtdcReqRepealField *pReqRepeal, KingstarAPI::CThostFtdcRspInfoField *pRspInfo);

	///ϵͳ����ʱ�ڻ����ֹ���������ڻ�ת���д���ر�
	virtual void OnErrRtnRepealFutureToBankByFutureManual(KingstarAPI::CThostFtdcReqRepealField *pReqRepeal, KingstarAPI::CThostFtdcRspInfoField *pRspInfo);

	///�ڻ������ѯ����������ر�
	virtual void OnErrRtnQueryBankBalanceByFuture(KingstarAPI::CThostFtdcReqQueryAccountField *pReqQueryAccount, KingstarAPI::CThostFtdcRspInfoField *pRspInfo);

	///�ڻ������������ת�ڻ��������д�����Ϻ��̷��ص�֪ͨ
	virtual void OnRtnRepealFromBankToFutureByFuture(KingstarAPI::CThostFtdcRspRepealField *pRspRepeal);

	///�ڻ���������ڻ�ת�����������д�����Ϻ��̷��ص�֪ͨ
	virtual void OnRtnRepealFromFutureToBankByFuture(KingstarAPI::CThostFtdcRspRepealField *pRspRepeal);

	///�ڻ����������ʽ�ת�ڻ�Ӧ��
	virtual void OnRspFromBankToFutureByFuture(KingstarAPI::CThostFtdcReqTransferField *pReqTransfer, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�ڻ������ڻ��ʽ�ת����Ӧ��
	virtual void OnRspFromFutureToBankByFuture(KingstarAPI::CThostFtdcReqTransferField *pReqTransfer, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�ڻ������ѯ�������Ӧ��
	virtual void OnRspQueryBankAccountMoneyByFuture(KingstarAPI::CThostFtdcReqQueryAccountField *pReqQueryAccount, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///���з������ڿ���֪ͨ
	virtual void OnRtnOpenAccountByBank(KingstarAPI::CThostFtdcOpenAccountField *pOpenAccount);

	///���з�����������֪ͨ
	virtual void OnRtnCancelAccountByBank(KingstarAPI::CThostFtdcCancelAccountField *pCancelAccount);

	///���з����������˺�֪ͨ
	virtual void OnRtnChangeAccountByBank(KingstarAPI::CThostFtdcChangeAccountField *pChangeAccount);

public:
	// ��������
	~CThostFtdcTraderSpi_obj();

private:
	::CThostFtdcTraderSpi * m_pCTPSpi;			                 // CTP�ص��ӿ������ָ��
};

#endif 