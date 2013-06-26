/**
* @file kstctpmdspi.h
* 金仕达转CTP回调接口
* @author kevin.shen
*/

#ifndef KSTCTPMDSPI_H
#define  KSTCTPMDSPI_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// include CTP api头文件前，设为export方式
#define ISLIB
#define LIB_MD_API_EXPORT
#include<stdlib.h>
#include "../CTP/ThostFtdcMdApi.h"
#include "../KSFT_API/KSMarketDataAPI.h"
#pragma comment(lib, "../KSFT_API/KSMarketDataAPI.lib")
#pragma message("Automatically linking with KSTradeAPI.lib")

//指针判空
const int PISNULL = -1;

class CThostFtdcMdSpi_obj:public KingstarAPI::CThostFtdcMdSpi
{
public:
	// 构造函数
	CThostFtdcMdSpi_obj(::CThostFtdcMdSpi * pCTPSpi);

	///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
	void OnFrontConnected();

	///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
	void OnFrontDisconnected(int nReason);

	///心跳超时警告。当长时间未收到报文时，该方法被调用。
	void OnHeartBeatWarning(int nTimeLapse);

	///登录请求响应
	void OnRspUserLogin(KingstarAPI::CThostFtdcRspUserLoginField *pRspUserLogin, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///登出请求响应
	void OnRspUserLogout(KingstarAPI::CThostFtdcUserLogoutField *pUserLogout, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///错误应答
	void OnRspError(KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///订阅行情应答
	void OnRspSubMarketData(KingstarAPI::CThostFtdcSpecificInstrumentField *pSpecificInstrument, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///取消订阅行情应答
	void OnRspUnSubMarketData(KingstarAPI::CThostFtdcSpecificInstrumentField *pSpecificInstrument, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///深度行情通知
	void OnRtnDepthMarketData(KingstarAPI::CThostFtdcDepthMarketDataField *pDepthMarketData);

public:
	// 析构函数
	~CThostFtdcMdSpi_obj();

private:
	::CThostFtdcMdSpi * m_pCTPSpi;			                 // CTP回调接口类对象指针
};

#endif 