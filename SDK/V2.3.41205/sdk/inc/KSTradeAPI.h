/////////////////////////////////////////////////////////////////////////
///@system �ڻ�����ϵͳ
///@company Kingstar
///@file KSTradeAPI.h
///@brief �����˿ͻ��˽ӿ�ʹ�õ�ҵ��ͨѶ�ӿ�
///@history 
///20140801	Kingstar IRDG		�������ļ�
/////////////////////////////////////////////////////////////////////////

#ifndef __KSFTRADER_API_H__
#define __KSFTRADER_API_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifdef WIN32
#ifdef KSFTRADERAPI_EXPORTS
#define KSFTRADERAPI __declspec(dllexport)
#else
#define KSFTRADERAPI __declspec(dllimport)
#endif
#else
#ifdef KSFTRADERAPI_EXPORTS
#define KSFTRADERAPI __attribute__ ((visibility ("default"))) 
#else
#define KSFTRADERAPI
#endif
#endif 

#include "../IncEx/KSTraderApiEx.h"
#include "../IncEx/KSCosApi.h"
#include "../IncEx/KSOptionApi.h"
#include "../IncEx/KSVocApi.h"

#endif