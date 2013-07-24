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

#pragma warning(disable : 4996)
#include "stdafx.h"
//#include <Python.h>
#ifdef _DEBUG
#undef _DEBUG   //links to pythonxx.lib
#include <Python.h>
#define _DEBUG
#else
#include <Python.h>
#endif

#include "KSMdApiEx.h"
#include "KSwrapper_Md.h"
#include "KSstruct.h"

/*
#if defined(ISLIB) && defined(WIN32)
#ifdef LIB_MD_API_EXPORT
#define MD_API_EXPORT __declspec(dllexport)
#else
#define MD_API_EXPORT __declspec(dllimport)
#endif
#else
#define MD_API_EXPORT
#endif
*/

//using namespace std;  

static PyObject* create_KSMdApi(PyObject* self, PyObject *args)
{
  char * flowpath;
  bool IsUsingUdp;

  PyArg_ParseTuple(args, "sb", &flowpath, &IsUsingUdp);
  void *p = KingstarAPI::CThostFtdcMdApi::CreateFtdcMdApi(flowpath, IsUsingUdp);
  return PyInt_FromLong((long)p);
}


static PyObject* Md_ReqUserLogout(PyObject * self, PyObject * args){
  KingstarAPI::CThostFtdcMdApi * user = (KingstarAPI::CThostFtdcMdApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pUserLogout = PyTuple_GET_ITEM(args, 1);
  KingstarAPI::CThostFtdcUserLogoutField* pUserLogout = from_CThostFtdcUserLogoutField(py_pUserLogout);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqUserLogout(pUserLogout, nRequestID));
  free(pUserLogout);
  return ret;
}

static PyObject* Md_Join(PyObject * self, PyObject * args){
  KingstarAPI::CThostFtdcMdApi * user = (KingstarAPI::CThostFtdcMdApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * ret = Py_BuildValue("i", user->Join());
  return ret;
}

static PyObject* Md_RegisterNameServer(PyObject * self, PyObject * args){
  KingstarAPI::CThostFtdcMdApi * user = (KingstarAPI::CThostFtdcMdApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pszNameServerAddress = PyTuple_GET_ITEM(args, 1);
  char* pszNameServerAddress = PyString_AsString(py_pszNameServerAddress);
  user->RegisterNameServer(pszNameServerAddress);


  Py_INCREF(Py_None);
  return Py_None;
}

static PyObject * Md_UnSubscribeMarketData(PyObject* self, PyObject * args)
{
  KingstarAPI::CThostFtdcMdApi * user = (KingstarAPI::CThostFtdcMdApi *)PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * instruments = PyTuple_GET_ITEM(args, 1);

  int l = PySequence_Length(instruments);
  char ** pp =(char**)calloc(l, sizeof(char *));
  int i;
  for (i=0; i<l; i++){
    pp[i] = PyString_AsString(PySequence_GetItem(instruments, i));
  }
  user->UnSubscribeMarketData(pp, l);
  
  free(pp);

  Py_INCREF(Py_None);
  return Py_None;
}

static PyObject* Md_SetWritablePath(PyObject * self, PyObject * args){
  KingstarAPI::CThostFtdcMdApi * user = (KingstarAPI::CThostFtdcMdApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_szpath = PyTuple_GET_ITEM(args, 1);
  char* szpath = PyString_AsString(py_szpath);
  PyObject * ret = Py_BuildValue("i", user->SetWritablePath(szpath = ""));
  return ret;
}

static PyObject* Md_RegisterFront(PyObject * self, PyObject * args){
  KingstarAPI::CThostFtdcMdApi * user = (KingstarAPI::CThostFtdcMdApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pszFrontAddress = PyTuple_GET_ITEM(args, 1);
  char* pszFrontAddress = PyString_AsString(py_pszFrontAddress);
  user->RegisterFront(pszFrontAddress);


  Py_INCREF(Py_None);
  return Py_None;
}

static PyObject* Md_Init(PyObject * self, PyObject * args){
  KingstarAPI::CThostFtdcMdApi * user = (KingstarAPI::CThostFtdcMdApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  user->Init();


  Py_INCREF(Py_None);
  return Py_None;
}

static PyObject* Md_ReqUserLogin(PyObject * self, PyObject * args){
  KingstarAPI::CThostFtdcMdApi * user = (KingstarAPI::CThostFtdcMdApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pReqUserLoginField = PyTuple_GET_ITEM(args, 1);
  KingstarAPI::CThostFtdcReqUserLoginField* pReqUserLoginField = from_CThostFtdcReqUserLoginField(py_pReqUserLoginField);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqUserLogin(pReqUserLoginField, nRequestID));
  free(pReqUserLoginField);
  return ret;
}

static PyObject* Md_Release(PyObject * self, PyObject * args){
  KingstarAPI::CThostFtdcMdApi * user = (KingstarAPI::CThostFtdcMdApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  user->Release();


  Py_INCREF(Py_None);
  return Py_None;
}

static PyObject* Md_GetTradingDay(PyObject * self, PyObject * args){
  KingstarAPI::CThostFtdcMdApi * user = (KingstarAPI::CThostFtdcMdApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * ret = Py_BuildValue("s", user->GetTradingDay());
  return ret;
}

static PyObject * Md_SubscribeMarketData(PyObject* self, PyObject * args)
{
  KingstarAPI::CThostFtdcMdApi * user = (KingstarAPI::CThostFtdcMdApi *)PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * instruments = PyTuple_GET_ITEM(args, 1);

  int l = PySequence_Length(instruments);
  char ** pp =(char**)calloc(l, sizeof(char *));
  int i;
  for (i=0; i<l; i++){
    pp[i] = PyString_AsString(PySequence_GetItem(instruments, i));
  }
  user->SubscribeMarketData(pp, l);
  
  free(pp);

  Py_INCREF(Py_None);
  return Py_None;
}

static PyObject* Md_RegisterSpi(PyObject * self, PyObject * args){
  KingstarAPI::CThostFtdcMdApi * user = (KingstarAPI::CThostFtdcMdApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pSpi = PyTuple_GET_ITEM(args, 1);
  KingstarAPI::CThostFtdcMdSpi* pSpi = new MySpiWrapper(py_pSpi);
  user->RegisterSpi(pSpi);


  Py_INCREF(Py_None);
  return Py_None;
}

extern "C" __declspec(dllexport) void init_KSApi_Md()
{
   static PyMethodDef mbMethods[] = {
     {"create_KSMdApi", create_KSMdApi, METH_VARARGS},
     {"register_struct", register_struct, METH_VARARGS},

     {"ReqUserLogout", Md_ReqUserLogout, METH_VARARGS} ,
     {"Join", Md_Join, METH_VARARGS} ,
     {"RegisterNameServer", Md_RegisterNameServer, METH_VARARGS} ,
     {"UnSubscribeMarketData", Md_UnSubscribeMarketData, METH_VARARGS} ,
     {"SetWritablePath", Md_SetWritablePath, METH_VARARGS} ,
     {"RegisterFront", Md_RegisterFront, METH_VARARGS} ,
     {"Init", Md_Init, METH_VARARGS} ,
     {"ReqUserLogin", Md_ReqUserLogin, METH_VARARGS} ,
     {"Release", Md_Release, METH_VARARGS} ,
     {"GetTradingDay", Md_GetTradingDay, METH_VARARGS} ,
     {"SubscribeMarketData", Md_SubscribeMarketData, METH_VARARGS} ,
     {"RegisterSpi", Md_RegisterSpi, METH_VARARGS} ,

     {NULL, NULL, NULL} 
   };

   PyObject *m = Py_InitModule("_KSApi_Md", mbMethods);

   PyEval_InitThreads();
}

