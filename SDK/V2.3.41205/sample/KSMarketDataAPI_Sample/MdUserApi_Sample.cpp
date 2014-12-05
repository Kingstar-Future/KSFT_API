/////////////////////////////////////////////////////////////////////////
///@system 期货行情测试示例
///@company SunGard China
///@file MdUserApi_Sample
///@brief 行情Api Sample
///@history 
///20140801	Kingstar IRDG		kevin 创建该文件
/////////////////////////////////////////////////////////////////////////

#include "stdio.h"
#include "KSMarketDataAPI.h"
#include <iostream>
#ifdef WIN32
#include "windows.h"
#include<map>
#endif


// 事件信号
//HANDLE g_hEvent = CreateEvent(NULL, true, false, NULL);

using namespace KingstarAPI;

class CMdUserApiSample : public CThostFtdcMdSpi
{
public: 
	// 构造函数
	CMdUserApiSample(CThostFtdcMdApi *pUserApi, TThostFtdcBrokerIDType chBrokerID, TThostFtdcUserIDType chUserID, TThostFtdcPasswordType chPassword)
	{
		m_nRequestID = 1;
		m_pUserApi = pUserApi;
		strncpy(m_chBrokerID, chBrokerID, sizeof(m_chBrokerID)-1);
		strncpy(m_chUserID, chUserID, sizeof(m_chUserID)-1);
		strncpy(m_chPassword, chPassword, sizeof(m_chPassword)-1);
	}

	// 析构函数
	~CMdUserApiSample() 
	{

	}

	// 连接信号
	virtual void OnFrontConnected()
	{
		printf("OnFrontConnected:\n");

		CThostFtdcReqUserLoginField reqUserLogin = {0};
		strncpy(reqUserLogin.BrokerID, m_chBrokerID, sizeof(reqUserLogin.BrokerID)-1);
		strncpy(reqUserLogin.UserID, m_chUserID, sizeof(reqUserLogin.UserID)-1);
		strncpy(reqUserLogin.Password, m_chPassword, sizeof(reqUserLogin.Password)-1);

		// 发送登录请求
		m_pUserApi->ReqUserLogin(&reqUserLogin, m_nRequestID++);
	}

	// 断线信号
	virtual void OnFrontDisconnected(int nReason)
	{ 
		printf("OnFrontDisconnected.\n");
	} 

	// 登录应答处理
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
				pRspUserLogin->MaxOrderRef					// 最大报单引用
				);
		}
		printf("\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
	    // get trading day
		printf("获取当前交易日 = %s\n",m_pUserApi->GetTradingDay());

		// 行情订阅列表
		char *ppInstrumentID[] = {"CF1501"};
		// 行情订阅个数
		int iInstrumentID = 1;
        // 	订阅
		m_pUserApi->SubscribeMarketData(ppInstrumentID, iInstrumentID);	
		//m_pUserApi->SubscribeForQuoteRsp(ppInstrumentID, iInstrumentID);
		
	}

	///RspSubMarketData return
	virtual void OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspSubMarketData:%s\n", pSpecificInstrument->InstrumentID);
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);

/*
		if (bIsLast == true)
		{
			// 行情退订列表
			char *ppInstrumentID[] = {"CF1501"};			
			// 行情退订个数
			int iInstrumentID = 1;
			m_pUserApi->UnSubscribeMarketData(ppInstrumentID,iInstrumentID);
		}
*/
	}

	///OnRspUnSubMarketData return
	virtual void OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspUnSubMarketData:\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);

		return;

		if (bIsLast)
		{
			// logout
			CThostFtdcUserLogoutField UserLogout;
			memset(&UserLogout, 0, sizeof(UserLogout));
			// broker id 
			strcpy(UserLogout.BrokerID, m_chBrokerID); 
			// investor ID 
			strcpy(UserLogout.UserID, m_chUserID);

			m_pUserApi->ReqUserLogout(&UserLogout,3);
		}

    }

	virtual void OnRspSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspSubForQuoteRsp:%s\n", pSpecificInstrument->InstrumentID);
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
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
	}

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

private: 
	// 请求号
	int m_nRequestID;
	// 实例指针
	CThostFtdcMdApi *m_pUserApi;
	// 经济公司代码
	TThostFtdcBrokerIDType m_chBrokerID;
	// 用户名
	TThostFtdcUserIDType m_chUserID;
	// 用户密码
	TThostFtdcPasswordType m_chPassword;
};

int main(int argc, char* argv[])
{
	// 创建实例
	CThostFtdcMdApi* pUserApi = CThostFtdcMdApi::CreateFtdcMdApi("");

	// 创建spi实例
	CMdUserApiSample* pSpi = new CMdUserApiSample(pUserApi, "", "201301", "123");

	// 注册spi实例
	pUserApi->RegisterSpi(pSpi);

	// 注册前置机	
	//pUserApi->RegisterFront("tcp://10.253.117.107:13153");
	//pUserApi->RegisterFront("udp://10.253.117.107:20518");
	pUserApi->RegisterNameServer("tcp://10.253.117.110:11000");
	CThostFtdcFensUserInfoField FensUserInfo = {0};
	strncpy(FensUserInfo.UserID, "201301", sizeof(FensUserInfo.UserID)-1);
	FensUserInfo.LoginMode = 'E';
	pUserApi->RegisterFensUserInfo(&FensUserInfo);

	// 初始化
	pUserApi->Init();

	// 等待信号
	//WaitForSingleObject(g_hEvent, INFINITE);

	printf ("\npress return to quit...\n");

	getchar();

	// 初始化
	pUserApi->Release();

	return 0;
}

