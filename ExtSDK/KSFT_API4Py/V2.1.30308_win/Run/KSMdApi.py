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
        '''���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
@param nReason ����ԭ��
        0x1001 �����ʧ��
        0x1002 ����дʧ��
        0x2001 ����������ʱ
        0x2002 ��������ʧ��
        0x2003 �յ�������
        0x2004 �����������Ͽ�'''
        pass

    def OnRspUserLogout(self, pUserLogout, pRspInfo, nRequestID, bIsLast):
        '''�ǳ�������Ӧ'''
        pass

    def OnRtnDepthMarketData(self, pDepthMarketData):
        '''�������֪ͨ'''
        pass

    def OnRspSubMarketData(self, pSpecificInstrument, pRspInfo, nRequestID, bIsLast):
        '''��������Ӧ��'''
        pass

    def OnRspUnSubMarketData(self, pSpecificInstrument, pRspInfo, nRequestID, bIsLast):
        '''ȡ����������Ӧ��'''
        pass

    def OnHeartBeatWarning(self, nTimeLapse):
        '''������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��'''
        pass

    def OnRspError(self, pRspInfo, nRequestID, bIsLast):
        '''����Ӧ��'''
        pass

    def OnRspUserLogin(self, pRspUserLogin, pRspInfo, nRequestID, bIsLast):
        '''��¼������Ӧ'''
        pass

    def OnFrontConnected(self, ):
        '''���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�'''
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
        '''�ǳ�����'''
        return _KSApi_Md.ReqUserLogout(self.api_ptr, pUserLogout, nRequestID)

    def Join(self, ):
        '''�ȴ��ӿ��߳̽�������
@return �߳��˳�����'''
        return _KSApi_Md.Join(self.api_ptr, )

    def RegisterNameServer(self, pszNameServerAddress):
        '''ע�����ַ����������ַ
@param pszNsAddress�����ַ����������ַ��
@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port/proxyuser:proxypass@proxyipaddress:proxyport/���ر�ʶ/�ͻ��š�
@remark �磺��tcp://127.0.0.1:12001/A/80001����
@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����12001������������˿ںš���A���������ر�ʶ����80001������ͻ���
@remark RegisterNameServer������RegisterFront'''
        return _KSApi_Md.RegisterNameServer(self.api_ptr, pszNameServerAddress)


    def UnSubscribeMarketData(self, InstrumentIDs):
        """����/�˶����顣
        @param ppInstrumentIDs list of ��ԼID
        """
        return _KSApi_Md.UnSubscribeMarketData(self.api_ptr, InstrumentIDs)

    def SetWritablePath(self, szpath = ""):
        '''���õ�ǰ�ɶ�д·��'''
        return _KSApi_Trader.SetWritablePath(self.api_ptr, szpath)

    def RegisterFront(self, pszFrontAddress):
        '''ע��ǰ�û������ַ
@param pszFrontAddress��ǰ�û������ַ��
@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:17001����
@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����17001������������˿ںš�'''
        return _KSApi_Md.RegisterFront(self.api_ptr, pszFrontAddress)

    def Init(self, ):
        '''��ʼ��
@remark ��ʼ�����л���,ֻ�е��ú�,�ӿڲſ�ʼ����'''
        return _KSApi_Md.Init(self.api_ptr, )

    def ReqUserLogin(self, pReqUserLoginField, nRequestID):
        '''�û���¼����'''
        return _KSApi_Md.ReqUserLogin(self.api_ptr, pReqUserLoginField, nRequestID)

    def Release(self, ):
        '''ɾ���ӿڶ�����
@remark ����ʹ�ñ��ӿڶ���ʱ,���øú���ɾ���ӿڶ���'''
        return _KSApi_Md.Release(self.api_ptr, )

    def GetTradingDay(self, ):
        '''��ȡ��ǰ������
@retrun ��ȡ���Ľ�����
@remark ֻ�е�¼�ɹ���,���ܵõ���ȷ�Ľ�����'''
        return _KSApi_Md.GetTradingDay(self.api_ptr, )


    def SubscribeMarketData(self, InstrumentIDs):
        """����/�˶����顣
        @param ppInstrumentIDs list of ��ԼID
        """
        return _KSApi_Md.SubscribeMarketData(self.api_ptr, InstrumentIDs)

    def RegisterSpi(self, pSpi):
        '''ע��ص��ӿ�
@param pSpi �����Իص��ӿ����ʵ��'''
        ret = _KSApi_Md.RegisterSpi(self.api_ptr, pSpi)
        pSpi.register_api(self)
        return ret

