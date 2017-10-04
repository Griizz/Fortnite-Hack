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

// Function ReticleStatusWidget.ReticleStatusWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UReticleStatusWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleStatusWidget.ReticleStatusWidget_C.Construct");

	UReticleStatusWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticleStatusWidget.ReticleStatusWidget_C.OnUnableToPerformAction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   FailedReason                   (CPF_Parm)
// struct FText                   FailureText                    (CPF_Parm)

void UReticleStatusWidget_C::OnUnableToPerformAction(const struct FGameplayTagContainer& FailedReason, const struct FText& FailureText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleStatusWidget.ReticleStatusWidget_C.OnUnableToPerformAction");

	UReticleStatusWidget_C_OnUnableToPerformAction_Params params;
	params.FailedReason = FailedReason;
	params.FailureText = FailureText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticleStatusWidget.ReticleStatusWidget_C.ExecuteUbergraph_ReticleStatusWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReticleStatusWidget_C::ExecuteUbergraph_ReticleStatusWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleStatusWidget.ReticleStatusWidget_C.ExecuteUbergraph_ReticleStatusWidget");

	UReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
