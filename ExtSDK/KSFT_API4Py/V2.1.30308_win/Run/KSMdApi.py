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

import _KSApi_Md
import os
import KSUserApiStruct

_KSApi_Md.register_struct(KSUserApiStruct)

class KSMdSpi:
    def register_api(self, api):
        self.api=api

    def OnFrontDisconnected(self, nReason):
        '''当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
@param nReason 错误原因
        0x1001 网络读失败
        0x1002 网络写失败
        0x2001 接收心跳超时
        0x2002 发送心跳失败
        0x2003 收到错误报文
        0x2004 服务器主动断开'''
        pass

    def OnRspUserLogout(self, pUserLogout, pRspInfo, nRequestID, bIsLast):
        '''登出请求响应'''
        pass

    def OnRtnDepthMarketData(self, pDepthMarketData):
        '''深度行情通知'''
        pass

    def OnRspSubMarketData(self, pSpecificInstrument, pRspInfo, nRequestID, bIsLast):
        '''订阅行情应答'''
        pass

    def OnRspUnSubMarketData(self, pSpecificInstrument, pRspInfo, nRequestID, bIsLast):
        '''取消订阅行情应答'''
        pass

    def OnHeartBeatWarning(self, nTimeLapse):
        '''心跳超时警告。当长时间未收到报文时，该方法被调用。
@param nTimeLapse 距离上次接收报文的时间'''
        pass

    def OnRspError(self, pRspInfo, nRequestID, bIsLast):
        '''错误应答'''
        pass

    def OnRspUserLogin(self, pRspUserLogin, pRspInfo, nRequestID, bIsLast):
        '''登录请求响应'''
        pass

    def OnFrontConnected(self, ):
        '''当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。'''
        pass


class KSMdApi:
    @staticmethod
    def CreateKSMdApi(FlowPath="", IsUsingUdp=False):
        if FlowPath:
            FlowPath=os.path.abspath(FlowPath)
        api_ptr=_KSApi_Md.create_KSMdApi(FlowPath, IsUsingUdp)
        return KSMdApi(api_ptr)

    def __init__(self, api_ptr):
        self.api_ptr = api_ptr

    def ReqUserLogout(self, pUserLogout, nRequestID):
        '''登出请求'''
        return _KSApi_Md.ReqUserLogout(self.api_ptr, pUserLogout, nRequestID)

    def Join(self, ):
        '''等待接口线程结束运行
@return 线程退出代码'''
        return _KSApi_Md.Join(self.api_ptr, )

    def RegisterNameServer(self, pszNameServerAddress):
        '''注册名字服务器网络地址
@param pszNsAddress：名字服务器网络地址。
@remark 网络地址的格式为：“protocol://ipaddress:port/proxyuser:proxypass@proxyipaddress:proxyport/网关标识/客户号”
@remark 如：”tcp://127.0.0.1:12001/A/80001”。
@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”12001”代表服务器端口号。“A”代表网关标识，“80001”代表客户号
@remark RegisterNameServer优先于RegisterFront'''
        return _KSApi_Md.RegisterNameServer(self.api_ptr, pszNameServerAddress)


    def UnSubscribeMarketData(self, InstrumentIDs):
        """订阅/退订行情。
        @param ppInstrumentIDs list of 合约ID
        """
        return _KSApi_Md.UnSubscribeMarketData(self.api_ptr, InstrumentIDs)

    def SetWritablePath(self, szpath = ""):
        '''设置当前可读写路径'''
        return _KSApi_Trader.SetWritablePath(self.api_ptr, szpath)

    def RegisterFront(self, pszFrontAddress):
        '''注册前置机网络地址
@param pszFrontAddress：前置机网络地址。
@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:17001”。
@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”17001”代表服务器端口号。'''
        return _KSApi_Md.RegisterFront(self.api_ptr, pszFrontAddress)

    def Init(self, ):
        '''初始化
@remark 初始化运行环境,只有调用后,接口才开始工作'''
        return _KSApi_Md.Init(self.api_ptr, )

    def ReqUserLogin(self, pReqUserLoginField, nRequestID):
        '''用户登录请求'''
        return _KSApi_Md.ReqUserLogin(self.api_ptr, pReqUserLoginField, nRequestID)

    def Release(self, ):
        '''删除接口对象本身
@remark 不再使用本接口对象时,调用该函数删除接口对象'''
        return _KSApi_Md.Release(self.api_ptr, )

    def GetTradingDay(self, ):
        '''获取当前交易日
@retrun 获取到的交易日
@remark 只有登录成功后,才能得到正确的交易日'''
        return _KSApi_Md.GetTradingDay(self.api_ptr, )


    def SubscribeMarketData(self, InstrumentIDs):
        """订阅/退订行情。
        @param ppInstrumentIDs list of 合约ID
        """
        return _KSApi_Md.SubscribeMarketData(self.api_ptr, InstrumentIDs)

    def RegisterSpi(self, pSpi):
        '''注册回调接口
@param pSpi 派生自回调接口类的实例'''
        ret = _KSApi_Md.RegisterSpi(self.api_ptr, pSpi)
        pSpi.register_api(self)
        return ret

