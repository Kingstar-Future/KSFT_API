/////////////////////////////////////////////////////////////////////////
/// 金仕达 KSFT C++ => .Net Framework Adapter
/// Summary: 非托管转托管，托管转非托管
/// Author:	ksftapi@gmail.com
/// Date: 20130304
/// Update List：
///   20130326 添加注释
///   20130328 修改注释 
/////////////////////////////////////////////////////////////////////////

#pragma once

#include "Struct.h"
#include "CosStruct.h"
#include "Delegates.h"
#include "..\KSFT_API\KSTradeAPI.h"
#include "..\KSFT_API\KSMarketDataAPI.h"
#include "..\KSFT_API\KSCosApi.h"

using namespace KSFT;
using namespace KingstarAPI;

namespace Native
{
	///<summary>
	/// 非托管类,自动释放字符串指针内存
	///</summary>
	class CAutoStrPtr
	{
	public:
		char* m_pChar;
		int m_Length;
		CAutoStrPtr(String^ str);
		CAutoStrPtr(String^ str, void* pDst, int length);
		~CAutoStrPtr();
	};

	///<summary>
	/// 非托管类, 自动转换 Managed <==> Native 
	/// M: managed
	/// N: native
	///</summary>
	template<typename M, typename N> 
	class MNConv
	{
	public:
		///<summary>
		// 模版类的实现部分必须放在头文件里，否则链接会出错
		/// Native to Managed
		///</summary>
		static M N2M(N* pNative){
			return safe_cast<M>(Marshal::PtrToStructure(IntPtr(pNative), M::typeid));
		};

		///<summary>
		/// Managed to Native
		///</summary>
		static void M2N(M managed, N* pNative){
			Marshal::StructureToPtr(managed, IntPtr(pNative), true);
		};
	};

	///<summary>
	/// 全局函数
	///</summary>
	ThostFtdcRspInfoField^ RspInfoField(CThostFtdcRspInfoField *pRspInfo);

};