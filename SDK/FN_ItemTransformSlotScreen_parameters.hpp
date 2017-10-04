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

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.GetSlotFromIndex
struct UItemTransformSlotScreen_C_GetSlotFromIndex_Params
{
	class UItemTransformSlotEntry_C*                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.NavigateToFirstItem
struct UItemTransformSlotScreen_C_NavigateToFirstItem_Params
{
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.Get Transform Data
struct UItemTransformSlotScreen_C_Get_Transform_Data_Params
{
	TArray<class UFortItem*>                           SacrificeItems;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	int                                                CurrentSacrificePoints;                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentTier;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.ResetScreen
struct UItemTransformSlotScreen_C_ResetScreen_Params
{
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.CloseItemPicker
struct UItemTransformSlotScreen_C_CloseItemPicker_Params
{
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.SetupSlotScreen
struct UItemTransformSlotScreen_C_SetupSlotScreen_Params
{
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OpenItemPicker
struct UItemTransformSlotScreen_C_OpenItemPicker_Params
{
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OpenSlotScreen
struct UItemTransformSlotScreen_C_OpenSlotScreen_Params
{
	class UFortItem*                                   Key;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot1_K2Node_ComponentBoundEvent_1_OnSlotChosen__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__Slot1_K2Node_ComponentBoundEvent_1_OnSlotChosen__DelegateSignature_Params
{
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot2_K2Node_ComponentBoundEvent_2_OnSlotChosen__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__Slot2_K2Node_ComponentBoundEvent_2_OnSlotChosen__DelegateSignature_Params
{
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot3_K2Node_ComponentBoundEvent_3_OnSlotChosen__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__Slot3_K2Node_ComponentBoundEvent_3_OnSlotChosen__DelegateSignature_Params
{
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot4_K2Node_ComponentBoundEvent_4_OnSlotChosen__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__Slot4_K2Node_ComponentBoundEvent_4_OnSlotChosen__DelegateSignature_Params
{
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot5_K2Node_ComponentBoundEvent_5_OnSlotChosen__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__Slot5_K2Node_ComponentBoundEvent_5_OnSlotChosen__DelegateSignature_Params
{
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature_Params
{
	class UFortItem*                                   SelectedItem;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.Construct
struct UItemTransformSlotScreen_C_Construct_Params
{
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature_Params
{
	int                                                SacrificePoints;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentTier;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature_Params
{
	bool                                               TransformActive;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot1_K2Node_ComponentBoundEvent_774_OnSlotSelected__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__Slot1_K2Node_ComponentBoundEvent_774_OnSlotSelected__DelegateSignature_Params
{
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot2_K2Node_ComponentBoundEvent_784_OnSlotSelected__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__Slot2_K2Node_ComponentBoundEvent_784_OnSlotSelected__DelegateSignature_Params
{
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot3_K2Node_ComponentBoundEvent_795_OnSlotSelected__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__Slot3_K2Node_ComponentBoundEvent_795_OnSlotSelected__DelegateSignature_Params
{
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot4_K2Node_ComponentBoundEvent_807_OnSlotSelected__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__Slot4_K2Node_ComponentBoundEvent_807_OnSlotSelected__DelegateSignature_Params
{
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot5_K2Node_ComponentBoundEvent_820_OnSlotSelected__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__Slot5_K2Node_ComponentBoundEvent_820_OnSlotSelected__DelegateSignature_Params
{
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.ExecuteUbergraph_ItemTransformSlotScreen
struct UItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnItemPickerOpened__DelegateSignature
struct UItemTransformSlotScreen_C_OnItemPickerOpened__DelegateSignature_Params
{
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnItemPickerClosed__DelegateSignature
struct UItemTransformSlotScreen_C_OnItemPickerClosed__DelegateSignature_Params
{
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnTransformButtonUpdated__DelegateSignature
struct UItemTransformSlotScreen_C_OnTransformButtonUpdated__DelegateSignature_Params
{
	bool                                               TransformActive;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnTransformConfirmed__DelegateSignature
struct UItemTransformSlotScreen_C_OnTransformConfirmed__DelegateSignature_Params
{
	TArray<class UFortItem*>                           ItemsToSacrifice;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	int                                                SacrificePoints;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentTier;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
