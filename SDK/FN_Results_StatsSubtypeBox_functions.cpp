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

// Function Results_StatsSubtypeBox.Results_StatsSubtypeBox_C.InitializeScoreType
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_StatsSubtypeBox_C::InitializeScoreType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_StatsSubtypeBox.Results_StatsSubtypeBox_C.InitializeScoreType");

	UResults_StatsSubtypeBox_C_InitializeScoreType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_StatsSubtypeBox.Results_StatsSubtypeBox_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UResults_StatsSubtypeBox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_StatsSubtypeBox.Results_StatsSubtypeBox_C.Construct");

	UResults_StatsSubtypeBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_StatsSubtypeBox.Results_StatsSubtypeBox_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_StatsSubtypeBox_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_StatsSubtypeBox.Results_StatsSubtypeBox_C.PreConstruct");

	UResults_StatsSubtypeBox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_StatsSubtypeBox.Results_StatsSubtypeBox_C.ExecuteUbergraph_Results_StatsSubtypeBox
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_StatsSubtypeBox_C::ExecuteUbergraph_Results_StatsSubtypeBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_StatsSubtypeBox.Results_StatsSubtypeBox_C.ExecuteUbergraph_Results_StatsSubtypeBox");

	UResults_StatsSubtypeBox_C_ExecuteUbergraph_Results_StatsSubtypeBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
