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

// Function PerkTierWidgetNew.PerkTierWidgetNew_C.InitializeSettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIncludeName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIncludeDescription            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EFortBrushSize>    IconSize                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFortUIPerkTier         FortPerkTier                   (CPF_Parm)

void UPerkTierWidgetNew_C::InitializeSettings(bool bIncludeName, bool bIncludeDescription, TEnumAsByte<EFortBrushSize> IconSize, const struct FFortUIPerkTier& FortPerkTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkTierWidgetNew.PerkTierWidgetNew_C.InitializeSettings");

	UPerkTierWidgetNew_C_InitializeSettings_Params params;
	params.bIncludeName = bIncludeName;
	params.bIncludeDescription = bIncludeDescription;
	params.IconSize = IconSize;
	params.FortPerkTier = FortPerkTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkTierWidgetNew.PerkTierWidgetNew_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPerkTierWidgetNew_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkTierWidgetNew.PerkTierWidgetNew_C.Construct");

	UPerkTierWidgetNew_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkTierWidgetNew.PerkTierWidgetNew_C.OnGeneratePerk
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFortUIPerk*            Perk                           (CPF_Parm)
// class UFortPerkWidget_NUI**    PerkWidget                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPerkTierWidgetNew_C::OnGeneratePerk(struct FFortUIPerk* Perk, class UFortPerkWidget_NUI** PerkWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkTierWidgetNew.PerkTierWidgetNew_C.OnGeneratePerk");

	UPerkTierWidgetNew_C_OnGeneratePerk_Params params;
	params.Perk = Perk;
	params.PerkWidget = PerkWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkTierWidgetNew.PerkTierWidgetNew_C.ExecuteUbergraph_PerkTierWidgetNew
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPerkTierWidgetNew_C::ExecuteUbergraph_PerkTierWidgetNew(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkTierWidgetNew.PerkTierWidgetNew_C.ExecuteUbergraph_PerkTierWidgetNew");

	UPerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
