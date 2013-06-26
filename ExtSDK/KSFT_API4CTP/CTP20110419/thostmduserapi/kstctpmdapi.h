/**
* @file kstctpmdapi.h
* 金仕达转CTP请求接口
* @author kevin.shen
*/

#ifndef KSTCTPMDAPI_H
#define  KSTCTPMDAPI_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "kstctpmdspi.h"

// Api接口实体类
class CThostFtdcMdApi_obj:public CThostFtdcMdApi
{
public:

	// 构造函数
	CThostFtdcMdApi_obj(KingstarAPI::CThostFtdcMdApi *pKSapi);

	///删除接口对象本身
	///@remark 不再使用本接口对象时,调用该函数删除接口对象
	virtual void Release();

	///初始化
	///@remark 初始化运行环境,只有调用后,接口才开始工作
	virtual void Init();

	///等待接口线程结束运行
	///@return 线程退出代码
	virtual int Join();

	///获取当前交易日
	///@retrun 获取到的交易日
	///@remark 只有登录成功后,才能得到正确的交易日
	virtual const char *GetTradingDay();

	///注册前置机网络地址
	///@param pszFrontAddress：前置机网络地址。
	///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:17001”。 
	///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”17001”代表服务器端口号。
	virtual void RegisterFront(char *pszFrontAddress);

	///注册回调接口
	///@param pSpi 派生自回调接口类的实例
	virtual void RegisterSpi(::CThostFtdcMdSpi *pSpi);

	///订阅行情。
	///@param ppInstrumentID 合约ID  
	///@param nCount 要订阅/退订行情的合约个数
	///@remark 
	virtual int SubscribeMarketData(char *ppInstrumentID[], int nCount);

	///退订行情。
	///@param ppInstrumentID 合约ID  
	///@param nCount 要订阅/退订行情的合约个数
	///@remark 
	virtual int UnSubscribeMarketData(char *ppInstrumentID[], int nCount);

	///用户登录请求
	virtual int ReqUserLogin(::CThostFtdcReqUserLoginField *pReqUserLoginField, int nRequestID);

	///登出请求
	virtual int ReqUserLogout(::CThostFtdcUserLogoutField *pUserLogout, int nRequestID);

protected:
	// 析构函数
	~CThostFtdcMdApi_obj();

private:
	KingstarAPI::CThostFtdcMdApi *m_pKSapi;     // 金仕达接口api指针
	CThostFtdcMdSpi_obj *m_pKSSpi ;				 // 金仕达接口spi指针
};

#endif 
