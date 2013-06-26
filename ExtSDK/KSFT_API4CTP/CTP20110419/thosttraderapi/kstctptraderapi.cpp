/**
* @file kstctptraderapi.cpp
* ���˴�תCTP�ӿ�
* @author kevin.shen
*/

#include "kstctptraderapi.h"

// ���캯��
CThostFtdcTraderApi_obj::CThostFtdcTraderApi_obj(KingstarAPI::CThostFtdcTraderApi *pKSapi)
{
	m_pKSapi = pKSapi;
	m_pKSSpi = NULL;
}

// ��������
CThostFtdcTraderApi_obj::~CThostFtdcTraderApi_obj()
{
	
}

///ɾ���ӿڶ�����
void CThostFtdcTraderApi_obj::Release()
{
	if (NULL != m_pKSapi)
	{
		m_pKSapi->Release();
		m_pKSapi = NULL;
		delete m_pKSSpi;
		m_pKSSpi = NULL;
	}
}

///��ʼ��
void CThostFtdcTraderApi_obj::Init()
{
	if (NULL != m_pKSapi)
	{
		m_pKSapi->Init();
	}
}

///�ȴ��ӿ��߳̽�������
int CThostFtdcTraderApi_obj::Join()
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->Join();
	}
	else
	{
		return PISNULL;
	}
}

///��ȡ��ǰ������
const char *CThostFtdcTraderApi_obj::GetTradingDay()
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->GetTradingDay();
	}
	else
	{
		return NULL;
	}
}

///ע��ǰ�û������ַ
void CThostFtdcTraderApi_obj::RegisterFront(char *pszFrontAddress)
{
	if (NULL != m_pKSapi)
	{
		m_pKSapi->RegisterFront(pszFrontAddress);
	}	
}

///ע��ص��ӿ�
void CThostFtdcTraderApi_obj::RegisterSpi(::CThostFtdcTraderSpi *pSpi)
{
	// ���˴�ӿ�spiָ��
	m_pKSSpi = new CThostFtdcTraderSpi_obj(pSpi);  

	if (NULL != m_pKSapi)
	{
		m_pKSapi->RegisterSpi(m_pKSSpi);
	}
}

///����˽������
void CThostFtdcTraderApi_obj::SubscribePrivateTopic(::THOST_TE_RESUME_TYPE nResumeType)
{
	if (NULL != m_pKSapi)
	{
		m_pKSapi->SubscribePrivateTopic((KingstarAPI::THOST_TE_RESUME_TYPE )nResumeType);
	}
}

///���Ĺ�������
void CThostFtdcTraderApi_obj::SubscribePublicTopic(::THOST_TE_RESUME_TYPE nResumeType)
{
	if (NULL != m_pKSapi)
	{
		m_pKSapi->SubscribePublicTopic((KingstarAPI::THOST_TE_RESUME_TYPE )nResumeType);
	}
}

///�ͻ�����֤����
int CThostFtdcTraderApi_obj::ReqAuthenticate(::CThostFtdcReqAuthenticateField *pReqAuthenticateField, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqAuthenticate((KingstarAPI::CThostFtdcReqAuthenticateField *)pReqAuthenticateField, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�û���¼����
int CThostFtdcTraderApi_obj::ReqUserLogin(::CThostFtdcReqUserLoginField *pReqUserLoginField, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqUserLogin((KingstarAPI::CThostFtdcReqUserLoginField *)pReqUserLoginField, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�ǳ�����
int CThostFtdcTraderApi_obj::ReqUserLogout(::CThostFtdcUserLogoutField *pUserLogout, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqUserLogout((KingstarAPI::CThostFtdcUserLogoutField *)pUserLogout, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�û������������
int CThostFtdcTraderApi_obj::ReqUserPasswordUpdate(::CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqUserPasswordUpdate((KingstarAPI::CThostFtdcUserPasswordUpdateField *)pUserPasswordUpdate, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�ʽ��˻������������
int CThostFtdcTraderApi_obj::ReqTradingAccountPasswordUpdate(::CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
	return m_pKSapi->ReqTradingAccountPasswordUpdate((KingstarAPI::CThostFtdcTradingAccountPasswordUpdateField *)pTradingAccountPasswordUpdate, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///����¼������
int CThostFtdcTraderApi_obj::ReqOrderInsert(::CThostFtdcInputOrderField *pInputOrder, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqOrderInsert((KingstarAPI::CThostFtdcInputOrderField *)pInputOrder, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///Ԥ��¼������
int CThostFtdcTraderApi_obj::ReqParkedOrderInsert(::CThostFtdcParkedOrderField *pParkedOrder, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqParkedOrderInsert((KingstarAPI::CThostFtdcParkedOrderField *)pParkedOrder, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///Ԥ�񳷵�¼������
int CThostFtdcTraderApi_obj::ReqParkedOrderAction(::CThostFtdcParkedOrderActionField *pParkedOrderAction, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqParkedOrderAction((KingstarAPI::CThostFtdcParkedOrderActionField *)pParkedOrderAction, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///������������
int CThostFtdcTraderApi_obj::ReqOrderAction(::CThostFtdcInputOrderActionField *pInputOrderAction, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqOrderAction((KingstarAPI::CThostFtdcInputOrderActionField *)pInputOrderAction, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///��ѯ��󱨵���������
int CThostFtdcTraderApi_obj::ReqQueryMaxOrderVolume(::CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQueryMaxOrderVolume((KingstarAPI::CThostFtdcQueryMaxOrderVolumeField *)pQueryMaxOrderVolume, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///Ͷ���߽�����ȷ��
int CThostFtdcTraderApi_obj::ReqSettlementInfoConfirm(::CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqSettlementInfoConfirm((KingstarAPI::CThostFtdcSettlementInfoConfirmField *)pSettlementInfoConfirm, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///����ɾ��Ԥ��
int CThostFtdcTraderApi_obj::ReqRemoveParkedOrder(::CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqRemoveParkedOrder((KingstarAPI::CThostFtdcRemoveParkedOrderField *)pRemoveParkedOrder, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///����ɾ��Ԥ�񳷵�
int CThostFtdcTraderApi_obj::ReqRemoveParkedOrderAction(::CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqRemoveParkedOrderAction((KingstarAPI::CThostFtdcRemoveParkedOrderActionField *)pRemoveParkedOrderAction, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�����ѯ����
int CThostFtdcTraderApi_obj::ReqQryOrder(::CThostFtdcQryOrderField *pQryOrder, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryOrder((KingstarAPI::CThostFtdcQryOrderField *)pQryOrder, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�����ѯ�ɽ�
int CThostFtdcTraderApi_obj::ReqQryTrade(::CThostFtdcQryTradeField *pQryTrade, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryTrade((KingstarAPI::CThostFtdcQryTradeField *)pQryTrade, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�����ѯͶ���ֲ߳�
int CThostFtdcTraderApi_obj::ReqQryInvestorPosition(::CThostFtdcQryInvestorPositionField *pQryInvestorPosition, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryInvestorPosition((KingstarAPI::CThostFtdcQryInvestorPositionField *)pQryInvestorPosition, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�����ѯ�ʽ��˻�
int CThostFtdcTraderApi_obj::ReqQryTradingAccount(::CThostFtdcQryTradingAccountField *pQryTradingAccount, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryTradingAccount((KingstarAPI::CThostFtdcQryTradingAccountField *)pQryTradingAccount, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�����ѯͶ����
int CThostFtdcTraderApi_obj::ReqQryInvestor(::CThostFtdcQryInvestorField *pQryInvestor, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryInvestor((KingstarAPI::CThostFtdcQryInvestorField *)pQryInvestor, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}	

///�����ѯ���ױ���
int CThostFtdcTraderApi_obj::ReqQryTradingCode(::CThostFtdcQryTradingCodeField *pQryTradingCode, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryTradingCode((KingstarAPI::CThostFtdcQryTradingCodeField *)pQryTradingCode, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�����ѯ��Լ��֤����
int CThostFtdcTraderApi_obj::ReqQryInstrumentMarginRate(::CThostFtdcQryInstrumentMarginRateField *pQryInstrumentMarginRate, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryInstrumentMarginRate((KingstarAPI::CThostFtdcQryInstrumentMarginRateField *)pQryInstrumentMarginRate, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�����ѯ��Լ��������
int CThostFtdcTraderApi_obj::ReqQryInstrumentCommissionRate(::CThostFtdcQryInstrumentCommissionRateField *pQryInstrumentCommissionRate, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryInstrumentCommissionRate((KingstarAPI::CThostFtdcQryInstrumentCommissionRateField *)pQryInstrumentCommissionRate, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�����ѯ������
int CThostFtdcTraderApi_obj::ReqQryExchange(::CThostFtdcQryExchangeField *pQryExchange, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryExchange((KingstarAPI::CThostFtdcQryExchangeField *)pQryExchange, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�����ѯ��Լ
int CThostFtdcTraderApi_obj::ReqQryInstrument(::CThostFtdcQryInstrumentField *pQryInstrument, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryInstrument((KingstarAPI::CThostFtdcQryInstrumentField *)pQryInstrument, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�����ѯ����
int CThostFtdcTraderApi_obj::ReqQryDepthMarketData(::CThostFtdcQryDepthMarketDataField *pQryDepthMarketData, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryDepthMarketData((KingstarAPI::CThostFtdcQryDepthMarketDataField *)pQryDepthMarketData, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�����ѯͶ���߽�����
int CThostFtdcTraderApi_obj::ReqQrySettlementInfo(::CThostFtdcQrySettlementInfoField *pQrySettlementInfo, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQrySettlementInfo((KingstarAPI::CThostFtdcQrySettlementInfoField *)pQrySettlementInfo, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�����ѯת������
int CThostFtdcTraderApi_obj::ReqQryTransferBank(::CThostFtdcQryTransferBankField *pQryTransferBank, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryTransferBank((KingstarAPI::CThostFtdcQryTransferBankField *)pQryTransferBank, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�����ѯͶ���ֲ߳���ϸ
int CThostFtdcTraderApi_obj::ReqQryInvestorPositionDetail(::CThostFtdcQryInvestorPositionDetailField *pQryInvestorPositionDetail, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryInvestorPositionDetail((KingstarAPI::CThostFtdcQryInvestorPositionDetailField *)pQryInvestorPositionDetail, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�����ѯ�ͻ�֪ͨ
int CThostFtdcTraderApi_obj::ReqQryNotice(::CThostFtdcQryNoticeField *pQryNotice, int nRequestID)
{	
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryNotice((KingstarAPI::CThostFtdcQryNoticeField *)pQryNotice, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�����ѯ������Ϣȷ��
int CThostFtdcTraderApi_obj::ReqQrySettlementInfoConfirm(::CThostFtdcQrySettlementInfoConfirmField *pQrySettlementInfoConfirm, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQrySettlementInfoConfirm((KingstarAPI::CThostFtdcQrySettlementInfoConfirmField *)pQrySettlementInfoConfirm, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�����ѯͶ���ֲ߳���ϸ
int CThostFtdcTraderApi_obj::ReqQryInvestorPositionCombineDetail(::CThostFtdcQryInvestorPositionCombineDetailField *pQryInvestorPositionCombineDetail, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryInvestorPositionCombineDetail((KingstarAPI::CThostFtdcQryInvestorPositionCombineDetailField *)pQryInvestorPositionCombineDetail, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�����ѯ��֤����ϵͳ���͹�˾�ʽ��˻���Կ
int CThostFtdcTraderApi_obj::ReqQryCFMMCTradingAccountKey(::CThostFtdcQryCFMMCTradingAccountKeyField *pQryCFMMCTradingAccountKey, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryCFMMCTradingAccountKey((KingstarAPI::CThostFtdcQryCFMMCTradingAccountKeyField *)pQryCFMMCTradingAccountKey, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�����ѯ�ֵ��۵���Ϣ
int CThostFtdcTraderApi_obj::ReqQryEWarrantOffset(::CThostFtdcQryEWarrantOffsetField *pQryEWarrantOffset, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryEWarrantOffset((KingstarAPI::CThostFtdcQryEWarrantOffsetField *)pQryEWarrantOffset, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�����ѯת����ˮ
int CThostFtdcTraderApi_obj::ReqQryTransferSerial(::CThostFtdcQryTransferSerialField *pQryTransferSerial, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryTransferSerial((KingstarAPI::CThostFtdcQryTransferSerialField *)pQryTransferSerial, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�����ѯ����ǩԼ��ϵ
int CThostFtdcTraderApi_obj::ReqQryAccountregister(::CThostFtdcQryAccountregisterField *pQryAccountregister, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryAccountregister((KingstarAPI::CThostFtdcQryAccountregisterField *)pQryAccountregister, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�����ѯǩԼ����
int CThostFtdcTraderApi_obj::ReqQryContractBank(::CThostFtdcQryContractBankField *pQryContractBank, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryContractBank((KingstarAPI::CThostFtdcQryContractBankField *)pQryContractBank, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�����ѯԤ��
int CThostFtdcTraderApi_obj::ReqQryParkedOrder(::CThostFtdcQryParkedOrderField *pQryParkedOrder, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryParkedOrder((KingstarAPI::CThostFtdcQryParkedOrderField *)pQryParkedOrder, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�����ѯԤ�񳷵�
int CThostFtdcTraderApi_obj::ReqQryParkedOrderAction(::CThostFtdcQryParkedOrderActionField *pQryParkedOrderAction, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryParkedOrderAction((KingstarAPI::CThostFtdcQryParkedOrderActionField *)pQryParkedOrderAction, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�����ѯ����֪ͨ
int CThostFtdcTraderApi_obj::ReqQryTradingNotice(::CThostFtdcQryTradingNoticeField *pQryTradingNotice, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryTradingNotice((KingstarAPI::CThostFtdcQryTradingNoticeField *)pQryTradingNotice, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�����ѯ���͹�˾���ײ���
int CThostFtdcTraderApi_obj::ReqQryBrokerTradingParams(::CThostFtdcQryBrokerTradingParamsField *pQryBrokerTradingParams, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryBrokerTradingParams((KingstarAPI::CThostFtdcQryBrokerTradingParamsField *)pQryBrokerTradingParams, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�����ѯ���͹�˾�����㷨
int CThostFtdcTraderApi_obj::ReqQryBrokerTradingAlgos(::CThostFtdcQryBrokerTradingAlgosField *pQryBrokerTradingAlgos, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQryBrokerTradingAlgos((KingstarAPI::CThostFtdcQryBrokerTradingAlgosField *)pQryBrokerTradingAlgos, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�ڻ����������ʽ�ת�ڻ�����
int CThostFtdcTraderApi_obj::ReqFromBankToFutureByFuture(::CThostFtdcReqTransferField *pReqTransfer, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqFromBankToFutureByFuture((KingstarAPI::CThostFtdcReqTransferField *)pReqTransfer, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�ڻ������ڻ��ʽ�ת��������
int CThostFtdcTraderApi_obj::ReqFromFutureToBankByFuture(::CThostFtdcReqTransferField *pReqTransfer, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqFromFutureToBankByFuture((KingstarAPI::CThostFtdcReqTransferField *)pReqTransfer, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}

///�ڻ������ѯ�����������
int CThostFtdcTraderApi_obj::ReqQueryBankAccountMoneyByFuture(::CThostFtdcReqQueryAccountField *pReqQueryAccount, int nRequestID)
{
	if (NULL != m_pKSapi)
	{
		return m_pKSapi->ReqQueryBankAccountMoneyByFuture((KingstarAPI::CThostFtdcReqQueryAccountField *)pReqQueryAccount, nRequestID);
	}
	else
	{
		return PISNULL;
	}
}
