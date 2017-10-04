// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.SetSlotSelection
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Selected                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformSlotEntry_C::SetSlotSelection(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.SetSlotSelection");

	UItemTransformSlotEntry_C_SetSlotSelection_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.SetSacrificeItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               SelectedSacrificeItem          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformSlotEntry_C::SetSacrificeItem(class UFortItem* SelectedSacrificeItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.SetSacrificeItem");

	UItemTransformSlotEntry_C_SetSacrificeItem_Params params;
	params.SelectedSacrificeItem = SelectedSacrificeItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformSlotEntry_C::BndEvt__PanelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	UItemTransformSlotEntry_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformSlotEntry_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.PreConstruct");

	UItemTransformSlotEntry_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformSlotEntry_C::BndEvt__PanelButton_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature");

	UItemTransformSlotEntry_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_115_CommonSelectedStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Selected                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformSlotEntry_C::BndEvt__PanelButton_K2Node_ComponentBoundEvent_115_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_115_CommonSelectedStateChanged__DelegateSignature");

	UItemTransformSlotEntry_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_115_CommonSelectedStateChanged__DelegateSignature_Params params;
	params.Button = Button;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.ExecuteUbergraph_ItemTransformSlotEntry
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformSlotEntry_C::ExecuteUbergraph_ItemTransformSlotEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.ExecuteUbergraph_ItemTransformSlotEntry");

	UItemTransformSlotEntry_C_ExecuteUbergraph_ItemTransformSlotEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.OnSlotSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransformSlotEntry_C::OnSlotSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.OnSlotSelected__DelegateSignature");

	UItemTransformSlotEntry_C_OnSlotSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.OnSlotChosen__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransformSlotEntry_C::OnSlotChosen__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.OnSlotChosen__DelegateSignature");

	UItemTransformSlotEntry_C_OnSlotChosen__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
