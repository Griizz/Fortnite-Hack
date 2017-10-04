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

// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.CheckAmmoValid
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AmmoValid                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInteraction_DefenderBeacon_C::CheckAmmoValid(bool* AmmoValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.CheckAmmoValid");

	UInteraction_DefenderBeacon_C_CheckAmmoValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoValid != nullptr)
		*AmmoValid = params.AmmoValid;
}


// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.DisplayWeaponType
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInteraction_DefenderBeacon_C::DisplayWeaponType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.DisplayWeaponType");

	UInteraction_DefenderBeacon_C_DisplayWeaponType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UInteraction_DefenderBeacon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.Construct");

	UInteraction_DefenderBeacon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.UpdateDefenderBeaconWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInteraction_DefenderBeacon_C::UpdateDefenderBeaconWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.UpdateDefenderBeaconWidget");

	UInteraction_DefenderBeacon_C_UpdateDefenderBeaconWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UInteraction_DefenderBeacon_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.Destruct");

	UInteraction_DefenderBeacon_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.OnDefenderEquippedWeapon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortWeapon*             NewWeapon                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFortWeapon*             OldWeapon                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInteraction_DefenderBeacon_C::OnDefenderEquippedWeapon(class AFortWeapon* NewWeapon, class AFortWeapon* OldWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.OnDefenderEquippedWeapon");

	UInteraction_DefenderBeacon_C_OnDefenderEquippedWeapon_Params params;
	params.NewWeapon = NewWeapon;
	params.OldWeapon = OldWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.ExecuteUbergraph_Interaction_DefenderBeacon
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInteraction_DefenderBeacon_C::ExecuteUbergraph_Interaction_DefenderBeacon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.ExecuteUbergraph_Interaction_DefenderBeacon");

	UInteraction_DefenderBeacon_C_ExecuteUbergraph_Interaction_DefenderBeacon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
