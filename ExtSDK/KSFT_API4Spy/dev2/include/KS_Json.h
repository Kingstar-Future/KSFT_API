#ifndef __KS_JSON_H__
#define __KS_JSON_H__

/*****************************
简易的JSON格式对象的API
update list:
2013-12-19	create by zhichun.xia


****************************/

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

class KS_SPY_DLL KS_Json
{
public:
	// 创建JSON数据访问对象
	static KS_Json *CreateJson();

public:
	// 增加数组元素值
	virtual KS_Json * AddValue(const char *value) = 0;
	virtual KS_Json * AddValue(KS_Json *value) = 0;
	// 增加成员
	virtual KS_Json *AddMember(const char *key, const char *value) = 0;
	virtual KS_Json *AddMember(const char *key, KS_Json *value) = 0;
	// 删除成员
	virtual KS_Json * DelMember(const char *key) = 0;
	virtual KS_Json * makeKeyMember(const char *key) = 0;
	// 
	virtual const char *GetStringMember(char *key) = 0;
	virtual const char *GetValue(unsigned int index) = 0;
	virtual const char *GetMemberValue(const char *key) = 0;

	virtual void Release() = 0;

	virtual KS_Json * Import(std::string &buf) = 0;
	virtual KS_Json * Import(char *buffer) = 0;
	virtual int Export(char *buffer, unsigned int size) = 0;
	// 输出格式化后的字符串数据
	virtual std::string toStyledString() = 0;
protected:
	~KS_Json(){};

};


#endif
