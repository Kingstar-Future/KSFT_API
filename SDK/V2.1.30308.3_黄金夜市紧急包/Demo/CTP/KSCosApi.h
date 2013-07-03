#ifndef __KSCOSAPI_H_INCLUDED_
#define __KSCOSAPI_H_INCLUDED_
/**
* @file KSCosApi.h
* @author kevin.shen
* system��KSTradeAPI
* company��Kingstar
* history��
* 2012/11/12	kevin.shen	 create
*/
#include "KSUserApiStructEx.h"
#include "KSCosApiStruct.h"

class CTKSCosSpi
{
public:
    ///������¼����Ӧ
    virtual void OnRspInitInsertConditionalOrder(CTKSConditionalOrderOperResultField *pInitInsertConditionalOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

    ///��������ѯ��Ӧ
    virtual void OnRspQueryConditionalOrder(CTKSConditionalOrderOperResultField *pQueryConditionalOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

    ///�������޸���Ӧ
    virtual void OnRspModifyConditionalOrder(CTKSConditionalOrderOperResultField *pModifyConditionalOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};
    
    ///��������ͣ������Ӧ
    virtual void OnRspPauseConditionalOrder(CTKSConditionalOrderOperResultField *pPauseConditionalOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

    ///������ɾ����Ӧ
    virtual void OnRspRemoveConditionalOrder(CTKSConditionalOrderRspResultField *pRemoveConditionalOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

    ///������ѡ����Ӧ
    virtual void OnRspSelectConditionalOrder(CTKSConditionalOrderRspResultField *pSelectConditionalOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

    ///ֹ��ֹӯ��¼����Ӧ
    virtual void OnRspInsertProfitAndLossOrder(CTKSProfitAndLossOrderOperResultField *pInsertProfitAndLossOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

    ///ֹ��ֹӯ���޸���Ӧ
    virtual void OnRspModifyProfitAndLossOrder(CTKSProfitAndLossOrderOperResultField *pModifyProfitAndLossOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

    ///ֹ��ֹӯ��ɾ����Ӧ
    virtual void OnRspRemoveProfitAndLossOrder(CTKSProfitAndLossOrderRemoveField *pRemoveProfitAndLossOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

    ///ֹ��ֹӯ����ѯ��Ӧ
    virtual void OnRspQueryProfitAndLossOrder(CTKSProfitAndLossOrderOperResultField *pQueryProfitAndLossOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

    ///����������ѡ��֪ͨ
    virtual void OnRtnCOSAskSelect(CTKSCOSAskSelectField *pCOSAskSelect) {};

    ///������״̬֪ͨ
    virtual void OnRtnCOSStatus(CTKSCOSStatusField *pCOSStatus) {};

    ///ֹ��ֹӯ��״̬֪ͨ
    virtual void OnRtnPLStatus(CTKSPLStatusField *pPLStatus) {};
};

class CTKSCosApi
{
public:
    ///������¼������
    virtual int ReqInitInsertConditionalOrder(CTKSConditionalOrderInitInsert *pConditionalOrderInitInsert, int nRequestID) = 0;

    ///��ѯ����������
    virtual int ReqQueryConditionalOrder(CTKSConditionalOrderQuery *pConditionalOrderQuery, int nRequestID) = 0;

    ///�޸�����������
    virtual int ReqModifyConditionalOrder(CTKSConditionalOrderModify *pConditionalOrderModify, int nRequestID) = 0;

    ///ɾ������������
    virtual int ReqRemoveConditionalOrder(CTKSConditionalOrderRemove *pConditionalOrderRemove, int nRequestID) = 0;

    ///��ͣ�򼤻�����������
    virtual int ReqStateAlterConditionalOrder(CTKSConditionalOrderStateAlter *pConditionalOrderStateAlter, int nRequestID) = 0;

    ///ѡ������������
    virtual int ReqSelectConditionalOrder(CTKSConditionalOrderSelect *pConditionalOrderSelect, int nRequestID) = 0;

    ///ֹ��ֹӯ��¼������
    virtual int ReqInsertProfitAndLossOrder(CTKSProfitAndLossOrderInsert *pProfitAndLossOrderInsert, int nRequestID) = 0;

    ///ֹ��ֹӯ���޸�����
    virtual int ReqModifyProfitAndLossOrder(CTKSProfitAndLossOrderModify *pProfitAndLossOrderModify, int nRequestID) = 0;

    ///ֹ��ֹӯ��ɾ������
    virtual int ReqRemoveProfitAndLossOrder(CTKSProfitAndLossOrderRemove *pProfitAndLossOrderRemove, int nRequestID) = 0;

    ///ֹ��ֹӯ����ѯ����
    virtual int ReqQueryProfitAndLossOrder(CTKSProfitAndLossOrderQuery *pProfitAndLossOrderQuery, int nRequestID) = 0;

protected:
    ~CTKSCosApi(){};
};

#endif