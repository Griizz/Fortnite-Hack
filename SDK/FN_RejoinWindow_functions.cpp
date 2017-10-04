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

// Function RejoinWindow.RejoinWindow_C.OnButtonClicked
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URejoinWindow_C::OnButtonClicked(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function RejoinWindow.RejoinWindow_C.OnButtonClicked");

	URejoinWindow_C_OnButtonClicked_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RejoinWindow.RejoinWindow_C.CenterFirstButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URejoinWindow_C::CenterFirstButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function RejoinWindow.RejoinWindow_C.CenterFirstButton");

	URejoinWindow_C_CenterFirstButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RejoinWindow.RejoinWindow_C.InitializeRejoinWindow
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URejoinWindow_C::InitializeRejoinWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function RejoinWindow.RejoinWindow_C.InitializeRejoinWindow");

	URejoinWindow_C_InitializeRejoinWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RejoinWindow.RejoinWindow_C.ShowInitalScreen
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TimeoutSeconds                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URejoinWindow_C::ShowInitalScreen(float TimeoutSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function RejoinWindow.RejoinWindow_C.ShowInitalScreen");

	URejoinWindow_C_ShowInitalScreen_Params params;
	params.TimeoutSeconds = TimeoutSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RejoinWindow.RejoinWindow_C.ShowRetryScreen
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Failure                        (CPF_Parm)
// float                          TimeoutSeconds                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           AllowRetry                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URejoinWindow_C::ShowRetryScreen(const struct FText& Failure, float TimeoutSeconds, bool AllowRetry)
{
	static auto fn = UObject::FindObject<UFunction>("Function RejoinWindow.RejoinWindow_C.ShowRetryScreen");

	URejoinWindow_C_ShowRetryScreen_Params params;
	params.Failure = Failure;
	params.TimeoutSeconds = TimeoutSeconds;
	params.AllowRetry = AllowRetry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RejoinWindow.RejoinWindow_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URejoinWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RejoinWindow.RejoinWindow_C.Construct");

	URejoinWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RejoinWindow.RejoinWindow_C.OnTimeoutTimeReached
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void URejoinWindow_C::OnTimeoutTimeReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function RejoinWindow.RejoinWindow_C.OnTimeoutTimeReached");

	URejoinWindow_C_OnTimeoutTimeReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RejoinWindow.RejoinWindow_C.ExecuteUbergraph_RejoinWindow
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URejoinWindow_C::ExecuteUbergraph_RejoinWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RejoinWindow.RejoinWindow_C.ExecuteUbergraph_RejoinWindow");

	URejoinWindow_C_ExecuteUbergraph_RejoinWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RejoinWindow.RejoinWindow_C.OnRequestRejoinRetry__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URejoinWindow_C::OnRequestRejoinRetry__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RejoinWindow.RejoinWindow_C.OnRequestRejoinRetry__DelegateSignature");

	URejoinWindow_C_OnRequestRejoinRetry__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RejoinWindow.RejoinWindow_C.OnRequestAbandon__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URejoinWindow_C::OnRequestAbandon__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RejoinWindow.RejoinWindow_C.OnRequestAbandon__DelegateSignature");

	URejoinWindow_C_OnRequestAbandon__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
