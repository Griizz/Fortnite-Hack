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

// Function ErrorEntry.ErrorEntry_C.Center on Widget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Did_Center                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UErrorEntry_C::Center_on_Widget(bool* Did_Center)
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorEntry.ErrorEntry_C.Center on Widget");

	UErrorEntry_C_Center_on_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Did_Center != nullptr)
		*Did_Center = params.Did_Center;
}


// Function ErrorEntry.ErrorEntry_C.SetErrorInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortErrorInfo          ErrorInfo                      (CPF_Parm)

void UErrorEntry_C::SetErrorInfo(const struct FFortErrorInfo& ErrorInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorEntry.ErrorEntry_C.SetErrorInfo");

	UErrorEntry_C_SetErrorInfo_Params params;
	params.ErrorInfo = ErrorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorEntry.ErrorEntry_C.GetButtonVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UErrorEntry_C::GetButtonVisibility(ESlateVisibility* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorEntry.ErrorEntry_C.GetButtonVisibility");

	UErrorEntry_C_GetButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function ErrorEntry.ErrorEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UErrorEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorEntry.ErrorEntry_C.Construct");

	UErrorEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorEntry.ErrorEntry_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UErrorEntry_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorEntry.ErrorEntry_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature");

	UErrorEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorEntry.ErrorEntry_C.ExecuteUbergraph_ErrorEntry
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UErrorEntry_C::ExecuteUbergraph_ErrorEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorEntry.ErrorEntry_C.ExecuteUbergraph_ErrorEntry");

	UErrorEntry_C_ExecuteUbergraph_ErrorEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
