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

// Function LegacyPerkTierWidget.LegacyPerkTierWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULegacyPerkTierWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyPerkTierWidget.LegacyPerkTierWidget_C.Construct");

	ULegacyPerkTierWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyPerkTierWidget.LegacyPerkTierWidget_C.OnGeneratePerk
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFortUIPerk*            Perk                           (CPF_Parm)

void ULegacyPerkTierWidget_C::OnGeneratePerk(struct FFortUIPerk* Perk)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyPerkTierWidget.LegacyPerkTierWidget_C.OnGeneratePerk");

	ULegacyPerkTierWidget_C_OnGeneratePerk_Params params;
	params.Perk = Perk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyPerkTierWidget.LegacyPerkTierWidget_C.ExecuteUbergraph_LegacyPerkTierWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyPerkTierWidget_C::ExecuteUbergraph_LegacyPerkTierWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyPerkTierWidget.LegacyPerkTierWidget_C.ExecuteUbergraph_LegacyPerkTierWidget");

	ULegacyPerkTierWidget_C_ExecuteUbergraph_LegacyPerkTierWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
