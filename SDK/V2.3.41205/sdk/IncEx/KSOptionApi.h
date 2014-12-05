#ifndef __KSOPTIONAPI_H_INCLUDED__
#define __KSOPTIONAPI_H_INCLUDED__
/**
* @file KSOptionApi.h
* @author kevin.shen
* system��KSTradeAPI
* company��Kingstar
* history��
* 2013/11/18	kevin.shen	 create
*/

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
	///�����ѯִ��������Ӧ
	virtual void OnRspQryKSExecOrder(CThostFtdcKSExecOrderField *pKSExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///����¼��������Ӧ
	virtual void OnRspKSExecOrderInsert(CThostFtdcInputKSExecOrderField *pInputKSExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

	///��ѯ��������������Ӧ
	virtual void OnRspQryExecOrderVolume(CKSExecOrderVolumeField *pExecOrderVolume, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

	///��ѯ�ֻ���Ȩ����������Ӧ
	virtual void OnRspQrySpotOptionParams(CKSSpotOptionParamsField *pExecOrderParams, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

	///��ѯ��Ȩ��Լ�����Ϣ������Ӧ
	virtual void OnRspQryOptionInsInfo(CKSOptionInsInfoField *pOptionInsInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

	///��ѯ������Ȩ��������������Ӧ
	virtual void OnRspQryStockOptionInsCommRate(CKSStockOptionInsCommRateField *pStockOptionInsCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

	///��ѯ������Ȩ��֤����������Ӧ
	virtual void OnRspQryStockOptionInsMarginRate(CKSStockOptionInsMarginRateField *pStockOptionInsMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

	///��ѯ������Ȩָ����Ϣ������Ӧ
	virtual void OnRspQryStockOptionAssignment(CKSStockOptionAssignmentField *pStockOptionAssignment, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///��ѯ�ͻ����׼�����Ӧ
	virtual void OnRspQryInvestorTradeLevel(CKSInvestorTradeLevelField *pInvestorTradeLevel, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///��ѯ�����޹������Ӧ
	virtual void OnRspQryPurchaseLimitAmt(CKSPurchaseLimitAmtField *pPurchaseLimitAmt, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///��ѯ�����޲ֶ����Ӧ
	virtual void OnRspQryPositionLimitVol(CKSPositionLimitVolField *pPositionLimitVol, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯ��ʷ������Ӧ
	virtual void OnRspQryHistoryOrder(CKSHistoryOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯ��ʷ�ɽ���Ӧ
	virtual void OnRspQryHistoryTrade(CKSHistoryTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ִ������֪ͨ(��ִ�С�����)
	virtual void OnRtnKSExecOrder(CThostFtdcKSExecOrderRtnField *pExecOrder) {};
};

class TRADER_OPTIONAPI_EXPORT CKSOptionApi
{
public:
	///�����ѯִ������
	virtual int ReqQryKSExecOrder(CThostFtdcQryKSExecOrderField *pQryKSExecOrder, int nRequestID) = 0;

	///����¼������
	virtual int ReqKSExecOrderInsert(CThostFtdcInputKSExecOrderField *pInputKSExecOrder, int nRequestID) = 0;

	///��ѯ������������
	virtual int ReqQryExecOrderVolume(CKSQryExecOrderVolumeField *pQryExecOrderVolume, int nRequestID) = 0;

	///��ѯ�ֻ���Ȩ��������
	virtual int ReqQrySpotOptionParams(CKSQrySpotOptionParamsField *pQrySpotOptionParams, int nRequestID) = 0;

	///��ѯ��Ȩ��Լ�����Ϣ����
	virtual int ReqQryOptionInsInfo(CKSQryOptionInsInfoField *pQryOptionInsInfo, int nRequestID) = 0;

	///��ѯ������Ȩ������������
	virtual int ReqQryStockOptionInsCommRate(CKSQryStockOptionInsCommRateField *pQryStockOptionInsCommRate, int nRequestID) = 0;

	///��ѯ������Ȩ��֤��������
	virtual int ReqQryStockOptionInsMarginRate(CKSQryStockOptionInsMarginRateField *pQryStockOptionInsMarginRate, int nRequestID) = 0;

	///��ѯ������Ȩָ����Ϣ
	virtual int ReqQryStockOptionAssignment(CKSQryStockOptionAssignmentField *pQryStockOptionAssignment, int nRequestID) = 0;

	///��ѯ�ͻ����׼���
	virtual int ReqQryInvestorTradeLevel(CKSQryInvestorTradeLevelField *pQryInvestorTradeLevel, int nRequestID) = 0;

	///��ѯ�����޹����
	virtual int ReqQryPurchaseLimitAmt(CKSQryPurchaseLimitAmtField *pQryPurchaseLimitAmt, int nRequestID) = 0;

	///��ѯ�����޲ֶ��
	virtual int ReqQryPositionLimitVol(CKSQryPositionLimitVolField *pQryPositionLimitVol, int nRequestID) = 0;

	///�����ѯ��ʷ����
	virtual int ReqQryHistoryOrder(CKSQryHistoryOrderField *pQryHistoryOrder, int nRequestID) = 0;

	///�����ѯ��ʷ�ɽ�
	virtual int ReqQryHistoryTrade(CKSQryHistoryTradeField *pQryHistoryTrade, int nRequestID) = 0;

protected:
	~CKSOptionApi(){};
};

}	// end of namespace KingstarAPI
#endif