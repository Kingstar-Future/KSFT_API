
#ifndef __TEST_KSTRADE_API_H__
#define __TEST_KSTRADE_API_H__

#include "KSTradeAPI.h"
#import "KSViewController.h"
#include "event.h"

typedef void* HANDLE;

using namespace KingstarAPI;

class CSimpleHandler : public CThostFtdcTraderSpi
{
public:
    // participant ID
    TThostFtdcBrokerIDType m_chBrokerID;
    
    // user id
    TThostFtdcUserIDType m_chUserID;
    
	// compare userid between requests and answers
	TThostFtdcUserIDType m_ReqUserID;
	TThostFtdcUserIDType m_AnsUserID;
    
    // user password
    TThostFtdcPasswordType m_chPassword;
    
    // contract
    char m_chContract[80];
    
    // request id
    int m_nRequestID;
    
    // finish event
    HANDLE m_hEvent;
    
    //UITextView* textView;
    __weak KSViewController* viewController;
private:
    // update UI
    void AddTextToTextView(NSString* text)
    {
        [viewController performSelectorOnMainThread:@selector(addTextToTextView:) withObject:text waitUntilDone:YES];
        //        dispatch_async(dispatch_get_main_queue(), ^{
        //            [[[textView textStorage] mutableString] appendString:text];
        //
        //        });
    }
    // convert gb to utf-8
    NSString* ConvertToUTF_8(char* text)
    {
        NSStringEncoding enc = CFStringConvertEncodingToNSStringEncoding(kCFStringEncodingGB_18030_2000);
        return [NSString stringWithCString:text encoding:enc];
    }
public:
    // constructor, which need a valid pointer to a CThostFtdcMduserApi instance
    CSimpleHandler(CThostFtdcTraderApi *pUserApi) : m_pUserApi(pUserApi), m_nRequestID(0) {}
    
    ~CSimpleHandler() {}
    
    // After making a succeed connection with the CTP server, the client should send the login request to the CTP server.
    
    virtual void OnFrontConnected()
    {
        printf("OnFrontConnected:\n");
        
        AddTextToTextView(@"OnFrontConnected:\n");
        
        CThostFtdcReqUserLoginField reqUserLogin;
        memset(&reqUserLogin, 0, sizeof(reqUserLogin));
        // set BrokerID
        printf("BrokerID:%s\n", m_chBrokerID);
        AddTextToTextView([NSString stringWithFormat:@"BrokerID:%s\n", m_chBrokerID]);
        strcpy(reqUserLogin. BrokerID, m_chBrokerID);
        
        // set user id
        printf("userid:%s\n", m_chUserID);
        AddTextToTextView([NSString stringWithFormat:@"userid:%s\n", m_chUserID]);
        strcpy(reqUserLogin.UserID, m_chUserID);
		strcpy(m_ReqUserID, reqUserLogin.UserID);
        
        // set password
        printf("password:%s\n",m_chPassword);
        AddTextToTextView([NSString stringWithFormat:@"password:%s\n",m_chPassword]);
        strcpy(reqUserLogin.Password, m_chPassword);
        
        // send the login request
        m_pUserApi->ReqUserLogin(&reqUserLogin, m_nRequestID++ );
    }
    
    //When the connection between client and the CTP server	disconnected,the following function will be called.
    virtual void OnFrontDisconnected(int nReason)
    {
        //  In this case,  API will reconnect, the  client  application can ignore this.
        printf("OnFrontDisconnected.\n");
        AddTextToTextView(@"OnFrontDisconnected.\n");
    }
    
    virtual void OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus)
    {
        printf("OnRtnInstrumentStatus:");
        AddTextToTextView(@"OnRtnInstrumentStatus:");
        
        if (NULL != pInstrumentStatus)
        {
            printf("%s-%c-%c",pInstrumentStatus->ExchangeID, pInstrumentStatus->InstrumentStatus, pInstrumentStatus->EnterReason);
            
            AddTextToTextView([NSString stringWithFormat:@"%s-%c-%c",pInstrumentStatus->ExchangeID, pInstrumentStatus->InstrumentStatus, pInstrumentStatus->EnterReason]);
        }
        printf("\n");
        AddTextToTextView(@"\n");
    }
    
    ///报单录入错误回报
    virtual void OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo)
    {
        printf("OnErrRtnOrderInsert:\n");
        AddTextToTextView(@"OnErrRtnOrderInsert:\n");
    }
    
    ///报单操作错误回报
    virtual void OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo)
    {
        printf("OnErrRtnOrderAction:\n");
        AddTextToTextView(@"OnErrRtnOrderAction:\n");
    }
    
    // After receiving the login request from the client, the CTP server will send the following response to notify the client whether the login success or not.
    virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        printf("OnRspUserLogin:");
        AddTextToTextView(@"OnRspUserLogin:");
		
        if (pRspUserLogin != NULL)
        {
			strcpy(m_AnsUserID, pRspUserLogin->UserID);
            
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
            AddTextToTextView([NSString stringWithFormat:@"%s|%s|%s|%@|%s|%s|%s|%s|%s|%d|%d|%s|",
                               pRspUserLogin->BrokerID,		// 经纪公司代码
                               pRspUserLogin->UserID,						// 用户代码
                               pRspUserLogin->TradingDay,					// 交易日
                               ConvertToUTF_8(pRspUserLogin->SystemName),					// 交易系统名称
                               pRspUserLogin->LoginTime,					// 登陆成功时间
                               pRspUserLogin->SHFETime,					// 上期所时间
                               pRspUserLogin->DCETime,						// 大商所时间
                               pRspUserLogin->CZCETime,					// 郑商所时间
                               pRspUserLogin->FFEXTime,					// 中金所时间
                               pRspUserLogin->FrontID,						// frond id
                               pRspUserLogin->SessionID,					// session id
                               pRspUserLogin->MaxOrderRef					// 最大报单引用
                               ]
                              );
        }
        printf("\n");
        AddTextToTextView(@"\n");
        printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
        AddTextToTextView([NSString stringWithFormat:@"ErrorCode=[%d], ErrorMsg=[%@]\n", pRspInfo->ErrorID, ConvertToUTF_8(pRspInfo->ErrorMsg)]);
        printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
        AddTextToTextView([NSString stringWithFormat:@"RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast]);
        if (pRspInfo->ErrorID != 0)
        {
            // in case any login failure, the client should handle this error.
            printf("Failed to login, errorcode=%d errormsg=%s requestid=%d chain=%d", pRspInfo->ErrorID, pRspInfo->ErrorMsg, nRequestID, bIsLast);
            AddTextToTextView([NSString stringWithFormat:@"Failed to login, errorcode=%d errormsg=%@ requestid=%d chain=%d", pRspInfo->ErrorID, ConvertToUTF_8(pRspInfo->ErrorMsg), nRequestID, bIsLast]);
            return;
        }
        
        //get trading day
        printf("%s\n",m_pUserApi->GetTradingDay());
        AddTextToTextView([NSString stringWithFormat:@"%s\n",m_pUserApi->GetTradingDay()]);
        //qryInvestor request.
        CThostFtdcQryInvestorField Investor;
        memset(&Investor, 0, sizeof(Investor));
        // broker id
        strcpy(Investor.BrokerID, m_chBrokerID);
        // investor ID
        strcpy(Investor.InvestorID, m_chUserID);
	    strcpy(m_ReqUserID, Investor.InvestorID);
        
        m_pUserApi->ReqQryInvestor(&Investor, m_nRequestID++ );
        
    }
    
    // investor response
    virtual void OnRspQryInvestor(CThostFtdcInvestorField *pInvestor, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        printf("OnRspQryInvestor:");
        AddTextToTextView(@"OnRspQryInvestor:");
        if (NULL != pInvestor)
        {
			strcpy(m_AnsUserID, pInvestor->InvestorID);
			
            printf("%s|%s|%s|%s|%s|%s|%c|%s|%s|",
                   pInvestor->InvestorID,						// 投资者代码
                   pInvestor->InvestorName,					// 投资者名称
                   pInvestor->IdentifiedCardNo,				// 证件号码
                   pInvestor->Telephone,						// 联系电话
                   pInvestor->Address,							// 通讯地址
                   pInvestor->InvestorGroupID,					// 投资者分组代码
                   pInvestor->IdentifiedCardType,				// 证件类型
                   pInvestor->Mobile,							// 手机
                   pInvestor->OpenDate);						// 开户日期
            AddTextToTextView([NSString stringWithFormat:@"%s|%s|%s|%s|%s|%s|%c|%s|%s|",
                               pInvestor->InvestorID,						// 投资者代码
                               pInvestor->InvestorName,					// 投资者名称
                               pInvestor->IdentifiedCardNo,				// 证件号码
                               pInvestor->Telephone,						// 联系电话
                               pInvestor->Address,							// 通讯地址
                               pInvestor->InvestorGroupID,					// 投资者分组代码
                               pInvestor->IdentifiedCardType,				// 证件类型
                               pInvestor->Mobile,							// 手机
                               pInvestor->OpenDate]);						// 开户日期
        }
        printf("\n");
        AddTextToTextView(@"\n");
        printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
        AddTextToTextView([NSString stringWithFormat:@"ErrorCode=[%d], ErrorMsg=[%@]\n",pRspInfo->ErrorID, ConvertToUTF_8(pRspInfo->ErrorMsg) ]);
        printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
        AddTextToTextView([NSString stringWithFormat:@"RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast]);
        if (bIsLast == true)
        {
            // tradeaccount request.
            CThostFtdcQryTradingAccountField TradingAccount;
            memset(&TradingAccount, 0, sizeof(TradingAccount));
            // broker id
            strcpy(TradingAccount.BrokerID, m_chBrokerID);
			strcpy(m_ReqUserID, TradingAccount.BrokerID);
            // investor ID
            strcpy(TradingAccount.InvestorID, m_chUserID);
            
            m_pUserApi->ReqQryTradingAccount(&TradingAccount, m_nRequestID++ );
        }
    }
    
    // tradeaccount response
    virtual void OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        printf("OnRspQryTradingAccount:");
        AddTextToTextView(@"OnRspQryTradingAccount:");
        if (NULL != pTradingAccount)
        {
			strcpy(m_AnsUserID, pTradingAccount->BrokerID);
			
            printf(":%s|%.04f|%.04f|%.04f|%.04f|%.04f|%.04f|%.04f|%.04f|%.04f|%.04f|%.04f|",
                   pTradingAccount->AccountID,					// 账号
                   pTradingAccount->PreBalance,				// 上次结算准备金
                   pTradingAccount->Available,					// 可用资金
                   pTradingAccount->Commission,				// 手续费
                   pTradingAccount->PositionProfit,			// 持仓盈亏
                   pTradingAccount->CloseProfit,				// 平仓盈亏
                   pTradingAccount->FrozenCommission,			// 冻结的手续费
                   pTradingAccount->FrozenCash,				// 冻结的资金
                   pTradingAccount->CurrMargin,				// 当前保证金总额
                   pTradingAccount->ExchangeMargin,			// 交易所保证金
                   pTradingAccount->Mortgage,					// 质押金额
                   pTradingAccount->Credit);					// 信用额度
            
            AddTextToTextView([NSString stringWithFormat:@":%s|%.04f|%.04f|%.04f|%.04f|%.04f|%.04f|%.04f|%.04f|%.04f|%.04f|%.04f|",
                               pTradingAccount->AccountID,					// 账号
                               pTradingAccount->PreBalance,				// 上次结算准备金
                               pTradingAccount->Available,					// 可用资金
                               pTradingAccount->Commission,				// 手续费
                               pTradingAccount->PositionProfit,			// 持仓盈亏
                               pTradingAccount->CloseProfit,				// 平仓盈亏
                               pTradingAccount->FrozenCommission,			// 冻结的手续费
                               pTradingAccount->FrozenCash,				// 冻结的资金
                               pTradingAccount->CurrMargin,				// 当前保证金总额
                               pTradingAccount->ExchangeMargin,			// 交易所保证金
                               pTradingAccount->Mortgage,					// 质押金额
                               pTradingAccount->Credit]);					// 信用额度
        }
        printf("\n");
        AddTextToTextView(@"\n");
        printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
        AddTextToTextView([NSString stringWithFormat:@"ErrorCode=[%d], ErrorMsg=[%@]\n", pRspInfo->ErrorID,ConvertToUTF_8(pRspInfo->ErrorMsg)]);
        printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
        AddTextToTextView([NSString stringWithFormat:@"RequestID=[%d], Chain=[%d]\n",nRequestID, bIsLast]);
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
        AddTextToTextView(@"OnRspQryExchange:");
        if (NULL != pExchange)
        {
            printf("%s|%s",
                   pExchange->ExchangeID,					// 交易所代码
                   pExchange->ExchangeName);				// 交易所名称
            
            AddTextToTextView([NSString stringWithFormat:@"%s|%@",
                               pExchange->ExchangeID,					// 交易所代码
                               ConvertToUTF_8(pExchange->ExchangeName)] );// 交易所名称
        }
        printf("\n");
        AddTextToTextView(@"\n");
        printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
        AddTextToTextView([NSString stringWithFormat:@"ErrorCode=[%d], ErrorMsg=[%@]\n", pRspInfo->ErrorID, ConvertToUTF_8(pRspInfo->ErrorMsg)]);
        printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
        AddTextToTextView([NSString stringWithFormat:@"RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast]);
		
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
        AddTextToTextView(@"OnRspQryInstrument:");
        if (NULL != pInstrument)
        {
            printf("%s|%s|%s|%d|%s|%s|%.04f|%d|",
                   pInstrument->ExchangeID,							// 交易所代码
                   pInstrument->InstrumentID,							// 合约代码
                   pInstrument->InstrumentName,						// 合约名称
                   pInstrument->VolumeMultiple,						// 合约数量乘数
                   pInstrument->ExpireDate,							// 到期日
                   pInstrument->ProductID,								// 产品代码
                   pInstrument->PriceTick,								// 最小变动价位
                   nRequestID);
            AddTextToTextView([NSString stringWithFormat:@"%s|%s|%s|%d|%s|%s|%.04f|%d|",
                               pInstrument->ExchangeID,							// 交易所代码
                               pInstrument->InstrumentID,							// 合约代码
                               pInstrument->InstrumentName,						// 合约名称
                               pInstrument->VolumeMultiple,						// 合约数量乘数
                               pInstrument->ExpireDate,							// 到期日
                               pInstrument->ProductID,								// 产品代码
                               pInstrument->PriceTick,								// 最小变动价位
                               nRequestID]);
        }
        printf("\n");
        AddTextToTextView(@"\n");
        printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
        AddTextToTextView([NSString stringWithFormat:@"ErrorCode=[%d], ErrorMsg=[%@]\n", pRspInfo->ErrorID,ConvertToUTF_8(pRspInfo->ErrorMsg)]);
        printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
        AddTextToTextView([NSString stringWithFormat:@"RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast]);
        
        
        if (bIsLast == true)
        {
            // QryInstrumentMarginRate
            CThostFtdcQryInstrumentMarginRateField InstrumentMarginRate;
            memset(&InstrumentMarginRate, 0, sizeof(InstrumentMarginRate));
            // broker id
            strcpy(InstrumentMarginRate.BrokerID, m_chBrokerID);
            // investor id
            strcpy(InstrumentMarginRate.InvestorID, m_chUserID);
			strcpy(m_ReqUserID, InstrumentMarginRate.InvestorID);
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
			strcpy(m_AnsUserID, pInstrumentMarginRate->InvestorID);
			
            printf("%s|%s|%.04f|%.04f|%.04f|%.04f|",
                   pInstrumentMarginRate->InvestorID,						// 投资者代码
                   pInstrumentMarginRate->InstrumentID,					// 合约代码
                   pInstrumentMarginRate->LongMarginRatioByMoney,			// 多头保证金率
                   pInstrumentMarginRate->LongMarginRatioByVolume,			// 多头保证金费
                   pInstrumentMarginRate->ShortMarginRatioByMoney,			// 空头保证金率
                   pInstrumentMarginRate->ShortMarginRatioByVolume);		// 空头保证金费
            AddTextToTextView([NSString stringWithFormat:@"%s|%s|%.04f|%.04f|%.04f|%.04f|",
                               pInstrumentMarginRate->InvestorID,						// 投资者代码
                               pInstrumentMarginRate->InstrumentID,					// 合约代码
                               pInstrumentMarginRate->LongMarginRatioByMoney,			// 多头保证金率
                               pInstrumentMarginRate->LongMarginRatioByVolume,			// 多头保证金费
                               pInstrumentMarginRate->ShortMarginRatioByMoney,			// 空头保证金率
                               pInstrumentMarginRate->ShortMarginRatioByVolume]);		// 空头保证金费
        }
        printf("\n");
        AddTextToTextView(@"\n");
        printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
        AddTextToTextView([NSString stringWithFormat:@"ErrorCode=[%d], ErrorMsg=[%@]\n", pRspInfo->ErrorID,ConvertToUTF_8(pRspInfo->ErrorMsg)]);
        printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
        AddTextToTextView([NSString stringWithFormat:@"RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast]);
        
        if (bIsLast == true)
        {
            
            // QryInstrumentCommissionRate
            CThostFtdcQryInstrumentCommissionRateField InstrumentCommissionRate;
            memset(&InstrumentCommissionRate, 0, sizeof(InstrumentCommissionRate));
            // broker id
            strcpy(InstrumentCommissionRate.BrokerID, m_chBrokerID);
            // investor id
            strcpy(InstrumentCommissionRate.InvestorID, m_chUserID);
			strcpy(m_ReqUserID, InstrumentCommissionRate.InvestorID);
            // instrument id
            strcpy(InstrumentCommissionRate.InstrumentID, m_chContract);
            m_pUserApi->ReqQryInstrumentCommissionRate(&InstrumentCommissionRate, m_nRequestID++ );
        }
    }
    
    // QryInstrumentCommissionRate response
    virtual void OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        printf("OnRspQryInstrumentCommissionRate:");
        AddTextToTextView(@"OnRspQryInstrumentCommissionRate:");
		if (NULL != pInstrumentCommissionRate)
        {
			strcpy(m_AnsUserID, pInstrumentCommissionRate->InvestorID);
			
            printf("%s|%s|%.08f|%.08f|%.08f|%.08f|%.08f|%.08f|",
                   pInstrumentCommissionRate->InvestorID,						// 投资者代码
                   pInstrumentCommissionRate->InstrumentID,					// 合约代码
                   pInstrumentCommissionRate->OpenRatioByMoney,				// 开仓手续费率
                   pInstrumentCommissionRate->OpenRatioByVolume,				// 开仓手续费
                   pInstrumentCommissionRate->CloseRatioByMoney,				// 平仓手续费率
                   pInstrumentCommissionRate->CloseRatioByVolume,				// 平仓手续费
                   pInstrumentCommissionRate->CloseTodayRatioByMoney,			// 平今手续费率
                   pInstrumentCommissionRate->CloseTodayRatioByVolume);		// 平今手续费
            AddTextToTextView([NSString stringWithFormat:@"%s|%s|%.08f|%.08f|%.08f|%.08f|%.08f|%.08f|",
                               pInstrumentCommissionRate->InvestorID,						// 投资者代码
                               pInstrumentCommissionRate->InstrumentID,					// 合约代码
                               pInstrumentCommissionRate->OpenRatioByMoney,				// 开仓手续费率
                               pInstrumentCommissionRate->OpenRatioByVolume,				// 开仓手续费
                               pInstrumentCommissionRate->CloseRatioByMoney,				// 平仓手续费率
                               pInstrumentCommissionRate->CloseRatioByVolume,				// 平仓手续费
                               pInstrumentCommissionRate->CloseTodayRatioByMoney,			// 平今手续费率
                               pInstrumentCommissionRate->CloseTodayRatioByVolume]);		// 平今手续费
        }
        printf("\n");
        AddTextToTextView(@"\n");
        printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
        AddTextToTextView([NSString stringWithFormat:@"ErrorCode=[%d], ErrorMsg=[%@]\n", pRspInfo->ErrorID,ConvertToUTF_8(pRspInfo->ErrorMsg)]);
        printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
        AddTextToTextView([NSString stringWithFormat:@"RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast]);
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
        AddTextToTextView(@"OnRspQryDepthMarketData:");
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
            AddTextToTextView([NSString stringWithFormat:@"%s|%s|%.04f|%.04f|%.04f|%.04f|%.04f|%d|%.04f|%.04f|%.04f|%d|%d|%.04f|%.04f|%.04f|%.04f|%.04f|%s|%d|%.04f|%d|%.04f|%d|%.04f|%d|%.04f|%d|%.04f|%d|%.04f|%d|%.04f|%d|%.04f|",
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
                               ]);
        }
        printf("\n");
        AddTextToTextView(@"\n");
        printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
        AddTextToTextView([NSString stringWithFormat:@"ErrorCode=[%d], ErrorMsg=[%@]\n", pRspInfo->ErrorID,ConvertToUTF_8(pRspInfo->ErrorMsg)]);
        printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
        AddTextToTextView([NSString stringWithFormat:@"RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast]);
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
			strcpy(m_ReqUserID, ord.InvestorID);
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
            // combination order's offset flag
            ord.CombOffsetFlag[0] = THOST_FTDC_OF_Open;
            //strcpy(ord.CombOffsetFlag, "0");
            // combination or hedge flag
            ord.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;
            //strcpy(ord.CombHedgeFlag, "0");
            // price
            ord.LimitPrice = 2460;
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
			strcpy(m_ReqUserID, QryOrder.InvestorID);
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
        AddTextToTextView(@"OnRspOrderInsert:");
        if (NULL != pInputOrder)
        {
			strcpy(m_AnsUserID, pInputOrder->InvestorID);
			
            printf("%s", pInputOrder->OrderRef);
            AddTextToTextView([NSString stringWithFormat:@"%s", pInputOrder->OrderRef]);
        }
        printf("\n");
        AddTextToTextView(@"\n");
        printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
        AddTextToTextView([NSString stringWithFormat:@"ErrorCode=[%d], ErrorMsg=[%@]\n", pRspInfo->ErrorID,ConvertToUTF_8(pRspInfo->ErrorMsg)]);
        printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
        AddTextToTextView([NSString stringWithFormat:@"RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast]);
        
    };
    
    // order insertion return
    virtual void OnRtnOrder(CThostFtdcOrderField *pOrder)
    {
        printf("OnRtnOrder:");
        AddTextToTextView(@"OnRtnOrder:");
        if (NULL != pOrder)
        {
			strcpy(m_AnsUserID, pOrder->InvestorID);
			
            printf("%d|%s|OrderSysID:%s|OrderLocalID:%s|%s|%s|%c|%s|%c|%s|%s|%d|%.04f|%d|%d|%s|%s|%s|%c|%c|%c|%c|%.04f|%s|%s|",
                   pOrder->SequenceNo,							// 序号
                   pOrder->InvestorID,							// 客户号
                   pOrder->OrderSysID,							// 委托号
                   pOrder->OrderLocalID,						// 本地报单编号
                   pOrder->ExchangeID,							// 交易所代码
                   pOrder->InstrumentID,						// 合约号
                   pOrder->OrderStatus,						// 报单状态
                   pOrder->StatusMsg,							// 状态信息
                   pOrder->Direction,							// 买卖标记
                   pOrder->CombOffsetFlag,						// 开平仓标志
                   pOrder->CombHedgeFlag,						// 投保标记
                   pOrder->VolumeTotalOriginal,				// 委托数量
                   pOrder->LimitPrice,							// 委托价格
                   pOrder->VolumeTraded,						// 成交数量
                   pOrder->VolumeTotal,						// 未成交数量
                   pOrder->TradingDay,							// 交割期
                   pOrder->InsertTime,							// 委托时间
                   pOrder->CancelTime,							// 撤单时间
                   pOrder->OrderType,							// 报单类型
                   pOrder->OrderSource,						// 报单来源
                   pOrder->OrderPriceType,						// 报单价格条件
                   pOrder->TimeCondition,						// 有效期类型
                   pOrder->StopPrice,							// 止损价
                   pOrder->ActiveTime,							// 激活时间
                   pOrder->OrderRef							// 报单引用
                   );
            AddTextToTextView([NSString stringWithFormat:@"%d|%s|OrderSysID:%s|OrderLocalID:%s|%s|%s|%c|%s|%c|%s|%s|%d|%.04f|%d|%d|%s|%s|%s|%c|%c|%c|%c|%.04f|%s|%s|",
                               pOrder->SequenceNo,							// 序号
                               pOrder->InvestorID,							// 客户号
                               pOrder->OrderSysID,							// 委托号
                               pOrder->OrderLocalID,						// 本地报单编号
                               pOrder->ExchangeID,							// 交易所代码
                               pOrder->InstrumentID,						// 合约号
                               pOrder->OrderStatus,						// 报单状态
                               pOrder->StatusMsg,							// 状态信息
                               pOrder->Direction,							// 买卖标记
                               pOrder->CombOffsetFlag,						// 开平仓标志
                               pOrder->CombHedgeFlag,						// 投保标记
                               pOrder->VolumeTotalOriginal,				// 委托数量
                               pOrder->LimitPrice,							// 委托价格
                               pOrder->VolumeTraded,						// 成交数量
                               pOrder->VolumeTotal,						// 未成交数量
                               pOrder->TradingDay,							// 交割期
                               pOrder->InsertTime,							// 委托时间
                               pOrder->CancelTime,							// 撤单时间
                               pOrder->OrderType,							// 报单类型
                               pOrder->OrderSource,						// 报单来源
                               pOrder->OrderPriceType,						// 报单价格条件
                               pOrder->TimeCondition,						// 有效期类型
                               pOrder->StopPrice,							// 止损价
                               pOrder->ActiveTime,							// 激活时间
                               pOrder->OrderRef							// 报单引用
                               ]);
        }
        printf("\n");
        AddTextToTextView(@"\n");
        printf("RequestID=[%d]\n", pOrder->RequestID);
        AddTextToTextView([NSString stringWithFormat:@"RequestID=[%d]\n", pOrder->RequestID]);
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
			strcpy(m_ReqUserID, ord.InvestorID);
            // order action refernce
            ord.OrderActionRef=000000000001;
            
            /// order reference
            strcpy(ord.OrderRef, pOrder->OrderRef);		// *必传1
            // front id
            ord.FrontID = pOrder->FrontID;				// *必传2
            // session id
            ord.SessionID = pOrder->SessionID;			// *必传3
            
            // 或者
            
            // exchange ID
            strcpy(ord.ExchangeID, pOrder->ExchangeID);	// *必传1
            // action order ID
            strcpy(ord.OrderSysID,pOrder->OrderSysID);	// *必传2
            
            //  action order num(unavailable yet)
            ord.VolumeChange=0;
            // instrument ID
            //strcpy(ord.InstrumentID, pOrder->InstrumentID);
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
        AddTextToTextView(@"OnRtnTrade:");
        if (NULL != pTrade)
        {
			strcpy(m_AnsUserID, pTrade->InvestorID);
			
            if (pTrade->Direction == THOST_FTDC_D_Buy)
                s_nTotalBuy += pTrade->Volume;
            else if (pTrade->Direction == THOST_FTDC_D_Sell)
                s_nTotalSell += pTrade->Volume;
            else
            {
                printf ("invalid direction:%c\n", pTrade->Direction);
                AddTextToTextView([NSString stringWithFormat:@"invalid direction:%c\n", pTrade->Direction]);
            }
            
            printf("%d|%s|%s|%s|%s|成交|%c|%c|%c|%d|%.04f|%s|%s|%s|%s|s_nTotalBuy=%d|s_nTotalSell=%d|",
                   pTrade->SequenceNo,					// 序号
                   pTrade->InvestorID,					// 客户号
                   pTrade->ExchangeID,					// 交易所代码
                   pTrade->OrderSysID,					// 委托单号
                   pTrade->InstrumentID,				// 合约编码
                   pTrade->Direction,					// 买卖标记
                   pTrade->OffsetFlag,					// 开平仓标志
                   pTrade->HedgeFlag,					// 投保标记
                   pTrade->Volume,						// 成交数量
                   pTrade->Price,						// 成交价格
                   pTrade->TradeID,					// 成交号
                   pTrade->TradingDay,					// 交割期
                   pTrade->TradeTime,					// 成交时间
                   pTrade->OrderRef,					// 报单引用
                   s_nTotalBuy,
                   s_nTotalSell
                   );
            AddTextToTextView([NSString stringWithFormat:@"%d|%s|%s|%s|%s|成交|%c|%c|%c|%d|%.04f|%s|%s|%s|%s|s_nTotalBuy=%d|s_nTotalSell=%d|",
                               pTrade->SequenceNo,					// 序号
                               pTrade->InvestorID,					// 客户号
                               pTrade->ExchangeID,					// 交易所代码
                               pTrade->OrderSysID,					// 委托单号
                               pTrade->InstrumentID,				// 合约编码
                               pTrade->Direction,					// 买卖标记
                               pTrade->OffsetFlag,					// 开平仓标志
                               pTrade->HedgeFlag,					// 投保标记
                               pTrade->Volume,						// 成交数量
                               pTrade->Price,						// 成交价格
                               pTrade->TradeID,					// 成交号
                               pTrade->TradingDay,					// 交割期
                               pTrade->TradeTime,					// 成交时间
                               pTrade->OrderRef,					// 报单引用
                               s_nTotalBuy,
                               s_nTotalSell]);
        }
        printf("\n");
        AddTextToTextView(@"\n");
    }
    
    // the error notification caused by client request
    virtual void OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        printf("OnRspError:\n");
        AddTextToTextView(@"OnRspError:\n");
        printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
        AddTextToTextView([NSString stringWithFormat:@"ErrorCode=[%d], ErrorMsg=[%@]\n", pRspInfo->ErrorID,ConvertToUTF_8(pRspInfo->ErrorMsg)]);
        printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
        AddTextToTextView([NSString stringWithFormat:@"RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast]);
        // the client should handle the error
    }
    
    // output the order action result
    virtual void OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        printf("OnRspOrderAction:");
        AddTextToTextView(@"OnRspOrderAction:");
        if (NULL != pInputOrderAction)
        {
			strcpy(m_AnsUserID, pInputOrderAction->InvestorID);
			
            printf("%s|OrderSysID:%s|%s|%s|%.04f|",
                   pInputOrderAction->InvestorID,							// 客户号
                   pInputOrderAction->OrderSysID,							// 委托号
                   pInputOrderAction->ExchangeID,							// 交易所代码
                   pInputOrderAction->InstrumentID,						// 合约号
                   pInputOrderAction->LimitPrice							// 委托价格
                   );
            AddTextToTextView([NSString stringWithFormat:@"%s|OrderSysID:%s|%s|%s|%.04f|",
                               pInputOrderAction->InvestorID,							// 客户号
                               pInputOrderAction->OrderSysID,							// 委托号
                               pInputOrderAction->ExchangeID,							// 交易所代码
                               pInputOrderAction->InstrumentID,						// 合约号
                               pInputOrderAction->LimitPrice							// 委托价格
                               ]);
        }
        printf("\n");
        AddTextToTextView(@"\n");
        printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
        AddTextToTextView([NSString stringWithFormat:@"ErrorCode=[%d], ErrorMsg=[%@]\n", pRspInfo->ErrorID,ConvertToUTF_8(pRspInfo->ErrorMsg)]);
        printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
        AddTextToTextView([NSString stringWithFormat:@"RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast]);
    }
    
    // qryorder return
    virtual void OnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        printf("OnRspQryOrder:");
        AddTextToTextView(@"OnRspQryOrder:");
		printf("\n");
        AddTextToTextView(@"\n");
        if(pOrder != NULL)
        {
			strcpy(m_AnsUserID, pOrder->InvestorID);
            printf("%s", pOrder->OrderSysID);
            AddTextToTextView([NSString stringWithFormat:@"%s", pOrder->OrderSysID]);
        }
        printf("\n");
        AddTextToTextView(@"\n");
        //printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
        //printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
        
        if (bIsLast == true)
        {
            // qrytrade
            CThostFtdcQryTradeField QryTrade;
            memset(&QryTrade, 0, sizeof(QryTrade));
            // broker id
            strcpy(QryTrade.BrokerID, m_chBrokerID);
            // investor ID
            strcpy(QryTrade.InvestorID, m_chUserID);
			strcpy(m_ReqUserID, QryTrade.InvestorID);
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
        AddTextToTextView(@"OnRspQryTrade:");
        
        if(pTrade != NULL)
        {
			strcpy(m_AnsUserID, pTrade->InvestorID);
			
            printf("%s|%s|%s|%s|%c|%c|%c|%d|%.04f|%s|%s|%s|%s|%d",
                   pTrade->InvestorID,							// 客户号
                   pTrade->ExchangeID,							// 交易所代码
                   pTrade->OrderSysID,							// 报单编号
                   pTrade->InstrumentID,						// 合约代码
                   pTrade->Direction,							// 买卖标记
                   pTrade->OffsetFlag,							// 开平标志
                   pTrade->HedgeFlag,							// 投保标记
                   pTrade->Volume,								// 成交数量
                   pTrade->Price,								// 成交价格
                   pTrade->TradeID,							// 成交号
                   pTrade->TradeDate,							// 日期
                   pTrade->TradingDay,							// 交易日
                   pTrade->TradeTime,							// 成交时间
                   pTrade->SequenceNo							// 序号
                   );
            AddTextToTextView([NSString stringWithFormat:@"%s|%s|%s|%s|%c|%c|%c|%d|%.04f|%s|%s|%s|%s|%d",
                               pTrade->InvestorID,							// 客户号
                               pTrade->ExchangeID,							// 交易所代码
                               pTrade->OrderSysID,							// 报单编号
                               pTrade->InstrumentID,						// 合约代码
                               pTrade->Direction,							// 买卖标记
                               pTrade->OffsetFlag,							// 开平标志
                               pTrade->HedgeFlag,							// 投保标记
                               pTrade->Volume,								// 成交数量
                               pTrade->Price,								// 成交价格
                               pTrade->TradeID,							// 成交号
                               pTrade->TradeDate,							// 日期
                               pTrade->TradingDay,							// 交易日
                               pTrade->TradeTime,							// 成交时间
                               pTrade->SequenceNo							// 序号
                               ]);
        }
        printf("\n");
        AddTextToTextView(@"\n");
        printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
        AddTextToTextView([NSString stringWithFormat:@"ErrorCode=[%d], ErrorMsg=[%@]\n", pRspInfo->ErrorID,ConvertToUTF_8(pRspInfo->ErrorMsg)]);
        printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
        AddTextToTextView([NSString stringWithFormat:@"RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast]);
        if (bIsLast == true)
        {
            // qry position
            CThostFtdcQryInvestorPositionField QryInvestorPosition;
            memset(&QryInvestorPosition, 0, sizeof(QryInvestorPosition));
            // broker id
            strcpy(QryInvestorPosition.BrokerID, m_chBrokerID);
            // investor ID
            strcpy(QryInvestorPosition.InvestorID, m_chUserID);
			strcpy(m_ReqUserID, QryInvestorPosition.InvestorID);
            // instrument id
            strcpy(QryInvestorPosition.InstrumentID, m_chContract);
            
            m_pUserApi->ReqQryInvestorPosition(&QryInvestorPosition, m_nRequestID++ );;
        }
    }
    
    // QryInvestorPosition return
    virtual void OnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        printf("OnRspQryInvestorPosition:");
        AddTextToTextView(@"OnRspQryInvestorPosition:");
        if(pInvestorPosition != NULL)
        {
			strcpy(m_AnsUserID, pInvestorPosition->InvestorID);
			
            printf("%s|%d|%d|%.04f|%.04f|%s|%c|%.04f|%c|%s|%.04f|",
                   pInvestorPosition->InvestorID,					// 客户号
                   pInvestorPosition->Position,					// 今日总持仓
                   pInvestorPosition->TodayPosition,				// 今日现持仓
                   pInvestorPosition->PositionCost,				// 持仓成本
                   pInvestorPosition->OpenCost,					// 开仓成本
                   pInvestorPosition->InstrumentID,				// 合约代码
                   pInvestorPosition->HedgeFlag,					// 投机套保标志
                   pInvestorPosition->PositionProfit,				// 持仓盈亏
                   pInvestorPosition->PosiDirection,				// 持仓多空方向
                   pInvestorPosition->TradingDay,					// 交易日
                   pInvestorPosition->UseMargin					// 占用的保证金
                   );
            AddTextToTextView([NSString stringWithFormat:@"%s|%d|%d|%.04f|%.04f|%s|%c|%.04f|%c|%s|%.04f|",
                               pInvestorPosition->InvestorID,					// 客户号
                               pInvestorPosition->Position,					// 今日总持仓
                               pInvestorPosition->TodayPosition,				// 今日现持仓
                               pInvestorPosition->PositionCost,				// 持仓成本
                               pInvestorPosition->OpenCost,					// 开仓成本
                               pInvestorPosition->InstrumentID,				// 合约代码
                               pInvestorPosition->HedgeFlag,					// 投机套保标志
                               pInvestorPosition->PositionProfit,				// 持仓盈亏
                               pInvestorPosition->PosiDirection,				// 持仓多空方向
                               pInvestorPosition->TradingDay,					// 交易日
                               pInvestorPosition->UseMargin					// 占用的保证金
                               ]);
        }
        printf("\n");
        AddTextToTextView(@"\n");
        printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
        AddTextToTextView([NSString stringWithFormat:@"ErrorCode=[%d], ErrorMsg=[%@]\n", pRspInfo->ErrorID,ConvertToUTF_8(pRspInfo->ErrorMsg)]);
        printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
        AddTextToTextView([NSString stringWithFormat:@"RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast]);
        
        if (bIsLast == true)
        {
            // password update
            CThostFtdcUserPasswordUpdateField UserPasswordUpdate;
            memset(&UserPasswordUpdate, 0, sizeof(UserPasswordUpdate));
            // broker id
            strcpy(UserPasswordUpdate.BrokerID,m_chBrokerID);
            // user id
            strcpy(UserPasswordUpdate.UserID, m_chUserID);
			strcpy(m_ReqUserID, UserPasswordUpdate.UserID);
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
        AddTextToTextView(@"OnRspUserPasswordUpdate:");
        if (NULL != pUserPasswordUpdate)
        {
			strcpy(m_AnsUserID, pUserPasswordUpdate->UserID);
			
            printf("%s|%s|%s|",
                   pUserPasswordUpdate->UserID,			// 客户号
                   pUserPasswordUpdate->OldPassword,		// 旧口令
                   pUserPasswordUpdate->NewPassword		// 新口令
                   );
            AddTextToTextView([NSString stringWithFormat:@"%s|%s|%s|",
                               pUserPasswordUpdate->UserID,			// 客户号
                               pUserPasswordUpdate->OldPassword,		// 旧口令
                               pUserPasswordUpdate->NewPassword		// 新口令
                               ]);
        }
        printf("\n");
        AddTextToTextView(@"\n");
        printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
        AddTextToTextView([NSString stringWithFormat:@"ErrorCode=[%d], ErrorMsg=[%@]\n", pRspInfo->ErrorID,ConvertToUTF_8(pRspInfo->ErrorMsg)]);
        printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
        AddTextToTextView([NSString stringWithFormat:@"RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast]);
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
        AddTextToTextView(@"OnRspTradingAccountPasswordUpdate:");
        if (NULL != pTradingAccountPasswordUpdate)
        {
            printf("%s|%s|%s|",
                   pTradingAccountPasswordUpdate->AccountID,				// 资金账户
                   pTradingAccountPasswordUpdate->OldPassword,				// 旧口令
                   pTradingAccountPasswordUpdate->NewPassword				// 新口令
                   );
            AddTextToTextView([NSString stringWithFormat:@"%s|%s|%s|",
                               pTradingAccountPasswordUpdate->AccountID,				// 资金账户
                               pTradingAccountPasswordUpdate->OldPassword,				// 旧口令
                               pTradingAccountPasswordUpdate->NewPassword				// 新口令
                               ]);
        }
        printf("\n");
        AddTextToTextView(@"\n");
        printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
        AddTextToTextView([NSString stringWithFormat:@"ErrorCode=[%d], ErrorMsg=[%@]\n", pRspInfo->ErrorID,ConvertToUTF_8(pRspInfo->ErrorMsg)]);
        printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
        
        AddTextToTextView([NSString stringWithFormat:@"RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast]);
        
        if (bIsLast == true)
        {
            // SettlementInfo Confirm
            CThostFtdcQrySettlementInfoConfirmField SettlementInfoConfirm;
            memset(&SettlementInfoConfirm, 0, sizeof(SettlementInfoConfirm));
            // broker id
            strcpy(SettlementInfoConfirm.BrokerID, m_chBrokerID);
            // investor ID
            strcpy(SettlementInfoConfirm.InvestorID, m_chUserID);
			strcpy(m_ReqUserID, SettlementInfoConfirm.InvestorID);
            
            m_pUserApi->ReqQrySettlementInfoConfirm(&SettlementInfoConfirm, m_nRequestID++ );
        }
        
    }
    
    // QrySettlementInfoConfirm return
    virtual void OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        printf("OnRspQrySettlementInfoConfirm:");
        AddTextToTextView(@"OnRspQrySettlementInfoConfirm:");
        if (NULL != pSettlementInfoConfirm)
        {
			strcpy(m_AnsUserID, pSettlementInfoConfirm->InvestorID);
			
            printf("%s|%s|",
                   pSettlementInfoConfirm->InvestorID,					// 客户号
                   pSettlementInfoConfirm->ConfirmDate					// 确认日期
                   );
            AddTextToTextView([NSString stringWithFormat:@"%s|%s|",
                               pSettlementInfoConfirm->InvestorID,					// 客户号
                               pSettlementInfoConfirm->ConfirmDate					// 确认日期
                               ]);
        }
        printf("\n");
        AddTextToTextView(@"\n");
        printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
        AddTextToTextView([NSString stringWithFormat:@"ErrorCode=[%d], ErrorMsg=[%@]\n", pRspInfo->ErrorID,ConvertToUTF_8(pRspInfo->ErrorMsg)]);
        printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
        AddTextToTextView([NSString stringWithFormat:@"RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast]);
        
        if (bIsLast == true)
        {
            // QrySettlementInfo
            CThostFtdcQrySettlementInfoField QrySettlementInfo;
            memset(&QrySettlementInfo, 0, sizeof(QrySettlementInfo));
            // broker id
            strcpy(QrySettlementInfo.BrokerID, m_chBrokerID);
            // investor ID
            strcpy(QrySettlementInfo.InvestorID, m_chUserID);
			strcpy(m_ReqUserID, QrySettlementInfo.InvestorID);
            // trading day
            strcpy(QrySettlementInfo.TradingDay, "");
            
            m_pUserApi->ReqQrySettlementInfo(&QrySettlementInfo, m_nRequestID++ );
        }
        
    }
    
    ///QrySettlementInfo return
    virtual void OnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        printf("OnRspQrySettlementInfoConfirm:");
        AddTextToTextView(@"OnRspQrySettlementInfoConfirm:");
        if(pSettlementInfo != NULL)
        {
			strcpy(m_AnsUserID, pSettlementInfo->InvestorID);
			
            printf("%s|%s|",
                   pSettlementInfo->InvestorID,			// 客户号
                   pSettlementInfo->Content				// 消息正文
                   );
            AddTextToTextView([NSString stringWithFormat:@"%s|%s|",
                               pSettlementInfo->InvestorID,			// 客户号
                               pSettlementInfo->Content				// 消息正文
                               ]);
        }
        printf("\n");
        AddTextToTextView(@"\n");
        printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
        AddTextToTextView([NSString stringWithFormat:@"ErrorCode=[%d], ErrorMsg=[%@]\n", pRspInfo->ErrorID,ConvertToUTF_8(pRspInfo->ErrorMsg)]);
        printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
        AddTextToTextView([NSString stringWithFormat:@"RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast]);
        if (bIsLast == true)
        {
            // QrySettlementInfo
            CThostFtdcQryInvestorPositionCombineDetailField InvestorPositionDetail;
            memset(&InvestorPositionDetail, 0, sizeof(InvestorPositionDetail));
            // broker id
            strcpy(InvestorPositionDetail.BrokerID, m_chBrokerID);
            // investor ID
            strcpy(InvestorPositionDetail.InvestorID, m_chUserID);
			strcpy(m_ReqUserID, InvestorPositionDetail.InvestorID);
            //
            strcpy(InvestorPositionDetail.CombInstrumentID, "fu1109");
            
            m_pUserApi->ReqQryInvestorPositionCombineDetail(&InvestorPositionDetail, m_nRequestID++ );
        }
    }
    
    // QryInvestorPositionCombineDetail return
    virtual void OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        printf("OnRspQryInvestorPositionCombineDetail:");
        AddTextToTextView(@"OnRspQryInvestorPositionCombineDetail:");
        if(pInvestorPositionCombineDetail != NULL)
        {
			strcpy(m_AnsUserID, pInvestorPositionCombineDetail->InvestorID);
			
            printf("%s|%s|%s|%d|%.04f|",
                   pInvestorPositionCombineDetail->InvestorID,					// 客户号
                   pInvestorPositionCombineDetail->ExchangeID,					// 交易所代码
                   pInvestorPositionCombineDetail->CombInstrumentID,			// 组合合约
                   pInvestorPositionCombineDetail->TotalAmt,					// 持仓量
                   pInvestorPositionCombineDetail->Margin						// 投资者保证金
                   );
            AddTextToTextView([NSString stringWithFormat:@"%s|%s|%s|%d|%.04f|",
                               pInvestorPositionCombineDetail->InvestorID,					// 客户号
                               pInvestorPositionCombineDetail->ExchangeID,					// 交易所代码
                               pInvestorPositionCombineDetail->CombInstrumentID,			// 组合合约
                               pInvestorPositionCombineDetail->TotalAmt,					// 持仓量
                               pInvestorPositionCombineDetail->Margin						// 投资者保证金
                               ]);
        }
        printf("\n");
        AddTextToTextView(@"\n");
        printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
        AddTextToTextView([NSString stringWithFormat:@"ErrorCode=[%d], ErrorMsg=[%@]\n", pRspInfo->ErrorID,ConvertToUTF_8(pRspInfo->ErrorMsg)]);
        printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
        AddTextToTextView([NSString stringWithFormat:@"RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast]);
        
        if (bIsLast == true)
        {
            // BankToFuture
            CThostFtdcReqTransferField ReqTransfer;
            memset(&ReqTransfer, 0, sizeof(ReqTransfer));
            // broker id
            strcpy(ReqTransfer.BrokerID, m_chBrokerID);
            // AccountID ID
            strcpy(ReqTransfer.AccountID, m_chUserID);
			strcpy(m_ReqUserID, ReqTransfer.AccountID);
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
    
    ///期货发起银行资金转期货应答
    virtual void OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        printf("OnRspFromBankToFutureByFuture:");
        AddTextToTextView(@"OnRspFromBankToFutureByFuture:");
        if (NULL != pReqTransfer)
        {
			strcpy(m_AnsUserID, pReqTransfer->UserID);
			
            printf("%s|%s|%s|%s|%d|%.04f|%c|%c|",
                   pReqTransfer->AccountID,						// 投资者账号
                   pReqTransfer->BankID,							// 银行代码
                   pReqTransfer->BankAccount,						// 银行账号
                   pReqTransfer->TradeTime,						// 操作时间
                   pReqTransfer->PlateSerial,						// 银期平台流水号
                   pReqTransfer->TradeAmount,						// 转账金额
                   pReqTransfer->TransferStatus,					// 处理状态
                   pReqTransfer->BankAccType						// 银行类型
                   );
            AddTextToTextView([NSString stringWithFormat:@"%s|%s|%s|%s|%d|%.04f|%c|%c|",
                               pReqTransfer->AccountID,						// 投资者账号
                               pReqTransfer->BankID,							// 银行代码
                               pReqTransfer->BankAccount,						// 银行账号
                               pReqTransfer->TradeTime,						// 操作时间
                               pReqTransfer->PlateSerial,						// 银期平台流水号
                               pReqTransfer->TradeAmount,						// 转账金额
                               pReqTransfer->TransferStatus,					// 处理状态
                               pReqTransfer->BankAccType						// 银行类型
                               ]);
        }
        
        printf("\n");
        AddTextToTextView(@"\n");
        printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
        AddTextToTextView([NSString stringWithFormat:@"ErrorCode=[%d], ErrorMsg=[%@]\n", pRspInfo->ErrorID,ConvertToUTF_8(pRspInfo->ErrorMsg)]);
        printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
        
        AddTextToTextView([NSString stringWithFormat:@"RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast]);
        
        if (bIsLast == true)
        {
            // FutureToBan
            CThostFtdcReqTransferField ReqTransfer;
            memset(&ReqTransfer, 0, sizeof(ReqTransfer));
            // broker id
            strcpy(ReqTransfer.BrokerID, m_chBrokerID);
            // AccountID ID
            strcpy(ReqTransfer.AccountID, m_chUserID);
			strcpy(m_ReqUserID, ReqTransfer.AccountID);
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
    
    ///期货发起期货资金转银行应答
    virtual void OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        printf("OnRspFromFutureToBankByFuture:");
        AddTextToTextView(@"OnRspFromFutureToBankByFuture:");
        if (NULL != pReqTransfer)
        {
			strcpy(m_AnsUserID, pReqTransfer->AccountID);
			
            printf("%s|%s|%s|%s|%d|%.04f|%c|%c|",
                   pReqTransfer->AccountID,						// 投资者账号
                   pReqTransfer->BankID,							// 银行代码
                   pReqTransfer->BankAccount,						// 银行账号
                   pReqTransfer->TradeTime,						// 操作时间
                   pReqTransfer->PlateSerial,						// 银期平台流水号
                   pReqTransfer->TradeAmount,						// 转账金额
                   pReqTransfer->TransferStatus,					// 处理状态
                   pReqTransfer->BankAccType						// 银行类型
                   );
            AddTextToTextView([NSString stringWithFormat:@"%s|%s|%s|%s|%d|%.04f|%c|%c|",
                               pReqTransfer->AccountID,						// 投资者账号
                               pReqTransfer->BankID,							// 银行代码
                               pReqTransfer->BankAccount,						// 银行账号
                               pReqTransfer->TradeTime,						// 操作时间
                               pReqTransfer->PlateSerial,						// 银期平台流水号
                               pReqTransfer->TradeAmount,						// 转账金额
                               pReqTransfer->TransferStatus,					// 处理状态
                               pReqTransfer->BankAccType						// 银行类型
                               ]);
        }
        printf("\n");
        AddTextToTextView(@"\n");
        printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
        AddTextToTextView([NSString stringWithFormat:@"ErrorCode=[%d], ErrorMsg=[%@]\n", pRspInfo->ErrorID,ConvertToUTF_8(pRspInfo->ErrorMsg)]);
        printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
        AddTextToTextView([NSString stringWithFormat:@"RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast]);
        if (bIsLast == true)
        {
            // FutureToBank
            CThostFtdcReqQueryAccountField ReqQueryAccount;
            memset(&ReqQueryAccount, 0, sizeof(ReqQueryAccount));
            // AccountID ID
            strcpy(ReqQueryAccount.AccountID, m_chUserID);
			strcpy(m_ReqUserID, ReqQueryAccount.AccountID);
            // BankPassWord
            strcpy(ReqQueryAccount.BankPassWord, "123456");
            // BankID
            strcpy(ReqQueryAccount.BankID, "6");
            // BankAccount
            strcpy(ReqQueryAccount.BankAccount, "360000016");
            
            m_pUserApi->ReqQueryBankAccountMoneyByFuture(&ReqQueryAccount, m_nRequestID++ );
        }
        
    }
    
    ///期货发起查询银行余额应答
    virtual void OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        printf("OnRspQueryBankAccountMoneyByFuture:");
        AddTextToTextView(@"OnRspQueryBankAccountMoneyByFuture:");
        if (NULL != pReqQueryAccount)
        {
			strcpy(m_AnsUserID, pReqQueryAccount->AccountID);
			
            printf("%s|%s|%s|%s|%d|%c|",
                   pReqQueryAccount->AccountID,						// 投资者账号
                   pReqQueryAccount->BankID,							// 银行代码
                   pReqQueryAccount->BankAccount,						// 银行账号
                   pReqQueryAccount->TradeTime,						// 操作时间
                   pReqQueryAccount->PlateSerial,						// 银期平台流水号
                   pReqQueryAccount->BankAccType						// 银行类型
                   );
            AddTextToTextView([NSString stringWithFormat:@"%s|%s|%s|%s|%d|%c|",
                               pReqQueryAccount->AccountID,						// 投资者账号
                               pReqQueryAccount->BankID,							// 银行代码
                               pReqQueryAccount->BankAccount,						// 银行账号
                               pReqQueryAccount->TradeTime,						// 操作时间
                               pReqQueryAccount->PlateSerial,						// 银期平台流水号
                               pReqQueryAccount->BankAccType						// 银行类型
                               ]);
        }
        printf("\n");
        AddTextToTextView(@"\n");
        printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
        AddTextToTextView([NSString stringWithFormat:@"ErrorCode=[%d], ErrorMsg=[%@]\n", pRspInfo->ErrorID,ConvertToUTF_8(pRspInfo->ErrorMsg)]);
        printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
        AddTextToTextView([NSString stringWithFormat:@"RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast]);
        
        if (bIsLast == true)
        {
            // TransferSerial
            CThostFtdcQryTransferSerialField QryTransferSerial;
            memset(&QryTransferSerial, 0, sizeof(QryTransferSerial));
            // broker id
            strcpy(QryTransferSerial.BrokerID, m_chBrokerID);
            // investor ID
            strcpy(QryTransferSerial.AccountID, m_chUserID);
			strcpy(m_ReqUserID, QryTransferSerial.AccountID);
            // BankID
            strcpy(QryTransferSerial.BankID, "5");
            
            m_pUserApi->ReqQryTransferSerial(&QryTransferSerial, m_nRequestID++ );
        }
    }
    
    // TransferSerial return
    virtual void OnRspQryTransferSerial(CThostFtdcTransferSerialField *pTransferSerial, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        printf("OnRspQryTransferSerial:");
        AddTextToTextView(@"OnRspQryTransferSerial:");
        if (pTransferSerial != NULL)
        {
			strcpy(m_AnsUserID, pTransferSerial->AccountID);
			
            printf("%d|%s|%s|%s|%s|%s|%.04f|%s|%c|%c|",
                   pTransferSerial->PlateSerial,				// 银期平台流水号
                   pTransferSerial->AccountID,					// 投资者账号
                   pTransferSerial->BankAccount,				// 银行账号
                   pTransferSerial->OperatorCode,				// 操作员
                   pTransferSerial->TradingDay,				// 操作日期
                   pTransferSerial->TradeTime,					// 操作时间
                   pTransferSerial->TradeAmount,				// 交易金额
                   pTransferSerial->BankID,					// 银行代码
                   pTransferSerial->BankAccType,				// 银行类型
                   pTransferSerial->AvailabilityFlag			// 有效标志
                   );
            AddTextToTextView([NSString stringWithFormat:@"%d|%s|%s|%s|%s|%s|%.04f|%s|%c|%c|",
                               pTransferSerial->PlateSerial,				// 银期平台流水号
                               pTransferSerial->AccountID,					// 投资者账号
                               pTransferSerial->BankAccount,				// 银行账号
                               pTransferSerial->OperatorCode,				// 操作员
                               pTransferSerial->TradingDay,				// 操作日期
                               pTransferSerial->TradeTime,					// 操作时间
                               pTransferSerial->TradeAmount,				// 交易金额
                               pTransferSerial->BankID,					// 银行代码
                               pTransferSerial->BankAccType,				// 银行类型
                               pTransferSerial->AvailabilityFlag			// 有效标志
                               ]);
        }
        printf("\n");
        AddTextToTextView(@"\n");
        printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
        AddTextToTextView([NSString stringWithFormat:@"ErrorCode=[%d], ErrorMsg=[%@]\n", pRspInfo->ErrorID,ConvertToUTF_8(pRspInfo->ErrorMsg)]);
        printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
        
        AddTextToTextView([NSString stringWithFormat:@"RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast]);
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
        AddTextToTextView(@"OnRspQryNotice:");
        if (NULL != pNotice)
        {
            printf(":%s", pNotice->Content);
            AddTextToTextView([NSString stringWithFormat:@":%s", pNotice->Content]);
        }
        printf("\n");
        AddTextToTextView(@"\n");
        printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
        AddTextToTextView([NSString stringWithFormat:@"ErrorCode=[%d], ErrorMsg=[%@]\n", pRspInfo->ErrorID,ConvertToUTF_8(pRspInfo->ErrorMsg)]);
        printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
        AddTextToTextView([NSString stringWithFormat:@"RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast]);
        if (bIsLast == true)
        {
            CThostFtdcQryTradingNoticeField QryTradingNotice;
            memset(&QryTradingNotice, 0, sizeof(QryTradingNotice)-1);
            // broker id 
            strcpy(QryTradingNotice.BrokerID, m_chBrokerID);
            // investor ID
            strcpy(QryTradingNotice.InvestorID, m_chUserID);
			strcpy(m_ReqUserID, QryTradingNotice.InvestorID);
            
            m_pUserApi->ReqQryTradingNotice(&QryTradingNotice, m_nRequestID++ );
        }
    }
    
    // trade notice return
    virtual void OnRspQryTradingNotice(CThostFtdcTradingNoticeField *pTradingNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        printf("OnRspQryTradingNotice:");
        AddTextToTextView(@"OnRspQryTradingNotice:");
        if (NULL != pTradingNotice)
        {
			strcpy(m_AnsUserID, pTradingNotice->UserID);
			
            printf(":%s", pTradingNotice->FieldContent);
            AddTextToTextView([NSString stringWithFormat:@":%s", pTradingNotice->FieldContent]);
        }
        printf("\n");
        AddTextToTextView(@"\n");
        printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
        AddTextToTextView([NSString stringWithFormat:@"ErrorCode=[%d], ErrorMsg=[%@]\n", pRspInfo->ErrorID,ConvertToUTF_8(pRspInfo->ErrorMsg)]);
        printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
        AddTextToTextView([NSString stringWithFormat:@"RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast]);
    }
    
    // logout return
    virtual void OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        printf("OnRspUserLogout:");
        AddTextToTextView(@"OnRspUserLogout:");
        if (NULL != pUserLogout)
        {
            printf("%s",pUserLogout->UserID);
            AddTextToTextView([NSString stringWithFormat:@"%s",pUserLogout->UserID]);
        }
        printf("\n");
        AddTextToTextView(@"\n");
        printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
        AddTextToTextView([NSString stringWithFormat:@"ErrorCode=[%d], ErrorMsg=[%@]\n", pRspInfo->ErrorID,ConvertToUTF_8(pRspInfo->ErrorMsg)]);
        printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
        
        AddTextToTextView([NSString stringWithFormat:@"RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast]);
        
        // inform the main thread order transaction is over 
        ///SetEvent(m_hEvent); 
	    event_set((event_handle)m_hEvent);
        
        return;
    }
private: 
    // a pointer of CThostFtdcMduserApi instance
    CThostFtdcTraderApi *m_pUserApi;
};

#endif
