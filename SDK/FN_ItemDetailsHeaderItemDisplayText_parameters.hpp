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

// Function ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C.GetDisplayName
struct UItemDetailsHeaderItemDisplayText_C_GetDisplayName_Params
{
	struct FText                                       DisplayName;                                              // (CPF_Parm, CPF_OutParm)
};

// Function ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C.HandlePostDifferentItemToCompareWithSet
struct UItemDetailsHeaderItemDisplayText_C_HandlePostDifferentItemToCompareWithSet_Params
{
};

// Function ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C.HandlePostDifferentItemToDetailSet
struct UItemDetailsHeaderItemDisplayText_C_HandlePostDifferentItemToDetailSet_Params
{
};

// Function ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C.ExecuteUbergraph_ItemDetailsHeaderItemDisplayText
struct UItemDetailsHeaderItemDisplayText_C_ExecuteUbergraph_ItemDetailsHeaderItemDisplayText_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
