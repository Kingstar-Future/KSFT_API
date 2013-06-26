/**
* @file kstctptraderspi.cpp
* ���˴�תCTP�ӿ�
* @author kevin.shen
*/

#include "kstctptraderspi.h"

// ���캯��
CThostFtdcTraderSpi_obj::CThostFtdcTraderSpi_obj(::CThostFtdcTraderSpi * pCTPSpi)
{
	m_pCTPSpi = pCTPSpi;
}

// ��������
CThostFtdcTraderSpi_obj::~CThostFtdcTraderSpi_obj()
{

}

///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
void CThostFtdcTraderSpi_obj:: OnFrontConnected()
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnFrontConnected();
	}
}

///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
void CThostFtdcTraderSpi_obj:: OnFrontDisconnected(int nReason)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnFrontDisconnected(nReason);
	}
}

///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
void CThostFtdcTraderSpi_obj:: OnHeartBeatWarning(int nTimeLapse)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnHeartBeatWarning(nTimeLapse);
	}
}

///�ͻ�����֤��Ӧ
void CThostFtdcTraderSpi_obj:: OnRspAuthenticate(KingstarAPI::CThostFtdcRspAuthenticateField *pRspAuthenticateField, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspAuthenticate((::CThostFtdcRspAuthenticateField *)pRspAuthenticateField, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///��¼������Ӧ
void CThostFtdcTraderSpi_obj:: OnRspUserLogin(KingstarAPI::CThostFtdcRspUserLoginField *pRspUserLogin, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspUserLogin((::CThostFtdcRspUserLoginField *)pRspUserLogin, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�ǳ�������Ӧ
void CThostFtdcTraderSpi_obj:: OnRspUserLogout(KingstarAPI::CThostFtdcUserLogoutField *pUserLogout, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspUserLogout((::CThostFtdcUserLogoutField *)pUserLogout, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�û��������������Ӧ
void CThostFtdcTraderSpi_obj:: OnRspUserPasswordUpdate(KingstarAPI::CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspUserPasswordUpdate((::CThostFtdcUserPasswordUpdateField *)pUserPasswordUpdate, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�ʽ��˻��������������Ӧ
void CThostFtdcTraderSpi_obj:: OnRspTradingAccountPasswordUpdate(KingstarAPI::CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspTradingAccountPasswordUpdate((::CThostFtdcTradingAccountPasswordUpdateField *)pTradingAccountPasswordUpdate, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///����¼��������Ӧ
void CThostFtdcTraderSpi_obj:: OnRspOrderInsert(KingstarAPI::CThostFtdcInputOrderField *pInputOrder, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspOrderInsert((::CThostFtdcInputOrderField *)pInputOrder, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///Ԥ��¼��������Ӧ
void CThostFtdcTraderSpi_obj:: OnRspParkedOrderInsert(KingstarAPI::CThostFtdcParkedOrderField *pParkedOrder, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspParkedOrderInsert((::CThostFtdcParkedOrderField *)pParkedOrder, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///Ԥ�񳷵�¼��������Ӧ
void CThostFtdcTraderSpi_obj:: OnRspParkedOrderAction(KingstarAPI::CThostFtdcParkedOrderActionField *pParkedOrderAction, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspParkedOrderAction((::CThostFtdcParkedOrderActionField *)pParkedOrderAction, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///��������������Ӧ
void CThostFtdcTraderSpi_obj:: OnRspOrderAction(KingstarAPI::CThostFtdcInputOrderActionField *pInputOrderAction, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspOrderAction((::CThostFtdcInputOrderActionField *)pInputOrderAction, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///��ѯ��󱨵�������Ӧ
void CThostFtdcTraderSpi_obj:: OnRspQueryMaxOrderVolume(KingstarAPI::CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQueryMaxOrderVolume((::CThostFtdcQueryMaxOrderVolumeField *)pQueryMaxOrderVolume, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///Ͷ���߽�����ȷ����Ӧ
void CThostFtdcTraderSpi_obj:: OnRspSettlementInfoConfirm(KingstarAPI::CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspSettlementInfoConfirm((::CThostFtdcSettlementInfoConfirmField *)pSettlementInfoConfirm, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///ɾ��Ԥ����Ӧ
void CThostFtdcTraderSpi_obj:: OnRspRemoveParkedOrder(KingstarAPI::CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspRemoveParkedOrder((::CThostFtdcRemoveParkedOrderField *)pRemoveParkedOrder, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///ɾ��Ԥ�񳷵���Ӧ
void CThostFtdcTraderSpi_obj:: OnRspRemoveParkedOrderAction(KingstarAPI::CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspRemoveParkedOrderAction((::CThostFtdcRemoveParkedOrderActionField *)pRemoveParkedOrderAction, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�����ѯ������Ӧ
void CThostFtdcTraderSpi_obj:: OnRspQryOrder(KingstarAPI::CThostFtdcOrderField *pOrder, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryOrder((::CThostFtdcOrderField *)pOrder, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�����ѯ�ɽ���Ӧ
void CThostFtdcTraderSpi_obj:: OnRspQryTrade(KingstarAPI::CThostFtdcTradeField *pTrade, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryTrade((::CThostFtdcTradeField *)pTrade, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�����ѯͶ���ֲ߳���Ӧ
void CThostFtdcTraderSpi_obj:: OnRspQryInvestorPosition(KingstarAPI::CThostFtdcInvestorPositionField *pInvestorPosition, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryInvestorPosition((::CThostFtdcInvestorPositionField *)pInvestorPosition, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�����ѯ�ʽ��˻���Ӧ
void CThostFtdcTraderSpi_obj:: OnRspQryTradingAccount(KingstarAPI::CThostFtdcTradingAccountField *pTradingAccount, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryTradingAccount((::CThostFtdcTradingAccountField *)pTradingAccount, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�����ѯͶ������Ӧ
void CThostFtdcTraderSpi_obj:: OnRspQryInvestor(KingstarAPI::CThostFtdcInvestorField *pInvestor, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryInvestor((::CThostFtdcInvestorField *)pInvestor, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�����ѯ���ױ�����Ӧ
void CThostFtdcTraderSpi_obj:: OnRspQryTradingCode(KingstarAPI::CThostFtdcTradingCodeField *pTradingCode, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryTradingCode((::CThostFtdcTradingCodeField *)pTradingCode, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�����ѯ��Լ��֤������Ӧ
void CThostFtdcTraderSpi_obj:: OnRspQryInstrumentMarginRate(KingstarAPI::CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryInstrumentMarginRate((::CThostFtdcInstrumentMarginRateField *)pInstrumentMarginRate, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�����ѯ��Լ����������Ӧ
void CThostFtdcTraderSpi_obj:: OnRspQryInstrumentCommissionRate(KingstarAPI::CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryInstrumentCommissionRate((::CThostFtdcInstrumentCommissionRateField *)pInstrumentCommissionRate, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�����ѯ��������Ӧ
void CThostFtdcTraderSpi_obj:: OnRspQryExchange(KingstarAPI::CThostFtdcExchangeField *pExchange, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi-> OnRspQryExchange((::CThostFtdcExchangeField *)pExchange, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�����ѯ��Լ��Ӧ
void CThostFtdcTraderSpi_obj:: OnRspQryInstrument(KingstarAPI::CThostFtdcInstrumentField *pInstrument, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryInstrument((::CThostFtdcInstrumentField *)pInstrument, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�����ѯ������Ӧ
void CThostFtdcTraderSpi_obj:: OnRspQryDepthMarketData(KingstarAPI::CThostFtdcDepthMarketDataField *pDepthMarketData, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryDepthMarketData((::CThostFtdcDepthMarketDataField *)pDepthMarketData, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�����ѯͶ���߽�������Ӧ
void CThostFtdcTraderSpi_obj:: OnRspQrySettlementInfo(KingstarAPI::CThostFtdcSettlementInfoField *pSettlementInfo, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQrySettlementInfo((::CThostFtdcSettlementInfoField *)pSettlementInfo, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�����ѯת��������Ӧ
void CThostFtdcTraderSpi_obj:: OnRspQryTransferBank(KingstarAPI::CThostFtdcTransferBankField *pTransferBank, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryTransferBank((::CThostFtdcTransferBankField *)pTransferBank, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�����ѯͶ���ֲ߳���ϸ��Ӧ
void CThostFtdcTraderSpi_obj:: OnRspQryInvestorPositionDetail(KingstarAPI::CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryInvestorPositionDetail((::CThostFtdcInvestorPositionDetailField *)pInvestorPositionDetail, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�����ѯ�ͻ�֪ͨ��Ӧ
void CThostFtdcTraderSpi_obj:: OnRspQryNotice(KingstarAPI::CThostFtdcNoticeField *pNotice, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryNotice((::CThostFtdcNoticeField *)pNotice, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�����ѯ������Ϣȷ����Ӧ
void CThostFtdcTraderSpi_obj:: OnRspQrySettlementInfoConfirm(KingstarAPI::CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQrySettlementInfoConfirm((::CThostFtdcSettlementInfoConfirmField *)pSettlementInfoConfirm, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�����ѯͶ���ֲ߳���ϸ��Ӧ
void CThostFtdcTraderSpi_obj:: OnRspQryInvestorPositionCombineDetail(KingstarAPI::CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryInvestorPositionCombineDetail((::CThostFtdcInvestorPositionCombineDetailField *)pInvestorPositionCombineDetail, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///��ѯ��֤����ϵͳ���͹�˾�ʽ��˻���Կ��Ӧ
void CThostFtdcTraderSpi_obj:: OnRspQryCFMMCTradingAccountKey(KingstarAPI::CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryCFMMCTradingAccountKey((::CThostFtdcCFMMCTradingAccountKeyField *)pCFMMCTradingAccountKey, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�����ѯ�ֵ��۵���Ϣ��Ӧ
void CThostFtdcTraderSpi_obj:: OnRspQryEWarrantOffset(KingstarAPI::CThostFtdcEWarrantOffsetField *pEWarrantOffset, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryEWarrantOffset((::CThostFtdcEWarrantOffsetField *)pEWarrantOffset, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�����ѯת����ˮ��Ӧ
void CThostFtdcTraderSpi_obj:: OnRspQryTransferSerial(KingstarAPI::CThostFtdcTransferSerialField *pTransferSerial, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryTransferSerial((::CThostFtdcTransferSerialField *)pTransferSerial, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�����ѯ����ǩԼ��ϵ��Ӧ
void CThostFtdcTraderSpi_obj:: OnRspQryAccountregister(KingstarAPI::CThostFtdcAccountregisterField *pAccountregister, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryAccountregister((::CThostFtdcAccountregisterField *)pAccountregister, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///����Ӧ��
void CThostFtdcTraderSpi_obj:: OnRspError(KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspError((::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///����֪ͨ
void CThostFtdcTraderSpi_obj:: OnRtnOrder(KingstarAPI::CThostFtdcOrderField *pOrder)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnOrder((::CThostFtdcOrderField *)pOrder);
	}
}

///�ɽ�֪ͨ
void CThostFtdcTraderSpi_obj:: OnRtnTrade(KingstarAPI::CThostFtdcTradeField *pTrade)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnTrade((::CThostFtdcTradeField *)pTrade);
	}
}

///����¼�����ر�
void CThostFtdcTraderSpi_obj:: OnErrRtnOrderInsert(KingstarAPI::CThostFtdcInputOrderField *pInputOrder, KingstarAPI::CThostFtdcRspInfoField *pRspInfo)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnErrRtnOrderInsert((::CThostFtdcInputOrderField *)pInputOrder, (::CThostFtdcRspInfoField *)pRspInfo);
	}
}

///������������ر�
void CThostFtdcTraderSpi_obj:: OnErrRtnOrderAction(KingstarAPI::CThostFtdcOrderActionField *pOrderAction, KingstarAPI::CThostFtdcRspInfoField *pRspInfo)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnErrRtnOrderAction((::CThostFtdcOrderActionField *)pOrderAction, (::CThostFtdcRspInfoField *)pRspInfo);
	}
}

///��Լ����״̬֪ͨ
void CThostFtdcTraderSpi_obj:: OnRtnInstrumentStatus(KingstarAPI::CThostFtdcInstrumentStatusField *pInstrumentStatus)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnInstrumentStatus((::CThostFtdcInstrumentStatusField *)pInstrumentStatus);
	}
}

///����֪ͨ
void CThostFtdcTraderSpi_obj:: OnRtnTradingNotice(KingstarAPI::CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnTradingNotice((::CThostFtdcTradingNoticeInfoField *)pTradingNoticeInfo);
	}
}

///��ʾ������У�����
void CThostFtdcTraderSpi_obj:: OnRtnErrorConditionalOrder(KingstarAPI::CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnErrorConditionalOrder((::CThostFtdcErrorConditionalOrderField *)pErrorConditionalOrder);
	}
}

///�����ѯǩԼ������Ӧ
void CThostFtdcTraderSpi_obj:: OnRspQryContractBank(KingstarAPI::CThostFtdcContractBankField *pContractBank, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryContractBank((::CThostFtdcContractBankField *)pContractBank, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�����ѯԤ����Ӧ
void CThostFtdcTraderSpi_obj:: OnRspQryParkedOrder(KingstarAPI::CThostFtdcParkedOrderField *pParkedOrder, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryParkedOrder((::CThostFtdcParkedOrderField *)pParkedOrder, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�����ѯԤ�񳷵���Ӧ
void CThostFtdcTraderSpi_obj:: OnRspQryParkedOrderAction(KingstarAPI::CThostFtdcParkedOrderActionField *pParkedOrderAction, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryParkedOrderAction((::CThostFtdcParkedOrderActionField *)pParkedOrderAction, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�����ѯ����֪ͨ��Ӧ
void CThostFtdcTraderSpi_obj:: OnRspQryTradingNotice(KingstarAPI::CThostFtdcTradingNoticeField *pTradingNotice, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryTradingNotice((::CThostFtdcTradingNoticeField *)pTradingNotice, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�����ѯ���͹�˾���ײ�����Ӧ
void CThostFtdcTraderSpi_obj:: OnRspQryBrokerTradingParams(KingstarAPI::CThostFtdcBrokerTradingParamsField *pBrokerTradingParams, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryBrokerTradingParams((::CThostFtdcBrokerTradingParamsField *)pBrokerTradingParams, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�����ѯ���͹�˾�����㷨��Ӧ
void CThostFtdcTraderSpi_obj:: OnRspQryBrokerTradingAlgos(KingstarAPI::CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQryBrokerTradingAlgos((::CThostFtdcBrokerTradingAlgosField *)pBrokerTradingAlgos, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///���з��������ʽ�ת�ڻ�֪ͨ
void CThostFtdcTraderSpi_obj:: OnRtnFromBankToFutureByBank(KingstarAPI::CThostFtdcRspTransferField *pRspTransfer)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnFromBankToFutureByBank((::CThostFtdcRspTransferField *)pRspTransfer);
	}
}

///���з����ڻ��ʽ�ת����֪ͨ
void CThostFtdcTraderSpi_obj:: OnRtnFromFutureToBankByBank(KingstarAPI::CThostFtdcRspTransferField *pRspTransfer)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnFromFutureToBankByBank((::CThostFtdcRspTransferField *)pRspTransfer);
	}
}

///���з����������ת�ڻ�֪ͨ
void CThostFtdcTraderSpi_obj:: OnRtnRepealFromBankToFutureByBank(KingstarAPI::CThostFtdcRspRepealField *pRspRepeal)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnRepealFromBankToFutureByBank((::CThostFtdcRspRepealField *)pRspRepeal);
	}
}

///���з�������ڻ�ת����֪ͨ
void CThostFtdcTraderSpi_obj:: OnRtnRepealFromFutureToBankByBank(KingstarAPI::CThostFtdcRspRepealField *pRspRepeal)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnRepealFromFutureToBankByBank((::CThostFtdcRspRepealField *)pRspRepeal);
	}
}

///�ڻ����������ʽ�ת�ڻ�֪ͨ
void CThostFtdcTraderSpi_obj:: OnRtnFromBankToFutureByFuture(KingstarAPI::CThostFtdcRspTransferField *pRspTransfer)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnFromBankToFutureByFuture((::CThostFtdcRspTransferField *)pRspTransfer);
	}
}

///�ڻ������ڻ��ʽ�ת����֪ͨ
void CThostFtdcTraderSpi_obj:: OnRtnFromFutureToBankByFuture(KingstarAPI::CThostFtdcRspTransferField *pRspTransfer)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnFromFutureToBankByFuture((::CThostFtdcRspTransferField *)pRspTransfer);
	}
}

///ϵͳ����ʱ�ڻ����ֹ������������ת�ڻ��������д�����Ϻ��̷��ص�֪ͨ
void CThostFtdcTraderSpi_obj:: OnRtnRepealFromBankToFutureByFutureManual(KingstarAPI::CThostFtdcRspRepealField *pRspRepeal)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnRepealFromBankToFutureByFutureManual((::CThostFtdcRspRepealField *)pRspRepeal);
	}
}

///ϵͳ����ʱ�ڻ����ֹ���������ڻ�ת�����������д�����Ϻ��̷��ص�֪ͨ
void CThostFtdcTraderSpi_obj:: OnRtnRepealFromFutureToBankByFutureManual(KingstarAPI::CThostFtdcRspRepealField *pRspRepeal)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnRepealFromFutureToBankByFutureManual((::CThostFtdcRspRepealField *)pRspRepeal);
	}
}

///�ڻ������ѯ�������֪ͨ
void CThostFtdcTraderSpi_obj:: OnRtnQueryBankBalanceByFuture(KingstarAPI::CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnQueryBankBalanceByFuture((::CThostFtdcNotifyQueryAccountField *)pNotifyQueryAccount);
	}
}

///�ڻ����������ʽ�ת�ڻ�����ر�
void CThostFtdcTraderSpi_obj:: OnErrRtnBankToFutureByFuture(KingstarAPI::CThostFtdcReqTransferField *pReqTransfer, KingstarAPI::CThostFtdcRspInfoField *pRspInfo)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnErrRtnBankToFutureByFuture((::CThostFtdcReqTransferField *)pReqTransfer, (::CThostFtdcRspInfoField *)pRspInfo);
	}
}

///�ڻ������ڻ��ʽ�ת���д���ر�
void CThostFtdcTraderSpi_obj:: OnErrRtnFutureToBankByFuture(KingstarAPI::CThostFtdcReqTransferField *pReqTransfer, KingstarAPI::CThostFtdcRspInfoField *pRspInfo)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnErrRtnFutureToBankByFuture((::CThostFtdcReqTransferField *)pReqTransfer, (::CThostFtdcRspInfoField *)pRspInfo);
	}
}

///ϵͳ����ʱ�ڻ����ֹ������������ת�ڻ�����ر�
void CThostFtdcTraderSpi_obj:: OnErrRtnRepealBankToFutureByFutureManual(KingstarAPI::CThostFtdcReqRepealField *pReqRepeal, KingstarAPI::CThostFtdcRspInfoField *pRspInfo)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnErrRtnRepealBankToFutureByFutureManual((::CThostFtdcReqRepealField *)pReqRepeal, (::CThostFtdcRspInfoField *)pRspInfo);
	}
}

///ϵͳ����ʱ�ڻ����ֹ���������ڻ�ת���д���ر�
void CThostFtdcTraderSpi_obj:: OnErrRtnRepealFutureToBankByFutureManual(KingstarAPI::CThostFtdcReqRepealField *pReqRepeal, KingstarAPI::CThostFtdcRspInfoField *pRspInfo)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnErrRtnRepealFutureToBankByFutureManual((::CThostFtdcReqRepealField *)pReqRepeal, (::CThostFtdcRspInfoField *)pRspInfo);
	}
}

///�ڻ������ѯ����������ر�
void CThostFtdcTraderSpi_obj:: OnErrRtnQueryBankBalanceByFuture(KingstarAPI::CThostFtdcReqQueryAccountField *pReqQueryAccount, KingstarAPI::CThostFtdcRspInfoField *pRspInfo)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnErrRtnQueryBankBalanceByFuture((::CThostFtdcReqQueryAccountField *)pReqQueryAccount, (::CThostFtdcRspInfoField *)pRspInfo);
	}
}

///�ڻ������������ת�ڻ��������д�����Ϻ��̷��ص�֪ͨ
void CThostFtdcTraderSpi_obj:: OnRtnRepealFromBankToFutureByFuture(KingstarAPI::CThostFtdcRspRepealField *pRspRepeal)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnRepealFromBankToFutureByFuture((::CThostFtdcRspRepealField *)pRspRepeal);
	}
}

///�ڻ���������ڻ�ת�����������д�����Ϻ��̷��ص�֪ͨ
void CThostFtdcTraderSpi_obj:: OnRtnRepealFromFutureToBankByFuture(KingstarAPI::CThostFtdcRspRepealField *pRspRepeal)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnRepealFromFutureToBankByFuture((::CThostFtdcRspRepealField *)pRspRepeal);
	}
}

///�ڻ����������ʽ�ת�ڻ�Ӧ��
void CThostFtdcTraderSpi_obj:: OnRspFromBankToFutureByFuture(KingstarAPI::CThostFtdcReqTransferField *pReqTransfer, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspFromBankToFutureByFuture((::CThostFtdcReqTransferField *)pReqTransfer, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�ڻ������ڻ��ʽ�ת����Ӧ��
void CThostFtdcTraderSpi_obj:: OnRspFromFutureToBankByFuture(KingstarAPI::CThostFtdcReqTransferField *pReqTransfer, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspFromFutureToBankByFuture((::CThostFtdcReqTransferField *)pReqTransfer, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///�ڻ������ѯ�������Ӧ��
void CThostFtdcTraderSpi_obj:: OnRspQueryBankAccountMoneyByFuture(KingstarAPI::CThostFtdcReqQueryAccountField *pReqQueryAccount, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRspQueryBankAccountMoneyByFuture((::CThostFtdcReqQueryAccountField *)pReqQueryAccount, (::CThostFtdcRspInfoField *)pRspInfo, nRequestID, bIsLast);
	}
}

///���з������ڿ���֪ͨ
void CThostFtdcTraderSpi_obj:: OnRtnOpenAccountByBank(KingstarAPI::CThostFtdcOpenAccountField *pOpenAccount)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnOpenAccountByBank((::CThostFtdcOpenAccountField *)pOpenAccount);
	}
}

///���з�����������֪ͨ
void CThostFtdcTraderSpi_obj:: OnRtnCancelAccountByBank(KingstarAPI::CThostFtdcCancelAccountField *pCancelAccount)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnCancelAccountByBank((::CThostFtdcCancelAccountField *)pCancelAccount);
	}
}

///���з����������˺�֪ͨ
void CThostFtdcTraderSpi_obj:: OnRtnChangeAccountByBank(KingstarAPI::CThostFtdcChangeAccountField *pChangeAccount)
{
	if (NULL != m_pCTPSpi)
	{
		m_pCTPSpi->OnRtnChangeAccountByBank((::CThostFtdcChangeAccountField *)pChangeAccount);
	}
}