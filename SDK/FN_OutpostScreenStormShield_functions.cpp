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

// Function OutpostScreenStormShield.OutpostScreenStormShield_C.CenterPermissionsWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOutpostScreenStormShield_C::CenterPermissionsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShield.OutpostScreenStormShield_C.CenterPermissionsWidget");

	UOutpostScreenStormShield_C_CenterPermissionsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.CenterStormShieldWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOutpostScreenStormShield_C::CenterStormShieldWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShield.OutpostScreenStormShield_C.CenterStormShieldWidget");

	UOutpostScreenStormShield_C_CenterStormShieldWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.HandleBack
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOutpostScreenStormShield_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShield.OutpostScreenStormShield_C.HandleBack");

	UOutpostScreenStormShield_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.AddInputHandlers
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOutpostScreenStormShield_C::AddInputHandlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShield.OutpostScreenStormShield_C.AddInputHandlers");

	UOutpostScreenStormShield_C_AddInputHandlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.SetCoreBuilding
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortOutpostBuilding*    NewCoreBuilding                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOutpostScreenStormShield_C::SetCoreBuilding(class AFortOutpostBuilding* NewCoreBuilding)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShield.OutpostScreenStormShield_C.SetCoreBuilding");

	UOutpostScreenStormShield_C_SetCoreBuilding_Params params;
	params.NewCoreBuilding = NewCoreBuilding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOutpostScreenStormShield_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShield.OutpostScreenStormShield_C.Construct");

	UOutpostScreenStormShield_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOutpostScreenStormShield_C::BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(const struct FName& TabId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShield.OutpostScreenStormShield_C.BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature");

	UOutpostScreenStormShield_C_BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature_Params params;
	params.TabId = TabId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_36_OnTabButtonCreated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonButton*           TabButton                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOutpostScreenStormShield_C::BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_36_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShield.OutpostScreenStormShield_C.BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_36_OnTabButtonCreated__DelegateSignature");

	UOutpostScreenStormShield_C_BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_36_OnTabButtonCreated__DelegateSignature_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.ExecuteUbergraph_OutpostScreenStormShield
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOutpostScreenStormShield_C::ExecuteUbergraph_OutpostScreenStormShield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShield.OutpostScreenStormShield_C.ExecuteUbergraph_OutpostScreenStormShield");

	UOutpostScreenStormShield_C_ExecuteUbergraph_OutpostScreenStormShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.CloseOutpostScreen__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOutpostScreenStormShield_C::CloseOutpostScreen__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShield.OutpostScreenStormShield_C.CloseOutpostScreen__DelegateSignature");

	UOutpostScreenStormShield_C_CloseOutpostScreen__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
