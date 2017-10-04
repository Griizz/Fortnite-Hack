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

// Function QuickbarPrimary.QuickbarPrimary_C.HasOneNonHarvestWeapon
struct UQuickbarPrimary_C_HasOneNonHarvestWeapon_Params
{
	bool                                               HasNonHarvestWeapon;                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuickbarPrimary.QuickbarPrimary_C.Show Primary Quickbar Rail
struct UQuickbarPrimary_C_Show_Primary_Quickbar_Rail_Params
{
	bool                                               Show;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuickbarPrimary.QuickbarPrimary_C.HandleKeybindsChanged
struct UQuickbarPrimary_C_HandleKeybindsChanged_Params
{
};

// Function QuickbarPrimary.QuickbarPrimary_C.Construct
struct UQuickbarPrimary_C_Construct_Params
{
};

// Function QuickbarPrimary.QuickbarPrimary_C.HandleInputMethodChanged
struct UQuickbarPrimary_C_HandleInputMethodChanged_Params
{
	bool                                               bUsingGamepad;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuickbarPrimary.QuickbarPrimary_C.RefreshQuickbar
struct UQuickbarPrimary_C_RefreshQuickbar_Params
{
};

// Function QuickbarPrimary.QuickbarPrimary_C.Destruct
struct UQuickbarPrimary_C_Destruct_Params
{
};

// Function QuickbarPrimary.QuickbarPrimary_C.ExecuteUbergraph_QuickbarPrimary
struct UQuickbarPrimary_C_ExecuteUbergraph_QuickbarPrimary_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
