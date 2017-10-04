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

// Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.SetSlotSelection
struct UItemTransformSlotEntry_C_SetSlotSelection_Params
{
	bool                                               Selected;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.SetSacrificeItem
struct UItemTransformSlotEntry_C_SetSacrificeItem_Params
{
	class UFortItem*                                   SelectedSacrificeItem;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UItemTransformSlotEntry_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.PreConstruct
struct UItemTransformSlotEntry_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature
struct UItemTransformSlotEntry_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_115_CommonSelectedStateChanged__DelegateSignature
struct UItemTransformSlotEntry_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_115_CommonSelectedStateChanged__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Selected;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.ExecuteUbergraph_ItemTransformSlotEntry
struct UItemTransformSlotEntry_C_ExecuteUbergraph_ItemTransformSlotEntry_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.OnSlotSelected__DelegateSignature
struct UItemTransformSlotEntry_C_OnSlotSelected__DelegateSignature_Params
{
};

// Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.OnSlotChosen__DelegateSignature
struct UItemTransformSlotEntry_C_OnSlotChosen__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
