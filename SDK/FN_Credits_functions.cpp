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

// Function Credits.Credits_C.Reset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCredits_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Credits.Credits_C.Reset");

	UCredits_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Credits.Credits_C.CaptureEndPoint
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCredits_C::CaptureEndPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Credits.Credits_C.CaptureEndPoint");

	UCredits_C_CaptureEndPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Credits.Credits_C.ScrollCredits
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCredits_C::ScrollCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function Credits.Credits_C.ScrollCredits");

	UCredits_C_ScrollCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Credits.Credits_C.ToggleScrollTimer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           EnableTimer                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCredits_C::ToggleScrollTimer(bool EnableTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Credits.Credits_C.ToggleScrollTimer");

	UCredits_C_ToggleScrollTimer_Params params;
	params.EnableTimer = EnableTimer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Credits.Credits_C.HandleBack
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCredits_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function Credits.Credits_C.HandleBack");

	UCredits_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function Credits.Credits_C.HandleFadeInFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCredits_C::HandleFadeInFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Credits.Credits_C.HandleFadeInFinished");

	UCredits_C_HandleFadeInFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Credits.Credits_C.OnDeactivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UCredits_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Credits.Credits_C.OnDeactivated");

	UCredits_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Credits.Credits_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UCredits_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Credits.Credits_C.OnActivated");

	UCredits_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Credits.Credits_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCredits_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Credits.Credits_C.Construct");

	UCredits_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Credits.Credits_C.ExecuteUbergraph_Credits
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCredits_C::ExecuteUbergraph_Credits(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Credits.Credits_C.ExecuteUbergraph_Credits");

	UCredits_C_ExecuteUbergraph_Credits_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
