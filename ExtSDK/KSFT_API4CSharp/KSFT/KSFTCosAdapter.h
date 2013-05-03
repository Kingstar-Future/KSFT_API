/////////////////////////////////////////////////////////////////////////
/// ���˴� KSFT C++ ==> .Net Framework Adapter
/// Summary: ����������Ӧ��ӿ��йܸ���
/// Author:	ksftapi@gmail.com
/// Date: 20130314
/// Update List��
///   20130321 �޸�
///   20130326 ���ע��
/////////////////////////////////////////////////////////////////////////

#pragma once
#include "Util.h"

using namespace Native;
using namespace KingstarAPI;

namespace  Native{
	class CCosSpi;
};


namespace KSFT {

	///<summary>
	/// �й���,Conditionalorderserver Adapter
	///</summary>
	public ref class KSFTCosAdapter
	{
       
	public:
		/// <summary>
		///����KSFTCosAdapter
		///����������Ϣ�ļ���Ŀ¼��Ĭ��Ϊ��ǰĿ¼
		/// </summary>
		KSFTCosAdapter(void);
	
	private:
		~KSFTCosAdapter(void);
	public:
		/// ��������Ա�����������벻Ҫ���ⲿ����/ʹ��
		CTKSCosApi* m_pApi;
		CCosSpi* m_pSpi;
        
	public:

		
		/// <summary>
		/// ������¼�룬�÷��������á�
		/// </summary>
		event RspInitInsertConditionalOrder^ OnRspInitInsertConditionalOrder {
		  void add(RspInitInsertConditionalOrder^ handler ) {
			 OnRspInitInsertConditionalOrder_delegate += handler;
		  }
		  void remove(RspInitInsertConditionalOrder^ handler) {
			 OnRspInitInsertConditionalOrder_delegate -= handler;
		  }
		  void raise(TKSConditionalOrderOperResultField^ pInitInsertConditionalOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
			  if(OnRspInitInsertConditionalOrder_delegate)
				OnRspInitInsertConditionalOrder_delegate(pInitInsertConditionalOrder,pRspInfo,nRequestID,bIsLast);
		  }
		}

		/// <summary>
		/// ��������ѯ��Ӧ���÷��������á�
		/// </summary>
		event RspQueryConditionalOrder^ OnRspQueryConditionalOrder {
		  void add(RspQueryConditionalOrder^ handler ) {
			 OnRspQueryConditionalOrder_delegate += handler;
		  }
		  void remove(RspQueryConditionalOrder^ handler) {
			 OnRspQueryConditionalOrder_delegate -= handler;
		  }
		  void raise(TKSConditionalOrderOperResultField^ pQueryConditionalOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
			  if(OnRspQueryConditionalOrder_delegate)
				OnRspQueryConditionalOrder_delegate(pQueryConditionalOrder,pRspInfo,nRequestID,bIsLast);
		  }
		}

		/// <summary>
		/// �������޸���Ӧ���÷��������á�
		/// </summary>
		event RspModifyConditionalOrder^ OnRspModifyConditionalOrder {
		  void add(RspModifyConditionalOrder^ handler ) {
			 OnRspModifyConditionalOrder_delegate += handler;
		  }
		  void remove(RspModifyConditionalOrder^ handler) {
			 OnRspModifyConditionalOrder_delegate -= handler;
		  }
		  void raise(TKSConditionalOrderOperResultField^ pModifyConditionalOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
			  if(OnRspModifyConditionalOrder_delegate)
				OnRspModifyConditionalOrder_delegate(pModifyConditionalOrder,pRspInfo,nRequestID,bIsLast);
		  }
		}

		/// <summary>
		/// ��������ͣ������Ӧ���÷��������á�
		/// </summary>
		event RspPauseConditionalOrder^ OnRspPauseConditionalOrder {
		  void add(RspPauseConditionalOrder^ handler ) {
			 OnRspPauseConditionalOrder_delegate += handler;
		  }
		  void remove(RspPauseConditionalOrder^ handler) {
			 OnRspPauseConditionalOrder_delegate -= handler;
		  }
		  void raise(TKSConditionalOrderOperResultField^ pPauseConditionalOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
			  if(OnRspPauseConditionalOrder_delegate)
				OnRspPauseConditionalOrder_delegate(pPauseConditionalOrder,pRspInfo,nRequestID,bIsLast);
		  }
		}

		/// <summary>
		/// ������ɾ����Ӧ���÷��������á�
		/// </summary>
		event RspRemoveConditionalOrder^ OnRspRemoveConditionalOrder {
		  void add(RspRemoveConditionalOrder^ handler ) {
			 OnRspRemoveConditionalOrder_delegate += handler;
		  }
		  void remove(RspRemoveConditionalOrder^ handler) {
			 OnRspRemoveConditionalOrder_delegate -= handler;
		  }
		  void raise(TKSConditionalOrderRspResultField^ pRemoveConditionalOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
			  if(OnRspRemoveConditionalOrder_delegate)
				OnRspRemoveConditionalOrder_delegate(pRemoveConditionalOrder,pRspInfo,nRequestID,bIsLast);
		  }
		}

		/// <summary>
		/// ������ѡ����Ӧ���÷��������á�
		/// </summary>
		event RspSelectConditionalOrder^ OnRspSelectConditionalOrder {
		  void add(RspSelectConditionalOrder^ handler ) {
			 OnRspSelectConditionalOrder_delegate += handler;
		  }
		  void remove(RspSelectConditionalOrder^ handler) {
			 OnRspSelectConditionalOrder_delegate -= handler;
		  }
		  void raise(TKSConditionalOrderRspResultField^ pSelectConditionalOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
			  if(OnRspSelectConditionalOrder_delegate)
				OnRspSelectConditionalOrder_delegate(pSelectConditionalOrder,pRspInfo,nRequestID,bIsLast);
		  }
		}

		/// <summary>
		/// ֹ��ֹӯ��¼����Ӧ���÷��������á�
		/// </summary>
		event RspInsertProfitAndLossOrder^ OnRspInsertProfitAndLossOrder {
		  void add(RspInsertProfitAndLossOrder^ handler ) {
			 OnRspInsertProfitAndLossOrder_delegate += handler;
		  }
		  void remove(RspInsertProfitAndLossOrder^ handler) {
			 OnRspInsertProfitAndLossOrder_delegate -= handler;
		  }
		  void raise(TKSProfitAndLossOrderOperResultField^ pInsertProfitAndLossOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
			  if(OnRspInsertProfitAndLossOrder_delegate)
				OnRspInsertProfitAndLossOrder_delegate(pInsertProfitAndLossOrder,pRspInfo,nRequestID,bIsLast);
		  }
		}

		/// <summary>
		/// ֹ��ֹӯ���޸���Ӧ���÷��������á�
		/// </summary>
		event RspModifyProfitAndLossOrder^ OnRspModifyProfitAndLossOrder {
		  void add(RspModifyProfitAndLossOrder^ handler ) {
			 OnRspModifyProfitAndLossOrder_delegate += handler;
		  }
		  void remove(RspModifyProfitAndLossOrder^ handler) {
			 OnRspModifyProfitAndLossOrder_delegate -= handler;
		  }
		  void raise(TKSProfitAndLossOrderOperResultField^ pModifyProfitAndLossOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
			  if(OnRspModifyProfitAndLossOrder_delegate)
				OnRspModifyProfitAndLossOrder_delegate(pModifyProfitAndLossOrder,pRspInfo,nRequestID,bIsLast);
		  }
		}

		/// <summary>
		/// ֹ��ֹӯ��ɾ����Ӧ���÷��������á�
		/// </summary>
		event RspRemoveProfitAndLossOrder^ OnRspRemoveProfitAndLossOrder {
		  void add(RspRemoveProfitAndLossOrder^ handler ) {
			 OnRspRemoveProfitAndLossOrder_delegate += handler;
		  }
		  void remove(RspRemoveProfitAndLossOrder^ handler) {
			 OnRspRemoveProfitAndLossOrder_delegate -= handler;
		  }
		  void raise(TKSProfitAndLossOrderRemoveField^ pRemoveProfitAndLossOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
			  if(OnRspRemoveProfitAndLossOrder_delegate)
				OnRspRemoveProfitAndLossOrder_delegate(pRemoveProfitAndLossOrder,pRspInfo,nRequestID,bIsLast);
		  }
		}

		/// <summary>
		/// ֹ��ֹӯ����ѯ��Ӧ���÷��������á�
		/// </summary>
		event RspQueryProfitAndLossOrder^ OnRspQueryProfitAndLossOrder {
		  void add(RspQueryProfitAndLossOrder^ handler ) {
			 OnRspQueryProfitAndLossOrder_delegate += handler;
		  }
		  void remove(RspQueryProfitAndLossOrder^ handler) {
			 OnRspQueryProfitAndLossOrder_delegate -= handler;
		  }
		  void raise(TKSProfitAndLossOrderOperResultField^ pQueryProfitAndLossOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
			  if(OnRspQueryProfitAndLossOrder_delegate)
				OnRspQueryProfitAndLossOrder_delegate(pQueryProfitAndLossOrder,pRspInfo,nRequestID,bIsLast);
		  }
		}

		/// <summary>
		/// ����������ѡ��֪ͨ���÷��������á�
		/// </summary>
		event RtnCOSAskSelect^ OnRtnCOSAskSelect {
		  void add(RtnCOSAskSelect^ handler ) {
			 OnRtnCOSAskSelect_delegate += handler;
		  }
		  void remove(RtnCOSAskSelect^ handler) {
			 OnRtnCOSAskSelect_delegate -= handler;
		  }
		  void raise(TKSCOSAskSelectField^ pCOSAskSelect) {
			  if(OnRtnCOSAskSelect_delegate)
				OnRtnCOSAskSelect_delegate(pCOSAskSelect);
		  }
		}

		/// <summary>
		/// ������״̬֪ͨ���÷��������á�
		/// </summary>
		event RtnCOSStatus^ OnRtnCOSStatus {
		  void add(RtnCOSStatus^ handler ) {
			 OnRtnCOSStatus_delegate += handler;
		  }
		  void remove(RtnCOSStatus^ handler) {
			 OnRtnCOSStatus_delegate -= handler;
		  }
		  void raise(TKSCOSStatusField^ pCOSStatus) {
			  if(OnRtnCOSStatus_delegate)
				OnRtnCOSStatus_delegate(pCOSStatus);
		  }
		}

		/// <summary>
		/// ֹ��ֹӯ��״̬֪ͨ���÷��������á�
		/// </summary>
		event RtnPLStatus^ OnRtnPLStatus {
		  void add(RtnPLStatus^ handler ) {
			 OnRtnPLStatus_delegate += handler;
		  }
		  void remove(RtnPLStatus^ handler) {
			 OnRtnPLStatus_delegate -= handler;
		  }
		  void raise(TKSPLStatusField^ pPLStatus) {
			  if(OnRtnPLStatus_delegate)
				OnRtnPLStatus_delegate(pPLStatus);
		  }
		}

		private:
			RspInitInsertConditionalOrder^OnRspInitInsertConditionalOrder_delegate;
			RspQueryConditionalOrder^OnRspQueryConditionalOrder_delegate;
			RspModifyConditionalOrder^OnRspModifyConditionalOrder_delegate;
			RspPauseConditionalOrder^OnRspPauseConditionalOrder_delegate;
			RspRemoveConditionalOrder^OnRspRemoveConditionalOrder_delegate;
			RspSelectConditionalOrder^OnRspSelectConditionalOrder_delegate;
			RspInsertProfitAndLossOrder^OnRspInsertProfitAndLossOrder_delegate;
			RspModifyProfitAndLossOrder^OnRspModifyProfitAndLossOrder_delegate;
			RspRemoveProfitAndLossOrder^OnRspRemoveProfitAndLossOrder_delegate;
			RspQueryProfitAndLossOrder^OnRspQueryProfitAndLossOrder_delegate;
			RtnCOSAskSelect^OnRtnCOSAskSelect_delegate;
			RtnCOSStatus^OnRtnCOSStatus_delegate;
			RtnPLStatus^OnRtnPLStatus_delegate;

		 public:
			 /// <summary>
		     /// ������¼������
		     /// </summary>
			 int ReqInitInsertConditionalOrder(TKSConditionalOrderInitInsert^ pConditionalOrderInitInsert, int nRequestID);
			 /// <summary>
		     /// ��ѯ����������
		     /// </summary>
			 int ReqQueryConditionalOrder(TKSConditionalOrderQuery^ pConditionalOrderQuery, int nRequestID);
			 /// <summary>
		     /// �޸�����������
		     /// </summary>
			 int ReqModifyConditionalOrder(TKSConditionalOrderModify^ pConditionalOrderModify, int nRequestID);
			 /// <summary>
		     /// ɾ������������
		     /// </summary>
			 int ReqRemoveConditionalOrder(TKSConditionalOrderRemove^ pConditionalOrderRemove, int nRequestID);
			 /// <summary>
		     /// ��ͣ�򼤻�����������
		     /// </summary>
			 int ReqStateAlterConditionalOrder(TKSConditionalOrderStateAlter^ pConditionalOrderStateAlter, int nRequestID);
			 /// <summary>
		     /// ѡ������������
		     /// </summary>
			 int ReqSelectConditionalOrder(TKSConditionalOrderSelect^ pConditionalOrderSelect, int nRequestID);
			 /// <summary>
		     /// ֹ��ֹӯ��¼������
		     /// </summary>
			 int ReqInsertProfitAndLossOrder(TKSProfitAndLossOrderInsert^ pProfitAndLossOrderInsert, int nRequestID);
			 /// <summary>
		     /// ֹ��ֹӯ���޸�����
		     /// </summary>
			 int ReqModifyProfitAndLossOrder(TKSProfitAndLossOrderModify^ pProfitAndLossOrderModify, int nRequestID);
			 /// <summary>
		     /// ֹ��ֹӯ��ɾ������
		     /// </summary>
			 int ReqRemoveProfitAndLossOrder(TKSProfitAndLossOrderRemove^ pProfitAndLossOrderRemove, int nRequestID);
			 /// <summary>
		     /// ֹ��ֹӯ����ѯ����
		     /// </summary>
			 int ReqQueryProfitAndLossOrder(TKSProfitAndLossOrderQuery^ pProfitAndLossOrderQuery, int nRequestID);
			 };
			 }
