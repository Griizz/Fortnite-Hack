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

// Function EquippedItem-Bandolier.EquippedItem-Bandolier_C.UpdateCapacity
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Capacity                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortAmmoItemDefinition* AmmoData                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEquippedItem_Bandolier_C::UpdateCapacity(int Capacity, class UFortAmmoItemDefinition* AmmoData)
{
	static auto fn = UObject::FindObject<UFunction>("Function EquippedItem-Bandolier.EquippedItem-Bandolier_C.UpdateCapacity");

	UEquippedItem_Bandolier_C_UpdateCapacity_Params params;
	params.Capacity = Capacity;
	params.AmmoData = AmmoData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquippedItem-Bandolier.EquippedItem-Bandolier_C.UpdateCurrent
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Current                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortAmmoItemDefinition* AmmoData                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEquippedItem_Bandolier_C::UpdateCurrent(int Current, class UFortAmmoItemDefinition* AmmoData)
{
	static auto fn = UObject::FindObject<UFunction>("Function EquippedItem-Bandolier.EquippedItem-Bandolier_C.UpdateCurrent");

	UEquippedItem_Bandolier_C_UpdateCurrent_Params params;
	params.Current = Current;
	params.AmmoData = AmmoData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
