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

// Function PanelButton.PanelButton_C.UpdateStyle
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPanelButton_C::UpdateStyle(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function PanelButton.PanelButton_C.UpdateStyle");

	UPanelButton_C_UpdateStyle_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PanelButton.PanelButton_C.InitializeButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPanelButton_C::InitializeButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PanelButton.PanelButton_C.InitializeButton");

	UPanelButton_C_InitializeButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PanelButton.PanelButton_C.UpdateTextAndStyle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPanelButton_C::UpdateTextAndStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function PanelButton.PanelButton_C.UpdateTextAndStyle");

	UPanelButton_C_UpdateTextAndStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PanelButton.PanelButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPanelButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PanelButton.PanelButton_C.PreConstruct");

	UPanelButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PanelButton.PanelButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPanelButton_C::BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function PanelButton.PanelButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	UPanelButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PanelButton.PanelButton_C.OnTriggeredInputActionChanged
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle*    NewTriggeredAction             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UPanelButton_C::OnTriggeredInputActionChanged(struct FDataTableRowHandle* NewTriggeredAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function PanelButton.PanelButton_C.OnTriggeredInputActionChanged");

	UPanelButton_C_OnTriggeredInputActionChanged_Params params;
	params.NewTriggeredAction = NewTriggeredAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PanelButton.PanelButton_C.OnActionProgress
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float*                         HeldPercent                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPanelButton_C::OnActionProgress(float* HeldPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PanelButton.PanelButton_C.OnActionProgress");

	UPanelButton_C_OnActionProgress_Params params;
	params.HeldPercent = HeldPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PanelButton.PanelButton_C.OnActionComplete
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UPanelButton_C::OnActionComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function PanelButton.PanelButton_C.OnActionComplete");

	UPanelButton_C_OnActionComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PanelButton.PanelButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPanelButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PanelButton.PanelButton_C.Construct");

	UPanelButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PanelButton.PanelButton_C.OnHovered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UPanelButton_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function PanelButton.PanelButton_C.OnHovered");

	UPanelButton_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PanelButton.PanelButton_C.OnUnhovered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UPanelButton_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function PanelButton.PanelButton_C.OnUnhovered");

	UPanelButton_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PanelButton.PanelButton_C.ExecuteUbergraph_PanelButton
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPanelButton_C::ExecuteUbergraph_PanelButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PanelButton.PanelButton_C.ExecuteUbergraph_PanelButton");

	UPanelButton_C_ExecuteUbergraph_PanelButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
