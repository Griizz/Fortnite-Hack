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

// Function LoginResultWIdget.LoginResultWIdget_C.SetResultsData
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_Parm)
// bool                           bShowError                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Description                    (CPF_Parm)

void ULoginResultWIdget_C::SetResultsData(const struct FText& Title, bool bShowError, const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginResultWIdget.LoginResultWIdget_C.SetResultsData");

	ULoginResultWIdget_C_SetResultsData_Params params;
	params.Title = Title;
	params.bShowError = bShowError;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginResultWIdget.LoginResultWIdget_C.SetDescription
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Description                    (CPF_Parm)

void ULoginResultWIdget_C::SetDescription(const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginResultWIdget.LoginResultWIdget_C.SetDescription");

	ULoginResultWIdget_C_SetDescription_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginResultWIdget.LoginResultWIdget_C.SetTitle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_Parm)
// bool                           bShowError                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULoginResultWIdget_C::SetTitle(const struct FText& Title, bool bShowError)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginResultWIdget.LoginResultWIdget_C.SetTitle");

	ULoginResultWIdget_C_SetTitle_Params params;
	params.Title = Title;
	params.bShowError = bShowError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginResultWIdget.LoginResultWIdget_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULoginResultWIdget_C::BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginResultWIdget.LoginResultWIdget_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	ULoginResultWIdget_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginResultWIdget.LoginResultWIdget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoginResultWIdget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginResultWIdget.LoginResultWIdget_C.Construct");

	ULoginResultWIdget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginResultWIdget.LoginResultWIdget_C.ExecuteUbergraph_LoginResultWIdget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULoginResultWIdget_C::ExecuteUbergraph_LoginResultWIdget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginResultWIdget.LoginResultWIdget_C.ExecuteUbergraph_LoginResultWIdget");

	ULoginResultWIdget_C_ExecuteUbergraph_LoginResultWIdget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginResultWIdget.LoginResultWIdget_C.OnResultConfirmed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginResultWIdget_C::OnResultConfirmed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginResultWIdget.LoginResultWIdget_C.OnResultConfirmed__DelegateSignature");

	ULoginResultWIdget_C_OnResultConfirmed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
