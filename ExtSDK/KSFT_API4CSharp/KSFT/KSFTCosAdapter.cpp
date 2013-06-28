/////////////////////////////////////////////////////////////////////////
/// 金仕达 KSFT C++ ==> .Net Framework Adapter
/// Summary: 条件单请求接口托管改造
/// Author:	ksftapi@gmail.com
/// Date: 20130314
/// Update List：
///   20130321 修改
///   20130326 添加注释
/////////////////////////////////////////////////////////////////////////

#include "StdAfx.h"

#include "CosSpi.h"
#include "KSFTCosAdapter.h"
#include <memory.h>

using namespace Native;
using namespace KingstarAPI;


KSFTCosAdapter::KSFTCosAdapter(void)
{	
	m_pApi = NULL;
	m_pSpi = new CCosSpi(this);
}

KSFTCosAdapter::~KSFTCosAdapter(void)
{

}

///<summary>
///条件单录入请求
///</summary>
int KSFTCosAdapter::ReqInitInsertConditionalOrder(TKSConditionalOrderInitInsert^ pConditionalOrderInitInsert, int nRequestID)
{
	CTKSConditionalOrderInitInsert native;
	MNConv<TKSConditionalOrderInitInsert^, CTKSConditionalOrderInitInsert>::M2N(pConditionalOrderInitInsert, &native);
	return m_pApi->ReqInitInsertConditionalOrder(&native, nRequestID);
}

///<summary>
///条件单查询请求
///</summary>
int KSFTCosAdapter::ReqQueryConditionalOrder(TKSConditionalOrderQuery^ pConditionalOrderQuery, int nRequestID)
{
	CTKSConditionalOrderQuery native;
	MNConv<TKSConditionalOrderQuery^, CTKSConditionalOrderQuery>::M2N(pConditionalOrderQuery, &native);
	return m_pApi->ReqQueryConditionalOrder(&native, nRequestID);
}

///<summary>
///条件单修改请求
///</summary>
int KSFTCosAdapter::ReqModifyConditionalOrder(TKSConditionalOrderModify^ pConditionalOrderModify, int nRequestID)
{
	CTKSConditionalOrderModify native;
	MNConv<TKSConditionalOrderModify^, CTKSConditionalOrderModify>::M2N(pConditionalOrderModify, &native);
	return m_pApi->ReqModifyConditionalOrder(&native, nRequestID);
}

///<summary>
///条件单删除请求
///</summary>
int KSFTCosAdapter::ReqRemoveConditionalOrder(TKSConditionalOrderRemove^ pConditionalOrderRemove, int nRequestID)
{
	CTKSConditionalOrderRemove native;
	MNConv<TKSConditionalOrderRemove^, CTKSConditionalOrderRemove>::M2N(pConditionalOrderRemove, &native);
	return m_pApi->ReqRemoveConditionalOrder(&native, nRequestID);
}

///<summary>
///暂停或激活条件单请求
///</summary>
int KSFTCosAdapter::ReqStateAlterConditionalOrder(TKSConditionalOrderStateAlter^ pConditionalOrderStateAlter, int nRequestID)
{
	CTKSConditionalOrderStateAlter native;
	MNConv<TKSConditionalOrderStateAlter^, CTKSConditionalOrderStateAlter>::M2N(pConditionalOrderStateAlter, &native);
	return m_pApi->ReqStateAlterConditionalOrder(&native, nRequestID);
}

///<summary>
///条件单选择请求
///</summary>
int KSFTCosAdapter::ReqSelectConditionalOrder(TKSConditionalOrderSelect^ pConditionalOrderSelect, int nRequestID)
{
	CTKSConditionalOrderSelect native;
	MNConv<TKSConditionalOrderSelect^, CTKSConditionalOrderSelect>::M2N(pConditionalOrderSelect, &native);
	return m_pApi->ReqSelectConditionalOrder(&native, nRequestID);
}
///<summary>
///止损止盈单录入请求
///</summary>
int KSFTCosAdapter::ReqInsertProfitAndLossOrder(TKSProfitAndLossOrderInsert^ pProfitAndLossOrderInsert, int nRequestID)
{
	CTKSProfitAndLossOrderInsert native;
	MNConv<TKSProfitAndLossOrderInsert^, CTKSProfitAndLossOrderInsert>::M2N(pProfitAndLossOrderInsert, &native);
	return m_pApi->ReqInsertProfitAndLossOrder(&native, nRequestID);
}

///<summary>
///止损止赢单修改请求
///</summary>
int KSFTCosAdapter::ReqModifyProfitAndLossOrder(TKSProfitAndLossOrderModify^ pProfitAndLossOrderModify, int nRequestID)
{
	CTKSProfitAndLossOrderModify native;
	MNConv<TKSProfitAndLossOrderModify^, CTKSProfitAndLossOrderModify>::M2N(pProfitAndLossOrderModify, &native);
	return m_pApi->ReqModifyProfitAndLossOrder(&native, nRequestID);
}

///<summary>
///止损止赢单删除请求
///</summary>
int KSFTCosAdapter::ReqRemoveProfitAndLossOrder(TKSProfitAndLossOrderRemove^ pProfitAndLossOrderRemove, int nRequestID)
{
	CTKSProfitAndLossOrderRemove native;
	MNConv<TKSProfitAndLossOrderRemove^, CTKSProfitAndLossOrderRemove>::M2N(pProfitAndLossOrderRemove, &native);
	return m_pApi->ReqRemoveProfitAndLossOrder(&native, nRequestID);
}

///<summary>
///止损止赢单查询请求
///</summary>
int KSFTCosAdapter::ReqQueryProfitAndLossOrder(TKSProfitAndLossOrderQuery^ pProfitAndLossOrderQuery, int nRequestID)
{
	CTKSProfitAndLossOrderQuery native;
	MNConv<TKSProfitAndLossOrderQuery^, CTKSProfitAndLossOrderQuery>::M2N(pProfitAndLossOrderQuery, &native);
	return m_pApi->ReqQueryProfitAndLossOrder(&native, nRequestID);
}