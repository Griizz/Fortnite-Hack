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

// Function ItemTransform.ItemTransform_C.HandleClosePicker
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransform_C::HandleClosePicker(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.HandleClosePicker");

	UItemTransform_C_HandleClosePicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemTransform.ItemTransform_C.OnItemPickerOpened
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransform_C::OnItemPickerOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.OnItemPickerOpened");

	UItemTransform_C_OnItemPickerOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.OnItemPickerClosed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransform_C::OnItemPickerClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.OnItemPickerClosed");

	UItemTransform_C_OnItemPickerClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.UpdateTransformAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TransformActive                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransform_C::UpdateTransformAction(bool TransformActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.UpdateTransformAction");

	UItemTransform_C_UpdateTransformAction_Params params;
	params.TransformActive = TransformActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.Handle Transform Activated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransform_C::Handle_Transform_Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.Handle Transform Activated");

	UItemTransform_C_Handle_Transform_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.Handle Select Key Activated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransform_C::Handle_Select_Key_Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.Handle Select Key Activated");

	UItemTransform_C_Handle_Select_Key_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.DisableTransformAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransform_C::DisableTransformAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.DisableTransformAction");

	UItemTransform_C_DisableTransformAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.HideTransformAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransform_C::HideTransformAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.HideTransformAction");

	UItemTransform_C_HideTransformAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.ShowTransformAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransform_C::ShowTransformAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.ShowTransformAction");

	UItemTransform_C_ShowTransformAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.UpdateSelectKeyAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransform_C::UpdateSelectKeyAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.UpdateSelectKeyAction");

	UItemTransform_C_UpdateSelectKeyAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.DisableSelectKeyAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransform_C::DisableSelectKeyAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.DisableSelectKeyAction");

	UItemTransform_C_DisableSelectKeyAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.HideSelectKeyAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransform_C::HideSelectKeyAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.HideSelectKeyAction");

	UItemTransform_C_HideSelectKeyAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.ShowSelectKeyAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransform_C::ShowSelectKeyAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.ShowSelectKeyAction");

	UItemTransform_C_ShowSelectKeyAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.HandleSelectKeyAction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransform_C::HandleSelectKeyAction(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.HandleSelectKeyAction");

	UItemTransform_C_HandleSelectKeyAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemTransform.ItemTransform_C.HandleTransformAction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransform_C::HandleTransformAction(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.HandleTransformAction");

	UItemTransform_C_HandleTransformAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemTransform.ItemTransform_C.ResetItemTransform
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransform_C::ResetItemTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.ResetItemTransform");

	UItemTransform_C_ResetItemTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.HandleTransformFailed
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ErrorMessage                   (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UItemTransform_C::HandleTransformFailed(struct FText* ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.HandleTransformFailed");

	UItemTransform_C_HandleTransformFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ErrorMessage != nullptr)
		*ErrorMessage = params.ErrorMessage;
}


// Function ItemTransform.ItemTransform_C.HandleTransformSucceeded
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair> RewardedItems                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FFortItemInstanceQuantityPair> SacrificedItems                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UItemTransform_C::HandleTransformSucceeded(TArray<struct FFortItemInstanceQuantityPair>* RewardedItems, TArray<struct FFortItemInstanceQuantityPair>* SacrificedItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.HandleTransformSucceeded");

	UItemTransform_C_HandleTransformSucceeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RewardedItems != nullptr)
		*RewardedItems = params.RewardedItems;
	if (SacrificedItems != nullptr)
		*SacrificedItems = params.SacrificedItems;
}


// Function ItemTransform.ItemTransform_C.HandleTransformContinue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransform_C::HandleTransformContinue()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.HandleTransformContinue");

	UItemTransform_C_HandleTransformContinue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.OpenResult
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair> RewardItems                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FFortItemInstanceQuantityPair> SacrificeItems                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UItemTransform_C::OpenResult(TArray<struct FFortItemInstanceQuantityPair>* RewardItems, TArray<struct FFortItemInstanceQuantityPair>* SacrificeItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.OpenResult");

	UItemTransform_C_OpenResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RewardItems != nullptr)
		*RewardItems = params.RewardItems;
	if (SacrificeItems != nullptr)
		*SacrificeItems = params.SacrificeItems;
}


// Function ItemTransform.ItemTransform_C.HandleTransformConfirm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransform_C::HandleTransformConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.HandleTransformConfirm");

	UItemTransform_C_HandleTransformConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.HandleTransformCancel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransform_C::HandleTransformCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.HandleTransformCancel");

	UItemTransform_C_HandleTransformCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.OpenConfirmation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransform_C::OpenConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.OpenConfirmation");

	UItemTransform_C_OpenConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.HandleSelect
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransform_C::HandleSelect(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.HandleSelect");

	UItemTransform_C_HandleSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemTransform.ItemTransform_C.HandleBack
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransform_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.HandleBack");

	UItemTransform_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemTransform.ItemTransform_C.SetupActionHandlers
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransform_C::SetupActionHandlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.SetupActionHandlers");

	UItemTransform_C_SetupActionHandlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.OpenSlotScreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransform_C::OpenSlotScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.OpenSlotScreen");

	UItemTransform_C_OpenSlotScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.OpenKeyScreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransform_C::OpenKeyScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.OpenKeyScreen");

	UItemTransform_C_OpenKeyScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.OpenItemTransform
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransform_C::OpenItemTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.OpenItemTransform");

	UItemTransform_C_OpenItemTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemTransform_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.Construct");

	UItemTransform_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.BndEvt__KeyScreen_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransform_C::BndEvt__KeyScreen_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature(class UFortItem* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.BndEvt__KeyScreen_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature");

	UItemTransform_C_BndEvt__KeyScreen_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.BndEvt__TransformScreenSwitcher_K2Node_ComponentBoundEvent_213_OnActiveWidgetChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 ActiveWidget                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ActiveWidgetIndex              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransform_C::BndEvt__TransformScreenSwitcher_K2Node_ComponentBoundEvent_213_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int ActiveWidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.BndEvt__TransformScreenSwitcher_K2Node_ComponentBoundEvent_213_OnActiveWidgetChanged__DelegateSignature");

	UItemTransform_C_BndEvt__TransformScreenSwitcher_K2Node_ComponentBoundEvent_213_OnActiveWidgetChanged__DelegateSignature_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemTransform_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.OnActivated");

	UItemTransform_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.BndEvt__KeyScreen_K2Node_ComponentBoundEvent_513_OnKeyConfirmed__DelegateSignature
// (FUNC_BlueprintEvent)

void UItemTransform_C::BndEvt__KeyScreen_K2Node_ComponentBoundEvent_513_OnKeyConfirmed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.BndEvt__KeyScreen_K2Node_ComponentBoundEvent_513_OnKeyConfirmed__DelegateSignature");

	UItemTransform_C_BndEvt__KeyScreen_K2Node_ComponentBoundEvent_513_OnKeyConfirmed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.BndEvt__SlotScreen_K2Node_ComponentBoundEvent_598_OnTransformButtonUpdated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           TransformActive                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransform_C::BndEvt__SlotScreen_K2Node_ComponentBoundEvent_598_OnTransformButtonUpdated__DelegateSignature(bool TransformActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.BndEvt__SlotScreen_K2Node_ComponentBoundEvent_598_OnTransformButtonUpdated__DelegateSignature");

	UItemTransform_C_BndEvt__SlotScreen_K2Node_ComponentBoundEvent_598_OnTransformButtonUpdated__DelegateSignature_Params params;
	params.TransformActive = TransformActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.ExecuteUbergraph_ItemTransform
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransform_C::ExecuteUbergraph_ItemTransform(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.ExecuteUbergraph_ItemTransform");

	UItemTransform_C_ExecuteUbergraph_ItemTransform_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
