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

// Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.FormatItemDisplayTags
struct UItemDetailsHeaderTagListText_C_FormatItemDisplayTags_Params
{
	TArray<struct FText>                               TagTexts;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	struct FText                                       FormatedText;                                             // (CPF_Parm, CPF_OutParm)
};

// Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.HandlePostDifferentItemToDetailSet
struct UItemDetailsHeaderTagListText_C_HandlePostDifferentItemToDetailSet_Params
{
};

// Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.HandlePostDifferentItemToCompareWithSet
struct UItemDetailsHeaderTagListText_C_HandlePostDifferentItemToCompareWithSet_Params
{
};

// Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.Construct
struct UItemDetailsHeaderTagListText_C_Construct_Params
{
};

// Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.ExecuteUbergraph_ItemDetailsHeaderTagListText
struct UItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
