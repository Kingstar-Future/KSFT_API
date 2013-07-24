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

#include "KSMdApiEx.h"
#include "KSCosApi.h"

class MySpiWrapper : public KingstarAPI::CThostFtdcMdSpi
{
 public:
  MySpiWrapper(PyObject * parent);

  virtual void OnFrontDisconnected(int nReason);
  virtual void OnRspUserLogout(KingstarAPI::CThostFtdcUserLogoutField* pUserLogout, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRtnDepthMarketData(KingstarAPI::CThostFtdcDepthMarketDataField* pDepthMarketData);
  virtual void OnRspSubMarketData(KingstarAPI::CThostFtdcSpecificInstrumentField* pSpecificInstrument, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspUnSubMarketData(KingstarAPI::CThostFtdcSpecificInstrumentField* pSpecificInstrument, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnHeartBeatWarning(int nTimeLapse);
  virtual void OnRspError(KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspUserLogin(KingstarAPI::CThostFtdcRspUserLoginField* pRspUserLogin, KingstarAPI::CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnFrontConnected();

 private:
  PyObject * py_spi;
};


#endif

