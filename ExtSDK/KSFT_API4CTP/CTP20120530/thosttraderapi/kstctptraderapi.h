/**
* @file kstctptraderapi.h
* ���˴�תCTP����ӿ�
* @author kevin.shen
*/

#ifndef KSTCTPTRADERAPI_H
#define  KSTCTPTRADERAPI_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "kstctptraderspi.h"

// Api�ӿ�ʵ����
class CThostFtdcTraderApi_obj:public CThostFtdcTraderApi
{
public:
	// ���캯��
	CThostFtdcTraderApi_obj(KingstarAPI::CThostFtdcTraderApi *pKSapi);

	///ɾ���ӿڶ�����
	virtual void Release();

	///��ʼ��
	virtual void Init();

	///�ȴ��ӿ��߳̽�������
	virtual int Join();

	///��ȡ��ǰ������
	virtual const char *GetTradingDay();

	///ע��ǰ�û������ַ
	virtual void RegisterFront(char *pszFrontAddress);

	///ע�����ַ����������ַ
	virtual void RegisterNameServer(char *pszNsAddress);

	///ע��ص��ӿ�
	virtual void RegisterSpi(::CThostFtdcTraderSpi *pSpi);

	///����˽������
	virtual void SubscribePrivateTopic(::THOST_TE_RESUME_TYPE nResumeType);

	///���Ĺ�������
	virtual void SubscribePublicTopic(::THOST_TE_RESUME_TYPE nResumeType);

	///�ͻ�����֤����
	virtual int ReqAuthenticate(::CThostFtdcReqAuthenticateField *pReqAuthenticateField, int nRequestID);

	///�û���¼����
	virtual int ReqUserLogin(::CThostFtdcReqUserLoginField *pReqUserLoginField, int nRequestID);

	///�ǳ�����
	virtual int ReqUserLogout(::CThostFtdcUserLogoutField *pUserLogout, int nRequestID);

	///�û������������
	virtual int ReqUserPasswordUpdate(::CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, int nRequestID);

	///�ʽ��˻������������
	virtual int ReqTradingAccountPasswordUpdate(::CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, int nRequestID);

	///����¼������
	virtual int ReqOrderInsert(::CThostFtdcInputOrderField *pInputOrder, int nRequestID);

	///Ԥ��¼������
	virtual int ReqParkedOrderInsert(::CThostFtdcParkedOrderField *pParkedOrder, int nRequestID);

	///Ԥ�񳷵�¼������
	virtual int ReqParkedOrderAction(::CThostFtdcParkedOrderActionField *pParkedOrderAction, int nRequestID);

	///������������
	virtual int ReqOrderAction(::CThostFtdcInputOrderActionField *pInputOrderAction, int nRequestID);

	///��ѯ��󱨵���������
	virtual int ReqQueryMaxOrderVolume(::CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, int nRequestID);

	///Ͷ���߽�����ȷ��
	virtual int ReqSettlementInfoConfirm(::CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, int nRequestID);

	///����ɾ��Ԥ��
	virtual int ReqRemoveParkedOrder(::CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, int nRequestID);

	///����ɾ��Ԥ�񳷵�
	virtual int ReqRemoveParkedOrderAction(::CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, int nRequestID);

	///�����ѯ����
	virtual int ReqQryOrder(::CThostFtdcQryOrderField *pQryOrder, int nRequestID);

	///�����ѯ�ɽ�
	virtual int ReqQryTrade(::CThostFtdcQryTradeField *pQryTrade, int nRequestID);

	///�����ѯͶ���ֲ߳�
	virtual int ReqQryInvestorPosition(::CThostFtdcQryInvestorPositionField *pQryInvestorPosition, int nRequestID);

	///�����ѯ�ʽ��˻�
	virtual int ReqQryTradingAccount(::CThostFtdcQryTradingAccountField *pQryTradingAccount, int nRequestID);

	///�����ѯͶ����
	virtual int ReqQryInvestor(::CThostFtdcQryInvestorField *pQryInvestor, int nRequestID);

	///�����ѯ���ױ���
	virtual int ReqQryTradingCode(::CThostFtdcQryTradingCodeField *pQryTradingCode, int nRequestID);

	///�����ѯ��Լ��֤����
	virtual int ReqQryInstrumentMarginRate(::CThostFtdcQryInstrumentMarginRateField *pQryInstrumentMarginRate, int nRequestID);

	///�����ѯ��Լ��������
	virtual int ReqQryInstrumentCommissionRate(::CThostFtdcQryInstrumentCommissionRateField *pQryInstrumentCommissionRate, int nRequestID);

	///�����ѯ������
	virtual int ReqQryExchange(::CThostFtdcQryExchangeField *pQryExchange, int nRequestID);

	///�����ѯ��Լ
	virtual int ReqQryInstrument(::CThostFtdcQryInstrumentField *pQryInstrument, int nRequestID);

	///�����ѯ����
	virtual int ReqQryDepthMarketData(::CThostFtdcQryDepthMarketDataField *pQryDepthMarketData, int nRequestID);

	///�����ѯͶ���߽�����
	virtual int ReqQrySettlementInfo(::CThostFtdcQrySettlementInfoField *pQrySettlementInfo, int nRequestID);

	///�����ѯת������
	virtual int ReqQryTransferBank(::CThostFtdcQryTransferBankField *pQryTransferBank, int nRequestID);

	///�����ѯͶ���ֲ߳���ϸ
	virtual int ReqQryInvestorPositionDetail(::CThostFtdcQryInvestorPositionDetailField *pQryInvestorPositionDetail, int nRequestID);

	///�����ѯ�ͻ�֪ͨ
	virtual int ReqQryNotice(::CThostFtdcQryNoticeField *pQryNotice, int nRequestID);

	///�����ѯ������Ϣȷ��
	virtual int ReqQrySettlementInfoConfirm(::CThostFtdcQrySettlementInfoConfirmField *pQrySettlementInfoConfirm, int nRequestID);

	///�����ѯͶ���ֲ߳���ϸ
	virtual int ReqQryInvestorPositionCombineDetail(::CThostFtdcQryInvestorPositionCombineDetailField *pQryInvestorPositionCombineDetail, int nRequestID);

	///�����ѯ��֤����ϵͳ���͹�˾�ʽ��˻���Կ
	virtual int ReqQryCFMMCTradingAccountKey(::CThostFtdcQryCFMMCTradingAccountKeyField *pQryCFMMCTradingAccountKey, int nRequestID);

	///�����ѯ�ֵ��۵���Ϣ
	virtual int ReqQryEWarrantOffset(::CThostFtdcQryEWarrantOffsetField *pQryEWarrantOffset, int nRequestID);

	///�����ѯת����ˮ
	virtual int ReqQryTransferSerial(::CThostFtdcQryTransferSerialField *pQryTransferSerial, int nRequestID);

	///�����ѯ����ǩԼ��ϵ
	virtual int ReqQryAccountregister(::CThostFtdcQryAccountregisterField *pQryAccountregister, int nRequestID);

	///�����ѯǩԼ����
	virtual int ReqQryContractBank(::CThostFtdcQryContractBankField *pQryContractBank, int nRequestID);

	///�����ѯԤ��
	virtual int ReqQryParkedOrder(::CThostFtdcQryParkedOrderField *pQryParkedOrder, int nRequestID);

	///�����ѯԤ�񳷵�
	virtual int ReqQryParkedOrderAction(::CThostFtdcQryParkedOrderActionField *pQryParkedOrderAction, int nRequestID);

	///�����ѯ����֪ͨ
	virtual int ReqQryTradingNotice(::CThostFtdcQryTradingNoticeField *pQryTradingNotice, int nRequestID);

	///�����ѯ���͹�˾���ײ���
	virtual int ReqQryBrokerTradingParams(::CThostFtdcQryBrokerTradingParamsField *pQryBrokerTradingParams, int nRequestID);

	///�����ѯ���͹�˾�����㷨
	virtual int ReqQryBrokerTradingAlgos(::CThostFtdcQryBrokerTradingAlgosField *pQryBrokerTradingAlgos, int nRequestID);

	///�ڻ����������ʽ�ת�ڻ�����
	virtual int ReqFromBankToFutureByFuture(::CThostFtdcReqTransferField *pReqTransfer, int nRequestID);

	///�ڻ������ڻ��ʽ�ת��������
	virtual int ReqFromFutureToBankByFuture(::CThostFtdcReqTransferField *pReqTransfer, int nRequestID);

	///�ڻ������ѯ�����������
	virtual int ReqQueryBankAccountMoneyByFuture(::CThostFtdcReqQueryAccountField *pReqQueryAccount, int nRequestID);

protected:
	// ��������
	~CThostFtdcTraderApi_obj();

private:
	KingstarAPI::CThostFtdcTraderApi *m_pKSapi;     // ���˴�ӿ�apiָ��
	CThostFtdcTraderSpi_obj *m_pKSSpi;				   //���˴�ӿ�spiָ��
};

#endif 
