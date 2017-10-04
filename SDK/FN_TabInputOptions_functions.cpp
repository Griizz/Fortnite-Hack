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

// Function TabInputOptions.TabInputOptions_C.NewFunction_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTabInputOptions_C::NewFunction_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabInputOptions.TabInputOptions_C.NewFunction_1");

	UTabInputOptions_C_NewFunction_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabInputOptions.TabInputOptions_C.Set Input Enabled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTabInputOptions_C::Set_Input_Enabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabInputOptions.TabInputOptions_C.Set Input Enabled");

	UTabInputOptions_C_Set_Input_Enabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabInputOptions.TabInputOptions_C.Overlay Key Pressed
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    NewKey                         (CPF_Parm)

void UTabInputOptions_C::Overlay_Key_Pressed(const struct FKey& NewKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabInputOptions.TabInputOptions_C.Overlay Key Pressed");

	UTabInputOptions_C_Overlay_Key_Pressed_Params params;
	params.NewKey = NewKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabInputOptions.TabInputOptions_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTabInputOptions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabInputOptions.TabInputOptions_C.Construct");

	UTabInputOptions_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabInputOptions.TabInputOptions_C.Input Clicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Number_In_List                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Is_Primary_Button              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabInputOptions_C::Input_Clicked(int Number_In_List, bool Is_Primary_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabInputOptions.TabInputOptions_C.Input Clicked");

	UTabInputOptions_C_Input_Clicked_Params params;
	params.Number_In_List = Number_In_List;
	params.Is_Primary_Button = Is_Primary_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabInputOptions.TabInputOptions_C.CenterOnTab
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTabInputOptions_C::CenterOnTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabInputOptions.TabInputOptions_C.CenterOnTab");

	UTabInputOptions_C_CenterOnTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabInputOptions.TabInputOptions_C.UpdateOptionsTab
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTabInputOptions_C::UpdateOptionsTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabInputOptions.TabInputOptions_C.UpdateOptionsTab");

	UTabInputOptions_C_UpdateOptionsTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabInputOptions.TabInputOptions_C.BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabInputOptions_C::BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabInputOptions.TabInputOptions_C.BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature");

	UTabInputOptions_C_BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabInputOptions.TabInputOptions_C.HandleUsingGamepadChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bUsingGamepad                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabInputOptions_C::HandleUsingGamepadChanged(bool* bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabInputOptions.TabInputOptions_C.HandleUsingGamepadChanged");

	UTabInputOptions_C_HandleUsingGamepadChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabInputOptions.TabInputOptions_C.ExecuteUbergraph_TabInputOptions
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabInputOptions_C::ExecuteUbergraph_TabInputOptions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabInputOptions.TabInputOptions_C.ExecuteUbergraph_TabInputOptions");

	UTabInputOptions_C_ExecuteUbergraph_TabInputOptions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabInputOptions.TabInputOptions_C.Gamepad Changed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Gamepad_Enabled                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabInputOptions_C::Gamepad_Changed__DelegateSignature(bool Gamepad_Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabInputOptions.TabInputOptions_C.Gamepad Changed__DelegateSignature");

	UTabInputOptions_C_Gamepad_Changed__DelegateSignature_Params params;
	params.Gamepad_Enabled = Gamepad_Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabInputOptions.TabInputOptions_C.Disable Overlay__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTabInputOptions_C::Disable_Overlay__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabInputOptions.TabInputOptions_C.Disable Overlay__DelegateSignature");

	UTabInputOptions_C_Disable_Overlay__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabInputOptions.TabInputOptions_C.Enable Overlay__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Accept_Input                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Overlay_Text                   (CPF_Parm)

void UTabInputOptions_C::Enable_Overlay__DelegateSignature(bool Accept_Input, const struct FText& Overlay_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabInputOptions.TabInputOptions_C.Enable Overlay__DelegateSignature");

	UTabInputOptions_C_Enable_Overlay__DelegateSignature_Params params;
	params.Accept_Input = Accept_Input;
	params.Overlay_Text = Overlay_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
