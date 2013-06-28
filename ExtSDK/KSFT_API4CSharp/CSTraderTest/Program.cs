/////////////////////////////////////////////////////////////////////////
// 金仕达 KSFT C++ => .Net Framework Adapter
//Summary: 交易接口测试
// Author:	ksftapi@gmail.com
// Date: 20130304
//Update List：
// 20130314 添加新接口测试
//20130325 添加注释
/////////////////////////////////////////////////////////////////////////

using System;
using KSFT;
using System.Diagnostics;

namespace CSTraderTest
{
    class Program
    {
        static void Main(string[] args)
        {
            new testTraderApi().Run();
        }
    }

    class testTraderApi
    {
        KSFTTraderAdapter api = null;
        string FRONT_ADDR = "tcp://10.253.117.107:13163";  // 前置地址
        string BROKER_ID = "6A89B428";                       // 经纪公司代码
        string INVESTOR_ID = "80002";                    // 投资者代码
        string PASSWORD = "123456";                     // 用户密码
        string INSTRUMENT_ID = "IF1306";

        EnumDirectionType DIRECTION = EnumDirectionType.Sell;
        double LIMIT_PRICE = 3400;
        int iRequestID = 0;

        // 会话参数
        int FRONT_ID;	//前置编号
        int SESSION_ID;	//会话编号
        string ORDER_REF;	//报单引用

        bool ORDER_ACTION_SENT = false;		//是否发送了报单

        public void Run()
        {
            api = new KSFTTraderAdapter();
            api.OnFrontConnected += new FrontConnected(OnFrontConnected);
            api.OnFrontDisconnected += new FrontDisconnected(OnFrontDisconnected);
            api.OnHeartBeatWarning += new HeartBeatWarning(OnHeartBeatWarning);
            api.OnRspError += new RspError(OnRspError);
            api.OnRspUserLogin += new RspUserLogin(OnRspUserLogin);
            api.OnRspUserLogout += new RspUserLogout(OnRspUserLogout);
            api.OnRspUserPasswordUpdate += new RspUserPasswordUpdate(OnRspUserPasswordUpdate);
            api.OnRspTradingAccountPasswordUpdate += new RspTradingAccountPasswordUpdate(OnRspTradingAccountPasswordUpdate);
            api.OnRspOrderAction += new RspOrderAction(OnRspOrderAction);
            api.OnRspOrderInsert += new RspOrderInsert(OnRspOrderInsert);
            api.OnRspQueryMaxOrderVolume += new RspQueryMaxOrderVolume(OnRspQueryMaxOrderVolume);
            api.OnRspQryOrder += new RspQryOrder(OnRspQryOrder);
            api.OnRspQryTrade += new RspQryTrade(OnRspQryTrade);
            api.OnRspQryInvestor += new RspQryInvestor(OnRspQryInvestor);
            api.OnRspQryTradingCode += new RspQryTradingCode(OnRspQryTradingCode);
            api.OnRspQryInstrumentMarginRate += new RspQryInstrumentMarginRate(OnRspQryInstrumentMarginRate);
            api.OnRspQryInstrumentCommissionRate += new RspQryInstrumentCommissionRate(OnRspQryInstrumentCommissionRate);
            api.OnRspQryExchange += new RspQryExchange(OnRspQryExchange);
            api.OnRspQryDepthMarketData += new RspQryDepthMarketData(OnRspQryDepthMarketData);
            api.OnRspQrySettlementInfo += new RspQrySettlementInfo(OnRspQrySettlementInfo);
            api.OnRspQryInvestorPositionDetail += new RspQryInvestorPositionDetail(OnRspQryInvestorPositionDetail);
            api.OnRspQryNotice += new RspQryNotice(OnRspQryNotice);
            api.OnRspQrySettlementInfoConfirm += new RspQrySettlementInfoConfirm(OnRspQrySettlementInfoConfirm);
            api.OnRspQryInvestorPositionCombineDetail += new RspQryInvestorPositionCombineDetail(OnRspQryInvestorPositionCombineDetail);
            api.OnRspQryEWarrantOffset += new RspQryEWarrantOffset(OnRspQryEWarrantOffset);
            api.OnRspQryTransferSerial += new RspQryTransferSerial(OnRspQryTransferSerial);
            api.OnRspQryAccountregister += new RspQryAccountregister(OnRspQryAccountregister);
            api.OnRspQryInstrument += new RspQryInstrument(OnRspQryInstrument);
            api.OnRspQryInvestorPosition += new RspQryInvestorPosition(OnRspQryInvestorPosition);
            api.OnRspQryTradingAccount += new RspQryTradingAccount(OnRspQryTradingAccount);
            api.OnRspSettlementInfoConfirm += new RspSettlementInfoConfirm(OnRspSettlementInfoConfirm);
            api.OnRtnOrder += new RtnOrder(OnRtnOrder);
            api.OnRtnTrade += new RtnTrade(OnRtnTrade);
            api.OnErrRtnOrderInsert += new ErrRtnOrderInsert(OnErrRtnOrderInsert);
            api.OnErrRtnOrderAction += new ErrRtnOrderAction(OnErrRtnOrderAction);
            api.OnRtnInstrumentStatus += new RtnInstrumentStatus(OnRtnInstrumentStatus);
            api.OnRtnTradingNotice += new RtnTradingNotice(OnRtnTradingNotice);
            api.OnRspQryContractBank += new RspQryContractBank(OnRspQryContractBank);
            api.OnRspQryTradingNotice += new RspQryTradingNotice(OnRspQryTradingNotice);
            api.OnRspQryBrokerTradingParams += new RspQryBrokerTradingParams(OnRspQryBrokerTradingParams);
            api.OnRspQryBrokerTradingAlgos += new RspQryBrokerTradingAlgos(OnRspQryBrokerTradingAlgos);
            api.OnRspFromBankToFutureByFuture += new RspFromBankToFutureByFuture(OnRspFromBankToFutureByFuture);
            api.OnRspFromFutureToBankByFuture += new RspFromFutureToBankByFuture(OnRspFromFutureToBankByFuture);
            api.OnRspQueryBankAccountMoneyByFuture += new RspQueryBankAccountMoneyByFuture(OnRspQueryBankAccountMoneyByFuture);
            api.OnRspQryInvestorOpenPosition += new RspQryInvestorOpenPosition(OnRspQryInvestorOpenPosition);
            api.OnRspQryInvestorOpenCombinePosition += new RspQryInvestorOpenCombinePosition(OnRspQryInvestorOpenCombinePosition);
            api.OnRspBulkCancelOrder += new RspBulkCancelOrder(OnRspBulkCancelOrder);


            api.SubscribePublicTopic(EnumTeResumeType.THOST_TERT_QUICK);					     // 注册公有流
            api.SubscribePrivateTopic(EnumTeResumeType.THOST_TERT_QUICK);					// 注册私有流

            try
            {
                api.RegisterFront(FRONT_ADDR);
                api.Init();
                api.Join(); // 阻塞直到关闭或者CTRL+C
            }
            catch (Exception e)
            {
                Console.WriteLine(e.Message);
            }
            finally
            {
                api.Release();
            }
        }
        
        /// <summary>
        /// 客户端与交易后台建立起通信连接
        /// </summary>
        void OnFrontConnected()
        {
            DebugPrintFunc(new StackTrace());

            ReqUserLogin();
        }

        /// <summary>
        /// 用户登录请求
        /// </summary>
        void ReqUserLogin()
        {
            ThostFtdcReqUserLoginField req = new ThostFtdcReqUserLoginField();
            req.BrokerID = BROKER_ID;
            req.UserID = INVESTOR_ID;
            req.Password = PASSWORD;
            int iResult = api.ReqUserLogin(req, ++iRequestID);
            Console.WriteLine("--->>> 发送用户登录请求: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 用户登录请求答应
        /// </summary>
        /// <param name="pRspUserLogin"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspUserLogin(ThostFtdcRspUserLoginField pRspUserLogin, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                // 保存会话参数
                FRONT_ID = pRspUserLogin.FrontID;
                SESSION_ID = pRspUserLogin.SessionID;
                int iNextOrderRef = 0;
                if (!string.IsNullOrEmpty(pRspUserLogin.MaxOrderRef))
                    iNextOrderRef = Convert.ToInt32(pRspUserLogin.MaxOrderRef);
                iNextOrderRef++;
                ORDER_REF = Convert.ToString(iNextOrderRef);
                //获取当前交易日
                Console.WriteLine("--->>> 获取当前交易日 = " + api.GetTradingDay());

                //请求查询结算信息确认
                ReqQrySettlementInfoConfirm();
            }
        }

        /// <summary>
        /// 请求查询结算信息确认
        /// </summary>
        void ReqQrySettlementInfoConfirm()
        {
            ThostFtdcQrySettlementInfoConfirmField req = new ThostFtdcQrySettlementInfoConfirmField();
            req.BrokerID = BROKER_ID;
            req.InvestorID = INVESTOR_ID;
            int iResult = api.ReqQrySettlementInfoConfirm(req, ++iRequestID);
            Console.WriteLine("--->>> 用户查询结算信息确认: " + ((iResult == 0) ? "成功" : "失败"));
        }
        /// <summary>
        /// 查询结算信息确认应答
        /// </summary>
        /// <param name="pSettlementInfoConfirm"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQrySettlementInfoConfirm(ThostFtdcSettlementInfoConfirmField pSettlementInfoConfirm, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //请求查询投资者结算结果
                ReqQrySettlementInfo();
            }
        }

        /// <summary>
        /// 请求查询投资者结算结果
        /// </summary>
        void ReqQrySettlementInfo()
        {
            ThostFtdcQrySettlementInfoField req = new ThostFtdcQrySettlementInfoField();
            req.BrokerID = BROKER_ID;
            req.InvestorID = INVESTOR_ID;
            int iResult = api.ReqQrySettlementInfo(req, ++iRequestID);
            Console.WriteLine("--->>> 用户查询结算信息: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 查询投资者结算结果应答
        /// </summary>
        /// <param name="pSettlementInfo"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQrySettlementInfo(ThostFtdcSettlementInfoField pSettlementInfo, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //用户口令变更确认
                ReqUserPasswordUpdate();
            }
        }

        /// <summary>
        /// 用户口令变更请求
        /// </summary>
        void ReqUserPasswordUpdate()
        {
            ThostFtdcUserPasswordUpdateField req = new ThostFtdcUserPasswordUpdateField();
            req.BrokerID = BROKER_ID;
            req.OldPassword = PASSWORD;
            req.NewPassword = PASSWORD;
            req.UserID = INVESTOR_ID;
            int iResult = api.ReqUserPasswordUpdate(req, ++iRequestID);
            Console.WriteLine("--->>> 用户口令变更确认: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 用户口令变更请求答复
        /// </summary>
        /// <param name="pUserPasswordUpdate"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspUserPasswordUpdate(ThostFtdcUserPasswordUpdateField pUserPasswordUpdate, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                // 保存会话参数
                BROKER_ID = pUserPasswordUpdate.BrokerID;
                PASSWORD = pUserPasswordUpdate.NewPassword;
                INVESTOR_ID = pUserPasswordUpdate.UserID;

                //资金账户口令更新
                ReqTradingAccountPasswordUpdate();
            }
        }

        /// <summary>
        /// 资金账户口令更新请求
        /// </summary>
        void ReqTradingAccountPasswordUpdate()
        {
            ThostFtdcTradingAccountPasswordUpdateField req = new ThostFtdcTradingAccountPasswordUpdateField();
            req.AccountID = INVESTOR_ID;
            req.BrokerID = BROKER_ID;
            req.NewPassword = PASSWORD;
            req.OldPassword = PASSWORD;

            int iResult = api.ReqTradingAccountPasswordUpdate(req, ++iRequestID);
            Console.WriteLine("--->>> 资金账户口令更新请求请求: " + ((iResult == 0) ? "成功" : "失败"));

        }

        /// <summary>
        /// 资金账户口令更新请求应答
        /// </summary>
        /// <param name="pTradingAccountPasswordUpdate"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspTradingAccountPasswordUpdate(ThostFtdcTradingAccountPasswordUpdateField pTradingAccountPasswordUpdate, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                // 保存会话参数
                BROKER_ID = pTradingAccountPasswordUpdate.BrokerID;
                PASSWORD = pTradingAccountPasswordUpdate.NewPassword;
                INVESTOR_ID = pTradingAccountPasswordUpdate.AccountID;

                // 请求查询经纪公司交易参数
                ReqQryBrokerTradingParams();
            }
        }

        /// <summary>
        /// 请求查询经纪公司交易参数
        /// </summary>
        void ReqQryBrokerTradingParams()
        {
            ThostFtdcQryBrokerTradingParamsField req = new ThostFtdcQryBrokerTradingParamsField();
            req.BrokerID = BROKER_ID;
            req.InvestorID = INVESTOR_ID;

            int iResult = api.ReqQryBrokerTradingParams(req, ++iRequestID);
            Console.WriteLine("--->>> 查询经纪公司交易参数请求: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 查询经纪公司交易参数应答
        /// </summary>
        /// <param name="pBrokerTradingParams"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQryBrokerTradingParams(ThostFtdcBrokerTradingParamsField pBrokerTradingParams, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //请求查询经纪公司交易算法
                ReqQryBrokerTradingAlgos();
            }
        }

        /// <summary>
        /// 请求查询经纪公司交易算法
        /// </summary>
        void ReqQryBrokerTradingAlgos()
        {
            ThostFtdcQryBrokerTradingAlgosField req = new ThostFtdcQryBrokerTradingAlgosField();
            req.BrokerID = BROKER_ID;

            int iResult = api.ReqQryBrokerTradingAlgos(req, ++iRequestID);
            Console.WriteLine("--->>> 查询经纪公司交易算法请求: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 查询经纪公司交易算法应答
        /// </summary>
        /// <param name="pBrokerTradingAlgos"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQryBrokerTradingAlgos(ThostFtdcBrokerTradingAlgosField pBrokerTradingAlgos, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //请求查询合约
                ReqQryInstrument();
            }
        }

        /// <summary>
        /// 请求查询合约
        /// </summary>
        void ReqQryInstrument()
        {
            ThostFtdcQryInstrumentField req = new ThostFtdcQryInstrumentField();
            req.InstrumentID = INSTRUMENT_ID;
            int iResult = api.ReqQryInstrument(req, ++iRequestID);
            Console.WriteLine("--->>> 请求查询合约: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 请求查询合约响应
        /// </summary>
        /// <param name="pInstrument"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQryInstrument(ThostFtdcInstrumentField pInstrument, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            Console.WriteLine("密钥生成日期:{0},交割月:{1},交割年份:{2},结束交割日:{3},交易所代码:{4}",
                pInstrument.CreateDate,
                pInstrument.DeliveryMonth,
                pInstrument.DeliveryYear,
                pInstrument.EndDelivDate,
                pInstrument.ExchangeID);

            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //请求查询资金账户
                ReqQryTradingAccount();
            }
        }

        /// <summary>
        /// 请求查询资金账户
        /// </summary>
        void ReqQryTradingAccount()
        {
            ThostFtdcQryTradingAccountField req = new ThostFtdcQryTradingAccountField();
            req.BrokerID = BROKER_ID;
            req.InvestorID = INVESTOR_ID;
            int iResult = api.ReqQryTradingAccount(req, ++iRequestID);
            Console.WriteLine("--->>> 请求查询资金账户: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 查询资金账户应答
        /// </summary>
        /// <param name="pTradingAccount"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQryTradingAccount(ThostFtdcTradingAccountField pTradingAccount, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());

            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //请求查询交易编码
                ReqQryTradingCode();

            }
        }

        /// <summary>
        /// 请求查询交易编码
        /// </summary>
        void ReqQryTradingCode()
        {
            ThostFtdcQryTradingCodeField req = new ThostFtdcQryTradingCodeField();
            req.BrokerID = BROKER_ID;
            req.InvestorID = INVESTOR_ID;
            int iResult = api.ReqQryTradingCode(req, ++iRequestID);
            Console.WriteLine("--->>> 请求查询交易编码: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 查询交易编码应答
        /// </summary>
        /// <param name="pTradingCode"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQryTradingCode(ThostFtdcTradingCodeField pTradingCode, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());

            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //请求查询开盘前持仓
                ReqQueryInvestorOpenPosition();
            }
        }
        /// <summary>
        /// 请求查询开盘前持仓
        /// </summary>
        void ReqQueryInvestorOpenPosition()
        {
            ThostFtdcQryInvestorPositionDetailField req = new ThostFtdcQryInvestorPositionDetailField();
            req.BrokerID = BROKER_ID;
            req.InvestorID = INVESTOR_ID;
            int iResult = api.ReqQueryInvestorOpenPosition(req, ++iRequestID);
            Console.WriteLine("--->>> 请求查询开盘前持仓: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 开盘持仓应答
        /// </summary>
        /// <param name="pInvestorPositionDetail"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQryInvestorOpenPosition(ThostFtdcInvestorPositionDetailField pInvestorPositionDetail, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());

            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //请求查询投资者持仓       
                ReqQryInvestorPosition();
            }
        }

        /// <summary>
        /// 查询开盘前的组合持仓明细
        /// </summary>
        void ReqQueryInvestorOpenCombinePosition()
        {
            ThostFtdcQryInvestorPositionCombineDetailField req = new ThostFtdcQryInvestorPositionCombineDetailField();
            req.BrokerID = BROKER_ID;
            req.InvestorID = INVESTOR_ID;
            int iResult = api.ReqQueryInvestorOpenCombinePosition(req, ++iRequestID);
            Console.WriteLine("--->>> 请求查询开盘前组合持仓: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 开盘前的组合持仓明细应答
        /// </summary>
        /// <param name="pInvestorPositionCombineDetail"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQryInvestorOpenCombinePosition(ThostFtdcInvestorPositionCombineDetailField pInvestorPositionCombineDetail, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());

            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //请求查询投资者持仓       
                ReqQryInvestorPosition();
            }
        }

        /// <summary>
        /// 请求查询投资者持仓
        /// </summary>
        void ReqQryInvestorPosition()
        {
            ThostFtdcQryInvestorPositionField req = new ThostFtdcQryInvestorPositionField();
            req.BrokerID = BROKER_ID;
            req.InvestorID = INVESTOR_ID;
            req.InstrumentID = INSTRUMENT_ID;
            int iResult = api.ReqQryInvestorPosition(req, ++iRequestID);
            Console.WriteLine("--->>> 请求查询投资者持仓: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 查询投资者持仓应答
        /// </summary>
        /// <param name="pInvestorPosition"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQryInvestorPosition(ThostFtdcInvestorPositionField pInvestorPosition, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //报单查询请求
                ReqQryOrder();
            }
        }

        /// <summary>
        /// 报单查询请求
        /// </summary>
        void ReqQryOrder()
        {
            ThostFtdcQryOrderField req = new ThostFtdcQryOrderField();
            //经纪公司代码
            req.BrokerID = BROKER_ID;
            //交易所代码
            req.ExchangeID = INVESTOR_ID;
            //合约代码
            req.InstrumentID = INSTRUMENT_ID;
            //投资者代码
            req.InvestorID = INVESTOR_ID;

            int iResult = api.ReqQryOrder(req, ++iRequestID);
            Console.WriteLine("--->>> 报单查询请求: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 报单查询应答
        /// </summary>
        /// <param name="pOrder"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQryOrder(ThostFtdcOrderField pOrder, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {

                //交易查询请求
                ReqQryTrade();
            }
        }

        /// <summary>
        /// 交易查询请求
        /// </summary>
        void ReqQryTrade()
        {
            ThostFtdcQryTradeField req = new ThostFtdcQryTradeField();
            //经纪公司代码
            req.BrokerID = BROKER_ID;
            //交易所代码
            req.ExchangeID = INVESTOR_ID;
            //合约代码
            req.InstrumentID = INSTRUMENT_ID;
            //投资者代码
            req.InvestorID = INVESTOR_ID;
             //成交编号
            //	TradeID;

            int iResult = api.ReqQryTrade(req, ++iRequestID);
            Console.WriteLine("--->>> 交易查询请求: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 交易查询应答
        /// </summary>
        /// <param name="pTrade"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQryTrade(ThostFtdcTradeField pTrade, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //请求查询投资者
                ReqQryInvestor();
            }
        }

        /// <summary>
        /// 请求查询投资者
        /// </summary>
        void ReqQryInvestor()
        {
            ThostFtdcQryInvestorField req = new ThostFtdcQryInvestorField();
            req.BrokerID = BROKER_ID;
            req.InvestorID = INVESTOR_ID;

            int iResult = api.ReqQryInvestor(req, ++iRequestID);
            Console.WriteLine("--->>> 请求查询投资者: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 查询投资者应答
        /// </summary>
        /// <param name="pInvestor"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQryInvestor(ThostFtdcInvestorField pInvestor, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //请求查询合约手续费率
                ReqQryInstrumentCommissionRate();
            }
        }

        /// <summary>
        /// 请求查询合约手续费率
        /// </summary>
        void ReqQryInstrumentCommissionRate()
        {
            ThostFtdcQryInstrumentCommissionRateField req = new ThostFtdcQryInstrumentCommissionRateField();
            req.BrokerID = BROKER_ID;
            req.InstrumentID = INSTRUMENT_ID;
            req.InvestorID = INVESTOR_ID;

            int iResult = api.ReqQryInstrumentCommissionRate(req, ++iRequestID);
            Console.WriteLine("--->>> 请求查询合约手续费率: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 查询合约手续费率应答
        /// </summary>
        /// <param name="pInstrumentCommissionRate"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQryInstrumentCommissionRate(ThostFtdcInstrumentCommissionRateField pInstrumentCommissionRate, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //请求查询交易所
                ReqQryExchange();
            }
        }

        /// <summary>
        /// 请求查询交易所
        /// </summary>
        void ReqQryExchange()
        {
            ThostFtdcQryExchangeField req = new ThostFtdcQryExchangeField();
            //交易所代码
            req.ExchangeID = INVESTOR_ID;

            int iResult = api.ReqQryExchange(req, ++iRequestID);
            Console.WriteLine("--->>> 请求查询交易所: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 查询交易所应答
        /// </summary>
        /// <param name="pExchange"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQryExchange(ThostFtdcExchangeField pExchange, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());

            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //请求查询行情
                ReqQryDepthMarketData();
            }
        }

        /// <summary>
        /// 请求查询行情
        /// </summary>
        void ReqQryDepthMarketData()
        {
            ThostFtdcQryDepthMarketDataField req = new ThostFtdcQryDepthMarketDataField();
            req.InstrumentID = INSTRUMENT_ID;

            int iResult = api.ReqQryDepthMarketData(req, ++iRequestID);
            Console.WriteLine("--->>> 请求查询行情: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 查询行情应答
        /// </summary>
        /// <param name="pDepthMarketData"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQryDepthMarketData(ThostFtdcDepthMarketDataField pDepthMarketData, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //请求查询客户通知
                ReqQryNotice();
            }
        }

        /// <summary>
        /// 请求查询客户通知
        /// </summary>
        void ReqQryNotice()
        {
            ThostFtdcQryNoticeField req = new ThostFtdcQryNoticeField();
            req.BrokerID = BROKER_ID;

            int iResult = api.ReqQryNotice(req, ++iRequestID);
            Console.WriteLine("--->>> 请求查询客户通知: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 查询客户通知应答
        /// </summary>
        /// <param name="pNotice"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQryNotice(ThostFtdcNoticeField pNotice, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //请求查询投资者持仓明细
                ReqQryInvestorPositionCombineDetail();
            }
        }

        /// <summary>
        /// 请求查询投资者持仓明细
        /// </summary>
        void ReqQryInvestorPositionCombineDetail()
        {
            ThostFtdcQryInvestorPositionCombineDetailField req = new ThostFtdcQryInvestorPositionCombineDetailField();
            req.BrokerID = BROKER_ID;
            req.InvestorID = INVESTOR_ID;

            int iResult = api.ReqQryInvestorPositionCombineDetail(req, ++iRequestID);
            Console.WriteLine("--->>> 请求查询投资者组合持仓明细: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 查询投资者持仓明细应答
        /// </summary>
        /// <param name="pInvestorPositionCombineDetail"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQryInvestorPositionCombineDetail(ThostFtdcInvestorPositionCombineDetailField pInvestorPositionCombineDetail, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //查询最大报单数量请求
                ReqQueryMaxOrderVolume();
            }
            else
            {
               //查询最大报单数量请求
                ReqQueryMaxOrderVolume();
            }
        }

        /// <summary>
        /// 查询最大报单数量请求
        /// </summary>
        void ReqQueryMaxOrderVolume()
        {
            ThostFtdcQueryMaxOrderVolumeField req = new ThostFtdcQueryMaxOrderVolumeField();
            req.BrokerID = BROKER_ID;
            req.InvestorID = INVESTOR_ID;
            req.InstrumentID = INSTRUMENT_ID;
            req.Direction = EnumDirectionType.Buy;
            req.HedgeFlag = EnumHedgeFlagType.Speculation;
            int iResult = api.ReqQueryMaxOrderVolume(req, ++iRequestID);
            Console.WriteLine("--->>> 查询最大报单数量请求: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 查询最大报单数量应答
        /// </summary>
        /// <param name="pQueryMaxOrderVolume"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQueryMaxOrderVolume(ThostFtdcQueryMaxOrderVolumeField pQueryMaxOrderVolume, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //请求查询仓单折抵信息
                ReqQryEWarrantOffset();
            }
        }

        /// <summary>
        /// 请求查询仓单折抵信息
        /// </summary>
        void ReqQryEWarrantOffset()
        {
            ThostFtdcQryEWarrantOffsetField req = new ThostFtdcQryEWarrantOffsetField();
            req.BrokerID = BROKER_ID;
            req.InvestorID = INVESTOR_ID;

            int iResult = api.ReqQryEWarrantOffset(req, ++iRequestID);
            Console.WriteLine("--->>> 查询仓单折抵信息请求: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 查询仓单折抵信息应答
        /// </summary>
        /// <param name="pEWarrantOffset"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQryEWarrantOffset(ThostFtdcEWarrantOffsetField pEWarrantOffset, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //请求查询保证金监管系统经纪公司资金账户密钥
                ReqQryCFMMCTradingAccountKey();
            }
        }

        /// <summary>
        /// 请求查询保证金监管系统经纪公司资金账户密钥
        /// </summary>
        void ReqQryCFMMCTradingAccountKey()
        {
            ThostFtdcQryCFMMCTradingAccountKeyField req = new ThostFtdcQryCFMMCTradingAccountKeyField();
            req.BrokerID = BROKER_ID;
            req.InvestorID = INVESTOR_ID;

            int iResult = api.ReqQryCFMMCTradingAccountKey(req, ++iRequestID);
            Console.WriteLine("--->>> 请求查询保证金监管系统经纪公司资金账户密钥: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 查询保证金监管系统经纪公司资金账户密钥应答
        /// </summary>
        /// <param name="pCFMMCTradingAccountKey"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQryCFMMCTradingAccountKey(ThostFtdcCFMMCTradingAccountKeyField pCFMMCTradingAccountKey, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //请求查询转帐流水
                ReqQryTransferSerial();
            }
            else
            {
                //请求查询转帐流水
                ReqQryTransferSerial();
            }
        }

        /// <summary>
        /// 请求查询转帐流水
        /// </summary>
        void ReqQryTransferSerial()
        {
            ThostFtdcQryTransferSerialField req = new ThostFtdcQryTransferSerialField();
            req.AccountID = INVESTOR_ID;
            req.BrokerID = BROKER_ID;
            // 银行代码
            req.BankID = "5";

            int iResult = api.ReqQryTransferSerial(req, ++iRequestID);
            Console.WriteLine("--->>> 请求查询转账流水：" + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 查询转帐流水应答
        /// </summary>
        /// <param name="pTransferSerial"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQryTransferSerial(ThostFtdcTransferSerialField pTransferSerial, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //请求查询交易通知
                ReqQryTradingNotice();
            }
        }

        /// <summary>
        /// 请求查询交易通知
        /// </summary>
        void ReqQryTradingNotice()
        {
            ThostFtdcQryTradingNoticeField req = new ThostFtdcQryTradingNoticeField();
            req.BrokerID = BROKER_ID;
            req.InvestorID = INVESTOR_ID;

            int iResult = api.ReqQryTradingNotice(req, ++iRequestID);
            Console.WriteLine("--->>> 请求查询交易通知：" + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 查询交易通知应答
        /// </summary>
        /// <param name="pTradingNotice"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQryTradingNotice(ThostFtdcTradingNoticeField pTradingNotice, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //投资者结算结果确认
                ReqSettlementInfoConfirm();
            }
        }

        /// <summary>
        /// 投资者结算结果确认
        /// </summary>
        void ReqSettlementInfoConfirm()
        {
            ThostFtdcSettlementInfoConfirmField req = new ThostFtdcSettlementInfoConfirmField();
            req.BrokerID = BROKER_ID;
            req.InvestorID = INVESTOR_ID;

            int iResult = api.ReqSettlementInfoConfirm(req, ++iRequestID);
            Console.WriteLine("--->>> 投资者结算结果确认：" + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 投资者结算结果应答
        /// </summary>
        /// <param name="pSettlementInfoConfirm"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspSettlementInfoConfirm(ThostFtdcSettlementInfoConfirmField pSettlementInfoConfirm, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //请求查询银期签约关系
                ReqQryAccountregister();
            }
        }

        /// <summary>
        /// 请求查询银期签约关系
        /// </summary>
        void ReqQryAccountregister()
        {
            ThostFtdcQryAccountregisterField req = new ThostFtdcQryAccountregisterField();
            req.BrokerID = BROKER_ID;

            int iResult = api.ReqQryAccountregister(req, ++iRequestID);
            Console.WriteLine("--->>> 查询银期签约关系：" + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 查询银期签约关系应答
        /// </summary>
        /// <param name="pAccountregister"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQryAccountregister(ThostFtdcAccountregisterField pAccountregister, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //请求查询签约银行
                ReqQryContractBank();
            }
        }

        /// <summary>
        /// 请求查询签约银行
        /// </summary>
        void ReqQryContractBank()
        {
            ThostFtdcQryContractBankField req = new ThostFtdcQryContractBankField();
            req.BrokerID = BROKER_ID;

            int iResult = api.ReqQryContractBank(req, ++iRequestID);
            Console.WriteLine("--->>> 查询银期签约银行：" + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 查询签约银行应答
        /// </summary>
        /// <param name="pContractBank"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQryContractBank(ThostFtdcContractBankField pContractBank, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //期货发起银行资金转期货请求
                ReqFromBankToFutureByFuture();
            }
        }

        /// <summary>
        /// 期货发起银行资金转期货请求
        /// </summary>
        void ReqFromBankToFutureByFuture()
        {
            ThostFtdcReqTransferField req = new ThostFtdcReqTransferField();
            req.AccountID = INVESTOR_ID;
            //银行帐号
            req.BankAccount = "800026";
            //银行帐号类型
            req.BankAccType = KSFT.EnumBankAccTypeType.SavingCard;
            //银行代码
            req.BankID = "5";
            //银行密码
            req.BankPassWord = "123456";
            req.Password = "123456";
            //期商代码
            req.BrokerID = BROKER_ID;
            //客户类型
            req.CustType = KSFT.EnumCustTypeType.Person;
            //证件类型
            req.IdCardType = KSFT.EnumIdCardTypeType.EID;
            //最后分片标志
            req.LastFragment = KSFT.EnumLastFragmentType.No;
            //请求编号
            req.RequestID = iRequestID;
            //期货资金密码核对标志
            req.SecuPwdFlag = KSFT.EnumPwdFlagType.EncryptCheck;
            //会话号
            req.SessionID = SESSION_ID;
            //转帐金额
            req.TradeAmount = 200;
            //业务功能码
            req.TradeCode = "202001";
            //转账交易状态
            req.TransferStatus = KSFT.EnumTransferStatusType.Normal;
            //验证客户证件号码标志
            req.VerifyCertNoFlag = KSFT.EnumYesNoIndicatorType.No;

            int iResult = api.ReqFromBankToFutureByFuture(req, ++iRequestID);
            Console.WriteLine("--->>> 期货发起银行资金转期货请求：" + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 期货发起银行资金转期货应答
        /// </summary>
        /// <param name="pReqTransfer"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspFromBankToFutureByFuture(ThostFtdcReqTransferField pReqTransfer, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //期货发起期货资金转银行请求
                ReqFromFutureToBankByFuture();
            }
        }

        /// <summary>
        /// 期货发起期货资金转银行请求
        /// </summary>
        void ReqFromFutureToBankByFuture()
        {
            ThostFtdcReqTransferField req = new ThostFtdcReqTransferField();
            req.AccountID = INVESTOR_ID;
            req.BankAccType = KSFT.EnumBankAccTypeType.SavingCard;
            req.BankID = "5";
            req.Password = "123456";
            req.BankPassWord = PASSWORD;
            req.BankPwdFlag = KSFT.EnumPwdFlagType.BlankCheck;
            req.BankSecuAccType = KSFT.EnumBankAccTypeType.SavingCard;
            req.BrokerBranchID = BROKER_ID;
            req.BrokerID = BROKER_ID;
            req.BrokerIDByBank = BROKER_ID;
            req.CustomerName = INVESTOR_ID;
            req.CustType = KSFT.EnumCustTypeType.Institution;
            req.FeePayFlag = KSFT.EnumFeePayFlagType.SHA;
            req.IdCardType = KSFT.EnumIdCardTypeType.EID;
            req.LastFragment = KSFT.EnumLastFragmentType.No;
            req.OperNo = BROKER_ID;
            req.Password = PASSWORD;
            req.RequestID = iRequestID;
            req.SecuPwdFlag = KSFT.EnumPwdFlagType.BlankCheck;
            req.SessionID = SESSION_ID;
            req.TradeAmount = 200;
            req.TradeCode = "202002";
            req.TransferStatus = KSFT.EnumTransferStatusType.Normal;
            req.UserID = INVESTOR_ID;
            req.VerifyCertNoFlag = KSFT.EnumYesNoIndicatorType.No;

            int iResult = api.ReqFromFutureToBankByFuture(req, ++iRequestID);
            Console.WriteLine("--->>> 期货发起期货资金转银行请求：" + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 期货发起期货资金转银行应答
        /// </summary>
        /// <param name="pReqTransfer"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspFromFutureToBankByFuture(ThostFtdcReqTransferField pReqTransfer, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //期货发起查询银行余额请求
                ReqQueryBankAccountMoneyByFuture();
            }
        }

        /// <summary>
        /// 期货发起查询银行余额请求
        /// </summary>
        void ReqQueryBankAccountMoneyByFuture()
        {
            ThostFtdcReqQueryAccountField req = new ThostFtdcReqQueryAccountField();
            req.AccountID = INVESTOR_ID;
            req.BankAccType = KSFT.EnumBankAccTypeType.SavingCard;
            req.BankID = "5";
            req.Password = "123456";
            req.BankPassWord = "123456";
            req.BankPwdFlag = KSFT.EnumPwdFlagType.BlankCheck;
            req.BankSecuAccType = KSFT.EnumBankAccTypeType.SavingCard;
            req.BrokerBranchID = BROKER_ID;
            req.BrokerID = BROKER_ID;
            req.BrokerIDByBank = BROKER_ID;
            req.CustType = KSFT.EnumCustTypeType.Institution;
            req.IdCardType = KSFT.EnumIdCardTypeType.EID;
            req.LastFragment = KSFT.EnumLastFragmentType.No;
            req.OperNo = BROKER_ID;
            req.Password = PASSWORD;
            req.RequestID = iRequestID;
            req.SecuPwdFlag = KSFT.EnumPwdFlagType.BlankCheck;
            req.SessionID = SESSION_ID;
            req.TradeCode = "204002";
            req.UserID = BROKER_ID;
            req.VerifyCertNoFlag = KSFT.EnumYesNoIndicatorType.No;

            int iResult = api.ReqQueryBankAccountMoneyByFuture(req, ++iRequestID);
            Console.WriteLine("--->>> 期货发起查询银行余额请求：" + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 期货发起查询银行余额应答
        /// </summary>
        /// <param name="pReqQueryAccount"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQueryBankAccountMoneyByFuture(ThostFtdcReqQueryAccountField pReqQueryAccount, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //保单录入请求
                ReqOrderInsert();
            }
        }

        /// <summary>
        /// 保单录入请求
        /// </summary>
        void ReqOrderInsert()
        {
            ThostFtdcInputOrderField req = new ThostFtdcInputOrderField();
            //经纪公司代码
            req.BrokerID = BROKER_ID;
            //投资者代码
            req.InvestorID = INVESTOR_ID;
            //合约代码
            req.InstrumentID = INSTRUMENT_ID;
            //报单引用
            req.OrderRef = ORDER_REF;
            //报单价格条件: 限价
            req.OrderPriceType = KSFT.EnumOrderPriceTypeType.LimitPrice;
            //买卖方向: 
            req.Direction = DIRECTION;
            //组合开平标志: 开仓
            req.CombOffsetFlag_0 = KSFT.EnumOffsetFlagType.Open;
            //组合投机套保标志
            req.CombHedgeFlag_0 = KSFT.EnumHedgeFlagType.Speculation;
            //价格
            req.LimitPrice = LIMIT_PRICE;
            //数量: 1
            req.VolumeTotalOriginal = 1;
            //有效期类型: 当日有效
            req.TimeCondition = KSFT.EnumTimeConditionType.GFD;
            //成交量类型: 任何数量
            req.VolumeCondition = KSFT.EnumVolumeConditionType.AV;
           //最小成交量: 1
            req.MinVolume = 1;
            //触发条件: 立即
            req.ContingentCondition = KSFT.EnumContingentConditionType.Immediately;
            //强平原因: 非强平
            req.ForceCloseReason = KSFT.EnumForceCloseReasonType.NotForceClose;
            //自动挂起标志: 否
            req.IsAutoSuspend = 0;
            //请求编号
            req.RequestID = iRequestID;
            //用户强评标志: 否
            req.UserForceClose = 0;

            int iResult = api.ReqOrderInsert(req, ++iRequestID);
            Console.WriteLine("--->>> 报单录入请求: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 保单录入应答
        /// </summary>
        /// <param name="pInputOrder"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspOrderInsert(ThostFtdcInputOrderField pInputOrder, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());

            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //合约保证金率查询请求
                ReqQryInstrumentMarginRate();
            }

        }

        /// <summary>
        /// 合约保证金率查询请求
        /// </summary>
        void ReqQryInstrumentMarginRate()
        {
            ThostFtdcQryInstrumentMarginRateField req = new ThostFtdcQryInstrumentMarginRateField();
            req.BrokerID = BROKER_ID;
            req.InstrumentID = INSTRUMENT_ID;
            req.InvestorID = INVESTOR_ID;
            req.HedgeFlag = EnumHedgeFlagType.Hedge;

            int iResult = api.ReqQryInstrumentMarginRate(req, ++iRequestID);
            Console.WriteLine("--->>> 合约保证金率查询请求: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 合约保证金率查询应答
        /// </summary>
        /// <param name="pInstrumentMarginRate"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQryInstrumentMarginRate(ThostFtdcInstrumentMarginRateField pInstrumentMarginRate, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //请求查询投资者持仓明细
                ReqQryInvestorPositionDetail();
            }
        }

        /// <summary>
        /// 请求查询投资者持仓明细
        /// </summary>
        void ReqQryInvestorPositionDetail()
        {
            ThostFtdcQryInvestorPositionDetailField req = new ThostFtdcQryInvestorPositionDetailField();
            req.BrokerID = BROKER_ID;
            req.InstrumentID = INSTRUMENT_ID;
            req.InvestorID = INVESTOR_ID;

            int iResult = api.ReqQryInvestorPositionDetail(req, ++iRequestID);
            Console.WriteLine("--->>> 请求查询投资者持仓明细: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 查询投资者持仓明细应答
        /// </summary>
        /// <param name="pInvestorPositionDetail"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQryInvestorPositionDetail(ThostFtdcInvestorPositionDetailField pInvestorPositionDetail, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //批量撤单
                ReqBulkCancelOrder();
            }
        }

        /// <summary>
        /// 批量撤单请求
        /// </summary>
        void ReqBulkCancelOrder()
        {
            ThostFtdcBulkCancelOrderField req = new ThostFtdcBulkCancelOrderField();
            req.BrokerID = BROKER_ID;
            req.InvestorID = INVESTOR_ID;
            req.OrderType = EnumOrderTypeType.Normal;
            req.nCount = 2;
            req.OrderKey_0 = new ThostOrderKeyField();
            req.OrderKey_0.ExchangeID = "CZCE";
            req.OrderKey_0.FrontID = 126187484;
            req.OrderKey_0.SessionID = 5463;
            req.OrderKey_0.OrderRef = "16385";
            req.OrderKey_1 = new ThostOrderKeyField();
            req.OrderKey_1.ExchangeID = "CZCE";
            req.OrderKey_1.FrontID = 126187484;
            req.OrderKey_1.SessionID = 5463;
            req.OrderKey_1.OrderRef = "32769";
            int iResult = api.ReqBulkCancelOrder(req, ++iRequestID);
            Console.WriteLine("--->>> 批量撤单: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 批量撤单应答
        /// </summary>
        /// <param name="pBulkCancelOrder"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspBulkCancelOrder(ThostFtdcBulkCancelOrderField pBulkCancelOrder, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //录出客户
                ReqUserLogout();
            }
        }

        /// <summary>
        /// 录出客户请求
        /// </summary>
        void ReqUserLogout()
        {
            ThostFtdcUserLogoutField req = new ThostFtdcUserLogoutField();
            req.BrokerID = BROKER_ID;
            req.UserID = INVESTOR_ID;

            int iResult = api.ReqUserLogout(req, ++iRequestID);
            Console.WriteLine("--->>> 登出请求：" + ((iResult == 0) ? "成功" : "失败"));

        }

        /// <summary>
        /// 录出客户应答
        /// </summary>
        /// <param name="pUserLogout"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspUserLogout(ThostFtdcUserLogoutField pUserLogout, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            //if (bIsLast && !IsErrorRspInfo(pRspInfo))
            //{
            //    //登入请求
            //    ReqUserLogin();
            //}

            IsErrorRspInfo(pRspInfo);
        }

        /// <summary>
        /// 报单操作请求
        /// </summary>
        /// <param name="pOrder"></param>
        void ReqOrderAction(ThostFtdcOrderField pOrder)
        {

            if (ORDER_ACTION_SENT)
                return;

            ThostFtdcInputOrderActionField req = new ThostFtdcInputOrderActionField();
            //经纪公司代码
            req.BrokerID = pOrder.BrokerID;
            //投资者代码
            req.InvestorID = pOrder.InvestorID;
            //报单引用
            req.OrderRef = pOrder.OrderRef;
            //请求编号
           req.RequestID = 5;
            //前置编号
            req.FrontID = FRONT_ID;
            //会话编号
            req.SessionID = SESSION_ID;
            //交易所代码
            req.ExchangeID = INVESTOR_ID;
            //报单编号
            //	TThostFtdcOrderSysIDType	OrderSysID;
            //操作标志
            req.ActionFlag = KSFT.EnumActionFlagType.Delete;
            //用户代码
            req.UserID = INVESTOR_ID;
            //合约代码
            req.InstrumentID = pOrder.InstrumentID;

            int iResult = api.ReqOrderAction(req, ++iRequestID);
            Console.WriteLine("--->>> 报单操作请求: " + ((iResult == 0) ? "成功" : "失败"));

            ORDER_ACTION_SENT = true;
        }

        /// <summary>
        /// 报单操作应答
        /// </summary>
        /// <param name="pInputOrderAction"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspOrderAction(ThostFtdcInputOrderActionField pInputOrderAction, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            IsErrorRspInfo(pRspInfo);
        }

        /// <summary>
        /// 报单通知
        /// </summary>
        /// <param name="pOrder"></param>
        void OnRtnOrder(ThostFtdcOrderField pOrder)
        {
            DebugPrintFunc(new StackTrace());
            if (IsMyOrder(pOrder))
            {
                if (IsTradingOrder(pOrder))
                    ReqOrderAction(pOrder);
                else if (pOrder.OrderStatus == EnumOrderStatusType.Canceled)
                    Console.WriteLine("--->>> 撤单成功");
            }
        }

        /// <summary>
        /// 成交通知
        /// </summary>
        /// <param name="pTrade"></param>
        void OnRtnTrade(ThostFtdcTradeField pTrade)
        {
            DebugPrintFunc(new StackTrace());
        }

        /// <summary>
        /// 前端断开连接
        /// </summary>
        /// <param name="nReason"></param>
        void OnFrontDisconnected(int nReason)
        {
            DebugPrintFunc(new StackTrace());
            Console.WriteLine("--->>> Reason = {0}", nReason);
        }

        /// <summary>
        /// 心跳超时警告
        /// </summary>
        /// <param name="nTimeLapse"></param>
        void OnHeartBeatWarning(int nTimeLapse)
        {
            DebugPrintFunc(new StackTrace());
            Console.WriteLine("--->>> nTimerLapse = " + nTimeLapse);
        }

        /// <summary>
        /// 错误应答
        /// </summary>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspError(ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
            IsErrorRspInfo(pRspInfo);
        }

        /// <summary>
        /// 保单录入错误回报
        /// </summary>
        /// <param name="pInputOrder"></param>
        /// <param name="pRspInfo"></param>
        void OnErrRtnOrderInsert(ThostFtdcInputOrderField pInputOrder, ThostFtdcRspInfoField pRspInfo)
        {
            DebugPrintFunc(new StackTrace());
            IsErrorRspInfo(pRspInfo);
        }

        /// <summary>
        /// 保单操作错误回报
        /// </summary>
        /// <param name="pOrderAction"></param>
        /// <param name="pRspInfo"></param>
        void OnErrRtnOrderAction(ThostFtdcOrderActionField pOrderAction, ThostFtdcRspInfoField pRspInfo)
        {
            DebugPrintFunc(new StackTrace());
            IsErrorRspInfo(pRspInfo);
        }

        /// <summary>
        /// 合约交易状态通知
        /// </summary>
        /// <param name="pInstrumentStatus"></param>
        void OnRtnInstrumentStatus(ThostFtdcInstrumentStatusField pInstrumentStatus)
        {
            DebugPrintFunc(new StackTrace());
        }

        /// <summary>
        /// 交易通知
        /// </summary>
        /// <param name="pTradingNoticeInfo"></param>
        void OnRtnTradingNotice(ThostFtdcTradingNoticeInfoField pTradingNoticeInfo)
        {
            DebugPrintFunc(new StackTrace());
        }

        /// <summary>
        /// 判断错误信息
        /// </summary>
        /// <param name="pRspInfo"></param>
        /// <returns></returns>
        bool IsErrorRspInfo(ThostFtdcRspInfoField pRspInfo)
        {
            // 如果ErrorID != 0, 说明收到了错误的响应
            bool bResult = ((pRspInfo != null) && (pRspInfo.ErrorID != 0));
            if (bResult)
                Console.WriteLine("--->>> ErrorID={0}, ErrorMsg={1}", pRspInfo.ErrorID, pRspInfo.ErrorMsg);
            return bResult;
        }

        /// <summary>
        /// 判断自己的订单
        /// </summary>
        /// <param name="pOrder"></param>
        /// <returns></returns>
        bool IsMyOrder(ThostFtdcOrderField pOrder)
        {
            return ((pOrder.FrontID == FRONT_ID) &&
                    (pOrder.SessionID == SESSION_ID) &&
                    (pOrder.OrderRef == ORDER_REF));
        }

        /// <summary>
        /// 判断交易订单
        /// </summary>
        /// <param name="pOrder"></param>
        /// <returns></returns>
        bool IsTradingOrder(ThostFtdcOrderField pOrder)
        {
            return ((pOrder.OrderStatus != EnumOrderStatusType.PartTradedNotQueueing) &&
                    (pOrder.OrderStatus != EnumOrderStatusType.Canceled) &&
                    (pOrder.OrderStatus != EnumOrderStatusType.AllTraded));
        }

        /// <summary>
        /// 输出
        /// </summary>
        /// <param name="stkTrace"></param>
        void DebugPrintFunc(StackTrace stkTrace)
        {
            string s = stkTrace.GetFrame(0).ToString();
            s = s.Split(new char[] { ' ' })[0];
            Debug.WriteLine("--->>> " + s);
            Console.WriteLine("--->>> " + s);
            //Console.ReadKey();

        }

    }
}
