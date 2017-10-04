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

// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.GetIsValidScoreBox
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bIsValidScoreBox               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_PlayerScoreBox_C::GetIsValidScoreBox(bool* bIsValidScoreBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.GetIsValidScoreBox");

	UResults_PlayerScoreBox_C_GetIsValidScoreBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsValidScoreBox != nullptr)
		*bIsValidScoreBox = params.bIsValidScoreBox;
}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.SetIsValidScoreBox
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsValidScoreBox               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_PlayerScoreBox_C::SetIsValidScoreBox(bool bIsValidScoreBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.SetIsValidScoreBox");

	UResults_PlayerScoreBox_C_SetIsValidScoreBox_Params params;
	params.bIsValidScoreBox = bIsValidScoreBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.SetSkippingToEnd
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_PlayerScoreBox_C::SetSkippingToEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.SetSkippingToEnd");

	UResults_PlayerScoreBox_C_SetSkippingToEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.SetIsBestScore
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsBestScore                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_PlayerScoreBox_C::SetIsBestScore(bool bIsBestScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.SetIsBestScore");

	UResults_PlayerScoreBox_C_SetIsBestScore_Params params;
	params.bIsBestScore = bIsBestScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Score                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PlayRate                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_PlayerScoreBox_C::Initialize(int Score, float PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.Initialize");

	UResults_PlayerScoreBox_C_Initialize_Params params;
	params.Score = Score;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_PlayerScoreBox_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.PreConstruct");

	UResults_PlayerScoreBox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.Intro Sequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_PlayerScoreBox_C::Intro_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.Intro Sequence");

	UResults_PlayerScoreBox_C_Intro_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UResults_PlayerScoreBox_C::BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_PlayerScoreBox_C_BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.Count Sequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_PlayerScoreBox_C::Count_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.Count Sequence");

	UResults_PlayerScoreBox_C_Count_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.Skipped Count Interpolation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_PlayerScoreBox_C::Skipped_Count_Interpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.Skipped Count Interpolation");

	UResults_PlayerScoreBox_C_Skipped_Count_Interpolation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.BndEvt__TextScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonNumericTextBlock* NumericTextBlock               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           HadCompleted                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_PlayerScoreBox_C::BndEvt__TextScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.BndEvt__TextScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature");

	UResults_PlayerScoreBox_C_BndEvt__TextScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature_Params params;
	params.NumericTextBlock = NumericTextBlock;
	params.HadCompleted = HadCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.ExecuteUbergraph_Results_PlayerScoreBox
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_PlayerScoreBox_C::ExecuteUbergraph_Results_PlayerScoreBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.ExecuteUbergraph_Results_PlayerScoreBox");

	UResults_PlayerScoreBox_C_ExecuteUbergraph_Results_PlayerScoreBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
