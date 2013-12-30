#ifndef __SPYTREENODEATTRIBUTE_H__
#define __SPYTREENODEATTRIBUTE_H__

#pragma once
#include <string>

class CSpyTreeNodeAttribute
{
public:
	CSpyTreeNodeAttribute(const std::string& strname, const std::string& strvalue)
		: m_strName(strname)
		, m_strValue(strvalue)
	{

	}
	CSpyTreeNodeAttribute()
	{
	}

	~CSpyTreeNodeAttribute()
	{
	}
	bool operator == (const CSpyTreeNodeAttribute& attribute) const
	{
		//todo
		return true;
	}
	bool operator != (const CSpyTreeNodeAttribute& attribute) const
	{
		//todo
		return true;
	}
	bool operator >= (const CSpyTreeNodeAttribute& attribute) const
	{
		//todo
		return true;
	}
	bool operator <= (const CSpyTreeNodeAttribute& attribute) const
	{
		//todo
		return true;
	}
	bool operator > (const CSpyTreeNodeAttribute& attribute) const
	{
		//todo
		return true;
	}
	bool operator < (const CSpyTreeNodeAttribute& attribute) const
	{
		//todo
		return true;
	}

	void SetName(const std::string& strname)
	{
		m_strName = strname;
	}
	const std::string& GetName() const
	{
		return m_strName;
	}

	void SetValue(const std::string& strvalue)
	{
		m_strValue = strvalue;
	}
	const std::string& GetValue() const
	{
		return m_strValue;
	}
private:
	std::string		m_strValue;
	std::string		m_strName;
};

#endif