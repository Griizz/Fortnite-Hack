#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaNews.AthenaNews_C.Get_RegionNews_Visibility
struct UAthenaNews_C_Get_RegionNews_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AthenaNews.AthenaNews_C.Get_PlatformNews_Visibility
struct UAthenaNews_C_Get_PlatformNews_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AthenaNews.AthenaNews_C.Construct
struct UAthenaNews_C_Construct_Params
{
};

// Function AthenaNews.AthenaNews_C.ExecuteUbergraph_AthenaNews
struct UAthenaNews_C_ExecuteUbergraph_AthenaNews_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
