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

// Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.SetState
struct UItemAlterationsListDetailWidget_C_SetState_Params
{
	EFortAlterationWidgetState                         State;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.HandlePostDifferentItemToDetailSet
struct UItemAlterationsListDetailWidget_C_HandlePostDifferentItemToDetailSet_Params
{
};

// Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.HandlePostDifferentItemToCompareWithSet
struct UItemAlterationsListDetailWidget_C_HandlePostDifferentItemToCompareWithSet_Params
{
};

// Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.ExecuteUbergraph_ItemAlterationsListDetailWidget
struct UItemAlterationsListDetailWidget_C_ExecuteUbergraph_ItemAlterationsListDetailWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
