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

// Function PerkWidget.PerkWidget_C.CreateToolTipWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* UPerkWidget_C::CreateToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.CreateToolTipWidget");

	UPerkWidget_C_CreateToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PerkWidget.PerkWidget_C.InitializeTextInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPerkWidget_C::InitializeTextInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.InitializeTextInfo");

	UPerkWidget_C_InitializeTextInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidget.PerkWidget_C.HighlightBadge
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPerkWidget_C::HighlightBadge()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.HighlightBadge");

	UPerkWidget_C_HighlightBadge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidget.PerkWidget_C.GetPerkStat
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTooltipStat            TooltipStat                    (CPF_Parm, CPF_OutParm)

void UPerkWidget_C::GetPerkStat(struct FTooltipStat* TooltipStat)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.GetPerkStat");

	UPerkWidget_C_GetPerkStat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TooltipStat != nullptr)
		*TooltipStat = params.TooltipStat;
}


// Function PerkWidget.PerkWidget_C.ShowTierImage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPerkWidget_C::ShowTierImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.ShowTierImage");

	UPerkWidget_C_ShowTierImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidget.PerkWidget_C.SetupBadge
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPerkWidget_C::SetupBadge()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.SetupBadge");

	UPerkWidget_C_SetupBadge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidget.PerkWidget_C.InitializeHeroBonusIcon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPerkWidget_C::InitializeHeroBonusIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.InitializeHeroBonusIcon");

	UPerkWidget_C_InitializeHeroBonusIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidget.PerkWidget_C.InitializeTextOnlyPerk
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPerkWidget_C::InitializeTextOnlyPerk()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.InitializeTextOnlyPerk");

	UPerkWidget_C_InitializeTextOnlyPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidget.PerkWidget_C.ShouldFadePerk
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPerkWidget_C::ShouldFadePerk(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.ShouldFadePerk");

	UPerkWidget_C_ShouldFadePerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PerkWidget.PerkWidget_C.GetHighlightColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UPerkWidget_C::GetHighlightColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.GetHighlightColor");

	UPerkWidget_C_GetHighlightColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function PerkWidget.PerkWidget_C.GetTierAbilityBrush
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateBrush             SlateBrush                     (CPF_Parm, CPF_OutParm)

void UPerkWidget_C::GetTierAbilityBrush(struct FSlateBrush* SlateBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.GetTierAbilityBrush");

	UPerkWidget_C_GetTierAbilityBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlateBrush != nullptr)
		*SlateBrush = params.SlateBrush;
}


// Function PerkWidget.PerkWidget_C.InitializeAbilityPerk
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPerkWidget_C::InitializeAbilityPerk()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.InitializeAbilityPerk");

	UPerkWidget_C_InitializeAbilityPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidget.PerkWidget_C.InitializeBasicPerk
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPerkWidget_C::InitializeBasicPerk()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.InitializeBasicPerk");

	UPerkWidget_C_InitializeBasicPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidget.PerkWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPerkWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.PreConstruct");

	UPerkWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidget.PerkWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPerkWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.Construct");

	UPerkWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidget.PerkWidget_C.ExecuteUbergraph_PerkWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPerkWidget_C::ExecuteUbergraph_PerkWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkWidget.PerkWidget_C.ExecuteUbergraph_PerkWidget");

	UPerkWidget_C_ExecuteUbergraph_PerkWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
