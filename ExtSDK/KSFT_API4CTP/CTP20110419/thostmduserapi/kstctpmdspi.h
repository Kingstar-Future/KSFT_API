/**
* @file kstctpmdspi.h
* ���˴�תCTP�ص��ӿ�
* @author kevin.shen
*/

#ifndef KSTCTPMDSPI_H
#define  KSTCTPMDSPI_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// include CTP apiͷ�ļ�ǰ����Ϊexport��ʽ
#define ISLIB
#define LIB_MD_API_EXPORT
#include<stdlib.h>
#include "../CTP/ThostFtdcMdApi.h"
#include "../KSFT_API/KSMarketDataAPI.h"
#pragma comment(lib, "../KSFT_API/KSMarketDataAPI.lib")
#pragma message("Automatically linking with KSTradeAPI.lib")

//ָ���п�
const int PISNULL = -1;

class CThostFtdcMdSpi_obj:public KingstarAPI::CThostFtdcMdSpi
{
public:
	// ���캯��
	CThostFtdcMdSpi_obj(::CThostFtdcMdSpi * pCTPSpi);

	///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
	void OnFrontConnected();

	///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
	void OnFrontDisconnected(int nReason);

	///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
	void OnHeartBeatWarning(int nTimeLapse);

	///��¼������Ӧ
	void OnRspUserLogin(KingstarAPI::CThostFtdcRspUserLoginField *pRspUserLogin, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�ǳ�������Ӧ
	void OnRspUserLogout(KingstarAPI::CThostFtdcUserLogoutField *pUserLogout, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///����Ӧ��
	void OnRspError(KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///��������Ӧ��
	void OnRspSubMarketData(KingstarAPI::CThostFtdcSpecificInstrumentField *pSpecificInstrument, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///ȡ����������Ӧ��
	void OnRspUnSubMarketData(KingstarAPI::CThostFtdcSpecificInstrumentField *pSpecificInstrument, KingstarAPI::CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�������֪ͨ
	void OnRtnDepthMarketData(KingstarAPI::CThostFtdcDepthMarketDataField *pDepthMarketData);

public:
	// ��������
	~CThostFtdcMdSpi_obj();

private:
	::CThostFtdcMdSpi * m_pCTPSpi;			                 // CTP�ص��ӿ������ָ��
};

#endif 