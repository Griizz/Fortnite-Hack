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

// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.SetScore
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            New_Score                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UZoneDayCompletion_ScoreBlock_C::SetScore(int New_Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.SetScore");

	UZoneDayCompletion_ScoreBlock_C_SetScore_Params params;
	params.New_Score = New_Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.On Count Finished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UZoneDayCompletion_ScoreBlock_C::On_Count_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.On Count Finished");

	UZoneDayCompletion_ScoreBlock_C_On_Count_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.Outro
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UZoneDayCompletion_ScoreBlock_C::Outro()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.Outro");

	UZoneDayCompletion_ScoreBlock_C_Outro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.Intro
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UZoneDayCompletion_ScoreBlock_C::Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.Intro");

	UZoneDayCompletion_ScoreBlock_C_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.Increment
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            New_Score                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Interpolation_Length           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UZoneDayCompletion_ScoreBlock_C::Increment(int New_Score, float Interpolation_Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.Increment");

	UZoneDayCompletion_ScoreBlock_C_Increment_Params params;
	params.New_Score = New_Score;
	params.Interpolation_Length = Interpolation_Length;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UZoneDayCompletion_ScoreBlock_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.Construct");

	UZoneDayCompletion_ScoreBlock_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_35_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UZoneDayCompletion_ScoreBlock_C::BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_35_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_35_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UZoneDayCompletion_ScoreBlock_C_BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_35_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.BndEvt__NumericTextScore_K2Node_ComponentBoundEvent_51_FortCountingFinished__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UFortNumericTextBlock*   NumericTextBlock               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UZoneDayCompletion_ScoreBlock_C::BndEvt__NumericTextScore_K2Node_ComponentBoundEvent_51_FortCountingFinished__DelegateSignature(class UFortNumericTextBlock* NumericTextBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.BndEvt__NumericTextScore_K2Node_ComponentBoundEvent_51_FortCountingFinished__DelegateSignature");

	UZoneDayCompletion_ScoreBlock_C_BndEvt__NumericTextScore_K2Node_ComponentBoundEvent_51_FortCountingFinished__DelegateSignature_Params params;
	params.NumericTextBlock = NumericTextBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.BndEvt__Anim_OverfillOff_K2Node_ComponentBoundEvent_54_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UZoneDayCompletion_ScoreBlock_C::BndEvt__Anim_OverfillOff_K2Node_ComponentBoundEvent_54_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.BndEvt__Anim_OverfillOff_K2Node_ComponentBoundEvent_54_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UZoneDayCompletion_ScoreBlock_C_BndEvt__Anim_OverfillOff_K2Node_ComponentBoundEvent_54_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_3546_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UZoneDayCompletion_ScoreBlock_C::BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_3546_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_3546_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UZoneDayCompletion_ScoreBlock_C_BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_3546_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.ExecuteUbergraph_ZoneDayCompletion_ScoreBlock
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UZoneDayCompletion_ScoreBlock_C::ExecuteUbergraph_ZoneDayCompletion_ScoreBlock(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.ExecuteUbergraph_ZoneDayCompletion_ScoreBlock");

	UZoneDayCompletion_ScoreBlock_C_ExecuteUbergraph_ZoneDayCompletion_ScoreBlock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.OutroComplete__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UZoneDayCompletion_ScoreBlock_C::OutroComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.OutroComplete__DelegateSignature");

	UZoneDayCompletion_ScoreBlock_C_OutroComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.IncrementComplete__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UZoneDayCompletion_ScoreBlock_C::IncrementComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.IncrementComplete__DelegateSignature");

	UZoneDayCompletion_ScoreBlock_C_IncrementComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.IntroComplete__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UZoneDayCompletion_ScoreBlock_C::IntroComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.IntroComplete__DelegateSignature");

	UZoneDayCompletion_ScoreBlock_C_IntroComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
