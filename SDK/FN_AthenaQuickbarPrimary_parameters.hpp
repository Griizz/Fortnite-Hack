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

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HasOneNonHarvestWeapon
struct UAthenaQuickbarPrimary_C_HasOneNonHarvestWeapon_Params
{
	bool                                               HasNonHarvestWeapon;                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Show Primary Quickbar Rail
struct UAthenaQuickbarPrimary_C_Show_Primary_Quickbar_Rail_Params
{
	bool                                               Show;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleKeybindsChanged
struct UAthenaQuickbarPrimary_C_HandleKeybindsChanged_Params
{
};

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Construct
struct UAthenaQuickbarPrimary_C_Construct_Params
{
};

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleInputMethodChanged
struct UAthenaQuickbarPrimary_C_HandleInputMethodChanged_Params
{
	bool                                               bUsingGamepad;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.RefreshQuickbar
struct UAthenaQuickbarPrimary_C_RefreshQuickbar_Params
{
};

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Destruct
struct UAthenaQuickbarPrimary_C_Destruct_Params
{
};

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.ExecuteUbergraph_AthenaQuickbarPrimary
struct UAthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
