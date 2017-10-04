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

// Function ErrorWindow.ErrorWindow_C.CloseErrorWindow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UErrorWindow_C::CloseErrorWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.CloseErrorWindow");

	UErrorWindow_C_CloseErrorWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.GetShouldLogout
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UErrorWindow_C::GetShouldLogout(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.GetShouldLogout");

	UErrorWindow_C_GetShouldLogout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function ErrorWindow.ErrorWindow_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UErrorWindow_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.Initialize");

	UErrorWindow_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.AddError
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortErrorInfo          ErrorInfo                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           First_Error                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UErrorWindow_C::AddError(bool First_Error, struct FFortErrorInfo* ErrorInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.AddError");

	UErrorWindow_C_AddError_Params params;
	params.First_Error = First_Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ErrorInfo != nullptr)
		*ErrorInfo = params.ErrorInfo;
}


// Function ErrorWindow.ErrorWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UErrorWindow_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature");

	UErrorWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UErrorWindow_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature");

	UErrorWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UErrorWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.Construct");

	UErrorWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UErrorWindow_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.Destruct");

	UErrorWindow_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.OnBeginOutro
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UErrorWindow_C::OnBeginOutro()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.OnBeginOutro");

	UErrorWindow_C_OnBeginOutro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.OnBeginIntro
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UErrorWindow_C::OnBeginIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.OnBeginIntro");

	UErrorWindow_C_OnBeginIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.IntroEnded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UErrorWindow_C::IntroEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.IntroEnded");

	UErrorWindow_C_IntroEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.OutroEnded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UErrorWindow_C::OutroEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.OutroEnded");

	UErrorWindow_C_OutroEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.ExecuteUbergraph_ErrorWindow
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UErrorWindow_C::ExecuteUbergraph_ErrorWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.ExecuteUbergraph_ErrorWindow");

	UErrorWindow_C_ExecuteUbergraph_ErrorWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
