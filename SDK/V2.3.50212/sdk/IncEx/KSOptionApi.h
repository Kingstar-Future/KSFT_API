/////////////////////////////////////////////////////////////////////////
///@system ��һ������ϵͳ
///@company SunGard China
///@file KSOptionApi.h
///@brief �����˿ͻ�����Ȩ��ӿ�
/////////////////////////////////////////////////////////////////////////

#ifndef __KSOPTIONAPI_H_INCLUDED__
#define __KSOPTIONAPI_H_INCLUDED__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "KSVocApiStruct.h"

#if defined(ISLIB) && defined(WIN32) && !defined(KSTRADEAPI_STATIC_LIB)
#ifdef LIB_TRADER_API_EXPORT
#define TRADER_OPTIONAPI_EXPORT __declspec(dllexport)
#else
#define TRADER_OPTIONAPI_EXPORT __declspec(dllimport)
#endif
#else
#ifdef WIN32
#define TRADER_OPTIONAPI_EXPORT 
#else
#define TRADER_OPTIONAPI_EXPORT __attribute__((visibility("default")))
#endif

#endif

namespace KingstarAPI
{

	class CKSOptionSpi
	{
	public:
		///��ѯ��ָ�ֻ�ָ��
		virtual void OnRspQryIndexPrice(CKSIndexPriceField *pIndexPrice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

		///��ѯ��ָ�ֻ�ָ��
		virtual void OnRspQryOptionInstrGuard(CKSOptionInstrGuardField *pOptionInstrGuard, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

		///��ѯ��������������Ӧ
		virtual void OnRspQryExecOrderVolume(CKSExecOrderVolumeField *pExecOrderVolume, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

		///��ѯ������Ȩָ����Ϣ������Ӧ
		virtual void OnRspQryStockOptionAssignment(CKSStockOptionAssignmentField *pStockOptionAssignment, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///��ѯ�ͻ����׼�����Ӧ
		virtual void OnRspQryInvestorTradeLevel(CKSInvestorTradeLevelField *pInvestorTradeLevel, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///��ѯ�����޹������Ӧ
		virtual void OnRspQryPurchaseLimitAmt(CKSPurchaseLimitAmtField *pPurchaseLimitAmt, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///��ѯ�����޲ֶ����Ӧ
		virtual void OnRspQryPositionLimitVol(CKSPositionLimitVolField *pPositionLimitVol, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///�����ѯ������ʷ������Ӧ
		virtual void OnRspQryHistoryOrder(CKSHistoryOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///�����ѯ������ʷ�ɽ���Ӧ
		virtual void OnRspQryHistoryTrade(CKSHistoryTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///�����ѯ������ʷ��Ȩָ����ϸ��Ӧ
		virtual void OnRspQryStockOptionHistoryAssignment(CKSHistoryAssignmentField *pHistoryAssignment, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///�����ѯ������Ȩ������ϸ��Ӧ
		virtual void OnRspQryStockOptionDelivDetail(CKSSODelivDetailField *pSODelivDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///�Զ���Ȩִ�в�����Ӧ
		virtual void OnRspAutoExecOrderAction(CKSAutoExecOrderActionField *pAutoExecOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	};

	class TRADER_OPTIONAPI_EXPORT CKSOptionApi
	{
	public:
		///��ѯ��ָ�ֻ�ָ��
		virtual int ReqQryIndexPrice(CKSQryIndexPriceField *pIndexPrice, int nRequestID) = 0;

		///��ѯ��Ȩ��Լ����ϵ��
		virtual int ReqQryOptionInstrGuard(CKSQryOptionInstrGuardField *pQryOptionInstrGuard, int nRequestID) = 0;

		///��ѯ������������
		virtual int ReqQryExecOrderVolume(CKSQryExecOrderVolumeField *pQryExecOrderVolume, int nRequestID) = 0;

		///��ѯ������Ȩָ����Ϣ
		virtual int ReqQryStockOptionAssignment(CKSQryStockOptionAssignmentField *pQryStockOptionAssignment, int nRequestID) = 0;

		///��ѯ�ͻ����׼���
		virtual int ReqQryInvestorTradeLevel(CKSQryInvestorTradeLevelField *pQryInvestorTradeLevel, int nRequestID) = 0;

		///��ѯ�����޹����
		virtual int ReqQryPurchaseLimitAmt(CKSQryPurchaseLimitAmtField *pQryPurchaseLimitAmt, int nRequestID) = 0;

		///��ѯ�����޲ֶ��
		virtual int ReqQryPositionLimitVol(CKSQryPositionLimitVolField *pQryPositionLimitVol, int nRequestID) = 0;

		///�����ѯ������ʷ����
		virtual int ReqQryHistoryOrder(CKSQryHistoryOrderField *pQryHistoryOrder, int nRequestID) = 0;

		///�����ѯ������ʷ�ɽ�
		virtual int ReqQryHistoryTrade(CKSQryHistoryTradeField *pQryHistoryTrade, int nRequestID) = 0;

		///�����ѯ������ʷ��Ȩָ����ϸ
		virtual int ReqQryStockOptionHistoryAssignment(CKSQryHistoryAssignmentField *pQryHistoryAssignment, int nRequestID) = 0;

		///�����ѯ������Ȩ������ϸ
		virtual int ReqQryStockOptionDelivDetail(CKSQrySODelivDetailField *pQrySODelivDetail, int nRequestID) = 0;

		///�Զ���Ȩִ�в���
		virtual int ReqAutoExecOrderAction(CKSAutoExecOrderActionField *pAutoExecOrderAction, int nRequestID) = 0;

	protected:
		~CKSOptionApi(){};
	};

}	// end of namespace KingstarAPI
#endif