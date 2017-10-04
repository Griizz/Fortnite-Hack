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

// Function XpBoostQuantities.XpBoostQuantities_C.ScaledRestBalance
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            AmountToLevel                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UXpBoostQuantities_C::ScaledRestBalance(int AmountToLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostQuantities.XpBoostQuantities_C.ScaledRestBalance");

	UXpBoostQuantities_C_ScaledRestBalance_Params params;
	params.AmountToLevel = AmountToLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XpBoostQuantities.XpBoostQuantities_C.ScaledBoostBalance
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            AmountToLevel                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UXpBoostQuantities_C::ScaledBoostBalance(int AmountToLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostQuantities.XpBoostQuantities_C.ScaledBoostBalance");

	UXpBoostQuantities_C_ScaledBoostBalance_Params params;
	params.AmountToLevel = AmountToLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XpBoostQuantities.XpBoostQuantities_C.UpdateXPQuantitiesInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UXpBoostQuantities_C::UpdateXPQuantitiesInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostQuantities.XpBoostQuantities_C.UpdateXPQuantitiesInfo");

	UXpBoostQuantities_C_UpdateXPQuantitiesInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostQuantities.XpBoostQuantities_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UXpBoostQuantities_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostQuantities.XpBoostQuantities_C.Construct");

	UXpBoostQuantities_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostQuantities.XpBoostQuantities_C.HandleAccountUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo  NewInfo                        (CPF_Parm)

void UXpBoostQuantities_C::HandleAccountUpdate(const struct FFortPublicAccountInfo& NewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostQuantities.XpBoostQuantities_C.HandleAccountUpdate");

	UXpBoostQuantities_C_HandleAccountUpdate_Params params;
	params.NewInfo = NewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostQuantities.XpBoostQuantities_C.Xp Boost Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            BoostAmount                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UXpBoostQuantities_C::Xp_Boost_Changed(int BoostAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostQuantities.XpBoostQuantities_C.Xp Boost Changed");

	UXpBoostQuantities_C_Xp_Boost_Changed_Params params;
	params.BoostAmount = BoostAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostQuantities.XpBoostQuantities_C.ExecuteUbergraph_XpBoostQuantities
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UXpBoostQuantities_C::ExecuteUbergraph_XpBoostQuantities(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostQuantities.XpBoostQuantities_C.ExecuteUbergraph_XpBoostQuantities");

	UXpBoostQuantities_C_ExecuteUbergraph_XpBoostQuantities_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
