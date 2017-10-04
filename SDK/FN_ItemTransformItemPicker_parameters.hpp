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

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.Return Item to Detail
struct UItemTransformItemPicker_C_Return_Item_to_Detail_Params
{
	class UFortItem*                                   InItem;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortItem*                                   OutItem;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.OpenInspectionScreen
struct UItemTransformItemPicker_C_OpenInspectionScreen_Params
{
	bool                                               PassThru;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.CommitSelectedItem
struct UItemTransformItemPicker_C_CommitSelectedItem_Params
{
	bool                                               PassThru;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.OpenPicker
struct UItemTransformItemPicker_C_OpenPicker_Params
{
	TArray<class UFortItem*>                           SacrificeItems;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	int                                                SelectedSlot;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.SetFilter
struct UItemTransformItemPicker_C_SetFilter_Params
{
	struct FName                                       FilterName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.SetupFilterTabList
struct UItemTransformItemPicker_C_SetupFilterTabList_Params
{
};

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.HandleItemCommitted
struct UItemTransformItemPicker_C_HandleItemCommitted_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.RemoveInvalidItems
struct UItemTransformItemPicker_C_RemoveInvalidItems_Params
{
	TArray<class UFortAccountItem*>                    UnrefinedItems;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<class UFortItem*>                           CurrentSacrificeItems;                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<class UFortAccountItem*>                    RefinedItems;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.HandleItemSelected
struct UItemTransformItemPicker_C_HandleItemSelected_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.SetupItemPicker
struct UItemTransformItemPicker_C_SetupItemPicker_Params
{
};

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.Construct
struct UItemTransformItemPicker_C_Construct_Params
{
};

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.PreConstruct
struct UItemTransformItemPicker_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.BndEvt__FilterTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature
struct UItemTransformItemPicker_C_BndEvt__FilterTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.ExecuteUbergraph_ItemTransformItemPicker
struct UItemTransformItemPicker_C_ExecuteUbergraph_ItemTransformItemPicker_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.OnItemSelected__DelegateSignature
struct UItemTransformItemPicker_C_OnItemSelected__DelegateSignature_Params
{
	class UFortItem*                                   SelectedItem;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
