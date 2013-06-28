/////////////////////////////////////////////////////////////////////////
// 金仕达 KSFT C++ => .Net Framework Adapter
// Summary: 条件单接口测试
// Author:	ksftapi@gmail.com
// Date: 20130315
// Update List：
// 20130319 修改
// 20130325 添加注释
/////////////////////////////////////////////////////////////////////////


using System;
using KSFT;
using System.Diagnostics;

namespace CSCosTest
{
    class Program
    {
        static void Main(string[] args)
        {
            new testCosApi().Run();
        }
    }

    class testCosApi
    {
        KSFTTraderAdapter api = null;
        KSFTCosAdapter cosApi = null;

        string FRONT_ADDR = "tcp://10.253.117.107:13163";  // 前置地址
        string BROKER_ID = "6A89B428";                    // 经纪公司代码
        string INVESTOR_ID = "80002";                    // 投资者代码
        string PASSWORD = "123456";                     // 用户密码
        string INSTRUMENT_ID = "IF1306";

        double LIMIT_PRICE = 3400;
        int iRequestID = 0;

        //// 会话参数
        int FRONT_ID;	//前置编号
        int SESSION_ID;	//会话编号
        string ORDER_REF;	//报单引用
        string COS_API = "COS_API";

        public void Run()
        {
            api = new KSFTTraderAdapter();
            cosApi = api.LoadExtApi(COS_API);

            api.OnFrontConnected += new FrontConnected(OnFrontConnected);
            api.OnRspUserLogin += new RspUserLogin(OnRspUserLogin);

            cosApi.OnRspInitInsertConditionalOrder += new RspInitInsertConditionalOrder(OnRspInitInsertConditionalOrder);
            cosApi.OnRspQueryConditionalOrder += new RspQueryConditionalOrder(OnRspQueryConditionalOrder);
            cosApi.OnRspInsertProfitAndLossOrder += new RspInsertProfitAndLossOrder(OnRspInsertProfitAndLossOrder);
            cosApi.OnRspModifyConditionalOrder += new RspModifyConditionalOrder(OnRspModifyConditionalOrder);
            cosApi.OnRspModifyProfitAndLossOrder += new RspModifyProfitAndLossOrder(OnRspModifyProfitAndLossOrder);
            cosApi.OnRspPauseConditionalOrder += new RspPauseConditionalOrder(OnRspPauseConditionalOrder);
            cosApi.OnRspQueryProfitAndLossOrder += new RspQueryProfitAndLossOrder(OnRspQueryProfitAndLossOrder);
            cosApi.OnRspRemoveConditionalOrder += new RspRemoveConditionalOrder(OnRspRemoveConditionalOrder);
            cosApi.OnRspRemoveProfitAndLossOrder += new RspRemoveProfitAndLossOrder(OnRspRemoveProfitAndLossOrder);
            cosApi.OnRspSelectConditionalOrder += new RspSelectConditionalOrder(OnRspSelectConditionalOrder);
            cosApi.OnRtnCOSAskSelect += new RtnCOSAskSelect(OnRtnCOSAskSelect);
            cosApi.OnRtnCOSStatus += new RtnCOSStatus(OnRtnCOSStatus);
            cosApi.OnRtnPLStatus += new RtnPLStatus(OnRtnPLStatus);


            api.SubscribePublicTopic(EnumTeResumeType.THOST_TERT_QUICK);					// 注册公有流
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

            //用户登录请求
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
        /// 用户登录请求应答
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

                //初始录入条件单请求
                ReqInitInsertConditionalOrder();
            }
        }

        /// <summary>
        /// 初始录入条件单请求
        /// </summary>
        void ReqInitInsertConditionalOrder()
        {
            TKSConditionalOrderInitInsert req = new TKSConditionalOrderInitInsert();

            req.BrokerID = BROKER_ID;
            req.ClientID = INVESTOR_ID;
            req.CombHedgeFlag = KSFT.EnumHedgeFlagType.Arbitrage;
            req.CombOffsetFlag = KSFT.EnumOffsetFlagType.CloseToday;
            req.ConditionalOrderID = SESSION_ID;
            req.ConditionalOrderType = KSFT.EnumConditionalOrderType.OPEN;
            req.ConditionalType = KSFT.EnumConditionalTypeType.GreaterEqualTermPrice;
            req.Direction = KSFT.EnumDirectionType.Buy;
            req.ExchangeID = BROKER_ID;
            req.InstrumentID = INSTRUMENT_ID;
            req.InvestorID = INVESTOR_ID;
            req.LimitPrice = LIMIT_PRICE;
            req.OrderPriceType = KSFT.EnumKSOrderPriceTypeType.AskPrice;
          
            int iResult = cosApi.ReqInitInsertConditionalOrder(req, ++iRequestID);
            Console.WriteLine("--->>> 初始录入条件单请求: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 条件单录入响应
        /// </summary>
        /// <param name="pInitInsertConditionalOrder"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspInitInsertConditionalOrder(TKSConditionalOrderOperResultField pInitInsertConditionalOrder, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());

            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //查询条件单请求
                ReqQueryConditionalOrder();
            }
        }

        /// <summary>
        /// 查询条件单请求
        /// </summary>
        void ReqQueryConditionalOrder()
        {
            TKSConditionalOrderQuery req = new TKSConditionalOrderQuery();
            req.BrokerID = BROKER_ID;
            req.ConditionalOrderID = SESSION_ID;
            req.InvestorID = INVESTOR_ID;

            int iResult = cosApi.ReqQueryConditionalOrder(req, ++iRequestID);
            Console.WriteLine("--->>> 查询条件单请求: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 查询条件单响应
        /// </summary>
        /// <param name="pQueryConditionalOrder"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQueryConditionalOrder(TKSConditionalOrderOperResultField pQueryConditionalOrder, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());

            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //止损止盈单录入请求
                ReqInsertProfitAndLossOrder();
            }
        }

        /// <summary>
        /// 止损止盈单录入请求
        /// </summary>
        void ReqInsertProfitAndLossOrder()
        {
            TKSProfitAndLossOrderInsert req = new TKSProfitAndLossOrderInsert();
            req.BrokerID = BROKER_ID;
            req.CloseMode = KSFT.EnumCloseModeType.LastPrice;
            req.ExchangeID = BROKER_ID;
            req.InvestorID = INVESTOR_ID;
            req.OffsetValue = KSFT.EnumOffsetValueType.TermPrice;
            req.SpringType = KSFT.EnumSpringTypeType.LastPrice;

            int iResult = cosApi.ReqInsertProfitAndLossOrder(req, ++iRequestID);
            Console.WriteLine("--->>> 止损止盈单录入请求: " + ((iResult == 0) ? "成功" : "失败"));
        }
        /// <summary>
        /// 止损止盈单录入响应
        /// </summary>
        /// <param name="pInsertProfitAndLossOrder"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspInsertProfitAndLossOrder(TKSProfitAndLossOrderOperResultField pInsertProfitAndLossOrder, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());

            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //修改条件单请求
                ReqModifyConditionalOrder();
            }
        }

        /// <summary>
        /// 修改条件单请求
        /// </summary>
        void ReqModifyConditionalOrder()
        {
            TKSConditionalOrderModify req = new TKSConditionalOrderModify();
            req.BrokerID = BROKER_ID;
            req.ClientID = INVESTOR_ID;
            req.CombHedgeFlag = KSFT.EnumHedgeFlagType.Arbitrage;
            req.CombOffsetFlag = KSFT.EnumOffsetFlagType.Close;
            req.ConditionalOrderType = KSFT.EnumConditionalOrderType.OPEN;
            req.ConditionalType = KSFT.EnumConditionalTypeType.GreaterEqualTermPrice;
            req.Direction = KSFT.EnumDirectionType.Buy;
            req.InstrumentID = INSTRUMENT_ID;
            req.InvestorID = INVESTOR_ID;
            req.LimitPrice = LIMIT_PRICE;
            req.OrderPriceType = KSFT.EnumKSOrderPriceTypeType.AskPrice;

            int iResult = cosApi.ReqModifyConditionalOrder(req, ++iRequestID);
            Console.WriteLine("--->>> 修改条件单请求: " + ((iResult == 0) ? "成功" : "失败"));
        }
        /// <summary>
        /// 修改条件单响应
        /// </summary>
        /// <param name="pModifyConditionalOrder"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspModifyConditionalOrder(TKSConditionalOrderOperResultField pModifyConditionalOrder, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());

            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
            
                //止损止盈单修改请求
                ReqModifyProfitAndLossOrder();
            }
        }

        /// <summary>
        /// 止损止盈单修改请求
        /// </summary>
        void ReqModifyProfitAndLossOrder()
        {
            TKSProfitAndLossOrderModify req = new TKSProfitAndLossOrderModify();
            req.BrokerID = BROKER_ID;
            req.CloseMode = KSFT.EnumCloseModeType.LastPrice;
            req.InvestorID = INVESTOR_ID;
            req.OffsetValue = KSFT.EnumOffsetValueType.TermPrice;
            req.SpringType = KSFT.EnumSpringTypeType.LastPrice;

            int iResult = cosApi.ReqModifyProfitAndLossOrder(req, ++iRequestID);
            Console.WriteLine("--->>> 止损止盈单修改请求: " + ((iResult == 0) ? "成功" : "失败"));
        }
        /// <summary>
        /// 止损止盈单修改应答
        /// </summary>
        /// <param name="pModifyProfitAndLossOrder"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspModifyProfitAndLossOrder(TKSProfitAndLossOrderOperResultField pModifyProfitAndLossOrder, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());

            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //暂停或激活条件单请求
                ReqStateAlterConditionalOrder();
            }
        }

        /// <summary>
        /// 暂停或激活条件单请求
        /// </summary>
        void ReqStateAlterConditionalOrder()
        {
            TKSConditionalOrderStateAlter req = new TKSConditionalOrderStateAlter();
            req.BrokerID = BROKER_ID;
            req.ConditionalOrderStateAlter = KSFT.EnumConditionalOrderStateAlterType.ACTIVE;
            req.InvestorID = INVESTOR_ID;

            int iResult = cosApi.ReqStateAlterConditionalOrder(req, ++iRequestID);
            Console.WriteLine("--->>> 暂停或激活条件单请求: " + ((iResult == 0) ? "成功" : "失败"));
        }
        /// <summary>
        /// 暂停或激活条件单响应
        /// </summary>
        /// <param name="pPauseConditionalOrder"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspPauseConditionalOrder(TKSConditionalOrderOperResultField pPauseConditionalOrder, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());

            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //止损止盈单查询请求
                ReqQueryProfitAndLossOrder();
            }
        }

        /// <summary>
        /// 止损止盈单查询请求
        /// </summary>
        void ReqQueryProfitAndLossOrder()
        {
            TKSProfitAndLossOrderQuery req = new TKSProfitAndLossOrderQuery();
            req.BrokerID = BROKER_ID;
            req.InvestorID = INVESTOR_ID;

            int iResult = cosApi.ReqQueryProfitAndLossOrder(req, ++iRequestID);
            Console.WriteLine("--->>> 止损止盈单查询请求: " + ((iResult == 0) ? "成功" : "失败"));
        }
        /// <summary>
        /// 止损止盈单查询应答
        /// </summary>
        /// <param name="pQueryProfitAndLossOrder"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspQueryProfitAndLossOrder(TKSProfitAndLossOrderOperResultField pQueryProfitAndLossOrder, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());

            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
            
                //删除条件单请求
                ReqRemoveConditionalOrder();
            }
        }

        /// <summary>
        /// 删除条件单请求
        /// </summary>
        void ReqRemoveConditionalOrder()
        {
            TKSConditionalOrderRemove req = new TKSConditionalOrderRemove();
            req.BrokerID = BROKER_ID;
            //req.ConditionalOrderID
            req.InvestorID = INVESTOR_ID;

            int iResult = cosApi.ReqRemoveConditionalOrder(req, ++iRequestID);
            Console.WriteLine("--->>> 删除条件单请求: " + ((iResult == 0) ? "成功" : "失败"));
        }
        /// <summary>
        /// 删除条件单应答
        /// </summary>
        /// <param name="pRemoveConditionalOrder"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspRemoveConditionalOrder(TKSConditionalOrderRspResultField pRemoveConditionalOrder, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());

            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //止损止盈单删除请求
                ReqRemoveProfitAndLossOrder();
            }
        }

        /// <summary>
        /// 止损止盈单删除请求
        /// </summary>
        void ReqRemoveProfitAndLossOrder()
        {
            TKSProfitAndLossOrderRemove req = new TKSProfitAndLossOrderRemove();
            req.BrokerID = BROKER_ID;
            req.InvestorID = INVESTOR_ID;

            int iResult = cosApi.ReqRemoveProfitAndLossOrder(req, ++iRequestID);
            Console.WriteLine("--->>> 止损止盈单删除请求: " + ((iResult == 0) ? "成功" : "失败"));
        }
        /// <summary>
        /// 止损止盈单删除应答
        /// </summary>
        /// <param name="pRemoveProfitAndLossOrder"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspRemoveProfitAndLossOrder(TKSProfitAndLossOrderRemoveField pRemoveProfitAndLossOrder, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());

            if (bIsLast && !IsErrorRspInfo(pRspInfo))
            {
                //选择条件单请求
                ReqSelectConditionalOrder();
            }
        }

        /// <summary>
        /// 选择条件单请求
        /// </summary>
        void ReqSelectConditionalOrder()
        {
            TKSConditionalOrderSelect req = new TKSConditionalOrderSelect();
            req.BrokerID = BROKER_ID;
            req.ConditionalOrderSelectResultType = KSFT.EnumConditionalOrderSelectResultType.ABORT;
            req.InvestorID = INVESTOR_ID;

            int iResult = cosApi.ReqSelectConditionalOrder(req, ++iRequestID);
            Console.WriteLine("--->>> 选择条件单请求: " + ((iResult == 0) ? "成功" : "失败"));
        }
        /// <summary>
        /// 选择条件单应答
        /// </summary>
        /// <param name="pSelectConditionalOrder"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspSelectConditionalOrder(TKSConditionalOrderRspResultField pSelectConditionalOrder, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
        }

        /// <summary>
        /// 条件单请求选择通知
        /// </summary>
        /// <param name="pCOSAskSelect"></param>
        void OnRtnCOSAskSelect(TKSCOSAskSelectField pCOSAskSelect)
        {
            DebugPrintFunc(new StackTrace());

            string s = string.Format("投资者代码:{0},条件单编号:{1}", pCOSAskSelect.InvestorID,pCOSAskSelect.ConditionalOrderID);
            Console.WriteLine("--->>> 条件单请求选择通知: " + s);
        }

        /// <summary>
        /// 条件单状态通知
        /// </summary>
        /// <param name="pCOSStatus"></param>
        void OnRtnCOSStatus(TKSCOSStatusField pCOSStatus)
        {
            DebugPrintFunc(new StackTrace());

            string s = string.Format("撤销时间:{0},条件单状态:{1}", pCOSStatus.CancelTime,pCOSStatus.ConditionalOrderStatus);
            Console.WriteLine("--->>> 条件单状态通知: " + s);
        }

        /// <summary>
        /// 止损止盈单状态通知
        /// </summary>
        /// <param name="pPLStatus"></param>
        void OnRtnPLStatus(TKSPLStatusField pPLStatus)
        {
            DebugPrintFunc(new StackTrace());

            string s = string.Format("合约代码:{0},投资者代码:{1}", pPLStatus.InstrumentID,pPLStatus.InvestorID);
            Console.WriteLine("--->>> 止损止盈单状态通知: " + s);
        }

        /// <summary>
        /// 错误信息
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
        /// 输出
        /// </summary>
        /// <param name="stkTrace"></param>
        void DebugPrintFunc(StackTrace stkTrace)
        {
            string s = stkTrace.GetFrame(0).ToString();
            s = s.Split(new char[] { ' ' })[0];
            Debug.WriteLine("--->>> " + s);
            Console.WriteLine("--->>> " + s);
        }
    }
}
