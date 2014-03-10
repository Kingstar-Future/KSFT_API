#ifndef __KSOPTIONAPIDATATYPE_H_INCLUDED__
#define __KSOPTIONAPIDATATYPE_H_INCLUDED__
/**
* @file KSOptionApiDataType.h
* @author kevin.shen
* system：KSTradeAPI
* company：Kingstar
* history：
* 2013/11/18	kevin.shen	 create
*/

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

namespace KingstarAPI
{

	/////////////////////////////////////////////////////////////////////////
	///TFtdcStrikeTypeType是一个执行类型类型
	/////////////////////////////////////////////////////////////////////////
	///自身对冲
#define THOST_FTDC_STT_Hedge '0'
	///匹配执行
#define THOST_FTDC_STT_Match '1'

	typedef char TThostFtdcIsHoldType;

	/////////////////////////////////////////////////////////////////////////
	///TKSStockOptionNonTradingOrderStatusType是一个非交易委托单状态类型
	/////////////////////////////////////////////////////////////////////////
	///等待发出
#define KS_SOOS_NoSend 'n'
	///正在申报
#define KS_SOOS_Sending 's'
	///已经报入
#define KS_SOOS_AlreadyIn 'a'
	///等待撤除
#define KS_SOOS_WaitDelete 'f'
	///已经撤销
#define KS_SOOS_Deleted 'd'
	///等待报入
#define KS_SOOS_WaitReport '0'
	///本地验券
#define KS_SOOS_Inspect '1'
	///验券成功
#define KS_SOOS_InspectSucessed '2'
	///验券失败
#define KS_SOOS_InspectFailed '3'
	///正在锁定/正在解锁
#define KS_SOOS_Locking '4'
	///锁定成功/解锁成功
#define KS_SOOS_Locked '5'
	///场内拒绝 
#define KS_SOOS_Reject '6'

	typedef char TKSStockOptionNonTradingOrderStatusType;

	/////////////////////////////////////////////////////////////////////////
	///TKSOptionApplyFlagType是一个非交易申请类型标志
	/////////////////////////////////////////////////////////////////////////

	///执行
#define KS_OTP_APF_Exec '1'
	///放弃
#define KS_OTP_APF_Abandon '2'
	///锁定
#define KS_OTP_APF_Lock '3'
	///解锁
#define KS_OTP_APF_UnLock '4'

	typedef char TKSOptionApplyFlagType;
}	// end of namespace KingstarAPI

#endif