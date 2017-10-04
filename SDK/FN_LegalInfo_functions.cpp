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

// Function LegalInfo.LegalInfo_C.On Scroll Down
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegalInfo_C::On_Scroll_Down(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegalInfo.LegalInfo_C.On Scroll Down");

	ULegalInfo_C_On_Scroll_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function LegalInfo.LegalInfo_C.BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_68_OnActiveWidgetChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 ActiveWidget                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ActiveWidgetIndex              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegalInfo_C::BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_68_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int ActiveWidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegalInfo.LegalInfo_C.BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_68_OnActiveWidgetChanged__DelegateSignature");

	ULegalInfo_C_BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_68_OnActiveWidgetChanged__DelegateSignature_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegalInfo.LegalInfo_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegalInfo_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegalInfo.LegalInfo_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature");

	ULegalInfo_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegalInfo.LegalInfo_C.BndEvt__LegalOptions_K2Node_ComponentBoundEvent_101_OnTabButtonCreated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonButton*           TabButton                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegalInfo_C::BndEvt__LegalOptions_K2Node_ComponentBoundEvent_101_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegalInfo.LegalInfo_C.BndEvt__LegalOptions_K2Node_ComponentBoundEvent_101_OnTabButtonCreated__DelegateSignature");

	ULegalInfo_C_BndEvt__LegalOptions_K2Node_ComponentBoundEvent_101_OnTabButtonCreated__DelegateSignature_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegalInfo.LegalInfo_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULegalInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegalInfo.LegalInfo_C.Construct");

	ULegalInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegalInfo.LegalInfo_C.ExecuteUbergraph_LegalInfo
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegalInfo_C::ExecuteUbergraph_LegalInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegalInfo.LegalInfo_C.ExecuteUbergraph_LegalInfo");

	ULegalInfo_C_ExecuteUbergraph_LegalInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
