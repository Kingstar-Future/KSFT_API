#include <SDKDDKVer.h>
#include <iostream>
#include <sstream>
#include <windows.h>


// ���Ҫ����KS_Spy�ӿڣ�������һ�ּ��׵ı�׼д������ע��
#include "KS_Spy.h"
#include "KS_Json.h"

#ifdef _DEBUG
#pragma comment(lib, "KS_Spyd.lib")
#pragma message("Automatically linking with KS_Spyd.lib")
#else
#pragma comment(lib, "KS_Spy.lib")
#pragma message("Automatically linking with KS_Spy.lib")
#endif

class testWatcher : public ISpyWatcher
{
public:
	// ������Ϣ��������Ը���
	testWatcher(std::string s){
		info = s;
	}
	/* �۲��¼��ص�������DataStatusΪ����״̬��SpyStateΪ�ӿڷ������*/
	virtual void OnWatchEvent(int DataStatus, int SpyState, const char* key){
		printf("[OnWatchEvent/%s] %d, %d @ %s\n",info.c_str(), DataStatus, SpyState, key);
	}
private:
	std::string info;
};

class testIRESTfulAPI : public IRESTfulAPI
{
public:
	virtual void OnGET_RESTful(const char* req, char *rsp, int max_size)
	{
		sprintf(rsp, "response GET : %s", req);
	}
	virtual void OnPOST_RESTful(const char* req, char *rsp, int max_size)
	{
		sprintf(rsp, "response POST : %s", req);
	}
	virtual void OnSET_RESTful(const char* req, char *rsp, int max_size)
	{
		sprintf(rsp, "response SET : %s", req);
	}
};

int main()
{
	char buf[1024];
	KS_Json *j = KS_Json::CreateJson();
	KS_Json *j2 = KS_Json::CreateJson();
	j->AddMember("key", "value11");
	j2->AddMember("j2_key", "werwer");
	j->AddMember("key2", j2);
	KS_Json *j4 = KS_Json::CreateJson();
	j4->AddValue("A1");
	j4->AddValue("A2");
	j4->AddValue("A3");
	j->AddMember("key4", j4);

	if (j->Export(buf, sizeof(buf)) > 0)
	{
		printf("json buf [%s]\n", buf);
//		getchar();
	}

	char str_json[] = "{ \"key\" : \"value11\",	 \"key2\" : { \"j2_key\" : \"werwee\" },\"key3\" : \"dasds\"}";
	KS_Json *j3 = KS_Json::CreateJson();
	j3->Import(str_json);
	if (j3->Export(buf, sizeof(buf)) > 0)
	{
		printf("j3 buf [%s]\n", buf);
//		getchar();
	}
	printf("test AddMember(\"lev1.lev2.lev3\",\"123\") \n");
//	getchar();
	j->AddMember("lev1.lev2.lev3","123");
	j->AddMember("lev1.lev2-2.lev3-1","34");
	j->AddMember("lev1.lev2-2.lev3-3","34");
	printf("j = %s\n", j->toStyledString().c_str());

//	getchar();

	// ��ʾAPI�汾��Ϣ
	printf("Hi, This is a Demo about KSFT_API4Spy[%s][BuildDate : %s], initting....\n", SpyVersion(), __DATE__);

	// ��ʼ������
	SpyInit();
	// ����web server
	SpyStartWebServer("http://127.0.0.1:8080");
	printf("WebServer Started @[%s].\n", "http://*:8080");

	// ��ʼ����д��һЩ��������

	SpyPut("InstrumentInfo/MarketInfo/LastPrice", KS_Json::CreateJson()->AddMember("value","21312")->toStyledString().c_str());
	SpyPut("InstrumentInfo/MarketInfo/TradedVolume", "2000");
	SpyPut("OrderInfo", KS_Json::CreateJson()->AddValue("21312")->AddValue("454654")->AddValue("324234")->AddValue("6842")->toStyledString().c_str());
	SpyPut("InstrumentInfo", "IF1403");
	SpyPut("Investor", j->toStyledString().c_str());
	SpyPut("OrderInfo/Volume", "2");
	SpyPut("OrderInfo/Price", "1001");
	SpyPut("InstrumentInfo/MarketInfo", "MarketInfo");
	
	// ���������ݲ��ԣ�д��һ����������
	char _sLarge[8*1024] = {0};
	for(int  i=0;i<sizeof(_sLarge)-1; i++)
		_sLarge[i] = '0' + i % 10;
	_sLarge[sizeof(_sLarge)-1] = '\0';
	SpyPut("LargeSizeTest", _sLarge);

	// ���Լ���������
	SpySetWatcher("", new testWatcher("root"), true);
	SpySetWatcher("OrderInfo", new testWatcher("OrderInfo"), true);
	SpySetWatcher("OrderInfo/Volume", new testWatcher("OrderInfoo/Volume"));
	SpySetWatcher("LargeSizeTest", new testWatcher("LargeSizeTest"));
	printf("Put some Watcher, ready Update value.\n");
//	getchar();

	SpyPut("OrderInfo", "1002");
	SpyPut("OrderInfo/Volume", "1890");
	for(int  i=0;i<sizeof(_sLarge)-1; i++){
		_sLarge[i] = '9' - i % 10;
		if (i % 10 == 0)
			_sLarge[i] = '\n';
	}
	_sLarge[sizeof(_sLarge)-1] = '\0';
	SpyPut("LargeSizeTest", _sLarge);
	printf("fire some Watcher, because Updated value.\n");

	SpyPut("TEST_RESTful", "TEST_RESTful");
	SpySetRESTfulAPI("TEST_RESTful", new testIRESTfulAPI());

//	getchar();

	// �����ݵ���
	SpyDumpAll();

//	getchar();
	printf("Put some Data, you can visit URL http://127.0.0.1:8080/index.html\n");

	printf("web server is RUNNING....,and Press any Key to [Exit].\n");

	getchar();

	printf("Thank you , stopping....\n");
	// �ر�web server
	SpyStopWebServer();
	// �ͷŻ���
	SpyFinalize();
	
	return 0;
}