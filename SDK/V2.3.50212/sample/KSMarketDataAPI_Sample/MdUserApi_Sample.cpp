/////////////////////////////////////////////////////////////////////////
///@system �ڻ��������ʾ��
///@company SunGard China
///@file MdUserApi_Sample
///@brief ����Api Sample
///@history 
///20140801	Kingstar IRDG		kevin �������ļ�
/////////////////////////////////////////////////////////////////////////

#include "stdio.h"
#include "KSMarketDataAPI.h"
#include <iostream>
#ifdef WIN32
#include "windows.h"
#include<map>
#endif


// �¼��ź�
//HANDLE g_hEvent = CreateEvent(NULL, true, false, NULL);

using namespace KingstarAPI;

class CMdUserApiSample : public CThostFtdcMdSpi
{
public: 
	// ���캯��
	CMdUserApiSample(CThostFtdcMdApi *pUserApi, TThostFtdcBrokerIDType chBrokerID, TThostFtdcUserIDType chUserID, TThostFtdcPasswordType chPassword)
	{
		m_nRequestID = 1;
		m_pUserApi = pUserApi;
		strncpy(m_chBrokerID, chBrokerID, sizeof(m_chBrokerID)-1);
		strncpy(m_chUserID, chUserID, sizeof(m_chUserID)-1);
		strncpy(m_chPassword, chPassword, sizeof(m_chPassword)-1);
	}

	// ��������
	~CMdUserApiSample() 
	{

	}

	// �����ź�
	virtual void OnFrontConnected()
	{
		printf("OnFrontConnected:\n");

		CThostFtdcReqUserLoginField reqUserLogin = {0};
		strncpy(reqUserLogin.BrokerID, m_chBrokerID, sizeof(reqUserLogin.BrokerID)-1);
		strncpy(reqUserLogin.UserID, m_chUserID, sizeof(reqUserLogin.UserID)-1);
		strncpy(reqUserLogin.Password, m_chPassword, sizeof(reqUserLogin.Password)-1);

		// ���͵�¼����
		m_pUserApi->ReqUserLogin(&reqUserLogin, m_nRequestID++);
	}

	// �����ź�
	virtual void OnFrontDisconnected(int nReason)
	{ 
		printf("OnFrontDisconnected.\n");
	} 

	// ��¼Ӧ����
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
	    // get trading day
		printf("��ȡ��ǰ������ = %s\n",m_pUserApi->GetTradingDay());

		// ���鶩���б�
		char *ppInstrumentID[] = {"CF1501"};
		// ���鶩�ĸ���
		int iInstrumentID = 1;
        // 	����
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
			// �����˶��б�
			char *ppInstrumentID[] = {"CF1501"};			
			// �����˶�����
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

private: 
	// �����
	int m_nRequestID;
	// ʵ��ָ��
	CThostFtdcMdApi *m_pUserApi;
	// ���ù�˾����
	TThostFtdcBrokerIDType m_chBrokerID;
	// �û���
	TThostFtdcUserIDType m_chUserID;
	// �û�����
	TThostFtdcPasswordType m_chPassword;
};

int main(int argc, char* argv[])
{
	// ����ʵ��
	CThostFtdcMdApi* pUserApi = CThostFtdcMdApi::CreateFtdcMdApi("");

	// ����spiʵ��
	CMdUserApiSample* pSpi = new CMdUserApiSample(pUserApi, "", "201301", "123");

	// ע��spiʵ��
	pUserApi->RegisterSpi(pSpi);

	// ע��ǰ�û�	
	//pUserApi->RegisterFront("tcp://10.253.117.107:13153");
	//pUserApi->RegisterFront("udp://10.253.117.107:20518");
	pUserApi->RegisterNameServer("tcp://10.253.117.110:11000");
	CThostFtdcFensUserInfoField FensUserInfo = {0};
	strncpy(FensUserInfo.UserID, "201301", sizeof(FensUserInfo.UserID)-1);
	FensUserInfo.LoginMode = 'E';
	pUserApi->RegisterFensUserInfo(&FensUserInfo);

	// ��ʼ��
	pUserApi->Init();

	// �ȴ��ź�
	//WaitForSingleObject(g_hEvent, INFINITE);

	printf ("\npress return to quit...\n");

	getchar();

	// ��ʼ��
	pUserApi->Release();

	return 0;
}

