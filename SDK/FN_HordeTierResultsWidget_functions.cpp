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

// Function HordeTierResultsWidget.HordeTierResultsWidget_C.OnHandleAction
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FEventReply             Result                         (CPF_Parm, CPF_OutParm)
// bool                           bPassThrough                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHordeTierResultsWidget_C::OnHandleAction(struct FEventReply* Result, bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeTierResultsWidget.HordeTierResultsWidget_C.OnHandleAction");

	UHordeTierResultsWidget_C_OnHandleAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function HordeTierResultsWidget.HordeTierResultsWidget_C.OnEndOfMovieReached
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHordeTierResultsWidget_C::OnEndOfMovieReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeTierResultsWidget.HordeTierResultsWidget_C.OnEndOfMovieReached");

	UHordeTierResultsWidget_C_OnEndOfMovieReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeTierResultsWidget.HordeTierResultsWidget_C.ChooseMediaToUse
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMediaSource*            MediaToUse                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHordeTierResultsWidget_C::ChooseMediaToUse(class UMediaSource** MediaToUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeTierResultsWidget.HordeTierResultsWidget_C.ChooseMediaToUse");

	UHordeTierResultsWidget_C_ChooseMediaToUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MediaToUse != nullptr)
		*MediaToUse = params.MediaToUse;
}


// Function HordeTierResultsWidget.HordeTierResultsWidget_C.Initialize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortCompletionResult          Result                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHordeTierResultsWidget_C::Initialize(EFortCompletionResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeTierResultsWidget.HordeTierResultsWidget_C.Initialize");

	UHordeTierResultsWidget_C_Initialize_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeTierResultsWidget.HordeTierResultsWidget_C.InitializeMovie
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHordeTierResultsWidget_C::InitializeMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeTierResultsWidget.HordeTierResultsWidget_C.InitializeMovie");

	UHordeTierResultsWidget_C_InitializeMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeTierResultsWidget.HordeTierResultsWidget_C.OnTierResultsWidgetComplete__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHordeTierResultsWidget_C::OnTierResultsWidgetComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeTierResultsWidget.HordeTierResultsWidget_C.OnTierResultsWidgetComplete__DelegateSignature");

	UHordeTierResultsWidget_C_OnTierResultsWidgetComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
