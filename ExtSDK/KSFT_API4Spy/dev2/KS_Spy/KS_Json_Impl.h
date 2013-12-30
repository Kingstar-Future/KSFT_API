#ifndef __KS_JSON_IMPL_H__
#define __KS_JSON_IMPL_H__

#include "config.h"
#include "json.h"
#include "KS_Json.h"

class KS_Json_Impl : public KS_Json
{
public:
	KS_Json_Impl()
	{
	}
	~KS_Json_Impl(){
		json_value.clear();
	}

public:
	virtual KS_Json * AddValue(const char *value)
	{
		json_value[json_value.size()] = value;
		return this;
	}

	virtual KS_Json * AddValue(KS_Json *value)
	{
		KS_Json_Impl *i = dynamic_cast<KS_Json_Impl *>(value);
		json_value[json_value.size()] = i->json_value;
		return this;
	}
	virtual KS_Json * AddMember(const char *key, const char *value);
	virtual KS_Json * AddMember(const char *key, KS_Json *value);
	virtual KS_Json * DelMember(const char *key)
	{
		json_value.removeMember(key);
		return this;
	}
	virtual KS_Json * makeKeyMember(const char *key);

	virtual const char *GetStringMember(char *key)
	{
		return json_value[key].asString().c_str();
	}

	virtual const char *GetValue(unsigned int index)
	{
		return json_value[index].asCString();
	}
	virtual const char *GetMemberValue(const char *key)
	{
		return json_value[key].asCString();
	}


	virtual void Release()
	{
		json_value.clear();
		delete this;
	}
	virtual KS_Json * Import(std::string &buf);
	virtual KS_Json * Import(char *buffer);
	virtual int Export(char *buffer, unsigned int size);
	virtual std::string toStyledString()
	{
		return json_value.toStyledString();
	}

private:
	// json 数据对象
	Json::Value json_value;

	Json::Value *findMember(const char *key);

};


#endif
