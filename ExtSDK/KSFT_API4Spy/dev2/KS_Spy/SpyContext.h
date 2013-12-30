#ifndef __SPY_CONTEXT_H__
#define __SPY_CONTEXT_H__

/***
	环境共享参数等，单一实例
**/

#include "boost/thread/thread.hpp"
#include <deque>
#include "KS_Spy.h"

namespace KS_SPY
{
	typedef struct _SpyMsgWatchEvent{
		ISpyWatcher	*iWatcher;
		char path[256];
		ISpyWatcher::DataStatus ds;
		ISpyWatcher::SpyState ss;
	} TSpyMsgWatchEvent;

	class SpyContext
	{
	public:
		// web server 服务线程的运行态
		static const int SPY_WEBSERVER_STARTED = 0;
		static const int SPY_WEBSERVER_STOPED = 1;
		// Watch线程的运行状态
		static const int SPY_WATCH_CLOSED = -1;
		static const int SPY_WATCH_CLOSSING = 0;
		static const int SPY_WATCH_OPEN = 1;

		static SpyContext *getInstance();

	protected:
		SpyContext();
		~SpyContext();

	public:
		boost::mutex &getMutex();
		std::vector<boost::thread*> &getThreadPool();
		int *getFinished();
		// http/https的访问点信息
		const char *getEndpoints();
		void setEndpoints(char *_endpoints);
		// 错误信息的设置和获取
		void setErrorInfo(int err_code, char *info);
		int getErrorInfo(int *err_code, char *info, int size);
		char *getEncode();
		// 放置监视事件，异步触发
		bool pubWatchEvent(ISpyWatcher	*iWatcher, const char *path, ISpyWatcher::DataStatus ds, ISpyWatcher::SpyState ss);
		// 监视事件触发
		bool SpyContext::fireWatchEvent();
		// 设置watch线程启动态
		void StartedWatch();
		// 关闭watch线程
		void StopWatch();
		// 设置watch线程关闭态（说明执行完关闭操作了）
		void StopedWatch();
		// 是否watch打开
		bool IsWatching();
		// 是否watch为关闭
		bool IsWatchClosed();

	private:
		//  互斥锁
		boost::mutex m_Mutex;
		// 线程池
		std::vector<boost::thread*> m_ThreadPool;
		// web server的结束标志，启动为0，停止为1
		int finished;

		char endpoints[256];
		int err_code;
		char err_info[1024];

		//  watch队列的访问互斥锁
		boost::mutex m_watchMutex;
		std::deque<TSpyMsgWatchEvent> watch_event_deque;
		int isWatching;		// 监视器线程的运行状态变量
	};
};


#define SPY_ERR_WEBSERVER_01	1001	//web server已启动
#define SPY_ERR_WEBSERVER_02	1002	//"Can't initialize server"
#define SPY_ERR_WEBSERVER_03	1003	//"Can't load auth file"
#define SPY_ERR_WEBSERVER_04	1004	//"等待web server启动（超时10s）失败"
#define SPY_ERR_WEBSERVER_05	1005	//"等待web server关闭（超时10s）失败"
#define SPY_ERR_WEBSERVER_06	1006	//Can't Listen IP:PORT

#endif