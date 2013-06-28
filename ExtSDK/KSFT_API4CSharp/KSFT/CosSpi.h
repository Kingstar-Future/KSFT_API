/////////////////////////////////////////////////////////////////////////
/// ���˴� KSFT C++ => .Net Framework Adapter
/// Summary: ������Ӧ��ӿ��й�ת���й�
/// Author:	ksftapi@gmail.com
/// Date: 20130314
/// Update List:
///   20130318 �޸�
///   20130326 ���ע��
/////////////////////////////////////////////////////////////////////////

#pragma once

#include "KSFTCosAdapter.h"
#include <vcclr.h>
#include "util.h"

using namespace KingstarAPI;

namespace Native
{
	///<summary>
	/// ���й���
	///</summary>
	class CCosSpi : public CTKSCosSpi
	{
	public:
		CCosSpi(KSFTCosAdapter^ pAdapter) {m_pAdapter = pAdapter;};

		///<summary>
		///������¼����Ӧ
		///</summary>
		virtual void OnRspInitInsertConditionalOrder(CTKSConditionalOrderOperResultField *pInitInsertConditionalOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
			m_pAdapter->OnRspInitInsertConditionalOrder(MNConv<TKSConditionalOrderOperResultField^, CTKSConditionalOrderOperResultField>::N2M(pInitInsertConditionalOrder), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};
		
		///<summary>
		///��������ѯ��Ӧ
		///</summary>
		virtual void OnRspQueryConditionalOrder(CTKSConditionalOrderOperResultField *pQueryConditionalOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
			m_pAdapter->OnRspQueryConditionalOrder(MNConv<TKSConditionalOrderOperResultField^, CTKSConditionalOrderOperResultField>::N2M(pQueryConditionalOrder), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};
		
		///<summary>
		///�������޸���Ӧ
		///</summary>
		virtual void OnRspModifyConditionalOrder(CTKSConditionalOrderOperResultField *pModifyConditionalOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
			m_pAdapter->OnRspModifyConditionalOrder(MNConv<TKSConditionalOrderOperResultField^, CTKSConditionalOrderOperResultField>::N2M(pModifyConditionalOrder), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};
		
		///<summary>
		///��������ͣ������Ӧ
		///</summary>
		virtual void OnRspPauseConditionalOrder(CTKSConditionalOrderOperResultField *pPauseConditionalOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
			TKSConditionalOrderOperResultField^ field = MNConv<TKSConditionalOrderOperResultField^, CTKSConditionalOrderOperResultField>::N2M(pPauseConditionalOrder);
			m_pAdapter->OnRspPauseConditionalOrder(field, RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///������ɾ����Ӧ
		///</summary>
		virtual void OnRspRemoveConditionalOrder(CTKSConditionalOrderRspResultField *pRemoveConditionalOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
			m_pAdapter->OnRspRemoveConditionalOrder(MNConv<TKSConditionalOrderRspResultField^, CTKSConditionalOrderRspResultField>::N2M(pRemoveConditionalOrder), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///������ѡ����Ӧ
		///</summary>
		virtual void OnRspSelectConditionalOrder(CTKSConditionalOrderRspResultField *pSelectConditionalOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
			m_pAdapter->OnRspSelectConditionalOrder(MNConv<TKSConditionalOrderRspResultField^, CTKSConditionalOrderRspResultField>::N2M(pSelectConditionalOrder), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///ֹ��ֹӯ��¼����Ӧ
		///</summary>
		virtual void OnRspInsertProfitAndLossOrder(CTKSProfitAndLossOrderOperResultField *pInsertProfitAndLossOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
			m_pAdapter->OnRspInsertProfitAndLossOrder(MNConv<TKSProfitAndLossOrderOperResultField^, CTKSProfitAndLossOrderOperResultField>::N2M(pInsertProfitAndLossOrder), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///ֹ��ֹӯ���޸���Ӧ
		///</summary>
		virtual void OnRspModifyProfitAndLossOrder(CTKSProfitAndLossOrderOperResultField *pModifyProfitAndLossOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
			m_pAdapter->OnRspModifyProfitAndLossOrder(MNConv<TKSProfitAndLossOrderOperResultField^, CTKSProfitAndLossOrderOperResultField>::N2M(pModifyProfitAndLossOrder), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///ֹ��ֹӯ��ɾ����Ӧ
		///</summary>
		virtual void OnRspRemoveProfitAndLossOrder(CTKSProfitAndLossOrderRemoveField *pRemoveProfitAndLossOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
			TKSProfitAndLossOrderRemoveField^ field = MNConv<TKSProfitAndLossOrderRemoveField^, CTKSProfitAndLossOrderRemoveField>::N2M(pRemoveProfitAndLossOrder);
			m_pAdapter->OnRspRemoveProfitAndLossOrder(field, RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///ֹ��ֹӯ����ѯ��Ӧ
		///</summary>
		virtual void OnRspQueryProfitAndLossOrder(CTKSProfitAndLossOrderOperResultField *pQueryProfitAndLossOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
			TKSProfitAndLossOrderOperResultField^ field = MNConv<TKSProfitAndLossOrderOperResultField^, CTKSProfitAndLossOrderOperResultField>::N2M(pQueryProfitAndLossOrder);
			m_pAdapter->OnRspQueryProfitAndLossOrder(field, RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///����������ѡ��֪ͨ
		///</summary>
		virtual void OnRtnCOSAskSelect(CTKSCOSAskSelectField *pCOSAskSelect){
			TKSCOSAskSelectField^ field = safe_cast<TKSCOSAskSelectField^>(Marshal::PtrToStructure(IntPtr(pCOSAskSelect), TKSCOSAskSelectField::typeid));
			m_pAdapter->OnRtnCOSAskSelect(field);
		};

		///<summary>
		///������״̬֪ͨ
		///</summary>
		virtual void OnRtnCOSStatus(CTKSCOSStatusField *pCOSStatus){
			TKSCOSStatusField^ field = safe_cast<TKSCOSStatusField^>(Marshal::PtrToStructure(IntPtr(pCOSStatus), TKSCOSStatusField::typeid));
			m_pAdapter->OnRtnCOSStatus(field);
		};

		///<summary>
		///ֹ��ֹӯ��״̬֪ͨ
		///</summary>
		virtual void OnRtnPLStatus(CTKSPLStatusField *pPLStatus){
			TKSPLStatusField^ field = safe_cast<TKSPLStatusField^>(Marshal::PtrToStructure(IntPtr(pPLStatus), TKSPLStatusField::typeid));
			m_pAdapter->OnRtnPLStatus(field);
		};
	private:
		gcroot<KSFTCosAdapter^> m_pAdapter;
	};
};