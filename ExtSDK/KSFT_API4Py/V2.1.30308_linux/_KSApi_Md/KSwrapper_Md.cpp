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

//#include "stdafx.h"
#include "KSstruct.h"
#include "KSwrapper_Md.h"
        
MySpiWrapper::MySpiWrapper(PyObject * parent):CThostFtdcMdSpi(){
  py_spi = parent;
  Py_INCREF(py_spi);
}


void MySpiWrapper::OnFrontDisconnected(int nReason){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnFrontDisconnected", (char*)"i", nReason)){
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

void MySpiWrapper::OnRtnDepthMarketData(KingstarAPI::CThostFtdcDepthMarketDataField* pDepthMarketData){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRtnDepthMarketData", (char*)"N", new_CThostFtdcDepthMarketDataField(pDepthMarketData))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspSubMarketData(KingstarAPI::CThostFtdcSpecificInstrumentField* pSpecificInstrument, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspSubMarketData", (char*)"NNib", new_CThostFtdcSpecificInstrumentField(pSpecificInstrument), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspUnSubMarketData(KingstarAPI::CThostFtdcSpecificInstrumentField* pSpecificInstrument, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspUnSubMarketData", (char*)"NNib", new_CThostFtdcSpecificInstrumentField(pSpecificInstrument), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
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

void MySpiWrapper::OnRspError(KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspError", (char*)"Nib", new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
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

void MySpiWrapper::OnFrontConnected(){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnFrontConnected", NULL))
{
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}
