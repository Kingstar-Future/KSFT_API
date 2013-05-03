// testKSMarketDataAPI.cpp : Defines the entry point for the console application.
//



#include "testKSMarketDataAPI.h"
#include "event.h"
#include "../KSMarketDataAPI/KSMarketDataAPI.h"
#include<stdlib.h>
#include<stdio.h>
#include <iostream>
using namespace std;
#ifdef WIN32
#include "windows.h"
#pragma comment(lib, "../KSMarketDataAPI/KSMarketDataAPI.lib")
#pragma message("Automatically linking with KSMarketDataAPI.lib")
#else
#include<unistd.h>
#include<string.h>
#endif

using namespace KingstarAPI;


class CSampleHandler : public CThostFtdcMdSpi
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
	CSampleHandler(CThostFtdcMdApi *pUserApi) : m_pUserApi(pUserApi) {}

	~CSampleHandler() {}

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

	// After receiving the login request from  the client��the CTP server will send the following response to notify the client whether the login success or not.
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
		printf("��ȡ��ǰ������ = %s\n",m_pUserApi->GetTradingDay());

		// ���鶩���б�
		//char *ppInstrumentID[] = {"IF1203"};
        char *ppInstrumentID[1024];
        ppInstrumentID[0] = new char[31];
        strcpy (ppInstrumentID[0], m_chContract);
		// ���鶩�ĸ���
		int iInstrumentID = 1;
        // 	����
		m_pUserApi->SubscribeMarketData(ppInstrumentID, iInstrumentID);
        // �ͷ��ڴ�
        delete ppInstrumentID[0];
	}

	///RspSubMarketData return
	virtual void OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspSubMarketData:%s\n", pSpecificInstrument->InstrumentID);
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);

/*		if (bIsLast == true)
		{
			// �����˶��б�
			char *ppInstrumentID[] = {"CF1109"};			
			// �����˶�����
			int iInstrumentID = 1;
			m_pUserApi->UnSubscribeMarketData(ppInstrumentID,iInstrumentID);
		}
*/	}


	///OnRspUnSubMarketData return
	virtual void OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspUnSubMarketData:\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);

		// logout
/*		CThostFtdcUserLogoutField UserLogout;
		memset(&UserLogout, 0, sizeof(UserLogout));
		// broker id 
		strcpy(UserLogout.BrokerID, g_chBrokerID); 
		// investor ID 
		strcpy(UserLogout.UserID, g_chUserID);
		
		m_pUserApi->ReqUserLogout(&UserLogout,3);
*/	}

	///OnRtnDepthMarketData
	virtual void OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData)
	{
        printf("OnRtnDepthMarketData:");
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
        //SetEvent(m_hEvent); 
	 event_set((event_handle)m_hEvent);

		return;
	}
private: 
	// a pointer of CThostFtdcMduserApi instance
	CThostFtdcMdApi *m_pUserApi;
};


const int MAX_CONNECTION = 2;

int main(int argc, char* argv[])
{
    CThostFtdcMdApi *pUserApi[MAX_CONNECTION] = {0};
    CSampleHandler *pSpi[MAX_CONNECTION] = {0};

    //for (int i=0; i < MAX_CONNECTION; i++ )
    for (int i=0; i < 1; i++ )
    {
        // create a CThostFtdcMdApi instance
        pUserApi[i] = CThostFtdcMdApi::CreateFtdcMdApi("./log");

        // create an event handler instance
        pSpi[i] = new CSampleHandler(pUserApi[i]);

        // Create a manual reset event with no signal
        pSpi[i]->m_hEvent = event_create(true, false);

        // set spi's broker, user, passwd
        strcpy (pSpi[i]->m_chBrokerID, "6A89B428");	// �ڻ��ܱ߲���ϵͳ(v6)
        //_snprintf(pSpi[i]->m_chUserID, sizeof(pSpi[i]->m_chUserID), "8000%d", i+1);
        //snprintf(pSpi[i]->m_chUserID, sizeof(pSpi[i]->m_chUserID), "8000%d", i+1);
#ifdef WIN32
		_snprintf(pSpi[i]->m_chUserID, sizeof(pSpi[i]->m_chUserID)-1, "80008");
#else
        snprintf(pSpi[i]->m_chUserID, sizeof(pSpi[i]->m_chUserID), "80008");
#endif
        //ks_snprintf(pSpi[i]->m_chUserID, sizeof(pSpi[i]->m_chUserID), "8000%d", i+1);
        strcpy (pSpi[i]->m_chPassword, "123456");
        //_snprintf(pSpi[i]->m_chUserID, sizeof(pSpi[i]->m_chUserID)-1, "36000002");
        //strcpy (pSpi[i]->m_chPassword, "");
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
        pUserApi[i]->RegisterSpi(pSpi[i]);

        // register the kingstar front address and port
        //pUserApi[i]->RegisterFront("http://116.228.51.115:28993/jazzmonk.vicp.net:80");	// xingye sim v8 proxy
        //pUserApi[i]->RegisterFront("http://116.228.51.115:13159/192.168.1.101:8080");	// xingye sim v6 proxy
        //pUserApi[i]->RegisterFront("http://10.253.46.23:18993/10.253.44.234:8080");		// kstar v6 local proxy trading
        //pUserApi[i]->RegisterFront("tcp://10.253.117.107:13153");		// kstar v6 local local marketdata
	pUserApi[i]->RegisterFront("tcp://10.253.117.107:13163");		// kstar v8 local local marketdata
        //pUserApi[i]->RegisterFront("tcp://10.253.44.30:17993");		// kstar v6 system test��1026��1226��
        //pUserApi[i]->RegisterFront("tcp://127.0.0.1:17993");		// kstar v6 localhost
        //pUserApi[i]->RegisterFront("http://210.5.154.195:18993/jazzmonk.vicp.net:80");	// kstar v6 internet proxy
        //pUserApi[i]->RegisterFront("http://10.253.46.23:18883/10.253.44.234:8080");	// kstar v8 local proxy
        //pUserApi[i]->RegisterFront("tcp://10.253.44.42:17993");	// kstar v8 local
	//pUserApi[i]->RegisterNameServer("tcp://10.253.117.107:11000//80008");		// portal register 
        // make the connection between client and CTP server
        pUserApi[i]->Init();
    }

    printf ("\npress return to release...\n");
    getchar();

    for (int i=0; i < 1; i++ )
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
