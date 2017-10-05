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

// Function PerksList.PerksList_C.ResetVariables
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPerksList_C::ResetVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerksList.PerksList_C.ResetVariables");

	UPerksList_C_ResetVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerksList.PerksList_C.OnGeneratePerkTier
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFortUIPerkTier*        FortPerkTier                   (CPF_Parm)
// class UFortPerkTierWidget_NUI** PerkTierWidget                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPerksList_C::OnGeneratePerkTier(struct FFortUIPerkTier* FortPerkTier, class UFortPerkTierWidget_NUI** PerkTierWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerksList.PerksList_C.OnGeneratePerkTier");

	UPerksList_C_OnGeneratePerkTier_Params params;
	params.FortPerkTier = FortPerkTier;
	params.PerkTierWidget = PerkTierWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerksList.PerksList_C.OnGeneratePerk
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFortUIPerk*            FortPerk                       (CPF_Parm)
// class UFortPerkWidget_NUI**    PerkWidget                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPerksList_C::OnGeneratePerk(struct FFortUIPerk* FortPerk, class UFortPerkWidget_NUI** PerkWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerksList.PerksList_C.OnGeneratePerk");

	UPerksList_C_OnGeneratePerk_Params params;
	params.FortPerk = FortPerk;
	params.PerkWidget = PerkWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerksList.PerksList_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPerksList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerksList.PerksList_C.Construct");

	UPerksList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerksList.PerksList_C.OnHeroChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPerksList_C::OnHeroChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerksList.PerksList_C.OnHeroChanged");

	UPerksList_C_OnHeroChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerksList.PerksList_C.OnStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPerksList_C::OnStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerksList.PerksList_C.OnStateChanged");

	UPerksList_C_OnStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerksList.PerksList_C.ExecuteUbergraph_PerksList
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPerksList_C::ExecuteUbergraph_PerksList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerksList.PerksList_C.ExecuteUbergraph_PerksList");

	UPerksList_C_ExecuteUbergraph_PerksList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
