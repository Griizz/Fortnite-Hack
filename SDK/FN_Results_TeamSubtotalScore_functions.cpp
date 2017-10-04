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

// Function Results_TeamSubtotalScore.Results_TeamSubtotalScore_C.UpdateBackground
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeamSubtotalScore_C::UpdateBackground()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeamSubtotalScore.Results_TeamSubtotalScore_C.UpdateBackground");

	UResults_TeamSubtotalScore_C_UpdateBackground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamSubtotalScore.Results_TeamSubtotalScore_C.SetScore
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Score                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeamSubtotalScore_C::SetScore(int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeamSubtotalScore.Results_TeamSubtotalScore_C.SetScore");

	UResults_TeamSubtotalScore_C_SetScore_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamSubtotalScore.Results_TeamSubtotalScore_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeamSubtotalScore_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeamSubtotalScore.Results_TeamSubtotalScore_C.PreConstruct");

	UResults_TeamSubtotalScore_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamSubtotalScore.Results_TeamSubtotalScore_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UResults_TeamSubtotalScore_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeamSubtotalScore.Results_TeamSubtotalScore_C.Construct");

	UResults_TeamSubtotalScore_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamSubtotalScore.Results_TeamSubtotalScore_C.ExecuteUbergraph_Results_TeamSubtotalScore
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeamSubtotalScore_C::ExecuteUbergraph_Results_TeamSubtotalScore(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeamSubtotalScore.Results_TeamSubtotalScore_C.ExecuteUbergraph_Results_TeamSubtotalScore");

	UResults_TeamSubtotalScore_C_ExecuteUbergraph_Results_TeamSubtotalScore_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
