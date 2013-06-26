// testmdapi.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "stdio.h"
#include "windows.h"
#include "../CTP/ThostFtdcMdApi.h"

#ifdef _DEBUG
#pragma comment(lib, "../thostmduserapi/Debug/thostmduserapid.lib")
#pragma message("Automatically linking with thostmduserapid.lib")
#else
#pragma comment(lib, "../thostmduserapi/Release/thostmduserapi.lib")
#pragma message("Automatically linking with thostmduserapi.lib")
#endif

class CSampleHandler : public CThostFtdcMdSpi
{
public:
	// request id
	int m_nRequestID;

public: 
	// constructor��which need a valid pointer to a CThostFtdcMduserApi instance 
	CSampleHandler(CThostFtdcMdApi *pUserApi) : m_pUserApi(pUserApi) {}

	~CSampleHandler() {}

	// After making a succeed connection with the CTP server, the client should send the login request to the CTP server.
	virtual void OnFrontConnected()
	{
		printf("OnFrontConnected:\n");

		CThostFtdcReqUserLoginField reqUserLogin = {0};
		// set BrokerID
		strcpy(reqUserLogin. BrokerID, "6A89B428");
		// set user id
		strcpy(reqUserLogin.UserID, "80002");
		// set password
		strcpy(reqUserLogin.Password, "123456");

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
				pRspUserLogin->MaxOrderRef				// ��󱨵�����
				);
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

		// ���鶩���б�
		char *ppInstrumentID[] = {"IF1303"};
		// ���鶩�ĸ���
		int iInstrumentID = 1;
		// 	����
		m_pUserApi->SubscribeMarketData(ppInstrumentID, iInstrumentID);
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
			printf("%s\n",pUserLogout->UserID);
		}
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
		return;
	}

private: 
	// a pointer of CThostFtdcMduserApi instance
	CThostFtdcMdApi *m_pUserApi;
};


int main(int argc, char* argv[])
{
	// create a CThostFtdcMdApi instance
	CThostFtdcMdApi *pUserApi = CThostFtdcMdApi::CreateFtdcMdApi();

	CSampleHandler pSpi(pUserApi);

	// register an event handler instance
	pUserApi->RegisterSpi(&pSpi);

	pUserApi->RegisterFront("tcp://10.253.117.107:13153");

	// make the connection between client and CTP server
	pUserApi->Init();
	
	printf ("\npress return to release...\n");
	getchar();

	// release the API instance
	pUserApi->Release();

	printf ("\npress return to quit...\n");
	getchar();

	return 0;
}
