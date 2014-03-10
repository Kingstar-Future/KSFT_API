#ifndef __KSOPTIONAPIDATATYPE_H_INCLUDED__
#define __KSOPTIONAPIDATATYPE_H_INCLUDED__
/**
* @file KSOptionApiDataType.h
* @author kevin.shen
* system��KSTradeAPI
* company��Kingstar
* history��
* 2013/11/18	kevin.shen	 create
*/

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

namespace KingstarAPI
{

	/////////////////////////////////////////////////////////////////////////
	///TFtdcStrikeTypeType��һ��ִ����������
	/////////////////////////////////////////////////////////////////////////
	///����Գ�
#define THOST_FTDC_STT_Hedge '0'
	///ƥ��ִ��
#define THOST_FTDC_STT_Match '1'

	typedef char TThostFtdcIsHoldType;

	/////////////////////////////////////////////////////////////////////////
	///TKSStockOptionNonTradingOrderStatusType��һ���ǽ���ί�е�״̬����
	/////////////////////////////////////////////////////////////////////////
	///�ȴ�����
#define KS_SOOS_NoSend 'n'
	///�����걨
#define KS_SOOS_Sending 's'
	///�Ѿ�����
#define KS_SOOS_AlreadyIn 'a'
	///�ȴ�����
#define KS_SOOS_WaitDelete 'f'
	///�Ѿ�����
#define KS_SOOS_Deleted 'd'
	///�ȴ�����
#define KS_SOOS_WaitReport '0'
	///������ȯ
#define KS_SOOS_Inspect '1'
	///��ȯ�ɹ�
#define KS_SOOS_InspectSucessed '2'
	///��ȯʧ��
#define KS_SOOS_InspectFailed '3'
	///��������/���ڽ���
#define KS_SOOS_Locking '4'
	///�����ɹ�/�����ɹ�
#define KS_SOOS_Locked '5'
	///���ھܾ� 
#define KS_SOOS_Reject '6'

	typedef char TKSStockOptionNonTradingOrderStatusType;

	/////////////////////////////////////////////////////////////////////////
	///TKSOptionApplyFlagType��һ���ǽ����������ͱ�־
	/////////////////////////////////////////////////////////////////////////

	///ִ��
#define KS_OTP_APF_Exec '1'
	///����
#define KS_OTP_APF_Abandon '2'
	///����
#define KS_OTP_APF_Lock '3'
	///����
#define KS_OTP_APF_UnLock '4'

	typedef char TKSOptionApplyFlagType;
}	// end of namespace KingstarAPI

#endif