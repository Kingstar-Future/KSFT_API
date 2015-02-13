/////////////////////////////////////////////////////////////////////////
///@system ��һ������ϵͳ
///@company SunGard China
///@file KSVocApi.h
///@brief �����˿ͻ��˿ͻ����ƽӿ�
/////////////////////////////////////////////////////////////////////////

#ifndef __KSVOCAPI_H_INCLUDED_
#define __KSVOCAPI_H_INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "KSUserApiStructEx.h"
#include "KSVocApiStruct.h"

#if defined(ISLIB) && defined(WIN32) && !defined(KSTRADEAPI_STATIC_LIB)
#ifdef LIB_TRADER_API_EXPORT
#define TRADER_VOCAPI_EXPORT __declspec(dllexport)
#else
#define TRADER_VOCAPI_EXPORT __declspec(dllimport)
#endif
#else
#ifdef WIN32
#define TRADER_VOCAPI_EXPORT 
#else
#define TRADER_VOCAPI_EXPORT __attribute__((visibility("default")))
#endif

#endif

namespace KingstarAPI
{

	class CKSVocSpi
	{
	public:
		///��ѯ����ǰ�ĳֲ���ϸӦ��
		virtual void OnRspQryInvestorOpenPosition(CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///��ѯ����ǰ����ϳֲ���ϸӦ��
		virtual void OnRspQryInvestorOpenCombinePosition(CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///������������������Ӧ
		virtual void OnRspBulkCancelOrder(CThostFtdcBulkCancelOrderField *pBulkCancelOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///ƽ�ֲ��Բ�ѯ��Ӧ
		virtual void OnRspQryCloseStrategy(CKSCloseStrategyResultField *pCloseStrategy, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

		///��ϲ��Բ�ѯ��Ӧ
		virtual void OnRspQryCombStrategy(CKSCombStrategyResultField *pCombStrategy, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

		///��Ȩ��ϲ��Բ�ѯ��Ӧ
		virtual void OnRspQryOptionCombStrategy(CKSOptionCombStrategyResultField *pOptionCombStrategy, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

		///�����ѯ�ͻ�ת����Ϣ��Ӧ
		virtual void OnRspQryTransferInfo(CKSTransferInfoResultField *pResultField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///�����ѯ����֪ͨ��Ӧ
		virtual void OnRspQryKSTradingNotice(CKSTradingNoticeField *pTradingNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///�û��˲�Ʒ��Դ��ѯӦ��
		virtual void OnRspQryUserProductUrl(CKSUserProductUrlField *pUserProductUrl, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///�����ϲ�ֵ�����ѯ������Ӧ
		virtual void OnRspQryMaxCombActionVolume(CKSMaxCombActionVolumeField *pMaxCombActionVolume, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///����֪ͨ
		virtual void OnRtnKSTradingNotice(CKSTradingNoticeField *pTradingNoticeInfo) {};
	};

	class TRADER_VOCAPI_EXPORT CKSVocApi
	{
	public:
		///��ѯ����ǰ�ĳֲ���ϸ
		virtual int ReqQueryInvestorOpenPosition(CThostFtdcQryInvestorPositionDetailField *pQryInvestorOpenPosition, int nRequestID) = 0;

		///��ѯ����ǰ����ϳֲ���ϸ
		virtual int ReqQueryInvestorOpenCombinePosition(CThostFtdcQryInvestorPositionCombineDetailField *pQryInvestorOpenCombinePosition, int nRequestID) = 0;

		///��������
		virtual int ReqBulkCancelOrder (CThostFtdcBulkCancelOrderField *pBulkCancelOrder, int nRequestID) = 0;

		///ƽ�ֲ��Բ�ѯ����
		virtual int ReqQryCloseStrategy(CKSCloseStrategy *pCloseStrategy, int nRequestID) = 0;

		///��ϲ��Բ�ѯ����
		virtual int ReqQryCombStrategy(CKSCombStrategy *pCombStrategy, int nRequestID) = 0;

		///��Ȩ��ϲ��Բ�ѯ����
		virtual int ReqQryOptionCombStrategy(CKSOptionCombStrategy *pOptionCombStrategy, int nRequestID) = 0;

		///�����ѯ�ͻ�ת����Ϣ
		virtual int ReqQryTransferInfo(CKSTransferInfo *pTransferInfo, int nRequestID) = 0;

		///�����ѯ����֪ͨ
		virtual int ReqQryKSTradingNotice(CKSQryTradingNoticeField *pQryTradingNotice, int nRequestID) = 0;

		///�û��˲�Ʒ��Դ��ѯ����
		virtual int ReqQryUserProductUrl (CKSQryUserProductUrlField *pQryUserProductUrl, int nRequestID) = 0;

		///�����ϲ�ֵ�����ѯ����
		virtual int ReqQryMaxCombActionVolume(CKSQryMaxCombActionVolumeField *pQryMaxCombActionVolume, int nRequestID) = 0;

	protected:
		~CKSVocApi(){};
	};

}	// end of namespace KingstarAPI
#endif