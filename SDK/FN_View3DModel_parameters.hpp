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

// Function View3DModel.View3DModel_C.HandleBack
struct UView3DModel_C_HandleBack_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function View3DModel.View3DModel_C.Construct
struct UView3DModel_C_Construct_Params
{
};

// Function View3DModel.View3DModel_C.OnActivated
struct UView3DModel_C_OnActivated_Params
{
};

// Function View3DModel.View3DModel_C.ExecuteUbergraph_View3DModel
struct UView3DModel_C_ExecuteUbergraph_View3DModel_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
