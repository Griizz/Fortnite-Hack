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

// Function ScoreMessageNumber.ScoreMessageNumber_C.SetScore
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InScore                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScoreMessageNumber_C::SetScore(int InScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreMessageNumber.ScoreMessageNumber_C.SetScore");

	UScoreMessageNumber_C_SetScore_Params params;
	params.InScore = InScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreMessageNumber.ScoreMessageNumber_C.UpdateScoreText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreMessageNumber_C::UpdateScoreText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreMessageNumber.ScoreMessageNumber_C.UpdateScoreText");

	UScoreMessageNumber_C_UpdateScoreText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreMessageNumber.ScoreMessageNumber_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UScoreMessageNumber_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreMessageNumber.ScoreMessageNumber_C.Construct");

	UScoreMessageNumber_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreMessageNumber.ScoreMessageNumber_C.ExecuteUbergraph_ScoreMessageNumber
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScoreMessageNumber_C::ExecuteUbergraph_ScoreMessageNumber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreMessageNumber.ScoreMessageNumber_C.ExecuteUbergraph_ScoreMessageNumber");

	UScoreMessageNumber_C_ExecuteUbergraph_ScoreMessageNumber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreMessageNumber.ScoreMessageNumber_C.OnScoreValueSet__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreMessageNumber_C::OnScoreValueSet__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreMessageNumber.ScoreMessageNumber_C.OnScoreValueSet__DelegateSignature");

	UScoreMessageNumber_C_OnScoreValueSet__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
