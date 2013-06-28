// testKSTradeAPI.cpp : Defines the entry point for the console application.
//

/*
#ifdef _DEBUG
#include "vld.h"
#include "C:/Program Files/Visual Leak Detector/include/vld.h"
#pragma comment(lib, "C:/Program Files/Visual Leak Detector/lib/vld.lib")
#pragma message("Automatically linking with vld.lib")
#endif
*/


#include "testKSTradeAPI.h"
#include "event.h"
#include "../KSTradeAPI/KSTradeAPI.h"
#include "../CTP/KSCosApiDataType.h"
#include "../CTP/KSCosApiStruct.h"
#include "../CTP/KSCosApi.h"

#include<stdlib.h>
#include<stdio.h>
#include <iostream>
using namespace std;
#ifdef WIN32
#include "windows.h"
#pragma comment(lib, "../KSTradeAPI/KSTradeAPI.lib")
#pragma message("Automatically linking with KSTradeAPI.lib")
#else
#include<unistd.h>
#include<string.h>
#endif

using namespace KingstarAPI;


class CSimpleHandler : public CThostFtdcTraderSpi
{
public:
    // participant ID
    TThostFtdcBrokerIDType m_chBrokerID;

    // user id
    TThostFtdcUserIDType m_chUserID;

    // user password
    TThostFtdcPasswordType m_chPassword;

    // contract
    char m_chContract[80];

    // request id
    int m_nRequestID;

    // finish event
    HANDLE m_hEvent;


public: 
    // constructor��which need a valid pointer to a CThostFtdcMduserApi instance 
    CSimpleHandler(CThostFtdcTraderApi *pUserApi) : m_pUserApi(pUserApi), m_nRequestID(0) {}

    ~CSimpleHandler() {}

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

        // get trading day
        //	printf("%s\n",m_pUserApi->GetTradingDay());
        // qryInvestor request.
        CThostFtdcQryInvestorField Investor;
        memset(&Investor, 0, sizeof(Investor));
        // broker id 
        strcpy(Investor.BrokerID, m_chBrokerID);
        // investor ID 
        strcpy(Investor.InvestorID, m_chUserID);

        m_pUserApi->ReqQryInvestor(&Investor, m_nRequestID++ );
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

            m_pUserApi->ReqQryInstrumentCommissionRate(&InstrumentCommissionRate, m_nRequestID++ );
        }
    }

    // QryInstrumentCommissionRate response
    virtual void OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        printf("OnRspQryInstrumentCommissionRate:");
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

        return;

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
            ord.LimitPrice = 4220; 
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
            strcpy(ReqTransfer.BankPassWord, "123456");
            // TradeAmount
            ReqTransfer.TradeAmount = 100;
            // BankID
            strcpy(ReqTransfer.BankID, "6");
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
            strcpy(ReqTransfer.BankPassWord, "123456");
            // TradeAmount
            ReqTransfer.TradeAmount = 100;
            // BankID
            strcpy(ReqTransfer.BankID, "6");
            // BankAccount
            strcpy(ReqTransfer.BankAccount, "360000016");

            m_pUserApi->ReqFromFutureToBankByFuture(&ReqTransfer, m_nRequestID++ );
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
            strcpy(ReqQueryAccount.BankPassWord, "123456");
            // BankID
            strcpy(ReqQueryAccount.BankID, "6");
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

        // inform the main thread order transaction is over 
        ///SetEvent(m_hEvent); 
	 event_set((event_handle)m_hEvent);

        return;
    }
private: 
    // a pointer of CThostFtdcMduserApi instance
    CThostFtdcTraderApi *m_pUserApi;
};

class CCosHandler:public CTKSCosSpi
{
public:
  CCosHandler ()
  {
  }

   ~CCosHandler ()
  {
  }

  //������¼����Ӧ
  virtual void
    OnRspInitInsertConditionalOrder (CTKSConditionalOrderOperResultField *
				     pInitInsertConditionalOrder,
				     CThostFtdcRspInfoField * pRspInfo,
				     int nRequestID, bool bIsLast)
  {

    printf ("hello insert\n");
    if (pInitInsertConditionalOrder != NULL)
      {


	cout << "OnRspInitInsertConditionalOrder:"
	  << "���ù�˾����:" << pInitInsertConditionalOrder->BrokerID
	  << "�ͻ���:" << pInitInsertConditionalOrder->InvestorID
	  << "���������:" << pInitInsertConditionalOrder->ConditionalOrderID
	  << "���ر�����:" << pInitInsertConditionalOrder->OrderLocalID
	  << "����������:" << pInitInsertConditionalOrder->ExchangeID
	  << "��Լ����:" << pInitInsertConditionalOrder->InstrumentID
	  << "����״̬:" << pInitInsertConditionalOrder->OrderStatus
	  << "�������:" << pInitInsertConditionalOrder->Direction
	  << "��ƽ�ֱ�־:" << pInitInsertConditionalOrder->CombOffsetFlag
	  << "Ͷ�����:" << pInitInsertConditionalOrder->CombHedgeFlag
	  << "ί������:" << pInitInsertConditionalOrder->VolumeTotalOriginal
	  << "ί�м۸�:" << pInitInsertConditionalOrder->LimitPrice
	  << "������:" << pInitInsertConditionalOrder->TradingDay
	  << "�����û�:" << pInitInsertConditionalOrder->UserID
	  << "����ʱ��:" << pInitInsertConditionalOrder->CancelTime
	  << "�ͻ�����:" << pInitInsertConditionalOrder->ClientID
	  << "������״̬:" << pInitInsertConditionalOrder->
	  ConditionalOrderStatus << "������Ϣ:" <<
	  pInitInsertConditionalOrder->
	  ErrorMsg << "�۸����:" << pInitInsertConditionalOrder->
	  OrderPriceType << "��������:" << pInitInsertConditionalOrder->
	  TriggeredTimes << "���������:" << pInitInsertConditionalOrder->
	  OrderType << "��ע:" << pInitInsertConditionalOrder->
	  Memo << "��Чʱ��:" << pInitInsertConditionalOrder->
	  ActiveTime << "ʧЧʱ��:" << pInitInsertConditionalOrder->
	  InActiveTime << endl;
      }
    printf ("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID,
	    pRspInfo->ErrorMsg);
    printf ("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);




  }

  //��������ѯ��Ӧ
  virtual void OnRspQueryConditionalOrder (CTKSConditionalOrderOperResultField
					   * pQueryConditionalOrder,
					   CThostFtdcRspInfoField * pRspInfo,
					   int nRequestID, bool bIsLast)
  {
    printf ("hello query\n");
    if (pQueryConditionalOrder != NULL)
      {
	cout << "OnRspQueryConditionalOrder:"
	  << "���ù�˾����:" << pQueryConditionalOrder->BrokerID
	  << "�ͻ���:" << pQueryConditionalOrder->InvestorID
	  << "���������:" << pQueryConditionalOrder->ConditionalOrderID
	  << "���ر�����:" << pQueryConditionalOrder->OrderLocalID
	  << "����������:" << pQueryConditionalOrder->ExchangeID
	  << "��Լ����:" << pQueryConditionalOrder->InstrumentID
	  << "����״̬:" << pQueryConditionalOrder->OrderStatus
	  << "�������:" << pQueryConditionalOrder->Direction
	  << "��ƽ�ֱ�־:" << pQueryConditionalOrder->CombOffsetFlag
	  << "Ͷ�����:" << pQueryConditionalOrder->CombHedgeFlag
	  << "ί������:" << pQueryConditionalOrder->VolumeTotalOriginal
	  << "ί�м۸�:" << pQueryConditionalOrder->LimitPrice
	  << "������:" << pQueryConditionalOrder->TradingDay
	  << "�����û�:" << pQueryConditionalOrder->UserID
	  << "����ʱ��:" << pQueryConditionalOrder->CancelTime
	  << "�ͻ�����:" << pQueryConditionalOrder->ClientID
	  << "������״̬:" << pQueryConditionalOrder->ConditionalOrderStatus
	  << "������Ϣ:" << pQueryConditionalOrder->ErrorMsg
	  << "�۸����:" << pQueryConditionalOrder->OrderPriceType
	  << "��������:" << pQueryConditionalOrder->TriggeredTimes
	  << "���������:" << pQueryConditionalOrder->OrderType
	  << "��ע:" << pQueryConditionalOrder->Memo
	  << "��Чʱ��:" << pQueryConditionalOrder->ActiveTime
	  << "ʧЧʱ��:" << pQueryConditionalOrder->InActiveTime << endl;

      }
    printf ("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID,
	    pRspInfo->ErrorMsg);
    printf ("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
  }

  //�������޸���Ӧ
  virtual void
    OnRspModifyConditionalOrder (CTKSConditionalOrderOperResultField *
				 pModifyConditionalOrder,
				 CThostFtdcRspInfoField * pRspInfo,
				 int nRequestID, bool bIsLast)
  {
    printf ("hello modify\n");
    if (pModifyConditionalOrder != NULL)
      {
	cout << "OnRspModifyConditionalOrder:"
	  << "���ù�˾����:" << pModifyConditionalOrder->BrokerID
	  << "�ͻ���:" << pModifyConditionalOrder->InvestorID
	  << "���������:" << pModifyConditionalOrder->ConditionalOrderID
	  << "���ر�����:" << pModifyConditionalOrder->OrderLocalID
	  << "����������:" << pModifyConditionalOrder->ExchangeID
	  << "��Լ����:" << pModifyConditionalOrder->InstrumentID
	  << "����״̬:" << pModifyConditionalOrder->OrderStatus
	  << "�������:" << pModifyConditionalOrder->Direction
	  << "��ƽ�ֱ�־:" << pModifyConditionalOrder->CombOffsetFlag
	  << "Ͷ�����:" << pModifyConditionalOrder->CombHedgeFlag
	  << "ί������:" << pModifyConditionalOrder->VolumeTotalOriginal
	  << "ί�м۸�:" << pModifyConditionalOrder->LimitPrice
	  << "������:" << pModifyConditionalOrder->TradingDay
	  << "�����û�:" << pModifyConditionalOrder->UserID
	  << "����ʱ��:" << pModifyConditionalOrder->CancelTime
	  << "�ͻ�����:" << pModifyConditionalOrder->ClientID
	  << "������״̬:" << pModifyConditionalOrder->ConditionalOrderStatus
	  << "������Ϣ:" << pModifyConditionalOrder->ErrorMsg
	  << "�۸����:" << pModifyConditionalOrder->OrderPriceType
	  << "��������:" << pModifyConditionalOrder->TriggeredTimes
	  << "���������:" << pModifyConditionalOrder->OrderType
	  << "��ע:" << pModifyConditionalOrder->Memo
	  << "��Чʱ��:" << pModifyConditionalOrder->ActiveTime
	  << "ʧЧʱ��:" << pModifyConditionalOrder->InActiveTime << endl;

      }
    printf ("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID,
	    pRspInfo->ErrorMsg);
    printf ("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
  }

  //��������ͣ������Ӧ
  virtual void OnRspPauseConditionalOrder (CTKSConditionalOrderOperResultField
					   * pPauseConditionalOrder,
					   CThostFtdcRspInfoField * pRspInfo,
					   int nRequestID, bool bIsLast)
  {
    printf ("hello pause or active\n");
    if (pPauseConditionalOrder != NULL)
      {
	cout << "OnRspPauseConditionalOrder:"
	  << "���ù�˾����:" << pPauseConditionalOrder->BrokerID
	  << "�ͻ���:" << pPauseConditionalOrder->InvestorID
	  << "���������:" << pPauseConditionalOrder->ConditionalOrderID
	  << "���ر�����:" << pPauseConditionalOrder->OrderLocalID
	  << "����������:" << pPauseConditionalOrder->ExchangeID
	  << "��Լ����:" << pPauseConditionalOrder->InstrumentID
	  << "����״̬:" << pPauseConditionalOrder->OrderStatus
	  << "�������:" << pPauseConditionalOrder->Direction
	  << "��ƽ�ֱ�־:" << pPauseConditionalOrder->CombOffsetFlag
	  << "Ͷ�����:" << pPauseConditionalOrder->CombHedgeFlag
	  << "ί������:" << pPauseConditionalOrder->VolumeTotalOriginal
	  << "ί�м۸�:" << pPauseConditionalOrder->LimitPrice
	  << "������:" << pPauseConditionalOrder->TradingDay
	  << "�����û�:" << pPauseConditionalOrder->UserID
	  << "����ʱ��:" << pPauseConditionalOrder->CancelTime
	  << "�ͻ�����:" << pPauseConditionalOrder->ClientID
	  << "������״̬:" << pPauseConditionalOrder->ConditionalOrderStatus
	  << "������Ϣ:" << pPauseConditionalOrder->ErrorMsg
	  << "�۸����:" << pPauseConditionalOrder->OrderPriceType
	  << "��������:" << pPauseConditionalOrder->TriggeredTimes
	  << "���������:" << pPauseConditionalOrder->OrderType
	  << "��ע:" << pPauseConditionalOrder->Memo
	  << "��Чʱ��:" << pPauseConditionalOrder->ActiveTime
	  << "ʧЧʱ��:" << pPauseConditionalOrder->InActiveTime << endl;

      }
    printf ("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID,
	    pRspInfo->ErrorMsg);
    printf ("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

  }

  //������ɾ����Ӧ
  virtual void OnRspRemoveConditionalOrder (CTKSConditionalOrderRspResultField
					    * pRemoveConditionalOrder,
					    CThostFtdcRspInfoField * pRspInfo,
					    int nRequestID, bool bIsLast)
  {
    printf ("hello remove\n");
    if (pRemoveConditionalOrder != NULL)
      {

	cout << "OnRspRemoveConditionalOrder:"
	  << "Ӫҵ������:" << pRemoveConditionalOrder->BrokerID
	  << "Ͷ���ߴ���:" << pRemoveConditionalOrder->InvestorID
	  << "���������:" << pRemoveConditionalOrder->
	  ConditionalOrderID << endl;
      }
    printf ("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID,
	    pRspInfo->ErrorMsg);
    printf ("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

  }

  //������ѡ����Ӧ
  virtual void OnRspSelectConditionalOrder (CTKSConditionalOrderRspResultField
					    * pSelectConditionalOrder,
					    CThostFtdcRspInfoField * pRspInfo,
					    int nRequestID, bool bIsLast)
  {
    printf ("hello select\n");
    if (pSelectConditionalOrder != NULL)
      {

	cout << "OnRspSelectConditionalOrder:"
	  << "Ӫҵ������:" << pSelectConditionalOrder->BrokerID
	  << "Ͷ���ߴ���:" << pSelectConditionalOrder->InvestorID
	  << "���������:" << pSelectConditionalOrder->
	  ConditionalOrderID << endl;
      }
    printf ("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID,
	    pRspInfo->ErrorMsg);
    printf ("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);


  }

  //ӯ��¼����Ӧ
  virtual void
    OnRspInsertProfitAndLossOrder (CTKSProfitAndLossOrderOperResultField *
				   pInsertProfitAndLossOrder,
				   CThostFtdcRspInfoField * pRspInfo,
				   int nRequestID, bool bIsLast)
  {
    printf ("hello profit and loss insert\n");
    if (pInsertProfitAndLossOrder != NULL)
      {

	cout << "OnRspInsertProfitAndLossOrder:"
	  << "Ӫҵ������:" << pInsertProfitAndLossOrder->BrokerID
	  << "Ͷ���ߴ���:" << pInsertProfitAndLossOrder->InvestorID
	  << "ֹ��ֹӯ����:" << pInsertProfitAndLossOrder->
	  ProfitAndLossOrderID << "����Ա:" << pInsertProfitAndLossOrder->
	  UserID << "Ͷ��������:" << pInsertProfitAndLossOrder->
	  InvestorName << "���ر������:" << pInsertProfitAndLossOrder->
	  OrderLocalID << "ֹ���:" << pInsertProfitAndLossOrder->
	  StopLossPrice << "ֹӯ��:" << pInsertProfitAndLossOrder->
	  TakeProfitPrice << "ƽ�ַ�ʽ:" << pInsertProfitAndLossOrder->
	  CloseMode << "ƽ�ַ���Ӽ���λ��:" << pInsertProfitAndLossOrder->
	  Figures << "���鴥��ʱ�����¼�:" << pInsertProfitAndLossOrder->
	  LastPrice << "����ֹ��ֹӯ��ʱ��:" << pInsertProfitAndLossOrder->
	  ProfitAndLossOrderFormTime << "����������ʱ��:" <<
	  pInsertProfitAndLossOrder->
	  ConditionalOrderFormTime << "����ί�е�ʱ��:" <<
	  pInsertProfitAndLossOrder->
	  OrderFormTime << "ֹ��ֹӯ��״̬:" << pInsertProfitAndLossOrder->
	  ProfitAndLossOrderStatus << "���������:" <<
	  pInsertProfitAndLossOrder->
	  ConditionalOrderID << "����������:" << pInsertProfitAndLossOrder->
	  ExchangeID << "�ͻ�����:" << pInsertProfitAndLossOrder->
	  ClientID << "��Լ����:" << pInsertProfitAndLossOrder->
	  InstrumentID << "��ƽ��־:" << pInsertProfitAndLossOrder->
	  CombOffsetFlag << "Ͷ���ױ���־:" << pInsertProfitAndLossOrder->
	  CombHedgeFlag << "��������" << pInsertProfitAndLossOrder->
	  Direction << "�۸�" << pInsertProfitAndLossOrder->
	  LimitPrice << "����" << pInsertProfitAndLossOrder->
	  VolumeTotalOriginal << "����ӯ��۵ķ�ʽ" <<
	  pInsertProfitAndLossOrder->
	  OffsetValue << "ҵ��Ԫ" << pInsertProfitAndLossOrder->
	  BusinessUnit << "�����������۸�����" << pInsertProfitAndLossOrder->
	  SpringType << "����ֹ���" << pInsertProfitAndLossOrder->
	  FloatLimitPrice << "���ֳɽ��۸�" << pInsertProfitAndLossOrder->
	  OpenTradePrice << endl;
      }
    printf ("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID,
	    pRspInfo->ErrorMsg);
    printf ("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

  }

  //ӯ���޸���Ӧ
  virtual void
    OnRspModifyProfitAndLossOrder (CTKSProfitAndLossOrderOperResultField *
				   pModifyProfitAndLossOrder,
				   CThostFtdcRspInfoField * pRspInfo,
				   int nRequestID, bool bIsLast)
  {
    printf ("hello profit and loss modify\n");
    if (pModifyProfitAndLossOrder != NULL)
      {
	cout << "OnRspModifyProfitAndLossOrder:"
	  << "Ӫҵ������:" << pModifyProfitAndLossOrder->BrokerID
	  << "Ͷ���ߴ���:" << pModifyProfitAndLossOrder->InvestorID
	  << "ֹ��ֹӯ����:" << pModifyProfitAndLossOrder->
	  ProfitAndLossOrderID << "����Ա:" << pModifyProfitAndLossOrder->
	  UserID << "Ͷ��������:" << pModifyProfitAndLossOrder->
	  InvestorName << "���ر������:" << pModifyProfitAndLossOrder->
	  OrderLocalID << "ֹ���:" << pModifyProfitAndLossOrder->
	  StopLossPrice << "ֹӯ��:" << pModifyProfitAndLossOrder->
	  TakeProfitPrice << "ƽ�ַ�ʽ:" << pModifyProfitAndLossOrder->
	  CloseMode << "ƽ�ַ���Ӽ���λ��:" << pModifyProfitAndLossOrder->
	  Figures << "���鴥��ʱ�����¼�:" << pModifyProfitAndLossOrder->
	  LastPrice << "����ֹ��ֹӯ��ʱ��:" << pModifyProfitAndLossOrder->
	  ProfitAndLossOrderFormTime << "����������ʱ��:" <<
	  pModifyProfitAndLossOrder->
	  ConditionalOrderFormTime << "����ί�е�ʱ��:" <<
	  pModifyProfitAndLossOrder->
	  OrderFormTime << "ֹ��ֹӯ��״̬:" << pModifyProfitAndLossOrder->
	  ProfitAndLossOrderStatus << "���������:" <<
	  pModifyProfitAndLossOrder->
	  ConditionalOrderID << "����������:" << pModifyProfitAndLossOrder->
	  ExchangeID << "�ͻ�����:" << pModifyProfitAndLossOrder->
	  ClientID << "��Լ����:" << pModifyProfitAndLossOrder->
	  InstrumentID << "��ƽ��־:" << pModifyProfitAndLossOrder->
	  CombOffsetFlag << "Ͷ���ױ���־:" << pModifyProfitAndLossOrder->
	  CombHedgeFlag << "��������" << pModifyProfitAndLossOrder->
	  Direction << "�۸�" << pModifyProfitAndLossOrder->
	  LimitPrice << "����" << pModifyProfitAndLossOrder->
	  VolumeTotalOriginal << "����ӯ��۵ķ�ʽ" <<
	  pModifyProfitAndLossOrder->
	  OffsetValue << "ҵ��Ԫ" << pModifyProfitAndLossOrder->
	  BusinessUnit << "�����������۸�����" << pModifyProfitAndLossOrder->
	  SpringType << "����ֹ���" << pModifyProfitAndLossOrder->
	  FloatLimitPrice << "���ֳɽ��۸�" << pModifyProfitAndLossOrder->
	  OpenTradePrice << endl;

      }
    printf ("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID,
	    pRspInfo->ErrorMsg);
    printf ("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);


  }

  //ӯ�𵥲�ѯ��Ӧ
  virtual void
    OnRspQueryProfitAndLossOrder (CTKSProfitAndLossOrderOperResultField *
				  pQueryProfitAndLossOrder,
				  CThostFtdcRspInfoField * pRspInfo,
				  int nRequestID, bool bIsLast)
  {
    printf ("hello profit and loss query\n");
    if (pQueryProfitAndLossOrder != NULL)
      {
	cout << "OnRspQueryProfitAndLossOrder:"
	  << "Ӫҵ������:" << pQueryProfitAndLossOrder->BrokerID
	  << "Ͷ���ߴ���:" << pQueryProfitAndLossOrder->InvestorID
	  << "ֹ��ֹӯ����:" << pQueryProfitAndLossOrder->ProfitAndLossOrderID
	  << "����Ա:" << pQueryProfitAndLossOrder->UserID
	  << "Ͷ��������:" << pQueryProfitAndLossOrder->InvestorName
	  << "���ر������:" << pQueryProfitAndLossOrder->OrderLocalID
	  << "ֹ���:" << pQueryProfitAndLossOrder->StopLossPrice
	  << "ֹӯ��:" << pQueryProfitAndLossOrder->TakeProfitPrice
	  << "ƽ�ַ�ʽ:" << pQueryProfitAndLossOrder->CloseMode
	  << "ƽ�ַ���Ӽ���λ��:" << pQueryProfitAndLossOrder->Figures
	  << "���鴥��ʱ�����¼�:" << pQueryProfitAndLossOrder->LastPrice
	  << "����ֹ��ֹӯ��ʱ��:" << pQueryProfitAndLossOrder->
	  ProfitAndLossOrderFormTime << "����������ʱ��:" <<
	  pQueryProfitAndLossOrder->
	  ConditionalOrderFormTime << "����ί�е�ʱ��:" <<
	  pQueryProfitAndLossOrder->
	  OrderFormTime << "ֹ��ֹӯ��״̬:" << pQueryProfitAndLossOrder->
	  ProfitAndLossOrderStatus << "���������:" <<
	  pQueryProfitAndLossOrder->
	  ConditionalOrderID << "����������:" << pQueryProfitAndLossOrder->
	  ExchangeID << "�ͻ�����:" << pQueryProfitAndLossOrder->
	  ClientID << "��Լ����:" << pQueryProfitAndLossOrder->
	  InstrumentID << "��ƽ��־:" << pQueryProfitAndLossOrder->
	  CombOffsetFlag << "Ͷ���ױ���־:" << pQueryProfitAndLossOrder->
	  CombHedgeFlag << "��������" << pQueryProfitAndLossOrder->
	  Direction << "�۸�" << pQueryProfitAndLossOrder->
	  LimitPrice << "����" << pQueryProfitAndLossOrder->
	  VolumeTotalOriginal << "����ӯ��۵ķ�ʽ" <<
	  pQueryProfitAndLossOrder->
	  OffsetValue << "ҵ��Ԫ" << pQueryProfitAndLossOrder->
	  BusinessUnit << "�����������۸�����" << pQueryProfitAndLossOrder->
	  SpringType << "����ֹ���" << pQueryProfitAndLossOrder->
	  FloatLimitPrice << "���ֳɽ��۸�" << pQueryProfitAndLossOrder->
	  OpenTradePrice << endl;

      }
    printf ("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID,
	    pRspInfo->ErrorMsg);
    printf ("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

  }

  ///ֹ��ֹӯ��ɾ����Ӧ
  virtual void
    OnRspRemoveProfitAndLossOrder (CTKSProfitAndLossOrderRemoveField *
				   pRemoveProfitAndLossOrder,
				   CThostFtdcRspInfoField * pRspInfo,
				   int nRequestID, bool bIsLast)
  {
    printf ("hello profit and loss delete\n");
    if (pRemoveProfitAndLossOrder != NULL)
      {

	cout << "OnRspRemoveProfitAndLossOrder:"
	  << "Ӫҵ������:" << pRemoveProfitAndLossOrder->BrokerID
	  << "Ͷ���ߴ���" << pRemoveProfitAndLossOrder->InvestorID
	  << "ֹ��ֹӯ����" << pRemoveProfitAndLossOrder->
	  ProfitAndLossOrderID << endl;

      }

    printf ("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID,
	    pRspInfo->ErrorMsg);
    printf ("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

  }

  ///����������ѡ��֪ͨ
  virtual void OnRtnCOSAskSelect (CTKSCOSAskSelectField * pCOSAskSelect)
  {
    printf ("condition order select Notice\n");
    if (pCOSAskSelect != NULL)
      {

	cout << "OnRtnCOSAskSelect:"
	  << "Ӫҵ������:" << pCOSAskSelect->BrokerID
	  << "����Ա:" << pCOSAskSelect->UserID
	  << "Ͷ���ߴ���:" << pCOSAskSelect->InvestorID
	  << "���" << pCOSAskSelect->SequenceNo
	  << "���������:" << pCOSAskSelect->ConditionalOrderID
	  << "��ע:" << pCOSAskSelect->Memo
	  << "ѡ��ʽ:" << pCOSAskSelect->SelectType << endl;

      }
  }

  ///������״̬֪ͨ
  virtual void OnRtnCOSStatus (CTKSCOSStatusField * pCOSStatus)
  {
    printf ("condition order status notice\n");
    if (pCOSStatus != NULL)
      {

	cout << "OnRtnCOSStatus:"
	  << "Ӫҵ������:" << pCOSStatus->BrokerID
	  << "����Ա:" << pCOSStatus->UserID
	  << "Ͷ���ߴ���:" << pCOSStatus->InvestorID
	  << "���:" << pCOSStatus->SequenceNo
	  << "���������:" << pCOSStatus->ConditionalOrderID
	  << "������״̬:" << pCOSStatus->ConditionalOrderStatus
	  << "��ע:" << pCOSStatus->Memo
	  << "���ر������:" << pCOSStatus->OrderLocalID
	  << "����������:" << pCOSStatus->ExchangeID
	  << "��Լ����:" << pCOSStatus->InstrumentID
	  << "����״̬:" << pCOSStatus->OrderStatus
	  << "��ƽ��־:" << pCOSStatus->CombOffsetFlag
	  << "Ͷ���ױ���־:" << pCOSStatus->CombHedgeFlag
	  << "��������:" << pCOSStatus->Direction
	  << "�۸�:" << pCOSStatus->LimitPrice
	  << "����:" << pCOSStatus->VolumeTotalOriginal
	  << "������:" << pCOSStatus->TradingDay
	  << "�����û�:" << pCOSStatus->CancelUserID
	  << "����ʱ��:" << pCOSStatus->CancelTime
	  << "�ͻ�����:" << pCOSStatus->ClientID
	  << "ҵ��Ԫ:" << pCOSStatus->BusinessUnit
	  << "�������:" << pCOSStatus->OrderSysID
	  << "��ɽ�����:" << pCOSStatus->VolumeTraded
	  << "ʣ������:" << pCOSStatus->VolumeTotal
	  << "ί��ʱ��:" << pCOSStatus->InsertTime
	  << "����ʱ��:" << pCOSStatus->ActiveTime
	  << "�ɽ��۸�:" << pCOSStatus->TradePrice
	  << "���Ҵ���:" << pCOSStatus->CurrencyID << endl;
      }
  }

  ///ֹ��ֹӯ��״̬֪ͨ
  virtual void OnRtnPLStatus (CTKSPLStatusField * pPLStatus)
  {
    printf ("profit and loss order status notice\n");
    if (pPLStatus != NULL)
      {

	cout << "OnRtnPLStatus:"
	  << "Ӫҵ������:" << pPLStatus->BrokerID
	  << "����Ա:" << pPLStatus->UserID
	  << "Ͷ���ߴ���:" << pPLStatus->InvestorID
	  << "���:" << pPLStatus->SequenceNo
	  << "ֹ��ֹӯ�����:" << pPLStatus->ProfitAndLossOrderID
	  << "ֹ�����������:" << pPLStatus->StopLossOrderID
	  << "ֹӯ���������:" << pPLStatus->TakeProfitOrderID
	  << "ӯ��״̬:" << pPLStatus->ProfitAndLossOrderStatus
	  << "ֹ���:" << pPLStatus->StopLossPrice
	  << "ֹӯ��:" << pPLStatus->TakeProfitPrice
	  << "����ӯ��۵ķ�ʽ:" << pPLStatus->OffsetValue
	  << "���ֳɽ��۸�:" << pPLStatus->OpenTradePrice
	  << "��ע:" << pPLStatus->Memo
	  << "���ر������:" << pPLStatus->OrderLocalID
	  << "����������:" << pPLStatus->ExchangeID
	  << "��Լ����:" << pPLStatus->InstrumentID
	  << "����״̬:" << pPLStatus->OrderStatus
	  << "��ƽ��־:" << pPLStatus->CombOffsetFlag
	  << "Ͷ���ױ���־:" << pPLStatus->CombHedgeFlag
	  << "��������:" << pPLStatus->Direction
	  << "�۸�:" << pPLStatus->LimitPrice
	  << "����:" << pPLStatus->VolumeTotalOriginal
	  << "������:" << pPLStatus->TradingDay
	  << "�����û�:" << pPLStatus->CancelUserID
	  << "����ʱ��:" << pPLStatus->CancelTime
	  << "�ͻ�����:" << pPLStatus->ClientID
	  << "ҵ��Ԫ:" << pPLStatus->BusinessUnit
	  << "�������:" << pPLStatus->OrderSysID
	  << "��ɽ�����:" << pPLStatus->VolumeTraded
	  << "ʣ������:" << pPLStatus->VolumeTotal
	  << "ί��ʱ��:" << pPLStatus->InsertTime
	  << "����ʱ��:" << pPLStatus->ActiveTime
	  << "�ɽ��۸�:" << pPLStatus->TradePrice
	  << "���Ҵ���:" << pPLStatus->CurrencyID << endl;


      }
  }

private:

};

void
FormatConditionalInsertData (CTKSConditionalOrderInitInsert * ConditionOrder)
{
  strcpy (ConditionOrder->BrokerID, "6A89B428");
  strcpy (ConditionOrder->ExchangeID, "CFFEX");
  strcpy (ConditionOrder->InvestorID, "80002");
  strcpy (ConditionOrder->InstrumentID, "IF1303");
  ConditionOrder->Direction = '0';
  ConditionOrder->CombOffsetFlag = '0';
  ConditionOrder->CombHedgeFlag = '1';
  ConditionOrder->VolumeTotalOriginal = 2;
  ConditionOrder->LimitPrice = 200;
  ConditionOrder->OrderPriceType = '1';
  ConditionOrder->ConditionalType = '1';	//�������
  ConditionOrder->ConditionalPrice = 300;
  ConditionOrder->TriggeredTimes = 2;
  ConditionOrder->OrderType = '1';
  strcpy (ConditionOrder->ActiveTime, "142010");
  strcpy (ConditionOrder->InActiveTime, "162010");
  strcpy (ConditionOrder->CurrencyID, "RMB");

  return;

}

void
FormatConditionalQueryData (CTKSConditionalOrderQuery * Querycondition)
{
  strcpy (Querycondition->BrokerID, "6A89B428");
  strcpy (Querycondition->InvestorID, "80002");
  ///�����ڵĵ���
  //Querycondition->ConditionalOrderID  = 90;

  //��֪�ĵ��� 
  //Querycondition->ConditionalOrderID  = 1;
  return;


}

void
FormatConditionalPauseActiveData (CTKSConditionalOrderStateAlter *
				  Pausecondition)
{
  strcpy (Pausecondition->BrokerID, "6A89B428");
  strcpy (Pausecondition->InvestorID, "80002");
  Pausecondition->ConditionalOrderID = 18;
  Pausecondition->ConditionalOrderStateAlter = '0';

  return;
}

void
FormatConditionalRemoveData (CTKSConditionalOrderRemove * Removecondition)
{
  strcpy (Removecondition->BrokerID, "6A89B428");
  strcpy (Removecondition->InvestorID, "80002");
  Removecondition->ConditionalOrderID = 5;

  return;
}

void
FormatConditionalModifyData (CTKSConditionalOrderModify * Modifycondition)
{
  strcpy(Modifycondition->BrokerID,"6A89B428");
  strcpy(Modifycondition->InvestorID,"80002");
  Modifycondition->ConditionalOrderID = 16;
  Modifycondition->LimitPrice = 1000;
  Modifycondition->VolumeTotalOriginal = 9;
 strcpy (Modifycondition->ExchangeID, "CFFEX");
  strcpy (Modifycondition->InstrumentID, "IF1303");
   Modifycondition->Direction = '1';
  Modifycondition->CombOffsetFlag = '3';
  Modifycondition->CombHedgeFlag = '1';

  Modifycondition->OrderPriceType = '1';
  Modifycondition->ConditionalType = '1';	//�������
  Modifycondition->ConditionalPrice = 3000;
  Modifycondition->TriggeredTimes = 10;
  Modifycondition->OrderType = '1';
  return;
}

void
FormatConditionalSelectData (CTKSConditionalOrderSelect * Selectcondition)
{
  strcpy (Selectcondition->BrokerID, "6A89B428");
  strcpy (Selectcondition->InvestorID, "80002");
  Selectcondition->ConditionalOrderID = 2;
  Selectcondition->SelectResult = KSCOS_Select_AGAIN;
}

void
FormatProfitAndLossInsertData (CTKSProfitAndLossOrderInsert *
			       ProfitAndLossOrder)
{

  strcpy (ProfitAndLossOrder->BrokerID, "6A89B428");
  strcpy (ProfitAndLossOrder->InvestorID, "80002");
  //strcpy (ProfitAndLossOrder->OrderLocalID, "8");
  //strcpy (ProfitAndLossOrder->OrderLocalID, "1");
  strcpy (ProfitAndLossOrder->OrderLocalID, "6");
  ProfitAndLossOrder->StopLossPrice = 2100;
  ProfitAndLossOrder->TakeProfitPrice = 2500;
  strcpy (ProfitAndLossOrder->ExchangeID, "CFFEX");
  strcpy (ProfitAndLossOrder->BusinessUnit, "cffex");
  ProfitAndLossOrder->TriggeredTimes = 2;
  ProfitAndLossOrder->CloseMode = '1';
  ProfitAndLossOrder->FiguresPrice = 0.2;
  ProfitAndLossOrder->OffsetValue = '0';
  ProfitAndLossOrder->SpringType = '1';
  strcpy (ProfitAndLossOrder->CurrencyID, "RMB");

  return;
}

void
FormatProfitAndLossQueryData (CTKSProfitAndLossOrderQuery *
			      ProfitAndLossOrderQuery)
{
  ///Ӫҵ������
  strcpy (ProfitAndLossOrderQuery->BrokerID, "6A89B428");
  ///Ͷ���ߴ���
  strcpy (ProfitAndLossOrderQuery->InvestorID, "80002");
  ///ֹ��ֹӯ����
  //ProfitAndLossOrderQuery->ProfitAndLossOrderID = 12;
  ///���ر������
  //strcpy (ProfitAndLossOrderQuery->OrderLocalID, "8");
  ///����������
  strcpy (ProfitAndLossOrderQuery->ExchangeID, "CFFEX");
  ///ҵ��Ԫ
  strcpy (ProfitAndLossOrderQuery->BusinessUnit, "cffex");
  return;
}

void
FormatProfitAndLossRemoveData (CTKSProfitAndLossOrderRemove *
			       ProfitAndLossOrderRemove)
{
  ///Ӫҵ������
  strcpy (ProfitAndLossOrderRemove->BrokerID, "6A89B428");
  ///Ͷ���ߴ���
  strcpy (ProfitAndLossOrderRemove->InvestorID, "80002");
  ///ֹ��ֹӯ����
//  ProfitAndLossOrderRemove->ProfitAndLossOrderID = 10;

  ProfitAndLossOrderRemove->ProfitAndLossOrderID = 2;
  ///���ر������
  strcpy (ProfitAndLossOrderRemove->OrderLocalID, "8");
  ///����������
  strcpy (ProfitAndLossOrderRemove->ExchangeID, "CFFEX");
  ///ҵ��Ԫ
  strcpy (ProfitAndLossOrderRemove->BusinessUnit, "cffex");

  return;
}

void
FormatProfitAndLossModifyData (CTKSProfitAndLossOrderModify *
			       ProfitAndLossOrderModify)
{
  ///Ӫҵ������
  strcpy (ProfitAndLossOrderModify->BrokerID, "6A89B428");
  ///Ͷ���ߴ���
  strcpy (ProfitAndLossOrderModify->InvestorID, "80002");
  ///ֹ��ֹӯ����
  ProfitAndLossOrderModify->ProfitAndLossOrderID =9 ;
 
  ProfitAndLossOrderModify->StopLossPrice = 2999;
  
  ProfitAndLossOrderModify->TakeProfitPrice = 3999;

  ProfitAndLossOrderModify->CloseMode = '1';
  ProfitAndLossOrderModify->FiguresPrice = 0.2;

  ProfitAndLossOrderModify->OffsetValue = '0';
  ProfitAndLossOrderModify->SpringType = '1';
  
  ProfitAndLossOrderModify->TriggeredTimes= 30;

  return;
}
const int MAX_CONNECTION = 1;

int main(int argc, char* argv[])
{
    CThostFtdcTraderApi *pUserApi[MAX_CONNECTION] = {0};
    CSimpleHandler *pSpi[MAX_CONNECTION] = {0};

    CTKSCosApi *pCosAPI = NULL;

    for (int i=0; i < MAX_CONNECTION; i++ )
    {
        // create a CThostFtdcTraderApi instance
        pUserApi[i] = CThostFtdcTraderApi::CreateFtdcTraderApi("./log");

        // create an event handler instance
        pSpi[i] = new CSimpleHandler(pUserApi[i]);

        // Create a manual reset event with no signal
        //pSpi[i]->m_hEvent = CreateEvent(NULL, true, false, NULL);
        pSpi[i]->m_hEvent = event_create(true, false);

        CCosHandler CosSpiTest;			//����һ����������Ӧ��ʵ��
        // set spi's broker, user, passwd
        //strcpy (pSpi[i]->m_chBrokerID, "6A89B428");	// �ڻ��ܱ߲���ϵͳ(v6)
        //_snprintf(pSpi[i]->m_chUserID, sizeof(pSpi[i]->m_chUserID)-1, "8000%d", i+1);
        //strcpy (pSpi[i]->m_chPassword, "123456");
        //_snprintf(pSpi[i]->m_chUserID, sizeof(pSpi[i]->m_chUserID)-1, "36000002");
        //strcpy (pSpi[i]->m_chPassword, "");
        //strcpy (pSpi[i]->m_chContract, "IF1201");

        //strcpy (pSpi[i]->m_chBrokerID, "6A89B428");	// �ڻ��ܱ߲���ϵͳ(v8)
        //strcpy (pSpi[i]->m_chBrokerID, "6A89B428");	// �ڻ��ܱ߲���ϵͳ(v8)
	strcpy (pSpi[i]->m_chBrokerID, "6A89B428");
      //  _snprintf(pSpi[i]->m_chUserID, sizeof(pSpi[i]->m_chUserID)-1, "80006", i+1);
	printf("userid is %s\n", pSpi[i]->m_chBrokerID);
#ifdef WIN32
      _snprintf(pSpi[i]->m_chUserID, sizeof(pSpi[i]->m_chUserID)-1, "80002");
#else
	 snprintf(pSpi[i]->m_chUserID, sizeof(pSpi[i]->m_chUserID), "80002");
#endif
        strcpy (pSpi[i]->m_chPassword, "123456");
        strcpy (pSpi[i]->m_chContract, "IF1203");

        //strcpy (pSpi[i]->m_chBrokerID, "1C784211");	// ��ҵ�ڻ����޹�˾
        //strcpy (pSpi[i]->m_chUserID, "11803873");
        //strcpy (pSpi[i]->m_chPassword, "000000");
        //strcpy (pSpi[i]->m_chUserID, "98180895");
        //strcpy (pSpi[i]->m_chPassword, "888888");
        //strcpy (pSpi[i]->m_chContract, "rb1205");

        //strcpy (pSpi[i]->m_chBrokerID, "31000853");	// �Ϻ��������˴�����(v8)
        //_snprintf(pSpi[i]->m_chUserID, sizeof(pSpi[i]->m_chUserID)-1, "3600000%d", i+1);
        //strcpy (pSpi[i]->m_chPassword, "123456");
        //strcpy (pSpi[i]->m_chUserID, "5100001");
        //strcpy (pSpi[i]->m_chPassword, "111111");
        //strcpy (pSpi[i]->m_chContract, "au1001");

        // register an event handler instance


	//�������µ�
	 CTKSConditionalOrderInitInsert ConditionOrder;
	 memset (&ConditionOrder, 0, sizeof (ConditionOrder));
	 FormatConditionalInsertData (&ConditionOrder);

	  //��ѯ������ʵ�� 
	 CTKSConditionalOrderQuery Querycondition;
	 memset (&Querycondition, 0, sizeof (CTKSConditionalOrderQuery));
	 FormatConditionalQueryData (&Querycondition);
        //.....
	
        pUserApi[i]->RegisterSpi(pSpi[i]);

        // subscribe private topic
        //pUserApi[i]->SubscribePrivateTopic(THOST_TERT_RESTART);
        //pUserApi[i]->SubscribePrivateTopic(THOST_TERT_RESUME);
        pUserApi[i]->SubscribePrivateTopic(THOST_TERT_QUICK);

        // subscribe public topic
        //pUserApi[i]->SubscribePublicTopic(THOST_TERT_RESTART);
        //pUserApi[i]->SubscribePublicTopic(THOST_TERT_RESUME);
        pUserApi[i]->SubscribePublicTopic(THOST_TERT_QUICK);

        // register the kingstar front address and port
        //pUserApi[i]->RegisterFront("http://116.228.51.115:28993/jazzmonk.vicp.net:80");	// xingye sim v8 proxy
        //pUserApi[i]->RegisterFront("http://116.228.51.115:13159/192.168.1.101:8080");	// xingye sim v6 proxy
        //pUserApi[i]->RegisterFront("http://10.253.46.23:16993/10.253.44.234:8080");		// kstar v6 local proxy
        //pUserApi[i]->RegisterFront("http://10.253.46.23:18993/10.253.44.234:8080");		// kstar v6 local proxy
        //pUserApi[i]->RegisterFront("tcp://10.253.44.30:17993");		// kstar v6 system test��1026��1226��
        //pUserApi[i]->RegisterFront("tcp://210.5.154.195:18993");		// kstar v6 internet
        //pUserApi[i]->RegisterFront("http://210.5.154.195:18993/jazzmonk.vicp.net:80");	// kstar v6 internet proxy
        //pUserApi[i]->RegisterFront("http://10.253.46.165:18993/10.253.44.234:8080");	// kstar v8 local proxy
        //pUserApi[i]->RegisterFront("tcp://10.253.117.107:13163");	// kstar v8 local proxy
  	 pUserApi[i]->RegisterFront("tcp://10.253.117.107:13163");	// kstar v6 local proxy
        //pUserApi[i]->RegisterFront("tcp://10.253.44.42:17993");	// kstar v8 local
        //pUserApi[i]->RegisterFront("tcp://127.0.0.1:17993");		// kstar v6 localhost

        // make the connection between client and CTP server
	//pUserApi[i]->RegisterNameServer("tcp://10.253.117.107:11000//80008");		// portal register
        pUserApi[i]->Init();
	
	pCosAPI = (CTKSCosApi *) pUserApi[i]->LoadExtApi(&CosSpiTest,"KSCosApi");	//ע��������ʵ��
	if( NULL == pCosAPI )
	{
		printf("register conditional order instance failed\n");
	}
	event_timedwait((event_handle)pSpi[i]->m_hEvent,3000);
  	pCosAPI->ReqInitInsertConditionalOrder(&ConditionOrder, pSpi[i]->m_nRequestID++);
	pCosAPI->ReqQueryConditionalOrder (&Querycondition, pSpi[i]->m_nRequestID++);
    }

    printf ("\npress return to release...\n");
    getchar();

    for (int i=0; i < MAX_CONNECTION; i++ )
    {
        // logout
        CThostFtdcUserLogoutField UserLogout;
        memset(&UserLogout, 0, sizeof(UserLogout));
        // broker id 
        strcpy(UserLogout.BrokerID, pSpi[i]->m_chBrokerID); 
        // investor ID 
        strcpy(UserLogout.UserID, pSpi[i]->m_chUserID);
        pUserApi[i]->ReqUserLogout(&UserLogout, pSpi[i]->m_nRequestID++ );

        // waiting for quit event
        //WaitForSingleObject(pSpi[i]->m_hEvent, 3000/*INFINITE*/);
	 event_timedwait((event_handle)pSpi[i]->m_hEvent, 3000/*INFINITE*/);  

        // release the API instance
        pUserApi[i]->Release();

        // delete pSpi
        delete pSpi[i];
    }

    printf ("\npress return to quit...\n");
    getchar();

    return 0;
}
