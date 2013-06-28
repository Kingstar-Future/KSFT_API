/**
 *@file event.h
 *������windows��linuxͨ�õ��¼�������¼������Ľӿ�
 *@author xdhu
 *ϵͳ����API���Գ���
 *��˾����ʤ�ƽ��˴�
 *�޸���ʷ��
 *20121106  ����
 */
#ifndef _HIK_EVENT_H_    
#define _HIK_EVENT_H_   
  
#ifdef _MSC_VER   
#include <Windows.h>   
#define event_handle HANDLE   
#else   
#include <pthread.h>   
typedef struct    
{  
    bool state;  
    bool manual_reset;  
    pthread_mutex_t mutex;  
    pthread_cond_t cond;  
}event_t;  
#define event_handle event_t*   
#endif   
  
//����ֵ NULL  ����
event_handle event_create(bool manual_reset, bool init_state);  
  
//����ֵ0 ���ȵ��¼���  -1  ���� 
int event_wait(event_handle hevent);  
  
//����ֵ0���ȵ��¼��� 1����ʱ�� -1������
int event_timedwait(event_handle hevent, long milliseconds);  
  
//����ֵ0���ɹ��� -1 ����
int event_set(event_handle hevent);  
  
//����ֵ��0 �ȵ��¼���1 ��ʱ��-1����
int event_reset(event_handle hevent);  
  
//����ֵ ����
void event_destroy(event_handle hevent);  
  
#endif   

