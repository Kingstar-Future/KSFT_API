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

#include "stdafx.h"
#include "KSstruct.h"
#include "KSwrapper_Trader.h"
        
MySpiWrapper::MySpiWrapper(PyObject * parent):CThostFtdcTraderSpi(){
  py_spi = parent;
  Py_INCREF(py_spi);
}


void MySpiWrapper::OnRtnChangeAccountByBank(KingstarAPI::CThostFtdcChangeAccountField* pChangeAccount){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRtnChangeAccountByBank", (char*)"N", new_CThostFtdcChangeAccountField(pChangeAccount))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryInstrument(KingstarAPI::CThostFtdcInstrumentField* pInstrument, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryInstrument", (char*)"NNib", new_CThostFtdcInstrumentField(pInstrument), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnErrRtnFutureToBankByFuture(KingstarAPI::CThostFtdcReqTransferField* pReqTransfer, KingstarAPI::CThostFtdcRspInfoField* pRspInfo){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnErrRtnFutureToBankByFuture", (char*)"NN", new_CThostFtdcReqTransferField(pReqTransfer), new_CThostFtdcRspInfoField(pRspInfo))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryInstrumentMarginRate(KingstarAPI::CThostFtdcInstrumentMarginRateField* pInstrumentMarginRate, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryInstrumentMarginRate", (char*)"NNib", new_CThostFtdcInstrumentMarginRateField(pInstrumentMarginRate), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnFrontDisconnected(int nReason){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnFrontDisconnected", (char*)"i", nReason)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryExchange(KingstarAPI::CThostFtdcExchangeField* pExchange, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryExchange", (char*)"NNib", new_CThostFtdcExchangeField(pExchange), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspOrderAction(KingstarAPI::CThostFtdcInputOrderActionField* pInputOrderAction, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspOrderAction", (char*)"NNib", new_CThostFtdcInputOrderActionField(pInputOrderAction), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnErrRtnRepealBankToFutureByFutureManual(KingstarAPI::CThostFtdcReqRepealField* pReqRepeal, KingstarAPI::CThostFtdcRspInfoField* pRspInfo){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnErrRtnRepealBankToFutureByFutureManual", (char*)"NN", new_CThostFtdcReqRepealField(pReqRepeal), new_CThostFtdcRspInfoField(pRspInfo))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnErrRtnBankToFutureByFuture(KingstarAPI::CThostFtdcReqTransferField* pReqTransfer, KingstarAPI::CThostFtdcRspInfoField* pRspInfo){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnErrRtnBankToFutureByFuture", (char*)"NN", new_CThostFtdcReqTransferField(pReqTransfer), new_CThostFtdcRspInfoField(pRspInfo))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRtnFromFutureToBankByBank(KingstarAPI::CThostFtdcRspTransferField* pRspTransfer){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRtnFromFutureToBankByBank", (char*)"N", new_CThostFtdcRspTransferField(pRspTransfer))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryInvestor(KingstarAPI::CThostFtdcInvestorField* pInvestor, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryInvestor", (char*)"NNib", new_CThostFtdcInvestorField(pInvestor), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspRemoveParkedOrder(KingstarAPI::CThostFtdcRemoveParkedOrderField* pRemoveParkedOrder, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspRemoveParkedOrder", (char*)"NNib", new_CThostFtdcRemoveParkedOrderField(pRemoveParkedOrder), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryTransferBank(KingstarAPI::CThostFtdcTransferBankField* pTransferBank, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryTransferBank", (char*)"NNib", new_CThostFtdcTransferBankField(pTransferBank), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryBrokerTradingAlgos(KingstarAPI::CThostFtdcBrokerTradingAlgosField* pBrokerTradingAlgos, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryBrokerTradingAlgos", (char*)"NNib", new_CThostFtdcBrokerTradingAlgosField(pBrokerTradingAlgos), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQrySettlementInfo(KingstarAPI::CThostFtdcSettlementInfoField* pSettlementInfo, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQrySettlementInfo", (char*)"NNib", new_CThostFtdcSettlementInfoField(pSettlementInfo), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRtnRepealFromFutureToBankByBank(KingstarAPI::CThostFtdcRspRepealField* pRspRepeal){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRtnRepealFromFutureToBankByBank", (char*)"N", new_CThostFtdcRspRepealField(pRspRepeal))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRtnOpenAccountByBank(KingstarAPI::CThostFtdcOpenAccountField* pOpenAccount){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRtnOpenAccountByBank", (char*)"N", new_CThostFtdcOpenAccountField(pOpenAccount))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspError(KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspError", (char*)"Nib", new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryCFMMCTradingAccountKey(KingstarAPI::CThostFtdcCFMMCTradingAccountKeyField* pCFMMCTradingAccountKey, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryCFMMCTradingAccountKey", (char*)"NNib", new_CThostFtdcCFMMCTradingAccountKeyField(pCFMMCTradingAccountKey), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspUserLogin(KingstarAPI::CThostFtdcRspUserLoginField* pRspUserLogin, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspUserLogin", (char*)"NNib", new_CThostFtdcRspUserLoginField(pRspUserLogin), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRtnRepealFromFutureToBankByFuture(KingstarAPI::CThostFtdcRspRepealField* pRspRepeal){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRtnRepealFromFutureToBankByFuture", (char*)"N", new_CThostFtdcRspRepealField(pRspRepeal))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspParkedOrderAction(KingstarAPI::CThostFtdcParkedOrderActionField* pParkedOrderAction, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspParkedOrderAction", (char*)"NNib", new_CThostFtdcParkedOrderActionField(pParkedOrderAction), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnErrRtnOrderAction(KingstarAPI::CThostFtdcOrderActionField* pOrderAction, KingstarAPI::CThostFtdcRspInfoField* pRspInfo){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnErrRtnOrderAction", (char*)"NN", new_CThostFtdcOrderActionField(pOrderAction), new_CThostFtdcRspInfoField(pRspInfo))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRtnCancelAccountByBank(KingstarAPI::CThostFtdcCancelAccountField* pCancelAccount){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRtnCancelAccountByBank", (char*)"N", new_CThostFtdcCancelAccountField(pCancelAccount))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRtnInstrumentStatus(KingstarAPI::CThostFtdcInstrumentStatusField* pInstrumentStatus){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRtnInstrumentStatus", (char*)"N", new_CThostFtdcInstrumentStatusField(pInstrumentStatus))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryContractBank(KingstarAPI::CThostFtdcContractBankField* pContractBank, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryContractBank", (char*)"NNib", new_CThostFtdcContractBankField(pContractBank), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspOrderInsert(KingstarAPI::CThostFtdcInputOrderField* pInputOrder, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspOrderInsert", (char*)"NNib", new_CThostFtdcInputOrderField(pInputOrder), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryEWarrantOffset(KingstarAPI::CThostFtdcEWarrantOffsetField* pEWarrantOffset, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryEWarrantOffset", (char*)"NNib", new_CThostFtdcEWarrantOffsetField(pEWarrantOffset), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspUserPasswordUpdate(KingstarAPI::CThostFtdcUserPasswordUpdateField* pUserPasswordUpdate, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspUserPasswordUpdate", (char*)"NNib", new_CThostFtdcUserPasswordUpdateField(pUserPasswordUpdate), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspParkedOrderInsert(KingstarAPI::CThostFtdcParkedOrderField* pParkedOrder, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspParkedOrderInsert", (char*)"NNib", new_CThostFtdcParkedOrderField(pParkedOrder), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRtnTradingNotice(KingstarAPI::CThostFtdcTradingNoticeInfoField* pTradingNoticeInfo){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRtnTradingNotice", (char*)"N", new_CThostFtdcTradingNoticeInfoField(pTradingNoticeInfo))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspFromBankToFutureByFuture(KingstarAPI::CThostFtdcReqTransferField* pReqTransfer, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspFromBankToFutureByFuture", (char*)"NNib", new_CThostFtdcReqTransferField(pReqTransfer), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryInvestorPositionCombineDetail(KingstarAPI::CThostFtdcInvestorPositionCombineDetailField* pInvestorPositionCombineDetail, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryInvestorPositionCombineDetail", (char*)"NNib", new_CThostFtdcInvestorPositionCombineDetailField(pInvestorPositionCombineDetail), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspFromFutureToBankByFuture(KingstarAPI::CThostFtdcReqTransferField* pReqTransfer, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspFromFutureToBankByFuture", (char*)"NNib", new_CThostFtdcReqTransferField(pReqTransfer), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspBulkCancelOrder(KingstarAPI::CThostFtdcBulkCancelOrderField* pBulkCancelOrder, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspBulkCancelOrder", (char*)"NNib", new_CThostFtdcBulkCancelOrderField(pBulkCancelOrder), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryInvestorOpenCombinePosition(KingstarAPI::CThostFtdcInvestorPositionCombineDetailField* pInvestorPositionCombineDetail, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryInvestorOpenCombinePosition", (char*)"NNib", new_CThostFtdcInvestorPositionCombineDetailField(pInvestorPositionCombineDetail), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnHeartBeatWarning(int nTimeLapse){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnHeartBeatWarning", (char*)"i", nTimeLapse)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnErrRtnQueryBankBalanceByFuture(KingstarAPI::CThostFtdcReqQueryAccountField* pReqQueryAccount, KingstarAPI::CThostFtdcRspInfoField* pRspInfo){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnErrRtnQueryBankBalanceByFuture", (char*)"NN", new_CThostFtdcReqQueryAccountField(pReqQueryAccount), new_CThostFtdcRspInfoField(pRspInfo))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryAccountregister(KingstarAPI::CThostFtdcAccountregisterField* pAccountregister, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryAccountregister", (char*)"NNib", new_CThostFtdcAccountregisterField(pAccountregister), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryTradingCode(KingstarAPI::CThostFtdcTradingCodeField* pTradingCode, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryTradingCode", (char*)"NNib", new_CThostFtdcTradingCodeField(pTradingCode), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRtnErrorConditionalOrder(KingstarAPI::CThostFtdcErrorConditionalOrderField* pErrorConditionalOrder){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRtnErrorConditionalOrder", (char*)"N", new_CThostFtdcErrorConditionalOrderField(pErrorConditionalOrder))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRtnFromBankToFutureByFuture(KingstarAPI::CThostFtdcRspTransferField* pRspTransfer){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRtnFromBankToFutureByFuture", (char*)"N", new_CThostFtdcRspTransferField(pRspTransfer))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQrySettlementInfoConfirm(KingstarAPI::CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQrySettlementInfoConfirm", (char*)"NNib", new_CThostFtdcSettlementInfoConfirmField(pSettlementInfoConfirm), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRtnQueryBankBalanceByFuture(KingstarAPI::CThostFtdcNotifyQueryAccountField* pNotifyQueryAccount){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRtnQueryBankBalanceByFuture", (char*)"N", new_CThostFtdcNotifyQueryAccountField(pNotifyQueryAccount))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRtnOrder(KingstarAPI::CThostFtdcOrderField* pOrder){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRtnOrder", (char*)"N", new_CThostFtdcOrderField(pOrder))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryTransferSerial(KingstarAPI::CThostFtdcTransferSerialField* pTransferSerial, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryTransferSerial", (char*)"NNib", new_CThostFtdcTransferSerialField(pTransferSerial), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryInvestorPosition(KingstarAPI::CThostFtdcInvestorPositionField* pInvestorPosition, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryInvestorPosition", (char*)"NNib", new_CThostFtdcInvestorPositionField(pInvestorPosition), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspUserLogout(KingstarAPI::CThostFtdcUserLogoutField* pUserLogout, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspUserLogout", (char*)"NNib", new_CThostFtdcUserLogoutField(pUserLogout), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnErrRtnRepealFutureToBankByFutureManual(KingstarAPI::CThostFtdcReqRepealField* pReqRepeal, KingstarAPI::CThostFtdcRspInfoField* pRspInfo){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnErrRtnRepealFutureToBankByFutureManual", (char*)"NN", new_CThostFtdcReqRepealField(pReqRepeal), new_CThostFtdcRspInfoField(pRspInfo))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryInvestorPositionDetail(KingstarAPI::CThostFtdcInvestorPositionDetailField* pInvestorPositionDetail, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryInvestorPositionDetail", (char*)"NNib", new_CThostFtdcInvestorPositionDetailField(pInvestorPositionDetail), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRtnFromBankToFutureByBank(KingstarAPI::CThostFtdcRspTransferField* pRspTransfer){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRtnFromBankToFutureByBank", (char*)"N", new_CThostFtdcRspTransferField(pRspTransfer))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryParkedOrderAction(KingstarAPI::CThostFtdcParkedOrderActionField* pParkedOrderAction, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryParkedOrderAction", (char*)"NNib", new_CThostFtdcParkedOrderActionField(pParkedOrderAction), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryBrokerTradingParams(KingstarAPI::CThostFtdcBrokerTradingParamsField* pBrokerTradingParams, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryBrokerTradingParams", (char*)"NNib", new_CThostFtdcBrokerTradingParamsField(pBrokerTradingParams), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryParkedOrder(KingstarAPI::CThostFtdcParkedOrderField* pParkedOrder, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryParkedOrder", (char*)"NNib", new_CThostFtdcParkedOrderField(pParkedOrder), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQueryBankAccountMoneyByFuture(KingstarAPI::CThostFtdcReqQueryAccountField* pReqQueryAccount, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQueryBankAccountMoneyByFuture", (char*)"NNib", new_CThostFtdcReqQueryAccountField(pReqQueryAccount), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspAuthenticate(KingstarAPI::CThostFtdcRspAuthenticateField* pRspAuthenticateField, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspAuthenticate", (char*)"NNib", new_CThostFtdcRspAuthenticateField(pRspAuthenticateField), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQueryMaxOrderVolume(KingstarAPI::CThostFtdcQueryMaxOrderVolumeField* pQueryMaxOrderVolume, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQueryMaxOrderVolume", (char*)"NNib", new_CThostFtdcQueryMaxOrderVolumeField(pQueryMaxOrderVolume), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRtnTrade(KingstarAPI::CThostFtdcTradeField* pTrade){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRtnTrade", (char*)"N", new_CThostFtdcTradeField(pTrade))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnErrRtnOrderInsert(KingstarAPI::CThostFtdcInputOrderField* pInputOrder, KingstarAPI::CThostFtdcRspInfoField* pRspInfo){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnErrRtnOrderInsert", (char*)"NN", new_CThostFtdcInputOrderField(pInputOrder), new_CThostFtdcRspInfoField(pRspInfo))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryTradingNotice(KingstarAPI::CThostFtdcTradingNoticeField* pTradingNotice, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryTradingNotice", (char*)"NNib", new_CThostFtdcTradingNoticeField(pTradingNotice), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRtnRepealFromBankToFutureByFuture(KingstarAPI::CThostFtdcRspRepealField* pRspRepeal){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRtnRepealFromBankToFutureByFuture", (char*)"N", new_CThostFtdcRspRepealField(pRspRepeal))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryNotice(KingstarAPI::CThostFtdcNoticeField* pNotice, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryNotice", (char*)"NNib", new_CThostFtdcNoticeField(pNotice), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryTradingAccount(KingstarAPI::CThostFtdcTradingAccountField* pTradingAccount, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryTradingAccount", (char*)"NNib", new_CThostFtdcTradingAccountField(pTradingAccount), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspTradingAccountPasswordUpdate(KingstarAPI::CThostFtdcTradingAccountPasswordUpdateField* pTradingAccountPasswordUpdate, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspTradingAccountPasswordUpdate", (char*)"NNib", new_CThostFtdcTradingAccountPasswordUpdateField(pTradingAccountPasswordUpdate), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRtnRepealFromFutureToBankByFutureManual(KingstarAPI::CThostFtdcRspRepealField* pRspRepeal){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRtnRepealFromFutureToBankByFutureManual", (char*)"N", new_CThostFtdcRspRepealField(pRspRepeal))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspSettlementInfoConfirm(KingstarAPI::CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspSettlementInfoConfirm", (char*)"NNib", new_CThostFtdcSettlementInfoConfirmField(pSettlementInfoConfirm), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRtnRepealFromBankToFutureByFutureManual(KingstarAPI::CThostFtdcRspRepealField* pRspRepeal){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRtnRepealFromBankToFutureByFutureManual", (char*)"N", new_CThostFtdcRspRepealField(pRspRepeal))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRtnFromFutureToBankByFuture(KingstarAPI::CThostFtdcRspTransferField* pRspTransfer){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRtnFromFutureToBankByFuture", (char*)"N", new_CThostFtdcRspTransferField(pRspTransfer))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryInvestorOpenPosition(KingstarAPI::CThostFtdcInvestorPositionDetailField* pInvestorPositionDetail, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryInvestorOpenPosition", (char*)"NNib", new_CThostFtdcInvestorPositionDetailField(pInvestorPositionDetail), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryDepthMarketData(KingstarAPI::CThostFtdcDepthMarketDataField* pDepthMarketData, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryDepthMarketData", (char*)"NNib", new_CThostFtdcDepthMarketDataField(pDepthMarketData), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspRemoveParkedOrderAction(KingstarAPI::CThostFtdcRemoveParkedOrderActionField* pRemoveParkedOrderAction, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspRemoveParkedOrderAction", (char*)"NNib", new_CThostFtdcRemoveParkedOrderActionField(pRemoveParkedOrderAction), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnFrontConnected(){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnFrontConnected", NULL))
{
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryInstrumentCommissionRate(KingstarAPI::CThostFtdcInstrumentCommissionRateField* pInstrumentCommissionRate, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryInstrumentCommissionRate", (char*)"NNib", new_CThostFtdcInstrumentCommissionRateField(pInstrumentCommissionRate), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRtnRepealFromBankToFutureByBank(KingstarAPI::CThostFtdcRspRepealField* pRspRepeal){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRtnRepealFromBankToFutureByBank", (char*)"N", new_CThostFtdcRspRepealField(pRspRepeal))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryOrder(KingstarAPI::CThostFtdcOrderField* pOrder, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryOrder", (char*)"NNib", new_CThostFtdcOrderField(pOrder), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryTrade(KingstarAPI::CThostFtdcTradeField* pTrade, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryTrade", (char*)"NNib", new_CThostFtdcTradeField(pTrade), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

MySpiWrapper_cos::MySpiWrapper_cos(PyObject * parent_cos):CTKSCosSpi(){
  py_spi_cos = parent_cos;
  Py_INCREF(py_spi_cos);
}


void MySpiWrapper_cos::OnRspQueryConditionalOrder(CTKSConditionalOrderOperResultField* pQueryConditionalOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi_cos, (char*)"OnRspQueryConditionalOrder", (char*)"NNib", new_CTKSConditionalOrderOperResultField(pQueryConditionalOrder), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper_cos::OnRspQueryProfitAndLossOrder(CTKSProfitAndLossOrderOperResultField* pQueryProfitAndLossOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi_cos, (char*)"OnRspQueryProfitAndLossOrder", (char*)"NNib", new_CTKSProfitAndLossOrderOperResultField(pQueryProfitAndLossOrder), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper_cos::OnRspModifyConditionalOrder(CTKSConditionalOrderOperResultField* pModifyConditionalOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi_cos, (char*)"OnRspModifyConditionalOrder", (char*)"NNib", new_CTKSConditionalOrderOperResultField(pModifyConditionalOrder), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper_cos::OnRspPauseConditionalOrder(CTKSConditionalOrderOperResultField* pPauseConditionalOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi_cos, (char*)"OnRspPauseConditionalOrder", (char*)"NNib", new_CTKSConditionalOrderOperResultField(pPauseConditionalOrder), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper_cos::OnRspInitInsertConditionalOrder(CTKSConditionalOrderOperResultField* pInitInsertConditionalOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi_cos, (char*)"OnRspInitInsertConditionalOrder", (char*)"NNib", new_CTKSConditionalOrderOperResultField(pInitInsertConditionalOrder), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper_cos::OnRtnCOSStatus(CTKSCOSStatusField* pCOSStatus){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi_cos, (char*)"OnRtnCOSStatus", (char*)"N", new_CTKSCOSStatusField(pCOSStatus))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper_cos::OnRspSelectConditionalOrder(CTKSConditionalOrderRspResultField* pSelectConditionalOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi_cos, (char*)"OnRspSelectConditionalOrder", (char*)"NNib", new_CTKSConditionalOrderRspResultField(pSelectConditionalOrder), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper_cos::OnRspModifyProfitAndLossOrder(CTKSProfitAndLossOrderOperResultField* pModifyProfitAndLossOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi_cos, (char*)"OnRspModifyProfitAndLossOrder", (char*)"NNib", new_CTKSProfitAndLossOrderOperResultField(pModifyProfitAndLossOrder), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper_cos::OnRspInsertProfitAndLossOrder(CTKSProfitAndLossOrderOperResultField* pInsertProfitAndLossOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi_cos, (char*)"OnRspInsertProfitAndLossOrder", (char*)"NNib", new_CTKSProfitAndLossOrderOperResultField(pInsertProfitAndLossOrder), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper_cos::OnRspRemoveConditionalOrder(CTKSConditionalOrderRspResultField* pRemoveConditionalOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi_cos, (char*)"OnRspRemoveConditionalOrder", (char*)"NNib", new_CTKSConditionalOrderRspResultField(pRemoveConditionalOrder), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper_cos::OnRspRemoveProfitAndLossOrder(CTKSProfitAndLossOrderRemoveField* pRemoveProfitAndLossOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi_cos, (char*)"OnRspRemoveProfitAndLossOrder", (char*)"NNib", new_CTKSProfitAndLossOrderRemoveField(pRemoveProfitAndLossOrder), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper_cos::OnRtnCOSAskSelect(CTKSCOSAskSelectField* pCOSAskSelect){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi_cos, (char*)"OnRtnCOSAskSelect", (char*)"N", new_CTKSCOSAskSelectField(pCOSAskSelect))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper_cos::OnRtnPLStatus(CTKSPLStatusField* pPLStatus){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi_cos, (char*)"OnRtnPLStatus", (char*)"N", new_CTKSPLStatusField(pPLStatus))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}
