/*
A wrapper for KSFT_API
author: ksftapi@gmail.com(authorized by Lvsoft@gmail.com)
date: 2013-07-10

This file is part of KSFT_API4Py

KSFT_API4Py is free software; you can redistribute it and/or modify it
under the terms of the GUL Lesser General Public License as published
by the Free Software Foundation; either version 2.1 of the License, or
(at your option) any later version.

KSFT_API4Py is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY of FITNESS FOR A PARTICULAR PURPOSE. See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along the KSFT_API4Py; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
02110-1301 USA
*/

//This file is auto generated! Please don't edit directly.

#include "stdafx.h"
#include "KSstruct.h"

static PyObject * mod=NULL;
PyObject * register_struct(PyObject * self, PyObject * args){
  mod = PyTuple_GET_ITEM(args,0);
  Py_INCREF(Py_None);
  return Py_None;
}

//��ѯ���н�����ϸ������Ӧ
PyObject * new_CThostFtdcTransferQryDetailRspField(KingstarAPI::CThostFtdcTransferQryDetailRspField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferQryDetailRspField", (char*)"sssssiissdcsss",
p->BankAccount, p->FutureAccount, p->TradeDate, p->TradeCode, p->CurrencyCode, p->BankSerial, p->FutureSerial, p->FutureID, p->CertCode, p->TxAmount, p->Flag, p->TradeTime, p->BankBrchID, p->BankID);
}
KingstarAPI::CThostFtdcTransferQryDetailRspField * from_CThostFtdcTransferQryDetailRspField(PyObject * p){
  KingstarAPI::CThostFtdcTransferQryDetailRspField *t = (KingstarAPI::CThostFtdcTransferQryDetailRspField *)calloc(1, sizeof(KingstarAPI::CThostFtdcTransferQryDetailRspField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcTransferQryDetailRspField));
  //�����˺�
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //�ʽ��ʺ�
  strcpy(t->FutureAccount, PyString_AsString(PyObject_GetAttrString(p, "FutureAccount")));
  //��������
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //���״���
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //���Ҵ���
  strcpy(t->CurrencyCode, PyString_AsString(PyObject_GetAttrString(p, "CurrencyCode")));
  //������ˮ��
  t->BankSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "BankSerial"));
  //�ڻ���ˮ��
  t->FutureSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
  //�ڻ���˾����
  strcpy(t->FutureID, PyString_AsString(PyObject_GetAttrString(p, "FutureID")));
  //֤������
  strcpy(t->CertCode, PyString_AsString(PyObject_GetAttrString(p, "CertCode")));
  //�������
  t->TxAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TxAmount"));
  //��Ч��־
  //enum����
  //THOST_FTDC_TVF_Valid -> '1', ��Ч
  //THOST_FTDC_TVF_Reverse -> '2', ����
  //THOST_FTDC_TVF_Invalid -> '0', ��Ч��ʧ��
  t->Flag =   PyString_AsString(PyObject_GetAttrString(p, "Flag"))[0];
  //����ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //���з����Ĵ���
  strcpy(t->BankBrchID, PyString_AsString(PyObject_GetAttrString(p, "BankBrchID")));
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));

  return t;
};

//Ͷ�����˻�
PyObject * new_CThostFtdcInvestorAccountField(KingstarAPI::CThostFtdcInvestorAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInvestorAccountField", (char*)"sss",
p->InvestorID, p->BrokerID, p->AccountID);
}
KingstarAPI::CThostFtdcInvestorAccountField * from_CThostFtdcInvestorAccountField(PyObject * p){
  KingstarAPI::CThostFtdcInvestorAccountField *t = (KingstarAPI::CThostFtdcInvestorAccountField *)calloc(1, sizeof(KingstarAPI::CThostFtdcInvestorAccountField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcInvestorAccountField));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //Ͷ�����ʺ�
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));

  return t;
};

//�ͻ�֪ͨ
PyObject * new_CThostFtdcNoticeField(KingstarAPI::CThostFtdcNoticeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcNoticeField", (char*)"sss",
p->Content, p->SequenceLabel, p->BrokerID);
}
KingstarAPI::CThostFtdcNoticeField * from_CThostFtdcNoticeField(PyObject * p){
  KingstarAPI::CThostFtdcNoticeField *t = (KingstarAPI::CThostFtdcNoticeField *)calloc(1, sizeof(KingstarAPI::CThostFtdcNoticeField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcNoticeField));
  //��Ϣ����
  strcpy(t->Content, PyString_AsString(PyObject_GetAttrString(p, "Content")));
  //���͹�˾֪ͨ�������к�
  strcpy(t->SequenceLabel, PyString_AsString(PyObject_GetAttrString(p, "SequenceLabel")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//�����ѯͶ������������ģ��
PyObject * new_CThostFtdcQryCommRateModelField(KingstarAPI::CThostFtdcQryCommRateModelField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryCommRateModelField", (char*)"ss",
p->CommModelID, p->BrokerID);
}
KingstarAPI::CThostFtdcQryCommRateModelField * from_CThostFtdcQryCommRateModelField(PyObject * p){
  KingstarAPI::CThostFtdcQryCommRateModelField *t = (KingstarAPI::CThostFtdcQryCommRateModelField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryCommRateModelField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryCommRateModelField));
  //��������ģ�����
  strcpy(t->CommModelID, PyString_AsString(PyObject_GetAttrString(p, "CommModelID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//���͹�˾ͬ��
PyObject * new_CThostFtdcBrokerSyncField(KingstarAPI::CThostFtdcBrokerSyncField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerSyncField", (char*)"s",
p->BrokerID);
}
KingstarAPI::CThostFtdcBrokerSyncField * from_CThostFtdcBrokerSyncField(PyObject * p){
  KingstarAPI::CThostFtdcBrokerSyncField *t = (KingstarAPI::CThostFtdcBrokerSyncField *)calloc(1, sizeof(KingstarAPI::CThostFtdcBrokerSyncField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcBrokerSyncField));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//��ѯͶ���ֲ߳�
PyObject * new_CThostFtdcQryInvestorPositionField(KingstarAPI::CThostFtdcQryInvestorPositionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInvestorPositionField", (char*)"sss",
p->InstrumentID, p->InvestorID, p->BrokerID);
}
KingstarAPI::CThostFtdcQryInvestorPositionField * from_CThostFtdcQryInvestorPositionField(PyObject * p){
  KingstarAPI::CThostFtdcQryInvestorPositionField *t = (KingstarAPI::CThostFtdcQryInvestorPositionField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryInvestorPositionField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryInvestorPositionField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//�ͻ�����֤��Ӧ
PyObject * new_CThostFtdcRspAuthenticateField(KingstarAPI::CThostFtdcRspAuthenticateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspAuthenticateField", (char*)"sss",
p->UserID, p->BrokerID, p->UserProductInfo);
}
KingstarAPI::CThostFtdcRspAuthenticateField * from_CThostFtdcRspAuthenticateField(PyObject * p){
  KingstarAPI::CThostFtdcRspAuthenticateField *t = (KingstarAPI::CThostFtdcRspAuthenticateField *)calloc(1, sizeof(KingstarAPI::CThostFtdcRspAuthenticateField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcRspAuthenticateField));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //�û��˲�Ʒ��Ϣ
  strcpy(t->UserProductInfo, PyString_AsString(PyObject_GetAttrString(p, "UserProductInfo")));

  return t;
};

//��֤�ڻ��ʽ�����Ϳͻ���Ϣ
PyObject * new_CThostFtdcDepositResultInformField(KingstarAPI::CThostFtdcDepositResultInformField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcDepositResultInformField", (char*)"ssssdsi",
p->ReturnCode, p->DepositSeqNo, p->InvestorID, p->BrokerID, p->Deposit, p->DescrInfoForReturnCode, p->RequestID);
}
KingstarAPI::CThostFtdcDepositResultInformField * from_CThostFtdcDepositResultInformField(PyObject * p){
  KingstarAPI::CThostFtdcDepositResultInformField *t = (KingstarAPI::CThostFtdcDepositResultInformField *)calloc(1, sizeof(KingstarAPI::CThostFtdcDepositResultInformField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcDepositResultInformField));
  //���ش���
  strcpy(t->ReturnCode, PyString_AsString(PyObject_GetAttrString(p, "ReturnCode")));
  //�������ˮ�ţ�����ˮ��Ϊ���ڱ��̷��ص���ˮ��
  strcpy(t->DepositSeqNo, PyString_AsString(PyObject_GetAttrString(p, "DepositSeqNo")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //�����
  t->Deposit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Deposit"));
  //����������
  strcpy(t->DescrInfoForReturnCode, PyString_AsString(PyObject_GetAttrString(p, "DescrInfoForReturnCode")));
  //������
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));

  return t;
};

//Ͷ������
PyObject * new_CThostFtdcInvestorGroupField(KingstarAPI::CThostFtdcInvestorGroupField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInvestorGroupField", (char*)"sss",
p->InvestorGroupID, p->BrokerID, p->InvestorGroupName);
}
KingstarAPI::CThostFtdcInvestorGroupField * from_CThostFtdcInvestorGroupField(PyObject * p){
  KingstarAPI::CThostFtdcInvestorGroupField *t = (KingstarAPI::CThostFtdcInvestorGroupField *)calloc(1, sizeof(KingstarAPI::CThostFtdcInvestorGroupField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcInvestorGroupField));
  //Ͷ���߷������
  strcpy(t->InvestorGroupID, PyString_AsString(PyObject_GetAttrString(p, "InvestorGroupID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //Ͷ���߷�������
  strcpy(t->InvestorGroupName, PyString_AsString(PyObject_GetAttrString(p, "InvestorGroupName")));

  return t;
};

//��Ա�ʽ��ۿ�
PyObject * new_CThostFtdcDiscountField(KingstarAPI::CThostFtdcDiscountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcDiscountField", (char*)"sscd",
p->InvestorID, p->BrokerID, p->InvestorRange, p->Discount);
}
KingstarAPI::CThostFtdcDiscountField * from_CThostFtdcDiscountField(PyObject * p){
  KingstarAPI::CThostFtdcDiscountField *t = (KingstarAPI::CThostFtdcDiscountField *)calloc(1, sizeof(KingstarAPI::CThostFtdcDiscountField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcDiscountField));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //Ͷ���߷�Χ
  //enum����
  //THOST_FTDC_IR_All -> '1', ����
  //THOST_FTDC_IR_Group -> '2', Ͷ������
  //THOST_FTDC_IR_Single -> '3', ��һͶ����
  t->InvestorRange =   PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
  //�ʽ��ۿ۱���
  t->Discount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Discount"));

  return t;
};

//���͹�˾�û�
PyObject * new_CThostFtdcBrokerUserField(KingstarAPI::CThostFtdcBrokerUserField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerUserField", (char*)"sscsii",
p->UserName, p->UserID, p->UserType, p->BrokerID, p->IsUsingOTP, p->IsActive);
}
KingstarAPI::CThostFtdcBrokerUserField * from_CThostFtdcBrokerUserField(PyObject * p){
  KingstarAPI::CThostFtdcBrokerUserField *t = (KingstarAPI::CThostFtdcBrokerUserField *)calloc(1, sizeof(KingstarAPI::CThostFtdcBrokerUserField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcBrokerUserField));
  //�û�����
  strcpy(t->UserName, PyString_AsString(PyObject_GetAttrString(p, "UserName")));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //�û�����
  //enum����
  //THOST_FTDC_UT_Investor -> '0', Ͷ����
  //THOST_FTDC_UT_SuperUser -> '2', ����Ա
  //THOST_FTDC_UT_Operator -> '1', ����Ա
  t->UserType =   PyString_AsString(PyObject_GetAttrString(p, "UserType"))[0];
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //�Ƿ�ʹ������
  t->IsUsingOTP =   PyInt_AsLong(PyObject_GetAttrString(p, "IsUsingOTP"));
  //�Ƿ��Ծ
  t->IsActive =   PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));

  return t;
};

//��ѯ����
PyObject * new_CThostFtdcQryOrderField(KingstarAPI::CThostFtdcQryOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryOrderField", (char*)"sssssss",
p->InstrumentID, p->ExchangeID, p->InsertTimeStart, p->InvestorID, p->BrokerID, p->OrderSysID, p->InsertTimeEnd);
}
KingstarAPI::CThostFtdcQryOrderField * from_CThostFtdcQryOrderField(PyObject * p){
  KingstarAPI::CThostFtdcQryOrderField *t = (KingstarAPI::CThostFtdcQryOrderField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryOrderField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryOrderField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //��ʼʱ��
  strcpy(t->InsertTimeStart, PyString_AsString(PyObject_GetAttrString(p, "InsertTimeStart")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //�������
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //����ʱ��
  strcpy(t->InsertTimeEnd, PyString_AsString(PyObject_GetAttrString(p, "InsertTimeEnd")));

  return t;
};

//ɾ��������
PyObject * new_CTKSConditionalOrderRemove(CTKSConditionalOrderRemove * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CTKSConditionalOrderRemove", (char*)"ssi",
p->InvestorID, p->BrokerID, p->ConditionalOrderID);
}
CTKSConditionalOrderRemove * from_CTKSConditionalOrderRemove(PyObject * p){
CTKSConditionalOrderRemove *t = (CTKSConditionalOrderRemove *)calloc(1, sizeof(CTKSConditionalOrderRemove));
  memset(t,0,sizeof(CTKSConditionalOrderRemove));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //Ӫҵ������
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //���������
  t->ConditionalOrderID =   PyInt_AsLong(PyObject_GetAttrString(p, "ConditionalOrderID"));

  return t;
};

//������
PyObject * new_CThostFtdcExchangeField(KingstarAPI::CThostFtdcExchangeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcExchangeField", (char*)"css",
p->ExchangeProperty, p->ExchangeID, p->ExchangeName);
}
KingstarAPI::CThostFtdcExchangeField * from_CThostFtdcExchangeField(PyObject * p){
  KingstarAPI::CThostFtdcExchangeField *t = (KingstarAPI::CThostFtdcExchangeField *)calloc(1, sizeof(KingstarAPI::CThostFtdcExchangeField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcExchangeField));
  //����������
  //enum����
  //THOST_FTDC_EXP_GenOrderByTrade -> '1', ���ݳɽ����ɱ���
  //THOST_FTDC_EXP_Normal -> '0', ����
  t->ExchangeProperty =   PyString_AsString(PyObject_GetAttrString(p, "ExchangeProperty"))[0];
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //����������
  strcpy(t->ExchangeName, PyString_AsString(PyObject_GetAttrString(p, "ExchangeName")));

  return t;
};

//��ѯ�˻���Ϣ����
PyObject * new_CThostFtdcReqQueryAccountField(KingstarAPI::CThostFtdcReqQueryAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqQueryAccountField", (char*)"sssscississsisscicssssssscissccicscs",
p->BrokerBranchID, p->UserID, p->BankPassWord, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->InstallID, p->CustomerName, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->Password, p->BankPwdFlag, p->RequestID, p->CustType, p->IdentifiedCardNo, p->BankSerial, p->OperNo, p->TradingDay, p->BankSecuAcc, p->BrokerID, p->DeviceID, p->IdCardType, p->PlateSerial, p->TradeDate, p->CurrencyID, p->BankAccType, p->LastFragment, p->FutureSerial, p->BankSecuAccType, p->BrokerIDByBank, p->SecuPwdFlag, p->Digest);
}
KingstarAPI::CThostFtdcReqQueryAccountField * from_CThostFtdcReqQueryAccountField(PyObject * p){
  KingstarAPI::CThostFtdcReqQueryAccountField *t = (KingstarAPI::CThostFtdcReqQueryAccountField *)calloc(1, sizeof(KingstarAPI::CThostFtdcReqQueryAccountField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcReqQueryAccountField));
  //���̷�֧��������
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //�û���ʶ
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //��������
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //����ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //��֤�ͻ�֤�������־
  //enum����
  //THOST_FTDC_YNI_No -> '1', ��
  //THOST_FTDC_YNI_Yes -> '0', ��
  t->VerifyCertNoFlag =   PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
  //����ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //Ͷ�����ʺ�
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //�����ʺ�
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //�ͻ�����
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //ҵ������
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //���з�֧��������
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //�Ự��
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //�ڻ�����
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //���������־
  //enum����
  //THOST_FTDC_BPWDF_BlankCheck -> '1', ���ĺ˶�
  //THOST_FTDC_BPWDF_NoCheck -> '0', ���˶�
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', ���ĺ˶�
  t->BankPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
  //������
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //�ͻ�����
  //enum����
  //THOST_FTDC_CUSTT_Institution -> '1', ������
  //THOST_FTDC_CUSTT_Person -> '0', ��Ȼ��
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //֤������
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //������ˮ��
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //���׹�Ա
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //����ϵͳ����
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //�ڻ���λ�ʺ�
  strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
  //���̴���
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //������־
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //֤������
  //enum����
  //THOST_FTDC_ICT_LicenseNo -> '9', Ӫҵִ�պ�
  //THOST_FTDC_ICT_TaxNo -> 'A', ˰��ǼǺ�
  //THOST_FTDC_ICT_OfficerIDCard -> '2', ����֤
  //THOST_FTDC_ICT_IDCard -> '1', ���֤
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', ̨��֤
  //THOST_FTDC_ICT_OtherCard -> 'x', ����֤��
  //THOST_FTDC_ICT_PoliceIDCard -> '3', ����֤
  //THOST_FTDC_ICT_Passport -> '6', ����
  //THOST_FTDC_ICT_EID -> '0', ��֯��������
  //THOST_FTDC_ICT_HomeComingCard -> '8', ����֤
  //THOST_FTDC_ICT_HouseholdRegister -> '5', ���ڲ�
  //THOST_FTDC_ICT_SoldierIDCard -> '4', ʿ��֤
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //����ƽ̨��Ϣ��ˮ��
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //��������
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //���ִ���
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //�����ʺ�����
  //enum����
  //THOST_FTDC_BAT_SavingCard -> '2', ���
  //THOST_FTDC_BAT_CreditCard -> '3', ���ÿ�
  //THOST_FTDC_BAT_BankBook -> '1', ���д���
  t->BankAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
  //����Ƭ��־
  //enum����
  //THOST_FTDC_LF_No -> '1', ��������Ƭ
  //THOST_FTDC_LF_Yes -> '0', ������Ƭ
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //�ڻ���˾��ˮ��
  t->FutureSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
  //�ڻ���λ�ʺ�����
  //enum����
  //THOST_FTDC_BAT_SavingCard -> '2', ���
  //THOST_FTDC_BAT_CreditCard -> '3', ���ÿ�
  //THOST_FTDC_BAT_BankBook -> '1', ���д���
  t->BankSecuAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
  //�ڻ���˾���б���
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //�ڻ��ʽ�����˶Ա�־
  //enum����
  //THOST_FTDC_BPWDF_BlankCheck -> '1', ���ĺ˶�
  //THOST_FTDC_BPWDF_NoCheck -> '0', ���˶�
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', ���ĺ˶�
  t->SecuPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
  //ժҪ
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

  return t;
};

//����������Ϣ
PyObject * new_CThostFtdcCancelAccountField(KingstarAPI::CThostFtdcCancelAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcCancelAccountField", (char*)"csssscisssicssssisiciccssssssccsssssccscsssss",
p->MoneyAccountStatus, p->BrokerBranchID, p->BankPassWord, p->Telephone, p->IdentifiedCardNo, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->Fax, p->InstallID, p->SecuPwdFlag, p->CustomerName, p->CountryCode, p->TradeCode, p->BankBranchID, p->SessionID, p->Address, p->PlateSerial, p->BankPwdFlag, p->ErrorID, p->CustType, p->Gender, p->BankID, p->BankSerial, p->OperNo, p->TradingDay, p->BankSecuAcc, p->BrokerID, p->CashExchangeCode, p->IdCardType, p->Password, p->MobilePhone, p->TradeDate, p->CurrencyID, p->ErrorMsg, p->BankAccType, p->LastFragment, p->ZipCode, p->BankSecuAccType, p->BrokerIDByBank, p->TradeTime, p->EMail, p->Digest, p->DeviceID);
}
KingstarAPI::CThostFtdcCancelAccountField * from_CThostFtdcCancelAccountField(PyObject * p){
  KingstarAPI::CThostFtdcCancelAccountField *t = (KingstarAPI::CThostFtdcCancelAccountField *)calloc(1, sizeof(KingstarAPI::CThostFtdcCancelAccountField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcCancelAccountField));
  //�ʽ��˻�״̬
  //enum����
  //THOST_FTDC_MAS_Cancel -> '1', ����
  //THOST_FTDC_MAS_Normal -> '0', ����
  t->MoneyAccountStatus =   PyString_AsString(PyObject_GetAttrString(p, "MoneyAccountStatus"))[0];
  //���̷�֧��������
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //��������
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //�绰����
  strcpy(t->Telephone, PyString_AsString(PyObject_GetAttrString(p, "Telephone")));
  //֤������
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //��֤�ͻ�֤�������־
  //enum����
  //THOST_FTDC_YNI_No -> '1', ��
  //THOST_FTDC_YNI_Yes -> '0', ��
  t->VerifyCertNoFlag =   PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
  //����ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //Ͷ�����ʺ�
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //�����ʺ�
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //����
  strcpy(t->Fax, PyString_AsString(PyObject_GetAttrString(p, "Fax")));
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //�ڻ��ʽ�����˶Ա�־
  //enum����
  //THOST_FTDC_BPWDF_BlankCheck -> '1', ���ĺ˶�
  //THOST_FTDC_BPWDF_NoCheck -> '0', ���˶�
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', ���ĺ˶�
  t->SecuPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
  //�ͻ�����
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //���Ҵ���
  strcpy(t->CountryCode, PyString_AsString(PyObject_GetAttrString(p, "CountryCode")));
  //ҵ������
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //���з�֧��������
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //�Ự��
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //��ַ
  strcpy(t->Address, PyString_AsString(PyObject_GetAttrString(p, "Address")));
  //����ƽ̨��Ϣ��ˮ��
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //���������־
  //enum����
  //THOST_FTDC_BPWDF_BlankCheck -> '1', ���ĺ˶�
  //THOST_FTDC_BPWDF_NoCheck -> '0', ���˶�
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', ���ĺ˶�
  t->BankPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
  //�������
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //�ͻ�����
  //enum����
  //THOST_FTDC_CUSTT_Institution -> '1', ������
  //THOST_FTDC_CUSTT_Person -> '0', ��Ȼ��
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //�Ա�
  //enum����
  //THOST_FTDC_GD_Unknown -> '0', δ֪״̬
  //THOST_FTDC_GD_Female -> '2', Ů
  //THOST_FTDC_GD_Male -> '1', ��
  t->Gender =   PyString_AsString(PyObject_GetAttrString(p, "Gender"))[0];
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //������ˮ��
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //���׹�Ա
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //����ϵͳ����
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //�ڻ���λ�ʺ�
  strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
  //���̴���
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //�㳮��־
  //enum����
  //THOST_FTDC_CEC_Exchange -> '1', ��
  //THOST_FTDC_CEC_Cash -> '2', ��
  t->CashExchangeCode =   PyString_AsString(PyObject_GetAttrString(p, "CashExchangeCode"))[0];
  //֤������
  //enum����
  //THOST_FTDC_ICT_LicenseNo -> '9', Ӫҵִ�պ�
  //THOST_FTDC_ICT_TaxNo -> 'A', ˰��ǼǺ�
  //THOST_FTDC_ICT_OfficerIDCard -> '2', ����֤
  //THOST_FTDC_ICT_IDCard -> '1', ���֤
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', ̨��֤
  //THOST_FTDC_ICT_OtherCard -> 'x', ����֤��
  //THOST_FTDC_ICT_PoliceIDCard -> '3', ����֤
  //THOST_FTDC_ICT_Passport -> '6', ����
  //THOST_FTDC_ICT_EID -> '0', ��֯��������
  //THOST_FTDC_ICT_HomeComingCard -> '8', ����֤
  //THOST_FTDC_ICT_HouseholdRegister -> '5', ���ڲ�
  //THOST_FTDC_ICT_SoldierIDCard -> '4', ʿ��֤
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //�ڻ�����
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //�ֻ�
  strcpy(t->MobilePhone, PyString_AsString(PyObject_GetAttrString(p, "MobilePhone")));
  //��������
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //���ִ���
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //������Ϣ
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //�����ʺ�����
  //enum����
  //THOST_FTDC_BAT_SavingCard -> '2', ���
  //THOST_FTDC_BAT_CreditCard -> '3', ���ÿ�
  //THOST_FTDC_BAT_BankBook -> '1', ���д���
  t->BankAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
  //����Ƭ��־
  //enum����
  //THOST_FTDC_LF_No -> '1', ��������Ƭ
  //THOST_FTDC_LF_Yes -> '0', ������Ƭ
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //�ʱ�
  strcpy(t->ZipCode, PyString_AsString(PyObject_GetAttrString(p, "ZipCode")));
  //�ڻ���λ�ʺ�����
  //enum����
  //THOST_FTDC_BAT_SavingCard -> '2', ���
  //THOST_FTDC_BAT_CreditCard -> '3', ���ÿ�
  //THOST_FTDC_BAT_BankBook -> '1', ���д���
  t->BankSecuAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
  //�ڻ���˾���б���
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //����ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //�����ʼ�
  strcpy(t->EMail, PyString_AsString(PyObject_GetAttrString(p, "EMail")));
  //ժҪ
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
  //������־
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));

  return t;
};

//����ת�ʱ���ͷ
PyObject * new_CThostFtdcTransferHeaderField(KingstarAPI::CThostFtdcTransferHeaderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferHeaderField", (char*)"ssssisssssssi",
p->TradeDate, p->TradeCode, p->FutureID, p->OperNo, p->SessionID, p->Version, p->TradeTime, p->DeviceID, p->BankBrchID, p->BankID, p->RecordNum, p->TradeSerial, p->RequestID);
}
KingstarAPI::CThostFtdcTransferHeaderField * from_CThostFtdcTransferHeaderField(PyObject * p){
  KingstarAPI::CThostFtdcTransferHeaderField *t = (KingstarAPI::CThostFtdcTransferHeaderField *)calloc(1, sizeof(KingstarAPI::CThostFtdcTransferHeaderField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcTransferHeaderField));
  //�������ڣ������ʽ��yyyymmdd
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //���״��룬����
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //�ڻ���˾���룬����
  strcpy(t->FutureID, PyString_AsString(PyObject_GetAttrString(p, "FutureID")));
  //����Ա��N/A
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //�Ự��ţ�N/A
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //�汾�ţ�������1.0
  strcpy(t->Version, PyString_AsString(PyObject_GetAttrString(p, "Version")));
  //����ʱ�䣬�����ʽ��hhmmss
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //�����豸���ͣ�N/A
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //���з����Ĵ��룬���ݲ�ѯ���еõ�������
  strcpy(t->BankBrchID, PyString_AsString(PyObject_GetAttrString(p, "BankBrchID")));
  //���д��룬���ݲ�ѯ���еõ�������
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //��¼����N/A
  strcpy(t->RecordNum, PyString_AsString(PyObject_GetAttrString(p, "RecordNum")));
  //������ˮ�ţ�N/A
  strcpy(t->TradeSerial, PyString_AsString(PyObject_GetAttrString(p, "TradeSerial")));
  //�����ţ�N/A
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));

  return t;
};

//ǰ��״̬
PyObject * new_CThostFtdcFrontStatusField(KingstarAPI::CThostFtdcFrontStatusField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcFrontStatusField", (char*)"isis",
p->FrontID, p->LastReportDate, p->IsActive, p->LastReportTime);
}
KingstarAPI::CThostFtdcFrontStatusField * from_CThostFtdcFrontStatusField(PyObject * p){
  KingstarAPI::CThostFtdcFrontStatusField *t = (KingstarAPI::CThostFtdcFrontStatusField *)calloc(1, sizeof(KingstarAPI::CThostFtdcFrontStatusField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcFrontStatusField));
  //ǰ�ñ��
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //�ϴα�������
  strcpy(t->LastReportDate, PyString_AsString(PyObject_GetAttrString(p, "LastReportDate")));
  //�Ƿ��Ծ
  t->IsActive =   PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));
  //�ϴα���ʱ��
  strcpy(t->LastReportTime, PyString_AsString(PyObject_GetAttrString(p, "LastReportTime")));

  return t;
};

//Ͷ���ֲ߳�
PyObject * new_CThostFtdcInvestorPositionField(KingstarAPI::CThostFtdcInvestorPositionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInvestorPositionField", (char*)"ddcdddiddidcidiidscddiiiisdsdddididddsdd",
p->ShortFrozenAmount, p->FrozenMargin, p->HedgeFlag, p->PositionProfit, p->Commission, p->MarginRateByVolume, p->CombPosition, p->CashIn, p->PreSettlementPrice, p->CombLongFrozen, p->CloseAmount, p->PosiDirection, p->YdPosition, p->MarginRateByMoney, p->OpenVolume, p->CloseVolume, p->ExchangeMargin, p->InstrumentID, p->PositionDate, p->CloseProfitByTrade, p->PreMargin, p->SettlementID, p->ShortFrozen, p->LongFrozen, p->TodayPosition, p->TradingDay, p->PositionCost, p->BrokerID, p->FrozenCash, p->OpenAmount, p->OpenCost, p->Position, p->FrozenCommission, p->CombShortFrozen, p->CloseProfitByDate, p->SettlementPrice, p->LongFrozenAmount, p->InvestorID, p->CloseProfit, p->UseMargin);
}
KingstarAPI::CThostFtdcInvestorPositionField * from_CThostFtdcInvestorPositionField(PyObject * p){
  KingstarAPI::CThostFtdcInvestorPositionField *t = (KingstarAPI::CThostFtdcInvestorPositionField *)calloc(1, sizeof(KingstarAPI::CThostFtdcInvestorPositionField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcInvestorPositionField));
  //���ֶ�����
  t->ShortFrozenAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortFrozenAmount"));
  //����ı�֤��
  t->FrozenMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenMargin"));
  //Ͷ���ױ���־
  //enum����
  //THOST_FTDC_HF_Speculation -> '1', Ͷ��
  //THOST_FTDC_HF_Arbitrage -> '2', ����
  //THOST_FTDC_HF_Hedge -> '3', �ױ�
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //�ֲ�ӯ��
  t->PositionProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfit"));
  //������
  t->Commission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Commission"));
  //��֤����(������)
  t->MarginRateByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByVolume"));
  //��ϳɽ��γɵĳֲ�
  t->CombPosition =   PyInt_AsLong(PyObject_GetAttrString(p, "CombPosition"));
  //�ʽ���
  t->CashIn =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CashIn"));
  //�ϴν����
  t->PreSettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreSettlementPrice"));
  //��϶�ͷ����
  t->CombLongFrozen =   PyInt_AsLong(PyObject_GetAttrString(p, "CombLongFrozen"));
  //ƽ�ֽ��
  t->CloseAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseAmount"));
  //�ֲֶ�շ���
  //enum����
  //THOST_FTDC_PD_Net -> '1', ��
  //THOST_FTDC_PD_Short -> '3', ��ͷ
  //THOST_FTDC_PD_Long -> '2', ��ͷ
  t->PosiDirection =   PyString_AsString(PyObject_GetAttrString(p, "PosiDirection"))[0];
  //���ճֲ�
  t->YdPosition =   PyInt_AsLong(PyObject_GetAttrString(p, "YdPosition"));
  //��֤����
  t->MarginRateByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByMoney"));
  //������
  t->OpenVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "OpenVolume"));
  //ƽ����
  t->CloseVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "CloseVolume"));
  //��������֤��
  t->ExchangeMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeMargin"));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //�ֲ�����
  //enum����
  //THOST_FTDC_PSD_Today -> '1', ���ճֲ�
  //THOST_FTDC_PSD_History -> '2', ��ʷ�ֲ�
  t->PositionDate =   PyString_AsString(PyObject_GetAttrString(p, "PositionDate"))[0];
  //��ʶԳ�ƽ��ӯ��
  t->CloseProfitByTrade =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfitByTrade"));
  //�ϴ�ռ�õı�֤��
  t->PreMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreMargin"));
  //������
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //��ͷ����
  t->ShortFrozen =   PyInt_AsLong(PyObject_GetAttrString(p, "ShortFrozen"));
  //��ͷ����
  t->LongFrozen =   PyInt_AsLong(PyObject_GetAttrString(p, "LongFrozen"));
  //���ճֲ�
  t->TodayPosition =   PyInt_AsLong(PyObject_GetAttrString(p, "TodayPosition"));
  //������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //�ֲֳɱ�
  t->PositionCost =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionCost"));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //������ʽ�
  t->FrozenCash =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCash"));
  //���ֽ��
  t->OpenAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenAmount"));
  //���ֳɱ�
  t->OpenCost =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenCost"));
  //���ճֲ�
  t->Position =   PyInt_AsLong(PyObject_GetAttrString(p, "Position"));
  //�����������
  t->FrozenCommission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCommission"));
  //��Ͽ�ͷ����
  t->CombShortFrozen =   PyInt_AsLong(PyObject_GetAttrString(p, "CombShortFrozen"));
  //���ն���ƽ��ӯ��
  t->CloseProfitByDate =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfitByDate"));
  //���ν����
  t->SettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SettlementPrice"));
  //���ֶ�����
  t->LongFrozenAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongFrozenAmount"));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //ƽ��ӯ��
  t->CloseProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfit"));
  //ռ�õı�֤��
  t->UseMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "UseMargin"));

  return t;
};

//��ѯ������״̬
PyObject * new_CThostFtdcQryExchangeSequenceField(KingstarAPI::CThostFtdcQryExchangeSequenceField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryExchangeSequenceField", (char*)"s",
p->ExchangeID);
}
KingstarAPI::CThostFtdcQryExchangeSequenceField * from_CThostFtdcQryExchangeSequenceField(PyObject * p){
  KingstarAPI::CThostFtdcQryExchangeSequenceField *t = (KingstarAPI::CThostFtdcQryExchangeSequenceField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryExchangeSequenceField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryExchangeSequenceField));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));

  return t;
};

//��ѯ��ϵ��
PyObject * new_CThostFtdcQryLinkManField(KingstarAPI::CThostFtdcQryLinkManField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryLinkManField", (char*)"ss",
p->InvestorID, p->BrokerID);
}
KingstarAPI::CThostFtdcQryLinkManField * from_CThostFtdcQryLinkManField(PyObject * p){
  KingstarAPI::CThostFtdcQryLinkManField *t = (KingstarAPI::CThostFtdcQryLinkManField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryLinkManField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryLinkManField));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//�����ѯת����ˮ
PyObject * new_CThostFtdcQryTransferSerialField(KingstarAPI::CThostFtdcQryTransferSerialField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryTransferSerialField", (char*)"sss",
p->BankID, p->BrokerID, p->AccountID);
}
KingstarAPI::CThostFtdcQryTransferSerialField * from_CThostFtdcQryTransferSerialField(PyObject * p){
  KingstarAPI::CThostFtdcQryTransferSerialField *t = (KingstarAPI::CThostFtdcQryTransferSerialField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryTransferSerialField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryTransferSerialField));
  //���б���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //Ͷ�����ʺ�
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));

  return t;
};

//��������������ʧ��
PyObject * new_CThostFtdcExchangeOrderActionErrorField(KingstarAPI::CThostFtdcExchangeOrderActionErrorField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcExchangeOrderActionErrorField", (char*)"sisssssi",
p->ExchangeID, p->InstallID, p->OrderLocalID, p->ErrorMsg, p->TraderID, p->ActionLocalID, p->OrderSysID, p->ErrorID);
}
KingstarAPI::CThostFtdcExchangeOrderActionErrorField * from_CThostFtdcExchangeOrderActionErrorField(PyObject * p){
  KingstarAPI::CThostFtdcExchangeOrderActionErrorField *t = (KingstarAPI::CThostFtdcExchangeOrderActionErrorField *)calloc(1, sizeof(KingstarAPI::CThostFtdcExchangeOrderActionErrorField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcExchangeOrderActionErrorField));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //���ر������
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //������Ϣ
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //����������Ա����
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //�������ر��
  strcpy(t->ActionLocalID, PyString_AsString(PyObject_GetAttrString(p, "ActionLocalID")));
  //�������
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //�������
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));

  return t;
};

//�ͻ�����֤����
PyObject * new_CThostFtdcReqAuthenticateField(KingstarAPI::CThostFtdcReqAuthenticateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqAuthenticateField", (char*)"ssss",
p->UserID, p->AuthCode, p->BrokerID, p->UserProductInfo);
}
KingstarAPI::CThostFtdcReqAuthenticateField * from_CThostFtdcReqAuthenticateField(PyObject * p){
  KingstarAPI::CThostFtdcReqAuthenticateField *t = (KingstarAPI::CThostFtdcReqAuthenticateField *)calloc(1, sizeof(KingstarAPI::CThostFtdcReqAuthenticateField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcReqAuthenticateField));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //��֤��
  strcpy(t->AuthCode, PyString_AsString(PyObject_GetAttrString(p, "AuthCode")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //�û��˲�Ʒ��Ϣ
  strcpy(t->UserProductInfo, PyString_AsString(PyObject_GetAttrString(p, "UserProductInfo")));

  return t;
};

//��ѯ����
PyObject * new_CThostFtdcQryHisOrderField(KingstarAPI::CThostFtdcQryHisOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryHisOrderField", (char*)"ssissssss",
p->InstrumentID, p->ExchangeID, p->SettlementID, p->InsertTimeStart, p->InvestorID, p->BrokerID, p->OrderSysID, p->TradingDay, p->InsertTimeEnd);
}
KingstarAPI::CThostFtdcQryHisOrderField * from_CThostFtdcQryHisOrderField(PyObject * p){
  KingstarAPI::CThostFtdcQryHisOrderField *t = (KingstarAPI::CThostFtdcQryHisOrderField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryHisOrderField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryHisOrderField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //������
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //��ʼʱ��
  strcpy(t->InsertTimeStart, PyString_AsString(PyObject_GetAttrString(p, "InsertTimeStart")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //�������
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //����ʱ��
  strcpy(t->InsertTimeEnd, PyString_AsString(PyObject_GetAttrString(p, "InsertTimeEnd")));

  return t;
};

//����ͬ���еĺ�Լ����Ȩ��
PyObject * new_CThostFtdcSyncingInstrumentTradingRightField(KingstarAPI::CThostFtdcSyncingInstrumentTradingRightField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncingInstrumentTradingRightField", (char*)"ssscc",
p->InstrumentID, p->InvestorID, p->BrokerID, p->InvestorRange, p->TradingRight);
}
KingstarAPI::CThostFtdcSyncingInstrumentTradingRightField * from_CThostFtdcSyncingInstrumentTradingRightField(PyObject * p){
  KingstarAPI::CThostFtdcSyncingInstrumentTradingRightField *t = (KingstarAPI::CThostFtdcSyncingInstrumentTradingRightField *)calloc(1, sizeof(KingstarAPI::CThostFtdcSyncingInstrumentTradingRightField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcSyncingInstrumentTradingRightField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //Ͷ���߷�Χ
  //enum����
  //THOST_FTDC_IR_All -> '1', ����
  //THOST_FTDC_IR_Group -> '2', Ͷ������
  //THOST_FTDC_IR_Single -> '3', ��һͶ����
  t->InvestorRange =   PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
  //����Ȩ��
  //enum����
  //THOST_FTDC_TR_Allow -> '0', ���Խ���
  //THOST_FTDC_TR_Forbidden -> '2', ���ܽ���
  //THOST_FTDC_TR_CloseOnly -> '1', ֻ��ƽ��
  t->TradingRight =   PyString_AsString(PyObject_GetAttrString(p, "TradingRight"))[0];

  return t;
};

//��ѯ���ױ���
PyObject * new_CThostFtdcQryTradingCodeField(KingstarAPI::CThostFtdcQryTradingCodeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryTradingCodeField", (char*)"ssscs",
p->InvestorID, p->ExchangeID, p->BrokerID, p->ClientIDType, p->ClientID);
}
KingstarAPI::CThostFtdcQryTradingCodeField * from_CThostFtdcQryTradingCodeField(PyObject * p){
  KingstarAPI::CThostFtdcQryTradingCodeField *t = (KingstarAPI::CThostFtdcQryTradingCodeField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryTradingCodeField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryTradingCodeField));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //���ױ�������
  //enum����
  //THOST_FTDC_CIDT_Hedge -> '3', �ױ�
  //THOST_FTDC_CIDT_Arbitrage -> '2', ����
  //THOST_FTDC_CIDT_Speculation -> '1', Ͷ��
  t->ClientIDType =   PyString_AsString(PyObject_GetAttrString(p, "ClientIDType"))[0];
  //�ͻ�����
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));

  return t;
};

// ������״̬��Ϣ
PyObject * new_CTKSCOSStatusField(CTKSCOSStatusField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CTKSCOSStatusField", (char*)"ccsdcsssiicsssssdssscsssisii",
p->ConditionalOrderStatus, p->CombOffsetFlag, p->UserID, p->LimitPrice, p->Direction, p->ActiveTime, p->Memo, p->ClientID, p->VolumeTotal, p->VolumeTraded, p->OrderStatus, p->OrderSysID, p->CurrencyID, p->InstrumentID, p->ExchangeID, p->CancelUserID, p->TradePrice, p->TradingDay, p->BrokerID, p->InsertTime, p->CombHedgeFlag, p->CancelTime, p->OrderLocalID, p->BusinessUnit, p->SequenceNo, p->InvestorID, p->ConditionalOrderID, p->VolumeTotalOriginal);
}
CTKSCOSStatusField * from_CTKSCOSStatusField(PyObject * p){
CTKSCOSStatusField *t = (CTKSCOSStatusField *)calloc(1, sizeof(CTKSCOSStatusField));
  memset(t,0,sizeof(CTKSCOSStatusField));
  //������״̬
  //enum����
  //KSCOS_OrderStatus_WAITSELECT -> '6', �ȴ�ѡ��
  //KSCOS_OrderStatus_Deleted -> '2', ɾ��
  //KSCOS_OrderStatus_SENDTIMEOUT -> '4', ���ͳ�ʱ
  //KSCOS_OrderStatus_TOUCHEDNOSEND -> '3', �Ѵ���δ����
  //KSCOS_OrderStatus_PAUSENOTOUCHED -> '0', ��ͣ
  //KSCOS_OrderStatus_SENDSUCCESS -> '5', ���ͳɹ�
  //KSCOS_OrderStatus_SELECTABORT -> '8', ѡ����ֹ
  //KSCOS_OrderStatus_ACTIVENOTOUCHED -> '1', δ����
  //KSCOS_OrderStatus_SELECTSKIP -> '7', ѡ������
  t->ConditionalOrderStatus =   PyString_AsString(PyObject_GetAttrString(p, "ConditionalOrderStatus"))[0];
  //��ƽ��־
  //enum����
  //THOST_FTDC_OF_CloseToday -> '3', ƽ��
  //THOST_FTDC_OF_ForceOff -> '5', ǿ��
  //THOST_FTDC_OF_LocalForceClose -> '6', ����ǿƽ
  //THOST_FTDC_OF_Close -> '1', ƽ��
  //THOST_FTDC_OF_Open -> '0', ����
  //THOST_FTDC_OF_CloseYesterday -> '4', ƽ��
  //THOST_FTDC_OF_ForceClose -> '2', ǿƽ
  t->CombOffsetFlag =   PyString_AsString(PyObject_GetAttrString(p, "CombOffsetFlag"))[0];
  //����Ա
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //�۸�
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //��������
  //enum����
  //THOST_FTDC_D_Buy -> '0', ��
  //THOST_FTDC_D_Sell -> '1', ��
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //����ʱ��
  strcpy(t->ActiveTime, PyString_AsString(PyObject_GetAttrString(p, "ActiveTime")));
  //��ע
  strcpy(t->Memo, PyString_AsString(PyObject_GetAttrString(p, "Memo")));
  //�ͻ�����
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //ʣ������
  t->VolumeTotal =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotal"));
  //��ɽ�����
  t->VolumeTraded =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTraded"));
  //����״̬
  //enum����
  //THOST_FTDC_OST_NotTouched -> 'b', ��δ����
  //THOST_FTDC_OST_NoTradeQueueing -> '3', δ�ɽ����ڶ�����
  //THOST_FTDC_OST_AllTraded -> '0', ȫ���ɽ�
  //THOST_FTDC_OST_NoTradeNotQueueing -> '4', δ�ɽ����ڶ�����
  //THOST_FTDC_OST_Unknown -> 'a', δ֪
  //THOST_FTDC_OST_PartTradedQueueing -> '1', ���ֳɽ����ڶ�����
  //THOST_FTDC_OST_PartTradedNotQueueing -> '2', ���ֳɽ����ڶ�����
  //THOST_FTDC_OST_Touched -> 'c', �Ѵ���
  //THOST_FTDC_OST_Canceled -> '5', ����
  t->OrderStatus =   PyString_AsString(PyObject_GetAttrString(p, "OrderStatus"))[0];
  //�������
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //���Ҵ���
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //�����û�
  strcpy(t->CancelUserID, PyString_AsString(PyObject_GetAttrString(p, "CancelUserID")));
  //�ɽ��۸�
  t->TradePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradePrice"));
  //������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //Ӫҵ������
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //ί��ʱ��
  strcpy(t->InsertTime, PyString_AsString(PyObject_GetAttrString(p, "InsertTime")));
  //Ͷ���ױ���־
  //enum����
  //THOST_FTDC_HF_Speculation -> '1', Ͷ��
  //THOST_FTDC_HF_Arbitrage -> '2', ����
  //THOST_FTDC_HF_Hedge -> '3', �ױ�
  t->CombHedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "CombHedgeFlag"))[0];
  //����ʱ��
  strcpy(t->CancelTime, PyString_AsString(PyObject_GetAttrString(p, "CancelTime")));
  //���ر������
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //ҵ��Ԫ
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //���
  t->SequenceNo =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���������
  t->ConditionalOrderID =   PyInt_AsLong(PyObject_GetAttrString(p, "ConditionalOrderID"));
  //����
  t->VolumeTotalOriginal =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));

  return t;
};

//�û���¼Ӧ��
PyObject * new_CThostFtdcRspUserLoginField(KingstarAPI::CThostFtdcRspUserLoginField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspUserLoginField", (char*)"sssssisissss",
p->CZCETime, p->SHFETime, p->MaxOrderRef, p->UserID, p->TradingDay, p->SessionID, p->SystemName, p->FrontID, p->FFEXTime, p->BrokerID, p->DCETime, p->LoginTime);
}
KingstarAPI::CThostFtdcRspUserLoginField * from_CThostFtdcRspUserLoginField(PyObject * p){
  KingstarAPI::CThostFtdcRspUserLoginField *t = (KingstarAPI::CThostFtdcRspUserLoginField *)calloc(1, sizeof(KingstarAPI::CThostFtdcRspUserLoginField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcRspUserLoginField));
  //֣����ʱ��
  strcpy(t->CZCETime, PyString_AsString(PyObject_GetAttrString(p, "CZCETime")));
  //������ʱ��
  strcpy(t->SHFETime, PyString_AsString(PyObject_GetAttrString(p, "SHFETime")));
  //��󱨵�����
  strcpy(t->MaxOrderRef, PyString_AsString(PyObject_GetAttrString(p, "MaxOrderRef")));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //�Ự���
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //����ϵͳ����
  strcpy(t->SystemName, PyString_AsString(PyObject_GetAttrString(p, "SystemName")));
  //ǰ�ñ��
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //�н���ʱ��
  strcpy(t->FFEXTime, PyString_AsString(PyObject_GetAttrString(p, "FFEXTime")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //������ʱ��
  strcpy(t->DCETime, PyString_AsString(PyObject_GetAttrString(p, "DCETime")));
  //��¼�ɹ�ʱ��
  strcpy(t->LoginTime, PyString_AsString(PyObject_GetAttrString(p, "LoginTime")));

  return t;
};

//����ͬ���е�Ͷ����
PyObject * new_CThostFtdcSyncingInvestorField(KingstarAPI::CThostFtdcSyncingInvestorField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncingInvestorField", (char*)"ssssssssssic",
p->CommModelID, p->InvestorName, p->Mobile, p->IdentifiedCardNo, p->Telephone, p->InvestorID, p->BrokerID, p->Address, p->InvestorGroupID, p->OpenDate, p->IsActive, p->IdentifiedCardType);
}
KingstarAPI::CThostFtdcSyncingInvestorField * from_CThostFtdcSyncingInvestorField(PyObject * p){
  KingstarAPI::CThostFtdcSyncingInvestorField *t = (KingstarAPI::CThostFtdcSyncingInvestorField *)calloc(1, sizeof(KingstarAPI::CThostFtdcSyncingInvestorField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcSyncingInvestorField));
  //��������ģ�����
  strcpy(t->CommModelID, PyString_AsString(PyObject_GetAttrString(p, "CommModelID")));
  //Ͷ��������
  strcpy(t->InvestorName, PyString_AsString(PyObject_GetAttrString(p, "InvestorName")));
  //�ֻ�
  strcpy(t->Mobile, PyString_AsString(PyObject_GetAttrString(p, "Mobile")));
  //֤������
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //��ϵ�绰
  strcpy(t->Telephone, PyString_AsString(PyObject_GetAttrString(p, "Telephone")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //ͨѶ��ַ
  strcpy(t->Address, PyString_AsString(PyObject_GetAttrString(p, "Address")));
  //Ͷ���߷������
  strcpy(t->InvestorGroupID, PyString_AsString(PyObject_GetAttrString(p, "InvestorGroupID")));
  //��������
  strcpy(t->OpenDate, PyString_AsString(PyObject_GetAttrString(p, "OpenDate")));
  //�Ƿ��Ծ
  t->IsActive =   PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));
  //֤������
  //enum����
  //THOST_FTDC_ICT_LicenseNo -> '9', Ӫҵִ�պ�
  //THOST_FTDC_ICT_TaxNo -> 'A', ˰��ǼǺ�
  //THOST_FTDC_ICT_OfficerIDCard -> '2', ����֤
  //THOST_FTDC_ICT_IDCard -> '1', ���֤
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', ̨��֤
  //THOST_FTDC_ICT_OtherCard -> 'x', ����֤��
  //THOST_FTDC_ICT_PoliceIDCard -> '3', ����֤
  //THOST_FTDC_ICT_Passport -> '6', ����
  //THOST_FTDC_ICT_EID -> '0', ��֯��������
  //THOST_FTDC_ICT_HomeComingCard -> '8', ����֤
  //THOST_FTDC_ICT_HouseholdRegister -> '5', ���ڲ�
  //THOST_FTDC_ICT_SoldierIDCard -> '4', ʿ��֤
  t->IdentifiedCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardType"))[0];

  return t;
};

//��ѯͶ���ֲ߳���ϸ
PyObject * new_CThostFtdcQryInvestorPositionDetailField(KingstarAPI::CThostFtdcQryInvestorPositionDetailField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInvestorPositionDetailField", (char*)"sss",
p->InstrumentID, p->InvestorID, p->BrokerID);
}
KingstarAPI::CThostFtdcQryInvestorPositionDetailField * from_CThostFtdcQryInvestorPositionDetailField(PyObject * p){
  KingstarAPI::CThostFtdcQryInvestorPositionDetailField *t = (KingstarAPI::CThostFtdcQryInvestorPositionDetailField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryInvestorPositionDetailField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryInvestorPositionDetailField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//Ͷ���ֲ߳���ϸ
PyObject * new_CThostFtdcInvestorPositionDetailField(KingstarAPI::CThostFtdcInvestorPositionDetailField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInvestorPositionDetailField", (char*)"ddcdcdcddidissdissdsdddsss",
p->PositionProfitByDate, p->ExchMargin, p->TradeType, p->MarginRateByMoney, p->HedgeFlag, p->MarginRateByVolume, p->Direction, p->CloseAmount, p->OpenPrice, p->Volume, p->LastSettlementPrice, p->CloseVolume, p->InstrumentID, p->ExchangeID, p->CloseProfitByTrade, p->SettlementID, p->TradingDay, p->BrokerID, p->Margin, p->TradeID, p->PositionProfitByTrade, p->CloseProfitByDate, p->SettlementPrice, p->InvestorID, p->CombInstrumentID, p->OpenDate);
}
KingstarAPI::CThostFtdcInvestorPositionDetailField * from_CThostFtdcInvestorPositionDetailField(PyObject * p){
  KingstarAPI::CThostFtdcInvestorPositionDetailField *t = (KingstarAPI::CThostFtdcInvestorPositionDetailField *)calloc(1, sizeof(KingstarAPI::CThostFtdcInvestorPositionDetailField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcInvestorPositionDetailField));
  //���ն��гֲ�ӯ��
  t->PositionProfitByDate =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfitByDate"));
  //��������֤��
  t->ExchMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchMargin"));
  //�ɽ�����
  //enum����
  //THOST_FTDC_TRDT_EFPDerived -> '3', ��ת�������ɽ�
  //THOST_FTDC_TRDT_OTC -> '2', OTC�ɽ�
  //THOST_FTDC_TRDT_OptionsExecution -> '1', ��Ȩִ��
  //THOST_FTDC_TRDT_Common -> '0', ��ͨ�ɽ�
  //THOST_FTDC_TRDT_CombinationDerived -> '4', ��������ɽ�
  t->TradeType =   PyString_AsString(PyObject_GetAttrString(p, "TradeType"))[0];
  //��֤����
  t->MarginRateByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByMoney"));
  //Ͷ���ױ���־
  //enum����
  //THOST_FTDC_HF_Speculation -> '1', Ͷ��
  //THOST_FTDC_HF_Arbitrage -> '2', ����
  //THOST_FTDC_HF_Hedge -> '3', �ױ�
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //��֤����(������)
  t->MarginRateByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByVolume"));
  //����
  //enum����
  //THOST_FTDC_D_Buy -> '0', ��
  //THOST_FTDC_D_Sell -> '1', ��
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //ƽ�ֽ��
  t->CloseAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseAmount"));
  //���ּ�
  t->OpenPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenPrice"));
  //����
  t->Volume =   PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));
  //������
  t->LastSettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LastSettlementPrice"));
  //ƽ����
  t->CloseVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "CloseVolume"));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //��ʶԳ�ƽ��ӯ��
  t->CloseProfitByTrade =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfitByTrade"));
  //������
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //Ͷ���߱�֤��
  t->Margin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Margin"));
  //�ɽ����
  strcpy(t->TradeID, PyString_AsString(PyObject_GetAttrString(p, "TradeID")));
  //��ʶԳ�ֲ�ӯ��
  t->PositionProfitByTrade =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfitByTrade"));
  //���ն���ƽ��ӯ��
  t->CloseProfitByDate =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfitByDate"));
  //�����
  t->SettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SettlementPrice"));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //��Ϻ�Լ����
  strcpy(t->CombInstrumentID, PyString_AsString(PyObject_GetAttrString(p, "CombInstrumentID")));
  //��������
  strcpy(t->OpenDate, PyString_AsString(PyObject_GetAttrString(p, "OpenDate")));

  return t;
};

//����������
PyObject * new_CThostFtdcExchangeOrderField(KingstarAPI::CThostFtdcExchangeOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcExchangeOrderField", (char*)"ciiisdcisissicccscsdsiiccssscsssssssssicis",
p->ContingentCondition, p->NotifySequence, p->VolumeTraded, p->IsAutoSuspend, p->TraderID, p->LimitPrice, p->Direction, p->InstallID, p->ParticipantID, p->VolumeTotalOriginal, p->ExchangeInstID, p->ClientID, p->VolumeTotal, p->OrderPriceType, p->TimeCondition, p->OrderStatus, p->OrderSysID, p->OrderSubmitStatus, p->CombOffsetFlag, p->StopPrice, p->ExchangeID, p->MinVolume, p->SettlementID, p->ForceCloseReason, p->OrderType, p->UpdateTime, p->TradingDay, p->ActiveTime, p->OrderSource, p->InsertTime, p->SuspendTime, p->ClearingPartID, p->CombHedgeFlag, p->CancelTime, p->GTDDate, p->OrderLocalID, p->BusinessUnit, p->InsertDate, p->SequenceNo, p->VolumeCondition, p->RequestID, p->ActiveTraderID);
}
KingstarAPI::CThostFtdcExchangeOrderField * from_CThostFtdcExchangeOrderField(PyObject * p){
  KingstarAPI::CThostFtdcExchangeOrderField *t = (KingstarAPI::CThostFtdcExchangeOrderField *)calloc(1, sizeof(KingstarAPI::CThostFtdcExchangeOrderField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcExchangeOrderField));
  //��������
  //enum����
  //THOST_FTDC_CC_BidPriceGreaterThanStopPrice -> 'D', ��һ�۴���������
  //THOST_FTDC_CC_AskPriceLesserEqualStopPrice -> 'C', ��һ��С�ڵ���������
  //THOST_FTDC_CC_AskPriceGreaterThanStopPrice -> '9', ��һ�۴���������
  //THOST_FTDC_CC_LastPriceLesserThanStopPrice -> '7', ���¼�С��������
  //THOST_FTDC_CC_LastPriceGreaterEqualStopPrice -> '6', ���¼۴��ڵ���������
  //THOST_FTDC_CC_BidPriceGreaterEqualStopPrice -> 'E', ��һ�۴��ڵ���������
  //THOST_FTDC_CC_LastPriceLesserEqualStopPrice -> '8', ���¼�С�ڵ���������
  //THOST_FTDC_CC_TouchProfit -> '3', ֹӮ
  //THOST_FTDC_CC_ParkedOrder -> '4', Ԥ��
  //THOST_FTDC_CC_AskPriceGreaterEqualStopPrice -> 'A', ��һ�۴��ڵ���������
  //THOST_FTDC_CC_BidPriceLesserEqualStopPrice -> 'H', ��һ��С�ڵ���������
  //THOST_FTDC_CC_LastPriceGreaterThanStopPrice -> '5', ���¼۴���������
  //THOST_FTDC_CC_BidPriceLesserThanStopPrice -> 'F', ��һ��С��������
  //THOST_FTDC_CC_AskPriceLesserThanStopPrice -> 'B', ��һ��С��������
  //THOST_FTDC_CC_Immediately -> '1', ����
  //THOST_FTDC_CC_Touch -> '2', ֹ��
  t->ContingentCondition =   PyString_AsString(PyObject_GetAttrString(p, "ContingentCondition"))[0];
  //������ʾ���
  t->NotifySequence =   PyInt_AsLong(PyObject_GetAttrString(p, "NotifySequence"));
  //��ɽ�����
  t->VolumeTraded =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTraded"));
  //�Զ������־
  t->IsAutoSuspend =   PyInt_AsLong(PyObject_GetAttrString(p, "IsAutoSuspend"));
  //����������Ա����
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //�۸�
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //��������
  //enum����
  //THOST_FTDC_D_Buy -> '0', ��
  //THOST_FTDC_D_Sell -> '1', ��
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //��Ա����
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //����
  t->VolumeTotalOriginal =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
  //��Լ�ڽ������Ĵ���
  strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
  //�ͻ�����
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //ʣ������
  t->VolumeTotal =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotal"));
  //�����۸�����
  //enum����
  //THOST_FTDC_OPT_AskPrice1PlusTwoTicks -> 'A', ��һ�۸����ϸ�2��ticks
  //THOST_FTDC_OPT_LastPricePlusTwoTicks -> '6', ���¼۸����ϸ�2��ticks
  //THOST_FTDC_OPT_AskPrice1PlusOneTicks -> '9', ��һ�۸����ϸ�1��ticks
  //THOST_FTDC_OPT_BidPrice1 -> 'C', ��һ��
  //THOST_FTDC_OPT_LimitPrice -> '2', �޼�
  //THOST_FTDC_OPT_LastPricePlusOneTicks -> '5', ���¼۸����ϸ�1��ticks
  //THOST_FTDC_OPT_LastPrice -> '4', ���¼�
  //THOST_FTDC_OPT_AskPrice1 -> '8', ��һ��
  //THOST_FTDC_OPT_AskPrice1PlusThreeTicks -> 'B', ��һ�۸����ϸ�3��ticks
  //THOST_FTDC_OPT_AnyPrice -> '1', �����
  //THOST_FTDC_OPT_BestPrice -> '3', ���ż�
  //THOST_FTDC_OPT_LastPricePlusThreeTicks -> '7', ���¼۸����ϸ�3��ticks
  //THOST_FTDC_OPT_BidPrice1PlusOneTicks -> 'D', ��һ�۸����ϸ�1��ticks
  //THOST_FTDC_OPT_BidPrice1PlusTwoTicks -> 'E', ��һ�۸����ϸ�2��ticks
  //THOST_FTDC_OPT_BidPrice1PlusThreeTicks -> 'F', ��һ�۸����ϸ�3��ticks
  t->OrderPriceType =   PyString_AsString(PyObject_GetAttrString(p, "OrderPriceType"))[0];
  //��Ч������
  //enum����
  //THOST_FTDC_TC_GTC -> '5', ����ǰ��Ч
  //THOST_FTDC_TC_GTD -> '4', ָ������ǰ��Ч
  //THOST_FTDC_TC_GFD -> '3', ������Ч
  //THOST_FTDC_TC_GFA -> '6', ���Ͼ�����Ч
  //THOST_FTDC_TC_IOC -> '1', ������ɣ�������
  //THOST_FTDC_TC_GFS -> '2', ������Ч
  t->TimeCondition =   PyString_AsString(PyObject_GetAttrString(p, "TimeCondition"))[0];
  //����״̬
  //enum����
  //THOST_FTDC_OST_NotTouched -> 'b', ��δ����
  //THOST_FTDC_OST_NoTradeQueueing -> '3', δ�ɽ����ڶ�����
  //THOST_FTDC_OST_AllTraded -> '0', ȫ���ɽ�
  //THOST_FTDC_OST_NoTradeNotQueueing -> '4', δ�ɽ����ڶ�����
  //THOST_FTDC_OST_Unknown -> 'a', δ֪
  //THOST_FTDC_OST_PartTradedQueueing -> '1', ���ֳɽ����ڶ�����
  //THOST_FTDC_OST_PartTradedNotQueueing -> '2', ���ֳɽ����ڶ�����
  //THOST_FTDC_OST_Touched -> 'c', �Ѵ���
  //THOST_FTDC_OST_Canceled -> '5', ����
  t->OrderStatus =   PyString_AsString(PyObject_GetAttrString(p, "OrderStatus"))[0];
  //�������
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //�����ύ״̬
  //enum����
  //THOST_FTDC_OSS_InsertSubmitted -> '0', �Ѿ��ύ
  //THOST_FTDC_OSS_InsertRejected -> '4', �����Ѿ����ܾ�
  //THOST_FTDC_OSS_CancelSubmitted -> '1', �����Ѿ��ύ
  //THOST_FTDC_OSS_CancelRejected -> '5', �����Ѿ����ܾ�
  //THOST_FTDC_OSS_Accepted -> '3', �Ѿ�����
  //THOST_FTDC_OSS_ModifySubmitted -> '2', �޸��Ѿ��ύ
  //THOST_FTDC_OSS_ModifyRejected -> '6', �ĵ��Ѿ����ܾ�
  t->OrderSubmitStatus =   PyString_AsString(PyObject_GetAttrString(p, "OrderSubmitStatus"))[0];
  //��Ͽ�ƽ��־
  strcpy(t->CombOffsetFlag, PyString_AsString(PyObject_GetAttrString(p, "CombOffsetFlag")));
  //ֹ���
  t->StopPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StopPrice"));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //��С�ɽ���
  t->MinVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MinVolume"));
  //������
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //ǿƽԭ��
  //enum����
  //THOST_FTDC_FCC_PersonDeliv -> '7', ��Ȼ���ٽ�����
  //THOST_FTDC_FCC_ClientOverPositionLimit -> '2', �ͻ�����
  //THOST_FTDC_FCC_NotForceClose -> '0', ��ǿƽ
  //THOST_FTDC_FCC_NotMultiple -> '4', �ֲַ�������
  //THOST_FTDC_FCC_MemberOverPositionLimit -> '3', ��Ա����
  //THOST_FTDC_FCC_LackDeposit -> '1', �ʽ���
  //THOST_FTDC_FCC_Other -> '6', ����
  //THOST_FTDC_FCC_Violation -> '5', Υ��
  t->ForceCloseReason =   PyString_AsString(PyObject_GetAttrString(p, "ForceCloseReason"))[0];
  //��������
  //enum����
  //THOST_FTDC_ORDT_Combination -> '3', ��ϱ���
  //THOST_FTDC_ORDT_Normal -> '0', ����
  //THOST_FTDC_ORDT_DeriveFromCombination -> '2', �������
  //THOST_FTDC_ORDT_DeriveFromQuote -> '1', ��������
  //THOST_FTDC_ORDT_Swap -> '5', ������
  //THOST_FTDC_ORDT_ConditionalOrder -> '4', ������
  t->OrderType =   PyString_AsString(PyObject_GetAttrString(p, "OrderType"))[0];
  //����޸�ʱ��
  strcpy(t->UpdateTime, PyString_AsString(PyObject_GetAttrString(p, "UpdateTime")));
  //������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //����ʱ��
  strcpy(t->ActiveTime, PyString_AsString(PyObject_GetAttrString(p, "ActiveTime")));
  //������Դ
  //enum����
  //THOST_FTDC_OSRC_Participant -> '0', ���Բ�����
  //THOST_FTDC_OSRC_Administrator -> '1', ���Թ���Ա
  t->OrderSource =   PyString_AsString(PyObject_GetAttrString(p, "OrderSource"))[0];
  //ί��ʱ��
  strcpy(t->InsertTime, PyString_AsString(PyObject_GetAttrString(p, "InsertTime")));
  //����ʱ��
  strcpy(t->SuspendTime, PyString_AsString(PyObject_GetAttrString(p, "SuspendTime")));
  //�����Ա���
  strcpy(t->ClearingPartID, PyString_AsString(PyObject_GetAttrString(p, "ClearingPartID")));
  //���Ͷ���ױ���־
  strcpy(t->CombHedgeFlag, PyString_AsString(PyObject_GetAttrString(p, "CombHedgeFlag")));
  //����ʱ��
  strcpy(t->CancelTime, PyString_AsString(PyObject_GetAttrString(p, "CancelTime")));
  //GTD����
  strcpy(t->GTDDate, PyString_AsString(PyObject_GetAttrString(p, "GTDDate")));
  //���ر������
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //ҵ��Ԫ
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //��������
  strcpy(t->InsertDate, PyString_AsString(PyObject_GetAttrString(p, "InsertDate")));
  //���
  t->SequenceNo =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //�ɽ�������
  //enum����
  //THOST_FTDC_VC_MV -> '2', ��С����
  //THOST_FTDC_VC_CV -> '3', ȫ������
  //THOST_FTDC_VC_AV -> '1', �κ�����
  t->VolumeCondition =   PyString_AsString(PyObject_GetAttrString(p, "VolumeCondition"))[0];
  //������
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //����޸Ľ���������Ա����
  strcpy(t->ActiveTraderID, PyString_AsString(PyObject_GetAttrString(p, "ActiveTraderID")));

  return t;
};

//��ѯ�˻���Ϣ��Ӧ
PyObject * new_CThostFtdcRspQueryAccountField(KingstarAPI::CThostFtdcRspQueryAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspQueryAccountField", (char*)"sssscississsisscicsssssssdcissccicscsd",
p->BrokerBranchID, p->UserID, p->BankPassWord, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->InstallID, p->CustomerName, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->Password, p->BankPwdFlag, p->RequestID, p->CustType, p->IdentifiedCardNo, p->BankSerial, p->OperNo, p->TradingDay, p->BankSecuAcc, p->BrokerID, p->DeviceID, p->BankUseAmount, p->IdCardType, p->PlateSerial, p->TradeDate, p->CurrencyID, p->BankAccType, p->LastFragment, p->FutureSerial, p->BankSecuAccType, p->BrokerIDByBank, p->SecuPwdFlag, p->Digest, p->BankFetchAmount);
}
KingstarAPI::CThostFtdcRspQueryAccountField * from_CThostFtdcRspQueryAccountField(PyObject * p){
  KingstarAPI::CThostFtdcRspQueryAccountField *t = (KingstarAPI::CThostFtdcRspQueryAccountField *)calloc(1, sizeof(KingstarAPI::CThostFtdcRspQueryAccountField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcRspQueryAccountField));
  //���̷�֧��������
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //�û���ʶ
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //��������
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //����ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //��֤�ͻ�֤�������־
  //enum����
  //THOST_FTDC_YNI_No -> '1', ��
  //THOST_FTDC_YNI_Yes -> '0', ��
  t->VerifyCertNoFlag =   PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
  //����ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //Ͷ�����ʺ�
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //�����ʺ�
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //�ͻ�����
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //ҵ������
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //���з�֧��������
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //�Ự��
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //�ڻ�����
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //���������־
  //enum����
  //THOST_FTDC_BPWDF_BlankCheck -> '1', ���ĺ˶�
  //THOST_FTDC_BPWDF_NoCheck -> '0', ���˶�
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', ���ĺ˶�
  t->BankPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
  //������
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //�ͻ�����
  //enum����
  //THOST_FTDC_CUSTT_Institution -> '1', ������
  //THOST_FTDC_CUSTT_Person -> '0', ��Ȼ��
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //֤������
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //������ˮ��
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //���׹�Ա
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //����ϵͳ����
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //�ڻ���λ�ʺ�
  strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
  //���̴���
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //������־
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //���п��ý��
  t->BankUseAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BankUseAmount"));
  //֤������
  //enum����
  //THOST_FTDC_ICT_LicenseNo -> '9', Ӫҵִ�պ�
  //THOST_FTDC_ICT_TaxNo -> 'A', ˰��ǼǺ�
  //THOST_FTDC_ICT_OfficerIDCard -> '2', ����֤
  //THOST_FTDC_ICT_IDCard -> '1', ���֤
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', ̨��֤
  //THOST_FTDC_ICT_OtherCard -> 'x', ����֤��
  //THOST_FTDC_ICT_PoliceIDCard -> '3', ����֤
  //THOST_FTDC_ICT_Passport -> '6', ����
  //THOST_FTDC_ICT_EID -> '0', ��֯��������
  //THOST_FTDC_ICT_HomeComingCard -> '8', ����֤
  //THOST_FTDC_ICT_HouseholdRegister -> '5', ���ڲ�
  //THOST_FTDC_ICT_SoldierIDCard -> '4', ʿ��֤
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //����ƽ̨��Ϣ��ˮ��
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //��������
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //���ִ���
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //�����ʺ�����
  //enum����
  //THOST_FTDC_BAT_SavingCard -> '2', ���
  //THOST_FTDC_BAT_CreditCard -> '3', ���ÿ�
  //THOST_FTDC_BAT_BankBook -> '1', ���д���
  t->BankAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
  //����Ƭ��־
  //enum����
  //THOST_FTDC_LF_No -> '1', ��������Ƭ
  //THOST_FTDC_LF_Yes -> '0', ������Ƭ
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //�ڻ���˾��ˮ��
  t->FutureSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
  //�ڻ���λ�ʺ�����
  //enum����
  //THOST_FTDC_BAT_SavingCard -> '2', ���
  //THOST_FTDC_BAT_CreditCard -> '3', ���ÿ�
  //THOST_FTDC_BAT_BankBook -> '1', ���д���
  t->BankSecuAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
  //�ڻ���˾���б���
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //�ڻ��ʽ�����˶Ա�־
  //enum����
  //THOST_FTDC_BPWDF_BlankCheck -> '1', ���ĺ˶�
  //THOST_FTDC_BPWDF_NoCheck -> '0', ���˶�
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', ���ĺ˶�
  t->SecuPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
  //ժҪ
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
  //���п�ȡ���
  t->BankFetchAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BankFetchAmount"));

  return t;
};

//��ѯ������Ϣȷ����
PyObject * new_CThostFtdcQrySettlementInfoConfirmField(KingstarAPI::CThostFtdcQrySettlementInfoConfirmField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQrySettlementInfoConfirmField", (char*)"ss",
p->InvestorID, p->BrokerID);
}
KingstarAPI::CThostFtdcQrySettlementInfoConfirmField * from_CThostFtdcQrySettlementInfoConfirmField(PyObject * p){
  KingstarAPI::CThostFtdcQrySettlementInfoConfirmField *t = (KingstarAPI::CThostFtdcQrySettlementInfoConfirmField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQrySettlementInfoConfirmField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQrySettlementInfoConfirmField));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//���ڿ�����Ϣ
PyObject * new_CThostFtdcOpenAccountField(KingstarAPI::CThostFtdcOpenAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcOpenAccountField", (char*)"csssscisssicssssisiciccssssssccsssssccscsssss",
p->MoneyAccountStatus, p->BrokerBranchID, p->BankPassWord, p->Telephone, p->IdentifiedCardNo, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->Fax, p->InstallID, p->SecuPwdFlag, p->CustomerName, p->CountryCode, p->TradeCode, p->BankBranchID, p->SessionID, p->Address, p->PlateSerial, p->BankPwdFlag, p->ErrorID, p->CustType, p->Gender, p->BankID, p->BankSerial, p->OperNo, p->TradingDay, p->BankSecuAcc, p->BrokerID, p->CashExchangeCode, p->IdCardType, p->Password, p->MobilePhone, p->TradeDate, p->CurrencyID, p->ErrorMsg, p->BankAccType, p->LastFragment, p->ZipCode, p->BankSecuAccType, p->BrokerIDByBank, p->TradeTime, p->EMail, p->Digest, p->DeviceID);
}
KingstarAPI::CThostFtdcOpenAccountField * from_CThostFtdcOpenAccountField(PyObject * p){
  KingstarAPI::CThostFtdcOpenAccountField *t = (KingstarAPI::CThostFtdcOpenAccountField *)calloc(1, sizeof(KingstarAPI::CThostFtdcOpenAccountField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcOpenAccountField));
  //�ʽ��˻�״̬
  //enum����
  //THOST_FTDC_MAS_Cancel -> '1', ����
  //THOST_FTDC_MAS_Normal -> '0', ����
  t->MoneyAccountStatus =   PyString_AsString(PyObject_GetAttrString(p, "MoneyAccountStatus"))[0];
  //���̷�֧��������
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //��������
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //�绰����
  strcpy(t->Telephone, PyString_AsString(PyObject_GetAttrString(p, "Telephone")));
  //֤������
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //��֤�ͻ�֤�������־
  //enum����
  //THOST_FTDC_YNI_No -> '1', ��
  //THOST_FTDC_YNI_Yes -> '0', ��
  t->VerifyCertNoFlag =   PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
  //����ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //Ͷ�����ʺ�
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //�����ʺ�
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //����
  strcpy(t->Fax, PyString_AsString(PyObject_GetAttrString(p, "Fax")));
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //�ڻ��ʽ�����˶Ա�־
  //enum����
  //THOST_FTDC_BPWDF_BlankCheck -> '1', ���ĺ˶�
  //THOST_FTDC_BPWDF_NoCheck -> '0', ���˶�
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', ���ĺ˶�
  t->SecuPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
  //�ͻ�����
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //���Ҵ���
  strcpy(t->CountryCode, PyString_AsString(PyObject_GetAttrString(p, "CountryCode")));
  //ҵ������
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //���з�֧��������
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //�Ự��
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //��ַ
  strcpy(t->Address, PyString_AsString(PyObject_GetAttrString(p, "Address")));
  //����ƽ̨��Ϣ��ˮ��
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //���������־
  //enum����
  //THOST_FTDC_BPWDF_BlankCheck -> '1', ���ĺ˶�
  //THOST_FTDC_BPWDF_NoCheck -> '0', ���˶�
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', ���ĺ˶�
  t->BankPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
  //�������
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //�ͻ�����
  //enum����
  //THOST_FTDC_CUSTT_Institution -> '1', ������
  //THOST_FTDC_CUSTT_Person -> '0', ��Ȼ��
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //�Ա�
  //enum����
  //THOST_FTDC_GD_Unknown -> '0', δ֪״̬
  //THOST_FTDC_GD_Female -> '2', Ů
  //THOST_FTDC_GD_Male -> '1', ��
  t->Gender =   PyString_AsString(PyObject_GetAttrString(p, "Gender"))[0];
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //������ˮ��
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //���׹�Ա
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //����ϵͳ����
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //�ڻ���λ�ʺ�
  strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
  //���̴���
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //�㳮��־
  //enum����
  //THOST_FTDC_CEC_Exchange -> '1', ��
  //THOST_FTDC_CEC_Cash -> '2', ��
  t->CashExchangeCode =   PyString_AsString(PyObject_GetAttrString(p, "CashExchangeCode"))[0];
  //֤������
  //enum����
  //THOST_FTDC_ICT_LicenseNo -> '9', Ӫҵִ�պ�
  //THOST_FTDC_ICT_TaxNo -> 'A', ˰��ǼǺ�
  //THOST_FTDC_ICT_OfficerIDCard -> '2', ����֤
  //THOST_FTDC_ICT_IDCard -> '1', ���֤
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', ̨��֤
  //THOST_FTDC_ICT_OtherCard -> 'x', ����֤��
  //THOST_FTDC_ICT_PoliceIDCard -> '3', ����֤
  //THOST_FTDC_ICT_Passport -> '6', ����
  //THOST_FTDC_ICT_EID -> '0', ��֯��������
  //THOST_FTDC_ICT_HomeComingCard -> '8', ����֤
  //THOST_FTDC_ICT_HouseholdRegister -> '5', ���ڲ�
  //THOST_FTDC_ICT_SoldierIDCard -> '4', ʿ��֤
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //�ڻ�����
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //�ֻ�
  strcpy(t->MobilePhone, PyString_AsString(PyObject_GetAttrString(p, "MobilePhone")));
  //��������
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //���ִ���
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //������Ϣ
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //�����ʺ�����
  //enum����
  //THOST_FTDC_BAT_SavingCard -> '2', ���
  //THOST_FTDC_BAT_CreditCard -> '3', ���ÿ�
  //THOST_FTDC_BAT_BankBook -> '1', ���д���
  t->BankAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
  //����Ƭ��־
  //enum����
  //THOST_FTDC_LF_No -> '1', ��������Ƭ
  //THOST_FTDC_LF_Yes -> '0', ������Ƭ
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //�ʱ�
  strcpy(t->ZipCode, PyString_AsString(PyObject_GetAttrString(p, "ZipCode")));
  //�ڻ���λ�ʺ�����
  //enum����
  //THOST_FTDC_BAT_SavingCard -> '2', ���
  //THOST_FTDC_BAT_CreditCard -> '3', ���ÿ�
  //THOST_FTDC_BAT_BankBook -> '1', ���д���
  t->BankSecuAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
  //�ڻ���˾���б���
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //����ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //�����ʼ�
  strcpy(t->EMail, PyString_AsString(PyObject_GetAttrString(p, "EMail")));
  //ժҪ
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
  //������־
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));

  return t;
};

//¼��ֹ��ֹӯ��
PyObject * new_CTKSProfitAndLossOrderInsert(CTKSProfitAndLossOrderInsert * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CTKSProfitAndLossOrderInsert", (char*)"sdsisscscdscdd",
p->ExchangeID, p->TakeProfitPrice, p->OrderLocalID, p->TriggeredTimes, p->BusinessUnit, p->CurrencyID, p->SpringType, p->InvestorID, p->CloseMode, p->FiguresPrice, p->BrokerID, p->OffsetValue, p->StopLossPrice, p->FloatLimitPrice);
}
CTKSProfitAndLossOrderInsert * from_CTKSProfitAndLossOrderInsert(PyObject * p){
CTKSProfitAndLossOrderInsert *t = (CTKSProfitAndLossOrderInsert *)calloc(1, sizeof(CTKSProfitAndLossOrderInsert));
  memset(t,0,sizeof(CTKSProfitAndLossOrderInsert));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //ֹӯ��
  t->TakeProfitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TakeProfitPrice"));
  //���ر������
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //ֹ�𵥴�������
  t->TriggeredTimes =   PyInt_AsLong(PyObject_GetAttrString(p, "TriggeredTimes"));
  //ҵ��Ԫ
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //���Ҵ���
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //�����������۸�����
  //enum����
  //KSPL_SPRING_LastPrice -> '0', ���¼�
  //KSPL_SPRING_SalePrice -> '1', ������
  t->SpringType =   PyString_AsString(PyObject_GetAttrString(p, "SpringType"))[0];
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //ƽ�ַ�ʽ
  //enum����
  //KSPL_Close_SalePrice -> '1', �Ӽ�������
  //KSPL_Close_MarketPrice -> '0', �м�
  //KSPL_Close_LastPrice -> '2', �Ӽ����¼�
  t->CloseMode =   PyString_AsString(PyObject_GetAttrString(p, "CloseMode"))[0];
  //ƽ�ַ���Ӽ���λ����ƽ�ַ�ʽ=1��2ʱ��Ч��
  t->FiguresPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FiguresPrice"));
  //Ӫҵ������
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //����ӯ��۵ķ�ʽ
  //enum����
  //KSPL_OffsetValue_TradePrice -> '1', ���ֳɽ��۵����ƫ��ֵ
  //KSPL_OffsetValue_TermPrice -> '0', ָ��ֵ
  t->OffsetValue =   PyString_AsString(PyObject_GetAttrString(p, "OffsetValue"))[0];
  //ֹ���
  t->StopLossPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StopLossPrice"));
  //����ֹ���
  t->FloatLimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FloatLimitPrice"));

  return t;
};

//��ѯ�����¼�֪ͨ
PyObject * new_CThostFtdcQryTradingNoticeField(KingstarAPI::CThostFtdcQryTradingNoticeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryTradingNoticeField", (char*)"ss",
p->InvestorID, p->BrokerID);
}
KingstarAPI::CThostFtdcQryTradingNoticeField * from_CThostFtdcQryTradingNoticeField(PyObject * p){
  KingstarAPI::CThostFtdcQryTradingNoticeField *t = (KingstarAPI::CThostFtdcQryTradingNoticeField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryTradingNoticeField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryTradingNoticeField));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//��ѯ���󱨵�
PyObject * new_CThostFtdcQryErrOrderField(KingstarAPI::CThostFtdcQryErrOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryErrOrderField", (char*)"ss",
p->InvestorID, p->BrokerID);
}
KingstarAPI::CThostFtdcQryErrOrderField * from_CThostFtdcQryErrOrderField(PyObject * p){
  KingstarAPI::CThostFtdcQryErrOrderField *t = (KingstarAPI::CThostFtdcQryErrOrderField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryErrOrderField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryErrOrderField));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//�ֹ�ͬ���û���̬����
PyObject * new_CThostFtdcManualSyncBrokerUserOTPField(KingstarAPI::CThostFtdcManualSyncBrokerUserOTPField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcManualSyncBrokerUserOTPField", (char*)"ssssc",
p->UserID, p->BrokerID, p->FirstOTP, p->SecondOTP, p->OTPType);
}
KingstarAPI::CThostFtdcManualSyncBrokerUserOTPField * from_CThostFtdcManualSyncBrokerUserOTPField(PyObject * p){
  KingstarAPI::CThostFtdcManualSyncBrokerUserOTPField *t = (KingstarAPI::CThostFtdcManualSyncBrokerUserOTPField *)calloc(1, sizeof(KingstarAPI::CThostFtdcManualSyncBrokerUserOTPField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcManualSyncBrokerUserOTPField));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //��һ����̬����
  strcpy(t->FirstOTP, PyString_AsString(PyObject_GetAttrString(p, "FirstOTP")));
  //�ڶ�����̬����
  strcpy(t->SecondOTP, PyString_AsString(PyObject_GetAttrString(p, "SecondOTP")));
  //��̬��������
  //enum����
  //THOST_FTDC_OTP_NONE -> '0', �޶�̬����
  //THOST_FTDC_OTP_TOTP -> '1', ʱ������
  t->OTPType =   PyString_AsString(PyObject_GetAttrString(p, "OTPType"))[0];

  return t;
};

//�������
PyObject * new_CThostFtdcDepthMarketDataField(KingstarAPI::CThostFtdcDepthMarketDataField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcDepthMarketDataField", (char*)"ddddddddddddddisidiiiiddiiiiidisdssddddddsd",
p->HighestPrice, p->BidPrice5, p->BidPrice4, p->BidPrice1, p->BidPrice3, p->BidPrice2, p->LowerLimitPrice, p->OpenPrice, p->AskPrice5, p->AskPrice4, p->AskPrice3, p->PreClosePrice, p->AskPrice1, p->PreSettlementPrice, p->AskVolume1, p->UpdateTime, p->UpdateMillisec, p->AveragePrice, p->BidVolume5, p->BidVolume4, p->BidVolume3, p->BidVolume2, p->PreOpenInterest, p->AskPrice2, p->Volume, p->AskVolume3, p->AskVolume2, p->AskVolume5, p->AskVolume4, p->UpperLimitPrice, p->BidVolume1, p->InstrumentID, p->ClosePrice, p->ExchangeID, p->TradingDay, p->PreDelta, p->OpenInterest, p->CurrDelta, p->Turnover, p->LastPrice, p->SettlementPrice, p->ExchangeInstID, p->LowestPrice);
}
KingstarAPI::CThostFtdcDepthMarketDataField * from_CThostFtdcDepthMarketDataField(PyObject * p){
  KingstarAPI::CThostFtdcDepthMarketDataField *t = (KingstarAPI::CThostFtdcDepthMarketDataField *)calloc(1, sizeof(KingstarAPI::CThostFtdcDepthMarketDataField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcDepthMarketDataField));
  //��߼�
  t->HighestPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "HighestPrice"));
  //�������
  t->BidPrice5 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice5"));
  //�������
  t->BidPrice4 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice4"));
  //�����һ
  t->BidPrice1 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice1"));
  //�������
  t->BidPrice3 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice3"));
  //����۶�
  t->BidPrice2 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice2"));
  //��ͣ���
  t->LowerLimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LowerLimitPrice"));
  //����
  t->OpenPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenPrice"));
  //��������
  t->AskPrice5 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice5"));
  //��������
  t->AskPrice4 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice4"));
  //��������
  t->AskPrice3 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice3"));
  //������
  t->PreClosePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreClosePrice"));
  //������һ
  t->AskPrice1 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice1"));
  //�ϴν����
  t->PreSettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreSettlementPrice"));
  //������һ
  t->AskVolume1 =   PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume1"));
  //����޸�ʱ��
  strcpy(t->UpdateTime, PyString_AsString(PyObject_GetAttrString(p, "UpdateTime")));
  //����޸ĺ���
  t->UpdateMillisec =   PyInt_AsLong(PyObject_GetAttrString(p, "UpdateMillisec"));
  //���վ���
  t->AveragePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AveragePrice"));
  //��������
  t->BidVolume5 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume5"));
  //��������
  t->BidVolume4 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume4"));
  //��������
  t->BidVolume3 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume3"));
  //��������
  t->BidVolume2 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume2"));
  //��ֲ���
  t->PreOpenInterest =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreOpenInterest"));
  //�����۶�
  t->AskPrice2 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice2"));
  //����
  t->Volume =   PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));
  //��������
  t->AskVolume3 =   PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume3"));
  //��������
  t->AskVolume2 =   PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume2"));
  //��������
  t->AskVolume5 =   PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume5"));
  //��������
  t->AskVolume4 =   PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume4"));
  //��ͣ���
  t->UpperLimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "UpperLimitPrice"));
  //������һ
  t->BidVolume1 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume1"));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //������
  t->ClosePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ClosePrice"));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //����ʵ��
  t->PreDelta =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreDelta"));
  //�ֲ���
  t->OpenInterest =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenInterest"));
  //����ʵ��
  t->CurrDelta =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CurrDelta"));
  //�ɽ����
  t->Turnover =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Turnover"));
  //���¼�
  t->LastPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LastPrice"));
  //���ν����
  t->SettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SettlementPrice"));
  //��Լ�ڽ������Ĵ���
  strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
  //��ͼ�
  t->LowestPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LowestPrice"));

  return t;
};

//����������Ա���̻�
PyObject * new_CThostFtdcTraderOfferField(KingstarAPI::CThostFtdcTraderOfferField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTraderOfferField", (char*)"ssissssssscssssssss",
p->StartDate, p->ExchangeID, p->InstallID, p->LastReportDate, p->ParticipantID, p->OrderLocalID, p->LastReportTime, p->TraderID, p->MaxTradeID, p->ConnectTime, p->TraderConnectStatus, p->TradingDay, p->ConnectRequestTime, p->StartTime, p->ConnectRequestDate, p->MaxOrderMessageReference, p->BrokerID, p->Password, p->ConnectDate);
}
KingstarAPI::CThostFtdcTraderOfferField * from_CThostFtdcTraderOfferField(PyObject * p){
  KingstarAPI::CThostFtdcTraderOfferField *t = (KingstarAPI::CThostFtdcTraderOfferField *)calloc(1, sizeof(KingstarAPI::CThostFtdcTraderOfferField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcTraderOfferField));
  //��������
  strcpy(t->StartDate, PyString_AsString(PyObject_GetAttrString(p, "StartDate")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //�ϴα�������
  strcpy(t->LastReportDate, PyString_AsString(PyObject_GetAttrString(p, "LastReportDate")));
  //��Ա����
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //���ر������
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //�ϴα���ʱ��
  strcpy(t->LastReportTime, PyString_AsString(PyObject_GetAttrString(p, "LastReportTime")));
  //����������Ա����
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //��ϯλ���ɽ����
  strcpy(t->MaxTradeID, PyString_AsString(PyObject_GetAttrString(p, "MaxTradeID")));
  //�������ʱ��
  strcpy(t->ConnectTime, PyString_AsString(PyObject_GetAttrString(p, "ConnectTime")));
  //����������Ա����״̬
  //enum����
  //THOST_FTDC_TCS_NotConnected -> '1', û���κ�����
  //THOST_FTDC_TCS_SubPrivateFlow -> '4', ����˽����
  //THOST_FTDC_TCS_QryInstrumentSent -> '3', �Ѿ�������Լ��ѯ����
  //THOST_FTDC_TCS_Connected -> '2', �Ѿ�����
  t->TraderConnectStatus =   PyString_AsString(PyObject_GetAttrString(p, "TraderConnectStatus"))[0];
  //������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //�������������ʱ��
  strcpy(t->ConnectRequestTime, PyString_AsString(PyObject_GetAttrString(p, "ConnectRequestTime")));
  //����ʱ��
  strcpy(t->StartTime, PyString_AsString(PyObject_GetAttrString(p, "StartTime")));
  //�����������������
  strcpy(t->ConnectRequestDate, PyString_AsString(PyObject_GetAttrString(p, "ConnectRequestDate")));
  //��ϯλ��󱨵�����
  strcpy(t->MaxOrderMessageReference, PyString_AsString(PyObject_GetAttrString(p, "MaxOrderMessageReference")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //����
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //�����������
  strcpy(t->ConnectDate, PyString_AsString(PyObject_GetAttrString(p, "ConnectDate")));

  return t;
};

//��֤����ϵͳ���͹�˾��Կ
PyObject * new_CThostFtdcCFMMCBrokerKeyField(KingstarAPI::CThostFtdcCFMMCBrokerKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcCFMMCBrokerKeyField", (char*)"isscsss",
p->KeyID, p->ParticipantID, p->CreateDate, p->KeyKind, p->BrokerID, p->CreateTime, p->CurrentKey);
}
KingstarAPI::CThostFtdcCFMMCBrokerKeyField * from_CThostFtdcCFMMCBrokerKeyField(PyObject * p){
  KingstarAPI::CThostFtdcCFMMCBrokerKeyField *t = (KingstarAPI::CThostFtdcCFMMCBrokerKeyField *)calloc(1, sizeof(KingstarAPI::CThostFtdcCFMMCBrokerKeyField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcCFMMCBrokerKeyField));
  //��Կ���
  t->KeyID =   PyInt_AsLong(PyObject_GetAttrString(p, "KeyID"));
  //���͹�˾ͳһ����
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //��Կ��������
  strcpy(t->CreateDate, PyString_AsString(PyObject_GetAttrString(p, "CreateDate")));
  //��̬��Կ����
  //enum����
  //THOST_FTDC_CFMMCKK_MANUAL -> 'M', CFMMC�ֶ�����
  //THOST_FTDC_CFMMCKK_REQUEST -> 'R', �����������
  //THOST_FTDC_CFMMCKK_AUTO -> 'A', CFMMC�Զ�����
  t->KeyKind =   PyString_AsString(PyObject_GetAttrString(p, "KeyKind"))[0];
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //��Կ����ʱ��
  strcpy(t->CreateTime, PyString_AsString(PyObject_GetAttrString(p, "CreateTime")));
  //��̬��Կ
  strcpy(t->CurrentKey, PyString_AsString(PyObject_GetAttrString(p, "CurrentKey")));

  return t;
};

//��ѯ����
PyObject * new_CThostFtdcQryDepthMarketDataField(KingstarAPI::CThostFtdcQryDepthMarketDataField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryDepthMarketDataField", (char*)"s",
p->InstrumentID);
}
KingstarAPI::CThostFtdcQryDepthMarketDataField * from_CThostFtdcQryDepthMarketDataField(PyObject * p){
  KingstarAPI::CThostFtdcQryDepthMarketDataField *t = (KingstarAPI::CThostFtdcQryDepthMarketDataField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryDepthMarketDataField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryDepthMarketDataField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));

  return t;
};

//��ѯ���н�����ϸ����TradeCode=204999
PyObject * new_CThostFtdcTransferQryDetailReqField(KingstarAPI::CThostFtdcTransferQryDetailReqField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferQryDetailReqField", (char*)"s",
p->FutureAccount);
}
KingstarAPI::CThostFtdcTransferQryDetailReqField * from_CThostFtdcTransferQryDetailReqField(PyObject * p){
  KingstarAPI::CThostFtdcTransferQryDetailReqField *t = (KingstarAPI::CThostFtdcTransferQryDetailReqField *)calloc(1, sizeof(KingstarAPI::CThostFtdcTransferQryDetailReqField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcTransferQryDetailReqField));
  //�ڻ��ʽ��˻�
  strcpy(t->FutureAccount, PyString_AsString(PyObject_GetAttrString(p, "FutureAccount")));

  return t;
};

//���͹�˾�����ʽ��㷨��
PyObject * new_CThostFtdcBrokerWithdrawAlgorithmField(KingstarAPI::CThostFtdcBrokerWithdrawAlgorithmField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerWithdrawAlgorithmField", (char*)"cicdscc",
p->IncludeCloseProfit, p->IsBrokerUserEvent, p->AvailIncludeCloseProfit, p->UsingRatio, p->BrokerID, p->AllWithoutTrade, p->WithdrawAlgorithm);
}
KingstarAPI::CThostFtdcBrokerWithdrawAlgorithmField * from_CThostFtdcBrokerWithdrawAlgorithmField(PyObject * p){
  KingstarAPI::CThostFtdcBrokerWithdrawAlgorithmField *t = (KingstarAPI::CThostFtdcBrokerWithdrawAlgorithmField *)calloc(1, sizeof(KingstarAPI::CThostFtdcBrokerWithdrawAlgorithmField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcBrokerWithdrawAlgorithmField));
  //�����Ƿ����ƽ��ӯ��
  //enum����
  //THOST_FTDC_ICP_NotInclude -> '2', ������ƽ��ӯ��
  //THOST_FTDC_ICP_Include -> '0', ����ƽ��ӯ��
  t->IncludeCloseProfit =   PyString_AsString(PyObject_GetAttrString(p, "IncludeCloseProfit"))[0];
  //�Ƿ������û��¼�
  t->IsBrokerUserEvent =   PyInt_AsLong(PyObject_GetAttrString(p, "IsBrokerUserEvent"));
  //�����Ƿ����ƽ��ӯ��
  //enum����
  //THOST_FTDC_ICP_NotInclude -> '2', ������ƽ��ӯ��
  //THOST_FTDC_ICP_Include -> '0', ����ƽ��ӯ��
  t->AvailIncludeCloseProfit =   PyString_AsString(PyObject_GetAttrString(p, "AvailIncludeCloseProfit"))[0];
  //�ʽ�ʹ����
  t->UsingRatio =   PyFloat_AsDouble(PyObject_GetAttrString(p, "UsingRatio"));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //�����޲����޳ɽ��ͻ��Ƿ��ܿ����������
  //enum����
  //THOST_FTDC_AWT_Enable -> '0', ���ܿ����������
  //THOST_FTDC_AWT_Disable -> '2', �ܿ����������
  t->AllWithoutTrade =   PyString_AsString(PyObject_GetAttrString(p, "AllWithoutTrade"))[0];
  //�����ʽ��㷨
  //enum����
  //THOST_FTDC_AG_OnlyLost -> '2', ��ӯ���ƣ�������
  //THOST_FTDC_AG_None -> '4', ��ӯ������������
  //THOST_FTDC_AG_All -> '1', ��ӯ����������
  //THOST_FTDC_AG_OnlyGain -> '3', ��ӯ�ƣ���������
  t->WithdrawAlgorithm =   PyString_AsString(PyObject_GetAttrString(p, "WithdrawAlgorithm"))[0];

  return t;
};

//���齻������������
PyObject * new_CThostFtdcMarketDataExchangeField(KingstarAPI::CThostFtdcMarketDataExchangeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataExchangeField", (char*)"d",
p->ExchangeID);
}
KingstarAPI::CThostFtdcMarketDataExchangeField * from_CThostFtdcMarketDataExchangeField(PyObject * p){
  KingstarAPI::CThostFtdcMarketDataExchangeField *t = (KingstarAPI::CThostFtdcMarketDataExchangeField *)calloc(1, sizeof(KingstarAPI::CThostFtdcMarketDataExchangeField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcMarketDataExchangeField));
  //����������
  t->ExchangeID =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeID"));

  return t;
};

//��������������ʧ��
PyObject * new_CThostFtdcExchangeOrderInsertErrorField(KingstarAPI::CThostFtdcExchangeOrderInsertErrorField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcExchangeOrderInsertErrorField", (char*)"sissssi",
p->ExchangeID, p->InstallID, p->ParticipantID, p->OrderLocalID, p->ErrorMsg, p->TraderID, p->ErrorID);
}
KingstarAPI::CThostFtdcExchangeOrderInsertErrorField * from_CThostFtdcExchangeOrderInsertErrorField(PyObject * p){
  KingstarAPI::CThostFtdcExchangeOrderInsertErrorField *t = (KingstarAPI::CThostFtdcExchangeOrderInsertErrorField *)calloc(1, sizeof(KingstarAPI::CThostFtdcExchangeOrderInsertErrorField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcExchangeOrderInsertErrorField));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //��Ա����
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //���ر������
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //������Ϣ
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //����������Ա����
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //�������
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));

  return t;
};

//��ѯ�����û�����Ȩ��
PyObject * new_CThostFtdcQrySuperUserFunctionField(KingstarAPI::CThostFtdcQrySuperUserFunctionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQrySuperUserFunctionField", (char*)"s",
p->UserID);
}
KingstarAPI::CThostFtdcQrySuperUserFunctionField * from_CThostFtdcQrySuperUserFunctionField(PyObject * p){
  KingstarAPI::CThostFtdcQrySuperUserFunctionField *t = (KingstarAPI::CThostFtdcQrySuperUserFunctionField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQrySuperUserFunctionField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQrySuperUserFunctionField));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));

  return t;
};

//������Ӧ
PyObject * new_CThostFtdcRspRepealField(KingstarAPI::CThostFtdcRspRepealField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspRepealField", (char*)"ssscisciissicsssisiciicscsssssscccsdssdccissicsisdds",
p->BrokerBranchID, p->UserID, p->BankPassWord, p->BankRepealFlag, p->RepealedTimes, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->FutureRepealSerial, p->AccountID, p->BankAccount, p->InstallID, p->SecuPwdFlag, p->CustomerName, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->PlateSerial, p->BankPwdFlag, p->ErrorID, p->RequestID, p->CustType, p->IdentifiedCardNo, p->FeePayFlag, p->BankSerial, p->OperNo, p->TradingDay, p->BankSecuAcc, p->BrokerID, p->DeviceID, p->TransferStatus, p->BrokerRepealFlag, p->IdCardType, p->Password, p->FutureFetchAmount, p->TradeDate, p->CurrencyID, p->BrokerFee, p->BankAccType, p->LastFragment, p->FutureSerial, p->BankRepealSerial, p->ErrorMsg, p->RepealTimeInterval, p->BankSecuAccType, p->BrokerIDByBank, p->PlateRepealSerial, p->Message, p->CustFee, p->TradeAmount, p->Digest);
}
KingstarAPI::CThostFtdcRspRepealField * from_CThostFtdcRspRepealField(PyObject * p){
  KingstarAPI::CThostFtdcRspRepealField *t = (KingstarAPI::CThostFtdcRspRepealField *)calloc(1, sizeof(KingstarAPI::CThostFtdcRspRepealField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcRspRepealField));
  //���̷�֧��������
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //�û���ʶ
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //��������
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //���г�����־
  //enum����
  //THOST_FTDC_BRF_BankWaitingRepeal -> '1', ���д��Զ�����
  //THOST_FTDC_BRF_BankNotNeedRepeal -> '0', ���������Զ�����
  //THOST_FTDC_BRF_BankBeenRepealed -> '2', �������Զ�����
  t->BankRepealFlag =   PyString_AsString(PyObject_GetAttrString(p, "BankRepealFlag"))[0];
  //�Ѿ���������
  t->RepealedTimes =   PyInt_AsLong(PyObject_GetAttrString(p, "RepealedTimes"));
  //����ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //��֤�ͻ�֤�������־
  //enum����
  //THOST_FTDC_YNI_No -> '1', ��
  //THOST_FTDC_YNI_Yes -> '0', ��
  t->VerifyCertNoFlag =   PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
  //����ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //�������ڻ���ˮ��
  t->FutureRepealSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "FutureRepealSerial"));
  //Ͷ�����ʺ�
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //�����ʺ�
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //�ڻ��ʽ�����˶Ա�־
  //enum����
  //THOST_FTDC_BPWDF_BlankCheck -> '1', ���ĺ˶�
  //THOST_FTDC_BPWDF_NoCheck -> '0', ���˶�
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', ���ĺ˶�
  t->SecuPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
  //�ͻ�����
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //ҵ������
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //���з�֧��������
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //�Ự��
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //����ƽ̨��Ϣ��ˮ��
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //���������־
  //enum����
  //THOST_FTDC_BPWDF_BlankCheck -> '1', ���ĺ˶�
  //THOST_FTDC_BPWDF_NoCheck -> '0', ���˶�
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', ���ĺ˶�
  t->BankPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
  //�������
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //������
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //�ͻ�����
  //enum����
  //THOST_FTDC_CUSTT_Institution -> '1', ������
  //THOST_FTDC_CUSTT_Person -> '0', ��Ȼ��
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //֤������
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //����֧����־
  //enum����
  //THOST_FTDC_FPF_BEN -> '0', �����淽֧������
  //THOST_FTDC_FPF_SHA -> '2', �ɷ��ͷ�֧������ķ��ã����淽֧�����ܵķ���
  //THOST_FTDC_FPF_OUR -> '1', �ɷ��ͷ�֧������
  t->FeePayFlag =   PyString_AsString(PyObject_GetAttrString(p, "FeePayFlag"))[0];
  //������ˮ��
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //���׹�Ա
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //����ϵͳ����
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //�ڻ���λ�ʺ�
  strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
  //���̴���
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //������־
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //ת�˽���״̬
  //enum����
  //THOST_FTDC_TRFS_Normal -> '0', ����
  //THOST_FTDC_TRFS_Repealed -> '1', ������
  t->TransferStatus =   PyString_AsString(PyObject_GetAttrString(p, "TransferStatus"))[0];
  //���̳�����־
  //enum����
  //THOST_FTDC_BRORF_BrokerNotNeedRepeal -> '0', ���������Զ�����
  //THOST_FTDC_BRORF_BrokerBeenRepealed -> '2', �������Զ�����
  //THOST_FTDC_BRORF_BrokerWaitingRepeal -> '1', ���̴��Զ�����
  t->BrokerRepealFlag =   PyString_AsString(PyObject_GetAttrString(p, "BrokerRepealFlag"))[0];
  //֤������
  //enum����
  //THOST_FTDC_ICT_LicenseNo -> '9', Ӫҵִ�պ�
  //THOST_FTDC_ICT_TaxNo -> 'A', ˰��ǼǺ�
  //THOST_FTDC_ICT_OfficerIDCard -> '2', ����֤
  //THOST_FTDC_ICT_IDCard -> '1', ���֤
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', ̨��֤
  //THOST_FTDC_ICT_OtherCard -> 'x', ����֤��
  //THOST_FTDC_ICT_PoliceIDCard -> '3', ����֤
  //THOST_FTDC_ICT_Passport -> '6', ����
  //THOST_FTDC_ICT_EID -> '0', ��֯��������
  //THOST_FTDC_ICT_HomeComingCard -> '8', ����֤
  //THOST_FTDC_ICT_HouseholdRegister -> '5', ���ڲ�
  //THOST_FTDC_ICT_SoldierIDCard -> '4', ʿ��֤
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //�ڻ�����
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //�ڻ���ȡ���
  t->FutureFetchAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FutureFetchAmount"));
  //��������
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //���ִ���
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //Ӧ���ڻ���˾����
  t->BrokerFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BrokerFee"));
  //�����ʺ�����
  //enum����
  //THOST_FTDC_BAT_SavingCard -> '2', ���
  //THOST_FTDC_BAT_CreditCard -> '3', ���ÿ�
  //THOST_FTDC_BAT_BankBook -> '1', ���д���
  t->BankAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
  //����Ƭ��־
  //enum����
  //THOST_FTDC_LF_No -> '1', ��������Ƭ
  //THOST_FTDC_LF_Yes -> '0', ������Ƭ
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //�ڻ���˾��ˮ��
  t->FutureSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
  //������������ˮ��
  strcpy(t->BankRepealSerial, PyString_AsString(PyObject_GetAttrString(p, "BankRepealSerial")));
  //������Ϣ
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //����ʱ����
  t->RepealTimeInterval =   PyInt_AsLong(PyObject_GetAttrString(p, "RepealTimeInterval"));
  //�ڻ���λ�ʺ�����
  //enum����
  //THOST_FTDC_BAT_SavingCard -> '2', ���
  //THOST_FTDC_BAT_CreditCard -> '3', ���ÿ�
  //THOST_FTDC_BAT_BankBook -> '1', ���д���
  t->BankSecuAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
  //�ڻ���˾���б���
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //������ƽ̨��ˮ��
  t->PlateRepealSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateRepealSerial"));
  //���ͷ������շ�����Ϣ
  strcpy(t->Message, PyString_AsString(PyObject_GetAttrString(p, "Message")));
  //Ӧ�տͻ�����
  t->CustFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));
  //ת�ʽ��
  t->TradeAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
  //ժҪ
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

  return t;
};

//��ѯ�ɽ�
PyObject * new_CThostFtdcQryTradeField(KingstarAPI::CThostFtdcQryTradeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryTradeField", (char*)"sssssss",
p->InstrumentID, p->TradeTimeStart, p->ExchangeID, p->TradeID, p->InvestorID, p->BrokerID, p->TradeTimeEnd);
}
KingstarAPI::CThostFtdcQryTradeField * from_CThostFtdcQryTradeField(PyObject * p){
  KingstarAPI::CThostFtdcQryTradeField *t = (KingstarAPI::CThostFtdcQryTradeField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryTradeField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryTradeField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //��ʼʱ��
  strcpy(t->TradeTimeStart, PyString_AsString(PyObject_GetAttrString(p, "TradeTimeStart")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //�ɽ����
  strcpy(t->TradeID, PyString_AsString(PyObject_GetAttrString(p, "TradeID")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //����ʱ��
  strcpy(t->TradeTimeEnd, PyString_AsString(PyObject_GetAttrString(p, "TradeTimeEnd")));

  return t;
};

//�û��¼�֪ͨ��Ϣ
PyObject * new_CThostFtdcTradingNoticeInfoField(KingstarAPI::CThostFtdcTradingNoticeInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTradingNoticeInfoField", (char*)"hissss",
p->SequenceSeries, p->SequenceNo, p->FieldContent, p->InvestorID, p->BrokerID, p->SendTime);
}
KingstarAPI::CThostFtdcTradingNoticeInfoField * from_CThostFtdcTradingNoticeInfoField(PyObject * p){
  KingstarAPI::CThostFtdcTradingNoticeInfoField *t = (KingstarAPI::CThostFtdcTradingNoticeInfoField *)calloc(1, sizeof(KingstarAPI::CThostFtdcTradingNoticeInfoField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcTradingNoticeInfoField));
  //����ϵ�к�
  t->SequenceSeries =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceSeries"));
  //���к�
  t->SequenceNo =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //��Ϣ����
  strcpy(t->FieldContent, PyString_AsString(PyObject_GetAttrString(p, "FieldContent")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //����ʱ��
  strcpy(t->SendTime, PyString_AsString(PyObject_GetAttrString(p, "SendTime")));

  return t;
};

//���󱨵�
PyObject * new_CThostFtdcErrOrderField(KingstarAPI::CThostFtdcErrOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcErrOrderField", (char*)"cssdiciccidsicisssssssci",
p->ContingentCondition, p->CombOffsetFlag, p->UserID, p->LimitPrice, p->UserForceClose, p->Direction, p->VolumeTotalOriginal, p->OrderPriceType, p->TimeCondition, p->IsAutoSuspend, p->StopPrice, p->InstrumentID, p->MinVolume, p->ForceCloseReason, p->ErrorID, p->BrokerID, p->CombHedgeFlag, p->GTDDate, p->BusinessUnit, p->ErrorMsg, p->OrderRef, p->InvestorID, p->VolumeCondition, p->RequestID);
}
KingstarAPI::CThostFtdcErrOrderField * from_CThostFtdcErrOrderField(PyObject * p){
  KingstarAPI::CThostFtdcErrOrderField *t = (KingstarAPI::CThostFtdcErrOrderField *)calloc(1, sizeof(KingstarAPI::CThostFtdcErrOrderField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcErrOrderField));
  //��������
  //enum����
  //THOST_FTDC_CC_BidPriceGreaterThanStopPrice -> 'D', ��һ�۴���������
  //THOST_FTDC_CC_AskPriceLesserEqualStopPrice -> 'C', ��һ��С�ڵ���������
  //THOST_FTDC_CC_AskPriceGreaterThanStopPrice -> '9', ��һ�۴���������
  //THOST_FTDC_CC_LastPriceLesserThanStopPrice -> '7', ���¼�С��������
  //THOST_FTDC_CC_LastPriceGreaterEqualStopPrice -> '6', ���¼۴��ڵ���������
  //THOST_FTDC_CC_BidPriceGreaterEqualStopPrice -> 'E', ��һ�۴��ڵ���������
  //THOST_FTDC_CC_LastPriceLesserEqualStopPrice -> '8', ���¼�С�ڵ���������
  //THOST_FTDC_CC_TouchProfit -> '3', ֹӮ
  //THOST_FTDC_CC_ParkedOrder -> '4', Ԥ��
  //THOST_FTDC_CC_AskPriceGreaterEqualStopPrice -> 'A', ��һ�۴��ڵ���������
  //THOST_FTDC_CC_BidPriceLesserEqualStopPrice -> 'H', ��һ��С�ڵ���������
  //THOST_FTDC_CC_LastPriceGreaterThanStopPrice -> '5', ���¼۴���������
  //THOST_FTDC_CC_BidPriceLesserThanStopPrice -> 'F', ��һ��С��������
  //THOST_FTDC_CC_AskPriceLesserThanStopPrice -> 'B', ��һ��С��������
  //THOST_FTDC_CC_Immediately -> '1', ����
  //THOST_FTDC_CC_Touch -> '2', ֹ��
  t->ContingentCondition =   PyString_AsString(PyObject_GetAttrString(p, "ContingentCondition"))[0];
  //��Ͽ�ƽ��־
  strcpy(t->CombOffsetFlag, PyString_AsString(PyObject_GetAttrString(p, "CombOffsetFlag")));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //�۸�
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //�û�ǿ����־
  t->UserForceClose =   PyInt_AsLong(PyObject_GetAttrString(p, "UserForceClose"));
  //��������
  //enum����
  //THOST_FTDC_D_Buy -> '0', ��
  //THOST_FTDC_D_Sell -> '1', ��
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //����
  t->VolumeTotalOriginal =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
  //�����۸�����
  //enum����
  //THOST_FTDC_OPT_AskPrice1PlusTwoTicks -> 'A', ��һ�۸����ϸ�2��ticks
  //THOST_FTDC_OPT_LastPricePlusTwoTicks -> '6', ���¼۸����ϸ�2��ticks
  //THOST_FTDC_OPT_AskPrice1PlusOneTicks -> '9', ��һ�۸����ϸ�1��ticks
  //THOST_FTDC_OPT_BidPrice1 -> 'C', ��һ��
  //THOST_FTDC_OPT_LimitPrice -> '2', �޼�
  //THOST_FTDC_OPT_LastPricePlusOneTicks -> '5', ���¼۸����ϸ�1��ticks
  //THOST_FTDC_OPT_LastPrice -> '4', ���¼�
  //THOST_FTDC_OPT_AskPrice1 -> '8', ��һ��
  //THOST_FTDC_OPT_AskPrice1PlusThreeTicks -> 'B', ��һ�۸����ϸ�3��ticks
  //THOST_FTDC_OPT_AnyPrice -> '1', �����
  //THOST_FTDC_OPT_BestPrice -> '3', ���ż�
  //THOST_FTDC_OPT_LastPricePlusThreeTicks -> '7', ���¼۸����ϸ�3��ticks
  //THOST_FTDC_OPT_BidPrice1PlusOneTicks -> 'D', ��һ�۸����ϸ�1��ticks
  //THOST_FTDC_OPT_BidPrice1PlusTwoTicks -> 'E', ��һ�۸����ϸ�2��ticks
  //THOST_FTDC_OPT_BidPrice1PlusThreeTicks -> 'F', ��һ�۸����ϸ�3��ticks
  t->OrderPriceType =   PyString_AsString(PyObject_GetAttrString(p, "OrderPriceType"))[0];
  //��Ч������
  //enum����
  //THOST_FTDC_TC_GTC -> '5', ����ǰ��Ч
  //THOST_FTDC_TC_GTD -> '4', ָ������ǰ��Ч
  //THOST_FTDC_TC_GFD -> '3', ������Ч
  //THOST_FTDC_TC_GFA -> '6', ���Ͼ�����Ч
  //THOST_FTDC_TC_IOC -> '1', ������ɣ�������
  //THOST_FTDC_TC_GFS -> '2', ������Ч
  t->TimeCondition =   PyString_AsString(PyObject_GetAttrString(p, "TimeCondition"))[0];
  //�Զ������־
  t->IsAutoSuspend =   PyInt_AsLong(PyObject_GetAttrString(p, "IsAutoSuspend"));
  //ֹ���
  t->StopPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StopPrice"));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //��С�ɽ���
  t->MinVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MinVolume"));
  //ǿƽԭ��
  //enum����
  //THOST_FTDC_FCC_PersonDeliv -> '7', ��Ȼ���ٽ�����
  //THOST_FTDC_FCC_ClientOverPositionLimit -> '2', �ͻ�����
  //THOST_FTDC_FCC_NotForceClose -> '0', ��ǿƽ
  //THOST_FTDC_FCC_NotMultiple -> '4', �ֲַ�������
  //THOST_FTDC_FCC_MemberOverPositionLimit -> '3', ��Ա����
  //THOST_FTDC_FCC_LackDeposit -> '1', �ʽ���
  //THOST_FTDC_FCC_Other -> '6', ����
  //THOST_FTDC_FCC_Violation -> '5', Υ��
  t->ForceCloseReason =   PyString_AsString(PyObject_GetAttrString(p, "ForceCloseReason"))[0];
  //�������
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //���Ͷ���ױ���־
  strcpy(t->CombHedgeFlag, PyString_AsString(PyObject_GetAttrString(p, "CombHedgeFlag")));
  //GTD����
  strcpy(t->GTDDate, PyString_AsString(PyObject_GetAttrString(p, "GTDDate")));
  //ҵ��Ԫ
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //������Ϣ
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //��������
  strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //�ɽ�������
  //enum����
  //THOST_FTDC_VC_MV -> '2', ��С����
  //THOST_FTDC_VC_CV -> '3', ȫ������
  //THOST_FTDC_VC_AV -> '1', �κ�����
  t->VolumeCondition =   PyString_AsString(PyObject_GetAttrString(p, "VolumeCondition"))[0];
  //������
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));

  return t;
};

//��ѯǩԼ������Ӧ
PyObject * new_CThostFtdcContractBankField(KingstarAPI::CThostFtdcContractBankField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcContractBankField", (char*)"ssss",
p->BankName, p->BrokerID, p->BankBrchID, p->BankID);
}
KingstarAPI::CThostFtdcContractBankField * from_CThostFtdcContractBankField(PyObject * p){
  KingstarAPI::CThostFtdcContractBankField *t = (KingstarAPI::CThostFtdcContractBankField *)calloc(1, sizeof(KingstarAPI::CThostFtdcContractBankField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcContractBankField));
  //��������
  strcpy(t->BankName, PyString_AsString(PyObject_GetAttrString(p, "BankName")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //���з����Ĵ���
  strcpy(t->BankBrchID, PyString_AsString(PyObject_GetAttrString(p, "BankBrchID")));
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));

  return t;
};

//��ѯԤ�񳷵�
PyObject * new_CThostFtdcQryParkedOrderActionField(KingstarAPI::CThostFtdcQryParkedOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryParkedOrderActionField", (char*)"ssss",
p->InstrumentID, p->InvestorID, p->ExchangeID, p->BrokerID);
}
KingstarAPI::CThostFtdcQryParkedOrderActionField * from_CThostFtdcQryParkedOrderActionField(PyObject * p){
  KingstarAPI::CThostFtdcQryParkedOrderActionField *t = (KingstarAPI::CThostFtdcQryParkedOrderActionField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryParkedOrderActionField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryParkedOrderActionField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//��Ʒ
PyObject * new_CThostFtdcProductField(KingstarAPI::CThostFtdcProductField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcProductField", (char*)"isciidsicics",
p->MaxLimitOrderVolume, p->ExchangeID, p->PositionDateType, p->MinLimitOrderVolume, p->MaxMarketOrderVolume, p->PriceTick, p->ProductName, p->VolumeMultiple, p->PositionType, p->MinMarketOrderVolume, p->ProductClass, p->ProductID);
}
KingstarAPI::CThostFtdcProductField * from_CThostFtdcProductField(PyObject * p){
  KingstarAPI::CThostFtdcProductField *t = (KingstarAPI::CThostFtdcProductField *)calloc(1, sizeof(KingstarAPI::CThostFtdcProductField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcProductField));
  //�޼۵�����µ���
  t->MaxLimitOrderVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MaxLimitOrderVolume"));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //�ֲ���������
  //enum����
  //THOST_FTDC_PDT_UseHistory -> '1', ʹ����ʷ�ֲ�
  //THOST_FTDC_PDT_NoUseHistory -> '2', ��ʹ����ʷ�ֲ�
  t->PositionDateType =   PyString_AsString(PyObject_GetAttrString(p, "PositionDateType"))[0];
  //�޼۵���С�µ���
  t->MinLimitOrderVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MinLimitOrderVolume"));
  //�м۵�����µ���
  t->MaxMarketOrderVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MaxMarketOrderVolume"));
  //��С�䶯��λ
  t->PriceTick =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PriceTick"));
  //��Ʒ����
  strcpy(t->ProductName, PyString_AsString(PyObject_GetAttrString(p, "ProductName")));
  //��Լ��������
  t->VolumeMultiple =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeMultiple"));
  //�ֲ�����
  //enum����
  //THOST_FTDC_PT_Net -> '1', ���ֲ�
  //THOST_FTDC_PT_Gross -> '2', �ۺϳֲ�
  t->PositionType =   PyString_AsString(PyObject_GetAttrString(p, "PositionType"))[0];
  //�м۵���С�µ���
  t->MinMarketOrderVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MinMarketOrderVolume"));
  //��Ʒ����
  //enum����
  //THOST_FTDC_PC_Futures -> '1', �ڻ�
  //THOST_FTDC_PC_Combination -> '3', ���
  //THOST_FTDC_PC_Options -> '2', ��Ȩ
  //THOST_FTDC_PC_EFP -> '5', ��ת��
  //THOST_FTDC_PC_Spot -> '4', ����
  t->ProductClass =   PyString_AsString(PyObject_GetAttrString(p, "ProductClass"))[0];
  //��Ʒ����
  strcpy(t->ProductID, PyString_AsString(PyObject_GetAttrString(p, "ProductID")));

  return t;
};

//��ѯ��֤����ϵͳ���͹�˾��Կ
PyObject * new_CThostFtdcQryCFMMCBrokerKeyField(KingstarAPI::CThostFtdcQryCFMMCBrokerKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryCFMMCBrokerKeyField", (char*)"s",
p->BrokerID);
}
KingstarAPI::CThostFtdcQryCFMMCBrokerKeyField * from_CThostFtdcQryCFMMCBrokerKeyField(PyObject * p){
  KingstarAPI::CThostFtdcQryCFMMCBrokerKeyField *t = (KingstarAPI::CThostFtdcQryCFMMCBrokerKeyField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryCFMMCBrokerKeyField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryCFMMCBrokerKeyField));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//���͹�˾�����㷨
PyObject * new_CThostFtdcBrokerTradingAlgosField(KingstarAPI::CThostFtdcBrokerTradingAlgosField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerTradingAlgosField", (char*)"scscsc",
p->InstrumentID, p->HandlePositionAlgoID, p->ExchangeID, p->FindMarginRateAlgoID, p->BrokerID, p->HandleTradingAccountAlgoID);
}
KingstarAPI::CThostFtdcBrokerTradingAlgosField * from_CThostFtdcBrokerTradingAlgosField(PyObject * p){
  KingstarAPI::CThostFtdcBrokerTradingAlgosField *t = (KingstarAPI::CThostFtdcBrokerTradingAlgosField *)calloc(1, sizeof(KingstarAPI::CThostFtdcBrokerTradingAlgosField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcBrokerTradingAlgosField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //�ֲִ����㷨���
  //enum����
  //THOST_FTDC_HPA_Base -> '1', ����
  //THOST_FTDC_HPA_CZCE -> '3', ֣����Ʒ������
  //THOST_FTDC_HPA_DCE -> '2', ������Ʒ������
  t->HandlePositionAlgoID =   PyString_AsString(PyObject_GetAttrString(p, "HandlePositionAlgoID"))[0];
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //Ѱ�ұ�֤�����㷨���
  //enum����
  //THOST_FTDC_FMRA_DCE -> '2', ������Ʒ������
  //THOST_FTDC_FMRA_Base -> '1', ����
  //THOST_FTDC_FMRA_CZCE -> '3', ֣����Ʒ������
  t->FindMarginRateAlgoID =   PyString_AsString(PyObject_GetAttrString(p, "FindMarginRateAlgoID"))[0];
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //�ʽ����㷨���
  //enum����
  //THOST_FTDC_HTAA_DCE -> '2', ������Ʒ������
  //THOST_FTDC_HTAA_Base -> '1', ����
  //THOST_FTDC_HTAA_CZCE -> '3', ֣����Ʒ������
  t->HandleTradingAccountAlgoID =   PyString_AsString(PyObject_GetAttrString(p, "HandleTradingAccountAlgoID"))[0];

  return t;
};

//��ѯ�����ʽ�����TradeCode=204002
PyObject * new_CThostFtdcTransferQryBankReqField(KingstarAPI::CThostFtdcTransferQryBankReqField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferQryBankReqField", (char*)"sscs",
p->CurrencyCode, p->FutureAccount, p->FuturePwdFlag, p->FutureAccPwd);
}
KingstarAPI::CThostFtdcTransferQryBankReqField * from_CThostFtdcTransferQryBankReqField(PyObject * p){
  KingstarAPI::CThostFtdcTransferQryBankReqField *t = (KingstarAPI::CThostFtdcTransferQryBankReqField *)calloc(1, sizeof(KingstarAPI::CThostFtdcTransferQryBankReqField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcTransferQryBankReqField));
  //���֣�RMB-����� USD-��Բ HKD-��Ԫ
  strcpy(t->CurrencyCode, PyString_AsString(PyObject_GetAttrString(p, "CurrencyCode")));
  //�ڻ��ʽ��˻�
  strcpy(t->FutureAccount, PyString_AsString(PyObject_GetAttrString(p, "FutureAccount")));
  //�����־
  //enum����
  //THOST_FTDC_FPWD_Check -> '1', �˶�
  //THOST_FTDC_FPWD_UnCheck -> '0', ���˶�
  t->FuturePwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "FuturePwdFlag"))[0];
  //����
  strcpy(t->FutureAccPwd, PyString_AsString(PyObject_GetAttrString(p, "FutureAccPwd")));

  return t;
};

//��������˻�����
PyObject * new_CThostFtdcReqChangeAccountField(KingstarAPI::CThostFtdcReqChangeAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqChangeAccountField", (char*)"cssssscisssicssssissicccsssscssssccsssss",
p->MoneyAccountStatus, p->NewBankPassWord, p->BrokerBranchID, p->BankPassWord, p->Telephone, p->IdentifiedCardNo, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->Fax, p->InstallID, p->SecuPwdFlag, p->CustomerName, p->CountryCode, p->TradeCode, p->BankBranchID, p->SessionID, p->NewBankAccount, p->Address, p->PlateSerial, p->BankPwdFlag, p->CustType, p->Gender, p->BankID, p->BankSerial, p->TradingDay, p->BrokerID, p->IdCardType, p->Password, p->MobilePhone, p->TradeDate, p->CurrencyID, p->BankAccType, p->LastFragment, p->ZipCode, p->BrokerIDByBank, p->TradeTime, p->EMail, p->Digest);
}
KingstarAPI::CThostFtdcReqChangeAccountField * from_CThostFtdcReqChangeAccountField(PyObject * p){
  KingstarAPI::CThostFtdcReqChangeAccountField *t = (KingstarAPI::CThostFtdcReqChangeAccountField *)calloc(1, sizeof(KingstarAPI::CThostFtdcReqChangeAccountField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcReqChangeAccountField));
  //�ʽ��˻�״̬
  //enum����
  //THOST_FTDC_MAS_Cancel -> '1', ����
  //THOST_FTDC_MAS_Normal -> '0', ����
  t->MoneyAccountStatus =   PyString_AsString(PyObject_GetAttrString(p, "MoneyAccountStatus"))[0];
  //����������
  strcpy(t->NewBankPassWord, PyString_AsString(PyObject_GetAttrString(p, "NewBankPassWord")));
  //���̷�֧��������
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //��������
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //�绰����
  strcpy(t->Telephone, PyString_AsString(PyObject_GetAttrString(p, "Telephone")));
  //֤������
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //��֤�ͻ�֤�������־
  //enum����
  //THOST_FTDC_YNI_No -> '1', ��
  //THOST_FTDC_YNI_Yes -> '0', ��
  t->VerifyCertNoFlag =   PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
  //����ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //Ͷ�����ʺ�
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //�����ʺ�
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //����
  strcpy(t->Fax, PyString_AsString(PyObject_GetAttrString(p, "Fax")));
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //�ڻ��ʽ�����˶Ա�־
  //enum����
  //THOST_FTDC_BPWDF_BlankCheck -> '1', ���ĺ˶�
  //THOST_FTDC_BPWDF_NoCheck -> '0', ���˶�
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', ���ĺ˶�
  t->SecuPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
  //�ͻ�����
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //���Ҵ���
  strcpy(t->CountryCode, PyString_AsString(PyObject_GetAttrString(p, "CountryCode")));
  //ҵ������
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //���з�֧��������
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //�Ự��
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //�������ʺ�
  strcpy(t->NewBankAccount, PyString_AsString(PyObject_GetAttrString(p, "NewBankAccount")));
  //��ַ
  strcpy(t->Address, PyString_AsString(PyObject_GetAttrString(p, "Address")));
  //����ƽ̨��Ϣ��ˮ��
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //���������־
  //enum����
  //THOST_FTDC_BPWDF_BlankCheck -> '1', ���ĺ˶�
  //THOST_FTDC_BPWDF_NoCheck -> '0', ���˶�
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', ���ĺ˶�
  t->BankPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
  //�ͻ�����
  //enum����
  //THOST_FTDC_CUSTT_Institution -> '1', ������
  //THOST_FTDC_CUSTT_Person -> '0', ��Ȼ��
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //�Ա�
  //enum����
  //THOST_FTDC_GD_Unknown -> '0', δ֪״̬
  //THOST_FTDC_GD_Female -> '2', Ů
  //THOST_FTDC_GD_Male -> '1', ��
  t->Gender =   PyString_AsString(PyObject_GetAttrString(p, "Gender"))[0];
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //������ˮ��
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //����ϵͳ����
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //���̴���
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //֤������
  //enum����
  //THOST_FTDC_ICT_LicenseNo -> '9', Ӫҵִ�պ�
  //THOST_FTDC_ICT_TaxNo -> 'A', ˰��ǼǺ�
  //THOST_FTDC_ICT_OfficerIDCard -> '2', ����֤
  //THOST_FTDC_ICT_IDCard -> '1', ���֤
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', ̨��֤
  //THOST_FTDC_ICT_OtherCard -> 'x', ����֤��
  //THOST_FTDC_ICT_PoliceIDCard -> '3', ����֤
  //THOST_FTDC_ICT_Passport -> '6', ����
  //THOST_FTDC_ICT_EID -> '0', ��֯��������
  //THOST_FTDC_ICT_HomeComingCard -> '8', ����֤
  //THOST_FTDC_ICT_HouseholdRegister -> '5', ���ڲ�
  //THOST_FTDC_ICT_SoldierIDCard -> '4', ʿ��֤
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //�ڻ�����
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //�ֻ�
  strcpy(t->MobilePhone, PyString_AsString(PyObject_GetAttrString(p, "MobilePhone")));
  //��������
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //���ִ���
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //�����ʺ�����
  //enum����
  //THOST_FTDC_BAT_SavingCard -> '2', ���
  //THOST_FTDC_BAT_CreditCard -> '3', ���ÿ�
  //THOST_FTDC_BAT_BankBook -> '1', ���д���
  t->BankAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
  //����Ƭ��־
  //enum����
  //THOST_FTDC_LF_No -> '1', ��������Ƭ
  //THOST_FTDC_LF_Yes -> '0', ������Ƭ
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //�ʱ�
  strcpy(t->ZipCode, PyString_AsString(PyObject_GetAttrString(p, "ZipCode")));
  //�ڻ���˾���б���
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //����ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //�����ʼ�
  strcpy(t->EMail, PyString_AsString(PyObject_GetAttrString(p, "EMail")));
  //ժҪ
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

  return t;
};

//ͨѶ�׶�
PyObject * new_CThostFtdcCommPhaseField(KingstarAPI::CThostFtdcCommPhaseField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcCommPhaseField", (char*)"sh",
p->TradingDay, p->CommPhaseNo);
}
KingstarAPI::CThostFtdcCommPhaseField * from_CThostFtdcCommPhaseField(PyObject * p){
  KingstarAPI::CThostFtdcCommPhaseField *t = (KingstarAPI::CThostFtdcCommPhaseField *)calloc(1, sizeof(KingstarAPI::CThostFtdcCommPhaseField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcCommPhaseField));
  //������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //ͨѶʱ�α��
  t->CommPhaseNo =   PyInt_AsLong(PyObject_GetAttrString(p, "CommPhaseNo"));

  return t;
};

//�ͻ�����֤��Ϣ
PyObject * new_CThostFtdcAuthenticationInfoField(KingstarAPI::CThostFtdcAuthenticationInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcAuthenticationInfoField", (char*)"ssiss",
p->UserID, p->AuthInfo, p->IsResult, p->BrokerID, p->UserProductInfo);
}
KingstarAPI::CThostFtdcAuthenticationInfoField * from_CThostFtdcAuthenticationInfoField(PyObject * p){
  KingstarAPI::CThostFtdcAuthenticationInfoField *t = (KingstarAPI::CThostFtdcAuthenticationInfoField *)calloc(1, sizeof(KingstarAPI::CThostFtdcAuthenticationInfoField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcAuthenticationInfoField));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //��֤��Ϣ
  strcpy(t->AuthInfo, PyString_AsString(PyObject_GetAttrString(p, "AuthInfo")));
  //�Ƿ�Ϊ��֤���
  t->IsResult =   PyInt_AsLong(PyObject_GetAttrString(p, "IsResult"));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //�û��˲�Ʒ��Ϣ
  strcpy(t->UserProductInfo, PyString_AsString(PyObject_GetAttrString(p, "UserProductInfo")));

  return t;
};

//�ڻ��ʽ�ת��������TradeCode=202002
PyObject * new_CThostFtdcTransferFutureToBankReqField(KingstarAPI::CThostFtdcTransferFutureToBankReqField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferFutureToBankReqField", (char*)"sssdcd",
p->FutureAccount, p->FutureAccPwd, p->CurrencyCode, p->TradeAmt, p->FuturePwdFlag, p->CustFee);
}
KingstarAPI::CThostFtdcTransferFutureToBankReqField * from_CThostFtdcTransferFutureToBankReqField(PyObject * p){
  KingstarAPI::CThostFtdcTransferFutureToBankReqField *t = (KingstarAPI::CThostFtdcTransferFutureToBankReqField *)calloc(1, sizeof(KingstarAPI::CThostFtdcTransferFutureToBankReqField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcTransferFutureToBankReqField));
  //�ڻ��ʽ��˻�
  strcpy(t->FutureAccount, PyString_AsString(PyObject_GetAttrString(p, "FutureAccount")));
  //����
  strcpy(t->FutureAccPwd, PyString_AsString(PyObject_GetAttrString(p, "FutureAccPwd")));
  //���֣�RMB-����� USD-��Բ HKD-��Ԫ
  strcpy(t->CurrencyCode, PyString_AsString(PyObject_GetAttrString(p, "CurrencyCode")));
  //ת�˽��
  t->TradeAmt =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmt"));
  //�����־
  //enum����
  //THOST_FTDC_FPWD_Check -> '1', �˶�
  //THOST_FTDC_FPWD_UnCheck -> '0', ���˶�
  t->FuturePwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "FuturePwdFlag"))[0];
  //�ͻ�������
  t->CustFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));

  return t;
};

//ת����������
PyObject * new_CThostFtdcReqCancelAccountField(KingstarAPI::CThostFtdcReqCancelAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqCancelAccountField", (char*)"csssscisssicssssisicccssssssccssssccscsssss",
p->MoneyAccountStatus, p->BrokerBranchID, p->BankPassWord, p->Telephone, p->IdentifiedCardNo, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->Fax, p->InstallID, p->SecuPwdFlag, p->CustomerName, p->CountryCode, p->TradeCode, p->BankBranchID, p->SessionID, p->Address, p->PlateSerial, p->BankPwdFlag, p->CustType, p->Gender, p->BankID, p->BankSerial, p->OperNo, p->TradingDay, p->BankSecuAcc, p->BrokerID, p->CashExchangeCode, p->IdCardType, p->Password, p->MobilePhone, p->TradeDate, p->CurrencyID, p->BankAccType, p->LastFragment, p->ZipCode, p->BankSecuAccType, p->BrokerIDByBank, p->TradeTime, p->EMail, p->Digest, p->DeviceID);
}
KingstarAPI::CThostFtdcReqCancelAccountField * from_CThostFtdcReqCancelAccountField(PyObject * p){
  KingstarAPI::CThostFtdcReqCancelAccountField *t = (KingstarAPI::CThostFtdcReqCancelAccountField *)calloc(1, sizeof(KingstarAPI::CThostFtdcReqCancelAccountField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcReqCancelAccountField));
  //�ʽ��˻�״̬
  //enum����
  //THOST_FTDC_MAS_Cancel -> '1', ����
  //THOST_FTDC_MAS_Normal -> '0', ����
  t->MoneyAccountStatus =   PyString_AsString(PyObject_GetAttrString(p, "MoneyAccountStatus"))[0];
  //���̷�֧��������
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //��������
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //�绰����
  strcpy(t->Telephone, PyString_AsString(PyObject_GetAttrString(p, "Telephone")));
  //֤������
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //��֤�ͻ�֤�������־
  //enum����
  //THOST_FTDC_YNI_No -> '1', ��
  //THOST_FTDC_YNI_Yes -> '0', ��
  t->VerifyCertNoFlag =   PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
  //����ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //Ͷ�����ʺ�
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //�����ʺ�
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //����
  strcpy(t->Fax, PyString_AsString(PyObject_GetAttrString(p, "Fax")));
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //�ڻ��ʽ�����˶Ա�־
  //enum����
  //THOST_FTDC_BPWDF_BlankCheck -> '1', ���ĺ˶�
  //THOST_FTDC_BPWDF_NoCheck -> '0', ���˶�
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', ���ĺ˶�
  t->SecuPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
  //�ͻ�����
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //���Ҵ���
  strcpy(t->CountryCode, PyString_AsString(PyObject_GetAttrString(p, "CountryCode")));
  //ҵ������
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //���з�֧��������
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //�Ự��
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //��ַ
  strcpy(t->Address, PyString_AsString(PyObject_GetAttrString(p, "Address")));
  //����ƽ̨��Ϣ��ˮ��
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //���������־
  //enum����
  //THOST_FTDC_BPWDF_BlankCheck -> '1', ���ĺ˶�
  //THOST_FTDC_BPWDF_NoCheck -> '0', ���˶�
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', ���ĺ˶�
  t->BankPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
  //�ͻ�����
  //enum����
  //THOST_FTDC_CUSTT_Institution -> '1', ������
  //THOST_FTDC_CUSTT_Person -> '0', ��Ȼ��
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //�Ա�
  //enum����
  //THOST_FTDC_GD_Unknown -> '0', δ֪״̬
  //THOST_FTDC_GD_Female -> '2', Ů
  //THOST_FTDC_GD_Male -> '1', ��
  t->Gender =   PyString_AsString(PyObject_GetAttrString(p, "Gender"))[0];
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //������ˮ��
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //���׹�Ա
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //����ϵͳ����
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //�ڻ���λ�ʺ�
  strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
  //���̴���
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //�㳮��־
  //enum����
  //THOST_FTDC_CEC_Exchange -> '1', ��
  //THOST_FTDC_CEC_Cash -> '2', ��
  t->CashExchangeCode =   PyString_AsString(PyObject_GetAttrString(p, "CashExchangeCode"))[0];
  //֤������
  //enum����
  //THOST_FTDC_ICT_LicenseNo -> '9', Ӫҵִ�պ�
  //THOST_FTDC_ICT_TaxNo -> 'A', ˰��ǼǺ�
  //THOST_FTDC_ICT_OfficerIDCard -> '2', ����֤
  //THOST_FTDC_ICT_IDCard -> '1', ���֤
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', ̨��֤
  //THOST_FTDC_ICT_OtherCard -> 'x', ����֤��
  //THOST_FTDC_ICT_PoliceIDCard -> '3', ����֤
  //THOST_FTDC_ICT_Passport -> '6', ����
  //THOST_FTDC_ICT_EID -> '0', ��֯��������
  //THOST_FTDC_ICT_HomeComingCard -> '8', ����֤
  //THOST_FTDC_ICT_HouseholdRegister -> '5', ���ڲ�
  //THOST_FTDC_ICT_SoldierIDCard -> '4', ʿ��֤
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //�ڻ�����
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //�ֻ�
  strcpy(t->MobilePhone, PyString_AsString(PyObject_GetAttrString(p, "MobilePhone")));
  //��������
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //���ִ���
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //�����ʺ�����
  //enum����
  //THOST_FTDC_BAT_SavingCard -> '2', ���
  //THOST_FTDC_BAT_CreditCard -> '3', ���ÿ�
  //THOST_FTDC_BAT_BankBook -> '1', ���д���
  t->BankAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
  //����Ƭ��־
  //enum����
  //THOST_FTDC_LF_No -> '1', ��������Ƭ
  //THOST_FTDC_LF_Yes -> '0', ������Ƭ
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //�ʱ�
  strcpy(t->ZipCode, PyString_AsString(PyObject_GetAttrString(p, "ZipCode")));
  //�ڻ���λ�ʺ�����
  //enum����
  //THOST_FTDC_BAT_SavingCard -> '2', ���
  //THOST_FTDC_BAT_CreditCard -> '3', ���ÿ�
  //THOST_FTDC_BAT_BankBook -> '1', ���д���
  t->BankSecuAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
  //�ڻ���˾���б���
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //����ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //�����ʼ�
  strcpy(t->EMail, PyString_AsString(PyObject_GetAttrString(p, "EMail")));
  //ժҪ
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
  //������־
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));

  return t;
};

//�������³ɽ�����
PyObject * new_CThostFtdcMarketDataLastMatchField(KingstarAPI::CThostFtdcMarketDataLastMatchField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataLastMatchField", (char*)"iddd",
p->Volume, p->OpenInterest, p->LastPrice, p->Turnover);
}
KingstarAPI::CThostFtdcMarketDataLastMatchField * from_CThostFtdcMarketDataLastMatchField(PyObject * p){
  KingstarAPI::CThostFtdcMarketDataLastMatchField *t = (KingstarAPI::CThostFtdcMarketDataLastMatchField *)calloc(1, sizeof(KingstarAPI::CThostFtdcMarketDataLastMatchField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcMarketDataLastMatchField));
  //����
  t->Volume =   PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));
  //�ֲ���
  t->OpenInterest =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenInterest"));
  //���¼�
  t->LastPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LastPrice"));
  //�ɽ����
  t->Turnover =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Turnover"));

  return t;
};

//�����û�����Ȩ��
PyObject * new_CThostFtdcSuperUserFunctionField(KingstarAPI::CThostFtdcSuperUserFunctionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSuperUserFunctionField", (char*)"cs",
p->FunctionCode, p->UserID);
}
KingstarAPI::CThostFtdcSuperUserFunctionField * from_CThostFtdcSuperUserFunctionField(PyObject * p){
  KingstarAPI::CThostFtdcSuperUserFunctionField *t = (KingstarAPI::CThostFtdcSuperUserFunctionField *)calloc(1, sizeof(KingstarAPI::CThostFtdcSuperUserFunctionField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcSuperUserFunctionField));
  //���ܴ���
  //enum����
  //THOST_FTDC_FC_OrderAction -> '7', ��������
  //THOST_FTDC_FC_OrderInsert -> '6', ��������
  //THOST_FTDC_FC_ParkedOrderAction -> 'D', ��������
  //THOST_FTDC_FC_BrokerPasswordUpdate -> '4', ������͹�˾����
  //THOST_FTDC_FC_SyncBrokerData -> '9', ͬ�����͹�˾����
  //THOST_FTDC_FC_DataAsync -> '1', �����첽��
  //THOST_FTDC_FC_ParkedOrderInsert -> 'C', ��������
  //THOST_FTDC_FC_BachSyncBrokerData -> 'A', ����ͬ�����͹�˾����
  //THOST_FTDC_FC_ForceUserLogout -> '2', ǿ���û��ǳ�
  //THOST_FTDC_FC_InvestorPasswordUpdate -> '5', ���Ͷ���߿���
  //THOST_FTDC_FC_SyncSystemData -> '8', ͬ��ϵͳ����
  //THOST_FTDC_FC_SuperQuery -> 'B', ������ѯ
  //THOST_FTDC_FC_UserPasswordUpdate -> '3', ��������û�����
  //THOST_FTDC_FC_SyncOTP -> 'E', ͬ����̬����
  t->FunctionCode =   PyString_AsString(PyObject_GetAttrString(p, "FunctionCode"))[0];
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));

  return t;
};

//����Ԥ�񵥲���
PyObject * new_CThostFtdcParkedOrderActionField(KingstarAPI::CThostFtdcParkedOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcParkedOrderActionField", (char*)"scscicssdssiisissii",
p->InstrumentID, p->Status, p->ExchangeID, p->ActionFlag, p->OrderActionRef, p->UserType, p->ErrorMsg, p->UserID, p->LimitPrice, p->OrderRef, p->InvestorID, p->SessionID, p->VolumeChange, p->BrokerID, p->RequestID, p->OrderSysID, p->ParkedOrderActionID, p->FrontID, p->ErrorID);
}
KingstarAPI::CThostFtdcParkedOrderActionField * from_CThostFtdcParkedOrderActionField(PyObject * p){
  KingstarAPI::CThostFtdcParkedOrderActionField *t = (KingstarAPI::CThostFtdcParkedOrderActionField *)calloc(1, sizeof(KingstarAPI::CThostFtdcParkedOrderActionField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcParkedOrderActionField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //Ԥ�񳷵�״̬
  //enum����
  //THOST_FTDC_PAOS_Send -> '2', �ѷ���
  //THOST_FTDC_PAOS_Deleted -> '3', ��ɾ��
  //THOST_FTDC_PAOS_NotSend -> '1', δ����
  t->Status =   PyString_AsString(PyObject_GetAttrString(p, "Status"))[0];
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //������־
  //enum����
  //THOST_FTDC_AF_Delete -> '0', ɾ��
  //THOST_FTDC_AF_Modify -> '3', �޸�
  t->ActionFlag =   PyString_AsString(PyObject_GetAttrString(p, "ActionFlag"))[0];
  //������������
  t->OrderActionRef =   PyInt_AsLong(PyObject_GetAttrString(p, "OrderActionRef"));
  //�û�����
  //enum����
  //THOST_FTDC_UT_Investor -> '0', Ͷ����
  //THOST_FTDC_UT_SuperUser -> '2', ����Ա
  //THOST_FTDC_UT_Operator -> '1', ����Ա
  t->UserType =   PyString_AsString(PyObject_GetAttrString(p, "UserType"))[0];
  //������Ϣ
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //�۸�
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //��������
  strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //�Ự���
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //�����仯
  t->VolumeChange =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeChange"));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //������
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //�������
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //Ԥ�񳷵������
  strcpy(t->ParkedOrderActionID, PyString_AsString(PyObject_GetAttrString(p, "ParkedOrderActionID")));
  //ǰ�ñ��
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //�������
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));

  return t;
};

//�û��Ự
PyObject * new_CThostFtdcUserSessionField(KingstarAPI::CThostFtdcUserSessionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcUserSessionField", (char*)"sssssisisss",
p->MacAddress, p->UserProductInfo, p->InterfaceProductInfo, p->UserID, p->LoginDate, p->SessionID, p->BrokerID, p->FrontID, p->IPAddress, p->LoginTime, p->ProtocolInfo);
}
KingstarAPI::CThostFtdcUserSessionField * from_CThostFtdcUserSessionField(PyObject * p){
  KingstarAPI::CThostFtdcUserSessionField *t = (KingstarAPI::CThostFtdcUserSessionField *)calloc(1, sizeof(KingstarAPI::CThostFtdcUserSessionField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcUserSessionField));
  //Mac��ַ
  strcpy(t->MacAddress, PyString_AsString(PyObject_GetAttrString(p, "MacAddress")));
  //�û��˲�Ʒ��Ϣ
  strcpy(t->UserProductInfo, PyString_AsString(PyObject_GetAttrString(p, "UserProductInfo")));
  //�ӿڶ˲�Ʒ��Ϣ
  strcpy(t->InterfaceProductInfo, PyString_AsString(PyObject_GetAttrString(p, "InterfaceProductInfo")));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //��¼����
  strcpy(t->LoginDate, PyString_AsString(PyObject_GetAttrString(p, "LoginDate")));
  //�Ự���
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //ǰ�ñ��
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //IP��ַ
  strcpy(t->IPAddress, PyString_AsString(PyObject_GetAttrString(p, "IPAddress")));
  //��¼ʱ��
  strcpy(t->LoginTime, PyString_AsString(PyObject_GetAttrString(p, "LoginTime")));
  //Э����Ϣ
  strcpy(t->ProtocolInfo, PyString_AsString(PyObject_GetAttrString(p, "ProtocolInfo")));

  return t;
};

//���ݼ۸��ѯ��󱨵�����
PyObject * new_CThostFtdcQueryMaxOrderVolumeWithPriceField(KingstarAPI::CThostFtdcQueryMaxOrderVolumeWithPriceField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQueryMaxOrderVolumeWithPriceField", (char*)"sccdcssi",
p->InstrumentID, p->Direction, p->OffsetFlag, p->Price, p->HedgeFlag, p->InvestorID, p->BrokerID, p->MaxVolume);
}
KingstarAPI::CThostFtdcQueryMaxOrderVolumeWithPriceField * from_CThostFtdcQueryMaxOrderVolumeWithPriceField(PyObject * p){
  KingstarAPI::CThostFtdcQueryMaxOrderVolumeWithPriceField *t = (KingstarAPI::CThostFtdcQueryMaxOrderVolumeWithPriceField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQueryMaxOrderVolumeWithPriceField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQueryMaxOrderVolumeWithPriceField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //��������
  //enum����
  //THOST_FTDC_D_Buy -> '0', ��
  //THOST_FTDC_D_Sell -> '1', ��
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //��ƽ��־
  //enum����
  //THOST_FTDC_OF_CloseToday -> '3', ƽ��
  //THOST_FTDC_OF_ForceOff -> '5', ǿ��
  //THOST_FTDC_OF_LocalForceClose -> '6', ����ǿƽ
  //THOST_FTDC_OF_Close -> '1', ƽ��
  //THOST_FTDC_OF_Open -> '0', ����
  //THOST_FTDC_OF_CloseYesterday -> '4', ƽ��
  //THOST_FTDC_OF_ForceClose -> '2', ǿƽ
  t->OffsetFlag =   PyString_AsString(PyObject_GetAttrString(p, "OffsetFlag"))[0];
  //�����۸�
  t->Price =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Price"));
  //Ͷ���ױ���־
  //enum����
  //THOST_FTDC_HF_Speculation -> '1', Ͷ��
  //THOST_FTDC_HF_Arbitrage -> '2', ����
  //THOST_FTDC_HF_Hedge -> '3', �ױ�
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //�������������
  t->MaxVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MaxVolume"));

  return t;
};

//�����ʽ�ת�ڻ�����TradeCode=202001
PyObject * new_CThostFtdcTransferBankToFutureReqField(KingstarAPI::CThostFtdcTransferBankToFutureReqField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferBankToFutureReqField", (char*)"sssdcd",
p->FutureAccount, p->FutureAccPwd, p->CurrencyCode, p->TradeAmt, p->FuturePwdFlag, p->CustFee);
}
KingstarAPI::CThostFtdcTransferBankToFutureReqField * from_CThostFtdcTransferBankToFutureReqField(PyObject * p){
  KingstarAPI::CThostFtdcTransferBankToFutureReqField *t = (KingstarAPI::CThostFtdcTransferBankToFutureReqField *)calloc(1, sizeof(KingstarAPI::CThostFtdcTransferBankToFutureReqField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcTransferBankToFutureReqField));
  //�ڻ��ʽ��˻�
  strcpy(t->FutureAccount, PyString_AsString(PyObject_GetAttrString(p, "FutureAccount")));
  //����
  strcpy(t->FutureAccPwd, PyString_AsString(PyObject_GetAttrString(p, "FutureAccPwd")));
  //���֣�RMB-����� USD-��Բ HKD-��Ԫ
  strcpy(t->CurrencyCode, PyString_AsString(PyObject_GetAttrString(p, "CurrencyCode")));
  //ת�˽��
  t->TradeAmt =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmt"));
  //�����־
  //enum����
  //THOST_FTDC_FPWD_Check -> '1', �˶�
  //THOST_FTDC_FPWD_UnCheck -> '0', ���˶�
  t->FuturePwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "FuturePwdFlag"))[0];
  //�ͻ�������
  t->CustFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));

  return t;
};

//��Լ״̬
PyObject * new_CThostFtdcInstrumentStatusField(KingstarAPI::CThostFtdcInstrumentStatusField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInstrumentStatusField", (char*)"ssssiccs",
p->InstrumentID, p->ExchangeID, p->EnterTime, p->SettlementGroupID, p->TradingSegmentSN, p->EnterReason, p->InstrumentStatus, p->ExchangeInstID);
}
KingstarAPI::CThostFtdcInstrumentStatusField * from_CThostFtdcInstrumentStatusField(PyObject * p){
  KingstarAPI::CThostFtdcInstrumentStatusField *t = (KingstarAPI::CThostFtdcInstrumentStatusField *)calloc(1, sizeof(KingstarAPI::CThostFtdcInstrumentStatusField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcInstrumentStatusField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //���뱾״̬ʱ��
  strcpy(t->EnterTime, PyString_AsString(PyObject_GetAttrString(p, "EnterTime")));
  //���������
  strcpy(t->SettlementGroupID, PyString_AsString(PyObject_GetAttrString(p, "SettlementGroupID")));
  //���׽׶α��
  t->TradingSegmentSN =   PyInt_AsLong(PyObject_GetAttrString(p, "TradingSegmentSN"));
  //���뱾״̬ԭ��
  //enum����
  //THOST_FTDC_IER_Fuse -> '3', �۶�
  //THOST_FTDC_IER_Automatic -> '1', �Զ��л�
  //THOST_FTDC_IER_Manual -> '2', �ֶ��л�
  t->EnterReason =   PyString_AsString(PyObject_GetAttrString(p, "EnterReason"))[0];
  //��Լ����״̬
  //enum����
  //THOST_FTDC_IS_Continous -> '2', ��������
  //THOST_FTDC_IS_AuctionMatch -> '5', ���Ͼ��۴��
  //THOST_FTDC_IS_BeforeTrading -> '0', ����ǰ
  //THOST_FTDC_IS_Closed -> '6', ����
  //THOST_FTDC_IS_AuctionOrdering -> '3', ���Ͼ��۱���
  //THOST_FTDC_IS_AuctionBalance -> '4', ���Ͼ��ۼ۸�ƽ��
  //THOST_FTDC_IS_NoTrading -> '1', �ǽ���
  t->InstrumentStatus =   PyString_AsString(PyObject_GetAttrString(p, "InstrumentStatus"))[0];
  //��Լ�ڽ������Ĵ���
  strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));

  return t;
};

//�����ѯ��֤����ϵͳ���͹�˾�ʽ��˻���Կ
PyObject * new_CThostFtdcQryCFMMCTradingAccountKeyField(KingstarAPI::CThostFtdcQryCFMMCTradingAccountKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryCFMMCTradingAccountKeyField", (char*)"ss",
p->InvestorID, p->BrokerID);
}
KingstarAPI::CThostFtdcQryCFMMCTradingAccountKeyField * from_CThostFtdcQryCFMMCTradingAccountKeyField(PyObject * p){
  KingstarAPI::CThostFtdcQryCFMMCTradingAccountKeyField *t = (KingstarAPI::CThostFtdcQryCFMMCTradingAccountKeyField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryCFMMCTradingAccountKeyField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryCFMMCTradingAccountKeyField));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//��ѯǩԼ��������
PyObject * new_CThostFtdcQryContractBankField(KingstarAPI::CThostFtdcQryContractBankField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryContractBankField", (char*)"sss",
p->BrokerID, p->BankBrchID, p->BankID);
}
KingstarAPI::CThostFtdcQryContractBankField * from_CThostFtdcQryContractBankField(PyObject * p){
  KingstarAPI::CThostFtdcQryContractBankField *t = (KingstarAPI::CThostFtdcQryContractBankField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryContractBankField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryContractBankField));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //���з����Ĵ���
  strcpy(t->BankBrchID, PyString_AsString(PyObject_GetAttrString(p, "BankBrchID")));
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));

  return t;
};

//����ͬ���еĽ��״���
PyObject * new_CThostFtdcSyncingTradingCodeField(KingstarAPI::CThostFtdcSyncingTradingCodeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncingTradingCodeField", (char*)"ssssci",
p->ExchangeID, p->ClientID, p->InvestorID, p->BrokerID, p->ClientIDType, p->IsActive);
}
KingstarAPI::CThostFtdcSyncingTradingCodeField * from_CThostFtdcSyncingTradingCodeField(PyObject * p){
  KingstarAPI::CThostFtdcSyncingTradingCodeField *t = (KingstarAPI::CThostFtdcSyncingTradingCodeField *)calloc(1, sizeof(KingstarAPI::CThostFtdcSyncingTradingCodeField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcSyncingTradingCodeField));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //�ͻ�����
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //���ױ�������
  //enum����
  //THOST_FTDC_CIDT_Hedge -> '3', �ױ�
  //THOST_FTDC_CIDT_Arbitrage -> '2', ����
  //THOST_FTDC_CIDT_Speculation -> '1', Ͷ��
  t->ClientIDType =   PyString_AsString(PyObject_GetAttrString(p, "ClientIDType"))[0];
  //�Ƿ��Ծ
  t->IsActive =   PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));

  return t;
};

// ����������ѡ����Ϣ
PyObject * new_CTKSCOSAskSelectField(CTKSCOSAskSelectField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CTKSCOSAskSelectField", (char*)"issssic",
p->SequenceNo, p->Memo, p->UserID, p->InvestorID, p->BrokerID, p->ConditionalOrderID, p->SelectType);
}
CTKSCOSAskSelectField * from_CTKSCOSAskSelectField(PyObject * p){
CTKSCOSAskSelectField *t = (CTKSCOSAskSelectField *)calloc(1, sizeof(CTKSCOSAskSelectField));
  memset(t,0,sizeof(CTKSCOSAskSelectField));
  //���
  t->SequenceNo =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //��ע
  strcpy(t->Memo, PyString_AsString(PyObject_GetAttrString(p, "Memo")));
  //����Ա
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //Ӫҵ������
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //���������
  t->ConditionalOrderID =   PyInt_AsLong(PyObject_GetAttrString(p, "ConditionalOrderID"));
  //ѡ��ʽ
  //enum����
  //KSCOS_Select_ConfirmORCancel -> '1', ȷ�ϡ�ȡ��
  //KS_Select_AgainOrSkipOrAbort -> '2', ���ԡ���������ֹ
  t->SelectType =   PyString_AsString(PyObject_GetAttrString(p, "SelectType"))[0];

  return t;
};

//��ѯ�ֵ��۵���Ϣ
PyObject * new_CThostFtdcQryEWarrantOffsetField(KingstarAPI::CThostFtdcQryEWarrantOffsetField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryEWarrantOffsetField", (char*)"ssss",
p->InstrumentID, p->InvestorID, p->ExchangeID, p->BrokerID);
}
KingstarAPI::CThostFtdcQryEWarrantOffsetField * from_CThostFtdcQryEWarrantOffsetField(PyObject * p){
  KingstarAPI::CThostFtdcQryEWarrantOffsetField *t = (KingstarAPI::CThostFtdcQryEWarrantOffsetField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryEWarrantOffsetField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryEWarrantOffsetField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//��ѯ���͹�˾���ײ���
PyObject * new_CThostFtdcQryBrokerTradingParamsField(KingstarAPI::CThostFtdcQryBrokerTradingParamsField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryBrokerTradingParamsField", (char*)"ss",
p->InvestorID, p->BrokerID);
}
KingstarAPI::CThostFtdcQryBrokerTradingParamsField * from_CThostFtdcQryBrokerTradingParamsField(PyObject * p){
  KingstarAPI::CThostFtdcQryBrokerTradingParamsField *t = (KingstarAPI::CThostFtdcQryBrokerTradingParamsField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryBrokerTradingParamsField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryBrokerTradingParamsField));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//����ͬ���еĽ����˺�
PyObject * new_CThostFtdcSyncingTradingAccountField(KingstarAPI::CThostFtdcSyncingTradingAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncingTradingAccountField", (char*)"ddddddddsddddddidssddddddddddd",
p->Mortgage, p->ExchangeDeliveryMargin, p->FrozenMargin, p->WithdrawQuota, p->PositionProfit, p->Commission, p->Interest, p->CashIn, p->AccountID, p->Available, p->PreCredit, p->PreMortgage, p->InterestBase, p->ExchangeMargin, p->PreMargin, p->SettlementID, p->DeliveryMargin, p->TradingDay, p->BrokerID, p->FrozenCash, p->Withdraw, p->Balance, p->Reserve, p->PreDeposit, p->Credit, p->PreBalance, p->CurrMargin, p->FrozenCommission, p->CloseProfit, p->Deposit);
}
KingstarAPI::CThostFtdcSyncingTradingAccountField * from_CThostFtdcSyncingTradingAccountField(PyObject * p){
  KingstarAPI::CThostFtdcSyncingTradingAccountField *t = (KingstarAPI::CThostFtdcSyncingTradingAccountField *)calloc(1, sizeof(KingstarAPI::CThostFtdcSyncingTradingAccountField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcSyncingTradingAccountField));
  //��Ѻ���
  t->Mortgage =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Mortgage"));
  //���������֤��
  t->ExchangeDeliveryMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeDeliveryMargin"));
  //����ı�֤��
  t->FrozenMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenMargin"));
  //��ȡ�ʽ�
  t->WithdrawQuota =   PyFloat_AsDouble(PyObject_GetAttrString(p, "WithdrawQuota"));
  //�ֲ�ӯ��
  t->PositionProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfit"));
  //������
  t->Commission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Commission"));
  //��Ϣ����
  t->Interest =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Interest"));
  //�ʽ���
  t->CashIn =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CashIn"));
  //Ͷ�����ʺ�
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //�����ʽ�
  t->Available =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Available"));
  //�ϴ����ö��
  t->PreCredit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreCredit"));
  //�ϴ���Ѻ���
  t->PreMortgage =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreMortgage"));
  //��Ϣ����
  t->InterestBase =   PyFloat_AsDouble(PyObject_GetAttrString(p, "InterestBase"));
  //��������֤��
  t->ExchangeMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeMargin"));
  //�ϴ�ռ�õı�֤��
  t->PreMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreMargin"));
  //������
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //Ͷ���߽��֤��
  t->DeliveryMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "DeliveryMargin"));
  //������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //������ʽ�
  t->FrozenCash =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCash"));
  //������
  t->Withdraw =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Withdraw"));
  //�ڻ�����׼����
  t->Balance =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Balance"));
  //����׼����
  t->Reserve =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Reserve"));
  //�ϴδ���
  t->PreDeposit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreDeposit"));
  //���ö��
  t->Credit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Credit"));
  //�ϴν���׼����
  t->PreBalance =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreBalance"));
  //��ǰ��֤���ܶ�
  t->CurrMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CurrMargin"));
  //�����������
  t->FrozenCommission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCommission"));
  //ƽ��ӯ��
  t->CloseProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfit"));
  //�����
  t->Deposit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Deposit"));

  return t;
};

//��ѯ����������
PyObject * new_CThostFtdcQryExchangeOrderField(KingstarAPI::CThostFtdcQryExchangeOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryExchangeOrderField", (char*)"sssss",
p->ExchangeInstID, p->TraderID, p->ExchangeID, p->ParticipantID, p->ClientID);
}
KingstarAPI::CThostFtdcQryExchangeOrderField * from_CThostFtdcQryExchangeOrderField(PyObject * p){
  KingstarAPI::CThostFtdcQryExchangeOrderField *t = (KingstarAPI::CThostFtdcQryExchangeOrderField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryExchangeOrderField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryExchangeOrderField));
  //��Լ�ڽ������Ĵ���
  strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
  //����������Ա����
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //��Ա����
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //�ͻ�����
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));

  return t;
};

//���ڱ�������˺���Ϣ
PyObject * new_CThostFtdcChangeAccountField(KingstarAPI::CThostFtdcChangeAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcChangeAccountField", (char*)"cssssscisssicssssissiciccsssscsssssccsssss",
p->MoneyAccountStatus, p->NewBankPassWord, p->BrokerBranchID, p->BankPassWord, p->Telephone, p->IdentifiedCardNo, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->Fax, p->InstallID, p->SecuPwdFlag, p->CustomerName, p->CountryCode, p->TradeCode, p->BankBranchID, p->SessionID, p->NewBankAccount, p->Address, p->PlateSerial, p->BankPwdFlag, p->ErrorID, p->CustType, p->Gender, p->BankID, p->BankSerial, p->TradingDay, p->BrokerID, p->IdCardType, p->Password, p->MobilePhone, p->TradeDate, p->CurrencyID, p->ErrorMsg, p->BankAccType, p->LastFragment, p->ZipCode, p->BrokerIDByBank, p->TradeTime, p->EMail, p->Digest);
}
KingstarAPI::CThostFtdcChangeAccountField * from_CThostFtdcChangeAccountField(PyObject * p){
  KingstarAPI::CThostFtdcChangeAccountField *t = (KingstarAPI::CThostFtdcChangeAccountField *)calloc(1, sizeof(KingstarAPI::CThostFtdcChangeAccountField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcChangeAccountField));
  //�ʽ��˻�״̬
  //enum����
  //THOST_FTDC_MAS_Cancel -> '1', ����
  //THOST_FTDC_MAS_Normal -> '0', ����
  t->MoneyAccountStatus =   PyString_AsString(PyObject_GetAttrString(p, "MoneyAccountStatus"))[0];
  //����������
  strcpy(t->NewBankPassWord, PyString_AsString(PyObject_GetAttrString(p, "NewBankPassWord")));
  //���̷�֧��������
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //��������
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //�绰����
  strcpy(t->Telephone, PyString_AsString(PyObject_GetAttrString(p, "Telephone")));
  //֤������
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //��֤�ͻ�֤�������־
  //enum����
  //THOST_FTDC_YNI_No -> '1', ��
  //THOST_FTDC_YNI_Yes -> '0', ��
  t->VerifyCertNoFlag =   PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
  //����ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //Ͷ�����ʺ�
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //�����ʺ�
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //����
  strcpy(t->Fax, PyString_AsString(PyObject_GetAttrString(p, "Fax")));
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //�ڻ��ʽ�����˶Ա�־
  //enum����
  //THOST_FTDC_BPWDF_BlankCheck -> '1', ���ĺ˶�
  //THOST_FTDC_BPWDF_NoCheck -> '0', ���˶�
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', ���ĺ˶�
  t->SecuPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
  //�ͻ�����
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //���Ҵ���
  strcpy(t->CountryCode, PyString_AsString(PyObject_GetAttrString(p, "CountryCode")));
  //ҵ������
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //���з�֧��������
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //�Ự��
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //�������ʺ�
  strcpy(t->NewBankAccount, PyString_AsString(PyObject_GetAttrString(p, "NewBankAccount")));
  //��ַ
  strcpy(t->Address, PyString_AsString(PyObject_GetAttrString(p, "Address")));
  //����ƽ̨��Ϣ��ˮ��
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //���������־
  //enum����
  //THOST_FTDC_BPWDF_BlankCheck -> '1', ���ĺ˶�
  //THOST_FTDC_BPWDF_NoCheck -> '0', ���˶�
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', ���ĺ˶�
  t->BankPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
  //�������
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //�ͻ�����
  //enum����
  //THOST_FTDC_CUSTT_Institution -> '1', ������
  //THOST_FTDC_CUSTT_Person -> '0', ��Ȼ��
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //�Ա�
  //enum����
  //THOST_FTDC_GD_Unknown -> '0', δ֪״̬
  //THOST_FTDC_GD_Female -> '2', Ů
  //THOST_FTDC_GD_Male -> '1', ��
  t->Gender =   PyString_AsString(PyObject_GetAttrString(p, "Gender"))[0];
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //������ˮ��
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //����ϵͳ����
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //���̴���
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //֤������
  //enum����
  //THOST_FTDC_ICT_LicenseNo -> '9', Ӫҵִ�պ�
  //THOST_FTDC_ICT_TaxNo -> 'A', ˰��ǼǺ�
  //THOST_FTDC_ICT_OfficerIDCard -> '2', ����֤
  //THOST_FTDC_ICT_IDCard -> '1', ���֤
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', ̨��֤
  //THOST_FTDC_ICT_OtherCard -> 'x', ����֤��
  //THOST_FTDC_ICT_PoliceIDCard -> '3', ����֤
  //THOST_FTDC_ICT_Passport -> '6', ����
  //THOST_FTDC_ICT_EID -> '0', ��֯��������
  //THOST_FTDC_ICT_HomeComingCard -> '8', ����֤
  //THOST_FTDC_ICT_HouseholdRegister -> '5', ���ڲ�
  //THOST_FTDC_ICT_SoldierIDCard -> '4', ʿ��֤
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //�ڻ�����
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //�ֻ�
  strcpy(t->MobilePhone, PyString_AsString(PyObject_GetAttrString(p, "MobilePhone")));
  //��������
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //���ִ���
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //������Ϣ
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //�����ʺ�����
  //enum����
  //THOST_FTDC_BAT_SavingCard -> '2', ���
  //THOST_FTDC_BAT_CreditCard -> '3', ���ÿ�
  //THOST_FTDC_BAT_BankBook -> '1', ���д���
  t->BankAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
  //����Ƭ��־
  //enum����
  //THOST_FTDC_LF_No -> '1', ��������Ƭ
  //THOST_FTDC_LF_Yes -> '0', ������Ƭ
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //�ʱ�
  strcpy(t->ZipCode, PyString_AsString(PyObject_GetAttrString(p, "ZipCode")));
  //�ڻ���˾���б���
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //����ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //�����ʼ�
  strcpy(t->EMail, PyString_AsString(PyObject_GetAttrString(p, "EMail")));
  //ժҪ
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

  return t;
};

//��Լ
PyObject * new_CThostFtdcInstrumentField(KingstarAPI::CThostFtdcInstrumentField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInstrumentField", (char*)"iscdccsdiissisiisidcsisss",
p->IsTrading, p->ExpireDate, p->PositionDateType, p->LongMarginRatio, p->PositionType, p->ProductClass, p->InstrumentName, p->ShortMarginRatio, p->VolumeMultiple, p->DeliveryYear, p->CreateDate, p->InstrumentID, p->MaxLimitOrderVolume, p->ExchangeID, p->MinLimitOrderVolume, p->MaxMarketOrderVolume, p->StartDelivDate, p->DeliveryMonth, p->PriceTick, p->InstLifePhase, p->ExchangeInstID, p->MinMarketOrderVolume, p->EndDelivDate, p->OpenDate, p->ProductID);
}
KingstarAPI::CThostFtdcInstrumentField * from_CThostFtdcInstrumentField(PyObject * p){
  KingstarAPI::CThostFtdcInstrumentField *t = (KingstarAPI::CThostFtdcInstrumentField *)calloc(1, sizeof(KingstarAPI::CThostFtdcInstrumentField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcInstrumentField));
  //��ǰ�Ƿ���
  t->IsTrading =   PyInt_AsLong(PyObject_GetAttrString(p, "IsTrading"));
  //������
  strcpy(t->ExpireDate, PyString_AsString(PyObject_GetAttrString(p, "ExpireDate")));
  //�ֲ���������
  //enum����
  //THOST_FTDC_PDT_UseHistory -> '1', ʹ����ʷ�ֲ�
  //THOST_FTDC_PDT_NoUseHistory -> '2', ��ʹ����ʷ�ֲ�
  t->PositionDateType =   PyString_AsString(PyObject_GetAttrString(p, "PositionDateType"))[0];
  //��ͷ��֤����
  t->LongMarginRatio =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatio"));
  //�ֲ�����
  //enum����
  //THOST_FTDC_PT_Net -> '1', ���ֲ�
  //THOST_FTDC_PT_Gross -> '2', �ۺϳֲ�
  t->PositionType =   PyString_AsString(PyObject_GetAttrString(p, "PositionType"))[0];
  //��Ʒ����
  //enum����
  //THOST_FTDC_PC_Futures -> '1', �ڻ�
  //THOST_FTDC_PC_Combination -> '3', ���
  //THOST_FTDC_PC_Options -> '2', ��Ȩ
  //THOST_FTDC_PC_EFP -> '5', ��ת��
  //THOST_FTDC_PC_Spot -> '4', ����
  t->ProductClass =   PyString_AsString(PyObject_GetAttrString(p, "ProductClass"))[0];
  //��Լ����
  strcpy(t->InstrumentName, PyString_AsString(PyObject_GetAttrString(p, "InstrumentName")));
  //��ͷ��֤����
  t->ShortMarginRatio =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatio"));
  //��Լ��������
  t->VolumeMultiple =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeMultiple"));
  //�������
  t->DeliveryYear =   PyInt_AsLong(PyObject_GetAttrString(p, "DeliveryYear"));
  //������
  strcpy(t->CreateDate, PyString_AsString(PyObject_GetAttrString(p, "CreateDate")));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //�޼۵�����µ���
  t->MaxLimitOrderVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MaxLimitOrderVolume"));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //�޼۵���С�µ���
  t->MinLimitOrderVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MinLimitOrderVolume"));
  //�м۵�����µ���
  t->MaxMarketOrderVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MaxMarketOrderVolume"));
  //��ʼ������
  strcpy(t->StartDelivDate, PyString_AsString(PyObject_GetAttrString(p, "StartDelivDate")));
  //������
  t->DeliveryMonth =   PyInt_AsLong(PyObject_GetAttrString(p, "DeliveryMonth"));
  //��С�䶯��λ
  t->PriceTick =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PriceTick"));
  //��Լ��������״̬
  //enum����
  //THOST_FTDC_IP_NotStart -> '0', δ����
  //THOST_FTDC_IP_Expired -> '3', ����
  //THOST_FTDC_IP_Pause -> '2', ͣ��
  //THOST_FTDC_IP_Started -> '1', ����
  t->InstLifePhase =   PyString_AsString(PyObject_GetAttrString(p, "InstLifePhase"))[0];
  //��Լ�ڽ������Ĵ���
  strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
  //�м۵���С�µ���
  t->MinMarketOrderVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MinMarketOrderVolume"));
  //����������
  strcpy(t->EndDelivDate, PyString_AsString(PyObject_GetAttrString(p, "EndDelivDate")));
  //������
  strcpy(t->OpenDate, PyString_AsString(PyObject_GetAttrString(p, "OpenDate")));
  //��Ʒ����
  strcpy(t->ProductID, PyString_AsString(PyObject_GetAttrString(p, "ProductID")));

  return t;
};

//��ѯ���͹�˾�����㷨
PyObject * new_CThostFtdcQryBrokerTradingAlgosField(KingstarAPI::CThostFtdcQryBrokerTradingAlgosField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryBrokerTradingAlgosField", (char*)"sss",
p->InstrumentID, p->ExchangeID, p->BrokerID);
}
KingstarAPI::CThostFtdcQryBrokerTradingAlgosField * from_CThostFtdcQryBrokerTradingAlgosField(PyObject * p){
  KingstarAPI::CThostFtdcQryBrokerTradingAlgosField *t = (KingstarAPI::CThostFtdcQryBrokerTradingAlgosField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryBrokerTradingAlgosField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryBrokerTradingAlgosField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//ת������
PyObject * new_CThostFtdcReqTransferField(KingstarAPI::CThostFtdcReqTransferField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqTransferField", (char*)"sssscississsisscicscssssssccidssdccicscsdds",
p->BrokerBranchID, p->UserID, p->BankPassWord, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->InstallID, p->CustomerName, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->Password, p->BankPwdFlag, p->RequestID, p->CustType, p->IdentifiedCardNo, p->FeePayFlag, p->BankSerial, p->OperNo, p->TradingDay, p->BankSecuAcc, p->BrokerID, p->DeviceID, p->TransferStatus, p->IdCardType, p->PlateSerial, p->FutureFetchAmount, p->TradeDate, p->CurrencyID, p->BrokerFee, p->BankAccType, p->LastFragment, p->FutureSerial, p->BankSecuAccType, p->BrokerIDByBank, p->SecuPwdFlag, p->Message, p->CustFee, p->TradeAmount, p->Digest);
}
KingstarAPI::CThostFtdcReqTransferField * from_CThostFtdcReqTransferField(PyObject * p){
  KingstarAPI::CThostFtdcReqTransferField *t = (KingstarAPI::CThostFtdcReqTransferField *)calloc(1, sizeof(KingstarAPI::CThostFtdcReqTransferField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcReqTransferField));
  //���̷�֧��������
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //�û���ʶ
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //��������
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //����ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //��֤�ͻ�֤�������־
  //enum����
  //THOST_FTDC_YNI_No -> '1', ��
  //THOST_FTDC_YNI_Yes -> '0', ��
  t->VerifyCertNoFlag =   PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
  //����ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //Ͷ�����ʺ�
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //�����ʺ�
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //�ͻ�����
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //ҵ������
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //���з�֧��������
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //�Ự��
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //�ڻ�����
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //���������־
  //enum����
  //THOST_FTDC_BPWDF_BlankCheck -> '1', ���ĺ˶�
  //THOST_FTDC_BPWDF_NoCheck -> '0', ���˶�
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', ���ĺ˶�
  t->BankPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
  //������
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //�ͻ�����
  //enum����
  //THOST_FTDC_CUSTT_Institution -> '1', ������
  //THOST_FTDC_CUSTT_Person -> '0', ��Ȼ��
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //֤������
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //����֧����־
  //enum����
  //THOST_FTDC_FPF_BEN -> '0', �����淽֧������
  //THOST_FTDC_FPF_SHA -> '2', �ɷ��ͷ�֧������ķ��ã����淽֧�����ܵķ���
  //THOST_FTDC_FPF_OUR -> '1', �ɷ��ͷ�֧������
  t->FeePayFlag =   PyString_AsString(PyObject_GetAttrString(p, "FeePayFlag"))[0];
  //������ˮ��
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //���׹�Ա
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //����ϵͳ����
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //�ڻ���λ�ʺ�
  strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
  //���̴���
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //������־
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //ת�˽���״̬
  //enum����
  //THOST_FTDC_TRFS_Normal -> '0', ����
  //THOST_FTDC_TRFS_Repealed -> '1', ������
  t->TransferStatus =   PyString_AsString(PyObject_GetAttrString(p, "TransferStatus"))[0];
  //֤������
  //enum����
  //THOST_FTDC_ICT_LicenseNo -> '9', Ӫҵִ�պ�
  //THOST_FTDC_ICT_TaxNo -> 'A', ˰��ǼǺ�
  //THOST_FTDC_ICT_OfficerIDCard -> '2', ����֤
  //THOST_FTDC_ICT_IDCard -> '1', ���֤
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', ̨��֤
  //THOST_FTDC_ICT_OtherCard -> 'x', ����֤��
  //THOST_FTDC_ICT_PoliceIDCard -> '3', ����֤
  //THOST_FTDC_ICT_Passport -> '6', ����
  //THOST_FTDC_ICT_EID -> '0', ��֯��������
  //THOST_FTDC_ICT_HomeComingCard -> '8', ����֤
  //THOST_FTDC_ICT_HouseholdRegister -> '5', ���ڲ�
  //THOST_FTDC_ICT_SoldierIDCard -> '4', ʿ��֤
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //����ƽ̨��Ϣ��ˮ��
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //�ڻ���ȡ���
  t->FutureFetchAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FutureFetchAmount"));
  //��������
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //���ִ���
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //Ӧ���ڻ���˾����
  t->BrokerFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BrokerFee"));
  //�����ʺ�����
  //enum����
  //THOST_FTDC_BAT_SavingCard -> '2', ���
  //THOST_FTDC_BAT_CreditCard -> '3', ���ÿ�
  //THOST_FTDC_BAT_BankBook -> '1', ���д���
  t->BankAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
  //����Ƭ��־
  //enum����
  //THOST_FTDC_LF_No -> '1', ��������Ƭ
  //THOST_FTDC_LF_Yes -> '0', ������Ƭ
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //�ڻ���˾��ˮ��
  t->FutureSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
  //�ڻ���λ�ʺ�����
  //enum����
  //THOST_FTDC_BAT_SavingCard -> '2', ���
  //THOST_FTDC_BAT_CreditCard -> '3', ���ÿ�
  //THOST_FTDC_BAT_BankBook -> '1', ���д���
  t->BankSecuAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
  //�ڻ���˾���б���
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //�ڻ��ʽ�����˶Ա�־
  //enum����
  //THOST_FTDC_BPWDF_BlankCheck -> '1', ���ĺ˶�
  //THOST_FTDC_BPWDF_NoCheck -> '0', ���˶�
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', ���ĺ˶�
  t->SecuPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
  //���ͷ������շ�����Ϣ
  strcpy(t->Message, PyString_AsString(PyObject_GetAttrString(p, "Message")));
  //Ӧ�տͻ�����
  t->CustFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));
  //ת�ʽ��
  t->TradeAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
  //ժҪ
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

  return t;
};

//ѡ��������
PyObject * new_CTKSConditionalOrderSelect(CTKSConditionalOrderSelect * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CTKSConditionalOrderSelect", (char*)"ssic",
p->InvestorID, p->BrokerID, p->ConditionalOrderID, p->SelectResult);
}
CTKSConditionalOrderSelect * from_CTKSConditionalOrderSelect(PyObject * p){
CTKSConditionalOrderSelect *t = (CTKSConditionalOrderSelect *)calloc(1, sizeof(CTKSConditionalOrderSelect));
  memset(t,0,sizeof(CTKSConditionalOrderSelect));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //Ӫҵ������
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //���������
  t->ConditionalOrderID =   PyInt_AsLong(PyObject_GetAttrString(p, "ConditionalOrderID"));
  //ѡ����
  //enum����
  //KSCOS_Select_ABORT -> '2', ��ֹ
  //KSCOS_Select_AGAIN -> '0', ����
  //KSCOS_Select_SKIP -> '1', ����
  t->SelectResult =   PyString_AsString(PyObject_GetAttrString(p, "SelectResult"))[0];

  return t;
};

//��֤�ڻ��ʽ�����Ϳͻ���Ϣ
PyObject * new_CThostFtdcVerifyFuturePasswordAndCustInfoField(KingstarAPI::CThostFtdcVerifyFuturePasswordAndCustInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcVerifyFuturePasswordAndCustInfoField", (char*)"cscsss",
p->CustType, p->CustomerName, p->IdCardType, p->IdentifiedCardNo, p->Password, p->AccountID);
}
KingstarAPI::CThostFtdcVerifyFuturePasswordAndCustInfoField * from_CThostFtdcVerifyFuturePasswordAndCustInfoField(PyObject * p){
  KingstarAPI::CThostFtdcVerifyFuturePasswordAndCustInfoField *t = (KingstarAPI::CThostFtdcVerifyFuturePasswordAndCustInfoField *)calloc(1, sizeof(KingstarAPI::CThostFtdcVerifyFuturePasswordAndCustInfoField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcVerifyFuturePasswordAndCustInfoField));
  //�ͻ�����
  //enum����
  //THOST_FTDC_CUSTT_Institution -> '1', ������
  //THOST_FTDC_CUSTT_Person -> '0', ��Ȼ��
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //�ͻ�����
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //֤������
  //enum����
  //THOST_FTDC_ICT_LicenseNo -> '9', Ӫҵִ�պ�
  //THOST_FTDC_ICT_TaxNo -> 'A', ˰��ǼǺ�
  //THOST_FTDC_ICT_OfficerIDCard -> '2', ����֤
  //THOST_FTDC_ICT_IDCard -> '1', ���֤
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', ̨��֤
  //THOST_FTDC_ICT_OtherCard -> 'x', ����֤��
  //THOST_FTDC_ICT_PoliceIDCard -> '3', ����֤
  //THOST_FTDC_ICT_Passport -> '6', ����
  //THOST_FTDC_ICT_EID -> '0', ��֯��������
  //THOST_FTDC_ICT_HomeComingCard -> '8', ����֤
  //THOST_FTDC_ICT_HouseholdRegister -> '5', ���ڲ�
  //THOST_FTDC_ICT_SoldierIDCard -> '4', ʿ��֤
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //֤������
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //�ڻ�����
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //Ͷ�����ʺ�
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));

  return t;
};

//��ͣ�򼤻�������
PyObject * new_CTKSConditionalOrderStateAlter(CTKSConditionalOrderStateAlter * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CTKSConditionalOrderStateAlter", (char*)"scsi",
p->InvestorID, p->ConditionalOrderStateAlter, p->BrokerID, p->ConditionalOrderID);
}
CTKSConditionalOrderStateAlter * from_CTKSConditionalOrderStateAlter(PyObject * p){
CTKSConditionalOrderStateAlter *t = (CTKSConditionalOrderStateAlter *)calloc(1, sizeof(CTKSConditionalOrderStateAlter));
  memset(t,0,sizeof(CTKSConditionalOrderStateAlter));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //��ͣ�򼤻������־
  //enum����
  //KSCOS_State_ACTIVE -> '1', ����
  //KSCOS_State_PAUSE -> '0', ��ͣ
  t->ConditionalOrderStateAlter =   PyString_AsString(PyObject_GetAttrString(p, "ConditionalOrderStateAlter"))[0];
  //Ӫҵ������
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //���������
  t->ConditionalOrderID =   PyInt_AsLong(PyObject_GetAttrString(p, "ConditionalOrderID"));

  return t;
};

//��¼��Ϣ
PyObject * new_CThostFtdcLogoutAllField(KingstarAPI::CThostFtdcLogoutAllField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcLogoutAllField", (char*)"iis",
p->FrontID, p->SessionID, p->SystemName);
}
KingstarAPI::CThostFtdcLogoutAllField * from_CThostFtdcLogoutAllField(PyObject * p){
  KingstarAPI::CThostFtdcLogoutAllField *t = (KingstarAPI::CThostFtdcLogoutAllField *)calloc(1, sizeof(KingstarAPI::CThostFtdcLogoutAllField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcLogoutAllField));
  //ǰ�ñ��
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //�Ự���
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //ϵͳ����
  strcpy(t->SystemName, PyString_AsString(PyObject_GetAttrString(p, "SystemName")));

  return t;
};

//���龲̬����
PyObject * new_CThostFtdcMarketDataStaticField(KingstarAPI::CThostFtdcMarketDataStaticField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataStaticField", (char*)"dddddddd",
p->ClosePrice, p->HighestPrice, p->SettlementPrice, p->OpenPrice, p->LowerLimitPrice, p->UpperLimitPrice, p->LowestPrice, p->CurrDelta);
}
KingstarAPI::CThostFtdcMarketDataStaticField * from_CThostFtdcMarketDataStaticField(PyObject * p){
  KingstarAPI::CThostFtdcMarketDataStaticField *t = (KingstarAPI::CThostFtdcMarketDataStaticField *)calloc(1, sizeof(KingstarAPI::CThostFtdcMarketDataStaticField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcMarketDataStaticField));
  //������
  t->ClosePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ClosePrice"));
  //��߼�
  t->HighestPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "HighestPrice"));
  //���ν����
  t->SettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SettlementPrice"));
  //����
  t->OpenPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenPrice"));
  //��ͣ���
  t->LowerLimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LowerLimitPrice"));
  //��ͣ���
  t->UpperLimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "UpperLimitPrice"));
  //��ͼ�
  t->LowestPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LowestPrice"));
  //����ʵ��
  t->CurrDelta =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CurrDelta"));

  return t;
};

//���ױ���
PyObject * new_CThostFtdcTradingCodeField(KingstarAPI::CThostFtdcTradingCodeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTradingCodeField", (char*)"ssssci",
p->ExchangeID, p->ClientID, p->InvestorID, p->BrokerID, p->ClientIDType, p->IsActive);
}
KingstarAPI::CThostFtdcTradingCodeField * from_CThostFtdcTradingCodeField(PyObject * p){
  KingstarAPI::CThostFtdcTradingCodeField *t = (KingstarAPI::CThostFtdcTradingCodeField *)calloc(1, sizeof(KingstarAPI::CThostFtdcTradingCodeField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcTradingCodeField));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //�ͻ�����
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //���ױ�������
  //enum����
  //THOST_FTDC_CIDT_Hedge -> '3', �ױ�
  //THOST_FTDC_CIDT_Arbitrage -> '2', ����
  //THOST_FTDC_CIDT_Speculation -> '1', Ͷ��
  t->ClientIDType =   PyString_AsString(PyObject_GetAttrString(p, "ClientIDType"))[0];
  //�Ƿ��Ծ
  t->IsActive =   PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));

  return t;
};

//��Ӧ��Ϣ
PyObject * new_CThostFtdcRspInfoField(KingstarAPI::CThostFtdcRspInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspInfoField", (char*)"si",
p->ErrorMsg, p->ErrorID);
}
KingstarAPI::CThostFtdcRspInfoField * from_CThostFtdcRspInfoField(PyObject * p){
  KingstarAPI::CThostFtdcRspInfoField *t = (KingstarAPI::CThostFtdcRspInfoField *)calloc(1, sizeof(KingstarAPI::CThostFtdcRspInfoField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcRspInfoField));
  //������Ϣ
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //�������
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));

  return t;
};

//��ѯ�����û�
PyObject * new_CThostFtdcQrySuperUserField(KingstarAPI::CThostFtdcQrySuperUserField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQrySuperUserField", (char*)"s",
p->UserID);
}
KingstarAPI::CThostFtdcQrySuperUserField * from_CThostFtdcQrySuperUserField(PyObject * p){
  KingstarAPI::CThostFtdcQrySuperUserField *t = (KingstarAPI::CThostFtdcQrySuperUserField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQrySuperUserField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQrySuperUserField));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));

  return t;
};

//��ѯ���ױ���
PyObject * new_CThostFtdcQryInstrumentMarginRateField(KingstarAPI::CThostFtdcQryInstrumentMarginRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInstrumentMarginRateField", (char*)"sssc",
p->InstrumentID, p->InvestorID, p->BrokerID, p->HedgeFlag);
}
KingstarAPI::CThostFtdcQryInstrumentMarginRateField * from_CThostFtdcQryInstrumentMarginRateField(PyObject * p){
  KingstarAPI::CThostFtdcQryInstrumentMarginRateField *t = (KingstarAPI::CThostFtdcQryInstrumentMarginRateField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryInstrumentMarginRateField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryInstrumentMarginRateField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //Ͷ���ױ���־
  //enum����
  //THOST_FTDC_HF_Speculation -> '1', Ͷ��
  //THOST_FTDC_HF_Arbitrage -> '2', ����
  //THOST_FTDC_HF_Hedge -> '3', �ױ�
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];

  return t;
};

//��ѯ���ױ���
PyObject * new_CThostFtdcQryInvestorGroupField(KingstarAPI::CThostFtdcQryInvestorGroupField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInvestorGroupField", (char*)"s",
p->BrokerID);
}
KingstarAPI::CThostFtdcQryInvestorGroupField * from_CThostFtdcQryInvestorGroupField(PyObject * p){
  KingstarAPI::CThostFtdcQryInvestorGroupField *t = (KingstarAPI::CThostFtdcQryInvestorGroupField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryInvestorGroupField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryInvestorGroupField));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//���͹�˾�����ʽ��㷨��
PyObject * new_CThostFtdcInvestorWithdrawAlgorithmField(KingstarAPI::CThostFtdcInvestorWithdrawAlgorithmField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInvestorWithdrawAlgorithmField", (char*)"sscd",
p->InvestorID, p->BrokerID, p->InvestorRange, p->UsingRatio);
}
KingstarAPI::CThostFtdcInvestorWithdrawAlgorithmField * from_CThostFtdcInvestorWithdrawAlgorithmField(PyObject * p){
  KingstarAPI::CThostFtdcInvestorWithdrawAlgorithmField *t = (KingstarAPI::CThostFtdcInvestorWithdrawAlgorithmField *)calloc(1, sizeof(KingstarAPI::CThostFtdcInvestorWithdrawAlgorithmField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcInvestorWithdrawAlgorithmField));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //Ͷ���߷�Χ
  //enum����
  //THOST_FTDC_IR_All -> '1', ����
  //THOST_FTDC_IR_Group -> '2', Ͷ������
  //THOST_FTDC_IR_Single -> '3', ��һͶ����
  t->InvestorRange =   PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
  //�����ʽ����
  t->UsingRatio =   PyFloat_AsDouble(PyObject_GetAttrString(p, "UsingRatio"));

  return t;
};

//�ʽ��˻���������
PyObject * new_CThostFtdcTradingAccountPasswordUpdateV1Field(KingstarAPI::CThostFtdcTradingAccountPasswordUpdateV1Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTradingAccountPasswordUpdateV1Field", (char*)"ssss",
p->InvestorID, p->NewPassword, p->OldPassword, p->BrokerID);
}
KingstarAPI::CThostFtdcTradingAccountPasswordUpdateV1Field * from_CThostFtdcTradingAccountPasswordUpdateV1Field(PyObject * p){
  KingstarAPI::CThostFtdcTradingAccountPasswordUpdateV1Field *t = (KingstarAPI::CThostFtdcTradingAccountPasswordUpdateV1Field *)calloc(1, sizeof(KingstarAPI::CThostFtdcTradingAccountPasswordUpdateV1Field));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcTradingAccountPasswordUpdateV1Field));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //�µĿ���
  strcpy(t->NewPassword, PyString_AsString(PyObject_GetAttrString(p, "NewPassword")));
  //ԭ���Ŀ���
  strcpy(t->OldPassword, PyString_AsString(PyObject_GetAttrString(p, "OldPassword")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//�������ɽ�
PyObject * new_CThostFtdcExchangeTradeField(KingstarAPI::CThostFtdcExchangeTradeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcExchangeTradeField", (char*)"cscsccsdsisssssssisccc",
p->TradeType, p->TraderID, p->HedgeFlag, p->TradeTime, p->OffsetFlag, p->Direction, p->ParticipantID, p->Price, p->ClientID, p->Volume, p->OrderSysID, p->ExchangeID, p->ClearingPartID, p->OrderLocalID, p->TradeID, p->TradeDate, p->BusinessUnit, p->SequenceNo, p->ExchangeInstID, p->TradeSource, p->PriceSource, p->TradingRole);
}
KingstarAPI::CThostFtdcExchangeTradeField * from_CThostFtdcExchangeTradeField(PyObject * p){
  KingstarAPI::CThostFtdcExchangeTradeField *t = (KingstarAPI::CThostFtdcExchangeTradeField *)calloc(1, sizeof(KingstarAPI::CThostFtdcExchangeTradeField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcExchangeTradeField));
  //�ɽ�����
  //enum����
  //THOST_FTDC_TRDT_EFPDerived -> '3', ��ת�������ɽ�
  //THOST_FTDC_TRDT_OTC -> '2', OTC�ɽ�
  //THOST_FTDC_TRDT_OptionsExecution -> '1', ��Ȩִ��
  //THOST_FTDC_TRDT_Common -> '0', ��ͨ�ɽ�
  //THOST_FTDC_TRDT_CombinationDerived -> '4', ��������ɽ�
  t->TradeType =   PyString_AsString(PyObject_GetAttrString(p, "TradeType"))[0];
  //����������Ա����
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //Ͷ���ױ���־
  //enum����
  //THOST_FTDC_HF_Speculation -> '1', Ͷ��
  //THOST_FTDC_HF_Arbitrage -> '2', ����
  //THOST_FTDC_HF_Hedge -> '3', �ױ�
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //�ɽ�ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //��ƽ��־
  //enum����
  //THOST_FTDC_OF_CloseToday -> '3', ƽ��
  //THOST_FTDC_OF_ForceOff -> '5', ǿ��
  //THOST_FTDC_OF_LocalForceClose -> '6', ����ǿƽ
  //THOST_FTDC_OF_Close -> '1', ƽ��
  //THOST_FTDC_OF_Open -> '0', ����
  //THOST_FTDC_OF_CloseYesterday -> '4', ƽ��
  //THOST_FTDC_OF_ForceClose -> '2', ǿƽ
  t->OffsetFlag =   PyString_AsString(PyObject_GetAttrString(p, "OffsetFlag"))[0];
  //��������
  //enum����
  //THOST_FTDC_D_Buy -> '0', ��
  //THOST_FTDC_D_Sell -> '1', ��
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //��Ա����
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //�۸�
  t->Price =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Price"));
  //�ͻ�����
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //����
  t->Volume =   PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));
  //�������
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //�����Ա���
  strcpy(t->ClearingPartID, PyString_AsString(PyObject_GetAttrString(p, "ClearingPartID")));
  //���ر������
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //�ɽ����
  strcpy(t->TradeID, PyString_AsString(PyObject_GetAttrString(p, "TradeID")));
  //�ɽ�ʱ��
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //ҵ��Ԫ
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //���
  t->SequenceNo =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //��Լ�ڽ������Ĵ���
  strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
  //�ɽ���Դ
  //enum����
  //THOST_FTDC_TSRC_NORMAL -> '0', ���Խ�������ͨ�ر�
  //THOST_FTDC_TSRC_QUERY -> '1', ���Բ�ѯ
  t->TradeSource =   PyString_AsString(PyObject_GetAttrString(p, "TradeSource"))[0];
  //�ɽ�����Դ
  //enum����
  //THOST_FTDC_PSRC_Sell -> '2', ��ί�м�
  //THOST_FTDC_PSRC_Buy -> '1', ��ί�м�
  //THOST_FTDC_PSRC_LastPrice -> '0', ǰ�ɽ���
  t->PriceSource =   PyString_AsString(PyObject_GetAttrString(p, "PriceSource"))[0];
  //���׽�ɫ
  //enum����
  //THOST_FTDC_ER_Host -> '2', ��Ӫ
  //THOST_FTDC_ER_Broker -> '1', ����
  //THOST_FTDC_ER_Maker -> '3', ������
  t->TradingRole =   PyString_AsString(PyObject_GetAttrString(p, "TradingRole"))[0];

  return t;
};

//��ѯ�û��Ự
PyObject * new_CThostFtdcQryUserSessionField(KingstarAPI::CThostFtdcQryUserSessionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryUserSessionField", (char*)"iiss",
p->FrontID, p->SessionID, p->BrokerID, p->UserID);
}
KingstarAPI::CThostFtdcQryUserSessionField * from_CThostFtdcQryUserSessionField(PyObject * p){
  KingstarAPI::CThostFtdcQryUserSessionField *t = (KingstarAPI::CThostFtdcQryUserSessionField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryUserSessionField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryUserSessionField));
  //ǰ�ñ��
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //�Ự���
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));

  return t;
};

//�û��¼�֪ͨ
PyObject * new_CThostFtdcTradingNoticeField(KingstarAPI::CThostFtdcTradingNoticeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTradingNoticeField", (char*)"hisssssc",
p->SequenceSeries, p->SequenceNo, p->UserID, p->FieldContent, p->InvestorID, p->BrokerID, p->SendTime, p->InvestorRange);
}
KingstarAPI::CThostFtdcTradingNoticeField * from_CThostFtdcTradingNoticeField(PyObject * p){
  KingstarAPI::CThostFtdcTradingNoticeField *t = (KingstarAPI::CThostFtdcTradingNoticeField *)calloc(1, sizeof(KingstarAPI::CThostFtdcTradingNoticeField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcTradingNoticeField));
  //����ϵ�к�
  t->SequenceSeries =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceSeries"));
  //���к�
  t->SequenceNo =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //��Ϣ����
  strcpy(t->FieldContent, PyString_AsString(PyObject_GetAttrString(p, "FieldContent")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //����ʱ��
  strcpy(t->SendTime, PyString_AsString(PyObject_GetAttrString(p, "SendTime")));
  //Ͷ���߷�Χ
  //enum����
  //THOST_FTDC_IR_All -> '1', ����
  //THOST_FTDC_IR_Group -> '2', Ͷ������
  //THOST_FTDC_IR_Single -> '3', ��һͶ����
  t->InvestorRange =   PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];

  return t;
};

//���׺��������ڱ��̷�����Կͬ������
PyObject * new_CThostFtdcReqSyncKeyField(KingstarAPI::CThostFtdcReqSyncKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqSyncKeyField", (char*)"isscssssssissssissii",
p->InstallID, p->TradeDate, p->TradeCode, p->LastFragment, p->BrokerBranchID, p->BrokerIDByBank, p->BankSerial, p->BankBranchID, p->OperNo, p->TradingDay, p->SessionID, p->BrokerID, p->DeviceID, p->UserID, p->BankID, p->TID, p->TradeTime, p->Message, p->PlateSerial, p->RequestID);
}
KingstarAPI::CThostFtdcReqSyncKeyField * from_CThostFtdcReqSyncKeyField(PyObject * p){
  KingstarAPI::CThostFtdcReqSyncKeyField *t = (KingstarAPI::CThostFtdcReqSyncKeyField *)calloc(1, sizeof(KingstarAPI::CThostFtdcReqSyncKeyField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcReqSyncKeyField));
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //��������
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //ҵ������
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //����Ƭ��־
  //enum����
  //THOST_FTDC_LF_No -> '1', ��������Ƭ
  //THOST_FTDC_LF_Yes -> '0', ������Ƭ
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //���̷�֧��������
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //�ڻ���˾���б���
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //������ˮ��
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //���з�֧��������
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //���׹�Ա
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //����ϵͳ����
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //�Ự��
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //���̴���
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //������־
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //�û���ʶ
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //����ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //����ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //���׺��ĸ����ڱ��̵���Ϣ
  strcpy(t->Message, PyString_AsString(PyObject_GetAttrString(p, "Message")));
  //����ƽ̨��Ϣ��ˮ��
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //������
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));

  return t;
};

//��ѯֹ��ֹӯ��
PyObject * new_CTKSProfitAndLossOrderQuery(CTKSProfitAndLossOrderQuery * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CTKSProfitAndLossOrderQuery", (char*)"sssssi",
p->ExchangeID, p->OrderLocalID, p->BusinessUnit, p->InvestorID, p->BrokerID, p->ProfitAndLossOrderID);
}
CTKSProfitAndLossOrderQuery * from_CTKSProfitAndLossOrderQuery(PyObject * p){
CTKSProfitAndLossOrderQuery *t = (CTKSProfitAndLossOrderQuery *)calloc(1, sizeof(CTKSProfitAndLossOrderQuery));
  memset(t,0,sizeof(CTKSProfitAndLossOrderQuery));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //���ر������
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //ҵ��Ԫ
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //Ӫҵ������
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //ֹ��ֹӯ����
  t->ProfitAndLossOrderID =   PyInt_AsLong(PyObject_GetAttrString(p, "ProfitAndLossOrderID"));

  return t;
};

//��ѯ���͹�˾�û�
PyObject * new_CThostFtdcQryBrokerUserField(KingstarAPI::CThostFtdcQryBrokerUserField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryBrokerUserField", (char*)"ss",
p->UserID, p->BrokerID);
}
KingstarAPI::CThostFtdcQryBrokerUserField * from_CThostFtdcQryBrokerUserField(PyObject * p){
  KingstarAPI::CThostFtdcQryBrokerUserField *t = (KingstarAPI::CThostFtdcQryBrokerUserField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryBrokerUserField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryBrokerUserField));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//����ǩ��֪ͨ
PyObject * new_CThostFtdcNotifyFutureSignInField(KingstarAPI::CThostFtdcNotifyFutureSignInField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcNotifyFutureSignInField", (char*)"sssiisssissiissssssssciss",
p->BrokerBranchID, p->UserID, p->TradeTime, p->TID, p->InstallID, p->PinKey, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->MacKey, p->PlateSerial, p->ErrorID, p->BankSerial, p->OperNo, p->TradingDay, p->BrokerID, p->DeviceID, p->TradeDate, p->CurrencyID, p->ErrorMsg, p->LastFragment, p->RequestID, p->BrokerIDByBank, p->Digest);
}
KingstarAPI::CThostFtdcNotifyFutureSignInField * from_CThostFtdcNotifyFutureSignInField(PyObject * p){
  KingstarAPI::CThostFtdcNotifyFutureSignInField *t = (KingstarAPI::CThostFtdcNotifyFutureSignInField *)calloc(1, sizeof(KingstarAPI::CThostFtdcNotifyFutureSignInField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcNotifyFutureSignInField));
  //���̷�֧��������
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //�û���ʶ
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //����ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //����ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //PIN��Կ
  strcpy(t->PinKey, PyString_AsString(PyObject_GetAttrString(p, "PinKey")));
  //ҵ������
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //���з�֧��������
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //�Ự��
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //MAC��Կ
  strcpy(t->MacKey, PyString_AsString(PyObject_GetAttrString(p, "MacKey")));
  //����ƽ̨��Ϣ��ˮ��
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //�������
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //������ˮ��
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //���׹�Ա
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //����ϵͳ����
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //���̴���
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //������־
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //��������
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //���ִ���
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //������Ϣ
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //����Ƭ��־
  //enum����
  //THOST_FTDC_LF_No -> '1', ��������Ƭ
  //THOST_FTDC_LF_Yes -> '0', ������Ƭ
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //������
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //�ڻ���˾���б���
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //ժҪ
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

  return t;
};

//����ͬ���еĺ�Լ��������
PyObject * new_CThostFtdcSyncingInstrumentCommissionRateField(KingstarAPI::CThostFtdcSyncingInstrumentCommissionRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncingInstrumentCommissionRateField", (char*)"sdddsscddd",
p->InstrumentID, p->OpenRatioByMoney, p->CloseRatioByVolume, p->CloseTodayRatioByMoney, p->InvestorID, p->BrokerID, p->InvestorRange, p->CloseRatioByMoney, p->OpenRatioByVolume, p->CloseTodayRatioByVolume);
}
KingstarAPI::CThostFtdcSyncingInstrumentCommissionRateField * from_CThostFtdcSyncingInstrumentCommissionRateField(PyObject * p){
  KingstarAPI::CThostFtdcSyncingInstrumentCommissionRateField *t = (KingstarAPI::CThostFtdcSyncingInstrumentCommissionRateField *)calloc(1, sizeof(KingstarAPI::CThostFtdcSyncingInstrumentCommissionRateField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcSyncingInstrumentCommissionRateField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //������������
  t->OpenRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenRatioByMoney"));
  //ƽ��������
  t->CloseRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseRatioByVolume"));
  //ƽ����������
  t->CloseTodayRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseTodayRatioByMoney"));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //Ͷ���߷�Χ
  //enum����
  //THOST_FTDC_IR_All -> '1', ����
  //THOST_FTDC_IR_Group -> '2', Ͷ������
  //THOST_FTDC_IR_Single -> '3', ��һͶ����
  t->InvestorRange =   PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
  //ƽ����������
  t->CloseRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseRatioByMoney"));
  //����������
  t->OpenRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenRatioByVolume"));
  //ƽ��������
  t->CloseTodayRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseTodayRatioByVolume"));

  return t;
};

//����ͬ���еĺ�Լ��֤����
PyObject * new_CThostFtdcSyncingInstrumentMarginRateField(KingstarAPI::CThostFtdcSyncingInstrumentMarginRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncingInstrumentMarginRateField", (char*)"sddicsscdd",
p->InstrumentID, p->ShortMarginRatioByMoney, p->LongMarginRatioByMoney, p->IsRelative, p->HedgeFlag, p->InvestorID, p->BrokerID, p->InvestorRange, p->ShortMarginRatioByVolume, p->LongMarginRatioByVolume);
}
KingstarAPI::CThostFtdcSyncingInstrumentMarginRateField * from_CThostFtdcSyncingInstrumentMarginRateField(PyObject * p){
  KingstarAPI::CThostFtdcSyncingInstrumentMarginRateField *t = (KingstarAPI::CThostFtdcSyncingInstrumentMarginRateField *)calloc(1, sizeof(KingstarAPI::CThostFtdcSyncingInstrumentMarginRateField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcSyncingInstrumentMarginRateField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //��ͷ��֤����
  t->ShortMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByMoney"));
  //��ͷ��֤����
  t->LongMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByMoney"));
  //�Ƿ���Խ�������ȡ
  t->IsRelative =   PyInt_AsLong(PyObject_GetAttrString(p, "IsRelative"));
  //Ͷ���ױ���־
  //enum����
  //THOST_FTDC_HF_Speculation -> '1', Ͷ��
  //THOST_FTDC_HF_Arbitrage -> '2', ����
  //THOST_FTDC_HF_Hedge -> '3', �ױ�
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //Ͷ���߷�Χ
  //enum����
  //THOST_FTDC_IR_All -> '1', ����
  //THOST_FTDC_IR_Group -> '2', Ͷ������
  //THOST_FTDC_IR_Single -> '3', ��һͶ����
  t->InvestorRange =   PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
  //��ͷ��֤���
  t->ShortMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByVolume"));
  //��ͷ��֤���
  t->LongMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByVolume"));

  return t;
};

//��������������Ϣ
PyObject * new_CTKSConditionalOrderRspResultField(CTKSConditionalOrderRspResultField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CTKSConditionalOrderRspResultField", (char*)"ssi",
p->InvestorID, p->BrokerID, p->ConditionalOrderID);
}
CTKSConditionalOrderRspResultField * from_CTKSConditionalOrderRspResultField(PyObject * p){
CTKSConditionalOrderRspResultField *t = (CTKSConditionalOrderRspResultField *)calloc(1, sizeof(CTKSConditionalOrderRspResultField));
  memset(t,0,sizeof(CTKSConditionalOrderRspResultField));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //Ӫҵ������
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //���������
  t->ConditionalOrderID =   PyInt_AsLong(PyObject_GetAttrString(p, "ConditionalOrderID"));

  return t;
};

//�޸�ֹ��ֹӯ��
PyObject * new_CTKSProfitAndLossOrderModify(CTKSProfitAndLossOrderModify * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CTKSProfitAndLossOrderModify", (char*)"dicssdiccdd",
p->TakeProfitPrice, p->TriggeredTimes, p->SpringType, p->InvestorID, p->BrokerID, p->FiguresPrice, p->ProfitAndLossOrderID, p->CloseMode, p->OffsetValue, p->StopLossPrice, p->FloatLimitPrice);
}
CTKSProfitAndLossOrderModify * from_CTKSProfitAndLossOrderModify(PyObject * p){
CTKSProfitAndLossOrderModify *t = (CTKSProfitAndLossOrderModify *)calloc(1, sizeof(CTKSProfitAndLossOrderModify));
  memset(t,0,sizeof(CTKSProfitAndLossOrderModify));
  //ֹӯ��
  t->TakeProfitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TakeProfitPrice"));
  //��������
  t->TriggeredTimes =   PyInt_AsLong(PyObject_GetAttrString(p, "TriggeredTimes"));
  //�����������۸�����
  //enum����
  //KSPL_SPRING_LastPrice -> '0', ���¼�
  //KSPL_SPRING_SalePrice -> '1', ������
  t->SpringType =   PyString_AsString(PyObject_GetAttrString(p, "SpringType"))[0];
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //Ӫҵ������
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //ƽ�ַ����λ����ƽ�ַ�ʽ=1��2ʱ��Ч��
  t->FiguresPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FiguresPrice"));
  //ֹ��ֹӯ����
  t->ProfitAndLossOrderID =   PyInt_AsLong(PyObject_GetAttrString(p, "ProfitAndLossOrderID"));
  //ƽ�ַ�ʽ
  //enum����
  //KSPL_Close_SalePrice -> '1', �Ӽ�������
  //KSPL_Close_MarketPrice -> '0', �м�
  //KSPL_Close_LastPrice -> '2', �Ӽ����¼�
  t->CloseMode =   PyString_AsString(PyObject_GetAttrString(p, "CloseMode"))[0];
  //����ӯ��۵ķ�ʽ
  //enum����
  //KSPL_OffsetValue_TradePrice -> '1', ���ֳɽ��۵����ƫ��ֵ
  //KSPL_OffsetValue_TermPrice -> '0', ָ��ֵ
  t->OffsetValue =   PyString_AsString(PyObject_GetAttrString(p, "OffsetValue"))[0];
  //ֹ���
  t->StopLossPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StopLossPrice"));
  //����ֹ���
  t->FloatLimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FloatLimitPrice"));

  return t;
};

//ǿ�ƽ���Ա�˳�
PyObject * new_CThostFtdcForceUserLogoutField(KingstarAPI::CThostFtdcForceUserLogoutField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcForceUserLogoutField", (char*)"ss",
p->UserID, p->BrokerID);
}
KingstarAPI::CThostFtdcForceUserLogoutField * from_CThostFtdcForceUserLogoutField(PyObject * p){
  KingstarAPI::CThostFtdcForceUserLogoutField *t = (KingstarAPI::CThostFtdcForceUserLogoutField *)calloc(1, sizeof(KingstarAPI::CThostFtdcForceUserLogoutField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcForceUserLogoutField));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//���׺��������ڱ��̷�����Կͬ����������֪ͨ
PyObject * new_CThostFtdcNotifySyncKeyField(KingstarAPI::CThostFtdcNotifySyncKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcNotifySyncKeyField", (char*)"sssiissisiisssssssciss",
p->BrokerBranchID, p->UserID, p->TradeTime, p->TID, p->InstallID, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->PlateSerial, p->ErrorID, p->BankSerial, p->OperNo, p->TradingDay, p->BrokerID, p->DeviceID, p->TradeDate, p->ErrorMsg, p->LastFragment, p->RequestID, p->BrokerIDByBank, p->Message);
}
KingstarAPI::CThostFtdcNotifySyncKeyField * from_CThostFtdcNotifySyncKeyField(PyObject * p){
  KingstarAPI::CThostFtdcNotifySyncKeyField *t = (KingstarAPI::CThostFtdcNotifySyncKeyField *)calloc(1, sizeof(KingstarAPI::CThostFtdcNotifySyncKeyField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcNotifySyncKeyField));
  //���̷�֧��������
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //�û���ʶ
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //����ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //����ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //ҵ������
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //���з�֧��������
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //�Ự��
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //����ƽ̨��Ϣ��ˮ��
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //�������
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //������ˮ��
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //���׹�Ա
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //����ϵͳ����
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //���̴���
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //������־
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //��������
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //������Ϣ
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //����Ƭ��־
  //enum����
  //THOST_FTDC_LF_No -> '1', ��������Ƭ
  //THOST_FTDC_LF_Yes -> '0', ������Ƭ
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //������
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //�ڻ���˾���б���
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //���׺��ĸ����ڱ��̵���Ϣ
  strcpy(t->Message, PyString_AsString(PyObject_GetAttrString(p, "Message")));

  return t;
};

//���������ġ�������
PyObject * new_CThostFtdcMarketDataBid45Field(KingstarAPI::CThostFtdcMarketDataBid45Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataBid45Field", (char*)"ddii",
p->BidPrice5, p->BidPrice4, p->BidVolume5, p->BidVolume4);
}
KingstarAPI::CThostFtdcMarketDataBid45Field * from_CThostFtdcMarketDataBid45Field(PyObject * p){
  KingstarAPI::CThostFtdcMarketDataBid45Field *t = (KingstarAPI::CThostFtdcMarketDataBid45Field *)calloc(1, sizeof(KingstarAPI::CThostFtdcMarketDataBid45Field));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcMarketDataBid45Field));
  //�������
  t->BidPrice5 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice5"));
  //�������
  t->BidPrice4 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice4"));
  //��������
  t->BidVolume5 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume5"));
  //��������
  t->BidVolume4 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume4"));

  return t;
};

//ɾ��ֹ��ֹӯ��
PyObject * new_CTKSProfitAndLossOrderRemove(CTKSProfitAndLossOrderRemove * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CTKSProfitAndLossOrderRemove", (char*)"sssssi",
p->ExchangeID, p->OrderLocalID, p->BusinessUnit, p->InvestorID, p->BrokerID, p->ProfitAndLossOrderID);
}
CTKSProfitAndLossOrderRemove * from_CTKSProfitAndLossOrderRemove(PyObject * p){
CTKSProfitAndLossOrderRemove *t = (CTKSProfitAndLossOrderRemove *)calloc(1, sizeof(CTKSProfitAndLossOrderRemove));
  memset(t,0,sizeof(CTKSProfitAndLossOrderRemove));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //���ر������
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //ҵ��Ԫ
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //Ӫҵ������
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //ֹ��ֹӯ����
  t->ProfitAndLossOrderID =   PyInt_AsLong(PyObject_GetAttrString(p, "ProfitAndLossOrderID"));

  return t;
};

//��ϵ��
PyObject * new_CThostFtdcLinkManField(KingstarAPI::CThostFtdcLinkManField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcLinkManField", (char*)"cssssisssc",
p->PersonType, p->PersonName, p->IdentifiedCardNo, p->Telephone, p->ZipCode, p->Priority, p->InvestorID, p->BrokerID, p->Address, p->IdentifiedCardType);
}
KingstarAPI::CThostFtdcLinkManField * from_CThostFtdcLinkManField(PyObject * p){
  KingstarAPI::CThostFtdcLinkManField *t = (KingstarAPI::CThostFtdcLinkManField *)calloc(1, sizeof(KingstarAPI::CThostFtdcLinkManField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcLinkManField));
  //��ϵ������
  //enum����
  //THOST_FTDC_PST_LinkMan -> '7', Ͷ������ϵ��
  //THOST_FTDC_PST_Corporation -> '6', ���˴���
  //THOST_FTDC_PST_Settlement -> '4', ���㵥ȷ����
  //THOST_FTDC_PST_Open -> '2', ������Ȩ��
  //THOST_FTDC_PST_Company -> '5', ����
  //THOST_FTDC_PST_Order -> '1', ָ���µ���
  //THOST_FTDC_PST_Fund -> '3', �ʽ������
  t->PersonType =   PyString_AsString(PyObject_GetAttrString(p, "PersonType"))[0];
  //����
  strcpy(t->PersonName, PyString_AsString(PyObject_GetAttrString(p, "PersonName")));
  //֤������
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //��ϵ�绰
  strcpy(t->Telephone, PyString_AsString(PyObject_GetAttrString(p, "Telephone")));
  //��������
  strcpy(t->ZipCode, PyString_AsString(PyObject_GetAttrString(p, "ZipCode")));
  //���ȼ�
  t->Priority =   PyInt_AsLong(PyObject_GetAttrString(p, "Priority"));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //ͨѶ��ַ
  strcpy(t->Address, PyString_AsString(PyObject_GetAttrString(p, "Address")));
  //֤������
  //enum����
  //THOST_FTDC_ICT_LicenseNo -> '9', Ӫҵִ�պ�
  //THOST_FTDC_ICT_TaxNo -> 'A', ˰��ǼǺ�
  //THOST_FTDC_ICT_OfficerIDCard -> '2', ����֤
  //THOST_FTDC_ICT_IDCard -> '1', ���֤
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', ̨��֤
  //THOST_FTDC_ICT_OtherCard -> 'x', ����֤��
  //THOST_FTDC_ICT_PoliceIDCard -> '3', ����֤
  //THOST_FTDC_ICT_Passport -> '6', ����
  //THOST_FTDC_ICT_EID -> '0', ��֯��������
  //THOST_FTDC_ICT_HomeComingCard -> '8', ����֤
  //THOST_FTDC_ICT_HouseholdRegister -> '5', ���ڲ�
  //THOST_FTDC_ICT_SoldierIDCard -> '4', ʿ��֤
  t->IdentifiedCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardType"))[0];

  return t;
};

//Ͷ������������ģ��
PyObject * new_CThostFtdcCommRateModelField(KingstarAPI::CThostFtdcCommRateModelField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcCommRateModelField", (char*)"sss",
p->CommModelID, p->BrokerID, p->CommModelName);
}
KingstarAPI::CThostFtdcCommRateModelField * from_CThostFtdcCommRateModelField(PyObject * p){
  KingstarAPI::CThostFtdcCommRateModelField *t = (KingstarAPI::CThostFtdcCommRateModelField *)calloc(1, sizeof(KingstarAPI::CThostFtdcCommRateModelField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcCommRateModelField));
  //��������ģ�����
  strcpy(t->CommModelID, PyString_AsString(PyObject_GetAttrString(p, "CommModelID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //ģ������
  strcpy(t->CommModelName, PyString_AsString(PyObject_GetAttrString(p, "CommModelName")));

  return t;
};

//����ӯ���㷨
PyObject * new_CThostFtdcPositionProfitAlgorithmField(KingstarAPI::CThostFtdcPositionProfitAlgorithmField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcPositionProfitAlgorithmField", (char*)"sscs",
p->Memo, p->BrokerID, p->Algorithm, p->AccountID);
}
KingstarAPI::CThostFtdcPositionProfitAlgorithmField * from_CThostFtdcPositionProfitAlgorithmField(PyObject * p){
  KingstarAPI::CThostFtdcPositionProfitAlgorithmField *t = (KingstarAPI::CThostFtdcPositionProfitAlgorithmField *)calloc(1, sizeof(KingstarAPI::CThostFtdcPositionProfitAlgorithmField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcPositionProfitAlgorithmField));
  //��ע
  strcpy(t->Memo, PyString_AsString(PyObject_GetAttrString(p, "Memo")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //ӯ���㷨
  //enum����
  //THOST_FTDC_AG_OnlyLost -> '2', ��ӯ���ƣ�������
  //THOST_FTDC_AG_None -> '4', ��ӯ������������
  //THOST_FTDC_AG_All -> '1', ��ӯ����������
  //THOST_FTDC_AG_OnlyGain -> '3', ��ӯ�ƣ���������
  t->Algorithm =   PyString_AsString(PyObject_GetAttrString(p, "Algorithm"))[0];
  //Ͷ�����ʺ�
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));

  return t;
};

//��ѯ������
PyObject * new_CThostFtdcQryExchangeField(KingstarAPI::CThostFtdcQryExchangeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryExchangeField", (char*)"s",
p->ExchangeID);
}
KingstarAPI::CThostFtdcQryExchangeField * from_CThostFtdcQryExchangeField(PyObject * p){
  KingstarAPI::CThostFtdcQryExchangeField *t = (KingstarAPI::CThostFtdcQryExchangeField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryExchangeField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryExchangeField));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));

  return t;
};

//��ѯ��󱨵�����
PyObject * new_CThostFtdcQueryMaxOrderVolumeField(KingstarAPI::CThostFtdcQueryMaxOrderVolumeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQueryMaxOrderVolumeField", (char*)"scccssi",
p->InstrumentID, p->Direction, p->OffsetFlag, p->HedgeFlag, p->InvestorID, p->BrokerID, p->MaxVolume);
}
KingstarAPI::CThostFtdcQueryMaxOrderVolumeField * from_CThostFtdcQueryMaxOrderVolumeField(PyObject * p){
  KingstarAPI::CThostFtdcQueryMaxOrderVolumeField *t = (KingstarAPI::CThostFtdcQueryMaxOrderVolumeField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQueryMaxOrderVolumeField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQueryMaxOrderVolumeField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //��������
  //enum����
  //THOST_FTDC_D_Buy -> '0', ��
  //THOST_FTDC_D_Sell -> '1', ��
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //��ƽ��־
  //enum����
  //THOST_FTDC_OF_CloseToday -> '3', ƽ��
  //THOST_FTDC_OF_ForceOff -> '5', ǿ��
  //THOST_FTDC_OF_LocalForceClose -> '6', ����ǿƽ
  //THOST_FTDC_OF_Close -> '1', ƽ��
  //THOST_FTDC_OF_Open -> '0', ����
  //THOST_FTDC_OF_CloseYesterday -> '4', ƽ��
  //THOST_FTDC_OF_ForceClose -> '2', ǿƽ
  t->OffsetFlag =   PyString_AsString(PyObject_GetAttrString(p, "OffsetFlag"))[0];
  //Ͷ���ױ���־
  //enum����
  //THOST_FTDC_HF_Speculation -> '1', Ͷ��
  //THOST_FTDC_HF_Arbitrage -> '2', ����
  //THOST_FTDC_HF_Hedge -> '3', �ױ�
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //�������������
  t->MaxVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MaxVolume"));

  return t;
};

//�������ʱ������
PyObject * new_CThostFtdcMarketDataUpdateTimeField(KingstarAPI::CThostFtdcMarketDataUpdateTimeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataUpdateTimeField", (char*)"ssi",
p->InstrumentID, p->UpdateTime, p->UpdateMillisec);
}
KingstarAPI::CThostFtdcMarketDataUpdateTimeField * from_CThostFtdcMarketDataUpdateTimeField(PyObject * p){
  KingstarAPI::CThostFtdcMarketDataUpdateTimeField *t = (KingstarAPI::CThostFtdcMarketDataUpdateTimeField *)calloc(1, sizeof(KingstarAPI::CThostFtdcMarketDataUpdateTimeField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcMarketDataUpdateTimeField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //����޸�ʱ��
  strcpy(t->UpdateTime, PyString_AsString(PyObject_GetAttrString(p, "UpdateTime")));
  //����޸ĺ���
  t->UpdateMillisec =   PyInt_AsLong(PyObject_GetAttrString(p, "UpdateMillisec"));

  return t;
};

//�޸�������
PyObject * new_CTKSConditionalOrderModify(CTKSConditionalOrderModify * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CTKSConditionalOrderModify", (char*)"scsicscccssssdcsiid",
p->InstrumentID, p->CombHedgeFlag, p->ExchangeID, p->TriggeredTimes, p->OrderPriceType, p->CurrencyID, p->OrderType, p->CombOffsetFlag, p->Direction, p->ClientID, p->InvestorID, p->ActiveTime, p->BrokerID, p->LimitPrice, p->ConditionalType, p->InActiveTime, p->ConditionalOrderID, p->VolumeTotalOriginal, p->ConditionalPrice);
}
CTKSConditionalOrderModify * from_CTKSConditionalOrderModify(PyObject * p){
CTKSConditionalOrderModify *t = (CTKSConditionalOrderModify *)calloc(1, sizeof(CTKSConditionalOrderModify));
  memset(t,0,sizeof(CTKSConditionalOrderModify));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //Ͷ���ױ���־
  //enum����
  //THOST_FTDC_HF_Speculation -> '1', Ͷ��
  //THOST_FTDC_HF_Arbitrage -> '2', ����
  //THOST_FTDC_HF_Hedge -> '3', �ױ�
  t->CombHedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "CombHedgeFlag"))[0];
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //��������
  t->TriggeredTimes =   PyInt_AsLong(PyObject_GetAttrString(p, "TriggeredTimes"));
  //�۸����
  //enum����
  //KSCOS_OrderPrice_LastPrice -> '0', ���¼�
  //KSCOS_OrderPrice_AskPrice -> '2', ����
  //KSCOS_OrderPrice_BidPrice -> '1', ���
  t->OrderPriceType =   PyString_AsString(PyObject_GetAttrString(p, "OrderPriceType"))[0];
  //���Ҵ���
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //����������
  //enum����
  //KSCOS_TRIGGERTYPE_QUOTAIONANDTIME -> '5', �����ʱ�䴥��
  //KSCOS_TRIGGERTYPE_TIME -> '2', ʱ�䴥��
  //KSCOS_TRIGGERTYPE_QUOTATION -> '0', ���鴥��
  //KSCOS_TRIGGERTYPE_OPEN -> '1', ���̴���
  t->OrderType =   PyString_AsString(PyObject_GetAttrString(p, "OrderType"))[0];
  //��ƽ��־
  //enum����
  //THOST_FTDC_OF_CloseToday -> '3', ƽ��
  //THOST_FTDC_OF_ForceOff -> '5', ǿ��
  //THOST_FTDC_OF_LocalForceClose -> '6', ����ǿƽ
  //THOST_FTDC_OF_Close -> '1', ƽ��
  //THOST_FTDC_OF_Open -> '0', ����
  //THOST_FTDC_OF_CloseYesterday -> '4', ƽ��
  //THOST_FTDC_OF_ForceClose -> '2', ǿƽ
  t->CombOffsetFlag =   PyString_AsString(PyObject_GetAttrString(p, "CombOffsetFlag"))[0];
  //��������
  //enum����
  //THOST_FTDC_D_Buy -> '0', ��
  //THOST_FTDC_D_Sell -> '1', ��
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //�ͻ�����
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //��Чʱ��
  strcpy(t->ActiveTime, PyString_AsString(PyObject_GetAttrString(p, "ActiveTime")));
  //Ӫҵ������
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //�۸�
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //��������
  //enum����
  //KSCOS_GreaterEqualTermPrice -> '0', ���ڵ���������
  //KSCOS_LesserThanTermPrice -> '1', С�ڵ���������
  t->ConditionalType =   PyString_AsString(PyObject_GetAttrString(p, "ConditionalType"))[0];
  //ʧЧʱ��
  strcpy(t->InActiveTime, PyString_AsString(PyObject_GetAttrString(p, "InActiveTime")));
  //���������
  t->ConditionalOrderID =   PyInt_AsLong(PyObject_GetAttrString(p, "ConditionalOrderID"));
  //����
  t->VolumeTotalOriginal =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
  //������
  t->ConditionalPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ConditionalPrice"));

  return t;
};

//��Ͻ��׺�Լ�ĵ���
PyObject * new_CThostFtdcCombinationLegField(KingstarAPI::CThostFtdcCombinationLegField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcCombinationLegField", (char*)"ciiiss",
p->Direction, p->ImplyLevel, p->LegMultiple, p->LegID, p->LegInstrumentID, p->CombInstrumentID);
}
KingstarAPI::CThostFtdcCombinationLegField * from_CThostFtdcCombinationLegField(PyObject * p){
  KingstarAPI::CThostFtdcCombinationLegField *t = (KingstarAPI::CThostFtdcCombinationLegField *)calloc(1, sizeof(KingstarAPI::CThostFtdcCombinationLegField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcCombinationLegField));
  //��������
  //enum����
  //THOST_FTDC_D_Buy -> '0', ��
  //THOST_FTDC_D_Sell -> '1', ��
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //��������
  t->ImplyLevel =   PyInt_AsLong(PyObject_GetAttrString(p, "ImplyLevel"));
  //���ȳ���
  t->LegMultiple =   PyInt_AsLong(PyObject_GetAttrString(p, "LegMultiple"));
  //���ȱ��
  t->LegID =   PyInt_AsLong(PyObject_GetAttrString(p, "LegID"));
  //���Ⱥ�Լ����
  strcpy(t->LegInstrumentID, PyString_AsString(PyObject_GetAttrString(p, "LegInstrumentID")));
  //��Ϻ�Լ����
  strcpy(t->CombInstrumentID, PyString_AsString(PyObject_GetAttrString(p, "CombInstrumentID")));

  return t;
};

//������״̬
PyObject * new_CThostFtdcExchangeSequenceField(KingstarAPI::CThostFtdcExchangeSequenceField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcExchangeSequenceField", (char*)"sic",
p->ExchangeID, p->SequenceNo, p->MarketStatus);
}
KingstarAPI::CThostFtdcExchangeSequenceField * from_CThostFtdcExchangeSequenceField(PyObject * p){
  KingstarAPI::CThostFtdcExchangeSequenceField *t = (KingstarAPI::CThostFtdcExchangeSequenceField *)calloc(1, sizeof(KingstarAPI::CThostFtdcExchangeSequenceField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcExchangeSequenceField));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //���
  t->SequenceNo =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //��Լ����״̬
  //enum����
  //THOST_FTDC_IS_Continous -> '2', ��������
  //THOST_FTDC_IS_AuctionMatch -> '5', ���Ͼ��۴��
  //THOST_FTDC_IS_BeforeTrading -> '0', ����ǰ
  //THOST_FTDC_IS_Closed -> '6', ����
  //THOST_FTDC_IS_AuctionOrdering -> '3', ���Ͼ��۱���
  //THOST_FTDC_IS_AuctionBalance -> '4', ���Ͼ��ۼ۸�ƽ��
  //THOST_FTDC_IS_NoTrading -> '1', �ǽ���
  t->MarketStatus =   PyString_AsString(PyObject_GetAttrString(p, "MarketStatus"))[0];

  return t;
};

//Ͷ���߽�����
PyObject * new_CThostFtdcSettlementInfoField(KingstarAPI::CThostFtdcSettlementInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSettlementInfoField", (char*)"isisss",
p->SettlementID, p->InvestorID, p->SequenceNo, p->Content, p->TradingDay, p->BrokerID);
}
KingstarAPI::CThostFtdcSettlementInfoField * from_CThostFtdcSettlementInfoField(PyObject * p){
  KingstarAPI::CThostFtdcSettlementInfoField *t = (KingstarAPI::CThostFtdcSettlementInfoField *)calloc(1, sizeof(KingstarAPI::CThostFtdcSettlementInfoField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcSettlementInfoField));
  //������
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���
  t->SequenceNo =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //��Ϣ����
  strcpy(t->Content, PyString_AsString(PyObject_GetAttrString(p, "Content")));
  //������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//��ʼ¼��������
PyObject * new_CTKSConditionalOrderInitInsert(CTKSConditionalOrderInitInsert * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CTKSConditionalOrderInitInsert", (char*)"scsicscccssssdcsiid",
p->InstrumentID, p->CombHedgeFlag, p->ExchangeID, p->TriggeredTimes, p->OrderPriceType, p->CurrencyID, p->OrderType, p->CombOffsetFlag, p->Direction, p->ClientID, p->InvestorID, p->ActiveTime, p->BrokerID, p->LimitPrice, p->ConditionalType, p->InActiveTime, p->ConditionalOrderID, p->VolumeTotalOriginal, p->ConditionalPrice);
}
CTKSConditionalOrderInitInsert * from_CTKSConditionalOrderInitInsert(PyObject * p){
CTKSConditionalOrderInitInsert *t = (CTKSConditionalOrderInitInsert *)calloc(1, sizeof(CTKSConditionalOrderInitInsert));
  memset(t,0,sizeof(CTKSConditionalOrderInitInsert));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //Ͷ���ױ���־
  //enum����
  //THOST_FTDC_HF_Speculation -> '1', Ͷ��
  //THOST_FTDC_HF_Arbitrage -> '2', ����
  //THOST_FTDC_HF_Hedge -> '3', �ױ�
  t->CombHedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "CombHedgeFlag"))[0];
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //��������
  t->TriggeredTimes =   PyInt_AsLong(PyObject_GetAttrString(p, "TriggeredTimes"));
  //�۸����
  //enum����
  //KSCOS_OrderPrice_LastPrice -> '0', ���¼�
  //KSCOS_OrderPrice_AskPrice -> '2', ����
  //KSCOS_OrderPrice_BidPrice -> '1', ���
  t->OrderPriceType =   PyString_AsString(PyObject_GetAttrString(p, "OrderPriceType"))[0];
  //���Ҵ���
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //����������
  //enum����
  //KSCOS_TRIGGERTYPE_QUOTAIONANDTIME -> '5', �����ʱ�䴥��
  //KSCOS_TRIGGERTYPE_TIME -> '2', ʱ�䴥��
  //KSCOS_TRIGGERTYPE_QUOTATION -> '0', ���鴥��
  //KSCOS_TRIGGERTYPE_OPEN -> '1', ���̴���
  t->OrderType =   PyString_AsString(PyObject_GetAttrString(p, "OrderType"))[0];
  //��ƽ��־
  //enum����
  //THOST_FTDC_OF_CloseToday -> '3', ƽ��
  //THOST_FTDC_OF_ForceOff -> '5', ǿ��
  //THOST_FTDC_OF_LocalForceClose -> '6', ����ǿƽ
  //THOST_FTDC_OF_Close -> '1', ƽ��
  //THOST_FTDC_OF_Open -> '0', ����
  //THOST_FTDC_OF_CloseYesterday -> '4', ƽ��
  //THOST_FTDC_OF_ForceClose -> '2', ǿƽ
  t->CombOffsetFlag =   PyString_AsString(PyObject_GetAttrString(p, "CombOffsetFlag"))[0];
  //��������
  //enum����
  //THOST_FTDC_D_Buy -> '0', ��
  //THOST_FTDC_D_Sell -> '1', ��
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //�ͻ�����
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //��Чʱ��
  strcpy(t->ActiveTime, PyString_AsString(PyObject_GetAttrString(p, "ActiveTime")));
  //Ӫҵ������
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //�۸�
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //��������
  //enum����
  //KSCOS_GreaterEqualTermPrice -> '0', ���ڵ���������
  //KSCOS_LesserThanTermPrice -> '1', С�ڵ���������
  t->ConditionalType =   PyString_AsString(PyObject_GetAttrString(p, "ConditionalType"))[0];
  //ʧЧʱ��
  strcpy(t->InActiveTime, PyString_AsString(PyObject_GetAttrString(p, "InActiveTime")));
  //���������
  t->ConditionalOrderID =   PyInt_AsLong(PyObject_GetAttrString(p, "ConditionalOrderID"));
  //����
  t->VolumeTotalOriginal =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
  //������
  t->ConditionalPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ConditionalPrice"));

  return t;
};

//���������鱨�̻�
PyObject * new_CThostFtdcMDTraderOfferField(KingstarAPI::CThostFtdcMDTraderOfferField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMDTraderOfferField", (char*)"ssissssssscssssssss",
p->StartDate, p->ExchangeID, p->InstallID, p->LastReportDate, p->ParticipantID, p->OrderLocalID, p->LastReportTime, p->TraderID, p->MaxTradeID, p->ConnectTime, p->TraderConnectStatus, p->TradingDay, p->ConnectRequestTime, p->StartTime, p->ConnectRequestDate, p->MaxOrderMessageReference, p->BrokerID, p->Password, p->ConnectDate);
}
KingstarAPI::CThostFtdcMDTraderOfferField * from_CThostFtdcMDTraderOfferField(PyObject * p){
  KingstarAPI::CThostFtdcMDTraderOfferField *t = (KingstarAPI::CThostFtdcMDTraderOfferField *)calloc(1, sizeof(KingstarAPI::CThostFtdcMDTraderOfferField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcMDTraderOfferField));
  //��������
  strcpy(t->StartDate, PyString_AsString(PyObject_GetAttrString(p, "StartDate")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //�ϴα�������
  strcpy(t->LastReportDate, PyString_AsString(PyObject_GetAttrString(p, "LastReportDate")));
  //��Ա����
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //���ر������
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //�ϴα���ʱ��
  strcpy(t->LastReportTime, PyString_AsString(PyObject_GetAttrString(p, "LastReportTime")));
  //����������Ա����
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //��ϯλ���ɽ����
  strcpy(t->MaxTradeID, PyString_AsString(PyObject_GetAttrString(p, "MaxTradeID")));
  //�������ʱ��
  strcpy(t->ConnectTime, PyString_AsString(PyObject_GetAttrString(p, "ConnectTime")));
  //����������Ա����״̬
  //enum����
  //THOST_FTDC_TCS_NotConnected -> '1', û���κ�����
  //THOST_FTDC_TCS_SubPrivateFlow -> '4', ����˽����
  //THOST_FTDC_TCS_QryInstrumentSent -> '3', �Ѿ�������Լ��ѯ����
  //THOST_FTDC_TCS_Connected -> '2', �Ѿ�����
  t->TraderConnectStatus =   PyString_AsString(PyObject_GetAttrString(p, "TraderConnectStatus"))[0];
  //������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //�������������ʱ��
  strcpy(t->ConnectRequestTime, PyString_AsString(PyObject_GetAttrString(p, "ConnectRequestTime")));
  //����ʱ��
  strcpy(t->StartTime, PyString_AsString(PyObject_GetAttrString(p, "StartTime")));
  //�����������������
  strcpy(t->ConnectRequestDate, PyString_AsString(PyObject_GetAttrString(p, "ConnectRequestDate")));
  //��ϯλ��󱨵�����
  strcpy(t->MaxOrderMessageReference, PyString_AsString(PyObject_GetAttrString(p, "MaxOrderMessageReference")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //����
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //�����������
  strcpy(t->ConnectDate, PyString_AsString(PyObject_GetAttrString(p, "ConnectDate")));

  return t;
};

//��ѯ��Լ״̬
PyObject * new_CThostFtdcQryInstrumentStatusField(KingstarAPI::CThostFtdcQryInstrumentStatusField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInstrumentStatusField", (char*)"ss",
p->ExchangeID, p->ExchangeInstID);
}
KingstarAPI::CThostFtdcQryInstrumentStatusField * from_CThostFtdcQryInstrumentStatusField(PyObject * p){
  KingstarAPI::CThostFtdcQryInstrumentStatusField *t = (KingstarAPI::CThostFtdcQryInstrumentStatusField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryInstrumentStatusField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryInstrumentStatusField));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //��Լ�ڽ������Ĵ���
  strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));

  return t;
};

//������������������
PyObject * new_CThostFtdcMarketDataAsk23Field(KingstarAPI::CThostFtdcMarketDataAsk23Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataAsk23Field", (char*)"iidd",
p->AskVolume3, p->AskVolume2, p->AskPrice3, p->AskPrice2);
}
KingstarAPI::CThostFtdcMarketDataAsk23Field * from_CThostFtdcMarketDataAsk23Field(PyObject * p){
  KingstarAPI::CThostFtdcMarketDataAsk23Field *t = (KingstarAPI::CThostFtdcMarketDataAsk23Field *)calloc(1, sizeof(KingstarAPI::CThostFtdcMarketDataAsk23Field));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcMarketDataAsk23Field));
  //��������
  t->AskVolume3 =   PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume3"));
  //��������
  t->AskVolume2 =   PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume2"));
  //��������
  t->AskPrice3 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice3"));
  //�����۶�
  t->AskPrice2 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice2"));

  return t;
};

//��ѯ��������
PyObject * new_CThostFtdcQryOrderActionField(KingstarAPI::CThostFtdcQryOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryOrderActionField", (char*)"sss",
p->InvestorID, p->ExchangeID, p->BrokerID);
}
KingstarAPI::CThostFtdcQryOrderActionField * from_CThostFtdcQryOrderActionField(PyObject * p){
  KingstarAPI::CThostFtdcQryOrderActionField *t = (KingstarAPI::CThostFtdcQryOrderActionField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryOrderActionField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryOrderActionField));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//�ֱ����Ľ���Ȩ��
PyObject * new_CThostFtdcUserRightsAssignField(KingstarAPI::CThostFtdcUserRightsAssignField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcUserRightsAssignField", (char*)"sis",
p->UserID, p->DRIdentityID, p->BrokerID);
}
KingstarAPI::CThostFtdcUserRightsAssignField * from_CThostFtdcUserRightsAssignField(PyObject * p){
  KingstarAPI::CThostFtdcUserRightsAssignField *t = (KingstarAPI::CThostFtdcUserRightsAssignField *)calloc(1, sizeof(KingstarAPI::CThostFtdcUserRightsAssignField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcUserRightsAssignField));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //�������Ĵ���
  t->DRIdentityID =   PyInt_AsLong(PyObject_GetAttrString(p, "DRIdentityID"));
  //Ӧ�õ�Ԫ����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//��Ϣ�ַ�
PyObject * new_CThostFtdcDisseminationField(KingstarAPI::CThostFtdcDisseminationField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcDisseminationField", (char*)"ih",
p->SequenceNo, p->SequenceSeries);
}
KingstarAPI::CThostFtdcDisseminationField * from_CThostFtdcDisseminationField(PyObject * p){
  KingstarAPI::CThostFtdcDisseminationField *t = (KingstarAPI::CThostFtdcDisseminationField *)calloc(1, sizeof(KingstarAPI::CThostFtdcDisseminationField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcDisseminationField));
  //���к�
  t->SequenceNo =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //����ϵ�к�
  t->SequenceSeries =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceSeries"));

  return t;
};

//�û��ǳ�����
PyObject * new_CThostFtdcUserLogoutField(KingstarAPI::CThostFtdcUserLogoutField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcUserLogoutField", (char*)"ss",
p->UserID, p->BrokerID);
}
KingstarAPI::CThostFtdcUserLogoutField * from_CThostFtdcUserLogoutField(PyObject * p){
  KingstarAPI::CThostFtdcUserLogoutField *t = (KingstarAPI::CThostFtdcUserLogoutField *)calloc(1, sizeof(KingstarAPI::CThostFtdcUserLogoutField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcUserLogoutField));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//��ǰʱ��
PyObject * new_CThostFtdcCurrentTimeField(KingstarAPI::CThostFtdcCurrentTimeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcCurrentTimeField", (char*)"ssi",
p->CurrTime, p->CurrDate, p->CurrMillisec);
}
KingstarAPI::CThostFtdcCurrentTimeField * from_CThostFtdcCurrentTimeField(PyObject * p){
  KingstarAPI::CThostFtdcCurrentTimeField *t = (KingstarAPI::CThostFtdcCurrentTimeField *)calloc(1, sizeof(KingstarAPI::CThostFtdcCurrentTimeField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcCurrentTimeField));
  //��ǰʱ��
  strcpy(t->CurrTime, PyString_AsString(PyObject_GetAttrString(p, "CurrTime")));
  //��ǰ����
  strcpy(t->CurrDate, PyString_AsString(PyObject_GetAttrString(p, "CurrDate")));
  //��ǰʱ�䣨���룩
  t->CurrMillisec =   PyInt_AsLong(PyObject_GetAttrString(p, "CurrMillisec"));

  return t;
};

// ֹ��ֹӯ��״̬��Ϣ
PyObject * new_CTKSPLStatusField(CTKSPLStatusField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CTKSPLStatusField", (char*)"dicsdidcsssicssssssdsdssicissiscci",
p->TakeProfitPrice, p->VolumeTraded, p->CombOffsetFlag, p->UserID, p->LimitPrice, p->StopLossOrderID, p->StopLossPrice, p->Direction, p->ActiveTime, p->Memo, p->ClientID, p->VolumeTotal, p->OrderStatus, p->OrderSysID, p->CurrencyID, p->InstrumentID, p->ExchangeID, p->CancelTime, p->CancelUserID, p->TradePrice, p->TradingDay, p->OpenTradePrice, p->BrokerID, p->InsertTime, p->ProfitAndLossOrderID, p->CombHedgeFlag, p->TakeProfitOrderID, p->OrderLocalID, p->BusinessUnit, p->SequenceNo, p->InvestorID, p->ProfitAndLossOrderStatus, p->OffsetValue, p->VolumeTotalOriginal);
}
CTKSPLStatusField * from_CTKSPLStatusField(PyObject * p){
CTKSPLStatusField *t = (CTKSPLStatusField *)calloc(1, sizeof(CTKSPLStatusField));
  memset(t,0,sizeof(CTKSPLStatusField));
  //ֹӯ��
  t->TakeProfitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TakeProfitPrice"));
  //��ɽ�����
  t->VolumeTraded =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTraded"));
  //��ƽ��־
  //enum����
  //THOST_FTDC_OF_CloseToday -> '3', ƽ��
  //THOST_FTDC_OF_ForceOff -> '5', ǿ��
  //THOST_FTDC_OF_LocalForceClose -> '6', ����ǿƽ
  //THOST_FTDC_OF_Close -> '1', ƽ��
  //THOST_FTDC_OF_Open -> '0', ����
  //THOST_FTDC_OF_CloseYesterday -> '4', ƽ��
  //THOST_FTDC_OF_ForceClose -> '2', ǿƽ
  t->CombOffsetFlag =   PyString_AsString(PyObject_GetAttrString(p, "CombOffsetFlag"))[0];
  //����Ա
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //�۸�
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //ֹ�����������
  t->StopLossOrderID =   PyInt_AsLong(PyObject_GetAttrString(p, "StopLossOrderID"));
  //ֹ���
  t->StopLossPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StopLossPrice"));
  //��������
  //enum����
  //THOST_FTDC_D_Buy -> '0', ��
  //THOST_FTDC_D_Sell -> '1', ��
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //����ʱ��
  strcpy(t->ActiveTime, PyString_AsString(PyObject_GetAttrString(p, "ActiveTime")));
  //��ע
  strcpy(t->Memo, PyString_AsString(PyObject_GetAttrString(p, "Memo")));
  //�ͻ�����
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //ʣ������
  t->VolumeTotal =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotal"));
  //����״̬
  //enum����
  //THOST_FTDC_OST_NotTouched -> 'b', ��δ����
  //THOST_FTDC_OST_NoTradeQueueing -> '3', δ�ɽ����ڶ�����
  //THOST_FTDC_OST_AllTraded -> '0', ȫ���ɽ�
  //THOST_FTDC_OST_NoTradeNotQueueing -> '4', δ�ɽ����ڶ�����
  //THOST_FTDC_OST_Unknown -> 'a', δ֪
  //THOST_FTDC_OST_PartTradedQueueing -> '1', ���ֳɽ����ڶ�����
  //THOST_FTDC_OST_PartTradedNotQueueing -> '2', ���ֳɽ����ڶ�����
  //THOST_FTDC_OST_Touched -> 'c', �Ѵ���
  //THOST_FTDC_OST_Canceled -> '5', ����
  t->OrderStatus =   PyString_AsString(PyObject_GetAttrString(p, "OrderStatus"))[0];
  //�������
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //���Ҵ���
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //����ʱ��
  strcpy(t->CancelTime, PyString_AsString(PyObject_GetAttrString(p, "CancelTime")));
  //�����û�
  strcpy(t->CancelUserID, PyString_AsString(PyObject_GetAttrString(p, "CancelUserID")));
  //�ɽ��۸�
  t->TradePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradePrice"));
  //������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //���ֳɽ��۸�
  t->OpenTradePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenTradePrice"));
  //Ӫҵ������
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //ί��ʱ��
  strcpy(t->InsertTime, PyString_AsString(PyObject_GetAttrString(p, "InsertTime")));
  //ֹ��ֹӯ�����
  t->ProfitAndLossOrderID =   PyInt_AsLong(PyObject_GetAttrString(p, "ProfitAndLossOrderID"));
  //Ͷ���ױ���־
  //enum����
  //THOST_FTDC_HF_Speculation -> '1', Ͷ��
  //THOST_FTDC_HF_Arbitrage -> '2', ����
  //THOST_FTDC_HF_Hedge -> '3', �ױ�
  t->CombHedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "CombHedgeFlag"))[0];
  //ֹӯ���������
  t->TakeProfitOrderID =   PyInt_AsLong(PyObject_GetAttrString(p, "TakeProfitOrderID"));
  //���ر������
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //ҵ��Ԫ
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //���
  t->SequenceNo =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //ӯ��״̬
  //enum����
  //KSCOS_OrderStatus_WAITSELECT -> '6', �ȴ�ѡ��
  //KSCOS_OrderStatus_Deleted -> '2', ɾ��
  //KSCOS_OrderStatus_SENDTIMEOUT -> '4', ���ͳ�ʱ
  //KSCOS_OrderStatus_TOUCHEDNOSEND -> '3', �Ѵ���δ����
  //KSCOS_OrderStatus_PAUSENOTOUCHED -> '0', ��ͣ
  //KSCOS_OrderStatus_SENDSUCCESS -> '5', ���ͳɹ�
  //KSCOS_OrderStatus_SELECTABORT -> '8', ѡ����ֹ
  //KSCOS_OrderStatus_ACTIVENOTOUCHED -> '1', δ����
  //KSCOS_OrderStatus_SELECTSKIP -> '7', ѡ������
  t->ProfitAndLossOrderStatus =   PyString_AsString(PyObject_GetAttrString(p, "ProfitAndLossOrderStatus"))[0];
  //����ӯ��۵ķ�ʽ
  //enum����
  //KSPL_OffsetValue_TradePrice -> '1', ���ֳɽ��۵����ƫ��ֵ
  //KSPL_OffsetValue_TermPrice -> '0', ָ��ֵ
  t->OffsetValue =   PyString_AsString(PyObject_GetAttrString(p, "OffsetValue"))[0];
  //����
  t->VolumeTotalOriginal =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));

  return t;
};

//���󱨵�����
PyObject * new_CThostFtdcErrOrderActionField(KingstarAPI::CThostFtdcErrOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcErrOrderActionField", (char*)"ssssdcisiiicissssssssssssii",
p->ActionTime, p->InvestorID, p->TraderID, p->UserID, p->LimitPrice, p->OrderActionStatus, p->InstallID, p->ParticipantID, p->OrderActionRef, p->VolumeChange, p->SessionID, p->ActionFlag, p->ErrorID, p->InstrumentID, p->ExchangeID, p->StatusMsg, p->OrderSysID, p->BrokerID, p->ClientID, p->ActionDate, p->OrderLocalID, p->BusinessUnit, p->ErrorMsg, p->OrderRef, p->ActionLocalID, p->RequestID, p->FrontID);
}
KingstarAPI::CThostFtdcErrOrderActionField * from_CThostFtdcErrOrderActionField(PyObject * p){
  KingstarAPI::CThostFtdcErrOrderActionField *t = (KingstarAPI::CThostFtdcErrOrderActionField *)calloc(1, sizeof(KingstarAPI::CThostFtdcErrOrderActionField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcErrOrderActionField));
  //����ʱ��
  strcpy(t->ActionTime, PyString_AsString(PyObject_GetAttrString(p, "ActionTime")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //����������Ա����
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //�۸�
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //��������״̬
  //enum����
  //THOST_FTDC_OAS_Rejected -> 'c', �Ѿ����ܾ�
  //THOST_FTDC_OAS_Submitted -> 'a', �Ѿ��ύ
  //THOST_FTDC_OAS_Accepted -> 'b', �Ѿ�����
  t->OrderActionStatus =   PyString_AsString(PyObject_GetAttrString(p, "OrderActionStatus"))[0];
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //��Ա����
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //������������
  t->OrderActionRef =   PyInt_AsLong(PyObject_GetAttrString(p, "OrderActionRef"));
  //�����仯
  t->VolumeChange =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeChange"));
  //�Ự���
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //������־
  //enum����
  //THOST_FTDC_AF_Delete -> '0', ɾ��
  //THOST_FTDC_AF_Modify -> '3', �޸�
  t->ActionFlag =   PyString_AsString(PyObject_GetAttrString(p, "ActionFlag"))[0];
  //�������
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //״̬��Ϣ
  strcpy(t->StatusMsg, PyString_AsString(PyObject_GetAttrString(p, "StatusMsg")));
  //�������
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //�ͻ�����
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //��������
  strcpy(t->ActionDate, PyString_AsString(PyObject_GetAttrString(p, "ActionDate")));
  //���ر������
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //ҵ��Ԫ
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //������Ϣ
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //��������
  strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
  //�������ر��
  strcpy(t->ActionLocalID, PyString_AsString(PyObject_GetAttrString(p, "ActionLocalID")));
  //������
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //ǰ�ñ��
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));

  return t;
};

//����Key
PyObject * new_CThostOrderKeyField(KingstarAPI::CThostOrderKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostOrderKeyField", (char*)"iisss",
p->FrontID, p->SessionID, p->ExchangeID, p->OrderSysID, p->OrderRef);
}
KingstarAPI::CThostOrderKeyField * from_CThostOrderKeyField(PyObject * p){
  KingstarAPI::CThostOrderKeyField *t = (KingstarAPI::CThostOrderKeyField *)calloc(1, sizeof(KingstarAPI::CThostOrderKeyField));
  memset(t,0,sizeof(KingstarAPI::CThostOrderKeyField));
  //ǰ�ñ��
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //�Ự���
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //�������
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //��������
  strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));

  return t;
};

//��ѯ����Ա���̻�
PyObject * new_CThostFtdcQryTraderOfferField(KingstarAPI::CThostFtdcQryTraderOfferField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryTraderOfferField", (char*)"sss",
p->ExchangeID, p->TraderID, p->ParticipantID);
}
KingstarAPI::CThostFtdcQryTraderOfferField * from_CThostFtdcQryTraderOfferField(PyObject * p){
  KingstarAPI::CThostFtdcQryTraderOfferField *t = (KingstarAPI::CThostFtdcQryTraderOfferField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryTraderOfferField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryTraderOfferField));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //����������Ա����
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //��Ա����
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));

  return t;
};

//�����������������
PyObject * new_CThostFtdcMarketDataBid23Field(KingstarAPI::CThostFtdcMarketDataBid23Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataBid23Field", (char*)"iidd",
p->BidVolume3, p->BidVolume2, p->BidPrice3, p->BidPrice2);
}
KingstarAPI::CThostFtdcMarketDataBid23Field * from_CThostFtdcMarketDataBid23Field(PyObject * p){
  KingstarAPI::CThostFtdcMarketDataBid23Field *t = (KingstarAPI::CThostFtdcMarketDataBid23Field *)calloc(1, sizeof(KingstarAPI::CThostFtdcMarketDataBid23Field));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcMarketDataBid23Field));
  //��������
  t->BidVolume3 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume3"));
  //��������
  t->BidVolume2 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume2"));
  //�������
  t->BidPrice3 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice3"));
  //����۶�
  t->BidPrice2 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice2"));

  return t;
};

//�����������
PyObject * new_CThostFtdcMarketDataBaseField(KingstarAPI::CThostFtdcMarketDataBaseField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataBaseField", (char*)"sdddd",
p->TradingDay, p->PreDelta, p->PreClosePrice, p->PreOpenInterest, p->PreSettlementPrice);
}
KingstarAPI::CThostFtdcMarketDataBaseField * from_CThostFtdcMarketDataBaseField(PyObject * p){
  KingstarAPI::CThostFtdcMarketDataBaseField *t = (KingstarAPI::CThostFtdcMarketDataBaseField *)calloc(1, sizeof(KingstarAPI::CThostFtdcMarketDataBaseField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcMarketDataBaseField));
  //������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //����ʵ��
  t->PreDelta =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreDelta"));
  //������
  t->PreClosePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreClosePrice"));
  //��ֲ���
  t->PreOpenInterest =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreOpenInterest"));
  //�ϴν����
  t->PreSettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreSettlementPrice"));

  return t;
};

//��������
PyObject * new_CThostFtdcReqRepealField(KingstarAPI::CThostFtdcReqRepealField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqRepealField", (char*)"ssscisciissicsssisicicscsssssscccsdssdccisicsisdds",
p->BrokerBranchID, p->UserID, p->BankPassWord, p->BankRepealFlag, p->RepealedTimes, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->FutureRepealSerial, p->AccountID, p->BankAccount, p->InstallID, p->SecuPwdFlag, p->CustomerName, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->PlateSerial, p->BankPwdFlag, p->RequestID, p->CustType, p->IdentifiedCardNo, p->FeePayFlag, p->BankSerial, p->OperNo, p->TradingDay, p->BankSecuAcc, p->BrokerID, p->DeviceID, p->TransferStatus, p->BrokerRepealFlag, p->IdCardType, p->Password, p->FutureFetchAmount, p->TradeDate, p->CurrencyID, p->BrokerFee, p->BankAccType, p->LastFragment, p->FutureSerial, p->BankRepealSerial, p->RepealTimeInterval, p->BankSecuAccType, p->BrokerIDByBank, p->PlateRepealSerial, p->Message, p->CustFee, p->TradeAmount, p->Digest);
}
KingstarAPI::CThostFtdcReqRepealField * from_CThostFtdcReqRepealField(PyObject * p){
  KingstarAPI::CThostFtdcReqRepealField *t = (KingstarAPI::CThostFtdcReqRepealField *)calloc(1, sizeof(KingstarAPI::CThostFtdcReqRepealField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcReqRepealField));
  //���̷�֧��������
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //�û���ʶ
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //��������
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //���г�����־
  //enum����
  //THOST_FTDC_BRF_BankWaitingRepeal -> '1', ���д��Զ�����
  //THOST_FTDC_BRF_BankNotNeedRepeal -> '0', ���������Զ�����
  //THOST_FTDC_BRF_BankBeenRepealed -> '2', �������Զ�����
  t->BankRepealFlag =   PyString_AsString(PyObject_GetAttrString(p, "BankRepealFlag"))[0];
  //�Ѿ���������
  t->RepealedTimes =   PyInt_AsLong(PyObject_GetAttrString(p, "RepealedTimes"));
  //����ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //��֤�ͻ�֤�������־
  //enum����
  //THOST_FTDC_YNI_No -> '1', ��
  //THOST_FTDC_YNI_Yes -> '0', ��
  t->VerifyCertNoFlag =   PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
  //����ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //�������ڻ���ˮ��
  t->FutureRepealSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "FutureRepealSerial"));
  //Ͷ�����ʺ�
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //�����ʺ�
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //�ڻ��ʽ�����˶Ա�־
  //enum����
  //THOST_FTDC_BPWDF_BlankCheck -> '1', ���ĺ˶�
  //THOST_FTDC_BPWDF_NoCheck -> '0', ���˶�
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', ���ĺ˶�
  t->SecuPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
  //�ͻ�����
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //ҵ������
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //���з�֧��������
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //�Ự��
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //����ƽ̨��Ϣ��ˮ��
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //���������־
  //enum����
  //THOST_FTDC_BPWDF_BlankCheck -> '1', ���ĺ˶�
  //THOST_FTDC_BPWDF_NoCheck -> '0', ���˶�
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', ���ĺ˶�
  t->BankPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
  //������
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //�ͻ�����
  //enum����
  //THOST_FTDC_CUSTT_Institution -> '1', ������
  //THOST_FTDC_CUSTT_Person -> '0', ��Ȼ��
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //֤������
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //����֧����־
  //enum����
  //THOST_FTDC_FPF_BEN -> '0', �����淽֧������
  //THOST_FTDC_FPF_SHA -> '2', �ɷ��ͷ�֧������ķ��ã����淽֧�����ܵķ���
  //THOST_FTDC_FPF_OUR -> '1', �ɷ��ͷ�֧������
  t->FeePayFlag =   PyString_AsString(PyObject_GetAttrString(p, "FeePayFlag"))[0];
  //������ˮ��
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //���׹�Ա
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //����ϵͳ����
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //�ڻ���λ�ʺ�
  strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
  //���̴���
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //������־
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //ת�˽���״̬
  //enum����
  //THOST_FTDC_TRFS_Normal -> '0', ����
  //THOST_FTDC_TRFS_Repealed -> '1', ������
  t->TransferStatus =   PyString_AsString(PyObject_GetAttrString(p, "TransferStatus"))[0];
  //���̳�����־
  //enum����
  //THOST_FTDC_BRORF_BrokerNotNeedRepeal -> '0', ���������Զ�����
  //THOST_FTDC_BRORF_BrokerBeenRepealed -> '2', �������Զ�����
  //THOST_FTDC_BRORF_BrokerWaitingRepeal -> '1', ���̴��Զ�����
  t->BrokerRepealFlag =   PyString_AsString(PyObject_GetAttrString(p, "BrokerRepealFlag"))[0];
  //֤������
  //enum����
  //THOST_FTDC_ICT_LicenseNo -> '9', Ӫҵִ�պ�
  //THOST_FTDC_ICT_TaxNo -> 'A', ˰��ǼǺ�
  //THOST_FTDC_ICT_OfficerIDCard -> '2', ����֤
  //THOST_FTDC_ICT_IDCard -> '1', ���֤
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', ̨��֤
  //THOST_FTDC_ICT_OtherCard -> 'x', ����֤��
  //THOST_FTDC_ICT_PoliceIDCard -> '3', ����֤
  //THOST_FTDC_ICT_Passport -> '6', ����
  //THOST_FTDC_ICT_EID -> '0', ��֯��������
  //THOST_FTDC_ICT_HomeComingCard -> '8', ����֤
  //THOST_FTDC_ICT_HouseholdRegister -> '5', ���ڲ�
  //THOST_FTDC_ICT_SoldierIDCard -> '4', ʿ��֤
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //�ڻ�����
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //�ڻ���ȡ���
  t->FutureFetchAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FutureFetchAmount"));
  //��������
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //���ִ���
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //Ӧ���ڻ���˾����
  t->BrokerFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BrokerFee"));
  //�����ʺ�����
  //enum����
  //THOST_FTDC_BAT_SavingCard -> '2', ���
  //THOST_FTDC_BAT_CreditCard -> '3', ���ÿ�
  //THOST_FTDC_BAT_BankBook -> '1', ���д���
  t->BankAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
  //����Ƭ��־
  //enum����
  //THOST_FTDC_LF_No -> '1', ��������Ƭ
  //THOST_FTDC_LF_Yes -> '0', ������Ƭ
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //�ڻ���˾��ˮ��
  t->FutureSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
  //������������ˮ��
  strcpy(t->BankRepealSerial, PyString_AsString(PyObject_GetAttrString(p, "BankRepealSerial")));
  //����ʱ����
  t->RepealTimeInterval =   PyInt_AsLong(PyObject_GetAttrString(p, "RepealTimeInterval"));
  //�ڻ���λ�ʺ�����
  //enum����
  //THOST_FTDC_BAT_SavingCard -> '2', ���
  //THOST_FTDC_BAT_CreditCard -> '3', ���ÿ�
  //THOST_FTDC_BAT_BankBook -> '1', ���д���
  t->BankSecuAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
  //�ڻ���˾���б���
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //������ƽ̨��ˮ��
  t->PlateRepealSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateRepealSerial"));
  //���ͷ������շ�����Ϣ
  strcpy(t->Message, PyString_AsString(PyObject_GetAttrString(p, "Message")));
  //Ӧ�տͻ�����
  t->CustFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));
  //ת�ʽ��
  t->TradeAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
  //ժҪ
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

  return t;
};

//�ɽ�
PyObject * new_CThostFtdcTradeField(KingstarAPI::CThostFtdcTradeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTradeField", (char*)"cscscsdsissssissscssssisissccc",
p->TradeType, p->TraderID, p->HedgeFlag, p->TradeTime, p->Direction, p->ParticipantID, p->Price, p->ClientID, p->Volume, p->OrderSysID, p->ClearingPartID, p->InstrumentID, p->ExchangeID, p->SettlementID, p->UserID, p->TradingDay, p->BrokerID, p->OffsetFlag, p->OrderLocalID, p->TradeID, p->TradeDate, p->BusinessUnit, p->SequenceNo, p->OrderRef, p->BrokerOrderSeq, p->InvestorID, p->ExchangeInstID, p->TradeSource, p->PriceSource, p->TradingRole);
}
KingstarAPI::CThostFtdcTradeField * from_CThostFtdcTradeField(PyObject * p){
  KingstarAPI::CThostFtdcTradeField *t = (KingstarAPI::CThostFtdcTradeField *)calloc(1, sizeof(KingstarAPI::CThostFtdcTradeField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcTradeField));
  //�ɽ�����
  //enum����
  //THOST_FTDC_TRDT_EFPDerived -> '3', ��ת�������ɽ�
  //THOST_FTDC_TRDT_OTC -> '2', OTC�ɽ�
  //THOST_FTDC_TRDT_OptionsExecution -> '1', ��Ȩִ��
  //THOST_FTDC_TRDT_Common -> '0', ��ͨ�ɽ�
  //THOST_FTDC_TRDT_CombinationDerived -> '4', ��������ɽ�
  t->TradeType =   PyString_AsString(PyObject_GetAttrString(p, "TradeType"))[0];
  //����������Ա����
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //Ͷ���ױ���־
  //enum����
  //THOST_FTDC_HF_Speculation -> '1', Ͷ��
  //THOST_FTDC_HF_Arbitrage -> '2', ����
  //THOST_FTDC_HF_Hedge -> '3', �ױ�
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //�ɽ�ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //��������
  //enum����
  //THOST_FTDC_D_Buy -> '0', ��
  //THOST_FTDC_D_Sell -> '1', ��
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //��Ա����
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //�۸�
  t->Price =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Price"));
  //�ͻ�����
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //����
  t->Volume =   PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));
  //�������
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //�����Ա���
  strcpy(t->ClearingPartID, PyString_AsString(PyObject_GetAttrString(p, "ClearingPartID")));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //������
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //��ƽ��־
  //enum����
  //THOST_FTDC_OF_CloseToday -> '3', ƽ��
  //THOST_FTDC_OF_ForceOff -> '5', ǿ��
  //THOST_FTDC_OF_LocalForceClose -> '6', ����ǿƽ
  //THOST_FTDC_OF_Close -> '1', ƽ��
  //THOST_FTDC_OF_Open -> '0', ����
  //THOST_FTDC_OF_CloseYesterday -> '4', ƽ��
  //THOST_FTDC_OF_ForceClose -> '2', ǿƽ
  t->OffsetFlag =   PyString_AsString(PyObject_GetAttrString(p, "OffsetFlag"))[0];
  //���ر������
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //�ɽ����
  strcpy(t->TradeID, PyString_AsString(PyObject_GetAttrString(p, "TradeID")));
  //�ɽ�ʱ��
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //ҵ��Ԫ
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //���
  t->SequenceNo =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //��������
  strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
  //���͹�˾�������
  t->BrokerOrderSeq =   PyInt_AsLong(PyObject_GetAttrString(p, "BrokerOrderSeq"));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //��Լ�ڽ������Ĵ���
  strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
  //�ɽ���Դ
  //enum����
  //THOST_FTDC_TSRC_NORMAL -> '0', ���Խ�������ͨ�ر�
  //THOST_FTDC_TSRC_QUERY -> '1', ���Բ�ѯ
  t->TradeSource =   PyString_AsString(PyObject_GetAttrString(p, "TradeSource"))[0];
  //�ɽ�����Դ
  //enum����
  //THOST_FTDC_PSRC_Sell -> '2', ��ί�м�
  //THOST_FTDC_PSRC_Buy -> '1', ��ί�м�
  //THOST_FTDC_PSRC_LastPrice -> '0', ǰ�ɽ���
  t->PriceSource =   PyString_AsString(PyObject_GetAttrString(p, "PriceSource"))[0];
  //���׽�ɫ
  //enum����
  //THOST_FTDC_ER_Host -> '2', ��Ӫ
  //THOST_FTDC_ER_Broker -> '1', ����
  //THOST_FTDC_ER_Maker -> '3', ������
  t->TradingRole =   PyString_AsString(PyObject_GetAttrString(p, "TradingRole"))[0];

  return t;
};

//��ѯԤ��
PyObject * new_CThostFtdcQryParkedOrderField(KingstarAPI::CThostFtdcQryParkedOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryParkedOrderField", (char*)"ssss",
p->InstrumentID, p->InvestorID, p->ExchangeID, p->BrokerID);
}
KingstarAPI::CThostFtdcQryParkedOrderField * from_CThostFtdcQryParkedOrderField(PyObject * p){
  KingstarAPI::CThostFtdcQryParkedOrderField *t = (KingstarAPI::CThostFtdcQryParkedOrderField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryParkedOrderField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryParkedOrderField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//��ѯ���͹�˾�û��¼�
PyObject * new_CThostFtdcQryBrokerUserEventField(KingstarAPI::CThostFtdcQryBrokerUserEventField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryBrokerUserEventField", (char*)"ssc",
p->UserID, p->BrokerID, p->UserEventType);
}
KingstarAPI::CThostFtdcQryBrokerUserEventField * from_CThostFtdcQryBrokerUserEventField(PyObject * p){
  KingstarAPI::CThostFtdcQryBrokerUserEventField *t = (KingstarAPI::CThostFtdcQryBrokerUserEventField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryBrokerUserEventField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryBrokerUserEventField));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //�û��¼�����
  //enum����
  //THOST_FTDC_UET_Authenticate -> '6', �ͻ�����֤
  //THOST_FTDC_UET_Login -> '1', ��¼
  //THOST_FTDC_UET_TradingError -> '4', ����ʧ��
  //THOST_FTDC_UET_UpdatePassword -> '5', �޸�����
  //THOST_FTDC_UET_Other -> '9', ����
  //THOST_FTDC_UET_Trading -> '3', ���׳ɹ�
  //THOST_FTDC_UET_Logout -> '2', �ǳ�
  t->UserEventType =   PyString_AsString(PyObject_GetAttrString(p, "UserEventType"))[0];

  return t;
};

//��ѯ���ױ���
PyObject * new_CThostFtdcQryInstrumentCommissionRateField(KingstarAPI::CThostFtdcQryInstrumentCommissionRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInstrumentCommissionRateField", (char*)"sss",
p->InstrumentID, p->InvestorID, p->BrokerID);
}
KingstarAPI::CThostFtdcQryInstrumentCommissionRateField * from_CThostFtdcQryInstrumentCommissionRateField(PyObject * p){
  KingstarAPI::CThostFtdcQryInstrumentCommissionRateField *t = (KingstarAPI::CThostFtdcQryInstrumentCommissionRateField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryInstrumentCommissionRateField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryInstrumentCommissionRateField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//���ؽ��
PyObject * new_CThostFtdcReturnResultField(KingstarAPI::CThostFtdcReturnResultField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReturnResultField", (char*)"ss",
p->ReturnCode, p->DescrInfoForReturnCode);
}
KingstarAPI::CThostFtdcReturnResultField * from_CThostFtdcReturnResultField(PyObject * p){
  KingstarAPI::CThostFtdcReturnResultField *t = (KingstarAPI::CThostFtdcReturnResultField *)calloc(1, sizeof(KingstarAPI::CThostFtdcReturnResultField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcReturnResultField));
  //���ش���
  strcpy(t->ReturnCode, PyString_AsString(PyObject_GetAttrString(p, "ReturnCode")));
  //����������
  strcpy(t->DescrInfoForReturnCode, PyString_AsString(PyObject_GetAttrString(p, "DescrInfoForReturnCode")));

  return t;
};

//ɾ��Ԥ�񳷵�
PyObject * new_CThostFtdcRemoveParkedOrderActionField(KingstarAPI::CThostFtdcRemoveParkedOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRemoveParkedOrderActionField", (char*)"sss",
p->InvestorID, p->BrokerID, p->ParkedOrderActionID);
}
KingstarAPI::CThostFtdcRemoveParkedOrderActionField * from_CThostFtdcRemoveParkedOrderActionField(PyObject * p){
  KingstarAPI::CThostFtdcRemoveParkedOrderActionField *t = (KingstarAPI::CThostFtdcRemoveParkedOrderActionField *)calloc(1, sizeof(KingstarAPI::CThostFtdcRemoveParkedOrderActionField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcRemoveParkedOrderActionField));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //Ԥ�񳷵����
  strcpy(t->ParkedOrderActionID, PyString_AsString(PyObject_GetAttrString(p, "ParkedOrderActionID")));

  return t;
};

//��ѯ����Ա
PyObject * new_CThostFtdcQryTraderField(KingstarAPI::CThostFtdcQryTraderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryTraderField", (char*)"sss",
p->ExchangeID, p->TraderID, p->ParticipantID);
}
KingstarAPI::CThostFtdcQryTraderField * from_CThostFtdcQryTraderField(PyObject * p){
  KingstarAPI::CThostFtdcQryTraderField *t = (KingstarAPI::CThostFtdcQryTraderField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryTraderField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryTraderField));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //����������Ա����
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //��Ա����
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));

  return t;
};

//��֤����ϵͳ���͹�˾�ʽ��˻���Կ
PyObject * new_CThostFtdcCFMMCTradingAccountKeyField(KingstarAPI::CThostFtdcCFMMCTradingAccountKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcCFMMCTradingAccountKeyField", (char*)"issss",
p->KeyID, p->BrokerID, p->ParticipantID, p->CurrentKey, p->AccountID);
}
KingstarAPI::CThostFtdcCFMMCTradingAccountKeyField * from_CThostFtdcCFMMCTradingAccountKeyField(PyObject * p){
  KingstarAPI::CThostFtdcCFMMCTradingAccountKeyField *t = (KingstarAPI::CThostFtdcCFMMCTradingAccountKeyField *)calloc(1, sizeof(KingstarAPI::CThostFtdcCFMMCTradingAccountKeyField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcCFMMCTradingAccountKeyField));
  //��Կ���
  t->KeyID =   PyInt_AsLong(PyObject_GetAttrString(p, "KeyID"));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //���͹�˾ͳһ����
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //��̬��Կ
  strcpy(t->CurrentKey, PyString_AsString(PyObject_GetAttrString(p, "CurrentKey")));
  //Ͷ�����ʺ�
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));

  return t;
};

//����ǩ����Ӧ
PyObject * new_CThostFtdcRspFutureSignOutField(KingstarAPI::CThostFtdcRspFutureSignOutField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspFutureSignOutField", (char*)"sssiissisiissssssssciss",
p->BrokerBranchID, p->UserID, p->TradeTime, p->TID, p->InstallID, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->PlateSerial, p->ErrorID, p->BankSerial, p->OperNo, p->TradingDay, p->BrokerID, p->DeviceID, p->TradeDate, p->CurrencyID, p->ErrorMsg, p->LastFragment, p->RequestID, p->BrokerIDByBank, p->Digest);
}
KingstarAPI::CThostFtdcRspFutureSignOutField * from_CThostFtdcRspFutureSignOutField(PyObject * p){
  KingstarAPI::CThostFtdcRspFutureSignOutField *t = (KingstarAPI::CThostFtdcRspFutureSignOutField *)calloc(1, sizeof(KingstarAPI::CThostFtdcRspFutureSignOutField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcRspFutureSignOutField));
  //���̷�֧��������
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //�û���ʶ
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //����ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //����ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //ҵ������
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //���з�֧��������
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //�Ự��
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //����ƽ̨��Ϣ��ˮ��
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //�������
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //������ˮ��
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //���׹�Ա
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //����ϵͳ����
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //���̴���
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //������־
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //��������
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //���ִ���
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //������Ϣ
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //����Ƭ��־
  //enum����
  //THOST_FTDC_LF_No -> '1', ��������Ƭ
  //THOST_FTDC_LF_Yes -> '0', ������Ƭ
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //������
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //�ڻ���˾���б���
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //ժҪ
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

  return t;
};

//��ѯ�������ˮ
PyObject * new_CThostFtdcQrySyncDepositField(KingstarAPI::CThostFtdcQrySyncDepositField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQrySyncDepositField", (char*)"ss",
p->DepositSeqNo, p->BrokerID);
}
KingstarAPI::CThostFtdcQrySyncDepositField * from_CThostFtdcQrySyncDepositField(PyObject * p){
  KingstarAPI::CThostFtdcQrySyncDepositField *t = (KingstarAPI::CThostFtdcQrySyncDepositField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQrySyncDepositField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQrySyncDepositField));
  //�������ˮ��
  strcpy(t->DepositSeqNo, PyString_AsString(PyObject_GetAttrString(p, "DepositSeqNo")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//�û���¼����
PyObject * new_CThostFtdcReqUserLoginField(KingstarAPI::CThostFtdcReqUserLoginField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqUserLoginField", (char*)"ssssssssss",
p->MacAddress, p->UserProductInfo, p->UserID, p->TradingDay, p->InterfaceProductInfo, p->BrokerID, p->ClientIPAddress, p->OneTimePassword, p->ProtocolInfo, p->Password);
}
KingstarAPI::CThostFtdcReqUserLoginField * from_CThostFtdcReqUserLoginField(PyObject * p){
  KingstarAPI::CThostFtdcReqUserLoginField *t = (KingstarAPI::CThostFtdcReqUserLoginField *)calloc(1, sizeof(KingstarAPI::CThostFtdcReqUserLoginField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcReqUserLoginField));
  //Mac��ַ
  strcpy(t->MacAddress, PyString_AsString(PyObject_GetAttrString(p, "MacAddress")));
  //�û��˲�Ʒ��Ϣ
  strcpy(t->UserProductInfo, PyString_AsString(PyObject_GetAttrString(p, "UserProductInfo")));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //�ӿڶ˲�Ʒ��Ϣ
  strcpy(t->InterfaceProductInfo, PyString_AsString(PyObject_GetAttrString(p, "InterfaceProductInfo")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //�ն�IP��ַ
  strcpy(t->ClientIPAddress, PyString_AsString(PyObject_GetAttrString(p, "ClientIPAddress")));
  //��̬����
  strcpy(t->OneTimePassword, PyString_AsString(PyObject_GetAttrString(p, "OneTimePassword")));
  //Э����Ϣ
  strcpy(t->ProtocolInfo, PyString_AsString(PyObject_GetAttrString(p, "ProtocolInfo")));
  //����
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));

  return t;
};

//��֤�ͻ���Ϣ
PyObject * new_CThostFtdcVerifyCustInfoField(KingstarAPI::CThostFtdcVerifyCustInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcVerifyCustInfoField", (char*)"cssc",
p->CustType, p->IdentifiedCardNo, p->CustomerName, p->IdCardType);
}
KingstarAPI::CThostFtdcVerifyCustInfoField * from_CThostFtdcVerifyCustInfoField(PyObject * p){
  KingstarAPI::CThostFtdcVerifyCustInfoField *t = (KingstarAPI::CThostFtdcVerifyCustInfoField *)calloc(1, sizeof(KingstarAPI::CThostFtdcVerifyCustInfoField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcVerifyCustInfoField));
  //�ͻ�����
  //enum����
  //THOST_FTDC_CUSTT_Institution -> '1', ������
  //THOST_FTDC_CUSTT_Person -> '0', ��Ȼ��
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //֤������
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //�ͻ�����
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //֤������
  //enum����
  //THOST_FTDC_ICT_LicenseNo -> '9', Ӫҵִ�պ�
  //THOST_FTDC_ICT_TaxNo -> 'A', ˰��ǼǺ�
  //THOST_FTDC_ICT_OfficerIDCard -> '2', ����֤
  //THOST_FTDC_ICT_IDCard -> '1', ���֤
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', ̨��֤
  //THOST_FTDC_ICT_OtherCard -> 'x', ����֤��
  //THOST_FTDC_ICT_PoliceIDCard -> '3', ����֤
  //THOST_FTDC_ICT_Passport -> '6', ����
  //THOST_FTDC_ICT_EID -> '0', ��֯��������
  //THOST_FTDC_ICT_HomeComingCard -> '8', ����֤
  //THOST_FTDC_ICT_HouseholdRegister -> '5', ���ڲ�
  //THOST_FTDC_ICT_SoldierIDCard -> '4', ʿ��֤
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];

  return t;
};

//����������������
PyObject * new_CThostFtdcBulkCancelOrderField(KingstarAPI::CThostFtdcBulkCancelOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBulkCancelOrderField", (char*)"ssisc",
p->InvestorID, p->BrokerID, p->nCount, p->UserID, p->OrderType);
}
KingstarAPI::CThostFtdcBulkCancelOrderField * from_CThostFtdcBulkCancelOrderField(PyObject * p){
  KingstarAPI::CThostFtdcBulkCancelOrderField *t = (KingstarAPI::CThostFtdcBulkCancelOrderField *)calloc(1, sizeof(KingstarAPI::CThostFtdcBulkCancelOrderField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcBulkCancelOrderField));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //��������
  t->nCount =   PyInt_AsLong(PyObject_GetAttrString(p, "nCount"));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //��������
  //enum����
  //THOST_FTDC_ORDT_Combination -> '3', ��ϱ���
  //THOST_FTDC_ORDT_Normal -> '0', ����
  //THOST_FTDC_ORDT_DeriveFromCombination -> '2', �������
  //THOST_FTDC_ORDT_DeriveFromQuote -> '1', ��������
  //THOST_FTDC_ORDT_Swap -> '5', ������
  //THOST_FTDC_ORDT_ConditionalOrder -> '4', ������
  t->OrderType =   PyString_AsString(PyObject_GetAttrString(p, "OrderType"))[0];

  return t;
};

//���뱨������
PyObject * new_CThostFtdcInputOrderActionField(KingstarAPI::CThostFtdcInputOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInputOrderActionField", (char*)"sscisdssiisisi",
p->InstrumentID, p->ExchangeID, p->ActionFlag, p->OrderActionRef, p->UserID, p->LimitPrice, p->OrderRef, p->InvestorID, p->SessionID, p->VolumeChange, p->BrokerID, p->RequestID, p->OrderSysID, p->FrontID);
}
KingstarAPI::CThostFtdcInputOrderActionField * from_CThostFtdcInputOrderActionField(PyObject * p){
  KingstarAPI::CThostFtdcInputOrderActionField *t = (KingstarAPI::CThostFtdcInputOrderActionField *)calloc(1, sizeof(KingstarAPI::CThostFtdcInputOrderActionField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcInputOrderActionField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //������־
  //enum����
  //THOST_FTDC_AF_Delete -> '0', ɾ��
  //THOST_FTDC_AF_Modify -> '3', �޸�
  t->ActionFlag =   PyString_AsString(PyObject_GetAttrString(p, "ActionFlag"))[0];
  //������������
  t->OrderActionRef =   PyInt_AsLong(PyObject_GetAttrString(p, "OrderActionRef"));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //�۸�
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //��������
  strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //�Ự���
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //�����仯
  t->VolumeChange =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeChange"));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //������
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //�������
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //ǰ�ñ��
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));

  return t;
};

//Ͷ������ϳֲ���ϸ
PyObject * new_CThostFtdcInvestorPositionCombineDetailField(KingstarAPI::CThostFtdcInvestorPositionCombineDetailField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInvestorPositionCombineDetailField", (char*)"ssdsisiddicsisdcsss",
p->InstrumentID, p->ExchangeID, p->MarginRateByVolume, p->ComTradeID, p->SettlementID, p->InvestorID, p->TotalAmt, p->Margin, p->ExchMargin, p->LegMultiple, p->HedgeFlag, p->TradeID, p->LegID, p->TradingDay, p->MarginRateByMoney, p->Direction, p->BrokerID, p->CombInstrumentID, p->OpenDate);
}
KingstarAPI::CThostFtdcInvestorPositionCombineDetailField * from_CThostFtdcInvestorPositionCombineDetailField(PyObject * p){
  KingstarAPI::CThostFtdcInvestorPositionCombineDetailField *t = (KingstarAPI::CThostFtdcInvestorPositionCombineDetailField *)calloc(1, sizeof(KingstarAPI::CThostFtdcInvestorPositionCombineDetailField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcInvestorPositionCombineDetailField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //��֤����(������)
  t->MarginRateByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByVolume"));
  //��ϱ��
  strcpy(t->ComTradeID, PyString_AsString(PyObject_GetAttrString(p, "ComTradeID")));
  //������
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //�ֲ���
  t->TotalAmt =   PyInt_AsLong(PyObject_GetAttrString(p, "TotalAmt"));
  //Ͷ���߱�֤��
  t->Margin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Margin"));
  //��������֤��
  t->ExchMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchMargin"));
  //���ȳ���
  t->LegMultiple =   PyInt_AsLong(PyObject_GetAttrString(p, "LegMultiple"));
  //Ͷ���ױ���־
  //enum����
  //THOST_FTDC_HF_Speculation -> '1', Ͷ��
  //THOST_FTDC_HF_Arbitrage -> '2', ����
  //THOST_FTDC_HF_Hedge -> '3', �ױ�
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //��ϱ��
  strcpy(t->TradeID, PyString_AsString(PyObject_GetAttrString(p, "TradeID")));
  //���ȱ��
  t->LegID =   PyInt_AsLong(PyObject_GetAttrString(p, "LegID"));
  //������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //��֤����
  t->MarginRateByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByMoney"));
  //����
  //enum����
  //THOST_FTDC_D_Buy -> '0', ��
  //THOST_FTDC_D_Sell -> '1', ��
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //��ϳֲֺ�Լ����
  strcpy(t->CombInstrumentID, PyString_AsString(PyObject_GetAttrString(p, "CombInstrumentID")));
  //��������
  strcpy(t->OpenDate, PyString_AsString(PyObject_GetAttrString(p, "OpenDate")));

  return t;
};

//��ѯ���͹�˾�û�Ȩ��
PyObject * new_CThostFtdcQryBrokerUserFunctionField(KingstarAPI::CThostFtdcQryBrokerUserFunctionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryBrokerUserFunctionField", (char*)"ss",
p->UserID, p->BrokerID);
}
KingstarAPI::CThostFtdcQryBrokerUserFunctionField * from_CThostFtdcQryBrokerUserFunctionField(PyObject * p){
  KingstarAPI::CThostFtdcQryBrokerUserFunctionField *t = (KingstarAPI::CThostFtdcQryBrokerUserFunctionField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryBrokerUserFunctionField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryBrokerUserFunctionField));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//Ԥ��
PyObject * new_CThostFtdcParkedOrderField(KingstarAPI::CThostFtdcParkedOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcParkedOrderField", (char*)"cssdiccciccidssicissssssssci",
p->ContingentCondition, p->CombOffsetFlag, p->UserID, p->LimitPrice, p->UserForceClose, p->Status, p->Direction, p->UserType, p->VolumeTotalOriginal, p->OrderPriceType, p->TimeCondition, p->IsAutoSuspend, p->StopPrice, p->InstrumentID, p->ExchangeID, p->MinVolume, p->ForceCloseReason, p->ErrorID, p->ParkedOrderID, p->BrokerID, p->CombHedgeFlag, p->GTDDate, p->BusinessUnit, p->ErrorMsg, p->OrderRef, p->InvestorID, p->VolumeCondition, p->RequestID);
}
KingstarAPI::CThostFtdcParkedOrderField * from_CThostFtdcParkedOrderField(PyObject * p){
  KingstarAPI::CThostFtdcParkedOrderField *t = (KingstarAPI::CThostFtdcParkedOrderField *)calloc(1, sizeof(KingstarAPI::CThostFtdcParkedOrderField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcParkedOrderField));
  //��������
  //enum����
  //THOST_FTDC_CC_BidPriceGreaterThanStopPrice -> 'D', ��һ�۴���������
  //THOST_FTDC_CC_AskPriceLesserEqualStopPrice -> 'C', ��һ��С�ڵ���������
  //THOST_FTDC_CC_AskPriceGreaterThanStopPrice -> '9', ��һ�۴���������
  //THOST_FTDC_CC_LastPriceLesserThanStopPrice -> '7', ���¼�С��������
  //THOST_FTDC_CC_LastPriceGreaterEqualStopPrice -> '6', ���¼۴��ڵ���������
  //THOST_FTDC_CC_BidPriceGreaterEqualStopPrice -> 'E', ��һ�۴��ڵ���������
  //THOST_FTDC_CC_LastPriceLesserEqualStopPrice -> '8', ���¼�С�ڵ���������
  //THOST_FTDC_CC_TouchProfit -> '3', ֹӮ
  //THOST_FTDC_CC_ParkedOrder -> '4', Ԥ��
  //THOST_FTDC_CC_AskPriceGreaterEqualStopPrice -> 'A', ��һ�۴��ڵ���������
  //THOST_FTDC_CC_BidPriceLesserEqualStopPrice -> 'H', ��һ��С�ڵ���������
  //THOST_FTDC_CC_LastPriceGreaterThanStopPrice -> '5', ���¼۴���������
  //THOST_FTDC_CC_BidPriceLesserThanStopPrice -> 'F', ��һ��С��������
  //THOST_FTDC_CC_AskPriceLesserThanStopPrice -> 'B', ��һ��С��������
  //THOST_FTDC_CC_Immediately -> '1', ����
  //THOST_FTDC_CC_Touch -> '2', ֹ��
  t->ContingentCondition =   PyString_AsString(PyObject_GetAttrString(p, "ContingentCondition"))[0];
  //��Ͽ�ƽ��־
  strcpy(t->CombOffsetFlag, PyString_AsString(PyObject_GetAttrString(p, "CombOffsetFlag")));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //�۸�
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //�û�ǿ����־
  t->UserForceClose =   PyInt_AsLong(PyObject_GetAttrString(p, "UserForceClose"));
  //Ԥ��״̬
  //enum����
  //THOST_FTDC_PAOS_Send -> '2', �ѷ���
  //THOST_FTDC_PAOS_Deleted -> '3', ��ɾ��
  //THOST_FTDC_PAOS_NotSend -> '1', δ����
  t->Status =   PyString_AsString(PyObject_GetAttrString(p, "Status"))[0];
  //��������
  //enum����
  //THOST_FTDC_D_Buy -> '0', ��
  //THOST_FTDC_D_Sell -> '1', ��
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //�û�����
  //enum����
  //THOST_FTDC_UT_Investor -> '0', Ͷ����
  //THOST_FTDC_UT_SuperUser -> '2', ����Ա
  //THOST_FTDC_UT_Operator -> '1', ����Ա
  t->UserType =   PyString_AsString(PyObject_GetAttrString(p, "UserType"))[0];
  //����
  t->VolumeTotalOriginal =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
  //�����۸�����
  //enum����
  //THOST_FTDC_OPT_AskPrice1PlusTwoTicks -> 'A', ��һ�۸����ϸ�2��ticks
  //THOST_FTDC_OPT_LastPricePlusTwoTicks -> '6', ���¼۸����ϸ�2��ticks
  //THOST_FTDC_OPT_AskPrice1PlusOneTicks -> '9', ��һ�۸����ϸ�1��ticks
  //THOST_FTDC_OPT_BidPrice1 -> 'C', ��һ��
  //THOST_FTDC_OPT_LimitPrice -> '2', �޼�
  //THOST_FTDC_OPT_LastPricePlusOneTicks -> '5', ���¼۸����ϸ�1��ticks
  //THOST_FTDC_OPT_LastPrice -> '4', ���¼�
  //THOST_FTDC_OPT_AskPrice1 -> '8', ��һ��
  //THOST_FTDC_OPT_AskPrice1PlusThreeTicks -> 'B', ��һ�۸����ϸ�3��ticks
  //THOST_FTDC_OPT_AnyPrice -> '1', �����
  //THOST_FTDC_OPT_BestPrice -> '3', ���ż�
  //THOST_FTDC_OPT_LastPricePlusThreeTicks -> '7', ���¼۸����ϸ�3��ticks
  //THOST_FTDC_OPT_BidPrice1PlusOneTicks -> 'D', ��һ�۸����ϸ�1��ticks
  //THOST_FTDC_OPT_BidPrice1PlusTwoTicks -> 'E', ��һ�۸����ϸ�2��ticks
  //THOST_FTDC_OPT_BidPrice1PlusThreeTicks -> 'F', ��һ�۸����ϸ�3��ticks
  t->OrderPriceType =   PyString_AsString(PyObject_GetAttrString(p, "OrderPriceType"))[0];
  //��Ч������
  //enum����
  //THOST_FTDC_TC_GTC -> '5', ����ǰ��Ч
  //THOST_FTDC_TC_GTD -> '4', ָ������ǰ��Ч
  //THOST_FTDC_TC_GFD -> '3', ������Ч
  //THOST_FTDC_TC_GFA -> '6', ���Ͼ�����Ч
  //THOST_FTDC_TC_IOC -> '1', ������ɣ�������
  //THOST_FTDC_TC_GFS -> '2', ������Ч
  t->TimeCondition =   PyString_AsString(PyObject_GetAttrString(p, "TimeCondition"))[0];
  //�Զ������־
  t->IsAutoSuspend =   PyInt_AsLong(PyObject_GetAttrString(p, "IsAutoSuspend"));
  //ֹ���
  t->StopPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StopPrice"));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //��С�ɽ���
  t->MinVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MinVolume"));
  //ǿƽԭ��
  //enum����
  //THOST_FTDC_FCC_PersonDeliv -> '7', ��Ȼ���ٽ�����
  //THOST_FTDC_FCC_ClientOverPositionLimit -> '2', �ͻ�����
  //THOST_FTDC_FCC_NotForceClose -> '0', ��ǿƽ
  //THOST_FTDC_FCC_NotMultiple -> '4', �ֲַ�������
  //THOST_FTDC_FCC_MemberOverPositionLimit -> '3', ��Ա����
  //THOST_FTDC_FCC_LackDeposit -> '1', �ʽ���
  //THOST_FTDC_FCC_Other -> '6', ����
  //THOST_FTDC_FCC_Violation -> '5', Υ��
  t->ForceCloseReason =   PyString_AsString(PyObject_GetAttrString(p, "ForceCloseReason"))[0];
  //�������
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //Ԥ�񱨵����
  strcpy(t->ParkedOrderID, PyString_AsString(PyObject_GetAttrString(p, "ParkedOrderID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //���Ͷ���ױ���־
  strcpy(t->CombHedgeFlag, PyString_AsString(PyObject_GetAttrString(p, "CombHedgeFlag")));
  //GTD����
  strcpy(t->GTDDate, PyString_AsString(PyObject_GetAttrString(p, "GTDDate")));
  //ҵ��Ԫ
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //������Ϣ
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //��������
  strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //�ɽ�������
  //enum����
  //THOST_FTDC_VC_MV -> '2', ��С����
  //THOST_FTDC_VC_CV -> '3', ȫ������
  //THOST_FTDC_VC_AV -> '1', �κ�����
  t->VolumeCondition =   PyString_AsString(PyObject_GetAttrString(p, "VolumeCondition"))[0];
  //������
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));

  return t;
};

//���ù�˾�Ƿ����ڱ���ʾ�Ľ���Ȩ��
PyObject * new_CThostFtdcBrokerUserRightAssignField(KingstarAPI::CThostFtdcBrokerUserRightAssignField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerUserRightAssignField", (char*)"isi",
p->DRIdentityID, p->BrokerID, p->Tradeable);
}
KingstarAPI::CThostFtdcBrokerUserRightAssignField * from_CThostFtdcBrokerUserRightAssignField(PyObject * p){
  KingstarAPI::CThostFtdcBrokerUserRightAssignField *t = (KingstarAPI::CThostFtdcBrokerUserRightAssignField *)calloc(1, sizeof(KingstarAPI::CThostFtdcBrokerUserRightAssignField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcBrokerUserRightAssignField));
  //�������Ĵ���
  t->DRIdentityID =   PyInt_AsLong(PyObject_GetAttrString(p, "DRIdentityID"));
  //Ӧ�õ�Ԫ����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //�ܷ���
  t->Tradeable =   PyInt_AsLong(PyObject_GetAttrString(p, "Tradeable"));

  return t;
};

//��������Ӧ
PyObject * new_CTKSConditionalOrderOperResultField(CTKSConditionalOrderOperResultField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CTKSConditionalOrderOperResultField", (char*)"ccsdcsissccsscsscsssssii",
p->ConditionalOrderStatus, p->CombOffsetFlag, p->UserID, p->LimitPrice, p->Direction, p->ActiveTime, p->TriggeredTimes, p->Memo, p->ClientID, p->OrderPriceType, p->OrderStatus, p->InstrumentID, p->ExchangeID, p->OrderType, p->TradingDay, p->BrokerID, p->CombHedgeFlag, p->CancelTime, p->OrderLocalID, p->ErrorMsg, p->InvestorID, p->InActiveTime, p->ConditionalOrderID, p->VolumeTotalOriginal);
}
CTKSConditionalOrderOperResultField * from_CTKSConditionalOrderOperResultField(PyObject * p){
CTKSConditionalOrderOperResultField *t = (CTKSConditionalOrderOperResultField *)calloc(1, sizeof(CTKSConditionalOrderOperResultField));
  memset(t,0,sizeof(CTKSConditionalOrderOperResultField));
  //������״̬
  //enum����
  //KSCOS_OrderStatus_WAITSELECT -> '6', �ȴ�ѡ��
  //KSCOS_OrderStatus_Deleted -> '2', ɾ��
  //KSCOS_OrderStatus_SENDTIMEOUT -> '4', ���ͳ�ʱ
  //KSCOS_OrderStatus_TOUCHEDNOSEND -> '3', �Ѵ���δ����
  //KSCOS_OrderStatus_PAUSENOTOUCHED -> '0', ��ͣ
  //KSCOS_OrderStatus_SENDSUCCESS -> '5', ���ͳɹ�
  //KSCOS_OrderStatus_SELECTABORT -> '8', ѡ����ֹ
  //KSCOS_OrderStatus_ACTIVENOTOUCHED -> '1', δ����
  //KSCOS_OrderStatus_SELECTSKIP -> '7', ѡ������
  t->ConditionalOrderStatus =   PyString_AsString(PyObject_GetAttrString(p, "ConditionalOrderStatus"))[0];
  //��ƽ��־
  //enum����
  //THOST_FTDC_OF_CloseToday -> '3', ƽ��
  //THOST_FTDC_OF_ForceOff -> '5', ǿ��
  //THOST_FTDC_OF_LocalForceClose -> '6', ����ǿƽ
  //THOST_FTDC_OF_Close -> '1', ƽ��
  //THOST_FTDC_OF_Open -> '0', ����
  //THOST_FTDC_OF_CloseYesterday -> '4', ƽ��
  //THOST_FTDC_OF_ForceClose -> '2', ǿƽ
  t->CombOffsetFlag =   PyString_AsString(PyObject_GetAttrString(p, "CombOffsetFlag"))[0];
  //�����û�
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //�۸�
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //��������
  //enum����
  //THOST_FTDC_D_Buy -> '0', ��
  //THOST_FTDC_D_Sell -> '1', ��
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //��Чʱ��
  strcpy(t->ActiveTime, PyString_AsString(PyObject_GetAttrString(p, "ActiveTime")));
  //��������
  t->TriggeredTimes =   PyInt_AsLong(PyObject_GetAttrString(p, "TriggeredTimes"));
  //��ע
  strcpy(t->Memo, PyString_AsString(PyObject_GetAttrString(p, "Memo")));
  //�ͻ�����
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //�۸����
  //enum����
  //THOST_FTDC_OPT_AskPrice1PlusTwoTicks -> 'A', ��һ�۸����ϸ�2��ticks
  //THOST_FTDC_OPT_LastPricePlusTwoTicks -> '6', ���¼۸����ϸ�2��ticks
  //THOST_FTDC_OPT_AskPrice1PlusOneTicks -> '9', ��һ�۸����ϸ�1��ticks
  //THOST_FTDC_OPT_BidPrice1 -> 'C', ��һ��
  //THOST_FTDC_OPT_LimitPrice -> '2', �޼�
  //THOST_FTDC_OPT_LastPricePlusOneTicks -> '5', ���¼۸����ϸ�1��ticks
  //THOST_FTDC_OPT_LastPrice -> '4', ���¼�
  //THOST_FTDC_OPT_AskPrice1 -> '8', ��һ��
  //THOST_FTDC_OPT_AskPrice1PlusThreeTicks -> 'B', ��һ�۸����ϸ�3��ticks
  //THOST_FTDC_OPT_AnyPrice -> '1', �����
  //THOST_FTDC_OPT_BestPrice -> '3', ���ż�
  //THOST_FTDC_OPT_LastPricePlusThreeTicks -> '7', ���¼۸����ϸ�3��ticks
  //THOST_FTDC_OPT_BidPrice1PlusOneTicks -> 'D', ��һ�۸����ϸ�1��ticks
  //THOST_FTDC_OPT_BidPrice1PlusTwoTicks -> 'E', ��һ�۸����ϸ�2��ticks
  //THOST_FTDC_OPT_BidPrice1PlusThreeTicks -> 'F', ��һ�۸����ϸ�3��ticks
  t->OrderPriceType =   PyString_AsString(PyObject_GetAttrString(p, "OrderPriceType"))[0];
  //����״̬
  //enum����
  //THOST_FTDC_OST_NotTouched -> 'b', ��δ����
  //THOST_FTDC_OST_NoTradeQueueing -> '3', δ�ɽ����ڶ�����
  //THOST_FTDC_OST_AllTraded -> '0', ȫ���ɽ�
  //THOST_FTDC_OST_NoTradeNotQueueing -> '4', δ�ɽ����ڶ�����
  //THOST_FTDC_OST_Unknown -> 'a', δ֪
  //THOST_FTDC_OST_PartTradedQueueing -> '1', ���ֳɽ����ڶ�����
  //THOST_FTDC_OST_PartTradedNotQueueing -> '2', ���ֳɽ����ڶ�����
  //THOST_FTDC_OST_Touched -> 'c', �Ѵ���
  //THOST_FTDC_OST_Canceled -> '5', ����
  t->OrderStatus =   PyString_AsString(PyObject_GetAttrString(p, "OrderStatus"))[0];
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //����������
  //enum����
  //KSCOS_TRIGGERTYPE_QUOTAIONANDTIME -> '5', �����ʱ�䴥��
  //KSCOS_TRIGGERTYPE_TIME -> '2', ʱ�䴥��
  //KSCOS_TRIGGERTYPE_QUOTATION -> '0', ���鴥��
  //KSCOS_TRIGGERTYPE_OPEN -> '1', ���̴���
  t->OrderType =   PyString_AsString(PyObject_GetAttrString(p, "OrderType"))[0];
  //������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //Ӫҵ������
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //Ͷ���ױ���־
  //enum����
  //THOST_FTDC_HF_Speculation -> '1', Ͷ��
  //THOST_FTDC_HF_Arbitrage -> '2', ����
  //THOST_FTDC_HF_Hedge -> '3', �ױ�
  t->CombHedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "CombHedgeFlag"))[0];
  //����ʱ��
  strcpy(t->CancelTime, PyString_AsString(PyObject_GetAttrString(p, "CancelTime")));
  //���ر������
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //������Ϣ
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //ʧЧʱ��
  strcpy(t->InActiveTime, PyString_AsString(PyObject_GetAttrString(p, "InActiveTime")));
  //���������
  t->ConditionalOrderID =   PyInt_AsLong(PyObject_GetAttrString(p, "ConditionalOrderID"));
  //����
  t->VolumeTotalOriginal =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));

  return t;
};

//��������
PyObject * new_CThostFtdcOrderActionField(KingstarAPI::CThostFtdcOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcOrderActionField", (char*)"ssssdcisiiicsssssssssssii",
p->ActionTime, p->InvestorID, p->TraderID, p->UserID, p->LimitPrice, p->OrderActionStatus, p->InstallID, p->ParticipantID, p->OrderActionRef, p->VolumeChange, p->SessionID, p->ActionFlag, p->InstrumentID, p->ExchangeID, p->StatusMsg, p->OrderSysID, p->BrokerID, p->ClientID, p->ActionDate, p->OrderLocalID, p->BusinessUnit, p->OrderRef, p->ActionLocalID, p->RequestID, p->FrontID);
}
KingstarAPI::CThostFtdcOrderActionField * from_CThostFtdcOrderActionField(PyObject * p){
  KingstarAPI::CThostFtdcOrderActionField *t = (KingstarAPI::CThostFtdcOrderActionField *)calloc(1, sizeof(KingstarAPI::CThostFtdcOrderActionField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcOrderActionField));
  //����ʱ��
  strcpy(t->ActionTime, PyString_AsString(PyObject_GetAttrString(p, "ActionTime")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //����������Ա����
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //�۸�
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //��������״̬
  //enum����
  //THOST_FTDC_OAS_Rejected -> 'c', �Ѿ����ܾ�
  //THOST_FTDC_OAS_Submitted -> 'a', �Ѿ��ύ
  //THOST_FTDC_OAS_Accepted -> 'b', �Ѿ�����
  t->OrderActionStatus =   PyString_AsString(PyObject_GetAttrString(p, "OrderActionStatus"))[0];
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //��Ա����
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //������������
  t->OrderActionRef =   PyInt_AsLong(PyObject_GetAttrString(p, "OrderActionRef"));
  //�����仯
  t->VolumeChange =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeChange"));
  //�Ự���
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //������־
  //enum����
  //THOST_FTDC_AF_Delete -> '0', ɾ��
  //THOST_FTDC_AF_Modify -> '3', �޸�
  t->ActionFlag =   PyString_AsString(PyObject_GetAttrString(p, "ActionFlag"))[0];
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //״̬��Ϣ
  strcpy(t->StatusMsg, PyString_AsString(PyObject_GetAttrString(p, "StatusMsg")));
  //�������
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //�ͻ�����
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //��������
  strcpy(t->ActionDate, PyString_AsString(PyObject_GetAttrString(p, "ActionDate")));
  //���ر������
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //ҵ��Ԫ
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //��������
  strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
  //�������ر��
  strcpy(t->ActionLocalID, PyString_AsString(PyObject_GetAttrString(p, "ActionLocalID")));
  //������
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //ǰ�ñ��
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));

  return t;
};

//��Ա����;��͹�˾������ձ�
PyObject * new_CThostFtdcPartBrokerField(KingstarAPI::CThostFtdcPartBrokerField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcPartBrokerField", (char*)"sssi",
p->ExchangeID, p->BrokerID, p->ParticipantID, p->IsActive);
}
KingstarAPI::CThostFtdcPartBrokerField * from_CThostFtdcPartBrokerField(PyObject * p){
  KingstarAPI::CThostFtdcPartBrokerField *t = (KingstarAPI::CThostFtdcPartBrokerField *)calloc(1, sizeof(KingstarAPI::CThostFtdcPartBrokerField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcPartBrokerField));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //��Ա����
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //�Ƿ��Ծ
  t->IsActive =   PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));

  return t;
};

//ת�ʿ�������
PyObject * new_CThostFtdcReqOpenAccountField(KingstarAPI::CThostFtdcReqOpenAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqOpenAccountField", (char*)"csssscisssicssssisicccssssssccssssccscsssss",
p->MoneyAccountStatus, p->BrokerBranchID, p->BankPassWord, p->Telephone, p->IdentifiedCardNo, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->Fax, p->InstallID, p->SecuPwdFlag, p->CustomerName, p->CountryCode, p->TradeCode, p->BankBranchID, p->SessionID, p->Address, p->PlateSerial, p->BankPwdFlag, p->CustType, p->Gender, p->BankID, p->BankSerial, p->OperNo, p->TradingDay, p->BankSecuAcc, p->BrokerID, p->CashExchangeCode, p->IdCardType, p->Password, p->MobilePhone, p->TradeDate, p->CurrencyID, p->BankAccType, p->LastFragment, p->ZipCode, p->BankSecuAccType, p->BrokerIDByBank, p->TradeTime, p->EMail, p->Digest, p->DeviceID);
}
KingstarAPI::CThostFtdcReqOpenAccountField * from_CThostFtdcReqOpenAccountField(PyObject * p){
  KingstarAPI::CThostFtdcReqOpenAccountField *t = (KingstarAPI::CThostFtdcReqOpenAccountField *)calloc(1, sizeof(KingstarAPI::CThostFtdcReqOpenAccountField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcReqOpenAccountField));
  //�ʽ��˻�״̬
  //enum����
  //THOST_FTDC_MAS_Cancel -> '1', ����
  //THOST_FTDC_MAS_Normal -> '0', ����
  t->MoneyAccountStatus =   PyString_AsString(PyObject_GetAttrString(p, "MoneyAccountStatus"))[0];
  //���̷�֧��������
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //��������
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //�绰����
  strcpy(t->Telephone, PyString_AsString(PyObject_GetAttrString(p, "Telephone")));
  //֤������
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //��֤�ͻ�֤�������־
  //enum����
  //THOST_FTDC_YNI_No -> '1', ��
  //THOST_FTDC_YNI_Yes -> '0', ��
  t->VerifyCertNoFlag =   PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
  //����ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //Ͷ�����ʺ�
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //�����ʺ�
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //����
  strcpy(t->Fax, PyString_AsString(PyObject_GetAttrString(p, "Fax")));
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //�ڻ��ʽ�����˶Ա�־
  //enum����
  //THOST_FTDC_BPWDF_BlankCheck -> '1', ���ĺ˶�
  //THOST_FTDC_BPWDF_NoCheck -> '0', ���˶�
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', ���ĺ˶�
  t->SecuPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
  //�ͻ�����
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //���Ҵ���
  strcpy(t->CountryCode, PyString_AsString(PyObject_GetAttrString(p, "CountryCode")));
  //ҵ������
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //���з�֧��������
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //�Ự��
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //��ַ
  strcpy(t->Address, PyString_AsString(PyObject_GetAttrString(p, "Address")));
  //����ƽ̨��Ϣ��ˮ��
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //���������־
  //enum����
  //THOST_FTDC_BPWDF_BlankCheck -> '1', ���ĺ˶�
  //THOST_FTDC_BPWDF_NoCheck -> '0', ���˶�
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', ���ĺ˶�
  t->BankPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
  //�ͻ�����
  //enum����
  //THOST_FTDC_CUSTT_Institution -> '1', ������
  //THOST_FTDC_CUSTT_Person -> '0', ��Ȼ��
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //�Ա�
  //enum����
  //THOST_FTDC_GD_Unknown -> '0', δ֪״̬
  //THOST_FTDC_GD_Female -> '2', Ů
  //THOST_FTDC_GD_Male -> '1', ��
  t->Gender =   PyString_AsString(PyObject_GetAttrString(p, "Gender"))[0];
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //������ˮ��
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //���׹�Ա
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //����ϵͳ����
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //�ڻ���λ�ʺ�
  strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
  //���̴���
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //�㳮��־
  //enum����
  //THOST_FTDC_CEC_Exchange -> '1', ��
  //THOST_FTDC_CEC_Cash -> '2', ��
  t->CashExchangeCode =   PyString_AsString(PyObject_GetAttrString(p, "CashExchangeCode"))[0];
  //֤������
  //enum����
  //THOST_FTDC_ICT_LicenseNo -> '9', Ӫҵִ�պ�
  //THOST_FTDC_ICT_TaxNo -> 'A', ˰��ǼǺ�
  //THOST_FTDC_ICT_OfficerIDCard -> '2', ����֤
  //THOST_FTDC_ICT_IDCard -> '1', ���֤
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', ̨��֤
  //THOST_FTDC_ICT_OtherCard -> 'x', ����֤��
  //THOST_FTDC_ICT_PoliceIDCard -> '3', ����֤
  //THOST_FTDC_ICT_Passport -> '6', ����
  //THOST_FTDC_ICT_EID -> '0', ��֯��������
  //THOST_FTDC_ICT_HomeComingCard -> '8', ����֤
  //THOST_FTDC_ICT_HouseholdRegister -> '5', ���ڲ�
  //THOST_FTDC_ICT_SoldierIDCard -> '4', ʿ��֤
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //�ڻ�����
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //�ֻ�
  strcpy(t->MobilePhone, PyString_AsString(PyObject_GetAttrString(p, "MobilePhone")));
  //��������
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //���ִ���
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //�����ʺ�����
  //enum����
  //THOST_FTDC_BAT_SavingCard -> '2', ���
  //THOST_FTDC_BAT_CreditCard -> '3', ���ÿ�
  //THOST_FTDC_BAT_BankBook -> '1', ���д���
  t->BankAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
  //����Ƭ��־
  //enum����
  //THOST_FTDC_LF_No -> '1', ��������Ƭ
  //THOST_FTDC_LF_Yes -> '0', ������Ƭ
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //�ʱ�
  strcpy(t->ZipCode, PyString_AsString(PyObject_GetAttrString(p, "ZipCode")));
  //�ڻ���λ�ʺ�����
  //enum����
  //THOST_FTDC_BAT_SavingCard -> '2', ���
  //THOST_FTDC_BAT_CreditCard -> '3', ���ÿ�
  //THOST_FTDC_BAT_BankBook -> '1', ���д���
  t->BankSecuAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
  //�ڻ���˾���б���
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //����ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //�����ʼ�
  strcpy(t->EMail, PyString_AsString(PyObject_GetAttrString(p, "EMail")));
  //ժҪ
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
  //������־
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));

  return t;
};

//У��Ͷ��������
PyObject * new_CThostFtdcVerifyInvestorPasswordField(KingstarAPI::CThostFtdcVerifyInvestorPasswordField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcVerifyInvestorPasswordField", (char*)"sss",
p->InvestorID, p->Password, p->BrokerID);
}
KingstarAPI::CThostFtdcVerifyInvestorPasswordField * from_CThostFtdcVerifyInvestorPasswordField(PyObject * p){
  KingstarAPI::CThostFtdcVerifyInvestorPasswordField *t = (KingstarAPI::CThostFtdcVerifyInvestorPasswordField *)calloc(1, sizeof(KingstarAPI::CThostFtdcVerifyInvestorPasswordField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcVerifyInvestorPasswordField));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //����
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//ֹ��ֹӯ��ɾ��
PyObject * new_CTKSProfitAndLossOrderRemoveField(CTKSProfitAndLossOrderRemoveField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CTKSProfitAndLossOrderRemoveField", (char*)"ssi",
p->InvestorID, p->BrokerID, p->ProfitAndLossOrderID);
}
CTKSProfitAndLossOrderRemoveField * from_CTKSProfitAndLossOrderRemoveField(PyObject * p){
CTKSProfitAndLossOrderRemoveField *t = (CTKSProfitAndLossOrderRemoveField *)calloc(1, sizeof(CTKSProfitAndLossOrderRemoveField));
  memset(t,0,sizeof(CTKSProfitAndLossOrderRemoveField));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //Ӫҵ������
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //ֹ��ֹӯ����
  t->ProfitAndLossOrderID =   PyInt_AsLong(PyObject_GetAttrString(p, "ProfitAndLossOrderID"));

  return t;
};

//��ѯ���͹�˾�ʽ�
PyObject * new_CThostFtdcQueryBrokerDepositField(KingstarAPI::CThostFtdcQueryBrokerDepositField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQueryBrokerDepositField", (char*)"ss",
p->ExchangeID, p->BrokerID);
}
KingstarAPI::CThostFtdcQueryBrokerDepositField * from_CThostFtdcQueryBrokerDepositField(PyObject * p){
  KingstarAPI::CThostFtdcQueryBrokerDepositField *t = (KingstarAPI::CThostFtdcQueryBrokerDepositField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQueryBrokerDepositField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQueryBrokerDepositField));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//�����û�
PyObject * new_CThostFtdcSuperUserField(KingstarAPI::CThostFtdcSuperUserField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSuperUserField", (char*)"sssi",
p->UserName, p->Password, p->UserID, p->IsActive);
}
KingstarAPI::CThostFtdcSuperUserField * from_CThostFtdcSuperUserField(PyObject * p){
  KingstarAPI::CThostFtdcSuperUserField *t = (KingstarAPI::CThostFtdcSuperUserField *)calloc(1, sizeof(KingstarAPI::CThostFtdcSuperUserField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcSuperUserField));
  //�û�����
  strcpy(t->UserName, PyString_AsString(PyObject_GetAttrString(p, "UserName")));
  //����
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //�Ƿ��Ծ
  t->IsActive =   PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));

  return t;
};

//��ѯ��Ʒ
PyObject * new_CThostFtdcQryProductField(KingstarAPI::CThostFtdcQryProductField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryProductField", (char*)"s",
p->ProductID);
}
KingstarAPI::CThostFtdcQryProductField * from_CThostFtdcQryProductField(PyObject * p){
  KingstarAPI::CThostFtdcQryProductField *t = (KingstarAPI::CThostFtdcQryProductField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryProductField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryProductField));
  //��Ʒ����
  strcpy(t->ProductID, PyString_AsString(PyObject_GetAttrString(p, "ProductID")));

  return t;
};

//Ͷ����
PyObject * new_CThostFtdcInvestorField(KingstarAPI::CThostFtdcInvestorField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInvestorField", (char*)"ssssssssssic",
p->CommModelID, p->InvestorName, p->Mobile, p->IdentifiedCardNo, p->Telephone, p->InvestorID, p->BrokerID, p->Address, p->InvestorGroupID, p->OpenDate, p->IsActive, p->IdentifiedCardType);
}
KingstarAPI::CThostFtdcInvestorField * from_CThostFtdcInvestorField(PyObject * p){
  KingstarAPI::CThostFtdcInvestorField *t = (KingstarAPI::CThostFtdcInvestorField *)calloc(1, sizeof(KingstarAPI::CThostFtdcInvestorField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcInvestorField));
  //��������ģ�����
  strcpy(t->CommModelID, PyString_AsString(PyObject_GetAttrString(p, "CommModelID")));
  //Ͷ��������
  strcpy(t->InvestorName, PyString_AsString(PyObject_GetAttrString(p, "InvestorName")));
  //�ֻ�
  strcpy(t->Mobile, PyString_AsString(PyObject_GetAttrString(p, "Mobile")));
  //֤������
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //��ϵ�绰
  strcpy(t->Telephone, PyString_AsString(PyObject_GetAttrString(p, "Telephone")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //ͨѶ��ַ
  strcpy(t->Address, PyString_AsString(PyObject_GetAttrString(p, "Address")));
  //Ͷ���߷������
  strcpy(t->InvestorGroupID, PyString_AsString(PyObject_GetAttrString(p, "InvestorGroupID")));
  //��������
  strcpy(t->OpenDate, PyString_AsString(PyObject_GetAttrString(p, "OpenDate")));
  //�Ƿ��Ծ
  t->IsActive =   PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));
  //֤������
  //enum����
  //THOST_FTDC_ICT_LicenseNo -> '9', Ӫҵִ�պ�
  //THOST_FTDC_ICT_TaxNo -> 'A', ˰��ǼǺ�
  //THOST_FTDC_ICT_OfficerIDCard -> '2', ����֤
  //THOST_FTDC_ICT_IDCard -> '1', ���֤
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', ̨��֤
  //THOST_FTDC_ICT_OtherCard -> 'x', ����֤��
  //THOST_FTDC_ICT_PoliceIDCard -> '3', ����֤
  //THOST_FTDC_ICT_Passport -> '6', ����
  //THOST_FTDC_ICT_EID -> '0', ��֯��������
  //THOST_FTDC_ICT_HomeComingCard -> '8', ����֤
  //THOST_FTDC_ICT_HouseholdRegister -> '5', ���ڲ�
  //THOST_FTDC_ICT_SoldierIDCard -> '4', ʿ��֤
  t->IdentifiedCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardType"))[0];

  return t;
};

//����ͬ��״̬
PyObject * new_CThostFtdcSyncStatusField(KingstarAPI::CThostFtdcSyncStatusField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncStatusField", (char*)"sc",
p->TradingDay, p->DataSyncStatus);
}
KingstarAPI::CThostFtdcSyncStatusField * from_CThostFtdcSyncStatusField(PyObject * p){
  KingstarAPI::CThostFtdcSyncStatusField *t = (KingstarAPI::CThostFtdcSyncStatusField *)calloc(1, sizeof(KingstarAPI::CThostFtdcSyncStatusField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcSyncStatusField));
  //������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //����ͬ��״̬
  //enum����
  //THOST_FTDC_DS_Synchronized -> '3', ��ͬ��
  //THOST_FTDC_DS_Asynchronous -> '1', δͬ��
  //THOST_FTDC_DS_Synchronizing -> '2', ͬ����
  t->DataSyncStatus =   PyString_AsString(PyObject_GetAttrString(p, "DataSyncStatus"))[0];

  return t;
};

//Ͷ���ߺ�Լ����Ȩ��
PyObject * new_CThostFtdcInstrumentTradingRightField(KingstarAPI::CThostFtdcInstrumentTradingRightField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInstrumentTradingRightField", (char*)"ssscc",
p->InstrumentID, p->InvestorID, p->BrokerID, p->InvestorRange, p->TradingRight);
}
KingstarAPI::CThostFtdcInstrumentTradingRightField * from_CThostFtdcInstrumentTradingRightField(PyObject * p){
  KingstarAPI::CThostFtdcInstrumentTradingRightField *t = (KingstarAPI::CThostFtdcInstrumentTradingRightField *)calloc(1, sizeof(KingstarAPI::CThostFtdcInstrumentTradingRightField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcInstrumentTradingRightField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //Ͷ���߷�Χ
  //enum����
  //THOST_FTDC_IR_All -> '1', ����
  //THOST_FTDC_IR_Group -> '2', Ͷ������
  //THOST_FTDC_IR_Single -> '3', ��һͶ����
  t->InvestorRange =   PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
  //����Ȩ��
  //enum����
  //THOST_FTDC_TR_Allow -> '0', ���Խ���
  //THOST_FTDC_TR_Forbidden -> '2', ���ܽ���
  //THOST_FTDC_TR_CloseOnly -> '1', ֻ��ƽ��
  t->TradingRight =   PyString_AsString(PyObject_GetAttrString(p, "TradingRight"))[0];

  return t;
};

//��ѯ�����ʽ�������Ӧ
PyObject * new_CThostFtdcTransferQryBankRspField(KingstarAPI::CThostFtdcTransferQryBankRspField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferQryBankRspField", (char*)"sssddsd",
p->FutureAccount, p->RetCode, p->CurrencyCode, p->TradeAmt, p->UseAmt, p->RetInfo, p->FetchAmt);
}
KingstarAPI::CThostFtdcTransferQryBankRspField * from_CThostFtdcTransferQryBankRspField(PyObject * p){
  KingstarAPI::CThostFtdcTransferQryBankRspField *t = (KingstarAPI::CThostFtdcTransferQryBankRspField *)calloc(1, sizeof(KingstarAPI::CThostFtdcTransferQryBankRspField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcTransferQryBankRspField));
  //�ʽ��˻�
  strcpy(t->FutureAccount, PyString_AsString(PyObject_GetAttrString(p, "FutureAccount")));
  //��Ӧ����
  strcpy(t->RetCode, PyString_AsString(PyObject_GetAttrString(p, "RetCode")));
  //����
  strcpy(t->CurrencyCode, PyString_AsString(PyObject_GetAttrString(p, "CurrencyCode")));
  //�������
  t->TradeAmt =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmt"));
  //���п������
  t->UseAmt =   PyFloat_AsDouble(PyObject_GetAttrString(p, "UseAmt"));
  //��Ӧ��Ϣ
  strcpy(t->RetInfo, PyString_AsString(PyObject_GetAttrString(p, "RetInfo")));
  //���п�ȡ���
  t->FetchAmt =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FetchAmt"));

  return t;
};

//�ͻ���������Ϣ��
PyObject * new_CThostFtdcAccountregisterField(KingstarAPI::CThostFtdcAccountregisterField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcAccountregisterField", (char*)"scsssssssssiccscs",
p->BankAccount, p->CustType, p->CustomerName, p->CurrencyID, p->BrokerBranchID, p->OutDate, p->IdentifiedCardNo, p->BankBranchID, p->RegDate, p->BrokerID, p->BankID, p->TID, p->OpenOrDestroy, p->IdCardType, p->TradeDay, p->BankAccType, p->AccountID);
}
KingstarAPI::CThostFtdcAccountregisterField * from_CThostFtdcAccountregisterField(PyObject * p){
  KingstarAPI::CThostFtdcAccountregisterField *t = (KingstarAPI::CThostFtdcAccountregisterField *)calloc(1, sizeof(KingstarAPI::CThostFtdcAccountregisterField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcAccountregisterField));
  //�����ʺ�
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //�ͻ�����
  //enum����
  //THOST_FTDC_CUSTT_Institution -> '1', ������
  //THOST_FTDC_CUSTT_Person -> '0', ��Ȼ��
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //�ͻ�����
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //���ִ���
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //�ڻ���˾��֧��������
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //��Լ����
  strcpy(t->OutDate, PyString_AsString(PyObject_GetAttrString(p, "OutDate")));
  //֤������
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //���з�֧��������
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //ǩԼ����
  strcpy(t->RegDate, PyString_AsString(PyObject_GetAttrString(p, "RegDate")));
  //�ڻ���˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //���б���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //����ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //���������
  //enum����
  //THOST_FTDC_OOD_Destroy -> '0', ����
  //THOST_FTDC_OOD_Open -> '1', ����
  t->OpenOrDestroy =   PyString_AsString(PyObject_GetAttrString(p, "OpenOrDestroy"))[0];
  //֤������
  //enum����
  //THOST_FTDC_ICT_LicenseNo -> '9', Ӫҵִ�պ�
  //THOST_FTDC_ICT_TaxNo -> 'A', ˰��ǼǺ�
  //THOST_FTDC_ICT_OfficerIDCard -> '2', ����֤
  //THOST_FTDC_ICT_IDCard -> '1', ���֤
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', ̨��֤
  //THOST_FTDC_ICT_OtherCard -> 'x', ����֤��
  //THOST_FTDC_ICT_PoliceIDCard -> '3', ����֤
  //THOST_FTDC_ICT_Passport -> '6', ����
  //THOST_FTDC_ICT_EID -> '0', ��֯��������
  //THOST_FTDC_ICT_HomeComingCard -> '8', ����֤
  //THOST_FTDC_ICT_HouseholdRegister -> '5', ���ڲ�
  //THOST_FTDC_ICT_SoldierIDCard -> '4', ʿ��֤
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //��������
  strcpy(t->TradeDay, PyString_AsString(PyObject_GetAttrString(p, "TradeDay")));
  //�����ʺ�����
  //enum����
  //THOST_FTDC_BAT_SavingCard -> '2', ���
  //THOST_FTDC_BAT_CreditCard -> '3', ���ÿ�
  //THOST_FTDC_BAT_BankBook -> '1', ���д���
  t->BankAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
  //Ͷ�����ʺ�
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));

  return t;
};

//���͹�˾�ʽ�
PyObject * new_CThostFtdcBrokerDepositField(KingstarAPI::CThostFtdcBrokerDepositField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerDepositField", (char*)"dssdddssddddd",
p->Available, p->ExchangeID, p->ParticipantID, p->FrozenMargin, p->PreBalance, p->CurrMargin, p->TradingDay, p->BrokerID, p->Deposit, p->Withdraw, p->CloseProfit, p->Balance, p->Reserve);
}
KingstarAPI::CThostFtdcBrokerDepositField * from_CThostFtdcBrokerDepositField(PyObject * p){
  KingstarAPI::CThostFtdcBrokerDepositField *t = (KingstarAPI::CThostFtdcBrokerDepositField *)calloc(1, sizeof(KingstarAPI::CThostFtdcBrokerDepositField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcBrokerDepositField));
  //�����ʽ�
  t->Available =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Available"));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //��Ա����
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //����ı�֤��
  t->FrozenMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenMargin"));
  //�ϴν���׼����
  t->PreBalance =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreBalance"));
  //��ǰ��֤���ܶ�
  t->CurrMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CurrMargin"));
  //��������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //�����
  t->Deposit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Deposit"));
  //������
  t->Withdraw =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Withdraw"));
  //ƽ��ӯ��
  t->CloseProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfit"));
  //�ڻ�����׼����
  t->Balance =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Balance"));
  //����׼����
  t->Reserve =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Reserve"));

  return t;
};

//��ѯ���󱨵�����
PyObject * new_CThostFtdcErrorConditionalOrderField(KingstarAPI::CThostFtdcErrorConditionalOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcErrorConditionalOrderField", (char*)"cisissssdiscisissiciccscidssisiccisssssissssssssisisciscs",
p->ContingentCondition, p->NotifySequence, p->ActiveUserID, p->VolumeTraded, p->UserProductInfo, p->CombOffsetFlag, p->TraderID, p->UserID, p->LimitPrice, p->UserForceClose, p->RelativeOrderSysID, p->Direction, p->InstallID, p->ParticipantID, p->VolumeTotalOriginal, p->ExchangeInstID, p->ClientID, p->VolumeTotal, p->OrderPriceType, p->SessionID, p->TimeCondition, p->OrderStatus, p->OrderSysID, p->OrderSubmitStatus, p->IsAutoSuspend, p->StopPrice, p->InstrumentID, p->ExchangeID, p->MinVolume, p->StatusMsg, p->SettlementID, p->ForceCloseReason, p->OrderType, p->ErrorID, p->UpdateTime, p->TradingDay, p->ActiveTime, p->BrokerID, p->InsertTime, p->FrontID, p->SuspendTime, p->ClearingPartID, p->CombHedgeFlag, p->CancelTime, p->GTDDate, p->OrderLocalID, p->BusinessUnit, p->InsertDate, p->SequenceNo, p->OrderRef, p->BrokerOrderSeq, p->InvestorID, p->VolumeCondition, p->RequestID, p->ErrorMsg, p->OrderSource, p->ActiveTraderID);
}
KingstarAPI::CThostFtdcErrorConditionalOrderField * from_CThostFtdcErrorConditionalOrderField(PyObject * p){
  KingstarAPI::CThostFtdcErrorConditionalOrderField *t = (KingstarAPI::CThostFtdcErrorConditionalOrderField *)calloc(1, sizeof(KingstarAPI::CThostFtdcErrorConditionalOrderField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcErrorConditionalOrderField));
  //��������
  //enum����
  //THOST_FTDC_CC_BidPriceGreaterThanStopPrice -> 'D', ��һ�۴���������
  //THOST_FTDC_CC_AskPriceLesserEqualStopPrice -> 'C', ��һ��С�ڵ���������
  //THOST_FTDC_CC_AskPriceGreaterThanStopPrice -> '9', ��һ�۴���������
  //THOST_FTDC_CC_LastPriceLesserThanStopPrice -> '7', ���¼�С��������
  //THOST_FTDC_CC_LastPriceGreaterEqualStopPrice -> '6', ���¼۴��ڵ���������
  //THOST_FTDC_CC_BidPriceGreaterEqualStopPrice -> 'E', ��һ�۴��ڵ���������
  //THOST_FTDC_CC_LastPriceLesserEqualStopPrice -> '8', ���¼�С�ڵ���������
  //THOST_FTDC_CC_TouchProfit -> '3', ֹӮ
  //THOST_FTDC_CC_ParkedOrder -> '4', Ԥ��
  //THOST_FTDC_CC_AskPriceGreaterEqualStopPrice -> 'A', ��һ�۴��ڵ���������
  //THOST_FTDC_CC_BidPriceLesserEqualStopPrice -> 'H', ��һ��С�ڵ���������
  //THOST_FTDC_CC_LastPriceGreaterThanStopPrice -> '5', ���¼۴���������
  //THOST_FTDC_CC_BidPriceLesserThanStopPrice -> 'F', ��һ��С��������
  //THOST_FTDC_CC_AskPriceLesserThanStopPrice -> 'B', ��һ��С��������
  //THOST_FTDC_CC_Immediately -> '1', ����
  //THOST_FTDC_CC_Touch -> '2', ֹ��
  t->ContingentCondition =   PyString_AsString(PyObject_GetAttrString(p, "ContingentCondition"))[0];
  //������ʾ���
  t->NotifySequence =   PyInt_AsLong(PyObject_GetAttrString(p, "NotifySequence"));
  //�����û�����
  strcpy(t->ActiveUserID, PyString_AsString(PyObject_GetAttrString(p, "ActiveUserID")));
  //��ɽ�����
  t->VolumeTraded =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTraded"));
  //�û��˲�Ʒ��Ϣ
  strcpy(t->UserProductInfo, PyString_AsString(PyObject_GetAttrString(p, "UserProductInfo")));
  //��Ͽ�ƽ��־
  strcpy(t->CombOffsetFlag, PyString_AsString(PyObject_GetAttrString(p, "CombOffsetFlag")));
  //����������Ա����
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //�۸�
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //�û�ǿ����־
  t->UserForceClose =   PyInt_AsLong(PyObject_GetAttrString(p, "UserForceClose"));
  //��ر���
  strcpy(t->RelativeOrderSysID, PyString_AsString(PyObject_GetAttrString(p, "RelativeOrderSysID")));
  //��������
  //enum����
  //THOST_FTDC_D_Buy -> '0', ��
  //THOST_FTDC_D_Sell -> '1', ��
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //��Ա����
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //����
  t->VolumeTotalOriginal =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
  //��Լ�ڽ������Ĵ���
  strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
  //�ͻ�����
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //ʣ������
  t->VolumeTotal =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotal"));
  //�����۸�����
  //enum����
  //THOST_FTDC_OPT_AskPrice1PlusTwoTicks -> 'A', ��һ�۸����ϸ�2��ticks
  //THOST_FTDC_OPT_LastPricePlusTwoTicks -> '6', ���¼۸����ϸ�2��ticks
  //THOST_FTDC_OPT_AskPrice1PlusOneTicks -> '9', ��һ�۸����ϸ�1��ticks
  //THOST_FTDC_OPT_BidPrice1 -> 'C', ��һ��
  //THOST_FTDC_OPT_LimitPrice -> '2', �޼�
  //THOST_FTDC_OPT_LastPricePlusOneTicks -> '5', ���¼۸����ϸ�1��ticks
  //THOST_FTDC_OPT_LastPrice -> '4', ���¼�
  //THOST_FTDC_OPT_AskPrice1 -> '8', ��һ��
  //THOST_FTDC_OPT_AskPrice1PlusThreeTicks -> 'B', ��һ�۸����ϸ�3��ticks
  //THOST_FTDC_OPT_AnyPrice -> '1', �����
  //THOST_FTDC_OPT_BestPrice -> '3', ���ż�
  //THOST_FTDC_OPT_LastPricePlusThreeTicks -> '7', ���¼۸����ϸ�3��ticks
  //THOST_FTDC_OPT_BidPrice1PlusOneTicks -> 'D', ��һ�۸����ϸ�1��ticks
  //THOST_FTDC_OPT_BidPrice1PlusTwoTicks -> 'E', ��һ�۸����ϸ�2��ticks
  //THOST_FTDC_OPT_BidPrice1PlusThreeTicks -> 'F', ��һ�۸����ϸ�3��ticks
  t->OrderPriceType =   PyString_AsString(PyObject_GetAttrString(p, "OrderPriceType"))[0];
  //�Ự���
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //��Ч������
  //enum����
  //THOST_FTDC_TC_GTC -> '5', ����ǰ��Ч
  //THOST_FTDC_TC_GTD -> '4', ָ������ǰ��Ч
  //THOST_FTDC_TC_GFD -> '3', ������Ч
  //THOST_FTDC_TC_GFA -> '6', ���Ͼ�����Ч
  //THOST_FTDC_TC_IOC -> '1', ������ɣ�������
  //THOST_FTDC_TC_GFS -> '2', ������Ч
  t->TimeCondition =   PyString_AsString(PyObject_GetAttrString(p, "TimeCondition"))[0];
  //����״̬
  //enum����
  //THOST_FTDC_OST_NotTouched -> 'b', ��δ����
  //THOST_FTDC_OST_NoTradeQueueing -> '3', δ�ɽ����ڶ�����
  //THOST_FTDC_OST_AllTraded -> '0', ȫ���ɽ�
  //THOST_FTDC_OST_NoTradeNotQueueing -> '4', δ�ɽ����ڶ�����
  //THOST_FTDC_OST_Unknown -> 'a', δ֪
  //THOST_FTDC_OST_PartTradedQueueing -> '1', ���ֳɽ����ڶ�����
  //THOST_FTDC_OST_PartTradedNotQueueing -> '2', ���ֳɽ����ڶ�����
  //THOST_FTDC_OST_Touched -> 'c', �Ѵ���
  //THOST_FTDC_OST_Canceled -> '5', ����
  t->OrderStatus =   PyString_AsString(PyObject_GetAttrString(p, "OrderStatus"))[0];
  //�������
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //�����ύ״̬
  //enum����
  //THOST_FTDC_OSS_InsertSubmitted -> '0', �Ѿ��ύ
  //THOST_FTDC_OSS_InsertRejected -> '4', �����Ѿ����ܾ�
  //THOST_FTDC_OSS_CancelSubmitted -> '1', �����Ѿ��ύ
  //THOST_FTDC_OSS_CancelRejected -> '5', �����Ѿ����ܾ�
  //THOST_FTDC_OSS_Accepted -> '3', �Ѿ�����
  //THOST_FTDC_OSS_ModifySubmitted -> '2', �޸��Ѿ��ύ
  //THOST_FTDC_OSS_ModifyRejected -> '6', �ĵ��Ѿ����ܾ�
  t->OrderSubmitStatus =   PyString_AsString(PyObject_GetAttrString(p, "OrderSubmitStatus"))[0];
  //�Զ������־
  t->IsAutoSuspend =   PyInt_AsLong(PyObject_GetAttrString(p, "IsAutoSuspend"));
  //ֹ���
  t->StopPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StopPrice"));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //��С�ɽ���
  t->MinVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MinVolume"));
  //״̬��Ϣ
  strcpy(t->StatusMsg, PyString_AsString(PyObject_GetAttrString(p, "StatusMsg")));
  //������
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //ǿƽԭ��
  //enum����
  //THOST_FTDC_FCC_PersonDeliv -> '7', ��Ȼ���ٽ�����
  //THOST_FTDC_FCC_ClientOverPositionLimit -> '2', �ͻ�����
  //THOST_FTDC_FCC_NotForceClose -> '0', ��ǿƽ
  //THOST_FTDC_FCC_NotMultiple -> '4', �ֲַ�������
  //THOST_FTDC_FCC_MemberOverPositionLimit -> '3', ��Ա����
  //THOST_FTDC_FCC_LackDeposit -> '1', �ʽ���
  //THOST_FTDC_FCC_Other -> '6', ����
  //THOST_FTDC_FCC_Violation -> '5', Υ��
  t->ForceCloseReason =   PyString_AsString(PyObject_GetAttrString(p, "ForceCloseReason"))[0];
  //��������
  //enum����
  //THOST_FTDC_ORDT_Combination -> '3', ��ϱ���
  //THOST_FTDC_ORDT_Normal -> '0', ����
  //THOST_FTDC_ORDT_DeriveFromCombination -> '2', �������
  //THOST_FTDC_ORDT_DeriveFromQuote -> '1', ��������
  //THOST_FTDC_ORDT_Swap -> '5', ������
  //THOST_FTDC_ORDT_ConditionalOrder -> '4', ������
  t->OrderType =   PyString_AsString(PyObject_GetAttrString(p, "OrderType"))[0];
  //�������
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //����޸�ʱ��
  strcpy(t->UpdateTime, PyString_AsString(PyObject_GetAttrString(p, "UpdateTime")));
  //������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //����ʱ��
  strcpy(t->ActiveTime, PyString_AsString(PyObject_GetAttrString(p, "ActiveTime")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //ί��ʱ��
  strcpy(t->InsertTime, PyString_AsString(PyObject_GetAttrString(p, "InsertTime")));
  //ǰ�ñ��
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //����ʱ��
  strcpy(t->SuspendTime, PyString_AsString(PyObject_GetAttrString(p, "SuspendTime")));
  //�����Ա���
  strcpy(t->ClearingPartID, PyString_AsString(PyObject_GetAttrString(p, "ClearingPartID")));
  //���Ͷ���ױ���־
  strcpy(t->CombHedgeFlag, PyString_AsString(PyObject_GetAttrString(p, "CombHedgeFlag")));
  //����ʱ��
  strcpy(t->CancelTime, PyString_AsString(PyObject_GetAttrString(p, "CancelTime")));
  //GTD����
  strcpy(t->GTDDate, PyString_AsString(PyObject_GetAttrString(p, "GTDDate")));
  //���ر������
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //ҵ��Ԫ
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //��������
  strcpy(t->InsertDate, PyString_AsString(PyObject_GetAttrString(p, "InsertDate")));
  //���
  t->SequenceNo =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //��������
  strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
  //���͹�˾�������
  t->BrokerOrderSeq =   PyInt_AsLong(PyObject_GetAttrString(p, "BrokerOrderSeq"));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //�ɽ�������
  //enum����
  //THOST_FTDC_VC_MV -> '2', ��С����
  //THOST_FTDC_VC_CV -> '3', ȫ������
  //THOST_FTDC_VC_AV -> '1', �κ�����
  t->VolumeCondition =   PyString_AsString(PyObject_GetAttrString(p, "VolumeCondition"))[0];
  //������
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //������Ϣ
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //������Դ
  //enum����
  //THOST_FTDC_OSRC_Participant -> '0', ���Բ�����
  //THOST_FTDC_OSRC_Administrator -> '1', ���Թ���Ա
  t->OrderSource =   PyString_AsString(PyObject_GetAttrString(p, "OrderSource"))[0];
  //����޸Ľ���������Ա����
  strcpy(t->ActiveTraderID, PyString_AsString(PyObject_GetAttrString(p, "ActiveTraderID")));

  return t;
};

//�ֱ�����ת������
PyObject * new_CThostFtdcDRTransferField(KingstarAPI::CThostFtdcDRTransferField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcDRTransferField", (char*)"siis",
p->DestBrokerID, p->DestDRIdentityID, p->OrigDRIdentityID, p->OrigBrokerID);
}
KingstarAPI::CThostFtdcDRTransferField * from_CThostFtdcDRTransferField(PyObject * p){
  KingstarAPI::CThostFtdcDRTransferField *t = (KingstarAPI::CThostFtdcDRTransferField *)calloc(1, sizeof(KingstarAPI::CThostFtdcDRTransferField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcDRTransferField));
  //Ŀ�����õ�Ԫ����
  strcpy(t->DestBrokerID, PyString_AsString(PyObject_GetAttrString(p, "DestBrokerID")));
  //Ŀ�꽻�����Ĵ���
  t->DestDRIdentityID =   PyInt_AsLong(PyObject_GetAttrString(p, "DestDRIdentityID"));
  //ԭ�������Ĵ���
  t->OrigDRIdentityID =   PyInt_AsLong(PyObject_GetAttrString(p, "OrigDRIdentityID"));
  //ԭӦ�õ�Ԫ����
  strcpy(t->OrigBrokerID, PyString_AsString(PyObject_GetAttrString(p, "OrigBrokerID")));

  return t;
};

//���͹�˾���ײ���
PyObject * new_CThostFtdcBrokerTradingParamsField(KingstarAPI::CThostFtdcBrokerTradingParamsField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerTradingParamsField", (char*)"scscc",
p->InvestorID, p->MarginPriceType, p->BrokerID, p->AvailIncludeCloseProfit, p->Algorithm);
}
KingstarAPI::CThostFtdcBrokerTradingParamsField * from_CThostFtdcBrokerTradingParamsField(PyObject * p){
  KingstarAPI::CThostFtdcBrokerTradingParamsField *t = (KingstarAPI::CThostFtdcBrokerTradingParamsField *)calloc(1, sizeof(KingstarAPI::CThostFtdcBrokerTradingParamsField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcBrokerTradingParamsField));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //��֤��۸�����
  //enum����
  //THOST_FTDC_MPT_OpenPrice -> '4', ���ּ�
  //THOST_FTDC_MPT_PreSettlementPrice -> '1', ������
  //THOST_FTDC_MPT_AveragePrice -> '3', �ɽ�����
  //THOST_FTDC_MPT_SettlementPrice -> '2', ���¼�
  t->MarginPriceType =   PyString_AsString(PyObject_GetAttrString(p, "MarginPriceType"))[0];
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //�����Ƿ����ƽ��ӯ��
  //enum����
  //THOST_FTDC_ICP_NotInclude -> '2', ������ƽ��ӯ��
  //THOST_FTDC_ICP_Include -> '0', ����ƽ��ӯ��
  t->AvailIncludeCloseProfit =   PyString_AsString(PyObject_GetAttrString(p, "AvailIncludeCloseProfit"))[0];
  //ӯ���㷨
  //enum����
  //THOST_FTDC_AG_OnlyLost -> '2', ��ӯ���ƣ�������
  //THOST_FTDC_AG_None -> '4', ��ӯ������������
  //THOST_FTDC_AG_All -> '1', ��ӯ����������
  //THOST_FTDC_AG_OnlyGain -> '3', ��ӯ�ƣ���������
  t->Algorithm =   PyString_AsString(PyObject_GetAttrString(p, "Algorithm"))[0];

  return t;
};

//ɾ��Ԥ��
PyObject * new_CThostFtdcRemoveParkedOrderField(KingstarAPI::CThostFtdcRemoveParkedOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRemoveParkedOrderField", (char*)"sss",
p->InvestorID, p->BrokerID, p->ParkedOrderID);
}
KingstarAPI::CThostFtdcRemoveParkedOrderField * from_CThostFtdcRemoveParkedOrderField(PyObject * p){
  KingstarAPI::CThostFtdcRemoveParkedOrderField *t = (KingstarAPI::CThostFtdcRemoveParkedOrderField *)calloc(1, sizeof(KingstarAPI::CThostFtdcRemoveParkedOrderField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcRemoveParkedOrderField));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //Ԥ�񱨵����
  strcpy(t->ParkedOrderID, PyString_AsString(PyObject_GetAttrString(p, "ParkedOrderID")));

  return t;
};

//���͹�˾�û�����
PyObject * new_CThostFtdcBrokerUserPasswordField(KingstarAPI::CThostFtdcBrokerUserPasswordField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerUserPasswordField", (char*)"sss",
p->UserID, p->Password, p->BrokerID);
}
KingstarAPI::CThostFtdcBrokerUserPasswordField * from_CThostFtdcBrokerUserPasswordField(PyObject * p){
  KingstarAPI::CThostFtdcBrokerUserPasswordField *t = (KingstarAPI::CThostFtdcBrokerUserPasswordField *)calloc(1, sizeof(KingstarAPI::CThostFtdcBrokerUserPasswordField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcBrokerUserPasswordField));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //����
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//����
PyObject * new_CThostFtdcOrderField(KingstarAPI::CThostFtdcOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcOrderField", (char*)"cisissssdiscisissiciccscidssisiccsssssissssssssisiscics",
p->ContingentCondition, p->NotifySequence, p->ActiveUserID, p->VolumeTraded, p->UserProductInfo, p->CombOffsetFlag, p->TraderID, p->UserID, p->LimitPrice, p->UserForceClose, p->RelativeOrderSysID, p->Direction, p->InstallID, p->ParticipantID, p->VolumeTotalOriginal, p->ExchangeInstID, p->ClientID, p->VolumeTotal, p->OrderPriceType, p->SessionID, p->TimeCondition, p->OrderStatus, p->OrderSysID, p->OrderSubmitStatus, p->IsAutoSuspend, p->StopPrice, p->InstrumentID, p->ExchangeID, p->MinVolume, p->StatusMsg, p->SettlementID, p->ForceCloseReason, p->OrderType, p->UpdateTime, p->TradingDay, p->ActiveTime, p->BrokerID, p->InsertTime, p->FrontID, p->SuspendTime, p->ClearingPartID, p->CombHedgeFlag, p->CancelTime, p->GTDDate, p->OrderLocalID, p->BusinessUnit, p->InsertDate, p->SequenceNo, p->OrderRef, p->BrokerOrderSeq, p->InvestorID, p->VolumeCondition, p->RequestID, p->OrderSource, p->ActiveTraderID);
}
KingstarAPI::CThostFtdcOrderField * from_CThostFtdcOrderField(PyObject * p){
  KingstarAPI::CThostFtdcOrderField *t = (KingstarAPI::CThostFtdcOrderField *)calloc(1, sizeof(KingstarAPI::CThostFtdcOrderField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcOrderField));
  //��������
  //enum����
  //THOST_FTDC_CC_BidPriceGreaterThanStopPrice -> 'D', ��һ�۴���������
  //THOST_FTDC_CC_AskPriceLesserEqualStopPrice -> 'C', ��һ��С�ڵ���������
  //THOST_FTDC_CC_AskPriceGreaterThanStopPrice -> '9', ��һ�۴���������
  //THOST_FTDC_CC_LastPriceLesserThanStopPrice -> '7', ���¼�С��������
  //THOST_FTDC_CC_LastPriceGreaterEqualStopPrice -> '6', ���¼۴��ڵ���������
  //THOST_FTDC_CC_BidPriceGreaterEqualStopPrice -> 'E', ��һ�۴��ڵ���������
  //THOST_FTDC_CC_LastPriceLesserEqualStopPrice -> '8', ���¼�С�ڵ���������
  //THOST_FTDC_CC_TouchProfit -> '3', ֹӮ
  //THOST_FTDC_CC_ParkedOrder -> '4', Ԥ��
  //THOST_FTDC_CC_AskPriceGreaterEqualStopPrice -> 'A', ��һ�۴��ڵ���������
  //THOST_FTDC_CC_BidPriceLesserEqualStopPrice -> 'H', ��һ��С�ڵ���������
  //THOST_FTDC_CC_LastPriceGreaterThanStopPrice -> '5', ���¼۴���������
  //THOST_FTDC_CC_BidPriceLesserThanStopPrice -> 'F', ��һ��С��������
  //THOST_FTDC_CC_AskPriceLesserThanStopPrice -> 'B', ��һ��С��������
  //THOST_FTDC_CC_Immediately -> '1', ����
  //THOST_FTDC_CC_Touch -> '2', ֹ��
  t->ContingentCondition =   PyString_AsString(PyObject_GetAttrString(p, "ContingentCondition"))[0];
  //������ʾ���
  t->NotifySequence =   PyInt_AsLong(PyObject_GetAttrString(p, "NotifySequence"));
  //�����û�����
  strcpy(t->ActiveUserID, PyString_AsString(PyObject_GetAttrString(p, "ActiveUserID")));
  //��ɽ�����
  t->VolumeTraded =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTraded"));
  //�û��˲�Ʒ��Ϣ
  strcpy(t->UserProductInfo, PyString_AsString(PyObject_GetAttrString(p, "UserProductInfo")));
  //��Ͽ�ƽ��־
  strcpy(t->CombOffsetFlag, PyString_AsString(PyObject_GetAttrString(p, "CombOffsetFlag")));
  //����������Ա����
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //�۸�
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //�û�ǿ����־
  t->UserForceClose =   PyInt_AsLong(PyObject_GetAttrString(p, "UserForceClose"));
  //��ر���
  strcpy(t->RelativeOrderSysID, PyString_AsString(PyObject_GetAttrString(p, "RelativeOrderSysID")));
  //��������
  //enum����
  //THOST_FTDC_D_Buy -> '0', ��
  //THOST_FTDC_D_Sell -> '1', ��
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //��Ա����
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //����
  t->VolumeTotalOriginal =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
  //��Լ�ڽ������Ĵ���
  strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
  //�ͻ�����
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //ʣ������
  t->VolumeTotal =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotal"));
  //�����۸�����
  //enum����
  //THOST_FTDC_OPT_AskPrice1PlusTwoTicks -> 'A', ��һ�۸����ϸ�2��ticks
  //THOST_FTDC_OPT_LastPricePlusTwoTicks -> '6', ���¼۸����ϸ�2��ticks
  //THOST_FTDC_OPT_AskPrice1PlusOneTicks -> '9', ��һ�۸����ϸ�1��ticks
  //THOST_FTDC_OPT_BidPrice1 -> 'C', ��һ��
  //THOST_FTDC_OPT_LimitPrice -> '2', �޼�
  //THOST_FTDC_OPT_LastPricePlusOneTicks -> '5', ���¼۸����ϸ�1��ticks
  //THOST_FTDC_OPT_LastPrice -> '4', ���¼�
  //THOST_FTDC_OPT_AskPrice1 -> '8', ��һ��
  //THOST_FTDC_OPT_AskPrice1PlusThreeTicks -> 'B', ��һ�۸����ϸ�3��ticks
  //THOST_FTDC_OPT_AnyPrice -> '1', �����
  //THOST_FTDC_OPT_BestPrice -> '3', ���ż�
  //THOST_FTDC_OPT_LastPricePlusThreeTicks -> '7', ���¼۸����ϸ�3��ticks
  //THOST_FTDC_OPT_BidPrice1PlusOneTicks -> 'D', ��һ�۸����ϸ�1��ticks
  //THOST_FTDC_OPT_BidPrice1PlusTwoTicks -> 'E', ��һ�۸����ϸ�2��ticks
  //THOST_FTDC_OPT_BidPrice1PlusThreeTicks -> 'F', ��һ�۸����ϸ�3��ticks
  t->OrderPriceType =   PyString_AsString(PyObject_GetAttrString(p, "OrderPriceType"))[0];
  //�Ự���
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //��Ч������
  //enum����
  //THOST_FTDC_TC_GTC -> '5', ����ǰ��Ч
  //THOST_FTDC_TC_GTD -> '4', ָ������ǰ��Ч
  //THOST_FTDC_TC_GFD -> '3', ������Ч
  //THOST_FTDC_TC_GFA -> '6', ���Ͼ�����Ч
  //THOST_FTDC_TC_IOC -> '1', ������ɣ�������
  //THOST_FTDC_TC_GFS -> '2', ������Ч
  t->TimeCondition =   PyString_AsString(PyObject_GetAttrString(p, "TimeCondition"))[0];
  //����״̬
  //enum����
  //THOST_FTDC_OST_NotTouched -> 'b', ��δ����
  //THOST_FTDC_OST_NoTradeQueueing -> '3', δ�ɽ����ڶ�����
  //THOST_FTDC_OST_AllTraded -> '0', ȫ���ɽ�
  //THOST_FTDC_OST_NoTradeNotQueueing -> '4', δ�ɽ����ڶ�����
  //THOST_FTDC_OST_Unknown -> 'a', δ֪
  //THOST_FTDC_OST_PartTradedQueueing -> '1', ���ֳɽ����ڶ�����
  //THOST_FTDC_OST_PartTradedNotQueueing -> '2', ���ֳɽ����ڶ�����
  //THOST_FTDC_OST_Touched -> 'c', �Ѵ���
  //THOST_FTDC_OST_Canceled -> '5', ����
  t->OrderStatus =   PyString_AsString(PyObject_GetAttrString(p, "OrderStatus"))[0];
  //�������
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //�����ύ״̬
  //enum����
  //THOST_FTDC_OSS_InsertSubmitted -> '0', �Ѿ��ύ
  //THOST_FTDC_OSS_InsertRejected -> '4', �����Ѿ����ܾ�
  //THOST_FTDC_OSS_CancelSubmitted -> '1', �����Ѿ��ύ
  //THOST_FTDC_OSS_CancelRejected -> '5', �����Ѿ����ܾ�
  //THOST_FTDC_OSS_Accepted -> '3', �Ѿ�����
  //THOST_FTDC_OSS_ModifySubmitted -> '2', �޸��Ѿ��ύ
  //THOST_FTDC_OSS_ModifyRejected -> '6', �ĵ��Ѿ����ܾ�
  t->OrderSubmitStatus =   PyString_AsString(PyObject_GetAttrString(p, "OrderSubmitStatus"))[0];
  //�Զ������־
  t->IsAutoSuspend =   PyInt_AsLong(PyObject_GetAttrString(p, "IsAutoSuspend"));
  //ֹ���
  t->StopPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StopPrice"));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //��С�ɽ���
  t->MinVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MinVolume"));
  //״̬��Ϣ
  strcpy(t->StatusMsg, PyString_AsString(PyObject_GetAttrString(p, "StatusMsg")));
  //������
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //ǿƽԭ��
  //enum����
  //THOST_FTDC_FCC_PersonDeliv -> '7', ��Ȼ���ٽ�����
  //THOST_FTDC_FCC_ClientOverPositionLimit -> '2', �ͻ�����
  //THOST_FTDC_FCC_NotForceClose -> '0', ��ǿƽ
  //THOST_FTDC_FCC_NotMultiple -> '4', �ֲַ�������
  //THOST_FTDC_FCC_MemberOverPositionLimit -> '3', ��Ա����
  //THOST_FTDC_FCC_LackDeposit -> '1', �ʽ���
  //THOST_FTDC_FCC_Other -> '6', ����
  //THOST_FTDC_FCC_Violation -> '5', Υ��
  t->ForceCloseReason =   PyString_AsString(PyObject_GetAttrString(p, "ForceCloseReason"))[0];
  //��������
  //enum����
  //THOST_FTDC_ORDT_Combination -> '3', ��ϱ���
  //THOST_FTDC_ORDT_Normal -> '0', ����
  //THOST_FTDC_ORDT_DeriveFromCombination -> '2', �������
  //THOST_FTDC_ORDT_DeriveFromQuote -> '1', ��������
  //THOST_FTDC_ORDT_Swap -> '5', ������
  //THOST_FTDC_ORDT_ConditionalOrder -> '4', ������
  t->OrderType =   PyString_AsString(PyObject_GetAttrString(p, "OrderType"))[0];
  //����޸�ʱ��
  strcpy(t->UpdateTime, PyString_AsString(PyObject_GetAttrString(p, "UpdateTime")));
  //������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //����ʱ��
  strcpy(t->ActiveTime, PyString_AsString(PyObject_GetAttrString(p, "ActiveTime")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //ί��ʱ��
  strcpy(t->InsertTime, PyString_AsString(PyObject_GetAttrString(p, "InsertTime")));
  //ǰ�ñ��
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //����ʱ��
  strcpy(t->SuspendTime, PyString_AsString(PyObject_GetAttrString(p, "SuspendTime")));
  //�����Ա���
  strcpy(t->ClearingPartID, PyString_AsString(PyObject_GetAttrString(p, "ClearingPartID")));
  //���Ͷ���ױ���־
  strcpy(t->CombHedgeFlag, PyString_AsString(PyObject_GetAttrString(p, "CombHedgeFlag")));
  //����ʱ��
  strcpy(t->CancelTime, PyString_AsString(PyObject_GetAttrString(p, "CancelTime")));
  //GTD����
  strcpy(t->GTDDate, PyString_AsString(PyObject_GetAttrString(p, "GTDDate")));
  //���ر������
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //ҵ��Ԫ
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //��������
  strcpy(t->InsertDate, PyString_AsString(PyObject_GetAttrString(p, "InsertDate")));
  //���
  t->SequenceNo =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //��������
  strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
  //���͹�˾�������
  t->BrokerOrderSeq =   PyInt_AsLong(PyObject_GetAttrString(p, "BrokerOrderSeq"));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //�ɽ�������
  //enum����
  //THOST_FTDC_VC_MV -> '2', ��С����
  //THOST_FTDC_VC_CV -> '3', ȫ������
  //THOST_FTDC_VC_AV -> '1', �κ�����
  t->VolumeCondition =   PyString_AsString(PyObject_GetAttrString(p, "VolumeCondition"))[0];
  //������
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //������Դ
  //enum����
  //THOST_FTDC_OSRC_Participant -> '0', ���Բ�����
  //THOST_FTDC_OSRC_Administrator -> '1', ���Թ���Ա
  t->OrderSource =   PyString_AsString(PyObject_GetAttrString(p, "OrderSource"))[0];
  //����޸Ľ���������Ա����
  strcpy(t->ActiveTraderID, PyString_AsString(PyObject_GetAttrString(p, "ActiveTraderID")));

  return t;
};

//��ѯ��Ϻ�Լ����
PyObject * new_CThostFtdcQrySyncStatusField(KingstarAPI::CThostFtdcQrySyncStatusField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQrySyncStatusField", (char*)"s",
p->TradingDay);
}
KingstarAPI::CThostFtdcQrySyncStatusField * from_CThostFtdcQrySyncStatusField(PyObject * p){
  KingstarAPI::CThostFtdcQrySyncStatusField *t = (KingstarAPI::CThostFtdcQrySyncStatusField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQrySyncStatusField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQrySyncStatusField));
  //������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));

  return t;
};

//��ѯ���󱨵�����
PyObject * new_CThostFtdcQryErrOrderActionField(KingstarAPI::CThostFtdcQryErrOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryErrOrderActionField", (char*)"ss",
p->InvestorID, p->BrokerID);
}
KingstarAPI::CThostFtdcQryErrOrderActionField * from_CThostFtdcQryErrOrderActionField(PyObject * p){
  KingstarAPI::CThostFtdcQryErrOrderActionField *t = (KingstarAPI::CThostFtdcQryErrOrderActionField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryErrOrderActionField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryErrOrderActionField));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//�û���̬���Ʋ���
PyObject * new_CThostFtdcBrokerUserOTPParamField(KingstarAPI::CThostFtdcBrokerUserOTPParamField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerUserOTPParamField", (char*)"iisssssc",
p->LastDrift, p->LastSuccess, p->SerialNumber, p->UserID, p->AuthKey, p->BrokerID, p->OTPVendorsID, p->OTPType);
}
KingstarAPI::CThostFtdcBrokerUserOTPParamField * from_CThostFtdcBrokerUserOTPParamField(PyObject * p){
  KingstarAPI::CThostFtdcBrokerUserOTPParamField *t = (KingstarAPI::CThostFtdcBrokerUserOTPParamField *)calloc(1, sizeof(KingstarAPI::CThostFtdcBrokerUserOTPParamField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcBrokerUserOTPParamField));
  //Ư��ֵ
  t->LastDrift =   PyInt_AsLong(PyObject_GetAttrString(p, "LastDrift"));
  //�ɹ�ֵ
  t->LastSuccess =   PyInt_AsLong(PyObject_GetAttrString(p, "LastSuccess"));
  //��̬�������к�
  strcpy(t->SerialNumber, PyString_AsString(PyObject_GetAttrString(p, "SerialNumber")));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //������Կ
  strcpy(t->AuthKey, PyString_AsString(PyObject_GetAttrString(p, "AuthKey")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //��̬�����ṩ��
  strcpy(t->OTPVendorsID, PyString_AsString(PyObject_GetAttrString(p, "OTPVendorsID")));
  //��̬��������
  //enum����
  //THOST_FTDC_OTP_NONE -> '0', �޶�̬����
  //THOST_FTDC_OTP_TOTP -> '1', ʱ������
  t->OTPType =   PyString_AsString(PyObject_GetAttrString(p, "OTPType"))[0];

  return t;
};

//��Լ��֤���ʵ���
PyObject * new_CThostFtdcInstrumentMarginRateAdjustField(KingstarAPI::CThostFtdcInstrumentMarginRateAdjustField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInstrumentMarginRateAdjustField", (char*)"sddicsscdd",
p->InstrumentID, p->ShortMarginRatioByMoney, p->LongMarginRatioByMoney, p->IsRelative, p->HedgeFlag, p->InvestorID, p->BrokerID, p->InvestorRange, p->ShortMarginRatioByVolume, p->LongMarginRatioByVolume);
}
KingstarAPI::CThostFtdcInstrumentMarginRateAdjustField * from_CThostFtdcInstrumentMarginRateAdjustField(PyObject * p){
  KingstarAPI::CThostFtdcInstrumentMarginRateAdjustField *t = (KingstarAPI::CThostFtdcInstrumentMarginRateAdjustField *)calloc(1, sizeof(KingstarAPI::CThostFtdcInstrumentMarginRateAdjustField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcInstrumentMarginRateAdjustField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //��ͷ��֤����
  t->ShortMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByMoney"));
  //��ͷ��֤����
  t->LongMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByMoney"));
  //�Ƿ���Խ�������ȡ
  t->IsRelative =   PyInt_AsLong(PyObject_GetAttrString(p, "IsRelative"));
  //Ͷ���ױ���־
  //enum����
  //THOST_FTDC_HF_Speculation -> '1', Ͷ��
  //THOST_FTDC_HF_Arbitrage -> '2', ����
  //THOST_FTDC_HF_Hedge -> '3', �ױ�
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //Ͷ���߷�Χ
  //enum����
  //THOST_FTDC_IR_All -> '1', ����
  //THOST_FTDC_IR_Group -> '2', Ͷ������
  //THOST_FTDC_IR_Single -> '3', ��һͶ����
  t->InvestorRange =   PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
  //��ͷ��֤���
  t->ShortMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByVolume"));
  //��ͷ��֤���
  t->LongMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByVolume"));

  return t;
};

//��ѯ������
PyObject * new_CTKSConditionalOrderQuery(CTKSConditionalOrderQuery * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CTKSConditionalOrderQuery", (char*)"ssi",
p->InvestorID, p->BrokerID, p->ConditionalOrderID);
}
CTKSConditionalOrderQuery * from_CTKSConditionalOrderQuery(PyObject * p){
CTKSConditionalOrderQuery *t = (CTKSConditionalOrderQuery *)calloc(1, sizeof(CTKSConditionalOrderQuery));
  memset(t,0,sizeof(CTKSConditionalOrderQuery));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //Ӫҵ������
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //���������
  t->ConditionalOrderID =   PyInt_AsLong(PyObject_GetAttrString(p, "ConditionalOrderID"));

  return t;
};

//��ѯͶ����
PyObject * new_CThostFtdcQryInvestorField(KingstarAPI::CThostFtdcQryInvestorField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInvestorField", (char*)"ss",
p->InvestorID, p->BrokerID);
}
KingstarAPI::CThostFtdcQryInvestorField * from_CThostFtdcQryInvestorField(PyObject * p){
  KingstarAPI::CThostFtdcQryInvestorField *t = (KingstarAPI::CThostFtdcQryInvestorField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryInvestorField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryInvestorField));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//ָ���ĺ�Լ
PyObject * new_CThostFtdcSpecificInstrumentField(KingstarAPI::CThostFtdcSpecificInstrumentField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSpecificInstrumentField", (char*)"s",
p->InstrumentID);
}
KingstarAPI::CThostFtdcSpecificInstrumentField * from_CThostFtdcSpecificInstrumentField(PyObject * p){
  KingstarAPI::CThostFtdcSpecificInstrumentField *t = (KingstarAPI::CThostFtdcSpecificInstrumentField *)calloc(1, sizeof(KingstarAPI::CThostFtdcSpecificInstrumentField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcSpecificInstrumentField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));

  return t;
};

//���������ġ�������
PyObject * new_CThostFtdcMarketDataAsk45Field(KingstarAPI::CThostFtdcMarketDataAsk45Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataAsk45Field", (char*)"ddii",
p->AskPrice5, p->AskPrice4, p->AskVolume5, p->AskVolume4);
}
KingstarAPI::CThostFtdcMarketDataAsk45Field * from_CThostFtdcMarketDataAsk45Field(PyObject * p){
  KingstarAPI::CThostFtdcMarketDataAsk45Field *t = (KingstarAPI::CThostFtdcMarketDataAsk45Field *)calloc(1, sizeof(KingstarAPI::CThostFtdcMarketDataAsk45Field));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcMarketDataAsk45Field));
  //��������
  t->AskPrice5 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice5"));
  //��������
  t->AskPrice4 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice4"));
  //��������
  t->AskVolume5 =   PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume5"));
  //��������
  t->AskVolume4 =   PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume4"));

  return t;
};

//�ʽ��˻���������
PyObject * new_CThostFtdcTradingAccountPasswordUpdateField(KingstarAPI::CThostFtdcTradingAccountPasswordUpdateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTradingAccountPasswordUpdateField", (char*)"ssss",
p->NewPassword, p->OldPassword, p->BrokerID, p->AccountID);
}
KingstarAPI::CThostFtdcTradingAccountPasswordUpdateField * from_CThostFtdcTradingAccountPasswordUpdateField(PyObject * p){
  KingstarAPI::CThostFtdcTradingAccountPasswordUpdateField *t = (KingstarAPI::CThostFtdcTradingAccountPasswordUpdateField *)calloc(1, sizeof(KingstarAPI::CThostFtdcTradingAccountPasswordUpdateField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcTradingAccountPasswordUpdateField));
  //�µĿ���
  strcpy(t->NewPassword, PyString_AsString(PyObject_GetAttrString(p, "NewPassword")));
  //ԭ���Ŀ���
  strcpy(t->OldPassword, PyString_AsString(PyObject_GetAttrString(p, "OldPassword")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //Ͷ�����ʺ�
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));

  return t;
};

//��ѯָ����ˮ�ŵĽ��׽����Ӧ
PyObject * new_CThostFtdcRspQueryTradeResultBySerialField(KingstarAPI::CThostFtdcRspQueryTradeResultBySerialField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspQueryTradeResultBySerialField", (char*)"ssssssssssisiissscsissscds",
p->OriginReturnCode, p->OriginDescrInfoForReturnCode, p->BrokerBranchID, p->BankPassWord, p->TradeTime, p->AccountID, p->BankAccount, p->TradeCode, p->BankBranchID, p->RefrenceIssure, p->SessionID, p->BankID, p->PlateSerial, p->ErrorID, p->BankSerial, p->TradingDay, p->BrokerID, p->RefrenceIssureType, p->Password, p->Reference, p->TradeDate, p->CurrencyID, p->ErrorMsg, p->LastFragment, p->TradeAmount, p->Digest);
}
KingstarAPI::CThostFtdcRspQueryTradeResultBySerialField * from_CThostFtdcRspQueryTradeResultBySerialField(PyObject * p){
  KingstarAPI::CThostFtdcRspQueryTradeResultBySerialField *t = (KingstarAPI::CThostFtdcRspQueryTradeResultBySerialField *)calloc(1, sizeof(KingstarAPI::CThostFtdcRspQueryTradeResultBySerialField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcRspQueryTradeResultBySerialField));
  //ԭʼ���ش���
  strcpy(t->OriginReturnCode, PyString_AsString(PyObject_GetAttrString(p, "OriginReturnCode")));
  //ԭʼ����������
  strcpy(t->OriginDescrInfoForReturnCode, PyString_AsString(PyObject_GetAttrString(p, "OriginDescrInfoForReturnCode")));
  //���̷�֧��������
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //��������
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //����ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //Ͷ�����ʺ�
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //�����ʺ�
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //ҵ������
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //���з�֧��������
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //����ˮ�ŷ����߻�������
  strcpy(t->RefrenceIssure, PyString_AsString(PyObject_GetAttrString(p, "RefrenceIssure")));
  //�Ự��
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //����ƽ̨��Ϣ��ˮ��
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //�������
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //������ˮ��
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //����ϵͳ����
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //���̴���
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //����ˮ�ŷ����ߵĻ�������
  //enum����
  //THOST_FTDC_TS_Future -> '1', ����
  //THOST_FTDC_TS_Bank -> '0', ����
  //THOST_FTDC_TS_Store -> '2', ȯ��
  t->RefrenceIssureType =   PyString_AsString(PyObject_GetAttrString(p, "RefrenceIssureType"))[0];
  //�ڻ�����
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //��ˮ��
  t->Reference =   PyInt_AsLong(PyObject_GetAttrString(p, "Reference"));
  //��������
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //���ִ���
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //������Ϣ
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //����Ƭ��־
  //enum����
  //THOST_FTDC_LF_No -> '1', ��������Ƭ
  //THOST_FTDC_LF_Yes -> '0', ������Ƭ
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //ת�ʽ��
  t->TradeAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
  //ժҪ
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

  return t;
};

//ֹ��ֹӯ������
PyObject * new_CTKSProfitAndLossOrderOperResultField(CTKSProfitAndLossOrderOperResultField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CTKSProfitAndLossOrderOperResultField", (char*)"dcsdsddcissssddicsccdsscsciss",
p->TakeProfitPrice, p->CombOffsetFlag, p->UserID, p->LimitPrice, p->ConditionalOrderFormTime, p->StopLossPrice, p->FloatLimitPrice, p->Direction, p->VolumeTotalOriginal, p->ClientID, p->InstrumentID, p->ExchangeID, p->InvestorName, p->OpenTradePrice, p->Figures, p->ProfitAndLossOrderID, p->SpringType, p->OrderFormTime, p->CombHedgeFlag, p->OffsetValue, p->LastPrice, p->OrderLocalID, p->BusinessUnit, p->CloseMode, p->InvestorID, p->ProfitAndLossOrderStatus, p->ConditionalOrderID, p->BrokerID, p->ProfitAndLossOrderFormTime);
}
CTKSProfitAndLossOrderOperResultField * from_CTKSProfitAndLossOrderOperResultField(PyObject * p){
CTKSProfitAndLossOrderOperResultField *t = (CTKSProfitAndLossOrderOperResultField *)calloc(1, sizeof(CTKSProfitAndLossOrderOperResultField));
  memset(t,0,sizeof(CTKSProfitAndLossOrderOperResultField));
  //ֹӯ��
  t->TakeProfitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TakeProfitPrice"));
  //��ƽ��־
  //enum����
  //THOST_FTDC_OF_CloseToday -> '3', ƽ��
  //THOST_FTDC_OF_ForceOff -> '5', ǿ��
  //THOST_FTDC_OF_LocalForceClose -> '6', ����ǿƽ
  //THOST_FTDC_OF_Close -> '1', ƽ��
  //THOST_FTDC_OF_Open -> '0', ����
  //THOST_FTDC_OF_CloseYesterday -> '4', ƽ��
  //THOST_FTDC_OF_ForceClose -> '2', ǿƽ
  t->CombOffsetFlag =   PyString_AsString(PyObject_GetAttrString(p, "CombOffsetFlag"))[0];
  //����Ա
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //�۸�
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //����������ʱ��
  strcpy(t->ConditionalOrderFormTime, PyString_AsString(PyObject_GetAttrString(p, "ConditionalOrderFormTime")));
  //ֹ���
  t->StopLossPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StopLossPrice"));
  //����ֹ���
  t->FloatLimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FloatLimitPrice"));
  //��������
  //enum����
  //THOST_FTDC_D_Buy -> '0', ��
  //THOST_FTDC_D_Sell -> '1', ��
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //����
  t->VolumeTotalOriginal =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
  //�ͻ�����
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //Ͷ��������
  strcpy(t->InvestorName, PyString_AsString(PyObject_GetAttrString(p, "InvestorName")));
  //���ֳɽ��۸�
  t->OpenTradePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenTradePrice"));
  //ƽ�ַ���Ӽ���λ����ƽ�ַ�ʽ=1��2ʱ��Ч��
  t->Figures =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Figures"));
  //ֹ��ֹӯ����
  t->ProfitAndLossOrderID =   PyInt_AsLong(PyObject_GetAttrString(p, "ProfitAndLossOrderID"));
  //�����������۸�����
  //enum����
  //KSPL_SPRING_LastPrice -> '0', ���¼�
  //KSPL_SPRING_SalePrice -> '1', ������
  t->SpringType =   PyString_AsString(PyObject_GetAttrString(p, "SpringType"))[0];
  //����ί�е�ʱ��
  strcpy(t->OrderFormTime, PyString_AsString(PyObject_GetAttrString(p, "OrderFormTime")));
  //Ͷ���ױ���־
  //enum����
  //THOST_FTDC_HF_Speculation -> '1', Ͷ��
  //THOST_FTDC_HF_Arbitrage -> '2', ����
  //THOST_FTDC_HF_Hedge -> '3', �ױ�
  t->CombHedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "CombHedgeFlag"))[0];
  //����ӯ��۵ķ�ʽ
  //enum����
  //KSPL_OffsetValue_TradePrice -> '1', ���ֳɽ��۵����ƫ��ֵ
  //KSPL_OffsetValue_TermPrice -> '0', ָ��ֵ
  t->OffsetValue =   PyString_AsString(PyObject_GetAttrString(p, "OffsetValue"))[0];
  //���鴥��ʱ�����¼�
  t->LastPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LastPrice"));
  //���ر������
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //ҵ��Ԫ
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //ƽ�ַ�ʽ
  //enum����
  //KSPL_Close_SalePrice -> '1', �Ӽ�������
  //KSPL_Close_MarketPrice -> '0', �м�
  //KSPL_Close_LastPrice -> '2', �Ӽ����¼�
  t->CloseMode =   PyString_AsString(PyObject_GetAttrString(p, "CloseMode"))[0];
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //ֹ��ֹӯ��״̬
  //enum����
  //KSCOS_OrderStatus_WAITSELECT -> '6', �ȴ�ѡ��
  //KSCOS_OrderStatus_Deleted -> '2', ɾ��
  //KSCOS_OrderStatus_SENDTIMEOUT -> '4', ���ͳ�ʱ
  //KSCOS_OrderStatus_TOUCHEDNOSEND -> '3', �Ѵ���δ����
  //KSCOS_OrderStatus_PAUSENOTOUCHED -> '0', ��ͣ
  //KSCOS_OrderStatus_SENDSUCCESS -> '5', ���ͳɹ�
  //KSCOS_OrderStatus_SELECTABORT -> '8', ѡ����ֹ
  //KSCOS_OrderStatus_ACTIVENOTOUCHED -> '1', δ����
  //KSCOS_OrderStatus_SELECTSKIP -> '7', ѡ������
  t->ProfitAndLossOrderStatus =   PyString_AsString(PyObject_GetAttrString(p, "ProfitAndLossOrderStatus"))[0];
  //���������
  t->ConditionalOrderID =   PyInt_AsLong(PyObject_GetAttrString(p, "ConditionalOrderID"));
  //Ӫҵ������
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //����ֹ��ֹӯ��ʱ��
  strcpy(t->ProfitAndLossOrderFormTime, PyString_AsString(PyObject_GetAttrString(p, "ProfitAndLossOrderFormTime")));

  return t;
};

//��Լ��������
PyObject * new_CThostFtdcInstrumentCommissionRateField(KingstarAPI::CThostFtdcInstrumentCommissionRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInstrumentCommissionRateField", (char*)"sdddsscddd",
p->InstrumentID, p->OpenRatioByMoney, p->CloseRatioByVolume, p->CloseTodayRatioByMoney, p->InvestorID, p->BrokerID, p->InvestorRange, p->CloseRatioByMoney, p->OpenRatioByVolume, p->CloseTodayRatioByVolume);
}
KingstarAPI::CThostFtdcInstrumentCommissionRateField * from_CThostFtdcInstrumentCommissionRateField(PyObject * p){
  KingstarAPI::CThostFtdcInstrumentCommissionRateField *t = (KingstarAPI::CThostFtdcInstrumentCommissionRateField *)calloc(1, sizeof(KingstarAPI::CThostFtdcInstrumentCommissionRateField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcInstrumentCommissionRateField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //������������
  t->OpenRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenRatioByMoney"));
  //ƽ��������
  t->CloseRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseRatioByVolume"));
  //ƽ����������
  t->CloseTodayRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseTodayRatioByMoney"));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //Ͷ���߷�Χ
  //enum����
  //THOST_FTDC_IR_All -> '1', ����
  //THOST_FTDC_IR_Group -> '2', Ͷ������
  //THOST_FTDC_IR_Single -> '3', ��һͶ����
  t->InvestorRange =   PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
  //ƽ����������
  t->CloseRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseRatioByMoney"));
  //����������
  t->OpenRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenRatioByVolume"));
  //ƽ��������
  t->CloseTodayRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseTodayRatioByVolume"));

  return t;
};

//��ѯ��ϳֲ���ϸ
PyObject * new_CThostFtdcQryInvestorPositionCombineDetailField(KingstarAPI::CThostFtdcQryInvestorPositionCombineDetailField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInvestorPositionCombineDetailField", (char*)"sss",
p->InvestorID, p->BrokerID, p->CombInstrumentID);
}
KingstarAPI::CThostFtdcQryInvestorPositionCombineDetailField * from_CThostFtdcQryInvestorPositionCombineDetailField(PyObject * p){
  KingstarAPI::CThostFtdcQryInvestorPositionCombineDetailField *t = (KingstarAPI::CThostFtdcQryInvestorPositionCombineDetailField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryInvestorPositionCombineDetailField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryInvestorPositionCombineDetailField));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //��ϳֲֺ�Լ����
  strcpy(t->CombInstrumentID, PyString_AsString(PyObject_GetAttrString(p, "CombInstrumentID")));

  return t;
};

//��ѯת������
PyObject * new_CThostFtdcQryTransferBankField(KingstarAPI::CThostFtdcQryTransferBankField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryTransferBankField", (char*)"ss",
p->BankBrchID, p->BankID);
}
KingstarAPI::CThostFtdcQryTransferBankField * from_CThostFtdcQryTransferBankField(PyObject * p){
  KingstarAPI::CThostFtdcQryTransferBankField *t = (KingstarAPI::CThostFtdcQryTransferBankField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryTransferBankField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryTransferBankField));
  //���з����Ĵ���
  strcpy(t->BankBrchID, PyString_AsString(PyObject_GetAttrString(p, "BankBrchID")));
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));

  return t;
};

//����ת�˽�����ˮ��
PyObject * new_CThostFtdcTransferSerialField(KingstarAPI::CThostFtdcTransferSerialField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferSerialField", (char*)"ssssssssisicisssscssdcissddc",
p->BankNewAccount, p->BrokerBranchID, p->TradeTime, p->OperatorCode, p->AccountID, p->BankAccount, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->PlateSerial, p->FutureAccType, p->ErrorID, p->BankSerial, p->IdentifiedCardNo, p->TradingDay, p->BrokerID, p->IdCardType, p->TradeDate, p->CurrencyID, p->BrokerFee, p->BankAccType, p->FutureSerial, p->InvestorID, p->ErrorMsg, p->CustFee, p->TradeAmount, p->AvailabilityFlag);
}
KingstarAPI::CThostFtdcTransferSerialField * from_CThostFtdcTransferSerialField(PyObject * p){
  KingstarAPI::CThostFtdcTransferSerialField *t = (KingstarAPI::CThostFtdcTransferSerialField *)calloc(1, sizeof(KingstarAPI::CThostFtdcTransferSerialField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcTransferSerialField));
  //�������ʺ�
  strcpy(t->BankNewAccount, PyString_AsString(PyObject_GetAttrString(p, "BankNewAccount")));
  //���̷�֧��������
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //����ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //����Ա
  strcpy(t->OperatorCode, PyString_AsString(PyObject_GetAttrString(p, "OperatorCode")));
  //Ͷ�����ʺ�
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //�����ʺ�
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //���״���
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //���з�֧��������
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //�Ự���
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //���б���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //ƽ̨��ˮ��
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //�ڻ���˾�ʺ�����
  //enum����
  //THOST_FTDC_FAT_BankBook -> '1', ���д���
  //THOST_FTDC_FAT_SavingCard -> '2', ���
  //THOST_FTDC_FAT_CreditCard -> '3', ���ÿ�
  t->FutureAccType =   PyString_AsString(PyObject_GetAttrString(p, "FutureAccType"))[0];
  //�������
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //������ˮ��
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //֤������
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //��������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //�ڻ���˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //֤������
  //enum����
  //THOST_FTDC_ICT_LicenseNo -> '9', Ӫҵִ�պ�
  //THOST_FTDC_ICT_TaxNo -> 'A', ˰��ǼǺ�
  //THOST_FTDC_ICT_OfficerIDCard -> '2', ����֤
  //THOST_FTDC_ICT_IDCard -> '1', ���֤
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', ̨��֤
  //THOST_FTDC_ICT_OtherCard -> 'x', ����֤��
  //THOST_FTDC_ICT_PoliceIDCard -> '3', ����֤
  //THOST_FTDC_ICT_Passport -> '6', ����
  //THOST_FTDC_ICT_EID -> '0', ��֯��������
  //THOST_FTDC_ICT_HomeComingCard -> '8', ����֤
  //THOST_FTDC_ICT_HouseholdRegister -> '5', ���ڲ�
  //THOST_FTDC_ICT_SoldierIDCard -> '4', ʿ��֤
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //���׷�������
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //���ִ���
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //Ӧ���ڻ���˾����
  t->BrokerFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BrokerFee"));
  //�����ʺ�����
  //enum����
  //THOST_FTDC_BAT_SavingCard -> '2', ���
  //THOST_FTDC_BAT_CreditCard -> '3', ���ÿ�
  //THOST_FTDC_BAT_BankBook -> '1', ���д���
  t->BankAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
  //�ڻ���˾��ˮ��
  t->FutureSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //������Ϣ
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //Ӧ�տͻ�����
  t->CustFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));
  //���׽��
  t->TradeAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
  //��Ч��־
  //enum����
  //THOST_FTDC_AVAF_Invalid -> '0', δȷ��
  //THOST_FTDC_AVAF_Valid -> '1', ��Ч
  //THOST_FTDC_AVAF_Repeal -> '2', ����
  t->AvailabilityFlag =   PyString_AsString(PyObject_GetAttrString(p, "AvailabilityFlag"))[0];

  return t;
};

//��������֤���ʵ���
PyObject * new_CThostFtdcExchangeMarginRateAdjustField(KingstarAPI::CThostFtdcExchangeMarginRateAdjustField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcExchangeMarginRateAdjustField", (char*)"sddddddddcddsdd",
p->InstrumentID, p->ShortMarginRatioByMoney, p->ExchLongMarginRatioByMoney, p->ExchShortMarginRatioByMoney, p->LongMarginRatioByMoney, p->ExchShortMarginRatioByVolume, p->ExchLongMarginRatioByVolume, p->NoShortMarginRatioByMoney, p->NoLongMarginRatioByMoney, p->HedgeFlag, p->NoLongMarginRatioByVolume, p->NoShortMarginRatioByVolume, p->BrokerID, p->ShortMarginRatioByVolume, p->LongMarginRatioByVolume);
}
KingstarAPI::CThostFtdcExchangeMarginRateAdjustField * from_CThostFtdcExchangeMarginRateAdjustField(PyObject * p){
  KingstarAPI::CThostFtdcExchangeMarginRateAdjustField *t = (KingstarAPI::CThostFtdcExchangeMarginRateAdjustField *)calloc(1, sizeof(KingstarAPI::CThostFtdcExchangeMarginRateAdjustField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcExchangeMarginRateAdjustField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //���潻����Ͷ���߿�ͷ��֤����
  t->ShortMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByMoney"));
  //��������ͷ��֤����
  t->ExchLongMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchLongMarginRatioByMoney"));
  //��������ͷ��֤����
  t->ExchShortMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchShortMarginRatioByMoney"));
  //���潻����Ͷ���߶�ͷ��֤����
  t->LongMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByMoney"));
  //��������ͷ��֤���
  t->ExchShortMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchShortMarginRatioByVolume"));
  //��������ͷ��֤���
  t->ExchLongMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchLongMarginRatioByVolume"));
  //�����潻����Ͷ���߿�ͷ��֤����
  t->NoShortMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "NoShortMarginRatioByMoney"));
  //�����潻����Ͷ���߶�ͷ��֤����
  t->NoLongMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "NoLongMarginRatioByMoney"));
  //Ͷ���ױ���־
  //enum����
  //THOST_FTDC_HF_Speculation -> '1', Ͷ��
  //THOST_FTDC_HF_Arbitrage -> '2', ����
  //THOST_FTDC_HF_Hedge -> '3', �ױ�
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //�����潻����Ͷ���߶�ͷ��֤���
  t->NoLongMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "NoLongMarginRatioByVolume"));
  //�����潻����Ͷ���߿�ͷ��֤���
  t->NoShortMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "NoShortMarginRatioByVolume"));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //���潻����Ͷ���߿�ͷ��֤���
  t->ShortMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByVolume"));
  //���潻����Ͷ���߶�ͷ��֤���
  t->LongMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByVolume"));

  return t;
};

//��ѯǰ��״̬
PyObject * new_CThostFtdcQryFrontStatusField(KingstarAPI::CThostFtdcQryFrontStatusField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryFrontStatusField", (char*)"i",
p->FrontID);
}
KingstarAPI::CThostFtdcQryFrontStatusField * from_CThostFtdcQryFrontStatusField(PyObject * p){
  KingstarAPI::CThostFtdcQryFrontStatusField *t = (KingstarAPI::CThostFtdcQryFrontStatusField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryFrontStatusField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryFrontStatusField));
  //ǰ�ñ��
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));

  return t;
};

//��ѯ�ͻ�֪ͨ
PyObject * new_CThostFtdcQryNoticeField(KingstarAPI::CThostFtdcQryNoticeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryNoticeField", (char*)"s",
p->BrokerID);
}
KingstarAPI::CThostFtdcQryNoticeField * from_CThostFtdcQryNoticeField(PyObject * p){
  KingstarAPI::CThostFtdcQryNoticeField *t = (KingstarAPI::CThostFtdcQryNoticeField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryNoticeField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryNoticeField));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//����ͬ���е�Ͷ���߷���
PyObject * new_CThostFtdcSyncingInvestorGroupField(KingstarAPI::CThostFtdcSyncingInvestorGroupField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncingInvestorGroupField", (char*)"sss",
p->InvestorGroupID, p->BrokerID, p->InvestorGroupName);
}
KingstarAPI::CThostFtdcSyncingInvestorGroupField * from_CThostFtdcSyncingInvestorGroupField(PyObject * p){
  KingstarAPI::CThostFtdcSyncingInvestorGroupField *t = (KingstarAPI::CThostFtdcSyncingInvestorGroupField *)calloc(1, sizeof(KingstarAPI::CThostFtdcSyncingInvestorGroupField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcSyncingInvestorGroupField));
  //Ͷ���߷������
  strcpy(t->InvestorGroupID, PyString_AsString(PyObject_GetAttrString(p, "InvestorGroupID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //Ͷ���߷�������
  strcpy(t->InvestorGroupName, PyString_AsString(PyObject_GetAttrString(p, "InvestorGroupName")));

  return t;
};

//����������Ա
PyObject * new_CThostFtdcTraderField(KingstarAPI::CThostFtdcTraderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTraderField", (char*)"ssssis",
p->ExchangeID, p->ParticipantID, p->TraderID, p->BrokerID, p->InstallCount, p->Password);
}
KingstarAPI::CThostFtdcTraderField * from_CThostFtdcTraderField(PyObject * p){
  KingstarAPI::CThostFtdcTraderField *t = (KingstarAPI::CThostFtdcTraderField *)calloc(1, sizeof(KingstarAPI::CThostFtdcTraderField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcTraderField));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //��Ա����
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //����������Ա����
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //��װ����
  t->InstallCount =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallCount"));
  //����
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));

  return t;
};

//����ǩ��֪ͨ
PyObject * new_CThostFtdcNotifyFutureSignOutField(KingstarAPI::CThostFtdcNotifyFutureSignOutField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcNotifyFutureSignOutField", (char*)"sssiissisiissssssssciss",
p->BrokerBranchID, p->UserID, p->TradeTime, p->TID, p->InstallID, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->PlateSerial, p->ErrorID, p->BankSerial, p->OperNo, p->TradingDay, p->BrokerID, p->DeviceID, p->TradeDate, p->CurrencyID, p->ErrorMsg, p->LastFragment, p->RequestID, p->BrokerIDByBank, p->Digest);
}
KingstarAPI::CThostFtdcNotifyFutureSignOutField * from_CThostFtdcNotifyFutureSignOutField(PyObject * p){
  KingstarAPI::CThostFtdcNotifyFutureSignOutField *t = (KingstarAPI::CThostFtdcNotifyFutureSignOutField *)calloc(1, sizeof(KingstarAPI::CThostFtdcNotifyFutureSignOutField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcNotifyFutureSignOutField));
  //���̷�֧��������
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //�û���ʶ
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //����ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //����ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //ҵ������
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //���з�֧��������
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //�Ự��
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //����ƽ̨��Ϣ��ˮ��
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //�������
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //������ˮ��
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //���׹�Ա
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //����ϵͳ����
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //���̴���
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //������־
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //��������
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //���ִ���
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //������Ϣ
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //����Ƭ��־
  //enum����
  //THOST_FTDC_LF_No -> '1', ��������Ƭ
  //THOST_FTDC_LF_Yes -> '0', ������Ƭ
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //������
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //�ڻ���˾���б���
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //ժҪ
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

  return t;
};

//��¼��Ϣ
PyObject * new_CThostFtdcLoginInfoField(KingstarAPI::CThostFtdcLoginInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcLoginInfoField", (char*)"sssssssssisssisssss",
p->CZCETime, p->MacAddress, p->SHFETime, p->MaxOrderRef, p->UserProductInfo, p->InterfaceProductInfo, p->UserID, p->LoginDate, p->SystemName, p->SessionID, p->BrokerID, p->OneTimePassword, p->FFEXTime, p->FrontID, p->DCETime, p->Password, p->IPAddress, p->LoginTime, p->ProtocolInfo);
}
KingstarAPI::CThostFtdcLoginInfoField * from_CThostFtdcLoginInfoField(PyObject * p){
  KingstarAPI::CThostFtdcLoginInfoField *t = (KingstarAPI::CThostFtdcLoginInfoField *)calloc(1, sizeof(KingstarAPI::CThostFtdcLoginInfoField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcLoginInfoField));
  //֣����ʱ��
  strcpy(t->CZCETime, PyString_AsString(PyObject_GetAttrString(p, "CZCETime")));
  //Mac��ַ
  strcpy(t->MacAddress, PyString_AsString(PyObject_GetAttrString(p, "MacAddress")));
  //������ʱ��
  strcpy(t->SHFETime, PyString_AsString(PyObject_GetAttrString(p, "SHFETime")));
  //��󱨵�����
  strcpy(t->MaxOrderRef, PyString_AsString(PyObject_GetAttrString(p, "MaxOrderRef")));
  //�û��˲�Ʒ��Ϣ
  strcpy(t->UserProductInfo, PyString_AsString(PyObject_GetAttrString(p, "UserProductInfo")));
  //�ӿڶ˲�Ʒ��Ϣ
  strcpy(t->InterfaceProductInfo, PyString_AsString(PyObject_GetAttrString(p, "InterfaceProductInfo")));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //��¼����
  strcpy(t->LoginDate, PyString_AsString(PyObject_GetAttrString(p, "LoginDate")));
  //ϵͳ����
  strcpy(t->SystemName, PyString_AsString(PyObject_GetAttrString(p, "SystemName")));
  //�Ự���
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //��̬����
  strcpy(t->OneTimePassword, PyString_AsString(PyObject_GetAttrString(p, "OneTimePassword")));
  //�н���ʱ��
  strcpy(t->FFEXTime, PyString_AsString(PyObject_GetAttrString(p, "FFEXTime")));
  //ǰ�ñ��
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //������ʱ��
  strcpy(t->DCETime, PyString_AsString(PyObject_GetAttrString(p, "DCETime")));
  //����
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //IP��ַ
  strcpy(t->IPAddress, PyString_AsString(PyObject_GetAttrString(p, "IPAddress")));
  //��¼ʱ��
  strcpy(t->LoginTime, PyString_AsString(PyObject_GetAttrString(p, "LoginTime")));
  //Э����Ϣ
  strcpy(t->ProtocolInfo, PyString_AsString(PyObject_GetAttrString(p, "ProtocolInfo")));

  return t;
};

//װ�ؽ�����Ϣ
PyObject * new_CThostFtdcLoadSettlementInfoField(KingstarAPI::CThostFtdcLoadSettlementInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcLoadSettlementInfoField", (char*)"s",
p->BrokerID);
}
KingstarAPI::CThostFtdcLoadSettlementInfoField * from_CThostFtdcLoadSettlementInfoField(PyObject * p){
  KingstarAPI::CThostFtdcLoadSettlementInfoField *t = (KingstarAPI::CThostFtdcLoadSettlementInfoField *)calloc(1, sizeof(KingstarAPI::CThostFtdcLoadSettlementInfoField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcLoadSettlementInfoField));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//�ʽ��˻�������
PyObject * new_CThostFtdcTradingAccountPasswordField(KingstarAPI::CThostFtdcTradingAccountPasswordField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTradingAccountPasswordField", (char*)"sss",
p->Password, p->BrokerID, p->AccountID);
}
KingstarAPI::CThostFtdcTradingAccountPasswordField * from_CThostFtdcTradingAccountPasswordField(PyObject * p){
  KingstarAPI::CThostFtdcTradingAccountPasswordField *t = (KingstarAPI::CThostFtdcTradingAccountPasswordField *)calloc(1, sizeof(KingstarAPI::CThostFtdcTradingAccountPasswordField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcTradingAccountPasswordField));
  //����
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //Ͷ�����ʺ�
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));

  return t;
};

//Ͷ���߽�����ȷ����Ϣ
PyObject * new_CThostFtdcSettlementInfoConfirmField(KingstarAPI::CThostFtdcSettlementInfoConfirmField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSettlementInfoConfirmField", (char*)"ssss",
p->ConfirmTime, p->InvestorID, p->BrokerID, p->ConfirmDate);
}
KingstarAPI::CThostFtdcSettlementInfoConfirmField * from_CThostFtdcSettlementInfoConfirmField(PyObject * p){
  KingstarAPI::CThostFtdcSettlementInfoConfirmField *t = (KingstarAPI::CThostFtdcSettlementInfoConfirmField *)calloc(1, sizeof(KingstarAPI::CThostFtdcSettlementInfoConfirmField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcSettlementInfoConfirmField));
  //ȷ��ʱ��
  strcpy(t->ConfirmTime, PyString_AsString(PyObject_GetAttrString(p, "ConfirmTime")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //ȷ������
  strcpy(t->ConfirmDate, PyString_AsString(PyObject_GetAttrString(p, "ConfirmDate")));

  return t;
};

//���з��������ʽ�ת�ڻ���Ӧ
PyObject * new_CThostFtdcRspTransferField(KingstarAPI::CThostFtdcRspTransferField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspTransferField", (char*)"sssscississsissciicscssssssccidssdcciscscsdds",
p->BrokerBranchID, p->UserID, p->BankPassWord, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->InstallID, p->CustomerName, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->Password, p->BankPwdFlag, p->ErrorID, p->RequestID, p->CustType, p->IdentifiedCardNo, p->FeePayFlag, p->BankSerial, p->OperNo, p->TradingDay, p->BankSecuAcc, p->BrokerID, p->DeviceID, p->TransferStatus, p->IdCardType, p->PlateSerial, p->FutureFetchAmount, p->TradeDate, p->CurrencyID, p->BrokerFee, p->BankAccType, p->LastFragment, p->FutureSerial, p->ErrorMsg, p->BankSecuAccType, p->BrokerIDByBank, p->SecuPwdFlag, p->Message, p->CustFee, p->TradeAmount, p->Digest);
}
KingstarAPI::CThostFtdcRspTransferField * from_CThostFtdcRspTransferField(PyObject * p){
  KingstarAPI::CThostFtdcRspTransferField *t = (KingstarAPI::CThostFtdcRspTransferField *)calloc(1, sizeof(KingstarAPI::CThostFtdcRspTransferField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcRspTransferField));
  //���̷�֧��������
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //�û���ʶ
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //��������
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //����ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //��֤�ͻ�֤�������־
  //enum����
  //THOST_FTDC_YNI_No -> '1', ��
  //THOST_FTDC_YNI_Yes -> '0', ��
  t->VerifyCertNoFlag =   PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
  //����ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //Ͷ�����ʺ�
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //�����ʺ�
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //�ͻ�����
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //ҵ������
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //���з�֧��������
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //�Ự��
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //�ڻ�����
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //���������־
  //enum����
  //THOST_FTDC_BPWDF_BlankCheck -> '1', ���ĺ˶�
  //THOST_FTDC_BPWDF_NoCheck -> '0', ���˶�
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', ���ĺ˶�
  t->BankPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
  //�������
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //������
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //�ͻ�����
  //enum����
  //THOST_FTDC_CUSTT_Institution -> '1', ������
  //THOST_FTDC_CUSTT_Person -> '0', ��Ȼ��
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //֤������
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //����֧����־
  //enum����
  //THOST_FTDC_FPF_BEN -> '0', �����淽֧������
  //THOST_FTDC_FPF_SHA -> '2', �ɷ��ͷ�֧������ķ��ã����淽֧�����ܵķ���
  //THOST_FTDC_FPF_OUR -> '1', �ɷ��ͷ�֧������
  t->FeePayFlag =   PyString_AsString(PyObject_GetAttrString(p, "FeePayFlag"))[0];
  //������ˮ��
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //���׹�Ա
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //����ϵͳ����
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //�ڻ���λ�ʺ�
  strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
  //���̴���
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //������־
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //ת�˽���״̬
  //enum����
  //THOST_FTDC_TRFS_Normal -> '0', ����
  //THOST_FTDC_TRFS_Repealed -> '1', ������
  t->TransferStatus =   PyString_AsString(PyObject_GetAttrString(p, "TransferStatus"))[0];
  //֤������
  //enum����
  //THOST_FTDC_ICT_LicenseNo -> '9', Ӫҵִ�պ�
  //THOST_FTDC_ICT_TaxNo -> 'A', ˰��ǼǺ�
  //THOST_FTDC_ICT_OfficerIDCard -> '2', ����֤
  //THOST_FTDC_ICT_IDCard -> '1', ���֤
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', ̨��֤
  //THOST_FTDC_ICT_OtherCard -> 'x', ����֤��
  //THOST_FTDC_ICT_PoliceIDCard -> '3', ����֤
  //THOST_FTDC_ICT_Passport -> '6', ����
  //THOST_FTDC_ICT_EID -> '0', ��֯��������
  //THOST_FTDC_ICT_HomeComingCard -> '8', ����֤
  //THOST_FTDC_ICT_HouseholdRegister -> '5', ���ڲ�
  //THOST_FTDC_ICT_SoldierIDCard -> '4', ʿ��֤
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //����ƽ̨��Ϣ��ˮ��
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //�ڻ���ȡ���
  t->FutureFetchAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FutureFetchAmount"));
  //��������
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //���ִ���
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //Ӧ���ڻ���˾����
  t->BrokerFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BrokerFee"));
  //�����ʺ�����
  //enum����
  //THOST_FTDC_BAT_SavingCard -> '2', ���
  //THOST_FTDC_BAT_CreditCard -> '3', ���ÿ�
  //THOST_FTDC_BAT_BankBook -> '1', ���д���
  t->BankAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
  //����Ƭ��־
  //enum����
  //THOST_FTDC_LF_No -> '1', ��������Ƭ
  //THOST_FTDC_LF_Yes -> '0', ������Ƭ
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //�ڻ���˾��ˮ��
  t->FutureSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
  //������Ϣ
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //�ڻ���λ�ʺ�����
  //enum����
  //THOST_FTDC_BAT_SavingCard -> '2', ���
  //THOST_FTDC_BAT_CreditCard -> '3', ���ÿ�
  //THOST_FTDC_BAT_BankBook -> '1', ���д���
  t->BankSecuAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
  //�ڻ���˾���б���
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //�ڻ��ʽ�����˶Ա�־
  //enum����
  //THOST_FTDC_BPWDF_BlankCheck -> '1', ���ĺ˶�
  //THOST_FTDC_BPWDF_NoCheck -> '0', ���˶�
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', ���ĺ˶�
  t->SecuPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
  //���ͷ������շ�����Ϣ
  strcpy(t->Message, PyString_AsString(PyObject_GetAttrString(p, "Message")));
  //Ӧ�տͻ�����
  t->CustFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));
  //ת�ʽ��
  t->TradeAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
  //ժҪ
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

  return t;
};

//��ѯ��������������
PyObject * new_CThostFtdcQryExchangeOrderActionField(KingstarAPI::CThostFtdcQryExchangeOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryExchangeOrderActionField", (char*)"ssss",
p->ExchangeID, p->TraderID, p->ParticipantID, p->ClientID);
}
KingstarAPI::CThostFtdcQryExchangeOrderActionField * from_CThostFtdcQryExchangeOrderActionField(PyObject * p){
  KingstarAPI::CThostFtdcQryExchangeOrderActionField *t = (KingstarAPI::CThostFtdcQryExchangeOrderActionField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryExchangeOrderActionField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryExchangeOrderActionField));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //����������Ա����
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //��Ա����
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //�ͻ�����
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));

  return t;
};

//�����ʽ�ת�ڻ�������Ӧ
PyObject * new_CThostFtdcTransferBankToFutureRspField(KingstarAPI::CThostFtdcTransferBankToFutureRspField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferBankToFutureRspField", (char*)"sssdsd",
p->FutureAccount, p->RetCode, p->CurrencyCode, p->TradeAmt, p->RetInfo, p->CustFee);
}
KingstarAPI::CThostFtdcTransferBankToFutureRspField * from_CThostFtdcTransferBankToFutureRspField(PyObject * p){
  KingstarAPI::CThostFtdcTransferBankToFutureRspField *t = (KingstarAPI::CThostFtdcTransferBankToFutureRspField *)calloc(1, sizeof(KingstarAPI::CThostFtdcTransferBankToFutureRspField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcTransferBankToFutureRspField));
  //�ʽ��˻�
  strcpy(t->FutureAccount, PyString_AsString(PyObject_GetAttrString(p, "FutureAccount")));
  //��Ӧ����
  strcpy(t->RetCode, PyString_AsString(PyObject_GetAttrString(p, "RetCode")));
  //����
  strcpy(t->CurrencyCode, PyString_AsString(PyObject_GetAttrString(p, "CurrencyCode")));
  //ת�ʽ��
  t->TradeAmt =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmt"));
  //��Ӧ��Ϣ
  strcpy(t->RetInfo, PyString_AsString(PyObject_GetAttrString(p, "RetInfo")));
  //Ӧ�տͻ�������
  t->CustFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));

  return t;
};

//�����ͬ��
PyObject * new_CThostFtdcSyncDepositField(KingstarAPI::CThostFtdcSyncDepositField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncDepositField", (char*)"sssdi",
p->InvestorID, p->DepositSeqNo, p->BrokerID, p->Deposit, p->IsForce);
}
KingstarAPI::CThostFtdcSyncDepositField * from_CThostFtdcSyncDepositField(PyObject * p){
  KingstarAPI::CThostFtdcSyncDepositField *t = (KingstarAPI::CThostFtdcSyncDepositField *)calloc(1, sizeof(KingstarAPI::CThostFtdcSyncDepositField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcSyncDepositField));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //�������ˮ��
  strcpy(t->DepositSeqNo, PyString_AsString(PyObject_GetAttrString(p, "DepositSeqNo")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //�����
  t->Deposit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Deposit"));
  //�Ƿ�ǿ�ƽ���
  t->IsForce =   PyInt_AsLong(PyObject_GetAttrString(p, "IsForce"));

  return t;
};

//����ǩ��ǩ��
PyObject * new_CThostFtdcFutureSignIOField(KingstarAPI::CThostFtdcFutureSignIOField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcFutureSignIOField", (char*)"isscssssssissssisissi",
p->InstallID, p->TradeDate, p->TradeCode, p->LastFragment, p->BrokerBranchID, p->BrokerIDByBank, p->BankSerial, p->BankBranchID, p->OperNo, p->TradingDay, p->SessionID, p->BrokerID, p->DeviceID, p->UserID, p->BankID, p->TID, p->TradeTime, p->PlateSerial, p->CurrencyID, p->Digest, p->RequestID);
}
KingstarAPI::CThostFtdcFutureSignIOField * from_CThostFtdcFutureSignIOField(PyObject * p){
  KingstarAPI::CThostFtdcFutureSignIOField *t = (KingstarAPI::CThostFtdcFutureSignIOField *)calloc(1, sizeof(KingstarAPI::CThostFtdcFutureSignIOField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcFutureSignIOField));
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //��������
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //ҵ������
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //����Ƭ��־
  //enum����
  //THOST_FTDC_LF_No -> '1', ��������Ƭ
  //THOST_FTDC_LF_Yes -> '0', ������Ƭ
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //���̷�֧��������
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //�ڻ���˾���б���
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //������ˮ��
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //���з�֧��������
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //���׹�Ա
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //����ϵͳ����
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //�Ự��
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //���̴���
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //������־
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //�û���ʶ
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //����ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //����ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //����ƽ̨��Ϣ��ˮ��
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //���ִ���
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //ժҪ
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
  //������
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));

  return t;
};

//���͹�˾
PyObject * new_CThostFtdcBrokerField(KingstarAPI::CThostFtdcBrokerField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerField", (char*)"sssi",
p->BrokerAbbr, p->BrokerID, p->BrokerName, p->IsActive);
}
KingstarAPI::CThostFtdcBrokerField * from_CThostFtdcBrokerField(PyObject * p){
  KingstarAPI::CThostFtdcBrokerField *t = (KingstarAPI::CThostFtdcBrokerField *)calloc(1, sizeof(KingstarAPI::CThostFtdcBrokerField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcBrokerField));
  //���͹�˾���
  strcpy(t->BrokerAbbr, PyString_AsString(PyObject_GetAttrString(p, "BrokerAbbr")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //���͹�˾����
  strcpy(t->BrokerName, PyString_AsString(PyObject_GetAttrString(p, "BrokerName")));
  //�Ƿ��Ծ
  t->IsActive =   PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));

  return t;
};

//��ѯ���ױ���
PyObject * new_CThostFtdcQryInstrumentTradingRightField(KingstarAPI::CThostFtdcQryInstrumentTradingRightField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInstrumentTradingRightField", (char*)"sss",
p->InstrumentID, p->InvestorID, p->BrokerID);
}
KingstarAPI::CThostFtdcQryInstrumentTradingRightField * from_CThostFtdcQryInstrumentTradingRightField(PyObject * p){
  KingstarAPI::CThostFtdcQryInstrumentTradingRightField *t = (KingstarAPI::CThostFtdcQryInstrumentTradingRightField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryInstrumentTradingRightField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryInstrumentTradingRightField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//�����ѯ����ǩԼ��ϵ
PyObject * new_CThostFtdcQryAccountregisterField(KingstarAPI::CThostFtdcQryAccountregisterField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryAccountregisterField", (char*)"sss",
p->BankID, p->BrokerID, p->AccountID);
}
KingstarAPI::CThostFtdcQryAccountregisterField * from_CThostFtdcQryAccountregisterField(PyObject * p){
  KingstarAPI::CThostFtdcQryAccountregisterField *t = (KingstarAPI::CThostFtdcQryAccountregisterField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryAccountregisterField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryAccountregisterField));
  //���б���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //Ͷ�����ʺ�
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));

  return t;
};

//��ѯ���͹�˾�û��¼�
PyObject * new_CThostFtdcBrokerUserEventField(KingstarAPI::CThostFtdcBrokerUserEventField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerUserEventField", (char*)"sissssssc",
p->InstrumentID, p->EventSequenceNo, p->EventTime, p->UserID, p->InvestorID, p->BrokerID, p->UserEventInfo, p->EventDate, p->UserEventType);
}
KingstarAPI::CThostFtdcBrokerUserEventField * from_CThostFtdcBrokerUserEventField(PyObject * p){
  KingstarAPI::CThostFtdcBrokerUserEventField *t = (KingstarAPI::CThostFtdcBrokerUserEventField *)calloc(1, sizeof(KingstarAPI::CThostFtdcBrokerUserEventField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcBrokerUserEventField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //�û��¼����
  t->EventSequenceNo =   PyInt_AsLong(PyObject_GetAttrString(p, "EventSequenceNo"));
  //�¼�����ʱ��
  strcpy(t->EventTime, PyString_AsString(PyObject_GetAttrString(p, "EventTime")));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //�û��¼���Ϣ
  strcpy(t->UserEventInfo, PyString_AsString(PyObject_GetAttrString(p, "UserEventInfo")));
  //�¼���������
  strcpy(t->EventDate, PyString_AsString(PyObject_GetAttrString(p, "EventDate")));
  //�û��¼�����
  //enum����
  //THOST_FTDC_UET_Authenticate -> '6', �ͻ�����֤
  //THOST_FTDC_UET_Login -> '1', ��¼
  //THOST_FTDC_UET_TradingError -> '4', ����ʧ��
  //THOST_FTDC_UET_UpdatePassword -> '5', �޸�����
  //THOST_FTDC_UET_Other -> '9', ����
  //THOST_FTDC_UET_Trading -> '3', ���׳ɹ�
  //THOST_FTDC_UET_Logout -> '2', �ǳ�
  t->UserEventType =   PyString_AsString(PyObject_GetAttrString(p, "UserEventType"))[0];

  return t;
};

//���͹�˾�û�����Ȩ��
PyObject * new_CThostFtdcBrokerUserFunctionField(KingstarAPI::CThostFtdcBrokerUserFunctionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerUserFunctionField", (char*)"ssc",
p->UserID, p->BrokerID, p->BrokerFunctionCode);
}
KingstarAPI::CThostFtdcBrokerUserFunctionField * from_CThostFtdcBrokerUserFunctionField(PyObject * p){
  KingstarAPI::CThostFtdcBrokerUserFunctionField *t = (KingstarAPI::CThostFtdcBrokerUserFunctionField *)calloc(1, sizeof(KingstarAPI::CThostFtdcBrokerUserFunctionField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcBrokerUserFunctionField));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //���͹�˾���ܴ���
  //enum����
  //THOST_FTDC_BFC_TradeQry -> 'c', ���ײ�ѯ�����ɽ���ί��
  //THOST_FTDC_BFC_CfgRiskLevelStd -> 'G', ���ռ����׼����
  //THOST_FTDC_BFC_QueryFund -> 'k', �ʽ��ѯ
  //THOST_FTDC_BFC_RiskPredict -> 'y', ����Ԥ��
  //THOST_FTDC_BFC_log -> 'a', ϵͳ���ܣ�����/�ǳ�/�޸������
  //THOST_FTDC_BFC_BachSyncBrokerData -> '4', ����ͬ�����͹�˾����
  //THOST_FTDC_BFC_QueryTrade -> 'm', �ɽ���ѯ
  //THOST_FTDC_BFC_OrderAction -> '6', ��������
  //THOST_FTDC_BFC_SyncBrokerData -> '3', ͬ�����͹�˾����
  //THOST_FTDC_BFC_RemainCalc -> 'w', Ȩ�淴��
  //THOST_FTDC_BFC_UserPasswordUpdate -> '2', ����û�����
  //THOST_FTDC_BFC_RiskTargetSetup -> 'A', ���ָ������
  //THOST_FTDC_BFC_QueryRiskNotify -> 'q', ����֪ͨ��ѯ
  //THOST_FTDC_BFC_Trade -> 'd', ���׹��ܣ�����������
  //THOST_FTDC_BFC_QueryMarketData -> 'o', �����ѯ
  //THOST_FTDC_BFC_PressTest -> 'v', ѹ������
  //THOST_FTDC_BFC_QueryInvestor -> 's', Ͷ������Ϣ��ѯ
  //THOST_FTDC_BFC_AllQuery -> '7', ȫ����ѯ
  //THOST_FTDC_BFC_QueryOrder -> 'l', ������ѯ
  //THOST_FTDC_BFC_QueryUserEvent -> 'p', �û��¼���ѯ
  //THOST_FTDC_BFC_MarketDataWarn -> 'B', ����Ԥ��
  //THOST_FTDC_BFC_OrderInsert -> '5', ��������
  //THOST_FTDC_BFC_BrokerDeposit -> 'j', �쿴���͹�˾�ʽ�Ȩ��
  //THOST_FTDC_BFC_Virement -> 'e', ����ת��
  //THOST_FTDC_BFC_CfgBizNotice -> 'D', ҵ��֪ͨģ������
  //THOST_FTDC_BFC_BaseQry -> 'b', ������ѯ����ѯ�������ݣ����Լ���������ȳ���
  //THOST_FTDC_BFC_ForceClose -> 'u', ǿƽ
  //THOST_FTDC_BFC_RiskNotice -> 'i', ���֪ͨ����
  //THOST_FTDC_BFC_NetPositionInd -> 'x', ���ֱֲ�֤��ָ��
  //THOST_FTDC_BFC_QueryFundChange -> 'r', ������ѯ
  //THOST_FTDC_BFC_QueryPosition -> 'n', �ֲֲ�ѯ
  //THOST_FTDC_BFC_QryBizNotice -> 'C', ҵ��֪ͨ��ѯ
  //THOST_FTDC_BFC_SyncOTP -> 'E', ͬ����̬����
  //THOST_FTDC_BFC_QueryTradingCode -> 't', ���ױ����ѯ
  //THOST_FTDC_BFC_DataExport -> 'z', ���ݵ���
  //THOST_FTDC_BFC_ForceUserLogout -> '1', ǿ���û��ǳ�
  //THOST_FTDC_BFC_Risk -> 'f', ���ռ��
  //THOST_FTDC_BFC_Session -> 'g', ��ѯ/������ѯ�Ự�����˵�
  //THOST_FTDC_BFC_RiskNoticeCtl -> 'h', ���֪ͨ����
  //THOST_FTDC_BFC_SendBizNotice -> 'F', ����ҵ��֪ͨ
  t->BrokerFunctionCode =   PyString_AsString(PyObject_GetAttrString(p, "BrokerFunctionCode"))[0];

  return t;
};

//�ʽ��˻�
PyObject * new_CThostFtdcTradingAccountField(KingstarAPI::CThostFtdcTradingAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTradingAccountField", (char*)"ddddddddsddddddidssddddddddddd",
p->Mortgage, p->ExchangeDeliveryMargin, p->FrozenMargin, p->WithdrawQuota, p->PositionProfit, p->Commission, p->Interest, p->CashIn, p->AccountID, p->Available, p->PreCredit, p->PreMortgage, p->InterestBase, p->ExchangeMargin, p->PreMargin, p->SettlementID, p->DeliveryMargin, p->TradingDay, p->BrokerID, p->FrozenCash, p->Withdraw, p->Balance, p->Reserve, p->PreDeposit, p->Credit, p->PreBalance, p->CurrMargin, p->FrozenCommission, p->CloseProfit, p->Deposit);
}
KingstarAPI::CThostFtdcTradingAccountField * from_CThostFtdcTradingAccountField(PyObject * p){
  KingstarAPI::CThostFtdcTradingAccountField *t = (KingstarAPI::CThostFtdcTradingAccountField *)calloc(1, sizeof(KingstarAPI::CThostFtdcTradingAccountField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcTradingAccountField));
  //��Ѻ���
  t->Mortgage =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Mortgage"));
  //���������֤��
  t->ExchangeDeliveryMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeDeliveryMargin"));
  //����ı�֤��
  t->FrozenMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenMargin"));
  //��ȡ�ʽ�
  t->WithdrawQuota =   PyFloat_AsDouble(PyObject_GetAttrString(p, "WithdrawQuota"));
  //�ֲ�ӯ��
  t->PositionProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfit"));
  //������
  t->Commission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Commission"));
  //��Ϣ����
  t->Interest =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Interest"));
  //�ʽ���
  t->CashIn =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CashIn"));
  //Ͷ�����ʺ�
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //�����ʽ�
  t->Available =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Available"));
  //�ϴ����ö��
  t->PreCredit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreCredit"));
  //�ϴ���Ѻ���
  t->PreMortgage =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreMortgage"));
  //��Ϣ����
  t->InterestBase =   PyFloat_AsDouble(PyObject_GetAttrString(p, "InterestBase"));
  //��������֤��
  t->ExchangeMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeMargin"));
  //�ϴ�ռ�õı�֤��
  t->PreMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreMargin"));
  //������
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //Ͷ���߽��֤��
  t->DeliveryMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "DeliveryMargin"));
  //������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //������ʽ�
  t->FrozenCash =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCash"));
  //������
  t->Withdraw =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Withdraw"));
  //�ڻ�����׼����
  t->Balance =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Balance"));
  //����׼����
  t->Reserve =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Reserve"));
  //�ϴδ���
  t->PreDeposit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreDeposit"));
  //���ö��
  t->Credit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Credit"));
  //�ϴν���׼����
  t->PreBalance =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreBalance"));
  //��ǰ��֤���ܶ�
  t->CurrMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CurrMargin"));
  //�����������
  t->FrozenCommission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCommission"));
  //ƽ��ӯ��
  t->CloseProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfit"));
  //�����
  t->Deposit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Deposit"));

  return t;
};

//ת������
PyObject * new_CThostFtdcTransferBankField(KingstarAPI::CThostFtdcTransferBankField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferBankField", (char*)"siss",
p->BankName, p->IsActive, p->BankBrchID, p->BankID);
}
KingstarAPI::CThostFtdcTransferBankField * from_CThostFtdcTransferBankField(PyObject * p){
  KingstarAPI::CThostFtdcTransferBankField *t = (KingstarAPI::CThostFtdcTransferBankField *)calloc(1, sizeof(KingstarAPI::CThostFtdcTransferBankField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcTransferBankField));
  //��������
  strcpy(t->BankName, PyString_AsString(PyObject_GetAttrString(p, "BankName")));
  //�Ƿ��Ծ
  t->IsActive =   PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));
  //���з����Ĵ���
  strcpy(t->BankBrchID, PyString_AsString(PyObject_GetAttrString(p, "BankBrchID")));
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));

  return t;
};

//���׺��������ڱ��̷�����Կͬ����Ӧ
PyObject * new_CThostFtdcRspSyncKeyField(KingstarAPI::CThostFtdcRspSyncKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspSyncKeyField", (char*)"sssiissisiisssssssciss",
p->BrokerBranchID, p->UserID, p->TradeTime, p->TID, p->InstallID, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->PlateSerial, p->ErrorID, p->BankSerial, p->OperNo, p->TradingDay, p->BrokerID, p->DeviceID, p->TradeDate, p->ErrorMsg, p->LastFragment, p->RequestID, p->BrokerIDByBank, p->Message);
}
KingstarAPI::CThostFtdcRspSyncKeyField * from_CThostFtdcRspSyncKeyField(PyObject * p){
  KingstarAPI::CThostFtdcRspSyncKeyField *t = (KingstarAPI::CThostFtdcRspSyncKeyField *)calloc(1, sizeof(KingstarAPI::CThostFtdcRspSyncKeyField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcRspSyncKeyField));
  //���̷�֧��������
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //�û���ʶ
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //����ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //����ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //ҵ������
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //���з�֧��������
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //�Ự��
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //����ƽ̨��Ϣ��ˮ��
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //�������
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //������ˮ��
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //���׹�Ա
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //����ϵͳ����
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //���̴���
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //������־
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //��������
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //������Ϣ
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //����Ƭ��־
  //enum����
  //THOST_FTDC_LF_No -> '1', ��������Ƭ
  //THOST_FTDC_LF_Yes -> '0', ������Ƭ
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //������
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //�ڻ���˾���б���
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //���׺��ĸ����ڱ��̵���Ϣ
  strcpy(t->Message, PyString_AsString(PyObject_GetAttrString(p, "Message")));

  return t;
};

//��������������
PyObject * new_CThostFtdcExchangeOrderActionField(KingstarAPI::CThostFtdcExchangeOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcExchangeOrderActionField", (char*)"ssssssssdsicicss",
p->ActionDate, p->ExchangeID, p->ActionTime, p->OrderSysID, p->OrderLocalID, p->BusinessUnit, p->TraderID, p->UserID, p->LimitPrice, p->ActionLocalID, p->InstallID, p->OrderActionStatus, p->VolumeChange, p->ActionFlag, p->ClientID, p->ParticipantID);
}
KingstarAPI::CThostFtdcExchangeOrderActionField * from_CThostFtdcExchangeOrderActionField(PyObject * p){
  KingstarAPI::CThostFtdcExchangeOrderActionField *t = (KingstarAPI::CThostFtdcExchangeOrderActionField *)calloc(1, sizeof(KingstarAPI::CThostFtdcExchangeOrderActionField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcExchangeOrderActionField));
  //��������
  strcpy(t->ActionDate, PyString_AsString(PyObject_GetAttrString(p, "ActionDate")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //����ʱ��
  strcpy(t->ActionTime, PyString_AsString(PyObject_GetAttrString(p, "ActionTime")));
  //�������
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //���ر������
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //ҵ��Ԫ
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //����������Ա����
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //�۸�
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //�������ر��
  strcpy(t->ActionLocalID, PyString_AsString(PyObject_GetAttrString(p, "ActionLocalID")));
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //��������״̬
  //enum����
  //THOST_FTDC_OAS_Rejected -> 'c', �Ѿ����ܾ�
  //THOST_FTDC_OAS_Submitted -> 'a', �Ѿ��ύ
  //THOST_FTDC_OAS_Accepted -> 'b', �Ѿ�����
  t->OrderActionStatus =   PyString_AsString(PyObject_GetAttrString(p, "OrderActionStatus"))[0];
  //�����仯
  t->VolumeChange =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeChange"));
  //������־
  //enum����
  //THOST_FTDC_AF_Delete -> '0', ɾ��
  //THOST_FTDC_AF_Modify -> '3', �޸�
  t->ActionFlag =   PyString_AsString(PyObject_GetAttrString(p, "ActionFlag"))[0];
  //�ͻ�����
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //��Ա����
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));

  return t;
};

//��Լ��֤����
PyObject * new_CThostFtdcInstrumentMarginRateField(KingstarAPI::CThostFtdcInstrumentMarginRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInstrumentMarginRateField", (char*)"sddicsscdd",
p->InstrumentID, p->ShortMarginRatioByMoney, p->LongMarginRatioByMoney, p->IsRelative, p->HedgeFlag, p->InvestorID, p->BrokerID, p->InvestorRange, p->ShortMarginRatioByVolume, p->LongMarginRatioByVolume);
}
KingstarAPI::CThostFtdcInstrumentMarginRateField * from_CThostFtdcInstrumentMarginRateField(PyObject * p){
  KingstarAPI::CThostFtdcInstrumentMarginRateField *t = (KingstarAPI::CThostFtdcInstrumentMarginRateField *)calloc(1, sizeof(KingstarAPI::CThostFtdcInstrumentMarginRateField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcInstrumentMarginRateField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //��ͷ��֤����
  t->ShortMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByMoney"));
  //��ͷ��֤����
  t->LongMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByMoney"));
  //�Ƿ���Խ�������ȡ
  t->IsRelative =   PyInt_AsLong(PyObject_GetAttrString(p, "IsRelative"));
  //Ͷ���ױ���־
  //enum����
  //THOST_FTDC_HF_Speculation -> '1', Ͷ��
  //THOST_FTDC_HF_Arbitrage -> '2', ����
  //THOST_FTDC_HF_Hedge -> '3', �ױ�
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //Ͷ���߷�Χ
  //enum����
  //THOST_FTDC_IR_All -> '1', ����
  //THOST_FTDC_IR_Group -> '2', Ͷ������
  //THOST_FTDC_IR_Single -> '3', ��һͶ����
  t->InvestorRange =   PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
  //��ͷ��֤���
  t->ShortMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByVolume"));
  //��ͷ��֤���
  t->LongMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByVolume"));

  return t;
};

//�ɽ�����
PyObject * new_CThostFtdcMarketDataAveragePriceField(KingstarAPI::CThostFtdcMarketDataAveragePriceField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataAveragePriceField", (char*)"d",
p->AveragePrice);
}
KingstarAPI::CThostFtdcMarketDataAveragePriceField * from_CThostFtdcMarketDataAveragePriceField(PyObject * p){
  KingstarAPI::CThostFtdcMarketDataAveragePriceField *t = (KingstarAPI::CThostFtdcMarketDataAveragePriceField *)calloc(1, sizeof(KingstarAPI::CThostFtdcMarketDataAveragePriceField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcMarketDataAveragePriceField));
  //���վ���
  t->AveragePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AveragePrice"));

  return t;
};

//��ѯ���鱨�̻�
PyObject * new_CThostFtdcQryMDTraderOfferField(KingstarAPI::CThostFtdcQryMDTraderOfferField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryMDTraderOfferField", (char*)"sss",
p->ExchangeID, p->TraderID, p->ParticipantID);
}
KingstarAPI::CThostFtdcQryMDTraderOfferField * from_CThostFtdcQryMDTraderOfferField(PyObject * p){
  KingstarAPI::CThostFtdcQryMDTraderOfferField *t = (KingstarAPI::CThostFtdcQryMDTraderOfferField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryMDTraderOfferField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryMDTraderOfferField));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //����������Ա����
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //��Ա����
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));

  return t;
};

//��ѯָ����ˮ�ŵĽ��׽������
PyObject * new_CThostFtdcReqQueryTradeResultBySerialField(KingstarAPI::CThostFtdcReqQueryTradeResultBySerialField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqQueryTradeResultBySerialField", (char*)"sssssssssisicssssccsisscds",
p->BrokerBranchID, p->BankPassWord, p->TradeTime, p->AccountID, p->BankAccount, p->CustomerName, p->TradeCode, p->BankBranchID, p->RefrenceIssure, p->SessionID, p->BankID, p->PlateSerial, p->CustType, p->IdentifiedCardNo, p->BankSerial, p->TradingDay, p->BrokerID, p->RefrenceIssureType, p->IdCardType, p->Password, p->Reference, p->TradeDate, p->CurrencyID, p->LastFragment, p->TradeAmount, p->Digest);
}
KingstarAPI::CThostFtdcReqQueryTradeResultBySerialField * from_CThostFtdcReqQueryTradeResultBySerialField(PyObject * p){
  KingstarAPI::CThostFtdcReqQueryTradeResultBySerialField *t = (KingstarAPI::CThostFtdcReqQueryTradeResultBySerialField *)calloc(1, sizeof(KingstarAPI::CThostFtdcReqQueryTradeResultBySerialField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcReqQueryTradeResultBySerialField));
  //���̷�֧��������
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //��������
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //����ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //Ͷ�����ʺ�
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //�����ʺ�
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //�ͻ�����
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //ҵ������
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //���з�֧��������
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //����ˮ�ŷ����߻�������
  strcpy(t->RefrenceIssure, PyString_AsString(PyObject_GetAttrString(p, "RefrenceIssure")));
  //�Ự��
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //����ƽ̨��Ϣ��ˮ��
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //�ͻ�����
  //enum����
  //THOST_FTDC_CUSTT_Institution -> '1', ������
  //THOST_FTDC_CUSTT_Person -> '0', ��Ȼ��
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //֤������
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //������ˮ��
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //����ϵͳ����
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //���̴���
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //����ˮ�ŷ����ߵĻ�������
  //enum����
  //THOST_FTDC_TS_Future -> '1', ����
  //THOST_FTDC_TS_Bank -> '0', ����
  //THOST_FTDC_TS_Store -> '2', ȯ��
  t->RefrenceIssureType =   PyString_AsString(PyObject_GetAttrString(p, "RefrenceIssureType"))[0];
  //֤������
  //enum����
  //THOST_FTDC_ICT_LicenseNo -> '9', Ӫҵִ�պ�
  //THOST_FTDC_ICT_TaxNo -> 'A', ˰��ǼǺ�
  //THOST_FTDC_ICT_OfficerIDCard -> '2', ����֤
  //THOST_FTDC_ICT_IDCard -> '1', ���֤
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', ̨��֤
  //THOST_FTDC_ICT_OtherCard -> 'x', ����֤��
  //THOST_FTDC_ICT_PoliceIDCard -> '3', ����֤
  //THOST_FTDC_ICT_Passport -> '6', ����
  //THOST_FTDC_ICT_EID -> '0', ��֯��������
  //THOST_FTDC_ICT_HomeComingCard -> '8', ����֤
  //THOST_FTDC_ICT_HouseholdRegister -> '5', ���ڲ�
  //THOST_FTDC_ICT_SoldierIDCard -> '4', ʿ��֤
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //�ڻ�����
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //��ˮ��
  t->Reference =   PyInt_AsLong(PyObject_GetAttrString(p, "Reference"));
  //��������
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //���ִ���
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //����Ƭ��־
  //enum����
  //THOST_FTDC_LF_No -> '1', ��������Ƭ
  //THOST_FTDC_LF_Yes -> '0', ������Ƭ
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //ת�ʽ��
  t->TradeAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
  //ժҪ
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

  return t;
};

//�û�������
PyObject * new_CThostFtdcUserPasswordUpdateField(KingstarAPI::CThostFtdcUserPasswordUpdateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcUserPasswordUpdateField", (char*)"ssss",
p->UserID, p->NewPassword, p->OldPassword, p->BrokerID);
}
KingstarAPI::CThostFtdcUserPasswordUpdateField * from_CThostFtdcUserPasswordUpdateField(PyObject * p){
  KingstarAPI::CThostFtdcUserPasswordUpdateField *t = (KingstarAPI::CThostFtdcUserPasswordUpdateField *)calloc(1, sizeof(KingstarAPI::CThostFtdcUserPasswordUpdateField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcUserPasswordUpdateField));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //�µĿ���
  strcpy(t->NewPassword, PyString_AsString(PyObject_GetAttrString(p, "NewPassword")));
  //ԭ���Ŀ���
  strcpy(t->OldPassword, PyString_AsString(PyObject_GetAttrString(p, "OldPassword")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//��ѯ�˻���Ϣ֪ͨ
PyObject * new_CThostFtdcNotifyQueryAccountField(KingstarAPI::CThostFtdcNotifyQueryAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcNotifyQueryAccountField", (char*)"sssscississsissciicsssssssdcisssccicscsd",
p->BrokerBranchID, p->UserID, p->BankPassWord, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->InstallID, p->CustomerName, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->Password, p->BankPwdFlag, p->ErrorID, p->RequestID, p->CustType, p->IdentifiedCardNo, p->BankSerial, p->OperNo, p->TradingDay, p->BankSecuAcc, p->BrokerID, p->DeviceID, p->BankUseAmount, p->IdCardType, p->PlateSerial, p->TradeDate, p->CurrencyID, p->ErrorMsg, p->BankAccType, p->LastFragment, p->FutureSerial, p->BankSecuAccType, p->BrokerIDByBank, p->SecuPwdFlag, p->Digest, p->BankFetchAmount);
}
KingstarAPI::CThostFtdcNotifyQueryAccountField * from_CThostFtdcNotifyQueryAccountField(PyObject * p){
  KingstarAPI::CThostFtdcNotifyQueryAccountField *t = (KingstarAPI::CThostFtdcNotifyQueryAccountField *)calloc(1, sizeof(KingstarAPI::CThostFtdcNotifyQueryAccountField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcNotifyQueryAccountField));
  //���̷�֧��������
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //�û���ʶ
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //��������
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //����ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //��֤�ͻ�֤�������־
  //enum����
  //THOST_FTDC_YNI_No -> '1', ��
  //THOST_FTDC_YNI_Yes -> '0', ��
  t->VerifyCertNoFlag =   PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
  //����ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //Ͷ�����ʺ�
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //�����ʺ�
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //�ͻ�����
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //ҵ������
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //���з�֧��������
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //�Ự��
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //�ڻ�����
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //���������־
  //enum����
  //THOST_FTDC_BPWDF_BlankCheck -> '1', ���ĺ˶�
  //THOST_FTDC_BPWDF_NoCheck -> '0', ���˶�
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', ���ĺ˶�
  t->BankPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
  //�������
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //������
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //�ͻ�����
  //enum����
  //THOST_FTDC_CUSTT_Institution -> '1', ������
  //THOST_FTDC_CUSTT_Person -> '0', ��Ȼ��
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //֤������
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //������ˮ��
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //���׹�Ա
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //����ϵͳ����
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //�ڻ���λ�ʺ�
  strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
  //���̴���
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //������־
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //���п��ý��
  t->BankUseAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BankUseAmount"));
  //֤������
  //enum����
  //THOST_FTDC_ICT_LicenseNo -> '9', Ӫҵִ�պ�
  //THOST_FTDC_ICT_TaxNo -> 'A', ˰��ǼǺ�
  //THOST_FTDC_ICT_OfficerIDCard -> '2', ����֤
  //THOST_FTDC_ICT_IDCard -> '1', ���֤
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', ̨��֤
  //THOST_FTDC_ICT_OtherCard -> 'x', ����֤��
  //THOST_FTDC_ICT_PoliceIDCard -> '3', ����֤
  //THOST_FTDC_ICT_Passport -> '6', ����
  //THOST_FTDC_ICT_EID -> '0', ��֯��������
  //THOST_FTDC_ICT_HomeComingCard -> '8', ����֤
  //THOST_FTDC_ICT_HouseholdRegister -> '5', ���ڲ�
  //THOST_FTDC_ICT_SoldierIDCard -> '4', ʿ��֤
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //����ƽ̨��Ϣ��ˮ��
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //��������
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //���ִ���
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //������Ϣ
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //�����ʺ�����
  //enum����
  //THOST_FTDC_BAT_SavingCard -> '2', ���
  //THOST_FTDC_BAT_CreditCard -> '3', ���ÿ�
  //THOST_FTDC_BAT_BankBook -> '1', ���д���
  t->BankAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
  //����Ƭ��־
  //enum����
  //THOST_FTDC_LF_No -> '1', ��������Ƭ
  //THOST_FTDC_LF_Yes -> '0', ������Ƭ
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //�ڻ���˾��ˮ��
  t->FutureSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
  //�ڻ���λ�ʺ�����
  //enum����
  //THOST_FTDC_BAT_SavingCard -> '2', ���
  //THOST_FTDC_BAT_CreditCard -> '3', ���ÿ�
  //THOST_FTDC_BAT_BankBook -> '1', ���д���
  t->BankSecuAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
  //�ڻ���˾���б���
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //�ڻ��ʽ�����˶Ա�־
  //enum����
  //THOST_FTDC_BPWDF_BlankCheck -> '1', ���ĺ˶�
  //THOST_FTDC_BPWDF_NoCheck -> '0', ���˶�
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', ���ĺ˶�
  t->SecuPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
  //ժҪ
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
  //���п�ȡ���
  t->BankFetchAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BankFetchAmount"));

  return t;
};

//�г�����
PyObject * new_CThostFtdcMarketDataField(KingstarAPI::CThostFtdcMarketDataField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataField", (char*)"dddddsididsdssddddddsd",
p->HighestPrice, p->LowerLimitPrice, p->OpenPrice, p->PreClosePrice, p->PreSettlementPrice, p->UpdateTime, p->UpdateMillisec, p->PreOpenInterest, p->Volume, p->UpperLimitPrice, p->InstrumentID, p->ClosePrice, p->ExchangeID, p->TradingDay, p->PreDelta, p->OpenInterest, p->CurrDelta, p->Turnover, p->LastPrice, p->SettlementPrice, p->ExchangeInstID, p->LowestPrice);
}
KingstarAPI::CThostFtdcMarketDataField * from_CThostFtdcMarketDataField(PyObject * p){
  KingstarAPI::CThostFtdcMarketDataField *t = (KingstarAPI::CThostFtdcMarketDataField *)calloc(1, sizeof(KingstarAPI::CThostFtdcMarketDataField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcMarketDataField));
  //��߼�
  t->HighestPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "HighestPrice"));
  //��ͣ���
  t->LowerLimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LowerLimitPrice"));
  //����
  t->OpenPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenPrice"));
  //������
  t->PreClosePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreClosePrice"));
  //�ϴν����
  t->PreSettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreSettlementPrice"));
  //����޸�ʱ��
  strcpy(t->UpdateTime, PyString_AsString(PyObject_GetAttrString(p, "UpdateTime")));
  //����޸ĺ���
  t->UpdateMillisec =   PyInt_AsLong(PyObject_GetAttrString(p, "UpdateMillisec"));
  //��ֲ���
  t->PreOpenInterest =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreOpenInterest"));
  //����
  t->Volume =   PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));
  //��ͣ���
  t->UpperLimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "UpperLimitPrice"));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //������
  t->ClosePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ClosePrice"));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //����ʵ��
  t->PreDelta =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreDelta"));
  //�ֲ���
  t->OpenInterest =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenInterest"));
  //����ʵ��
  t->CurrDelta =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CurrDelta"));
  //�ɽ����
  t->Turnover =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Turnover"));
  //���¼�
  t->LastPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LastPrice"));
  //���ν����
  t->SettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SettlementPrice"));
  //��Լ�ڽ������Ĵ���
  strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
  //��ͼ�
  t->LowestPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LowestPrice"));

  return t;
};

//�ֵ��۵���Ϣ
PyObject * new_CThostFtdcEWarrantOffsetField(KingstarAPI::CThostFtdcEWarrantOffsetField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcEWarrantOffsetField", (char*)"ssscciss",
p->InstrumentID, p->ExchangeID, p->InvestorID, p->HedgeFlag, p->Direction, p->Volume, p->TradingDay, p->BrokerID);
}
KingstarAPI::CThostFtdcEWarrantOffsetField * from_CThostFtdcEWarrantOffsetField(PyObject * p){
  KingstarAPI::CThostFtdcEWarrantOffsetField *t = (KingstarAPI::CThostFtdcEWarrantOffsetField *)calloc(1, sizeof(KingstarAPI::CThostFtdcEWarrantOffsetField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcEWarrantOffsetField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //Ͷ���ױ���־
  //enum����
  //THOST_FTDC_HF_Speculation -> '1', Ͷ��
  //THOST_FTDC_HF_Arbitrage -> '2', ����
  //THOST_FTDC_HF_Hedge -> '3', �ױ�
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //��������
  //enum����
  //THOST_FTDC_D_Buy -> '0', ��
  //THOST_FTDC_D_Sell -> '1', ��
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //����
  t->Volume =   PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));
  //��������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//�û�IP
PyObject * new_CThostFtdcUserIPField(KingstarAPI::CThostFtdcUserIPField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcUserIPField", (char*)"sssss",
p->MacAddress, p->UserID, p->IPMask, p->BrokerID, p->IPAddress);
}
KingstarAPI::CThostFtdcUserIPField * from_CThostFtdcUserIPField(PyObject * p){
  KingstarAPI::CThostFtdcUserIPField *t = (KingstarAPI::CThostFtdcUserIPField *)calloc(1, sizeof(KingstarAPI::CThostFtdcUserIPField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcUserIPField));
  //Mac��ַ
  strcpy(t->MacAddress, PyString_AsString(PyObject_GetAttrString(p, "MacAddress")));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //IP��ַ����
  strcpy(t->IPMask, PyString_AsString(PyObject_GetAttrString(p, "IPMask")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //IP��ַ
  strcpy(t->IPAddress, PyString_AsString(PyObject_GetAttrString(p, "IPAddress")));

  return t;
};

//��ѯ���͹�˾
PyObject * new_CThostFtdcQryBrokerField(KingstarAPI::CThostFtdcQryBrokerField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryBrokerField", (char*)"s",
p->BrokerID);
}
KingstarAPI::CThostFtdcQryBrokerField * from_CThostFtdcQryBrokerField(PyObject * p){
  KingstarAPI::CThostFtdcQryBrokerField *t = (KingstarAPI::CThostFtdcQryBrokerField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryBrokerField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryBrokerField));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//��ѯ���͹�˾��Ա����
PyObject * new_CThostFtdcQryPartBrokerField(KingstarAPI::CThostFtdcQryPartBrokerField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryPartBrokerField", (char*)"sss",
p->ExchangeID, p->BrokerID, p->ParticipantID);
}
KingstarAPI::CThostFtdcQryPartBrokerField * from_CThostFtdcQryPartBrokerField(PyObject * p){
  KingstarAPI::CThostFtdcQryPartBrokerField *t = (KingstarAPI::CThostFtdcQryPartBrokerField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryPartBrokerField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryPartBrokerField));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //��Ա����
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));

  return t;
};

//��������
PyObject * new_CThostFtdcSettlementRefField(KingstarAPI::CThostFtdcSettlementRefField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSettlementRefField", (char*)"si",
p->TradingDay, p->SettlementID);
}
KingstarAPI::CThostFtdcSettlementRefField * from_CThostFtdcSettlementRefField(PyObject * p){
  KingstarAPI::CThostFtdcSettlementRefField *t = (KingstarAPI::CThostFtdcSettlementRefField *)calloc(1, sizeof(KingstarAPI::CThostFtdcSettlementRefField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcSettlementRefField));
  //������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //������
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));

  return t;
};

//����ǩ������
PyObject * new_CThostFtdcReqFutureSignOutField(KingstarAPI::CThostFtdcReqFutureSignOutField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqFutureSignOutField", (char*)"isscssssssissssisissi",
p->InstallID, p->TradeDate, p->TradeCode, p->LastFragment, p->BrokerBranchID, p->BrokerIDByBank, p->BankSerial, p->BankBranchID, p->OperNo, p->TradingDay, p->SessionID, p->BrokerID, p->DeviceID, p->UserID, p->BankID, p->TID, p->TradeTime, p->PlateSerial, p->CurrencyID, p->Digest, p->RequestID);
}
KingstarAPI::CThostFtdcReqFutureSignOutField * from_CThostFtdcReqFutureSignOutField(PyObject * p){
  KingstarAPI::CThostFtdcReqFutureSignOutField *t = (KingstarAPI::CThostFtdcReqFutureSignOutField *)calloc(1, sizeof(KingstarAPI::CThostFtdcReqFutureSignOutField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcReqFutureSignOutField));
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //��������
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //ҵ������
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //����Ƭ��־
  //enum����
  //THOST_FTDC_LF_No -> '1', ��������Ƭ
  //THOST_FTDC_LF_Yes -> '0', ������Ƭ
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //���̷�֧��������
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //�ڻ���˾���б���
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //������ˮ��
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //���з�֧��������
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //���׹�Ա
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //����ϵͳ����
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //�Ự��
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //���̴���
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //������־
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //�û���ʶ
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //����ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //����ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //����ƽ̨��Ϣ��ˮ��
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //���ִ���
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //ժҪ
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
  //������
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));

  return t;
};

//�ڻ��ʽ�ת����������Ӧ
PyObject * new_CThostFtdcTransferFutureToBankRspField(KingstarAPI::CThostFtdcTransferFutureToBankRspField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferFutureToBankRspField", (char*)"sssdsd",
p->FutureAccount, p->RetCode, p->CurrencyCode, p->TradeAmt, p->RetInfo, p->CustFee);
}
KingstarAPI::CThostFtdcTransferFutureToBankRspField * from_CThostFtdcTransferFutureToBankRspField(PyObject * p){
  KingstarAPI::CThostFtdcTransferFutureToBankRspField *t = (KingstarAPI::CThostFtdcTransferFutureToBankRspField *)calloc(1, sizeof(KingstarAPI::CThostFtdcTransferFutureToBankRspField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcTransferFutureToBankRspField));
  //�ʽ��˻�
  strcpy(t->FutureAccount, PyString_AsString(PyObject_GetAttrString(p, "FutureAccount")));
  //��Ӧ����
  strcpy(t->RetCode, PyString_AsString(PyObject_GetAttrString(p, "RetCode")));
  //����
  strcpy(t->CurrencyCode, PyString_AsString(PyObject_GetAttrString(p, "CurrencyCode")));
  //ת�ʽ��
  t->TradeAmt =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmt"));
  //��Ӧ��Ϣ
  strcpy(t->RetInfo, PyString_AsString(PyObject_GetAttrString(p, "RetInfo")));
  //Ӧ�տͻ�������
  t->CustFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));

  return t;
};

//��ѯ��Ϻ�Լ����
PyObject * new_CThostFtdcQryCombinationLegField(KingstarAPI::CThostFtdcQryCombinationLegField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryCombinationLegField", (char*)"sis",
p->LegInstrumentID, p->LegID, p->CombInstrumentID);
}
KingstarAPI::CThostFtdcQryCombinationLegField * from_CThostFtdcQryCombinationLegField(PyObject * p){
  KingstarAPI::CThostFtdcQryCombinationLegField *t = (KingstarAPI::CThostFtdcQryCombinationLegField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryCombinationLegField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryCombinationLegField));
  //���Ⱥ�Լ����
  strcpy(t->LegInstrumentID, PyString_AsString(PyObject_GetAttrString(p, "LegInstrumentID")));
  //���ȱ��
  t->LegID =   PyInt_AsLong(PyObject_GetAttrString(p, "LegID"));
  //��Ϻ�Լ����
  strcpy(t->CombInstrumentID, PyString_AsString(PyObject_GetAttrString(p, "CombInstrumentID")));

  return t;
};

//��������֤����
PyObject * new_CThostFtdcExchangeMarginRateField(KingstarAPI::CThostFtdcExchangeMarginRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcExchangeMarginRateField", (char*)"sddcsdd",
p->InstrumentID, p->ShortMarginRatioByMoney, p->LongMarginRatioByMoney, p->HedgeFlag, p->BrokerID, p->ShortMarginRatioByVolume, p->LongMarginRatioByVolume);
}
KingstarAPI::CThostFtdcExchangeMarginRateField * from_CThostFtdcExchangeMarginRateField(PyObject * p){
  KingstarAPI::CThostFtdcExchangeMarginRateField *t = (KingstarAPI::CThostFtdcExchangeMarginRateField *)calloc(1, sizeof(KingstarAPI::CThostFtdcExchangeMarginRateField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcExchangeMarginRateField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //��ͷ��֤����
  t->ShortMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByMoney"));
  //��ͷ��֤����
  t->LongMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByMoney"));
  //Ͷ���ױ���־
  //enum����
  //THOST_FTDC_HF_Speculation -> '1', Ͷ��
  //THOST_FTDC_HF_Arbitrage -> '2', ����
  //THOST_FTDC_HF_Hedge -> '3', �ױ�
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //��ͷ��֤���
  t->ShortMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByVolume"));
  //��ͷ��֤���
  t->LongMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByVolume"));

  return t;
};

//�����ļ���������
PyObject * new_CThostFtdcReqDayEndFileReadyField(KingstarAPI::CThostFtdcReqDayEndFileReadyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqDayEndFileReadyField", (char*)"csscssssisssis",
p->FileBusinessCode, p->TradeDate, p->TradeCode, p->LastFragment, p->BrokerBranchID, p->BankSerial, p->BankBranchID, p->TradingDay, p->SessionID, p->BrokerID, p->BankID, p->TradeTime, p->PlateSerial, p->Digest);
}
KingstarAPI::CThostFtdcReqDayEndFileReadyField * from_CThostFtdcReqDayEndFileReadyField(PyObject * p){
  KingstarAPI::CThostFtdcReqDayEndFileReadyField *t = (KingstarAPI::CThostFtdcReqDayEndFileReadyField *)calloc(1, sizeof(KingstarAPI::CThostFtdcReqDayEndFileReadyField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcReqDayEndFileReadyField));
  //�ļ�ҵ����
  //enum����
  //THOST_FTDC_FBC_TransferDetails -> '1', ת�˽�����ϸ����
  //THOST_FTDC_FBC_FutureAccountChangeInfoDetails -> '4', �ڻ��˻���Ϣ�����ϸ����
  //THOST_FTDC_FBC_CustMoneyDetail -> '5', �ͻ��ʽ�̨�������ϸ����
  //THOST_FTDC_FBC_MainPartMonitorData -> 'd', �ܷ�ƽ��������
  //THOST_FTDC_FBC_CustAccStatus -> '2', �ͻ��˻�״̬����
  //THOST_FTDC_FBC_PreparationMoney -> 'e', ������б��������
  //THOST_FTDC_FBC_CustMoneySendAndReceiveDetails -> 'a', �ͻ��ʽ�����ϸ
  //THOST_FTDC_FBC_MainbodyMoneyTotal -> 'c', ������ʽ��ջ���
  //THOST_FTDC_FBC_BankMoneyMonitorData -> 'f', Э���������ʽ�������
  //THOST_FTDC_FBC_AccountTradeDetails -> '3', �˻��ཻ����ϸ����
  //THOST_FTDC_FBC_CustInterestNetMoneyDetails -> '9', �ͻ���Ϣ������ϸ
  //THOST_FTDC_FBC_OthersExceptionResult -> '8', ���������쳣����ļ�
  //THOST_FTDC_FBC_Others -> '0', ����
  //THOST_FTDC_FBC_CorporationMoneyTotal -> 'b', ���˴�������ʽ��ջ���
  //THOST_FTDC_FBC_CustMoneyResult -> '7', �ͻ��ʽ������˽��
  //THOST_FTDC_FBC_CustCancelAccountInfo -> '6', �ͻ�������Ϣ��ϸ����
  t->FileBusinessCode =   PyString_AsString(PyObject_GetAttrString(p, "FileBusinessCode"))[0];
  //��������
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //ҵ������
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //����Ƭ��־
  //enum����
  //THOST_FTDC_LF_No -> '1', ��������Ƭ
  //THOST_FTDC_LF_Yes -> '0', ������Ƭ
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //���̷�֧��������
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //������ˮ��
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //���з�֧��������
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //����ϵͳ����
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //�Ự��
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //���̴���
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //����ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //����ƽ̨��Ϣ��ˮ��
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //ժҪ
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

  return t;
};

//��ѯ�ʽ��˻�
PyObject * new_CThostFtdcQryTradingAccountField(KingstarAPI::CThostFtdcQryTradingAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryTradingAccountField", (char*)"ss",
p->InvestorID, p->BrokerID);
}
KingstarAPI::CThostFtdcQryTradingAccountField * from_CThostFtdcQryTradingAccountField(PyObject * p){
  KingstarAPI::CThostFtdcQryTradingAccountField *t = (KingstarAPI::CThostFtdcQryTradingAccountField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryTradingAccountField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryTradingAccountField));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//�û�Ȩ��
PyObject * new_CThostFtdcUserRightField(KingstarAPI::CThostFtdcUserRightField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcUserRightField", (char*)"cssi",
p->UserRightType, p->UserID, p->BrokerID, p->IsForbidden);
}
KingstarAPI::CThostFtdcUserRightField * from_CThostFtdcUserRightField(PyObject * p){
  KingstarAPI::CThostFtdcUserRightField *t = (KingstarAPI::CThostFtdcUserRightField *)calloc(1, sizeof(KingstarAPI::CThostFtdcUserRightField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcUserRightField));
  //�ͻ�Ȩ������
  //enum����
  //THOST_FTDC_URT_EMail -> '3', �ʼĽ��㵥
  //THOST_FTDC_URT_Logon -> '1', ��¼
  //THOST_FTDC_URT_Transfer -> '2', ����ת��
  //THOST_FTDC_URT_Fax -> '4', ������㵥
  //THOST_FTDC_URT_ConditionOrder -> '5', ������
  t->UserRightType =   PyString_AsString(PyObject_GetAttrString(p, "UserRightType"))[0];
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //�Ƿ��ֹ
  t->IsForbidden =   PyInt_AsLong(PyObject_GetAttrString(p, "IsForbidden"));

  return t;
};

//���뱨��
PyObject * new_CThostFtdcInputOrderField(KingstarAPI::CThostFtdcInputOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInputOrderField", (char*)"cssdiciccidsicssssssci",
p->ContingentCondition, p->CombOffsetFlag, p->UserID, p->LimitPrice, p->UserForceClose, p->Direction, p->VolumeTotalOriginal, p->OrderPriceType, p->TimeCondition, p->IsAutoSuspend, p->StopPrice, p->InstrumentID, p->MinVolume, p->ForceCloseReason, p->BrokerID, p->CombHedgeFlag, p->GTDDate, p->BusinessUnit, p->OrderRef, p->InvestorID, p->VolumeCondition, p->RequestID);
}
KingstarAPI::CThostFtdcInputOrderField * from_CThostFtdcInputOrderField(PyObject * p){
  KingstarAPI::CThostFtdcInputOrderField *t = (KingstarAPI::CThostFtdcInputOrderField *)calloc(1, sizeof(KingstarAPI::CThostFtdcInputOrderField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcInputOrderField));
  //��������
  //enum����
  //THOST_FTDC_CC_BidPriceGreaterThanStopPrice -> 'D', ��һ�۴���������
  //THOST_FTDC_CC_AskPriceLesserEqualStopPrice -> 'C', ��һ��С�ڵ���������
  //THOST_FTDC_CC_AskPriceGreaterThanStopPrice -> '9', ��һ�۴���������
  //THOST_FTDC_CC_LastPriceLesserThanStopPrice -> '7', ���¼�С��������
  //THOST_FTDC_CC_LastPriceGreaterEqualStopPrice -> '6', ���¼۴��ڵ���������
  //THOST_FTDC_CC_BidPriceGreaterEqualStopPrice -> 'E', ��һ�۴��ڵ���������
  //THOST_FTDC_CC_LastPriceLesserEqualStopPrice -> '8', ���¼�С�ڵ���������
  //THOST_FTDC_CC_TouchProfit -> '3', ֹӮ
  //THOST_FTDC_CC_ParkedOrder -> '4', Ԥ��
  //THOST_FTDC_CC_AskPriceGreaterEqualStopPrice -> 'A', ��һ�۴��ڵ���������
  //THOST_FTDC_CC_BidPriceLesserEqualStopPrice -> 'H', ��һ��С�ڵ���������
  //THOST_FTDC_CC_LastPriceGreaterThanStopPrice -> '5', ���¼۴���������
  //THOST_FTDC_CC_BidPriceLesserThanStopPrice -> 'F', ��һ��С��������
  //THOST_FTDC_CC_AskPriceLesserThanStopPrice -> 'B', ��һ��С��������
  //THOST_FTDC_CC_Immediately -> '1', ����
  //THOST_FTDC_CC_Touch -> '2', ֹ��
  t->ContingentCondition =   PyString_AsString(PyObject_GetAttrString(p, "ContingentCondition"))[0];
  //��Ͽ�ƽ��־
  strcpy(t->CombOffsetFlag, PyString_AsString(PyObject_GetAttrString(p, "CombOffsetFlag")));
  //�û�����
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //�۸�
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //�û�ǿ����־
  t->UserForceClose =   PyInt_AsLong(PyObject_GetAttrString(p, "UserForceClose"));
  //��������
  //enum����
  //THOST_FTDC_D_Buy -> '0', ��
  //THOST_FTDC_D_Sell -> '1', ��
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //����
  t->VolumeTotalOriginal =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
  //�����۸�����
  //enum����
  //THOST_FTDC_OPT_AskPrice1PlusTwoTicks -> 'A', ��һ�۸����ϸ�2��ticks
  //THOST_FTDC_OPT_LastPricePlusTwoTicks -> '6', ���¼۸����ϸ�2��ticks
  //THOST_FTDC_OPT_AskPrice1PlusOneTicks -> '9', ��һ�۸����ϸ�1��ticks
  //THOST_FTDC_OPT_BidPrice1 -> 'C', ��һ��
  //THOST_FTDC_OPT_LimitPrice -> '2', �޼�
  //THOST_FTDC_OPT_LastPricePlusOneTicks -> '5', ���¼۸����ϸ�1��ticks
  //THOST_FTDC_OPT_LastPrice -> '4', ���¼�
  //THOST_FTDC_OPT_AskPrice1 -> '8', ��һ��
  //THOST_FTDC_OPT_AskPrice1PlusThreeTicks -> 'B', ��һ�۸����ϸ�3��ticks
  //THOST_FTDC_OPT_AnyPrice -> '1', �����
  //THOST_FTDC_OPT_BestPrice -> '3', ���ż�
  //THOST_FTDC_OPT_LastPricePlusThreeTicks -> '7', ���¼۸����ϸ�3��ticks
  //THOST_FTDC_OPT_BidPrice1PlusOneTicks -> 'D', ��һ�۸����ϸ�1��ticks
  //THOST_FTDC_OPT_BidPrice1PlusTwoTicks -> 'E', ��һ�۸����ϸ�2��ticks
  //THOST_FTDC_OPT_BidPrice1PlusThreeTicks -> 'F', ��һ�۸����ϸ�3��ticks
  t->OrderPriceType =   PyString_AsString(PyObject_GetAttrString(p, "OrderPriceType"))[0];
  //��Ч������
  //enum����
  //THOST_FTDC_TC_GTC -> '5', ����ǰ��Ч
  //THOST_FTDC_TC_GTD -> '4', ָ������ǰ��Ч
  //THOST_FTDC_TC_GFD -> '3', ������Ч
  //THOST_FTDC_TC_GFA -> '6', ���Ͼ�����Ч
  //THOST_FTDC_TC_IOC -> '1', ������ɣ�������
  //THOST_FTDC_TC_GFS -> '2', ������Ч
  t->TimeCondition =   PyString_AsString(PyObject_GetAttrString(p, "TimeCondition"))[0];
  //�Զ������־
  t->IsAutoSuspend =   PyInt_AsLong(PyObject_GetAttrString(p, "IsAutoSuspend"));
  //ֹ���
  t->StopPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StopPrice"));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //��С�ɽ���
  t->MinVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MinVolume"));
  //ǿƽԭ��
  //enum����
  //THOST_FTDC_FCC_PersonDeliv -> '7', ��Ȼ���ٽ�����
  //THOST_FTDC_FCC_ClientOverPositionLimit -> '2', �ͻ�����
  //THOST_FTDC_FCC_NotForceClose -> '0', ��ǿƽ
  //THOST_FTDC_FCC_NotMultiple -> '4', �ֲַ�������
  //THOST_FTDC_FCC_MemberOverPositionLimit -> '3', ��Ա����
  //THOST_FTDC_FCC_LackDeposit -> '1', �ʽ���
  //THOST_FTDC_FCC_Other -> '6', ����
  //THOST_FTDC_FCC_Violation -> '5', Υ��
  t->ForceCloseReason =   PyString_AsString(PyObject_GetAttrString(p, "ForceCloseReason"))[0];
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //���Ͷ���ױ���־
  strcpy(t->CombHedgeFlag, PyString_AsString(PyObject_GetAttrString(p, "CombHedgeFlag")));
  //GTD����
  strcpy(t->GTDDate, PyString_AsString(PyObject_GetAttrString(p, "GTDDate")));
  //ҵ��Ԫ
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //��������
  strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //�ɽ�������
  //enum����
  //THOST_FTDC_VC_MV -> '2', ��С����
  //THOST_FTDC_VC_CV -> '3', ȫ������
  //THOST_FTDC_VC_AV -> '1', �κ�����
  t->VolumeCondition =   PyString_AsString(PyObject_GetAttrString(p, "VolumeCondition"))[0];
  //������
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));

  return t;
};

//��֤�ڻ��ʽ�����
PyObject * new_CThostFtdcVerifyFuturePasswordField(KingstarAPI::CThostFtdcVerifyFuturePasswordField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcVerifyFuturePasswordField", (char*)"sssscsssssiissisis",
p->BankAccount, p->Password, p->TradeDate, p->TradeCode, p->LastFragment, p->BrokerBranchID, p->BankSerial, p->BankBranchID, p->BankPassWord, p->TradingDay, p->SessionID, p->InstallID, p->BrokerID, p->BankID, p->TID, p->TradeTime, p->PlateSerial, p->AccountID);
}
KingstarAPI::CThostFtdcVerifyFuturePasswordField * from_CThostFtdcVerifyFuturePasswordField(PyObject * p){
  KingstarAPI::CThostFtdcVerifyFuturePasswordField *t = (KingstarAPI::CThostFtdcVerifyFuturePasswordField *)calloc(1, sizeof(KingstarAPI::CThostFtdcVerifyFuturePasswordField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcVerifyFuturePasswordField));
  //�����ʺ�
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //�ڻ�����
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //��������
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //ҵ������
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //����Ƭ��־
  //enum����
  //THOST_FTDC_LF_No -> '1', ��������Ƭ
  //THOST_FTDC_LF_Yes -> '0', ������Ƭ
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //���̷�֧��������
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //������ˮ��
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //���з�֧��������
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //��������
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //����ϵͳ����
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //�Ự��
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //���̴���
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //����ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //����ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //����ƽ̨��Ϣ��ˮ��
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //Ͷ�����ʺ�
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));

  return t;
};

//����ͬ���е�Ͷ���ֲ߳�
PyObject * new_CThostFtdcSyncingInvestorPositionField(KingstarAPI::CThostFtdcSyncingInvestorPositionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncingInvestorPositionField", (char*)"ddcdddiddidcidiidscddiiiisdsdddididddsdd",
p->ShortFrozenAmount, p->FrozenMargin, p->HedgeFlag, p->PositionProfit, p->Commission, p->MarginRateByVolume, p->CombPosition, p->CashIn, p->PreSettlementPrice, p->CombLongFrozen, p->CloseAmount, p->PosiDirection, p->YdPosition, p->MarginRateByMoney, p->OpenVolume, p->CloseVolume, p->ExchangeMargin, p->InstrumentID, p->PositionDate, p->CloseProfitByTrade, p->PreMargin, p->SettlementID, p->ShortFrozen, p->LongFrozen, p->TodayPosition, p->TradingDay, p->PositionCost, p->BrokerID, p->FrozenCash, p->OpenAmount, p->OpenCost, p->Position, p->FrozenCommission, p->CombShortFrozen, p->CloseProfitByDate, p->SettlementPrice, p->LongFrozenAmount, p->InvestorID, p->CloseProfit, p->UseMargin);
}
KingstarAPI::CThostFtdcSyncingInvestorPositionField * from_CThostFtdcSyncingInvestorPositionField(PyObject * p){
  KingstarAPI::CThostFtdcSyncingInvestorPositionField *t = (KingstarAPI::CThostFtdcSyncingInvestorPositionField *)calloc(1, sizeof(KingstarAPI::CThostFtdcSyncingInvestorPositionField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcSyncingInvestorPositionField));
  //���ֶ�����
  t->ShortFrozenAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortFrozenAmount"));
  //����ı�֤��
  t->FrozenMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenMargin"));
  //Ͷ���ױ���־
  //enum����
  //THOST_FTDC_HF_Speculation -> '1', Ͷ��
  //THOST_FTDC_HF_Arbitrage -> '2', ����
  //THOST_FTDC_HF_Hedge -> '3', �ױ�
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //�ֲ�ӯ��
  t->PositionProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfit"));
  //������
  t->Commission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Commission"));
  //��֤����(������)
  t->MarginRateByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByVolume"));
  //��ϳɽ��γɵĳֲ�
  t->CombPosition =   PyInt_AsLong(PyObject_GetAttrString(p, "CombPosition"));
  //�ʽ���
  t->CashIn =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CashIn"));
  //�ϴν����
  t->PreSettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreSettlementPrice"));
  //��϶�ͷ����
  t->CombLongFrozen =   PyInt_AsLong(PyObject_GetAttrString(p, "CombLongFrozen"));
  //ƽ�ֽ��
  t->CloseAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseAmount"));
  //�ֲֶ�շ���
  //enum����
  //THOST_FTDC_PD_Net -> '1', ��
  //THOST_FTDC_PD_Short -> '3', ��ͷ
  //THOST_FTDC_PD_Long -> '2', ��ͷ
  t->PosiDirection =   PyString_AsString(PyObject_GetAttrString(p, "PosiDirection"))[0];
  //���ճֲ�
  t->YdPosition =   PyInt_AsLong(PyObject_GetAttrString(p, "YdPosition"));
  //��֤����
  t->MarginRateByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByMoney"));
  //������
  t->OpenVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "OpenVolume"));
  //ƽ����
  t->CloseVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "CloseVolume"));
  //��������֤��
  t->ExchangeMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeMargin"));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //�ֲ�����
  //enum����
  //THOST_FTDC_PSD_Today -> '1', ���ճֲ�
  //THOST_FTDC_PSD_History -> '2', ��ʷ�ֲ�
  t->PositionDate =   PyString_AsString(PyObject_GetAttrString(p, "PositionDate"))[0];
  //��ʶԳ�ƽ��ӯ��
  t->CloseProfitByTrade =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfitByTrade"));
  //�ϴ�ռ�õı�֤��
  t->PreMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreMargin"));
  //������
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //��ͷ����
  t->ShortFrozen =   PyInt_AsLong(PyObject_GetAttrString(p, "ShortFrozen"));
  //��ͷ����
  t->LongFrozen =   PyInt_AsLong(PyObject_GetAttrString(p, "LongFrozen"));
  //���ճֲ�
  t->TodayPosition =   PyInt_AsLong(PyObject_GetAttrString(p, "TodayPosition"));
  //������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //�ֲֳɱ�
  t->PositionCost =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionCost"));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //������ʽ�
  t->FrozenCash =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCash"));
  //���ֽ��
  t->OpenAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenAmount"));
  //���ֳɱ�
  t->OpenCost =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenCost"));
  //���ճֲ�
  t->Position =   PyInt_AsLong(PyObject_GetAttrString(p, "Position"));
  //�����������
  t->FrozenCommission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCommission"));
  //��Ͽ�ͷ����
  t->CombShortFrozen =   PyInt_AsLong(PyObject_GetAttrString(p, "CombShortFrozen"));
  //���ն���ƽ��ӯ��
  t->CloseProfitByDate =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfitByDate"));
  //���ν����
  t->SettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SettlementPrice"));
  //���ֶ�����
  t->LongFrozenAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongFrozenAmount"));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //ƽ��ӯ��
  t->CloseProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfit"));
  //ռ�õı�֤��
  t->UseMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "UseMargin"));

  return t;
};

//��ѯͶ���߽�����
PyObject * new_CThostFtdcQrySettlementInfoField(KingstarAPI::CThostFtdcQrySettlementInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQrySettlementInfoField", (char*)"sss",
p->InvestorID, p->BrokerID, p->TradingDay);
}
KingstarAPI::CThostFtdcQrySettlementInfoField * from_CThostFtdcQrySettlementInfoField(PyObject * p){
  KingstarAPI::CThostFtdcQrySettlementInfoField *t = (KingstarAPI::CThostFtdcQrySettlementInfoField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQrySettlementInfoField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQrySettlementInfoField));
  //Ͷ���ߴ���
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //���͹�˾����
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //������
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));

  return t;
};

//����ǩ����Ӧ
PyObject * new_CThostFtdcRspFutureSignInField(KingstarAPI::CThostFtdcRspFutureSignInField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspFutureSignInField", (char*)"sssiisssissiissssssssciss",
p->BrokerBranchID, p->UserID, p->TradeTime, p->TID, p->InstallID, p->PinKey, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->MacKey, p->PlateSerial, p->ErrorID, p->BankSerial, p->OperNo, p->TradingDay, p->BrokerID, p->DeviceID, p->TradeDate, p->CurrencyID, p->ErrorMsg, p->LastFragment, p->RequestID, p->BrokerIDByBank, p->Digest);
}
KingstarAPI::CThostFtdcRspFutureSignInField * from_CThostFtdcRspFutureSignInField(PyObject * p){
  KingstarAPI::CThostFtdcRspFutureSignInField *t = (KingstarAPI::CThostFtdcRspFutureSignInField *)calloc(1, sizeof(KingstarAPI::CThostFtdcRspFutureSignInField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcRspFutureSignInField));
  //���̷�֧��������
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //�û���ʶ
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //����ʱ��
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //����ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //��װ���
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //PIN��Կ
  strcpy(t->PinKey, PyString_AsString(PyObject_GetAttrString(p, "PinKey")));
  //ҵ������
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //���з�֧��������
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //�Ự��
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //���д���
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //MAC��Կ
  strcpy(t->MacKey, PyString_AsString(PyObject_GetAttrString(p, "MacKey")));
  //����ƽ̨��Ϣ��ˮ��
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //�������
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //������ˮ��
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //���׹�Ա
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //����ϵͳ����
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //���̴���
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //������־
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //��������
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //���ִ���
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //������Ϣ
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //����Ƭ��־
  //enum����
  //THOST_FTDC_LF_No -> '1', ��������Ƭ
  //THOST_FTDC_LF_Yes -> '0', ������Ƭ
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //������
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //�ڻ���˾���б���
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //ժҪ
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

  return t;
};

//��ѯ��Լ
PyObject * new_CThostFtdcQryInstrumentField(KingstarAPI::CThostFtdcQryInstrumentField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInstrumentField", (char*)"ssss",
p->InstrumentID, p->ExchangeID, p->ExchangeInstID, p->ProductID);
}
KingstarAPI::CThostFtdcQryInstrumentField * from_CThostFtdcQryInstrumentField(PyObject * p){
  KingstarAPI::CThostFtdcQryInstrumentField *t = (KingstarAPI::CThostFtdcQryInstrumentField *)calloc(1, sizeof(KingstarAPI::CThostFtdcQryInstrumentField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcQryInstrumentField));
  //��Լ����
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //����������
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //��Լ�ڽ������Ĵ���
  strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
  //��Ʒ����
  strcpy(t->ProductID, PyString_AsString(PyObject_GetAttrString(p, "ProductID")));

  return t;
};

//�������ż�����
PyObject * new_CThostFtdcMarketDataBestPriceField(KingstarAPI::CThostFtdcMarketDataBestPriceField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataBestPriceField", (char*)"iddi",
p->AskVolume1, p->BidPrice1, p->AskPrice1, p->BidVolume1);
}
KingstarAPI::CThostFtdcMarketDataBestPriceField * from_CThostFtdcMarketDataBestPriceField(PyObject * p){
  KingstarAPI::CThostFtdcMarketDataBestPriceField *t = (KingstarAPI::CThostFtdcMarketDataBestPriceField *)calloc(1, sizeof(KingstarAPI::CThostFtdcMarketDataBestPriceField));
  memset(t,0,sizeof(KingstarAPI::CThostFtdcMarketDataBestPriceField));
  //������һ
  t->AskVolume1 =   PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume1"));
  //�����һ
  t->BidPrice1 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice1"));
  //������һ
  t->AskPrice1 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice1"));
  //������һ
  t->BidVolume1 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume1"));

  return t;
};
