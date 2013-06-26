// testmdapi.cpp : 定义控制台应用程序的入口点。
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
	// constructor，which need a valid pointer to a CThostFtdcMduserApi instance 
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
		//  Inthis  case,  API  willreconnect，the  client  application can ignore this.
		printf("OnFrontDisconnected.\n");
	} 

	// After receiving the login request from  the client，the CTP server will send the following response to notify the client whether the login success or not.
	virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspUserLogin:");
		if (pRspUserLogin != NULL)
		{
			printf("%s|%s|%s|%s|%s|%s|%s|%s|%s|%d|%d|%s|", 
				pRspUserLogin->BrokerID,					// 经纪公司代码
				pRspUserLogin->UserID,						// 用户代码
				pRspUserLogin->TradingDay,					// 交易日
				pRspUserLogin->SystemName,					// 交易系统名称
				pRspUserLogin->LoginTime,					// 登陆成功时间
				pRspUserLogin->SHFETime,					// 上期所时间
				pRspUserLogin->DCETime,						// 大商所时间
				pRspUserLogin->CZCETime,					// 郑商所时间
				pRspUserLogin->FFEXTime,					// 中金所时间
				pRspUserLogin->FrontID,						// frond id
				pRspUserLogin->SessionID,					// session id
				pRspUserLogin->MaxOrderRef				// 最大报单引用
				);
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

		// 行情订阅列表
		char *ppInstrumentID[] = {"IF1303"};
		// 行情订阅个数
		int iInstrumentID = 1;
		// 	订阅
		m_pUserApi->SubscribeMarketData(ppInstrumentID, iInstrumentID);
	}

	///RspSubMarketData return
	virtual void OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspSubMarketData:%s\n", pSpecificInstrument->InstrumentID);
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);

		/*		if (bIsLast == true)
		{
		// 行情退订列表
		char *ppInstrumentID[] = {"CF1109"};			
		// 行情退订个数
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
				pDepthMarketData->ExchangeID,					// 交易所代码
				pDepthMarketData->InstrumentID,					// 合约代码
				pDepthMarketData->PreClosePrice,				// 昨收盘
				pDepthMarketData->OpenPrice,					// 今开盘
				pDepthMarketData->HighestPrice,					// 最高价
				pDepthMarketData->LowestPrice,					// 最低价
				pDepthMarketData->LastPrice,					// 最新价
				pDepthMarketData->Volume,						// 数量
				pDepthMarketData->Turnover,						// 成交金额
				pDepthMarketData->BidPrice1,					// 申买价一
				pDepthMarketData->AskPrice1,					// 申卖价一
				pDepthMarketData->BidVolume1,					// 申买量一
				pDepthMarketData->AskVolume1,					// 申卖量一
				pDepthMarketData->UpperLimitPrice,				// 涨停板价
				pDepthMarketData->LowerLimitPrice,				// 跌停板价
				pDepthMarketData->PreSettlementPrice,			// 上次结算价
				pDepthMarketData->SettlementPrice,				// 本次结算价
				pDepthMarketData->OpenInterest,					// 持仓量
				pDepthMarketData->TradingDay,					// 交易日
				pDepthMarketData->BidVolume2,					// 申买量二
				pDepthMarketData->BidPrice2,					// 申买价二
				pDepthMarketData->BidVolume3,					// 申买量三
				pDepthMarketData->BidPrice3,					// 申买价三
				pDepthMarketData->BidVolume4,					// 申买量四
				pDepthMarketData->BidPrice4,					// 申买价四
				pDepthMarketData->BidVolume5,					// 申买量五
				pDepthMarketData->BidPrice5,					// 申买价五
				pDepthMarketData->AskVolume2,					// 申卖量二
				pDepthMarketData->AskPrice2,					// 申卖价二
				pDepthMarketData->AskVolume3,					// 申卖量三
				pDepthMarketData->AskPrice3,					// 申卖价三
				pDepthMarketData->AskVolume4,					// 申卖量四
				pDepthMarketData->AskPrice4,					// 申卖价四
				pDepthMarketData->AskVolume5,					// 申卖量五
				pDepthMarketData->AskPrice5						// 申卖价五
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
