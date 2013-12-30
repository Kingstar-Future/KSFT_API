#ifndef __SPY_CONTEXT_H__
#define __SPY_CONTEXT_H__

/***
	������������ȣ���һʵ��
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
		// web server �����̵߳�����̬
		static const int SPY_WEBSERVER_STARTED = 0;
		static const int SPY_WEBSERVER_STOPED = 1;
		// Watch�̵߳�����״̬
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
		// http/https�ķ��ʵ���Ϣ
		const char *getEndpoints();
		void setEndpoints(char *_endpoints);
		// ������Ϣ�����úͻ�ȡ
		void setErrorInfo(int err_code, char *info);
		int getErrorInfo(int *err_code, char *info, int size);
		char *getEncode();
		// ���ü����¼����첽����
		bool pubWatchEvent(ISpyWatcher	*iWatcher, const char *path, ISpyWatcher::DataStatus ds, ISpyWatcher::SpyState ss);
		// �����¼�����
		bool SpyContext::fireWatchEvent();
		// ����watch�߳�����̬
		void StartedWatch();
		// �ر�watch�߳�
		void StopWatch();
		// ����watch�̹߳ر�̬��˵��ִ����رղ����ˣ�
		void StopedWatch();
		// �Ƿ�watch��
		bool IsWatching();
		// �Ƿ�watchΪ�ر�
		bool IsWatchClosed();

	private:
		//  ������
		boost::mutex m_Mutex;
		// �̳߳�
		std::vector<boost::thread*> m_ThreadPool;
		// web server�Ľ�����־������Ϊ0��ֹͣΪ1
		int finished;

		char endpoints[256];
		int err_code;
		char err_info[1024];

		//  watch���еķ��ʻ�����
		boost::mutex m_watchMutex;
		std::deque<TSpyMsgWatchEvent> watch_event_deque;
		int isWatching;		// �������̵߳�����״̬����
	};
};


#define SPY_ERR_WEBSERVER_01	1001	//web server������
#define SPY_ERR_WEBSERVER_02	1002	//"Can't initialize server"
#define SPY_ERR_WEBSERVER_03	1003	//"Can't load auth file"
#define SPY_ERR_WEBSERVER_04	1004	//"�ȴ�web server��������ʱ10s��ʧ��"
#define SPY_ERR_WEBSERVER_05	1005	//"�ȴ�web server�رգ���ʱ10s��ʧ��"
#define SPY_ERR_WEBSERVER_06	1006	//Can't Listen IP:PORT

#endif