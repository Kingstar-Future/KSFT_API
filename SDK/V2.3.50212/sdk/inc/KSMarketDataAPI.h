/////////////////////////////////////////////////////////////////////////
///@system �ڻ�����ϵͳ
///@company SunGard China
///@file KSMarketDataAPI.h
///@brief �����˿ͻ��˽ӿ�ʹ�õ�ҵ��ͨѶ�ӿ�
///@history 
///20140801	Kingstar IRDG		�������ļ�
/////////////////////////////////////////////////////////////////////////

#ifndef __KSFMDUSER_API_H__
#define __KSFMDUSER_API_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifdef WIN32
#ifdef KSFMDUSERAPI_EXPORTS
#define KSFMDUSERAPI __declspec(dllexport)
#else
#define KSFMDUSERAPI __declspec(dllimport)
#endif
#else
#ifdef KSFMDUSERAPI_EXPORTS
#define KSFMDUSERAPI __attribute__ ((visibility ("default"))) 
#else
#define KSFMDUSERAPI
#endif
#endif 

#include "../IncEx/KSMdApiEx.h"

#endif