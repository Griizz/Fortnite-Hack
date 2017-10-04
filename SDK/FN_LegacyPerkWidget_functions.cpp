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

// Function LegacyPerkWidget.LegacyPerkWidget_C.CreateToolTipWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* ULegacyPerkWidget_C::CreateToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyPerkWidget.LegacyPerkWidget_C.CreateToolTipWidget");

	ULegacyPerkWidget_C_CreateToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LegacyPerkWidget.LegacyPerkWidget_C.InitializeTextInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyPerkWidget_C::InitializeTextInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyPerkWidget.LegacyPerkWidget_C.InitializeTextInfo");

	ULegacyPerkWidget_C_InitializeTextInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyPerkWidget.LegacyPerkWidget_C.HighlightBadge
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyPerkWidget_C::HighlightBadge()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyPerkWidget.LegacyPerkWidget_C.HighlightBadge");

	ULegacyPerkWidget_C_HighlightBadge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyPerkWidget.LegacyPerkWidget_C.GetPerkStat
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTooltipStat            TooltipStat                    (CPF_Parm, CPF_OutParm)

void ULegacyPerkWidget_C::GetPerkStat(struct FTooltipStat* TooltipStat)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyPerkWidget.LegacyPerkWidget_C.GetPerkStat");

	ULegacyPerkWidget_C_GetPerkStat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TooltipStat != nullptr)
		*TooltipStat = params.TooltipStat;
}


// Function LegacyPerkWidget.LegacyPerkWidget_C.ShowTierImage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyPerkWidget_C::ShowTierImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyPerkWidget.LegacyPerkWidget_C.ShowTierImage");

	ULegacyPerkWidget_C_ShowTierImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyPerkWidget.LegacyPerkWidget_C.SetupBadge
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyPerkWidget_C::SetupBadge()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyPerkWidget.LegacyPerkWidget_C.SetupBadge");

	ULegacyPerkWidget_C_SetupBadge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyPerkWidget.LegacyPerkWidget_C.InitializeHeroBonusIcon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyPerkWidget_C::InitializeHeroBonusIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyPerkWidget.LegacyPerkWidget_C.InitializeHeroBonusIcon");

	ULegacyPerkWidget_C_InitializeHeroBonusIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyPerkWidget.LegacyPerkWidget_C.InitializeTextOnlyPerk
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyPerkWidget_C::InitializeTextOnlyPerk()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyPerkWidget.LegacyPerkWidget_C.InitializeTextOnlyPerk");

	ULegacyPerkWidget_C_InitializeTextOnlyPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyPerkWidget.LegacyPerkWidget_C.ShouldFadePerk
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyPerkWidget_C::ShouldFadePerk(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyPerkWidget.LegacyPerkWidget_C.ShouldFadePerk");

	ULegacyPerkWidget_C_ShouldFadePerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LegacyPerkWidget.LegacyPerkWidget_C.GetHighlightColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void ULegacyPerkWidget_C::GetHighlightColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyPerkWidget.LegacyPerkWidget_C.GetHighlightColor");

	ULegacyPerkWidget_C_GetHighlightColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function LegacyPerkWidget.LegacyPerkWidget_C.GetTierAbilityBrush
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateBrush             SlateBrush                     (CPF_Parm, CPF_OutParm)

void ULegacyPerkWidget_C::GetTierAbilityBrush(struct FSlateBrush* SlateBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyPerkWidget.LegacyPerkWidget_C.GetTierAbilityBrush");

	ULegacyPerkWidget_C_GetTierAbilityBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlateBrush != nullptr)
		*SlateBrush = params.SlateBrush;
}


// Function LegacyPerkWidget.LegacyPerkWidget_C.InitializeAbilityPerk
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyPerkWidget_C::InitializeAbilityPerk()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyPerkWidget.LegacyPerkWidget_C.InitializeAbilityPerk");

	ULegacyPerkWidget_C_InitializeAbilityPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyPerkWidget.LegacyPerkWidget_C.InitializeBasicPerk
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyPerkWidget_C::InitializeBasicPerk()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyPerkWidget.LegacyPerkWidget_C.InitializeBasicPerk");

	ULegacyPerkWidget_C_InitializeBasicPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyPerkWidget.LegacyPerkWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyPerkWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyPerkWidget.LegacyPerkWidget_C.PreConstruct");

	ULegacyPerkWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyPerkWidget.LegacyPerkWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULegacyPerkWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyPerkWidget.LegacyPerkWidget_C.Construct");

	ULegacyPerkWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyPerkWidget.LegacyPerkWidget_C.ExecuteUbergraph_LegacyPerkWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyPerkWidget_C::ExecuteUbergraph_LegacyPerkWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyPerkWidget.LegacyPerkWidget_C.ExecuteUbergraph_LegacyPerkWidget");

	ULegacyPerkWidget_C_ExecuteUbergraph_LegacyPerkWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
