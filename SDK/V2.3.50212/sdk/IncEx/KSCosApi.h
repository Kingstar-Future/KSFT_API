/////////////////////////////////////////////////////////////////////////
///@system ��һ������ϵͳ
///@company SunGard China
///@file KSCosApi.h
///@brief �����˿ͻ����������ӿ�
/////////////////////////////////////////////////////////////////////////

#ifndef __KSCOSAPI_H_INCLUDED_
#define __KSCOSAPI_H_INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "KSUserApiStructEx.h"
#include "KSVocApiStruct.h"

#if defined(ISLIB) && defined(WIN32) && !defined(KSTRADEAPI_STATIC_LIB)

#ifdef LIB_TRADER_API_EXPORT
#define TRADER_COSAPI_EXPORT __declspec(dllexport)
#else
#define TRADER_COSAPI_EXPORT __declspec(dllimport)
#endif
#else
#ifdef WIN32
#define TRADER_COSAPI_EXPORT 
#else
#define TRADER_COSAPI_EXPORT __attribute__((visibility("default")))
#endif

#endif

namespace KingstarAPI
{

	class CKSCosSpi
	{
	public:
		///������¼����Ӧ
		virtual void OnRspInitInsertConditionalOrder(CKSConditionalOrderOperResultField *pInitInsertConditionalOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

		///��������ѯ��Ӧ
		virtual void OnRspQueryConditionalOrder(CKSConditionalOrderOperResultField *pQueryConditionalOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

		///�������޸���Ӧ
		virtual void OnRspModifyConditionalOrder(CKSConditionalOrderOperResultField *pModifyConditionalOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

		///��������ͣ������Ӧ
		virtual void OnRspPauseConditionalOrder(CKSConditionalOrderOperResultField *pPauseConditionalOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

		///������ɾ����Ӧ
		virtual void OnRspRemoveConditionalOrder(CKSConditionalOrderRspResultField *pRemoveConditionalOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

		///������ѡ����Ӧ
		virtual void OnRspSelectConditionalOrder(CKSConditionalOrderRspResultField *pSelectConditionalOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

		///ֹ��ֹӯ��¼����Ӧ
		virtual void OnRspInsertProfitAndLossOrder(CKSProfitAndLossOrderOperResultField *pInsertProfitAndLossOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

		///ֹ��ֹӯ���޸���Ӧ
		virtual void OnRspModifyProfitAndLossOrder(CKSProfitAndLossOrderOperResultField *pModifyProfitAndLossOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

		///ֹ��ֹӯ��ɾ����Ӧ
		virtual void OnRspRemoveProfitAndLossOrder(CKSProfitAndLossOrderRemoveField *pRemoveProfitAndLossOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

		///ֹ��ֹӯ����ѯ��Ӧ
		virtual void OnRspQueryProfitAndLossOrder(CKSProfitAndLossOrderOperResultField *pQueryProfitAndLossOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

		///����������ѡ��֪ͨ
		virtual void OnRtnCOSAskSelect(CKSCOSAskSelectField *pCOSAskSelect) {};

		///������״̬֪ͨ
		virtual void OnRtnCOSStatus(CKSCOSStatusField *pCOSStatus) {};

		///ֹ��ֹӯ��״̬֪ͨ
		virtual void OnRtnPLStatus(CKSPLStatusField *pPLStatus) {};
	};

	class TRADER_COSAPI_EXPORT CKSCosApi
	{
	public:
		///������¼������
		virtual int ReqInitInsertConditionalOrder(CKSConditionalOrderInitInsert *pConditionalOrderInitInsert, int nRequestID) = 0;

		///��ѯ����������
		virtual int ReqQueryConditionalOrder(CKSConditionalOrderQuery *pConditionalOrderQuery, int nRequestID) = 0;

		///�޸�����������
		virtual int ReqModifyConditionalOrder(CKSConditionalOrderModify *pConditionalOrderModify, int nRequestID) = 0;

		///ɾ������������
		virtual int ReqRemoveConditionalOrder(CKSConditionalOrderRemove *pConditionalOrderRemove, int nRequestID) = 0;

		///��ͣ�򼤻�����������
		virtual int ReqStateAlterConditionalOrder(CKSConditionalOrderStateAlter *pConditionalOrderStateAlter, int nRequestID) = 0;

		///ѡ������������
		virtual int ReqSelectConditionalOrder(CKSConditionalOrderSelect *pConditionalOrderSelect, int nRequestID) = 0;

		///ֹ��ֹӯ��¼������
		virtual int ReqInsertProfitAndLossOrder(CKSProfitAndLossOrderInsert *pProfitAndLossOrderInsert, int nRequestID) = 0;

		///ֹ��ֹӯ���޸�����
		virtual int ReqModifyProfitAndLossOrder(CKSProfitAndLossOrderModify *pProfitAndLossOrderModify, int nRequestID) = 0;

		///ֹ��ֹӯ��ɾ������
		virtual int ReqRemoveProfitAndLossOrder(CKSProfitAndLossOrderRemove *pProfitAndLossOrderRemove, int nRequestID) = 0;

		///ֹ��ֹӯ����ѯ����
		virtual int ReqQueryProfitAndLossOrder(CKSProfitAndLossOrderQuery *pProfitAndLossOrderQuery, int nRequestID) = 0;

	protected:
		~CKSCosApi(){};
	};

}	// end of namespace KingstarAPI
#endif