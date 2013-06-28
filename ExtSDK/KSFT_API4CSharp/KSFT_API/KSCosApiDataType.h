#ifndef __KSCOSAPIDATATYPE_H_INCLUDED_
#define __KSCOSAPIDATATYPE_H_INCLUDED_
/**
* @file KSCosApiDataType.h
* @author kevin.shen
* system��KSTradeAPI
* company��Kingstar
* history��
* 2012/11/12	kevin.shen	 create
*/

/////////////////////////////////////////////////////////////////////////
///TTKSConditionalTypeType///������������
/////////////////////////////////////////////////////////////////////////
///���ڵ���������
#define KSCOS_GreaterEqualTermPrice '0'
///С�ڵ���������
#define KSCOS_LesserThanTermPrice '1'

typedef char TTKSConditionalTypeType;

/////////////////////////////////////////////////////////////////////////
///TTKSConditionalOrderType///��������������
/////////////////////////////////////////////////////////////////////////
///���鴥��
#define KSCOS_TRIGGERTYPE_QUOTATION '0'
///���̴���
#define KSCOS_TRIGGERTYPE_OPEN '1'
///ʱ�䴥��
#define KSCOS_TRIGGERTYPE_TIME '2'
///�����ʱ�䴥��
#define KSCOS_TRIGGERTYPE_QUOTAIONANDTIME '5' 

typedef char TTKSConditionalOrderType;

/////////////////////////////////////////////////////////////////////////
///TTKSConditionalOrderStateAlterType///��ͣ�򼤻������־
/////////////////////////////////////////////////////////////////////////
///��ͣ
#define KSCOS_State_PAUSE '0'
///����
#define KSCOS_State_ACTIVE '1'

typedef char TTKSConditionalOrderStateAlterType;

/////////////////////////////////////////////////////////////////////////
///TTKSConditionalOrderSelectResultType///ѡ����
/////////////////////////////////////////////////////////////////////////
// ����
#define KSCOS_Select_AGAIN '0'
// ����
#define KSCOS_Select_SKIP '1'
// ��ֹ
#define KSCOS_Select_ABORT '2'

typedef char TTKSConditionalOrderSelectResultType;

/////////////////////////////////////////////////////////////////////////
///TTKSOrderPriceTypeType///�����۸���������
/////////////////////////////////////////////////////////////////////////
// ���¼�
#define KSCOS_OrderPrice_LastPrice '0'
// ���
#define KSCOS_OrderPrice_BidPrice '1'
//����
#define KSCOS_OrderPrice_AskPrice '2'

typedef char TTKSOrderPriceTypeType;

/////////////////////////////////////////////////////////////////////////
///TTKSCloseModeType///ƽ�ּ۸�����
/////////////////////////////////////////////////////////////////////////
// �м�
#define KSPL_Close_MarketPrice '0'
// �Ӽ�������
#define KSPL_Close_SalePrice '1'
//�Ӽ����¼�
#define KSPL_Close_LastPrice '2'

typedef char TTKSCloseModeType;

/////////////////////////////////////////////////////////////////////////
///TTKSOffsetType///����ֹ��ֹӯ�۵ķ�ʽ����
/////////////////////////////////////////////////////////////////////////
// ָ��ֵ
#define KSPL_OffsetValue_TermPrice '0'
// ���ֳɽ��۵����ƫ��ֵ
#define KSPL_OffsetValue_TradePrice '1'

typedef char TTKSOffsetValueType;

/////////////////////////////////////////////////////////////////////////
///TTKSSpringTypeType��һ�������۸���������
/////////////////////////////////////////////////////////////////////////
///���¼�
#define KSPL_SPRING_LastPrice '0'
///������
#define KSPL_SPRING_SalePrice '1'

typedef char TTKSSpringTypeType;

/////////////////////////////////////////////////////////////////////////
///TTKSConditionalOrderStatusType///������״̬
/////////////////////////////////////////////////////////////////////////
// ��ͣ
#define KSCOS_OrderStatus_PAUSENOTOUCHED      '0'
// δ����
#define KSCOS_OrderStatus_ACTIVENOTOUCHED    '1'
//ɾ��
#define KSCOS_OrderStatus_Deleted                     '2'
//�Ѵ���δ����
#define KSCOS_OrderStatus_TOUCHEDNOSEND   '3'
// ���ͳ�ʱ
#define KSCOS_OrderStatus_SENDTIMEOUT   '4'
//���ͳɹ�
#define KSCOS_OrderStatus_SENDSUCCESS   '5'
// �ȴ�ѡ��
#define KSCOS_OrderStatus_WAITSELECT   '6'
// ѡ������
#define KSCOS_OrderStatus_SELECTSKIP   '7'
// ѡ����ֹ
#define KSCOS_OrderStatus_SELECTABORT   '8'

typedef char TTKSConditionalOrderStatusType;

/////////////////////////////////////////////////////////////////////////
///TTKSConditionalOrderIDType///�������������
/////////////////////////////////////////////////////////////////////////
typedef int TTKSConditionalOrderIDType;

/////////////////////////////////////////////////////////////////////////
///TTKSProfitAndLossOrderIDType///ֹ��ֹӯ���������
/////////////////////////////////////////////////////////////////////////
typedef int TTKSProfitAndLossOrderIDType;

/////////////////////////////////////////////////////////////////////////
///TTKSConditionalOrderSelectTypeType///������ѡ��ʽ����
/////////////////////////////////////////////////////////////////////////
// ȷ�ϡ�ȡ�� 
#define KSCOS_Select_ConfirmORCancel '1'
// ���ԡ���������ֹ 
#define KS_Select_AgainOrSkipOrAbort '2'

typedef char TTKSConditionalOrderSelectTypeType;

#endif