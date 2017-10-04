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

// Function XpBoostCounts.XpBoostCounts_C.Update Available Boosts
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UXpBoostCounts_C::Update_Available_Boosts()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostCounts.XpBoostCounts_C.Update Available Boosts");

	UXpBoostCounts_C_Update_Available_Boosts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostCounts.XpBoostCounts_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UXpBoostCounts_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostCounts.XpBoostCounts_C.Construct");

	UXpBoostCounts_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostCounts.XpBoostCounts_C.HandleAccountUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo  NewInfo                        (CPF_Parm)

void UXpBoostCounts_C::HandleAccountUpdate(const struct FFortPublicAccountInfo& NewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostCounts.XpBoostCounts_C.HandleAccountUpdate");

	UXpBoostCounts_C_HandleAccountUpdate_Params params;
	params.NewInfo = NewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostCounts.XpBoostCounts_C.Xp Boost Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            BoostAmount                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UXpBoostCounts_C::Xp_Boost_Changed(int BoostAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostCounts.XpBoostCounts_C.Xp Boost Changed");

	UXpBoostCounts_C_Xp_Boost_Changed_Params params;
	params.BoostAmount = BoostAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostCounts.XpBoostCounts_C.ExecuteUbergraph_XpBoostCounts
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UXpBoostCounts_C::ExecuteUbergraph_XpBoostCounts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostCounts.XpBoostCounts_C.ExecuteUbergraph_XpBoostCounts");

	UXpBoostCounts_C_ExecuteUbergraph_XpBoostCounts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
