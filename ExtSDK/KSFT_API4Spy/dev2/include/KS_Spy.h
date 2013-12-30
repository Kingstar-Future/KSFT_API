#ifndef __KS_SPY_H__
#define __KS_SPY_H__


#ifdef  __cplusplus
extern "C" {
#endif

#ifdef WIN32
#ifdef KS_SPY_EXPORTS
#define KS_SPY_DLL __declspec(dllexport)
#else
#define KS_SPY_DLL __declspec(dllimport)
#endif
#else
#define KS_SPY_DLL
#define _stdcall
#define __stdcall
#endif

//��������
#define		KS_SPY_API_INTER_OK	0        // ��ȷ
#define		KS_SPY_API_INTER_FAIL  -1     // ����
#define		KS_SPY_API_PATH_SPILT		"/"	//�ڵ�·���ָ���

/* �۲����ࣨ�ӿڣ����� */
class ISpyWatcher
{
public:
	/*
	����DataStatus��ȡֵ��Χ�ǣ��ӽڵ���NodeChildrenChanged���ڵ㱻����NodeCreated��
	�ڵ����ݱ��NodeDataChanged���ڵ㱻ɾ��NodeDeleted�����¼�None��
	
	SpyState��ȡֵ��Χ�ǣ����ӶϿ�Disconnected����֪��Unknown�����ֶ�Ϊδ��������չ��ֵ��Ŀǰ�ɲ�����
	*/
	typedef enum {
		NodeChildrenChanged = 1,	// �ӽڵ㷢������¼�
		NodeCreated = 2,			// �ڵ㱻�����¼�
		NodeDataChanged = 3,		// �ڵ����ݱ���¼�
		NodeDeleted = 4,			// �ڵ㱻ɾ���¼�
		None = 5					// δ֪�¼�
	}DataStatus;

	typedef enum {
		Connected = 0,				// ������̬
		Disconnected = 1,			// ���ӶϿ�̬
		Unknown = 2					// ��֪����״̬
	}SpyState;

public:
	/* �۲��¼��ص�������DataStatusΪ����״̬��SpyStateΪ�ӿڷ������*/
	virtual void OnWatchEvent(int DataStatus, int SpyState, const char* key) = 0;

};

/*
��Ϊ���׵�RESTful�ӿڶ��壬���ڽ���ͨ�Ľڵ���Ϣ����ת��Ϊ��̬�Ŀɶ��ƵĽ���������
�ڴ˷��ʻ����£��ӿ�ʹ�ý����ǣ�
1  ����Ժ�̨���ݽ���ֻ����ȡ���ʻ��޸�������ģ�Ӧ��ʹ��spy_get�ӿڣ�
2  ����Ժ�̨���ݽ��и��·��ʻ�Ӱ���̨�ؼ����еģ�Ӧ��ʹ��spy_set�ӿڣ�
3  ���ڽ����������Ϊͬ��ִ�з�ʽ�������̨����˴���Ҫ�ø�ģʽ��������ҵ��
4  �����������£���Ҫ�����첽���ʽ���ģʽ�ģ�һ�ֽ��������key����spy_set����Ȼ�����key����spy_get���ɽ��ж��spy_get�Ի�ȡ�첽���������
*/
class IRESTfulAPI
{
public:
	/********
	Ĭ��URL�����������rest_req���http://xxx/action/spy_get?key=·����&rest_req=������Ϣ��
	һ�㽨��rest_req����Ϣ����ʽΪJSON��������
	********/

	/* RESTful��spy_get/GET����ص�������reqΪ��������� rspΪӦ�����ݣ�max_sizeΪӦ�����ݿռ����󳤶�*/
	virtual void OnGET_RESTful(const char* req, char *rsp, int max_size) = 0;
	/* RESTfuldspy_get/POST����ص�������reqΪ��������� rspΪӦ�����ݣ�max_sizeΪӦ�����ݿռ����󳤶�*/
	virtual void OnPOST_RESTful(const char* req, char *rsp, int max_size) = 0;

	/********
	Ĭ��URL�����������value���http://xxx/action/spy_set?key=·����&value=������Ϣ��
	һ�㽨��value����Ϣ����ʽΪJSON��������
	********/
	/* RESTful��spy_set����ص�������reqΪ��������� rspΪӦ�����ݣ�max_sizeΪӦ�����ݿռ����󳤶�*/
	virtual void OnSET_RESTful(const char* req, char *rsp, int max_size) = 0;
};


// ��ʼ����API�������ȵ��ã�ʧ�ܷ���KS_SPY_API_INTER_FAIL�������ظ����ã�
KS_SPY_DLL int  _stdcall SpyInit();

// �ӿڰ汾�����2013-12-17
KS_SPY_DLL const char *  _stdcall SpyVersion();

// �����ͷŸ�API�����������ã������ظ����ã�
KS_SPY_DLL int  _stdcall SpyFinalize();

// ��������������ʱ������Spy���ⲿweb����Ĭ�������Spy�������� ������ʧ�ܷ���KS_SPY_API_INTER_FAIL��
KS_SPY_DLL int _stdcall  SpyStartWebServer(char *endpoints = "http://127.0.0.1:80");

// ����رգ�����ʱ���ر�Spy��web���񣬹ر�ʧ�ܷ���KS_SPY_API_INTER_FAIL��
KS_SPY_DLL int _stdcall  SpyStopWebServer();

// ��ȡ��ǰSpy����ʧ��ʱ�Ĵ������ʹ�����Ϣ�����û���򷵻�KS_SPY_API_INTER_FAIL��ÿ��������Ϣ��ȡ�󼴲��ٱ������ҵ�ǰֻ�������µ�һ����Ϣ��
KS_SPY_DLL int _stdcall SpyGetErrorInfo(int *err_code, char *info, int size);

// ��ȡSpy����ֵ������key�����û�ж�Ӧkey���򷵻�NULL
KS_SPY_DLL const char* _stdcall SpyGet(const char *key);

// ����Spy����ֵ������key���������ʧ�ܣ��򷵻�KS_SPY_API_INTER_FAIL
KS_SPY_DLL int _stdcall SpyPut(const char *key, const char *value);

// ɾ��Spy���ݣ�����key�����û�ж�Ӧkey���򷵻�KS_SPY_API_INTER_FAIL, recursiveΪ��ʱ��ͬʱ���key�����ĳ�Աkey���ݣ�
KS_SPY_DLL int _stdcall SpyDelete(char *key, bool recursive=false);

// �������Spy���ݣ������������������������ܣ�������ʧ�ܣ��򷵻�KS_SPY_API_INTER_FAIL
KS_SPY_DLL int _stdcall SpyClearAll();

// ��������Spy����ֵ����ʽΪ(key,value)���ϣ��������ʧ�ܣ��򷵻�KS_SPY_API_INTER_FAIL
KS_SPY_DLL int _stdcall SpyDumpAll(char *file_name="ksft_api4spy_dump.txt" );

// ��ȡ���ṹ
KS_SPY_DLL const char* _stdcall SpyDumpTreeStruct();

// ���ù۲�����watcherΪ�۲�������ָ�룬recursive��ʶ�����Ƿ�۲��ӽڵ��¼���Ĭ�ϲ�����۲�
KS_SPY_DLL int _stdcall SpySetWatcher(char *key, ISpyWatcher *watcher, bool recursive = false);

// ����RESTful�ӿڶ���
KS_SPY_DLL int _stdcall SpySetRESTfulAPI(char *key, IRESTfulAPI *api);

#ifdef  __cplusplus
}
#endif

#endif //__KS_SPY_H__




