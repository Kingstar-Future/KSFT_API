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
		// 生成当前节点的全路径名，但不含根节点的名"roor/"
		void GenPath(std::string& strname)
		{
			if (IsRoot())
				strname = "";
			else
				strname += GetName();

			CSpyTreeNode* node = GetParent();
			while(NULL != node && !node->IsRoot())
			{
				// 如果不是根节点则处理节点名，进行拼接
//				if (0 != node->GetNodeLevel())
					strname = node->GetName() + KS_SPY_API_PATH_SPILT + strname;
				// 遍历父节点
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
		// 增加监视器接口对象
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
		// 触发当前节点上指定事件的监视器（集合）,可以指定是否同步或异步触发
		void fireWatchEvent(ISpyWatcher::DataStatus ds, ISpyWatcher::SpyState ss, bool async = true){
			// 遍历当前节点的监视器结合做触发
			std::vector<CSpyWatcherObj>::iterator it = m_sWatchers.begin();
			for (; it != m_sWatchers.end();  it++)
			{
				CSpyWatcherObj &obj = (CSpyWatcherObj &)*it;
				std::string str = "";
				this->GenPath(str);
				// 同步和异步的触发是不同的
				if (!async)
					obj.iWatcher->OnWatchEvent(ds, ss, str.c_str());
				else
					SpyContext::getInstance()->pubWatchEvent(obj.iWatcher,str.c_str(),ds, ss);
			}

			// 遍历当前节点的父节点，并针对启用recursive的监视器做触发
			CSpyTreeNode* node = GetParent();
			while(NULL != node)
			{
				// 不论是根节点或其他节点，都进行触发处理
				if (true/*0 != node->GetNodeLevel()*/)
				{
					std::vector<CSpyWatcherObj>::iterator it_r = node->GetWatcherSet().begin();
					for (; it_r != node->GetWatcherSet().end();  it_r++)
					{
						CSpyWatcherObj &obj = (CSpyWatcherObj &)*it_r;
						// 对于父节点，只触发启用recursive的
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
				// 遍历父节点
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
		// 监视器对象集合
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