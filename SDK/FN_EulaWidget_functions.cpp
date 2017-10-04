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

// Function EulaWidget.EulaWidget_C.SetViewOnly
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bViewOnly                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEulaWidget_C::SetViewOnly(bool bViewOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function EulaWidget.EulaWidget_C.SetViewOnly");

	UEulaWidget_C_SetViewOnly_Params params;
	params.bViewOnly = bViewOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EulaWidget.EulaWidget_C.SetEulaText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   EULA                           (CPF_Parm)

void UEulaWidget_C::SetEulaText(const struct FText& EULA)
{
	static auto fn = UObject::FindObject<UFunction>("Function EulaWidget.EulaWidget_C.SetEulaText");

	UEulaWidget_C_SetEulaText_Params params;
	params.EULA = EULA;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EulaWidget.EulaWidget_C.BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_44_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEulaWidget_C::BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_44_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function EulaWidget.EulaWidget_C.BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_44_CommonButtonClicked__DelegateSignature");

	UEulaWidget_C_BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_44_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EulaWidget.EulaWidget_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEulaWidget_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function EulaWidget.EulaWidget_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	UEulaWidget_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EulaWidget.EulaWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UEulaWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EulaWidget.EulaWidget_C.Destruct");

	UEulaWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EulaWidget.EulaWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UEulaWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EulaWidget.EulaWidget_C.Construct");

	UEulaWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EulaWidget.EulaWidget_C.ExecuteUbergraph_EulaWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEulaWidget_C::ExecuteUbergraph_EulaWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EulaWidget.EulaWidget_C.ExecuteUbergraph_EulaWidget");

	UEulaWidget_C_ExecuteUbergraph_EulaWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EulaWidget.EulaWidget_C.OnEulaResponse__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Accepted                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEulaWidget_C::OnEulaResponse__DelegateSignature(bool Accepted)
{
	static auto fn = UObject::FindObject<UFunction>("Function EulaWidget.EulaWidget_C.OnEulaResponse__DelegateSignature");

	UEulaWidget_C_OnEulaResponse__DelegateSignature_Params params;
	params.Accepted = Accepted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
