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

// Function AccountBonuses.AccountBonuses_C.Update Badges
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAccountBonuses_C::Update_Badges()
{
	static auto fn = UObject::FindObject<UFunction>("Function AccountBonuses.AccountBonuses_C.Update Badges");

	UAccountBonuses_C_Update_Badges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountBonuses.AccountBonuses_C.Has VIP Badge
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAccountBonuses_C::Has_VIP_Badge(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AccountBonuses.AccountBonuses_C.Has VIP Badge");

	UAccountBonuses_C_Has_VIP_Badge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AccountBonuses.AccountBonuses_C.Has Founder Badge
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAccountBonuses_C::Has_Founder_Badge(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AccountBonuses.AccountBonuses_C.Has Founder Badge");

	UAccountBonuses_C_Has_Founder_Badge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AccountBonuses.AccountBonuses_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAccountBonuses_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AccountBonuses.AccountBonuses_C.Construct");

	UAccountBonuses_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountBonuses.AccountBonuses_C.Founder Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAccountBonuses_C::Founder_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function AccountBonuses.AccountBonuses_C.Founder Changed");

	UAccountBonuses_C_Founder_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountBonuses.AccountBonuses_C.ExecuteUbergraph_AccountBonuses
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAccountBonuses_C::ExecuteUbergraph_AccountBonuses(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AccountBonuses.AccountBonuses_C.ExecuteUbergraph_AccountBonuses");

	UAccountBonuses_C_ExecuteUbergraph_AccountBonuses_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
