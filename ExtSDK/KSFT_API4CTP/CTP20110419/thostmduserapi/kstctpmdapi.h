/**
* @file kstctpmdapi.h
* ���˴�תCTP����ӿ�
* @author kevin.shen
*/

#ifndef KSTCTPMDAPI_H
#define  KSTCTPMDAPI_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "kstctpmdspi.h"

// Api�ӿ�ʵ����
class CThostFtdcMdApi_obj:public CThostFtdcMdApi
{
public:

	// ���캯��
	CThostFtdcMdApi_obj(KingstarAPI::CThostFtdcMdApi *pKSapi);

	///ɾ���ӿڶ�����
	///@remark ����ʹ�ñ��ӿڶ���ʱ,���øú���ɾ���ӿڶ���
	virtual void Release();

	///��ʼ��
	///@remark ��ʼ�����л���,ֻ�е��ú�,�ӿڲſ�ʼ����
	virtual void Init();

	///�ȴ��ӿ��߳̽�������
	///@return �߳��˳�����
	virtual int Join();

	///��ȡ��ǰ������
	///@retrun ��ȡ���Ľ�����
	///@remark ֻ�е�¼�ɹ���,���ܵõ���ȷ�Ľ�����
	virtual const char *GetTradingDay();

	///ע��ǰ�û������ַ
	///@param pszFrontAddress��ǰ�û������ַ��
	///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:17001���� 
	///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����17001������������˿ںš�
	virtual void RegisterFront(char *pszFrontAddress);

	///ע��ص��ӿ�
	///@param pSpi �����Իص��ӿ����ʵ��
	virtual void RegisterSpi(::CThostFtdcMdSpi *pSpi);

	///�������顣
	///@param ppInstrumentID ��ԼID  
	///@param nCount Ҫ����/�˶�����ĺ�Լ����
	///@remark 
	virtual int SubscribeMarketData(char *ppInstrumentID[], int nCount);

	///�˶����顣
	///@param ppInstrumentID ��ԼID  
	///@param nCount Ҫ����/�˶�����ĺ�Լ����
	///@remark 
	virtual int UnSubscribeMarketData(char *ppInstrumentID[], int nCount);

	///�û���¼����
	virtual int ReqUserLogin(::CThostFtdcReqUserLoginField *pReqUserLoginField, int nRequestID);

	///�ǳ�����
	virtual int ReqUserLogout(::CThostFtdcUserLogoutField *pUserLogout, int nRequestID);

protected:
	// ��������
	~CThostFtdcMdApi_obj();

private:
	KingstarAPI::CThostFtdcMdApi *m_pKSapi;     // ���˴�ӿ�apiָ��
	CThostFtdcMdSpi_obj *m_pKSSpi ;				 // ���˴�ӿ�spiָ��
};

#endif 
