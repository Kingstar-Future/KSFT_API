/////////////////////////////////////////////////////////////////////////
// 金仕达 KSFT C++ => .Net Framework Adapter
// Summary: 行情接口测试
// Author:	ksftapi@gmail.com
// Date: 20130304
// Update List：
// 20130325 添加注释
/////////////////////////////////////////////////////////////////////////

using System;
using KSFT;
using System.Diagnostics;

namespace CSharpTest
{
    class Program
    {
        static void Main(string[] args)
        {
            new testMdUserApi().Run();
        }
    }

    class testMdUserApi
    {
        KSFTMDAdapter api = null;
        string FRONT_ADDR = "tcp://10.253.117.107:13163";  // 前置地址
        string BrokerID = "6A89B428";                       // 经纪公司代码
        string UserID = "80003";                       // 投资者代码
        string Password = "123456";                     // 用户密码
        // 大连,上海代码为小写
        // 郑州,中金所代码为大写
        // 郑州品种年份为一位数
        string[] ppInstrumentID = {"cu1307","IF1306"};	// 行情订阅列表
        int iRequestID = 0;

        public void Run()
        { 
            api = new KSFTMDAdapter();
            api.OnFrontConnected += new FrontConnected(OnFrontConnected);
            api.OnFrontDisconnected += new FrontDisconnected(OnFrontDisconnected);
            api.OnHeartBeatWarning += new HeartBeatWarning(OnHeartBeatWarning);
            api.OnRspError += new RspError(OnRspError);
            api.OnRspSubMarketData += new RspSubMarketData(OnRspSubMarketData);
            api.OnRspUnSubMarketData += new RspUnSubMarketData(OnRspUnSubMarketData);
            api.OnRspUserLogin += new RspUserLogin(OnRspUserLogin);
            api.OnRspUserLogout += new RspUserLogout(OnRspUserLogout);
            api.OnRtnDepthMarketData += new RtnDepthMarketData(OnRtnDepthMarketData);

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
        /// 登出应答
        /// </summary>
        /// <param name="pUserLogout"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspUserLogout(ThostFtdcUserLogoutField pUserLogout, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
        }

        /// <summary>
        /// 登入应答
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
                //获取当前交易日
                Console.WriteLine("--->>> 获取当前交易日 = " + api.GetTradingDay());
                // 请求订阅行情
                SubscribeMarketData();
            }
        }

        /// <summary>
        /// 取消订阅行情应答
        /// </summary>
        /// <param name="pSpecificInstrument"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspUnSubMarketData(ThostFtdcSpecificInstrumentField pSpecificInstrument, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
        }

        /// <summary>
        /// 订阅行情应答
        /// </summary>
        /// <param name="pSpecificInstrument"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        void OnRspSubMarketData(ThostFtdcSpecificInstrumentField pSpecificInstrument, ThostFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            DebugPrintFunc(new StackTrace());
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
        /// 心跳超时警告
        /// </summary>
        /// <param name="nTimeLapse"></param>
        void OnHeartBeatWarning(int nTimeLapse)
        {
            DebugPrintFunc(new StackTrace());
            Console.WriteLine("--->>> nTimerLapse = " + nTimeLapse);
        }

        /// <summary>
        ///客户端与交易后台通信连接断开
        /// </summary>
        /// <param name="nReason"></param>
        void OnFrontDisconnected(int nReason)
        {
            DebugPrintFunc(new StackTrace());
            Console.WriteLine("--->>> Reason = {0}", nReason);
        }

        /// <summary>
        /// 客户端与交易后台建立起通信连接
        /// </summary>
        void  OnFrontConnected()
        {
            DebugPrintFunc(new StackTrace());
            ReqUserLogin();
        }

        /// <summary>
        /// 错误应答信息 
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
        /// 登入请求
        /// </summary>
        void ReqUserLogin()
        {
            ThostFtdcReqUserLoginField req = new ThostFtdcReqUserLoginField();
            req.BrokerID = BrokerID;
            req.UserID = UserID;
            req.Password = Password;
            int iResult = api.ReqUserLogin(req, ++iRequestID);

            Console.WriteLine("--->>> 发送用户登录请求: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 订阅行情
        /// </summary>
        void SubscribeMarketData()
        {
            int iResult = api.SubscribeMarketData(ppInstrumentID);
            Console.WriteLine("--->>> 发送行情订阅请求: " + ((iResult == 0) ? "成功" : "失败"));
        }

        /// <summary>
        /// 深度行情通知
        /// </summary>
        /// <param name="pDepthMarketData"></param>
        void OnRtnDepthMarketData(ThostFtdcDepthMarketDataField pDepthMarketData)
        {
            string s = string.Format("{0,-6} : UpdateTime = {1}.{2:D3},  LasPrice = {3}", pDepthMarketData.InstrumentID, pDepthMarketData.UpdateTime, pDepthMarketData.UpdateMillisec, pDepthMarketData.LastPrice);
            Debug.WriteLine(s);
            Console.WriteLine(s);
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
