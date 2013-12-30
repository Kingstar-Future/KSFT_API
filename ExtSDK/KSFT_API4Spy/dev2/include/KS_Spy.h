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

//常量申明
#define		KS_SPY_API_INTER_OK	0        // 正确
#define		KS_SPY_API_INTER_FAIL  -1     // 错误
#define		KS_SPY_API_PATH_SPILT		"/"	//节点路径分隔符

/* 观察器类（接口）定义 */
class ISpyWatcher
{
public:
	/*
	其中DataStatus的取值范围是：子节点变更NodeChildrenChanged、节点被创建NodeCreated、
	节点数据变更NodeDataChanged、节点被删除NodeDeleted、无事件None；
	
	SpyState的取值范围是：连接断开Disconnected、不知道Unknown；该字段为未来保留扩展数值，目前可不处理；
	*/
	typedef enum {
		NodeChildrenChanged = 1,	// 子节点发生变更事件
		NodeCreated = 2,			// 节点被创建事件
		NodeDataChanged = 3,		// 节点数据变更事件
		NodeDeleted = 4,			// 节点被删除事件
		None = 5					// 未知事件
	}DataStatus;

	typedef enum {
		Connected = 0,				// 已连接态
		Disconnected = 1,			// 连接断开态
		Unknown = 2					// 不知道的状态
	}SpyState;

public:
	/* 观察事件回调，其中DataStatus为数据状态，SpyState为接口访问情况*/
	virtual void OnWatchEvent(int DataStatus, int SpyState, const char* key) = 0;

};

/*
此为简易的RESTful接口定义，用于将普通的节点信息操作转换为动态的可定制的交互服务功能
在此访问机制下，接口使用建议是：
1  如果对后台数据进行只读获取访问或无更新情况的，应该使用spy_get接口；
2  如果对后台数据进行更新访问或影响后台关键运行的，应该使用spy_set接口；
3  由于交互处理机制为同步执行方式，建议后台服务端处理不要用该模式处理批量业务；
4  如果特殊情况下，需要采用异步访问交互模式的，一种建议先针对key进行spy_set请求，然后针对key进行spy_get，可进行多次spy_get以获取异步后续结果；
*/
class IRESTfulAPI
{
public:
	/********
	默认URL的请求参数在rest_req里，如http://xxx/action/spy_get?key=路径名&rest_req=请求信息串
	一般建议rest_req的信息串格式为JSON，方便解读
	********/

	/* RESTful的spy_get/GET请求回调，其中req为请求参数， rsp为应答数据，max_size为应答数据空间的最大长度*/
	virtual void OnGET_RESTful(const char* req, char *rsp, int max_size) = 0;
	/* RESTfuldspy_get/POST请求回调，其中req为请求参数， rsp为应答数据，max_size为应答数据空间的最大长度*/
	virtual void OnPOST_RESTful(const char* req, char *rsp, int max_size) = 0;

	/********
	默认URL的请求参数在value里，如http://xxx/action/spy_set?key=路径名&value=请求信息串
	一般建议value的信息串格式为JSON，方便解读
	********/
	/* RESTful的spy_set请求回调，其中req为请求参数， rsp为应答数据，max_size为应答数据空间的最大长度*/
	virtual void OnSET_RESTful(const char* req, char *rsp, int max_size) = 0;
};


// 初始化该API，必须先调用，失败返回KS_SPY_API_INTER_FAIL，允许重复调用；
KS_SPY_DLL int  _stdcall SpyInit();

// 接口版本输出，2013-12-17
KS_SPY_DLL const char *  _stdcall SpyVersion();

// 销毁释放该API，可以最后调用，允许重复调用；
KS_SPY_DLL int  _stdcall SpyFinalize();

// 服务启动，调用时，触发Spy的外部web服务，默认情况下Spy服务不启动 ，启动失败返回KS_SPY_API_INTER_FAIL；
KS_SPY_DLL int _stdcall  SpyStartWebServer(char *endpoints = "http://127.0.0.1:80");

// 服务关闭，调用时，关闭Spy的web服务，关闭失败返回KS_SPY_API_INTER_FAIL；
KS_SPY_DLL int _stdcall  SpyStopWebServer();

// 获取当前Spy操作失败时的错误代码和错误信息，如果没有则返回KS_SPY_API_INTER_FAIL，每条错误信息获取后即不再保留，且当前只保留最新的一条信息；
KS_SPY_DLL int _stdcall SpyGetErrorInfo(int *err_code, char *info, int size);

// 获取Spy数据值，根据key，如果没有对应key，则返回NULL
KS_SPY_DLL const char* _stdcall SpyGet(const char *key);

// 设置Spy数据值，根据key，如果设置失败，则返回KS_SPY_API_INTER_FAIL
KS_SPY_DLL int _stdcall SpyPut(const char *key, const char *value);

// 删除Spy数据，根据key，如果没有对应key，则返回KS_SPY_API_INTER_FAIL, recursive为真时，同时清除key下属的成员key数据；
KS_SPY_DLL int _stdcall SpyDelete(char *key, bool recursive=false);

// 清除所有Spy数据，并不触发或处理其他关联功能，如果清除失败，则返回KS_SPY_API_INTER_FAIL
KS_SPY_DLL int _stdcall SpyClearAll();

// 导出所有Spy数据值，格式为(key,value)集合，如果导出失败，则返回KS_SPY_API_INTER_FAIL
KS_SPY_DLL int _stdcall SpyDumpAll(char *file_name="ksft_api4spy_dump.txt" );

// 获取树结构
KS_SPY_DLL const char* _stdcall SpyDumpTreeStruct();

// 设置观察器，watcher为观察器对象指针，recursive标识决定是否观察子节点事件，默认不参与观察
KS_SPY_DLL int _stdcall SpySetWatcher(char *key, ISpyWatcher *watcher, bool recursive = false);

// 设置RESTful接口对象
KS_SPY_DLL int _stdcall SpySetRESTfulAPI(char *key, IRESTfulAPI *api);

#ifdef  __cplusplus
}
#endif

#endif //__KS_SPY_H__




