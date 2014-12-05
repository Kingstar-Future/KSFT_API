/////////////////////////////////////////////////////////////////////////
///@system �ڻ����ײ���ʾ��
///@company SunGard China
///@fileTraderApi_Sample
///@brief ����Api Sample
///@history 
///20140801	Kingstar IRDG		kevin �������ļ�
/////////////////////////////////////////////////////////////////////////

#include "stdio.h"
#include "KSTradeAPI.h"
#include <iostream>
#ifdef WIN32
#include "windows.h"
#endif

// �¼��ź�
//HANDLE g_hEvent = CreateEvent(NULL, true, false, NULL);

using namespace KingstarAPI;

class CTraderApiSample : public CThostFtdcTraderSpi
{
//public:
	// finish event
	//HANDLE m_hEvent;


public: 
	// constructor��which need a valid pointer to a CThostFtdcMduserApi instance 
	CTraderApiSample(CThostFtdcTraderApi *pUserApi, TThostFtdcBrokerIDType chBrokerID, TThostFtdcUserIDType chUserID, TThostFtdcPasswordType chPassword, TThostFtdcContractCodeType chContract)
	{
		m_nRequestID = 0;
		m_pUserApi = pUserApi;
		strncpy(m_chBrokerID, chBrokerID, sizeof(m_chBrokerID)-1);
		strncpy(m_chUserID, chUserID, sizeof(m_chUserID)-1);
		strncpy(m_chPassword, chPassword, sizeof(m_chPassword)-1);
		strncpy(m_chContract, chContract, sizeof(m_chContract)-1);
	}


	~CTraderApiSample() {}

	// After making a succeed connection with the CTP server, the client should send the login request to the CTP server.
	virtual void OnFrontConnected()
	{
		printf("OnFrontConnected:\n");

		CThostFtdcReqUserLoginField reqUserLogin;
		memset(&reqUserLogin, 0, sizeof(reqUserLogin));
		// set BrokerID
		printf("BrokerID:%s\n", m_chBrokerID);
		strcpy(reqUserLogin. BrokerID, m_chBrokerID);

		// set user id
		printf("userid:%s\n", m_chUserID);
		strcpy(reqUserLogin.UserID, m_chUserID);

		// set password
		printf("password:%s\n",m_chPassword);
		strcpy(reqUserLogin.Password, m_chPassword);

		// send the login request
		m_pUserApi->ReqUserLogin(&reqUserLogin, m_nRequestID++ );
	}

	//When the connection between client and the CTP server	disconnected,the follwing function will be called.
	virtual void OnFrontDisconnected(int nReason)
	{ 
		//  Inthis  case,  API  willreconnect��the  client  application can ignore this.
		printf("OnFrontDisconnected.\n");
	} 

	virtual void OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus)
	{
		printf("OnRtnInstrumentStatus:");
		if (NULL != pInstrumentStatus)
		{
			printf("%s-%c-%c",pInstrumentStatus->ExchangeID, pInstrumentStatus->InstrumentStatus, pInstrumentStatus->EnterReason);
		}
		printf("\n");
	}

	///����¼�����ر�
	virtual void OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo)
	{
		printf("OnErrRtnOrderInsert:\n");

	}

	///������������ر�
	virtual void OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo)
	{
		printf("OnErrRtnOrderAction:\n");
	}

	// After receiving the login request from the client��the CTP server will send the following response to notify the client whether the login success or not.
	virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspUserLogin:");
		if (pRspUserLogin != NULL)
		{
			printf("%s|%s|%s|%s|%s|%s|%s|%s|%s|%d|%d|%s|", 
				pRspUserLogin->BrokerID,					// ���͹�˾����
				pRspUserLogin->UserID,						// �û�����
				pRspUserLogin->TradingDay,					// ������
				pRspUserLogin->SystemName,					// ����ϵͳ����
				pRspUserLogin->LoginTime,					// ��½�ɹ�ʱ��
				pRspUserLogin->SHFETime,					// ������ʱ��
				pRspUserLogin->DCETime,						// ������ʱ��
				pRspUserLogin->CZCETime,					// ֣����ʱ��
				pRspUserLogin->FFEXTime,					// �н���ʱ��
				pRspUserLogin->FrontID,						// frond id
				pRspUserLogin->SessionID,					// session id
				pRspUserLogin->MaxOrderRef					// ��󱨵�����
				);
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
		if (pRspInfo->ErrorID != 0)
		{
			// in case any login failure, the client should handle this error.
			printf("Failed to login, errorcode=%d errormsg=%s requestid=%d chain=%d", pRspInfo->ErrorID, pRspInfo->ErrorMsg, nRequestID, bIsLast);
			return;
		}

		//// get trading day
		//printf("%s\n",m_pUserApi->GetTradingDay());
		//// qryInvestor request.
		//CThostFtdcQryInvestorField Investor;
		//memset(&Investor, 0, sizeof(Investor));
		//// broker id 
		//strcpy(Investor.BrokerID, m_chBrokerID);
		//// investor ID 
		//strcpy(Investor.InvestorID, m_chUserID);

		//m_pUserApi->ReqQryInvestor(&Investor, m_nRequestID++ );
/*
		if (bIsLast == true)
		{
			// QryInstrumentMarginRate
			CThostFtdcQryInstrumentMarginRateField InstrumentMarginRate;
			memset(&InstrumentMarginRate, 0, sizeof(InstrumentMarginRate));
			// broker id 
			strcpy(InstrumentMarginRate.BrokerID, m_chBrokerID);
			// investor id
			strcpy(InstrumentMarginRate.InvestorID, m_chUserID);
			// instrument id
			strcpy(InstrumentMarginRate.InstrumentID, m_chContract);
			//strcpy(InstrumentMarginRate.InstrumentID, "");
			m_pUserApi->ReqQryInstrumentMarginRate(&InstrumentMarginRate, m_nRequestID++ );
		}
		*/
		//if (bIsLast == true)
		//{
		//	// RspQryInstrument
		//	CThostFtdcQryInstrumentField QryInstrument;
		//	memset(&QryInstrument, 0, sizeof(QryInstrument));
		//	// exchange id
		//	strcpy(QryInstrument.ExchangeID, "SHFE");
		//	strcpy(QryInstrument.InstrumentID, m_chContract);

		//	m_pUserApi->ReqQryInstrument(&QryInstrument, m_nRequestID++ );
		//}
	}

	// investor response
	virtual void OnRspQryInvestor(CThostFtdcInvestorField *pInvestor, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspQryInvestor:");
		if (NULL != pInvestor)
		{
			printf("%s|%s|%s|%s|%s|%s|%c|%s|%s|",
				pInvestor->InvestorID,						// Ͷ���ߴ���
				pInvestor->InvestorName,					// Ͷ��������
				pInvestor->IdentifiedCardNo,				// ֤������
				pInvestor->Telephone,						// ��ϵ�绰
				pInvestor->Address,							// ͨѶ��ַ
				pInvestor->InvestorGroupID,					// Ͷ���߷������
				pInvestor->IdentifiedCardType,				// ֤������
				pInvestor->Mobile,							// �ֻ�
				pInvestor->OpenDate);						// ��������
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg); 
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

		if (bIsLast == true)
		{
			// tradeaccount request.
			CThostFtdcQryTradingAccountField TradingAccount;
			memset(&TradingAccount, 0, sizeof(TradingAccount));
			// broker id 
			strcpy(TradingAccount.BrokerID, m_chBrokerID);
			// investor ID 
			strcpy(TradingAccount.InvestorID, m_chUserID);

			m_pUserApi->ReqQryTradingAccount(&TradingAccount, m_nRequestID++ );
		}
	}

	// tradeaccount response
	virtual void OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspQryTradingAccount:");
		if (NULL != pTradingAccount)
		{
			printf(":%s|%.04f|%.04f|%.04f|%.04f|%.04f|%.04f|%.04f|%.04f|%.04f|%.04f|%.04f|",
				pTradingAccount->AccountID,					// �˺�
				pTradingAccount->PreBalance,				// �ϴν���׼����
				pTradingAccount->Available,					// �����ʽ�
				pTradingAccount->Commission,				// ������
				pTradingAccount->PositionProfit,			// �ֲ�ӯ��
				pTradingAccount->CloseProfit,				// ƽ��ӯ��
				pTradingAccount->FrozenCommission,			// �����������
				pTradingAccount->FrozenCash,				// ������ʽ�
				pTradingAccount->CurrMargin,				// ��ǰ��֤���ܶ�
				pTradingAccount->ExchangeMargin,			// ��������֤��
				pTradingAccount->Mortgage,					// ��Ѻ���
				pTradingAccount->Credit);					// ���ö��
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

		// QryExchange
		CThostFtdcQryExchangeField QryExchange;
		memset(&QryExchange, 0, sizeof(QryExchange));
		// exchange id
		strcpy(QryExchange.ExchangeID, "SHFE");

		m_pUserApi->ReqQryExchange(&QryExchange, m_nRequestID++ );
	}

	// RspQryExchange
	virtual void OnRspQryExchange(CThostFtdcExchangeField *pExchange, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspQryExchange:");
		if (NULL != pExchange)
		{
			printf("%s|%s", 
				pExchange->ExchangeID,					// ����������
				pExchange->ExchangeName);				// ����������
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

		if (bIsLast == true)
		{
			// RspQryInstrument
			CThostFtdcQryInstrumentField QryInstrument;
			memset(&QryInstrument, 0, sizeof(QryInstrument));
			// exchange id
			strcpy(QryInstrument.ExchangeID, "SHFE");
			strcpy(QryInstrument.InstrumentID, m_chContract);

			m_pUserApi->ReqQryInstrument(&QryInstrument, m_nRequestID++ );
		}
	}

	// RspQryInstrument
	virtual void OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspQryInstrument:");
		if (NULL != pInstrument)
		{
			printf("%s|%s|%s|%d|%s|%s|%.04f|%d|", 
				pInstrument->ExchangeID,							// ����������
				pInstrument->InstrumentID,							// ��Լ����
				pInstrument->InstrumentName,						// ��Լ����
				pInstrument->VolumeMultiple,						// ��Լ��������
				pInstrument->ExpireDate,							// ������
				pInstrument->ProductID,								// ��Ʒ����
				pInstrument->PriceTick,								// ��С�䶯��λ
				nRequestID);
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

		if (bIsLast == true)
		{
			// QryInvestorPositionDetail
			CThostFtdcQryInvestorPositionDetailField InvestorPositionDetail;
			memset(&InvestorPositionDetail, 0, sizeof(InvestorPositionDetail));
			// broker id 
			strcpy(InvestorPositionDetail.BrokerID, m_chBrokerID);
			// investor id
			strcpy(InvestorPositionDetail.InvestorID, m_chUserID);

			m_pUserApi->ReqQryInvestorPositionDetail(&InvestorPositionDetail, m_nRequestID++ );
		}
	}

	// QryInvestorPositionDetail response
	virtual void OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspQryInvestorPositionDetail:");
		if (NULL != pInvestorPositionDetail)
		{
			printf("%s|%s|%s|%s|%s|%c|%c|%d|%.04f|%.04f|%.04f|",
				pInvestorPositionDetail->TradingDay,			// ������
				pInvestorPositionDetail->OpenDate,				// ��������
				pInvestorPositionDetail->TradeID,				// �ɽ����
				pInvestorPositionDetail->InvestorID,			// Ͷ���ߴ���
				pInvestorPositionDetail->ExchangeID,			// ����������
				pInvestorPositionDetail->Direction,				// ������־
				pInvestorPositionDetail->HedgeFlag,				// Ͷ����־
				pInvestorPositionDetail->Volume,				// ����
				pInvestorPositionDetail->OpenPrice,				// ���ּ۸�
				pInvestorPositionDetail->Margin,				// Ͷ���߱�֤��
				pInvestorPositionDetail->ExchMargin				// ��������֤��
				);
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

		if (bIsLast == true)
		{
			// QryInstrumentMarginRate
			CThostFtdcQryInstrumentMarginRateField InstrumentMarginRate;
			memset(&InstrumentMarginRate, 0, sizeof(InstrumentMarginRate));
			// broker id 
			strcpy(InstrumentMarginRate.BrokerID, m_chBrokerID);
			// investor id
			strcpy(InstrumentMarginRate.InvestorID, m_chUserID);
			// instrument id
			strcpy(InstrumentMarginRate.InstrumentID, m_chContract);
			//strcpy(InstrumentMarginRate.InstrumentID, "");
			m_pUserApi->ReqQryInstrumentMarginRate(&InstrumentMarginRate, m_nRequestID++ );
		}
	}

	// QryInstrumentMarginRate response
	virtual void OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspQryInstrumentMarginRate:");
		if (NULL != pInstrumentMarginRate)
		{
			printf("%s|%s|%.04f|%.04f|%.04f|%.04f|",
				pInstrumentMarginRate->InvestorID,						// Ͷ���ߴ���
				pInstrumentMarginRate->InstrumentID,					// ��Լ����
				pInstrumentMarginRate->LongMarginRatioByMoney,			// ��ͷ��֤����
				pInstrumentMarginRate->LongMarginRatioByVolume,			// ��ͷ��֤���
				pInstrumentMarginRate->ShortMarginRatioByMoney,			// ��ͷ��֤����
				pInstrumentMarginRate->ShortMarginRatioByVolume);		// ��ͷ��֤���
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);


		if (bIsLast == true)
		{

			// QryInstrumentCommissionRate
			CThostFtdcQryInstrumentCommissionRateField InstrumentCommissionRate;
			memset(&InstrumentCommissionRate, 0, sizeof(InstrumentCommissionRate));
			// broker id 
			strcpy(InstrumentCommissionRate.BrokerID, m_chBrokerID);
			// investor id
			strcpy(InstrumentCommissionRate.InvestorID, m_chUserID);
			// instrument id
			strcpy(InstrumentCommissionRate.InstrumentID, m_chContract);
			//m_pUserApi->ReqQryInstrumentCommissionRate(&InstrumentCommissionRate, m_nRequestID++ );
		}
	}

	// QryInstrumentCommissionRate response
	virtual void OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspQryInstrumentCommissionRate:");
#if 0
		if (NULL != pInstrumentCommissionRate)
		{
			printf("%s|%s|%.04f|%.04f|%.04f|%.04f|%.04f|%.04f|",
				pInstrumentCommissionRate->InvestorID,						// Ͷ���ߴ���
				pInstrumentCommissionRate->InstrumentID,					// ��Լ����
				pInstrumentCommissionRate->OpenRatioByMoney,				// ������������
				pInstrumentCommissionRate->OpenRatioByVolume,				// ����������
				pInstrumentCommissionRate->CloseRatioByMoney,				// ƽ����������
				pInstrumentCommissionRate->CloseRatioByVolume,				// ƽ��������
				pInstrumentCommissionRate->CloseTodayRatioByMoney,			// ƽ����������
				pInstrumentCommissionRate->CloseTodayRatioByVolume);		// ƽ��������
		}
#endif
		if (NULL != pInstrumentCommissionRate)
		{
			printf("%s|%s|%.08f|%.08f|%.08f|%.08f|%.08f|%.08f|",
				pInstrumentCommissionRate->InvestorID,						// Ͷ���ߴ���
				pInstrumentCommissionRate->InstrumentID,					// ��Լ����
				pInstrumentCommissionRate->OpenRatioByMoney,				// ������������
				pInstrumentCommissionRate->OpenRatioByVolume,				// ����������
				pInstrumentCommissionRate->CloseRatioByMoney,				// ƽ����������
				pInstrumentCommissionRate->CloseRatioByVolume,				// ƽ��������
				pInstrumentCommissionRate->CloseTodayRatioByMoney,			// ƽ����������
				pInstrumentCommissionRate->CloseTodayRatioByVolume);		// ƽ��������
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

		if (bIsLast == true)
		{
			// QryDepthMarketData 
			CThostFtdcQryDepthMarketDataField DepthMarketData;
			memset(&DepthMarketData, 0, sizeof(DepthMarketData));
			// instrument ID 
			strcpy(DepthMarketData.InstrumentID, m_chContract);

			m_pUserApi->ReqQryDepthMarketData(&DepthMarketData, m_nRequestID++ );
		}
	}

	// output the DepthMarketData result 
	virtual void OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspQryDepthMarketData:");
		if(pDepthMarketData != NULL)
		{
			printf("%s|%s|%.04f|%.04f|%.04f|%.04f|%.04f|%d|%.04f|%.04f|%.04f|%d|%d|%.04f|%.04f|%.04f|%.04f|%.04f|%s|%d|%.04f|%d|%.04f|%d|%.04f|%d|%.04f|%d|%.04f|%d|%.04f|%d|%.04f|%d|%.04f|",
				pDepthMarketData->ExchangeID,					// ����������
				pDepthMarketData->InstrumentID,					// ��Լ����
				pDepthMarketData->PreClosePrice,				// ������
				pDepthMarketData->OpenPrice,					// ����
				pDepthMarketData->HighestPrice,					// ��߼�
				pDepthMarketData->LowestPrice,					// ��ͼ�
				pDepthMarketData->LastPrice,					// ���¼�
				pDepthMarketData->Volume,						// ����
				pDepthMarketData->Turnover,						// �ɽ����
				pDepthMarketData->BidPrice1,					// �����һ
				pDepthMarketData->AskPrice1,					// ������һ
				pDepthMarketData->BidVolume1,					// ������һ
				pDepthMarketData->AskVolume1,					// ������һ
				pDepthMarketData->UpperLimitPrice,				// ��ͣ���
				pDepthMarketData->LowerLimitPrice,				// ��ͣ���
				pDepthMarketData->PreSettlementPrice,			// �ϴν����
				pDepthMarketData->SettlementPrice,				// ���ν����
				pDepthMarketData->OpenInterest,					// �ֲ���
				pDepthMarketData->TradingDay,					// ������
				pDepthMarketData->BidVolume2,					// ��������
				pDepthMarketData->BidPrice2,					// ����۶�
				pDepthMarketData->BidVolume3,					// ��������
				pDepthMarketData->BidPrice3,					// �������
				pDepthMarketData->BidVolume4,					// ��������
				pDepthMarketData->BidPrice4,					// �������
				pDepthMarketData->BidVolume5,					// ��������
				pDepthMarketData->BidPrice5,					// �������
				pDepthMarketData->AskVolume2,					// ��������
				pDepthMarketData->AskPrice2,					// �����۶�
				pDepthMarketData->AskVolume3,					// ��������
				pDepthMarketData->AskPrice3,					// ��������
				pDepthMarketData->AskVolume4,					// ��������
				pDepthMarketData->AskPrice4,					// ��������
				pDepthMarketData->AskVolume5,					// ��������
				pDepthMarketData->AskPrice5						// ��������
				);
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

		//return;

		if (bIsLast == true)
		{
			// send order insertion request.
			CThostFtdcInputOrderField ord;
			memset(&ord, 0, sizeof(ord));
			// broker id 
			strcpy(ord.BrokerID, m_chBrokerID); 
			// investor ID 
			strcpy(ord.InvestorID, m_chUserID); 
			// instrument ID 
			strcpy(ord.InstrumentID, m_chContract);
			///order reference 
			strcpy(ord.OrderRef, "9");  
			// user id 
			strcpy(ord.UserID, m_chUserID); 
			// order price type 
			ord.OrderPriceType = THOST_FTDC_OPT_LimitPrice; 
			// direction 
			ord.Direction = THOST_FTDC_D_Buy; 
			// combination order��s offset flag 
			ord.CombOffsetFlag[0] = THOST_FTDC_OF_Open;
			//strcpy(ord.CombOffsetFlag, "0"); 
			// combination or hedge flag 
			ord.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;
			//strcpy(ord.CombHedgeFlag, "0");
			// price 
			ord.LimitPrice = 17000; 
			// volume 
			ord.VolumeTotalOriginal = 1; 
			// valid date 
			ord.TimeCondition = THOST_FTDC_TC_GFD; 
			// GTD DATE 
			strcpy(ord.GTDDate, ""); 
			// volume condition 
			ord.VolumeCondition = THOST_FTDC_VC_AV; 
			// min volume 
			ord.MinVolume = 0; 
			// trigger condition 
			ord.ContingentCondition = THOST_FTDC_CC_Immediately; 
			// stop price 
			ord.StopPrice = 0; 
			// force close reason 
			ord.ForceCloseReason = THOST_FTDC_FCC_NotForceClose; 
			// auto suspend flag 
			ord.IsAutoSuspend = 0;
			// request id
			ord.RequestID = m_nRequestID;

			m_pUserApi->ReqOrderInsert(&ord, m_nRequestID++ );
		}

		if (bIsLast == true)
		{
			// qryorder
			CThostFtdcQryOrderField QryOrder;
			memset(&QryOrder, 0, sizeof(QryOrder));
			// broker id 
			strcpy(QryOrder.BrokerID, m_chBrokerID);
			// investor ID 
			strcpy(QryOrder.InvestorID, m_chUserID);
			// start time
			strcpy(QryOrder.InsertTimeStart, "20110623");
			// end time
			strcpy(QryOrder.InsertTimeEnd, "20110623");

			m_pUserApi->ReqQryOrder(&QryOrder, m_nRequestID++ );
		}

	}
	// order insertion response 
	virtual void OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int  nRequestID, bool bIsLast) 
	{
		printf("OnRspOrderInsert:");
		if (NULL != pInputOrder)
		{
			printf("%s", pInputOrder->OrderRef);
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

	}; 

	// order insertion return 
	virtual void OnRtnOrder(CThostFtdcOrderField *pOrder) 
	{
		printf("OnRtnOrder:");
		if (NULL != pOrder)
		{
			printf("%d|%s|OrderSysID:%s|OrderLocalID:%s|%s|%s|%c|%s|%c|%s|%s|%d|%.04f|%d|%d|%s|%s|%s|%c|%c|%c|%c|%.04f|%s|%s|",
				pOrder->SequenceNo,							// ���	
				pOrder->InvestorID,							// �ͻ���
				pOrder->OrderSysID,							// ί�к�
				pOrder->OrderLocalID,						// ���ر������
				pOrder->ExchangeID,							// ����������
				pOrder->InstrumentID,						// ��Լ��
				pOrder->OrderStatus,						// ����״̬
				pOrder->StatusMsg,							// ״̬��Ϣ
				pOrder->Direction,							// �������
				pOrder->CombOffsetFlag,						// ��ƽ�ֱ�־
				pOrder->CombHedgeFlag,						// Ͷ�����
				pOrder->VolumeTotalOriginal,				// ί������
				pOrder->LimitPrice,							// ί�м۸�
				pOrder->VolumeTraded,						// �ɽ�����
				pOrder->VolumeTotal,						// δ�ɽ�����
				pOrder->TradingDay,							// ������
				pOrder->InsertTime,							// ί��ʱ��
				pOrder->CancelTime,							// ����ʱ��
				pOrder->OrderType,							// ��������
				pOrder->OrderSource,						// ������Դ
				pOrder->OrderPriceType,						// �����۸�����
				pOrder->TimeCondition,						// ��Ч������
				pOrder->StopPrice,							// ֹ���
				pOrder->ActiveTime,							// ����ʱ��
				pOrder->OrderRef							// ��������
				); 
		}
		printf("\n");
		printf("RequestID=[%d]\n", pOrder->RequestID);
/*
		// order insertion success, then send order action request.
		if (pOrder->OrderStatus == THOST_FTDC_OST_NoTradeQueueing && atoi(pOrder->OrderSysID) != 0)
		{
			// delete ord
			CThostFtdcInputOrderActionField ord;
			memset(&ord, 0, sizeof(ord));
			// broker id 
			strcpy(ord.BrokerID, m_chBrokerID); 
			// investor ID 
			strcpy(ord.InvestorID, m_chUserID);
			// order action refernce
			ord.OrderActionRef=000000000001;

			/// order reference 
			strcpy(ord.OrderRef, pOrder->OrderRef);		// *�ش�1
			// front id
			ord.FrontID = pOrder->FrontID;				// *�ش�2
			// session id
			ord.SessionID = pOrder->SessionID;			// *�ش�3

			// ����

			// exchange ID
			strcpy(ord.ExchangeID, pOrder->ExchangeID);	// *�ش�1
			// action order ID
			strcpy(ord.OrderSysID,pOrder->OrderSysID);	// *�ش�2

			//  action order num(unavailable yet)
			ord.VolumeChange=0;
			// instrument ID 
			strcpy(ord.InstrumentID, pOrder->InstrumentID); 
			// user id 
			strcpy(ord.UserID, m_chUserID); 

			m_pUserApi->ReqOrderAction(&ord, m_nRequestID++ ); 
		}
		*/
	}

	///trade return
	virtual void OnRtnTrade(CThostFtdcTradeField *pTrade)
	{
		static int s_nTotalBuy = 0;
		static int s_nTotalSell = 0;

		printf("OnRtnTrade:");
		if (NULL != pTrade)
		{
			if (pTrade->Direction == THOST_FTDC_D_Buy)
				s_nTotalBuy += pTrade->Volume;
			else if (pTrade->Direction == THOST_FTDC_D_Sell)
				s_nTotalSell += pTrade->Volume;
			else
				printf ("invalid direction:%c\n", pTrade->Direction);

			printf("%d|%s|%s|%s|%s|�ɽ�|%c|%c|%c|%d|%.04f|%s|%s|%s|%s|s_nTotalBuy=%d|s_nTotalSell=%d|",
				pTrade->SequenceNo,					// ���
				pTrade->InvestorID,					// �ͻ���
				pTrade->ExchangeID,					// ����������
				pTrade->OrderSysID,					// ί�е���
				pTrade->InstrumentID,				// ��Լ����
				pTrade->Direction,					// �������
				pTrade->OffsetFlag,					// ��ƽ�ֱ�־
				pTrade->HedgeFlag,					// Ͷ�����
				pTrade->Volume,						// �ɽ�����
				pTrade->Price,						// �ɽ��۸�
				pTrade->TradeID,					// �ɽ���
				pTrade->TradingDay,					// ������
				pTrade->TradeTime,					// �ɽ�ʱ��
				pTrade->OrderRef,					// ��������
				s_nTotalBuy,
				s_nTotalSell
				);
		}
		printf("\n");
	}

	// the error notification caused by client request
	virtual void OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspError:\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

		// the client should handle the error
	}

	// output the order action result 
	virtual void OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspOrderAction:");
		if (NULL != pInputOrderAction)
		{
			printf("%s|OrderSysID:%s|%s|%s|%.04f|",
				pInputOrderAction->InvestorID,							// �ͻ���
				pInputOrderAction->OrderSysID,							// ί�к�
				pInputOrderAction->ExchangeID,							// ����������
				pInputOrderAction->InstrumentID,						// ��Լ��
				pInputOrderAction->LimitPrice							// ί�м۸�
				);
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
	}

	// qryorder return
	virtual void OnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspQryOrder:");
		if(pOrder != NULL)
		{
			printf("%s", pOrder->OrderSysID);
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

		if (bIsLast == true)
		{	
			// qrytrade
			CThostFtdcQryTradeField QryTrade;
			memset(&QryTrade, 0, sizeof(QryTrade));
			// broker id 
			strcpy(QryTrade.BrokerID, m_chBrokerID); 
			// investor ID 
			strcpy(QryTrade.InvestorID, m_chUserID);
			// start time
			strcpy(QryTrade.TradeTimeStart, "20110530");
			// end time
			strcpy(QryTrade.TradeTimeEnd, "20110601");
			// exchange id
			strcpy(QryTrade.ExchangeID, "SHFE");
			// instructment id
			strcpy(QryTrade.InstrumentID, m_chContract);

			m_pUserApi->ReqQryTrade(&QryTrade, m_nRequestID++ );
		}
	}

	// qrytrade return
	virtual void OnRspQryTrade(CThostFtdcTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspQryTrade:");
		if(pTrade != NULL)
		{
			printf("%s|%s|%s|%s|%c|%c|%c|%d|%.04f|%s|%s|%s|%s|%d",
				pTrade->InvestorID,							// �ͻ���
				pTrade->ExchangeID,							// ����������
				pTrade->OrderSysID,							// �������
				pTrade->InstrumentID,						// ��Լ����
				pTrade->Direction,							// �������
				pTrade->OffsetFlag,							// ��ƽ��־
				pTrade->HedgeFlag,							// Ͷ�����
				pTrade->Volume,								// �ɽ�����
				pTrade->Price,								// �ɽ��۸�
				pTrade->TradeID,							// �ɽ���
				pTrade->TradeDate,							// ����
				pTrade->TradingDay,							// ������
				pTrade->TradeTime,							// �ɽ�ʱ��
				pTrade->SequenceNo							// ���
				);
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

		if (bIsLast == true)
		{
			// qry position
			CThostFtdcQryInvestorPositionField QryInvestorPosition;
			memset(&QryInvestorPosition, 0, sizeof(QryInvestorPosition));
			// broker id 
			strcpy(QryInvestorPosition.BrokerID, m_chBrokerID); 
			// investor ID 
			strcpy(QryInvestorPosition.InvestorID, m_chUserID);
			// instrument id
			strcpy(QryInvestorPosition.InstrumentID, m_chContract);

			m_pUserApi->ReqQryInvestorPosition(&QryInvestorPosition, m_nRequestID++ );;
		}
	}

	// QryInvestorPosition return
	virtual void OnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspQryInvestorPosition:");
		if(pInvestorPosition != NULL)
		{
			printf("%s|%d|%d|%.04f|%.04f|%s|%c|%.04f|%c|%s|%.04f|", 
				pInvestorPosition->InvestorID,					// �ͻ���
				pInvestorPosition->Position,					// �����ֲܳ�
				pInvestorPosition->TodayPosition,				// �����ֲֳ�
				pInvestorPosition->PositionCost,				// �ֲֳɱ�	
				pInvestorPosition->OpenCost,					// ���ֳɱ�
				pInvestorPosition->InstrumentID,				// ��Լ����
				pInvestorPosition->HedgeFlag,					// Ͷ���ױ���־
				pInvestorPosition->PositionProfit,				// �ֲ�ӯ��
				pInvestorPosition->PosiDirection,				// �ֲֶ�շ���
				pInvestorPosition->TradingDay,					// ������
				pInvestorPosition->UseMargin					// ռ�õı�֤��
				);
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

		if (bIsLast == true)
		{	
			// qry CFMMC key
			CThostFtdcQryCFMMCTradingAccountKeyField CFMMCTradingAccountKey;
			memset(&CFMMCTradingAccountKey, 0, sizeof(CFMMCTradingAccountKey));
			// broker id
			strcpy(CFMMCTradingAccountKey.BrokerID,m_chBrokerID);
			// user id
			strcpy(CFMMCTradingAccountKey.InvestorID, m_chUserID);

			m_pUserApi->ReqQryCFMMCTradingAccountKey(&CFMMCTradingAccountKey, m_nRequestID++ );
		}
	}

	// QryCFMMCTradingAccountKey return
	virtual void OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspQryCFMMCTradingAccountKey:");
		if (NULL != pCFMMCTradingAccountKey)
		{
			printf("%s|%s|%d|%s|",
				pCFMMCTradingAccountKey->AccountID,				   // Ͷ�����ʺ�
				pCFMMCTradingAccountKey->ParticipantID,			   // ���͹�˾ͳһ����
				pCFMMCTradingAccountKey->KeyID,					   // ��Կ���
				pCFMMCTradingAccountKey->CurrentKey				   // ��̬��Կ
				);
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

		if (bIsLast == true)
		{
			// password update
			CThostFtdcUserPasswordUpdateField UserPasswordUpdate;
			memset(&UserPasswordUpdate, 0, sizeof(UserPasswordUpdate));
			// broker id
			strcpy(UserPasswordUpdate.BrokerID,m_chBrokerID);
			// user id
			strcpy(UserPasswordUpdate.UserID, m_chUserID);
			// old password
			strcpy(UserPasswordUpdate.OldPassword, "123456");
			// new password
			strcpy(UserPasswordUpdate.NewPassword, "123456");

			m_pUserApi->ReqUserPasswordUpdate(&UserPasswordUpdate, m_nRequestID++ );
		}

	}

	// PasswordUpdate return
	virtual void OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspUserPasswordUpdate:");
		if (NULL != pUserPasswordUpdate)
		{
			printf("%s|%s|%s|",
				pUserPasswordUpdate->UserID,			// �ͻ���
				pUserPasswordUpdate->OldPassword,		// �ɿ���
				pUserPasswordUpdate->NewPassword		// �¿���
				);
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

		if (bIsLast == true)
		{
			// account password update
			CThostFtdcTradingAccountPasswordUpdateField TradingAccountPasswordUpdate ;
			memset(&TradingAccountPasswordUpdate, 0, sizeof(TradingAccountPasswordUpdate));
			// broker id
			strcpy(TradingAccountPasswordUpdate.BrokerID,m_chBrokerID);
			// account id
			strcpy(TradingAccountPasswordUpdate.AccountID, m_chUserID);
			// old password
			strcpy(TradingAccountPasswordUpdate.OldPassword, "123456");
			// new password
			strcpy(TradingAccountPasswordUpdate.NewPassword, "123456");

			m_pUserApi->ReqTradingAccountPasswordUpdate(&TradingAccountPasswordUpdate, m_nRequestID++ );
		}

	}

	// TradingAccountPasswordUpdate
	virtual void OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspTradingAccountPasswordUpdate:");
		if (NULL != pTradingAccountPasswordUpdate)
		{
			printf("%s|%s|%s|",
				pTradingAccountPasswordUpdate->AccountID,				// �ʽ��˻�
				pTradingAccountPasswordUpdate->OldPassword,				// �ɿ���
				pTradingAccountPasswordUpdate->NewPassword				// �¿���
				);
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

		if (bIsLast == true)
		{
			// SettlementInfo Confirm
			CThostFtdcQrySettlementInfoConfirmField SettlementInfoConfirm;
			memset(&SettlementInfoConfirm, 0, sizeof(SettlementInfoConfirm));
			// broker id
			strcpy(SettlementInfoConfirm.BrokerID, m_chBrokerID);
			// investor ID
			strcpy(SettlementInfoConfirm.InvestorID, m_chUserID);

			m_pUserApi->ReqQrySettlementInfoConfirm(&SettlementInfoConfirm, m_nRequestID++ );
		}

	}

	// QrySettlementInfoConfirm return
	virtual void OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspQrySettlementInfoConfirm:");
		if (NULL != pSettlementInfoConfirm)
		{
			printf("%s|%s|",
				pSettlementInfoConfirm->InvestorID,					// �ͻ���
				pSettlementInfoConfirm->ConfirmDate					// ȷ������
				);
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

		if (bIsLast == true)
		{
			// QrySettlementInfo
			CThostFtdcQrySettlementInfoField QrySettlementInfo;
			memset(&QrySettlementInfo, 0, sizeof(QrySettlementInfo));
			// broker id 
			strcpy(QrySettlementInfo.BrokerID, m_chBrokerID);
			// investor ID 
			strcpy(QrySettlementInfo.InvestorID, m_chUserID);
			// trading day
			strcpy(QrySettlementInfo.TradingDay, "");

			m_pUserApi->ReqQrySettlementInfo(&QrySettlementInfo, m_nRequestID++ );
		}

	}

	///QrySettlementInfo return
	virtual void OnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspQrySettlementInfoConfirm:");
		if(pSettlementInfo != NULL)
		{
			printf("%s|%s|",
				pSettlementInfo->InvestorID,			// �ͻ���
				pSettlementInfo->Content				// ��Ϣ����
				);
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

		if (bIsLast == true)
		{
			// QrySettlementInfo
			CThostFtdcQryInvestorPositionCombineDetailField InvestorPositionDetail;
			memset(&InvestorPositionDetail, 0, sizeof(InvestorPositionDetail));
			// broker id 
			strcpy(InvestorPositionDetail.BrokerID, m_chBrokerID); 
			// investor ID 
			strcpy(InvestorPositionDetail.InvestorID, m_chUserID);
			// 
			strcpy(InvestorPositionDetail.CombInstrumentID, "fu1109");

			m_pUserApi->ReqQryInvestorPositionCombineDetail(&InvestorPositionDetail, m_nRequestID++ );
		}
	}

	// QryInvestorPositionCombineDetail return
	virtual void OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspQryInvestorPositionCombineDetail:");
		if(pInvestorPositionCombineDetail != NULL)
		{
			printf("%s|%s|%s|%d|%.04f|",
				pInvestorPositionCombineDetail->InvestorID,					// �ͻ���
				pInvestorPositionCombineDetail->ExchangeID,					// ����������
				pInvestorPositionCombineDetail->CombInstrumentID,			// ��Ϻ�Լ
				pInvestorPositionCombineDetail->TotalAmt,					// �ֲ���
				pInvestorPositionCombineDetail->Margin						// Ͷ���߱�֤��
				);
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

		if (bIsLast == true)
		{
			// BankToFuture
			CThostFtdcReqTransferField ReqTransfer;
			memset(&ReqTransfer, 0, sizeof(ReqTransfer));
			// broker id 
			strcpy(ReqTransfer.BrokerID, m_chBrokerID); 
			// AccountID ID 
			strcpy(ReqTransfer.AccountID, m_chUserID);
			// BankPassWord
			strcpy(ReqTransfer.BankPassWord, "123");
			// TradeAmount
			ReqTransfer.TradeAmount = 100;
			// BankID
			strcpy(ReqTransfer.BankID, "2");
			// BankAccount
			strcpy(ReqTransfer.BankAccount, "360000016");

			m_pUserApi->ReqFromBankToFutureByFuture(&ReqTransfer, m_nRequestID++ );
		}
	}

	///�ڻ����������ʽ�ת�ڻ�Ӧ��
	virtual void OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
	{
		printf("OnRspFromBankToFutureByFuture:");
		if (NULL != pReqTransfer)
		{
			printf("%s|%s|%s|%s|%d|%.04f|%c|%c|",
				pReqTransfer->AccountID,						// Ͷ�����˺�
				pReqTransfer->BankID,							// ���д���
				pReqTransfer->BankAccount,						// �����˺�
				pReqTransfer->TradeTime,						// ����ʱ��
				pReqTransfer->PlateSerial,						// ����ƽ̨��ˮ��
				pReqTransfer->TradeAmount,						// ת�˽��
				pReqTransfer->TransferStatus,					// ����״̬
				pReqTransfer->BankAccType						// ��������
				);
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

		if (bIsLast == true)
		{
			// FutureToBan
			CThostFtdcReqTransferField ReqTransfer;
			memset(&ReqTransfer, 0, sizeof(ReqTransfer));
			// broker id 
			strcpy(ReqTransfer.BrokerID, m_chBrokerID); 
			// AccountID ID 
			strcpy(ReqTransfer.AccountID, m_chUserID);
			// BankPassWord
			strcpy(ReqTransfer.BankPassWord, "123");
			// TradeAmount
			ReqTransfer.TradeAmount = 100;
			// BankID
			strcpy(ReqTransfer.BankID, "2");
			// BankAccount
			strcpy(ReqTransfer.BankAccount, "360000016");

			//m_pUserApi->ReqFromFutureToBankByFuture(&ReqTransfer, m_nRequestID++ );
		}


	}

	///�ڻ������ڻ��ʽ�ת����Ӧ��
	virtual void OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspFromFutureToBankByFuture:");
		if (NULL != pReqTransfer)
		{
			printf("%s|%s|%s|%s|%d|%.04f|%c|%c|",
				pReqTransfer->AccountID,						// Ͷ�����˺�
				pReqTransfer->BankID,							// ���д���
				pReqTransfer->BankAccount,						// �����˺�
				pReqTransfer->TradeTime,						// ����ʱ��
				pReqTransfer->PlateSerial,						// ����ƽ̨��ˮ��
				pReqTransfer->TradeAmount,						// ת�˽��
				pReqTransfer->TransferStatus,					// ����״̬
				pReqTransfer->BankAccType						// ��������
				);
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

		if (bIsLast == true)
		{
			// FutureToBank
			CThostFtdcReqQueryAccountField ReqQueryAccount;
			memset(&ReqQueryAccount, 0, sizeof(ReqQueryAccount));
			// AccountID ID 
			strcpy(ReqQueryAccount.AccountID, m_chUserID);
			// BankPassWord
			strcpy(ReqQueryAccount.BankPassWord, "1234");
			// BankID
			strcpy(ReqQueryAccount.BankID, "2");
			// BankAccount
			strcpy(ReqQueryAccount.BankAccount, "360000016");

			m_pUserApi->ReqQueryBankAccountMoneyByFuture(&ReqQueryAccount, m_nRequestID++ );
		}

	}	

	///�ڻ������ѯ�������Ӧ��
	virtual void OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspQueryBankAccountMoneyByFuture:");
		if (NULL != pReqQueryAccount)
		{
			printf("%s|%s|%s|%s|%d|%c|",
				pReqQueryAccount->AccountID,						// Ͷ�����˺�
				pReqQueryAccount->BankID,							// ���д���
				pReqQueryAccount->BankAccount,						// �����˺�
				pReqQueryAccount->TradeTime,						// ����ʱ��
				pReqQueryAccount->PlateSerial,						// ����ƽ̨��ˮ��
				pReqQueryAccount->BankAccType						// ��������
				);
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

		if (bIsLast == true)
		{
			// TransferSerial
			CThostFtdcQryTransferSerialField QryTransferSerial;
			memset(&QryTransferSerial, 0, sizeof(QryTransferSerial));
			// broker id 
			strcpy(QryTransferSerial.BrokerID, m_chBrokerID); 
			// investor ID 
			strcpy(QryTransferSerial.AccountID, m_chUserID);
			// BankID
			strcpy(QryTransferSerial.BankID, "5");

			m_pUserApi->ReqQryTransferSerial(&QryTransferSerial, m_nRequestID++ );
		}
	}

	// TransferSerial return
	virtual void OnRspQryTransferSerial(CThostFtdcTransferSerialField *pTransferSerial, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspQryTransferSerial:");
		if (pTransferSerial != NULL)
		{
			printf("%d|%s|%s|%s|%s|%s|%.04f|%s|%c|%c|",
				pTransferSerial->PlateSerial,				// ����ƽ̨��ˮ��
				pTransferSerial->AccountID,					// Ͷ�����˺�
				pTransferSerial->BankAccount,				// �����˺�
				pTransferSerial->OperatorCode,				// ����Ա
				pTransferSerial->TradingDay,				// ��������
				pTransferSerial->TradeTime,					// ����ʱ��
				pTransferSerial->TradeAmount,				// ���׽��
				pTransferSerial->BankID,					// ���д���
				pTransferSerial->BankAccType,				// ��������
				pTransferSerial->AvailabilityFlag			// ��Ч��־
				);
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

		if (bIsLast == true)
		{
			CThostFtdcQryNoticeField QryNotice;
			memset(&QryNotice, 0, sizeof(QryNotice));
			// broker id 
			strcpy(QryNotice.BrokerID, m_chBrokerID);

			m_pUserApi->ReqQryNotice(&QryNotice, m_nRequestID++ );
		}
	}

	// notice return
	virtual void OnRspQryNotice(CThostFtdcNoticeField *pNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspQryNotice:");
		if (NULL != pNotice)
		{
			printf(":%s", pNotice->Content);
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

		if (bIsLast == true)
		{
			CThostFtdcQryTradingNoticeField QryTradingNotice;
			memset(&QryTradingNotice, 0, sizeof(QryTradingNotice)-1);
			// broker id 
			strcpy(QryTradingNotice.BrokerID, m_chBrokerID);
			// investor ID
			strcpy(QryTradingNotice.InvestorID, m_chUserID);

			m_pUserApi->ReqQryTradingNotice(&QryTradingNotice, m_nRequestID++ );
		}
	}

	// trade notice return
	virtual void OnRspQryTradingNotice(CThostFtdcTradingNoticeField *pTradingNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspQryTradingNotice:");
		if (NULL != pTradingNotice)
		{
			printf(":%s", pTradingNotice->FieldContent);
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
	}

	// logout return
	virtual void OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspUserLogout:");
		if (NULL != pUserLogout)
		{
			printf("%s",pUserLogout->UserID);
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);


		return;
	}
private:     
	// �����
	int m_nRequestID;
	// ʵ��ָ��
	CThostFtdcTraderApi *m_pUserApi;
	// ���ù�˾����
	TThostFtdcBrokerIDType m_chBrokerID;
	// �û���
	TThostFtdcUserIDType m_chUserID;
	// �û�����
	TThostFtdcPasswordType m_chPassword;
	TThostFtdcContractCodeType m_chContract;
};

int main(int argc, char* argv[])
{
	// ����ʵ��
	CThostFtdcTraderApi* pUserApi = CThostFtdcTraderApi::CreateFtdcTraderApi("");

	// ����spiʵ��
	CTraderApiSample* pSpi = new CTraderApiSample(pUserApi, "31000853", "80002", "123456", "cu1411");

	// ע��spiʵ��
	pUserApi->RegisterSpi(pSpi);

	//����˽����
	pUserApi->SubscribePrivateTopic(THOST_TERT_RESUME);

	//���Ĺ�����
	pUserApi->SubscribePublicTopic(THOST_TERT_QUICK);

	// ע��ǰ�û�	
	pUserApi->RegisterFront("tcp://10.253.117.107:13153");
	//pUserApi->RegisterNameServer("tcp://10.253.117.110:11000");
	//CThostFtdcFensUserInfoField FensUserInfo = {0};
	//strncpy(FensUserInfo.UserID, "201301", sizeof(FensUserInfo.UserID)-1);
	//FensUserInfo.LoginMode = 'E';
	//pUserApi->RegisterFensUserInfo(&FensUserInfo);
	// ��ʼ��
	pUserApi->Init();

	// �ȴ��ź�
	//WaitForSingleObject(g_hEvent, INFINITE);

	printf ("\npress return to quit...\n");

	getchar();

	//pUserApi->Join();
	pUserApi->Release();

	return 0;
}


