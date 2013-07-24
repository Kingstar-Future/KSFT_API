#-*- coding=utf-8 -*-
"This is the main demo file"
from KSTraderApi import KSTraderApi, KSTraderSpi
import KSUserApiStruct
import KSUserApiType
import time
 

class myTraderSpi(KSTraderSpi):
    requestid = 0
    def __init__(self, broker_id, investor_id, instrument_id, passwd, *args, **kwargs):
        self.broker_id =broker_id
        self.investor_id = investor_id
        self.instrument_id = instrument_id
        self.passwd = passwd
        self.is_login = 0

    def OnFrontConnected(self):
        print "ks_OnFrontConnected:"
        self.Req_UserLogin(self.broker_id, self.investor_id, self.passwd)

    def OnFrontDisConnected(self, reason):
        print "ks_OnFrontDisConnected:", repr(reason)
 
    def OnHeartBeatWarning(self, nTimeLapse):
        print "ks_onHeartBeatWarning", repr(nTimeLapse)

    #客户端认证响应
    def OnRspAuthenticate(self, pRspAuthenticateField, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspAuthenticate:', repr(pRspInfo)
        print repr(pRspAuthenticateField)
    
    #用户登录请求    
    def Req_UserLogin(self, broker_id, investor_id, passwd):
        req = KSUserApiStruct.CThostFtdcReqUserLoginField(BrokerID=broker_id, UserID=investor_id, Password=passwd)
        self.requestid += 1
        r = self.api.ReqUserLogin(req, self.requestid)
        if r == 0: print u"发送用户登录请求: 成功\n"
        else: print u"发送用户登录请求: 失败\n"
      
    def OnRspUserLogin(self, pRspUserLogin, pRspInfo, nRequestID, bIsLast):
        print "ks_OnRspUserLogin", bIsLast, repr(pRspInfo)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            print "ks_get today's trading day:", repr(self.api.GetTradingDay())
            self.is_login = 1
            self.Req_QrySettlementInfoConfirm(self.broker_id, self.investor_id)

    #请求查询结算信息确认
    def Req_QrySettlementInfoConfirm(self, broker_id, investor_id):
        req = KSUserApiStruct.CThostFtdcSettlementInfoField()
        req.BrokerID = broker_id
        req.InvestorID = investor_id
        self.requestid += 1
        r = self.api.ReqQrySettlementInfoConfirm(req, self.requestid)
        if r == 0: print u"请求查询结算信息确认: 成功\n"
        else: print u"请求查询结算信息确认: 失败\n"

    def OnRspQrySettlementInfoConfirm(self, pSettlementInfoConfirm, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQrySettlementInfoConfirm:', repr(pRspInfo)
        print repr(pSettlementInfoConfirm)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            self.Req_QrySettlementInfo(self.broker_id, self.investor_id)

    #请求查询投资者结算结果
    def Req_QrySettlementInfo(self, broker_id, investor_id):
        req = KSUserApiStruct.CThostFtdcQrySettlementInfoField();
        req.BrokerID = broker_id
        req.InvestorID = investor_id
        self.requestid += 1
        r = self.api.ReqQrySettlementInfo(req, self.requestid)
        if r == 0: print u"请求查询投资者结算结果: 成功\n"
        else: print u"请求查询投资者结算结果: 失败\n"

    def OnRspQrySettlementInfo(self, pSettlementInfo, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQrySettlementInfo:', repr(pRspInfo)
        print repr(pSettlementInfo)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            self.Req_UserPasswordUpdate(self.broker_id, self.investor_id, self.passwd)

    #用户口令变更请求
    def Req_UserPasswordUpdate(self, broker_id, investor_id, passwd):
        req = KSUserApiStruct.CThostFtdcUserPasswordUpdateField()
        req.BrokerID = broker_id
        req.UserID = investor_id
        req.OldPassword = passwd
        req.NewPassword = passwd
        self.requestid += 1
        r = self.api.ReqUserPasswordUpdate(req, self.requestid)
        if r == 0: print u"用户口令变更请求: 成功\n"
        else: print u"用户口令变更请求: 失败\n"

    def OnRspUserPasswordUpdate(self, pUserPasswordUpdate, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspUserPasswordUpdate:', repr(pRspInfo)
        print repr(pUserPasswordUpdate)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            self.Req_TradingAccountPasswordUpdate(self.broker_id, self.investor_id, self.passwd)

    #资金账户口令更新请求
    def Req_TradingAccountPasswordUpdate(self, broker_id, investor_id, passwd):
        req = KSUserApiStruct.CThostFtdcTradingAccountPasswordUpdateField()
        req.BrokerID = broker_id
        req.AccountID = investor_id
        req.OldPassword = passwd
        req.NewPassword = passwd
        self.requestid += 1
        r = self.api.ReqTradingAccountPasswordUpdate(req, self.requestid)
        if r == 0: print u"资金账户口令更新请求: 成功\n"
        else: print u"资金账户口令更新请求: 失败\n"

    def OnRspTradingAccountPasswordUpdate(self, pTradingAccountPasswordUpdate, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspTradingAccountPasswordUpdate:', repr(pRspInfo)
        print repr(pTradingAccountPasswordUpdate)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            self.Req_QryBrokerTradingParams(self.broker_id, self.investor_id)

    #请求查询经纪公司交易参数
    def Req_QryBrokerTradingParams(self, broker_id, investor_id):
        req = KSUserApiStruct.CThostFtdcQryBrokerTradingParamsField()
        req.BrokerID = broker_id
        req.InvestorID = investor_id
        self.requestid += 1
        r = self.api.ReqQryBrokerTradingParams(req, self.requestid) 
        if r == 0: print u"请求查询经纪公司交易参数: 成功\n"
        else: print u"请求查询经纪公司交易参数: 失败\n"  

    def OnRspQryBrokerTradingParams(self, pBrokerTradingParams, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQryBrokerTradingParams:', repr(pRspInfo)
        print repr(pBrokerTradingParams)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            self.Req_QryBrokerTradingAlgos(self.broker_id)

    #请求查询经纪公司交易算法
    def Req_QryBrokerTradingAlgos(self, broker_id):
        req = KSUserApiStruct.CThostFtdcQryBrokerTradingAlgosField()
        req.BrokerID = broker_id
        self.requestid += 1
        r = self.api.ReqQryBrokerTradingAlgos(req, self.requestid)
        if r == 0: print u"请求查询经纪公司交易算法: 成功\n"
        else: print u"请求查询经纪公司交易算法: 失败\n"

    def OnRspQryBrokerTradingAlgos(self, pBrokerTradingAlgos, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQryBrokerTradingAlgos:', repr(pRspInfo)
        print repr(pBrokerTradingAlgos)
        #print "clock1:%s" % time.clock() 
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            #print "Begin:%s" % time.clock() 
            self.Req_QryInstrument(self.instrument_id) 

    #请求查询合约
    def Req_QryInstrument(self, instrument_id):
        req = KSUserApiStruct.CThostFtdcQryInstrumentField()
        req.InstrumentID = ''
        req.ExchangeID ="SHFE"
        self.requestid += 1
        r = self.api.ReqQryInstrument(req, self.requestid)
        if r == 0: print u"ReqQryInstrument\n"
        else: print u"请求查询合约: 失败\n"

    def OnRspQryInstrument(self, pInstrument, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQryInstrument:', repr(pRspInfo)
        print repr(pInstrument)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            #print "End:%s" % time.clock() 
            self.Req_QryTradingAccount(self.broker_id, self.investor_id)
        

    #请求查询资金账户
    def Req_QryTradingAccount(self, broker_id, investor_id):
        req = KSUserApiStruct.CThostFtdcQryTradingAccountField()
        req.BrokerID = broker_id
        req.InvestorID = investor_id
        self.requestid += 1
        r = self.api.ReqQryTradingAccount(req, self.requestid)
        if r == 0: print u"请求查询资金账户: 成功\n"
        else: print u"请求查询资金账户: 失败\n"

    def OnRspQryTradingAccount(self, pTradingAccount, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQryTradingAccount:', repr(pRspInfo)
        print repr(pTradingAccount)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            self.Req_QryTradingCode(self.broker_id, self.investor_id)

    #请求查询交易编码
    def Req_QryTradingCode(self, broker_id, investor_id):
        req = KSUserApiStruct.CThostFtdcQryTradingCodeField();
        req.BrokerID = broker_id
        req.InvestorID = investor_id
        self.requestid += 1
        r = self.api.ReqQryTradingCode(req, self.requestid)
        if r == 0: print u"请求查询交易编码: 成功\n"
        else: print u"请求查询交易编码: 失败\n"

    def OnRspQryTradingCode(self, pTradingCode, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQryTradingCode:', repr(pRspInfo)
        print repr(pTradingCode)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            self.Req_QueryInvestorOpenPosition(self.broker_id, self.investor_id)

    #请求查询开盘前持仓
    def Req_QueryInvestorOpenPosition(self, broker_id, investor_id):
        req = KSUserApiStruct.CThostFtdcQryInvestorPositionDetailField()
        req.BrokerID = broker_id
        req.InvestorID = investor_id
        self.requestid += 1
        r = self.api.ReqQueryInvestorOpenPosition(req, self.requestid)
        if r == 0: print u"请求查询开盘前持仓: 成功\n"
        else: print u"请求查询开盘前持仓: 失败\n"

    def OnRspQryInvestorOpenPosition(self, pInvestorPositionDetail, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQryInvestorOpenPosition:', repr(pRspInfo)
        print repr(pInvestorPositionDetail)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            self.Req_QueryInvestorOpenCombinePosition(self.broker_id, self.investor_id)

    #请求查询开盘前的组合持仓明细
    def Req_QueryInvestorOpenCombinePosition(self, broker_id, investor_id):
        req = KSUserApiStruct.CThostFtdcQryInvestorPositionCombineDetailField()
        req.BrokerID = broker_id
        req.InvestorID = investor_id
        self.requestid += 1
        r = self.api.ReqQueryInvestorOpenCombinePosition(req, self.requestid)
        if r == 0: print u"请求查询开盘前的组合持仓明细: 成功\n"
        else: print u"请求查询开盘前的组合持仓明细: 失败\n"

    def OnRspQryInvestorOpenCombinePosition(self, pInvestorPositionCombineDetail, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQryInvestorOpenCombinePosition:', repr(pRspInfo)
        print repr(pInvestorPositionCombineDetail)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            self.Req_QryInvestorPosition(self.broker_id, self.investor_id, self.instrument_id)

    #请求查询投资者持仓
    def Req_QryInvestorPosition(self, broker_id, investor_id, instrument_id):  
        req = KSUserApiStruct.CThostFtdcQryInvestorPositionField()
        req.BrokerID = broker_id
        req.InvestorID = investor_id
        req.InstrumentID = instrument_id
        self.requestid += 1
        r = self.api.ReqQryInvestorPosition(req, self.requestid)
        if r == 0: print u"请求查询投资者持仓: 成功\n"
        else: print u"请求查询投资者持仓: 失败\n"

    def OnRspQryInvestorPosition(self, pInvestorPosition, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQryInvestorPosition:', repr(pRspInfo)
        print repr(pInvestorPosition)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            self.Req_QryOrder(self.broker_id, self.investor_id, self.instrument_id)

    #报单查询请求
    def Req_QryOrder(self, broker_id, investor_id, instrument_id):
        req = KSUserApiStruct.CThostFtdcQryOrderField()
        req.BrokerID = broker_id
        req.ExchangeID = investor_id
        req.InstrumentID = instrument_id
        req.InvestorID = investor_id
        self.requestid += 1
        r = self.api.ReqQryOrder(req, self.requestid)
        if r == 0: print u"报单查询请求: 成功\n"
        else: print u"报单查询请求: 失败\n"

    def OnRspQryOrder(self, pOrder, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQryOrder:', repr(pRspInfo)
        print repr(pOrder)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            self.Req_QryTrade(self.broker_id, self.investor_id, self.instrument_id)

   #交易查询请求
    def Req_QryTrade(self, broker_id, investor_id, instrument_id):
        req = KSUserApiStruct.CThostFtdcQryTradeField()
        req.BrokerID = broker_id
        req.ExchangeID = investor_id
        req.InstrumentID = instrument_id
        req.InvestorID = investor_id
        self.requestid += 1
        r = self.api.ReqQryTrade(req, self.requestid)
        if r == 0: print u"交易查询请求: 成功\n"
        else: print u"交易查询请求: 失败\n"

    def OnRspQryTrade(self, pTrade, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQryTrade:', repr(pRspInfo)
        print repr(pTrade)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            self.Req_QryInvestor(self.broker_id, self.investor_id)

    #请求查询投资者
    def Req_QryInvestor(self, broker_id, investor_id):
        req = KSUserApiStruct.CThostFtdcQryInvestorField()
        req.BrokerID = broker_id
        req.InvestorID = investor_id
        self.requestid += 1
        r = self.api.ReqQryInvestor(req, self.requestid)
        if r == 0: print u"请求查询投资者: 成功\n"
        else: print u"请求查询投资者: 失败\n"

    def OnRspQryInvestor(self, pInvestor, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQryInvestor:', repr(pRspInfo)
        print repr(pInvestor)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            self.Req_QryInstrumentCommissionRate(self.broker_id, self.instrument_id, self.investor_id)

    #请求查询合约手续费率
    def Req_QryInstrumentCommissionRate(self, broker_id, instrument_id, investor_id):
        req = KSUserApiStruct.CThostFtdcQryInstrumentCommissionRateField()
        req.BrokerID = broker_id
        req.InstrumentID = instrument_id
        req.InvestorID = investor_id
        self.requestid += 1
        r = self.api.ReqQryInstrumentCommissionRate(req, self.requestid)
        if r == 0: print u"请求查询合约手续费率: 成功\n"
        else: print u"请求查询合约手续费率: 失败\n"

    def OnRspQryInstrumentCommissionRate(self, pInstrumentCommissionRate, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQryInstrumentCommissionRate:', repr(pRspInfo)
        print repr(pInstrumentCommissionRate)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            self.Req_QryExchange(self.investor_id)

   #请求查询交易所
    def Req_QryExchange(self, investor_id):
        req = KSUserApiStruct.CThostFtdcQryExchangeField()
        req.ExchangeID = investor_id
        self.requestid += 1
        r = self.api.ReqQryExchange(req, self.requestid)
        if r == 0: print u"请求查询交易所: 成功\n"
        else: print u"请求查询交易所: 失败\n"

    def OnRspQryExchange(self, pExchange, pRspInfo, nRequestID, bIsLast):
        print "ks_OnRspQryExchange:", repr(pRspInfo)
        print repr(pExchange)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            self.Req_QryDepthMarketData(self.instrument_id)

    #请求查询行情
    def Req_QryDepthMarketData(self, instrument_id):
        req = KSUserApiStruct.CThostFtdcQryDepthMarketDataField()
        req.InstrumentID = instrument_id
        self.requestid += 1
        r = self.api.ReqQryDepthMarketData(req, self.requestid)
        if r == 0: print u"请求查询行情: 成功\n"
        else: print u"请求查询行情: 失败\n"

    def OnRspQryDepthMarketData(self, pDepthMarketData, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQryDepthMarketData:', repr(pRspInfo)
        print repr(pDepthMarketData)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            self.Req_QryNotice(self.broker_id)

    #请求查询客户通知
    def Req_QryNotice(self, broker_id):
        req = KSUserApiStruct.CThostFtdcQryNoticeField()
        req.BrokerID = broker_id
        self.requestid += 1
        r = self.api.ReqQryNotice(req, self.requestid)
        if r == 0: print u"请求查询客户通知: 成功\n"
        else: print u"请求查询客户通知: 失败\n"

    def OnRspQryNotice(self, pNotice, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQryNotice:', repr(pRspInfo)
        print repr(pNotice)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            self.Req_QryInvestorPositionCombineDetail(self.broker_id, self.investor_id)

    #请求查询投资者持仓明细
    def Req_QryInvestorPositionCombineDetail(self, broker_id, investor_id):
        req = KSUserApiStruct.CThostFtdcQryInvestorPositionCombineDetailField()
        req.BrokerID = broker_id
        req.InvestorID = investor_id
        self.requestid += 1
        r = self.api.ReqQryInvestorPositionCombineDetail(req, self.requestid)
        if r == 0: print u"请求查询投资者持仓明细: 成功\n"
        else: print u"请求查询投资者持仓明细: 失败\n"

    def OnRspQryInvestorPositionCombineDetail(self, pInvestorPositionCombineDetail, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQryInvestorPositionCombineDetail:', repr(pRspInfo)
        print repr(pInvestorPositionCombineDetail)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            self.Req_QueryMaxOrderVolume(self.broker_id, self.investor_id, self.instrument_id)

    #请求查询最大报单数量
    def Req_QueryMaxOrderVolume(self, broker_id, investor_id, instrument_id):
        req = KSUserApiStruct.CThostFtdcQueryMaxOrderVolumeField()
        req.BrokerID = broker_id
        req.InvestorID = investor_id
        req.InstrumentID = instrument_id
        self.requestid += 1
        r = self.api.ReqQueryMaxOrderVolume(req, self.requestid)
        if r == 0: print u"请求查询最大报单数量: 成功\n"
        else: print u"请求查询最大报单数量: 失败\n"

    def OnRspQueryMaxOrderVolume(self, pQueryMaxOrderVolume, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQueryMaxOrderVolume:', repr(pRspInfo)
        print repr(pQueryMaxOrderVolume)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            self.Req_QryEWarrantOffset(self.broker_id, self.investor_id)    
        
    #请求查询仓单折抵信息
    def Req_QryEWarrantOffset(self, broker_id, investor_id):
        req = KSUserApiStruct.CThostFtdcQryEWarrantOffsetField()
        req.BrokerID = broker_id
        req.InvestorID = investor_id
        self.requestid += 1
        r = self.api.ReqQryEWarrantOffset(req, self.requestid)
        if r == 0: print u"请求查询仓单折抵信息: 成功\n"
        else: print u"请求查询仓单折抵信息: 失败\n"

    def OnRspQryEWarrantOffset(self, pEWarrantOffset, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQryEWarrantOffset:', repr(pRspInfo)
        print repr(pEWarrantOffset)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            self.Req_QryCFMMCTradingAccountKey(self.broker_id, self.investor_id) 

    #请求查询保证金监管系统经纪公司资金账户密钥
    def Req_QryCFMMCTradingAccountKey(self, broker_id, investor_id):
        req = KSUserApiStruct.CThostFtdcQryCFMMCTradingAccountKeyField()
        req.BrokerID = broker_id
        req.InvestorID = investor_id
        self.requestid += 1
        r = self.api.ReqQryCFMMCTradingAccountKey(req, self.requestid)
        if r == 0: print u"请求查询保证金监管系统经纪公司资金账户密钥: 成功\n"
        else: print u"请求查询保证金监管系统经纪公司资金账户密钥: 失败\n"

    def OnRspQryCFMMCTradingAccountKey(self, pCFMMCTradingAccountKey, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQryCFMMCTradingAccountKey:', repr(pRspInfo)
        print repr(pCFMMCTradingAccountKey)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            self.Req_QryTransferSerial(self.broker_id, self.investor_id)

    #请求查询转帐流水
    def Req_QryTransferSerial(self, broker_id, investor_id):
        req = KSUserApiStruct.CThostFtdcQryTransferSerialField()
        req.AccountID = investor_id
        req.BrokerID = broker_id
        #银行代码
        req.BankID = "5"
        self.requestid += 1
        r = self.api.ReqQryTransferSerial(req, self.requestid)
        if r == 0: print u"请求查询转帐流水: 成功\n"
        else: print u"请求查询转帐流水: 失败\n"

    def OnRspQryTransferSerial(self, pTransferSerial, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQryTransferSerial:', repr(pRspInfo)
        print repr(pTransferSerial)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            self.Req_QryTradingNotice(self.broker_id, self.investor_id)

    #请求查询交易通知
    def Req_QryTradingNotice(self, broker_id, investor_id):
        req = KSUserApiStruct.CThostFtdcQryTradingNoticeField()
        req.BrokerID = broker_id
        req.InvestorID = investor_id
        self.requestid += 1
        r = self.api.ReqQryTradingNotice(req, self.requestid)
        if r == 0: print u"请求查询交易通知: 成功\n"
        else: print u"请求查询交易通知: 失败\n"

    def OnRspQryTradingNotice(self, pTradingNotice, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQryTradingNotice:', repr(pRspInfo)
        print repr(pTradingNotice)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
    #        self.Req_QrySettlementInfoConfirm()

    #请求查询结算信息确认
    #def Req_QrySettlementInfoConfirm(self):
    #    req = KSUserApiStruct.CThostFtdcQrySettlementInfoConfirmField(BrokerID = self.broker_id, UserID = self.investor_id)
    #    self.requestid += 1
    #    r = self.api.ReqQrySettlementInfoConfirm(req, self.requestid)
    #    if r == 0: print "请求查询结算信息确认: 成功\n"
    #    else: print "请求查询结算信息确认: 失败\n"

    #def OnRspSettlementInfoConfirm(self, pSettlementInfoConfirm, pRspInfo, nRequestID, bIsLast):
    #    print 'ks_OnRspSettlementInfoConfirm:', repr(pRspInfo)
    #    print repr(pSettlementInfoConfirm)
    #    if bIsLast and not self.isErrorRspInfo(pRspInfo):
            self.Req_QryAccountregister(self.broker_id)

    #请求查询银期签约关系
    def Req_QryAccountregister(self, broker_id):
        req = KSUserApiStruct.CThostFtdcQryAccountregisterField()
        req.BrokerID = broker_id
        self.requestid += 1
        r = self.api.ReqQryAccountregister(req, self.requestid)
        if r == 0: print u"请求查询银期签约关系: 成功\n"
        else: print u"请求查询银期签约关系: 失败\n"

    def OnRspQryAccountregister(self, pAccountregister, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQryAccountregister:', repr(pRspInfo)
        print repr(pAccountregister)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            self.Req_QryContractBank(self.broker_id)

    #请求查询签约银行
    def Req_QryContractBank(self, broker_id):
        req = KSUserApiStruct.CThostFtdcQryContractBankField()
        req.BrokerID = broker_id
        self.requestid += 1
        r = self.api.ReqQryContractBank(req, self.requestid)
        if r == 0: print u"请求查询签约银行: 成功\n"
        else: print u"请求查询签约银行: 失败\n"

    def OnRspQryContractBank(self, pContractBank, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQryContractBank:', repr(pRspInfo)
        print repr(pContractBank)
        #if bIsLast and not self.isErrorRspInfo(pRspInfo):
    #        self.Req_FromBankToFutureByFuture(self.investor_id)

    # #期货发起银行资金转期货请求
    #def Req_FromBankToFutureByFuture(self, investor_id):
    #    req = KSUserApiStruct.CThostFtdcReqTransferField()
    #    req.AccountID = investor_id
    #    #银行帐号
    #    req.BankAccount = "800026" 
    #    #银行代码
    #    req.BankID = "5" 
    #    #银行密码
    #    req.BankPassWord = "123456"  
    #    #转帐金额
    #    req.TradeAmount = 200  
    #    self.requestid += 1
    #    r = self.api.ReqFromBankToFutureByFuture(req, self.requestid) 
    #    if r == 0: print u"期货发起银行资金转期货请求: 成功\n"
    #    else: print u"期货发起银行资金转期货请求: 失败\n"

    #def OnRspFromBankToFutureByFuture(self, pReqTransfer, pRspInfo, nRequestID, bIsLast):
    #    print 'ks_OnRspFromBankToFutureByFuture:', repr(pRspInfo)
    #    print repr(pReqTransfer)
    #    if bIsLast and not self.isErrorRspInfo(pRspInfo):
    #        self.Req_FromFutureToBankByFuture(self.broker_id, self.investor_id, self.passwd)

    ##期货发起期货资金转银行请求
    #def Req_FromFutureToBankByFuture(self, broker_id, investor_id, passwd):
    #    req = KSUserApiStruct.CThostFtdcReqTransferField() 
    #    req.AccountID = investor_id 
    #    req.BankID = "5" 
    #    req.Password = "123456" 
    #    req.BankPassWord = passwd 
    #    req.BrokerBranchID = broker_id 
    #    req.BrokerID = broker_id 
    #    req.BrokerIDByBank = broker_id 
    #    req.CustomerName = investor_id
    #    req.Password = passwd 
    #    req.TradeAmount = 200 
    #    req.UserID = investor_id 
    #    self.requestid += 1
    #    r = self.api.ReqFromFutureToBankByFuture(req, self.requestid) 
    #    if r == 0: print u"期货发起期货资金转银行请求: 成功\n"
    #    else: print u"期货发起期货资金转银行请求: 失败\n"

    #def OnRspFromFutureToBankByFuture(self, pReqTransfer, pRspInfo, nRequestID, bIsLast):
    #    print 'ks_OnRspFromFutureToBankByFuture:', repr(pRspInfo)
    #    print repr(pReqTransfer)
    #    if bIsLast and not self.isErrorRspInfo(pRspInfo):
    #        self.Req_QueryBankAccountMoneyByFuture(self.broker_id, self.investor_id, self.passwd)

    ##期货发起查询银行余额请求
    #def Req_QueryBankAccountMoneyByFuture(self, broker_id, investor_id, passwd):
    #    req = KSUserApiStruct.CThostFtdcReqQueryAccountField() 
    #    req.AccountID = investor_id 
    #    req.BankID = "5" 
    #    req.Password = "123456" 
    #    req.BankPassWord = "123456" 
    #    req.BrokerBranchID = broker_id 
    #    req.BrokerID = broker_id 
    #    req.BrokerIDByBank = broker_id
    #    req.Password = passwd 
    #    req.UserID = broker_id
    #    self.requestid += 1
    #    r = self.api.ReqQueryBankAccountMoneyByFuture(req, self.requestid) 
    #    if r == 0: print u"期货发起查询银行余额请求: 成功\n"
    #    else: print u"期货发起查询银行余额请求: 失败\n"

    #def OnRspQueryBankAccountMoneyByFuture(self, pReqQueryAccount, pRspInfo, nRequestID, bIsLast):
    #    print 'ks_OnRspQueryBankAccountMoneyByFuture:', repr(pRspInfo)
    #    print repr(pReqQueryAccount)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            self.Req_OrderInsert(self. broker_id, self.investor_id)

    #报单录入请求
    def Req_OrderInsert(self, broker_id, investor_id):
        data = KSUserApiStruct.CThostFtdcInputOrderField()
        #经纪公司代码
        data.BrokerID = broker_id
        #投资者代码
        data.InvestorID = investor_id
        #合约代码
        data.InstrumentID = "IF1306"#instrument_id
        #报单引用
        data.OrderRef = "9"
        #报单价格条件: 限价
        data.OrderPriceType = KSUserApiType.THOST_FTDC_OPT_LimitPrice
        #买卖方向: 
        data.Direction = KSUserApiType.THOST_FTDC_D_Buy
        #组合开平标志: 开仓
        data.CombOffsetFlag = KSUserApiType.THOST_FTDC_OF_Close
        #组合投机套保标志
        data.CombHedgeFlag = KSUserApiType.THOST_FTDC_HF_Speculation
        #价格
        data.LimitPrice = 2000
        #数量: 1
        data.VolumeTotalOriginal = 1
        #有效期类型: 当日有效
        data.TimeCondition = KSUserApiType.THOST_FTDC_TC_GFD
        #成交量类型: 任何数量
        data.VolumeCondition = KSUserApiType.THOST_FTDC_VC_AV
        #最小成交量: 0
        data.MinVolume = 0
        #触发条件: 立即
        data.ContingentCondition = KSUserApiType.THOST_FTDC_CC_Immediately
        #强平原因: 非强平
        data.ForceCloseReason = KSUserApiType.THOST_FTDC_FCC_NotForceClose
        #自动挂起标志: 否
        data.IsAutoSuspend = 0
        #请求编号
        data.RequestID = self.requestid
        #用户强评标志: 否
        data.UserForceClose = 0
        self.requestid += 1
        r = self.api.ReqOrderInsert(data, self.requestid)
        if r == 0: print u"报单录入请求: 成功\n"
        else: print u"报单录入请求: 失败\n"

    def OnRspOrderInsert(self, pInputOrder, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspOrderInsert:', repr(pRspInfo)
        print repr(pInputOrder)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            self.Req_QryInstrumentMarginRate(self.broker_id, self.investor_id, self.instrument_id)

    #请求查询合约保证金率
    def Req_QryInstrumentMarginRate(self, broker_id, investor_id, instrument_id):
        req = KSUserApiStruct.CThostFtdcQryInstrumentMarginRateField()
        req.BrokerID = broker_id
        req.InstrumentID = instrument_id
        req.InvestorID = investor_id
        self.requestid += 1
        r = self.api.ReqQryInstrumentMarginRate(req, self.requestid)
        if r == 0: print u"请求查询合约保证金率: 成功\n"
        else: print u"请求查询合约保证金率: 失败\n"

    def OnRspQryInstrumentMarginRate(self, pInstrumentMarginRate, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQryInstrumentMarginRate:', repr(pRspInfo)
        print repr(pInstrumentMarginRate)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            self.Req_QryInvestorPositionDetail(self.broker_id, self.investor_id, self.instrument_id)

    #请求查询投资者持仓明细
    def Req_QryInvestorPositionDetail(self, broker_id, investor_id, instrument_id):
        req = KSUserApiStruct.CThostFtdcQryInvestorPositionDetailField()
        req.BrokerID = broker_id
        req.InstrumentID = instrument_id
        req.InvestorID = investor_id
        self.requestid += 1
        r = self.api.ReqQryInvestorPositionDetail(req, self.requestid)
        if r == 0: print u"请求查询投资者持仓明细: 成功\n"
        else: print u"请求查询投资者持仓明细: 失败\n"

    def OnRspQryInvestorPositionDetail(self, pInvestorPositionDetail, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQryInvestorPositionDetail:', repr(pRspInfo)
        print repr(pInvestorPositionDetail)
    #    if bIsLast and not self.isErrorRspInfo(pRspInfo):
    #        self.Req_BulkCancelOrder(self.broker_id, self.investor_id)

    ##批量撤单请求
    #def Req_BulkCancelOrder(self, broker_id, investor_id):
    #    req = KSUserApiStruct.CThostFtdcBulkCancelOrderField() 
    #    req.UserID = investor_id
    #    req.BrokerID = broker_id 
    #    req.InvestorID = investor_id
    #    req.nCount = 2 
    #    req.OrderKey_0 = KSUserApiStruct.CThostOrderKeyField() 
    #    req.OrderKey_0.ExchangeID = "CZCE" 
    #    req.OrderKey_0.FrontID = 126187484 
    #    req.OrderKey_0.SessionID = 5463 
    #    req.OrderKey_0.OrderRef = "16385" 
    #    req.OrderKey_1 = KSUserApiStruct.CThostOrderKeyField() 
    #    req.OrderKey_1.ExchangeID = "CZCE" 
    #    req.OrderKey_1.FrontID = 126187484 
    #    req.OrderKey_1.SessionID = 5463 
    #    req.OrderKey_1.OrderRef = "32769"
    #    self.requestid += 1
    #    r = self.api.ReqBulkCancelOrder(req, self.requestid) 
    #    if r == 0: print u"批量撤单请求: 成功\n"
    #    else: print u"批量撤单请求: 失败\n"

    #def OnRspBulkCancelOrder(self, pBulkCancelOrder, pRspInfo, nRequestID, bIsLast):
    #    print 'ks_OnRspBulkCancelOrder:', repr(pRspInfo)
    #    print repr(pBulkCancelOrder)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            self.User_Logout(self.broker_id, self.investor_id)

    #录出请求
    def User_Logout(self, broker_id, investor_id):
        req = KSUserApiStruct.CThostFtdcUserLogoutField(BrokerID = broker_id, UserID = investor_id)
        self.requestid += 1
        r = self.api.ReqUserLogout(req, self.requestid)
        if r == 0: print u"录出请求: 成功\n"
        else: print u"录出请求: 失败\n"

    def OnRspUserLogout(self, pUserLogout, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspUserLogout:', repr(pRspInfo)
        print repr(pUserLogout)
        
    def OnRtnOrder(self, pOrder):
        print 'ks_OnRtnOrder:', repr(pOrder)
        #报单操作请求
        pOrder = KSUserApiStruct.CThostFtdcOrderField()
        if pOrder.OrderStatus == KSUserApiType.THOST_FTDC_OST_NoTradeQueueing and int(PyString_AsString(pOrder.OrderSysID)) != 0:
            ord = KSUserApiStruct.CThostFtdcInputOrderActionField() 
            # broker id 
            ord.BrokerID = broker_id
            # investor ID 
            ord.InvestorID = investor_id
            # order action refernce
            ord.OrderActionRef = 000000000001
            # order reference 
            ord.OrderRef = pOrder.OrderRef		# *必传1
            # front id
            ord.FrontID = pOrder.FrontID			# *必传2
            # session id
            ord.SessionID = pOrder.SessionID			# *必传3
            # 或者
            # exchange ID
            ord.ExchangeID = pOrder.ExchangeID	# *必传1
            # action order ID
            ord.OrderSysID = pOrder.OrderSysID	# *必传2
            #  action order num(unavailable yet)
            ord.VolumeChange = 0
            # instrument ID 
            ord.InstrumentID = pOrder.InstrumentID 
            # user id 
            ord.UserID = investor_id
            self.requestid
            r = self.api.ReqOrderAction(ord, self.requestid)
            if r == 0: print u"报单操作请求: 成功\n"
            else: print u"报单操作请求: 失败\n"

    def OnRspOrderAction(self, pInputOrderAction, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspOrderAction:', repr(pRspInfo)
        print repr(pInputOrderAction)
 
    def OnRspParkedOrderInsert(self, pParkedOrder, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspParkedOrderInsert:', repr(pRspInfo)
        print repr(pParkedOrder)

    def OnRspParkedOrderAction(self, pParkedOrderAction, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspParkedOrderAction:', repr(pRspInfo)
        print repr(pParkedOrderAction)

    def OnRspQryTransferBank(self, pTransferBank, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQryTransferBank:', repr(pRspInfo)
        print repr(pTransferBank)

    def OnRspError(self, info, RequestId, IsLast):
        print "ks_Error"  
        self.isErrorRspInfo(info)

    def OnRtnTrade(self, pTrade):
        print 'ks_OnRtnTrade:', repr(pTrade)
      
    def OnErrRtnOrderInsert(self, pInputOrder, pRspInfo):
        print 'ks_OnErrRtnOrderInsert:', repr(pRspInfo)
        print repr(pInputOrder)
        
    def OnErrRtnOrderAction(self, pOrderAction, pRspInfo):
        print 'ks_OnErrRtnOrderAction:', repr(pRspInfo)
        print repr(pOrderAction)
       
    #def OnRtnInstrumentStatus(self, pInstrumentStatus):
    #    print 'ks_OnRtnInstrumentStatus:', repr(pInstrumentStatus)
    
    def OnRtnTradingNotice(self, pTradingNoticeInfo):
        print 'ks_OnRtnTradingNotice:', repr(pTradingNoticeInfo)
     
     #提示条件单校验错误
    def OnRtnErrorConditionalOrder(self, pErrorConditionalOrder):
        print 'ks_OnRtnErrorConditionalOrder:', repr(pErrorConditionalOrder)
     
    #请求查询预埋单响应
    def OnRspQryParkedOrder(self, pParkedOrder, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQryParkedOrder:', repr(pRspInfo)
        print repr(pParkedOrder)
     
    #请求查询预埋撤单响应
    def OnRspQryParkedOrderAction(self, pParkedOrderAction, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspQryParkedOrderAction:', repr(pRspInfo)
        print repr(pParkedOrderAction)

    #删除预埋单响应
    def OnRspRemoveParkedOrder(self, pRemoveParkedOrder, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspRemoveParkedOrder:', repr(pRspInfo)
        print repr(pRemoveParkedOrder)
      
    def OnRspRemoveParkedOrderAction(self, pRemoveParkedOrderAction, pRspInfo, nRequestID, bIsLast):
        print 'ks_OnRspRemoveParkedOrderAction:', repr(pRspInfo)
        print repr(pRemoveParkedOrderAction)
       
    def OnRtnFromBankToFutureByBank(self, pRspTransfer):
        print 'ks_OnRtnFromBankToFutureByBank:', repr(pRspTransfer)
      
    def OnRtnFromFutureToBankByBank(self, pRspTransfer):
        print 'ks_OnRtnFromFutureToBankByBank:', repr(pRspTransfer)
     
    def OnRtnRepealFromBankToFutureByBank(self, pRspRepeal):
        print 'ks_OnRtnRepealFromBankToFutureByBank:', repr(pRspRepeal)
       
    def OnRtnRepealFromFutureToBankByBank(self, pRspRepeal):
        print "ks_OnRtnRepealFromFutureToBankByBank:", repr(pRspRepeal)
    
    def OnRtnFromBankToFutureByFuture(self, pRspTransfer):
        print 'ks_OnRtnFromBankToFutureByFuture:', repr(pRspTransfer)
     
    def OnRtnFromFutureToBankByFuture(self, pRspTransfer):
        print 'ks_OnRtnFromFutureToBankByFuture:', repr(pRspTransfer)        
     
    def OnRtnRepealFromBankToFutureByFutureManual(self, pRspRepeal):
        print 'ks_OnRtnRepealFromBankToFutureByFutureManual:', repr(pRspRepeal)
     
    def OnRtnRepealFromFutureToBankByFutureManual(self, pRspRepeal):
        print 'ks_OnRtnRepealFromFutureToBankByFutureManual:', repr(pRspRepeal)
        
    def OnRtnQueryBankBalanceByFuture(self, pNotifyQueryAccount):
        print 'ks_OnRtnQueryBankBalanceByFuture:', repr(pNotifyQueryAccount)
      
    def OnErrRtnBankToFutureByFuture(self, pReqTransfer, pRspInfo):
        print 'ks_OnErrRtnBankToFutureByFuture:', repr(pRspInfo)
        print repr(pReqTransfer)
    
    def OnErrRtnFutureToBankByFuture(self, pReqTransfer, pRspInfo):
        print 'ks_OnErrRtnFutureToBankByFuture:', repr(pRspInfo)
        print repr(pReqTransfer)
     
    def OnErrRtnRepealBankToFutureByFutureManual(self, pReqRepeal, pRspInfo):
        print 'ks_OnErrRtnRepealBankToFutureByFutureManual:', repr(pRspInfo)
        print repr(pReqRepeal)
     
    def OnErrRtnRepealFutureToBankByFutureManual(self, pReqRepeal, pRspInfo):
        print 'ks_OnErrRtnRepealFutureToBankByFutureManual:', repr(pRspInfo)
        print repr(pReqRepeal)
       
    def OnErrRtnQueryBankBalanceByFuture(self, pReqQueryAccount, pRspInfo):
        print 'ks_OnErrRtnQueryBankBalanceByFuture:', repr(pRspInfo)
        print repr(pReqQueryAccount)
        
    def OnRtnRepealFromBankToFutureByFuture(self, pRspRepeal):
        print 'ks_OnRtnRepealFromBankToFutureByFuture:', repr(pRspRepeal)
      
    def OnRtnRepealFromFutureToBankByFutureManual(self, pRspRepeal):
        print 'ks_OnRtnRepealFromFutureToBankByFutureManual:', repr(pRspRepeal)
      
    #银行发起银期开户通知
    def OnRtnOpenAccountByBank(self, pOpenAccount):
        print 'ks_OnRtnOpenAccountByBank:', repr(pOpenAccount)
       
    #银行发起银期销户通知
    def OnRtnCancelAccountByBank(self, pCancelAccount):
        print 'ks_OnRtnCancelAccountByBank:', repr(pCancelAccount)
    
    #银行发起变更银行账号通知
    def OnRtnChangeAccountByBank(self, pChangeAccount):
        print 'ks_OnRtnChangeAccountByBank:', repr(pChangeAccount)
        
    def OnRtnDepthMarketData(self, pDepthMarketData):
        print "ks_OnRtnDepthMarketData:", repr(pDepthMarketData)

    def isErrorRspInfo(self, info):
        if info.ErrorID != 0:
            print "ks_ErrorID = ", info.ErrorID, ", ks_ErrorMsg = ", info.ErrorMsg
  

#inst = [u'IF1306', u'CF1305', u'ru1303', u'cu1303']
def ks_spi_init():
    user = KSTraderApi.CreateKSTraderApi("log_trader")
    global spi
    spi = myTraderSpi(broker_id = "6A89B428",investor_id = "80000",passwd = "123456",instrument_id = "IF1306")
    user.RegisterSpi(spi)
    user.SubscribePublicTopic(2)
    user.SubscribePrivateTopic(2)
    user.RegisterFront("tcp://10.253.117.107:13153")
    user.Init()
    time.sleep(3)


if __name__ == "__main__": ks_spi_init()
