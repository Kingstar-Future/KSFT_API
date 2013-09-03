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

"解析KSFT_API接口文件，产生对应的.cpp和.py等封装代码"

import re
import sys
reload(sys)
sys.setdefaultencoding( "utf-8" )
class Parse:
    "分析cpp头文件结构"
    def __init__(self, fn, prefix,locale='utf-8'):
        self.prefix=prefix
        f=file(fn)
        self.file_data = f.readlines()
        f.close()

        self.locale = locale
        self.parse(locale)

    def parse(self,locale):
        self.struct={}

        i=0
        fd = self.file_data
        while i< len(fd)-1:
            i+=1
            l=fd[i].strip()

            if l.startswith('//'): continue
            if l.startswith('class'):
                name = l.split()[-1]
                methods={}
                while i<len(fd)-1:
                    i+=1
                    l=fd[i].strip()
                    if l.startswith('};'): break
                    if l.startswith('virtual'):
                        func_name, func_args=re.findall('(\w*)\((.*)\)', l)[0]
                        ret = l[7:].strip().split(func_name)[0].strip()
                        if "const" in ret: ret=ret.replace('const','').strip()
                        methods[func_name]={'return':self.parse_var(ret,False),
                                            'func_args':[self.parse_var(x) for x in func_args.split(',') if x.strip()],
                                            'comment':self.get_comment(i,locale)}
                        
                self.struct[name]=methods

    def get_comment(self, p,locale):
        "获取注释"
        fd=self.file_data
        data=[]
        while p>0:
            p-=1
            l=fd[p].strip()
            if not l.startswith('///'): break
            #data.append(l[3:].decode('utf-8'))
            data.append(l[3:].decode(locale))
        data.reverse()
        return data

    def parse_var(self, x, has_vn=True):
        "解析一个变量声明"
        if "*" in x:
            x=[x.strip() for x in x.split("*")]
            x[0]+="*"
            if '[' in x[1]:
                x[0]+='*'
            x[1]=x[1].split('[')[0]
        else:
            x=[x.strip() for x in x.split()]
        if has_vn:
            return {"type":x[0], "name":x[1]}
        else: return x[0]

    def _arg_type_map(self, x):
        "将类型映射成对应的python struct类别"
        #if x=='THOST_TE_RESUME_TYPE': return 'i'
        if "const" in x: x=x.replace('const','').strip()
        if x.startswith('char*'): return 's'
        if x in ['int', 'bool', 'double']: return x[0]
        if x == 'short': return 'h'
        else: return 'N'


    def generate_wrapper(self):
        k = self.struct.keys()
        if "api" in k[0].lower():
            api=k[0]
            spi=k[1]
        else:
            api=k[1]
            spi=k[0]
        self.generate_wrapper_spi(spi)
        self.generate_wrapper_api(api)


    def generate_wrapper_spi(self, spi):
        "产生spi部分封装"
        #generate spi

        prefix=self.prefix
        if prefix!="Cos":
            f=file("../_KSApi_%s/KSwrapper_%s.cpp" % (self.prefix, self.prefix),'w')
            f.write('/*\n'+__doc__+'*/\n')
            f2=file('../_KSApi_%s/KSwrapper_%s.h' % (self.prefix, self.prefix), 'w')
            f2.write('/*\n'+__doc__+'*/\n')
            f3=file('../Run/KS%sApi.py' % prefix,'w')
            f3.write(u'#-*- coding=utf-8 -*-\n"""\n'+__doc__+'"""\n')
            f3.write(u"""
import _KSApi_%s
import os
import KSUserApiStruct

_KSApi_%s.register_struct(KSUserApiStruct)

class KS%sSpi:
    def register_api(self, api):
        self.api=api

""" % (prefix, prefix, prefix))
        
            f2.write(u"""
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

#include "KS%sApiEx.h"
#include "KSCosApi.h"

class MySpiWrapper : public KingstarAPI::CThostFtdc%sSpi
{
 public:
  MySpiWrapper(PyObject * parent);

""" % (self.prefix, self.prefix))
            f.write(u"""
//#include "stdafx.h"
#include "KSstruct.h"
#include "KSwrapper_%s.h"
        
MySpiWrapper::MySpiWrapper(PyObject * parent):%s(){
  py_spi = parent;
  Py_INCREF(py_spi);
}

""" % (self.prefix, spi))
        
            methods=self.struct[spi]
            for i in methods:
                args = methods[i]['func_args']
                args1 = ""
                args0 = []
                for j in range(len(args)):
                    if self._arg_type_map(args[j]['type'])=='N':                
                        args0.append('KingstarAPI::'+args[j]['type']+' '+args[j]['name'])
                        #args1=args1.join([args0])
                    else:
                        args0.append(args[j]['type']+' '+args[j]['name'])
                        #args1=args1.join([args0])
                # 参数声明
                args1=", ".join(args0)
                # 类型描述字符串
                args2="".join([self._arg_type_map(x['type']) for x in args])
                # 参数名
                args3=[]
                for j in args:
                    if self._arg_type_map(j['type'])=='N':
                        tn = j['type'].replace('*', '')
                        args3.append("new_%s(%s)" % (tn, j['name']))
                    else:
                        args3.append(j['name'])
                args3=", ".join(args3)
                
                f3.write(u"    def %s(self, %s):\n" % (i, ", ".join([x['name'] for x in args])))
                f3.write(u"        '''%s'''\n        pass\n\n" % "\n".join(methods[i]['comment']).encode('utf-8'))
                #f3.write(u"        '''%s'''\n        pass\n\n" % "\n".join(methods[i]['comment']))
                f2.write(u"  virtual %s %s(%s);\n" % (methods[i]['return'], i, args1))
                f.write(u"""
%s MySpiWrapper::%s(%s){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"%s", """ % (methods[i]['return'],
                                                i,
                                                args1,
                                                i)
                    )
                if args2:
                    f.write(u"""(char*)"%s", %s))""" % (args2, args3))
                else:
                    f.write(u"NULL))\n")
                f.write(u"""{
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}
""" )


            f2.write(u"""
 private:
  PyObject * py_spi;
};

""")
            if prefix=="Md":
                f2.write(u"""
#endif

""")

            f.close()
            f2.close()
            f3.close()
        else:

            f=open("../_KSApi_Trader/KSwrapper_Trader.cpp",'a+')
            f2=open('../_KSApi_Trader/KSwrapper_Trader.h', 'a+')
            f3=open('../Run/KSTraderApi.py','a+')
            f3.write(u"""
class CTKSCosSpi:
    def register_api(self, api):
        self.api=api

""")
        
            f2.write(u"""
class MySpiWrapper_cos : public CTKSCosSpi
{
 public:
  MySpiWrapper_cos(PyObject * parent_cos);

""")
            f.write(u"""
MySpiWrapper_cos::MySpiWrapper_cos(PyObject * parent_cos):CTKSCosSpi(){
  py_spi_cos = parent_cos;
  Py_INCREF(py_spi_cos);
}

""")
        
            methods=self.struct[spi]
            for i in methods:
                args = methods[i]['func_args']
                args1 = ""
                args0 = []
                for j in range(len(args)):
                    if self._arg_type_map(args[j]['type'])=='N':                
                        args0.append(args[j]['type']+' '+args[j]['name'])
                        #args1=args1.join([args0])
                    else:
                        args0.append(args[j]['type']+' '+args[j]['name'])
                        #args1=args1.join([args0])
                # 参数声明
                args1=", ".join(args0)
                # 类型描述字符串
                args2="".join([self._arg_type_map(x['type']) for x in args])
                # 参数名
                args3=[]
                for j in args:
                    if self._arg_type_map(j['type'])=='N':
                        tn = j['type'].replace('*', '')
                        args3.append("new_%s(%s)" % (tn, j['name']))
                    else:
                        args3.append(j['name'])
                args3=", ".join(args3)
                
                f3.write(u"    def %s(self, %s):\n" % (i, ", ".join([x['name'] for x in args])))
                f3.write(u"        '''%s'''\n        pass\n\n" % "\n".join(methods[i]['comment']).encode('utf-8'))
                #f3.write(u"        '''%s'''\n        pass\n\n" % "\n".join(methods[i]['comment']))
                f2.write(u"  virtual %s %s(%s);\n" % (methods[i]['return'], i, args1))
                f.write(u"""
%s MySpiWrapper_cos::%s(%s){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi_cos, (char*)"%s", """ % (methods[i]['return'],
                                                i,
                                                args1,
                                                i)
                    )
                if args2:
                    f.write(u"""(char*)"%s", %s))""" % (args2, args3))
                else:
                    f.write(u"NULL))\n")
                f.write(u"""{
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}
""" )


                 
            f2.write(u"""
 private:
  PyObject * py_spi_cos;
};

#endif
""")

            f.close()
            f2.close()
            f3.close()

    def generate_wrapper_api(self, api):
        "产生api部分封装"
        
        prefix = self.prefix
        if prefix=="Trader":
            global methods_trader
        if prefix!="Cos":
            f=file('../_KSApi_%s/_KSApi_%s.cpp' % (prefix,prefix), 'w')
            f.write(u'/*\n'+__doc__+'*/\n')
            f2=file('../Run/KS%sApi.py' % prefix,'a+')

            f2.write(u'''
class KS%sApi:
    @staticmethod
    def CreateKS%sApi(FlowPath="", IsUsingUdp=False):
        if FlowPath:
            FlowPath=os.path.abspath(FlowPath)
        api_ptr=_KSApi_%s.create_KS%sApi(FlowPath, IsUsingUdp)
        return KS%sApi(api_ptr)

    def __init__(self, api_ptr):
        self.api_ptr = api_ptr

''' % (prefix, prefix, prefix, prefix, prefix))
        
            f.write(u"""
#define ISLIB
#define LIB_%s_API_EXPORT
#include <Python.h>
#include <iostream>

//#pragma warning(disable : 4996)
//#include "stdafx.h"
//#include <Python.h>
//#include <iostream>
//#ifdef _DEBUG
//#undef _DEBUG   //links to pythonxx.lib
//#include <Python.h>
//#define _DEBUG
//#else
//#include <Python.h>
//#endif

#include "KS%sApiEx.h"
#include "KSwrapper_%s.h"
#include "KSstruct.h"


using namespace std;  

static PyObject* create_KS%sApi(PyObject* self, PyObject *args)
{
  char * flowpath;
  bool IsUsingUdp;

  PyArg_ParseTuple(args, "sb", &flowpath, &IsUsingUdp);
  void *p = KingstarAPI::CThostFtdc%sApi::CreateFtdc%sApi(flowpath, IsUsingUdp);
  return PyInt_FromLong((long)p);
}

""" % (prefix.upper(), prefix, prefix, prefix, prefix, prefix))
        
            methods = self.struct[api]
            if prefix=="Trader":
                methods_trader=methods
            for i in methods:
                if i=="LoadExtApi":
                    f.write(u"""
static PyObject* Trader_LoadExtApi(PyObject * self, PyObject * args){
  KingstarAPI::CThostFtdcTraderApi * user = (KingstarAPI::CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_spi = PyTuple_GET_ITEM(args, 1);
  CTKSCosSpi* spi = new MySpiWrapper_cos(py_spi);
  Py_INCREF(py_spi);
  PyObject * py_ExtApiName = PyTuple_GET_ITEM(args, 2);
  char* ExtApiName = PyString_AsString(py_ExtApiName);
  void *p = user->LoadExtApi(spi, ExtApiName);
  return PyInt_FromLong((long)p);
}                
                """)
                    f2.write(u"""
    def LoadExtApi(self, spi, ExtApiName = "KSCosApi"):
        '''注册条件单实例'''
        api_cos= _KSApi_Trader.LoadExtApi(self.api_ptr, spi, ExtApiName)
        return CTKSCosApi(api_cos, spi)

""")
                    continue
                if i=="SubscribeMarketData" or i=="UnSubscribeMarketData":
                    f.write(u"""
static PyObject * Md_%s(PyObject* self, PyObject * args)
{
  KingstarAPI::CThostFtdcMdApi * user = (KingstarAPI::CThostFtdcMdApi *)PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * instruments = PyTuple_GET_ITEM(args, 1);

  int l = PySequence_Length(instruments);
  char ** pp =(char**)calloc(l, sizeof(char *));
  int i;
  for (i=0; i<l; i++){
    pp[i] = PyString_AsString(PySequence_GetItem(instruments, i));
  }
  user->%s(pp, l);
  
  free(pp);

  Py_INCREF(Py_None);
  return Py_None;
}
""" % (i,i))
                    f2.write(u'''
    def %s(self, InstrumentIDs):
        """订阅/退订行情。
        @param ppInstrumentIDs list of 合约ID
        """
        return _KSApi_Md.%s(self.api_ptr, InstrumentIDs)

''' % (i,i))
                    continue
                f.write(u"""
static PyObject* %s_%s(PyObject * self, PyObject * args){
  KingstarAPI::CThostFtdc%sApi * user = (KingstarAPI::CThostFtdc%sApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
""" % (prefix, i,
       prefix, prefix))

                args=methods[i]

                f2.write(u"    def %s(self, %s):\n" % (i, ", ".join([x['name'] for x in args['func_args']])))
                #f2.write(u"        '''%s'''\n" % "\n".join(methods[i]['comment']).encode('utf-8'))
                f2.write(u"        '''%s'''\n" % "\n".join(methods[i]['comment']))            
                if "RegisterSpi" == i: 
                    f2.write(u"        ret = _KSApi_%s.%s(self.api_ptr, %s)\n" % (prefix, i,
                                                                               ", ".join([x['name'] for x in args['func_args']])))
                    f2.write(u"        %s.register_api(self)\n" % args['func_args'][0]['name'])
                    f2.write(u"        return ret\n\n")
                elif "SetWritablePath"==i:
                    f2.write(u"        return _KSApi_Trader.SetWritablePath(self.api_ptr, szpath)\n\n")
                else:
                    f2.write(u"        return _KSApi_%s.%s(self.api_ptr, %s)\n\n" % (prefix, i,
                                                                                ", ".join([x['name'] for x in args['func_args']])))
                    
                for j in range(len(args['func_args'])):
                    n = args['func_args'][j]['name']
                    if '=' in n:
                        n = n.split()[0]
                    t = args['func_args'][j]['type']
                    f.write(u"  PyObject * py_%s = PyTuple_GET_ITEM(args, %d);\n" % (n, j+1))
                    tt=self._arg_type_map(t)
                    if t=='THOST_TE_RESUME_TYPE':
                        f.write(u"  KingstarAPI::THOST_TE_RESUME_TYPE %s = (KingstarAPI::THOST_TE_RESUME_TYPE)PyInt_AsLong(py_%s);\n" % (n,n))
                    elif tt=='N':
                        tn = t.replace('*','')
                        if 'Spi' in t:
                            f.write(u"  KingstarAPI::%s %s = new MySpiWrapper(py_pSpi);\n" % (t,n))
                        else:
                            if t=='void*':
                                f.write(u"  %s %s = py_%s;\n" % (t,n,n))
                            else:
                                f.write(u"  KingstarAPI::%s %s = from_%s(py_%s);\n" % (t,n,tn,n))
                    elif tt=='i':
                        f.write(u'  int %s = PyInt_AsLong(py_%s);\n' % (n,n))
                    elif tt=='h':
                        f.write(u'  short %s = PyInt_AsShort(py_%s);\n' % (n,n))
                    elif tt=='s':
                        f.write(u'  char* %s = PyString_AsString(py_%s);\n' % (n,n))
                    elif tt=='d':
                        f.write(u'  double %s = PyFloat_AsDouble(py_%s);\n' % (n,n))
                    else:
                        print "unknown type mapping:", tt, t, n
                if methods[i]['return']=='void':
                    f.write(u'  user->%s(%s);\n' % (i, ", ".join([x['name'] for x in args['func_args']])))
                else:
                    f.write(u'  PyObject * ret = Py_BuildValue("%s", user->%s(%s));\n' % (self._arg_type_map(methods[i]['return']),
                    i, ", ".join([x['name'] for x in args['func_args']])))

                
                for j in args['func_args']:
                    if self._arg_type_map(j['type'])=='N':
                        if not 'Spi' in j['name'] and j['type']!='THOST_TE_RESUME_TYPE':
                            f.write(u"  free(%s);\n" % j['name'])

                if methods[i]['return']=='void':            
                    f.write(u"""

  Py_INCREF(Py_None);
  return Py_None;
}
""")
                else:
                    f.write(u"  return ret;\n}\n")
            if prefix=="Md":    
                f.write(u"""
extern "C" %s_API_EXPORT void init_KSApi_%s()
{
   static PyMethodDef mbMethods[] = {
     {"create_KS%sApi", create_KS%sApi, METH_VARARGS},
     {"register_struct", register_struct, METH_VARARGS},

%s,

     {NULL, NULL, NULL} 
   };

   PyObject *m = Py_InitModule("_KSApi_%s", mbMethods);

   PyEval_InitThreads();
}

""" % (prefix.upper(), prefix, prefix, prefix,
       ",\n".join(['     {"%s", %s_%s, METH_VARARGS} ' % (x, prefix, x) for x in methods]),
       prefix))

            f.close()
            f2.close()
        else:
            f=open('../_KSApi_Trader/_KSApi_Trader.cpp', 'a+')
            f2=file('../Run/KSTraderApi.py','a+')

            f2.write(u'''
class CTKSCosApi:
    def __init__(self, api_ptr, spi_ptr):
        self.api_ptr = api_ptr
        spi_ptr.register_api(self.api_ptr)

''')

            methods_cos = self.struct[api]
            for i in methods_cos:
                f.write(u"""
static PyObject* Trader_%s(PyObject * self, PyObject * args){
  CTKSCosApi * user = (CTKSCosApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
""" %i)
            
                args=methods_cos[i]

                f2.write(u"    def %s(self, %s):\n" % (i, ", ".join([x['name'] for x in args['func_args']])))
                f2.write(u"        '''%s'''\n" % "\n".join(methods_cos[i]['comment']).encode('utf-8'))
                #f2.write(u"        '''%s'''\n" % "\n".join(methods_cos[i]['comment']))
                if "RegisterSpi" == i: 
                    f2.write(u"        ret = _KSApi_%s.%s(self.api_ptr, %s)\n" % (prefix, i,
                                                                           ", ".join([x['name'] for x in args['func_args']])))
                    f2.write(u"        %s.register_api(self)\n" % args['func_args'][0]['name'])
                    f2.write(u"        return ret\n\n")
                else:
                    f2.write(u"        return _KSApi_Trader.%s(self.api_ptr, %s)\n\n" % (i,
                                                                            ", ".join([x['name'] for x in args['func_args']])))            
           
                for j in range(len(args['func_args'])):
                    n = args['func_args'][j]['name']
                    t = args['func_args'][j]['type']
                    f.write(u"  PyObject * py_%s = PyTuple_GET_ITEM(args, %d);\n" % (n, j+1))
                    tt=self._arg_type_map(t)
                    if t=='THOST_TE_RESUME_TYPE':
                        f.write(u"  THOST_TE_RESUME_TYPE %s = (THOST_TE_RESUME_TYPE)PyInt_AsLong(py_%s);\n" % (n,n))
                    elif tt=='N':
                        tn = t.replace('*','')
                        if 'Spi' in t:
                            f.write(u"  %s %s = new MySpiWrapper(py_pSpi);\n" % (t,n))
                        else:
                            if t=='void*':
                                f.write(u"  %s %s = py_%s;\n" % (t,n,n))
                            else:
                                f.write(u"  %s %s = from_%s(py_%s);\n" % (t,n,tn,n))
                    elif tt=='i':
                        f.write(u'  int %s = PyInt_AsLong(py_%s);\n' % (n,n))
                    elif tt=='h':
                        f.write(u'  short %s = PyInt_AsShort(py_%s);\n' % (n,n))
                    elif tt=='s':
                        f.write(u'  char* %s = PyString_AsString(py_%s);\n' % (n,n))
                    elif tt=='d':
                        f.write(u'  double %s = PyFloat_AsDouble(py_%s);\n' % (n,n))
                    else:
                        print "unknown type mapping:", tt, t, n
                if methods_cos[i]['return']=='void':
                    f.write(u'  user->%s(%s);\n' % (i, ", ".join([x['name'] for x in args['func_args']])))
                else:
                    f.write(u'  PyObject * ret = Py_BuildValue("%s", user->%s(%s));\n' % (self._arg_type_map(methods_cos[i]['return']),
                    i, ", ".join([x['name'] for x in args['func_args']])))

                
                for j in args['func_args']:
                    if self._arg_type_map(j['type'])=='N':
                        if not 'Spi' in j['name'] and j['type']!='THOST_TE_RESUME_TYPE':
                            f.write(u"  free(%s);\n" % j['name'])

                if methods_cos[i]['return']=='void':            
                    f.write(u"""

Py_INCREF(Py_None);
return Py_None;
}
    """)
                else:
                    f.write(u"  return ret;\n}\n")
            methods_add ={}
            methods_add.update(methods_trader)
            methods_add.update(methods_cos)
            methods_add.pop("LoadExtApi")
            f.write(u"""
extern "C" TRADER_API_EXPORT void init_KSApi_Trader()
{
   static PyMethodDef mbMethods[] = {
     {"create_KSTraderApi", create_KSTraderApi, METH_VARARGS},
     {"register_struct", register_struct, METH_VARARGS},

%s,
     {"LoadExtApi", (PyCFunction)Trader_LoadExtApi, METH_VARARGS| METH_KEYWORDS},
     {NULL, NULL, NULL} 
   };

   PyObject *m = Py_InitModule("_KSApi_Trader", mbMethods);

   PyEval_InitThreads();
}

""" % (
       ",\n".join(['     {"%s", Trader_%s, METH_VARARGS} ' % (x, x)for x in methods_add] ),
      ))
            f.close()
            f2.close()            
#def test(locale='utf-8'):
#    a=Parse("../KSFT_API/inc/KSMdApiEx.h", "Trader",locale)
#    from pprint import pprint
#    pprint(a.struct)
##test()

def test2(locale='utf-8'):
    a=Parse("../KSFT_API/inc/KSTraderApiEx.h", "Trader",locale)
    a.generate_wrapper()
    a=Parse("../KSFT_API/inc/KSCosApi.h", "Cos",locale)
    a.generate_wrapper()
    a=Parse("../KSFT_API/inc/KSMdApiEx.h", "Md",locale)
    a.generate_wrapper()

test2('gbk')    
