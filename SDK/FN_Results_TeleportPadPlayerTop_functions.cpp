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

// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Play Anim Intro
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeleportPadPlayerTop_C::Play_Anim_Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Play Anim Intro");

	UResults_TeleportPadPlayerTop_C_Play_Anim_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Initialize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        UniqueNetID                    (CPF_Parm)
// class UFortUIScoreReport*      ScoreReport                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ScoreReportIndex               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeleportPadPlayerTop_C::Initialize(const struct FUniqueNetIdRepl& UniqueNetID, class UFortUIScoreReport* ScoreReport, int ScoreReportIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Initialize");

	UResults_TeleportPadPlayerTop_C_Initialize_Params params;
	params.UniqueNetID = UniqueNetID;
	params.ScoreReport = ScoreReport;
	params.ScoreReportIndex = ScoreReportIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.IntroName
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeleportPadPlayerTop_C::IntroName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.IntroName");

	UResults_TeleportPadPlayerTop_C_IntroName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeleportPadPlayerTop_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.PreConstruct");

	UResults_TeleportPadPlayerTop_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Intro
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeleportPadPlayerTop_C::Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Intro");

	UResults_TeleportPadPlayerTop_C_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.ExecuteUbergraph_Results_TeleportPadPlayerTop
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeleportPadPlayerTop_C::ExecuteUbergraph_Results_TeleportPadPlayerTop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.ExecuteUbergraph_Results_TeleportPadPlayerTop");

	UResults_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
