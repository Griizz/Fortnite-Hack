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

// Function ItemDetailsHeader.ItemDetailsHeader_C.SetStyles
struct UItemDetailsHeader_C_SetStyles_Params
{
};

// Function ItemDetailsHeader.ItemDetailsHeader_C.UpdateItemsForWidgets
struct UItemDetailsHeader_C_UpdateItemsForWidgets_Params
{
};

// Function ItemDetailsHeader.ItemDetailsHeader_C.FormatItemDisplayTags
struct UItemDetailsHeader_C_FormatItemDisplayTags_Params
{
	TArray<struct FText>                               TagTexts;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	struct FText                                       FormatedText;                                             // (CPF_Parm, CPF_OutParm)
};

// Function ItemDetailsHeader.ItemDetailsHeader_C.Construct
struct UItemDetailsHeader_C_Construct_Params
{
};

// Function ItemDetailsHeader.ItemDetailsHeader_C.HandlePostDifferentItemToDetailSet
struct UItemDetailsHeader_C_HandlePostDifferentItemToDetailSet_Params
{
};

// Function ItemDetailsHeader.ItemDetailsHeader_C.HandlePostDifferentItemToCompareWithSet
struct UItemDetailsHeader_C_HandlePostDifferentItemToCompareWithSet_Params
{
};

// Function ItemDetailsHeader.ItemDetailsHeader_C.PreConstruct
struct UItemDetailsHeader_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemDetailsHeader.ItemDetailsHeader_C.ExecuteUbergraph_ItemDetailsHeader
struct UItemDetailsHeader_C_ExecuteUbergraph_ItemDetailsHeader_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
