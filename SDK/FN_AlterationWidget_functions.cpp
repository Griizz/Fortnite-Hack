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

// Function AlterationWidget.AlterationWidget_C.UpdateRaritySwitcherVisiblity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAlterationWidget_C::UpdateRaritySwitcherVisiblity()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidget.AlterationWidget_C.UpdateRaritySwitcherVisiblity");

	UAlterationWidget_C_UpdateRaritySwitcherVisiblity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationWidget.AlterationWidget_C.SetLevelText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAlterationWidget_C::SetLevelText()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidget.AlterationWidget_C.SetLevelText");

	UAlterationWidget_C_SetLevelText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationWidget.AlterationWidget_C.InitText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAlterationWidget_C::InitText()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidget.AlterationWidget_C.InitText");

	UAlterationWidget_C_InitText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationWidget.AlterationWidget_C.InitIcon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAlterationWidget_C::InitIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidget.AlterationWidget_C.InitIcon");

	UAlterationWidget_C_InitIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationWidget.AlterationWidget_C.ShouldFadeAlteration
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAlterationWidget_C::ShouldFadeAlteration()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidget.AlterationWidget_C.ShouldFadeAlteration");

	UAlterationWidget_C_ShouldFadeAlteration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AlterationWidget.AlterationWidget_C.GetHighlightColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UAlterationWidget_C::GetHighlightColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidget.AlterationWidget_C.GetHighlightColor");

	UAlterationWidget_C_GetHighlightColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AlterationWidget.AlterationWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAlterationWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidget.AlterationWidget_C.Construct");

	UAlterationWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationWidget.AlterationWidget_C.ExecuteUbergraph_AlterationWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAlterationWidget_C::ExecuteUbergraph_AlterationWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidget.AlterationWidget_C.ExecuteUbergraph_AlterationWidget");

	UAlterationWidget_C_ExecuteUbergraph_AlterationWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
