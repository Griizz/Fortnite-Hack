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

// Function LoginAccountSelect.LoginAccountSelect_C.BndEvt__EpicLoginButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULoginAccountSelect_C::BndEvt__EpicLoginButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginAccountSelect.LoginAccountSelect_C.BndEvt__EpicLoginButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	ULoginAccountSelect_C_BndEvt__EpicLoginButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginAccountSelect.LoginAccountSelect_C.BndEvt__PlayStationLoginButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULoginAccountSelect_C::BndEvt__PlayStationLoginButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginAccountSelect.LoginAccountSelect_C.BndEvt__PlayStationLoginButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	ULoginAccountSelect_C_BndEvt__PlayStationLoginButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginAccountSelect.LoginAccountSelect_C.BndEvt__XBoxLoginButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULoginAccountSelect_C::BndEvt__XBoxLoginButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginAccountSelect.LoginAccountSelect_C.BndEvt__XBoxLoginButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	ULoginAccountSelect_C_BndEvt__XBoxLoginButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginAccountSelect.LoginAccountSelect_C.ExecuteUbergraph_LoginAccountSelect
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULoginAccountSelect_C::ExecuteUbergraph_LoginAccountSelect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginAccountSelect.LoginAccountSelect_C.ExecuteUbergraph_LoginAccountSelect");

	ULoginAccountSelect_C_ExecuteUbergraph_LoginAccountSelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
