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

// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.IsEvolutionReady
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           EvolutionReady                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectUpgradeCallout_C::IsEvolutionReady(bool* EvolutionReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.IsEvolutionReady");

	UItemInspectUpgradeCallout_C_IsEvolutionReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EvolutionReady != nullptr)
		*EvolutionReady = params.EvolutionReady;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.ShowEvolutionInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemInspectUpgradeCallout_C::ShowEvolutionInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.ShowEvolutionInfo");

	UItemInspectUpgradeCallout_C_ShowEvolutionInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.ShowUpgradeInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemInspectUpgradeCallout_C::ShowUpgradeInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.ShowUpgradeInfo");

	UItemInspectUpgradeCallout_C_ShowUpgradeInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.IsUpgradeReady
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           UpgradeReady                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectUpgradeCallout_C::IsUpgradeReady(bool* UpgradeReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.IsUpgradeReady");

	UItemInspectUpgradeCallout_C_IsUpgradeReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UpgradeReady != nullptr)
		*UpgradeReady = params.UpgradeReady;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.RefreshOnUpgrade
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemInspectUpgradeCallout_C::RefreshOnUpgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.RefreshOnUpgrade");

	UItemInspectUpgradeCallout_C_RefreshOnUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.EnableUpgrade
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemInspectUpgradeCallout_C::EnableUpgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.EnableUpgrade");

	UItemInspectUpgradeCallout_C_EnableUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.DisableUpgrade
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemInspectUpgradeCallout_C::DisableUpgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.DisableUpgrade");

	UItemInspectUpgradeCallout_C_DisableUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.OnShow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemInspectUpgradeCallout_C::OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.OnShow");

	UItemInspectUpgradeCallout_C_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.SetItemToRepresent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectUpgradeCallout_C::SetItemToRepresent(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.SetItemToRepresent");

	UItemInspectUpgradeCallout_C_SetItemToRepresent_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.Refresh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemInspectUpgradeCallout_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.Refresh");

	UItemInspectUpgradeCallout_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_257_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectUpgradeCallout_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_257_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_257_CommonButtonClicked__DelegateSignature");

	UItemInspectUpgradeCallout_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_257_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.BndEvt__EvolveButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectUpgradeCallout_C::BndEvt__EvolveButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.BndEvt__EvolveButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature");

	UItemInspectUpgradeCallout_C_BndEvt__EvolveButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.ExecuteUbergraph_ItemInspectUpgradeCallout
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectUpgradeCallout_C::ExecuteUbergraph_ItemInspectUpgradeCallout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.ExecuteUbergraph_ItemInspectUpgradeCallout");

	UItemInspectUpgradeCallout_C_ExecuteUbergraph_ItemInspectUpgradeCallout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.OnRequestUpgrade__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemInspectUpgradeCallout_C::OnRequestUpgrade__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.OnRequestUpgrade__DelegateSignature");

	UItemInspectUpgradeCallout_C_OnRequestUpgrade__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
