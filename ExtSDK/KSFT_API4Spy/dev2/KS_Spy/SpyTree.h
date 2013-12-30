#ifndef __SPYTREE_H__
#define __SPYTREE_H__

#pragma once
#include "SpyTreeNode.h"
#include "Utility.h"
#include <sstream>

namespace KS_SPY
{
	class CSpyTree
	{
	public:
		~CSpyTree()
		{
			//todo
			Terminate();
		}
		static CSpyTree& Instance()
		{
			static CSpyTree _instance;
			return _instance;
		}

		void SetRoot(CSpyTreeNode* pRoot)
		{
			m_pRoot = pRoot;
		}

		inline CSpyTreeNode* GetRoot()
		{
			return m_pRoot;
		}
		bool IsInitialed()
		{
			return m_bIsInitialed;
		}

		virtual bool Initialize()
		{
			//todo
			m_bIsInitialed = true;
			return m_bIsInitialed;
		}

		virtual void Terminate()
		{
			if (NULL != m_pRoot)
			{
				m_pRoot->clear();
			}
		}

		CSpyTreeNode* CreateChildTreeNode(CSpyTreeNode* pParentNode, const std::vector<std::string>& vname)
		{
			if (NULL == pParentNode)
			{
				return NULL;
			}
			CSpyTreeNode *pNode = NULL;
			int nLevel = pParentNode->GetNodeLevel();
			for (auto iter = vname.begin(); iter != vname.end(); ++iter)
			{
				nLevel++;
				pNode = new CSpyTreeNode();
				if (NULL != pNode)
				{
					pNode->SetParent(pParentNode);
					pNode->SetNodeLevel(nLevel);
					pNode->SetName(*iter);
					pNode->SetNodeId(m_nGen++);
					pParentNode->AddChild(*pNode);
					pParentNode = pNode;
				}
			}
			return pNode;
		}

		/**
		����·����key����ƥ��Ľڵ㣬���û���򷵻ؿգ����򷵻�ƥ��Ľڵ�ָ��
		**/
		CSpyTreeNode* FindTreeNode(const std::string& strname)
		{
			//todo
			CSpyTreeNode *pSpyTreeNode = m_pRoot;
			if (strname.empty())
				return pSpyTreeNode;
			std::string strKeyName;
			strKeyName = "root"KS_SPY_API_PATH_SPILT + strname;
			std::vector<std::string> vNodeName;
			fastsplit_string(vNodeName, strKeyName, KS_SPY_API_PATH_SPILT, false);

			for (auto iter = vNodeName.begin(); iter != vNodeName.end(); ++iter)
			{
				if (0 != pSpyTreeNode->GetName().compare(*iter))//�Ҳ����ڵ�
				{
					return NULL;
				}
				else//�ҵ��ڵ�
				{
					if (iter == (--vNodeName.end()))//�ҵ����ڵ�
					{
						return pSpyTreeNode;
					}
					else//�ҵ����������ڵ�
					{
						CSpyTreeNode *pNode = pSpyTreeNode->GetChildNode(*(++iter));
						if (NULL != pNode)//
						{
							pSpyTreeNode = pNode;
							--iter;
							continue;
						}
						else
						{
							return NULL;
						}
					}
				}
			}
			return pSpyTreeNode;
		}


		CSpyTreeNode* GetTreeNode(const std::string& strname)
		{
			//todo
			CSpyTreeNode *pSpyTreeNode = m_pRoot;
			std::string strKeyName;
			strKeyName = "root"KS_SPY_API_PATH_SPILT + strname;
			std::vector<std::string> vNodeName;
			fastsplit_string(vNodeName, strKeyName, KS_SPY_API_PATH_SPILT, false);

			for (auto iter = vNodeName.begin(); iter != vNodeName.end(); ++iter)
			{
				if (0 != pSpyTreeNode->GetName().compare(*iter))//�Ҳ����ڵ�
				{
					std::vector<std::string> vChildNodeName;
					vChildNodeName.assign(iter, vNodeName.end());
					return CreateChildTreeNode(pSpyTreeNode, vChildNodeName);
				}
				else//�ҵ��ڵ�
				{
					if (iter == (--vNodeName.end()))//�ҵ����ڵ�
					{
						return pSpyTreeNode;
					}
					else//�ҵ����������ڵ�
					{
						CSpyTreeNode *pNode = pSpyTreeNode->GetChildNode(*(++iter));
						if (NULL != pNode)//
						{
							pSpyTreeNode = pNode;
							--iter;
							continue;
						}
						else
						{
							std::vector<std::string> vChildNodeName;
							vChildNodeName.assign(iter, vNodeName.end());
							return CreateChildTreeNode(pSpyTreeNode, vChildNodeName);
						}
					}
				}
			}
			return pSpyTreeNode;
		}

		bool AddTreeNode(const std::string& strname, const std::string& strValue)
		{
			CSpyTreeNode* pSpyTreeNode = GetTreeNode(strname);
			if (NULL != pSpyTreeNode)
			{
				pSpyTreeNode->SetValue(strValue);
				return true;
			}
			return false;
		}

		std::string GetSpyTreeStruct(CSpyTreeNode* pNode, int recursive = -1)
		{
			std::vector<std::string> values;
			TraversalTree(pNode, values, recursive);
			std::string json_value = "[\n";
			for (int i = 0, size = values.size(); i < size; ++i)
			{
				json_value += values[i] + ",\n";
			}
			json_value = (json_value.find_last_of(',') == std::string::npos? json_value: json_value.substr(0, json_value.length() - 1)) + "\n]\n";
			return json_value;
		}

		std::string GetSpyTreeNodeValue(const std::string& key)
		{
			CSpyTreeNode* node = GetTreeNode(key);
			if (node)
			{
				return node->GetValue();
			}
			return "";
		}
	private:
		CSpyTree()
			: m_pRoot(NULL)
			, m_pCurrentNode(NULL)
			, m_bIsInitialed(false)
			, m_nGen(0)
		{
			m_pRoot = new CSpyTreeNode();
			if (NULL != m_pRoot)
			{
				m_pRoot->SetName("root");
				m_pRoot->SetNodeLevel(0);
				m_pRoot->SetValue("{info:\"ROOT of Spy\"}");
				m_pRoot->SetParent(NULL);
				m_pRoot->SetNodeId(m_nGen++);
			}
		}
		int				m_nGen;
		CSpyTreeNode*		m_pRoot;
		CSpyTreeNode*		m_pCurrentNode;
		bool				m_bIsInitialed;	
		/* 
			����jsonǶ�׸�ʽȡֵ, recursive�����Ƿ�������,Ϊ-1��һֱ������ȥ
		*/
		void TraversalTree(CSpyTreeNode* node, std::vector<std::string>& values, int recursive = -1)
		{
			if (node)
			{
				if (node != m_pRoot)
				{
					std::stringstream ss;
					ss << node->GetNodeId();
					std::string value = std::string("{") + "id:" + ss.str() + "," + "pid:";
					ss.str("");
					ss << node->GetParent()->GetNodeId();
					value += ss.str() + ","+ "name:" + "\"" + node->GetName() + "\"" + "}";
					values.push_back(value);
				}

				// ������μ����ж�
				if (recursive > 0)   recursive --;
				if (recursive == 0)	
					return;

				//��ȱ����ӽڵ�
				const std::vector<CSpyTreeNode*>* children = node->GetChildren();
				if (children)
				{
					for (auto it = children->begin(); it != children->end(); ++it)
					{
						TraversalTree(*it, values, recursive);
					}
				}
			}
		}
	};
};

#endif

