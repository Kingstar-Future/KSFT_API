/*

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
*/

#ifndef WRAPPER_H
#define WRAPPER_H

#pragma warning(disable : 4996)

//#include <Python.h>
#ifdef _DEBUG
#undef _DEBUG   //links to pythonxx.lib
#include <Python.h>
#define _DEBUG
#else
#include <Python.h>
#endif

#include "KSTraderApiEx.h"
#include "KSCosApi.h"

class MySpiWrapper : public KingstarAPI::CThostFtdcTraderSpi
{
 public:
  MySpiWrapper(PyObject * parent);

  virtual void OnRtnChangeAccountByBank(KingstarAPI::CThostFtdcChangeAccountField* pChangeAccount);
  virtual void OnRspQryInstrument(KingstarAPI::CThostFtdcInstrumentField* pInstrument, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnErrRtnFutureToBankByFuture(KingstarAPI::CThostFtdcReqTransferField* pReqTransfer, KingstarAPI::CThostFtdcRspInfoField* pRspInfo);
  virtual void OnRspQryInstrumentMarginRate(KingstarAPI::CThostFtdcInstrumentMarginRateField* pInstrumentMarginRate, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnFrontDisconnected(int nReason);
  virtual void OnRspQryExchange(KingstarAPI::CThostFtdcExchangeField* pExchange, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspOrderAction(KingstarAPI::CThostFtdcInputOrderActionField* pInputOrderAction, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnErrRtnRepealBankToFutureByFutureManual(KingstarAPI::CThostFtdcReqRepealField* pReqRepeal, KingstarAPI::CThostFtdcRspInfoField* pRspInfo);
  virtual void OnErrRtnBankToFutureByFuture(KingstarAPI::CThostFtdcReqTransferField* pReqTransfer, KingstarAPI::CThostFtdcRspInfoField* pRspInfo);
  virtual void OnRtnFromFutureToBankByBank(KingstarAPI::CThostFtdcRspTransferField* pRspTransfer);
  virtual void OnRspQryInvestor(KingstarAPI::CThostFtdcInvestorField* pInvestor, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspRemoveParkedOrder(KingstarAPI::CThostFtdcRemoveParkedOrderField* pRemoveParkedOrder, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspQryTransferBank(KingstarAPI::CThostFtdcTransferBankField* pTransferBank, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspQryBrokerTradingAlgos(KingstarAPI::CThostFtdcBrokerTradingAlgosField* pBrokerTradingAlgos, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspQrySettlementInfo(KingstarAPI::CThostFtdcSettlementInfoField* pSettlementInfo, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRtnRepealFromFutureToBankByBank(KingstarAPI::CThostFtdcRspRepealField* pRspRepeal);
  virtual void OnRtnOpenAccountByBank(KingstarAPI::CThostFtdcOpenAccountField* pOpenAccount);
  virtual void OnRspError(KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspQryCFMMCTradingAccountKey(KingstarAPI::CThostFtdcCFMMCTradingAccountKeyField* pCFMMCTradingAccountKey, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspUserLogin(KingstarAPI::CThostFtdcRspUserLoginField* pRspUserLogin, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRtnRepealFromFutureToBankByFuture(KingstarAPI::CThostFtdcRspRepealField* pRspRepeal);
  virtual void OnRspParkedOrderAction(KingstarAPI::CThostFtdcParkedOrderActionField* pParkedOrderAction, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnErrRtnOrderAction(KingstarAPI::CThostFtdcOrderActionField* pOrderAction, KingstarAPI::CThostFtdcRspInfoField* pRspInfo);
  virtual void OnRtnCancelAccountByBank(KingstarAPI::CThostFtdcCancelAccountField* pCancelAccount);
  virtual void OnRtnInstrumentStatus(KingstarAPI::CThostFtdcInstrumentStatusField* pInstrumentStatus);
  virtual void OnRspQryContractBank(KingstarAPI::CThostFtdcContractBankField* pContractBank, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspOrderInsert(KingstarAPI::CThostFtdcInputOrderField* pInputOrder, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspQryEWarrantOffset(KingstarAPI::CThostFtdcEWarrantOffsetField* pEWarrantOffset, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspUserPasswordUpdate(KingstarAPI::CThostFtdcUserPasswordUpdateField* pUserPasswordUpdate, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspParkedOrderInsert(KingstarAPI::CThostFtdcParkedOrderField* pParkedOrder, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRtnTradingNotice(KingstarAPI::CThostFtdcTradingNoticeInfoField* pTradingNoticeInfo);
  virtual void OnRspFromBankToFutureByFuture(KingstarAPI::CThostFtdcReqTransferField* pReqTransfer, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspQryInvestorPositionCombineDetail(KingstarAPI::CThostFtdcInvestorPositionCombineDetailField* pInvestorPositionCombineDetail, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspFromFutureToBankByFuture(KingstarAPI::CThostFtdcReqTransferField* pReqTransfer, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspBulkCancelOrder(KingstarAPI::CThostFtdcBulkCancelOrderField* pBulkCancelOrder, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspQryInvestorOpenCombinePosition(KingstarAPI::CThostFtdcInvestorPositionCombineDetailField* pInvestorPositionCombineDetail, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnHeartBeatWarning(int nTimeLapse);
  virtual void OnErrRtnQueryBankBalanceByFuture(KingstarAPI::CThostFtdcReqQueryAccountField* pReqQueryAccount, KingstarAPI::CThostFtdcRspInfoField* pRspInfo);
  virtual void OnRspQryAccountregister(KingstarAPI::CThostFtdcAccountregisterField* pAccountregister, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspQryTradingCode(KingstarAPI::CThostFtdcTradingCodeField* pTradingCode, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRtnErrorConditionalOrder(KingstarAPI::CThostFtdcErrorConditionalOrderField* pErrorConditionalOrder);
  virtual void OnRtnFromBankToFutureByFuture(KingstarAPI::CThostFtdcRspTransferField* pRspTransfer);
  virtual void OnRspQrySettlementInfoConfirm(KingstarAPI::CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRtnQueryBankBalanceByFuture(KingstarAPI::CThostFtdcNotifyQueryAccountField* pNotifyQueryAccount);
  virtual void OnRtnOrder(KingstarAPI::CThostFtdcOrderField* pOrder);
  virtual void OnRspQryTransferSerial(KingstarAPI::CThostFtdcTransferSerialField* pTransferSerial, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspQryInvestorPosition(KingstarAPI::CThostFtdcInvestorPositionField* pInvestorPosition, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspUserLogout(KingstarAPI::CThostFtdcUserLogoutField* pUserLogout, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnErrRtnRepealFutureToBankByFutureManual(KingstarAPI::CThostFtdcReqRepealField* pReqRepeal, KingstarAPI::CThostFtdcRspInfoField* pRspInfo);
  virtual void OnRspQryInvestorPositionDetail(KingstarAPI::CThostFtdcInvestorPositionDetailField* pInvestorPositionDetail, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRtnFromBankToFutureByBank(KingstarAPI::CThostFtdcRspTransferField* pRspTransfer);
  virtual void OnRspQryParkedOrderAction(KingstarAPI::CThostFtdcParkedOrderActionField* pParkedOrderAction, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspQryBrokerTradingParams(KingstarAPI::CThostFtdcBrokerTradingParamsField* pBrokerTradingParams, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspQryParkedOrder(KingstarAPI::CThostFtdcParkedOrderField* pParkedOrder, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspQueryBankAccountMoneyByFuture(KingstarAPI::CThostFtdcReqQueryAccountField* pReqQueryAccount, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspAuthenticate(KingstarAPI::CThostFtdcRspAuthenticateField* pRspAuthenticateField, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspQueryMaxOrderVolume(KingstarAPI::CThostFtdcQueryMaxOrderVolumeField* pQueryMaxOrderVolume, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRtnTrade(KingstarAPI::CThostFtdcTradeField* pTrade);
  virtual void OnErrRtnOrderInsert(KingstarAPI::CThostFtdcInputOrderField* pInputOrder, KingstarAPI::CThostFtdcRspInfoField* pRspInfo);
  virtual void OnRspQryTradingNotice(KingstarAPI::CThostFtdcTradingNoticeField* pTradingNotice, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRtnRepealFromBankToFutureByFuture(KingstarAPI::CThostFtdcRspRepealField* pRspRepeal);
  virtual void OnRspQryNotice(KingstarAPI::CThostFtdcNoticeField* pNotice, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspQryTradingAccount(KingstarAPI::CThostFtdcTradingAccountField* pTradingAccount, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspTradingAccountPasswordUpdate(KingstarAPI::CThostFtdcTradingAccountPasswordUpdateField* pTradingAccountPasswordUpdate, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRtnRepealFromFutureToBankByFutureManual(KingstarAPI::CThostFtdcRspRepealField* pRspRepeal);
  virtual void OnRspSettlementInfoConfirm(KingstarAPI::CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRtnRepealFromBankToFutureByFutureManual(KingstarAPI::CThostFtdcRspRepealField* pRspRepeal);
  virtual void OnRtnFromFutureToBankByFuture(KingstarAPI::CThostFtdcRspTransferField* pRspTransfer);
  virtual void OnRspQryInvestorOpenPosition(KingstarAPI::CThostFtdcInvestorPositionDetailField* pInvestorPositionDetail, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspQryDepthMarketData(KingstarAPI::CThostFtdcDepthMarketDataField* pDepthMarketData, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspRemoveParkedOrderAction(KingstarAPI::CThostFtdcRemoveParkedOrderActionField* pRemoveParkedOrderAction, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnFrontConnected();
  virtual void OnRspQryInstrumentCommissionRate(KingstarAPI::CThostFtdcInstrumentCommissionRateField* pInstrumentCommissionRate, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRtnRepealFromBankToFutureByBank(KingstarAPI::CThostFtdcRspRepealField* pRspRepeal);
  virtual void OnRspQryOrder(KingstarAPI::CThostFtdcOrderField* pOrder, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspQryTrade(KingstarAPI::CThostFtdcTradeField* pTrade, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

 private:
  PyObject * py_spi;
};


class MySpiWrapper_cos : public CTKSCosSpi
{
 public:
  MySpiWrapper_cos(PyObject * parent_cos);

  virtual void OnRspQueryConditionalOrder(CTKSConditionalOrderOperResultField* pQueryConditionalOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspQueryProfitAndLossOrder(CTKSProfitAndLossOrderOperResultField* pQueryProfitAndLossOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspModifyConditionalOrder(CTKSConditionalOrderOperResultField* pModifyConditionalOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspPauseConditionalOrder(CTKSConditionalOrderOperResultField* pPauseConditionalOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspInitInsertConditionalOrder(CTKSConditionalOrderOperResultField* pInitInsertConditionalOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRtnCOSStatus(CTKSCOSStatusField* pCOSStatus);
  virtual void OnRspSelectConditionalOrder(CTKSConditionalOrderRspResultField* pSelectConditionalOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspModifyProfitAndLossOrder(CTKSProfitAndLossOrderOperResultField* pModifyProfitAndLossOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspInsertProfitAndLossOrder(CTKSProfitAndLossOrderOperResultField* pInsertProfitAndLossOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspRemoveConditionalOrder(CTKSConditionalOrderRspResultField* pRemoveConditionalOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspRemoveProfitAndLossOrder(CTKSProfitAndLossOrderRemoveField* pRemoveProfitAndLossOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRtnCOSAskSelect(CTKSCOSAskSelectField* pCOSAskSelect);
  virtual void OnRtnPLStatus(CTKSPLStatusField* pPLStatus);

 private:
  PyObject * py_spi_cos;
};

#endif
