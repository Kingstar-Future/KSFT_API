#ifndef __KSCOSAPI_H_INCLUDED_
#define __KSCOSAPI_H_INCLUDED_
/**
* @file KSCosApi.h
* @author kevin.shen
* system：KSTradeAPI
* company：Kingstar
* history：
* 2012/11/12	kevin.shen	 create
*/
#include "KSUserApiStructEx.h"
#include "KSCosApiStruct.h"

class CTKSCosSpi
{
public:
    ///条件单录入响应
    virtual void OnRspInitInsertConditionalOrder(CTKSConditionalOrderOperResultField *pInitInsertConditionalOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

    ///条件单查询响应
    virtual void OnRspQueryConditionalOrder(CTKSConditionalOrderOperResultField *pQueryConditionalOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

    ///条件单修改响应
    virtual void OnRspModifyConditionalOrder(CTKSConditionalOrderOperResultField *pModifyConditionalOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};
    
    ///条件单暂停激活响应
    virtual void OnRspPauseConditionalOrder(CTKSConditionalOrderOperResultField *pPauseConditionalOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

    ///条件单删除响应
    virtual void OnRspRemoveConditionalOrder(CTKSConditionalOrderRspResultField *pRemoveConditionalOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

    ///条件单选择响应
    virtual void OnRspSelectConditionalOrder(CTKSConditionalOrderRspResultField *pSelectConditionalOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

    ///止损止盈单录入响应
    virtual void OnRspInsertProfitAndLossOrder(CTKSProfitAndLossOrderOperResultField *pInsertProfitAndLossOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

    ///止损止盈单修改响应
    virtual void OnRspModifyProfitAndLossOrder(CTKSProfitAndLossOrderOperResultField *pModifyProfitAndLossOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

    ///止损止盈单删除响应
    virtual void OnRspRemoveProfitAndLossOrder(CTKSProfitAndLossOrderRemoveField *pRemoveProfitAndLossOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

    ///止损止盈单查询响应
    virtual void OnRspQueryProfitAndLossOrder(CTKSProfitAndLossOrderOperResultField *pQueryProfitAndLossOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

    ///条件单请求选择通知
    virtual void OnRtnCOSAskSelect(CTKSCOSAskSelectField *pCOSAskSelect) {};

    ///条件单状态通知
    virtual void OnRtnCOSStatus(CTKSCOSStatusField *pCOSStatus) {};

    ///止损止盈单状态通知
    virtual void OnRtnPLStatus(CTKSPLStatusField *pPLStatus) {};
};

class CTKSCosApi
{
public:
    ///条件单录入请求
    virtual int ReqInitInsertConditionalOrder(CTKSConditionalOrderInitInsert *pConditionalOrderInitInsert, int nRequestID) = 0;

    ///查询条件单请求
    virtual int ReqQueryConditionalOrder(CTKSConditionalOrderQuery *pConditionalOrderQuery, int nRequestID) = 0;

    ///修改条件单请求
    virtual int ReqModifyConditionalOrder(CTKSConditionalOrderModify *pConditionalOrderModify, int nRequestID) = 0;

    ///删除条件单请求
    virtual int ReqRemoveConditionalOrder(CTKSConditionalOrderRemove *pConditionalOrderRemove, int nRequestID) = 0;

    ///暂停或激活条件单请求
    virtual int ReqStateAlterConditionalOrder(CTKSConditionalOrderStateAlter *pConditionalOrderStateAlter, int nRequestID) = 0;

    ///选择条件单请求
    virtual int ReqSelectConditionalOrder(CTKSConditionalOrderSelect *pConditionalOrderSelect, int nRequestID) = 0;

    ///止损止盈单录入请求
    virtual int ReqInsertProfitAndLossOrder(CTKSProfitAndLossOrderInsert *pProfitAndLossOrderInsert, int nRequestID) = 0;

    ///止损止盈单修改请求
    virtual int ReqModifyProfitAndLossOrder(CTKSProfitAndLossOrderModify *pProfitAndLossOrderModify, int nRequestID) = 0;

    ///止损止盈单删除请求
    virtual int ReqRemoveProfitAndLossOrder(CTKSProfitAndLossOrderRemove *pProfitAndLossOrderRemove, int nRequestID) = 0;

    ///止损止盈单查询请求
    virtual int ReqQueryProfitAndLossOrder(CTKSProfitAndLossOrderQuery *pProfitAndLossOrderQuery, int nRequestID) = 0;

protected:
    ~CTKSCosApi(){};
};

#endif