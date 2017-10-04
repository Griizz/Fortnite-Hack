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

// Function LegacyPerksWidget.LegacyPerksWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULegacyPerksWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyPerksWidget.LegacyPerksWidget_C.Construct");

	ULegacyPerksWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyPerksWidget.LegacyPerksWidget_C.OnGeneratePerkTier
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFortUIPerkTier*        FortPerkTier                   (CPF_Parm)

void ULegacyPerksWidget_C::OnGeneratePerkTier(struct FFortUIPerkTier* FortPerkTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyPerksWidget.LegacyPerksWidget_C.OnGeneratePerkTier");

	ULegacyPerksWidget_C_OnGeneratePerkTier_Params params;
	params.FortPerkTier = FortPerkTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyPerksWidget.LegacyPerksWidget_C.ExecuteUbergraph_LegacyPerksWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyPerksWidget_C::ExecuteUbergraph_LegacyPerksWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyPerksWidget.LegacyPerksWidget_C.ExecuteUbergraph_LegacyPerksWidget");

	ULegacyPerksWidget_C_ExecuteUbergraph_LegacyPerksWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
