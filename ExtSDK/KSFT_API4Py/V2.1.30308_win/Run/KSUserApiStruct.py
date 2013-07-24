#-*- coding=utf-8 -*-
"""

A wrapper for KSFT_API
author: ksftapi@gmail.com(authorized by Lvsoft@gmail.com)
date: 2013-07-10

This file is part of KSFT_API4Py

KSFT_API4Py is free software; you can redistribute it and/or modify it
under the terms of the GUL Lesser General Public License as published
by the Free Software Foundation; either version 2.1 of the License, or
(at your option) any later version.

KSFT_API4Py is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY of FITNESS FOR A PARTICULAR PURPOSE. See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along the KSFT_API4Py; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
02110-1301 USA
"""

#This file is auto generated! Please don't edit directly.
class CThostFtdcTransferQryDetailRspField:
    def __init__(self, BankAccount="", FutureAccount="", TradeDate="", TradeCode="", CurrencyCode="", BankSerial=0, FutureSerial=0, FutureID="", CertCode="", TxAmount=0, Flag='0', TradeTime="", BankBrchID="", BankID=""):
        self.BankAccount=BankAccount
        self.FutureAccount=FutureAccount
        self.TradeDate=TradeDate
        self.TradeCode=TradeCode
        self.CurrencyCode=CurrencyCode
        self.BankSerial=BankSerial
        self.FutureSerial=FutureSerial
        self.FutureID=FutureID
        self.CertCode=CertCode
        self.TxAmount=TxAmount
        self.Flag=Flag
        self.TradeTime=TradeTime
        self.BankBrchID=BankBrchID
        self.BankID=BankID
        self.vcmap={'Flag': {"'1'": u'\u6709\u6548', "'2'": u'\u51b2\u6b63', "'0'": u'\u65e0\u6548\u6216\u5931\u8d25'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BankAccount', 'FutureAccount', 'TradeDate', 'TradeCode', 'CurrencyCode', 'BankSerial', 'FutureSerial', 'FutureID', 'CertCode', 'TxAmount', 'Flag', 'TradeTime', 'BankBrchID', 'BankID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BankAccount', u'银行账号'),('FutureAccount', u'资金帐号'),('TradeDate', u'交易日期'),('TradeCode', u'交易代码'),('CurrencyCode', u'货币代码'),('BankSerial', u'银行流水号'),('FutureSerial', u'期货流水号'),('FutureID', u'期货公司代码'),('CertCode', u'证件号码'),('TxAmount', u'发生金额'),('Flag', u'有效标志'),('TradeTime', u'交易时间'),('BankBrchID', u'银行分中心代码'),('BankID', u'银行代码')]])
    def getval(self, n):
        if n in ['Flag']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcInvestorAccountField:
    def __init__(self, InvestorID="", BrokerID="", AccountID=""):
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.AccountID=AccountID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'AccountID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('AccountID', u'投资者帐号')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcNoticeField:
    def __init__(self, Content="", SequenceLabel="", BrokerID=""):
        self.Content=Content
        self.SequenceLabel=SequenceLabel
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['Content', 'SequenceLabel', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('Content', u'消息正文'),('SequenceLabel', u'经纪公司通知内容序列号'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryCommRateModelField:
    def __init__(self, CommModelID="", BrokerID=""):
        self.CommModelID=CommModelID
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['CommModelID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('CommModelID', u'手续费率模板代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcBrokerSyncField:
    def __init__(self, BrokerID=""):
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryInvestorPositionField:
    def __init__(self, InstrumentID="", InvestorID="", BrokerID=""):
        self.InstrumentID=InstrumentID
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'InvestorID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcRspAuthenticateField:
    def __init__(self, UserID="", BrokerID="", UserProductInfo=""):
        self.UserID=UserID
        self.BrokerID=BrokerID
        self.UserProductInfo=UserProductInfo
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserID', 'BrokerID', 'UserProductInfo']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserID', u'用户代码'),('BrokerID', u'经纪公司代码'),('UserProductInfo', u'用户端产品信息')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcDepositResultInformField:
    def __init__(self, ReturnCode="", DepositSeqNo="", InvestorID="", BrokerID="", Deposit=0, DescrInfoForReturnCode="", RequestID=0):
        self.ReturnCode=ReturnCode
        self.DepositSeqNo=DepositSeqNo
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.Deposit=Deposit
        self.DescrInfoForReturnCode=DescrInfoForReturnCode
        self.RequestID=RequestID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ReturnCode', 'DepositSeqNo', 'InvestorID', 'BrokerID', 'Deposit', 'DescrInfoForReturnCode', 'RequestID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ReturnCode', u'返回代码'),('DepositSeqNo', u'出入金流水号，该流水号为银期报盘返回的流水号'),('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('Deposit', u'入金金额'),('DescrInfoForReturnCode', u'返回码描述'),('RequestID', u'请求编号')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcInvestorGroupField:
    def __init__(self, InvestorGroupID="", BrokerID="", InvestorGroupName=""):
        self.InvestorGroupID=InvestorGroupID
        self.BrokerID=BrokerID
        self.InvestorGroupName=InvestorGroupName
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorGroupID', 'BrokerID', 'InvestorGroupName']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorGroupID', u'投资者分组代码'),('BrokerID', u'经纪公司代码'),('InvestorGroupName', u'投资者分组名称')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcDiscountField:
    def __init__(self, InvestorID="", BrokerID="", InvestorRange='1', Discount=0):
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.InvestorRange=InvestorRange
        self.Discount=Discount
        self.vcmap={'InvestorRange': {"'1'": u'\u6240\u6709', "'2'": u'\u6295\u8d44\u8005\u7ec4', "'3'": u'\u5355\u4e00\u6295\u8d44\u8005'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'InvestorRange', 'Discount']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('InvestorRange', u'投资者范围'),('Discount', u'资金折扣比例')]])
    def getval(self, n):
        if n in ['InvestorRange']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcBrokerUserField:
    def __init__(self, UserName="", UserID="", UserType='0', BrokerID="", IsUsingOTP=0, IsActive=0):
        self.UserName=UserName
        self.UserID=UserID
        self.UserType=UserType
        self.BrokerID=BrokerID
        self.IsUsingOTP=IsUsingOTP
        self.IsActive=IsActive
        self.vcmap={'UserType': {"'1'": u'\u64cd\u4f5c\u5458', "'2'": u'\u7ba1\u7406\u5458', "'0'": u'\u6295\u8d44\u8005'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserName', 'UserID', 'UserType', 'BrokerID', 'IsUsingOTP', 'IsActive']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserName', u'用户名称'),('UserID', u'用户代码'),('UserType', u'用户类型'),('BrokerID', u'经纪公司代码'),('IsUsingOTP', u'是否使用令牌'),('IsActive', u'是否活跃')]])
    def getval(self, n):
        if n in ['UserType']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryOrderField:
    def __init__(self, InstrumentID="", ExchangeID="", InsertTimeStart="", InvestorID="", BrokerID="", OrderSysID="", InsertTimeEnd=""):
        self.InstrumentID=InstrumentID
        self.ExchangeID=ExchangeID
        self.InsertTimeStart=InsertTimeStart
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.OrderSysID=OrderSysID
        self.InsertTimeEnd=InsertTimeEnd
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'ExchangeID', 'InsertTimeStart', 'InvestorID', 'BrokerID', 'OrderSysID', 'InsertTimeEnd']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('ExchangeID', u'交易所代码'),('InsertTimeStart', u'开始时间'),('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('OrderSysID', u'报单编号'),('InsertTimeEnd', u'结束时间')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CTKSConditionalOrderRemove:
    def __init__(self, InvestorID="", BrokerID="", ConditionalOrderID=0):
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.ConditionalOrderID=ConditionalOrderID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'ConditionalOrderID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'营业部代码'),('ConditionalOrderID', u'条件单编号')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcExchangeField:
    def __init__(self, ExchangeProperty='0', ExchangeID="", ExchangeName=""):
        self.ExchangeProperty=ExchangeProperty
        self.ExchangeID=ExchangeID
        self.ExchangeName=ExchangeName
        self.vcmap={'ExchangeProperty': {"'1'": u'\u6839\u636e\u6210\u4ea4\u751f\u6210\u62a5\u5355', "'0'": u'\u6b63\u5e38'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeProperty', 'ExchangeID', 'ExchangeName']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeProperty', u'交易所属性'),('ExchangeID', u'交易所代码'),('ExchangeName', u'交易所名称')]])
    def getval(self, n):
        if n in ['ExchangeProperty']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcReqQueryAccountField:
    def __init__(self, BrokerBranchID="", UserID="", BankPassWord="", TradeTime="", VerifyCertNoFlag='0', TID=0, AccountID="", BankAccount="", InstallID=0, CustomerName="", TradeCode="", BankBranchID="", SessionID=0, BankID="", Password="", BankPwdFlag='0', RequestID=0, CustType='0', IdentifiedCardNo="", BankSerial="", OperNo="", TradingDay="", BankSecuAcc="", BrokerID="", DeviceID="", IdCardType='0', PlateSerial=0, TradeDate="", CurrencyID="", BankAccType='1', LastFragment='0', FutureSerial=0, BankSecuAccType='1', BrokerIDByBank="", SecuPwdFlag='0', Digest=""):
        self.BrokerBranchID=BrokerBranchID
        self.UserID=UserID
        self.BankPassWord=BankPassWord
        self.TradeTime=TradeTime
        self.VerifyCertNoFlag=VerifyCertNoFlag
        self.TID=TID
        self.AccountID=AccountID
        self.BankAccount=BankAccount
        self.InstallID=InstallID
        self.CustomerName=CustomerName
        self.TradeCode=TradeCode
        self.BankBranchID=BankBranchID
        self.SessionID=SessionID
        self.BankID=BankID
        self.Password=Password
        self.BankPwdFlag=BankPwdFlag
        self.RequestID=RequestID
        self.CustType=CustType
        self.IdentifiedCardNo=IdentifiedCardNo
        self.BankSerial=BankSerial
        self.OperNo=OperNo
        self.TradingDay=TradingDay
        self.BankSecuAcc=BankSecuAcc
        self.BrokerID=BrokerID
        self.DeviceID=DeviceID
        self.IdCardType=IdCardType
        self.PlateSerial=PlateSerial
        self.TradeDate=TradeDate
        self.CurrencyID=CurrencyID
        self.BankAccType=BankAccType
        self.LastFragment=LastFragment
        self.FutureSerial=FutureSerial
        self.BankSecuAccType=BankSecuAccType
        self.BrokerIDByBank=BrokerIDByBank
        self.SecuPwdFlag=SecuPwdFlag
        self.Digest=Digest
        self.vcmap={'CustType': {"'1'": u'\u673a\u6784\u6237', "'0'": u'\u81ea\u7136\u4eba'}, 'BankPwdFlag': {"'1'": u'\u660e\u6587\u6838\u5bf9', "'2'": u'\u5bc6\u6587\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}, 'LastFragment': {"'1'": u'\u4e0d\u662f\u6700\u540e\u5206\u7247', "'0'": u'\u662f\u6700\u540e\u5206\u7247'}, 'SecuPwdFlag': {"'1'": u'\u660e\u6587\u6838\u5bf9', "'2'": u'\u5bc6\u6587\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}, 'VerifyCertNoFlag': {"'1'": u'\u5426', "'0'": u'\u662f'}, 'BankAccType': {"'1'": u'\u94f6\u884c\u5b58\u6298', "'2'": u'\u50a8\u84c4\u5361', "'3'": u'\u4fe1\u7528\u5361'}, 'BankSecuAccType': {"'1'": u'\u94f6\u884c\u5b58\u6298', "'2'": u'\u50a8\u84c4\u5361', "'3'": u'\u4fe1\u7528\u5361'}, 'IdCardType': {"'9'": u'\u8425\u4e1a\u6267\u7167\u53f7', "'7'": u'\u53f0\u80de\u8bc1', "'x'": u'\u5176\u4ed6\u8bc1\u4ef6', "'5'": u'\u6237\u53e3\u7c3f', "'4'": u'\u58eb\u5175\u8bc1', "'1'": u'\u8eab\u4efd\u8bc1', "'0'": u'\u7ec4\u7ec7\u673a\u6784\u4ee3\u7801', "'6'": u'\u62a4\u7167', "'2'": u'\u519b\u5b98\u8bc1', "'8'": u'\u56de\u4e61\u8bc1', "'3'": u'\u8b66\u5b98\u8bc1', "'A'": u'\u7a0e\u52a1\u767b\u8bb0\u53f7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerBranchID', 'UserID', 'BankPassWord', 'TradeTime', 'VerifyCertNoFlag', 'TID', 'AccountID', 'BankAccount', 'InstallID', 'CustomerName', 'TradeCode', 'BankBranchID', 'SessionID', 'BankID', 'Password', 'BankPwdFlag', 'RequestID', 'CustType', 'IdentifiedCardNo', 'BankSerial', 'OperNo', 'TradingDay', 'BankSecuAcc', 'BrokerID', 'DeviceID', 'IdCardType', 'PlateSerial', 'TradeDate', 'CurrencyID', 'BankAccType', 'LastFragment', 'FutureSerial', 'BankSecuAccType', 'BrokerIDByBank', 'SecuPwdFlag', 'Digest']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerBranchID', u'期商分支机构代码'),('UserID', u'用户标识'),('BankPassWord', u'银行密码'),('TradeTime', u'交易时间'),('VerifyCertNoFlag', u'验证客户证件号码标志'),('TID', u'交易ID'),('AccountID', u'投资者帐号'),('BankAccount', u'银行帐号'),('InstallID', u'安装编号'),('CustomerName', u'客户姓名'),('TradeCode', u'业务功能码'),('BankBranchID', u'银行分支机构代码'),('SessionID', u'会话号'),('BankID', u'银行代码'),('Password', u'期货密码'),('BankPwdFlag', u'银行密码标志'),('RequestID', u'请求编号'),('CustType', u'客户类型'),('IdentifiedCardNo', u'证件号码'),('BankSerial', u'银行流水号'),('OperNo', u'交易柜员'),('TradingDay', u'交易系统日期'),('BankSecuAcc', u'期货单位帐号'),('BrokerID', u'期商代码'),('DeviceID', u'渠道标志'),('IdCardType', u'证件类型'),('PlateSerial', u'银期平台消息流水号'),('TradeDate', u'交易日期'),('CurrencyID', u'币种代码'),('BankAccType', u'银行帐号类型'),('LastFragment', u'最后分片标志'),('FutureSerial', u'期货公司流水号'),('BankSecuAccType', u'期货单位帐号类型'),('BrokerIDByBank', u'期货公司银行编码'),('SecuPwdFlag', u'期货资金密码核对标志'),('Digest', u'摘要')]])
    def getval(self, n):
        if n in ['VerifyCertNoFlag', 'BankPwdFlag', 'CustType', 'IdCardType', 'BankAccType', 'LastFragment', 'BankSecuAccType', 'SecuPwdFlag']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcCancelAccountField:
    def __init__(self, MoneyAccountStatus='0', BrokerBranchID="", BankPassWord="", Telephone="", IdentifiedCardNo="", VerifyCertNoFlag='0', TID=0, AccountID="", BankAccount="", Fax="", InstallID=0, SecuPwdFlag='0', CustomerName="", CountryCode="", TradeCode="", BankBranchID="", SessionID=0, Address="", PlateSerial=0, BankPwdFlag='0', ErrorID=0, CustType='0', Gender='0', BankID="", BankSerial="", OperNo="", TradingDay="", BankSecuAcc="", BrokerID="", CashExchangeCode='1', IdCardType='0', Password="", MobilePhone="", TradeDate="", CurrencyID="", ErrorMsg="", BankAccType='1', LastFragment='0', ZipCode="", BankSecuAccType='1', BrokerIDByBank="", TradeTime="", EMail="", Digest="", DeviceID=""):
        self.MoneyAccountStatus=MoneyAccountStatus
        self.BrokerBranchID=BrokerBranchID
        self.BankPassWord=BankPassWord
        self.Telephone=Telephone
        self.IdentifiedCardNo=IdentifiedCardNo
        self.VerifyCertNoFlag=VerifyCertNoFlag
        self.TID=TID
        self.AccountID=AccountID
        self.BankAccount=BankAccount
        self.Fax=Fax
        self.InstallID=InstallID
        self.SecuPwdFlag=SecuPwdFlag
        self.CustomerName=CustomerName
        self.CountryCode=CountryCode
        self.TradeCode=TradeCode
        self.BankBranchID=BankBranchID
        self.SessionID=SessionID
        self.Address=Address
        self.PlateSerial=PlateSerial
        self.BankPwdFlag=BankPwdFlag
        self.ErrorID=ErrorID
        self.CustType=CustType
        self.Gender=Gender
        self.BankID=BankID
        self.BankSerial=BankSerial
        self.OperNo=OperNo
        self.TradingDay=TradingDay
        self.BankSecuAcc=BankSecuAcc
        self.BrokerID=BrokerID
        self.CashExchangeCode=CashExchangeCode
        self.IdCardType=IdCardType
        self.Password=Password
        self.MobilePhone=MobilePhone
        self.TradeDate=TradeDate
        self.CurrencyID=CurrencyID
        self.ErrorMsg=ErrorMsg
        self.BankAccType=BankAccType
        self.LastFragment=LastFragment
        self.ZipCode=ZipCode
        self.BankSecuAccType=BankSecuAccType
        self.BrokerIDByBank=BrokerIDByBank
        self.TradeTime=TradeTime
        self.EMail=EMail
        self.Digest=Digest
        self.DeviceID=DeviceID
        self.vcmap={'CustType': {"'1'": u'\u673a\u6784\u6237', "'0'": u'\u81ea\u7136\u4eba'}, 'Gender': {"'1'": u'\u7537', "'2'": u'\u5973', "'0'": u'\u672a\u77e5\u72b6\u6001'}, 'BankPwdFlag': {"'1'": u'\u660e\u6587\u6838\u5bf9', "'2'": u'\u5bc6\u6587\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}, 'LastFragment': {"'1'": u'\u4e0d\u662f\u6700\u540e\u5206\u7247', "'0'": u'\u662f\u6700\u540e\u5206\u7247'}, 'MoneyAccountStatus': {"'1'": u'\u9500\u6237', "'0'": u'\u6b63\u5e38'}, 'SecuPwdFlag': {"'1'": u'\u660e\u6587\u6838\u5bf9', "'2'": u'\u5bc6\u6587\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}, 'CashExchangeCode': {"'1'": u'\u6c47', "'2'": u'\u949e'}, 'VerifyCertNoFlag': {"'1'": u'\u5426', "'0'": u'\u662f'}, 'BankAccType': {"'1'": u'\u94f6\u884c\u5b58\u6298', "'2'": u'\u50a8\u84c4\u5361', "'3'": u'\u4fe1\u7528\u5361'}, 'BankSecuAccType': {"'1'": u'\u94f6\u884c\u5b58\u6298', "'2'": u'\u50a8\u84c4\u5361', "'3'": u'\u4fe1\u7528\u5361'}, 'IdCardType': {"'9'": u'\u8425\u4e1a\u6267\u7167\u53f7', "'7'": u'\u53f0\u80de\u8bc1', "'x'": u'\u5176\u4ed6\u8bc1\u4ef6', "'5'": u'\u6237\u53e3\u7c3f', "'4'": u'\u58eb\u5175\u8bc1', "'1'": u'\u8eab\u4efd\u8bc1', "'0'": u'\u7ec4\u7ec7\u673a\u6784\u4ee3\u7801', "'6'": u'\u62a4\u7167', "'2'": u'\u519b\u5b98\u8bc1', "'8'": u'\u56de\u4e61\u8bc1', "'3'": u'\u8b66\u5b98\u8bc1', "'A'": u'\u7a0e\u52a1\u767b\u8bb0\u53f7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['MoneyAccountStatus', 'BrokerBranchID', 'BankPassWord', 'Telephone', 'IdentifiedCardNo', 'VerifyCertNoFlag', 'TID', 'AccountID', 'BankAccount', 'Fax', 'InstallID', 'SecuPwdFlag', 'CustomerName', 'CountryCode', 'TradeCode', 'BankBranchID', 'SessionID', 'Address', 'PlateSerial', 'BankPwdFlag', 'ErrorID', 'CustType', 'Gender', 'BankID', 'BankSerial', 'OperNo', 'TradingDay', 'BankSecuAcc', 'BrokerID', 'CashExchangeCode', 'IdCardType', 'Password', 'MobilePhone', 'TradeDate', 'CurrencyID', 'ErrorMsg', 'BankAccType', 'LastFragment', 'ZipCode', 'BankSecuAccType', 'BrokerIDByBank', 'TradeTime', 'EMail', 'Digest', 'DeviceID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('MoneyAccountStatus', u'资金账户状态'),('BrokerBranchID', u'期商分支机构代码'),('BankPassWord', u'银行密码'),('Telephone', u'电话号码'),('IdentifiedCardNo', u'证件号码'),('VerifyCertNoFlag', u'验证客户证件号码标志'),('TID', u'交易ID'),('AccountID', u'投资者帐号'),('BankAccount', u'银行帐号'),('Fax', u'传真'),('InstallID', u'安装编号'),('SecuPwdFlag', u'期货资金密码核对标志'),('CustomerName', u'客户姓名'),('CountryCode', u'国家代码'),('TradeCode', u'业务功能码'),('BankBranchID', u'银行分支机构代码'),('SessionID', u'会话号'),('Address', u'地址'),('PlateSerial', u'银期平台消息流水号'),('BankPwdFlag', u'银行密码标志'),('ErrorID', u'错误代码'),('CustType', u'客户类型'),('Gender', u'性别'),('BankID', u'银行代码'),('BankSerial', u'银行流水号'),('OperNo', u'交易柜员'),('TradingDay', u'交易系统日期'),('BankSecuAcc', u'期货单位帐号'),('BrokerID', u'期商代码'),('CashExchangeCode', u'汇钞标志'),('IdCardType', u'证件类型'),('Password', u'期货密码'),('MobilePhone', u'手机'),('TradeDate', u'交易日期'),('CurrencyID', u'币种代码'),('ErrorMsg', u'错误信息'),('BankAccType', u'银行帐号类型'),('LastFragment', u'最后分片标志'),('ZipCode', u'邮编'),('BankSecuAccType', u'期货单位帐号类型'),('BrokerIDByBank', u'期货公司银行编码'),('TradeTime', u'交易时间'),('EMail', u'电子邮件'),('Digest', u'摘要'),('DeviceID', u'渠道标志')]])
    def getval(self, n):
        if n in ['MoneyAccountStatus', 'VerifyCertNoFlag', 'SecuPwdFlag', 'BankPwdFlag', 'CustType', 'Gender', 'CashExchangeCode', 'IdCardType', 'BankAccType', 'LastFragment', 'BankSecuAccType']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcTransferHeaderField:
    def __init__(self, TradeDate="", TradeCode="", FutureID="", OperNo="", SessionID=0, Version="", TradeTime="", DeviceID="", BankBrchID="", BankID="", RecordNum="", TradeSerial="", RequestID=0):
        self.TradeDate=TradeDate
        self.TradeCode=TradeCode
        self.FutureID=FutureID
        self.OperNo=OperNo
        self.SessionID=SessionID
        self.Version=Version
        self.TradeTime=TradeTime
        self.DeviceID=DeviceID
        self.BankBrchID=BankBrchID
        self.BankID=BankID
        self.RecordNum=RecordNum
        self.TradeSerial=TradeSerial
        self.RequestID=RequestID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradeDate', 'TradeCode', 'FutureID', 'OperNo', 'SessionID', 'Version', 'TradeTime', 'DeviceID', 'BankBrchID', 'BankID', 'RecordNum', 'TradeSerial', 'RequestID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradeDate', u'交易日期，必填，格式：yyyymmdd'),('TradeCode', u'交易代码，必填'),('FutureID', u'期货公司代码，必填'),('OperNo', u'操作员，N/A'),('SessionID', u'会话编号，N/A'),('Version', u'版本号，常量，1.0'),('TradeTime', u'交易时间，必填，格式：hhmmss'),('DeviceID', u'交易设备类型，N/A'),('BankBrchID', u'银行分中心代码，根据查询银行得到，必填'),('BankID', u'银行代码，根据查询银行得到，必填'),('RecordNum', u'记录数，N/A'),('TradeSerial', u'发起方流水号，N/A'),('RequestID', u'请求编号，N/A')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcFrontStatusField:
    def __init__(self, FrontID=0, LastReportDate="", IsActive=0, LastReportTime=""):
        self.FrontID=FrontID
        self.LastReportDate=LastReportDate
        self.IsActive=IsActive
        self.LastReportTime=LastReportTime
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['FrontID', 'LastReportDate', 'IsActive', 'LastReportTime']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('FrontID', u'前置编号'),('LastReportDate', u'上次报告日期'),('IsActive', u'是否活跃'),('LastReportTime', u'上次报告时间')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcInvestorPositionField:
    def __init__(self, ShortFrozenAmount=0, FrozenMargin=0, HedgeFlag='1', PositionProfit=0, Commission=0, MarginRateByVolume=0, CombPosition=0, CashIn=0, PreSettlementPrice=0, CombLongFrozen=0, CloseAmount=0, PosiDirection='1', YdPosition=0, MarginRateByMoney=0, OpenVolume=0, CloseVolume=0, ExchangeMargin=0, InstrumentID="", PositionDate='1', CloseProfitByTrade=0, PreMargin=0, SettlementID=0, ShortFrozen=0, LongFrozen=0, TodayPosition=0, TradingDay="", PositionCost=0, BrokerID="", FrozenCash=0, OpenAmount=0, OpenCost=0, Position=0, FrozenCommission=0, CombShortFrozen=0, CloseProfitByDate=0, SettlementPrice=0, LongFrozenAmount=0, InvestorID="", CloseProfit=0, UseMargin=0):
        self.ShortFrozenAmount=ShortFrozenAmount
        self.FrozenMargin=FrozenMargin
        self.HedgeFlag=HedgeFlag
        self.PositionProfit=PositionProfit
        self.Commission=Commission
        self.MarginRateByVolume=MarginRateByVolume
        self.CombPosition=CombPosition
        self.CashIn=CashIn
        self.PreSettlementPrice=PreSettlementPrice
        self.CombLongFrozen=CombLongFrozen
        self.CloseAmount=CloseAmount
        self.PosiDirection=PosiDirection
        self.YdPosition=YdPosition
        self.MarginRateByMoney=MarginRateByMoney
        self.OpenVolume=OpenVolume
        self.CloseVolume=CloseVolume
        self.ExchangeMargin=ExchangeMargin
        self.InstrumentID=InstrumentID
        self.PositionDate=PositionDate
        self.CloseProfitByTrade=CloseProfitByTrade
        self.PreMargin=PreMargin
        self.SettlementID=SettlementID
        self.ShortFrozen=ShortFrozen
        self.LongFrozen=LongFrozen
        self.TodayPosition=TodayPosition
        self.TradingDay=TradingDay
        self.PositionCost=PositionCost
        self.BrokerID=BrokerID
        self.FrozenCash=FrozenCash
        self.OpenAmount=OpenAmount
        self.OpenCost=OpenCost
        self.Position=Position
        self.FrozenCommission=FrozenCommission
        self.CombShortFrozen=CombShortFrozen
        self.CloseProfitByDate=CloseProfitByDate
        self.SettlementPrice=SettlementPrice
        self.LongFrozenAmount=LongFrozenAmount
        self.InvestorID=InvestorID
        self.CloseProfit=CloseProfit
        self.UseMargin=UseMargin
        self.vcmap={'PositionDate': {"'1'": u'\u4eca\u65e5\u6301\u4ed3', "'2'": u'\u5386\u53f2\u6301\u4ed3'}, 'HedgeFlag': {"'1'": u'\u6295\u673a', "'2'": u'\u5957\u5229', "'3'": u'\u5957\u4fdd'}, 'PosiDirection': {"'1'": u'\u51c0', "'2'": u'\u591a\u5934', "'3'": u'\u7a7a\u5934'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ShortFrozenAmount', 'FrozenMargin', 'HedgeFlag', 'PositionProfit', 'Commission', 'MarginRateByVolume', 'CombPosition', 'CashIn', 'PreSettlementPrice', 'CombLongFrozen', 'CloseAmount', 'PosiDirection', 'YdPosition', 'MarginRateByMoney', 'OpenVolume', 'CloseVolume', 'ExchangeMargin', 'InstrumentID', 'PositionDate', 'CloseProfitByTrade', 'PreMargin', 'SettlementID', 'ShortFrozen', 'LongFrozen', 'TodayPosition', 'TradingDay', 'PositionCost', 'BrokerID', 'FrozenCash', 'OpenAmount', 'OpenCost', 'Position', 'FrozenCommission', 'CombShortFrozen', 'CloseProfitByDate', 'SettlementPrice', 'LongFrozenAmount', 'InvestorID', 'CloseProfit', 'UseMargin']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ShortFrozenAmount', u'开仓冻结金额'),('FrozenMargin', u'冻结的保证金'),('HedgeFlag', u'投机套保标志'),('PositionProfit', u'持仓盈亏'),('Commission', u'手续费'),('MarginRateByVolume', u'保证金率(按手数)'),('CombPosition', u'组合成交形成的持仓'),('CashIn', u'资金差额'),('PreSettlementPrice', u'上次结算价'),('CombLongFrozen', u'组合多头冻结'),('CloseAmount', u'平仓金额'),('PosiDirection', u'持仓多空方向'),('YdPosition', u'上日持仓'),('MarginRateByMoney', u'保证金率'),('OpenVolume', u'开仓量'),('CloseVolume', u'平仓量'),('ExchangeMargin', u'交易所保证金'),('InstrumentID', u'合约代码'),('PositionDate', u'持仓日期'),('CloseProfitByTrade', u'逐笔对冲平仓盈亏'),('PreMargin', u'上次占用的保证金'),('SettlementID', u'结算编号'),('ShortFrozen', u'空头冻结'),('LongFrozen', u'多头冻结'),('TodayPosition', u'今日持仓'),('TradingDay', u'交易日'),('PositionCost', u'持仓成本'),('BrokerID', u'经纪公司代码'),('FrozenCash', u'冻结的资金'),('OpenAmount', u'开仓金额'),('OpenCost', u'开仓成本'),('Position', u'今日持仓'),('FrozenCommission', u'冻结的手续费'),('CombShortFrozen', u'组合空头冻结'),('CloseProfitByDate', u'逐日盯市平仓盈亏'),('SettlementPrice', u'本次结算价'),('LongFrozenAmount', u'开仓冻结金额'),('InvestorID', u'投资者代码'),('CloseProfit', u'平仓盈亏'),('UseMargin', u'占用的保证金')]])
    def getval(self, n):
        if n in ['HedgeFlag', 'PosiDirection', 'PositionDate']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryExchangeSequenceField:
    def __init__(self, ExchangeID=""):
        self.ExchangeID=ExchangeID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryLinkManField:
    def __init__(self, InvestorID="", BrokerID=""):
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryTransferSerialField:
    def __init__(self, BankID="", BrokerID="", AccountID=""):
        self.BankID=BankID
        self.BrokerID=BrokerID
        self.AccountID=AccountID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BankID', 'BrokerID', 'AccountID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BankID', u'银行编码'),('BrokerID', u'经纪公司代码'),('AccountID', u'投资者帐号')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcExchangeOrderActionErrorField:
    def __init__(self, ExchangeID="", InstallID=0, OrderLocalID="", ErrorMsg="", TraderID="", ActionLocalID="", OrderSysID="", ErrorID=0):
        self.ExchangeID=ExchangeID
        self.InstallID=InstallID
        self.OrderLocalID=OrderLocalID
        self.ErrorMsg=ErrorMsg
        self.TraderID=TraderID
        self.ActionLocalID=ActionLocalID
        self.OrderSysID=OrderSysID
        self.ErrorID=ErrorID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeID', 'InstallID', 'OrderLocalID', 'ErrorMsg', 'TraderID', 'ActionLocalID', 'OrderSysID', 'ErrorID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeID', u'交易所代码'),('InstallID', u'安装编号'),('OrderLocalID', u'本地报单编号'),('ErrorMsg', u'错误信息'),('TraderID', u'交易所交易员代码'),('ActionLocalID', u'操作本地编号'),('OrderSysID', u'报单编号'),('ErrorID', u'错误代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcReqAuthenticateField:
    def __init__(self, UserID="", AuthCode="", BrokerID="", UserProductInfo=""):
        self.UserID=UserID
        self.AuthCode=AuthCode
        self.BrokerID=BrokerID
        self.UserProductInfo=UserProductInfo
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserID', 'AuthCode', 'BrokerID', 'UserProductInfo']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserID', u'用户代码'),('AuthCode', u'认证码'),('BrokerID', u'经纪公司代码'),('UserProductInfo', u'用户端产品信息')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryHisOrderField:
    def __init__(self, InstrumentID="", ExchangeID="", SettlementID=0, InsertTimeStart="", InvestorID="", BrokerID="", OrderSysID="", TradingDay="", InsertTimeEnd=""):
        self.InstrumentID=InstrumentID
        self.ExchangeID=ExchangeID
        self.SettlementID=SettlementID
        self.InsertTimeStart=InsertTimeStart
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.OrderSysID=OrderSysID
        self.TradingDay=TradingDay
        self.InsertTimeEnd=InsertTimeEnd
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'ExchangeID', 'SettlementID', 'InsertTimeStart', 'InvestorID', 'BrokerID', 'OrderSysID', 'TradingDay', 'InsertTimeEnd']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('ExchangeID', u'交易所代码'),('SettlementID', u'结算编号'),('InsertTimeStart', u'开始时间'),('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('OrderSysID', u'报单编号'),('TradingDay', u'交易日'),('InsertTimeEnd', u'结束时间')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcSyncingInstrumentTradingRightField:
    def __init__(self, InstrumentID="", InvestorID="", BrokerID="", InvestorRange='1', TradingRight='0'):
        self.InstrumentID=InstrumentID
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.InvestorRange=InvestorRange
        self.TradingRight=TradingRight
        self.vcmap={'InvestorRange': {"'1'": u'\u6240\u6709', "'2'": u'\u6295\u8d44\u8005\u7ec4', "'3'": u'\u5355\u4e00\u6295\u8d44\u8005'}, 'TradingRight': {"'1'": u'\u53ea\u80fd\u5e73\u4ed3', "'2'": u'\u4e0d\u80fd\u4ea4\u6613', "'0'": u'\u53ef\u4ee5\u4ea4\u6613'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'InvestorID', 'BrokerID', 'InvestorRange', 'TradingRight']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('InvestorRange', u'投资者范围'),('TradingRight', u'交易权限')]])
    def getval(self, n):
        if n in ['InvestorRange', 'TradingRight']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryTradingCodeField:
    def __init__(self, InvestorID="", ExchangeID="", BrokerID="", ClientIDType='1', ClientID=""):
        self.InvestorID=InvestorID
        self.ExchangeID=ExchangeID
        self.BrokerID=BrokerID
        self.ClientIDType=ClientIDType
        self.ClientID=ClientID
        self.vcmap={'ClientIDType': {"'1'": u'\u6295\u673a', "'2'": u'\u5957\u5229', "'3'": u'\u5957\u4fdd'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'ExchangeID', 'BrokerID', 'ClientIDType', 'ClientID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('ExchangeID', u'交易所代码'),('BrokerID', u'经纪公司代码'),('ClientIDType', u'交易编码类型'),('ClientID', u'客户代码')]])
    def getval(self, n):
        if n in ['ClientIDType']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CTKSCOSStatusField:
    def __init__(self, ConditionalOrderStatus='0', CombOffsetFlag='0', UserID="", LimitPrice=0, Direction='0', ActiveTime="", Memo="", ClientID="", VolumeTotal=0, VolumeTraded=0, OrderStatus='0', OrderSysID="", CurrencyID="", InstrumentID="", ExchangeID="", CancelUserID="", TradePrice=0, TradingDay="", BrokerID="", InsertTime="", CombHedgeFlag='1', CancelTime="", OrderLocalID="", BusinessUnit="", SequenceNo=0, InvestorID="", ConditionalOrderID=0, VolumeTotalOriginal=0):
        self.ConditionalOrderStatus=ConditionalOrderStatus
        self.CombOffsetFlag=CombOffsetFlag
        self.UserID=UserID
        self.LimitPrice=LimitPrice
        self.Direction=Direction
        self.ActiveTime=ActiveTime
        self.Memo=Memo
        self.ClientID=ClientID
        self.VolumeTotal=VolumeTotal
        self.VolumeTraded=VolumeTraded
        self.OrderStatus=OrderStatus
        self.OrderSysID=OrderSysID
        self.CurrencyID=CurrencyID
        self.InstrumentID=InstrumentID
        self.ExchangeID=ExchangeID
        self.CancelUserID=CancelUserID
        self.TradePrice=TradePrice
        self.TradingDay=TradingDay
        self.BrokerID=BrokerID
        self.InsertTime=InsertTime
        self.CombHedgeFlag=CombHedgeFlag
        self.CancelTime=CancelTime
        self.OrderLocalID=OrderLocalID
        self.BusinessUnit=BusinessUnit
        self.SequenceNo=SequenceNo
        self.InvestorID=InvestorID
        self.ConditionalOrderID=ConditionalOrderID
        self.VolumeTotalOriginal=VolumeTotalOriginal
        self.vcmap={'ConditionalOrderStatus': {"'7'": u'\u9009\u62e9\u8df3\u8fc7', "'8'": u'\u9009\u62e9\u7ec8\u6b62', "'5'": u'\u53d1\u9001\u6210\u529f', "'4'": u'\u53d1\u9001\u8d85\u65f6', "'1'": u'\u672a\u89e6\u53d1', "'0'": u'\u6682\u505c', "'6'": u'\u7b49\u5f85\u9009\u62e9', "'2'": u'\u5220\u9664', "'3'": u'\u5df2\u89e6\u53d1\u672a\u53d1\u9001'}, 'CombHedgeFlag': {"'1'": u'\u6295\u673a', "'2'": u'\u5957\u5229', "'3'": u'\u5957\u4fdd'}, 'CombOffsetFlag': {"'5'": u'\u5f3a\u51cf', "'4'": u'\u5e73\u6628', "'1'": u'\u5e73\u4ed3', "'0'": u'\u5f00\u4ed3', "'6'": u'\u672c\u5730\u5f3a\u5e73', "'2'": u'\u5f3a\u5e73', "'3'": u'\u5e73\u4eca'}, 'Direction': {"'1'": u'\u5356', "'0'": u'\u4e70'}, 'OrderStatus': {"'b'": u'\u5c1a\u672a\u89e6\u53d1', "'5'": u'\u64a4\u5355', "'c'": u'\u5df2\u89e6\u53d1', "'4'": u'\u672a\u6210\u4ea4\u4e0d\u5728\u961f\u5217\u4e2d', "'1'": u'\u90e8\u5206\u6210\u4ea4\u8fd8\u5728\u961f\u5217\u4e2d', "'0'": u'\u5168\u90e8\u6210\u4ea4', "'2'": u'\u90e8\u5206\u6210\u4ea4\u4e0d\u5728\u961f\u5217\u4e2d', "'3'": u'\u672a\u6210\u4ea4\u8fd8\u5728\u961f\u5217\u4e2d', "'a'": u'\u672a\u77e5'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ConditionalOrderStatus', 'CombOffsetFlag', 'UserID', 'LimitPrice', 'Direction', 'ActiveTime', 'Memo', 'ClientID', 'VolumeTotal', 'VolumeTraded', 'OrderStatus', 'OrderSysID', 'CurrencyID', 'InstrumentID', 'ExchangeID', 'CancelUserID', 'TradePrice', 'TradingDay', 'BrokerID', 'InsertTime', 'CombHedgeFlag', 'CancelTime', 'OrderLocalID', 'BusinessUnit', 'SequenceNo', 'InvestorID', 'ConditionalOrderID', 'VolumeTotalOriginal']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ConditionalOrderStatus', u'条件单状态'),('CombOffsetFlag', u'开平标志'),('UserID', u'操作员'),('LimitPrice', u'价格'),('Direction', u'买卖方向'),('ActiveTime', u'激活时间'),('Memo', u'备注'),('ClientID', u'客户代码'),('VolumeTotal', u'剩余数量'),('VolumeTraded', u'今成交数量'),('OrderStatus', u'报单状态'),('OrderSysID', u'报单编号'),('CurrencyID', u'货币代码'),('InstrumentID', u'合约代码'),('ExchangeID', u'交易所代码'),('CancelUserID', u'撤销用户'),('TradePrice', u'成交价格'),('TradingDay', u'交易日'),('BrokerID', u'营业部代码'),('InsertTime', u'委托时间'),('CombHedgeFlag', u'投机套保标志'),('CancelTime', u'撤销时间'),('OrderLocalID', u'本地报单编号'),('BusinessUnit', u'业务单元'),('SequenceNo', u'序号'),('InvestorID', u'投资者代码'),('ConditionalOrderID', u'条件单编号'),('VolumeTotalOriginal', u'数量')]])
    def getval(self, n):
        if n in ['ConditionalOrderStatus', 'CombOffsetFlag', 'Direction', 'OrderStatus', 'CombHedgeFlag']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcRspUserLoginField:
    def __init__(self, CZCETime="", SHFETime="", MaxOrderRef="", UserID="", TradingDay="", SessionID=0, SystemName="", FrontID=0, FFEXTime="", BrokerID="", DCETime="", LoginTime=""):
        self.CZCETime=CZCETime
        self.SHFETime=SHFETime
        self.MaxOrderRef=MaxOrderRef
        self.UserID=UserID
        self.TradingDay=TradingDay
        self.SessionID=SessionID
        self.SystemName=SystemName
        self.FrontID=FrontID
        self.FFEXTime=FFEXTime
        self.BrokerID=BrokerID
        self.DCETime=DCETime
        self.LoginTime=LoginTime
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['CZCETime', 'SHFETime', 'MaxOrderRef', 'UserID', 'TradingDay', 'SessionID', 'SystemName', 'FrontID', 'FFEXTime', 'BrokerID', 'DCETime', 'LoginTime']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('CZCETime', u'郑商所时间'),('SHFETime', u'上期所时间'),('MaxOrderRef', u'最大报单引用'),('UserID', u'用户代码'),('TradingDay', u'交易日'),('SessionID', u'会话编号'),('SystemName', u'交易系统名称'),('FrontID', u'前置编号'),('FFEXTime', u'中金所时间'),('BrokerID', u'经纪公司代码'),('DCETime', u'大商所时间'),('LoginTime', u'登录成功时间')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcSyncingInvestorField:
    def __init__(self, CommModelID="", InvestorName="", Mobile="", IdentifiedCardNo="", Telephone="", InvestorID="", BrokerID="", Address="", InvestorGroupID="", OpenDate="", IsActive=0, IdentifiedCardType='0'):
        self.CommModelID=CommModelID
        self.InvestorName=InvestorName
        self.Mobile=Mobile
        self.IdentifiedCardNo=IdentifiedCardNo
        self.Telephone=Telephone
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.Address=Address
        self.InvestorGroupID=InvestorGroupID
        self.OpenDate=OpenDate
        self.IsActive=IsActive
        self.IdentifiedCardType=IdentifiedCardType
        self.vcmap={'IdentifiedCardType': {"'9'": u'\u8425\u4e1a\u6267\u7167\u53f7', "'7'": u'\u53f0\u80de\u8bc1', "'x'": u'\u5176\u4ed6\u8bc1\u4ef6', "'5'": u'\u6237\u53e3\u7c3f', "'4'": u'\u58eb\u5175\u8bc1', "'1'": u'\u8eab\u4efd\u8bc1', "'0'": u'\u7ec4\u7ec7\u673a\u6784\u4ee3\u7801', "'6'": u'\u62a4\u7167', "'2'": u'\u519b\u5b98\u8bc1', "'8'": u'\u56de\u4e61\u8bc1', "'3'": u'\u8b66\u5b98\u8bc1', "'A'": u'\u7a0e\u52a1\u767b\u8bb0\u53f7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['CommModelID', 'InvestorName', 'Mobile', 'IdentifiedCardNo', 'Telephone', 'InvestorID', 'BrokerID', 'Address', 'InvestorGroupID', 'OpenDate', 'IsActive', 'IdentifiedCardType']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('CommModelID', u'手续费率模板代码'),('InvestorName', u'投资者名称'),('Mobile', u'手机'),('IdentifiedCardNo', u'证件号码'),('Telephone', u'联系电话'),('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('Address', u'通讯地址'),('InvestorGroupID', u'投资者分组代码'),('OpenDate', u'开户日期'),('IsActive', u'是否活跃'),('IdentifiedCardType', u'证件类型')]])
    def getval(self, n):
        if n in ['IdentifiedCardType']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryInvestorPositionDetailField:
    def __init__(self, InstrumentID="", InvestorID="", BrokerID=""):
        self.InstrumentID=InstrumentID
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'InvestorID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcInvestorPositionDetailField:
    def __init__(self, PositionProfitByDate=0, ExchMargin=0, TradeType='0', MarginRateByMoney=0, HedgeFlag='1', MarginRateByVolume=0, Direction='0', CloseAmount=0, OpenPrice=0, Volume=0, LastSettlementPrice=0, CloseVolume=0, InstrumentID="", ExchangeID="", CloseProfitByTrade=0, SettlementID=0, TradingDay="", BrokerID="", Margin=0, TradeID="", PositionProfitByTrade=0, CloseProfitByDate=0, SettlementPrice=0, InvestorID="", CombInstrumentID="", OpenDate=""):
        self.PositionProfitByDate=PositionProfitByDate
        self.ExchMargin=ExchMargin
        self.TradeType=TradeType
        self.MarginRateByMoney=MarginRateByMoney
        self.HedgeFlag=HedgeFlag
        self.MarginRateByVolume=MarginRateByVolume
        self.Direction=Direction
        self.CloseAmount=CloseAmount
        self.OpenPrice=OpenPrice
        self.Volume=Volume
        self.LastSettlementPrice=LastSettlementPrice
        self.CloseVolume=CloseVolume
        self.InstrumentID=InstrumentID
        self.ExchangeID=ExchangeID
        self.CloseProfitByTrade=CloseProfitByTrade
        self.SettlementID=SettlementID
        self.TradingDay=TradingDay
        self.BrokerID=BrokerID
        self.Margin=Margin
        self.TradeID=TradeID
        self.PositionProfitByTrade=PositionProfitByTrade
        self.CloseProfitByDate=CloseProfitByDate
        self.SettlementPrice=SettlementPrice
        self.InvestorID=InvestorID
        self.CombInstrumentID=CombInstrumentID
        self.OpenDate=OpenDate
        self.vcmap={'Direction': {"'1'": u'\u5356', "'0'": u'\u4e70'}, 'TradeType': {"'1'": u'\u671f\u6743\u6267\u884c', "'2'": u'OTC\u6210\u4ea4', "'0'": u'\u666e\u901a\u6210\u4ea4', "'3'": u'\u671f\u8f6c\u73b0\u884d\u751f\u6210\u4ea4', "'4'": u'\u7ec4\u5408\u884d\u751f\u6210\u4ea4'}, 'HedgeFlag': {"'1'": u'\u6295\u673a', "'2'": u'\u5957\u5229', "'3'": u'\u5957\u4fdd'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['PositionProfitByDate', 'ExchMargin', 'TradeType', 'MarginRateByMoney', 'HedgeFlag', 'MarginRateByVolume', 'Direction', 'CloseAmount', 'OpenPrice', 'Volume', 'LastSettlementPrice', 'CloseVolume', 'InstrumentID', 'ExchangeID', 'CloseProfitByTrade', 'SettlementID', 'TradingDay', 'BrokerID', 'Margin', 'TradeID', 'PositionProfitByTrade', 'CloseProfitByDate', 'SettlementPrice', 'InvestorID', 'CombInstrumentID', 'OpenDate']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('PositionProfitByDate', u'逐日盯市持仓盈亏'),('ExchMargin', u'交易所保证金'),('TradeType', u'成交类型'),('MarginRateByMoney', u'保证金率'),('HedgeFlag', u'投机套保标志'),('MarginRateByVolume', u'保证金率(按手数)'),('Direction', u'买卖'),('CloseAmount', u'平仓金额'),('OpenPrice', u'开仓价'),('Volume', u'数量'),('LastSettlementPrice', u'昨结算价'),('CloseVolume', u'平仓量'),('InstrumentID', u'合约代码'),('ExchangeID', u'交易所代码'),('CloseProfitByTrade', u'逐笔对冲平仓盈亏'),('SettlementID', u'结算编号'),('TradingDay', u'交易日'),('BrokerID', u'经纪公司代码'),('Margin', u'投资者保证金'),('TradeID', u'成交编号'),('PositionProfitByTrade', u'逐笔对冲持仓盈亏'),('CloseProfitByDate', u'逐日盯市平仓盈亏'),('SettlementPrice', u'结算价'),('InvestorID', u'投资者代码'),('CombInstrumentID', u'组合合约代码'),('OpenDate', u'开仓日期')]])
    def getval(self, n):
        if n in ['TradeType', 'HedgeFlag', 'Direction']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcExchangeOrderField:
    def __init__(self, ContingentCondition='1', NotifySequence=0, VolumeTraded=0, IsAutoSuspend=0, TraderID="", LimitPrice=0, Direction='0', InstallID=0, ParticipantID="", VolumeTotalOriginal=0, ExchangeInstID="", ClientID="", VolumeTotal=0, OrderPriceType='1', TimeCondition='1', OrderStatus='0', OrderSysID="", OrderSubmitStatus='0', CombOffsetFlag="", StopPrice=0, ExchangeID="", MinVolume=0, SettlementID=0, ForceCloseReason='0', OrderType='0', UpdateTime="", TradingDay="", ActiveTime="", OrderSource='0', InsertTime="", SuspendTime="", ClearingPartID="", CombHedgeFlag="", CancelTime="", GTDDate="", OrderLocalID="", BusinessUnit="", InsertDate="", SequenceNo=0, VolumeCondition='1', RequestID=0, ActiveTraderID=""):
        self.ContingentCondition=ContingentCondition
        self.NotifySequence=NotifySequence
        self.VolumeTraded=VolumeTraded
        self.IsAutoSuspend=IsAutoSuspend
        self.TraderID=TraderID
        self.LimitPrice=LimitPrice
        self.Direction=Direction
        self.InstallID=InstallID
        self.ParticipantID=ParticipantID
        self.VolumeTotalOriginal=VolumeTotalOriginal
        self.ExchangeInstID=ExchangeInstID
        self.ClientID=ClientID
        self.VolumeTotal=VolumeTotal
        self.OrderPriceType=OrderPriceType
        self.TimeCondition=TimeCondition
        self.OrderStatus=OrderStatus
        self.OrderSysID=OrderSysID
        self.OrderSubmitStatus=OrderSubmitStatus
        self.CombOffsetFlag=CombOffsetFlag
        self.StopPrice=StopPrice
        self.ExchangeID=ExchangeID
        self.MinVolume=MinVolume
        self.SettlementID=SettlementID
        self.ForceCloseReason=ForceCloseReason
        self.OrderType=OrderType
        self.UpdateTime=UpdateTime
        self.TradingDay=TradingDay
        self.ActiveTime=ActiveTime
        self.OrderSource=OrderSource
        self.InsertTime=InsertTime
        self.SuspendTime=SuspendTime
        self.ClearingPartID=ClearingPartID
        self.CombHedgeFlag=CombHedgeFlag
        self.CancelTime=CancelTime
        self.GTDDate=GTDDate
        self.OrderLocalID=OrderLocalID
        self.BusinessUnit=BusinessUnit
        self.InsertDate=InsertDate
        self.SequenceNo=SequenceNo
        self.VolumeCondition=VolumeCondition
        self.RequestID=RequestID
        self.ActiveTraderID=ActiveTraderID
        self.vcmap={'ContingentCondition': {"'9'": u'\u5356\u4e00\u4ef7\u5927\u4e8e\u6761\u4ef6\u4ef7', "'B'": u'\u5356\u4e00\u4ef7\u5c0f\u4e8e\u6761\u4ef6\u4ef7', "'7'": u'\u6700\u65b0\u4ef7\u5c0f\u4e8e\u6761\u4ef6\u4ef7', "'8'": u'\u6700\u65b0\u4ef7\u5c0f\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'5'": u'\u6700\u65b0\u4ef7\u5927\u4e8e\u6761\u4ef6\u4ef7', "'C'": u'\u5356\u4e00\u4ef7\u5c0f\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'4'": u'\u9884\u57cb\u5355', "'1'": u'\u7acb\u5373', "'6'": u'\u6700\u65b0\u4ef7\u5927\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'2'": u'\u6b62\u635f', "'H'": u'\u4e70\u4e00\u4ef7\u5c0f\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'E'": u'\u4e70\u4e00\u4ef7\u5927\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'3'": u'\u6b62\u8d62', "'D'": u'\u4e70\u4e00\u4ef7\u5927\u4e8e\u6761\u4ef6\u4ef7', "'A'": u'\u5356\u4e00\u4ef7\u5927\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'F'": u'\u4e70\u4e00\u4ef7\u5c0f\u4e8e\u6761\u4ef6\u4ef7'}, 'Direction': {"'1'": u'\u5356', "'0'": u'\u4e70'}, 'ForceCloseReason': {"'7'": u'\u81ea\u7136\u4eba\u4e34\u8fd1\u4ea4\u5272', "'5'": u'\u8fdd\u89c4', "'4'": u'\u6301\u4ed3\u975e\u6574\u6570\u500d', "'1'": u'\u8d44\u91d1\u4e0d\u8db3', "'0'": u'\u975e\u5f3a\u5e73', "'6'": u'\u5176\u5b83', "'2'": u'\u5ba2\u6237\u8d85\u4ed3', "'3'": u'\u4f1a\u5458\u8d85\u4ed3'}, 'OrderType': {"'5'": u'\u4e92\u6362\u5355', "'4'": u'\u6761\u4ef6\u5355', "'1'": u'\u62a5\u4ef7\u884d\u751f', "'0'": u'\u6b63\u5e38', "'2'": u'\u7ec4\u5408\u884d\u751f', "'3'": u'\u7ec4\u5408\u62a5\u5355'}, 'OrderPriceType': {"'9'": u'\u5356\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e1\u4e2aticks', "'B'": u'\u5356\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e3\u4e2aticks', "'7'": u'\u6700\u65b0\u4ef7\u6d6e\u52a8\u4e0a\u6d6e3\u4e2aticks', "'8'": u'\u5356\u4e00\u4ef7', "'5'": u'\u6700\u65b0\u4ef7\u6d6e\u52a8\u4e0a\u6d6e1\u4e2aticks', "'C'": u'\u4e70\u4e00\u4ef7', "'4'": u'\u6700\u65b0\u4ef7', "'1'": u'\u4efb\u610f\u4ef7', "'6'": u'\u6700\u65b0\u4ef7\u6d6e\u52a8\u4e0a\u6d6e2\u4e2aticks', "'2'": u'\u9650\u4ef7', "'E'": u'\u4e70\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e2\u4e2aticks', "'3'": u'\u6700\u4f18\u4ef7', "'D'": u'\u4e70\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e1\u4e2aticks', "'A'": u'\u5356\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e2\u4e2aticks', "'F'": u'\u4e70\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e3\u4e2aticks'}, 'VolumeCondition': {"'1'": u'\u4efb\u4f55\u6570\u91cf', "'2'": u'\u6700\u5c0f\u6570\u91cf', "'3'": u'\u5168\u90e8\u6570\u91cf'}, 'TimeCondition': {"'5'": u'\u64a4\u9500\u524d\u6709\u6548', "'4'": u'\u6307\u5b9a\u65e5\u671f\u524d\u6709\u6548', "'1'": u'\u7acb\u5373\u5b8c\u6210\uff0c\u5426\u5219\u64a4\u9500', "'6'": u'\u96c6\u5408\u7ade\u4ef7\u6709\u6548', "'2'": u'\u672c\u8282\u6709\u6548', "'3'": u'\u5f53\u65e5\u6709\u6548'}, 'OrderSource': {"'1'": u'\u6765\u81ea\u7ba1\u7406\u5458', "'0'": u'\u6765\u81ea\u53c2\u4e0e\u8005'}, 'OrderStatus': {"'b'": u'\u5c1a\u672a\u89e6\u53d1', "'5'": u'\u64a4\u5355', "'c'": u'\u5df2\u89e6\u53d1', "'4'": u'\u672a\u6210\u4ea4\u4e0d\u5728\u961f\u5217\u4e2d', "'1'": u'\u90e8\u5206\u6210\u4ea4\u8fd8\u5728\u961f\u5217\u4e2d', "'0'": u'\u5168\u90e8\u6210\u4ea4', "'2'": u'\u90e8\u5206\u6210\u4ea4\u4e0d\u5728\u961f\u5217\u4e2d', "'3'": u'\u672a\u6210\u4ea4\u8fd8\u5728\u961f\u5217\u4e2d', "'a'": u'\u672a\u77e5'}, 'OrderSubmitStatus': {"'5'": u'\u64a4\u5355\u5df2\u7ecf\u88ab\u62d2\u7edd', "'4'": u'\u62a5\u5355\u5df2\u7ecf\u88ab\u62d2\u7edd', "'1'": u'\u64a4\u5355\u5df2\u7ecf\u63d0\u4ea4', "'0'": u'\u5df2\u7ecf\u63d0\u4ea4', "'6'": u'\u6539\u5355\u5df2\u7ecf\u88ab\u62d2\u7edd', "'2'": u'\u4fee\u6539\u5df2\u7ecf\u63d0\u4ea4', "'3'": u'\u5df2\u7ecf\u63a5\u53d7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ContingentCondition', 'NotifySequence', 'VolumeTraded', 'IsAutoSuspend', 'TraderID', 'LimitPrice', 'Direction', 'InstallID', 'ParticipantID', 'VolumeTotalOriginal', 'ExchangeInstID', 'ClientID', 'VolumeTotal', 'OrderPriceType', 'TimeCondition', 'OrderStatus', 'OrderSysID', 'OrderSubmitStatus', 'CombOffsetFlag', 'StopPrice', 'ExchangeID', 'MinVolume', 'SettlementID', 'ForceCloseReason', 'OrderType', 'UpdateTime', 'TradingDay', 'ActiveTime', 'OrderSource', 'InsertTime', 'SuspendTime', 'ClearingPartID', 'CombHedgeFlag', 'CancelTime', 'GTDDate', 'OrderLocalID', 'BusinessUnit', 'InsertDate', 'SequenceNo', 'VolumeCondition', 'RequestID', 'ActiveTraderID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ContingentCondition', u'触发条件'),('NotifySequence', u'报单提示序号'),('VolumeTraded', u'今成交数量'),('IsAutoSuspend', u'自动挂起标志'),('TraderID', u'交易所交易员代码'),('LimitPrice', u'价格'),('Direction', u'买卖方向'),('InstallID', u'安装编号'),('ParticipantID', u'会员代码'),('VolumeTotalOriginal', u'数量'),('ExchangeInstID', u'合约在交易所的代码'),('ClientID', u'客户代码'),('VolumeTotal', u'剩余数量'),('OrderPriceType', u'报单价格条件'),('TimeCondition', u'有效期类型'),('OrderStatus', u'报单状态'),('OrderSysID', u'报单编号'),('OrderSubmitStatus', u'报单提交状态'),('CombOffsetFlag', u'组合开平标志'),('StopPrice', u'止损价'),('ExchangeID', u'交易所代码'),('MinVolume', u'最小成交量'),('SettlementID', u'结算编号'),('ForceCloseReason', u'强平原因'),('OrderType', u'报单类型'),('UpdateTime', u'最后修改时间'),('TradingDay', u'交易日'),('ActiveTime', u'激活时间'),('OrderSource', u'报单来源'),('InsertTime', u'委托时间'),('SuspendTime', u'挂起时间'),('ClearingPartID', u'结算会员编号'),('CombHedgeFlag', u'组合投机套保标志'),('CancelTime', u'撤销时间'),('GTDDate', u'GTD日期'),('OrderLocalID', u'本地报单编号'),('BusinessUnit', u'业务单元'),('InsertDate', u'报单日期'),('SequenceNo', u'序号'),('VolumeCondition', u'成交量类型'),('RequestID', u'请求编号'),('ActiveTraderID', u'最后修改交易所交易员代码')]])
    def getval(self, n):
        if n in ['ContingentCondition', 'Direction', 'OrderPriceType', 'TimeCondition', 'OrderStatus', 'OrderSubmitStatus', 'ForceCloseReason', 'OrderType', 'OrderSource', 'VolumeCondition']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcRspQueryAccountField:
    def __init__(self, BrokerBranchID="", UserID="", BankPassWord="", TradeTime="", VerifyCertNoFlag='0', TID=0, AccountID="", BankAccount="", InstallID=0, CustomerName="", TradeCode="", BankBranchID="", SessionID=0, BankID="", Password="", BankPwdFlag='0', RequestID=0, CustType='0', IdentifiedCardNo="", BankSerial="", OperNo="", TradingDay="", BankSecuAcc="", BrokerID="", DeviceID="", BankUseAmount=0, IdCardType='0', PlateSerial=0, TradeDate="", CurrencyID="", BankAccType='1', LastFragment='0', FutureSerial=0, BankSecuAccType='1', BrokerIDByBank="", SecuPwdFlag='0', Digest="", BankFetchAmount=0):
        self.BrokerBranchID=BrokerBranchID
        self.UserID=UserID
        self.BankPassWord=BankPassWord
        self.TradeTime=TradeTime
        self.VerifyCertNoFlag=VerifyCertNoFlag
        self.TID=TID
        self.AccountID=AccountID
        self.BankAccount=BankAccount
        self.InstallID=InstallID
        self.CustomerName=CustomerName
        self.TradeCode=TradeCode
        self.BankBranchID=BankBranchID
        self.SessionID=SessionID
        self.BankID=BankID
        self.Password=Password
        self.BankPwdFlag=BankPwdFlag
        self.RequestID=RequestID
        self.CustType=CustType
        self.IdentifiedCardNo=IdentifiedCardNo
        self.BankSerial=BankSerial
        self.OperNo=OperNo
        self.TradingDay=TradingDay
        self.BankSecuAcc=BankSecuAcc
        self.BrokerID=BrokerID
        self.DeviceID=DeviceID
        self.BankUseAmount=BankUseAmount
        self.IdCardType=IdCardType
        self.PlateSerial=PlateSerial
        self.TradeDate=TradeDate
        self.CurrencyID=CurrencyID
        self.BankAccType=BankAccType
        self.LastFragment=LastFragment
        self.FutureSerial=FutureSerial
        self.BankSecuAccType=BankSecuAccType
        self.BrokerIDByBank=BrokerIDByBank
        self.SecuPwdFlag=SecuPwdFlag
        self.Digest=Digest
        self.BankFetchAmount=BankFetchAmount
        self.vcmap={'CustType': {"'1'": u'\u673a\u6784\u6237', "'0'": u'\u81ea\u7136\u4eba'}, 'BankPwdFlag': {"'1'": u'\u660e\u6587\u6838\u5bf9', "'2'": u'\u5bc6\u6587\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}, 'LastFragment': {"'1'": u'\u4e0d\u662f\u6700\u540e\u5206\u7247', "'0'": u'\u662f\u6700\u540e\u5206\u7247'}, 'SecuPwdFlag': {"'1'": u'\u660e\u6587\u6838\u5bf9', "'2'": u'\u5bc6\u6587\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}, 'VerifyCertNoFlag': {"'1'": u'\u5426', "'0'": u'\u662f'}, 'BankAccType': {"'1'": u'\u94f6\u884c\u5b58\u6298', "'2'": u'\u50a8\u84c4\u5361', "'3'": u'\u4fe1\u7528\u5361'}, 'BankSecuAccType': {"'1'": u'\u94f6\u884c\u5b58\u6298', "'2'": u'\u50a8\u84c4\u5361', "'3'": u'\u4fe1\u7528\u5361'}, 'IdCardType': {"'9'": u'\u8425\u4e1a\u6267\u7167\u53f7', "'7'": u'\u53f0\u80de\u8bc1', "'x'": u'\u5176\u4ed6\u8bc1\u4ef6', "'5'": u'\u6237\u53e3\u7c3f', "'4'": u'\u58eb\u5175\u8bc1', "'1'": u'\u8eab\u4efd\u8bc1', "'0'": u'\u7ec4\u7ec7\u673a\u6784\u4ee3\u7801', "'6'": u'\u62a4\u7167', "'2'": u'\u519b\u5b98\u8bc1', "'8'": u'\u56de\u4e61\u8bc1', "'3'": u'\u8b66\u5b98\u8bc1', "'A'": u'\u7a0e\u52a1\u767b\u8bb0\u53f7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerBranchID', 'UserID', 'BankPassWord', 'TradeTime', 'VerifyCertNoFlag', 'TID', 'AccountID', 'BankAccount', 'InstallID', 'CustomerName', 'TradeCode', 'BankBranchID', 'SessionID', 'BankID', 'Password', 'BankPwdFlag', 'RequestID', 'CustType', 'IdentifiedCardNo', 'BankSerial', 'OperNo', 'TradingDay', 'BankSecuAcc', 'BrokerID', 'DeviceID', 'BankUseAmount', 'IdCardType', 'PlateSerial', 'TradeDate', 'CurrencyID', 'BankAccType', 'LastFragment', 'FutureSerial', 'BankSecuAccType', 'BrokerIDByBank', 'SecuPwdFlag', 'Digest', 'BankFetchAmount']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerBranchID', u'期商分支机构代码'),('UserID', u'用户标识'),('BankPassWord', u'银行密码'),('TradeTime', u'交易时间'),('VerifyCertNoFlag', u'验证客户证件号码标志'),('TID', u'交易ID'),('AccountID', u'投资者帐号'),('BankAccount', u'银行帐号'),('InstallID', u'安装编号'),('CustomerName', u'客户姓名'),('TradeCode', u'业务功能码'),('BankBranchID', u'银行分支机构代码'),('SessionID', u'会话号'),('BankID', u'银行代码'),('Password', u'期货密码'),('BankPwdFlag', u'银行密码标志'),('RequestID', u'请求编号'),('CustType', u'客户类型'),('IdentifiedCardNo', u'证件号码'),('BankSerial', u'银行流水号'),('OperNo', u'交易柜员'),('TradingDay', u'交易系统日期'),('BankSecuAcc', u'期货单位帐号'),('BrokerID', u'期商代码'),('DeviceID', u'渠道标志'),('BankUseAmount', u'银行可用金额'),('IdCardType', u'证件类型'),('PlateSerial', u'银期平台消息流水号'),('TradeDate', u'交易日期'),('CurrencyID', u'币种代码'),('BankAccType', u'银行帐号类型'),('LastFragment', u'最后分片标志'),('FutureSerial', u'期货公司流水号'),('BankSecuAccType', u'期货单位帐号类型'),('BrokerIDByBank', u'期货公司银行编码'),('SecuPwdFlag', u'期货资金密码核对标志'),('Digest', u'摘要'),('BankFetchAmount', u'银行可取金额')]])
    def getval(self, n):
        if n in ['VerifyCertNoFlag', 'BankPwdFlag', 'CustType', 'IdCardType', 'BankAccType', 'LastFragment', 'BankSecuAccType', 'SecuPwdFlag']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQrySettlementInfoConfirmField:
    def __init__(self, InvestorID="", BrokerID=""):
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcOpenAccountField:
    def __init__(self, MoneyAccountStatus='0', BrokerBranchID="", BankPassWord="", Telephone="", IdentifiedCardNo="", VerifyCertNoFlag='0', TID=0, AccountID="", BankAccount="", Fax="", InstallID=0, SecuPwdFlag='0', CustomerName="", CountryCode="", TradeCode="", BankBranchID="", SessionID=0, Address="", PlateSerial=0, BankPwdFlag='0', ErrorID=0, CustType='0', Gender='0', BankID="", BankSerial="", OperNo="", TradingDay="", BankSecuAcc="", BrokerID="", CashExchangeCode='1', IdCardType='0', Password="", MobilePhone="", TradeDate="", CurrencyID="", ErrorMsg="", BankAccType='1', LastFragment='0', ZipCode="", BankSecuAccType='1', BrokerIDByBank="", TradeTime="", EMail="", Digest="", DeviceID=""):
        self.MoneyAccountStatus=MoneyAccountStatus
        self.BrokerBranchID=BrokerBranchID
        self.BankPassWord=BankPassWord
        self.Telephone=Telephone
        self.IdentifiedCardNo=IdentifiedCardNo
        self.VerifyCertNoFlag=VerifyCertNoFlag
        self.TID=TID
        self.AccountID=AccountID
        self.BankAccount=BankAccount
        self.Fax=Fax
        self.InstallID=InstallID
        self.SecuPwdFlag=SecuPwdFlag
        self.CustomerName=CustomerName
        self.CountryCode=CountryCode
        self.TradeCode=TradeCode
        self.BankBranchID=BankBranchID
        self.SessionID=SessionID
        self.Address=Address
        self.PlateSerial=PlateSerial
        self.BankPwdFlag=BankPwdFlag
        self.ErrorID=ErrorID
        self.CustType=CustType
        self.Gender=Gender
        self.BankID=BankID
        self.BankSerial=BankSerial
        self.OperNo=OperNo
        self.TradingDay=TradingDay
        self.BankSecuAcc=BankSecuAcc
        self.BrokerID=BrokerID
        self.CashExchangeCode=CashExchangeCode
        self.IdCardType=IdCardType
        self.Password=Password
        self.MobilePhone=MobilePhone
        self.TradeDate=TradeDate
        self.CurrencyID=CurrencyID
        self.ErrorMsg=ErrorMsg
        self.BankAccType=BankAccType
        self.LastFragment=LastFragment
        self.ZipCode=ZipCode
        self.BankSecuAccType=BankSecuAccType
        self.BrokerIDByBank=BrokerIDByBank
        self.TradeTime=TradeTime
        self.EMail=EMail
        self.Digest=Digest
        self.DeviceID=DeviceID
        self.vcmap={'CustType': {"'1'": u'\u673a\u6784\u6237', "'0'": u'\u81ea\u7136\u4eba'}, 'Gender': {"'1'": u'\u7537', "'2'": u'\u5973', "'0'": u'\u672a\u77e5\u72b6\u6001'}, 'BankPwdFlag': {"'1'": u'\u660e\u6587\u6838\u5bf9', "'2'": u'\u5bc6\u6587\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}, 'LastFragment': {"'1'": u'\u4e0d\u662f\u6700\u540e\u5206\u7247', "'0'": u'\u662f\u6700\u540e\u5206\u7247'}, 'MoneyAccountStatus': {"'1'": u'\u9500\u6237', "'0'": u'\u6b63\u5e38'}, 'SecuPwdFlag': {"'1'": u'\u660e\u6587\u6838\u5bf9', "'2'": u'\u5bc6\u6587\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}, 'CashExchangeCode': {"'1'": u'\u6c47', "'2'": u'\u949e'}, 'VerifyCertNoFlag': {"'1'": u'\u5426', "'0'": u'\u662f'}, 'BankAccType': {"'1'": u'\u94f6\u884c\u5b58\u6298', "'2'": u'\u50a8\u84c4\u5361', "'3'": u'\u4fe1\u7528\u5361'}, 'BankSecuAccType': {"'1'": u'\u94f6\u884c\u5b58\u6298', "'2'": u'\u50a8\u84c4\u5361', "'3'": u'\u4fe1\u7528\u5361'}, 'IdCardType': {"'9'": u'\u8425\u4e1a\u6267\u7167\u53f7', "'7'": u'\u53f0\u80de\u8bc1', "'x'": u'\u5176\u4ed6\u8bc1\u4ef6', "'5'": u'\u6237\u53e3\u7c3f', "'4'": u'\u58eb\u5175\u8bc1', "'1'": u'\u8eab\u4efd\u8bc1', "'0'": u'\u7ec4\u7ec7\u673a\u6784\u4ee3\u7801', "'6'": u'\u62a4\u7167', "'2'": u'\u519b\u5b98\u8bc1', "'8'": u'\u56de\u4e61\u8bc1', "'3'": u'\u8b66\u5b98\u8bc1', "'A'": u'\u7a0e\u52a1\u767b\u8bb0\u53f7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['MoneyAccountStatus', 'BrokerBranchID', 'BankPassWord', 'Telephone', 'IdentifiedCardNo', 'VerifyCertNoFlag', 'TID', 'AccountID', 'BankAccount', 'Fax', 'InstallID', 'SecuPwdFlag', 'CustomerName', 'CountryCode', 'TradeCode', 'BankBranchID', 'SessionID', 'Address', 'PlateSerial', 'BankPwdFlag', 'ErrorID', 'CustType', 'Gender', 'BankID', 'BankSerial', 'OperNo', 'TradingDay', 'BankSecuAcc', 'BrokerID', 'CashExchangeCode', 'IdCardType', 'Password', 'MobilePhone', 'TradeDate', 'CurrencyID', 'ErrorMsg', 'BankAccType', 'LastFragment', 'ZipCode', 'BankSecuAccType', 'BrokerIDByBank', 'TradeTime', 'EMail', 'Digest', 'DeviceID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('MoneyAccountStatus', u'资金账户状态'),('BrokerBranchID', u'期商分支机构代码'),('BankPassWord', u'银行密码'),('Telephone', u'电话号码'),('IdentifiedCardNo', u'证件号码'),('VerifyCertNoFlag', u'验证客户证件号码标志'),('TID', u'交易ID'),('AccountID', u'投资者帐号'),('BankAccount', u'银行帐号'),('Fax', u'传真'),('InstallID', u'安装编号'),('SecuPwdFlag', u'期货资金密码核对标志'),('CustomerName', u'客户姓名'),('CountryCode', u'国家代码'),('TradeCode', u'业务功能码'),('BankBranchID', u'银行分支机构代码'),('SessionID', u'会话号'),('Address', u'地址'),('PlateSerial', u'银期平台消息流水号'),('BankPwdFlag', u'银行密码标志'),('ErrorID', u'错误代码'),('CustType', u'客户类型'),('Gender', u'性别'),('BankID', u'银行代码'),('BankSerial', u'银行流水号'),('OperNo', u'交易柜员'),('TradingDay', u'交易系统日期'),('BankSecuAcc', u'期货单位帐号'),('BrokerID', u'期商代码'),('CashExchangeCode', u'汇钞标志'),('IdCardType', u'证件类型'),('Password', u'期货密码'),('MobilePhone', u'手机'),('TradeDate', u'交易日期'),('CurrencyID', u'币种代码'),('ErrorMsg', u'错误信息'),('BankAccType', u'银行帐号类型'),('LastFragment', u'最后分片标志'),('ZipCode', u'邮编'),('BankSecuAccType', u'期货单位帐号类型'),('BrokerIDByBank', u'期货公司银行编码'),('TradeTime', u'交易时间'),('EMail', u'电子邮件'),('Digest', u'摘要'),('DeviceID', u'渠道标志')]])
    def getval(self, n):
        if n in ['MoneyAccountStatus', 'VerifyCertNoFlag', 'SecuPwdFlag', 'BankPwdFlag', 'CustType', 'Gender', 'CashExchangeCode', 'IdCardType', 'BankAccType', 'LastFragment', 'BankSecuAccType']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CTKSProfitAndLossOrderInsert:
    def __init__(self, ExchangeID="", TakeProfitPrice=0, OrderLocalID="", TriggeredTimes=0, BusinessUnit="", CurrencyID="", SpringType='0', InvestorID="", CloseMode='0', FiguresPrice=0, BrokerID="", OffsetValue='0', StopLossPrice=0, FloatLimitPrice=0):
        self.ExchangeID=ExchangeID
        self.TakeProfitPrice=TakeProfitPrice
        self.OrderLocalID=OrderLocalID
        self.TriggeredTimes=TriggeredTimes
        self.BusinessUnit=BusinessUnit
        self.CurrencyID=CurrencyID
        self.SpringType=SpringType
        self.InvestorID=InvestorID
        self.CloseMode=CloseMode
        self.FiguresPrice=FiguresPrice
        self.BrokerID=BrokerID
        self.OffsetValue=OffsetValue
        self.StopLossPrice=StopLossPrice
        self.FloatLimitPrice=FloatLimitPrice
        self.vcmap={'OffsetValue': {"'1'": u'\u5f00\u4ed3\u6210\u4ea4\u4ef7\u7684\u76f8\u5bf9\u504f\u79fb\u503c', "'0'": u'\u6307\u5b9a\u503c'}, 'CloseMode': {"'1'": u'\u52a0\u51cf\u4e70\u5356\u4ef7', "'2'": u'\u52a0\u51cf\u6700\u65b0\u4ef7', "'0'": u'\u5e02\u4ef7'}, 'SpringType': {"'1'": u'\u4e70\u5356\u4ef7', "'0'": u'\u6700\u65b0\u4ef7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeID', 'TakeProfitPrice', 'OrderLocalID', 'TriggeredTimes', 'BusinessUnit', 'CurrencyID', 'SpringType', 'InvestorID', 'CloseMode', 'FiguresPrice', 'BrokerID', 'OffsetValue', 'StopLossPrice', 'FloatLimitPrice']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeID', u'交易所代码'),('TakeProfitPrice', u'止盈价'),('OrderLocalID', u'本地报单编号'),('TriggeredTimes', u'止损单触发次数'),('BusinessUnit', u'业务单元'),('CurrencyID', u'货币代码'),('SpringType', u'条件单触发价格类型'),('InvestorID', u'投资者代码'),('CloseMode', u'平仓方式'),('FiguresPrice', u'平仓反向加减价位数（平仓方式=1或2时有效）'),('BrokerID', u'营业部代码'),('OffsetValue', u'生成盈损价的方式'),('StopLossPrice', u'止损价'),('FloatLimitPrice', u'浮动止损价')]])
    def getval(self, n):
        if n in ['SpringType', 'CloseMode', 'OffsetValue']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryTradingNoticeField:
    def __init__(self, InvestorID="", BrokerID=""):
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryErrOrderField:
    def __init__(self, InvestorID="", BrokerID=""):
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcManualSyncBrokerUserOTPField:
    def __init__(self, UserID="", BrokerID="", FirstOTP="", SecondOTP="", OTPType='0'):
        self.UserID=UserID
        self.BrokerID=BrokerID
        self.FirstOTP=FirstOTP
        self.SecondOTP=SecondOTP
        self.OTPType=OTPType
        self.vcmap={'OTPType': {"'1'": u'\u65f6\u95f4\u4ee4\u724c', "'0'": u'\u65e0\u52a8\u6001\u4ee4\u724c'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserID', 'BrokerID', 'FirstOTP', 'SecondOTP', 'OTPType']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserID', u'用户代码'),('BrokerID', u'经纪公司代码'),('FirstOTP', u'第一个动态密码'),('SecondOTP', u'第二个动态密码'),('OTPType', u'动态令牌类型')]])
    def getval(self, n):
        if n in ['OTPType']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcDepthMarketDataField:
    def __init__(self, HighestPrice=0, BidPrice5=0, BidPrice4=0, BidPrice1=0, BidPrice3=0, BidPrice2=0, LowerLimitPrice=0, OpenPrice=0, AskPrice5=0, AskPrice4=0, AskPrice3=0, PreClosePrice=0, AskPrice1=0, PreSettlementPrice=0, AskVolume1=0, UpdateTime="", UpdateMillisec=0, AveragePrice=0, BidVolume5=0, BidVolume4=0, BidVolume3=0, BidVolume2=0, PreOpenInterest=0, AskPrice2=0, Volume=0, AskVolume3=0, AskVolume2=0, AskVolume5=0, AskVolume4=0, UpperLimitPrice=0, BidVolume1=0, InstrumentID="", ClosePrice=0, ExchangeID="", TradingDay="", PreDelta=0, OpenInterest=0, CurrDelta=0, Turnover=0, LastPrice=0, SettlementPrice=0, ExchangeInstID="", LowestPrice=0):
        self.HighestPrice=HighestPrice
        self.BidPrice5=BidPrice5
        self.BidPrice4=BidPrice4
        self.BidPrice1=BidPrice1
        self.BidPrice3=BidPrice3
        self.BidPrice2=BidPrice2
        self.LowerLimitPrice=LowerLimitPrice
        self.OpenPrice=OpenPrice
        self.AskPrice5=AskPrice5
        self.AskPrice4=AskPrice4
        self.AskPrice3=AskPrice3
        self.PreClosePrice=PreClosePrice
        self.AskPrice1=AskPrice1
        self.PreSettlementPrice=PreSettlementPrice
        self.AskVolume1=AskVolume1
        self.UpdateTime=UpdateTime
        self.UpdateMillisec=UpdateMillisec
        self.AveragePrice=AveragePrice
        self.BidVolume5=BidVolume5
        self.BidVolume4=BidVolume4
        self.BidVolume3=BidVolume3
        self.BidVolume2=BidVolume2
        self.PreOpenInterest=PreOpenInterest
        self.AskPrice2=AskPrice2
        self.Volume=Volume
        self.AskVolume3=AskVolume3
        self.AskVolume2=AskVolume2
        self.AskVolume5=AskVolume5
        self.AskVolume4=AskVolume4
        self.UpperLimitPrice=UpperLimitPrice
        self.BidVolume1=BidVolume1
        self.InstrumentID=InstrumentID
        self.ClosePrice=ClosePrice
        self.ExchangeID=ExchangeID
        self.TradingDay=TradingDay
        self.PreDelta=PreDelta
        self.OpenInterest=OpenInterest
        self.CurrDelta=CurrDelta
        self.Turnover=Turnover
        self.LastPrice=LastPrice
        self.SettlementPrice=SettlementPrice
        self.ExchangeInstID=ExchangeInstID
        self.LowestPrice=LowestPrice
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['HighestPrice', 'BidPrice5', 'BidPrice4', 'BidPrice1', 'BidPrice3', 'BidPrice2', 'LowerLimitPrice', 'OpenPrice', 'AskPrice5', 'AskPrice4', 'AskPrice3', 'PreClosePrice', 'AskPrice1', 'PreSettlementPrice', 'AskVolume1', 'UpdateTime', 'UpdateMillisec', 'AveragePrice', 'BidVolume5', 'BidVolume4', 'BidVolume3', 'BidVolume2', 'PreOpenInterest', 'AskPrice2', 'Volume', 'AskVolume3', 'AskVolume2', 'AskVolume5', 'AskVolume4', 'UpperLimitPrice', 'BidVolume1', 'InstrumentID', 'ClosePrice', 'ExchangeID', 'TradingDay', 'PreDelta', 'OpenInterest', 'CurrDelta', 'Turnover', 'LastPrice', 'SettlementPrice', 'ExchangeInstID', 'LowestPrice']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('HighestPrice', u'最高价'),('BidPrice5', u'申买价五'),('BidPrice4', u'申买价四'),('BidPrice1', u'申买价一'),('BidPrice3', u'申买价三'),('BidPrice2', u'申买价二'),('LowerLimitPrice', u'跌停板价'),('OpenPrice', u'今开盘'),('AskPrice5', u'申卖价五'),('AskPrice4', u'申卖价四'),('AskPrice3', u'申卖价三'),('PreClosePrice', u'昨收盘'),('AskPrice1', u'申卖价一'),('PreSettlementPrice', u'上次结算价'),('AskVolume1', u'申卖量一'),('UpdateTime', u'最后修改时间'),('UpdateMillisec', u'最后修改毫秒'),('AveragePrice', u'当日均价'),('BidVolume5', u'申买量五'),('BidVolume4', u'申买量四'),('BidVolume3', u'申买量三'),('BidVolume2', u'申买量二'),('PreOpenInterest', u'昨持仓量'),('AskPrice2', u'申卖价二'),('Volume', u'数量'),('AskVolume3', u'申卖量三'),('AskVolume2', u'申卖量二'),('AskVolume5', u'申卖量五'),('AskVolume4', u'申卖量四'),('UpperLimitPrice', u'涨停板价'),('BidVolume1', u'申买量一'),('InstrumentID', u'合约代码'),('ClosePrice', u'今收盘'),('ExchangeID', u'交易所代码'),('TradingDay', u'交易日'),('PreDelta', u'昨虚实度'),('OpenInterest', u'持仓量'),('CurrDelta', u'今虚实度'),('Turnover', u'成交金额'),('LastPrice', u'最新价'),('SettlementPrice', u'本次结算价'),('ExchangeInstID', u'合约在交易所的代码'),('LowestPrice', u'最低价')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcTraderOfferField:
    def __init__(self, StartDate="", ExchangeID="", InstallID=0, LastReportDate="", ParticipantID="", OrderLocalID="", LastReportTime="", TraderID="", MaxTradeID="", ConnectTime="", TraderConnectStatus='1', TradingDay="", ConnectRequestTime="", StartTime="", ConnectRequestDate="", MaxOrderMessageReference="", BrokerID="", Password="", ConnectDate=""):
        self.StartDate=StartDate
        self.ExchangeID=ExchangeID
        self.InstallID=InstallID
        self.LastReportDate=LastReportDate
        self.ParticipantID=ParticipantID
        self.OrderLocalID=OrderLocalID
        self.LastReportTime=LastReportTime
        self.TraderID=TraderID
        self.MaxTradeID=MaxTradeID
        self.ConnectTime=ConnectTime
        self.TraderConnectStatus=TraderConnectStatus
        self.TradingDay=TradingDay
        self.ConnectRequestTime=ConnectRequestTime
        self.StartTime=StartTime
        self.ConnectRequestDate=ConnectRequestDate
        self.MaxOrderMessageReference=MaxOrderMessageReference
        self.BrokerID=BrokerID
        self.Password=Password
        self.ConnectDate=ConnectDate
        self.vcmap={'TraderConnectStatus': {"'1'": u'\u6ca1\u6709\u4efb\u4f55\u8fde\u63a5', "'2'": u'\u5df2\u7ecf\u8fde\u63a5', "'3'": u'\u5df2\u7ecf\u53d1\u51fa\u5408\u7ea6\u67e5\u8be2\u8bf7\u6c42', "'4'": u'\u8ba2\u9605\u79c1\u6709\u6d41'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['StartDate', 'ExchangeID', 'InstallID', 'LastReportDate', 'ParticipantID', 'OrderLocalID', 'LastReportTime', 'TraderID', 'MaxTradeID', 'ConnectTime', 'TraderConnectStatus', 'TradingDay', 'ConnectRequestTime', 'StartTime', 'ConnectRequestDate', 'MaxOrderMessageReference', 'BrokerID', 'Password', 'ConnectDate']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('StartDate', u'启动日期'),('ExchangeID', u'交易所代码'),('InstallID', u'安装编号'),('LastReportDate', u'上次报告日期'),('ParticipantID', u'会员代码'),('OrderLocalID', u'本地报单编号'),('LastReportTime', u'上次报告时间'),('TraderID', u'交易所交易员代码'),('MaxTradeID', u'本席位最大成交编号'),('ConnectTime', u'完成连接时间'),('TraderConnectStatus', u'交易所交易员连接状态'),('TradingDay', u'交易日'),('ConnectRequestTime', u'发出连接请求的时间'),('StartTime', u'启动时间'),('ConnectRequestDate', u'发出连接请求的日期'),('MaxOrderMessageReference', u'本席位最大报单备拷'),('BrokerID', u'经纪公司代码'),('Password', u'密码'),('ConnectDate', u'完成连接日期')]])
    def getval(self, n):
        if n in ['TraderConnectStatus']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcCFMMCBrokerKeyField:
    def __init__(self, KeyID=0, ParticipantID="", CreateDate="", KeyKind='R', BrokerID="", CreateTime="", CurrentKey=""):
        self.KeyID=KeyID
        self.ParticipantID=ParticipantID
        self.CreateDate=CreateDate
        self.KeyKind=KeyKind
        self.BrokerID=BrokerID
        self.CreateTime=CreateTime
        self.CurrentKey=CurrentKey
        self.vcmap={'KeyKind': {"'A'": u'CFMMC\u81ea\u52a8\u66f4\u65b0', "'R'": u'\u4e3b\u52a8\u8bf7\u6c42\u66f4\u65b0', "'M'": u'CFMMC\u624b\u52a8\u66f4\u65b0'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['KeyID', 'ParticipantID', 'CreateDate', 'KeyKind', 'BrokerID', 'CreateTime', 'CurrentKey']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('KeyID', u'密钥编号'),('ParticipantID', u'经纪公司统一编码'),('CreateDate', u'密钥生成日期'),('KeyKind', u'动态密钥类型'),('BrokerID', u'经纪公司代码'),('CreateTime', u'密钥生成时间'),('CurrentKey', u'动态密钥')]])
    def getval(self, n):
        if n in ['KeyKind']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryDepthMarketDataField:
    def __init__(self, InstrumentID=""):
        self.InstrumentID=InstrumentID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcTransferQryDetailReqField:
    def __init__(self, FutureAccount=""):
        self.FutureAccount=FutureAccount
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['FutureAccount']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('FutureAccount', u'期货资金账户')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcBrokerWithdrawAlgorithmField:
    def __init__(self, IncludeCloseProfit='0', IsBrokerUserEvent=0, AvailIncludeCloseProfit='0', UsingRatio=0, BrokerID="", AllWithoutTrade='0', WithdrawAlgorithm='1'):
        self.IncludeCloseProfit=IncludeCloseProfit
        self.IsBrokerUserEvent=IsBrokerUserEvent
        self.AvailIncludeCloseProfit=AvailIncludeCloseProfit
        self.UsingRatio=UsingRatio
        self.BrokerID=BrokerID
        self.AllWithoutTrade=AllWithoutTrade
        self.WithdrawAlgorithm=WithdrawAlgorithm
        self.vcmap={'AvailIncludeCloseProfit': {"'2'": u'\u4e0d\u5305\u542b\u5e73\u4ed3\u76c8\u5229', "'0'": u'\u5305\u542b\u5e73\u4ed3\u76c8\u5229'}, 'WithdrawAlgorithm': {"'1'": u'\u6d6e\u76c8\u6d6e\u4e8f\u90fd\u8ba1\u7b97', "'2'": u'\u6d6e\u76c8\u4e0d\u8ba1\uff0c\u6d6e\u4e8f\u8ba1', "'3'": u'\u6d6e\u76c8\u8ba1\uff0c\u6d6e\u4e8f\u4e0d\u8ba1', "'4'": u'\u6d6e\u76c8\u6d6e\u4e8f\u90fd\u4e0d\u8ba1\u7b97'}, 'IncludeCloseProfit': {"'2'": u'\u4e0d\u5305\u542b\u5e73\u4ed3\u76c8\u5229', "'0'": u'\u5305\u542b\u5e73\u4ed3\u76c8\u5229'}, 'AllWithoutTrade': {"'2'": u'\u53d7\u53ef\u63d0\u6bd4\u4f8b\u9650\u5236', "'0'": u'\u4e0d\u53d7\u53ef\u63d0\u6bd4\u4f8b\u9650\u5236'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['IncludeCloseProfit', 'IsBrokerUserEvent', 'AvailIncludeCloseProfit', 'UsingRatio', 'BrokerID', 'AllWithoutTrade', 'WithdrawAlgorithm']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('IncludeCloseProfit', u'可提是否包含平仓盈利'),('IsBrokerUserEvent', u'是否启用用户事件'),('AvailIncludeCloseProfit', u'可用是否包含平仓盈利'),('UsingRatio', u'资金使用率'),('BrokerID', u'经纪公司代码'),('AllWithoutTrade', u'本日无仓且无成交客户是否受可提比例限制'),('WithdrawAlgorithm', u'可提资金算法')]])
    def getval(self, n):
        if n in ['IncludeCloseProfit', 'AvailIncludeCloseProfit', 'AllWithoutTrade', 'WithdrawAlgorithm']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcMarketDataExchangeField:
    def __init__(self, ExchangeID=0):
        self.ExchangeID=ExchangeID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcExchangeOrderInsertErrorField:
    def __init__(self, ExchangeID="", InstallID=0, ParticipantID="", OrderLocalID="", ErrorMsg="", TraderID="", ErrorID=0):
        self.ExchangeID=ExchangeID
        self.InstallID=InstallID
        self.ParticipantID=ParticipantID
        self.OrderLocalID=OrderLocalID
        self.ErrorMsg=ErrorMsg
        self.TraderID=TraderID
        self.ErrorID=ErrorID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeID', 'InstallID', 'ParticipantID', 'OrderLocalID', 'ErrorMsg', 'TraderID', 'ErrorID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeID', u'交易所代码'),('InstallID', u'安装编号'),('ParticipantID', u'会员代码'),('OrderLocalID', u'本地报单编号'),('ErrorMsg', u'错误信息'),('TraderID', u'交易所交易员代码'),('ErrorID', u'错误代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQrySuperUserFunctionField:
    def __init__(self, UserID=""):
        self.UserID=UserID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserID', u'用户代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcRspRepealField:
    def __init__(self, BrokerBranchID="", UserID="", BankPassWord="", BankRepealFlag='0', RepealedTimes=0, TradeTime="", VerifyCertNoFlag='0', TID=0, FutureRepealSerial=0, AccountID="", BankAccount="", InstallID=0, SecuPwdFlag='0', CustomerName="", TradeCode="", BankBranchID="", SessionID=0, BankID="", PlateSerial=0, BankPwdFlag='0', ErrorID=0, RequestID=0, CustType='0', IdentifiedCardNo="", FeePayFlag='0', BankSerial="", OperNo="", TradingDay="", BankSecuAcc="", BrokerID="", DeviceID="", TransferStatus='0', BrokerRepealFlag='0', IdCardType='0', Password="", FutureFetchAmount=0, TradeDate="", CurrencyID="", BrokerFee=0, BankAccType='1', LastFragment='0', FutureSerial=0, BankRepealSerial="", ErrorMsg="", RepealTimeInterval=0, BankSecuAccType='1', BrokerIDByBank="", PlateRepealSerial=0, Message="", CustFee=0, TradeAmount=0, Digest=""):
        self.BrokerBranchID=BrokerBranchID
        self.UserID=UserID
        self.BankPassWord=BankPassWord
        self.BankRepealFlag=BankRepealFlag
        self.RepealedTimes=RepealedTimes
        self.TradeTime=TradeTime
        self.VerifyCertNoFlag=VerifyCertNoFlag
        self.TID=TID
        self.FutureRepealSerial=FutureRepealSerial
        self.AccountID=AccountID
        self.BankAccount=BankAccount
        self.InstallID=InstallID
        self.SecuPwdFlag=SecuPwdFlag
        self.CustomerName=CustomerName
        self.TradeCode=TradeCode
        self.BankBranchID=BankBranchID
        self.SessionID=SessionID
        self.BankID=BankID
        self.PlateSerial=PlateSerial
        self.BankPwdFlag=BankPwdFlag
        self.ErrorID=ErrorID
        self.RequestID=RequestID
        self.CustType=CustType
        self.IdentifiedCardNo=IdentifiedCardNo
        self.FeePayFlag=FeePayFlag
        self.BankSerial=BankSerial
        self.OperNo=OperNo
        self.TradingDay=TradingDay
        self.BankSecuAcc=BankSecuAcc
        self.BrokerID=BrokerID
        self.DeviceID=DeviceID
        self.TransferStatus=TransferStatus
        self.BrokerRepealFlag=BrokerRepealFlag
        self.IdCardType=IdCardType
        self.Password=Password
        self.FutureFetchAmount=FutureFetchAmount
        self.TradeDate=TradeDate
        self.CurrencyID=CurrencyID
        self.BrokerFee=BrokerFee
        self.BankAccType=BankAccType
        self.LastFragment=LastFragment
        self.FutureSerial=FutureSerial
        self.BankRepealSerial=BankRepealSerial
        self.ErrorMsg=ErrorMsg
        self.RepealTimeInterval=RepealTimeInterval
        self.BankSecuAccType=BankSecuAccType
        self.BrokerIDByBank=BrokerIDByBank
        self.PlateRepealSerial=PlateRepealSerial
        self.Message=Message
        self.CustFee=CustFee
        self.TradeAmount=TradeAmount
        self.Digest=Digest
        self.vcmap={'CustType': {"'1'": u'\u673a\u6784\u6237', "'0'": u'\u81ea\u7136\u4eba'}, 'BankAccType': {"'1'": u'\u94f6\u884c\u5b58\u6298', "'2'": u'\u50a8\u84c4\u5361', "'3'": u'\u4fe1\u7528\u5361'}, 'BankPwdFlag': {"'1'": u'\u660e\u6587\u6838\u5bf9', "'2'": u'\u5bc6\u6587\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}, 'LastFragment': {"'1'": u'\u4e0d\u662f\u6700\u540e\u5206\u7247', "'0'": u'\u662f\u6700\u540e\u5206\u7247'}, 'BankRepealFlag': {"'1'": u'\u94f6\u884c\u5f85\u81ea\u52a8\u51b2\u6b63', "'2'": u'\u94f6\u884c\u5df2\u81ea\u52a8\u51b2\u6b63', "'0'": u'\u94f6\u884c\u65e0\u9700\u81ea\u52a8\u51b2\u6b63'}, 'SecuPwdFlag': {"'1'": u'\u660e\u6587\u6838\u5bf9', "'2'": u'\u5bc6\u6587\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}, 'VerifyCertNoFlag': {"'1'": u'\u5426', "'0'": u'\u662f'}, 'BrokerRepealFlag': {"'1'": u'\u671f\u5546\u5f85\u81ea\u52a8\u51b2\u6b63', "'2'": u'\u671f\u5546\u5df2\u81ea\u52a8\u51b2\u6b63', "'0'": u'\u671f\u5546\u65e0\u9700\u81ea\u52a8\u51b2\u6b63'}, 'TransferStatus': {"'1'": u'\u88ab\u51b2\u6b63', "'0'": u'\u6b63\u5e38'}, 'FeePayFlag': {"'1'": u'\u7531\u53d1\u9001\u65b9\u652f\u4ed8\u8d39\u7528', "'2'": u'\u7531\u53d1\u9001\u65b9\u652f\u4ed8\u53d1\u8d77\u7684\u8d39\u7528\uff0c\u53d7\u76ca\u65b9\u652f\u4ed8\u63a5\u53d7\u7684\u8d39\u7528', "'0'": u'\u7531\u53d7\u76ca\u65b9\u652f\u4ed8\u8d39\u7528'}, 'BankSecuAccType': {"'1'": u'\u94f6\u884c\u5b58\u6298', "'2'": u'\u50a8\u84c4\u5361', "'3'": u'\u4fe1\u7528\u5361'}, 'IdCardType': {"'9'": u'\u8425\u4e1a\u6267\u7167\u53f7', "'7'": u'\u53f0\u80de\u8bc1', "'x'": u'\u5176\u4ed6\u8bc1\u4ef6', "'5'": u'\u6237\u53e3\u7c3f', "'4'": u'\u58eb\u5175\u8bc1', "'1'": u'\u8eab\u4efd\u8bc1', "'0'": u'\u7ec4\u7ec7\u673a\u6784\u4ee3\u7801', "'6'": u'\u62a4\u7167', "'2'": u'\u519b\u5b98\u8bc1', "'8'": u'\u56de\u4e61\u8bc1', "'3'": u'\u8b66\u5b98\u8bc1', "'A'": u'\u7a0e\u52a1\u767b\u8bb0\u53f7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerBranchID', 'UserID', 'BankPassWord', 'BankRepealFlag', 'RepealedTimes', 'TradeTime', 'VerifyCertNoFlag', 'TID', 'FutureRepealSerial', 'AccountID', 'BankAccount', 'InstallID', 'SecuPwdFlag', 'CustomerName', 'TradeCode', 'BankBranchID', 'SessionID', 'BankID', 'PlateSerial', 'BankPwdFlag', 'ErrorID', 'RequestID', 'CustType', 'IdentifiedCardNo', 'FeePayFlag', 'BankSerial', 'OperNo', 'TradingDay', 'BankSecuAcc', 'BrokerID', 'DeviceID', 'TransferStatus', 'BrokerRepealFlag', 'IdCardType', 'Password', 'FutureFetchAmount', 'TradeDate', 'CurrencyID', 'BrokerFee', 'BankAccType', 'LastFragment', 'FutureSerial', 'BankRepealSerial', 'ErrorMsg', 'RepealTimeInterval', 'BankSecuAccType', 'BrokerIDByBank', 'PlateRepealSerial', 'Message', 'CustFee', 'TradeAmount', 'Digest']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerBranchID', u'期商分支机构代码'),('UserID', u'用户标识'),('BankPassWord', u'银行密码'),('BankRepealFlag', u'银行冲正标志'),('RepealedTimes', u'已经冲正次数'),('TradeTime', u'交易时间'),('VerifyCertNoFlag', u'验证客户证件号码标志'),('TID', u'交易ID'),('FutureRepealSerial', u'被冲正期货流水号'),('AccountID', u'投资者帐号'),('BankAccount', u'银行帐号'),('InstallID', u'安装编号'),('SecuPwdFlag', u'期货资金密码核对标志'),('CustomerName', u'客户姓名'),('TradeCode', u'业务功能码'),('BankBranchID', u'银行分支机构代码'),('SessionID', u'会话号'),('BankID', u'银行代码'),('PlateSerial', u'银期平台消息流水号'),('BankPwdFlag', u'银行密码标志'),('ErrorID', u'错误代码'),('RequestID', u'请求编号'),('CustType', u'客户类型'),('IdentifiedCardNo', u'证件号码'),('FeePayFlag', u'费用支付标志'),('BankSerial', u'银行流水号'),('OperNo', u'交易柜员'),('TradingDay', u'交易系统日期'),('BankSecuAcc', u'期货单位帐号'),('BrokerID', u'期商代码'),('DeviceID', u'渠道标志'),('TransferStatus', u'转账交易状态'),('BrokerRepealFlag', u'期商冲正标志'),('IdCardType', u'证件类型'),('Password', u'期货密码'),('FutureFetchAmount', u'期货可取金额'),('TradeDate', u'交易日期'),('CurrencyID', u'币种代码'),('BrokerFee', u'应收期货公司费用'),('BankAccType', u'银行帐号类型'),('LastFragment', u'最后分片标志'),('FutureSerial', u'期货公司流水号'),('BankRepealSerial', u'被冲正银行流水号'),('ErrorMsg', u'错误信息'),('RepealTimeInterval', u'冲正时间间隔'),('BankSecuAccType', u'期货单位帐号类型'),('BrokerIDByBank', u'期货公司银行编码'),('PlateRepealSerial', u'被冲正平台流水号'),('Message', u'发送方给接收方的消息'),('CustFee', u'应收客户费用'),('TradeAmount', u'转帐金额'),('Digest', u'摘要')]])
    def getval(self, n):
        if n in ['BankRepealFlag', 'VerifyCertNoFlag', 'SecuPwdFlag', 'BankPwdFlag', 'CustType', 'FeePayFlag', 'TransferStatus', 'BrokerRepealFlag', 'IdCardType', 'BankAccType', 'LastFragment', 'BankSecuAccType']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryTradeField:
    def __init__(self, InstrumentID="", TradeTimeStart="", ExchangeID="", TradeID="", InvestorID="", BrokerID="", TradeTimeEnd=""):
        self.InstrumentID=InstrumentID
        self.TradeTimeStart=TradeTimeStart
        self.ExchangeID=ExchangeID
        self.TradeID=TradeID
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.TradeTimeEnd=TradeTimeEnd
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'TradeTimeStart', 'ExchangeID', 'TradeID', 'InvestorID', 'BrokerID', 'TradeTimeEnd']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('TradeTimeStart', u'开始时间'),('ExchangeID', u'交易所代码'),('TradeID', u'成交编号'),('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('TradeTimeEnd', u'结束时间')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcTradingNoticeInfoField:
    def __init__(self, SequenceSeries=0, SequenceNo=0, FieldContent="", InvestorID="", BrokerID="", SendTime=""):
        self.SequenceSeries=SequenceSeries
        self.SequenceNo=SequenceNo
        self.FieldContent=FieldContent
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.SendTime=SendTime
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['SequenceSeries', 'SequenceNo', 'FieldContent', 'InvestorID', 'BrokerID', 'SendTime']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('SequenceSeries', u'序列系列号'),('SequenceNo', u'序列号'),('FieldContent', u'消息正文'),('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('SendTime', u'发送时间')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcErrOrderField:
    def __init__(self, ContingentCondition='1', CombOffsetFlag="", UserID="", LimitPrice=0, UserForceClose=0, Direction='0', VolumeTotalOriginal=0, OrderPriceType='1', TimeCondition='1', IsAutoSuspend=0, StopPrice=0, InstrumentID="", MinVolume=0, ForceCloseReason='0', ErrorID=0, BrokerID="", CombHedgeFlag="", GTDDate="", BusinessUnit="", ErrorMsg="", OrderRef="", InvestorID="", VolumeCondition='1', RequestID=0):
        self.ContingentCondition=ContingentCondition
        self.CombOffsetFlag=CombOffsetFlag
        self.UserID=UserID
        self.LimitPrice=LimitPrice
        self.UserForceClose=UserForceClose
        self.Direction=Direction
        self.VolumeTotalOriginal=VolumeTotalOriginal
        self.OrderPriceType=OrderPriceType
        self.TimeCondition=TimeCondition
        self.IsAutoSuspend=IsAutoSuspend
        self.StopPrice=StopPrice
        self.InstrumentID=InstrumentID
        self.MinVolume=MinVolume
        self.ForceCloseReason=ForceCloseReason
        self.ErrorID=ErrorID
        self.BrokerID=BrokerID
        self.CombHedgeFlag=CombHedgeFlag
        self.GTDDate=GTDDate
        self.BusinessUnit=BusinessUnit
        self.ErrorMsg=ErrorMsg
        self.OrderRef=OrderRef
        self.InvestorID=InvestorID
        self.VolumeCondition=VolumeCondition
        self.RequestID=RequestID
        self.vcmap={'ContingentCondition': {"'9'": u'\u5356\u4e00\u4ef7\u5927\u4e8e\u6761\u4ef6\u4ef7', "'B'": u'\u5356\u4e00\u4ef7\u5c0f\u4e8e\u6761\u4ef6\u4ef7', "'7'": u'\u6700\u65b0\u4ef7\u5c0f\u4e8e\u6761\u4ef6\u4ef7', "'8'": u'\u6700\u65b0\u4ef7\u5c0f\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'5'": u'\u6700\u65b0\u4ef7\u5927\u4e8e\u6761\u4ef6\u4ef7', "'C'": u'\u5356\u4e00\u4ef7\u5c0f\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'4'": u'\u9884\u57cb\u5355', "'1'": u'\u7acb\u5373', "'6'": u'\u6700\u65b0\u4ef7\u5927\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'2'": u'\u6b62\u635f', "'H'": u'\u4e70\u4e00\u4ef7\u5c0f\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'E'": u'\u4e70\u4e00\u4ef7\u5927\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'3'": u'\u6b62\u8d62', "'D'": u'\u4e70\u4e00\u4ef7\u5927\u4e8e\u6761\u4ef6\u4ef7', "'A'": u'\u5356\u4e00\u4ef7\u5927\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'F'": u'\u4e70\u4e00\u4ef7\u5c0f\u4e8e\u6761\u4ef6\u4ef7'}, 'Direction': {"'1'": u'\u5356', "'0'": u'\u4e70'}, 'ForceCloseReason': {"'7'": u'\u81ea\u7136\u4eba\u4e34\u8fd1\u4ea4\u5272', "'5'": u'\u8fdd\u89c4', "'4'": u'\u6301\u4ed3\u975e\u6574\u6570\u500d', "'1'": u'\u8d44\u91d1\u4e0d\u8db3', "'0'": u'\u975e\u5f3a\u5e73', "'6'": u'\u5176\u5b83', "'2'": u'\u5ba2\u6237\u8d85\u4ed3', "'3'": u'\u4f1a\u5458\u8d85\u4ed3'}, 'OrderPriceType': {"'9'": u'\u5356\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e1\u4e2aticks', "'B'": u'\u5356\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e3\u4e2aticks', "'7'": u'\u6700\u65b0\u4ef7\u6d6e\u52a8\u4e0a\u6d6e3\u4e2aticks', "'8'": u'\u5356\u4e00\u4ef7', "'5'": u'\u6700\u65b0\u4ef7\u6d6e\u52a8\u4e0a\u6d6e1\u4e2aticks', "'C'": u'\u4e70\u4e00\u4ef7', "'4'": u'\u6700\u65b0\u4ef7', "'1'": u'\u4efb\u610f\u4ef7', "'6'": u'\u6700\u65b0\u4ef7\u6d6e\u52a8\u4e0a\u6d6e2\u4e2aticks', "'2'": u'\u9650\u4ef7', "'E'": u'\u4e70\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e2\u4e2aticks', "'3'": u'\u6700\u4f18\u4ef7', "'D'": u'\u4e70\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e1\u4e2aticks', "'A'": u'\u5356\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e2\u4e2aticks', "'F'": u'\u4e70\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e3\u4e2aticks'}, 'VolumeCondition': {"'1'": u'\u4efb\u4f55\u6570\u91cf', "'2'": u'\u6700\u5c0f\u6570\u91cf', "'3'": u'\u5168\u90e8\u6570\u91cf'}, 'TimeCondition': {"'5'": u'\u64a4\u9500\u524d\u6709\u6548', "'4'": u'\u6307\u5b9a\u65e5\u671f\u524d\u6709\u6548', "'1'": u'\u7acb\u5373\u5b8c\u6210\uff0c\u5426\u5219\u64a4\u9500', "'6'": u'\u96c6\u5408\u7ade\u4ef7\u6709\u6548', "'2'": u'\u672c\u8282\u6709\u6548', "'3'": u'\u5f53\u65e5\u6709\u6548'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ContingentCondition', 'CombOffsetFlag', 'UserID', 'LimitPrice', 'UserForceClose', 'Direction', 'VolumeTotalOriginal', 'OrderPriceType', 'TimeCondition', 'IsAutoSuspend', 'StopPrice', 'InstrumentID', 'MinVolume', 'ForceCloseReason', 'ErrorID', 'BrokerID', 'CombHedgeFlag', 'GTDDate', 'BusinessUnit', 'ErrorMsg', 'OrderRef', 'InvestorID', 'VolumeCondition', 'RequestID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ContingentCondition', u'触发条件'),('CombOffsetFlag', u'组合开平标志'),('UserID', u'用户代码'),('LimitPrice', u'价格'),('UserForceClose', u'用户强评标志'),('Direction', u'买卖方向'),('VolumeTotalOriginal', u'数量'),('OrderPriceType', u'报单价格条件'),('TimeCondition', u'有效期类型'),('IsAutoSuspend', u'自动挂起标志'),('StopPrice', u'止损价'),('InstrumentID', u'合约代码'),('MinVolume', u'最小成交量'),('ForceCloseReason', u'强平原因'),('ErrorID', u'错误代码'),('BrokerID', u'经纪公司代码'),('CombHedgeFlag', u'组合投机套保标志'),('GTDDate', u'GTD日期'),('BusinessUnit', u'业务单元'),('ErrorMsg', u'错误信息'),('OrderRef', u'报单引用'),('InvestorID', u'投资者代码'),('VolumeCondition', u'成交量类型'),('RequestID', u'请求编号')]])
    def getval(self, n):
        if n in ['ContingentCondition', 'Direction', 'OrderPriceType', 'TimeCondition', 'ForceCloseReason', 'VolumeCondition']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcContractBankField:
    def __init__(self, BankName="", BrokerID="", BankBrchID="", BankID=""):
        self.BankName=BankName
        self.BrokerID=BrokerID
        self.BankBrchID=BankBrchID
        self.BankID=BankID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BankName', 'BrokerID', 'BankBrchID', 'BankID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BankName', u'银行名称'),('BrokerID', u'经纪公司代码'),('BankBrchID', u'银行分中心代码'),('BankID', u'银行代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryParkedOrderActionField:
    def __init__(self, InstrumentID="", InvestorID="", ExchangeID="", BrokerID=""):
        self.InstrumentID=InstrumentID
        self.InvestorID=InvestorID
        self.ExchangeID=ExchangeID
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'InvestorID', 'ExchangeID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('InvestorID', u'投资者代码'),('ExchangeID', u'交易所代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcProductField:
    def __init__(self, MaxLimitOrderVolume=0, ExchangeID="", PositionDateType='1', MinLimitOrderVolume=0, MaxMarketOrderVolume=0, PriceTick=0, ProductName="", VolumeMultiple=0, PositionType='1', MinMarketOrderVolume=0, ProductClass='1', ProductID=""):
        self.MaxLimitOrderVolume=MaxLimitOrderVolume
        self.ExchangeID=ExchangeID
        self.PositionDateType=PositionDateType
        self.MinLimitOrderVolume=MinLimitOrderVolume
        self.MaxMarketOrderVolume=MaxMarketOrderVolume
        self.PriceTick=PriceTick
        self.ProductName=ProductName
        self.VolumeMultiple=VolumeMultiple
        self.PositionType=PositionType
        self.MinMarketOrderVolume=MinMarketOrderVolume
        self.ProductClass=ProductClass
        self.ProductID=ProductID
        self.vcmap={'ProductClass': {"'1'": u'\u671f\u8d27', "'2'": u'\u671f\u6743', "'5'": u'\u671f\u8f6c\u73b0', "'3'": u'\u7ec4\u5408', "'4'": u'\u5373\u671f'}, 'PositionDateType': {"'1'": u'\u4f7f\u7528\u5386\u53f2\u6301\u4ed3', "'2'": u'\u4e0d\u4f7f\u7528\u5386\u53f2\u6301\u4ed3'}, 'PositionType': {"'1'": u'\u51c0\u6301\u4ed3', "'2'": u'\u7efc\u5408\u6301\u4ed3'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['MaxLimitOrderVolume', 'ExchangeID', 'PositionDateType', 'MinLimitOrderVolume', 'MaxMarketOrderVolume', 'PriceTick', 'ProductName', 'VolumeMultiple', 'PositionType', 'MinMarketOrderVolume', 'ProductClass', 'ProductID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('MaxLimitOrderVolume', u'限价单最大下单量'),('ExchangeID', u'交易所代码'),('PositionDateType', u'持仓日期类型'),('MinLimitOrderVolume', u'限价单最小下单量'),('MaxMarketOrderVolume', u'市价单最大下单量'),('PriceTick', u'最小变动价位'),('ProductName', u'产品名称'),('VolumeMultiple', u'合约数量乘数'),('PositionType', u'持仓类型'),('MinMarketOrderVolume', u'市价单最小下单量'),('ProductClass', u'产品类型'),('ProductID', u'产品代码')]])
    def getval(self, n):
        if n in ['PositionDateType', 'PositionType', 'ProductClass']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryCFMMCBrokerKeyField:
    def __init__(self, BrokerID=""):
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcBrokerTradingAlgosField:
    def __init__(self, InstrumentID="", HandlePositionAlgoID='1', ExchangeID="", FindMarginRateAlgoID='1', BrokerID="", HandleTradingAccountAlgoID='1'):
        self.InstrumentID=InstrumentID
        self.HandlePositionAlgoID=HandlePositionAlgoID
        self.ExchangeID=ExchangeID
        self.FindMarginRateAlgoID=FindMarginRateAlgoID
        self.BrokerID=BrokerID
        self.HandleTradingAccountAlgoID=HandleTradingAccountAlgoID
        self.vcmap={'HandlePositionAlgoID': {"'1'": u'\u57fa\u672c', "'2'": u'\u5927\u8fde\u5546\u54c1\u4ea4\u6613\u6240', "'3'": u'\u90d1\u5dde\u5546\u54c1\u4ea4\u6613\u6240'}, 'HandleTradingAccountAlgoID': {"'1'": u'\u57fa\u672c', "'2'": u'\u5927\u8fde\u5546\u54c1\u4ea4\u6613\u6240', "'3'": u'\u90d1\u5dde\u5546\u54c1\u4ea4\u6613\u6240'}, 'FindMarginRateAlgoID': {"'1'": u'\u57fa\u672c', "'2'": u'\u5927\u8fde\u5546\u54c1\u4ea4\u6613\u6240', "'3'": u'\u90d1\u5dde\u5546\u54c1\u4ea4\u6613\u6240'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'HandlePositionAlgoID', 'ExchangeID', 'FindMarginRateAlgoID', 'BrokerID', 'HandleTradingAccountAlgoID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('HandlePositionAlgoID', u'持仓处理算法编号'),('ExchangeID', u'交易所代码'),('FindMarginRateAlgoID', u'寻找保证金率算法编号'),('BrokerID', u'经纪公司代码'),('HandleTradingAccountAlgoID', u'资金处理算法编号')]])
    def getval(self, n):
        if n in ['HandlePositionAlgoID', 'FindMarginRateAlgoID', 'HandleTradingAccountAlgoID']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcTransferQryBankReqField:
    def __init__(self, CurrencyCode="", FutureAccount="", FuturePwdFlag='0', FutureAccPwd=""):
        self.CurrencyCode=CurrencyCode
        self.FutureAccount=FutureAccount
        self.FuturePwdFlag=FuturePwdFlag
        self.FutureAccPwd=FutureAccPwd
        self.vcmap={'FuturePwdFlag': {"'1'": u'\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['CurrencyCode', 'FutureAccount', 'FuturePwdFlag', 'FutureAccPwd']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('CurrencyCode', u'币种：RMB-人民币 USD-美圆 HKD-港元'),('FutureAccount', u'期货资金账户'),('FuturePwdFlag', u'密码标志'),('FutureAccPwd', u'密码')]])
    def getval(self, n):
        if n in ['FuturePwdFlag']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcReqChangeAccountField:
    def __init__(self, MoneyAccountStatus='0', NewBankPassWord="", BrokerBranchID="", BankPassWord="", Telephone="", IdentifiedCardNo="", VerifyCertNoFlag='0', TID=0, AccountID="", BankAccount="", Fax="", InstallID=0, SecuPwdFlag='0', CustomerName="", CountryCode="", TradeCode="", BankBranchID="", SessionID=0, NewBankAccount="", Address="", PlateSerial=0, BankPwdFlag='0', CustType='0', Gender='0', BankID="", BankSerial="", TradingDay="", BrokerID="", IdCardType='0', Password="", MobilePhone="", TradeDate="", CurrencyID="", BankAccType='1', LastFragment='0', ZipCode="", BrokerIDByBank="", TradeTime="", EMail="", Digest=""):
        self.MoneyAccountStatus=MoneyAccountStatus
        self.NewBankPassWord=NewBankPassWord
        self.BrokerBranchID=BrokerBranchID
        self.BankPassWord=BankPassWord
        self.Telephone=Telephone
        self.IdentifiedCardNo=IdentifiedCardNo
        self.VerifyCertNoFlag=VerifyCertNoFlag
        self.TID=TID
        self.AccountID=AccountID
        self.BankAccount=BankAccount
        self.Fax=Fax
        self.InstallID=InstallID
        self.SecuPwdFlag=SecuPwdFlag
        self.CustomerName=CustomerName
        self.CountryCode=CountryCode
        self.TradeCode=TradeCode
        self.BankBranchID=BankBranchID
        self.SessionID=SessionID
        self.NewBankAccount=NewBankAccount
        self.Address=Address
        self.PlateSerial=PlateSerial
        self.BankPwdFlag=BankPwdFlag
        self.CustType=CustType
        self.Gender=Gender
        self.BankID=BankID
        self.BankSerial=BankSerial
        self.TradingDay=TradingDay
        self.BrokerID=BrokerID
        self.IdCardType=IdCardType
        self.Password=Password
        self.MobilePhone=MobilePhone
        self.TradeDate=TradeDate
        self.CurrencyID=CurrencyID
        self.BankAccType=BankAccType
        self.LastFragment=LastFragment
        self.ZipCode=ZipCode
        self.BrokerIDByBank=BrokerIDByBank
        self.TradeTime=TradeTime
        self.EMail=EMail
        self.Digest=Digest
        self.vcmap={'CustType': {"'1'": u'\u673a\u6784\u6237', "'0'": u'\u81ea\u7136\u4eba'}, 'Gender': {"'1'": u'\u7537', "'2'": u'\u5973', "'0'": u'\u672a\u77e5\u72b6\u6001'}, 'BankPwdFlag': {"'1'": u'\u660e\u6587\u6838\u5bf9', "'2'": u'\u5bc6\u6587\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}, 'LastFragment': {"'1'": u'\u4e0d\u662f\u6700\u540e\u5206\u7247', "'0'": u'\u662f\u6700\u540e\u5206\u7247'}, 'MoneyAccountStatus': {"'1'": u'\u9500\u6237', "'0'": u'\u6b63\u5e38'}, 'SecuPwdFlag': {"'1'": u'\u660e\u6587\u6838\u5bf9', "'2'": u'\u5bc6\u6587\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}, 'VerifyCertNoFlag': {"'1'": u'\u5426', "'0'": u'\u662f'}, 'BankAccType': {"'1'": u'\u94f6\u884c\u5b58\u6298', "'2'": u'\u50a8\u84c4\u5361', "'3'": u'\u4fe1\u7528\u5361'}, 'IdCardType': {"'9'": u'\u8425\u4e1a\u6267\u7167\u53f7', "'7'": u'\u53f0\u80de\u8bc1', "'x'": u'\u5176\u4ed6\u8bc1\u4ef6', "'5'": u'\u6237\u53e3\u7c3f', "'4'": u'\u58eb\u5175\u8bc1', "'1'": u'\u8eab\u4efd\u8bc1', "'0'": u'\u7ec4\u7ec7\u673a\u6784\u4ee3\u7801', "'6'": u'\u62a4\u7167', "'2'": u'\u519b\u5b98\u8bc1', "'8'": u'\u56de\u4e61\u8bc1', "'3'": u'\u8b66\u5b98\u8bc1', "'A'": u'\u7a0e\u52a1\u767b\u8bb0\u53f7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['MoneyAccountStatus', 'NewBankPassWord', 'BrokerBranchID', 'BankPassWord', 'Telephone', 'IdentifiedCardNo', 'VerifyCertNoFlag', 'TID', 'AccountID', 'BankAccount', 'Fax', 'InstallID', 'SecuPwdFlag', 'CustomerName', 'CountryCode', 'TradeCode', 'BankBranchID', 'SessionID', 'NewBankAccount', 'Address', 'PlateSerial', 'BankPwdFlag', 'CustType', 'Gender', 'BankID', 'BankSerial', 'TradingDay', 'BrokerID', 'IdCardType', 'Password', 'MobilePhone', 'TradeDate', 'CurrencyID', 'BankAccType', 'LastFragment', 'ZipCode', 'BrokerIDByBank', 'TradeTime', 'EMail', 'Digest']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('MoneyAccountStatus', u'资金账户状态'),('NewBankPassWord', u'新银行密码'),('BrokerBranchID', u'期商分支机构代码'),('BankPassWord', u'银行密码'),('Telephone', u'电话号码'),('IdentifiedCardNo', u'证件号码'),('VerifyCertNoFlag', u'验证客户证件号码标志'),('TID', u'交易ID'),('AccountID', u'投资者帐号'),('BankAccount', u'银行帐号'),('Fax', u'传真'),('InstallID', u'安装编号'),('SecuPwdFlag', u'期货资金密码核对标志'),('CustomerName', u'客户姓名'),('CountryCode', u'国家代码'),('TradeCode', u'业务功能码'),('BankBranchID', u'银行分支机构代码'),('SessionID', u'会话号'),('NewBankAccount', u'新银行帐号'),('Address', u'地址'),('PlateSerial', u'银期平台消息流水号'),('BankPwdFlag', u'银行密码标志'),('CustType', u'客户类型'),('Gender', u'性别'),('BankID', u'银行代码'),('BankSerial', u'银行流水号'),('TradingDay', u'交易系统日期'),('BrokerID', u'期商代码'),('IdCardType', u'证件类型'),('Password', u'期货密码'),('MobilePhone', u'手机'),('TradeDate', u'交易日期'),('CurrencyID', u'币种代码'),('BankAccType', u'银行帐号类型'),('LastFragment', u'最后分片标志'),('ZipCode', u'邮编'),('BrokerIDByBank', u'期货公司银行编码'),('TradeTime', u'交易时间'),('EMail', u'电子邮件'),('Digest', u'摘要')]])
    def getval(self, n):
        if n in ['MoneyAccountStatus', 'VerifyCertNoFlag', 'SecuPwdFlag', 'BankPwdFlag', 'CustType', 'Gender', 'IdCardType', 'BankAccType', 'LastFragment']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcCommPhaseField:
    def __init__(self, TradingDay="", CommPhaseNo=0):
        self.TradingDay=TradingDay
        self.CommPhaseNo=CommPhaseNo
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'CommPhaseNo']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易日'),('CommPhaseNo', u'通讯时段编号')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcAuthenticationInfoField:
    def __init__(self, UserID="", AuthInfo="", IsResult=0, BrokerID="", UserProductInfo=""):
        self.UserID=UserID
        self.AuthInfo=AuthInfo
        self.IsResult=IsResult
        self.BrokerID=BrokerID
        self.UserProductInfo=UserProductInfo
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserID', 'AuthInfo', 'IsResult', 'BrokerID', 'UserProductInfo']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserID', u'用户代码'),('AuthInfo', u'认证信息'),('IsResult', u'是否为认证结果'),('BrokerID', u'经纪公司代码'),('UserProductInfo', u'用户端产品信息')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcTransferFutureToBankReqField:
    def __init__(self, FutureAccount="", FutureAccPwd="", CurrencyCode="", TradeAmt=0, FuturePwdFlag='0', CustFee=0):
        self.FutureAccount=FutureAccount
        self.FutureAccPwd=FutureAccPwd
        self.CurrencyCode=CurrencyCode
        self.TradeAmt=TradeAmt
        self.FuturePwdFlag=FuturePwdFlag
        self.CustFee=CustFee
        self.vcmap={'FuturePwdFlag': {"'1'": u'\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['FutureAccount', 'FutureAccPwd', 'CurrencyCode', 'TradeAmt', 'FuturePwdFlag', 'CustFee']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('FutureAccount', u'期货资金账户'),('FutureAccPwd', u'密码'),('CurrencyCode', u'币种：RMB-人民币 USD-美圆 HKD-港元'),('TradeAmt', u'转账金额'),('FuturePwdFlag', u'密码标志'),('CustFee', u'客户手续费')]])
    def getval(self, n):
        if n in ['FuturePwdFlag']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcReqCancelAccountField:
    def __init__(self, MoneyAccountStatus='0', BrokerBranchID="", BankPassWord="", Telephone="", IdentifiedCardNo="", VerifyCertNoFlag='0', TID=0, AccountID="", BankAccount="", Fax="", InstallID=0, SecuPwdFlag='0', CustomerName="", CountryCode="", TradeCode="", BankBranchID="", SessionID=0, Address="", PlateSerial=0, BankPwdFlag='0', CustType='0', Gender='0', BankID="", BankSerial="", OperNo="", TradingDay="", BankSecuAcc="", BrokerID="", CashExchangeCode='1', IdCardType='0', Password="", MobilePhone="", TradeDate="", CurrencyID="", BankAccType='1', LastFragment='0', ZipCode="", BankSecuAccType='1', BrokerIDByBank="", TradeTime="", EMail="", Digest="", DeviceID=""):
        self.MoneyAccountStatus=MoneyAccountStatus
        self.BrokerBranchID=BrokerBranchID
        self.BankPassWord=BankPassWord
        self.Telephone=Telephone
        self.IdentifiedCardNo=IdentifiedCardNo
        self.VerifyCertNoFlag=VerifyCertNoFlag
        self.TID=TID
        self.AccountID=AccountID
        self.BankAccount=BankAccount
        self.Fax=Fax
        self.InstallID=InstallID
        self.SecuPwdFlag=SecuPwdFlag
        self.CustomerName=CustomerName
        self.CountryCode=CountryCode
        self.TradeCode=TradeCode
        self.BankBranchID=BankBranchID
        self.SessionID=SessionID
        self.Address=Address
        self.PlateSerial=PlateSerial
        self.BankPwdFlag=BankPwdFlag
        self.CustType=CustType
        self.Gender=Gender
        self.BankID=BankID
        self.BankSerial=BankSerial
        self.OperNo=OperNo
        self.TradingDay=TradingDay
        self.BankSecuAcc=BankSecuAcc
        self.BrokerID=BrokerID
        self.CashExchangeCode=CashExchangeCode
        self.IdCardType=IdCardType
        self.Password=Password
        self.MobilePhone=MobilePhone
        self.TradeDate=TradeDate
        self.CurrencyID=CurrencyID
        self.BankAccType=BankAccType
        self.LastFragment=LastFragment
        self.ZipCode=ZipCode
        self.BankSecuAccType=BankSecuAccType
        self.BrokerIDByBank=BrokerIDByBank
        self.TradeTime=TradeTime
        self.EMail=EMail
        self.Digest=Digest
        self.DeviceID=DeviceID
        self.vcmap={'CustType': {"'1'": u'\u673a\u6784\u6237', "'0'": u'\u81ea\u7136\u4eba'}, 'Gender': {"'1'": u'\u7537', "'2'": u'\u5973', "'0'": u'\u672a\u77e5\u72b6\u6001'}, 'BankPwdFlag': {"'1'": u'\u660e\u6587\u6838\u5bf9', "'2'": u'\u5bc6\u6587\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}, 'LastFragment': {"'1'": u'\u4e0d\u662f\u6700\u540e\u5206\u7247', "'0'": u'\u662f\u6700\u540e\u5206\u7247'}, 'MoneyAccountStatus': {"'1'": u'\u9500\u6237', "'0'": u'\u6b63\u5e38'}, 'SecuPwdFlag': {"'1'": u'\u660e\u6587\u6838\u5bf9', "'2'": u'\u5bc6\u6587\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}, 'CashExchangeCode': {"'1'": u'\u6c47', "'2'": u'\u949e'}, 'VerifyCertNoFlag': {"'1'": u'\u5426', "'0'": u'\u662f'}, 'BankAccType': {"'1'": u'\u94f6\u884c\u5b58\u6298', "'2'": u'\u50a8\u84c4\u5361', "'3'": u'\u4fe1\u7528\u5361'}, 'BankSecuAccType': {"'1'": u'\u94f6\u884c\u5b58\u6298', "'2'": u'\u50a8\u84c4\u5361', "'3'": u'\u4fe1\u7528\u5361'}, 'IdCardType': {"'9'": u'\u8425\u4e1a\u6267\u7167\u53f7', "'7'": u'\u53f0\u80de\u8bc1', "'x'": u'\u5176\u4ed6\u8bc1\u4ef6', "'5'": u'\u6237\u53e3\u7c3f', "'4'": u'\u58eb\u5175\u8bc1', "'1'": u'\u8eab\u4efd\u8bc1', "'0'": u'\u7ec4\u7ec7\u673a\u6784\u4ee3\u7801', "'6'": u'\u62a4\u7167', "'2'": u'\u519b\u5b98\u8bc1', "'8'": u'\u56de\u4e61\u8bc1', "'3'": u'\u8b66\u5b98\u8bc1', "'A'": u'\u7a0e\u52a1\u767b\u8bb0\u53f7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['MoneyAccountStatus', 'BrokerBranchID', 'BankPassWord', 'Telephone', 'IdentifiedCardNo', 'VerifyCertNoFlag', 'TID', 'AccountID', 'BankAccount', 'Fax', 'InstallID', 'SecuPwdFlag', 'CustomerName', 'CountryCode', 'TradeCode', 'BankBranchID', 'SessionID', 'Address', 'PlateSerial', 'BankPwdFlag', 'CustType', 'Gender', 'BankID', 'BankSerial', 'OperNo', 'TradingDay', 'BankSecuAcc', 'BrokerID', 'CashExchangeCode', 'IdCardType', 'Password', 'MobilePhone', 'TradeDate', 'CurrencyID', 'BankAccType', 'LastFragment', 'ZipCode', 'BankSecuAccType', 'BrokerIDByBank', 'TradeTime', 'EMail', 'Digest', 'DeviceID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('MoneyAccountStatus', u'资金账户状态'),('BrokerBranchID', u'期商分支机构代码'),('BankPassWord', u'银行密码'),('Telephone', u'电话号码'),('IdentifiedCardNo', u'证件号码'),('VerifyCertNoFlag', u'验证客户证件号码标志'),('TID', u'交易ID'),('AccountID', u'投资者帐号'),('BankAccount', u'银行帐号'),('Fax', u'传真'),('InstallID', u'安装编号'),('SecuPwdFlag', u'期货资金密码核对标志'),('CustomerName', u'客户姓名'),('CountryCode', u'国家代码'),('TradeCode', u'业务功能码'),('BankBranchID', u'银行分支机构代码'),('SessionID', u'会话号'),('Address', u'地址'),('PlateSerial', u'银期平台消息流水号'),('BankPwdFlag', u'银行密码标志'),('CustType', u'客户类型'),('Gender', u'性别'),('BankID', u'银行代码'),('BankSerial', u'银行流水号'),('OperNo', u'交易柜员'),('TradingDay', u'交易系统日期'),('BankSecuAcc', u'期货单位帐号'),('BrokerID', u'期商代码'),('CashExchangeCode', u'汇钞标志'),('IdCardType', u'证件类型'),('Password', u'期货密码'),('MobilePhone', u'手机'),('TradeDate', u'交易日期'),('CurrencyID', u'币种代码'),('BankAccType', u'银行帐号类型'),('LastFragment', u'最后分片标志'),('ZipCode', u'邮编'),('BankSecuAccType', u'期货单位帐号类型'),('BrokerIDByBank', u'期货公司银行编码'),('TradeTime', u'交易时间'),('EMail', u'电子邮件'),('Digest', u'摘要'),('DeviceID', u'渠道标志')]])
    def getval(self, n):
        if n in ['MoneyAccountStatus', 'VerifyCertNoFlag', 'SecuPwdFlag', 'BankPwdFlag', 'CustType', 'Gender', 'CashExchangeCode', 'IdCardType', 'BankAccType', 'LastFragment', 'BankSecuAccType']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcMarketDataLastMatchField:
    def __init__(self, Volume=0, OpenInterest=0, LastPrice=0, Turnover=0):
        self.Volume=Volume
        self.OpenInterest=OpenInterest
        self.LastPrice=LastPrice
        self.Turnover=Turnover
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['Volume', 'OpenInterest', 'LastPrice', 'Turnover']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('Volume', u'数量'),('OpenInterest', u'持仓量'),('LastPrice', u'最新价'),('Turnover', u'成交金额')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcSuperUserFunctionField:
    def __init__(self, FunctionCode='1', UserID=""):
        self.FunctionCode=FunctionCode
        self.UserID=UserID
        self.vcmap={'FunctionCode': {"'9'": u'\u540c\u6b65\u7ecf\u7eaa\u516c\u53f8\u6570\u636e', "'B'": u'\u8d85\u7ea7\u67e5\u8be2', "'7'": u'\u62a5\u5355\u64cd\u4f5c', "'8'": u'\u540c\u6b65\u7cfb\u7edf\u6570\u636e', "'5'": u'\u53d8\u66f4\u6295\u8d44\u8005\u53e3\u4ee4', "'C'": u'\u62a5\u5355\u63d2\u5165', "'4'": u'\u53d8\u66f4\u7ecf\u7eaa\u516c\u53f8\u53e3\u4ee4', "'1'": u'\u6570\u636e\u5f02\u6b65\u5316', "'6'": u'\u62a5\u5355\u63d2\u5165', "'2'": u'\u5f3a\u5236\u7528\u6237\u767b\u51fa', "'E'": u'\u540c\u6b65\u52a8\u6001\u4ee4\u724c', "'3'": u'\u53d8\u66f4\u7ba1\u7406\u7528\u6237\u53e3\u4ee4', "'D'": u'\u62a5\u5355\u64cd\u4f5c', "'A'": u'\u6279\u91cf\u540c\u6b65\u7ecf\u7eaa\u516c\u53f8\u6570\u636e'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['FunctionCode', 'UserID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('FunctionCode', u'功能代码'),('UserID', u'用户代码')]])
    def getval(self, n):
        if n in ['FunctionCode']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcParkedOrderActionField:
    def __init__(self, InstrumentID="", Status='1', ExchangeID="", ActionFlag='0', OrderActionRef=0, UserType='0', ErrorMsg="", UserID="", LimitPrice=0, OrderRef="", InvestorID="", SessionID=0, VolumeChange=0, BrokerID="", RequestID=0, OrderSysID="", ParkedOrderActionID="", FrontID=0, ErrorID=0):
        self.InstrumentID=InstrumentID
        self.Status=Status
        self.ExchangeID=ExchangeID
        self.ActionFlag=ActionFlag
        self.OrderActionRef=OrderActionRef
        self.UserType=UserType
        self.ErrorMsg=ErrorMsg
        self.UserID=UserID
        self.LimitPrice=LimitPrice
        self.OrderRef=OrderRef
        self.InvestorID=InvestorID
        self.SessionID=SessionID
        self.VolumeChange=VolumeChange
        self.BrokerID=BrokerID
        self.RequestID=RequestID
        self.OrderSysID=OrderSysID
        self.ParkedOrderActionID=ParkedOrderActionID
        self.FrontID=FrontID
        self.ErrorID=ErrorID
        self.vcmap={'Status': {"'1'": u'\u672a\u53d1\u9001', "'2'": u'\u5df2\u53d1\u9001', "'3'": u'\u5df2\u5220\u9664'}, 'UserType': {"'1'": u'\u64cd\u4f5c\u5458', "'2'": u'\u7ba1\u7406\u5458', "'0'": u'\u6295\u8d44\u8005'}, 'ActionFlag': {"'0'": u'\u5220\u9664', "'3'": u'\u4fee\u6539'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'Status', 'ExchangeID', 'ActionFlag', 'OrderActionRef', 'UserType', 'ErrorMsg', 'UserID', 'LimitPrice', 'OrderRef', 'InvestorID', 'SessionID', 'VolumeChange', 'BrokerID', 'RequestID', 'OrderSysID', 'ParkedOrderActionID', 'FrontID', 'ErrorID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('Status', u'预埋撤单状态'),('ExchangeID', u'交易所代码'),('ActionFlag', u'操作标志'),('OrderActionRef', u'报单操作引用'),('UserType', u'用户类型'),('ErrorMsg', u'错误信息'),('UserID', u'用户代码'),('LimitPrice', u'价格'),('OrderRef', u'报单引用'),('InvestorID', u'投资者代码'),('SessionID', u'会话编号'),('VolumeChange', u'数量变化'),('BrokerID', u'经纪公司代码'),('RequestID', u'请求编号'),('OrderSysID', u'报单编号'),('ParkedOrderActionID', u'预埋撤单单编号'),('FrontID', u'前置编号'),('ErrorID', u'错误代码')]])
    def getval(self, n):
        if n in ['Status', 'ActionFlag', 'UserType']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcUserSessionField:
    def __init__(self, MacAddress="", UserProductInfo="", InterfaceProductInfo="", UserID="", LoginDate="", SessionID=0, BrokerID="", FrontID=0, IPAddress="", LoginTime="", ProtocolInfo=""):
        self.MacAddress=MacAddress
        self.UserProductInfo=UserProductInfo
        self.InterfaceProductInfo=InterfaceProductInfo
        self.UserID=UserID
        self.LoginDate=LoginDate
        self.SessionID=SessionID
        self.BrokerID=BrokerID
        self.FrontID=FrontID
        self.IPAddress=IPAddress
        self.LoginTime=LoginTime
        self.ProtocolInfo=ProtocolInfo
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['MacAddress', 'UserProductInfo', 'InterfaceProductInfo', 'UserID', 'LoginDate', 'SessionID', 'BrokerID', 'FrontID', 'IPAddress', 'LoginTime', 'ProtocolInfo']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('MacAddress', u'Mac地址'),('UserProductInfo', u'用户端产品信息'),('InterfaceProductInfo', u'接口端产品信息'),('UserID', u'用户代码'),('LoginDate', u'登录日期'),('SessionID', u'会话编号'),('BrokerID', u'经纪公司代码'),('FrontID', u'前置编号'),('IPAddress', u'IP地址'),('LoginTime', u'登录时间'),('ProtocolInfo', u'协议信息')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQueryMaxOrderVolumeWithPriceField:
    def __init__(self, InstrumentID="", Direction='0', OffsetFlag='0', Price=0, HedgeFlag='1', InvestorID="", BrokerID="", MaxVolume=0):
        self.InstrumentID=InstrumentID
        self.Direction=Direction
        self.OffsetFlag=OffsetFlag
        self.Price=Price
        self.HedgeFlag=HedgeFlag
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.MaxVolume=MaxVolume
        self.vcmap={'Direction': {"'1'": u'\u5356', "'0'": u'\u4e70'}, 'HedgeFlag': {"'1'": u'\u6295\u673a', "'2'": u'\u5957\u5229', "'3'": u'\u5957\u4fdd'}, 'OffsetFlag': {"'5'": u'\u5f3a\u51cf', "'4'": u'\u5e73\u6628', "'1'": u'\u5e73\u4ed3', "'0'": u'\u5f00\u4ed3', "'6'": u'\u672c\u5730\u5f3a\u5e73', "'2'": u'\u5f3a\u5e73', "'3'": u'\u5e73\u4eca'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'Direction', 'OffsetFlag', 'Price', 'HedgeFlag', 'InvestorID', 'BrokerID', 'MaxVolume']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('Direction', u'买卖方向'),('OffsetFlag', u'开平标志'),('Price', u'报单价格'),('HedgeFlag', u'投机套保标志'),('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('MaxVolume', u'最大允许报单数量')]])
    def getval(self, n):
        if n in ['Direction', 'OffsetFlag', 'HedgeFlag']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcTransferBankToFutureReqField:
    def __init__(self, FutureAccount="", FutureAccPwd="", CurrencyCode="", TradeAmt=0, FuturePwdFlag='0', CustFee=0):
        self.FutureAccount=FutureAccount
        self.FutureAccPwd=FutureAccPwd
        self.CurrencyCode=CurrencyCode
        self.TradeAmt=TradeAmt
        self.FuturePwdFlag=FuturePwdFlag
        self.CustFee=CustFee
        self.vcmap={'FuturePwdFlag': {"'1'": u'\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['FutureAccount', 'FutureAccPwd', 'CurrencyCode', 'TradeAmt', 'FuturePwdFlag', 'CustFee']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('FutureAccount', u'期货资金账户'),('FutureAccPwd', u'密码'),('CurrencyCode', u'币种：RMB-人民币 USD-美圆 HKD-港元'),('TradeAmt', u'转账金额'),('FuturePwdFlag', u'密码标志'),('CustFee', u'客户手续费')]])
    def getval(self, n):
        if n in ['FuturePwdFlag']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcInstrumentStatusField:
    def __init__(self, InstrumentID="", ExchangeID="", EnterTime="", SettlementGroupID="", TradingSegmentSN=0, EnterReason='1', InstrumentStatus='0', ExchangeInstID=""):
        self.InstrumentID=InstrumentID
        self.ExchangeID=ExchangeID
        self.EnterTime=EnterTime
        self.SettlementGroupID=SettlementGroupID
        self.TradingSegmentSN=TradingSegmentSN
        self.EnterReason=EnterReason
        self.InstrumentStatus=InstrumentStatus
        self.ExchangeInstID=ExchangeInstID
        self.vcmap={'InstrumentStatus': {"'5'": u'\u96c6\u5408\u7ade\u4ef7\u64ae\u5408', "'4'": u'\u96c6\u5408\u7ade\u4ef7\u4ef7\u683c\u5e73\u8861', "'1'": u'\u975e\u4ea4\u6613', "'0'": u'\u5f00\u76d8\u524d', "'6'": u'\u6536\u76d8', "'2'": u'\u8fde\u7eed\u4ea4\u6613', "'3'": u'\u96c6\u5408\u7ade\u4ef7\u62a5\u5355'}, 'EnterReason': {"'1'": u'\u81ea\u52a8\u5207\u6362', "'2'": u'\u624b\u52a8\u5207\u6362', "'3'": u'\u7194\u65ad'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'ExchangeID', 'EnterTime', 'SettlementGroupID', 'TradingSegmentSN', 'EnterReason', 'InstrumentStatus', 'ExchangeInstID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('ExchangeID', u'交易所代码'),('EnterTime', u'进入本状态时间'),('SettlementGroupID', u'结算组代码'),('TradingSegmentSN', u'交易阶段编号'),('EnterReason', u'进入本状态原因'),('InstrumentStatus', u'合约交易状态'),('ExchangeInstID', u'合约在交易所的代码')]])
    def getval(self, n):
        if n in ['EnterReason', 'InstrumentStatus']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryCFMMCTradingAccountKeyField:
    def __init__(self, InvestorID="", BrokerID=""):
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryContractBankField:
    def __init__(self, BrokerID="", BankBrchID="", BankID=""):
        self.BrokerID=BrokerID
        self.BankBrchID=BankBrchID
        self.BankID=BankID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'BankBrchID', 'BankID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('BankBrchID', u'银行分中心代码'),('BankID', u'银行代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcSyncingTradingCodeField:
    def __init__(self, ExchangeID="", ClientID="", InvestorID="", BrokerID="", ClientIDType='1', IsActive=0):
        self.ExchangeID=ExchangeID
        self.ClientID=ClientID
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.ClientIDType=ClientIDType
        self.IsActive=IsActive
        self.vcmap={'ClientIDType': {"'1'": u'\u6295\u673a', "'2'": u'\u5957\u5229', "'3'": u'\u5957\u4fdd'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeID', 'ClientID', 'InvestorID', 'BrokerID', 'ClientIDType', 'IsActive']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeID', u'交易所代码'),('ClientID', u'客户代码'),('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('ClientIDType', u'交易编码类型'),('IsActive', u'是否活跃')]])
    def getval(self, n):
        if n in ['ClientIDType']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CTKSCOSAskSelectField:
    def __init__(self, SequenceNo=0, Memo="", UserID="", InvestorID="", BrokerID="", ConditionalOrderID=0, SelectType='1'):
        self.SequenceNo=SequenceNo
        self.Memo=Memo
        self.UserID=UserID
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.ConditionalOrderID=ConditionalOrderID
        self.SelectType=SelectType
        self.vcmap={'SelectType': {"'1'": u'\u786e\u8ba4\u3001\u53d6\u6d88', "'2'": u'\u91cd\u8bd5\u3001\u8df3\u8fc7\u3001\u7ec8\u6b62'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['SequenceNo', 'Memo', 'UserID', 'InvestorID', 'BrokerID', 'ConditionalOrderID', 'SelectType']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('SequenceNo', u'序号'),('Memo', u'备注'),('UserID', u'操作员'),('InvestorID', u'投资者代码'),('BrokerID', u'营业部代码'),('ConditionalOrderID', u'条件单编号'),('SelectType', u'选择方式')]])
    def getval(self, n):
        if n in ['SelectType']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryEWarrantOffsetField:
    def __init__(self, InstrumentID="", InvestorID="", ExchangeID="", BrokerID=""):
        self.InstrumentID=InstrumentID
        self.InvestorID=InvestorID
        self.ExchangeID=ExchangeID
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'InvestorID', 'ExchangeID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('InvestorID', u'投资者代码'),('ExchangeID', u'交易所代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryBrokerTradingParamsField:
    def __init__(self, InvestorID="", BrokerID=""):
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcSyncingTradingAccountField:
    def __init__(self, Mortgage=0, ExchangeDeliveryMargin=0, FrozenMargin=0, WithdrawQuota=0, PositionProfit=0, Commission=0, Interest=0, CashIn=0, AccountID="", Available=0, PreCredit=0, PreMortgage=0, InterestBase=0, ExchangeMargin=0, PreMargin=0, SettlementID=0, DeliveryMargin=0, TradingDay="", BrokerID="", FrozenCash=0, Withdraw=0, Balance=0, Reserve=0, PreDeposit=0, Credit=0, PreBalance=0, CurrMargin=0, FrozenCommission=0, CloseProfit=0, Deposit=0):
        self.Mortgage=Mortgage
        self.ExchangeDeliveryMargin=ExchangeDeliveryMargin
        self.FrozenMargin=FrozenMargin
        self.WithdrawQuota=WithdrawQuota
        self.PositionProfit=PositionProfit
        self.Commission=Commission
        self.Interest=Interest
        self.CashIn=CashIn
        self.AccountID=AccountID
        self.Available=Available
        self.PreCredit=PreCredit
        self.PreMortgage=PreMortgage
        self.InterestBase=InterestBase
        self.ExchangeMargin=ExchangeMargin
        self.PreMargin=PreMargin
        self.SettlementID=SettlementID
        self.DeliveryMargin=DeliveryMargin
        self.TradingDay=TradingDay
        self.BrokerID=BrokerID
        self.FrozenCash=FrozenCash
        self.Withdraw=Withdraw
        self.Balance=Balance
        self.Reserve=Reserve
        self.PreDeposit=PreDeposit
        self.Credit=Credit
        self.PreBalance=PreBalance
        self.CurrMargin=CurrMargin
        self.FrozenCommission=FrozenCommission
        self.CloseProfit=CloseProfit
        self.Deposit=Deposit
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['Mortgage', 'ExchangeDeliveryMargin', 'FrozenMargin', 'WithdrawQuota', 'PositionProfit', 'Commission', 'Interest', 'CashIn', 'AccountID', 'Available', 'PreCredit', 'PreMortgage', 'InterestBase', 'ExchangeMargin', 'PreMargin', 'SettlementID', 'DeliveryMargin', 'TradingDay', 'BrokerID', 'FrozenCash', 'Withdraw', 'Balance', 'Reserve', 'PreDeposit', 'Credit', 'PreBalance', 'CurrMargin', 'FrozenCommission', 'CloseProfit', 'Deposit']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('Mortgage', u'质押金额'),('ExchangeDeliveryMargin', u'交易所交割保证金'),('FrozenMargin', u'冻结的保证金'),('WithdrawQuota', u'可取资金'),('PositionProfit', u'持仓盈亏'),('Commission', u'手续费'),('Interest', u'利息收入'),('CashIn', u'资金差额'),('AccountID', u'投资者帐号'),('Available', u'可用资金'),('PreCredit', u'上次信用额度'),('PreMortgage', u'上次质押金额'),('InterestBase', u'利息基数'),('ExchangeMargin', u'交易所保证金'),('PreMargin', u'上次占用的保证金'),('SettlementID', u'结算编号'),('DeliveryMargin', u'投资者交割保证金'),('TradingDay', u'交易日'),('BrokerID', u'经纪公司代码'),('FrozenCash', u'冻结的资金'),('Withdraw', u'出金金额'),('Balance', u'期货结算准备金'),('Reserve', u'基本准备金'),('PreDeposit', u'上次存款额'),('Credit', u'信用额度'),('PreBalance', u'上次结算准备金'),('CurrMargin', u'当前保证金总额'),('FrozenCommission', u'冻结的手续费'),('CloseProfit', u'平仓盈亏'),('Deposit', u'入金金额')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryExchangeOrderField:
    def __init__(self, ExchangeInstID="", TraderID="", ExchangeID="", ParticipantID="", ClientID=""):
        self.ExchangeInstID=ExchangeInstID
        self.TraderID=TraderID
        self.ExchangeID=ExchangeID
        self.ParticipantID=ParticipantID
        self.ClientID=ClientID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeInstID', 'TraderID', 'ExchangeID', 'ParticipantID', 'ClientID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeInstID', u'合约在交易所的代码'),('TraderID', u'交易所交易员代码'),('ExchangeID', u'交易所代码'),('ParticipantID', u'会员代码'),('ClientID', u'客户代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcChangeAccountField:
    def __init__(self, MoneyAccountStatus='0', NewBankPassWord="", BrokerBranchID="", BankPassWord="", Telephone="", IdentifiedCardNo="", VerifyCertNoFlag='0', TID=0, AccountID="", BankAccount="", Fax="", InstallID=0, SecuPwdFlag='0', CustomerName="", CountryCode="", TradeCode="", BankBranchID="", SessionID=0, NewBankAccount="", Address="", PlateSerial=0, BankPwdFlag='0', ErrorID=0, CustType='0', Gender='0', BankID="", BankSerial="", TradingDay="", BrokerID="", IdCardType='0', Password="", MobilePhone="", TradeDate="", CurrencyID="", ErrorMsg="", BankAccType='1', LastFragment='0', ZipCode="", BrokerIDByBank="", TradeTime="", EMail="", Digest=""):
        self.MoneyAccountStatus=MoneyAccountStatus
        self.NewBankPassWord=NewBankPassWord
        self.BrokerBranchID=BrokerBranchID
        self.BankPassWord=BankPassWord
        self.Telephone=Telephone
        self.IdentifiedCardNo=IdentifiedCardNo
        self.VerifyCertNoFlag=VerifyCertNoFlag
        self.TID=TID
        self.AccountID=AccountID
        self.BankAccount=BankAccount
        self.Fax=Fax
        self.InstallID=InstallID
        self.SecuPwdFlag=SecuPwdFlag
        self.CustomerName=CustomerName
        self.CountryCode=CountryCode
        self.TradeCode=TradeCode
        self.BankBranchID=BankBranchID
        self.SessionID=SessionID
        self.NewBankAccount=NewBankAccount
        self.Address=Address
        self.PlateSerial=PlateSerial
        self.BankPwdFlag=BankPwdFlag
        self.ErrorID=ErrorID
        self.CustType=CustType
        self.Gender=Gender
        self.BankID=BankID
        self.BankSerial=BankSerial
        self.TradingDay=TradingDay
        self.BrokerID=BrokerID
        self.IdCardType=IdCardType
        self.Password=Password
        self.MobilePhone=MobilePhone
        self.TradeDate=TradeDate
        self.CurrencyID=CurrencyID
        self.ErrorMsg=ErrorMsg
        self.BankAccType=BankAccType
        self.LastFragment=LastFragment
        self.ZipCode=ZipCode
        self.BrokerIDByBank=BrokerIDByBank
        self.TradeTime=TradeTime
        self.EMail=EMail
        self.Digest=Digest
        self.vcmap={'CustType': {"'1'": u'\u673a\u6784\u6237', "'0'": u'\u81ea\u7136\u4eba'}, 'Gender': {"'1'": u'\u7537', "'2'": u'\u5973', "'0'": u'\u672a\u77e5\u72b6\u6001'}, 'BankPwdFlag': {"'1'": u'\u660e\u6587\u6838\u5bf9', "'2'": u'\u5bc6\u6587\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}, 'LastFragment': {"'1'": u'\u4e0d\u662f\u6700\u540e\u5206\u7247', "'0'": u'\u662f\u6700\u540e\u5206\u7247'}, 'MoneyAccountStatus': {"'1'": u'\u9500\u6237', "'0'": u'\u6b63\u5e38'}, 'SecuPwdFlag': {"'1'": u'\u660e\u6587\u6838\u5bf9', "'2'": u'\u5bc6\u6587\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}, 'VerifyCertNoFlag': {"'1'": u'\u5426', "'0'": u'\u662f'}, 'BankAccType': {"'1'": u'\u94f6\u884c\u5b58\u6298', "'2'": u'\u50a8\u84c4\u5361', "'3'": u'\u4fe1\u7528\u5361'}, 'IdCardType': {"'9'": u'\u8425\u4e1a\u6267\u7167\u53f7', "'7'": u'\u53f0\u80de\u8bc1', "'x'": u'\u5176\u4ed6\u8bc1\u4ef6', "'5'": u'\u6237\u53e3\u7c3f', "'4'": u'\u58eb\u5175\u8bc1', "'1'": u'\u8eab\u4efd\u8bc1', "'0'": u'\u7ec4\u7ec7\u673a\u6784\u4ee3\u7801', "'6'": u'\u62a4\u7167', "'2'": u'\u519b\u5b98\u8bc1', "'8'": u'\u56de\u4e61\u8bc1', "'3'": u'\u8b66\u5b98\u8bc1', "'A'": u'\u7a0e\u52a1\u767b\u8bb0\u53f7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['MoneyAccountStatus', 'NewBankPassWord', 'BrokerBranchID', 'BankPassWord', 'Telephone', 'IdentifiedCardNo', 'VerifyCertNoFlag', 'TID', 'AccountID', 'BankAccount', 'Fax', 'InstallID', 'SecuPwdFlag', 'CustomerName', 'CountryCode', 'TradeCode', 'BankBranchID', 'SessionID', 'NewBankAccount', 'Address', 'PlateSerial', 'BankPwdFlag', 'ErrorID', 'CustType', 'Gender', 'BankID', 'BankSerial', 'TradingDay', 'BrokerID', 'IdCardType', 'Password', 'MobilePhone', 'TradeDate', 'CurrencyID', 'ErrorMsg', 'BankAccType', 'LastFragment', 'ZipCode', 'BrokerIDByBank', 'TradeTime', 'EMail', 'Digest']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('MoneyAccountStatus', u'资金账户状态'),('NewBankPassWord', u'新银行密码'),('BrokerBranchID', u'期商分支机构代码'),('BankPassWord', u'银行密码'),('Telephone', u'电话号码'),('IdentifiedCardNo', u'证件号码'),('VerifyCertNoFlag', u'验证客户证件号码标志'),('TID', u'交易ID'),('AccountID', u'投资者帐号'),('BankAccount', u'银行帐号'),('Fax', u'传真'),('InstallID', u'安装编号'),('SecuPwdFlag', u'期货资金密码核对标志'),('CustomerName', u'客户姓名'),('CountryCode', u'国家代码'),('TradeCode', u'业务功能码'),('BankBranchID', u'银行分支机构代码'),('SessionID', u'会话号'),('NewBankAccount', u'新银行帐号'),('Address', u'地址'),('PlateSerial', u'银期平台消息流水号'),('BankPwdFlag', u'银行密码标志'),('ErrorID', u'错误代码'),('CustType', u'客户类型'),('Gender', u'性别'),('BankID', u'银行代码'),('BankSerial', u'银行流水号'),('TradingDay', u'交易系统日期'),('BrokerID', u'期商代码'),('IdCardType', u'证件类型'),('Password', u'期货密码'),('MobilePhone', u'手机'),('TradeDate', u'交易日期'),('CurrencyID', u'币种代码'),('ErrorMsg', u'错误信息'),('BankAccType', u'银行帐号类型'),('LastFragment', u'最后分片标志'),('ZipCode', u'邮编'),('BrokerIDByBank', u'期货公司银行编码'),('TradeTime', u'交易时间'),('EMail', u'电子邮件'),('Digest', u'摘要')]])
    def getval(self, n):
        if n in ['MoneyAccountStatus', 'VerifyCertNoFlag', 'SecuPwdFlag', 'BankPwdFlag', 'CustType', 'Gender', 'IdCardType', 'BankAccType', 'LastFragment']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcInstrumentField:
    def __init__(self, IsTrading=0, ExpireDate="", PositionDateType='1', LongMarginRatio=0, PositionType='1', ProductClass='1', InstrumentName="", ShortMarginRatio=0, VolumeMultiple=0, DeliveryYear=0, CreateDate="", InstrumentID="", MaxLimitOrderVolume=0, ExchangeID="", MinLimitOrderVolume=0, MaxMarketOrderVolume=0, StartDelivDate="", DeliveryMonth=0, PriceTick=0, InstLifePhase='0', ExchangeInstID="", MinMarketOrderVolume=0, EndDelivDate="", OpenDate="", ProductID=""):
        self.IsTrading=IsTrading
        self.ExpireDate=ExpireDate
        self.PositionDateType=PositionDateType
        self.LongMarginRatio=LongMarginRatio
        self.PositionType=PositionType
        self.ProductClass=ProductClass
        self.InstrumentName=InstrumentName
        self.ShortMarginRatio=ShortMarginRatio
        self.VolumeMultiple=VolumeMultiple
        self.DeliveryYear=DeliveryYear
        self.CreateDate=CreateDate
        self.InstrumentID=InstrumentID
        self.MaxLimitOrderVolume=MaxLimitOrderVolume
        self.ExchangeID=ExchangeID
        self.MinLimitOrderVolume=MinLimitOrderVolume
        self.MaxMarketOrderVolume=MaxMarketOrderVolume
        self.StartDelivDate=StartDelivDate
        self.DeliveryMonth=DeliveryMonth
        self.PriceTick=PriceTick
        self.InstLifePhase=InstLifePhase
        self.ExchangeInstID=ExchangeInstID
        self.MinMarketOrderVolume=MinMarketOrderVolume
        self.EndDelivDate=EndDelivDate
        self.OpenDate=OpenDate
        self.ProductID=ProductID
        self.vcmap={'ProductClass': {"'1'": u'\u671f\u8d27', "'2'": u'\u671f\u6743', "'5'": u'\u671f\u8f6c\u73b0', "'3'": u'\u7ec4\u5408', "'4'": u'\u5373\u671f'}, 'PositionDateType': {"'1'": u'\u4f7f\u7528\u5386\u53f2\u6301\u4ed3', "'2'": u'\u4e0d\u4f7f\u7528\u5386\u53f2\u6301\u4ed3'}, 'InstLifePhase': {"'1'": u'\u4e0a\u5e02', "'2'": u'\u505c\u724c', "'0'": u'\u672a\u4e0a\u5e02', "'3'": u'\u5230\u671f'}, 'PositionType': {"'1'": u'\u51c0\u6301\u4ed3', "'2'": u'\u7efc\u5408\u6301\u4ed3'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['IsTrading', 'ExpireDate', 'PositionDateType', 'LongMarginRatio', 'PositionType', 'ProductClass', 'InstrumentName', 'ShortMarginRatio', 'VolumeMultiple', 'DeliveryYear', 'CreateDate', 'InstrumentID', 'MaxLimitOrderVolume', 'ExchangeID', 'MinLimitOrderVolume', 'MaxMarketOrderVolume', 'StartDelivDate', 'DeliveryMonth', 'PriceTick', 'InstLifePhase', 'ExchangeInstID', 'MinMarketOrderVolume', 'EndDelivDate', 'OpenDate', 'ProductID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('IsTrading', u'当前是否交易'),('ExpireDate', u'到期日'),('PositionDateType', u'持仓日期类型'),('LongMarginRatio', u'多头保证金率'),('PositionType', u'持仓类型'),('ProductClass', u'产品类型'),('InstrumentName', u'合约名称'),('ShortMarginRatio', u'空头保证金率'),('VolumeMultiple', u'合约数量乘数'),('DeliveryYear', u'交割年份'),('CreateDate', u'创建日'),('InstrumentID', u'合约代码'),('MaxLimitOrderVolume', u'限价单最大下单量'),('ExchangeID', u'交易所代码'),('MinLimitOrderVolume', u'限价单最小下单量'),('MaxMarketOrderVolume', u'市价单最大下单量'),('StartDelivDate', u'开始交割日'),('DeliveryMonth', u'交割月'),('PriceTick', u'最小变动价位'),('InstLifePhase', u'合约生命周期状态'),('ExchangeInstID', u'合约在交易所的代码'),('MinMarketOrderVolume', u'市价单最小下单量'),('EndDelivDate', u'结束交割日'),('OpenDate', u'上市日'),('ProductID', u'产品代码')]])
    def getval(self, n):
        if n in ['PositionDateType', 'PositionType', 'ProductClass', 'InstLifePhase']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryBrokerTradingAlgosField:
    def __init__(self, InstrumentID="", ExchangeID="", BrokerID=""):
        self.InstrumentID=InstrumentID
        self.ExchangeID=ExchangeID
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'ExchangeID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('ExchangeID', u'交易所代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcReqTransferField:
    def __init__(self, BrokerBranchID="", UserID="", BankPassWord="", TradeTime="", VerifyCertNoFlag='0', TID=0, AccountID="", BankAccount="", InstallID=0, CustomerName="", TradeCode="", BankBranchID="", SessionID=0, BankID="", Password="", BankPwdFlag='0', RequestID=0, CustType='0', IdentifiedCardNo="", FeePayFlag='0', BankSerial="", OperNo="", TradingDay="", BankSecuAcc="", BrokerID="", DeviceID="", TransferStatus='0', IdCardType='0', PlateSerial=0, FutureFetchAmount=0, TradeDate="", CurrencyID="", BrokerFee=0, BankAccType='1', LastFragment='0', FutureSerial=0, BankSecuAccType='1', BrokerIDByBank="", SecuPwdFlag='0', Message="", CustFee=0, TradeAmount=0, Digest=""):
        self.BrokerBranchID=BrokerBranchID
        self.UserID=UserID
        self.BankPassWord=BankPassWord
        self.TradeTime=TradeTime
        self.VerifyCertNoFlag=VerifyCertNoFlag
        self.TID=TID
        self.AccountID=AccountID
        self.BankAccount=BankAccount
        self.InstallID=InstallID
        self.CustomerName=CustomerName
        self.TradeCode=TradeCode
        self.BankBranchID=BankBranchID
        self.SessionID=SessionID
        self.BankID=BankID
        self.Password=Password
        self.BankPwdFlag=BankPwdFlag
        self.RequestID=RequestID
        self.CustType=CustType
        self.IdentifiedCardNo=IdentifiedCardNo
        self.FeePayFlag=FeePayFlag
        self.BankSerial=BankSerial
        self.OperNo=OperNo
        self.TradingDay=TradingDay
        self.BankSecuAcc=BankSecuAcc
        self.BrokerID=BrokerID
        self.DeviceID=DeviceID
        self.TransferStatus=TransferStatus
        self.IdCardType=IdCardType
        self.PlateSerial=PlateSerial
        self.FutureFetchAmount=FutureFetchAmount
        self.TradeDate=TradeDate
        self.CurrencyID=CurrencyID
        self.BrokerFee=BrokerFee
        self.BankAccType=BankAccType
        self.LastFragment=LastFragment
        self.FutureSerial=FutureSerial
        self.BankSecuAccType=BankSecuAccType
        self.BrokerIDByBank=BrokerIDByBank
        self.SecuPwdFlag=SecuPwdFlag
        self.Message=Message
        self.CustFee=CustFee
        self.TradeAmount=TradeAmount
        self.Digest=Digest
        self.vcmap={'CustType': {"'1'": u'\u673a\u6784\u6237', "'0'": u'\u81ea\u7136\u4eba'}, 'BankAccType': {"'1'": u'\u94f6\u884c\u5b58\u6298', "'2'": u'\u50a8\u84c4\u5361', "'3'": u'\u4fe1\u7528\u5361'}, 'BankPwdFlag': {"'1'": u'\u660e\u6587\u6838\u5bf9', "'2'": u'\u5bc6\u6587\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}, 'LastFragment': {"'1'": u'\u4e0d\u662f\u6700\u540e\u5206\u7247', "'0'": u'\u662f\u6700\u540e\u5206\u7247'}, 'SecuPwdFlag': {"'1'": u'\u660e\u6587\u6838\u5bf9', "'2'": u'\u5bc6\u6587\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}, 'VerifyCertNoFlag': {"'1'": u'\u5426', "'0'": u'\u662f'}, 'TransferStatus': {"'1'": u'\u88ab\u51b2\u6b63', "'0'": u'\u6b63\u5e38'}, 'FeePayFlag': {"'1'": u'\u7531\u53d1\u9001\u65b9\u652f\u4ed8\u8d39\u7528', "'2'": u'\u7531\u53d1\u9001\u65b9\u652f\u4ed8\u53d1\u8d77\u7684\u8d39\u7528\uff0c\u53d7\u76ca\u65b9\u652f\u4ed8\u63a5\u53d7\u7684\u8d39\u7528', "'0'": u'\u7531\u53d7\u76ca\u65b9\u652f\u4ed8\u8d39\u7528'}, 'BankSecuAccType': {"'1'": u'\u94f6\u884c\u5b58\u6298', "'2'": u'\u50a8\u84c4\u5361', "'3'": u'\u4fe1\u7528\u5361'}, 'IdCardType': {"'9'": u'\u8425\u4e1a\u6267\u7167\u53f7', "'7'": u'\u53f0\u80de\u8bc1', "'x'": u'\u5176\u4ed6\u8bc1\u4ef6', "'5'": u'\u6237\u53e3\u7c3f', "'4'": u'\u58eb\u5175\u8bc1', "'1'": u'\u8eab\u4efd\u8bc1', "'0'": u'\u7ec4\u7ec7\u673a\u6784\u4ee3\u7801', "'6'": u'\u62a4\u7167', "'2'": u'\u519b\u5b98\u8bc1', "'8'": u'\u56de\u4e61\u8bc1', "'3'": u'\u8b66\u5b98\u8bc1', "'A'": u'\u7a0e\u52a1\u767b\u8bb0\u53f7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerBranchID', 'UserID', 'BankPassWord', 'TradeTime', 'VerifyCertNoFlag', 'TID', 'AccountID', 'BankAccount', 'InstallID', 'CustomerName', 'TradeCode', 'BankBranchID', 'SessionID', 'BankID', 'Password', 'BankPwdFlag', 'RequestID', 'CustType', 'IdentifiedCardNo', 'FeePayFlag', 'BankSerial', 'OperNo', 'TradingDay', 'BankSecuAcc', 'BrokerID', 'DeviceID', 'TransferStatus', 'IdCardType', 'PlateSerial', 'FutureFetchAmount', 'TradeDate', 'CurrencyID', 'BrokerFee', 'BankAccType', 'LastFragment', 'FutureSerial', 'BankSecuAccType', 'BrokerIDByBank', 'SecuPwdFlag', 'Message', 'CustFee', 'TradeAmount', 'Digest']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerBranchID', u'期商分支机构代码'),('UserID', u'用户标识'),('BankPassWord', u'银行密码'),('TradeTime', u'交易时间'),('VerifyCertNoFlag', u'验证客户证件号码标志'),('TID', u'交易ID'),('AccountID', u'投资者帐号'),('BankAccount', u'银行帐号'),('InstallID', u'安装编号'),('CustomerName', u'客户姓名'),('TradeCode', u'业务功能码'),('BankBranchID', u'银行分支机构代码'),('SessionID', u'会话号'),('BankID', u'银行代码'),('Password', u'期货密码'),('BankPwdFlag', u'银行密码标志'),('RequestID', u'请求编号'),('CustType', u'客户类型'),('IdentifiedCardNo', u'证件号码'),('FeePayFlag', u'费用支付标志'),('BankSerial', u'银行流水号'),('OperNo', u'交易柜员'),('TradingDay', u'交易系统日期'),('BankSecuAcc', u'期货单位帐号'),('BrokerID', u'期商代码'),('DeviceID', u'渠道标志'),('TransferStatus', u'转账交易状态'),('IdCardType', u'证件类型'),('PlateSerial', u'银期平台消息流水号'),('FutureFetchAmount', u'期货可取金额'),('TradeDate', u'交易日期'),('CurrencyID', u'币种代码'),('BrokerFee', u'应收期货公司费用'),('BankAccType', u'银行帐号类型'),('LastFragment', u'最后分片标志'),('FutureSerial', u'期货公司流水号'),('BankSecuAccType', u'期货单位帐号类型'),('BrokerIDByBank', u'期货公司银行编码'),('SecuPwdFlag', u'期货资金密码核对标志'),('Message', u'发送方给接收方的消息'),('CustFee', u'应收客户费用'),('TradeAmount', u'转帐金额'),('Digest', u'摘要')]])
    def getval(self, n):
        if n in ['VerifyCertNoFlag', 'BankPwdFlag', 'CustType', 'FeePayFlag', 'TransferStatus', 'IdCardType', 'BankAccType', 'LastFragment', 'BankSecuAccType', 'SecuPwdFlag']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CTKSConditionalOrderSelect:
    def __init__(self, InvestorID="", BrokerID="", ConditionalOrderID=0, SelectResult='0'):
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.ConditionalOrderID=ConditionalOrderID
        self.SelectResult=SelectResult
        self.vcmap={'SelectResult': {"'1'": u'\u8df3\u8fc7', "'2'": u'\u7ec8\u6b62', "'0'": u'\u91cd\u8bd5'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'ConditionalOrderID', 'SelectResult']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'营业部代码'),('ConditionalOrderID', u'条件单编号'),('SelectResult', u'选择结果')]])
    def getval(self, n):
        if n in ['SelectResult']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcVerifyFuturePasswordAndCustInfoField:
    def __init__(self, CustType='0', CustomerName="", IdCardType='0', IdentifiedCardNo="", Password="", AccountID=""):
        self.CustType=CustType
        self.CustomerName=CustomerName
        self.IdCardType=IdCardType
        self.IdentifiedCardNo=IdentifiedCardNo
        self.Password=Password
        self.AccountID=AccountID
        self.vcmap={'CustType': {"'1'": u'\u673a\u6784\u6237', "'0'": u'\u81ea\u7136\u4eba'}, 'IdCardType': {"'9'": u'\u8425\u4e1a\u6267\u7167\u53f7', "'7'": u'\u53f0\u80de\u8bc1', "'x'": u'\u5176\u4ed6\u8bc1\u4ef6', "'5'": u'\u6237\u53e3\u7c3f', "'4'": u'\u58eb\u5175\u8bc1', "'1'": u'\u8eab\u4efd\u8bc1', "'0'": u'\u7ec4\u7ec7\u673a\u6784\u4ee3\u7801', "'6'": u'\u62a4\u7167', "'2'": u'\u519b\u5b98\u8bc1', "'8'": u'\u56de\u4e61\u8bc1', "'3'": u'\u8b66\u5b98\u8bc1', "'A'": u'\u7a0e\u52a1\u767b\u8bb0\u53f7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['CustType', 'CustomerName', 'IdCardType', 'IdentifiedCardNo', 'Password', 'AccountID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('CustType', u'客户类型'),('CustomerName', u'客户姓名'),('IdCardType', u'证件类型'),('IdentifiedCardNo', u'证件号码'),('Password', u'期货密码'),('AccountID', u'投资者帐号')]])
    def getval(self, n):
        if n in ['CustType', 'IdCardType']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CTKSConditionalOrderStateAlter:
    def __init__(self, InvestorID="", ConditionalOrderStateAlter='0', BrokerID="", ConditionalOrderID=0):
        self.InvestorID=InvestorID
        self.ConditionalOrderStateAlter=ConditionalOrderStateAlter
        self.BrokerID=BrokerID
        self.ConditionalOrderID=ConditionalOrderID
        self.vcmap={'ConditionalOrderStateAlter': {"'1'": u'\u6fc0\u6d3b', "'0'": u'\u6682\u505c'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'ConditionalOrderStateAlter', 'BrokerID', 'ConditionalOrderID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('ConditionalOrderStateAlter', u'暂停或激活操作标志'),('BrokerID', u'营业部代码'),('ConditionalOrderID', u'条件单编号')]])
    def getval(self, n):
        if n in ['ConditionalOrderStateAlter']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcLogoutAllField:
    def __init__(self, FrontID=0, SessionID=0, SystemName=""):
        self.FrontID=FrontID
        self.SessionID=SessionID
        self.SystemName=SystemName
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['FrontID', 'SessionID', 'SystemName']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('FrontID', u'前置编号'),('SessionID', u'会话编号'),('SystemName', u'系统名称')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcMarketDataStaticField:
    def __init__(self, ClosePrice=0, HighestPrice=0, SettlementPrice=0, OpenPrice=0, LowerLimitPrice=0, UpperLimitPrice=0, LowestPrice=0, CurrDelta=0):
        self.ClosePrice=ClosePrice
        self.HighestPrice=HighestPrice
        self.SettlementPrice=SettlementPrice
        self.OpenPrice=OpenPrice
        self.LowerLimitPrice=LowerLimitPrice
        self.UpperLimitPrice=UpperLimitPrice
        self.LowestPrice=LowestPrice
        self.CurrDelta=CurrDelta
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ClosePrice', 'HighestPrice', 'SettlementPrice', 'OpenPrice', 'LowerLimitPrice', 'UpperLimitPrice', 'LowestPrice', 'CurrDelta']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ClosePrice', u'今收盘'),('HighestPrice', u'最高价'),('SettlementPrice', u'本次结算价'),('OpenPrice', u'今开盘'),('LowerLimitPrice', u'跌停板价'),('UpperLimitPrice', u'涨停板价'),('LowestPrice', u'最低价'),('CurrDelta', u'今虚实度')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcTradingCodeField:
    def __init__(self, ExchangeID="", ClientID="", InvestorID="", BrokerID="", ClientIDType='1', IsActive=0):
        self.ExchangeID=ExchangeID
        self.ClientID=ClientID
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.ClientIDType=ClientIDType
        self.IsActive=IsActive
        self.vcmap={'ClientIDType': {"'1'": u'\u6295\u673a', "'2'": u'\u5957\u5229', "'3'": u'\u5957\u4fdd'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeID', 'ClientID', 'InvestorID', 'BrokerID', 'ClientIDType', 'IsActive']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeID', u'交易所代码'),('ClientID', u'客户代码'),('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('ClientIDType', u'交易编码类型'),('IsActive', u'是否活跃')]])
    def getval(self, n):
        if n in ['ClientIDType']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcRspInfoField:
    def __init__(self, ErrorMsg="", ErrorID=0):
        self.ErrorMsg=ErrorMsg
        self.ErrorID=ErrorID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ErrorMsg', 'ErrorID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ErrorMsg', u'错误信息'),('ErrorID', u'错误代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQrySuperUserField:
    def __init__(self, UserID=""):
        self.UserID=UserID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserID', u'用户代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryInstrumentMarginRateField:
    def __init__(self, InstrumentID="", InvestorID="", BrokerID="", HedgeFlag='1'):
        self.InstrumentID=InstrumentID
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.HedgeFlag=HedgeFlag
        self.vcmap={'HedgeFlag': {"'1'": u'\u6295\u673a', "'2'": u'\u5957\u5229', "'3'": u'\u5957\u4fdd'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'InvestorID', 'BrokerID', 'HedgeFlag']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('HedgeFlag', u'投机套保标志')]])
    def getval(self, n):
        if n in ['HedgeFlag']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryInvestorGroupField:
    def __init__(self, BrokerID=""):
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcInvestorWithdrawAlgorithmField:
    def __init__(self, InvestorID="", BrokerID="", InvestorRange='1', UsingRatio=0):
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.InvestorRange=InvestorRange
        self.UsingRatio=UsingRatio
        self.vcmap={'InvestorRange': {"'1'": u'\u6240\u6709', "'2'": u'\u6295\u8d44\u8005\u7ec4', "'3'": u'\u5355\u4e00\u6295\u8d44\u8005'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'InvestorRange', 'UsingRatio']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('InvestorRange', u'投资者范围'),('UsingRatio', u'可提资金比例')]])
    def getval(self, n):
        if n in ['InvestorRange']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcTradingAccountPasswordUpdateV1Field:
    def __init__(self, InvestorID="", NewPassword="", OldPassword="", BrokerID=""):
        self.InvestorID=InvestorID
        self.NewPassword=NewPassword
        self.OldPassword=OldPassword
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'NewPassword', 'OldPassword', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('NewPassword', u'新的口令'),('OldPassword', u'原来的口令'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcExchangeTradeField:
    def __init__(self, TradeType='0', TraderID="", HedgeFlag='1', TradeTime="", OffsetFlag='0', Direction='0', ParticipantID="", Price=0, ClientID="", Volume=0, OrderSysID="", ExchangeID="", ClearingPartID="", OrderLocalID="", TradeID="", TradeDate="", BusinessUnit="", SequenceNo=0, ExchangeInstID="", TradeSource='0', PriceSource='0', TradingRole='1'):
        self.TradeType=TradeType
        self.TraderID=TraderID
        self.HedgeFlag=HedgeFlag
        self.TradeTime=TradeTime
        self.OffsetFlag=OffsetFlag
        self.Direction=Direction
        self.ParticipantID=ParticipantID
        self.Price=Price
        self.ClientID=ClientID
        self.Volume=Volume
        self.OrderSysID=OrderSysID
        self.ExchangeID=ExchangeID
        self.ClearingPartID=ClearingPartID
        self.OrderLocalID=OrderLocalID
        self.TradeID=TradeID
        self.TradeDate=TradeDate
        self.BusinessUnit=BusinessUnit
        self.SequenceNo=SequenceNo
        self.ExchangeInstID=ExchangeInstID
        self.TradeSource=TradeSource
        self.PriceSource=PriceSource
        self.TradingRole=TradingRole
        self.vcmap={'Direction': {"'1'": u'\u5356', "'0'": u'\u4e70'}, 'TradeType': {"'1'": u'\u671f\u6743\u6267\u884c', "'2'": u'OTC\u6210\u4ea4', "'0'": u'\u666e\u901a\u6210\u4ea4', "'3'": u'\u671f\u8f6c\u73b0\u884d\u751f\u6210\u4ea4', "'4'": u'\u7ec4\u5408\u884d\u751f\u6210\u4ea4'}, 'OffsetFlag': {"'5'": u'\u5f3a\u51cf', "'4'": u'\u5e73\u6628', "'1'": u'\u5e73\u4ed3', "'0'": u'\u5f00\u4ed3', "'6'": u'\u672c\u5730\u5f3a\u5e73', "'2'": u'\u5f3a\u5e73', "'3'": u'\u5e73\u4eca'}, 'HedgeFlag': {"'1'": u'\u6295\u673a', "'2'": u'\u5957\u5229', "'3'": u'\u5957\u4fdd'}, 'TradeSource': {"'1'": u'\u6765\u81ea\u67e5\u8be2', "'0'": u'\u6765\u81ea\u4ea4\u6613\u6240\u666e\u901a\u56de\u62a5'}, 'PriceSource': {"'1'": u'\u4e70\u59d4\u6258\u4ef7', "'2'": u'\u5356\u59d4\u6258\u4ef7', "'0'": u'\u524d\u6210\u4ea4\u4ef7'}, 'TradingRole': {"'1'": u'\u4ee3\u7406', "'2'": u'\u81ea\u8425', "'3'": u'\u505a\u5e02\u5546'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradeType', 'TraderID', 'HedgeFlag', 'TradeTime', 'OffsetFlag', 'Direction', 'ParticipantID', 'Price', 'ClientID', 'Volume', 'OrderSysID', 'ExchangeID', 'ClearingPartID', 'OrderLocalID', 'TradeID', 'TradeDate', 'BusinessUnit', 'SequenceNo', 'ExchangeInstID', 'TradeSource', 'PriceSource', 'TradingRole']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradeType', u'成交类型'),('TraderID', u'交易所交易员代码'),('HedgeFlag', u'投机套保标志'),('TradeTime', u'成交时间'),('OffsetFlag', u'开平标志'),('Direction', u'买卖方向'),('ParticipantID', u'会员代码'),('Price', u'价格'),('ClientID', u'客户代码'),('Volume', u'数量'),('OrderSysID', u'报单编号'),('ExchangeID', u'交易所代码'),('ClearingPartID', u'结算会员编号'),('OrderLocalID', u'本地报单编号'),('TradeID', u'成交编号'),('TradeDate', u'成交时期'),('BusinessUnit', u'业务单元'),('SequenceNo', u'序号'),('ExchangeInstID', u'合约在交易所的代码'),('TradeSource', u'成交来源'),('PriceSource', u'成交价来源'),('TradingRole', u'交易角色')]])
    def getval(self, n):
        if n in ['TradeType', 'HedgeFlag', 'OffsetFlag', 'Direction', 'TradeSource', 'PriceSource', 'TradingRole']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryUserSessionField:
    def __init__(self, FrontID=0, SessionID=0, BrokerID="", UserID=""):
        self.FrontID=FrontID
        self.SessionID=SessionID
        self.BrokerID=BrokerID
        self.UserID=UserID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['FrontID', 'SessionID', 'BrokerID', 'UserID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('FrontID', u'前置编号'),('SessionID', u'会话编号'),('BrokerID', u'经纪公司代码'),('UserID', u'用户代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcTradingNoticeField:
    def __init__(self, SequenceSeries=0, SequenceNo=0, UserID="", FieldContent="", InvestorID="", BrokerID="", SendTime="", InvestorRange='1'):
        self.SequenceSeries=SequenceSeries
        self.SequenceNo=SequenceNo
        self.UserID=UserID
        self.FieldContent=FieldContent
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.SendTime=SendTime
        self.InvestorRange=InvestorRange
        self.vcmap={'InvestorRange': {"'1'": u'\u6240\u6709', "'2'": u'\u6295\u8d44\u8005\u7ec4', "'3'": u'\u5355\u4e00\u6295\u8d44\u8005'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['SequenceSeries', 'SequenceNo', 'UserID', 'FieldContent', 'InvestorID', 'BrokerID', 'SendTime', 'InvestorRange']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('SequenceSeries', u'序列系列号'),('SequenceNo', u'序列号'),('UserID', u'用户代码'),('FieldContent', u'消息正文'),('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('SendTime', u'发送时间'),('InvestorRange', u'投资者范围')]])
    def getval(self, n):
        if n in ['InvestorRange']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcReqSyncKeyField:
    def __init__(self, InstallID=0, TradeDate="", TradeCode="", LastFragment='0', BrokerBranchID="", BrokerIDByBank="", BankSerial="", BankBranchID="", OperNo="", TradingDay="", SessionID=0, BrokerID="", DeviceID="", UserID="", BankID="", TID=0, TradeTime="", Message="", PlateSerial=0, RequestID=0):
        self.InstallID=InstallID
        self.TradeDate=TradeDate
        self.TradeCode=TradeCode
        self.LastFragment=LastFragment
        self.BrokerBranchID=BrokerBranchID
        self.BrokerIDByBank=BrokerIDByBank
        self.BankSerial=BankSerial
        self.BankBranchID=BankBranchID
        self.OperNo=OperNo
        self.TradingDay=TradingDay
        self.SessionID=SessionID
        self.BrokerID=BrokerID
        self.DeviceID=DeviceID
        self.UserID=UserID
        self.BankID=BankID
        self.TID=TID
        self.TradeTime=TradeTime
        self.Message=Message
        self.PlateSerial=PlateSerial
        self.RequestID=RequestID
        self.vcmap={'LastFragment': {"'1'": u'\u4e0d\u662f\u6700\u540e\u5206\u7247', "'0'": u'\u662f\u6700\u540e\u5206\u7247'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstallID', 'TradeDate', 'TradeCode', 'LastFragment', 'BrokerBranchID', 'BrokerIDByBank', 'BankSerial', 'BankBranchID', 'OperNo', 'TradingDay', 'SessionID', 'BrokerID', 'DeviceID', 'UserID', 'BankID', 'TID', 'TradeTime', 'Message', 'PlateSerial', 'RequestID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstallID', u'安装编号'),('TradeDate', u'交易日期'),('TradeCode', u'业务功能码'),('LastFragment', u'最后分片标志'),('BrokerBranchID', u'期商分支机构代码'),('BrokerIDByBank', u'期货公司银行编码'),('BankSerial', u'银行流水号'),('BankBranchID', u'银行分支机构代码'),('OperNo', u'交易柜员'),('TradingDay', u'交易系统日期'),('SessionID', u'会话号'),('BrokerID', u'期商代码'),('DeviceID', u'渠道标志'),('UserID', u'用户标识'),('BankID', u'银行代码'),('TID', u'交易ID'),('TradeTime', u'交易时间'),('Message', u'交易核心给银期报盘的消息'),('PlateSerial', u'银期平台消息流水号'),('RequestID', u'请求编号')]])
    def getval(self, n):
        if n in ['LastFragment']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CTKSProfitAndLossOrderQuery:
    def __init__(self, ExchangeID="", OrderLocalID="", BusinessUnit="", InvestorID="", BrokerID="", ProfitAndLossOrderID=0):
        self.ExchangeID=ExchangeID
        self.OrderLocalID=OrderLocalID
        self.BusinessUnit=BusinessUnit
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.ProfitAndLossOrderID=ProfitAndLossOrderID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeID', 'OrderLocalID', 'BusinessUnit', 'InvestorID', 'BrokerID', 'ProfitAndLossOrderID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeID', u'交易所代码'),('OrderLocalID', u'本地报单编号'),('BusinessUnit', u'业务单元'),('InvestorID', u'投资者代码'),('BrokerID', u'营业部代码'),('ProfitAndLossOrderID', u'止损止盈单号')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryBrokerUserField:
    def __init__(self, UserID="", BrokerID=""):
        self.UserID=UserID
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserID', u'用户代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcNotifyFutureSignInField:
    def __init__(self, BrokerBranchID="", UserID="", TradeTime="", TID=0, InstallID=0, PinKey="", TradeCode="", BankBranchID="", SessionID=0, BankID="", MacKey="", PlateSerial=0, ErrorID=0, BankSerial="", OperNo="", TradingDay="", BrokerID="", DeviceID="", TradeDate="", CurrencyID="", ErrorMsg="", LastFragment='0', RequestID=0, BrokerIDByBank="", Digest=""):
        self.BrokerBranchID=BrokerBranchID
        self.UserID=UserID
        self.TradeTime=TradeTime
        self.TID=TID
        self.InstallID=InstallID
        self.PinKey=PinKey
        self.TradeCode=TradeCode
        self.BankBranchID=BankBranchID
        self.SessionID=SessionID
        self.BankID=BankID
        self.MacKey=MacKey
        self.PlateSerial=PlateSerial
        self.ErrorID=ErrorID
        self.BankSerial=BankSerial
        self.OperNo=OperNo
        self.TradingDay=TradingDay
        self.BrokerID=BrokerID
        self.DeviceID=DeviceID
        self.TradeDate=TradeDate
        self.CurrencyID=CurrencyID
        self.ErrorMsg=ErrorMsg
        self.LastFragment=LastFragment
        self.RequestID=RequestID
        self.BrokerIDByBank=BrokerIDByBank
        self.Digest=Digest
        self.vcmap={'LastFragment': {"'1'": u'\u4e0d\u662f\u6700\u540e\u5206\u7247', "'0'": u'\u662f\u6700\u540e\u5206\u7247'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerBranchID', 'UserID', 'TradeTime', 'TID', 'InstallID', 'PinKey', 'TradeCode', 'BankBranchID', 'SessionID', 'BankID', 'MacKey', 'PlateSerial', 'ErrorID', 'BankSerial', 'OperNo', 'TradingDay', 'BrokerID', 'DeviceID', 'TradeDate', 'CurrencyID', 'ErrorMsg', 'LastFragment', 'RequestID', 'BrokerIDByBank', 'Digest']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerBranchID', u'期商分支机构代码'),('UserID', u'用户标识'),('TradeTime', u'交易时间'),('TID', u'交易ID'),('InstallID', u'安装编号'),('PinKey', u'PIN密钥'),('TradeCode', u'业务功能码'),('BankBranchID', u'银行分支机构代码'),('SessionID', u'会话号'),('BankID', u'银行代码'),('MacKey', u'MAC密钥'),('PlateSerial', u'银期平台消息流水号'),('ErrorID', u'错误代码'),('BankSerial', u'银行流水号'),('OperNo', u'交易柜员'),('TradingDay', u'交易系统日期'),('BrokerID', u'期商代码'),('DeviceID', u'渠道标志'),('TradeDate', u'交易日期'),('CurrencyID', u'币种代码'),('ErrorMsg', u'错误信息'),('LastFragment', u'最后分片标志'),('RequestID', u'请求编号'),('BrokerIDByBank', u'期货公司银行编码'),('Digest', u'摘要')]])
    def getval(self, n):
        if n in ['LastFragment']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcSyncingInstrumentCommissionRateField:
    def __init__(self, InstrumentID="", OpenRatioByMoney=0, CloseRatioByVolume=0, CloseTodayRatioByMoney=0, InvestorID="", BrokerID="", InvestorRange='1', CloseRatioByMoney=0, OpenRatioByVolume=0, CloseTodayRatioByVolume=0):
        self.InstrumentID=InstrumentID
        self.OpenRatioByMoney=OpenRatioByMoney
        self.CloseRatioByVolume=CloseRatioByVolume
        self.CloseTodayRatioByMoney=CloseTodayRatioByMoney
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.InvestorRange=InvestorRange
        self.CloseRatioByMoney=CloseRatioByMoney
        self.OpenRatioByVolume=OpenRatioByVolume
        self.CloseTodayRatioByVolume=CloseTodayRatioByVolume
        self.vcmap={'InvestorRange': {"'1'": u'\u6240\u6709', "'2'": u'\u6295\u8d44\u8005\u7ec4', "'3'": u'\u5355\u4e00\u6295\u8d44\u8005'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'OpenRatioByMoney', 'CloseRatioByVolume', 'CloseTodayRatioByMoney', 'InvestorID', 'BrokerID', 'InvestorRange', 'CloseRatioByMoney', 'OpenRatioByVolume', 'CloseTodayRatioByVolume']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('OpenRatioByMoney', u'开仓手续费率'),('CloseRatioByVolume', u'平仓手续费'),('CloseTodayRatioByMoney', u'平今手续费率'),('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('InvestorRange', u'投资者范围'),('CloseRatioByMoney', u'平仓手续费率'),('OpenRatioByVolume', u'开仓手续费'),('CloseTodayRatioByVolume', u'平今手续费')]])
    def getval(self, n):
        if n in ['InvestorRange']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcSyncingInstrumentMarginRateField:
    def __init__(self, InstrumentID="", ShortMarginRatioByMoney=0, LongMarginRatioByMoney=0, IsRelative=0, HedgeFlag='1', InvestorID="", BrokerID="", InvestorRange='1', ShortMarginRatioByVolume=0, LongMarginRatioByVolume=0):
        self.InstrumentID=InstrumentID
        self.ShortMarginRatioByMoney=ShortMarginRatioByMoney
        self.LongMarginRatioByMoney=LongMarginRatioByMoney
        self.IsRelative=IsRelative
        self.HedgeFlag=HedgeFlag
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.InvestorRange=InvestorRange
        self.ShortMarginRatioByVolume=ShortMarginRatioByVolume
        self.LongMarginRatioByVolume=LongMarginRatioByVolume
        self.vcmap={'HedgeFlag': {"'1'": u'\u6295\u673a', "'2'": u'\u5957\u5229', "'3'": u'\u5957\u4fdd'}, 'InvestorRange': {"'1'": u'\u6240\u6709', "'2'": u'\u6295\u8d44\u8005\u7ec4', "'3'": u'\u5355\u4e00\u6295\u8d44\u8005'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'ShortMarginRatioByMoney', 'LongMarginRatioByMoney', 'IsRelative', 'HedgeFlag', 'InvestorID', 'BrokerID', 'InvestorRange', 'ShortMarginRatioByVolume', 'LongMarginRatioByVolume']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('ShortMarginRatioByMoney', u'空头保证金率'),('LongMarginRatioByMoney', u'多头保证金率'),('IsRelative', u'是否相对交易所收取'),('HedgeFlag', u'投机套保标志'),('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('InvestorRange', u'投资者范围'),('ShortMarginRatioByVolume', u'空头保证金费'),('LongMarginRatioByVolume', u'多头保证金费')]])
    def getval(self, n):
        if n in ['HedgeFlag', 'InvestorRange']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CTKSConditionalOrderRspResultField:
    def __init__(self, InvestorID="", BrokerID="", ConditionalOrderID=0):
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.ConditionalOrderID=ConditionalOrderID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'ConditionalOrderID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'营业部代码'),('ConditionalOrderID', u'条件单编号')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CTKSProfitAndLossOrderModify:
    def __init__(self, TakeProfitPrice=0, TriggeredTimes=0, SpringType='0', InvestorID="", BrokerID="", FiguresPrice=0, ProfitAndLossOrderID=0, CloseMode='0', OffsetValue='0', StopLossPrice=0, FloatLimitPrice=0):
        self.TakeProfitPrice=TakeProfitPrice
        self.TriggeredTimes=TriggeredTimes
        self.SpringType=SpringType
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.FiguresPrice=FiguresPrice
        self.ProfitAndLossOrderID=ProfitAndLossOrderID
        self.CloseMode=CloseMode
        self.OffsetValue=OffsetValue
        self.StopLossPrice=StopLossPrice
        self.FloatLimitPrice=FloatLimitPrice
        self.vcmap={'OffsetValue': {"'1'": u'\u5f00\u4ed3\u6210\u4ea4\u4ef7\u7684\u76f8\u5bf9\u504f\u79fb\u503c', "'0'": u'\u6307\u5b9a\u503c'}, 'CloseMode': {"'1'": u'\u52a0\u51cf\u4e70\u5356\u4ef7', "'2'": u'\u52a0\u51cf\u6700\u65b0\u4ef7', "'0'": u'\u5e02\u4ef7'}, 'SpringType': {"'1'": u'\u4e70\u5356\u4ef7', "'0'": u'\u6700\u65b0\u4ef7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TakeProfitPrice', 'TriggeredTimes', 'SpringType', 'InvestorID', 'BrokerID', 'FiguresPrice', 'ProfitAndLossOrderID', 'CloseMode', 'OffsetValue', 'StopLossPrice', 'FloatLimitPrice']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TakeProfitPrice', u'止盈价'),('TriggeredTimes', u'触发次数'),('SpringType', u'条件单触发价格类型'),('InvestorID', u'投资者代码'),('BrokerID', u'营业部代码'),('FiguresPrice', u'平仓反向价位数（平仓方式=1或2时有效）'),('ProfitAndLossOrderID', u'止损止盈单号'),('CloseMode', u'平仓方式'),('OffsetValue', u'生成盈损价的方式'),('StopLossPrice', u'止损价'),('FloatLimitPrice', u'浮动止损价')]])
    def getval(self, n):
        if n in ['SpringType', 'CloseMode', 'OffsetValue']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcForceUserLogoutField:
    def __init__(self, UserID="", BrokerID=""):
        self.UserID=UserID
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserID', u'用户代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcNotifySyncKeyField:
    def __init__(self, BrokerBranchID="", UserID="", TradeTime="", TID=0, InstallID=0, TradeCode="", BankBranchID="", SessionID=0, BankID="", PlateSerial=0, ErrorID=0, BankSerial="", OperNo="", TradingDay="", BrokerID="", DeviceID="", TradeDate="", ErrorMsg="", LastFragment='0', RequestID=0, BrokerIDByBank="", Message=""):
        self.BrokerBranchID=BrokerBranchID
        self.UserID=UserID
        self.TradeTime=TradeTime
        self.TID=TID
        self.InstallID=InstallID
        self.TradeCode=TradeCode
        self.BankBranchID=BankBranchID
        self.SessionID=SessionID
        self.BankID=BankID
        self.PlateSerial=PlateSerial
        self.ErrorID=ErrorID
        self.BankSerial=BankSerial
        self.OperNo=OperNo
        self.TradingDay=TradingDay
        self.BrokerID=BrokerID
        self.DeviceID=DeviceID
        self.TradeDate=TradeDate
        self.ErrorMsg=ErrorMsg
        self.LastFragment=LastFragment
        self.RequestID=RequestID
        self.BrokerIDByBank=BrokerIDByBank
        self.Message=Message
        self.vcmap={'LastFragment': {"'1'": u'\u4e0d\u662f\u6700\u540e\u5206\u7247', "'0'": u'\u662f\u6700\u540e\u5206\u7247'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerBranchID', 'UserID', 'TradeTime', 'TID', 'InstallID', 'TradeCode', 'BankBranchID', 'SessionID', 'BankID', 'PlateSerial', 'ErrorID', 'BankSerial', 'OperNo', 'TradingDay', 'BrokerID', 'DeviceID', 'TradeDate', 'ErrorMsg', 'LastFragment', 'RequestID', 'BrokerIDByBank', 'Message']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerBranchID', u'期商分支机构代码'),('UserID', u'用户标识'),('TradeTime', u'交易时间'),('TID', u'交易ID'),('InstallID', u'安装编号'),('TradeCode', u'业务功能码'),('BankBranchID', u'银行分支机构代码'),('SessionID', u'会话号'),('BankID', u'银行代码'),('PlateSerial', u'银期平台消息流水号'),('ErrorID', u'错误代码'),('BankSerial', u'银行流水号'),('OperNo', u'交易柜员'),('TradingDay', u'交易系统日期'),('BrokerID', u'期商代码'),('DeviceID', u'渠道标志'),('TradeDate', u'交易日期'),('ErrorMsg', u'错误信息'),('LastFragment', u'最后分片标志'),('RequestID', u'请求编号'),('BrokerIDByBank', u'期货公司银行编码'),('Message', u'交易核心给银期报盘的消息')]])
    def getval(self, n):
        if n in ['LastFragment']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcMarketDataBid45Field:
    def __init__(self, BidPrice5=0, BidPrice4=0, BidVolume5=0, BidVolume4=0):
        self.BidPrice5=BidPrice5
        self.BidPrice4=BidPrice4
        self.BidVolume5=BidVolume5
        self.BidVolume4=BidVolume4
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BidPrice5', 'BidPrice4', 'BidVolume5', 'BidVolume4']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BidPrice5', u'申买价五'),('BidPrice4', u'申买价四'),('BidVolume5', u'申买量五'),('BidVolume4', u'申买量四')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CTKSProfitAndLossOrderRemove:
    def __init__(self, ExchangeID="", OrderLocalID="", BusinessUnit="", InvestorID="", BrokerID="", ProfitAndLossOrderID=0):
        self.ExchangeID=ExchangeID
        self.OrderLocalID=OrderLocalID
        self.BusinessUnit=BusinessUnit
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.ProfitAndLossOrderID=ProfitAndLossOrderID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeID', 'OrderLocalID', 'BusinessUnit', 'InvestorID', 'BrokerID', 'ProfitAndLossOrderID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeID', u'交易所代码'),('OrderLocalID', u'本地报单编号'),('BusinessUnit', u'业务单元'),('InvestorID', u'投资者代码'),('BrokerID', u'营业部代码'),('ProfitAndLossOrderID', u'止损止盈单号')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcLinkManField:
    def __init__(self, PersonType='1', PersonName="", IdentifiedCardNo="", Telephone="", ZipCode="", Priority=0, InvestorID="", BrokerID="", Address="", IdentifiedCardType='0'):
        self.PersonType=PersonType
        self.PersonName=PersonName
        self.IdentifiedCardNo=IdentifiedCardNo
        self.Telephone=Telephone
        self.ZipCode=ZipCode
        self.Priority=Priority
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.Address=Address
        self.IdentifiedCardType=IdentifiedCardType
        self.vcmap={'PersonType': {"'7'": u'\u6295\u8d44\u8005\u8054\u7cfb\u4eba', "'5'": u'\u6cd5\u4eba', "'4'": u'\u7ed3\u7b97\u5355\u786e\u8ba4\u4eba', "'1'": u'\u6307\u5b9a\u4e0b\u5355\u4eba', "'6'": u'\u6cd5\u4eba\u4ee3\u8868', "'2'": u'\u5f00\u6237\u6388\u6743\u4eba', "'3'": u'\u8d44\u91d1\u8c03\u62e8\u4eba'}, 'IdentifiedCardType': {"'9'": u'\u8425\u4e1a\u6267\u7167\u53f7', "'7'": u'\u53f0\u80de\u8bc1', "'x'": u'\u5176\u4ed6\u8bc1\u4ef6', "'5'": u'\u6237\u53e3\u7c3f', "'4'": u'\u58eb\u5175\u8bc1', "'1'": u'\u8eab\u4efd\u8bc1', "'0'": u'\u7ec4\u7ec7\u673a\u6784\u4ee3\u7801', "'6'": u'\u62a4\u7167', "'2'": u'\u519b\u5b98\u8bc1', "'8'": u'\u56de\u4e61\u8bc1', "'3'": u'\u8b66\u5b98\u8bc1', "'A'": u'\u7a0e\u52a1\u767b\u8bb0\u53f7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['PersonType', 'PersonName', 'IdentifiedCardNo', 'Telephone', 'ZipCode', 'Priority', 'InvestorID', 'BrokerID', 'Address', 'IdentifiedCardType']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('PersonType', u'联系人类型'),('PersonName', u'名称'),('IdentifiedCardNo', u'证件号码'),('Telephone', u'联系电话'),('ZipCode', u'邮政编码'),('Priority', u'优先级'),('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('Address', u'通讯地址'),('IdentifiedCardType', u'证件类型')]])
    def getval(self, n):
        if n in ['PersonType', 'IdentifiedCardType']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcCommRateModelField:
    def __init__(self, CommModelID="", BrokerID="", CommModelName=""):
        self.CommModelID=CommModelID
        self.BrokerID=BrokerID
        self.CommModelName=CommModelName
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['CommModelID', 'BrokerID', 'CommModelName']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('CommModelID', u'手续费率模板代码'),('BrokerID', u'经纪公司代码'),('CommModelName', u'模板名称')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcPositionProfitAlgorithmField:
    def __init__(self, Memo="", BrokerID="", Algorithm='1', AccountID=""):
        self.Memo=Memo
        self.BrokerID=BrokerID
        self.Algorithm=Algorithm
        self.AccountID=AccountID
        self.vcmap={'Algorithm': {"'1'": u'\u6d6e\u76c8\u6d6e\u4e8f\u90fd\u8ba1\u7b97', "'2'": u'\u6d6e\u76c8\u4e0d\u8ba1\uff0c\u6d6e\u4e8f\u8ba1', "'3'": u'\u6d6e\u76c8\u8ba1\uff0c\u6d6e\u4e8f\u4e0d\u8ba1', "'4'": u'\u6d6e\u76c8\u6d6e\u4e8f\u90fd\u4e0d\u8ba1\u7b97'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['Memo', 'BrokerID', 'Algorithm', 'AccountID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('Memo', u'备注'),('BrokerID', u'经纪公司代码'),('Algorithm', u'盈亏算法'),('AccountID', u'投资者帐号')]])
    def getval(self, n):
        if n in ['Algorithm']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryExchangeField:
    def __init__(self, ExchangeID=""):
        self.ExchangeID=ExchangeID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQueryMaxOrderVolumeField:
    def __init__(self, InstrumentID="", Direction='0', OffsetFlag='0', HedgeFlag='1', InvestorID="", BrokerID="", MaxVolume=0):
        self.InstrumentID=InstrumentID
        self.Direction=Direction
        self.OffsetFlag=OffsetFlag
        self.HedgeFlag=HedgeFlag
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.MaxVolume=MaxVolume
        self.vcmap={'Direction': {"'1'": u'\u5356', "'0'": u'\u4e70'}, 'HedgeFlag': {"'1'": u'\u6295\u673a', "'2'": u'\u5957\u5229', "'3'": u'\u5957\u4fdd'}, 'OffsetFlag': {"'5'": u'\u5f3a\u51cf', "'4'": u'\u5e73\u6628', "'1'": u'\u5e73\u4ed3', "'0'": u'\u5f00\u4ed3', "'6'": u'\u672c\u5730\u5f3a\u5e73', "'2'": u'\u5f3a\u5e73', "'3'": u'\u5e73\u4eca'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'Direction', 'OffsetFlag', 'HedgeFlag', 'InvestorID', 'BrokerID', 'MaxVolume']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('Direction', u'买卖方向'),('OffsetFlag', u'开平标志'),('HedgeFlag', u'投机套保标志'),('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('MaxVolume', u'最大允许报单数量')]])
    def getval(self, n):
        if n in ['Direction', 'OffsetFlag', 'HedgeFlag']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcMarketDataUpdateTimeField:
    def __init__(self, InstrumentID="", UpdateTime="", UpdateMillisec=0):
        self.InstrumentID=InstrumentID
        self.UpdateTime=UpdateTime
        self.UpdateMillisec=UpdateMillisec
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'UpdateTime', 'UpdateMillisec']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('UpdateTime', u'最后修改时间'),('UpdateMillisec', u'最后修改毫秒')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CTKSConditionalOrderModify:
    def __init__(self, InstrumentID="", CombHedgeFlag='1', ExchangeID="", TriggeredTimes=0, OrderPriceType='0', CurrencyID="", OrderType='0', CombOffsetFlag='0', Direction='0', ClientID="", InvestorID="", ActiveTime="", BrokerID="", LimitPrice=0, ConditionalType='0', InActiveTime="", ConditionalOrderID=0, VolumeTotalOriginal=0, ConditionalPrice=0):
        self.InstrumentID=InstrumentID
        self.CombHedgeFlag=CombHedgeFlag
        self.ExchangeID=ExchangeID
        self.TriggeredTimes=TriggeredTimes
        self.OrderPriceType=OrderPriceType
        self.CurrencyID=CurrencyID
        self.OrderType=OrderType
        self.CombOffsetFlag=CombOffsetFlag
        self.Direction=Direction
        self.ClientID=ClientID
        self.InvestorID=InvestorID
        self.ActiveTime=ActiveTime
        self.BrokerID=BrokerID
        self.LimitPrice=LimitPrice
        self.ConditionalType=ConditionalType
        self.InActiveTime=InActiveTime
        self.ConditionalOrderID=ConditionalOrderID
        self.VolumeTotalOriginal=VolumeTotalOriginal
        self.ConditionalPrice=ConditionalPrice
        self.vcmap={'CombHedgeFlag': {"'1'": u'\u6295\u673a', "'2'": u'\u5957\u5229', "'3'": u'\u5957\u4fdd'}, 'Direction': {"'1'": u'\u5356', "'0'": u'\u4e70'}, 'OrderType': {"'1'": u'\u5f00\u76d8\u89e6\u53d1', "'2'": u'\u65f6\u95f4\u89e6\u53d1', "'0'": u'\u884c\u60c5\u89e6\u53d1', "'5'": u'\u884c\u60c5\u548c\u65f6\u95f4\u89e6\u53d1'}, 'CombOffsetFlag': {"'5'": u'\u5f3a\u51cf', "'4'": u'\u5e73\u6628', "'1'": u'\u5e73\u4ed3', "'0'": u'\u5f00\u4ed3', "'6'": u'\u672c\u5730\u5f3a\u5e73', "'2'": u'\u5f3a\u5e73', "'3'": u'\u5e73\u4eca'}, 'OrderPriceType': {"'1'": u'\u4e70\u4ef7', "'2'": u'\u5356\u4ef7', "'0'": u'\u6700\u65b0\u4ef7'}, 'ConditionalType': {"'1'": u'\u5c0f\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'0'": u'\u5927\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'CombHedgeFlag', 'ExchangeID', 'TriggeredTimes', 'OrderPriceType', 'CurrencyID', 'OrderType', 'CombOffsetFlag', 'Direction', 'ClientID', 'InvestorID', 'ActiveTime', 'BrokerID', 'LimitPrice', 'ConditionalType', 'InActiveTime', 'ConditionalOrderID', 'VolumeTotalOriginal', 'ConditionalPrice']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('CombHedgeFlag', u'投机套保标志'),('ExchangeID', u'交易所代码'),('TriggeredTimes', u'触发次数'),('OrderPriceType', u'价格类别'),('CurrencyID', u'货币代码'),('OrderType', u'条件单类型'),('CombOffsetFlag', u'开平标志'),('Direction', u'买卖方向'),('ClientID', u'客户代码'),('InvestorID', u'投资者代码'),('ActiveTime', u'有效时间'),('BrokerID', u'营业部代码'),('LimitPrice', u'价格'),('ConditionalType', u'条件类型'),('InActiveTime', u'失效时间'),('ConditionalOrderID', u'条件单编号'),('VolumeTotalOriginal', u'数量'),('ConditionalPrice', u'条件价')]])
    def getval(self, n):
        if n in ['CombHedgeFlag', 'OrderPriceType', 'OrderType', 'CombOffsetFlag', 'Direction', 'ConditionalType']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcCombinationLegField:
    def __init__(self, Direction='0', ImplyLevel=0, LegMultiple=0, LegID=0, LegInstrumentID="", CombInstrumentID=""):
        self.Direction=Direction
        self.ImplyLevel=ImplyLevel
        self.LegMultiple=LegMultiple
        self.LegID=LegID
        self.LegInstrumentID=LegInstrumentID
        self.CombInstrumentID=CombInstrumentID
        self.vcmap={'Direction': {"'1'": u'\u5356', "'0'": u'\u4e70'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['Direction', 'ImplyLevel', 'LegMultiple', 'LegID', 'LegInstrumentID', 'CombInstrumentID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('Direction', u'买卖方向'),('ImplyLevel', u'派生层数'),('LegMultiple', u'单腿乘数'),('LegID', u'单腿编号'),('LegInstrumentID', u'单腿合约代码'),('CombInstrumentID', u'组合合约代码')]])
    def getval(self, n):
        if n in ['Direction']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcExchangeSequenceField:
    def __init__(self, ExchangeID="", SequenceNo=0, MarketStatus='0'):
        self.ExchangeID=ExchangeID
        self.SequenceNo=SequenceNo
        self.MarketStatus=MarketStatus
        self.vcmap={'MarketStatus': {"'5'": u'\u96c6\u5408\u7ade\u4ef7\u64ae\u5408', "'4'": u'\u96c6\u5408\u7ade\u4ef7\u4ef7\u683c\u5e73\u8861', "'1'": u'\u975e\u4ea4\u6613', "'0'": u'\u5f00\u76d8\u524d', "'6'": u'\u6536\u76d8', "'2'": u'\u8fde\u7eed\u4ea4\u6613', "'3'": u'\u96c6\u5408\u7ade\u4ef7\u62a5\u5355'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeID', 'SequenceNo', 'MarketStatus']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeID', u'交易所代码'),('SequenceNo', u'序号'),('MarketStatus', u'合约交易状态')]])
    def getval(self, n):
        if n in ['MarketStatus']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcSettlementInfoField:
    def __init__(self, SettlementID=0, InvestorID="", SequenceNo=0, Content="", TradingDay="", BrokerID=""):
        self.SettlementID=SettlementID
        self.InvestorID=InvestorID
        self.SequenceNo=SequenceNo
        self.Content=Content
        self.TradingDay=TradingDay
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['SettlementID', 'InvestorID', 'SequenceNo', 'Content', 'TradingDay', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('SettlementID', u'结算编号'),('InvestorID', u'投资者代码'),('SequenceNo', u'序号'),('Content', u'消息正文'),('TradingDay', u'交易日'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CTKSConditionalOrderInitInsert:
    def __init__(self, InstrumentID="", CombHedgeFlag='1', ExchangeID="", TriggeredTimes=0, OrderPriceType='0', CurrencyID="", OrderType='0', CombOffsetFlag='0', Direction='0', ClientID="", InvestorID="", ActiveTime="", BrokerID="", LimitPrice=0, ConditionalType='0', InActiveTime="", ConditionalOrderID=0, VolumeTotalOriginal=0, ConditionalPrice=0):
        self.InstrumentID=InstrumentID
        self.CombHedgeFlag=CombHedgeFlag
        self.ExchangeID=ExchangeID
        self.TriggeredTimes=TriggeredTimes
        self.OrderPriceType=OrderPriceType
        self.CurrencyID=CurrencyID
        self.OrderType=OrderType
        self.CombOffsetFlag=CombOffsetFlag
        self.Direction=Direction
        self.ClientID=ClientID
        self.InvestorID=InvestorID
        self.ActiveTime=ActiveTime
        self.BrokerID=BrokerID
        self.LimitPrice=LimitPrice
        self.ConditionalType=ConditionalType
        self.InActiveTime=InActiveTime
        self.ConditionalOrderID=ConditionalOrderID
        self.VolumeTotalOriginal=VolumeTotalOriginal
        self.ConditionalPrice=ConditionalPrice
        self.vcmap={'CombHedgeFlag': {"'1'": u'\u6295\u673a', "'2'": u'\u5957\u5229', "'3'": u'\u5957\u4fdd'}, 'Direction': {"'1'": u'\u5356', "'0'": u'\u4e70'}, 'OrderType': {"'1'": u'\u5f00\u76d8\u89e6\u53d1', "'2'": u'\u65f6\u95f4\u89e6\u53d1', "'0'": u'\u884c\u60c5\u89e6\u53d1', "'5'": u'\u884c\u60c5\u548c\u65f6\u95f4\u89e6\u53d1'}, 'CombOffsetFlag': {"'5'": u'\u5f3a\u51cf', "'4'": u'\u5e73\u6628', "'1'": u'\u5e73\u4ed3', "'0'": u'\u5f00\u4ed3', "'6'": u'\u672c\u5730\u5f3a\u5e73', "'2'": u'\u5f3a\u5e73', "'3'": u'\u5e73\u4eca'}, 'OrderPriceType': {"'1'": u'\u4e70\u4ef7', "'2'": u'\u5356\u4ef7', "'0'": u'\u6700\u65b0\u4ef7'}, 'ConditionalType': {"'1'": u'\u5c0f\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'0'": u'\u5927\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'CombHedgeFlag', 'ExchangeID', 'TriggeredTimes', 'OrderPriceType', 'CurrencyID', 'OrderType', 'CombOffsetFlag', 'Direction', 'ClientID', 'InvestorID', 'ActiveTime', 'BrokerID', 'LimitPrice', 'ConditionalType', 'InActiveTime', 'ConditionalOrderID', 'VolumeTotalOriginal', 'ConditionalPrice']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('CombHedgeFlag', u'投机套保标志'),('ExchangeID', u'交易所代码'),('TriggeredTimes', u'触发次数'),('OrderPriceType', u'价格类别'),('CurrencyID', u'货币代码'),('OrderType', u'条件单类型'),('CombOffsetFlag', u'开平标志'),('Direction', u'买卖方向'),('ClientID', u'客户代码'),('InvestorID', u'投资者代码'),('ActiveTime', u'有效时间'),('BrokerID', u'营业部代码'),('LimitPrice', u'价格'),('ConditionalType', u'条件类型'),('InActiveTime', u'失效时间'),('ConditionalOrderID', u'条件单编号'),('VolumeTotalOriginal', u'数量'),('ConditionalPrice', u'条件价')]])
    def getval(self, n):
        if n in ['CombHedgeFlag', 'OrderPriceType', 'OrderType', 'CombOffsetFlag', 'Direction', 'ConditionalType']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcMDTraderOfferField:
    def __init__(self, StartDate="", ExchangeID="", InstallID=0, LastReportDate="", ParticipantID="", OrderLocalID="", LastReportTime="", TraderID="", MaxTradeID="", ConnectTime="", TraderConnectStatus='1', TradingDay="", ConnectRequestTime="", StartTime="", ConnectRequestDate="", MaxOrderMessageReference="", BrokerID="", Password="", ConnectDate=""):
        self.StartDate=StartDate
        self.ExchangeID=ExchangeID
        self.InstallID=InstallID
        self.LastReportDate=LastReportDate
        self.ParticipantID=ParticipantID
        self.OrderLocalID=OrderLocalID
        self.LastReportTime=LastReportTime
        self.TraderID=TraderID
        self.MaxTradeID=MaxTradeID
        self.ConnectTime=ConnectTime
        self.TraderConnectStatus=TraderConnectStatus
        self.TradingDay=TradingDay
        self.ConnectRequestTime=ConnectRequestTime
        self.StartTime=StartTime
        self.ConnectRequestDate=ConnectRequestDate
        self.MaxOrderMessageReference=MaxOrderMessageReference
        self.BrokerID=BrokerID
        self.Password=Password
        self.ConnectDate=ConnectDate
        self.vcmap={'TraderConnectStatus': {"'1'": u'\u6ca1\u6709\u4efb\u4f55\u8fde\u63a5', "'2'": u'\u5df2\u7ecf\u8fde\u63a5', "'3'": u'\u5df2\u7ecf\u53d1\u51fa\u5408\u7ea6\u67e5\u8be2\u8bf7\u6c42', "'4'": u'\u8ba2\u9605\u79c1\u6709\u6d41'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['StartDate', 'ExchangeID', 'InstallID', 'LastReportDate', 'ParticipantID', 'OrderLocalID', 'LastReportTime', 'TraderID', 'MaxTradeID', 'ConnectTime', 'TraderConnectStatus', 'TradingDay', 'ConnectRequestTime', 'StartTime', 'ConnectRequestDate', 'MaxOrderMessageReference', 'BrokerID', 'Password', 'ConnectDate']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('StartDate', u'启动日期'),('ExchangeID', u'交易所代码'),('InstallID', u'安装编号'),('LastReportDate', u'上次报告日期'),('ParticipantID', u'会员代码'),('OrderLocalID', u'本地报单编号'),('LastReportTime', u'上次报告时间'),('TraderID', u'交易所交易员代码'),('MaxTradeID', u'本席位最大成交编号'),('ConnectTime', u'完成连接时间'),('TraderConnectStatus', u'交易所交易员连接状态'),('TradingDay', u'交易日'),('ConnectRequestTime', u'发出连接请求的时间'),('StartTime', u'启动时间'),('ConnectRequestDate', u'发出连接请求的日期'),('MaxOrderMessageReference', u'本席位最大报单备拷'),('BrokerID', u'经纪公司代码'),('Password', u'密码'),('ConnectDate', u'完成连接日期')]])
    def getval(self, n):
        if n in ['TraderConnectStatus']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryInstrumentStatusField:
    def __init__(self, ExchangeID="", ExchangeInstID=""):
        self.ExchangeID=ExchangeID
        self.ExchangeInstID=ExchangeInstID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeID', 'ExchangeInstID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeID', u'交易所代码'),('ExchangeInstID', u'合约在交易所的代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcMarketDataAsk23Field:
    def __init__(self, AskVolume3=0, AskVolume2=0, AskPrice3=0, AskPrice2=0):
        self.AskVolume3=AskVolume3
        self.AskVolume2=AskVolume2
        self.AskPrice3=AskPrice3
        self.AskPrice2=AskPrice2
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['AskVolume3', 'AskVolume2', 'AskPrice3', 'AskPrice2']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('AskVolume3', u'申卖量三'),('AskVolume2', u'申卖量二'),('AskPrice3', u'申卖价三'),('AskPrice2', u'申卖价二')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryOrderActionField:
    def __init__(self, InvestorID="", ExchangeID="", BrokerID=""):
        self.InvestorID=InvestorID
        self.ExchangeID=ExchangeID
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'ExchangeID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('ExchangeID', u'交易所代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcUserRightsAssignField:
    def __init__(self, UserID="", DRIdentityID=0, BrokerID=""):
        self.UserID=UserID
        self.DRIdentityID=DRIdentityID
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserID', 'DRIdentityID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserID', u'用户代码'),('DRIdentityID', u'交易中心代码'),('BrokerID', u'应用单元代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcDisseminationField:
    def __init__(self, SequenceNo=0, SequenceSeries=0):
        self.SequenceNo=SequenceNo
        self.SequenceSeries=SequenceSeries
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['SequenceNo', 'SequenceSeries']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('SequenceNo', u'序列号'),('SequenceSeries', u'序列系列号')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcUserLogoutField:
    def __init__(self, UserID="", BrokerID=""):
        self.UserID=UserID
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserID', u'用户代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcCurrentTimeField:
    def __init__(self, CurrTime="", CurrDate="", CurrMillisec=0):
        self.CurrTime=CurrTime
        self.CurrDate=CurrDate
        self.CurrMillisec=CurrMillisec
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['CurrTime', 'CurrDate', 'CurrMillisec']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('CurrTime', u'当前时间'),('CurrDate', u'当前日期'),('CurrMillisec', u'当前时间（毫秒）')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CTKSPLStatusField:
    def __init__(self, TakeProfitPrice=0, VolumeTraded=0, CombOffsetFlag='0', UserID="", LimitPrice=0, StopLossOrderID=0, StopLossPrice=0, Direction='0', ActiveTime="", Memo="", ClientID="", VolumeTotal=0, OrderStatus='0', OrderSysID="", CurrencyID="", InstrumentID="", ExchangeID="", CancelTime="", CancelUserID="", TradePrice=0, TradingDay="", OpenTradePrice=0, BrokerID="", InsertTime="", ProfitAndLossOrderID=0, CombHedgeFlag='1', TakeProfitOrderID=0, OrderLocalID="", BusinessUnit="", SequenceNo=0, InvestorID="", ProfitAndLossOrderStatus='0', OffsetValue='0', VolumeTotalOriginal=0):
        self.TakeProfitPrice=TakeProfitPrice
        self.VolumeTraded=VolumeTraded
        self.CombOffsetFlag=CombOffsetFlag
        self.UserID=UserID
        self.LimitPrice=LimitPrice
        self.StopLossOrderID=StopLossOrderID
        self.StopLossPrice=StopLossPrice
        self.Direction=Direction
        self.ActiveTime=ActiveTime
        self.Memo=Memo
        self.ClientID=ClientID
        self.VolumeTotal=VolumeTotal
        self.OrderStatus=OrderStatus
        self.OrderSysID=OrderSysID
        self.CurrencyID=CurrencyID
        self.InstrumentID=InstrumentID
        self.ExchangeID=ExchangeID
        self.CancelTime=CancelTime
        self.CancelUserID=CancelUserID
        self.TradePrice=TradePrice
        self.TradingDay=TradingDay
        self.OpenTradePrice=OpenTradePrice
        self.BrokerID=BrokerID
        self.InsertTime=InsertTime
        self.ProfitAndLossOrderID=ProfitAndLossOrderID
        self.CombHedgeFlag=CombHedgeFlag
        self.TakeProfitOrderID=TakeProfitOrderID
        self.OrderLocalID=OrderLocalID
        self.BusinessUnit=BusinessUnit
        self.SequenceNo=SequenceNo
        self.InvestorID=InvestorID
        self.ProfitAndLossOrderStatus=ProfitAndLossOrderStatus
        self.OffsetValue=OffsetValue
        self.VolumeTotalOriginal=VolumeTotalOriginal
        self.vcmap={'CombHedgeFlag': {"'1'": u'\u6295\u673a', "'2'": u'\u5957\u5229', "'3'": u'\u5957\u4fdd'}, 'Direction': {"'1'": u'\u5356', "'0'": u'\u4e70'}, 'CombOffsetFlag': {"'5'": u'\u5f3a\u51cf', "'4'": u'\u5e73\u6628', "'1'": u'\u5e73\u4ed3', "'0'": u'\u5f00\u4ed3', "'6'": u'\u672c\u5730\u5f3a\u5e73', "'2'": u'\u5f3a\u5e73', "'3'": u'\u5e73\u4eca'}, 'ProfitAndLossOrderStatus': {"'7'": u'\u9009\u62e9\u8df3\u8fc7', "'8'": u'\u9009\u62e9\u7ec8\u6b62', "'5'": u'\u53d1\u9001\u6210\u529f', "'4'": u'\u53d1\u9001\u8d85\u65f6', "'1'": u'\u672a\u89e6\u53d1', "'0'": u'\u6682\u505c', "'6'": u'\u7b49\u5f85\u9009\u62e9', "'2'": u'\u5220\u9664', "'3'": u'\u5df2\u89e6\u53d1\u672a\u53d1\u9001'}, 'OrderStatus': {"'b'": u'\u5c1a\u672a\u89e6\u53d1', "'5'": u'\u64a4\u5355', "'c'": u'\u5df2\u89e6\u53d1', "'4'": u'\u672a\u6210\u4ea4\u4e0d\u5728\u961f\u5217\u4e2d', "'1'": u'\u90e8\u5206\u6210\u4ea4\u8fd8\u5728\u961f\u5217\u4e2d', "'0'": u'\u5168\u90e8\u6210\u4ea4', "'2'": u'\u90e8\u5206\u6210\u4ea4\u4e0d\u5728\u961f\u5217\u4e2d', "'3'": u'\u672a\u6210\u4ea4\u8fd8\u5728\u961f\u5217\u4e2d', "'a'": u'\u672a\u77e5'}, 'OffsetValue': {"'1'": u'\u5f00\u4ed3\u6210\u4ea4\u4ef7\u7684\u76f8\u5bf9\u504f\u79fb\u503c', "'0'": u'\u6307\u5b9a\u503c'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TakeProfitPrice', 'VolumeTraded', 'CombOffsetFlag', 'UserID', 'LimitPrice', 'StopLossOrderID', 'StopLossPrice', 'Direction', 'ActiveTime', 'Memo', 'ClientID', 'VolumeTotal', 'OrderStatus', 'OrderSysID', 'CurrencyID', 'InstrumentID', 'ExchangeID', 'CancelTime', 'CancelUserID', 'TradePrice', 'TradingDay', 'OpenTradePrice', 'BrokerID', 'InsertTime', 'ProfitAndLossOrderID', 'CombHedgeFlag', 'TakeProfitOrderID', 'OrderLocalID', 'BusinessUnit', 'SequenceNo', 'InvestorID', 'ProfitAndLossOrderStatus', 'OffsetValue', 'VolumeTotalOriginal']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TakeProfitPrice', u'止盈价'),('VolumeTraded', u'今成交数量'),('CombOffsetFlag', u'开平标志'),('UserID', u'操作员'),('LimitPrice', u'价格'),('StopLossOrderID', u'止损条件单编号'),('StopLossPrice', u'止损价'),('Direction', u'买卖方向'),('ActiveTime', u'激活时间'),('Memo', u'备注'),('ClientID', u'客户代码'),('VolumeTotal', u'剩余数量'),('OrderStatus', u'报单状态'),('OrderSysID', u'报单编号'),('CurrencyID', u'货币代码'),('InstrumentID', u'合约代码'),('ExchangeID', u'交易所代码'),('CancelTime', u'撤销时间'),('CancelUserID', u'撤销用户'),('TradePrice', u'成交价格'),('TradingDay', u'交易日'),('OpenTradePrice', u'开仓成交价格'),('BrokerID', u'营业部代码'),('InsertTime', u'委托时间'),('ProfitAndLossOrderID', u'止损止盈单编号'),('CombHedgeFlag', u'投机套保标志'),('TakeProfitOrderID', u'止盈条件单编号'),('OrderLocalID', u'本地报单编号'),('BusinessUnit', u'业务单元'),('SequenceNo', u'序号'),('InvestorID', u'投资者代码'),('ProfitAndLossOrderStatus', u'盈损单状态'),('OffsetValue', u'生成盈损价的方式'),('VolumeTotalOriginal', u'数量')]])
    def getval(self, n):
        if n in ['CombOffsetFlag', 'Direction', 'OrderStatus', 'CombHedgeFlag', 'ProfitAndLossOrderStatus', 'OffsetValue']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcErrOrderActionField:
    def __init__(self, ActionTime="", InvestorID="", TraderID="", UserID="", LimitPrice=0, OrderActionStatus='a', InstallID=0, ParticipantID="", OrderActionRef=0, VolumeChange=0, SessionID=0, ActionFlag='0', ErrorID=0, InstrumentID="", ExchangeID="", StatusMsg="", OrderSysID="", BrokerID="", ClientID="", ActionDate="", OrderLocalID="", BusinessUnit="", ErrorMsg="", OrderRef="", ActionLocalID="", RequestID=0, FrontID=0):
        self.ActionTime=ActionTime
        self.InvestorID=InvestorID
        self.TraderID=TraderID
        self.UserID=UserID
        self.LimitPrice=LimitPrice
        self.OrderActionStatus=OrderActionStatus
        self.InstallID=InstallID
        self.ParticipantID=ParticipantID
        self.OrderActionRef=OrderActionRef
        self.VolumeChange=VolumeChange
        self.SessionID=SessionID
        self.ActionFlag=ActionFlag
        self.ErrorID=ErrorID
        self.InstrumentID=InstrumentID
        self.ExchangeID=ExchangeID
        self.StatusMsg=StatusMsg
        self.OrderSysID=OrderSysID
        self.BrokerID=BrokerID
        self.ClientID=ClientID
        self.ActionDate=ActionDate
        self.OrderLocalID=OrderLocalID
        self.BusinessUnit=BusinessUnit
        self.ErrorMsg=ErrorMsg
        self.OrderRef=OrderRef
        self.ActionLocalID=ActionLocalID
        self.RequestID=RequestID
        self.FrontID=FrontID
        self.vcmap={'OrderActionStatus': {"'a'": u'\u5df2\u7ecf\u63d0\u4ea4', "'b'": u'\u5df2\u7ecf\u63a5\u53d7', "'c'": u'\u5df2\u7ecf\u88ab\u62d2\u7edd'}, 'ActionFlag': {"'0'": u'\u5220\u9664', "'3'": u'\u4fee\u6539'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ActionTime', 'InvestorID', 'TraderID', 'UserID', 'LimitPrice', 'OrderActionStatus', 'InstallID', 'ParticipantID', 'OrderActionRef', 'VolumeChange', 'SessionID', 'ActionFlag', 'ErrorID', 'InstrumentID', 'ExchangeID', 'StatusMsg', 'OrderSysID', 'BrokerID', 'ClientID', 'ActionDate', 'OrderLocalID', 'BusinessUnit', 'ErrorMsg', 'OrderRef', 'ActionLocalID', 'RequestID', 'FrontID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ActionTime', u'操作时间'),('InvestorID', u'投资者代码'),('TraderID', u'交易所交易员代码'),('UserID', u'用户代码'),('LimitPrice', u'价格'),('OrderActionStatus', u'报单操作状态'),('InstallID', u'安装编号'),('ParticipantID', u'会员代码'),('OrderActionRef', u'报单操作引用'),('VolumeChange', u'数量变化'),('SessionID', u'会话编号'),('ActionFlag', u'操作标志'),('ErrorID', u'错误代码'),('InstrumentID', u'合约代码'),('ExchangeID', u'交易所代码'),('StatusMsg', u'状态信息'),('OrderSysID', u'报单编号'),('BrokerID', u'经纪公司代码'),('ClientID', u'客户代码'),('ActionDate', u'操作日期'),('OrderLocalID', u'本地报单编号'),('BusinessUnit', u'业务单元'),('ErrorMsg', u'错误信息'),('OrderRef', u'报单引用'),('ActionLocalID', u'操作本地编号'),('RequestID', u'请求编号'),('FrontID', u'前置编号')]])
    def getval(self, n):
        if n in ['OrderActionStatus', 'ActionFlag']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostOrderKeyField:
    def __init__(self, FrontID=0, SessionID=0, ExchangeID="", OrderSysID="", OrderRef=""):
        self.FrontID=FrontID
        self.SessionID=SessionID
        self.ExchangeID=ExchangeID
        self.OrderSysID=OrderSysID
        self.OrderRef=OrderRef
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['FrontID', 'SessionID', 'ExchangeID', 'OrderSysID', 'OrderRef']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('FrontID', u'前置编号'),('SessionID', u'会话编号'),('ExchangeID', u'交易所代码'),('OrderSysID', u'报单编号'),('OrderRef', u'报单引用')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryTraderOfferField:
    def __init__(self, ExchangeID="", TraderID="", ParticipantID=""):
        self.ExchangeID=ExchangeID
        self.TraderID=TraderID
        self.ParticipantID=ParticipantID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeID', 'TraderID', 'ParticipantID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeID', u'交易所代码'),('TraderID', u'交易所交易员代码'),('ParticipantID', u'会员代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcMarketDataBid23Field:
    def __init__(self, BidVolume3=0, BidVolume2=0, BidPrice3=0, BidPrice2=0):
        self.BidVolume3=BidVolume3
        self.BidVolume2=BidVolume2
        self.BidPrice3=BidPrice3
        self.BidPrice2=BidPrice2
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BidVolume3', 'BidVolume2', 'BidPrice3', 'BidPrice2']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BidVolume3', u'申买量三'),('BidVolume2', u'申买量二'),('BidPrice3', u'申买价三'),('BidPrice2', u'申买价二')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcMarketDataBaseField:
    def __init__(self, TradingDay="", PreDelta=0, PreClosePrice=0, PreOpenInterest=0, PreSettlementPrice=0):
        self.TradingDay=TradingDay
        self.PreDelta=PreDelta
        self.PreClosePrice=PreClosePrice
        self.PreOpenInterest=PreOpenInterest
        self.PreSettlementPrice=PreSettlementPrice
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'PreDelta', 'PreClosePrice', 'PreOpenInterest', 'PreSettlementPrice']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易日'),('PreDelta', u'昨虚实度'),('PreClosePrice', u'昨收盘'),('PreOpenInterest', u'昨持仓量'),('PreSettlementPrice', u'上次结算价')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcReqRepealField:
    def __init__(self, BrokerBranchID="", UserID="", BankPassWord="", BankRepealFlag='0', RepealedTimes=0, TradeTime="", VerifyCertNoFlag='0', TID=0, FutureRepealSerial=0, AccountID="", BankAccount="", InstallID=0, SecuPwdFlag='0', CustomerName="", TradeCode="", BankBranchID="", SessionID=0, BankID="", PlateSerial=0, BankPwdFlag='0', RequestID=0, CustType='0', IdentifiedCardNo="", FeePayFlag='0', BankSerial="", OperNo="", TradingDay="", BankSecuAcc="", BrokerID="", DeviceID="", TransferStatus='0', BrokerRepealFlag='0', IdCardType='0', Password="", FutureFetchAmount=0, TradeDate="", CurrencyID="", BrokerFee=0, BankAccType='1', LastFragment='0', FutureSerial=0, BankRepealSerial="", RepealTimeInterval=0, BankSecuAccType='1', BrokerIDByBank="", PlateRepealSerial=0, Message="", CustFee=0, TradeAmount=0, Digest=""):
        self.BrokerBranchID=BrokerBranchID
        self.UserID=UserID
        self.BankPassWord=BankPassWord
        self.BankRepealFlag=BankRepealFlag
        self.RepealedTimes=RepealedTimes
        self.TradeTime=TradeTime
        self.VerifyCertNoFlag=VerifyCertNoFlag
        self.TID=TID
        self.FutureRepealSerial=FutureRepealSerial
        self.AccountID=AccountID
        self.BankAccount=BankAccount
        self.InstallID=InstallID
        self.SecuPwdFlag=SecuPwdFlag
        self.CustomerName=CustomerName
        self.TradeCode=TradeCode
        self.BankBranchID=BankBranchID
        self.SessionID=SessionID
        self.BankID=BankID
        self.PlateSerial=PlateSerial
        self.BankPwdFlag=BankPwdFlag
        self.RequestID=RequestID
        self.CustType=CustType
        self.IdentifiedCardNo=IdentifiedCardNo
        self.FeePayFlag=FeePayFlag
        self.BankSerial=BankSerial
        self.OperNo=OperNo
        self.TradingDay=TradingDay
        self.BankSecuAcc=BankSecuAcc
        self.BrokerID=BrokerID
        self.DeviceID=DeviceID
        self.TransferStatus=TransferStatus
        self.BrokerRepealFlag=BrokerRepealFlag
        self.IdCardType=IdCardType
        self.Password=Password
        self.FutureFetchAmount=FutureFetchAmount
        self.TradeDate=TradeDate
        self.CurrencyID=CurrencyID
        self.BrokerFee=BrokerFee
        self.BankAccType=BankAccType
        self.LastFragment=LastFragment
        self.FutureSerial=FutureSerial
        self.BankRepealSerial=BankRepealSerial
        self.RepealTimeInterval=RepealTimeInterval
        self.BankSecuAccType=BankSecuAccType
        self.BrokerIDByBank=BrokerIDByBank
        self.PlateRepealSerial=PlateRepealSerial
        self.Message=Message
        self.CustFee=CustFee
        self.TradeAmount=TradeAmount
        self.Digest=Digest
        self.vcmap={'CustType': {"'1'": u'\u673a\u6784\u6237', "'0'": u'\u81ea\u7136\u4eba'}, 'BankAccType': {"'1'": u'\u94f6\u884c\u5b58\u6298', "'2'": u'\u50a8\u84c4\u5361', "'3'": u'\u4fe1\u7528\u5361'}, 'BankPwdFlag': {"'1'": u'\u660e\u6587\u6838\u5bf9', "'2'": u'\u5bc6\u6587\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}, 'LastFragment': {"'1'": u'\u4e0d\u662f\u6700\u540e\u5206\u7247', "'0'": u'\u662f\u6700\u540e\u5206\u7247'}, 'BankRepealFlag': {"'1'": u'\u94f6\u884c\u5f85\u81ea\u52a8\u51b2\u6b63', "'2'": u'\u94f6\u884c\u5df2\u81ea\u52a8\u51b2\u6b63', "'0'": u'\u94f6\u884c\u65e0\u9700\u81ea\u52a8\u51b2\u6b63'}, 'SecuPwdFlag': {"'1'": u'\u660e\u6587\u6838\u5bf9', "'2'": u'\u5bc6\u6587\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}, 'VerifyCertNoFlag': {"'1'": u'\u5426', "'0'": u'\u662f'}, 'BrokerRepealFlag': {"'1'": u'\u671f\u5546\u5f85\u81ea\u52a8\u51b2\u6b63', "'2'": u'\u671f\u5546\u5df2\u81ea\u52a8\u51b2\u6b63', "'0'": u'\u671f\u5546\u65e0\u9700\u81ea\u52a8\u51b2\u6b63'}, 'TransferStatus': {"'1'": u'\u88ab\u51b2\u6b63', "'0'": u'\u6b63\u5e38'}, 'FeePayFlag': {"'1'": u'\u7531\u53d1\u9001\u65b9\u652f\u4ed8\u8d39\u7528', "'2'": u'\u7531\u53d1\u9001\u65b9\u652f\u4ed8\u53d1\u8d77\u7684\u8d39\u7528\uff0c\u53d7\u76ca\u65b9\u652f\u4ed8\u63a5\u53d7\u7684\u8d39\u7528', "'0'": u'\u7531\u53d7\u76ca\u65b9\u652f\u4ed8\u8d39\u7528'}, 'BankSecuAccType': {"'1'": u'\u94f6\u884c\u5b58\u6298', "'2'": u'\u50a8\u84c4\u5361', "'3'": u'\u4fe1\u7528\u5361'}, 'IdCardType': {"'9'": u'\u8425\u4e1a\u6267\u7167\u53f7', "'7'": u'\u53f0\u80de\u8bc1', "'x'": u'\u5176\u4ed6\u8bc1\u4ef6', "'5'": u'\u6237\u53e3\u7c3f', "'4'": u'\u58eb\u5175\u8bc1', "'1'": u'\u8eab\u4efd\u8bc1', "'0'": u'\u7ec4\u7ec7\u673a\u6784\u4ee3\u7801', "'6'": u'\u62a4\u7167', "'2'": u'\u519b\u5b98\u8bc1', "'8'": u'\u56de\u4e61\u8bc1', "'3'": u'\u8b66\u5b98\u8bc1', "'A'": u'\u7a0e\u52a1\u767b\u8bb0\u53f7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerBranchID', 'UserID', 'BankPassWord', 'BankRepealFlag', 'RepealedTimes', 'TradeTime', 'VerifyCertNoFlag', 'TID', 'FutureRepealSerial', 'AccountID', 'BankAccount', 'InstallID', 'SecuPwdFlag', 'CustomerName', 'TradeCode', 'BankBranchID', 'SessionID', 'BankID', 'PlateSerial', 'BankPwdFlag', 'RequestID', 'CustType', 'IdentifiedCardNo', 'FeePayFlag', 'BankSerial', 'OperNo', 'TradingDay', 'BankSecuAcc', 'BrokerID', 'DeviceID', 'TransferStatus', 'BrokerRepealFlag', 'IdCardType', 'Password', 'FutureFetchAmount', 'TradeDate', 'CurrencyID', 'BrokerFee', 'BankAccType', 'LastFragment', 'FutureSerial', 'BankRepealSerial', 'RepealTimeInterval', 'BankSecuAccType', 'BrokerIDByBank', 'PlateRepealSerial', 'Message', 'CustFee', 'TradeAmount', 'Digest']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerBranchID', u'期商分支机构代码'),('UserID', u'用户标识'),('BankPassWord', u'银行密码'),('BankRepealFlag', u'银行冲正标志'),('RepealedTimes', u'已经冲正次数'),('TradeTime', u'交易时间'),('VerifyCertNoFlag', u'验证客户证件号码标志'),('TID', u'交易ID'),('FutureRepealSerial', u'被冲正期货流水号'),('AccountID', u'投资者帐号'),('BankAccount', u'银行帐号'),('InstallID', u'安装编号'),('SecuPwdFlag', u'期货资金密码核对标志'),('CustomerName', u'客户姓名'),('TradeCode', u'业务功能码'),('BankBranchID', u'银行分支机构代码'),('SessionID', u'会话号'),('BankID', u'银行代码'),('PlateSerial', u'银期平台消息流水号'),('BankPwdFlag', u'银行密码标志'),('RequestID', u'请求编号'),('CustType', u'客户类型'),('IdentifiedCardNo', u'证件号码'),('FeePayFlag', u'费用支付标志'),('BankSerial', u'银行流水号'),('OperNo', u'交易柜员'),('TradingDay', u'交易系统日期'),('BankSecuAcc', u'期货单位帐号'),('BrokerID', u'期商代码'),('DeviceID', u'渠道标志'),('TransferStatus', u'转账交易状态'),('BrokerRepealFlag', u'期商冲正标志'),('IdCardType', u'证件类型'),('Password', u'期货密码'),('FutureFetchAmount', u'期货可取金额'),('TradeDate', u'交易日期'),('CurrencyID', u'币种代码'),('BrokerFee', u'应收期货公司费用'),('BankAccType', u'银行帐号类型'),('LastFragment', u'最后分片标志'),('FutureSerial', u'期货公司流水号'),('BankRepealSerial', u'被冲正银行流水号'),('RepealTimeInterval', u'冲正时间间隔'),('BankSecuAccType', u'期货单位帐号类型'),('BrokerIDByBank', u'期货公司银行编码'),('PlateRepealSerial', u'被冲正平台流水号'),('Message', u'发送方给接收方的消息'),('CustFee', u'应收客户费用'),('TradeAmount', u'转帐金额'),('Digest', u'摘要')]])
    def getval(self, n):
        if n in ['BankRepealFlag', 'VerifyCertNoFlag', 'SecuPwdFlag', 'BankPwdFlag', 'CustType', 'FeePayFlag', 'TransferStatus', 'BrokerRepealFlag', 'IdCardType', 'BankAccType', 'LastFragment', 'BankSecuAccType']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcTradeField:
    def __init__(self, TradeType='0', TraderID="", HedgeFlag='1', TradeTime="", Direction='0', ParticipantID="", Price=0, ClientID="", Volume=0, OrderSysID="", ClearingPartID="", InstrumentID="", ExchangeID="", SettlementID=0, UserID="", TradingDay="", BrokerID="", OffsetFlag='0', OrderLocalID="", TradeID="", TradeDate="", BusinessUnit="", SequenceNo=0, OrderRef="", BrokerOrderSeq=0, InvestorID="", ExchangeInstID="", TradeSource='0', PriceSource='0', TradingRole='1'):
        self.TradeType=TradeType
        self.TraderID=TraderID
        self.HedgeFlag=HedgeFlag
        self.TradeTime=TradeTime
        self.Direction=Direction
        self.ParticipantID=ParticipantID
        self.Price=Price
        self.ClientID=ClientID
        self.Volume=Volume
        self.OrderSysID=OrderSysID
        self.ClearingPartID=ClearingPartID
        self.InstrumentID=InstrumentID
        self.ExchangeID=ExchangeID
        self.SettlementID=SettlementID
        self.UserID=UserID
        self.TradingDay=TradingDay
        self.BrokerID=BrokerID
        self.OffsetFlag=OffsetFlag
        self.OrderLocalID=OrderLocalID
        self.TradeID=TradeID
        self.TradeDate=TradeDate
        self.BusinessUnit=BusinessUnit
        self.SequenceNo=SequenceNo
        self.OrderRef=OrderRef
        self.BrokerOrderSeq=BrokerOrderSeq
        self.InvestorID=InvestorID
        self.ExchangeInstID=ExchangeInstID
        self.TradeSource=TradeSource
        self.PriceSource=PriceSource
        self.TradingRole=TradingRole
        self.vcmap={'Direction': {"'1'": u'\u5356', "'0'": u'\u4e70'}, 'TradeType': {"'1'": u'\u671f\u6743\u6267\u884c', "'2'": u'OTC\u6210\u4ea4', "'0'": u'\u666e\u901a\u6210\u4ea4', "'3'": u'\u671f\u8f6c\u73b0\u884d\u751f\u6210\u4ea4', "'4'": u'\u7ec4\u5408\u884d\u751f\u6210\u4ea4'}, 'OffsetFlag': {"'5'": u'\u5f3a\u51cf', "'4'": u'\u5e73\u6628', "'1'": u'\u5e73\u4ed3', "'0'": u'\u5f00\u4ed3', "'6'": u'\u672c\u5730\u5f3a\u5e73', "'2'": u'\u5f3a\u5e73', "'3'": u'\u5e73\u4eca'}, 'HedgeFlag': {"'1'": u'\u6295\u673a', "'2'": u'\u5957\u5229', "'3'": u'\u5957\u4fdd'}, 'TradeSource': {"'1'": u'\u6765\u81ea\u67e5\u8be2', "'0'": u'\u6765\u81ea\u4ea4\u6613\u6240\u666e\u901a\u56de\u62a5'}, 'PriceSource': {"'1'": u'\u4e70\u59d4\u6258\u4ef7', "'2'": u'\u5356\u59d4\u6258\u4ef7', "'0'": u'\u524d\u6210\u4ea4\u4ef7'}, 'TradingRole': {"'1'": u'\u4ee3\u7406', "'2'": u'\u81ea\u8425', "'3'": u'\u505a\u5e02\u5546'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradeType', 'TraderID', 'HedgeFlag', 'TradeTime', 'Direction', 'ParticipantID', 'Price', 'ClientID', 'Volume', 'OrderSysID', 'ClearingPartID', 'InstrumentID', 'ExchangeID', 'SettlementID', 'UserID', 'TradingDay', 'BrokerID', 'OffsetFlag', 'OrderLocalID', 'TradeID', 'TradeDate', 'BusinessUnit', 'SequenceNo', 'OrderRef', 'BrokerOrderSeq', 'InvestorID', 'ExchangeInstID', 'TradeSource', 'PriceSource', 'TradingRole']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradeType', u'成交类型'),('TraderID', u'交易所交易员代码'),('HedgeFlag', u'投机套保标志'),('TradeTime', u'成交时间'),('Direction', u'买卖方向'),('ParticipantID', u'会员代码'),('Price', u'价格'),('ClientID', u'客户代码'),('Volume', u'数量'),('OrderSysID', u'报单编号'),('ClearingPartID', u'结算会员编号'),('InstrumentID', u'合约代码'),('ExchangeID', u'交易所代码'),('SettlementID', u'结算编号'),('UserID', u'用户代码'),('TradingDay', u'交易日'),('BrokerID', u'经纪公司代码'),('OffsetFlag', u'开平标志'),('OrderLocalID', u'本地报单编号'),('TradeID', u'成交编号'),('TradeDate', u'成交时期'),('BusinessUnit', u'业务单元'),('SequenceNo', u'序号'),('OrderRef', u'报单引用'),('BrokerOrderSeq', u'经纪公司报单编号'),('InvestorID', u'投资者代码'),('ExchangeInstID', u'合约在交易所的代码'),('TradeSource', u'成交来源'),('PriceSource', u'成交价来源'),('TradingRole', u'交易角色')]])
    def getval(self, n):
        if n in ['TradeType', 'HedgeFlag', 'Direction', 'OffsetFlag', 'TradeSource', 'PriceSource', 'TradingRole']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryParkedOrderField:
    def __init__(self, InstrumentID="", InvestorID="", ExchangeID="", BrokerID=""):
        self.InstrumentID=InstrumentID
        self.InvestorID=InvestorID
        self.ExchangeID=ExchangeID
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'InvestorID', 'ExchangeID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('InvestorID', u'投资者代码'),('ExchangeID', u'交易所代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryBrokerUserEventField:
    def __init__(self, UserID="", BrokerID="", UserEventType='1'):
        self.UserID=UserID
        self.BrokerID=BrokerID
        self.UserEventType=UserEventType
        self.vcmap={'UserEventType': {"'9'": u'\u5176\u4ed6', "'5'": u'\u4fee\u6539\u5bc6\u7801', "'4'": u'\u4ea4\u6613\u5931\u8d25', "'1'": u'\u767b\u5f55', "'6'": u'\u5ba2\u6237\u7aef\u8ba4\u8bc1', "'2'": u'\u767b\u51fa', "'3'": u'\u4ea4\u6613\u6210\u529f'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserID', 'BrokerID', 'UserEventType']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserID', u'用户代码'),('BrokerID', u'经纪公司代码'),('UserEventType', u'用户事件类型')]])
    def getval(self, n):
        if n in ['UserEventType']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryInstrumentCommissionRateField:
    def __init__(self, InstrumentID="", InvestorID="", BrokerID=""):
        self.InstrumentID=InstrumentID
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'InvestorID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcReturnResultField:
    def __init__(self, ReturnCode="", DescrInfoForReturnCode=""):
        self.ReturnCode=ReturnCode
        self.DescrInfoForReturnCode=DescrInfoForReturnCode
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ReturnCode', 'DescrInfoForReturnCode']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ReturnCode', u'返回代码'),('DescrInfoForReturnCode', u'返回码描述')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcRemoveParkedOrderActionField:
    def __init__(self, InvestorID="", BrokerID="", ParkedOrderActionID=""):
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.ParkedOrderActionID=ParkedOrderActionID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'ParkedOrderActionID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('ParkedOrderActionID', u'预埋撤单编号')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryTraderField:
    def __init__(self, ExchangeID="", TraderID="", ParticipantID=""):
        self.ExchangeID=ExchangeID
        self.TraderID=TraderID
        self.ParticipantID=ParticipantID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeID', 'TraderID', 'ParticipantID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeID', u'交易所代码'),('TraderID', u'交易所交易员代码'),('ParticipantID', u'会员代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcCFMMCTradingAccountKeyField:
    def __init__(self, KeyID=0, BrokerID="", ParticipantID="", CurrentKey="", AccountID=""):
        self.KeyID=KeyID
        self.BrokerID=BrokerID
        self.ParticipantID=ParticipantID
        self.CurrentKey=CurrentKey
        self.AccountID=AccountID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['KeyID', 'BrokerID', 'ParticipantID', 'CurrentKey', 'AccountID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('KeyID', u'密钥编号'),('BrokerID', u'经纪公司代码'),('ParticipantID', u'经纪公司统一编码'),('CurrentKey', u'动态密钥'),('AccountID', u'投资者帐号')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcRspFutureSignOutField:
    def __init__(self, BrokerBranchID="", UserID="", TradeTime="", TID=0, InstallID=0, TradeCode="", BankBranchID="", SessionID=0, BankID="", PlateSerial=0, ErrorID=0, BankSerial="", OperNo="", TradingDay="", BrokerID="", DeviceID="", TradeDate="", CurrencyID="", ErrorMsg="", LastFragment='0', RequestID=0, BrokerIDByBank="", Digest=""):
        self.BrokerBranchID=BrokerBranchID
        self.UserID=UserID
        self.TradeTime=TradeTime
        self.TID=TID
        self.InstallID=InstallID
        self.TradeCode=TradeCode
        self.BankBranchID=BankBranchID
        self.SessionID=SessionID
        self.BankID=BankID
        self.PlateSerial=PlateSerial
        self.ErrorID=ErrorID
        self.BankSerial=BankSerial
        self.OperNo=OperNo
        self.TradingDay=TradingDay
        self.BrokerID=BrokerID
        self.DeviceID=DeviceID
        self.TradeDate=TradeDate
        self.CurrencyID=CurrencyID
        self.ErrorMsg=ErrorMsg
        self.LastFragment=LastFragment
        self.RequestID=RequestID
        self.BrokerIDByBank=BrokerIDByBank
        self.Digest=Digest
        self.vcmap={'LastFragment': {"'1'": u'\u4e0d\u662f\u6700\u540e\u5206\u7247', "'0'": u'\u662f\u6700\u540e\u5206\u7247'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerBranchID', 'UserID', 'TradeTime', 'TID', 'InstallID', 'TradeCode', 'BankBranchID', 'SessionID', 'BankID', 'PlateSerial', 'ErrorID', 'BankSerial', 'OperNo', 'TradingDay', 'BrokerID', 'DeviceID', 'TradeDate', 'CurrencyID', 'ErrorMsg', 'LastFragment', 'RequestID', 'BrokerIDByBank', 'Digest']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerBranchID', u'期商分支机构代码'),('UserID', u'用户标识'),('TradeTime', u'交易时间'),('TID', u'交易ID'),('InstallID', u'安装编号'),('TradeCode', u'业务功能码'),('BankBranchID', u'银行分支机构代码'),('SessionID', u'会话号'),('BankID', u'银行代码'),('PlateSerial', u'银期平台消息流水号'),('ErrorID', u'错误代码'),('BankSerial', u'银行流水号'),('OperNo', u'交易柜员'),('TradingDay', u'交易系统日期'),('BrokerID', u'期商代码'),('DeviceID', u'渠道标志'),('TradeDate', u'交易日期'),('CurrencyID', u'币种代码'),('ErrorMsg', u'错误信息'),('LastFragment', u'最后分片标志'),('RequestID', u'请求编号'),('BrokerIDByBank', u'期货公司银行编码'),('Digest', u'摘要')]])
    def getval(self, n):
        if n in ['LastFragment']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQrySyncDepositField:
    def __init__(self, DepositSeqNo="", BrokerID=""):
        self.DepositSeqNo=DepositSeqNo
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['DepositSeqNo', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('DepositSeqNo', u'出入金流水号'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcReqUserLoginField:
    def __init__(self, MacAddress="", UserProductInfo="", UserID="", TradingDay="", InterfaceProductInfo="", BrokerID="", ClientIPAddress="", OneTimePassword="", ProtocolInfo="", Password=""):
        self.MacAddress=MacAddress
        self.UserProductInfo=UserProductInfo
        self.UserID=UserID
        self.TradingDay=TradingDay
        self.InterfaceProductInfo=InterfaceProductInfo
        self.BrokerID=BrokerID
        self.ClientIPAddress=ClientIPAddress
        self.OneTimePassword=OneTimePassword
        self.ProtocolInfo=ProtocolInfo
        self.Password=Password
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['MacAddress', 'UserProductInfo', 'UserID', 'TradingDay', 'InterfaceProductInfo', 'BrokerID', 'ClientIPAddress', 'OneTimePassword', 'ProtocolInfo', 'Password']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('MacAddress', u'Mac地址'),('UserProductInfo', u'用户端产品信息'),('UserID', u'用户代码'),('TradingDay', u'交易日'),('InterfaceProductInfo', u'接口端产品信息'),('BrokerID', u'经纪公司代码'),('ClientIPAddress', u'终端IP地址'),('OneTimePassword', u'动态密码'),('ProtocolInfo', u'协议信息'),('Password', u'密码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcVerifyCustInfoField:
    def __init__(self, CustType='0', IdentifiedCardNo="", CustomerName="", IdCardType='0'):
        self.CustType=CustType
        self.IdentifiedCardNo=IdentifiedCardNo
        self.CustomerName=CustomerName
        self.IdCardType=IdCardType
        self.vcmap={'CustType': {"'1'": u'\u673a\u6784\u6237', "'0'": u'\u81ea\u7136\u4eba'}, 'IdCardType': {"'9'": u'\u8425\u4e1a\u6267\u7167\u53f7', "'7'": u'\u53f0\u80de\u8bc1', "'x'": u'\u5176\u4ed6\u8bc1\u4ef6', "'5'": u'\u6237\u53e3\u7c3f', "'4'": u'\u58eb\u5175\u8bc1', "'1'": u'\u8eab\u4efd\u8bc1', "'0'": u'\u7ec4\u7ec7\u673a\u6784\u4ee3\u7801', "'6'": u'\u62a4\u7167', "'2'": u'\u519b\u5b98\u8bc1', "'8'": u'\u56de\u4e61\u8bc1', "'3'": u'\u8b66\u5b98\u8bc1', "'A'": u'\u7a0e\u52a1\u767b\u8bb0\u53f7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['CustType', 'IdentifiedCardNo', 'CustomerName', 'IdCardType']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('CustType', u'客户类型'),('IdentifiedCardNo', u'证件号码'),('CustomerName', u'客户姓名'),('IdCardType', u'证件类型')]])
    def getval(self, n):
        if n in ['CustType', 'IdCardType']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcBulkCancelOrderField:
    def __init__(self, InvestorID="", BrokerID="", nCount=0, UserID="", OrderType='0'):
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.nCount=nCount
        self.UserID=UserID
        self.OrderType=OrderType
        self.vcmap={'OrderType': {"'5'": u'\u4e92\u6362\u5355', "'4'": u'\u6761\u4ef6\u5355', "'1'": u'\u62a5\u4ef7\u884d\u751f', "'0'": u'\u6b63\u5e38', "'2'": u'\u7ec4\u5408\u884d\u751f', "'3'": u'\u7ec4\u5408\u62a5\u5355'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'nCount', 'UserID', 'OrderType']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('nCount', u'报单个数'),('UserID', u'用户代码'),('OrderType', u'报单类型')]])
    def getval(self, n):
        if n in ['OrderType']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcInputOrderActionField:
    def __init__(self, InstrumentID="", ExchangeID="", ActionFlag='0', OrderActionRef=0, UserID="", LimitPrice=0, OrderRef="", InvestorID="", SessionID=0, VolumeChange=0, BrokerID="", RequestID=0, OrderSysID="", FrontID=0):
        self.InstrumentID=InstrumentID
        self.ExchangeID=ExchangeID
        self.ActionFlag=ActionFlag
        self.OrderActionRef=OrderActionRef
        self.UserID=UserID
        self.LimitPrice=LimitPrice
        self.OrderRef=OrderRef
        self.InvestorID=InvestorID
        self.SessionID=SessionID
        self.VolumeChange=VolumeChange
        self.BrokerID=BrokerID
        self.RequestID=RequestID
        self.OrderSysID=OrderSysID
        self.FrontID=FrontID
        self.vcmap={'ActionFlag': {"'0'": u'\u5220\u9664', "'3'": u'\u4fee\u6539'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'ExchangeID', 'ActionFlag', 'OrderActionRef', 'UserID', 'LimitPrice', 'OrderRef', 'InvestorID', 'SessionID', 'VolumeChange', 'BrokerID', 'RequestID', 'OrderSysID', 'FrontID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('ExchangeID', u'交易所代码'),('ActionFlag', u'操作标志'),('OrderActionRef', u'报单操作引用'),('UserID', u'用户代码'),('LimitPrice', u'价格'),('OrderRef', u'报单引用'),('InvestorID', u'投资者代码'),('SessionID', u'会话编号'),('VolumeChange', u'数量变化'),('BrokerID', u'经纪公司代码'),('RequestID', u'请求编号'),('OrderSysID', u'报单编号'),('FrontID', u'前置编号')]])
    def getval(self, n):
        if n in ['ActionFlag']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcInvestorPositionCombineDetailField:
    def __init__(self, InstrumentID="", ExchangeID="", MarginRateByVolume=0, ComTradeID="", SettlementID=0, InvestorID="", TotalAmt=0, Margin=0, ExchMargin=0, LegMultiple=0, HedgeFlag='1', TradeID="", LegID=0, TradingDay="", MarginRateByMoney=0, Direction='0', BrokerID="", CombInstrumentID="", OpenDate=""):
        self.InstrumentID=InstrumentID
        self.ExchangeID=ExchangeID
        self.MarginRateByVolume=MarginRateByVolume
        self.ComTradeID=ComTradeID
        self.SettlementID=SettlementID
        self.InvestorID=InvestorID
        self.TotalAmt=TotalAmt
        self.Margin=Margin
        self.ExchMargin=ExchMargin
        self.LegMultiple=LegMultiple
        self.HedgeFlag=HedgeFlag
        self.TradeID=TradeID
        self.LegID=LegID
        self.TradingDay=TradingDay
        self.MarginRateByMoney=MarginRateByMoney
        self.Direction=Direction
        self.BrokerID=BrokerID
        self.CombInstrumentID=CombInstrumentID
        self.OpenDate=OpenDate
        self.vcmap={'Direction': {"'1'": u'\u5356', "'0'": u'\u4e70'}, 'HedgeFlag': {"'1'": u'\u6295\u673a', "'2'": u'\u5957\u5229', "'3'": u'\u5957\u4fdd'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'ExchangeID', 'MarginRateByVolume', 'ComTradeID', 'SettlementID', 'InvestorID', 'TotalAmt', 'Margin', 'ExchMargin', 'LegMultiple', 'HedgeFlag', 'TradeID', 'LegID', 'TradingDay', 'MarginRateByMoney', 'Direction', 'BrokerID', 'CombInstrumentID', 'OpenDate']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('ExchangeID', u'交易所代码'),('MarginRateByVolume', u'保证金率(按手数)'),('ComTradeID', u'组合编号'),('SettlementID', u'结算编号'),('InvestorID', u'投资者代码'),('TotalAmt', u'持仓量'),('Margin', u'投资者保证金'),('ExchMargin', u'交易所保证金'),('LegMultiple', u'单腿乘数'),('HedgeFlag', u'投机套保标志'),('TradeID', u'撮合编号'),('LegID', u'单腿编号'),('TradingDay', u'交易日'),('MarginRateByMoney', u'保证金率'),('Direction', u'买卖'),('BrokerID', u'经纪公司代码'),('CombInstrumentID', u'组合持仓合约编码'),('OpenDate', u'开仓日期')]])
    def getval(self, n):
        if n in ['HedgeFlag', 'Direction']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryBrokerUserFunctionField:
    def __init__(self, UserID="", BrokerID=""):
        self.UserID=UserID
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserID', u'用户代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcParkedOrderField:
    def __init__(self, ContingentCondition='1', CombOffsetFlag="", UserID="", LimitPrice=0, UserForceClose=0, Status='1', Direction='0', UserType='0', VolumeTotalOriginal=0, OrderPriceType='1', TimeCondition='1', IsAutoSuspend=0, StopPrice=0, InstrumentID="", ExchangeID="", MinVolume=0, ForceCloseReason='0', ErrorID=0, ParkedOrderID="", BrokerID="", CombHedgeFlag="", GTDDate="", BusinessUnit="", ErrorMsg="", OrderRef="", InvestorID="", VolumeCondition='1', RequestID=0):
        self.ContingentCondition=ContingentCondition
        self.CombOffsetFlag=CombOffsetFlag
        self.UserID=UserID
        self.LimitPrice=LimitPrice
        self.UserForceClose=UserForceClose
        self.Status=Status
        self.Direction=Direction
        self.UserType=UserType
        self.VolumeTotalOriginal=VolumeTotalOriginal
        self.OrderPriceType=OrderPriceType
        self.TimeCondition=TimeCondition
        self.IsAutoSuspend=IsAutoSuspend
        self.StopPrice=StopPrice
        self.InstrumentID=InstrumentID
        self.ExchangeID=ExchangeID
        self.MinVolume=MinVolume
        self.ForceCloseReason=ForceCloseReason
        self.ErrorID=ErrorID
        self.ParkedOrderID=ParkedOrderID
        self.BrokerID=BrokerID
        self.CombHedgeFlag=CombHedgeFlag
        self.GTDDate=GTDDate
        self.BusinessUnit=BusinessUnit
        self.ErrorMsg=ErrorMsg
        self.OrderRef=OrderRef
        self.InvestorID=InvestorID
        self.VolumeCondition=VolumeCondition
        self.RequestID=RequestID
        self.vcmap={'Status': {"'1'": u'\u672a\u53d1\u9001', "'2'": u'\u5df2\u53d1\u9001', "'3'": u'\u5df2\u5220\u9664'}, 'ContingentCondition': {"'9'": u'\u5356\u4e00\u4ef7\u5927\u4e8e\u6761\u4ef6\u4ef7', "'B'": u'\u5356\u4e00\u4ef7\u5c0f\u4e8e\u6761\u4ef6\u4ef7', "'7'": u'\u6700\u65b0\u4ef7\u5c0f\u4e8e\u6761\u4ef6\u4ef7', "'8'": u'\u6700\u65b0\u4ef7\u5c0f\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'5'": u'\u6700\u65b0\u4ef7\u5927\u4e8e\u6761\u4ef6\u4ef7', "'C'": u'\u5356\u4e00\u4ef7\u5c0f\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'4'": u'\u9884\u57cb\u5355', "'1'": u'\u7acb\u5373', "'6'": u'\u6700\u65b0\u4ef7\u5927\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'2'": u'\u6b62\u635f', "'H'": u'\u4e70\u4e00\u4ef7\u5c0f\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'E'": u'\u4e70\u4e00\u4ef7\u5927\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'3'": u'\u6b62\u8d62', "'D'": u'\u4e70\u4e00\u4ef7\u5927\u4e8e\u6761\u4ef6\u4ef7', "'A'": u'\u5356\u4e00\u4ef7\u5927\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'F'": u'\u4e70\u4e00\u4ef7\u5c0f\u4e8e\u6761\u4ef6\u4ef7'}, 'Direction': {"'1'": u'\u5356', "'0'": u'\u4e70'}, 'UserType': {"'1'": u'\u64cd\u4f5c\u5458', "'2'": u'\u7ba1\u7406\u5458', "'0'": u'\u6295\u8d44\u8005'}, 'ForceCloseReason': {"'7'": u'\u81ea\u7136\u4eba\u4e34\u8fd1\u4ea4\u5272', "'5'": u'\u8fdd\u89c4', "'4'": u'\u6301\u4ed3\u975e\u6574\u6570\u500d', "'1'": u'\u8d44\u91d1\u4e0d\u8db3', "'0'": u'\u975e\u5f3a\u5e73', "'6'": u'\u5176\u5b83', "'2'": u'\u5ba2\u6237\u8d85\u4ed3', "'3'": u'\u4f1a\u5458\u8d85\u4ed3'}, 'OrderPriceType': {"'9'": u'\u5356\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e1\u4e2aticks', "'B'": u'\u5356\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e3\u4e2aticks', "'7'": u'\u6700\u65b0\u4ef7\u6d6e\u52a8\u4e0a\u6d6e3\u4e2aticks', "'8'": u'\u5356\u4e00\u4ef7', "'5'": u'\u6700\u65b0\u4ef7\u6d6e\u52a8\u4e0a\u6d6e1\u4e2aticks', "'C'": u'\u4e70\u4e00\u4ef7', "'4'": u'\u6700\u65b0\u4ef7', "'1'": u'\u4efb\u610f\u4ef7', "'6'": u'\u6700\u65b0\u4ef7\u6d6e\u52a8\u4e0a\u6d6e2\u4e2aticks', "'2'": u'\u9650\u4ef7', "'E'": u'\u4e70\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e2\u4e2aticks', "'3'": u'\u6700\u4f18\u4ef7', "'D'": u'\u4e70\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e1\u4e2aticks', "'A'": u'\u5356\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e2\u4e2aticks', "'F'": u'\u4e70\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e3\u4e2aticks'}, 'VolumeCondition': {"'1'": u'\u4efb\u4f55\u6570\u91cf', "'2'": u'\u6700\u5c0f\u6570\u91cf', "'3'": u'\u5168\u90e8\u6570\u91cf'}, 'TimeCondition': {"'5'": u'\u64a4\u9500\u524d\u6709\u6548', "'4'": u'\u6307\u5b9a\u65e5\u671f\u524d\u6709\u6548', "'1'": u'\u7acb\u5373\u5b8c\u6210\uff0c\u5426\u5219\u64a4\u9500', "'6'": u'\u96c6\u5408\u7ade\u4ef7\u6709\u6548', "'2'": u'\u672c\u8282\u6709\u6548', "'3'": u'\u5f53\u65e5\u6709\u6548'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ContingentCondition', 'CombOffsetFlag', 'UserID', 'LimitPrice', 'UserForceClose', 'Status', 'Direction', 'UserType', 'VolumeTotalOriginal', 'OrderPriceType', 'TimeCondition', 'IsAutoSuspend', 'StopPrice', 'InstrumentID', 'ExchangeID', 'MinVolume', 'ForceCloseReason', 'ErrorID', 'ParkedOrderID', 'BrokerID', 'CombHedgeFlag', 'GTDDate', 'BusinessUnit', 'ErrorMsg', 'OrderRef', 'InvestorID', 'VolumeCondition', 'RequestID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ContingentCondition', u'触发条件'),('CombOffsetFlag', u'组合开平标志'),('UserID', u'用户代码'),('LimitPrice', u'价格'),('UserForceClose', u'用户强评标志'),('Status', u'预埋单状态'),('Direction', u'买卖方向'),('UserType', u'用户类型'),('VolumeTotalOriginal', u'数量'),('OrderPriceType', u'报单价格条件'),('TimeCondition', u'有效期类型'),('IsAutoSuspend', u'自动挂起标志'),('StopPrice', u'止损价'),('InstrumentID', u'合约代码'),('ExchangeID', u'交易所代码'),('MinVolume', u'最小成交量'),('ForceCloseReason', u'强平原因'),('ErrorID', u'错误代码'),('ParkedOrderID', u'预埋报单编号'),('BrokerID', u'经纪公司代码'),('CombHedgeFlag', u'组合投机套保标志'),('GTDDate', u'GTD日期'),('BusinessUnit', u'业务单元'),('ErrorMsg', u'错误信息'),('OrderRef', u'报单引用'),('InvestorID', u'投资者代码'),('VolumeCondition', u'成交量类型'),('RequestID', u'请求编号')]])
    def getval(self, n):
        if n in ['ContingentCondition', 'Status', 'Direction', 'UserType', 'OrderPriceType', 'TimeCondition', 'ForceCloseReason', 'VolumeCondition']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcBrokerUserRightAssignField:
    def __init__(self, DRIdentityID=0, BrokerID="", Tradeable=0):
        self.DRIdentityID=DRIdentityID
        self.BrokerID=BrokerID
        self.Tradeable=Tradeable
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['DRIdentityID', 'BrokerID', 'Tradeable']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('DRIdentityID', u'交易中心代码'),('BrokerID', u'应用单元代码'),('Tradeable', u'能否交易')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CTKSConditionalOrderOperResultField:
    def __init__(self, ConditionalOrderStatus='0', CombOffsetFlag='0', UserID="", LimitPrice=0, Direction='0', ActiveTime="", TriggeredTimes=0, Memo="", ClientID="", OrderPriceType='1', OrderStatus='0', InstrumentID="", ExchangeID="", OrderType='0', TradingDay="", BrokerID="", CombHedgeFlag='1', CancelTime="", OrderLocalID="", ErrorMsg="", InvestorID="", InActiveTime="", ConditionalOrderID=0, VolumeTotalOriginal=0):
        self.ConditionalOrderStatus=ConditionalOrderStatus
        self.CombOffsetFlag=CombOffsetFlag
        self.UserID=UserID
        self.LimitPrice=LimitPrice
        self.Direction=Direction
        self.ActiveTime=ActiveTime
        self.TriggeredTimes=TriggeredTimes
        self.Memo=Memo
        self.ClientID=ClientID
        self.OrderPriceType=OrderPriceType
        self.OrderStatus=OrderStatus
        self.InstrumentID=InstrumentID
        self.ExchangeID=ExchangeID
        self.OrderType=OrderType
        self.TradingDay=TradingDay
        self.BrokerID=BrokerID
        self.CombHedgeFlag=CombHedgeFlag
        self.CancelTime=CancelTime
        self.OrderLocalID=OrderLocalID
        self.ErrorMsg=ErrorMsg
        self.InvestorID=InvestorID
        self.InActiveTime=InActiveTime
        self.ConditionalOrderID=ConditionalOrderID
        self.VolumeTotalOriginal=VolumeTotalOriginal
        self.vcmap={'CombHedgeFlag': {"'1'": u'\u6295\u673a', "'2'": u'\u5957\u5229', "'3'": u'\u5957\u4fdd'}, 'Direction': {"'1'": u'\u5356', "'0'": u'\u4e70'}, 'ConditionalOrderStatus': {"'7'": u'\u9009\u62e9\u8df3\u8fc7', "'8'": u'\u9009\u62e9\u7ec8\u6b62', "'5'": u'\u53d1\u9001\u6210\u529f', "'4'": u'\u53d1\u9001\u8d85\u65f6', "'1'": u'\u672a\u89e6\u53d1', "'0'": u'\u6682\u505c', "'6'": u'\u7b49\u5f85\u9009\u62e9', "'2'": u'\u5220\u9664', "'3'": u'\u5df2\u89e6\u53d1\u672a\u53d1\u9001'}, 'OrderType': {"'1'": u'\u5f00\u76d8\u89e6\u53d1', "'2'": u'\u65f6\u95f4\u89e6\u53d1', "'0'": u'\u884c\u60c5\u89e6\u53d1', "'5'": u'\u884c\u60c5\u548c\u65f6\u95f4\u89e6\u53d1'}, 'CombOffsetFlag': {"'5'": u'\u5f3a\u51cf', "'4'": u'\u5e73\u6628', "'1'": u'\u5e73\u4ed3', "'0'": u'\u5f00\u4ed3', "'6'": u'\u672c\u5730\u5f3a\u5e73', "'2'": u'\u5f3a\u5e73', "'3'": u'\u5e73\u4eca'}, 'OrderPriceType': {"'9'": u'\u5356\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e1\u4e2aticks', "'B'": u'\u5356\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e3\u4e2aticks', "'7'": u'\u6700\u65b0\u4ef7\u6d6e\u52a8\u4e0a\u6d6e3\u4e2aticks', "'8'": u'\u5356\u4e00\u4ef7', "'5'": u'\u6700\u65b0\u4ef7\u6d6e\u52a8\u4e0a\u6d6e1\u4e2aticks', "'C'": u'\u4e70\u4e00\u4ef7', "'4'": u'\u6700\u65b0\u4ef7', "'1'": u'\u4efb\u610f\u4ef7', "'6'": u'\u6700\u65b0\u4ef7\u6d6e\u52a8\u4e0a\u6d6e2\u4e2aticks', "'2'": u'\u9650\u4ef7', "'E'": u'\u4e70\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e2\u4e2aticks', "'3'": u'\u6700\u4f18\u4ef7', "'D'": u'\u4e70\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e1\u4e2aticks', "'A'": u'\u5356\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e2\u4e2aticks', "'F'": u'\u4e70\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e3\u4e2aticks'}, 'OrderStatus': {"'b'": u'\u5c1a\u672a\u89e6\u53d1', "'5'": u'\u64a4\u5355', "'c'": u'\u5df2\u89e6\u53d1', "'4'": u'\u672a\u6210\u4ea4\u4e0d\u5728\u961f\u5217\u4e2d', "'1'": u'\u90e8\u5206\u6210\u4ea4\u8fd8\u5728\u961f\u5217\u4e2d', "'0'": u'\u5168\u90e8\u6210\u4ea4', "'2'": u'\u90e8\u5206\u6210\u4ea4\u4e0d\u5728\u961f\u5217\u4e2d', "'3'": u'\u672a\u6210\u4ea4\u8fd8\u5728\u961f\u5217\u4e2d', "'a'": u'\u672a\u77e5'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ConditionalOrderStatus', 'CombOffsetFlag', 'UserID', 'LimitPrice', 'Direction', 'ActiveTime', 'TriggeredTimes', 'Memo', 'ClientID', 'OrderPriceType', 'OrderStatus', 'InstrumentID', 'ExchangeID', 'OrderType', 'TradingDay', 'BrokerID', 'CombHedgeFlag', 'CancelTime', 'OrderLocalID', 'ErrorMsg', 'InvestorID', 'InActiveTime', 'ConditionalOrderID', 'VolumeTotalOriginal']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ConditionalOrderStatus', u'条件单状态'),('CombOffsetFlag', u'开平标志'),('UserID', u'撤销用户'),('LimitPrice', u'价格'),('Direction', u'买卖方向'),('ActiveTime', u'有效时间'),('TriggeredTimes', u'触发次数'),('Memo', u'备注'),('ClientID', u'客户代码'),('OrderPriceType', u'价格类别'),('OrderStatus', u'报单状态'),('InstrumentID', u'合约代码'),('ExchangeID', u'交易所代码'),('OrderType', u'条件单类型'),('TradingDay', u'交易日'),('BrokerID', u'营业部代码'),('CombHedgeFlag', u'投机套保标志'),('CancelTime', u'撤销时间'),('OrderLocalID', u'本地报单编号'),('ErrorMsg', u'错误信息'),('InvestorID', u'投资者代码'),('InActiveTime', u'失效时间'),('ConditionalOrderID', u'条件单编号'),('VolumeTotalOriginal', u'数量')]])
    def getval(self, n):
        if n in ['ConditionalOrderStatus', 'CombOffsetFlag', 'Direction', 'OrderPriceType', 'OrderStatus', 'OrderType', 'CombHedgeFlag']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcOrderActionField:
    def __init__(self, ActionTime="", InvestorID="", TraderID="", UserID="", LimitPrice=0, OrderActionStatus='a', InstallID=0, ParticipantID="", OrderActionRef=0, VolumeChange=0, SessionID=0, ActionFlag='0', InstrumentID="", ExchangeID="", StatusMsg="", OrderSysID="", BrokerID="", ClientID="", ActionDate="", OrderLocalID="", BusinessUnit="", OrderRef="", ActionLocalID="", RequestID=0, FrontID=0):
        self.ActionTime=ActionTime
        self.InvestorID=InvestorID
        self.TraderID=TraderID
        self.UserID=UserID
        self.LimitPrice=LimitPrice
        self.OrderActionStatus=OrderActionStatus
        self.InstallID=InstallID
        self.ParticipantID=ParticipantID
        self.OrderActionRef=OrderActionRef
        self.VolumeChange=VolumeChange
        self.SessionID=SessionID
        self.ActionFlag=ActionFlag
        self.InstrumentID=InstrumentID
        self.ExchangeID=ExchangeID
        self.StatusMsg=StatusMsg
        self.OrderSysID=OrderSysID
        self.BrokerID=BrokerID
        self.ClientID=ClientID
        self.ActionDate=ActionDate
        self.OrderLocalID=OrderLocalID
        self.BusinessUnit=BusinessUnit
        self.OrderRef=OrderRef
        self.ActionLocalID=ActionLocalID
        self.RequestID=RequestID
        self.FrontID=FrontID
        self.vcmap={'OrderActionStatus': {"'a'": u'\u5df2\u7ecf\u63d0\u4ea4', "'b'": u'\u5df2\u7ecf\u63a5\u53d7', "'c'": u'\u5df2\u7ecf\u88ab\u62d2\u7edd'}, 'ActionFlag': {"'0'": u'\u5220\u9664', "'3'": u'\u4fee\u6539'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ActionTime', 'InvestorID', 'TraderID', 'UserID', 'LimitPrice', 'OrderActionStatus', 'InstallID', 'ParticipantID', 'OrderActionRef', 'VolumeChange', 'SessionID', 'ActionFlag', 'InstrumentID', 'ExchangeID', 'StatusMsg', 'OrderSysID', 'BrokerID', 'ClientID', 'ActionDate', 'OrderLocalID', 'BusinessUnit', 'OrderRef', 'ActionLocalID', 'RequestID', 'FrontID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ActionTime', u'操作时间'),('InvestorID', u'投资者代码'),('TraderID', u'交易所交易员代码'),('UserID', u'用户代码'),('LimitPrice', u'价格'),('OrderActionStatus', u'报单操作状态'),('InstallID', u'安装编号'),('ParticipantID', u'会员代码'),('OrderActionRef', u'报单操作引用'),('VolumeChange', u'数量变化'),('SessionID', u'会话编号'),('ActionFlag', u'操作标志'),('InstrumentID', u'合约代码'),('ExchangeID', u'交易所代码'),('StatusMsg', u'状态信息'),('OrderSysID', u'报单编号'),('BrokerID', u'经纪公司代码'),('ClientID', u'客户代码'),('ActionDate', u'操作日期'),('OrderLocalID', u'本地报单编号'),('BusinessUnit', u'业务单元'),('OrderRef', u'报单引用'),('ActionLocalID', u'操作本地编号'),('RequestID', u'请求编号'),('FrontID', u'前置编号')]])
    def getval(self, n):
        if n in ['OrderActionStatus', 'ActionFlag']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcPartBrokerField:
    def __init__(self, ExchangeID="", BrokerID="", ParticipantID="", IsActive=0):
        self.ExchangeID=ExchangeID
        self.BrokerID=BrokerID
        self.ParticipantID=ParticipantID
        self.IsActive=IsActive
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeID', 'BrokerID', 'ParticipantID', 'IsActive']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeID', u'交易所代码'),('BrokerID', u'经纪公司代码'),('ParticipantID', u'会员代码'),('IsActive', u'是否活跃')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcReqOpenAccountField:
    def __init__(self, MoneyAccountStatus='0', BrokerBranchID="", BankPassWord="", Telephone="", IdentifiedCardNo="", VerifyCertNoFlag='0', TID=0, AccountID="", BankAccount="", Fax="", InstallID=0, SecuPwdFlag='0', CustomerName="", CountryCode="", TradeCode="", BankBranchID="", SessionID=0, Address="", PlateSerial=0, BankPwdFlag='0', CustType='0', Gender='0', BankID="", BankSerial="", OperNo="", TradingDay="", BankSecuAcc="", BrokerID="", CashExchangeCode='1', IdCardType='0', Password="", MobilePhone="", TradeDate="", CurrencyID="", BankAccType='1', LastFragment='0', ZipCode="", BankSecuAccType='1', BrokerIDByBank="", TradeTime="", EMail="", Digest="", DeviceID=""):
        self.MoneyAccountStatus=MoneyAccountStatus
        self.BrokerBranchID=BrokerBranchID
        self.BankPassWord=BankPassWord
        self.Telephone=Telephone
        self.IdentifiedCardNo=IdentifiedCardNo
        self.VerifyCertNoFlag=VerifyCertNoFlag
        self.TID=TID
        self.AccountID=AccountID
        self.BankAccount=BankAccount
        self.Fax=Fax
        self.InstallID=InstallID
        self.SecuPwdFlag=SecuPwdFlag
        self.CustomerName=CustomerName
        self.CountryCode=CountryCode
        self.TradeCode=TradeCode
        self.BankBranchID=BankBranchID
        self.SessionID=SessionID
        self.Address=Address
        self.PlateSerial=PlateSerial
        self.BankPwdFlag=BankPwdFlag
        self.CustType=CustType
        self.Gender=Gender
        self.BankID=BankID
        self.BankSerial=BankSerial
        self.OperNo=OperNo
        self.TradingDay=TradingDay
        self.BankSecuAcc=BankSecuAcc
        self.BrokerID=BrokerID
        self.CashExchangeCode=CashExchangeCode
        self.IdCardType=IdCardType
        self.Password=Password
        self.MobilePhone=MobilePhone
        self.TradeDate=TradeDate
        self.CurrencyID=CurrencyID
        self.BankAccType=BankAccType
        self.LastFragment=LastFragment
        self.ZipCode=ZipCode
        self.BankSecuAccType=BankSecuAccType
        self.BrokerIDByBank=BrokerIDByBank
        self.TradeTime=TradeTime
        self.EMail=EMail
        self.Digest=Digest
        self.DeviceID=DeviceID
        self.vcmap={'CustType': {"'1'": u'\u673a\u6784\u6237', "'0'": u'\u81ea\u7136\u4eba'}, 'Gender': {"'1'": u'\u7537', "'2'": u'\u5973', "'0'": u'\u672a\u77e5\u72b6\u6001'}, 'BankPwdFlag': {"'1'": u'\u660e\u6587\u6838\u5bf9', "'2'": u'\u5bc6\u6587\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}, 'LastFragment': {"'1'": u'\u4e0d\u662f\u6700\u540e\u5206\u7247', "'0'": u'\u662f\u6700\u540e\u5206\u7247'}, 'MoneyAccountStatus': {"'1'": u'\u9500\u6237', "'0'": u'\u6b63\u5e38'}, 'SecuPwdFlag': {"'1'": u'\u660e\u6587\u6838\u5bf9', "'2'": u'\u5bc6\u6587\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}, 'CashExchangeCode': {"'1'": u'\u6c47', "'2'": u'\u949e'}, 'VerifyCertNoFlag': {"'1'": u'\u5426', "'0'": u'\u662f'}, 'BankAccType': {"'1'": u'\u94f6\u884c\u5b58\u6298', "'2'": u'\u50a8\u84c4\u5361', "'3'": u'\u4fe1\u7528\u5361'}, 'BankSecuAccType': {"'1'": u'\u94f6\u884c\u5b58\u6298', "'2'": u'\u50a8\u84c4\u5361', "'3'": u'\u4fe1\u7528\u5361'}, 'IdCardType': {"'9'": u'\u8425\u4e1a\u6267\u7167\u53f7', "'7'": u'\u53f0\u80de\u8bc1', "'x'": u'\u5176\u4ed6\u8bc1\u4ef6', "'5'": u'\u6237\u53e3\u7c3f', "'4'": u'\u58eb\u5175\u8bc1', "'1'": u'\u8eab\u4efd\u8bc1', "'0'": u'\u7ec4\u7ec7\u673a\u6784\u4ee3\u7801', "'6'": u'\u62a4\u7167', "'2'": u'\u519b\u5b98\u8bc1', "'8'": u'\u56de\u4e61\u8bc1', "'3'": u'\u8b66\u5b98\u8bc1', "'A'": u'\u7a0e\u52a1\u767b\u8bb0\u53f7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['MoneyAccountStatus', 'BrokerBranchID', 'BankPassWord', 'Telephone', 'IdentifiedCardNo', 'VerifyCertNoFlag', 'TID', 'AccountID', 'BankAccount', 'Fax', 'InstallID', 'SecuPwdFlag', 'CustomerName', 'CountryCode', 'TradeCode', 'BankBranchID', 'SessionID', 'Address', 'PlateSerial', 'BankPwdFlag', 'CustType', 'Gender', 'BankID', 'BankSerial', 'OperNo', 'TradingDay', 'BankSecuAcc', 'BrokerID', 'CashExchangeCode', 'IdCardType', 'Password', 'MobilePhone', 'TradeDate', 'CurrencyID', 'BankAccType', 'LastFragment', 'ZipCode', 'BankSecuAccType', 'BrokerIDByBank', 'TradeTime', 'EMail', 'Digest', 'DeviceID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('MoneyAccountStatus', u'资金账户状态'),('BrokerBranchID', u'期商分支机构代码'),('BankPassWord', u'银行密码'),('Telephone', u'电话号码'),('IdentifiedCardNo', u'证件号码'),('VerifyCertNoFlag', u'验证客户证件号码标志'),('TID', u'交易ID'),('AccountID', u'投资者帐号'),('BankAccount', u'银行帐号'),('Fax', u'传真'),('InstallID', u'安装编号'),('SecuPwdFlag', u'期货资金密码核对标志'),('CustomerName', u'客户姓名'),('CountryCode', u'国家代码'),('TradeCode', u'业务功能码'),('BankBranchID', u'银行分支机构代码'),('SessionID', u'会话号'),('Address', u'地址'),('PlateSerial', u'银期平台消息流水号'),('BankPwdFlag', u'银行密码标志'),('CustType', u'客户类型'),('Gender', u'性别'),('BankID', u'银行代码'),('BankSerial', u'银行流水号'),('OperNo', u'交易柜员'),('TradingDay', u'交易系统日期'),('BankSecuAcc', u'期货单位帐号'),('BrokerID', u'期商代码'),('CashExchangeCode', u'汇钞标志'),('IdCardType', u'证件类型'),('Password', u'期货密码'),('MobilePhone', u'手机'),('TradeDate', u'交易日期'),('CurrencyID', u'币种代码'),('BankAccType', u'银行帐号类型'),('LastFragment', u'最后分片标志'),('ZipCode', u'邮编'),('BankSecuAccType', u'期货单位帐号类型'),('BrokerIDByBank', u'期货公司银行编码'),('TradeTime', u'交易时间'),('EMail', u'电子邮件'),('Digest', u'摘要'),('DeviceID', u'渠道标志')]])
    def getval(self, n):
        if n in ['MoneyAccountStatus', 'VerifyCertNoFlag', 'SecuPwdFlag', 'BankPwdFlag', 'CustType', 'Gender', 'CashExchangeCode', 'IdCardType', 'BankAccType', 'LastFragment', 'BankSecuAccType']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcVerifyInvestorPasswordField:
    def __init__(self, InvestorID="", Password="", BrokerID=""):
        self.InvestorID=InvestorID
        self.Password=Password
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'Password', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('Password', u'密码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CTKSProfitAndLossOrderRemoveField:
    def __init__(self, InvestorID="", BrokerID="", ProfitAndLossOrderID=0):
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.ProfitAndLossOrderID=ProfitAndLossOrderID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'ProfitAndLossOrderID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'营业部代码'),('ProfitAndLossOrderID', u'止损止盈单号')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQueryBrokerDepositField:
    def __init__(self, ExchangeID="", BrokerID=""):
        self.ExchangeID=ExchangeID
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeID', u'交易所代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcSuperUserField:
    def __init__(self, UserName="", Password="", UserID="", IsActive=0):
        self.UserName=UserName
        self.Password=Password
        self.UserID=UserID
        self.IsActive=IsActive
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserName', 'Password', 'UserID', 'IsActive']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserName', u'用户名称'),('Password', u'密码'),('UserID', u'用户代码'),('IsActive', u'是否活跃')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryProductField:
    def __init__(self, ProductID=""):
        self.ProductID=ProductID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ProductID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ProductID', u'产品代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcInvestorField:
    def __init__(self, CommModelID="", InvestorName="", Mobile="", IdentifiedCardNo="", Telephone="", InvestorID="", BrokerID="", Address="", InvestorGroupID="", OpenDate="", IsActive=0, IdentifiedCardType='0'):
        self.CommModelID=CommModelID
        self.InvestorName=InvestorName
        self.Mobile=Mobile
        self.IdentifiedCardNo=IdentifiedCardNo
        self.Telephone=Telephone
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.Address=Address
        self.InvestorGroupID=InvestorGroupID
        self.OpenDate=OpenDate
        self.IsActive=IsActive
        self.IdentifiedCardType=IdentifiedCardType
        self.vcmap={'IdentifiedCardType': {"'9'": u'\u8425\u4e1a\u6267\u7167\u53f7', "'7'": u'\u53f0\u80de\u8bc1', "'x'": u'\u5176\u4ed6\u8bc1\u4ef6', "'5'": u'\u6237\u53e3\u7c3f', "'4'": u'\u58eb\u5175\u8bc1', "'1'": u'\u8eab\u4efd\u8bc1', "'0'": u'\u7ec4\u7ec7\u673a\u6784\u4ee3\u7801', "'6'": u'\u62a4\u7167', "'2'": u'\u519b\u5b98\u8bc1', "'8'": u'\u56de\u4e61\u8bc1', "'3'": u'\u8b66\u5b98\u8bc1', "'A'": u'\u7a0e\u52a1\u767b\u8bb0\u53f7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['CommModelID', 'InvestorName', 'Mobile', 'IdentifiedCardNo', 'Telephone', 'InvestorID', 'BrokerID', 'Address', 'InvestorGroupID', 'OpenDate', 'IsActive', 'IdentifiedCardType']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('CommModelID', u'手续费率模板代码'),('InvestorName', u'投资者名称'),('Mobile', u'手机'),('IdentifiedCardNo', u'证件号码'),('Telephone', u'联系电话'),('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('Address', u'通讯地址'),('InvestorGroupID', u'投资者分组代码'),('OpenDate', u'开户日期'),('IsActive', u'是否活跃'),('IdentifiedCardType', u'证件类型')]])
    def getval(self, n):
        if n in ['IdentifiedCardType']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcSyncStatusField:
    def __init__(self, TradingDay="", DataSyncStatus='1'):
        self.TradingDay=TradingDay
        self.DataSyncStatus=DataSyncStatus
        self.vcmap={'DataSyncStatus': {"'1'": u'\u672a\u540c\u6b65', "'2'": u'\u540c\u6b65\u4e2d', "'3'": u'\u5df2\u540c\u6b65'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'DataSyncStatus']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易日'),('DataSyncStatus', u'数据同步状态')]])
    def getval(self, n):
        if n in ['DataSyncStatus']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcInstrumentTradingRightField:
    def __init__(self, InstrumentID="", InvestorID="", BrokerID="", InvestorRange='1', TradingRight='0'):
        self.InstrumentID=InstrumentID
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.InvestorRange=InvestorRange
        self.TradingRight=TradingRight
        self.vcmap={'InvestorRange': {"'1'": u'\u6240\u6709', "'2'": u'\u6295\u8d44\u8005\u7ec4', "'3'": u'\u5355\u4e00\u6295\u8d44\u8005'}, 'TradingRight': {"'1'": u'\u53ea\u80fd\u5e73\u4ed3', "'2'": u'\u4e0d\u80fd\u4ea4\u6613', "'0'": u'\u53ef\u4ee5\u4ea4\u6613'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'InvestorID', 'BrokerID', 'InvestorRange', 'TradingRight']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('InvestorRange', u'投资者范围'),('TradingRight', u'交易权限')]])
    def getval(self, n):
        if n in ['InvestorRange', 'TradingRight']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcTransferQryBankRspField:
    def __init__(self, FutureAccount="", RetCode="", CurrencyCode="", TradeAmt=0, UseAmt=0, RetInfo="", FetchAmt=0):
        self.FutureAccount=FutureAccount
        self.RetCode=RetCode
        self.CurrencyCode=CurrencyCode
        self.TradeAmt=TradeAmt
        self.UseAmt=UseAmt
        self.RetInfo=RetInfo
        self.FetchAmt=FetchAmt
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['FutureAccount', 'RetCode', 'CurrencyCode', 'TradeAmt', 'UseAmt', 'RetInfo', 'FetchAmt']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('FutureAccount', u'资金账户'),('RetCode', u'响应代码'),('CurrencyCode', u'币种'),('TradeAmt', u'银行余额'),('UseAmt', u'银行可用余额'),('RetInfo', u'响应信息'),('FetchAmt', u'银行可取余额')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcAccountregisterField:
    def __init__(self, BankAccount="", CustType='0', CustomerName="", CurrencyID="", BrokerBranchID="", OutDate="", IdentifiedCardNo="", BankBranchID="", RegDate="", BrokerID="", BankID="", TID=0, OpenOrDestroy='1', IdCardType='0', TradeDay="", BankAccType='1', AccountID=""):
        self.BankAccount=BankAccount
        self.CustType=CustType
        self.CustomerName=CustomerName
        self.CurrencyID=CurrencyID
        self.BrokerBranchID=BrokerBranchID
        self.OutDate=OutDate
        self.IdentifiedCardNo=IdentifiedCardNo
        self.BankBranchID=BankBranchID
        self.RegDate=RegDate
        self.BrokerID=BrokerID
        self.BankID=BankID
        self.TID=TID
        self.OpenOrDestroy=OpenOrDestroy
        self.IdCardType=IdCardType
        self.TradeDay=TradeDay
        self.BankAccType=BankAccType
        self.AccountID=AccountID
        self.vcmap={'CustType': {"'1'": u'\u673a\u6784\u6237', "'0'": u'\u81ea\u7136\u4eba'}, 'OpenOrDestroy': {"'1'": u'\u5f00\u6237', "'0'": u'\u9500\u6237'}, 'BankAccType': {"'1'": u'\u94f6\u884c\u5b58\u6298', "'2'": u'\u50a8\u84c4\u5361', "'3'": u'\u4fe1\u7528\u5361'}, 'IdCardType': {"'9'": u'\u8425\u4e1a\u6267\u7167\u53f7', "'7'": u'\u53f0\u80de\u8bc1', "'x'": u'\u5176\u4ed6\u8bc1\u4ef6', "'5'": u'\u6237\u53e3\u7c3f', "'4'": u'\u58eb\u5175\u8bc1', "'1'": u'\u8eab\u4efd\u8bc1', "'0'": u'\u7ec4\u7ec7\u673a\u6784\u4ee3\u7801', "'6'": u'\u62a4\u7167', "'2'": u'\u519b\u5b98\u8bc1', "'8'": u'\u56de\u4e61\u8bc1', "'3'": u'\u8b66\u5b98\u8bc1', "'A'": u'\u7a0e\u52a1\u767b\u8bb0\u53f7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BankAccount', 'CustType', 'CustomerName', 'CurrencyID', 'BrokerBranchID', 'OutDate', 'IdentifiedCardNo', 'BankBranchID', 'RegDate', 'BrokerID', 'BankID', 'TID', 'OpenOrDestroy', 'IdCardType', 'TradeDay', 'BankAccType', 'AccountID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BankAccount', u'银行帐号'),('CustType', u'客户类型'),('CustomerName', u'客户姓名'),('CurrencyID', u'币种代码'),('BrokerBranchID', u'期货公司分支机构编码'),('OutDate', u'解约日期'),('IdentifiedCardNo', u'证件号码'),('BankBranchID', u'银行分支机构编码'),('RegDate', u'签约日期'),('BrokerID', u'期货公司编码'),('BankID', u'银行编码'),('TID', u'交易ID'),('OpenOrDestroy', u'开销户类别'),('IdCardType', u'证件类型'),('TradeDay', u'交易日期'),('BankAccType', u'银行帐号类型'),('AccountID', u'投资者帐号')]])
    def getval(self, n):
        if n in ['CustType', 'OpenOrDestroy', 'IdCardType', 'BankAccType']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcBrokerDepositField:
    def __init__(self, Available=0, ExchangeID="", ParticipantID="", FrozenMargin=0, PreBalance=0, CurrMargin=0, TradingDay="", BrokerID="", Deposit=0, Withdraw=0, CloseProfit=0, Balance=0, Reserve=0):
        self.Available=Available
        self.ExchangeID=ExchangeID
        self.ParticipantID=ParticipantID
        self.FrozenMargin=FrozenMargin
        self.PreBalance=PreBalance
        self.CurrMargin=CurrMargin
        self.TradingDay=TradingDay
        self.BrokerID=BrokerID
        self.Deposit=Deposit
        self.Withdraw=Withdraw
        self.CloseProfit=CloseProfit
        self.Balance=Balance
        self.Reserve=Reserve
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['Available', 'ExchangeID', 'ParticipantID', 'FrozenMargin', 'PreBalance', 'CurrMargin', 'TradingDay', 'BrokerID', 'Deposit', 'Withdraw', 'CloseProfit', 'Balance', 'Reserve']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('Available', u'可提资金'),('ExchangeID', u'交易所代码'),('ParticipantID', u'会员代码'),('FrozenMargin', u'冻结的保证金'),('PreBalance', u'上次结算准备金'),('CurrMargin', u'当前保证金总额'),('TradingDay', u'交易日期'),('BrokerID', u'经纪公司代码'),('Deposit', u'入金金额'),('Withdraw', u'出金金额'),('CloseProfit', u'平仓盈亏'),('Balance', u'期货结算准备金'),('Reserve', u'基本准备金')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcErrorConditionalOrderField:
    def __init__(self, ContingentCondition='1', NotifySequence=0, ActiveUserID="", VolumeTraded=0, UserProductInfo="", CombOffsetFlag="", TraderID="", UserID="", LimitPrice=0, UserForceClose=0, RelativeOrderSysID="", Direction='0', InstallID=0, ParticipantID="", VolumeTotalOriginal=0, ExchangeInstID="", ClientID="", VolumeTotal=0, OrderPriceType='1', SessionID=0, TimeCondition='1', OrderStatus='0', OrderSysID="", OrderSubmitStatus='0', IsAutoSuspend=0, StopPrice=0, InstrumentID="", ExchangeID="", MinVolume=0, StatusMsg="", SettlementID=0, ForceCloseReason='0', OrderType='0', ErrorID=0, UpdateTime="", TradingDay="", ActiveTime="", BrokerID="", InsertTime="", FrontID=0, SuspendTime="", ClearingPartID="", CombHedgeFlag="", CancelTime="", GTDDate="", OrderLocalID="", BusinessUnit="", InsertDate="", SequenceNo=0, OrderRef="", BrokerOrderSeq=0, InvestorID="", VolumeCondition='1', RequestID=0, ErrorMsg="", OrderSource='0', ActiveTraderID=""):
        self.ContingentCondition=ContingentCondition
        self.NotifySequence=NotifySequence
        self.ActiveUserID=ActiveUserID
        self.VolumeTraded=VolumeTraded
        self.UserProductInfo=UserProductInfo
        self.CombOffsetFlag=CombOffsetFlag
        self.TraderID=TraderID
        self.UserID=UserID
        self.LimitPrice=LimitPrice
        self.UserForceClose=UserForceClose
        self.RelativeOrderSysID=RelativeOrderSysID
        self.Direction=Direction
        self.InstallID=InstallID
        self.ParticipantID=ParticipantID
        self.VolumeTotalOriginal=VolumeTotalOriginal
        self.ExchangeInstID=ExchangeInstID
        self.ClientID=ClientID
        self.VolumeTotal=VolumeTotal
        self.OrderPriceType=OrderPriceType
        self.SessionID=SessionID
        self.TimeCondition=TimeCondition
        self.OrderStatus=OrderStatus
        self.OrderSysID=OrderSysID
        self.OrderSubmitStatus=OrderSubmitStatus
        self.IsAutoSuspend=IsAutoSuspend
        self.StopPrice=StopPrice
        self.InstrumentID=InstrumentID
        self.ExchangeID=ExchangeID
        self.MinVolume=MinVolume
        self.StatusMsg=StatusMsg
        self.SettlementID=SettlementID
        self.ForceCloseReason=ForceCloseReason
        self.OrderType=OrderType
        self.ErrorID=ErrorID
        self.UpdateTime=UpdateTime
        self.TradingDay=TradingDay
        self.ActiveTime=ActiveTime
        self.BrokerID=BrokerID
        self.InsertTime=InsertTime
        self.FrontID=FrontID
        self.SuspendTime=SuspendTime
        self.ClearingPartID=ClearingPartID
        self.CombHedgeFlag=CombHedgeFlag
        self.CancelTime=CancelTime
        self.GTDDate=GTDDate
        self.OrderLocalID=OrderLocalID
        self.BusinessUnit=BusinessUnit
        self.InsertDate=InsertDate
        self.SequenceNo=SequenceNo
        self.OrderRef=OrderRef
        self.BrokerOrderSeq=BrokerOrderSeq
        self.InvestorID=InvestorID
        self.VolumeCondition=VolumeCondition
        self.RequestID=RequestID
        self.ErrorMsg=ErrorMsg
        self.OrderSource=OrderSource
        self.ActiveTraderID=ActiveTraderID
        self.vcmap={'ContingentCondition': {"'9'": u'\u5356\u4e00\u4ef7\u5927\u4e8e\u6761\u4ef6\u4ef7', "'B'": u'\u5356\u4e00\u4ef7\u5c0f\u4e8e\u6761\u4ef6\u4ef7', "'7'": u'\u6700\u65b0\u4ef7\u5c0f\u4e8e\u6761\u4ef6\u4ef7', "'8'": u'\u6700\u65b0\u4ef7\u5c0f\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'5'": u'\u6700\u65b0\u4ef7\u5927\u4e8e\u6761\u4ef6\u4ef7', "'C'": u'\u5356\u4e00\u4ef7\u5c0f\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'4'": u'\u9884\u57cb\u5355', "'1'": u'\u7acb\u5373', "'6'": u'\u6700\u65b0\u4ef7\u5927\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'2'": u'\u6b62\u635f', "'H'": u'\u4e70\u4e00\u4ef7\u5c0f\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'E'": u'\u4e70\u4e00\u4ef7\u5927\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'3'": u'\u6b62\u8d62', "'D'": u'\u4e70\u4e00\u4ef7\u5927\u4e8e\u6761\u4ef6\u4ef7', "'A'": u'\u5356\u4e00\u4ef7\u5927\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'F'": u'\u4e70\u4e00\u4ef7\u5c0f\u4e8e\u6761\u4ef6\u4ef7'}, 'Direction': {"'1'": u'\u5356', "'0'": u'\u4e70'}, 'ForceCloseReason': {"'7'": u'\u81ea\u7136\u4eba\u4e34\u8fd1\u4ea4\u5272', "'5'": u'\u8fdd\u89c4', "'4'": u'\u6301\u4ed3\u975e\u6574\u6570\u500d', "'1'": u'\u8d44\u91d1\u4e0d\u8db3', "'0'": u'\u975e\u5f3a\u5e73', "'6'": u'\u5176\u5b83', "'2'": u'\u5ba2\u6237\u8d85\u4ed3', "'3'": u'\u4f1a\u5458\u8d85\u4ed3'}, 'OrderType': {"'5'": u'\u4e92\u6362\u5355', "'4'": u'\u6761\u4ef6\u5355', "'1'": u'\u62a5\u4ef7\u884d\u751f', "'0'": u'\u6b63\u5e38', "'2'": u'\u7ec4\u5408\u884d\u751f', "'3'": u'\u7ec4\u5408\u62a5\u5355'}, 'OrderPriceType': {"'9'": u'\u5356\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e1\u4e2aticks', "'B'": u'\u5356\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e3\u4e2aticks', "'7'": u'\u6700\u65b0\u4ef7\u6d6e\u52a8\u4e0a\u6d6e3\u4e2aticks', "'8'": u'\u5356\u4e00\u4ef7', "'5'": u'\u6700\u65b0\u4ef7\u6d6e\u52a8\u4e0a\u6d6e1\u4e2aticks', "'C'": u'\u4e70\u4e00\u4ef7', "'4'": u'\u6700\u65b0\u4ef7', "'1'": u'\u4efb\u610f\u4ef7', "'6'": u'\u6700\u65b0\u4ef7\u6d6e\u52a8\u4e0a\u6d6e2\u4e2aticks', "'2'": u'\u9650\u4ef7', "'E'": u'\u4e70\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e2\u4e2aticks', "'3'": u'\u6700\u4f18\u4ef7', "'D'": u'\u4e70\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e1\u4e2aticks', "'A'": u'\u5356\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e2\u4e2aticks', "'F'": u'\u4e70\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e3\u4e2aticks'}, 'VolumeCondition': {"'1'": u'\u4efb\u4f55\u6570\u91cf', "'2'": u'\u6700\u5c0f\u6570\u91cf', "'3'": u'\u5168\u90e8\u6570\u91cf'}, 'TimeCondition': {"'5'": u'\u64a4\u9500\u524d\u6709\u6548', "'4'": u'\u6307\u5b9a\u65e5\u671f\u524d\u6709\u6548', "'1'": u'\u7acb\u5373\u5b8c\u6210\uff0c\u5426\u5219\u64a4\u9500', "'6'": u'\u96c6\u5408\u7ade\u4ef7\u6709\u6548', "'2'": u'\u672c\u8282\u6709\u6548', "'3'": u'\u5f53\u65e5\u6709\u6548'}, 'OrderSource': {"'1'": u'\u6765\u81ea\u7ba1\u7406\u5458', "'0'": u'\u6765\u81ea\u53c2\u4e0e\u8005'}, 'OrderStatus': {"'b'": u'\u5c1a\u672a\u89e6\u53d1', "'5'": u'\u64a4\u5355', "'c'": u'\u5df2\u89e6\u53d1', "'4'": u'\u672a\u6210\u4ea4\u4e0d\u5728\u961f\u5217\u4e2d', "'1'": u'\u90e8\u5206\u6210\u4ea4\u8fd8\u5728\u961f\u5217\u4e2d', "'0'": u'\u5168\u90e8\u6210\u4ea4', "'2'": u'\u90e8\u5206\u6210\u4ea4\u4e0d\u5728\u961f\u5217\u4e2d', "'3'": u'\u672a\u6210\u4ea4\u8fd8\u5728\u961f\u5217\u4e2d', "'a'": u'\u672a\u77e5'}, 'OrderSubmitStatus': {"'5'": u'\u64a4\u5355\u5df2\u7ecf\u88ab\u62d2\u7edd', "'4'": u'\u62a5\u5355\u5df2\u7ecf\u88ab\u62d2\u7edd', "'1'": u'\u64a4\u5355\u5df2\u7ecf\u63d0\u4ea4', "'0'": u'\u5df2\u7ecf\u63d0\u4ea4', "'6'": u'\u6539\u5355\u5df2\u7ecf\u88ab\u62d2\u7edd', "'2'": u'\u4fee\u6539\u5df2\u7ecf\u63d0\u4ea4', "'3'": u'\u5df2\u7ecf\u63a5\u53d7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ContingentCondition', 'NotifySequence', 'ActiveUserID', 'VolumeTraded', 'UserProductInfo', 'CombOffsetFlag', 'TraderID', 'UserID', 'LimitPrice', 'UserForceClose', 'RelativeOrderSysID', 'Direction', 'InstallID', 'ParticipantID', 'VolumeTotalOriginal', 'ExchangeInstID', 'ClientID', 'VolumeTotal', 'OrderPriceType', 'SessionID', 'TimeCondition', 'OrderStatus', 'OrderSysID', 'OrderSubmitStatus', 'IsAutoSuspend', 'StopPrice', 'InstrumentID', 'ExchangeID', 'MinVolume', 'StatusMsg', 'SettlementID', 'ForceCloseReason', 'OrderType', 'ErrorID', 'UpdateTime', 'TradingDay', 'ActiveTime', 'BrokerID', 'InsertTime', 'FrontID', 'SuspendTime', 'ClearingPartID', 'CombHedgeFlag', 'CancelTime', 'GTDDate', 'OrderLocalID', 'BusinessUnit', 'InsertDate', 'SequenceNo', 'OrderRef', 'BrokerOrderSeq', 'InvestorID', 'VolumeCondition', 'RequestID', 'ErrorMsg', 'OrderSource', 'ActiveTraderID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ContingentCondition', u'触发条件'),('NotifySequence', u'报单提示序号'),('ActiveUserID', u'操作用户代码'),('VolumeTraded', u'今成交数量'),('UserProductInfo', u'用户端产品信息'),('CombOffsetFlag', u'组合开平标志'),('TraderID', u'交易所交易员代码'),('UserID', u'用户代码'),('LimitPrice', u'价格'),('UserForceClose', u'用户强评标志'),('RelativeOrderSysID', u'相关报单'),('Direction', u'买卖方向'),('InstallID', u'安装编号'),('ParticipantID', u'会员代码'),('VolumeTotalOriginal', u'数量'),('ExchangeInstID', u'合约在交易所的代码'),('ClientID', u'客户代码'),('VolumeTotal', u'剩余数量'),('OrderPriceType', u'报单价格条件'),('SessionID', u'会话编号'),('TimeCondition', u'有效期类型'),('OrderStatus', u'报单状态'),('OrderSysID', u'报单编号'),('OrderSubmitStatus', u'报单提交状态'),('IsAutoSuspend', u'自动挂起标志'),('StopPrice', u'止损价'),('InstrumentID', u'合约代码'),('ExchangeID', u'交易所代码'),('MinVolume', u'最小成交量'),('StatusMsg', u'状态信息'),('SettlementID', u'结算编号'),('ForceCloseReason', u'强平原因'),('OrderType', u'报单类型'),('ErrorID', u'错误代码'),('UpdateTime', u'最后修改时间'),('TradingDay', u'交易日'),('ActiveTime', u'激活时间'),('BrokerID', u'经纪公司代码'),('InsertTime', u'委托时间'),('FrontID', u'前置编号'),('SuspendTime', u'挂起时间'),('ClearingPartID', u'结算会员编号'),('CombHedgeFlag', u'组合投机套保标志'),('CancelTime', u'撤销时间'),('GTDDate', u'GTD日期'),('OrderLocalID', u'本地报单编号'),('BusinessUnit', u'业务单元'),('InsertDate', u'报单日期'),('SequenceNo', u'序号'),('OrderRef', u'报单引用'),('BrokerOrderSeq', u'经纪公司报单编号'),('InvestorID', u'投资者代码'),('VolumeCondition', u'成交量类型'),('RequestID', u'请求编号'),('ErrorMsg', u'错误信息'),('OrderSource', u'报单来源'),('ActiveTraderID', u'最后修改交易所交易员代码')]])
    def getval(self, n):
        if n in ['ContingentCondition', 'Direction', 'OrderPriceType', 'TimeCondition', 'OrderStatus', 'OrderSubmitStatus', 'ForceCloseReason', 'OrderType', 'VolumeCondition', 'OrderSource']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcDRTransferField:
    def __init__(self, DestBrokerID="", DestDRIdentityID=0, OrigDRIdentityID=0, OrigBrokerID=""):
        self.DestBrokerID=DestBrokerID
        self.DestDRIdentityID=DestDRIdentityID
        self.OrigDRIdentityID=OrigDRIdentityID
        self.OrigBrokerID=OrigBrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['DestBrokerID', 'DestDRIdentityID', 'OrigDRIdentityID', 'OrigBrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('DestBrokerID', u'目标易用单元代码'),('DestDRIdentityID', u'目标交易中心代码'),('OrigDRIdentityID', u'原交易中心代码'),('OrigBrokerID', u'原应用单元代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcBrokerTradingParamsField:
    def __init__(self, InvestorID="", MarginPriceType='1', BrokerID="", AvailIncludeCloseProfit='0', Algorithm='1'):
        self.InvestorID=InvestorID
        self.MarginPriceType=MarginPriceType
        self.BrokerID=BrokerID
        self.AvailIncludeCloseProfit=AvailIncludeCloseProfit
        self.Algorithm=Algorithm
        self.vcmap={'MarginPriceType': {"'1'": u'\u6628\u7ed3\u7b97\u4ef7', "'2'": u'\u6700\u65b0\u4ef7', "'3'": u'\u6210\u4ea4\u5747\u4ef7', "'4'": u'\u5f00\u4ed3\u4ef7'}, 'AvailIncludeCloseProfit': {"'2'": u'\u4e0d\u5305\u542b\u5e73\u4ed3\u76c8\u5229', "'0'": u'\u5305\u542b\u5e73\u4ed3\u76c8\u5229'}, 'Algorithm': {"'1'": u'\u6d6e\u76c8\u6d6e\u4e8f\u90fd\u8ba1\u7b97', "'2'": u'\u6d6e\u76c8\u4e0d\u8ba1\uff0c\u6d6e\u4e8f\u8ba1', "'3'": u'\u6d6e\u76c8\u8ba1\uff0c\u6d6e\u4e8f\u4e0d\u8ba1', "'4'": u'\u6d6e\u76c8\u6d6e\u4e8f\u90fd\u4e0d\u8ba1\u7b97'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'MarginPriceType', 'BrokerID', 'AvailIncludeCloseProfit', 'Algorithm']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('MarginPriceType', u'保证金价格类型'),('BrokerID', u'经纪公司代码'),('AvailIncludeCloseProfit', u'可用是否包含平仓盈利'),('Algorithm', u'盈亏算法')]])
    def getval(self, n):
        if n in ['MarginPriceType', 'AvailIncludeCloseProfit', 'Algorithm']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcRemoveParkedOrderField:
    def __init__(self, InvestorID="", BrokerID="", ParkedOrderID=""):
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.ParkedOrderID=ParkedOrderID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'ParkedOrderID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('ParkedOrderID', u'预埋报单编号')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcBrokerUserPasswordField:
    def __init__(self, UserID="", Password="", BrokerID=""):
        self.UserID=UserID
        self.Password=Password
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserID', 'Password', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserID', u'用户代码'),('Password', u'密码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcOrderField:
    def __init__(self, ContingentCondition='1', NotifySequence=0, ActiveUserID="", VolumeTraded=0, UserProductInfo="", CombOffsetFlag="", TraderID="", UserID="", LimitPrice=0, UserForceClose=0, RelativeOrderSysID="", Direction='0', InstallID=0, ParticipantID="", VolumeTotalOriginal=0, ExchangeInstID="", ClientID="", VolumeTotal=0, OrderPriceType='1', SessionID=0, TimeCondition='1', OrderStatus='0', OrderSysID="", OrderSubmitStatus='0', IsAutoSuspend=0, StopPrice=0, InstrumentID="", ExchangeID="", MinVolume=0, StatusMsg="", SettlementID=0, ForceCloseReason='0', OrderType='0', UpdateTime="", TradingDay="", ActiveTime="", BrokerID="", InsertTime="", FrontID=0, SuspendTime="", ClearingPartID="", CombHedgeFlag="", CancelTime="", GTDDate="", OrderLocalID="", BusinessUnit="", InsertDate="", SequenceNo=0, OrderRef="", BrokerOrderSeq=0, InvestorID="", VolumeCondition='1', RequestID=0, OrderSource='0', ActiveTraderID=""):
        self.ContingentCondition=ContingentCondition
        self.NotifySequence=NotifySequence
        self.ActiveUserID=ActiveUserID
        self.VolumeTraded=VolumeTraded
        self.UserProductInfo=UserProductInfo
        self.CombOffsetFlag=CombOffsetFlag
        self.TraderID=TraderID
        self.UserID=UserID
        self.LimitPrice=LimitPrice
        self.UserForceClose=UserForceClose
        self.RelativeOrderSysID=RelativeOrderSysID
        self.Direction=Direction
        self.InstallID=InstallID
        self.ParticipantID=ParticipantID
        self.VolumeTotalOriginal=VolumeTotalOriginal
        self.ExchangeInstID=ExchangeInstID
        self.ClientID=ClientID
        self.VolumeTotal=VolumeTotal
        self.OrderPriceType=OrderPriceType
        self.SessionID=SessionID
        self.TimeCondition=TimeCondition
        self.OrderStatus=OrderStatus
        self.OrderSysID=OrderSysID
        self.OrderSubmitStatus=OrderSubmitStatus
        self.IsAutoSuspend=IsAutoSuspend
        self.StopPrice=StopPrice
        self.InstrumentID=InstrumentID
        self.ExchangeID=ExchangeID
        self.MinVolume=MinVolume
        self.StatusMsg=StatusMsg
        self.SettlementID=SettlementID
        self.ForceCloseReason=ForceCloseReason
        self.OrderType=OrderType
        self.UpdateTime=UpdateTime
        self.TradingDay=TradingDay
        self.ActiveTime=ActiveTime
        self.BrokerID=BrokerID
        self.InsertTime=InsertTime
        self.FrontID=FrontID
        self.SuspendTime=SuspendTime
        self.ClearingPartID=ClearingPartID
        self.CombHedgeFlag=CombHedgeFlag
        self.CancelTime=CancelTime
        self.GTDDate=GTDDate
        self.OrderLocalID=OrderLocalID
        self.BusinessUnit=BusinessUnit
        self.InsertDate=InsertDate
        self.SequenceNo=SequenceNo
        self.OrderRef=OrderRef
        self.BrokerOrderSeq=BrokerOrderSeq
        self.InvestorID=InvestorID
        self.VolumeCondition=VolumeCondition
        self.RequestID=RequestID
        self.OrderSource=OrderSource
        self.ActiveTraderID=ActiveTraderID
        self.vcmap={'ContingentCondition': {"'9'": u'\u5356\u4e00\u4ef7\u5927\u4e8e\u6761\u4ef6\u4ef7', "'B'": u'\u5356\u4e00\u4ef7\u5c0f\u4e8e\u6761\u4ef6\u4ef7', "'7'": u'\u6700\u65b0\u4ef7\u5c0f\u4e8e\u6761\u4ef6\u4ef7', "'8'": u'\u6700\u65b0\u4ef7\u5c0f\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'5'": u'\u6700\u65b0\u4ef7\u5927\u4e8e\u6761\u4ef6\u4ef7', "'C'": u'\u5356\u4e00\u4ef7\u5c0f\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'4'": u'\u9884\u57cb\u5355', "'1'": u'\u7acb\u5373', "'6'": u'\u6700\u65b0\u4ef7\u5927\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'2'": u'\u6b62\u635f', "'H'": u'\u4e70\u4e00\u4ef7\u5c0f\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'E'": u'\u4e70\u4e00\u4ef7\u5927\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'3'": u'\u6b62\u8d62', "'D'": u'\u4e70\u4e00\u4ef7\u5927\u4e8e\u6761\u4ef6\u4ef7', "'A'": u'\u5356\u4e00\u4ef7\u5927\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'F'": u'\u4e70\u4e00\u4ef7\u5c0f\u4e8e\u6761\u4ef6\u4ef7'}, 'Direction': {"'1'": u'\u5356', "'0'": u'\u4e70'}, 'ForceCloseReason': {"'7'": u'\u81ea\u7136\u4eba\u4e34\u8fd1\u4ea4\u5272', "'5'": u'\u8fdd\u89c4', "'4'": u'\u6301\u4ed3\u975e\u6574\u6570\u500d', "'1'": u'\u8d44\u91d1\u4e0d\u8db3', "'0'": u'\u975e\u5f3a\u5e73', "'6'": u'\u5176\u5b83', "'2'": u'\u5ba2\u6237\u8d85\u4ed3', "'3'": u'\u4f1a\u5458\u8d85\u4ed3'}, 'OrderType': {"'5'": u'\u4e92\u6362\u5355', "'4'": u'\u6761\u4ef6\u5355', "'1'": u'\u62a5\u4ef7\u884d\u751f', "'0'": u'\u6b63\u5e38', "'2'": u'\u7ec4\u5408\u884d\u751f', "'3'": u'\u7ec4\u5408\u62a5\u5355'}, 'OrderPriceType': {"'9'": u'\u5356\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e1\u4e2aticks', "'B'": u'\u5356\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e3\u4e2aticks', "'7'": u'\u6700\u65b0\u4ef7\u6d6e\u52a8\u4e0a\u6d6e3\u4e2aticks', "'8'": u'\u5356\u4e00\u4ef7', "'5'": u'\u6700\u65b0\u4ef7\u6d6e\u52a8\u4e0a\u6d6e1\u4e2aticks', "'C'": u'\u4e70\u4e00\u4ef7', "'4'": u'\u6700\u65b0\u4ef7', "'1'": u'\u4efb\u610f\u4ef7', "'6'": u'\u6700\u65b0\u4ef7\u6d6e\u52a8\u4e0a\u6d6e2\u4e2aticks', "'2'": u'\u9650\u4ef7', "'E'": u'\u4e70\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e2\u4e2aticks', "'3'": u'\u6700\u4f18\u4ef7', "'D'": u'\u4e70\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e1\u4e2aticks', "'A'": u'\u5356\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e2\u4e2aticks', "'F'": u'\u4e70\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e3\u4e2aticks'}, 'VolumeCondition': {"'1'": u'\u4efb\u4f55\u6570\u91cf', "'2'": u'\u6700\u5c0f\u6570\u91cf', "'3'": u'\u5168\u90e8\u6570\u91cf'}, 'TimeCondition': {"'5'": u'\u64a4\u9500\u524d\u6709\u6548', "'4'": u'\u6307\u5b9a\u65e5\u671f\u524d\u6709\u6548', "'1'": u'\u7acb\u5373\u5b8c\u6210\uff0c\u5426\u5219\u64a4\u9500', "'6'": u'\u96c6\u5408\u7ade\u4ef7\u6709\u6548', "'2'": u'\u672c\u8282\u6709\u6548', "'3'": u'\u5f53\u65e5\u6709\u6548'}, 'OrderSource': {"'1'": u'\u6765\u81ea\u7ba1\u7406\u5458', "'0'": u'\u6765\u81ea\u53c2\u4e0e\u8005'}, 'OrderStatus': {"'b'": u'\u5c1a\u672a\u89e6\u53d1', "'5'": u'\u64a4\u5355', "'c'": u'\u5df2\u89e6\u53d1', "'4'": u'\u672a\u6210\u4ea4\u4e0d\u5728\u961f\u5217\u4e2d', "'1'": u'\u90e8\u5206\u6210\u4ea4\u8fd8\u5728\u961f\u5217\u4e2d', "'0'": u'\u5168\u90e8\u6210\u4ea4', "'2'": u'\u90e8\u5206\u6210\u4ea4\u4e0d\u5728\u961f\u5217\u4e2d', "'3'": u'\u672a\u6210\u4ea4\u8fd8\u5728\u961f\u5217\u4e2d', "'a'": u'\u672a\u77e5'}, 'OrderSubmitStatus': {"'5'": u'\u64a4\u5355\u5df2\u7ecf\u88ab\u62d2\u7edd', "'4'": u'\u62a5\u5355\u5df2\u7ecf\u88ab\u62d2\u7edd', "'1'": u'\u64a4\u5355\u5df2\u7ecf\u63d0\u4ea4', "'0'": u'\u5df2\u7ecf\u63d0\u4ea4', "'6'": u'\u6539\u5355\u5df2\u7ecf\u88ab\u62d2\u7edd', "'2'": u'\u4fee\u6539\u5df2\u7ecf\u63d0\u4ea4', "'3'": u'\u5df2\u7ecf\u63a5\u53d7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ContingentCondition', 'NotifySequence', 'ActiveUserID', 'VolumeTraded', 'UserProductInfo', 'CombOffsetFlag', 'TraderID', 'UserID', 'LimitPrice', 'UserForceClose', 'RelativeOrderSysID', 'Direction', 'InstallID', 'ParticipantID', 'VolumeTotalOriginal', 'ExchangeInstID', 'ClientID', 'VolumeTotal', 'OrderPriceType', 'SessionID', 'TimeCondition', 'OrderStatus', 'OrderSysID', 'OrderSubmitStatus', 'IsAutoSuspend', 'StopPrice', 'InstrumentID', 'ExchangeID', 'MinVolume', 'StatusMsg', 'SettlementID', 'ForceCloseReason', 'OrderType', 'UpdateTime', 'TradingDay', 'ActiveTime', 'BrokerID', 'InsertTime', 'FrontID', 'SuspendTime', 'ClearingPartID', 'CombHedgeFlag', 'CancelTime', 'GTDDate', 'OrderLocalID', 'BusinessUnit', 'InsertDate', 'SequenceNo', 'OrderRef', 'BrokerOrderSeq', 'InvestorID', 'VolumeCondition', 'RequestID', 'OrderSource', 'ActiveTraderID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ContingentCondition', u'触发条件'),('NotifySequence', u'报单提示序号'),('ActiveUserID', u'操作用户代码'),('VolumeTraded', u'今成交数量'),('UserProductInfo', u'用户端产品信息'),('CombOffsetFlag', u'组合开平标志'),('TraderID', u'交易所交易员代码'),('UserID', u'用户代码'),('LimitPrice', u'价格'),('UserForceClose', u'用户强评标志'),('RelativeOrderSysID', u'相关报单'),('Direction', u'买卖方向'),('InstallID', u'安装编号'),('ParticipantID', u'会员代码'),('VolumeTotalOriginal', u'数量'),('ExchangeInstID', u'合约在交易所的代码'),('ClientID', u'客户代码'),('VolumeTotal', u'剩余数量'),('OrderPriceType', u'报单价格条件'),('SessionID', u'会话编号'),('TimeCondition', u'有效期类型'),('OrderStatus', u'报单状态'),('OrderSysID', u'报单编号'),('OrderSubmitStatus', u'报单提交状态'),('IsAutoSuspend', u'自动挂起标志'),('StopPrice', u'止损价'),('InstrumentID', u'合约代码'),('ExchangeID', u'交易所代码'),('MinVolume', u'最小成交量'),('StatusMsg', u'状态信息'),('SettlementID', u'结算编号'),('ForceCloseReason', u'强平原因'),('OrderType', u'报单类型'),('UpdateTime', u'最后修改时间'),('TradingDay', u'交易日'),('ActiveTime', u'激活时间'),('BrokerID', u'经纪公司代码'),('InsertTime', u'委托时间'),('FrontID', u'前置编号'),('SuspendTime', u'挂起时间'),('ClearingPartID', u'结算会员编号'),('CombHedgeFlag', u'组合投机套保标志'),('CancelTime', u'撤销时间'),('GTDDate', u'GTD日期'),('OrderLocalID', u'本地报单编号'),('BusinessUnit', u'业务单元'),('InsertDate', u'报单日期'),('SequenceNo', u'序号'),('OrderRef', u'报单引用'),('BrokerOrderSeq', u'经纪公司报单编号'),('InvestorID', u'投资者代码'),('VolumeCondition', u'成交量类型'),('RequestID', u'请求编号'),('OrderSource', u'报单来源'),('ActiveTraderID', u'最后修改交易所交易员代码')]])
    def getval(self, n):
        if n in ['ContingentCondition', 'Direction', 'OrderPriceType', 'TimeCondition', 'OrderStatus', 'OrderSubmitStatus', 'ForceCloseReason', 'OrderType', 'VolumeCondition', 'OrderSource']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQrySyncStatusField:
    def __init__(self, TradingDay=""):
        self.TradingDay=TradingDay
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易日')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryErrOrderActionField:
    def __init__(self, InvestorID="", BrokerID=""):
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcBrokerUserOTPParamField:
    def __init__(self, LastDrift=0, LastSuccess=0, SerialNumber="", UserID="", AuthKey="", BrokerID="", OTPVendorsID="", OTPType='0'):
        self.LastDrift=LastDrift
        self.LastSuccess=LastSuccess
        self.SerialNumber=SerialNumber
        self.UserID=UserID
        self.AuthKey=AuthKey
        self.BrokerID=BrokerID
        self.OTPVendorsID=OTPVendorsID
        self.OTPType=OTPType
        self.vcmap={'OTPType': {"'1'": u'\u65f6\u95f4\u4ee4\u724c', "'0'": u'\u65e0\u52a8\u6001\u4ee4\u724c'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['LastDrift', 'LastSuccess', 'SerialNumber', 'UserID', 'AuthKey', 'BrokerID', 'OTPVendorsID', 'OTPType']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('LastDrift', u'漂移值'),('LastSuccess', u'成功值'),('SerialNumber', u'动态令牌序列号'),('UserID', u'用户代码'),('AuthKey', u'令牌密钥'),('BrokerID', u'经纪公司代码'),('OTPVendorsID', u'动态令牌提供商'),('OTPType', u'动态令牌类型')]])
    def getval(self, n):
        if n in ['OTPType']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcInstrumentMarginRateAdjustField:
    def __init__(self, InstrumentID="", ShortMarginRatioByMoney=0, LongMarginRatioByMoney=0, IsRelative=0, HedgeFlag='1', InvestorID="", BrokerID="", InvestorRange='1', ShortMarginRatioByVolume=0, LongMarginRatioByVolume=0):
        self.InstrumentID=InstrumentID
        self.ShortMarginRatioByMoney=ShortMarginRatioByMoney
        self.LongMarginRatioByMoney=LongMarginRatioByMoney
        self.IsRelative=IsRelative
        self.HedgeFlag=HedgeFlag
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.InvestorRange=InvestorRange
        self.ShortMarginRatioByVolume=ShortMarginRatioByVolume
        self.LongMarginRatioByVolume=LongMarginRatioByVolume
        self.vcmap={'HedgeFlag': {"'1'": u'\u6295\u673a', "'2'": u'\u5957\u5229', "'3'": u'\u5957\u4fdd'}, 'InvestorRange': {"'1'": u'\u6240\u6709', "'2'": u'\u6295\u8d44\u8005\u7ec4', "'3'": u'\u5355\u4e00\u6295\u8d44\u8005'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'ShortMarginRatioByMoney', 'LongMarginRatioByMoney', 'IsRelative', 'HedgeFlag', 'InvestorID', 'BrokerID', 'InvestorRange', 'ShortMarginRatioByVolume', 'LongMarginRatioByVolume']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('ShortMarginRatioByMoney', u'空头保证金率'),('LongMarginRatioByMoney', u'多头保证金率'),('IsRelative', u'是否相对交易所收取'),('HedgeFlag', u'投机套保标志'),('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('InvestorRange', u'投资者范围'),('ShortMarginRatioByVolume', u'空头保证金费'),('LongMarginRatioByVolume', u'多头保证金费')]])
    def getval(self, n):
        if n in ['HedgeFlag', 'InvestorRange']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CTKSConditionalOrderQuery:
    def __init__(self, InvestorID="", BrokerID="", ConditionalOrderID=0):
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.ConditionalOrderID=ConditionalOrderID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'ConditionalOrderID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'营业部代码'),('ConditionalOrderID', u'条件单编号')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryInvestorField:
    def __init__(self, InvestorID="", BrokerID=""):
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcSpecificInstrumentField:
    def __init__(self, InstrumentID=""):
        self.InstrumentID=InstrumentID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcMarketDataAsk45Field:
    def __init__(self, AskPrice5=0, AskPrice4=0, AskVolume5=0, AskVolume4=0):
        self.AskPrice5=AskPrice5
        self.AskPrice4=AskPrice4
        self.AskVolume5=AskVolume5
        self.AskVolume4=AskVolume4
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['AskPrice5', 'AskPrice4', 'AskVolume5', 'AskVolume4']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('AskPrice5', u'申卖价五'),('AskPrice4', u'申卖价四'),('AskVolume5', u'申卖量五'),('AskVolume4', u'申卖量四')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcTradingAccountPasswordUpdateField:
    def __init__(self, NewPassword="", OldPassword="", BrokerID="", AccountID=""):
        self.NewPassword=NewPassword
        self.OldPassword=OldPassword
        self.BrokerID=BrokerID
        self.AccountID=AccountID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['NewPassword', 'OldPassword', 'BrokerID', 'AccountID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('NewPassword', u'新的口令'),('OldPassword', u'原来的口令'),('BrokerID', u'经纪公司代码'),('AccountID', u'投资者帐号')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcRspQueryTradeResultBySerialField:
    def __init__(self, OriginReturnCode="", OriginDescrInfoForReturnCode="", BrokerBranchID="", BankPassWord="", TradeTime="", AccountID="", BankAccount="", TradeCode="", BankBranchID="", RefrenceIssure="", SessionID=0, BankID="", PlateSerial=0, ErrorID=0, BankSerial="", TradingDay="", BrokerID="", RefrenceIssureType='0', Password="", Reference=0, TradeDate="", CurrencyID="", ErrorMsg="", LastFragment='0', TradeAmount=0, Digest=""):
        self.OriginReturnCode=OriginReturnCode
        self.OriginDescrInfoForReturnCode=OriginDescrInfoForReturnCode
        self.BrokerBranchID=BrokerBranchID
        self.BankPassWord=BankPassWord
        self.TradeTime=TradeTime
        self.AccountID=AccountID
        self.BankAccount=BankAccount
        self.TradeCode=TradeCode
        self.BankBranchID=BankBranchID
        self.RefrenceIssure=RefrenceIssure
        self.SessionID=SessionID
        self.BankID=BankID
        self.PlateSerial=PlateSerial
        self.ErrorID=ErrorID
        self.BankSerial=BankSerial
        self.TradingDay=TradingDay
        self.BrokerID=BrokerID
        self.RefrenceIssureType=RefrenceIssureType
        self.Password=Password
        self.Reference=Reference
        self.TradeDate=TradeDate
        self.CurrencyID=CurrencyID
        self.ErrorMsg=ErrorMsg
        self.LastFragment=LastFragment
        self.TradeAmount=TradeAmount
        self.Digest=Digest
        self.vcmap={'RefrenceIssureType': {"'1'": u'\u671f\u5546', "'2'": u'\u5238\u5546', "'0'": u'\u94f6\u884c'}, 'LastFragment': {"'1'": u'\u4e0d\u662f\u6700\u540e\u5206\u7247', "'0'": u'\u662f\u6700\u540e\u5206\u7247'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['OriginReturnCode', 'OriginDescrInfoForReturnCode', 'BrokerBranchID', 'BankPassWord', 'TradeTime', 'AccountID', 'BankAccount', 'TradeCode', 'BankBranchID', 'RefrenceIssure', 'SessionID', 'BankID', 'PlateSerial', 'ErrorID', 'BankSerial', 'TradingDay', 'BrokerID', 'RefrenceIssureType', 'Password', 'Reference', 'TradeDate', 'CurrencyID', 'ErrorMsg', 'LastFragment', 'TradeAmount', 'Digest']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('OriginReturnCode', u'原始返回代码'),('OriginDescrInfoForReturnCode', u'原始返回码描述'),('BrokerBranchID', u'期商分支机构代码'),('BankPassWord', u'银行密码'),('TradeTime', u'交易时间'),('AccountID', u'投资者帐号'),('BankAccount', u'银行帐号'),('TradeCode', u'业务功能码'),('BankBranchID', u'银行分支机构代码'),('RefrenceIssure', u'本流水号发布者机构编码'),('SessionID', u'会话号'),('BankID', u'银行代码'),('PlateSerial', u'银期平台消息流水号'),('ErrorID', u'错误代码'),('BankSerial', u'银行流水号'),('TradingDay', u'交易系统日期'),('BrokerID', u'期商代码'),('RefrenceIssureType', u'本流水号发布者的机构类型'),('Password', u'期货密码'),('Reference', u'流水号'),('TradeDate', u'交易日期'),('CurrencyID', u'币种代码'),('ErrorMsg', u'错误信息'),('LastFragment', u'最后分片标志'),('TradeAmount', u'转帐金额'),('Digest', u'摘要')]])
    def getval(self, n):
        if n in ['RefrenceIssureType', 'LastFragment']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CTKSProfitAndLossOrderOperResultField:
    def __init__(self, TakeProfitPrice=0, CombOffsetFlag='0', UserID="", LimitPrice=0, ConditionalOrderFormTime="", StopLossPrice=0, FloatLimitPrice=0, Direction='0', VolumeTotalOriginal=0, ClientID="", InstrumentID="", ExchangeID="", InvestorName="", OpenTradePrice=0, Figures=0, ProfitAndLossOrderID=0, SpringType='0', OrderFormTime="", CombHedgeFlag='1', OffsetValue='0', LastPrice=0, OrderLocalID="", BusinessUnit="", CloseMode='0', InvestorID="", ProfitAndLossOrderStatus='0', ConditionalOrderID=0, BrokerID="", ProfitAndLossOrderFormTime=""):
        self.TakeProfitPrice=TakeProfitPrice
        self.CombOffsetFlag=CombOffsetFlag
        self.UserID=UserID
        self.LimitPrice=LimitPrice
        self.ConditionalOrderFormTime=ConditionalOrderFormTime
        self.StopLossPrice=StopLossPrice
        self.FloatLimitPrice=FloatLimitPrice
        self.Direction=Direction
        self.VolumeTotalOriginal=VolumeTotalOriginal
        self.ClientID=ClientID
        self.InstrumentID=InstrumentID
        self.ExchangeID=ExchangeID
        self.InvestorName=InvestorName
        self.OpenTradePrice=OpenTradePrice
        self.Figures=Figures
        self.ProfitAndLossOrderID=ProfitAndLossOrderID
        self.SpringType=SpringType
        self.OrderFormTime=OrderFormTime
        self.CombHedgeFlag=CombHedgeFlag
        self.OffsetValue=OffsetValue
        self.LastPrice=LastPrice
        self.OrderLocalID=OrderLocalID
        self.BusinessUnit=BusinessUnit
        self.CloseMode=CloseMode
        self.InvestorID=InvestorID
        self.ProfitAndLossOrderStatus=ProfitAndLossOrderStatus
        self.ConditionalOrderID=ConditionalOrderID
        self.BrokerID=BrokerID
        self.ProfitAndLossOrderFormTime=ProfitAndLossOrderFormTime
        self.vcmap={'CombHedgeFlag': {"'1'": u'\u6295\u673a', "'2'": u'\u5957\u5229', "'3'": u'\u5957\u4fdd'}, 'Direction': {"'1'": u'\u5356', "'0'": u'\u4e70'}, 'CombOffsetFlag': {"'5'": u'\u5f3a\u51cf', "'4'": u'\u5e73\u6628', "'1'": u'\u5e73\u4ed3', "'0'": u'\u5f00\u4ed3', "'6'": u'\u672c\u5730\u5f3a\u5e73', "'2'": u'\u5f3a\u5e73', "'3'": u'\u5e73\u4eca'}, 'ProfitAndLossOrderStatus': {"'7'": u'\u9009\u62e9\u8df3\u8fc7', "'8'": u'\u9009\u62e9\u7ec8\u6b62', "'5'": u'\u53d1\u9001\u6210\u529f', "'4'": u'\u53d1\u9001\u8d85\u65f6', "'1'": u'\u672a\u89e6\u53d1', "'0'": u'\u6682\u505c', "'6'": u'\u7b49\u5f85\u9009\u62e9', "'2'": u'\u5220\u9664', "'3'": u'\u5df2\u89e6\u53d1\u672a\u53d1\u9001'}, 'CloseMode': {"'1'": u'\u52a0\u51cf\u4e70\u5356\u4ef7', "'2'": u'\u52a0\u51cf\u6700\u65b0\u4ef7', "'0'": u'\u5e02\u4ef7'}, 'OffsetValue': {"'1'": u'\u5f00\u4ed3\u6210\u4ea4\u4ef7\u7684\u76f8\u5bf9\u504f\u79fb\u503c', "'0'": u'\u6307\u5b9a\u503c'}, 'SpringType': {"'1'": u'\u4e70\u5356\u4ef7', "'0'": u'\u6700\u65b0\u4ef7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TakeProfitPrice', 'CombOffsetFlag', 'UserID', 'LimitPrice', 'ConditionalOrderFormTime', 'StopLossPrice', 'FloatLimitPrice', 'Direction', 'VolumeTotalOriginal', 'ClientID', 'InstrumentID', 'ExchangeID', 'InvestorName', 'OpenTradePrice', 'Figures', 'ProfitAndLossOrderID', 'SpringType', 'OrderFormTime', 'CombHedgeFlag', 'OffsetValue', 'LastPrice', 'OrderLocalID', 'BusinessUnit', 'CloseMode', 'InvestorID', 'ProfitAndLossOrderStatus', 'ConditionalOrderID', 'BrokerID', 'ProfitAndLossOrderFormTime']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TakeProfitPrice', u'止盈价'),('CombOffsetFlag', u'开平标志'),('UserID', u'操作员'),('LimitPrice', u'价格'),('ConditionalOrderFormTime', u'生成条件单时间'),('StopLossPrice', u'止损价'),('FloatLimitPrice', u'浮动止损价'),('Direction', u'买卖方向'),('VolumeTotalOriginal', u'数量'),('ClientID', u'客户代码'),('InstrumentID', u'合约代码'),('ExchangeID', u'交易所代码'),('InvestorName', u'投资者名称'),('OpenTradePrice', u'开仓成交价格'),('Figures', u'平仓反向加减价位数（平仓方式=1或2时有效）'),('ProfitAndLossOrderID', u'止损止盈单号'),('SpringType', u'条件单触发价格类型'),('OrderFormTime', u'生成委托单时间'),('CombHedgeFlag', u'投机套保标志'),('OffsetValue', u'生成盈损价的方式'),('LastPrice', u'行情触发时的最新价'),('OrderLocalID', u'本地报单编号'),('BusinessUnit', u'业务单元'),('CloseMode', u'平仓方式'),('InvestorID', u'投资者代码'),('ProfitAndLossOrderStatus', u'止损止盈单状态'),('ConditionalOrderID', u'条件单编号'),('BrokerID', u'营业部代码'),('ProfitAndLossOrderFormTime', u'生成止损止盈单时间')]])
    def getval(self, n):
        if n in ['CombOffsetFlag', 'Direction', 'SpringType', 'CombHedgeFlag', 'OffsetValue', 'CloseMode', 'ProfitAndLossOrderStatus']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcInstrumentCommissionRateField:
    def __init__(self, InstrumentID="", OpenRatioByMoney=0, CloseRatioByVolume=0, CloseTodayRatioByMoney=0, InvestorID="", BrokerID="", InvestorRange='1', CloseRatioByMoney=0, OpenRatioByVolume=0, CloseTodayRatioByVolume=0):
        self.InstrumentID=InstrumentID
        self.OpenRatioByMoney=OpenRatioByMoney
        self.CloseRatioByVolume=CloseRatioByVolume
        self.CloseTodayRatioByMoney=CloseTodayRatioByMoney
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.InvestorRange=InvestorRange
        self.CloseRatioByMoney=CloseRatioByMoney
        self.OpenRatioByVolume=OpenRatioByVolume
        self.CloseTodayRatioByVolume=CloseTodayRatioByVolume
        self.vcmap={'InvestorRange': {"'1'": u'\u6240\u6709', "'2'": u'\u6295\u8d44\u8005\u7ec4', "'3'": u'\u5355\u4e00\u6295\u8d44\u8005'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'OpenRatioByMoney', 'CloseRatioByVolume', 'CloseTodayRatioByMoney', 'InvestorID', 'BrokerID', 'InvestorRange', 'CloseRatioByMoney', 'OpenRatioByVolume', 'CloseTodayRatioByVolume']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('OpenRatioByMoney', u'开仓手续费率'),('CloseRatioByVolume', u'平仓手续费'),('CloseTodayRatioByMoney', u'平今手续费率'),('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('InvestorRange', u'投资者范围'),('CloseRatioByMoney', u'平仓手续费率'),('OpenRatioByVolume', u'开仓手续费'),('CloseTodayRatioByVolume', u'平今手续费')]])
    def getval(self, n):
        if n in ['InvestorRange']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryInvestorPositionCombineDetailField:
    def __init__(self, InvestorID="", BrokerID="", CombInstrumentID=""):
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.CombInstrumentID=CombInstrumentID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'CombInstrumentID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('CombInstrumentID', u'组合持仓合约编码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryTransferBankField:
    def __init__(self, BankBrchID="", BankID=""):
        self.BankBrchID=BankBrchID
        self.BankID=BankID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BankBrchID', 'BankID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BankBrchID', u'银行分中心代码'),('BankID', u'银行代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcTransferSerialField:
    def __init__(self, BankNewAccount="", BrokerBranchID="", TradeTime="", OperatorCode="", AccountID="", BankAccount="", TradeCode="", BankBranchID="", SessionID=0, BankID="", PlateSerial=0, FutureAccType='1', ErrorID=0, BankSerial="", IdentifiedCardNo="", TradingDay="", BrokerID="", IdCardType='0', TradeDate="", CurrencyID="", BrokerFee=0, BankAccType='1', FutureSerial=0, InvestorID="", ErrorMsg="", CustFee=0, TradeAmount=0, AvailabilityFlag='0'):
        self.BankNewAccount=BankNewAccount
        self.BrokerBranchID=BrokerBranchID
        self.TradeTime=TradeTime
        self.OperatorCode=OperatorCode
        self.AccountID=AccountID
        self.BankAccount=BankAccount
        self.TradeCode=TradeCode
        self.BankBranchID=BankBranchID
        self.SessionID=SessionID
        self.BankID=BankID
        self.PlateSerial=PlateSerial
        self.FutureAccType=FutureAccType
        self.ErrorID=ErrorID
        self.BankSerial=BankSerial
        self.IdentifiedCardNo=IdentifiedCardNo
        self.TradingDay=TradingDay
        self.BrokerID=BrokerID
        self.IdCardType=IdCardType
        self.TradeDate=TradeDate
        self.CurrencyID=CurrencyID
        self.BrokerFee=BrokerFee
        self.BankAccType=BankAccType
        self.FutureSerial=FutureSerial
        self.InvestorID=InvestorID
        self.ErrorMsg=ErrorMsg
        self.CustFee=CustFee
        self.TradeAmount=TradeAmount
        self.AvailabilityFlag=AvailabilityFlag
        self.vcmap={'BankAccType': {"'1'": u'\u94f6\u884c\u5b58\u6298', "'2'": u'\u50a8\u84c4\u5361', "'3'": u'\u4fe1\u7528\u5361'}, 'AvailabilityFlag': {"'1'": u'\u6709\u6548', "'2'": u'\u51b2\u6b63', "'0'": u'\u672a\u786e\u8ba4'}, 'FutureAccType': {"'1'": u'\u94f6\u884c\u5b58\u6298', "'2'": u'\u50a8\u84c4\u5361', "'3'": u'\u4fe1\u7528\u5361'}, 'IdCardType': {"'9'": u'\u8425\u4e1a\u6267\u7167\u53f7', "'7'": u'\u53f0\u80de\u8bc1', "'x'": u'\u5176\u4ed6\u8bc1\u4ef6', "'5'": u'\u6237\u53e3\u7c3f', "'4'": u'\u58eb\u5175\u8bc1', "'1'": u'\u8eab\u4efd\u8bc1', "'0'": u'\u7ec4\u7ec7\u673a\u6784\u4ee3\u7801', "'6'": u'\u62a4\u7167', "'2'": u'\u519b\u5b98\u8bc1', "'8'": u'\u56de\u4e61\u8bc1', "'3'": u'\u8b66\u5b98\u8bc1', "'A'": u'\u7a0e\u52a1\u767b\u8bb0\u53f7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BankNewAccount', 'BrokerBranchID', 'TradeTime', 'OperatorCode', 'AccountID', 'BankAccount', 'TradeCode', 'BankBranchID', 'SessionID', 'BankID', 'PlateSerial', 'FutureAccType', 'ErrorID', 'BankSerial', 'IdentifiedCardNo', 'TradingDay', 'BrokerID', 'IdCardType', 'TradeDate', 'CurrencyID', 'BrokerFee', 'BankAccType', 'FutureSerial', 'InvestorID', 'ErrorMsg', 'CustFee', 'TradeAmount', 'AvailabilityFlag']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BankNewAccount', u'新银行帐号'),('BrokerBranchID', u'期商分支机构代码'),('TradeTime', u'交易时间'),('OperatorCode', u'操作员'),('AccountID', u'投资者帐号'),('BankAccount', u'银行帐号'),('TradeCode', u'交易代码'),('BankBranchID', u'银行分支机构编码'),('SessionID', u'会话编号'),('BankID', u'银行编码'),('PlateSerial', u'平台流水号'),('FutureAccType', u'期货公司帐号类型'),('ErrorID', u'错误代码'),('BankSerial', u'银行流水号'),('IdentifiedCardNo', u'证件号码'),('TradingDay', u'交易日期'),('BrokerID', u'期货公司编码'),('IdCardType', u'证件类型'),('TradeDate', u'交易发起方日期'),('CurrencyID', u'币种代码'),('BrokerFee', u'应收期货公司费用'),('BankAccType', u'银行帐号类型'),('FutureSerial', u'期货公司流水号'),('InvestorID', u'投资者代码'),('ErrorMsg', u'错误信息'),('CustFee', u'应收客户费用'),('TradeAmount', u'交易金额'),('AvailabilityFlag', u'有效标志')]])
    def getval(self, n):
        if n in ['FutureAccType', 'IdCardType', 'BankAccType', 'AvailabilityFlag']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcExchangeMarginRateAdjustField:
    def __init__(self, InstrumentID="", ShortMarginRatioByMoney=0, ExchLongMarginRatioByMoney=0, ExchShortMarginRatioByMoney=0, LongMarginRatioByMoney=0, ExchShortMarginRatioByVolume=0, ExchLongMarginRatioByVolume=0, NoShortMarginRatioByMoney=0, NoLongMarginRatioByMoney=0, HedgeFlag='1', NoLongMarginRatioByVolume=0, NoShortMarginRatioByVolume=0, BrokerID="", ShortMarginRatioByVolume=0, LongMarginRatioByVolume=0):
        self.InstrumentID=InstrumentID
        self.ShortMarginRatioByMoney=ShortMarginRatioByMoney
        self.ExchLongMarginRatioByMoney=ExchLongMarginRatioByMoney
        self.ExchShortMarginRatioByMoney=ExchShortMarginRatioByMoney
        self.LongMarginRatioByMoney=LongMarginRatioByMoney
        self.ExchShortMarginRatioByVolume=ExchShortMarginRatioByVolume
        self.ExchLongMarginRatioByVolume=ExchLongMarginRatioByVolume
        self.NoShortMarginRatioByMoney=NoShortMarginRatioByMoney
        self.NoLongMarginRatioByMoney=NoLongMarginRatioByMoney
        self.HedgeFlag=HedgeFlag
        self.NoLongMarginRatioByVolume=NoLongMarginRatioByVolume
        self.NoShortMarginRatioByVolume=NoShortMarginRatioByVolume
        self.BrokerID=BrokerID
        self.ShortMarginRatioByVolume=ShortMarginRatioByVolume
        self.LongMarginRatioByVolume=LongMarginRatioByVolume
        self.vcmap={'HedgeFlag': {"'1'": u'\u6295\u673a', "'2'": u'\u5957\u5229', "'3'": u'\u5957\u4fdd'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'ShortMarginRatioByMoney', 'ExchLongMarginRatioByMoney', 'ExchShortMarginRatioByMoney', 'LongMarginRatioByMoney', 'ExchShortMarginRatioByVolume', 'ExchLongMarginRatioByVolume', 'NoShortMarginRatioByMoney', 'NoLongMarginRatioByMoney', 'HedgeFlag', 'NoLongMarginRatioByVolume', 'NoShortMarginRatioByVolume', 'BrokerID', 'ShortMarginRatioByVolume', 'LongMarginRatioByVolume']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('ShortMarginRatioByMoney', u'跟随交易所投资者空头保证金率'),('ExchLongMarginRatioByMoney', u'交易所多头保证金率'),('ExchShortMarginRatioByMoney', u'交易所空头保证金率'),('LongMarginRatioByMoney', u'跟随交易所投资者多头保证金率'),('ExchShortMarginRatioByVolume', u'交易所空头保证金费'),('ExchLongMarginRatioByVolume', u'交易所多头保证金费'),('NoShortMarginRatioByMoney', u'不跟随交易所投资者空头保证金率'),('NoLongMarginRatioByMoney', u'不跟随交易所投资者多头保证金率'),('HedgeFlag', u'投机套保标志'),('NoLongMarginRatioByVolume', u'不跟随交易所投资者多头保证金费'),('NoShortMarginRatioByVolume', u'不跟随交易所投资者空头保证金费'),('BrokerID', u'经纪公司代码'),('ShortMarginRatioByVolume', u'跟随交易所投资者空头保证金费'),('LongMarginRatioByVolume', u'跟随交易所投资者多头保证金费')]])
    def getval(self, n):
        if n in ['HedgeFlag']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryFrontStatusField:
    def __init__(self, FrontID=0):
        self.FrontID=FrontID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['FrontID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('FrontID', u'前置编号')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryNoticeField:
    def __init__(self, BrokerID=""):
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcSyncingInvestorGroupField:
    def __init__(self, InvestorGroupID="", BrokerID="", InvestorGroupName=""):
        self.InvestorGroupID=InvestorGroupID
        self.BrokerID=BrokerID
        self.InvestorGroupName=InvestorGroupName
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorGroupID', 'BrokerID', 'InvestorGroupName']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorGroupID', u'投资者分组代码'),('BrokerID', u'经纪公司代码'),('InvestorGroupName', u'投资者分组名称')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcTraderField:
    def __init__(self, ExchangeID="", ParticipantID="", TraderID="", BrokerID="", InstallCount=0, Password=""):
        self.ExchangeID=ExchangeID
        self.ParticipantID=ParticipantID
        self.TraderID=TraderID
        self.BrokerID=BrokerID
        self.InstallCount=InstallCount
        self.Password=Password
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeID', 'ParticipantID', 'TraderID', 'BrokerID', 'InstallCount', 'Password']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeID', u'交易所代码'),('ParticipantID', u'会员代码'),('TraderID', u'交易所交易员代码'),('BrokerID', u'经纪公司代码'),('InstallCount', u'安装数量'),('Password', u'密码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcNotifyFutureSignOutField:
    def __init__(self, BrokerBranchID="", UserID="", TradeTime="", TID=0, InstallID=0, TradeCode="", BankBranchID="", SessionID=0, BankID="", PlateSerial=0, ErrorID=0, BankSerial="", OperNo="", TradingDay="", BrokerID="", DeviceID="", TradeDate="", CurrencyID="", ErrorMsg="", LastFragment='0', RequestID=0, BrokerIDByBank="", Digest=""):
        self.BrokerBranchID=BrokerBranchID
        self.UserID=UserID
        self.TradeTime=TradeTime
        self.TID=TID
        self.InstallID=InstallID
        self.TradeCode=TradeCode
        self.BankBranchID=BankBranchID
        self.SessionID=SessionID
        self.BankID=BankID
        self.PlateSerial=PlateSerial
        self.ErrorID=ErrorID
        self.BankSerial=BankSerial
        self.OperNo=OperNo
        self.TradingDay=TradingDay
        self.BrokerID=BrokerID
        self.DeviceID=DeviceID
        self.TradeDate=TradeDate
        self.CurrencyID=CurrencyID
        self.ErrorMsg=ErrorMsg
        self.LastFragment=LastFragment
        self.RequestID=RequestID
        self.BrokerIDByBank=BrokerIDByBank
        self.Digest=Digest
        self.vcmap={'LastFragment': {"'1'": u'\u4e0d\u662f\u6700\u540e\u5206\u7247', "'0'": u'\u662f\u6700\u540e\u5206\u7247'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerBranchID', 'UserID', 'TradeTime', 'TID', 'InstallID', 'TradeCode', 'BankBranchID', 'SessionID', 'BankID', 'PlateSerial', 'ErrorID', 'BankSerial', 'OperNo', 'TradingDay', 'BrokerID', 'DeviceID', 'TradeDate', 'CurrencyID', 'ErrorMsg', 'LastFragment', 'RequestID', 'BrokerIDByBank', 'Digest']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerBranchID', u'期商分支机构代码'),('UserID', u'用户标识'),('TradeTime', u'交易时间'),('TID', u'交易ID'),('InstallID', u'安装编号'),('TradeCode', u'业务功能码'),('BankBranchID', u'银行分支机构代码'),('SessionID', u'会话号'),('BankID', u'银行代码'),('PlateSerial', u'银期平台消息流水号'),('ErrorID', u'错误代码'),('BankSerial', u'银行流水号'),('OperNo', u'交易柜员'),('TradingDay', u'交易系统日期'),('BrokerID', u'期商代码'),('DeviceID', u'渠道标志'),('TradeDate', u'交易日期'),('CurrencyID', u'币种代码'),('ErrorMsg', u'错误信息'),('LastFragment', u'最后分片标志'),('RequestID', u'请求编号'),('BrokerIDByBank', u'期货公司银行编码'),('Digest', u'摘要')]])
    def getval(self, n):
        if n in ['LastFragment']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcLoginInfoField:
    def __init__(self, CZCETime="", MacAddress="", SHFETime="", MaxOrderRef="", UserProductInfo="", InterfaceProductInfo="", UserID="", LoginDate="", SystemName="", SessionID=0, BrokerID="", OneTimePassword="", FFEXTime="", FrontID=0, DCETime="", Password="", IPAddress="", LoginTime="", ProtocolInfo=""):
        self.CZCETime=CZCETime
        self.MacAddress=MacAddress
        self.SHFETime=SHFETime
        self.MaxOrderRef=MaxOrderRef
        self.UserProductInfo=UserProductInfo
        self.InterfaceProductInfo=InterfaceProductInfo
        self.UserID=UserID
        self.LoginDate=LoginDate
        self.SystemName=SystemName
        self.SessionID=SessionID
        self.BrokerID=BrokerID
        self.OneTimePassword=OneTimePassword
        self.FFEXTime=FFEXTime
        self.FrontID=FrontID
        self.DCETime=DCETime
        self.Password=Password
        self.IPAddress=IPAddress
        self.LoginTime=LoginTime
        self.ProtocolInfo=ProtocolInfo
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['CZCETime', 'MacAddress', 'SHFETime', 'MaxOrderRef', 'UserProductInfo', 'InterfaceProductInfo', 'UserID', 'LoginDate', 'SystemName', 'SessionID', 'BrokerID', 'OneTimePassword', 'FFEXTime', 'FrontID', 'DCETime', 'Password', 'IPAddress', 'LoginTime', 'ProtocolInfo']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('CZCETime', u'郑商所时间'),('MacAddress', u'Mac地址'),('SHFETime', u'上期所时间'),('MaxOrderRef', u'最大报单引用'),('UserProductInfo', u'用户端产品信息'),('InterfaceProductInfo', u'接口端产品信息'),('UserID', u'用户代码'),('LoginDate', u'登录日期'),('SystemName', u'系统名称'),('SessionID', u'会话编号'),('BrokerID', u'经纪公司代码'),('OneTimePassword', u'动态密码'),('FFEXTime', u'中金所时间'),('FrontID', u'前置编号'),('DCETime', u'大商所时间'),('Password', u'密码'),('IPAddress', u'IP地址'),('LoginTime', u'登录时间'),('ProtocolInfo', u'协议信息')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcLoadSettlementInfoField:
    def __init__(self, BrokerID=""):
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcTradingAccountPasswordField:
    def __init__(self, Password="", BrokerID="", AccountID=""):
        self.Password=Password
        self.BrokerID=BrokerID
        self.AccountID=AccountID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['Password', 'BrokerID', 'AccountID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('Password', u'密码'),('BrokerID', u'经纪公司代码'),('AccountID', u'投资者帐号')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcSettlementInfoConfirmField:
    def __init__(self, ConfirmTime="", InvestorID="", BrokerID="", ConfirmDate=""):
        self.ConfirmTime=ConfirmTime
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.ConfirmDate=ConfirmDate
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ConfirmTime', 'InvestorID', 'BrokerID', 'ConfirmDate']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ConfirmTime', u'确认时间'),('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('ConfirmDate', u'确认日期')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcRspTransferField:
    def __init__(self, BrokerBranchID="", UserID="", BankPassWord="", TradeTime="", VerifyCertNoFlag='0', TID=0, AccountID="", BankAccount="", InstallID=0, CustomerName="", TradeCode="", BankBranchID="", SessionID=0, BankID="", Password="", BankPwdFlag='0', ErrorID=0, RequestID=0, CustType='0', IdentifiedCardNo="", FeePayFlag='0', BankSerial="", OperNo="", TradingDay="", BankSecuAcc="", BrokerID="", DeviceID="", TransferStatus='0', IdCardType='0', PlateSerial=0, FutureFetchAmount=0, TradeDate="", CurrencyID="", BrokerFee=0, BankAccType='1', LastFragment='0', FutureSerial=0, ErrorMsg="", BankSecuAccType='1', BrokerIDByBank="", SecuPwdFlag='0', Message="", CustFee=0, TradeAmount=0, Digest=""):
        self.BrokerBranchID=BrokerBranchID
        self.UserID=UserID
        self.BankPassWord=BankPassWord
        self.TradeTime=TradeTime
        self.VerifyCertNoFlag=VerifyCertNoFlag
        self.TID=TID
        self.AccountID=AccountID
        self.BankAccount=BankAccount
        self.InstallID=InstallID
        self.CustomerName=CustomerName
        self.TradeCode=TradeCode
        self.BankBranchID=BankBranchID
        self.SessionID=SessionID
        self.BankID=BankID
        self.Password=Password
        self.BankPwdFlag=BankPwdFlag
        self.ErrorID=ErrorID
        self.RequestID=RequestID
        self.CustType=CustType
        self.IdentifiedCardNo=IdentifiedCardNo
        self.FeePayFlag=FeePayFlag
        self.BankSerial=BankSerial
        self.OperNo=OperNo
        self.TradingDay=TradingDay
        self.BankSecuAcc=BankSecuAcc
        self.BrokerID=BrokerID
        self.DeviceID=DeviceID
        self.TransferStatus=TransferStatus
        self.IdCardType=IdCardType
        self.PlateSerial=PlateSerial
        self.FutureFetchAmount=FutureFetchAmount
        self.TradeDate=TradeDate
        self.CurrencyID=CurrencyID
        self.BrokerFee=BrokerFee
        self.BankAccType=BankAccType
        self.LastFragment=LastFragment
        self.FutureSerial=FutureSerial
        self.ErrorMsg=ErrorMsg
        self.BankSecuAccType=BankSecuAccType
        self.BrokerIDByBank=BrokerIDByBank
        self.SecuPwdFlag=SecuPwdFlag
        self.Message=Message
        self.CustFee=CustFee
        self.TradeAmount=TradeAmount
        self.Digest=Digest
        self.vcmap={'CustType': {"'1'": u'\u673a\u6784\u6237', "'0'": u'\u81ea\u7136\u4eba'}, 'BankAccType': {"'1'": u'\u94f6\u884c\u5b58\u6298', "'2'": u'\u50a8\u84c4\u5361', "'3'": u'\u4fe1\u7528\u5361'}, 'BankPwdFlag': {"'1'": u'\u660e\u6587\u6838\u5bf9', "'2'": u'\u5bc6\u6587\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}, 'LastFragment': {"'1'": u'\u4e0d\u662f\u6700\u540e\u5206\u7247', "'0'": u'\u662f\u6700\u540e\u5206\u7247'}, 'SecuPwdFlag': {"'1'": u'\u660e\u6587\u6838\u5bf9', "'2'": u'\u5bc6\u6587\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}, 'VerifyCertNoFlag': {"'1'": u'\u5426', "'0'": u'\u662f'}, 'TransferStatus': {"'1'": u'\u88ab\u51b2\u6b63', "'0'": u'\u6b63\u5e38'}, 'FeePayFlag': {"'1'": u'\u7531\u53d1\u9001\u65b9\u652f\u4ed8\u8d39\u7528', "'2'": u'\u7531\u53d1\u9001\u65b9\u652f\u4ed8\u53d1\u8d77\u7684\u8d39\u7528\uff0c\u53d7\u76ca\u65b9\u652f\u4ed8\u63a5\u53d7\u7684\u8d39\u7528', "'0'": u'\u7531\u53d7\u76ca\u65b9\u652f\u4ed8\u8d39\u7528'}, 'BankSecuAccType': {"'1'": u'\u94f6\u884c\u5b58\u6298', "'2'": u'\u50a8\u84c4\u5361', "'3'": u'\u4fe1\u7528\u5361'}, 'IdCardType': {"'9'": u'\u8425\u4e1a\u6267\u7167\u53f7', "'7'": u'\u53f0\u80de\u8bc1', "'x'": u'\u5176\u4ed6\u8bc1\u4ef6', "'5'": u'\u6237\u53e3\u7c3f', "'4'": u'\u58eb\u5175\u8bc1', "'1'": u'\u8eab\u4efd\u8bc1', "'0'": u'\u7ec4\u7ec7\u673a\u6784\u4ee3\u7801', "'6'": u'\u62a4\u7167', "'2'": u'\u519b\u5b98\u8bc1', "'8'": u'\u56de\u4e61\u8bc1', "'3'": u'\u8b66\u5b98\u8bc1', "'A'": u'\u7a0e\u52a1\u767b\u8bb0\u53f7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerBranchID', 'UserID', 'BankPassWord', 'TradeTime', 'VerifyCertNoFlag', 'TID', 'AccountID', 'BankAccount', 'InstallID', 'CustomerName', 'TradeCode', 'BankBranchID', 'SessionID', 'BankID', 'Password', 'BankPwdFlag', 'ErrorID', 'RequestID', 'CustType', 'IdentifiedCardNo', 'FeePayFlag', 'BankSerial', 'OperNo', 'TradingDay', 'BankSecuAcc', 'BrokerID', 'DeviceID', 'TransferStatus', 'IdCardType', 'PlateSerial', 'FutureFetchAmount', 'TradeDate', 'CurrencyID', 'BrokerFee', 'BankAccType', 'LastFragment', 'FutureSerial', 'ErrorMsg', 'BankSecuAccType', 'BrokerIDByBank', 'SecuPwdFlag', 'Message', 'CustFee', 'TradeAmount', 'Digest']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerBranchID', u'期商分支机构代码'),('UserID', u'用户标识'),('BankPassWord', u'银行密码'),('TradeTime', u'交易时间'),('VerifyCertNoFlag', u'验证客户证件号码标志'),('TID', u'交易ID'),('AccountID', u'投资者帐号'),('BankAccount', u'银行帐号'),('InstallID', u'安装编号'),('CustomerName', u'客户姓名'),('TradeCode', u'业务功能码'),('BankBranchID', u'银行分支机构代码'),('SessionID', u'会话号'),('BankID', u'银行代码'),('Password', u'期货密码'),('BankPwdFlag', u'银行密码标志'),('ErrorID', u'错误代码'),('RequestID', u'请求编号'),('CustType', u'客户类型'),('IdentifiedCardNo', u'证件号码'),('FeePayFlag', u'费用支付标志'),('BankSerial', u'银行流水号'),('OperNo', u'交易柜员'),('TradingDay', u'交易系统日期'),('BankSecuAcc', u'期货单位帐号'),('BrokerID', u'期商代码'),('DeviceID', u'渠道标志'),('TransferStatus', u'转账交易状态'),('IdCardType', u'证件类型'),('PlateSerial', u'银期平台消息流水号'),('FutureFetchAmount', u'期货可取金额'),('TradeDate', u'交易日期'),('CurrencyID', u'币种代码'),('BrokerFee', u'应收期货公司费用'),('BankAccType', u'银行帐号类型'),('LastFragment', u'最后分片标志'),('FutureSerial', u'期货公司流水号'),('ErrorMsg', u'错误信息'),('BankSecuAccType', u'期货单位帐号类型'),('BrokerIDByBank', u'期货公司银行编码'),('SecuPwdFlag', u'期货资金密码核对标志'),('Message', u'发送方给接收方的消息'),('CustFee', u'应收客户费用'),('TradeAmount', u'转帐金额'),('Digest', u'摘要')]])
    def getval(self, n):
        if n in ['VerifyCertNoFlag', 'BankPwdFlag', 'CustType', 'FeePayFlag', 'TransferStatus', 'IdCardType', 'BankAccType', 'LastFragment', 'BankSecuAccType', 'SecuPwdFlag']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryExchangeOrderActionField:
    def __init__(self, ExchangeID="", TraderID="", ParticipantID="", ClientID=""):
        self.ExchangeID=ExchangeID
        self.TraderID=TraderID
        self.ParticipantID=ParticipantID
        self.ClientID=ClientID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeID', 'TraderID', 'ParticipantID', 'ClientID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeID', u'交易所代码'),('TraderID', u'交易所交易员代码'),('ParticipantID', u'会员代码'),('ClientID', u'客户代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcTransferBankToFutureRspField:
    def __init__(self, FutureAccount="", RetCode="", CurrencyCode="", TradeAmt=0, RetInfo="", CustFee=0):
        self.FutureAccount=FutureAccount
        self.RetCode=RetCode
        self.CurrencyCode=CurrencyCode
        self.TradeAmt=TradeAmt
        self.RetInfo=RetInfo
        self.CustFee=CustFee
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['FutureAccount', 'RetCode', 'CurrencyCode', 'TradeAmt', 'RetInfo', 'CustFee']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('FutureAccount', u'资金账户'),('RetCode', u'响应代码'),('CurrencyCode', u'币种'),('TradeAmt', u'转帐金额'),('RetInfo', u'响应信息'),('CustFee', u'应收客户手续费')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcSyncDepositField:
    def __init__(self, InvestorID="", DepositSeqNo="", BrokerID="", Deposit=0, IsForce=0):
        self.InvestorID=InvestorID
        self.DepositSeqNo=DepositSeqNo
        self.BrokerID=BrokerID
        self.Deposit=Deposit
        self.IsForce=IsForce
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'DepositSeqNo', 'BrokerID', 'Deposit', 'IsForce']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('DepositSeqNo', u'出入金流水号'),('BrokerID', u'经纪公司代码'),('Deposit', u'入金金额'),('IsForce', u'是否强制进行')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcFutureSignIOField:
    def __init__(self, InstallID=0, TradeDate="", TradeCode="", LastFragment='0', BrokerBranchID="", BrokerIDByBank="", BankSerial="", BankBranchID="", OperNo="", TradingDay="", SessionID=0, BrokerID="", DeviceID="", UserID="", BankID="", TID=0, TradeTime="", PlateSerial=0, CurrencyID="", Digest="", RequestID=0):
        self.InstallID=InstallID
        self.TradeDate=TradeDate
        self.TradeCode=TradeCode
        self.LastFragment=LastFragment
        self.BrokerBranchID=BrokerBranchID
        self.BrokerIDByBank=BrokerIDByBank
        self.BankSerial=BankSerial
        self.BankBranchID=BankBranchID
        self.OperNo=OperNo
        self.TradingDay=TradingDay
        self.SessionID=SessionID
        self.BrokerID=BrokerID
        self.DeviceID=DeviceID
        self.UserID=UserID
        self.BankID=BankID
        self.TID=TID
        self.TradeTime=TradeTime
        self.PlateSerial=PlateSerial
        self.CurrencyID=CurrencyID
        self.Digest=Digest
        self.RequestID=RequestID
        self.vcmap={'LastFragment': {"'1'": u'\u4e0d\u662f\u6700\u540e\u5206\u7247', "'0'": u'\u662f\u6700\u540e\u5206\u7247'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstallID', 'TradeDate', 'TradeCode', 'LastFragment', 'BrokerBranchID', 'BrokerIDByBank', 'BankSerial', 'BankBranchID', 'OperNo', 'TradingDay', 'SessionID', 'BrokerID', 'DeviceID', 'UserID', 'BankID', 'TID', 'TradeTime', 'PlateSerial', 'CurrencyID', 'Digest', 'RequestID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstallID', u'安装编号'),('TradeDate', u'交易日期'),('TradeCode', u'业务功能码'),('LastFragment', u'最后分片标志'),('BrokerBranchID', u'期商分支机构代码'),('BrokerIDByBank', u'期货公司银行编码'),('BankSerial', u'银行流水号'),('BankBranchID', u'银行分支机构代码'),('OperNo', u'交易柜员'),('TradingDay', u'交易系统日期'),('SessionID', u'会话号'),('BrokerID', u'期商代码'),('DeviceID', u'渠道标志'),('UserID', u'用户标识'),('BankID', u'银行代码'),('TID', u'交易ID'),('TradeTime', u'交易时间'),('PlateSerial', u'银期平台消息流水号'),('CurrencyID', u'币种代码'),('Digest', u'摘要'),('RequestID', u'请求编号')]])
    def getval(self, n):
        if n in ['LastFragment']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcBrokerField:
    def __init__(self, BrokerAbbr="", BrokerID="", BrokerName="", IsActive=0):
        self.BrokerAbbr=BrokerAbbr
        self.BrokerID=BrokerID
        self.BrokerName=BrokerName
        self.IsActive=IsActive
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerAbbr', 'BrokerID', 'BrokerName', 'IsActive']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerAbbr', u'经纪公司简称'),('BrokerID', u'经纪公司代码'),('BrokerName', u'经纪公司名称'),('IsActive', u'是否活跃')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryInstrumentTradingRightField:
    def __init__(self, InstrumentID="", InvestorID="", BrokerID=""):
        self.InstrumentID=InstrumentID
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'InvestorID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryAccountregisterField:
    def __init__(self, BankID="", BrokerID="", AccountID=""):
        self.BankID=BankID
        self.BrokerID=BrokerID
        self.AccountID=AccountID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BankID', 'BrokerID', 'AccountID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BankID', u'银行编码'),('BrokerID', u'经纪公司代码'),('AccountID', u'投资者帐号')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcBrokerUserEventField:
    def __init__(self, InstrumentID="", EventSequenceNo=0, EventTime="", UserID="", InvestorID="", BrokerID="", UserEventInfo="", EventDate="", UserEventType='1'):
        self.InstrumentID=InstrumentID
        self.EventSequenceNo=EventSequenceNo
        self.EventTime=EventTime
        self.UserID=UserID
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.UserEventInfo=UserEventInfo
        self.EventDate=EventDate
        self.UserEventType=UserEventType
        self.vcmap={'UserEventType': {"'9'": u'\u5176\u4ed6', "'5'": u'\u4fee\u6539\u5bc6\u7801', "'4'": u'\u4ea4\u6613\u5931\u8d25', "'1'": u'\u767b\u5f55', "'6'": u'\u5ba2\u6237\u7aef\u8ba4\u8bc1', "'2'": u'\u767b\u51fa', "'3'": u'\u4ea4\u6613\u6210\u529f'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'EventSequenceNo', 'EventTime', 'UserID', 'InvestorID', 'BrokerID', 'UserEventInfo', 'EventDate', 'UserEventType']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('EventSequenceNo', u'用户事件序号'),('EventTime', u'事件发生时间'),('UserID', u'用户代码'),('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('UserEventInfo', u'用户事件信息'),('EventDate', u'事件发生日期'),('UserEventType', u'用户事件类型')]])
    def getval(self, n):
        if n in ['UserEventType']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcBrokerUserFunctionField:
    def __init__(self, UserID="", BrokerID="", BrokerFunctionCode='1'):
        self.UserID=UserID
        self.BrokerID=BrokerID
        self.BrokerFunctionCode=BrokerFunctionCode
        self.vcmap={'BrokerFunctionCode': {"'B'": u'\u884c\u60c5\u9884\u8b66', "'x'": u'\u51c0\u6301\u4ed3\u4fdd\u8bc1\u91d1\u6307\u6807', "'z'": u'\u6570\u636e\u5bfc\u51fa', "'d'": u'\u4ea4\u6613\u529f\u80fd\uff1a\u62a5\u5355\uff0c\u64a4\u5355', "'f'": u'\u98ce\u9669\u76d1\u63a7', "'7'": u'\u5168\u90e8\u67e5\u8be2', "'5'": u'\u62a5\u5355\u63d2\u5165', "'c'": u'\u4ea4\u6613\u67e5\u8be2\uff1a\u5982\u67e5\u6210\u4ea4\uff0c\u59d4\u6258', "'t'": u'\u4ea4\u6613\u7f16\u7801\u67e5\u8be2', "'1'": u'\u5f3a\u5236\u7528\u6237\u767b\u51fa', "'o'": u'\u884c\u60c5\u67e5\u8be2', "'p'": u'\u7528\u6237\u4e8b\u4ef6\u67e5\u8be2', "'m'": u'\u6210\u4ea4\u67e5\u8be2', "'v'": u'\u538b\u529b\u6d4b\u8bd5', "'i'": u'\u98ce\u63a7\u901a\u77e5\u53d1\u9001', "'r'": u'\u51fa\u5165\u91d1\u67e5\u8be2', "'3'": u'\u540c\u6b65\u7ecf\u7eaa\u516c\u53f8\u6570\u636e', "'D'": u'\u4e1a\u52a1\u901a\u77e5\u6a21\u677f\u8bbe\u7f6e', "'F'": u'\u53d1\u9001\u4e1a\u52a1\u901a\u77e5', "'k'": u'\u8d44\u91d1\u67e5\u8be2', "'y'": u'\u98ce\u9669\u9884\u7b97', "'C'": u'\u4e1a\u52a1\u901a\u77e5\u67e5\u8be2', "'g'": u'\u67e5\u8be2/\u7ba1\u7406\uff1a\u67e5\u8be2\u4f1a\u8bdd\uff0c\u8e22\u4eba\u7b49', "'e'": u'\u94f6\u671f\u8f6c\u8d26', "'a'": u'\u7cfb\u7edf\u529f\u80fd\uff1a\u767b\u5165/\u767b\u51fa/\u4fee\u6539\u5bc6\u7801\u7b49', "'b'": u'\u57fa\u672c\u67e5\u8be2\uff1a\u67e5\u8be2\u57fa\u7840\u6570\u636e\uff0c\u5982\u5408\u7ea6\uff0c\u4ea4\u6613\u6240\u7b49\u5e38\u91cf', "'w'": u'\u6743\u76ca\u53cd\u7b97', "'u'": u'\u5f3a\u5e73', "'4'": u'\u6279\u91cf\u540c\u6b65\u7ecf\u7eaa\u516c\u53f8\u6570\u636e', "'q'": u'\u98ce\u9669\u901a\u77e5\u67e5\u8be2', "'6'": u'\u62a5\u5355\u64cd\u4f5c', "'l'": u'\u62a5\u5355\u67e5\u8be2', "'2'": u'\u53d8\u66f4\u7528\u6237\u53e3\u4ee4', "'G'": u'\u98ce\u9669\u7ea7\u522b\u6807\u51c6\u8bbe\u7f6e', "'h'": u'\u98ce\u63a7\u901a\u77e5\u63a7\u5236', "'E'": u'\u540c\u6b65\u52a8\u6001\u4ee4\u724c', "'n'": u'\u6301\u4ed3\u67e5\u8be2', "'s'": u'\u6295\u8d44\u8005\u4fe1\u606f\u67e5\u8be2', "'A'": u'\u98ce\u63a7\u6307\u6807\u8bbe\u7f6e', "'j'": u'\u5bdf\u770b\u7ecf\u7eaa\u516c\u53f8\u8d44\u91d1\u6743\u9650'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserID', 'BrokerID', 'BrokerFunctionCode']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserID', u'用户代码'),('BrokerID', u'经纪公司代码'),('BrokerFunctionCode', u'经纪公司功能代码')]])
    def getval(self, n):
        if n in ['BrokerFunctionCode']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcTradingAccountField:
    def __init__(self, Mortgage=0, ExchangeDeliveryMargin=0, FrozenMargin=0, WithdrawQuota=0, PositionProfit=0, Commission=0, Interest=0, CashIn=0, AccountID="", Available=0, PreCredit=0, PreMortgage=0, InterestBase=0, ExchangeMargin=0, PreMargin=0, SettlementID=0, DeliveryMargin=0, TradingDay="", BrokerID="", FrozenCash=0, Withdraw=0, Balance=0, Reserve=0, PreDeposit=0, Credit=0, PreBalance=0, CurrMargin=0, FrozenCommission=0, CloseProfit=0, Deposit=0):
        self.Mortgage=Mortgage
        self.ExchangeDeliveryMargin=ExchangeDeliveryMargin
        self.FrozenMargin=FrozenMargin
        self.WithdrawQuota=WithdrawQuota
        self.PositionProfit=PositionProfit
        self.Commission=Commission
        self.Interest=Interest
        self.CashIn=CashIn
        self.AccountID=AccountID
        self.Available=Available
        self.PreCredit=PreCredit
        self.PreMortgage=PreMortgage
        self.InterestBase=InterestBase
        self.ExchangeMargin=ExchangeMargin
        self.PreMargin=PreMargin
        self.SettlementID=SettlementID
        self.DeliveryMargin=DeliveryMargin
        self.TradingDay=TradingDay
        self.BrokerID=BrokerID
        self.FrozenCash=FrozenCash
        self.Withdraw=Withdraw
        self.Balance=Balance
        self.Reserve=Reserve
        self.PreDeposit=PreDeposit
        self.Credit=Credit
        self.PreBalance=PreBalance
        self.CurrMargin=CurrMargin
        self.FrozenCommission=FrozenCommission
        self.CloseProfit=CloseProfit
        self.Deposit=Deposit
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['Mortgage', 'ExchangeDeliveryMargin', 'FrozenMargin', 'WithdrawQuota', 'PositionProfit', 'Commission', 'Interest', 'CashIn', 'AccountID', 'Available', 'PreCredit', 'PreMortgage', 'InterestBase', 'ExchangeMargin', 'PreMargin', 'SettlementID', 'DeliveryMargin', 'TradingDay', 'BrokerID', 'FrozenCash', 'Withdraw', 'Balance', 'Reserve', 'PreDeposit', 'Credit', 'PreBalance', 'CurrMargin', 'FrozenCommission', 'CloseProfit', 'Deposit']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('Mortgage', u'质押金额'),('ExchangeDeliveryMargin', u'交易所交割保证金'),('FrozenMargin', u'冻结的保证金'),('WithdrawQuota', u'可取资金'),('PositionProfit', u'持仓盈亏'),('Commission', u'手续费'),('Interest', u'利息收入'),('CashIn', u'资金差额'),('AccountID', u'投资者帐号'),('Available', u'可用资金'),('PreCredit', u'上次信用额度'),('PreMortgage', u'上次质押金额'),('InterestBase', u'利息基数'),('ExchangeMargin', u'交易所保证金'),('PreMargin', u'上次占用的保证金'),('SettlementID', u'结算编号'),('DeliveryMargin', u'投资者交割保证金'),('TradingDay', u'交易日'),('BrokerID', u'经纪公司代码'),('FrozenCash', u'冻结的资金'),('Withdraw', u'出金金额'),('Balance', u'期货结算准备金'),('Reserve', u'基本准备金'),('PreDeposit', u'上次存款额'),('Credit', u'信用额度'),('PreBalance', u'上次结算准备金'),('CurrMargin', u'当前保证金总额'),('FrozenCommission', u'冻结的手续费'),('CloseProfit', u'平仓盈亏'),('Deposit', u'入金金额')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcTransferBankField:
    def __init__(self, BankName="", IsActive=0, BankBrchID="", BankID=""):
        self.BankName=BankName
        self.IsActive=IsActive
        self.BankBrchID=BankBrchID
        self.BankID=BankID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BankName', 'IsActive', 'BankBrchID', 'BankID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BankName', u'银行名称'),('IsActive', u'是否活跃'),('BankBrchID', u'银行分中心代码'),('BankID', u'银行代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcRspSyncKeyField:
    def __init__(self, BrokerBranchID="", UserID="", TradeTime="", TID=0, InstallID=0, TradeCode="", BankBranchID="", SessionID=0, BankID="", PlateSerial=0, ErrorID=0, BankSerial="", OperNo="", TradingDay="", BrokerID="", DeviceID="", TradeDate="", ErrorMsg="", LastFragment='0', RequestID=0, BrokerIDByBank="", Message=""):
        self.BrokerBranchID=BrokerBranchID
        self.UserID=UserID
        self.TradeTime=TradeTime
        self.TID=TID
        self.InstallID=InstallID
        self.TradeCode=TradeCode
        self.BankBranchID=BankBranchID
        self.SessionID=SessionID
        self.BankID=BankID
        self.PlateSerial=PlateSerial
        self.ErrorID=ErrorID
        self.BankSerial=BankSerial
        self.OperNo=OperNo
        self.TradingDay=TradingDay
        self.BrokerID=BrokerID
        self.DeviceID=DeviceID
        self.TradeDate=TradeDate
        self.ErrorMsg=ErrorMsg
        self.LastFragment=LastFragment
        self.RequestID=RequestID
        self.BrokerIDByBank=BrokerIDByBank
        self.Message=Message
        self.vcmap={'LastFragment': {"'1'": u'\u4e0d\u662f\u6700\u540e\u5206\u7247', "'0'": u'\u662f\u6700\u540e\u5206\u7247'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerBranchID', 'UserID', 'TradeTime', 'TID', 'InstallID', 'TradeCode', 'BankBranchID', 'SessionID', 'BankID', 'PlateSerial', 'ErrorID', 'BankSerial', 'OperNo', 'TradingDay', 'BrokerID', 'DeviceID', 'TradeDate', 'ErrorMsg', 'LastFragment', 'RequestID', 'BrokerIDByBank', 'Message']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerBranchID', u'期商分支机构代码'),('UserID', u'用户标识'),('TradeTime', u'交易时间'),('TID', u'交易ID'),('InstallID', u'安装编号'),('TradeCode', u'业务功能码'),('BankBranchID', u'银行分支机构代码'),('SessionID', u'会话号'),('BankID', u'银行代码'),('PlateSerial', u'银期平台消息流水号'),('ErrorID', u'错误代码'),('BankSerial', u'银行流水号'),('OperNo', u'交易柜员'),('TradingDay', u'交易系统日期'),('BrokerID', u'期商代码'),('DeviceID', u'渠道标志'),('TradeDate', u'交易日期'),('ErrorMsg', u'错误信息'),('LastFragment', u'最后分片标志'),('RequestID', u'请求编号'),('BrokerIDByBank', u'期货公司银行编码'),('Message', u'交易核心给银期报盘的消息')]])
    def getval(self, n):
        if n in ['LastFragment']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcExchangeOrderActionField:
    def __init__(self, ActionDate="", ExchangeID="", ActionTime="", OrderSysID="", OrderLocalID="", BusinessUnit="", TraderID="", UserID="", LimitPrice=0, ActionLocalID="", InstallID=0, OrderActionStatus='a', VolumeChange=0, ActionFlag='0', ClientID="", ParticipantID=""):
        self.ActionDate=ActionDate
        self.ExchangeID=ExchangeID
        self.ActionTime=ActionTime
        self.OrderSysID=OrderSysID
        self.OrderLocalID=OrderLocalID
        self.BusinessUnit=BusinessUnit
        self.TraderID=TraderID
        self.UserID=UserID
        self.LimitPrice=LimitPrice
        self.ActionLocalID=ActionLocalID
        self.InstallID=InstallID
        self.OrderActionStatus=OrderActionStatus
        self.VolumeChange=VolumeChange
        self.ActionFlag=ActionFlag
        self.ClientID=ClientID
        self.ParticipantID=ParticipantID
        self.vcmap={'OrderActionStatus': {"'a'": u'\u5df2\u7ecf\u63d0\u4ea4', "'b'": u'\u5df2\u7ecf\u63a5\u53d7', "'c'": u'\u5df2\u7ecf\u88ab\u62d2\u7edd'}, 'ActionFlag': {"'0'": u'\u5220\u9664', "'3'": u'\u4fee\u6539'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ActionDate', 'ExchangeID', 'ActionTime', 'OrderSysID', 'OrderLocalID', 'BusinessUnit', 'TraderID', 'UserID', 'LimitPrice', 'ActionLocalID', 'InstallID', 'OrderActionStatus', 'VolumeChange', 'ActionFlag', 'ClientID', 'ParticipantID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ActionDate', u'操作日期'),('ExchangeID', u'交易所代码'),('ActionTime', u'操作时间'),('OrderSysID', u'报单编号'),('OrderLocalID', u'本地报单编号'),('BusinessUnit', u'业务单元'),('TraderID', u'交易所交易员代码'),('UserID', u'用户代码'),('LimitPrice', u'价格'),('ActionLocalID', u'操作本地编号'),('InstallID', u'安装编号'),('OrderActionStatus', u'报单操作状态'),('VolumeChange', u'数量变化'),('ActionFlag', u'操作标志'),('ClientID', u'客户代码'),('ParticipantID', u'会员代码')]])
    def getval(self, n):
        if n in ['OrderActionStatus', 'ActionFlag']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcInstrumentMarginRateField:
    def __init__(self, InstrumentID="", ShortMarginRatioByMoney=0, LongMarginRatioByMoney=0, IsRelative=0, HedgeFlag='1', InvestorID="", BrokerID="", InvestorRange='1', ShortMarginRatioByVolume=0, LongMarginRatioByVolume=0):
        self.InstrumentID=InstrumentID
        self.ShortMarginRatioByMoney=ShortMarginRatioByMoney
        self.LongMarginRatioByMoney=LongMarginRatioByMoney
        self.IsRelative=IsRelative
        self.HedgeFlag=HedgeFlag
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.InvestorRange=InvestorRange
        self.ShortMarginRatioByVolume=ShortMarginRatioByVolume
        self.LongMarginRatioByVolume=LongMarginRatioByVolume
        self.vcmap={'HedgeFlag': {"'1'": u'\u6295\u673a', "'2'": u'\u5957\u5229', "'3'": u'\u5957\u4fdd'}, 'InvestorRange': {"'1'": u'\u6240\u6709', "'2'": u'\u6295\u8d44\u8005\u7ec4', "'3'": u'\u5355\u4e00\u6295\u8d44\u8005'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'ShortMarginRatioByMoney', 'LongMarginRatioByMoney', 'IsRelative', 'HedgeFlag', 'InvestorID', 'BrokerID', 'InvestorRange', 'ShortMarginRatioByVolume', 'LongMarginRatioByVolume']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('ShortMarginRatioByMoney', u'空头保证金率'),('LongMarginRatioByMoney', u'多头保证金率'),('IsRelative', u'是否相对交易所收取'),('HedgeFlag', u'投机套保标志'),('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('InvestorRange', u'投资者范围'),('ShortMarginRatioByVolume', u'空头保证金费'),('LongMarginRatioByVolume', u'多头保证金费')]])
    def getval(self, n):
        if n in ['HedgeFlag', 'InvestorRange']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcMarketDataAveragePriceField:
    def __init__(self, AveragePrice=0):
        self.AveragePrice=AveragePrice
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['AveragePrice']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('AveragePrice', u'当日均价')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryMDTraderOfferField:
    def __init__(self, ExchangeID="", TraderID="", ParticipantID=""):
        self.ExchangeID=ExchangeID
        self.TraderID=TraderID
        self.ParticipantID=ParticipantID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeID', 'TraderID', 'ParticipantID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeID', u'交易所代码'),('TraderID', u'交易所交易员代码'),('ParticipantID', u'会员代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcReqQueryTradeResultBySerialField:
    def __init__(self, BrokerBranchID="", BankPassWord="", TradeTime="", AccountID="", BankAccount="", CustomerName="", TradeCode="", BankBranchID="", RefrenceIssure="", SessionID=0, BankID="", PlateSerial=0, CustType='0', IdentifiedCardNo="", BankSerial="", TradingDay="", BrokerID="", RefrenceIssureType='0', IdCardType='0', Password="", Reference=0, TradeDate="", CurrencyID="", LastFragment='0', TradeAmount=0, Digest=""):
        self.BrokerBranchID=BrokerBranchID
        self.BankPassWord=BankPassWord
        self.TradeTime=TradeTime
        self.AccountID=AccountID
        self.BankAccount=BankAccount
        self.CustomerName=CustomerName
        self.TradeCode=TradeCode
        self.BankBranchID=BankBranchID
        self.RefrenceIssure=RefrenceIssure
        self.SessionID=SessionID
        self.BankID=BankID
        self.PlateSerial=PlateSerial
        self.CustType=CustType
        self.IdentifiedCardNo=IdentifiedCardNo
        self.BankSerial=BankSerial
        self.TradingDay=TradingDay
        self.BrokerID=BrokerID
        self.RefrenceIssureType=RefrenceIssureType
        self.IdCardType=IdCardType
        self.Password=Password
        self.Reference=Reference
        self.TradeDate=TradeDate
        self.CurrencyID=CurrencyID
        self.LastFragment=LastFragment
        self.TradeAmount=TradeAmount
        self.Digest=Digest
        self.vcmap={'CustType': {"'1'": u'\u673a\u6784\u6237', "'0'": u'\u81ea\u7136\u4eba'}, 'RefrenceIssureType': {"'1'": u'\u671f\u5546', "'2'": u'\u5238\u5546', "'0'": u'\u94f6\u884c'}, 'LastFragment': {"'1'": u'\u4e0d\u662f\u6700\u540e\u5206\u7247', "'0'": u'\u662f\u6700\u540e\u5206\u7247'}, 'IdCardType': {"'9'": u'\u8425\u4e1a\u6267\u7167\u53f7', "'7'": u'\u53f0\u80de\u8bc1', "'x'": u'\u5176\u4ed6\u8bc1\u4ef6', "'5'": u'\u6237\u53e3\u7c3f', "'4'": u'\u58eb\u5175\u8bc1', "'1'": u'\u8eab\u4efd\u8bc1', "'0'": u'\u7ec4\u7ec7\u673a\u6784\u4ee3\u7801', "'6'": u'\u62a4\u7167', "'2'": u'\u519b\u5b98\u8bc1', "'8'": u'\u56de\u4e61\u8bc1', "'3'": u'\u8b66\u5b98\u8bc1', "'A'": u'\u7a0e\u52a1\u767b\u8bb0\u53f7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerBranchID', 'BankPassWord', 'TradeTime', 'AccountID', 'BankAccount', 'CustomerName', 'TradeCode', 'BankBranchID', 'RefrenceIssure', 'SessionID', 'BankID', 'PlateSerial', 'CustType', 'IdentifiedCardNo', 'BankSerial', 'TradingDay', 'BrokerID', 'RefrenceIssureType', 'IdCardType', 'Password', 'Reference', 'TradeDate', 'CurrencyID', 'LastFragment', 'TradeAmount', 'Digest']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerBranchID', u'期商分支机构代码'),('BankPassWord', u'银行密码'),('TradeTime', u'交易时间'),('AccountID', u'投资者帐号'),('BankAccount', u'银行帐号'),('CustomerName', u'客户姓名'),('TradeCode', u'业务功能码'),('BankBranchID', u'银行分支机构代码'),('RefrenceIssure', u'本流水号发布者机构编码'),('SessionID', u'会话号'),('BankID', u'银行代码'),('PlateSerial', u'银期平台消息流水号'),('CustType', u'客户类型'),('IdentifiedCardNo', u'证件号码'),('BankSerial', u'银行流水号'),('TradingDay', u'交易系统日期'),('BrokerID', u'期商代码'),('RefrenceIssureType', u'本流水号发布者的机构类型'),('IdCardType', u'证件类型'),('Password', u'期货密码'),('Reference', u'流水号'),('TradeDate', u'交易日期'),('CurrencyID', u'币种代码'),('LastFragment', u'最后分片标志'),('TradeAmount', u'转帐金额'),('Digest', u'摘要')]])
    def getval(self, n):
        if n in ['CustType', 'RefrenceIssureType', 'IdCardType', 'LastFragment']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcUserPasswordUpdateField:
    def __init__(self, UserID="", NewPassword="", OldPassword="", BrokerID=""):
        self.UserID=UserID
        self.NewPassword=NewPassword
        self.OldPassword=OldPassword
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserID', 'NewPassword', 'OldPassword', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserID', u'用户代码'),('NewPassword', u'新的口令'),('OldPassword', u'原来的口令'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcNotifyQueryAccountField:
    def __init__(self, BrokerBranchID="", UserID="", BankPassWord="", TradeTime="", VerifyCertNoFlag='0', TID=0, AccountID="", BankAccount="", InstallID=0, CustomerName="", TradeCode="", BankBranchID="", SessionID=0, BankID="", Password="", BankPwdFlag='0', ErrorID=0, RequestID=0, CustType='0', IdentifiedCardNo="", BankSerial="", OperNo="", TradingDay="", BankSecuAcc="", BrokerID="", DeviceID="", BankUseAmount=0, IdCardType='0', PlateSerial=0, TradeDate="", CurrencyID="", ErrorMsg="", BankAccType='1', LastFragment='0', FutureSerial=0, BankSecuAccType='1', BrokerIDByBank="", SecuPwdFlag='0', Digest="", BankFetchAmount=0):
        self.BrokerBranchID=BrokerBranchID
        self.UserID=UserID
        self.BankPassWord=BankPassWord
        self.TradeTime=TradeTime
        self.VerifyCertNoFlag=VerifyCertNoFlag
        self.TID=TID
        self.AccountID=AccountID
        self.BankAccount=BankAccount
        self.InstallID=InstallID
        self.CustomerName=CustomerName
        self.TradeCode=TradeCode
        self.BankBranchID=BankBranchID
        self.SessionID=SessionID
        self.BankID=BankID
        self.Password=Password
        self.BankPwdFlag=BankPwdFlag
        self.ErrorID=ErrorID
        self.RequestID=RequestID
        self.CustType=CustType
        self.IdentifiedCardNo=IdentifiedCardNo
        self.BankSerial=BankSerial
        self.OperNo=OperNo
        self.TradingDay=TradingDay
        self.BankSecuAcc=BankSecuAcc
        self.BrokerID=BrokerID
        self.DeviceID=DeviceID
        self.BankUseAmount=BankUseAmount
        self.IdCardType=IdCardType
        self.PlateSerial=PlateSerial
        self.TradeDate=TradeDate
        self.CurrencyID=CurrencyID
        self.ErrorMsg=ErrorMsg
        self.BankAccType=BankAccType
        self.LastFragment=LastFragment
        self.FutureSerial=FutureSerial
        self.BankSecuAccType=BankSecuAccType
        self.BrokerIDByBank=BrokerIDByBank
        self.SecuPwdFlag=SecuPwdFlag
        self.Digest=Digest
        self.BankFetchAmount=BankFetchAmount
        self.vcmap={'CustType': {"'1'": u'\u673a\u6784\u6237', "'0'": u'\u81ea\u7136\u4eba'}, 'BankPwdFlag': {"'1'": u'\u660e\u6587\u6838\u5bf9', "'2'": u'\u5bc6\u6587\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}, 'LastFragment': {"'1'": u'\u4e0d\u662f\u6700\u540e\u5206\u7247', "'0'": u'\u662f\u6700\u540e\u5206\u7247'}, 'SecuPwdFlag': {"'1'": u'\u660e\u6587\u6838\u5bf9', "'2'": u'\u5bc6\u6587\u6838\u5bf9', "'0'": u'\u4e0d\u6838\u5bf9'}, 'VerifyCertNoFlag': {"'1'": u'\u5426', "'0'": u'\u662f'}, 'BankAccType': {"'1'": u'\u94f6\u884c\u5b58\u6298', "'2'": u'\u50a8\u84c4\u5361', "'3'": u'\u4fe1\u7528\u5361'}, 'BankSecuAccType': {"'1'": u'\u94f6\u884c\u5b58\u6298', "'2'": u'\u50a8\u84c4\u5361', "'3'": u'\u4fe1\u7528\u5361'}, 'IdCardType': {"'9'": u'\u8425\u4e1a\u6267\u7167\u53f7', "'7'": u'\u53f0\u80de\u8bc1', "'x'": u'\u5176\u4ed6\u8bc1\u4ef6', "'5'": u'\u6237\u53e3\u7c3f', "'4'": u'\u58eb\u5175\u8bc1', "'1'": u'\u8eab\u4efd\u8bc1', "'0'": u'\u7ec4\u7ec7\u673a\u6784\u4ee3\u7801', "'6'": u'\u62a4\u7167', "'2'": u'\u519b\u5b98\u8bc1', "'8'": u'\u56de\u4e61\u8bc1', "'3'": u'\u8b66\u5b98\u8bc1', "'A'": u'\u7a0e\u52a1\u767b\u8bb0\u53f7'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerBranchID', 'UserID', 'BankPassWord', 'TradeTime', 'VerifyCertNoFlag', 'TID', 'AccountID', 'BankAccount', 'InstallID', 'CustomerName', 'TradeCode', 'BankBranchID', 'SessionID', 'BankID', 'Password', 'BankPwdFlag', 'ErrorID', 'RequestID', 'CustType', 'IdentifiedCardNo', 'BankSerial', 'OperNo', 'TradingDay', 'BankSecuAcc', 'BrokerID', 'DeviceID', 'BankUseAmount', 'IdCardType', 'PlateSerial', 'TradeDate', 'CurrencyID', 'ErrorMsg', 'BankAccType', 'LastFragment', 'FutureSerial', 'BankSecuAccType', 'BrokerIDByBank', 'SecuPwdFlag', 'Digest', 'BankFetchAmount']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerBranchID', u'期商分支机构代码'),('UserID', u'用户标识'),('BankPassWord', u'银行密码'),('TradeTime', u'交易时间'),('VerifyCertNoFlag', u'验证客户证件号码标志'),('TID', u'交易ID'),('AccountID', u'投资者帐号'),('BankAccount', u'银行帐号'),('InstallID', u'安装编号'),('CustomerName', u'客户姓名'),('TradeCode', u'业务功能码'),('BankBranchID', u'银行分支机构代码'),('SessionID', u'会话号'),('BankID', u'银行代码'),('Password', u'期货密码'),('BankPwdFlag', u'银行密码标志'),('ErrorID', u'错误代码'),('RequestID', u'请求编号'),('CustType', u'客户类型'),('IdentifiedCardNo', u'证件号码'),('BankSerial', u'银行流水号'),('OperNo', u'交易柜员'),('TradingDay', u'交易系统日期'),('BankSecuAcc', u'期货单位帐号'),('BrokerID', u'期商代码'),('DeviceID', u'渠道标志'),('BankUseAmount', u'银行可用金额'),('IdCardType', u'证件类型'),('PlateSerial', u'银期平台消息流水号'),('TradeDate', u'交易日期'),('CurrencyID', u'币种代码'),('ErrorMsg', u'错误信息'),('BankAccType', u'银行帐号类型'),('LastFragment', u'最后分片标志'),('FutureSerial', u'期货公司流水号'),('BankSecuAccType', u'期货单位帐号类型'),('BrokerIDByBank', u'期货公司银行编码'),('SecuPwdFlag', u'期货资金密码核对标志'),('Digest', u'摘要'),('BankFetchAmount', u'银行可取金额')]])
    def getval(self, n):
        if n in ['VerifyCertNoFlag', 'BankPwdFlag', 'CustType', 'IdCardType', 'BankAccType', 'LastFragment', 'BankSecuAccType', 'SecuPwdFlag']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcMarketDataField:
    def __init__(self, HighestPrice=0, LowerLimitPrice=0, OpenPrice=0, PreClosePrice=0, PreSettlementPrice=0, UpdateTime="", UpdateMillisec=0, PreOpenInterest=0, Volume=0, UpperLimitPrice=0, InstrumentID="", ClosePrice=0, ExchangeID="", TradingDay="", PreDelta=0, OpenInterest=0, CurrDelta=0, Turnover=0, LastPrice=0, SettlementPrice=0, ExchangeInstID="", LowestPrice=0):
        self.HighestPrice=HighestPrice
        self.LowerLimitPrice=LowerLimitPrice
        self.OpenPrice=OpenPrice
        self.PreClosePrice=PreClosePrice
        self.PreSettlementPrice=PreSettlementPrice
        self.UpdateTime=UpdateTime
        self.UpdateMillisec=UpdateMillisec
        self.PreOpenInterest=PreOpenInterest
        self.Volume=Volume
        self.UpperLimitPrice=UpperLimitPrice
        self.InstrumentID=InstrumentID
        self.ClosePrice=ClosePrice
        self.ExchangeID=ExchangeID
        self.TradingDay=TradingDay
        self.PreDelta=PreDelta
        self.OpenInterest=OpenInterest
        self.CurrDelta=CurrDelta
        self.Turnover=Turnover
        self.LastPrice=LastPrice
        self.SettlementPrice=SettlementPrice
        self.ExchangeInstID=ExchangeInstID
        self.LowestPrice=LowestPrice
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['HighestPrice', 'LowerLimitPrice', 'OpenPrice', 'PreClosePrice', 'PreSettlementPrice', 'UpdateTime', 'UpdateMillisec', 'PreOpenInterest', 'Volume', 'UpperLimitPrice', 'InstrumentID', 'ClosePrice', 'ExchangeID', 'TradingDay', 'PreDelta', 'OpenInterest', 'CurrDelta', 'Turnover', 'LastPrice', 'SettlementPrice', 'ExchangeInstID', 'LowestPrice']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('HighestPrice', u'最高价'),('LowerLimitPrice', u'跌停板价'),('OpenPrice', u'今开盘'),('PreClosePrice', u'昨收盘'),('PreSettlementPrice', u'上次结算价'),('UpdateTime', u'最后修改时间'),('UpdateMillisec', u'最后修改毫秒'),('PreOpenInterest', u'昨持仓量'),('Volume', u'数量'),('UpperLimitPrice', u'涨停板价'),('InstrumentID', u'合约代码'),('ClosePrice', u'今收盘'),('ExchangeID', u'交易所代码'),('TradingDay', u'交易日'),('PreDelta', u'昨虚实度'),('OpenInterest', u'持仓量'),('CurrDelta', u'今虚实度'),('Turnover', u'成交金额'),('LastPrice', u'最新价'),('SettlementPrice', u'本次结算价'),('ExchangeInstID', u'合约在交易所的代码'),('LowestPrice', u'最低价')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcEWarrantOffsetField:
    def __init__(self, InstrumentID="", ExchangeID="", InvestorID="", HedgeFlag='1', Direction='0', Volume=0, TradingDay="", BrokerID=""):
        self.InstrumentID=InstrumentID
        self.ExchangeID=ExchangeID
        self.InvestorID=InvestorID
        self.HedgeFlag=HedgeFlag
        self.Direction=Direction
        self.Volume=Volume
        self.TradingDay=TradingDay
        self.BrokerID=BrokerID
        self.vcmap={'Direction': {"'1'": u'\u5356', "'0'": u'\u4e70'}, 'HedgeFlag': {"'1'": u'\u6295\u673a', "'2'": u'\u5957\u5229', "'3'": u'\u5957\u4fdd'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'ExchangeID', 'InvestorID', 'HedgeFlag', 'Direction', 'Volume', 'TradingDay', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('ExchangeID', u'交易所代码'),('InvestorID', u'投资者代码'),('HedgeFlag', u'投机套保标志'),('Direction', u'买卖方向'),('Volume', u'数量'),('TradingDay', u'交易日期'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in ['HedgeFlag', 'Direction']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcUserIPField:
    def __init__(self, MacAddress="", UserID="", IPMask="", BrokerID="", IPAddress=""):
        self.MacAddress=MacAddress
        self.UserID=UserID
        self.IPMask=IPMask
        self.BrokerID=BrokerID
        self.IPAddress=IPAddress
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['MacAddress', 'UserID', 'IPMask', 'BrokerID', 'IPAddress']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('MacAddress', u'Mac地址'),('UserID', u'用户代码'),('IPMask', u'IP地址掩码'),('BrokerID', u'经纪公司代码'),('IPAddress', u'IP地址')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryBrokerField:
    def __init__(self, BrokerID=""):
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryPartBrokerField:
    def __init__(self, ExchangeID="", BrokerID="", ParticipantID=""):
        self.ExchangeID=ExchangeID
        self.BrokerID=BrokerID
        self.ParticipantID=ParticipantID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeID', 'BrokerID', 'ParticipantID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeID', u'交易所代码'),('BrokerID', u'经纪公司代码'),('ParticipantID', u'会员代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcSettlementRefField:
    def __init__(self, TradingDay="", SettlementID=0):
        self.TradingDay=TradingDay
        self.SettlementID=SettlementID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'SettlementID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易日'),('SettlementID', u'结算编号')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcReqFutureSignOutField:
    def __init__(self, InstallID=0, TradeDate="", TradeCode="", LastFragment='0', BrokerBranchID="", BrokerIDByBank="", BankSerial="", BankBranchID="", OperNo="", TradingDay="", SessionID=0, BrokerID="", DeviceID="", UserID="", BankID="", TID=0, TradeTime="", PlateSerial=0, CurrencyID="", Digest="", RequestID=0):
        self.InstallID=InstallID
        self.TradeDate=TradeDate
        self.TradeCode=TradeCode
        self.LastFragment=LastFragment
        self.BrokerBranchID=BrokerBranchID
        self.BrokerIDByBank=BrokerIDByBank
        self.BankSerial=BankSerial
        self.BankBranchID=BankBranchID
        self.OperNo=OperNo
        self.TradingDay=TradingDay
        self.SessionID=SessionID
        self.BrokerID=BrokerID
        self.DeviceID=DeviceID
        self.UserID=UserID
        self.BankID=BankID
        self.TID=TID
        self.TradeTime=TradeTime
        self.PlateSerial=PlateSerial
        self.CurrencyID=CurrencyID
        self.Digest=Digest
        self.RequestID=RequestID
        self.vcmap={'LastFragment': {"'1'": u'\u4e0d\u662f\u6700\u540e\u5206\u7247', "'0'": u'\u662f\u6700\u540e\u5206\u7247'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstallID', 'TradeDate', 'TradeCode', 'LastFragment', 'BrokerBranchID', 'BrokerIDByBank', 'BankSerial', 'BankBranchID', 'OperNo', 'TradingDay', 'SessionID', 'BrokerID', 'DeviceID', 'UserID', 'BankID', 'TID', 'TradeTime', 'PlateSerial', 'CurrencyID', 'Digest', 'RequestID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstallID', u'安装编号'),('TradeDate', u'交易日期'),('TradeCode', u'业务功能码'),('LastFragment', u'最后分片标志'),('BrokerBranchID', u'期商分支机构代码'),('BrokerIDByBank', u'期货公司银行编码'),('BankSerial', u'银行流水号'),('BankBranchID', u'银行分支机构代码'),('OperNo', u'交易柜员'),('TradingDay', u'交易系统日期'),('SessionID', u'会话号'),('BrokerID', u'期商代码'),('DeviceID', u'渠道标志'),('UserID', u'用户标识'),('BankID', u'银行代码'),('TID', u'交易ID'),('TradeTime', u'交易时间'),('PlateSerial', u'银期平台消息流水号'),('CurrencyID', u'币种代码'),('Digest', u'摘要'),('RequestID', u'请求编号')]])
    def getval(self, n):
        if n in ['LastFragment']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcTransferFutureToBankRspField:
    def __init__(self, FutureAccount="", RetCode="", CurrencyCode="", TradeAmt=0, RetInfo="", CustFee=0):
        self.FutureAccount=FutureAccount
        self.RetCode=RetCode
        self.CurrencyCode=CurrencyCode
        self.TradeAmt=TradeAmt
        self.RetInfo=RetInfo
        self.CustFee=CustFee
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['FutureAccount', 'RetCode', 'CurrencyCode', 'TradeAmt', 'RetInfo', 'CustFee']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('FutureAccount', u'资金账户'),('RetCode', u'响应代码'),('CurrencyCode', u'币种'),('TradeAmt', u'转帐金额'),('RetInfo', u'响应信息'),('CustFee', u'应收客户手续费')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryCombinationLegField:
    def __init__(self, LegInstrumentID="", LegID=0, CombInstrumentID=""):
        self.LegInstrumentID=LegInstrumentID
        self.LegID=LegID
        self.CombInstrumentID=CombInstrumentID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['LegInstrumentID', 'LegID', 'CombInstrumentID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('LegInstrumentID', u'单腿合约代码'),('LegID', u'单腿编号'),('CombInstrumentID', u'组合合约代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcExchangeMarginRateField:
    def __init__(self, InstrumentID="", ShortMarginRatioByMoney=0, LongMarginRatioByMoney=0, HedgeFlag='1', BrokerID="", ShortMarginRatioByVolume=0, LongMarginRatioByVolume=0):
        self.InstrumentID=InstrumentID
        self.ShortMarginRatioByMoney=ShortMarginRatioByMoney
        self.LongMarginRatioByMoney=LongMarginRatioByMoney
        self.HedgeFlag=HedgeFlag
        self.BrokerID=BrokerID
        self.ShortMarginRatioByVolume=ShortMarginRatioByVolume
        self.LongMarginRatioByVolume=LongMarginRatioByVolume
        self.vcmap={'HedgeFlag': {"'1'": u'\u6295\u673a', "'2'": u'\u5957\u5229', "'3'": u'\u5957\u4fdd'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'ShortMarginRatioByMoney', 'LongMarginRatioByMoney', 'HedgeFlag', 'BrokerID', 'ShortMarginRatioByVolume', 'LongMarginRatioByVolume']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('ShortMarginRatioByMoney', u'空头保证金率'),('LongMarginRatioByMoney', u'多头保证金率'),('HedgeFlag', u'投机套保标志'),('BrokerID', u'经纪公司代码'),('ShortMarginRatioByVolume', u'空头保证金费'),('LongMarginRatioByVolume', u'多头保证金费')]])
    def getval(self, n):
        if n in ['HedgeFlag']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcReqDayEndFileReadyField:
    def __init__(self, FileBusinessCode='0', TradeDate="", TradeCode="", LastFragment='0', BrokerBranchID="", BankSerial="", BankBranchID="", TradingDay="", SessionID=0, BrokerID="", BankID="", TradeTime="", PlateSerial=0, Digest=""):
        self.FileBusinessCode=FileBusinessCode
        self.TradeDate=TradeDate
        self.TradeCode=TradeCode
        self.LastFragment=LastFragment
        self.BrokerBranchID=BrokerBranchID
        self.BankSerial=BankSerial
        self.BankBranchID=BankBranchID
        self.TradingDay=TradingDay
        self.SessionID=SessionID
        self.BrokerID=BrokerID
        self.BankID=BankID
        self.TradeTime=TradeTime
        self.PlateSerial=PlateSerial
        self.Digest=Digest
        self.vcmap={'FileBusinessCode': {"'9'": u'\u5ba2\u6237\u7ed3\u606f\u51c0\u989d\u660e\u7ec6', "'b'": u'\u6cd5\u4eba\u5b58\u7ba1\u94f6\u884c\u8d44\u91d1\u4ea4\u6536\u6c47\u603b', "'7'": u'\u5ba2\u6237\u8d44\u91d1\u4f59\u989d\u5bf9\u8d26\u7ed3\u679c', "'8'": u'\u5176\u5b83\u5bf9\u8d26\u5f02\u5e38\u7ed3\u679c\u6587\u4ef6', "'5'": u'\u5ba2\u6237\u8d44\u91d1\u53f0\u8d26\u4f59\u989d\u660e\u7ec6\u5bf9\u8d26', "'c'": u'\u4e3b\u4f53\u95f4\u8d44\u91d1\u4ea4\u6536\u6c47\u603b', "'4'": u'\u671f\u8d27\u8d26\u6237\u4fe1\u606f\u53d8\u66f4\u660e\u7ec6\u5bf9\u8d26', "'1'": u'\u8f6c\u8d26\u4ea4\u6613\u660e\u7ec6\u5bf9\u8d26', "'0'": u'\u5176\u4ed6', "'6'": u'\u5ba2\u6237\u9500\u6237\u7ed3\u606f\u660e\u7ec6\u5bf9\u8d26', "'2'": u'\u5ba2\u6237\u8d26\u6237\u72b6\u6001\u5bf9\u8d26', "'e'": u'\u5b58\u7ba1\u94f6\u884c\u5907\u4ed8\u91d1\u4f59\u989d', "'3'": u'\u8d26\u6237\u7c7b\u4ea4\u6613\u660e\u7ec6\u5bf9\u8d26', "'d'": u'\u603b\u5206\u5e73\u8861\u76d1\u7ba1\u6570\u636e', "'a'": u'\u5ba2\u6237\u8d44\u91d1\u4ea4\u6536\u660e\u7ec6', "'f'": u'\u534f\u529e\u5b58\u7ba1\u94f6\u884c\u8d44\u91d1\u76d1\u7ba1\u6570\u636e'}, 'LastFragment': {"'1'": u'\u4e0d\u662f\u6700\u540e\u5206\u7247', "'0'": u'\u662f\u6700\u540e\u5206\u7247'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['FileBusinessCode', 'TradeDate', 'TradeCode', 'LastFragment', 'BrokerBranchID', 'BankSerial', 'BankBranchID', 'TradingDay', 'SessionID', 'BrokerID', 'BankID', 'TradeTime', 'PlateSerial', 'Digest']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('FileBusinessCode', u'文件业务功能'),('TradeDate', u'交易日期'),('TradeCode', u'业务功能码'),('LastFragment', u'最后分片标志'),('BrokerBranchID', u'期商分支机构代码'),('BankSerial', u'银行流水号'),('BankBranchID', u'银行分支机构代码'),('TradingDay', u'交易系统日期'),('SessionID', u'会话号'),('BrokerID', u'期商代码'),('BankID', u'银行代码'),('TradeTime', u'交易时间'),('PlateSerial', u'银期平台消息流水号'),('Digest', u'摘要')]])
    def getval(self, n):
        if n in ['FileBusinessCode', 'LastFragment']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryTradingAccountField:
    def __init__(self, InvestorID="", BrokerID=""):
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcUserRightField:
    def __init__(self, UserRightType='1', UserID="", BrokerID="", IsForbidden=0):
        self.UserRightType=UserRightType
        self.UserID=UserID
        self.BrokerID=BrokerID
        self.IsForbidden=IsForbidden
        self.vcmap={'UserRightType': {"'1'": u'\u767b\u5f55', "'2'": u'\u94f6\u671f\u8f6c\u5e10', "'5'": u'\u6761\u4ef6\u5355', "'3'": u'\u90ae\u5bc4\u7ed3\u7b97\u5355', "'4'": u'\u4f20\u771f\u7ed3\u7b97\u5355'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserRightType', 'UserID', 'BrokerID', 'IsForbidden']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserRightType', u'客户权限类型'),('UserID', u'用户代码'),('BrokerID', u'经纪公司代码'),('IsForbidden', u'是否禁止')]])
    def getval(self, n):
        if n in ['UserRightType']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcInputOrderField:
    def __init__(self, ContingentCondition='1', CombOffsetFlag="", UserID="", LimitPrice=0, UserForceClose=0, Direction='0', VolumeTotalOriginal=0, OrderPriceType='1', TimeCondition='1', IsAutoSuspend=0, StopPrice=0, InstrumentID="", MinVolume=0, ForceCloseReason='0', BrokerID="", CombHedgeFlag="", GTDDate="", BusinessUnit="", OrderRef="", InvestorID="", VolumeCondition='1', RequestID=0):
        self.ContingentCondition=ContingentCondition
        self.CombOffsetFlag=CombOffsetFlag
        self.UserID=UserID
        self.LimitPrice=LimitPrice
        self.UserForceClose=UserForceClose
        self.Direction=Direction
        self.VolumeTotalOriginal=VolumeTotalOriginal
        self.OrderPriceType=OrderPriceType
        self.TimeCondition=TimeCondition
        self.IsAutoSuspend=IsAutoSuspend
        self.StopPrice=StopPrice
        self.InstrumentID=InstrumentID
        self.MinVolume=MinVolume
        self.ForceCloseReason=ForceCloseReason
        self.BrokerID=BrokerID
        self.CombHedgeFlag=CombHedgeFlag
        self.GTDDate=GTDDate
        self.BusinessUnit=BusinessUnit
        self.OrderRef=OrderRef
        self.InvestorID=InvestorID
        self.VolumeCondition=VolumeCondition
        self.RequestID=RequestID
        self.vcmap={'ContingentCondition': {"'9'": u'\u5356\u4e00\u4ef7\u5927\u4e8e\u6761\u4ef6\u4ef7', "'B'": u'\u5356\u4e00\u4ef7\u5c0f\u4e8e\u6761\u4ef6\u4ef7', "'7'": u'\u6700\u65b0\u4ef7\u5c0f\u4e8e\u6761\u4ef6\u4ef7', "'8'": u'\u6700\u65b0\u4ef7\u5c0f\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'5'": u'\u6700\u65b0\u4ef7\u5927\u4e8e\u6761\u4ef6\u4ef7', "'C'": u'\u5356\u4e00\u4ef7\u5c0f\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'4'": u'\u9884\u57cb\u5355', "'1'": u'\u7acb\u5373', "'6'": u'\u6700\u65b0\u4ef7\u5927\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'2'": u'\u6b62\u635f', "'H'": u'\u4e70\u4e00\u4ef7\u5c0f\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'E'": u'\u4e70\u4e00\u4ef7\u5927\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'3'": u'\u6b62\u8d62', "'D'": u'\u4e70\u4e00\u4ef7\u5927\u4e8e\u6761\u4ef6\u4ef7', "'A'": u'\u5356\u4e00\u4ef7\u5927\u4e8e\u7b49\u4e8e\u6761\u4ef6\u4ef7', "'F'": u'\u4e70\u4e00\u4ef7\u5c0f\u4e8e\u6761\u4ef6\u4ef7'}, 'Direction': {"'1'": u'\u5356', "'0'": u'\u4e70'}, 'ForceCloseReason': {"'7'": u'\u81ea\u7136\u4eba\u4e34\u8fd1\u4ea4\u5272', "'5'": u'\u8fdd\u89c4', "'4'": u'\u6301\u4ed3\u975e\u6574\u6570\u500d', "'1'": u'\u8d44\u91d1\u4e0d\u8db3', "'0'": u'\u975e\u5f3a\u5e73', "'6'": u'\u5176\u5b83', "'2'": u'\u5ba2\u6237\u8d85\u4ed3', "'3'": u'\u4f1a\u5458\u8d85\u4ed3'}, 'OrderPriceType': {"'9'": u'\u5356\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e1\u4e2aticks', "'B'": u'\u5356\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e3\u4e2aticks', "'7'": u'\u6700\u65b0\u4ef7\u6d6e\u52a8\u4e0a\u6d6e3\u4e2aticks', "'8'": u'\u5356\u4e00\u4ef7', "'5'": u'\u6700\u65b0\u4ef7\u6d6e\u52a8\u4e0a\u6d6e1\u4e2aticks', "'C'": u'\u4e70\u4e00\u4ef7', "'4'": u'\u6700\u65b0\u4ef7', "'1'": u'\u4efb\u610f\u4ef7', "'6'": u'\u6700\u65b0\u4ef7\u6d6e\u52a8\u4e0a\u6d6e2\u4e2aticks', "'2'": u'\u9650\u4ef7', "'E'": u'\u4e70\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e2\u4e2aticks', "'3'": u'\u6700\u4f18\u4ef7', "'D'": u'\u4e70\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e1\u4e2aticks', "'A'": u'\u5356\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e2\u4e2aticks', "'F'": u'\u4e70\u4e00\u4ef7\u6d6e\u52a8\u4e0a\u6d6e3\u4e2aticks'}, 'VolumeCondition': {"'1'": u'\u4efb\u4f55\u6570\u91cf', "'2'": u'\u6700\u5c0f\u6570\u91cf', "'3'": u'\u5168\u90e8\u6570\u91cf'}, 'TimeCondition': {"'5'": u'\u64a4\u9500\u524d\u6709\u6548', "'4'": u'\u6307\u5b9a\u65e5\u671f\u524d\u6709\u6548', "'1'": u'\u7acb\u5373\u5b8c\u6210\uff0c\u5426\u5219\u64a4\u9500', "'6'": u'\u96c6\u5408\u7ade\u4ef7\u6709\u6548', "'2'": u'\u672c\u8282\u6709\u6548', "'3'": u'\u5f53\u65e5\u6709\u6548'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ContingentCondition', 'CombOffsetFlag', 'UserID', 'LimitPrice', 'UserForceClose', 'Direction', 'VolumeTotalOriginal', 'OrderPriceType', 'TimeCondition', 'IsAutoSuspend', 'StopPrice', 'InstrumentID', 'MinVolume', 'ForceCloseReason', 'BrokerID', 'CombHedgeFlag', 'GTDDate', 'BusinessUnit', 'OrderRef', 'InvestorID', 'VolumeCondition', 'RequestID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ContingentCondition', u'触发条件'),('CombOffsetFlag', u'组合开平标志'),('UserID', u'用户代码'),('LimitPrice', u'价格'),('UserForceClose', u'用户强评标志'),('Direction', u'买卖方向'),('VolumeTotalOriginal', u'数量'),('OrderPriceType', u'报单价格条件'),('TimeCondition', u'有效期类型'),('IsAutoSuspend', u'自动挂起标志'),('StopPrice', u'止损价'),('InstrumentID', u'合约代码'),('MinVolume', u'最小成交量'),('ForceCloseReason', u'强平原因'),('BrokerID', u'经纪公司代码'),('CombHedgeFlag', u'组合投机套保标志'),('GTDDate', u'GTD日期'),('BusinessUnit', u'业务单元'),('OrderRef', u'报单引用'),('InvestorID', u'投资者代码'),('VolumeCondition', u'成交量类型'),('RequestID', u'请求编号')]])
    def getval(self, n):
        if n in ['ContingentCondition', 'Direction', 'OrderPriceType', 'TimeCondition', 'ForceCloseReason', 'VolumeCondition']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcVerifyFuturePasswordField:
    def __init__(self, BankAccount="", Password="", TradeDate="", TradeCode="", LastFragment='0', BrokerBranchID="", BankSerial="", BankBranchID="", BankPassWord="", TradingDay="", SessionID=0, InstallID=0, BrokerID="", BankID="", TID=0, TradeTime="", PlateSerial=0, AccountID=""):
        self.BankAccount=BankAccount
        self.Password=Password
        self.TradeDate=TradeDate
        self.TradeCode=TradeCode
        self.LastFragment=LastFragment
        self.BrokerBranchID=BrokerBranchID
        self.BankSerial=BankSerial
        self.BankBranchID=BankBranchID
        self.BankPassWord=BankPassWord
        self.TradingDay=TradingDay
        self.SessionID=SessionID
        self.InstallID=InstallID
        self.BrokerID=BrokerID
        self.BankID=BankID
        self.TID=TID
        self.TradeTime=TradeTime
        self.PlateSerial=PlateSerial
        self.AccountID=AccountID
        self.vcmap={'LastFragment': {"'1'": u'\u4e0d\u662f\u6700\u540e\u5206\u7247', "'0'": u'\u662f\u6700\u540e\u5206\u7247'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BankAccount', 'Password', 'TradeDate', 'TradeCode', 'LastFragment', 'BrokerBranchID', 'BankSerial', 'BankBranchID', 'BankPassWord', 'TradingDay', 'SessionID', 'InstallID', 'BrokerID', 'BankID', 'TID', 'TradeTime', 'PlateSerial', 'AccountID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BankAccount', u'银行帐号'),('Password', u'期货密码'),('TradeDate', u'交易日期'),('TradeCode', u'业务功能码'),('LastFragment', u'最后分片标志'),('BrokerBranchID', u'期商分支机构代码'),('BankSerial', u'银行流水号'),('BankBranchID', u'银行分支机构代码'),('BankPassWord', u'银行密码'),('TradingDay', u'交易系统日期'),('SessionID', u'会话号'),('InstallID', u'安装编号'),('BrokerID', u'期商代码'),('BankID', u'银行代码'),('TID', u'交易ID'),('TradeTime', u'交易时间'),('PlateSerial', u'银期平台消息流水号'),('AccountID', u'投资者帐号')]])
    def getval(self, n):
        if n in ['LastFragment']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcSyncingInvestorPositionField:
    def __init__(self, ShortFrozenAmount=0, FrozenMargin=0, HedgeFlag='1', PositionProfit=0, Commission=0, MarginRateByVolume=0, CombPosition=0, CashIn=0, PreSettlementPrice=0, CombLongFrozen=0, CloseAmount=0, PosiDirection='1', YdPosition=0, MarginRateByMoney=0, OpenVolume=0, CloseVolume=0, ExchangeMargin=0, InstrumentID="", PositionDate='1', CloseProfitByTrade=0, PreMargin=0, SettlementID=0, ShortFrozen=0, LongFrozen=0, TodayPosition=0, TradingDay="", PositionCost=0, BrokerID="", FrozenCash=0, OpenAmount=0, OpenCost=0, Position=0, FrozenCommission=0, CombShortFrozen=0, CloseProfitByDate=0, SettlementPrice=0, LongFrozenAmount=0, InvestorID="", CloseProfit=0, UseMargin=0):
        self.ShortFrozenAmount=ShortFrozenAmount
        self.FrozenMargin=FrozenMargin
        self.HedgeFlag=HedgeFlag
        self.PositionProfit=PositionProfit
        self.Commission=Commission
        self.MarginRateByVolume=MarginRateByVolume
        self.CombPosition=CombPosition
        self.CashIn=CashIn
        self.PreSettlementPrice=PreSettlementPrice
        self.CombLongFrozen=CombLongFrozen
        self.CloseAmount=CloseAmount
        self.PosiDirection=PosiDirection
        self.YdPosition=YdPosition
        self.MarginRateByMoney=MarginRateByMoney
        self.OpenVolume=OpenVolume
        self.CloseVolume=CloseVolume
        self.ExchangeMargin=ExchangeMargin
        self.InstrumentID=InstrumentID
        self.PositionDate=PositionDate
        self.CloseProfitByTrade=CloseProfitByTrade
        self.PreMargin=PreMargin
        self.SettlementID=SettlementID
        self.ShortFrozen=ShortFrozen
        self.LongFrozen=LongFrozen
        self.TodayPosition=TodayPosition
        self.TradingDay=TradingDay
        self.PositionCost=PositionCost
        self.BrokerID=BrokerID
        self.FrozenCash=FrozenCash
        self.OpenAmount=OpenAmount
        self.OpenCost=OpenCost
        self.Position=Position
        self.FrozenCommission=FrozenCommission
        self.CombShortFrozen=CombShortFrozen
        self.CloseProfitByDate=CloseProfitByDate
        self.SettlementPrice=SettlementPrice
        self.LongFrozenAmount=LongFrozenAmount
        self.InvestorID=InvestorID
        self.CloseProfit=CloseProfit
        self.UseMargin=UseMargin
        self.vcmap={'PositionDate': {"'1'": u'\u4eca\u65e5\u6301\u4ed3', "'2'": u'\u5386\u53f2\u6301\u4ed3'}, 'HedgeFlag': {"'1'": u'\u6295\u673a', "'2'": u'\u5957\u5229', "'3'": u'\u5957\u4fdd'}, 'PosiDirection': {"'1'": u'\u51c0', "'2'": u'\u591a\u5934', "'3'": u'\u7a7a\u5934'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ShortFrozenAmount', 'FrozenMargin', 'HedgeFlag', 'PositionProfit', 'Commission', 'MarginRateByVolume', 'CombPosition', 'CashIn', 'PreSettlementPrice', 'CombLongFrozen', 'CloseAmount', 'PosiDirection', 'YdPosition', 'MarginRateByMoney', 'OpenVolume', 'CloseVolume', 'ExchangeMargin', 'InstrumentID', 'PositionDate', 'CloseProfitByTrade', 'PreMargin', 'SettlementID', 'ShortFrozen', 'LongFrozen', 'TodayPosition', 'TradingDay', 'PositionCost', 'BrokerID', 'FrozenCash', 'OpenAmount', 'OpenCost', 'Position', 'FrozenCommission', 'CombShortFrozen', 'CloseProfitByDate', 'SettlementPrice', 'LongFrozenAmount', 'InvestorID', 'CloseProfit', 'UseMargin']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ShortFrozenAmount', u'开仓冻结金额'),('FrozenMargin', u'冻结的保证金'),('HedgeFlag', u'投机套保标志'),('PositionProfit', u'持仓盈亏'),('Commission', u'手续费'),('MarginRateByVolume', u'保证金率(按手数)'),('CombPosition', u'组合成交形成的持仓'),('CashIn', u'资金差额'),('PreSettlementPrice', u'上次结算价'),('CombLongFrozen', u'组合多头冻结'),('CloseAmount', u'平仓金额'),('PosiDirection', u'持仓多空方向'),('YdPosition', u'上日持仓'),('MarginRateByMoney', u'保证金率'),('OpenVolume', u'开仓量'),('CloseVolume', u'平仓量'),('ExchangeMargin', u'交易所保证金'),('InstrumentID', u'合约代码'),('PositionDate', u'持仓日期'),('CloseProfitByTrade', u'逐笔对冲平仓盈亏'),('PreMargin', u'上次占用的保证金'),('SettlementID', u'结算编号'),('ShortFrozen', u'空头冻结'),('LongFrozen', u'多头冻结'),('TodayPosition', u'今日持仓'),('TradingDay', u'交易日'),('PositionCost', u'持仓成本'),('BrokerID', u'经纪公司代码'),('FrozenCash', u'冻结的资金'),('OpenAmount', u'开仓金额'),('OpenCost', u'开仓成本'),('Position', u'今日持仓'),('FrozenCommission', u'冻结的手续费'),('CombShortFrozen', u'组合空头冻结'),('CloseProfitByDate', u'逐日盯市平仓盈亏'),('SettlementPrice', u'本次结算价'),('LongFrozenAmount', u'开仓冻结金额'),('InvestorID', u'投资者代码'),('CloseProfit', u'平仓盈亏'),('UseMargin', u'占用的保证金')]])
    def getval(self, n):
        if n in ['HedgeFlag', 'PosiDirection', 'PositionDate']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQrySettlementInfoField:
    def __init__(self, InvestorID="", BrokerID="", TradingDay=""):
        self.InvestorID=InvestorID
        self.BrokerID=BrokerID
        self.TradingDay=TradingDay
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'TradingDay']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('TradingDay', u'交易日')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcRspFutureSignInField:
    def __init__(self, BrokerBranchID="", UserID="", TradeTime="", TID=0, InstallID=0, PinKey="", TradeCode="", BankBranchID="", SessionID=0, BankID="", MacKey="", PlateSerial=0, ErrorID=0, BankSerial="", OperNo="", TradingDay="", BrokerID="", DeviceID="", TradeDate="", CurrencyID="", ErrorMsg="", LastFragment='0', RequestID=0, BrokerIDByBank="", Digest=""):
        self.BrokerBranchID=BrokerBranchID
        self.UserID=UserID
        self.TradeTime=TradeTime
        self.TID=TID
        self.InstallID=InstallID
        self.PinKey=PinKey
        self.TradeCode=TradeCode
        self.BankBranchID=BankBranchID
        self.SessionID=SessionID
        self.BankID=BankID
        self.MacKey=MacKey
        self.PlateSerial=PlateSerial
        self.ErrorID=ErrorID
        self.BankSerial=BankSerial
        self.OperNo=OperNo
        self.TradingDay=TradingDay
        self.BrokerID=BrokerID
        self.DeviceID=DeviceID
        self.TradeDate=TradeDate
        self.CurrencyID=CurrencyID
        self.ErrorMsg=ErrorMsg
        self.LastFragment=LastFragment
        self.RequestID=RequestID
        self.BrokerIDByBank=BrokerIDByBank
        self.Digest=Digest
        self.vcmap={'LastFragment': {"'1'": u'\u4e0d\u662f\u6700\u540e\u5206\u7247', "'0'": u'\u662f\u6700\u540e\u5206\u7247'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerBranchID', 'UserID', 'TradeTime', 'TID', 'InstallID', 'PinKey', 'TradeCode', 'BankBranchID', 'SessionID', 'BankID', 'MacKey', 'PlateSerial', 'ErrorID', 'BankSerial', 'OperNo', 'TradingDay', 'BrokerID', 'DeviceID', 'TradeDate', 'CurrencyID', 'ErrorMsg', 'LastFragment', 'RequestID', 'BrokerIDByBank', 'Digest']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerBranchID', u'期商分支机构代码'),('UserID', u'用户标识'),('TradeTime', u'交易时间'),('TID', u'交易ID'),('InstallID', u'安装编号'),('PinKey', u'PIN密钥'),('TradeCode', u'业务功能码'),('BankBranchID', u'银行分支机构代码'),('SessionID', u'会话号'),('BankID', u'银行代码'),('MacKey', u'MAC密钥'),('PlateSerial', u'银期平台消息流水号'),('ErrorID', u'错误代码'),('BankSerial', u'银行流水号'),('OperNo', u'交易柜员'),('TradingDay', u'交易系统日期'),('BrokerID', u'期商代码'),('DeviceID', u'渠道标志'),('TradeDate', u'交易日期'),('CurrencyID', u'币种代码'),('ErrorMsg', u'错误信息'),('LastFragment', u'最后分片标志'),('RequestID', u'请求编号'),('BrokerIDByBank', u'期货公司银行编码'),('Digest', u'摘要')]])
    def getval(self, n):
        if n in ['LastFragment']:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcQryInstrumentField:
    def __init__(self, InstrumentID="", ExchangeID="", ExchangeInstID="", ProductID=""):
        self.InstrumentID=InstrumentID
        self.ExchangeID=ExchangeID
        self.ExchangeInstID=ExchangeInstID
        self.ProductID=ProductID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'ExchangeID', 'ExchangeInstID', 'ProductID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('ExchangeID', u'交易所代码'),('ExchangeInstID', u'合约在交易所的代码'),('ProductID', u'产品代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
class CThostFtdcMarketDataBestPriceField:
    def __init__(self, AskVolume1=0, BidPrice1=0, AskPrice1=0, BidVolume1=0):
        self.AskVolume1=AskVolume1
        self.BidPrice1=BidPrice1
        self.AskPrice1=AskPrice1
        self.BidVolume1=BidVolume1
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['AskVolume1', 'BidPrice1', 'AskPrice1', 'BidVolume1']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('AskVolume1', u'申卖量一'),('BidPrice1', u'申买价一'),('AskPrice1', u'申卖价一'),('BidVolume1', u'申买量一')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n]["'%s'" % getattr(self, n)]
        else: return getattr(self, n)
# Set short name alias for the stupid Hungarian Notation
TransferQryDetailRsp=CThostFtdcTransferQryDetailRspField
InvestorAccount=CThostFtdcInvestorAccountField
Notice=CThostFtdcNoticeField
QryCommRateModel=CThostFtdcQryCommRateModelField
BrokerSync=CThostFtdcBrokerSyncField
QryInvestorPosition=CThostFtdcQryInvestorPositionField
RspAuthenticate=CThostFtdcRspAuthenticateField
DepositResultInform=CThostFtdcDepositResultInformField
InvestorGroup=CThostFtdcInvestorGroupField
Discount=CThostFtdcDiscountField
BrokerUser=CThostFtdcBrokerUserField
QryOrder=CThostFtdcQryOrderField
ionalOrderR=CTKSConditionalOrderRemove
Exchange=CThostFtdcExchangeField
ReqQueryAccount=CThostFtdcReqQueryAccountField
CancelAccount=CThostFtdcCancelAccountField
TransferHeader=CThostFtdcTransferHeaderField
FrontStatus=CThostFtdcFrontStatusField
InvestorPosition=CThostFtdcInvestorPositionField
QryExchangeSequence=CThostFtdcQryExchangeSequenceField
QryLinkMan=CThostFtdcQryLinkManField
QryTransferSerial=CThostFtdcQryTransferSerialField
ExchangeOrderActionError=CThostFtdcExchangeOrderActionErrorField
ReqAuthenticate=CThostFtdcReqAuthenticateField
QryHisOrder=CThostFtdcQryHisOrderField
SyncingInstrumentTradingRight=CThostFtdcSyncingInstrumentTradingRightField
QryTradingCode=CThostFtdcQryTradingCodeField
tus=CTKSCOSStatusField
RspUserLogin=CThostFtdcRspUserLoginField
SyncingInvestor=CThostFtdcSyncingInvestorField
QryInvestorPositionDetail=CThostFtdcQryInvestorPositionDetailField
InvestorPositionDetail=CThostFtdcInvestorPositionDetailField
ExchangeOrder=CThostFtdcExchangeOrderField
RspQueryAccount=CThostFtdcRspQueryAccountField
QrySettlementInfoConfirm=CThostFtdcQrySettlementInfoConfirmField
OpenAccount=CThostFtdcOpenAccountField
AndLossOrderI=CTKSProfitAndLossOrderInsert
QryTradingNotice=CThostFtdcQryTradingNoticeField
QryErrOrder=CThostFtdcQryErrOrderField
ManualSyncBrokerUserOTP=CThostFtdcManualSyncBrokerUserOTPField
DepthMarketData=CThostFtdcDepthMarketDataField
TraderOffer=CThostFtdcTraderOfferField
CFMMCBrokerKey=CThostFtdcCFMMCBrokerKeyField
QryDepthMarketData=CThostFtdcQryDepthMarketDataField
TransferQryDetailReq=CThostFtdcTransferQryDetailReqField
BrokerWithdrawAlgorithm=CThostFtdcBrokerWithdrawAlgorithmField
MarketDataExchange=CThostFtdcMarketDataExchangeField
ExchangeOrderInsertError=CThostFtdcExchangeOrderInsertErrorField
QrySuperUserFunction=CThostFtdcQrySuperUserFunctionField
RspRepeal=CThostFtdcRspRepealField
QryTrade=CThostFtdcQryTradeField
TradingNoticeInfo=CThostFtdcTradingNoticeInfoField
ErrOrder=CThostFtdcErrOrderField
ContractBank=CThostFtdcContractBankField
QryParkedOrderAction=CThostFtdcQryParkedOrderActionField
Product=CThostFtdcProductField
QryCFMMCBrokerKey=CThostFtdcQryCFMMCBrokerKeyField
BrokerTradingAlgos=CThostFtdcBrokerTradingAlgosField
TransferQryBankReq=CThostFtdcTransferQryBankReqField
ReqChangeAccount=CThostFtdcReqChangeAccountField
CommPhase=CThostFtdcCommPhaseField
AuthenticationInfo=CThostFtdcAuthenticationInfoField
TransferFutureToBankReq=CThostFtdcTransferFutureToBankReqField
ReqCancelAccount=CThostFtdcReqCancelAccountField
MarketDataLastMatch=CThostFtdcMarketDataLastMatchField
SuperUserFunction=CThostFtdcSuperUserFunctionField
ParkedOrderAction=CThostFtdcParkedOrderActionField
UserSession=CThostFtdcUserSessionField
QueryMaxOrderVolumeWithPrice=CThostFtdcQueryMaxOrderVolumeWithPriceField
TransferBankToFutureReq=CThostFtdcTransferBankToFutureReqField
InstrumentStatus=CThostFtdcInstrumentStatusField
QryCFMMCTradingAccountKey=CThostFtdcQryCFMMCTradingAccountKeyField
QryContractBank=CThostFtdcQryContractBankField
SyncingTradingCode=CThostFtdcSyncingTradingCodeField
Select=CTKSCOSAskSelectField
QryEWarrantOffset=CThostFtdcQryEWarrantOffsetField
QryBrokerTradingParams=CThostFtdcQryBrokerTradingParamsField
SyncingTradingAccount=CThostFtdcSyncingTradingAccountField
QryExchangeOrder=CThostFtdcQryExchangeOrderField
ChangeAccount=CThostFtdcChangeAccountField
Instrument=CThostFtdcInstrumentField
QryBrokerTradingAlgos=CThostFtdcQryBrokerTradingAlgosField
ReqTransfer=CThostFtdcReqTransferField
ionalOrderS=CTKSConditionalOrderSelect
VerifyFuturePasswordAndCustInfo=CThostFtdcVerifyFuturePasswordAndCustInfoField
ionalOrderState=CTKSConditionalOrderStateAlter
LogoutAll=CThostFtdcLogoutAllField
MarketDataStatic=CThostFtdcMarketDataStaticField
TradingCode=CThostFtdcTradingCodeField
RspInfo=CThostFtdcRspInfoField
QrySuperUser=CThostFtdcQrySuperUserField
QryInstrumentMarginRate=CThostFtdcQryInstrumentMarginRateField
QryInvestorGroup=CThostFtdcQryInvestorGroupField
InvestorWithdrawAlgorithm=CThostFtdcInvestorWithdrawAlgorithmField
TradingAccountPasswordUpdateV1=CThostFtdcTradingAccountPasswordUpdateV1Field
ExchangeTrade=CThostFtdcExchangeTradeField
QryUserSession=CThostFtdcQryUserSessionField
TradingNotice=CThostFtdcTradingNoticeField
ReqSyncKey=CThostFtdcReqSyncKeyField
AndLossOrder=CTKSProfitAndLossOrderQuery
QryBrokerUser=CThostFtdcQryBrokerUserField
NotifyFutureSignIn=CThostFtdcNotifyFutureSignInField
SyncingInstrumentCommissionRate=CThostFtdcSyncingInstrumentCommissionRateField
SyncingInstrumentMarginRate=CThostFtdcSyncingInstrumentMarginRateField
ionalOrderRspResult=CTKSConditionalOrderRspResultField
AndLossOrderM=CTKSProfitAndLossOrderModify
ForceUserLogout=CThostFtdcForceUserLogoutField
NotifySyncKey=CThostFtdcNotifySyncKeyField
MarketDataBid45=CThostFtdcMarketDataBid45Field
AndLossOrderR=CTKSProfitAndLossOrderRemove
LinkMan=CThostFtdcLinkManField
CommRateModel=CThostFtdcCommRateModelField
PositionProfitAlgorithm=CThostFtdcPositionProfitAlgorithmField
QryExchange=CThostFtdcQryExchangeField
QueryMaxOrderVolume=CThostFtdcQueryMaxOrderVolumeField
MarketDataUpdateTime=CThostFtdcMarketDataUpdateTimeField
ionalOrderM=CTKSConditionalOrderModify
CombinationLeg=CThostFtdcCombinationLegField
ExchangeSequence=CThostFtdcExchangeSequenceField
SettlementInfo=CThostFtdcSettlementInfoField
ionalOrderInitI=CTKSConditionalOrderInitInsert
MDTraderOffer=CThostFtdcMDTraderOfferField
QryInstrumentStatus=CThostFtdcQryInstrumentStatusField
MarketDataAsk23=CThostFtdcMarketDataAsk23Field
QryOrderAction=CThostFtdcQryOrderActionField
UserRightsAssign=CThostFtdcUserRightsAssignField
Dissemination=CThostFtdcDisseminationField
UserLogout=CThostFtdcUserLogoutField
CurrentTime=CThostFtdcCurrentTimeField
us=CTKSPLStatusField
ErrOrderAction=CThostFtdcErrOrderActionField
rKey=CThostOrderKeyField
QryTraderOffer=CThostFtdcQryTraderOfferField
MarketDataBid23=CThostFtdcMarketDataBid23Field
MarketDataBase=CThostFtdcMarketDataBaseField
ReqRepeal=CThostFtdcReqRepealField
Trade=CThostFtdcTradeField
QryParkedOrder=CThostFtdcQryParkedOrderField
QryBrokerUserEvent=CThostFtdcQryBrokerUserEventField
QryInstrumentCommissionRate=CThostFtdcQryInstrumentCommissionRateField
ReturnResult=CThostFtdcReturnResultField
RemoveParkedOrderAction=CThostFtdcRemoveParkedOrderActionField
QryTrader=CThostFtdcQryTraderField
CFMMCTradingAccountKey=CThostFtdcCFMMCTradingAccountKeyField
RspFutureSignOut=CThostFtdcRspFutureSignOutField
QrySyncDeposit=CThostFtdcQrySyncDepositField
ReqUserLogin=CThostFtdcReqUserLoginField
VerifyCustInfo=CThostFtdcVerifyCustInfoField
BulkCancelOrder=CThostFtdcBulkCancelOrderField
InputOrderAction=CThostFtdcInputOrderActionField
InvestorPositionCombineDetail=CThostFtdcInvestorPositionCombineDetailField
QryBrokerUserFunction=CThostFtdcQryBrokerUserFunctionField
ParkedOrder=CThostFtdcParkedOrderField
BrokerUserRightAssign=CThostFtdcBrokerUserRightAssignField
ionalOrderOperResult=CTKSConditionalOrderOperResultField
OrderAction=CThostFtdcOrderActionField
PartBroker=CThostFtdcPartBrokerField
ReqOpenAccount=CThostFtdcReqOpenAccountField
VerifyInvestorPassword=CThostFtdcVerifyInvestorPasswordField
AndLossOrderRemove=CTKSProfitAndLossOrderRemoveField
QueryBrokerDeposit=CThostFtdcQueryBrokerDepositField
SuperUser=CThostFtdcSuperUserField
QryProduct=CThostFtdcQryProductField
Investor=CThostFtdcInvestorField
SyncStatus=CThostFtdcSyncStatusField
InstrumentTradingRight=CThostFtdcInstrumentTradingRightField
TransferQryBankRsp=CThostFtdcTransferQryBankRspField
Accountregister=CThostFtdcAccountregisterField
BrokerDeposit=CThostFtdcBrokerDepositField
ErrorConditionalOrder=CThostFtdcErrorConditionalOrderField
DRTransfer=CThostFtdcDRTransferField
BrokerTradingParams=CThostFtdcBrokerTradingParamsField
RemoveParkedOrder=CThostFtdcRemoveParkedOrderField
BrokerUserPassword=CThostFtdcBrokerUserPasswordField
Order=CThostFtdcOrderField
QrySyncStatus=CThostFtdcQrySyncStatusField
QryErrOrderAction=CThostFtdcQryErrOrderActionField
BrokerUserOTPParam=CThostFtdcBrokerUserOTPParamField
InstrumentMarginRateAdjust=CThostFtdcInstrumentMarginRateAdjustField
ionalOrder=CTKSConditionalOrderQuery
QryInvestor=CThostFtdcQryInvestorField
SpecificInstrument=CThostFtdcSpecificInstrumentField
MarketDataAsk45=CThostFtdcMarketDataAsk45Field
TradingAccountPasswordUpdate=CThostFtdcTradingAccountPasswordUpdateField
RspQueryTradeResultBySerial=CThostFtdcRspQueryTradeResultBySerialField
AndLossOrderOperResult=CTKSProfitAndLossOrderOperResultField
InstrumentCommissionRate=CThostFtdcInstrumentCommissionRateField
QryInvestorPositionCombineDetail=CThostFtdcQryInvestorPositionCombineDetailField
QryTransferBank=CThostFtdcQryTransferBankField
TransferSerial=CThostFtdcTransferSerialField
ExchangeMarginRateAdjust=CThostFtdcExchangeMarginRateAdjustField
QryFrontStatus=CThostFtdcQryFrontStatusField
QryNotice=CThostFtdcQryNoticeField
SyncingInvestorGroup=CThostFtdcSyncingInvestorGroupField
Trader=CThostFtdcTraderField
NotifyFutureSignOut=CThostFtdcNotifyFutureSignOutField
LoginInfo=CThostFtdcLoginInfoField
LoadSettlementInfo=CThostFtdcLoadSettlementInfoField
TradingAccountPassword=CThostFtdcTradingAccountPasswordField
SettlementInfoConfirm=CThostFtdcSettlementInfoConfirmField
RspTransfer=CThostFtdcRspTransferField
QryExchangeOrderAction=CThostFtdcQryExchangeOrderActionField
TransferBankToFutureRsp=CThostFtdcTransferBankToFutureRspField
SyncDeposit=CThostFtdcSyncDepositField
FutureSignIO=CThostFtdcFutureSignIOField
Broker=CThostFtdcBrokerField
QryInstrumentTradingRight=CThostFtdcQryInstrumentTradingRightField
QryAccountregister=CThostFtdcQryAccountregisterField
BrokerUserEvent=CThostFtdcBrokerUserEventField
BrokerUserFunction=CThostFtdcBrokerUserFunctionField
TradingAccount=CThostFtdcTradingAccountField
TransferBank=CThostFtdcTransferBankField
RspSyncKey=CThostFtdcRspSyncKeyField
ExchangeOrderAction=CThostFtdcExchangeOrderActionField
InstrumentMarginRate=CThostFtdcInstrumentMarginRateField
MarketDataAveragePrice=CThostFtdcMarketDataAveragePriceField
QryMDTraderOffer=CThostFtdcQryMDTraderOfferField
ReqQueryTradeResultBySerial=CThostFtdcReqQueryTradeResultBySerialField
UserPasswordUpdate=CThostFtdcUserPasswordUpdateField
NotifyQueryAccount=CThostFtdcNotifyQueryAccountField
MarketData=CThostFtdcMarketDataField
EWarrantOffset=CThostFtdcEWarrantOffsetField
UserIP=CThostFtdcUserIPField
QryBroker=CThostFtdcQryBrokerField
QryPartBroker=CThostFtdcQryPartBrokerField
SettlementRef=CThostFtdcSettlementRefField
ReqFutureSignOut=CThostFtdcReqFutureSignOutField
TransferFutureToBankRsp=CThostFtdcTransferFutureToBankRspField
QryCombinationLeg=CThostFtdcQryCombinationLegField
ExchangeMarginRate=CThostFtdcExchangeMarginRateField
ReqDayEndFileReady=CThostFtdcReqDayEndFileReadyField
QryTradingAccount=CThostFtdcQryTradingAccountField
UserRight=CThostFtdcUserRightField
InputOrder=CThostFtdcInputOrderField
VerifyFuturePassword=CThostFtdcVerifyFuturePasswordField
SyncingInvestorPosition=CThostFtdcSyncingInvestorPositionField
QrySettlementInfo=CThostFtdcQrySettlementInfoField
RspFutureSignIn=CThostFtdcRspFutureSignInField
QryInstrument=CThostFtdcQryInstrumentField
MarketDataBestPrice=CThostFtdcMarketDataBestPriceField
