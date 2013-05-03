/////////////////////////////////////////////////////////////////////////
/// ���˴� KSFT C++ => .Net Framework Adapter
/// Summary: ���й�ת�йܣ��й�ת���й�
/// Author:	ksftapi@gmail.com
/// Date: 20130304
/// Update List��
///   20130326 ���ע��
///   20130328 �޸�ע�� 
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
	/// ���й���,�Զ��ͷ��ַ���ָ���ڴ�
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
	/// ���й���, �Զ�ת�� Managed <==> Native 
	/// M: managed
	/// N: native
	///</summary>
	template<typename M, typename N> 
	class MNConv
	{
	public:
		///<summary>
		// ģ�����ʵ�ֲ��ֱ������ͷ�ļ���������ӻ����
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
	/// ȫ�ֺ���
	///</summary>
	ThostFtdcRspInfoField^ RspInfoField(CThostFtdcRspInfoField *pRspInfo);

};