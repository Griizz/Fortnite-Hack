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

// Function ItemDetailsHeader.ItemDetailsHeader_C.Construct
struct UItemDetailsHeader_C_Construct_Params
{
};

// Function ItemDetailsHeader.ItemDetailsHeader_C.PreConstruct
struct UItemDetailsHeader_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemDetailsHeader.ItemDetailsHeader_C.HandleDifferentItemToDetailSet
struct UItemDetailsHeader_C_HandleDifferentItemToDetailSet_Params
{
};

// Function ItemDetailsHeader.ItemDetailsHeader_C.HandleDifferentItemToCompareSet
struct UItemDetailsHeader_C_HandleDifferentItemToCompareSet_Params
{
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
