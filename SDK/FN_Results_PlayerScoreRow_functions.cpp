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

// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializeHomeBasePower
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        PlayerID                       (CPF_Parm)

void UResults_PlayerScoreRow_C::InitializeHomeBasePower(const struct FUniqueNetIdRepl& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializeHomeBasePower");

	UResults_PlayerScoreRow_C_InitializeHomeBasePower_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializePlayerName
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*      ScoreReport                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ScoreReportReferece            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_PlayerScoreRow_C::InitializePlayerName(class UFortUIScoreReport* ScoreReport, int ScoreReportReferece)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializePlayerName");

	UResults_PlayerScoreRow_C_InitializePlayerName_Params params;
	params.ScoreReport = ScoreReport;
	params.ScoreReportReferece = ScoreReportReferece;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializeScores
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*      InScoreReport                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InScoreReportIndex             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_PlayerScoreRow_C::InitializeScores(class UFortUIScoreReport* InScoreReport, int InScoreReportIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializeScores");

	UResults_PlayerScoreRow_C_InitializeScores_Params params;
	params.InScoreReport = InScoreReport;
	params.InScoreReportIndex = InScoreReportIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializeBackground
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_PlayerScoreRow_C::InitializeBackground()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializeBackground");

	UResults_PlayerScoreRow_C_InitializeBackground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.Initialize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*      ScoreReport                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ScoreReportIndex               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_PlayerScoreRow_C::Initialize(class UFortUIScoreReport* ScoreReport, int ScoreReportIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.Initialize");

	UResults_PlayerScoreRow_C_Initialize_Params params;
	params.ScoreReport = ScoreReport;
	params.ScoreReportIndex = ScoreReportIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.Manual Pre Construct
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsDesignTime                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_PlayerScoreRow_C::Manual_Pre_Construct(bool bIsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.Manual Pre Construct");

	UResults_PlayerScoreRow_C_Manual_Pre_Construct_Params params;
	params.bIsDesignTime = bIsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_PlayerScoreRow_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.PreConstruct");

	UResults_PlayerScoreRow_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.ExecuteUbergraph_Results_PlayerScoreRow
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_PlayerScoreRow_C::ExecuteUbergraph_Results_PlayerScoreRow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.ExecuteUbergraph_Results_PlayerScoreRow");

	UResults_PlayerScoreRow_C_ExecuteUbergraph_Results_PlayerScoreRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
