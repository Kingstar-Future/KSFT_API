#include "stdafx.h"

#include "Utility.h"

#include "KS_Json_Impl.h"


KS_Json *KS_Json::CreateJson()
{
	return dynamic_cast<KS_Json *>(new KS_Json_Impl());
}

///////////////////////////////////////////////////////////////
Json::Value *KS_Json_Impl::findMember(const char *key)
{
	std::vector<std::string> vKeys;
	fastsplit_string(vKeys, key, ".", false);
	Json::Value *last_v = NULL;
	Json::Value *cur_v = &json_value;
	auto last_iter = vKeys.begin();
	for (auto iter = vKeys.begin(); iter != vKeys.end(); ++iter)
	{
		Json::Value &next_v = (*cur_v)[*iter];
		if (next_v == Json::Value::null){
			return NULL;
		}
		cur_v = &next_v;
	}

	return cur_v;
}

KS_Json *KS_Json_Impl::makeKeyMember(const char *key)
{
	std::vector<std::string> vKeys;
	fastsplit_string(vKeys, key, ".", false);
	Json::Value *last_v = NULL;
	Json::Value *cur_v = &json_value;
	for (auto iter = vKeys.begin(); iter != vKeys.end(); ++iter)
	{
		Json::Value &next_v = (*cur_v)[*iter];
		if (next_v == Json::Value::null){
			(*cur_v)[*iter] = Json::Value();
			next_v = (*cur_v)[*iter];
		}
		last_v = cur_v;
		
		cur_v = &next_v;
	}

	return this;
}


KS_Json * KS_Json_Impl::AddMember(const char *key, const char *value)
{
	std::vector<std::string> vKeys;
	fastsplit_string(vKeys, key, ".", false);
	Json::Value *last_v = NULL;
	Json::Value *cur_v = &json_value;
	auto last_iter = vKeys.begin();
	for (auto iter = vKeys.begin(); iter != vKeys.end(); ++iter)
	{
		Json::Value &next_v = (*cur_v)[*iter];
		if (next_v == Json::Value::null){
			(*cur_v)[*iter] = Json::Value();
			next_v = (*cur_v)[*iter];
		}
		last_v = cur_v;
		
		cur_v = &next_v;
		last_iter = iter;
	}

	(*last_v)[*last_iter] = value;

	return this;
}
KS_Json * KS_Json_Impl::AddMember(const char *key, KS_Json *value)
{
	KS_Json_Impl *i = dynamic_cast<KS_Json_Impl *>(value);

	std::vector<std::string> vKeys;
	fastsplit_string(vKeys, key, ".", false);
	Json::Value *last_v = NULL;
	Json::Value *cur_v = &json_value;
	auto last_iter = vKeys.begin();
	for (auto iter = vKeys.begin(); iter != vKeys.end(); ++iter)
	{
		Json::Value &next_v = (*cur_v)[*iter];
		if (next_v == Json::Value::null){
			(*cur_v)[*iter] = Json::Value();
			next_v = (*cur_v)[*iter];
		}
		last_v = cur_v;
		
		cur_v = &next_v;
		last_iter = iter;
	}

	(*last_v)[*last_iter] = i->json_value;

	return this;
}

KS_Json * KS_Json_Impl::Import(std::string &buf)
{
    Json::Reader reader;

    if (reader.parse(buf, json_value))
		return this;
	else
		return NULL;
}


KS_Json * KS_Json_Impl::Import(char *buffer)
{
    std::string strValue = buffer;

    Json::Reader reader;

    if (reader.parse(buffer, json_value))
		return this;
	else
		return NULL;
}

int KS_Json_Impl::Export(char *buffer, unsigned int size)
{
	if (NULL == buffer)
		return 0;
	std::string out = json_value.toStyledString();
	memset(buffer, 0, size);
	if ((size - 1) >= out.length())
	{
		strncpy(buffer, out.c_str(), out.length());
		buffer[size - 1] = '\0';
		return out.length();
	}
	else{
		strncpy(buffer, out.c_str(), size - 1);
		buffer[size - 1] = '\0';
		return size -1;
	}
}
