/////////////////////////////////////////////////////////////////////////
/// 金仕达 KSFT C++ => .Net Framework Adapter
/// Summary: 行情应答接口托管转非托管类
/// Author:	ksftapi@gmail.com
/// Date: 20130304
/// Update List：
///   20130326 添加注释 
/////////////////////////////////////////////////////////////////////////

#pragma once

#include "KSFTMDAdapter.h"
#include <vcclr.h>
#include "util.h"

using namespace KingstarAPI;

namespace Native
{
	///<summary>
	/// 非托管类
	///</summary>
	class CMdSpi : public CThostFtdcMdSpi
	{
	public:
		CMdSpi(KSFTMDAdapter^ pAdapter) {m_pAdapter = pAdapter;};

		///<summary>
		///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
		///</summary>
		virtual void OnFrontConnected(){
			m_pAdapter->OnFrontConnected();
		};
		
		///<summary>
		///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
		///@param nReason 错误原因
		///        0x1001 网络读失败
		///        0x1002 网络写失败
		///        0x2001 接收心跳超时
		///        0x2002 发送心跳失败
		///        0x2003 收到错误报文
		///</summary>
		virtual void OnFrontDisconnected(int nReason){
			m_pAdapter->OnFrontDisconnected(nReason);
		};
		
		///<summary>
		///心跳超时警告。当长时间未收到报文时，该方法被调用。
		///@param nTimeLapse 距离上次接收报文的时间
		///</summary>
		virtual void OnHeartBeatWarning(int nTimeLapse){
			m_pAdapter->OnHeartBeatWarning(nTimeLapse);
		};
		
		///<summary>
		///登录请求响应
		///</summary>
		virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
			ThostFtdcRspUserLoginField^ field = MNConv<ThostFtdcRspUserLoginField^, CThostFtdcRspUserLoginField>::N2M(pRspUserLogin);
			m_pAdapter->OnRspUserLogin(field, RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///登出请求响应
		///</summary>
		virtual void OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
			m_pAdapter->OnRspUserLogout(MNConv<ThostFtdcUserLogoutField^, CThostFtdcUserLogoutField>::N2M(pUserLogout), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///错误应答
		///</summary>
		virtual void OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
			m_pAdapter->OnRspError(RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///订阅行情应答
		///</summary>
		virtual void OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
			m_pAdapter->OnRspSubMarketData(MNConv<ThostFtdcSpecificInstrumentField^, CThostFtdcSpecificInstrumentField>::N2M(pSpecificInstrument), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///取消订阅行情应答
		///</summary>
		virtual void OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
			m_pAdapter->OnRspUnSubMarketData(MNConv<ThostFtdcSpecificInstrumentField^, CThostFtdcSpecificInstrumentField>::N2M(pSpecificInstrument), RspInfoField(pRspInfo), nRequestID, bIsLast);
		};

		///<summary>
		///深度行情通知
		///</summary>
		virtual void OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData){
			ThostFtdcDepthMarketDataField^ field = safe_cast<ThostFtdcDepthMarketDataField^>(Marshal::PtrToStructure(IntPtr(pDepthMarketData), ThostFtdcDepthMarketDataField::typeid));
			m_pAdapter->OnRtnDepthMarketData(field);
		};
	private:
		gcroot<KSFTMDAdapter^> m_pAdapter;
	};
};