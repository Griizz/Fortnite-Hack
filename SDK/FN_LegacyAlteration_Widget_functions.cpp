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

// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.InitSmallAlteration
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyAlteration_Widget_C::InitSmallAlteration()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.InitSmallAlteration");

	ULegacyAlteration_Widget_C_InitSmallAlteration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.InitFullAlteration
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyAlteration_Widget_C::InitFullAlteration()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.InitFullAlteration");

	ULegacyAlteration_Widget_C_InitFullAlteration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.ShouldFadeAlteration
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ULegacyAlteration_Widget_C::ShouldFadeAlteration()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.ShouldFadeAlteration");

	ULegacyAlteration_Widget_C_ShouldFadeAlteration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.GetHighlightColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor ULegacyAlteration_Widget_C::GetHighlightColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.GetHighlightColor");

	ULegacyAlteration_Widget_C_GetHighlightColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULegacyAlteration_Widget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.Construct");

	ULegacyAlteration_Widget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.ExecuteUbergraph_LegacyAlteration_Widget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyAlteration_Widget_C::ExecuteUbergraph_LegacyAlteration_Widget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.ExecuteUbergraph_LegacyAlteration_Widget");

	ULegacyAlteration_Widget_C_ExecuteUbergraph_LegacyAlteration_Widget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
