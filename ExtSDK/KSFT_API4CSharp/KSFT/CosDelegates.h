/////////////////////////////////////////////////////////////////////////
/// ½ðÊË´ï KSFT C++ => .Net Framework Adapter
/// Author:	ksftapi@gmail.com
/// Date: 20120420
/////////////////////////////////////////////////////////////////////////
#pragma once

namespace KSFT
{
	//Conditionalorderserver delegates
	public delegate void RspInitInsertConditionalOrder(TKSConditionalOrderOperResultField^ pInitInsertConditionalOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	public delegate void RspQueryConditionalOrder(TKSConditionalOrderOperResultField^ pQueryConditionalOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	public delegate void RspModifyConditionalOrder(TKSConditionalOrderOperResultField^ pModifyConditionalOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	public delegate void RspPauseConditionalOrder(TKSConditionalOrderOperResultField^ pPauseConditionalOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	public delegate void RspRemoveConditionalOrder(TKSConditionalOrderRspResultField^ pRemoveConditionalOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	public delegate void RspSelectConditionalOrder(TKSConditionalOrderRspResultField^ pSelectConditionalOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	public delegate void RspInsertProfitAndLossOrder(TKSProfitAndLossOrderOperResultField^ pInsertProfitAndLossOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	public delegate void RspModifyProfitAndLossOrder(TKSProfitAndLossOrderOperResultField^ pModifyProfitAndLossOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	public delegate void RspRemoveProfitAndLossOrder(TKSProfitAndLossOrderRemoveField^ pRemoveProfitAndLossOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	public delegate void RspQueryProfitAndLossOrder(TKSProfitAndLossOrderOperResultField^ pQueryProfitAndLossOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	public delegate void RtnCOSAskSelect(TKSCOSAskSelectField^ pCOSAskSelect);
	public delegate void RtnCOSStatus(TKSCOSStatusField^ pCOSStatus);
	public delegate void RtnPLStatus(TKSPLStatusField^ pPLStatus);
}