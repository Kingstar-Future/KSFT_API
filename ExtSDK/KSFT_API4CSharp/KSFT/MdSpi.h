/////////////////////////////////////////////////////////////////////////
/// ���˴� KSFT C++ => .Net Framework Adapter
/// Summary: ����Ӧ��ӿ��й�ת���й���
/// Author:	ksftapi@gmail.com
/// Date: 20130304
/// Update List��
///   20130326 ���ע�� 
/////////////////////////////////////////////////////////////////////////

#pragma once

#include "KSFTMDAdapter.h"
#include <vcclr.h>
#include "util.h"

using namespace KingstarAPI;

namespace Native
{
	///<summary>
	/// ���й���
	///</summary>
	class CMdSpi : public CThostFtdcMdSpi
	{
	public:
		CMdSpi(KSFTMDAdapter^ pAdapter) {m_pAdapter = pAdapter;};

		///<summary>
		///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
		///</summary>
		virtual void OnFrontConnected(){
			m_pAdapter->OnFrontConnected();
		};
		
		///<summary>
		///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
		///@param nReason ����ԭ��
		///        0x1001 �����ʧ��
		///        0x1002 ����дʧ��
		///        0x2001 ����������ʱ
		///        0x2002 ��������ʧ��
		///        0x2003 �յ�������
		///</summary>
		virtual void OnFrontDisconnected(int nReason){
			m_pAdapter->OnFrontDisconnected(nReason);
		};
		
		///<summary>
		///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
		///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
		///</summary>
		virtual void OnHeartBeatWarning(int nTimeLapse){
			m_pAdapter->OnHeartBeatWarning(nTimeLapse);
		};
		
		///<summary>
		///��¼������Ӧ
		///</summary>
		virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
			ThostFtdcRspUserLoginField^ field = MNConv<ThostFtdcRspUserLoginField^, CThostFtdcRspUserLoginField>::N2M(pRspUserLogin);
			m_pAdapter->OnRspUserLogin(field, RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///�ǳ�������Ӧ
		///</summary>
		virtual void OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
			m_pAdapter->OnRspUserLogout(MNConv<ThostFtdcUserLogoutField^, CThostFtdcUserLogoutField>::N2M(pUserLogout), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///����Ӧ��
		///</summary>
		virtual void OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
			m_pAdapter->OnRspError(RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///��������Ӧ��
		///</summary>
		virtual void OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
			m_pAdapter->OnRspSubMarketData(MNConv<ThostFtdcSpecificInstrumentField^, CThostFtdcSpecificInstrumentField>::N2M(pSpecificInstrument), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///ȡ����������Ӧ��
		///</summary>
		virtual void OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
			m_pAdapter->OnRspUnSubMarketData(MNConv<ThostFtdcSpecificInstrumentField^, CThostFtdcSpecificInstrumentField>::N2M(pSpecificInstrument), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///�������֪ͨ
		///</summary>
		virtual void OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData){
			ThostFtdcDepthMarketDataField^ field = safe_cast<ThostFtdcDepthMarketDataField^>(Marshal::PtrToStructure(IntPtr(pDepthMarketData), ThostFtdcDepthMarketDataField::typeid));
			m_pAdapter->OnRtnDepthMarketData(field);
		};
	private:
		gcroot<KSFTMDAdapter^> m_pAdapter;
	};
};