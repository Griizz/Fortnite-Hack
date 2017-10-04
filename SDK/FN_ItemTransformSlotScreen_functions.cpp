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

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.GetSlotFromIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UItemTransformSlotEntry_C* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UItemTransformSlotEntry_C* UItemTransformSlotScreen_C::GetSlotFromIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.GetSlotFromIndex");

	UItemTransformSlotScreen_C_GetSlotFromIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.NavigateToFirstItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransformSlotScreen_C::NavigateToFirstItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.NavigateToFirstItem");

	UItemTransformSlotScreen_C_NavigateToFirstItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.Get Transform Data
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>       SacrificeItems                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// int                            CurrentSacrificePoints         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            CurrentTier                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformSlotScreen_C::Get_Transform_Data(TArray<class UFortItem*>* SacrificeItems, int* CurrentSacrificePoints, int* CurrentTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.Get Transform Data");

	UItemTransformSlotScreen_C_Get_Transform_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SacrificeItems != nullptr)
		*SacrificeItems = params.SacrificeItems;
	if (CurrentSacrificePoints != nullptr)
		*CurrentSacrificePoints = params.CurrentSacrificePoints;
	if (CurrentTier != nullptr)
		*CurrentTier = params.CurrentTier;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.ResetScreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransformSlotScreen_C::ResetScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.ResetScreen");

	UItemTransformSlotScreen_C_ResetScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.CloseItemPicker
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransformSlotScreen_C::CloseItemPicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.CloseItemPicker");

	UItemTransformSlotScreen_C_CloseItemPicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.SetupSlotScreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransformSlotScreen_C::SetupSlotScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.SetupSlotScreen");

	UItemTransformSlotScreen_C_SetupSlotScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OpenItemPicker
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransformSlotScreen_C::OpenItemPicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OpenItemPicker");

	UItemTransformSlotScreen_C_OpenItemPicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OpenSlotScreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformSlotScreen_C::OpenSlotScreen(class UFortItem* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OpenSlotScreen");

	UItemTransformSlotScreen_C_OpenSlotScreen_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot1_K2Node_ComponentBoundEvent_1_OnSlotChosen__DelegateSignature
// (FUNC_BlueprintEvent)

void UItemTransformSlotScreen_C::BndEvt__Slot1_K2Node_ComponentBoundEvent_1_OnSlotChosen__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot1_K2Node_ComponentBoundEvent_1_OnSlotChosen__DelegateSignature");

	UItemTransformSlotScreen_C_BndEvt__Slot1_K2Node_ComponentBoundEvent_1_OnSlotChosen__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot2_K2Node_ComponentBoundEvent_2_OnSlotChosen__DelegateSignature
// (FUNC_BlueprintEvent)

void UItemTransformSlotScreen_C::BndEvt__Slot2_K2Node_ComponentBoundEvent_2_OnSlotChosen__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot2_K2Node_ComponentBoundEvent_2_OnSlotChosen__DelegateSignature");

	UItemTransformSlotScreen_C_BndEvt__Slot2_K2Node_ComponentBoundEvent_2_OnSlotChosen__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot3_K2Node_ComponentBoundEvent_3_OnSlotChosen__DelegateSignature
// (FUNC_BlueprintEvent)

void UItemTransformSlotScreen_C::BndEvt__Slot3_K2Node_ComponentBoundEvent_3_OnSlotChosen__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot3_K2Node_ComponentBoundEvent_3_OnSlotChosen__DelegateSignature");

	UItemTransformSlotScreen_C_BndEvt__Slot3_K2Node_ComponentBoundEvent_3_OnSlotChosen__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot4_K2Node_ComponentBoundEvent_4_OnSlotChosen__DelegateSignature
// (FUNC_BlueprintEvent)

void UItemTransformSlotScreen_C::BndEvt__Slot4_K2Node_ComponentBoundEvent_4_OnSlotChosen__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot4_K2Node_ComponentBoundEvent_4_OnSlotChosen__DelegateSignature");

	UItemTransformSlotScreen_C_BndEvt__Slot4_K2Node_ComponentBoundEvent_4_OnSlotChosen__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot5_K2Node_ComponentBoundEvent_5_OnSlotChosen__DelegateSignature
// (FUNC_BlueprintEvent)

void UItemTransformSlotScreen_C::BndEvt__Slot5_K2Node_ComponentBoundEvent_5_OnSlotChosen__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot5_K2Node_ComponentBoundEvent_5_OnSlotChosen__DelegateSignature");

	UItemTransformSlotScreen_C_BndEvt__Slot5_K2Node_ComponentBoundEvent_5_OnSlotChosen__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               SelectedItem                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformSlotScreen_C::BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature(class UFortItem* SelectedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature");

	UItemTransformSlotScreen_C_BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemTransformSlotScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.Construct");

	UItemTransformSlotScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            SacrificePoints                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            CurrentTier                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformSlotScreen_C::BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature(int SacrificePoints, int CurrentTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature");

	UItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature_Params params;
	params.SacrificePoints = SacrificePoints;
	params.CurrentTier = CurrentTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           TransformActive                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformSlotScreen_C::BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature(bool TransformActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature");

	UItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature_Params params;
	params.TransformActive = TransformActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot1_K2Node_ComponentBoundEvent_774_OnSlotSelected__DelegateSignature
// (FUNC_BlueprintEvent)

void UItemTransformSlotScreen_C::BndEvt__Slot1_K2Node_ComponentBoundEvent_774_OnSlotSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot1_K2Node_ComponentBoundEvent_774_OnSlotSelected__DelegateSignature");

	UItemTransformSlotScreen_C_BndEvt__Slot1_K2Node_ComponentBoundEvent_774_OnSlotSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot2_K2Node_ComponentBoundEvent_784_OnSlotSelected__DelegateSignature
// (FUNC_BlueprintEvent)

void UItemTransformSlotScreen_C::BndEvt__Slot2_K2Node_ComponentBoundEvent_784_OnSlotSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot2_K2Node_ComponentBoundEvent_784_OnSlotSelected__DelegateSignature");

	UItemTransformSlotScreen_C_BndEvt__Slot2_K2Node_ComponentBoundEvent_784_OnSlotSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot3_K2Node_ComponentBoundEvent_795_OnSlotSelected__DelegateSignature
// (FUNC_BlueprintEvent)

void UItemTransformSlotScreen_C::BndEvt__Slot3_K2Node_ComponentBoundEvent_795_OnSlotSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot3_K2Node_ComponentBoundEvent_795_OnSlotSelected__DelegateSignature");

	UItemTransformSlotScreen_C_BndEvt__Slot3_K2Node_ComponentBoundEvent_795_OnSlotSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot4_K2Node_ComponentBoundEvent_807_OnSlotSelected__DelegateSignature
// (FUNC_BlueprintEvent)

void UItemTransformSlotScreen_C::BndEvt__Slot4_K2Node_ComponentBoundEvent_807_OnSlotSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot4_K2Node_ComponentBoundEvent_807_OnSlotSelected__DelegateSignature");

	UItemTransformSlotScreen_C_BndEvt__Slot4_K2Node_ComponentBoundEvent_807_OnSlotSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot5_K2Node_ComponentBoundEvent_820_OnSlotSelected__DelegateSignature
// (FUNC_BlueprintEvent)

void UItemTransformSlotScreen_C::BndEvt__Slot5_K2Node_ComponentBoundEvent_820_OnSlotSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot5_K2Node_ComponentBoundEvent_820_OnSlotSelected__DelegateSignature");

	UItemTransformSlotScreen_C_BndEvt__Slot5_K2Node_ComponentBoundEvent_820_OnSlotSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.ExecuteUbergraph_ItemTransformSlotScreen
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformSlotScreen_C::ExecuteUbergraph_ItemTransformSlotScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.ExecuteUbergraph_ItemTransformSlotScreen");

	UItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnItemPickerOpened__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransformSlotScreen_C::OnItemPickerOpened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnItemPickerOpened__DelegateSignature");

	UItemTransformSlotScreen_C_OnItemPickerOpened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnItemPickerClosed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransformSlotScreen_C::OnItemPickerClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnItemPickerClosed__DelegateSignature");

	UItemTransformSlotScreen_C_OnItemPickerClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnTransformButtonUpdated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TransformActive                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformSlotScreen_C::OnTransformButtonUpdated__DelegateSignature(bool TransformActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnTransformButtonUpdated__DelegateSignature");

	UItemTransformSlotScreen_C_OnTransformButtonUpdated__DelegateSignature_Params params;
	params.TransformActive = TransformActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnTransformConfirmed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>       ItemsToSacrifice               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            SacrificePoints                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            CurrentTier                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformSlotScreen_C::OnTransformConfirmed__DelegateSignature(int SacrificePoints, int CurrentTier, TArray<class UFortItem*>* ItemsToSacrifice)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnTransformConfirmed__DelegateSignature");

	UItemTransformSlotScreen_C_OnTransformConfirmed__DelegateSignature_Params params;
	params.SacrificePoints = SacrificePoints;
	params.CurrentTier = CurrentTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemsToSacrifice != nullptr)
		*ItemsToSacrifice = params.ItemsToSacrifice;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
