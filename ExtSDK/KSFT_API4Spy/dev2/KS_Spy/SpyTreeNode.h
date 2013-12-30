#ifndef __SPYTREENODE_H__
#define __SPYTREENODE_H__

#pragma once
#include <string>
#include <vector>
#include <set>
#include "SpyTreeNodeAttribute.h"
#include "KS_Spy.h"
#include "SpyContext.h"

namespace KS_SPY
{
	class CSpyWatcherObj{
	public:
		ISpyWatcher	*iWatcher;
		bool recursive;
	};

	class CSpyTreeNode
	{
	public:
		CSpyTreeNode();
		~CSpyTreeNode()
		{
			clear();
		}
		void clear()
		{
			for (auto it = m_vNodeChildren.begin(); it != m_vNodeChildren.end(); ++it)
			{
				delete *it;
			}
			m_vNodeChildren.clear();
			m_vNodeAttributes.clear();
			m_sWatchers.clear();
		}

		CSpyTreeNode(const CSpyTreeNode& node)
		{
			//todo
		}

		CSpyTreeNode& operator = (const CSpyTreeNode& node)
		{
			if (this != &node)
			{
				//todo
			}
			return *this;
		}

		inline const std::string& GetName() const
		{
			return m_strName;
		}

		void SetName(const std::string& strname)
		{
			m_strName = strname;
		}

		inline CSpyTreeNode* GetParent()
		{
			return m_pParent;
		}
		inline bool IsRoot()
		{
			return NULL == GetParent();
		}
		void SetParent(CSpyTreeNode * pNode)
		{
			m_pParent = pNode;
		}
		// ���ɵ�ǰ�ڵ��ȫ·���������������ڵ����"roor/"
		void GenPath(std::string& strname)
		{
			if (IsRoot())
				strname = "";
			else
				strname += GetName();

			CSpyTreeNode* node = GetParent();
			while(NULL != node && !node->IsRoot())
			{
				// ������Ǹ��ڵ�����ڵ���������ƴ��
//				if (0 != node->GetNodeLevel())
					strname = node->GetName() + KS_SPY_API_PATH_SPILT + strname;
				// �������ڵ�
				node = node->GetParent();
			}
			return;
		}

		inline const std::string& GetValue() const
		{
			return m_strValue;
		}

		void SetValue(const std::string& strvalue)
		{
			m_strValue = strvalue;
			fireWatchEvent(ISpyWatcher::NodeDataChanged, ISpyWatcher::Connected);
		}

		inline const std::vector<CSpyTreeNodeAttribute>	* GetAttributes() const
		{
			return &m_vNodeAttributes;
		}

		inline CSpyTreeNodeAttribute& GetAttribute(const std::string& key)
		{
			//todo
		}

		inline bool HasAttribute(const std::string& key)
		{
			//todo
			return true;
		}

		void SetNodeLevel(int level)
		{
			m_nNodeLevel = level;
		}

		inline int GetNodeLevel()
		{
			return m_nNodeLevel;
		}

		inline bool HasChild()
		{
			return !m_vNodeChildren.empty();
		}

		inline int NumOfChild()
		{
			return m_vNodeChildren.size();
		}

		inline const std::vector<CSpyTreeNode*>* GetChildren() 
		{
			return &m_vNodeChildren;
		}

		bool operator < (const CSpyTreeNode& node) const
		{
			//todo
		}

		bool AddChild(CSpyTreeNode& node)
		{
			//todo
			m_vNodeChildren.push_back(&node);
			return true;
		}
		// ���Ӽ������ӿڶ���
		bool AddWatcher(ISpyWatcher* watcher, bool recursive = false)
		{
			//todo
			CSpyWatcherObj w;
			w.iWatcher = watcher;
			w.recursive = recursive;
			m_sWatchers.push_back(w);
			return true;
		}

		bool DeleteWatcher(ISpyWatcher* watcher)
		{

		}

		bool DeleteChild(const std::string& strname)
		{
			//todo
		}

		CSpyTreeNode* GetChildNode(const std::string& strname)
		{
			if (HasChild())
			{
				for (auto iter = m_vNodeChildren.begin(); iter != m_vNodeChildren.end(); ++iter)
				{
					if (0 == strname.compare((*iter)->GetName()))
					{
						return *iter;
					}
				}
			}
			return NULL;
		}

		inline int GetNodeId() const
		{
			return m_nNodeId;
		}

		void SetNodeId(int id)
		{
			m_nNodeId = id;
		}
		// ������ǰ�ڵ���ָ���¼��ļ����������ϣ�,����ָ���Ƿ�ͬ�����첽����
		void fireWatchEvent(ISpyWatcher::DataStatus ds, ISpyWatcher::SpyState ss, bool async = true){
			// ������ǰ�ڵ�ļ��������������
			std::vector<CSpyWatcherObj>::iterator it = m_sWatchers.begin();
			for (; it != m_sWatchers.end();  it++)
			{
				CSpyWatcherObj &obj = (CSpyWatcherObj &)*it;
				std::string str = "";
				this->GenPath(str);
				// ͬ�����첽�Ĵ����ǲ�ͬ��
				if (!async)
					obj.iWatcher->OnWatchEvent(ds, ss, str.c_str());
				else
					SpyContext::getInstance()->pubWatchEvent(obj.iWatcher,str.c_str(),ds, ss);
			}

			// ������ǰ�ڵ�ĸ��ڵ㣬���������recursive�ļ�����������
			CSpyTreeNode* node = GetParent();
			while(NULL != node)
			{
				// �����Ǹ��ڵ�������ڵ㣬�����д�������
				if (true/*0 != node->GetNodeLevel()*/)
				{
					std::vector<CSpyWatcherObj>::iterator it_r = node->GetWatcherSet().begin();
					for (; it_r != node->GetWatcherSet().end();  it_r++)
					{
						CSpyWatcherObj &obj = (CSpyWatcherObj &)*it_r;
						// ���ڸ��ڵ㣬ֻ��������recursive��
						if (obj.recursive)
						{
							std::string str = "";
							this->GenPath(str);
							if (!async)
								obj.iWatcher->OnWatchEvent(ds, ss, str.c_str());
							else
								SpyContext::getInstance()->pubWatchEvent(obj.iWatcher, str.c_str(), ds, ss);
						}
					}
				}
				// �������ڵ�
				node = node->GetParent();
			}
		}

	private:
		int								m_nNodeId;
		std::string m_strName;
		std::string m_strValue;
		CSpyTreeNode*						m_pParent;
		std::vector<CSpyTreeNodeAttribute>	m_vNodeAttributes;
		std::vector<CSpyTreeNode*>			m_vNodeChildren;
		std::string							m_strTimeStamp;
		// ���������󼯺�
		std::vector<CSpyWatcherObj>			m_sWatchers;
		int									m_nNodeLevel;

		IRESTfulAPI							*p_RESTfulAPI;
	
	public:
		inline std::vector<CSpyWatcherObj> &GetWatcherSet()
		{
			return m_sWatchers;
		}

		inline IRESTfulAPI* GetRESTfulAPI()
		{
			return p_RESTfulAPI;
		}
		inline void SetRESTfulAPI(IRESTfulAPI *p)
		{
			p_RESTfulAPI = p;
		}

	};


	CSpyTreeNode::CSpyTreeNode()
	{
		m_pParent = NULL;
		m_strValue = "";

		p_RESTfulAPI = NULL;
	}
};

#endif