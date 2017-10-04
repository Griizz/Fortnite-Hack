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

// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.RefreshLevelInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemInspectUpgradeConfirmation_C::RefreshLevelInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.RefreshLevelInfo");

	UItemInspectUpgradeConfirmation_C_RefreshLevelInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.RefreshEnabledState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemInspectUpgradeConfirmation_C::RefreshEnabledState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.RefreshEnabledState");

	UItemInspectUpgradeConfirmation_C_RefreshEnabledState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.CanAffordUpgrade
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           CanAfford                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectUpgradeConfirmation_C::CanAffordUpgrade(bool* CanAfford)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.CanAffordUpgrade");

	UItemInspectUpgradeConfirmation_C_CanAffordUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanAfford != nullptr)
		*CanAfford = params.CanAfford;
}


// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.IsUpgradeAvailable
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           UpgradeAvailable               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectUpgradeConfirmation_C::IsUpgradeAvailable(bool* UpgradeAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.IsUpgradeAvailable");

	UItemInspectUpgradeConfirmation_C_IsUpgradeAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UpgradeAvailable != nullptr)
		*UpgradeAvailable = params.UpgradeAvailable;
}


// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.RefreshOnUpgrade
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemInspectUpgradeConfirmation_C::RefreshOnUpgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.RefreshOnUpgrade");

	UItemInspectUpgradeConfirmation_C_RefreshOnUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.OnShow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemInspectUpgradeConfirmation_C::OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.OnShow");

	UItemInspectUpgradeConfirmation_C_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.SetItemToRepresent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectUpgradeConfirmation_C::SetItemToRepresent(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.SetItemToRepresent");

	UItemInspectUpgradeConfirmation_C_SetItemToRepresent_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.Refresh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemInspectUpgradeConfirmation_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.Refresh");

	UItemInspectUpgradeConfirmation_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectUpgradeConfirmation_C::BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UItemInspectUpgradeConfirmation_C_BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.BndEvt__UpgradeCancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectUpgradeConfirmation_C::BndEvt__UpgradeCancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.BndEvt__UpgradeCancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	UItemInspectUpgradeConfirmation_C_BndEvt__UpgradeCancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.ExecuteUbergraph_ItemInspectUpgradeConfirmation
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectUpgradeConfirmation_C::ExecuteUbergraph_ItemInspectUpgradeConfirmation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.ExecuteUbergraph_ItemInspectUpgradeConfirmation");

	UItemInspectUpgradeConfirmation_C_ExecuteUbergraph_ItemInspectUpgradeConfirmation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.OnUpgradeCancel__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemInspectUpgradeConfirmation_C::OnUpgradeCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.OnUpgradeCancel__DelegateSignature");

	UItemInspectUpgradeConfirmation_C_OnUpgradeCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.OnUpgradeConfirm__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemInspectUpgradeConfirmation_C::OnUpgradeConfirm__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.OnUpgradeConfirm__DelegateSignature");

	UItemInspectUpgradeConfirmation_C_OnUpgradeConfirm__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
