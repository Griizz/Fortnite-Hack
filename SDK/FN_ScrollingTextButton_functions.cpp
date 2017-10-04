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

// Function ScrollingTextButton.ScrollingTextButton_C.SetInitialMouseKeyboardStyle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScrollingTextButton_C::SetInitialMouseKeyboardStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollingTextButton.ScrollingTextButton_C.SetInitialMouseKeyboardStyle");

	UScrollingTextButton_C_SetInitialMouseKeyboardStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollingTextButton.ScrollingTextButton_C.UpdateTextStyle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScrollingTextButton_C::UpdateTextStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollingTextButton.ScrollingTextButton_C.UpdateTextStyle");

	UScrollingTextButton_C_UpdateTextStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollingTextButton.ScrollingTextButton_C.SetContentAlignment
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> ContentAlignment               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScrollingTextButton_C::SetContentAlignment(TEnumAsByte<EHorizontalAlignment> ContentAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollingTextButton.ScrollingTextButton_C.SetContentAlignment");

	UScrollingTextButton_C_SetContentAlignment_Params params;
	params.ContentAlignment = ContentAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollingTextButton.ScrollingTextButton_C.UpdateContentAlignment
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScrollingTextButton_C::UpdateContentAlignment()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollingTextButton.ScrollingTextButton_C.UpdateContentAlignment");

	UScrollingTextButton_C_UpdateContentAlignment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollingTextButton.ScrollingTextButton_C.SetMouseKeyboardStyle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  ControllerInputStyle           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScrollingTextButton_C::SetMouseKeyboardStyle(class UClass* ControllerInputStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollingTextButton.ScrollingTextButton_C.SetMouseKeyboardStyle");

	UScrollingTextButton_C_SetMouseKeyboardStyle_Params params;
	params.ControllerInputStyle = ControllerInputStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollingTextButton.ScrollingTextButton_C.UpdateStyle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScrollingTextButton_C::UpdateStyle(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollingTextButton.ScrollingTextButton_C.UpdateStyle");

	UScrollingTextButton_C_UpdateStyle_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollingTextButton.ScrollingTextButton_C.UpdateText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScrollingTextButton_C::UpdateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollingTextButton.ScrollingTextButton_C.UpdateText");

	UScrollingTextButton_C_UpdateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollingTextButton.ScrollingTextButton_C.SetControllerStyle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  ControllerInputStyle           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScrollingTextButton_C::SetControllerStyle(class UClass* ControllerInputStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollingTextButton.ScrollingTextButton_C.SetControllerStyle");

	UScrollingTextButton_C_SetControllerStyle_Params params;
	params.ControllerInputStyle = ControllerInputStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollingTextButton.ScrollingTextButton_C.UpdateTextAndStyle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScrollingTextButton_C::UpdateTextAndStyle(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollingTextButton.ScrollingTextButton_C.UpdateTextAndStyle");

	UScrollingTextButton_C_UpdateTextAndStyle_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollingTextButton.ScrollingTextButton_C.InitializeButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScrollingTextButton_C::InitializeButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollingTextButton.ScrollingTextButton_C.InitializeButton");

	UScrollingTextButton_C_InitializeButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollingTextButton.ScrollingTextButton_C.Set Icon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateBrush             IconBrush                      (CPF_Parm)

void UScrollingTextButton_C::Set_Icon(const struct FSlateBrush& IconBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollingTextButton.ScrollingTextButton_C.Set Icon");

	UScrollingTextButton_C_Set_Icon_Params params;
	params.IconBrush = IconBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollingTextButton.ScrollingTextButton_C.Set Text
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (CPF_Parm)

void UScrollingTextButton_C::Set_Text(const struct FText& ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollingTextButton.ScrollingTextButton_C.Set Text");

	UScrollingTextButton_C_Set_Text_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollingTextButton.ScrollingTextButton_C.OnCurrentTextStyleChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UScrollingTextButton_C::OnCurrentTextStyleChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollingTextButton.ScrollingTextButton_C.OnCurrentTextStyleChanged");

	UScrollingTextButton_C_OnCurrentTextStyleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollingTextButton.ScrollingTextButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScrollingTextButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollingTextButton.ScrollingTextButton_C.PreConstruct");

	UScrollingTextButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollingTextButton.ScrollingTextButton_C.SetTabLabelInfo
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo TabLabelInfo                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UScrollingTextButton_C::SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollingTextButton.ScrollingTextButton_C.SetTabLabelInfo");

	UScrollingTextButton_C_SetTabLabelInfo_Params params;
	params.TabLabelInfo = TabLabelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollingTextButton.ScrollingTextButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScrollingTextButton_C::BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollingTextButton.ScrollingTextButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	UScrollingTextButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollingTextButton.ScrollingTextButton_C.OnTriggeredInputActionChanged
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle*    NewTriggeredAction             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UScrollingTextButton_C::OnTriggeredInputActionChanged(struct FDataTableRowHandle* NewTriggeredAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollingTextButton.ScrollingTextButton_C.OnTriggeredInputActionChanged");

	UScrollingTextButton_C_OnTriggeredInputActionChanged_Params params;
	params.NewTriggeredAction = NewTriggeredAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollingTextButton.ScrollingTextButton_C.OnActionProgress
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float*                         HeldPercent                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScrollingTextButton_C::OnActionProgress(float* HeldPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollingTextButton.ScrollingTextButton_C.OnActionProgress");

	UScrollingTextButton_C_OnActionProgress_Params params;
	params.HeldPercent = HeldPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollingTextButton.ScrollingTextButton_C.OnActionComplete
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UScrollingTextButton_C::OnActionComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollingTextButton.ScrollingTextButton_C.OnActionComplete");

	UScrollingTextButton_C_OnActionComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollingTextButton.ScrollingTextButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UScrollingTextButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollingTextButton.ScrollingTextButton_C.Construct");

	UScrollingTextButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollingTextButton.ScrollingTextButton_C.ExecuteUbergraph_ScrollingTextButton
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScrollingTextButton_C::ExecuteUbergraph_ScrollingTextButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollingTextButton.ScrollingTextButton_C.ExecuteUbergraph_ScrollingTextButton");

	UScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
