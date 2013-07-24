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

import _KSApi_Trader
import os
import KSUserApiStruct

_KSApi_Trader.register_struct(KSUserApiStruct)

class KSTraderSpi:
    def register_api(self, api):
        self.api=api

    def OnRtnChangeAccountByBank(self, pChangeAccount):
        '''���з����������˺�֪ͨ'''
        pass

    def OnRspQryInstrument(self, pInstrument, pRspInfo, nRequestID, bIsLast):
        '''�����ѯ��Լ��Ӧ'''
        pass

    def OnErrRtnFutureToBankByFuture(self, pReqTransfer, pRspInfo):
        '''�ڻ������ڻ��ʽ�ת���д���ر�'''
        pass

    def OnRspQryInstrumentMarginRate(self, pInstrumentMarginRate, pRspInfo, nRequestID, bIsLast):
        '''�����ѯ��Լ��֤������Ӧ'''
        pass

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

    def OnRspQryExchange(self, pExchange, pRspInfo, nRequestID, bIsLast):
        '''�����ѯ��������Ӧ'''
        pass

    def OnRspOrderAction(self, pInputOrderAction, pRspInfo, nRequestID, bIsLast):
        '''��������������Ӧ'''
        pass

    def OnErrRtnRepealBankToFutureByFutureManual(self, pReqRepeal, pRspInfo):
        '''ϵͳ����ʱ�ڻ����ֹ������������ת�ڻ�����ر�'''
        pass

    def OnErrRtnBankToFutureByFuture(self, pReqTransfer, pRspInfo):
        '''�ڻ����������ʽ�ת�ڻ�����ر�'''
        pass

    def OnRtnFromFutureToBankByBank(self, pRspTransfer):
        '''���з����ڻ��ʽ�ת����֪ͨ'''
        pass

    def OnRspQryInvestor(self, pInvestor, pRspInfo, nRequestID, bIsLast):
        '''�����ѯͶ������Ӧ'''
        pass

    def OnRspRemoveParkedOrder(self, pRemoveParkedOrder, pRspInfo, nRequestID, bIsLast):
        '''ɾ��Ԥ����Ӧ'''
        pass

    def OnRspQryTransferBank(self, pTransferBank, pRspInfo, nRequestID, bIsLast):
        '''�����ѯת��������Ӧ'''
        pass

    def OnRspQryBrokerTradingAlgos(self, pBrokerTradingAlgos, pRspInfo, nRequestID, bIsLast):
        '''�����ѯ���͹�˾�����㷨��Ӧ'''
        pass

    def OnRspQrySettlementInfo(self, pSettlementInfo, pRspInfo, nRequestID, bIsLast):
        '''�����ѯͶ���߽�������Ӧ'''
        pass

    def OnRtnRepealFromFutureToBankByBank(self, pRspRepeal):
        '''���з�������ڻ�ת����֪ͨ'''
        pass

    def OnRtnOpenAccountByBank(self, pOpenAccount):
        '''���з������ڿ���֪ͨ'''
        pass

    def OnRspError(self, pRspInfo, nRequestID, bIsLast):
        '''����Ӧ��'''
        pass

    def OnRspQryCFMMCTradingAccountKey(self, pCFMMCTradingAccountKey, pRspInfo, nRequestID, bIsLast):
        '''��ѯ��֤����ϵͳ���͹�˾�ʽ��˻���Կ��Ӧ'''
        pass

    def OnRspUserLogin(self, pRspUserLogin, pRspInfo, nRequestID, bIsLast):
        '''��¼������Ӧ'''
        pass

    def OnRtnRepealFromFutureToBankByFuture(self, pRspRepeal):
        '''�ڻ���������ڻ�ת�����������д�����Ϻ��̷��ص�֪ͨ'''
        pass

    def OnRspParkedOrderAction(self, pParkedOrderAction, pRspInfo, nRequestID, bIsLast):
        '''Ԥ�񳷵�¼��������Ӧ'''
        pass

    def OnErrRtnOrderAction(self, pOrderAction, pRspInfo):
        '''������������ر�'''
        pass

    def OnRtnCancelAccountByBank(self, pCancelAccount):
        '''���з�����������֪ͨ'''
        pass

    def OnRtnInstrumentStatus(self, pInstrumentStatus):
        '''��Լ����״̬֪ͨ'''
        pass

    def OnRspQryContractBank(self, pContractBank, pRspInfo, nRequestID, bIsLast):
        '''�����ѯǩԼ������Ӧ'''
        pass

    def OnRspOrderInsert(self, pInputOrder, pRspInfo, nRequestID, bIsLast):
        '''����¼��������Ӧ'''
        pass

    def OnRspQryEWarrantOffset(self, pEWarrantOffset, pRspInfo, nRequestID, bIsLast):
        '''�����ѯ�ֵ��۵���Ϣ��Ӧ'''
        pass

    def OnRspUserPasswordUpdate(self, pUserPasswordUpdate, pRspInfo, nRequestID, bIsLast):
        '''�û��������������Ӧ'''
        pass

    def OnRspParkedOrderInsert(self, pParkedOrder, pRspInfo, nRequestID, bIsLast):
        '''Ԥ��¼��������Ӧ'''
        pass

    def OnRtnTradingNotice(self, pTradingNoticeInfo):
        '''����֪ͨ'''
        pass

    def OnRspFromBankToFutureByFuture(self, pReqTransfer, pRspInfo, nRequestID, bIsLast):
        '''�ڻ����������ʽ�ת�ڻ�Ӧ��'''
        pass

    def OnRspQryInvestorPositionCombineDetail(self, pInvestorPositionCombineDetail, pRspInfo, nRequestID, bIsLast):
        '''�����ѯͶ���ֲ߳���ϸ��Ӧ'''
        pass

    def OnRspFromFutureToBankByFuture(self, pReqTransfer, pRspInfo, nRequestID, bIsLast):
        '''�ڻ������ڻ��ʽ�ת����Ӧ��'''
        pass

    def OnRspBulkCancelOrder(self, pBulkCancelOrder, pRspInfo, nRequestID, bIsLast):
        '''������������������Ӧ'''
        pass

    def OnRspQryInvestorOpenCombinePosition(self, pInvestorPositionCombineDetail, pRspInfo, nRequestID, bIsLast):
        '''��ѯ����ǰ����ϳֲ���ϸӦ��(20110808)'''
        pass

    def OnHeartBeatWarning(self, nTimeLapse):
        '''������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��'''
        pass

    def OnErrRtnQueryBankBalanceByFuture(self, pReqQueryAccount, pRspInfo):
        '''�ڻ������ѯ����������ر�'''
        pass

    def OnRspQryAccountregister(self, pAccountregister, pRspInfo, nRequestID, bIsLast):
        '''�����ѯ����ǩԼ��ϵ��Ӧ'''
        pass

    def OnRspQryTradingCode(self, pTradingCode, pRspInfo, nRequestID, bIsLast):
        '''�����ѯ���ױ�����Ӧ'''
        pass

    def OnRtnErrorConditionalOrder(self, pErrorConditionalOrder):
        '''��ʾ������У�����'''
        pass

    def OnRtnFromBankToFutureByFuture(self, pRspTransfer):
        '''�ڻ����������ʽ�ת�ڻ�֪ͨ'''
        pass

    def OnRspQrySettlementInfoConfirm(self, pSettlementInfoConfirm, pRspInfo, nRequestID, bIsLast):
        '''�����ѯ������Ϣȷ����Ӧ'''
        pass

    def OnRtnQueryBankBalanceByFuture(self, pNotifyQueryAccount):
        '''�ڻ������ѯ�������֪ͨ'''
        pass

    def OnRtnOrder(self, pOrder):
        '''����֪ͨ'''
        pass

    def OnRspQryTransferSerial(self, pTransferSerial, pRspInfo, nRequestID, bIsLast):
        '''�����ѯת����ˮ��Ӧ'''
        pass

    def OnRspQryInvestorPosition(self, pInvestorPosition, pRspInfo, nRequestID, bIsLast):
        '''�����ѯͶ���ֲ߳���Ӧ'''
        pass

    def OnRspUserLogout(self, pUserLogout, pRspInfo, nRequestID, bIsLast):
        '''�ǳ�������Ӧ'''
        pass

    def OnErrRtnRepealFutureToBankByFutureManual(self, pReqRepeal, pRspInfo):
        '''ϵͳ����ʱ�ڻ����ֹ���������ڻ�ת���д���ر�'''
        pass

    def OnRspQryInvestorPositionDetail(self, pInvestorPositionDetail, pRspInfo, nRequestID, bIsLast):
        '''�����ѯͶ���ֲ߳���ϸ��Ӧ'''
        pass

    def OnRtnFromBankToFutureByBank(self, pRspTransfer):
        '''���з��������ʽ�ת�ڻ�֪ͨ'''
        pass

    def OnRspQryParkedOrderAction(self, pParkedOrderAction, pRspInfo, nRequestID, bIsLast):
        '''�����ѯԤ�񳷵���Ӧ'''
        pass

    def OnRspQryBrokerTradingParams(self, pBrokerTradingParams, pRspInfo, nRequestID, bIsLast):
        '''�����ѯ���͹�˾���ײ�����Ӧ'''
        pass

    def OnRspQryParkedOrder(self, pParkedOrder, pRspInfo, nRequestID, bIsLast):
        '''�����ѯԤ����Ӧ'''
        pass

    def OnRspQueryBankAccountMoneyByFuture(self, pReqQueryAccount, pRspInfo, nRequestID, bIsLast):
        '''�ڻ������ѯ�������Ӧ��'''
        pass

    def OnRspAuthenticate(self, pRspAuthenticateField, pRspInfo, nRequestID, bIsLast):
        '''�ͻ�����֤��Ӧ'''
        pass

    def OnRspQueryMaxOrderVolume(self, pQueryMaxOrderVolume, pRspInfo, nRequestID, bIsLast):
        '''��ѯ��󱨵�������Ӧ'''
        pass

    def OnRtnTrade(self, pTrade):
        '''�ɽ�֪ͨ'''
        pass

    def OnErrRtnOrderInsert(self, pInputOrder, pRspInfo):
        '''����¼�����ر�'''
        pass

    def OnRspQryTradingNotice(self, pTradingNotice, pRspInfo, nRequestID, bIsLast):
        '''�����ѯ����֪ͨ��Ӧ'''
        pass

    def OnRtnRepealFromBankToFutureByFuture(self, pRspRepeal):
        '''�ڻ������������ת�ڻ��������д�����Ϻ��̷��ص�֪ͨ'''
        pass

    def OnRspQryNotice(self, pNotice, pRspInfo, nRequestID, bIsLast):
        '''�����ѯ�ͻ�֪ͨ��Ӧ'''
        pass

    def OnRspQryTradingAccount(self, pTradingAccount, pRspInfo, nRequestID, bIsLast):
        '''�����ѯ�ʽ��˻���Ӧ'''
        pass

    def OnRspTradingAccountPasswordUpdate(self, pTradingAccountPasswordUpdate, pRspInfo, nRequestID, bIsLast):
        '''�ʽ��˻��������������Ӧ'''
        pass

    def OnRtnRepealFromFutureToBankByFutureManual(self, pRspRepeal):
        '''ϵͳ����ʱ�ڻ����ֹ���������ڻ�ת�����������д�����Ϻ��̷��ص�֪ͨ'''
        pass

    def OnRspSettlementInfoConfirm(self, pSettlementInfoConfirm, pRspInfo, nRequestID, bIsLast):
        '''Ͷ���߽�����ȷ����Ӧ'''
        pass

    def OnRtnRepealFromBankToFutureByFutureManual(self, pRspRepeal):
        '''ϵͳ����ʱ�ڻ����ֹ������������ת�ڻ��������д�����Ϻ��̷��ص�֪ͨ'''
        pass

    def OnRtnFromFutureToBankByFuture(self, pRspTransfer):
        '''�ڻ������ڻ��ʽ�ת����֪ͨ'''
        pass

    def OnRspQryInvestorOpenPosition(self, pInvestorPositionDetail, pRspInfo, nRequestID, bIsLast):
        '''��ѯ����ǰ�ĳֲ���ϸӦ��(20110808)'''
        pass

    def OnRspQryDepthMarketData(self, pDepthMarketData, pRspInfo, nRequestID, bIsLast):
        '''�����ѯ������Ӧ'''
        pass

    def OnRspRemoveParkedOrderAction(self, pRemoveParkedOrderAction, pRspInfo, nRequestID, bIsLast):
        '''ɾ��Ԥ�񳷵���Ӧ'''
        pass

    def OnFrontConnected(self, ):
        '''���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�'''
        pass

    def OnRspQryInstrumentCommissionRate(self, pInstrumentCommissionRate, pRspInfo, nRequestID, bIsLast):
        '''�����ѯ��Լ����������Ӧ'''
        pass

    def OnRtnRepealFromBankToFutureByBank(self, pRspRepeal):
        '''���з����������ת�ڻ�֪ͨ'''
        pass

    def OnRspQryOrder(self, pOrder, pRspInfo, nRequestID, bIsLast):
        '''�����ѯ������Ӧ'''
        pass

    def OnRspQryTrade(self, pTrade, pRspInfo, nRequestID, bIsLast):
        '''�����ѯ�ɽ���Ӧ'''
        pass


class KSTraderApi:
    @staticmethod
    def CreateKSTraderApi(FlowPath="", IsUsingUdp=False):
        if FlowPath:
            FlowPath=os.path.abspath(FlowPath)
        api_ptr=_KSApi_Trader.create_KSTraderApi(FlowPath, IsUsingUdp)
        return KSTraderApi(api_ptr)

    def __init__(self, api_ptr):
        self.api_ptr = api_ptr

    def ReqQryTradingAccount(self, pQryTradingAccount, nRequestID):
        '''�����ѯ�ʽ��˻�'''
        return _KSApi_Trader.ReqQryTradingAccount(self.api_ptr, pQryTradingAccount, nRequestID)

    def ReqQryExchange(self, pQryExchange, nRequestID):
        '''�����ѯ������'''
        return _KSApi_Trader.ReqQryExchange(self.api_ptr, pQryExchange, nRequestID)

    def ReqUserPasswordUpdate(self, pUserPasswordUpdate, nRequestID):
        '''�û������������'''
        return _KSApi_Trader.ReqUserPasswordUpdate(self.api_ptr, pUserPasswordUpdate, nRequestID)

    def RegisterNameServer(self, pszNameServerAddress):
        '''ע�����ַ����������ַ
@param pszNsAddress�����ַ����������ַ��
@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port/proxyuser:proxypass@proxyipaddress:proxyport/���ر�ʶ/�ͻ��š�
@remark �磺��tcp://127.0.0.1:12001/A/80001����
@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����12001������������˿ںš���A���������ر�ʶ����80001������ͻ���
@remark RegisterNameServer������RegisterFront'''
        return _KSApi_Trader.RegisterNameServer(self.api_ptr, pszNameServerAddress)

    def ReqQryTradingNotice(self, pQryTradingNotice, nRequestID):
        '''�����ѯ����֪ͨ'''
        return _KSApi_Trader.ReqQryTradingNotice(self.api_ptr, pQryTradingNotice, nRequestID)

    def ReqQryTrade(self, pQryTrade, nRequestID):
        '''�����ѯ�ɽ�'''
        return _KSApi_Trader.ReqQryTrade(self.api_ptr, pQryTrade, nRequestID)

    def ReqQueryMaxOrderVolume(self, pQueryMaxOrderVolume, nRequestID):
        '''��ѯ��󱨵���������'''
        return _KSApi_Trader.ReqQueryMaxOrderVolume(self.api_ptr, pQueryMaxOrderVolume, nRequestID)

    def ReqSettlementInfoConfirm(self, pSettlementInfoConfirm, nRequestID):
        '''Ͷ���߽�����ȷ��'''
        return _KSApi_Trader.ReqSettlementInfoConfirm(self.api_ptr, pSettlementInfoConfirm, nRequestID)

    def ReqQryInvestorPosition(self, pQryInvestorPosition, nRequestID):
        '''�����ѯͶ���ֲ߳�'''
        return _KSApi_Trader.ReqQryInvestorPosition(self.api_ptr, pQryInvestorPosition, nRequestID)

    def ReqQryBrokerTradingAlgos(self, pQryBrokerTradingAlgos, nRequestID):
        '''�����ѯ���͹�˾�����㷨'''
        return _KSApi_Trader.ReqQryBrokerTradingAlgos(self.api_ptr, pQryBrokerTradingAlgos, nRequestID)

    def RegisterFront(self, pszFrontAddress):
        '''ע��ǰ�û������ַ
@param pszFrontAddress��ǰ�û������ַ��
@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:17001����
@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����17001������������˿ںš�'''
        return _KSApi_Trader.RegisterFront(self.api_ptr, pszFrontAddress)

    def Init(self, ):
        '''��ʼ��
@remark ��ʼ�����л���,ֻ�е��ú�,�ӿڲſ�ʼ����'''
        return _KSApi_Trader.Init(self.api_ptr, )

    def ReqQryTradingCode(self, pQryTradingCode, nRequestID):
        '''�����ѯ���ױ���'''
        return _KSApi_Trader.ReqQryTradingCode(self.api_ptr, pQryTradingCode, nRequestID)

    def ReqUserLogin(self, pReqUserLoginField, nRequestID):
        '''�û���¼����'''
        return _KSApi_Trader.ReqUserLogin(self.api_ptr, pReqUserLoginField, nRequestID)

    def ReqFromFutureToBankByFuture(self, pReqTransfer, nRequestID):
        '''�ڻ������ڻ��ʽ�ת��������'''
        return _KSApi_Trader.ReqFromFutureToBankByFuture(self.api_ptr, pReqTransfer, nRequestID)

    def RegisterSpi(self, pSpi):
        '''ע��ص��ӿ�
@param pSpi �����Իص��ӿ����ʵ��'''
        ret = _KSApi_Trader.RegisterSpi(self.api_ptr, pSpi)
        pSpi.register_api(self)
        return ret

    def SubscribePublicTopic(self, nResumeType):
        '''���Ĺ�������
@param nResumeType �������ش���ʽ
        THOST_TERT_RESTART:�ӱ������տ�ʼ�ش�
        THOST_TERT_RESUME:���ϴ��յ�������
        THOST_TERT_QUICK:ֻ���͵�¼�󹫹���������
@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ������������ݡ�'''
        return _KSApi_Trader.SubscribePublicTopic(self.api_ptr, nResumeType)

    def GetTradingDay(self, ):
        '''��ȡ��ǰ������
@retrun ��ȡ���Ľ�����
@remark ֻ�е�¼�ɹ���,���ܵõ���ȷ�Ľ�����'''
        return _KSApi_Trader.GetTradingDay(self.api_ptr, )

    def ReqFromBankToFutureByFuture(self, pReqTransfer, nRequestID):
        '''�ڻ����������ʽ�ת�ڻ�����'''
        return _KSApi_Trader.ReqFromBankToFutureByFuture(self.api_ptr, pReqTransfer, nRequestID)

    def ReqQueryInvestorOpenPosition(self, pQryInvestorOpenPosition, nRequestID):
        '''��ѯ����ǰ�ĳֲ���ϸ(20110808)'''
        return _KSApi_Trader.ReqQueryInvestorOpenPosition(self.api_ptr, pQryInvestorOpenPosition, nRequestID)

    def ReqQryTransferSerial(self, pQryTransferSerial, nRequestID):
        '''�����ѯת����ˮ'''
        return _KSApi_Trader.ReqQryTransferSerial(self.api_ptr, pQryTransferSerial, nRequestID)

    def ReqUserLogout(self, pUserLogout, nRequestID):
        '''�ǳ�����'''
        return _KSApi_Trader.ReqUserLogout(self.api_ptr, pUserLogout, nRequestID)

    def ReqQryBrokerTradingParams(self, pQryBrokerTradingParams, nRequestID):
        '''�����ѯ���͹�˾���ײ���'''
        return _KSApi_Trader.ReqQryBrokerTradingParams(self.api_ptr, pQryBrokerTradingParams, nRequestID)

    def ReqQrySettlementInfoConfirm(self, pQrySettlementInfoConfirm, nRequestID):
        '''�����ѯ������Ϣȷ��'''
        return _KSApi_Trader.ReqQrySettlementInfoConfirm(self.api_ptr, pQrySettlementInfoConfirm, nRequestID)

    def ReqQryNotice(self, pQryNotice, nRequestID):
        '''�����ѯ�ͻ�֪ͨ'''
        return _KSApi_Trader.ReqQryNotice(self.api_ptr, pQryNotice, nRequestID)

    def ReqParkedOrderInsert(self, pParkedOrder, nRequestID):
        '''Ԥ��¼������'''
        return _KSApi_Trader.ReqParkedOrderInsert(self.api_ptr, pParkedOrder, nRequestID)

    def ReqQryContractBank(self, pQryContractBank, nRequestID):
        '''�����ѯǩԼ����'''
        return _KSApi_Trader.ReqQryContractBank(self.api_ptr, pQryContractBank, nRequestID)

    def ReqQryInvestorPositionCombineDetail(self, pQryInvestorPositionCombineDetail, nRequestID):
        '''�����ѯͶ���ֲ߳���ϸ'''
        return _KSApi_Trader.ReqQryInvestorPositionCombineDetail(self.api_ptr, pQryInvestorPositionCombineDetail, nRequestID)

    def ReqParkedOrderAction(self, pParkedOrderAction, nRequestID):
        '''Ԥ�񳷵�¼������'''
        return _KSApi_Trader.ReqParkedOrderAction(self.api_ptr, pParkedOrderAction, nRequestID)

    def ReqQueryBankAccountMoneyByFuture(self, pReqQueryAccount, nRequestID):
        '''�ڻ������ѯ�����������'''
        return _KSApi_Trader.ReqQueryBankAccountMoneyByFuture(self.api_ptr, pReqQueryAccount, nRequestID)

    def Join(self, ):
        '''�ȴ��ӿ��߳̽�������
@return �߳��˳�����'''
        return _KSApi_Trader.Join(self.api_ptr, )

    def ReqQryParkedOrderAction(self, pQryParkedOrderAction, nRequestID):
        '''�����ѯԤ�񳷵�'''
        return _KSApi_Trader.ReqQryParkedOrderAction(self.api_ptr, pQryParkedOrderAction, nRequestID)

    def ReqAuthenticate(self, pReqAuthenticateField, nRequestID):
        '''�ͻ�����֤����'''
        return _KSApi_Trader.ReqAuthenticate(self.api_ptr, pReqAuthenticateField, nRequestID)

    def ReqOrderInsert(self, pInputOrder, nRequestID):
        '''����¼������'''
        return _KSApi_Trader.ReqOrderInsert(self.api_ptr, pInputOrder, nRequestID)

    def SetWritablePath(self, szpath = ""):
        '''���õ�ǰ�ɶ�д·��'''
        return _KSApi_Trader.SetWritablePath(self.api_ptr, szpath)

    def ReqQrySettlementInfo(self, pQrySettlementInfo, nRequestID):
        '''�����ѯͶ���߽�����'''
        return _KSApi_Trader.ReqQrySettlementInfo(self.api_ptr, pQrySettlementInfo, nRequestID)

    def ReqQryInstrument(self, pQryInstrument, nRequestID):
        '''�����ѯ��Լ'''
        return _KSApi_Trader.ReqQryInstrument(self.api_ptr, pQryInstrument, nRequestID)

    def ReqBulkCancelOrder(self, pBulkCancelOrder, nRequestID):
        '''��������'''
        return _KSApi_Trader.ReqBulkCancelOrder(self.api_ptr, pBulkCancelOrder, nRequestID)

    def ReqOrderAction(self, pInputOrderAction, nRequestID):
        '''������������'''
        return _KSApi_Trader.ReqOrderAction(self.api_ptr, pInputOrderAction, nRequestID)

    def ReqQryInstrumentCommissionRate(self, pQryInstrumentCommissionRate, nRequestID):
        '''�����ѯ��Լ��������'''
        return _KSApi_Trader.ReqQryInstrumentCommissionRate(self.api_ptr, pQryInstrumentCommissionRate, nRequestID)

    def Release(self, ):
        '''ɾ���ӿڶ�����
@remark ����ʹ�ñ��ӿڶ���ʱ,���øú���ɾ���ӿڶ���'''
        return _KSApi_Trader.Release(self.api_ptr, )

    def ReqQryInstrumentMarginRate(self, pQryInstrumentMarginRate, nRequestID):
        '''�����ѯ��Լ��֤����'''
        return _KSApi_Trader.ReqQryInstrumentMarginRate(self.api_ptr, pQryInstrumentMarginRate, nRequestID)

    def ReqQryInvestor(self, pQryInvestor, nRequestID):
        '''�����ѯͶ����'''
        return _KSApi_Trader.ReqQryInvestor(self.api_ptr, pQryInvestor, nRequestID)

    def ReqQueryInvestorOpenCombinePosition(self, pQryInvestorOpenCombinePosition, nRequestID):
        '''��ѯ����ǰ����ϳֲ���ϸ(20110808)'''
        return _KSApi_Trader.ReqQueryInvestorOpenCombinePosition(self.api_ptr, pQryInvestorOpenCombinePosition, nRequestID)

    def ReqQryDepthMarketData(self, pQryDepthMarketData, nRequestID):
        '''�����ѯ����'''
        return _KSApi_Trader.ReqQryDepthMarketData(self.api_ptr, pQryDepthMarketData, nRequestID)

    def ReqQryOrder(self, pQryOrder, nRequestID):
        '''�����ѯ����'''
        return _KSApi_Trader.ReqQryOrder(self.api_ptr, pQryOrder, nRequestID)

    def ReqRemoveParkedOrderAction(self, pRemoveParkedOrderAction, nRequestID):
        '''����ɾ��Ԥ�񳷵�'''
        return _KSApi_Trader.ReqRemoveParkedOrderAction(self.api_ptr, pRemoveParkedOrderAction, nRequestID)

    def ReqQryTransferBank(self, pQryTransferBank, nRequestID):
        '''�����ѯת������'''
        return _KSApi_Trader.ReqQryTransferBank(self.api_ptr, pQryTransferBank, nRequestID)


    def LoadExtApi(self, spi, ExtApiName = "KSCosApi"):
        '''ע��������ʵ��'''
        api_cos= _KSApi_Trader.LoadExtApi(self.api_ptr, spi, ExtApiName)
        return CTKSCosApi(api_cos, spi)

    def ReqQryCFMMCTradingAccountKey(self, pQryCFMMCTradingAccountKey, nRequestID):
        '''�����ѯ��֤����ϵͳ���͹�˾�ʽ��˻���Կ'''
        return _KSApi_Trader.ReqQryCFMMCTradingAccountKey(self.api_ptr, pQryCFMMCTradingAccountKey, nRequestID)

    def ReqTradingAccountPasswordUpdate(self, pTradingAccountPasswordUpdate, nRequestID):
        '''�ʽ��˻������������'''
        return _KSApi_Trader.ReqTradingAccountPasswordUpdate(self.api_ptr, pTradingAccountPasswordUpdate, nRequestID)

    def ReqQryAccountregister(self, pQryAccountregister, nRequestID):
        '''�����ѯ����ǩԼ��ϵ'''
        return _KSApi_Trader.ReqQryAccountregister(self.api_ptr, pQryAccountregister, nRequestID)

    def ReqQryParkedOrder(self, pQryParkedOrder, nRequestID):
        '''�����ѯԤ��'''
        return _KSApi_Trader.ReqQryParkedOrder(self.api_ptr, pQryParkedOrder, nRequestID)

    def ReqQryEWarrantOffset(self, pQryEWarrantOffset, nRequestID):
        '''�����ѯ�ֵ��۵���Ϣ'''
        return _KSApi_Trader.ReqQryEWarrantOffset(self.api_ptr, pQryEWarrantOffset, nRequestID)

    def ReqQryInvestorPositionDetail(self, pQryInvestorPositionDetail, nRequestID):
        '''�����ѯͶ���ֲ߳���ϸ'''
        return _KSApi_Trader.ReqQryInvestorPositionDetail(self.api_ptr, pQryInvestorPositionDetail, nRequestID)

    def ReqRemoveParkedOrder(self, pRemoveParkedOrder, nRequestID):
        '''����ɾ��Ԥ��'''
        return _KSApi_Trader.ReqRemoveParkedOrder(self.api_ptr, pRemoveParkedOrder, nRequestID)

    def SubscribePrivateTopic(self, nResumeType):
        '''����˽������
@param nResumeType ˽�����ش���ʽ
        THOST_TERT_RESTART:�ӱ������տ�ʼ�ش�
        THOST_TERT_RESUME:���ϴ��յ�������
        THOST_TERT_QUICK:ֻ���͵�¼��˽����������
@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ�˽���������ݡ�'''
        return _KSApi_Trader.SubscribePrivateTopic(self.api_ptr, nResumeType)


class CTKSCosSpi:
    def register_api(self, api):
        self.api=api

    def OnRspQueryConditionalOrder(self, pQueryConditionalOrder, pRspInfo, nRequestID, bIsLast):
        '''��������ѯ��Ӧ'''
        pass

    def OnRspQueryProfitAndLossOrder(self, pQueryProfitAndLossOrder, pRspInfo, nRequestID, bIsLast):
        '''ֹ��ֹӯ����ѯ��Ӧ'''
        pass

    def OnRspModifyConditionalOrder(self, pModifyConditionalOrder, pRspInfo, nRequestID, bIsLast):
        '''�������޸���Ӧ'''
        pass

    def OnRspPauseConditionalOrder(self, pPauseConditionalOrder, pRspInfo, nRequestID, bIsLast):
        '''��������ͣ������Ӧ'''
        pass

    def OnRspInitInsertConditionalOrder(self, pInitInsertConditionalOrder, pRspInfo, nRequestID, bIsLast):
        '''������¼����Ӧ'''
        pass

    def OnRtnCOSStatus(self, pCOSStatus):
        '''������״̬֪ͨ'''
        pass

    def OnRspSelectConditionalOrder(self, pSelectConditionalOrder, pRspInfo, nRequestID, bIsLast):
        '''������ѡ����Ӧ'''
        pass

    def OnRspModifyProfitAndLossOrder(self, pModifyProfitAndLossOrder, pRspInfo, nRequestID, bIsLast):
        '''ֹ��ֹӯ���޸���Ӧ'''
        pass

    def OnRspInsertProfitAndLossOrder(self, pInsertProfitAndLossOrder, pRspInfo, nRequestID, bIsLast):
        '''ֹ��ֹӯ��¼����Ӧ'''
        pass

    def OnRspRemoveConditionalOrder(self, pRemoveConditionalOrder, pRspInfo, nRequestID, bIsLast):
        '''������ɾ����Ӧ'''
        pass

    def OnRspRemoveProfitAndLossOrder(self, pRemoveProfitAndLossOrder, pRspInfo, nRequestID, bIsLast):
        '''ֹ��ֹӯ��ɾ����Ӧ'''
        pass

    def OnRtnCOSAskSelect(self, pCOSAskSelect):
        '''����������ѡ��֪ͨ'''
        pass

    def OnRtnPLStatus(self, pPLStatus):
        '''ֹ��ֹӯ��״̬֪ͨ'''
        pass


class CTKSCosApi:
    def __init__(self, api_ptr, spi_ptr):
        self.api_ptr = api_ptr
        spi_ptr.register_api(self.api_ptr)

    def ReqInitInsertConditionalOrder(self, pConditionalOrderInitInsert, nRequestID):
        '''������¼������'''
        return _KSApi_Trader.ReqInitInsertConditionalOrder(self.api_ptr, pConditionalOrderInitInsert, nRequestID)

    def ReqRemoveConditionalOrder(self, pConditionalOrderRemove, nRequestID):
        '''ɾ������������'''
        return _KSApi_Trader.ReqRemoveConditionalOrder(self.api_ptr, pConditionalOrderRemove, nRequestID)

    def ReqInsertProfitAndLossOrder(self, pProfitAndLossOrderInsert, nRequestID):
        '''ֹ��ֹӯ��¼������'''
        return _KSApi_Trader.ReqInsertProfitAndLossOrder(self.api_ptr, pProfitAndLossOrderInsert, nRequestID)

    def ReqQueryProfitAndLossOrder(self, pProfitAndLossOrderQuery, nRequestID):
        '''ֹ��ֹӯ����ѯ����'''
        return _KSApi_Trader.ReqQueryProfitAndLossOrder(self.api_ptr, pProfitAndLossOrderQuery, nRequestID)

    def ReqRemoveProfitAndLossOrder(self, pProfitAndLossOrderRemove, nRequestID):
        '''ֹ��ֹӯ��ɾ������'''
        return _KSApi_Trader.ReqRemoveProfitAndLossOrder(self.api_ptr, pProfitAndLossOrderRemove, nRequestID)

    def ReqSelectConditionalOrder(self, pConditionalOrderSelect, nRequestID):
        '''ѡ������������'''
        return _KSApi_Trader.ReqSelectConditionalOrder(self.api_ptr, pConditionalOrderSelect, nRequestID)

    def ReqQueryConditionalOrder(self, pConditionalOrderQuery, nRequestID):
        '''��ѯ����������'''
        return _KSApi_Trader.ReqQueryConditionalOrder(self.api_ptr, pConditionalOrderQuery, nRequestID)

    def ReqStateAlterConditionalOrder(self, pConditionalOrderStateAlter, nRequestID):
        '''��ͣ�򼤻�����������'''
        return _KSApi_Trader.ReqStateAlterConditionalOrder(self.api_ptr, pConditionalOrderStateAlter, nRequestID)

    def ReqModifyConditionalOrder(self, pConditionalOrderModify, nRequestID):
        '''�޸�����������'''
        return _KSApi_Trader.ReqModifyConditionalOrder(self.api_ptr, pConditionalOrderModify, nRequestID)

    def ReqModifyProfitAndLossOrder(self, pProfitAndLossOrderModify, nRequestID):
        '''ֹ��ֹӯ���޸�����'''
        return _KSApi_Trader.ReqModifyProfitAndLossOrder(self.api_ptr, pProfitAndLossOrderModify, nRequestID)

