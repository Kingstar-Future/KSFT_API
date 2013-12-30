// KS_Spy.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"

#include "SpyTree.h"
#include <iostream>
#include <fstream>
#include "KS_Spy.h"
#include "KS_Json.h"

#ifdef __cplusplus
extern "C" {
#endif

#include "goahead.h"
#include "js.h"

#ifdef __cplusplus
}
#endif

#include "boost/thread/thread.hpp"
#include "SpyContext.h"


using namespace KS_SPY;

#define SPY_VERSION "0.2.1"

void StartWatcherEevntThread()
{
	if (SpyContext::getInstance()->IsWatching())
		return;

	SpyContext::getInstance()->StartedWatch();

	while(SpyContext::getInstance()->IsWatching())
	{
		if (!SpyContext::getInstance()->fireWatchEvent())
			Sleep(10);
	}

	SpyContext::getInstance()->StopedWatch();

}

KS_SPY_DLL int  _stdcall SpyInit()
{
	// 启动watcher 事件处理线程
	SpyContext::getInstance()->getThreadPool().push_back(new boost::thread(&StartWatcherEevntThread));

	SpyContext::getInstance()->setEndpoints(BIT_GOAHEAD_LISTEN);
	return KS_SPY_API_INTER_OK;
}

KS_SPY_DLL const char *  _stdcall SpyVersion()
{
	return SPY_VERSION;
}

KS_SPY_DLL int  _stdcall SpyFinalize()
{
	SpyContext::getInstance()->StopWatch();

	boost::mutex::scoped_lock lock(SpyContext::getInstance()->getMutex());
	CSpyTree::Instance().Terminate();
	for (auto it = SpyContext::getInstance()->getThreadPool().begin(); it != SpyContext::getInstance()->getThreadPool().end(); ++it)
	{
		(*it)->join();
		delete *it;
	}
	SpyContext::getInstance()->getThreadPool().clear();
	return KS_SPY_API_INTER_OK;
}


static bool RelocateHandler(Webs *wp)
{
	printf("call RelocateHandler %s,%s\n",wp->path, websGetDir(wp) );
	if (smatch(wp->path, "/test")) {
		//WriteWebPage(wp, "main.html");
		if (0 != websRewriteRequest(wp, "/index.html"))
		{
			printf("RelocateHandler Fail %s,%s\n",wp->path, websGetDir(wp) );
		}else{
			
			printf("RelocateHandler Success 	%s,%s\n",wp->path, websGetDir(wp) );
		}
		/* Fall through  确实无法准确完成*/
	}
	return 0;
}

static void WebSpyError(Webs *wp, int err_code, char *error_info) 
{
	websSetStatus(wp, 200); 
	websWriteHeaders(wp, -1, 0); 
	websWriteHeader(wp, "Content-type", "text/json"); 
	websWriteHeader(wp, "charset",		SpyContext::getInstance()->getEncode()); 
	websWriteEndHeaders(wp); 

	char code[10] = {0};
	sprintf(code, "%9d", err_code);
	KS_Json *js = KS_Json::CreateJson()->AddMember("ERR_CODE", code)->AddMember("ERR_INFO", error_info);

	websWrite(wp, const_cast<char *>(js->toStyledString().c_str())); 

	websDone(wp);

	js->Release();
}

static int WebActionSpyGetAll(Webs *wp, char *path, char *query)
{
	websSetStatus(wp, 200); 
	websWriteHeaders(wp, -1, 0); 
	websWriteHeader(wp, "Content-type", "text/html"); 
	websWriteHeader(wp, "charset",		SpyContext::getInstance()->getEncode()); 
	websWriteEndHeaders(wp); 

	boost::mutex::scoped_lock lock(SpyContext::getInstance()->getMutex());

	std::string value = CSpyTree::Instance().GetSpyTreeStruct(CSpyTree::Instance().GetRoot());
		websWrite(wp, "<html><body><pre>\n"); 
	websWrite(wp, const_cast<char*>(value.c_str())); 
		websWrite(wp, "\n</pre></body></html>"); 

	websDone(wp);
	return 0;
}

/***
获取节点数据
其URL的参数格式为，http://xx.xx.xx.xx:8080/spy_get?key=KEYSTR，
其中参数是key，取值KEYSTR为前面所定义的key值，请求返回数据为key所存储的value，其值为JSON格式；
***/
static void WebActionSpyGetNode(Webs *wp, char *path, char *query) 
{ 
	const char* name = websGetVar(wp, "key", NULL); 
	if (name==NULL) 
		name = "";

	boost::mutex::scoped_lock lock(SpyContext::getInstance()->getMutex());

	CSpyTreeNode* node = CSpyTree::Instance().FindTreeNode(name);
	if (NULL == node)
		return WebSpyError(wp, 1001, "Key not Exist");

	// 判断当前节点是否支持RESTful请求
	if (NULL != node->GetRESTfulAPI())
	{
		websSetStatus(wp, 200); 
		websWriteHeaders(wp, -1, 0); 
		websWriteHeader(wp, "Content-type", "text/json"); 
		websWriteHeader(wp, "Cache-Control", "no-cache, no-store, must-revalidate"); 
		websWriteHeader(wp, "Pragma", "no-cache"); 
		websWriteHeader(wp, "charset",		SpyContext::getInstance()->getEncode()); 
		websWriteEndHeaders(wp); 

		char rsp[1024] = {0};
		// 判断不同的请求方式
		if (scaselessmatch(wp->method, "POST")) {
			node->GetRESTfulAPI()->OnPOST_RESTful(
				const_cast<char *>(websGetVar(wp, "rest_req", NULL)),
				rsp, sizeof(rsp)
				);
		}else{
			node->GetRESTfulAPI()->OnGET_RESTful(
				const_cast<char *>(websGetVar(wp, "rest_req", NULL)),
				rsp, sizeof(rsp)
				);
		}
		// 输出应答数据
		websWrite(wp, rsp); 
		websDone(wp);

		return;
	}

	websSetStatus(wp, 200); 
	websWriteHeaders(wp, -1, 0); 
	websWriteHeader(wp, "Content-type", "text/json"); 
	websWriteHeader(wp, "charset",		SpyContext::getInstance()->getEncode()); 
	websWriteEndHeaders(wp); 

	websWrite(wp, const_cast<char*>(node->GetValue().c_str())); 

	websDone(wp);
}
/**
	设置节点的数据，
	其URL的参数格式为，http://xx.xx.xx.xx:8080/action/spy_set?key=KEYSTR&value=VALUESTR， 其中参数是key，
	取值KEYSTR为前面所定义的key值；参数value为取值数据，KEYSTR和VALUESTR 其值类型为JSON格式，
	该请求为设置功能；考虑VALUESTR的取值复杂性，应该支持POST和GET两种http方式；
**/
static void WebActionSpySetNode(Webs *wp, char *path, char *query) 
{ 
	const char* name = websGetVar(wp, "key", NULL); 
	const char* key_value = websGetVar(wp, "value", NULL); 
	if (name==NULL) 
		name = "";

	boost::mutex::scoped_lock lock(SpyContext::getInstance()->getMutex());

	CSpyTreeNode* node = CSpyTree::Instance().GetTreeNode(name);
	if (NULL != node)
	{
		// 判断当前节点是否支持RESTful请求
		if (NULL != node->GetRESTfulAPI())
		{
			websSetStatus(wp, 200); 
			websWriteHeaders(wp, -1, 0); 
			websWriteHeader(wp, "Content-type", "text/json"); 
			websWriteHeader(wp, "Cache-Control", "no-cache, no-store, must-revalidate"); 
			websWriteHeader(wp, "Pragma", "no-cache"); 
			websWriteHeader(wp, "charset",		SpyContext::getInstance()->getEncode()); 
			websWriteEndHeaders(wp); 

			char rsp[1024] = {0};
			node->GetRESTfulAPI()->OnSET_RESTful(key_value,	rsp, sizeof(rsp));
			// 输出应答数据
			websWrite(wp, rsp); 
			websDone(wp);

			return;
		}

		websSetStatus(wp, 200); 
		websWriteHeaders(wp, -1, 0); 
		websWriteHeader(wp, "Content-type", "text/html"); 
		websWriteHeader(wp, "charset",		SpyContext::getInstance()->getEncode()); 
		websWriteEndHeaders(wp); 

		node->SetValue(key_value);
		websWrite(wp, const_cast<char*>(node->GetValue().c_str())); 

		websDone(wp);

	}else{
		return WebSpyError(wp, 1001, "Key not Exist when SetValue");
	}

}

static void WebActionSpyList(Webs *wp, char *path, char *query) 
{ 
	const char* name = websGetVar(wp, "key", NULL); 
	if (name==NULL) 
		name = "";

	boost::mutex::scoped_lock lock(SpyContext::getInstance()->getMutex());

	CSpyTreeNode* node = CSpyTree::Instance().FindTreeNode(name);
	if (NULL == node)
		return WebSpyError(wp, 1001, "Key not Exist");

	websSetStatus(wp, 200); 
	websWriteHeaders(wp, -1, 0); 
	websWriteHeader(wp, "Content-type", "text/html"); 
	websWriteHeader(wp, "charset",		SpyContext::getInstance()->getEncode()); 
	websWriteEndHeaders(wp); 


//	std::string value = CSpyTree::Instance().GetSpyTreeStruct(node, 1);
	// 输出节点名称和数据
	websWrite(wp, 
		"<!DOCTYPE HTML>"
		"<html xmlns=\"http://www.w3.org/1999/xhtml\">"
		"<body><h2> Syp List(JSON format) [%s] </h2> ", 
		node->GetName().c_str()); 
	websWrite(wp, "<textarea rows=\"10\" cols=\"100\" readonly=true> %s </textarea> ", node->GetValue().c_str()); 

	// 输出节点的所有子节点
	websWrite(wp, "<table border=\"1\"> "); 

	websWrite(wp, "<thead><tr> <td>Key</td> <td>Watchers</td> <td>Link</td> </tr></thead>"); 
	unsigned int row_count = 0;

	if (node->HasChild())
	{
		const std::vector<CSpyTreeNode*>* children = node->GetChildren();
		if (children)
		{
				websWrite(wp, "<tbody> "); 
			for (auto it = children->begin(); it != children->end(); ++it)
			{
				row_count ++;

				websWrite(wp, "<tr> "); 
				// 输出子节点的名称
				websWrite(wp, "<td>%s</td>",	(*it)->GetName().c_str()); 
				// 输出子节点的watcher个数
				websWrite(wp, "<td>%d</td>",	(*it)->GetWatcherSet().size()); 
				// 输出继续spy_list的超链
				std::string str_get = "";
				(*it)->GenPath(str_get);
				websWrite(wp, "<td> <a href=\"/action/spy_list?key=%s\">spy_list</a></td>", 
					str_get.c_str()); 

				websWrite(wp, "</tr> "); 
			}
				websWrite(wp, "</tbody> "); 
		}
	}
	// 输出表页尾部，提供记录数和返回上层
	std::string str_list = "";
	if (!node->IsRoot()){
		node = node->GetParent();
		node->GenPath(str_list);
	}
	websWrite(wp, 
		"<tfoot><tr> <td>Node Count</td> <td>%d</td> <td><a href=\"/action/spy_list?key=%s\">Up Node</a></td> </tr></tfoot>", 
		row_count, str_list.c_str()); 

	websWrite(wp, "</table> "); 
	websWrite(wp, "</body></html>"); 

	websDone(wp);
}

static void sessionTest(Webs *wp, char *path, char *query)
{
        char        *number;

    if (scaselessmatch(wp->method, "POST")) {
        number = websGetVar(wp, "number", 0);
        websSetSessionVar(wp, "number", number);
    } else {
        number = websGetSessionVar(wp, "number", 0);
    }
    websSetStatus(wp, 200);
    websWriteHeaders(wp, -1, 0);
    websWriteEndHeaders(wp);
    websWrite(wp, "<html><body><p>Number %s, SeesionID %s</p></body></html>\n", number, websGetSessionID(wp));
    websDone(wp);
}
// static int WebSpyGetNode(int eid, Webs *wp, int argc, char **argv)
// {
// 	if (argc && argv)
// 	{
// 		boost::mutex::scoped_lock lock(SpyContext::getInstance()->getMutex());
// 		std::string value = CSpyTree::Instance().GetSpyTreeStruct(CSpyTree::Instance().GetTreeNode(argv[0]));
// 		websWrite(wp, const_cast<char*>(value.c_str())); 
// 	}
// 	return 0;
// }

void StartWebServer()
{
	char    *auth, *documents, *endpoint, *route;
	int     argind = 1;

	route = "route.txt";
	auth = "auth.txt";

	documents = BIT_GOAHEAD_DOCUMENTS;
	if (websOpen(documents, route) < 0){
		error("Can't initialize server. Exiting.");
		SpyContext::getInstance()->setErrorInfo(SPY_ERR_WEBSERVER_02,"Can't initialize server");
		return;
	}
	if (websLoad(auth) < 0){
		error("Can't load %s", auth);
		SpyContext::getInstance()->setErrorInfo(SPY_ERR_WEBSERVER_03,"Can't load auth file");
		return;
	}
	//	设置侦听端口和协议
	endpoint = const_cast<char *>(SpyContext::getInstance()->getEndpoints());
	if (websListen(endpoint) < 0)
	{
		error("Can't listen port[%s].", endpoint);
		SpyContext::getInstance()->setErrorInfo(SPY_ERR_WEBSERVER_06,"Can't Listen IP:PORT");
		return;
	}

	/*
	验证了，没用！！
	websDefineHandler("test", RelocateHandler, 0, 0);
	websAddRoute("/test", "test", 0);
	*/

	// 设置web请求的处理接口方法
	websDefineAction("spy_get", WebActionSpyGetNode);
	websDefineAction("SpyGetAll", WebActionSpyGetAll);
	websDefineAction("spy_list", WebActionSpyList);
	websDefineAction("spy_set", WebActionSpySetNode);
	websDefineAction("sessionTest", sessionTest);
	
	// 设置web服务事件（启停标志）
	websServiceEvents(SpyContext::getInstance()->getFinished());
}

KS_SPY_DLL int _stdcall SpyStartWebServer( char *endpoints )
{
	// 如果web server已启动，则失败返回
	if(SpyContext::SPY_WEBSERVER_STARTED == SpyContext::getInstance()->getFinished())
	{
		SpyContext::getInstance()->setErrorInfo(SPY_ERR_WEBSERVER_01,"web server已启动");
		printf("sorry, web started, check env please.\n");
		return KS_SPY_API_INTER_FAIL;
	}
	//提前设置侦听端口和协议
	SpyContext::getInstance()->setEndpoints(endpoints);
	// 启动webserver线程
	SpyContext::getInstance()->getThreadPool().push_back(new boost::thread(&StartWebServer));
	
	// 尝试等待启动过程，如果超时未完成则失败返回
	int wait_count = 1000;
	while(SpyContext::SPY_WEBSERVER_STARTED != *(SpyContext::getInstance()->getFinished()))
	{
		::Sleep(10);
		if (0 >= --wait_count){
			SpyContext::getInstance()->setErrorInfo(SPY_ERR_WEBSERVER_04,"等待web server启动（超时10s）失败");
			printf("等待web server启动（超时10s）失败.\n");
			return KS_SPY_API_INTER_FAIL;
		}
		printf("wait web starting(for 10ms)\n");
	}
	
	return KS_SPY_API_INTER_OK;
}

KS_SPY_DLL int _stdcall SpyStopWebServer()
{
	// 设置为1，内部线程才可能退出。
	int *finished = SpyContext::getInstance()->getFinished();
	*finished = SpyContext::SPY_WEBSERVER_STOPED;

	websClose();

	int wait_count = 1000;
	while(SpyContext::SPY_WEBSERVER_STOPED != *(SpyContext::getInstance()->getFinished()))
	{
		::Sleep(10);
		if (0 >= --wait_count){
			SpyContext::getInstance()->setErrorInfo(SPY_ERR_WEBSERVER_05,"等待web server关闭（超时10s）失败");
			printf("等待web server关闭（超时10s）失败.\n");
			return KS_SPY_API_INTER_FAIL;
		}
		printf("wait web stoping(for 10ms)\n");
	}

	return KS_SPY_API_INTER_OK;
}

KS_SPY_DLL int _stdcall SpyGetErrorInfo( int *err_code, char *info, int size )
{
	return SpyContext::getInstance()->getErrorInfo(err_code, info, size);
}

KS_SPY_DLL const char* _stdcall SpyGet(const char *key)
{
	boost::mutex::scoped_lock lock(SpyContext::getInstance()->getMutex());
	std::string strValue = CSpyTree::Instance().GetSpyTreeNodeValue(key);
	return strValue.c_str();
}

KS_SPY_DLL int _stdcall SpyPut( const char *key, const char *value )
{
	boost::mutex::scoped_lock lock(SpyContext::getInstance()->getMutex());
	return CSpyTree::Instance().AddTreeNode(key, value) ? KS_SPY_API_INTER_OK : KS_SPY_API_INTER_FAIL;
}

KS_SPY_DLL int _stdcall SpyDelete( char *key, bool recursive/*=false*/ )
{
	return KS_SPY_API_INTER_OK;
}

KS_SPY_DLL int _stdcall SpyClearAll()
{
	return KS_SPY_API_INTER_OK;
}

void Write2File(const std::string& path, const std::string& value)
{
	std::locale::global(std::locale(""));
	std::ofstream oFileStream(path.c_str(), std::ios_base::out);
	if (oFileStream)
	{
		oFileStream << value << std::endl;
	}
}

KS_SPY_DLL int _stdcall SpyDumpAll( char *file_name/*="ksft_api4spy_dump.txt" */ )
{
	boost::mutex::scoped_lock lock(SpyContext::getInstance()->getMutex());
	std::string value= CSpyTree::Instance().GetSpyTreeStruct(CSpyTree::Instance().GetRoot());
	lock.unlock();
	SpyContext::getInstance()->getThreadPool().push_back(new boost::thread(std::bind(&Write2File, file_name, value))) ;

	return KS_SPY_API_INTER_OK;
}

KS_SPY_DLL const char* _stdcall SpyDumpTreeStruct()
{
	boost::mutex::scoped_lock lock(SpyContext::getInstance()->getMutex());
	std::string value = CSpyTree::Instance().GetSpyTreeStruct(CSpyTree::Instance().GetRoot());
	
	return value.c_str();
}

KS_SPY_DLL int _stdcall SpySetWatcher(char *key, ISpyWatcher *watcher, bool recursive)
{
	if (NULL == watcher) 
		return KS_SPY_API_INTER_FAIL;

	boost::mutex::scoped_lock lock(SpyContext::getInstance()->getMutex());
	std::string str_path(key);
	CSpyTreeNode* node = CSpyTree::Instance().FindTreeNode(str_path);

	if (NULL == node)
		return KS_SPY_API_INTER_FAIL;

	if (!node->AddWatcher(watcher, recursive))
		return KS_SPY_API_INTER_FAIL;

	return KS_SPY_API_INTER_OK;
}

KS_SPY_DLL int _stdcall SpySetRESTfulAPI(char *key, IRESTfulAPI *api)
{
	if (NULL == api) 
		return KS_SPY_API_INTER_FAIL;

	boost::mutex::scoped_lock lock(SpyContext::getInstance()->getMutex());
	std::string str_path(key);
	CSpyTreeNode* node = CSpyTree::Instance().FindTreeNode(str_path);

	if (NULL == node)
		return KS_SPY_API_INTER_FAIL;

	node->SetRESTfulAPI(api);

	return KS_SPY_API_INTER_OK;
}