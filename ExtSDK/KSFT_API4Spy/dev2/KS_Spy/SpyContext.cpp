#include "stdafx.h"
#include "SpyContext.h"

using namespace KS_SPY;


static SpyContext *g_SpyContext = NULL;

SpyContext::SpyContext()
{
	finished = SPY_WEBSERVER_STOPED;
	memset(endpoints, 0, sizeof(endpoints));
	isWatching = -1;
}

SpyContext::~SpyContext()
{
	finished = SPY_WEBSERVER_STOPED;

	StopWatch();
}

SpyContext *SpyContext::getInstance()
{
	if (NULL == g_SpyContext){
		g_SpyContext = new SpyContext();
	}
	return g_SpyContext;
}

boost::mutex &SpyContext::getMutex()
{
	return m_Mutex;
}
std::vector<boost::thread*> &SpyContext::getThreadPool()
{
	return m_ThreadPool;
}

int *SpyContext::getFinished()
{
	return &finished;
}

void SpyContext::setEndpoints(char *_endpoints)
{
	memset(endpoints, 0, sizeof(endpoints));
	strncpy(endpoints, _endpoints, sizeof(endpoints)-1);
}

const char *SpyContext::getEndpoints()
{
	return endpoints;
}

void SpyContext::setErrorInfo(int err_code, char *info)
{
	this->err_code = err_code;
	strncpy(err_info, info, sizeof(err_info)-1);
}

int SpyContext::getErrorInfo(int *err_code, char *info, int size)
{
	*err_code = this->err_code;
	strncpy(info, err_info, size);
	return 0;
}

char *SpyContext::getEncode()
{
	return "gb2312";
}

bool SpyContext::pubWatchEvent(ISpyWatcher	*iWatcher, const char *path, ISpyWatcher::DataStatus ds, ISpyWatcher::SpyState ss)
{
	TSpyMsgWatchEvent  watch_event = {0};
	watch_event.iWatcher = iWatcher;
	strcpy(watch_event.path, path);
	watch_event.ds = ds;
	watch_event.ss = ss;

	boost::mutex::scoped_lock lock(m_watchMutex);
	watch_event_deque.push_back(watch_event);
	return true;
}

bool SpyContext::fireWatchEvent()
{
	boost::mutex::scoped_lock lock(m_watchMutex);
	if (watch_event_deque.empty())
	{
		return false;
	}else{
		TSpyMsgWatchEvent &e = watch_event_deque.front();
		e.iWatcher->OnWatchEvent(e.ds, e.ss, e.path);
		watch_event_deque.pop_front();
	}
	return true;
}

void SpyContext::StartedWatch()
{
	isWatching = SpyContext::SPY_WATCH_OPEN;
}

void SpyContext::StopWatch()
{
	if (IsWatchClosed())
		return;
	isWatching = 0;
	while(IsWatchClosed())
		Sleep(10);
}

void SpyContext::StopedWatch()
{
	isWatching = SPY_WATCH_CLOSED;
}

bool SpyContext::IsWatching()
{
	return isWatching == SPY_WATCH_OPEN;
}

bool SpyContext::IsWatchClosed()
{
	return (isWatching == SPY_WATCH_CLOSED);
}