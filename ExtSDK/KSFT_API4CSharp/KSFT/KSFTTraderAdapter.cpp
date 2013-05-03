/////////////////////////////////////////////////////////////////////////
/// ���˴� KSFT C++ => .Net Framework Adapter
/// Summary: ��������ӿڵ��йܸ���
/// Author:	ksftapi@gmail.com
/// Date: 20130304
/// Update List��
///   20130314 ����½ӿ�
///   20130326 ���ע��
/////////////////////////////////////////////////////////////////////////

#include "StdAfx.h"
#include "TraderSpi.h"
#include "KSFTTraderAdapter.h"
#include "CosSpi.h"

using namespace Native;
using namespace KingstarAPI;

namespace KSFT
{

KSFTTraderAdapter::KSFTTraderAdapter(void)
{
	m_pApi = CThostFtdcTraderApi::CreateFtdcTraderApi();
	m_pSpi = new CTraderSpi(this);
	m_pApi->RegisterSpi((CThostFtdcTraderSpi*)m_pSpi);
}

KSFTTraderAdapter::KSFTTraderAdapter(String^ pszFlowPath, bool bIsUsingUdp)
{
	CAutoStrPtr asp(pszFlowPath);
	m_pApi = CThostFtdcTraderApi::CreateFtdcTraderApi(asp.m_pChar, bIsUsingUdp);
	m_pSpi = new CTraderSpi(this);
	m_pApi->RegisterSpi(m_pSpi);
}



KSFTTraderAdapter::~KSFTTraderAdapter(void)
{
	Release();
}

void KSFTTraderAdapter::Release(void)
{
	if(m_pApi)
	{
		m_pApi->RegisterSpi(0);
		m_pApi->Release();
		m_pApi = nullptr;
		delete m_pSpi;
	}
}

///<summary>
///ע��ǰ�û������ַ
///</summary>
void KSFTTraderAdapter::RegisterFront(String^  pszFrontAddress)
{
	CAutoStrPtr asp = CAutoStrPtr(pszFrontAddress);
	m_pApi->RegisterFront(asp.m_pChar);
}

///<summary>
///ע�����ַ����������ַ
///</summary>
void KSFTTraderAdapter::RegisterNameServer(String^ pszNameServerAddress)
{
    CAutoStrPtr asp = CAutoStrPtr(pszNameServerAddress);
	m_pApi->RegisterNameServer(asp.m_pChar);
}

///<summary>
///����˽������
///</summary>
void KSFTTraderAdapter::SubscribePrivateTopic(EnumTeResumeType nResumeType)
{
	m_pApi->SubscribePrivateTopic((THOST_TE_RESUME_TYPE)nResumeType);
}

///<summary>
///���Ĺ�����
///</summary>
void KSFTTraderAdapter::SubscribePublicTopic(EnumTeResumeType nResumeType)
{
	m_pApi->SubscribePublicTopic((THOST_TE_RESUME_TYPE)nResumeType);
}

void KSFTTraderAdapter::Init(void)
{
	m_pApi->Init();
}

int KSFTTraderAdapter::Join(void)
{
	return m_pApi->Join();
}

String^ KSFTTraderAdapter::GetTradingDay()
{
	return gcnew String(m_pApi->GetTradingDay());
}

///<summary>
///�ͻ�����֤����
///</summary>
int KSFTTraderAdapter::ReqAuthenticate(ThostFtdcReqAuthenticateField^ pReqAuthenticateField, int nRequestID){
	CThostFtdcReqAuthenticateField native;
	MNConv<ThostFtdcReqAuthenticateField^, CThostFtdcReqAuthenticateField>::M2N(pReqAuthenticateField, &native);
	return m_pApi->ReqAuthenticate(&native, nRequestID);
}

///<summary>
///�û���¼����
///</summary>
int KSFTTraderAdapter::ReqUserLogin(ThostFtdcReqUserLoginField^ pReqUserLoginField, int nRequestID)
{
	CThostFtdcReqUserLoginField native;
	MNConv<ThostFtdcReqUserLoginField^, CThostFtdcReqUserLoginField>::M2N(pReqUserLoginField, &native);
	return m_pApi->ReqUserLogin(&native, nRequestID);
}

///<summary>
///�ǳ�����
///</summary>
int KSFTTraderAdapter::ReqUserLogout(ThostFtdcUserLogoutField^ pUserLogout, int nRequestID)
{
	CThostFtdcUserLogoutField native;
	MNConv<ThostFtdcUserLogoutField^, CThostFtdcUserLogoutField>::M2N(pUserLogout, &native);
	return m_pApi->ReqUserLogout(&native, nRequestID);
}

///<summary>
///�û������������
///</summary>
int KSFTTraderAdapter::ReqUserPasswordUpdate(ThostFtdcUserPasswordUpdateField^ pUserPasswordUpdate, int nRequestID)
{
	CThostFtdcUserPasswordUpdateField native;
	MNConv<ThostFtdcUserPasswordUpdateField^, CThostFtdcUserPasswordUpdateField>::M2N(pUserPasswordUpdate, &native);
	return m_pApi->ReqUserPasswordUpdate(&native, nRequestID);
}

///<summary>
///�ʽ��˻������������
///</summary>
int KSFTTraderAdapter::ReqTradingAccountPasswordUpdate(ThostFtdcTradingAccountPasswordUpdateField^ pTradingAccountPasswordUpdate, int nRequestID)
{
	CThostFtdcTradingAccountPasswordUpdateField native;
	MNConv<ThostFtdcTradingAccountPasswordUpdateField^, CThostFtdcTradingAccountPasswordUpdateField>::M2N(pTradingAccountPasswordUpdate, &native);
	return m_pApi->ReqTradingAccountPasswordUpdate(&native, nRequestID);
}

///<summary>
///����¼������
///</summary>
int KSFTTraderAdapter::ReqOrderInsert(ThostFtdcInputOrderField^ pInputOrder, int nRequestID)
{
	CThostFtdcInputOrderField native;
	MNConv<ThostFtdcInputOrderField^, CThostFtdcInputOrderField>::M2N(pInputOrder, &native);
	return m_pApi->ReqOrderInsert(&native, nRequestID);
}

///<summary>
///Ԥ��¼������
///</summary>
int KSFTTraderAdapter::ReqParkedOrderInsert(ThostFtdcParkedOrderField^ pParkedOrder, int nRequestID)
{
	CThostFtdcParkedOrderField native;
	MNConv<ThostFtdcParkedOrderField^, CThostFtdcParkedOrderField>::M2N(pParkedOrder, &native);
	return m_pApi->ReqParkedOrderInsert(&native, nRequestID);
}

///<summary>
///Ԥ�񳷵�¼������
///</summary>
int KSFTTraderAdapter::ReqParkedOrderAction(ThostFtdcParkedOrderActionField^ pParkedOrderAction, int nRequestID)
{
	CThostFtdcParkedOrderActionField native;
	MNConv<ThostFtdcParkedOrderActionField^, CThostFtdcParkedOrderActionField>::M2N(pParkedOrderAction, &native);
	return m_pApi->ReqParkedOrderAction(&native, nRequestID);
}

///<summary>
///������������
///</summary>
int KSFTTraderAdapter::ReqOrderAction(ThostFtdcInputOrderActionField^ pInputOrderAction, int nRequestID)
{
	CThostFtdcInputOrderActionField native;
	MNConv<ThostFtdcInputOrderActionField^, CThostFtdcInputOrderActionField>::M2N(pInputOrderAction, &native);
	return m_pApi->ReqOrderAction(&native, nRequestID);
}

///<summary>
///��ѯ��󱨵���������
///</summary>
int KSFTTraderAdapter::ReqQueryMaxOrderVolume(ThostFtdcQueryMaxOrderVolumeField^ pQueryMaxOrderVolume, int nRequestID)
{
	CThostFtdcQueryMaxOrderVolumeField native;
	MNConv<ThostFtdcQueryMaxOrderVolumeField^, CThostFtdcQueryMaxOrderVolumeField>::M2N(pQueryMaxOrderVolume, &native);
	return m_pApi->ReqQueryMaxOrderVolume(&native, nRequestID);
}

///<summary>
///Ͷ���߽�����ȷ��
///</summary>
int KSFTTraderAdapter::ReqSettlementInfoConfirm(ThostFtdcSettlementInfoConfirmField^ pSettlementInfoConfirm, int nRequestID)
{
	CThostFtdcSettlementInfoConfirmField native;
	MNConv<ThostFtdcSettlementInfoConfirmField^, CThostFtdcSettlementInfoConfirmField>::M2N(pSettlementInfoConfirm, &native);
	return m_pApi->ReqSettlementInfoConfirm(&native, nRequestID);
}

///<summary>
///����ɾ��Ԥ��
///</summary>
int KSFTTraderAdapter::ReqRemoveParkedOrder(ThostFtdcRemoveParkedOrderField^ pRemoveParkedOrder, int nRequestID)
{
	CThostFtdcRemoveParkedOrderField native;
	MNConv<ThostFtdcRemoveParkedOrderField^, CThostFtdcRemoveParkedOrderField>::M2N(pRemoveParkedOrder, &native);
	return m_pApi->ReqRemoveParkedOrder(&native, nRequestID);
}

///<summary>
///����ɾ��Ԥ�񳷵�
///</summary>
int KSFTTraderAdapter::ReqRemoveParkedOrderAction(ThostFtdcRemoveParkedOrderActionField^ pRemoveParkedOrderAction, int nRequestID)
{
	CThostFtdcRemoveParkedOrderActionField native;
	MNConv<ThostFtdcRemoveParkedOrderActionField^, CThostFtdcRemoveParkedOrderActionField>::M2N(pRemoveParkedOrderAction, &native);
	return m_pApi->ReqRemoveParkedOrderAction(&native, nRequestID);
}

///<summary>
///�����ѯ����
///</summary>
int KSFTTraderAdapter::ReqQryOrder(ThostFtdcQryOrderField^ pQryOrder, int nRequestID)
{
	CThostFtdcQryOrderField native;
	MNConv<ThostFtdcQryOrderField^, CThostFtdcQryOrderField>::M2N(pQryOrder, &native);
	return m_pApi->ReqQryOrder(&native, nRequestID);
}

///<summary>
///�����ѯ�ɽ�
///</summary>
int KSFTTraderAdapter::ReqQryTrade(ThostFtdcQryTradeField^ pQryTrade, int nRequestID)
{
	CThostFtdcQryTradeField native;
	MNConv<ThostFtdcQryTradeField^, CThostFtdcQryTradeField>::M2N(pQryTrade, &native);
	return m_pApi->ReqQryTrade(&native, nRequestID);
}

///<summary>
///�����ѯͶ���ֲ߳�
///</summary>
int KSFTTraderAdapter::ReqQryInvestorPosition(ThostFtdcQryInvestorPositionField^ pQryInvestorPosition, int nRequestID)
{
	CThostFtdcQryInvestorPositionField native;
	MNConv<ThostFtdcQryInvestorPositionField^, CThostFtdcQryInvestorPositionField>::M2N(pQryInvestorPosition, &native);
	return m_pApi->ReqQryInvestorPosition(&native, nRequestID);
}

///<summary>
///�����ѯ�ʽ��˻�
///</summary>
int KSFTTraderAdapter::ReqQryTradingAccount(ThostFtdcQryTradingAccountField^ pQryTradingAccount, int nRequestID)
{
	CThostFtdcQryTradingAccountField native;
	MNConv<ThostFtdcQryTradingAccountField^, CThostFtdcQryTradingAccountField>::M2N(pQryTradingAccount, &native);
	return m_pApi->ReqQryTradingAccount(&native, nRequestID);
}

///<summary>
///�����ѯͶ����
///</summary>
int KSFTTraderAdapter::ReqQryInvestor(ThostFtdcQryInvestorField^ pQryInvestor, int nRequestID)
{
	CThostFtdcQryInvestorField native;
	MNConv<ThostFtdcQryInvestorField^, CThostFtdcQryInvestorField>::M2N(pQryInvestor, &native);
	return m_pApi->ReqQryInvestor(&native, nRequestID);
}

///<summary>
///�����ѯ���ױ���
///</summary>
int KSFTTraderAdapter::ReqQryTradingCode(ThostFtdcQryTradingCodeField^ pQryTradingCode, int nRequestID)
{
	CThostFtdcQryTradingCodeField native;
	MNConv<ThostFtdcQryTradingCodeField^, CThostFtdcQryTradingCodeField>::M2N(pQryTradingCode, &native);
	return m_pApi->ReqQryTradingCode(&native, nRequestID);
}

///<summary>
///�����ѯ��Լ��֤����
///</summary>
int KSFTTraderAdapter::ReqQryInstrumentMarginRate(ThostFtdcQryInstrumentMarginRateField^ pQryInstrumentMarginRate, int nRequestID)
{
	CThostFtdcQryInstrumentMarginRateField native;
	MNConv<ThostFtdcQryInstrumentMarginRateField^, CThostFtdcQryInstrumentMarginRateField>::M2N(pQryInstrumentMarginRate, &native);
	return m_pApi->ReqQryInstrumentMarginRate(&native, nRequestID);
}

///<summary>
///�����ѯ��Լ��������
///</summary>
int KSFTTraderAdapter::ReqQryInstrumentCommissionRate(ThostFtdcQryInstrumentCommissionRateField^ pQryInstrumentCommissionRate, int nRequestID)
{
	CThostFtdcQryInstrumentCommissionRateField native;
	MNConv<ThostFtdcQryInstrumentCommissionRateField^, CThostFtdcQryInstrumentCommissionRateField>::M2N(pQryInstrumentCommissionRate, &native);
	return m_pApi->ReqQryInstrumentCommissionRate(&native, nRequestID);
}

///<summary>
///�����ѯ������
///</summary>
int KSFTTraderAdapter::ReqQryExchange(ThostFtdcQryExchangeField^ pQryExchange, int nRequestID)
{
	CThostFtdcQryExchangeField native;
	MNConv<ThostFtdcQryExchangeField^, CThostFtdcQryExchangeField>::M2N(pQryExchange, &native);
	return m_pApi->ReqQryExchange(&native, nRequestID);
}

///<summary>
///�����ѯ��Լ
///</summary>
int KSFTTraderAdapter::ReqQryInstrument(ThostFtdcQryInstrumentField^ pQryInstrument, int nRequestID)
{
	CThostFtdcQryInstrumentField native;
	MNConv<ThostFtdcQryInstrumentField^, CThostFtdcQryInstrumentField>::M2N(pQryInstrument, &native);
	return m_pApi->ReqQryInstrument(&native, nRequestID);
}

///<summary>
///�����ѯ����
///</summary>
int KSFTTraderAdapter::ReqQryDepthMarketData(ThostFtdcQryDepthMarketDataField^ pQryDepthMarketData, int nRequestID)
{
	CThostFtdcQryDepthMarketDataField native;
	MNConv<ThostFtdcQryDepthMarketDataField^, CThostFtdcQryDepthMarketDataField>::M2N(pQryDepthMarketData, &native);
	return m_pApi->ReqQryDepthMarketData(&native, nRequestID);
}

///<summary>
///�����ѯͶ���߽�����
///</summary>
int KSFTTraderAdapter::ReqQrySettlementInfo(ThostFtdcQrySettlementInfoField^ pQrySettlementInfo, int nRequestID)
{
	CThostFtdcQrySettlementInfoField native;
	MNConv<ThostFtdcQrySettlementInfoField^, CThostFtdcQrySettlementInfoField>::M2N(pQrySettlementInfo, &native);
	return m_pApi->ReqQrySettlementInfo(&native, nRequestID);
}

///<summary>
///�����ѯת������
///</summary>
int KSFTTraderAdapter::ReqQryTransferBank(ThostFtdcQryTransferBankField^ pQryTransferBank, int nRequestID)
{
	CThostFtdcQryTransferBankField native;
	MNConv<ThostFtdcQryTransferBankField^, CThostFtdcQryTransferBankField>::M2N(pQryTransferBank, &native);
	return m_pApi->ReqQryTransferBank(&native, nRequestID);
}

///<summary>
///�����ѯͶ���ֲ߳���ϸ
///</summary>
int KSFTTraderAdapter::ReqQryInvestorPositionDetail(ThostFtdcQryInvestorPositionDetailField^ pQryInvestorPositionDetail, int nRequestID)
{
	CThostFtdcQryInvestorPositionDetailField native;
	MNConv<ThostFtdcQryInvestorPositionDetailField^, CThostFtdcQryInvestorPositionDetailField>::M2N(pQryInvestorPositionDetail, &native);
	return m_pApi->ReqQryInvestorPositionDetail(&native, nRequestID);
}

///<summary>
///�����ѯ�ͻ�֪ͨ
///</summary>
int KSFTTraderAdapter::ReqQryNotice(ThostFtdcQryNoticeField^ pQryNotice, int nRequestID)
{
	CThostFtdcQryNoticeField native;
	MNConv<ThostFtdcQryNoticeField^, CThostFtdcQryNoticeField>::M2N(pQryNotice, &native);
	return m_pApi->ReqQryNotice(&native, nRequestID);
}

///<summary>
///�����ѯ������Ϣȷ��
///</summary>
int KSFTTraderAdapter::ReqQrySettlementInfoConfirm(ThostFtdcQrySettlementInfoConfirmField^ pQrySettlementInfoConfirm, int nRequestID)
{
	CThostFtdcQrySettlementInfoConfirmField native;
	MNConv<ThostFtdcQrySettlementInfoConfirmField^, CThostFtdcQrySettlementInfoConfirmField>::M2N(pQrySettlementInfoConfirm, &native);
	return m_pApi->ReqQrySettlementInfoConfirm(&native, nRequestID);
}

///<summary>
///�����ѯͶ���ֲ߳���ϸ
///</summary>
int KSFTTraderAdapter::ReqQryInvestorPositionCombineDetail(ThostFtdcQryInvestorPositionCombineDetailField^ pQryInvestorPositionCombineDetail, int nRequestID)
{
	CThostFtdcQryInvestorPositionCombineDetailField native;
	MNConv<ThostFtdcQryInvestorPositionCombineDetailField^, CThostFtdcQryInvestorPositionCombineDetailField>::M2N(pQryInvestorPositionCombineDetail, &native);
	return m_pApi->ReqQryInvestorPositionCombineDetail(&native, nRequestID);
}

///<summary>
///�����ѯ��֤����ϵͳ���͹�˾�ʽ��˻���Կ
///</summary>
int KSFTTraderAdapter::ReqQryCFMMCTradingAccountKey(ThostFtdcQryCFMMCTradingAccountKeyField^ pQryCFMMCTradingAccountKey, int nRequestID)
{
	CThostFtdcQryCFMMCTradingAccountKeyField native;
	MNConv<ThostFtdcQryCFMMCTradingAccountKeyField^, CThostFtdcQryCFMMCTradingAccountKeyField>::M2N(pQryCFMMCTradingAccountKey, &native);
	return m_pApi->ReqQryCFMMCTradingAccountKey(&native, nRequestID);
}

///<summary>
///�����ѯ�ֵ��۵���Ϣ
///</summary>
int KSFTTraderAdapter::ReqQryEWarrantOffset(ThostFtdcQryEWarrantOffsetField^ pQryEWarrantOffset, int nRequestID)
{
	CThostFtdcQryEWarrantOffsetField native;
	MNConv<ThostFtdcQryEWarrantOffsetField^, CThostFtdcQryEWarrantOffsetField>::M2N(pQryEWarrantOffset, &native);
	return m_pApi->ReqQryEWarrantOffset(&native, nRequestID);
}

///<summary>
///�����ѯת����ˮ
///</summary>
int KSFTTraderAdapter::ReqQryTransferSerial(ThostFtdcQryTransferSerialField^ pQryTransferSerial, int nRequestID)
{
	CThostFtdcQryTransferSerialField native;
	MNConv<ThostFtdcQryTransferSerialField^, CThostFtdcQryTransferSerialField>::M2N(pQryTransferSerial, &native);
	return m_pApi->ReqQryTransferSerial(&native, nRequestID);
}

///<summary>
///�����ѯ����ǩԼ��ϵ
///</summary>
int KSFTTraderAdapter::ReqQryAccountregister(ThostFtdcQryAccountregisterField^ pQryAccountregister, int nRequestID)
{
	CThostFtdcQryAccountregisterField native;
	MNConv<ThostFtdcQryAccountregisterField^, CThostFtdcQryAccountregisterField>::M2N(pQryAccountregister, &native);
	return m_pApi->ReqQryAccountregister(&native, nRequestID);
}

///<summary>
///�����ѯǩԼ����
///</summary>
int KSFTTraderAdapter::ReqQryContractBank(ThostFtdcQryContractBankField^ pQryContractBank, int nRequestID)
{
	CThostFtdcQryContractBankField native;
	MNConv<ThostFtdcQryContractBankField^, CThostFtdcQryContractBankField>::M2N(pQryContractBank, &native);
	return m_pApi->ReqQryContractBank(&native, nRequestID);
}

///<summary>
///�����ѯԤ��
///</summary>
int KSFTTraderAdapter::ReqQryParkedOrder(ThostFtdcQryParkedOrderField^ pQryParkedOrder, int nRequestID)
{
	CThostFtdcQryParkedOrderField native;
	MNConv<ThostFtdcQryParkedOrderField^, CThostFtdcQryParkedOrderField>::M2N(pQryParkedOrder, &native);
	return m_pApi->ReqQryParkedOrder(&native, nRequestID);
}

///<summary>
///�����ѯԤ�񳷵�
///</summary>
int KSFTTraderAdapter::ReqQryParkedOrderAction(ThostFtdcQryParkedOrderActionField^ pQryParkedOrderAction, int nRequestID)
{
	CThostFtdcQryParkedOrderActionField native;
	MNConv<ThostFtdcQryParkedOrderActionField^, CThostFtdcQryParkedOrderActionField>::M2N(pQryParkedOrderAction, &native);
	return m_pApi->ReqQryParkedOrderAction(&native, nRequestID);
}

///<summary>
///�����ѯ����֪ͨ
///</summary>
int KSFTTraderAdapter::ReqQryTradingNotice(ThostFtdcQryTradingNoticeField^ pQryTradingNotice, int nRequestID)
{
	CThostFtdcQryTradingNoticeField native;
	MNConv<ThostFtdcQryTradingNoticeField^, CThostFtdcQryTradingNoticeField>::M2N(pQryTradingNotice, &native);
	return m_pApi->ReqQryTradingNotice(&native, nRequestID);
}

///<summary>
///�����ѯ���͹�˾���ײ���
///</summary>
int KSFTTraderAdapter::ReqQryBrokerTradingParams(ThostFtdcQryBrokerTradingParamsField^ pQryBrokerTradingParams, int nRequestID)
{
	CThostFtdcQryBrokerTradingParamsField native;
	MNConv<ThostFtdcQryBrokerTradingParamsField^, CThostFtdcQryBrokerTradingParamsField>::M2N(pQryBrokerTradingParams, &native);
	return m_pApi->ReqQryBrokerTradingParams(&native, nRequestID);
}

///<summary>
///�����ѯ���͹�˾�����㷨
///</summary>
int KSFTTraderAdapter::ReqQryBrokerTradingAlgos(ThostFtdcQryBrokerTradingAlgosField^ pQryBrokerTradingAlgos, int nRequestID)
{
	CThostFtdcQryBrokerTradingAlgosField native;
	MNConv<ThostFtdcQryBrokerTradingAlgosField^, CThostFtdcQryBrokerTradingAlgosField>::M2N(pQryBrokerTradingAlgos, &native);
	return m_pApi->ReqQryBrokerTradingAlgos(&native, nRequestID);
}

///<summary>
///�ڻ����������ʽ�ת�ڻ�����
///</summary>
int KSFTTraderAdapter::ReqFromBankToFutureByFuture(ThostFtdcReqTransferField^ pReqTransfer, int nRequestID)
{
	CThostFtdcReqTransferField native;
	MNConv<ThostFtdcReqTransferField^, CThostFtdcReqTransferField>::M2N(pReqTransfer, &native);
	return m_pApi->ReqFromBankToFutureByFuture(&native, nRequestID);
}

///<summary>
///�ڻ������ڻ��ʽ�ת��������
///</summary>
int KSFTTraderAdapter::ReqFromFutureToBankByFuture(ThostFtdcReqTransferField^ pReqTransfer, int nRequestID)
{
	CThostFtdcReqTransferField native;
	MNConv<ThostFtdcReqTransferField^, CThostFtdcReqTransferField>::M2N(pReqTransfer, &native);
	return m_pApi->ReqFromFutureToBankByFuture(&native, nRequestID);
}

///<summary>
///�ڻ������ѯ�����������
///</summary>
int KSFTTraderAdapter::ReqQueryBankAccountMoneyByFuture(ThostFtdcReqQueryAccountField^ pReqQueryAccount, int nRequestID)
{
	CThostFtdcReqQueryAccountField native;
	MNConv<ThostFtdcReqQueryAccountField^, CThostFtdcReqQueryAccountField>::M2N(pReqQueryAccount, &native);
	return m_pApi->ReqQueryBankAccountMoneyByFuture(&native, nRequestID);
}

///<summary>
///��ѯ����ǰ�ĳֲ���ϸ
///</summary>
int KSFTTraderAdapter::ReqQueryInvestorOpenPosition(ThostFtdcQryInvestorPositionDetailField^ pQryInvestorOpenPosition, int nRequestID)
{
	CThostFtdcQryInvestorPositionDetailField native;
	MNConv<ThostFtdcQryInvestorPositionDetailField^, CThostFtdcQryInvestorPositionDetailField>::M2N(pQryInvestorOpenPosition, &native);
	return m_pApi->ReqQueryInvestorOpenPosition(&native, nRequestID);
}

///<summary>
///��ѯ����ǰ����ϳֲ���ϸ
///</summary>
int KSFTTraderAdapter::ReqQueryInvestorOpenCombinePosition(ThostFtdcQryInvestorPositionCombineDetailField^ pQryInvestorOpenCombinePosition, int nRequestID)
{
	CThostFtdcQryInvestorPositionCombineDetailField native;
	MNConv<ThostFtdcQryInvestorPositionCombineDetailField^, CThostFtdcQryInvestorPositionCombineDetailField>::M2N(pQryInvestorOpenCombinePosition, &native);
	return m_pApi->ReqQueryInvestorOpenCombinePosition(&native, nRequestID);
}

///<summary>
///���õ�ǰ�ɶ�д·��
///</summary>
int KSFTTraderAdapter::SetWritablePath(System::String^ szpath)
{
	CAutoStrPtr asp = CAutoStrPtr(szpath);
	return m_pApi->SetWritablePath(asp.m_pChar);
}

///<summary>
///ע��������ʵ��
///</summary>
KSFTCosAdapter^ KSFTTraderAdapter::LoadExtApi(System::String^ ExtApiName)
{
	CAutoStrPtr asp = CAutoStrPtr(ExtApiName);
	m_pCosApi = gcnew KSFTCosAdapter;

    m_pCosApi->m_pApi = (CTKSCosApi*)m_pApi->LoadExtApi(m_pCosApi->m_pSpi, asp.m_pChar);

	if (m_pCosApi->m_pApi == NULL)
	{
		throw gcnew ArgumentNullException("COS is not active!");
	}

	return m_pCosApi;
	
}

///<summary>
///��������
///</summary>
int KSFTTraderAdapter::ReqBulkCancelOrder(ThostFtdcBulkCancelOrderField^ pBulkCancelOrder, int nRequestID)
{
	CThostFtdcBulkCancelOrderField native;
	MNConv<ThostFtdcBulkCancelOrderField^, CThostFtdcBulkCancelOrderField>::M2N(pBulkCancelOrder, &native);
	return m_pApi->ReqBulkCancelOrder(&native, nRequestID);
}
} // end of namespace