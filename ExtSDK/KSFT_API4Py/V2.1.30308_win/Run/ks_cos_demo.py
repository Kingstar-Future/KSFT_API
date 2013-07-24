#-*- coding=utf-8 -*-
"This is the main demo file"
from KSTraderApi import KSTraderApi, KSTraderSpi, CTKSCosApi, CTKSCosSpi
import KSUserApiStruct
import KSUserApiType
import traceback
import time


class myTraderSpi(KSTraderSpi):
    requestid = 0
    def __init__(self, instruments, broker_id,
                 investor_id, passwd, *args,**kwargs):
        self.instruments = instruments
        self.broker_id = broker_id
        self.investor_id = investor_id
        self.passwd = passwd
        self.is_login = 0
        
    def OnFrontConnected(self):
        print "OnFrontConnected:"
        self.Req_UserLogin(self.broker_id, self.investor_id, self.passwd)
        
    def OnFrontDisConnected(self, reason):
        print "onFrontDisConnected:", repr(reason)        

    def Req_UserLogin(self, broker_id, investor_id, passwd):
        req = KSUserApiStruct.CThostFtdcReqUserLoginField(BrokerID = broker_id, UserID = investor_id, Password = passwd)
        self.requestid += 1
        r = self.api.ReqUserLogin(req, self.requestid)
        if r == 0: print u"发送用户登录请求: 成功\n"
        else: print u"发送用户登录请求: 失败\n"

    def OnRspUserLogin(self, pRspUserLogin, pRspInfo, nRequestID, bIsLast):
        print "OnRspUserLogin", bIsLast, repr(pRspInfo)
        if bIsLast and not self.isErrorRspInfo(pRspInfo):
            print "get today's trading day:", repr(self.api.GetTradingDay())
            self.is_login = 1
   
    def OnRtnOrder(self, pOrder):
        print 'ks_OnRtnOrder:', repr(pOrder)
 
    def OnRtnTrade(self, pTrade):
        print 'ks_OnRtnTrade:', repr(pTrade)
	    
    def OnRspError(self, info, RequestId, IsLast):
        print "ks_Error"
        self.isErrorRspInfo(info)
		
    #def OnRtnInstrumentStatus(self, pInstrumentStatus):
    #    print 'ks_OnRtnInstrumentStatus:', repr(pInstrumentStatus)
       
    def OnRspUserLogout(self, pUserLogout, pRspInfo, nRequestID, bIsLast):
        print "OnRspUserLogout", repr(pRspInfo)
        print repr(pUserLogout)

    def isErrorRspInfo(self, info):
        if info.ErrorID != 0:
            print "ks_ErrorID = ", info.ErrorID, ", ks_ErrorMsg = ", info.ErrorMsg
        


class myCosSpi(CTKSCosSpi):

    def __init__(self, broker_id,
                 investor_id, passwd, *args,**kwargs):
        self.requestid = 1
        self.broker_id = broker_id
        self.investor_id = investor_id
        self.passwd = passwd

    #条件单录入响应
    def OnRspInitInsertConditionalOrder(self, pInitInsertConditionalOrder, pRspInfo, nRequestID, bIsLast):
        print "\nOnRspInitInsertConditionalOrder", repr(pRspInfo)
        print repr(pInitInsertConditionalOrder)  
       
    #条件单查询返回响应
    def OnRspQueryConditionalOrder(self, pQueryConditionalOrder, pRspInfo, nRequestID, bIsLast):
        print "\nOnRspQueryConditionalOrder", repr(pRspInfo)
        print repr(pQueryConditionalOrder)    

    #条件单修改响应           
    def OnRspModifyConditionalOrder(self, pModifyConditionalOrder, pRspInfo, nRequestID, bIsLast):
        print "\nOnRspModifyConditionalOrder", repr(pRspInfo)
        print repr(pModifyConditionalOrder) 

    #条件单暂停或激活操作响应
    def OnRspPauseConditionalOrder(self, pPauseConditionalOrder, pRspInfo, nRequestID, bIsLast):
        print "\nOnRspPauseConditionalOrder", repr(pRspInfo)
        print repr(pPauseConditionalOrder) 

    #条件单删除响应
    def OnRspRemoveConditionalOrder(self, pRemoveConditionalOrder, pRspInfo, nRequestID, bIsLast):
        print "\nOnRspRemoveConditionalOrder", repr(pRspInfo)
        print repr(pRemoveConditionalOrder) 

    #条件单选择响应
    def OnRspSelectConditionalOrder(self, pSelectConditionalOrder, pRspInfo, nRequestID, bIsLast):
        print "\nOnRspSelectConditionalOrder", repr(pRspInfo)
        print repr(pSelectConditionalOrder)

    #盈损单下单响应
    def OnRspInsertProfitAndLossOrder(self, pQueryConditionalOrder, pRspInfo, nRequestID, bIsLast):
        print "\nOnRspInsertProfitAndLossOrder", repr(pRspInfo)
        print repr(pQueryConditionalOrder) 

    #盈损单修改响应
    def OnRspModifyProfitAndLossOrder(self, pModifyProfitAndLossOrder, pRspInfo, nRequestID, bIsLast):
        print "\nOnRspModifyProfitAndLossOrder", repr(pRspInfo)
        print repr(pModifyProfitAndLossOrder)  

    #盈损单删除响应
    def OnRspRemoveProfitAndLossOrder(self, pRemoveProfitAndLossOrder, pRspInfo, nRequestID, bIsLast):
        print "\nOnRspRemoveProfitAndLossOrder", repr(pRspInfo)
        print repr(pRemoveProfitAndLossOrder) 

    #止损止盈单查询响应
    def OnRspQueryProfitAndLossOrder(self, pQueryProfitAndLossOrder, pRspInfo, nRequestID, bIsLast):
        print "\nOnRspQueryProfitAndLossOrder", repr(pRspInfo)
        print repr(pQueryProfitAndLossOrder) 

    #条件单请求选择通知
    def OnRtnCOSAskSelect(self, ppCOSAskSelect):
        print "\nOnRtnCOSAskSelect", repr(ppCOSAskSelect)
        
    #条件单状态通知
    def OnRtnCOSStatus(self, pCOSStatus):
        print "\nOnRtnCOSStatus", repr(pCOSStatus)
        
    #盈损单状态通知
    def OnRtnPLStatus(self, pPLStatus):
        print "\nOnRtnPLStatus", repr(pPLStatus)


 
#inst = [u'IF1306', u'CF1305', u'ru1303', u'cu1303']
def ks_spi_init():
    
    user = KSTraderApi.CreateKSTraderApi("log_cos")
    #global spi
    spi = myTraderSpi(instruments = "IF1303",broker_id = "6A89B428",investor_id = "80006",passwd = "123456")
    user.RegisterSpi(spi)
    user.SubscribePublicTopic(2)
    user.SubscribePrivateTopic(2)
    user.RegisterFront("tcp://10.253.117.107:13153") 
    user.Init()
    time.sleep(3)
    cosspi = myCosSpi(broker_id = "6A89B428",investor_id = "80006",passwd = "123456")
    cosapi = user.LoadExtApi(cosspi,"KSCosApi")

    #条件单录入请求
    req = KSUserApiStruct.CTKSConditionalOrderInitInsert()
    #print req
    req.BrokerID = "6A89B428"
    req.ExchangeID = "CFFEX"
    req.InvestorID = "80006"
    req.InstrumentID = "IF1303"
    req.Direction = '0'
    req.CombOffsetFlag = '0'
    req.CombHedgeFlag = '1'
    req.VolumeTotalOriginal = 2
    req.LimitPrice = 200
    req.OrderPriceType = '1'
    req.ConditionalType = '1'
    req.ConditionalPrice = 300
    req.TriggeredTimes = 2
    req.OrderType = '1'
    req.ActiveTime =  "142010"
    req.InActiveTime = "162010"
    req.CurrencyID = "RMB"
    #print req
    requestid = 1
    requestid += 1
    r = cosapi.ReqInitInsertConditionalOrder(req, requestid)
    if r == 0: print "ReqInitInsertConditionalOrder succeed\n"
    else: print "ReqInitInsertConditionalOrder failed\n"

    #条件单查询请求
    req = KSUserApiStruct.CTKSConditionalOrderQuery(BrokerID="6A89B428",InvestorID = "80006")
    print req
    requestid += 1
    r = cosapi.ReqQueryConditionalOrder(req, requestid)
    if r == 0: print "ReqQueryConditionalOrder succeed\n"
    else: print "ReqQueryConditionalOrder failed\n"

    #条件单修改请求
    req = KSUserApiStruct.CTKSConditionalOrderModify()
    print req
    req.BrokerID = "6A89B428"
    req.ExchangeID = "CFFEX"
    req.InvestorID = "80006"
    req.ConditionalOrderID = 16
    req.InstrumentID = "IF1303"
    req.Direction = '1'
    req.CombOffsetFlag = '3'
    req.CombHedgeFlag = '1'
    req.VolumeTotalOriginal = 9
    req.LimitPrice = 1000
    req.OrderPriceType = '1'
    req.ConditionalType = '1'
    req.ConditionalPrice = 3000
    req.TriggeredTimes = 10
    req.OrderType = '1'
    requestid += 1
    r = cosapi.ReqModifyConditionalOrder(req, requestid)
    if r == 0: print "ReqModifyConditionalOrder succeed\n"
    else: print "ReqModifyConditionalOrder failed\n"

    #条件单删除请求
    req = KSUserApiStruct.CTKSConditionalOrderRemove(BrokerID="6A89B428",InvestorID = "80006",ConditionalOrderID = 5)
    print req
    requestid += 1
    r = cosapi.ReqRemoveConditionalOrder(req, requestid)
    if r == 0: print "ReqRemoveConditionalOrder succeed\n"
    else: print "ReqRemoveConditionalOrder failed\n"

    #条件单暂停或激活请求
    req = KSUserApiStruct.CTKSConditionalOrderStateAlter()
    print req
    req.BrokerID = "6A89B428"
    req.InvestorID = "80006"
    req.ConditionalOrderID = 18
    req.ConditionalOrderStateAlter = '0'
    requestid += 1
    r = cosapi.ReqStateAlterConditionalOrder(req, requestid)
    if r == 0: print "ReqStateAlterConditionalOrder succeed\n"
    else: print "ReqStateAlterConditionalOrder failed\n"

    #选择条件单请求
    req = KSUserApiStruct.CTKSConditionalOrderSelect()
    print req
    req.BrokerID = "6A89B428"
    req.InvestorID = "80006"
    req.ConditionalOrderID = 2
    req.SelectResult = KSUserApiType.KSCOS_Select_AGAIN
    requestid += 1
    r = cosapi.ReqSelectConditionalOrder(req, requestid)
    if r == 0: print "ReqSelectConditionalOrder succeed\n"
    else: print "ReqSelectConditionalOrder failed\n"

    #止损止盈单录入请求
    req = KSUserApiStruct.CTKSProfitAndLossOrderInsert()
    print req
    req.BrokerID = "6A89B428"
    req.ExchangeID = "CFFEX"
    req.InvestorID = "80006"
    req.OrderLocalID = '6'
    req.StopLossPrice = 2100
    req.TakeProfitPrice = 2500
    req.BusinessUnit = "cffex"
    req.TriggeredTimes = 2
    req.CloseMode = '1'
    req.FiguresPrice = 0.2
    req.OffsetValue = '0'
    req.SpringType = '1'
    req.CurrencyID = "RMB"
    requestid += 1
    r = cosapi.ReqInsertProfitAndLossOrder(req, requestid)
    if r == 0: print "ReqInsertProfitAndLossOrder succeed\n"
    else: print "ReqInsertProfitAndLossOrder failed\n"

    #止损止盈单修改请求
    req = KSUserApiStruct.CTKSProfitAndLossOrderModify()
    print req
    req.BrokerID = "6A89B428"
    req.InvestorID = "80006"
    req.ProfitAndLossOrderID = 9
    req.StopLossPrice = 2999
    req.TakeProfitPrice = 3999
    req.CloseMode = '1'
    req.FiguresPrice = 0.2
    req.OffsetValue = '0'
    req.SpringType = '1'
    req.TriggeredTimes = 30
    requestid += 1
    r = cosapi.ReqModifyProfitAndLossOrder(req, requestid)
    if r == 0: print "ReqModifyProfitAndLossOrder succeed\n"
    else: print "ReqModifyProfitAndLossOrder failed\n"

    #止损止盈单删除请求
    req = KSUserApiStruct.CTKSProfitAndLossOrderRemove()
    print req
    req.BrokerID = "6A89B428"
    req.InvestorID = "80006"
    req.ProfitAndLossOrderID = 2
    req.OrderLocalID = "8"
    req.ExchangeID = "CFFEX"
    req.BusinessUnit = "cffex"
    requestid = 1
    requestid += 1
    r = cosapi.ReqRemoveProfitAndLossOrder(req, requestid)
    if r == 0: print "ReqRemoveProfitAndLossOrder succeed\n"
    else: print "ReqRemoveProfitAndLossOrder failed\n"

    time.sleep(3)
    

if __name__ == "__main__": ks_spi_init()
