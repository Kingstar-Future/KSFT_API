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


import shutil

def generate_py(struct_name, datas, f):
    fields = datas[struct_name]['fields']
    f.write("class %s:\n" % struct_name)
    f.write("    def __init__(self, %s):\n" % 
            ", ".join(
            ["%s=%s" % 
             (x, fields[x]['default']) for x in fields]))
    for i in fields:
        f.write("        self.%s=%s\n" % (i,i))

    vcmap={}
    for i in fields:
        if fields[i]['type']['type'].startswith('enum'):
            vcmap[i]={}
            ev = fields[i]['type']
            for j in ev['values']:
                vcmap[i][ev['values'][j]['value']] = ev['values'][j]['comment']

    f.write("        self.vcmap=%s\n" % repr(vcmap))

    f.write('    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ' + repr([x for x in fields])+'])\n')
    #f.write('    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y.encode("utf-8"), self.getval(x)) for x,y in ' + '[%s]' % (",".join(["('%s', u'%s')" % (x, fields[x]['comment'].encode('utf-8')) for x in fields]),) + '])\n')
    f.write('    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in ' + '[%s]' % (",".join(["('%s', u'%s')" % (x, fields[x]['comment'].encode('utf-8')) for x in fields]),) + '])\n')
    f.write('    def getval(self, n):\n')
    f.write('        if n in %s:\n' % repr([x for x in fields if fields[x]['type']['type'].startswith('enum')]))
    f.write('''            return self.vcmap[n]["'%s'" % getattr(self, n)]\n''')
    f.write('        else: return getattr(self, n)\n')

def get_struct_type(t):
    if t.startswith("enum"): return "c"
    elif t=='short': return 'h'
    else: return t[0]

def generate_cpp(struct_name, datas, f):
    fields = datas[struct_name]['fields']
    #f.write(u"\n//%s\n" % datas[struct_name]['comment'].encode('utf-8'));
    f.write(u"\n//%s\n" % datas[struct_name]['comment']);
    if "CTKS" in struct_name:
        f.write(u"PyObject * new_%s(%s * p){\n" % (struct_name, struct_name))
    else:
        f.write(u"PyObject * new_%s(KingstarAPI::%s * p){\n" % (struct_name, struct_name))
    #判断是否为空指针 enceladus.smth@gmail.com
    f.write(u'''  if(p==NULL)
      return Py_None;\n''')
    f.write(u'  return PyObject_CallMethod(mod, (char*)"%s", %s,\n' % (struct_name, 
                                                               fields and '(char*)"'+"".join([get_struct_type(fields[i]['type']['type']) for i in fields])+'"' or "NULL"))
    f.write(u", ".join(['p->%s' % i for i in fields ]))
    f.write(u");\n}\n")
    if "CTKS" in struct_name:
        f.write(u"%s * from_%s(PyObject * p){\n" % (struct_name, struct_name))
        f.write(u"%s *t = (%s *)calloc(1, sizeof(%s));\n" % (struct_name, struct_name, struct_name))
        f.write(u"  memset(t,0,sizeof(%s));\n" % (struct_name,))
    else:
        f.write(u"KingstarAPI::%s * from_%s(PyObject * p){\n" % (struct_name, struct_name))
        #python端决不应该传回空指针或None，否则必然是必须修改的程序错误,因此这里不作判断。
        f.write(u"  KingstarAPI::%s *t = (KingstarAPI::%s *)calloc(1, sizeof(KingstarAPI::%s));\n" % (struct_name, struct_name, struct_name))
        f.write(u"  memset(t,0,sizeof(KingstarAPI::%s));\n" % (struct_name,))
    for i in fields:
        #f.write(u"  //%s\n" % fields[i]['comment'].encode('utf-8'));
        f.write(u"  //%s\n" % fields[i]['comment']);        
        t=fields[i]['type']['type']
        if t == 'double':
            f.write(u"  t->%s = " %  i)
            f.write(u"  PyFloat_AsDouble(PyObject_GetAttrString(p, \"%s\"));\n" % i)
        elif t == 'int':
            f.write(u"  t->%s = " % i)
            f.write(u"  PyInt_AsLong(PyObject_GetAttrString(p, \"%s\"));\n" % i)
        elif t == 'short':
            f.write(u"  t->%s = " % i)
            f.write(u"  PyInt_AsLong(PyObject_GetAttrString(p, \"%s\"));\n" % i)
        elif t == 'string' or i[0] in ['Time','Date']: # FIXME
            f.write(u"  strcpy(t->%s, PyString_AsString(PyObject_GetAttrString(p, \"%s\")));\n" % (i, i))
        elif t.startswith('enum'):
            f.write(u"  //enum类型\n")
            ev = fields[i]['type']['values']
            for e in ev:
                #f.write(u"  //%s -> %s, %s\n" % (e, ev[e]['value'],ev[e]['comment'].encode('utf-8')))
                f.write(u"  //%s -> %s, %s\n" % (e, ev[e]['value'],ev[e]['comment']))
            f.write(u"  t->%s = " % i)
            f.write(u"  PyString_AsString(PyObject_GetAttrString(p, \"%s\"))[0];\n" % i)
            
        else: 
            print "unknown type:", t
    
    f.write(u"\n  return t;\n};\n")

def generate_hpp(struct_name, datas, f):
    #fields = datas[struct_name]['fields']
    if "CTKS" in struct_name:
        f.write("PyObject * new_%s(%s * p);\n" % (struct_name, struct_name))
        f.write("%s * from_%s(PyObject * p);\n" % (struct_name, struct_name))
    else:
        f.write("PyObject * new_%s(KingstarAPI::%s * p);\n" % (struct_name, struct_name))
        f.write("KingstarAPI::%s * from_%s(PyObject * p);\n" % (struct_name, struct_name))


def generate_interface(locale='utf-8'):
    import parse_struct
    datas,enums = parse_struct.parse("../KSFT_API/inc/KSUserApiDataTypeEx.h","../KSFT_API/inc/KSCosApiDataType.h",
            "../KSFT_API/inc/KSUserApiStructEx.h",'../KSFT_API/inc/KSCosApiStruct.h',locale='gbk')

    
#generate python
    f=file("../Run/KSUserApiStruct.py", "w")
    f.write(u'#-*- coding=utf-8 -*-\n')
    f.write(u'"""\n'+__doc__+'"""\n')
    f.write("""
#This file is auto generated! Please don't edit directly.
""")
    for i in datas: generate_py(i, datas, f)

    f.write("# Set short name alias for the stupid Hungarian Notation\n")
    for i in datas:
        f.write("%s=%s\n" % (i[10:-5],i))
 
    f.close()

#generate datatype for python
    f=file("../Run/KSUserApiType.py", "w")
    f.write(u'#-*- coding=utf-8 -*-\n')
    f.write(u'"""\n'+__doc__+'"""\n')
    f.write(u"""
#This file is auto generated! Please don't edit directly.
""")
    for e in enums.values(): 
        if 'values' in e:
            f.write(u'#%s\n' % e['comment'])
            for (n,v) in e['values'].items():
                f.write(u'%s = %s #%s\n' % (n,v['value'],v['comment']))
    f.close()

#generate cpp
    f=file("../_KSApi_Md/KSstruct.cpp", "w")
    f.write("/*"+__doc__+'*/\n')
    f.write("""
//This file is auto generated! Please don't edit directly.
""")
    f.write("""
#include "stdafx.h"
#include "KSstruct.h"

static PyObject * mod=NULL;
PyObject * register_struct(PyObject * self, PyObject * args){
  mod = PyTuple_GET_ITEM(args,0);
  Py_INCREF(Py_None);
  return Py_None;
}
""")
    for i in datas: generate_cpp(i, datas, f)
    f.close()
    shutil.copyfile("../_KSApi_Md/KSstruct.cpp", "../_KSApi_Trader/KSstruct.cpp")

#generate hpp
    f=file("../_KSApi_Md/KSstruct.h", "w")
    f.write("/*"+__doc__+'*/\n')
    f.write("""
//This file is auto generated! Please don't edit directly.
""")
    f.write("""#ifndef STRUCT_TRADE_H
#define STRUCT_TRADE_H

#pragma warning(disable : 4996)

//#include <Python.h>
#ifdef _DEBUG
#undef _DEBUG   //links to pythonxx.lib
#include <Python.h>
#define _DEBUG
#else
#include <Python.h>
#endif

#include "KSUserApiStructEx.h"
#include "KSCosApiStruct.h"

PyObject * register_struct(PyObject * self, PyObject * args);
""")
    for i in datas: generate_hpp(i, datas, f)
    f.write("#endif\n")
    f.close()
    shutil.copyfile("../_KSApi_Md/KSstruct.h", "../_KSApi_Trader/KSstruct.h")

generate_interface(locale='gbk')  
