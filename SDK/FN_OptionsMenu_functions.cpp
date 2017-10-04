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

// Function OptionsMenu.OptionsMenu_C.CenterOnActiveTab
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsMenu_C::CenterOnActiveTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.CenterOnActiveTab");

	UOptionsMenu_C_CenterOnActiveTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Handle Reset HUD Default
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenu_C::Handle_Reset_HUD_Default(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Handle Reset HUD Default");

	UOptionsMenu_C_Handle_Reset_HUD_Default_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function OptionsMenu.OptionsMenu_C.SetBackground
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsMenu_C::SetBackground()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.SetBackground");

	UOptionsMenu_C_SetBackground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.AddTab
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  WidgetClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   DisplayName                    (CPF_Parm)
// struct FName                   NameId                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenu_C::AddTab(class UClass* WidgetClass, const struct FText& DisplayName, const struct FName& NameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.AddTab");

	UOptionsMenu_C_AddTab_Params params;
	params.WidgetClass = WidgetClass;
	params.DisplayName = DisplayName;
	params.NameId = NameId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleCursorModeChanging
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenu_C::HandleCursorModeChanging(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleCursorModeChanging");

	UOptionsMenu_C_HandleCursorModeChanging_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Handle Toggle Mode
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenu_C::Handle_Toggle_Mode(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Handle Toggle Mode");

	UOptionsMenu_C_Handle_Toggle_Mode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function OptionsMenu.OptionsMenu_C.Set Input Action Handlers
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsMenu_C::Set_Input_Action_Handlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Set Input Action Handlers");

	UOptionsMenu_C_Set_Input_Action_Handlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleBack
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenu_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleBack");

	UOptionsMenu_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function OptionsMenu.OptionsMenu_C.Handle Reset
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenu_C::Handle_Reset(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Handle Reset");

	UOptionsMenu_C_Handle_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function OptionsMenu.OptionsMenu_C.Handle Reset Default
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenu_C::Handle_Reset_Default(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Handle Reset Default");

	UOptionsMenu_C_Handle_Reset_Default_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function OptionsMenu.OptionsMenu_C.Handle Apply
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenu_C::Handle_Apply(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Handle Apply");

	UOptionsMenu_C_Handle_Apply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function OptionsMenu.OptionsMenu_C.OnPreviewKeyDown
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UOptionsMenu_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnPreviewKeyDown");

	UOptionsMenu_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenu.OptionsMenu_C.OnMouseWheel
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UOptionsMenu_C::OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnMouseWheel");

	UOptionsMenu_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenu.OptionsMenu_C.OnPreviewMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UOptionsMenu_C::OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnPreviewMouseButtonDown");

	UOptionsMenu_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenu.OptionsMenu_C.Initialize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsMenu_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Initialize");

	UOptionsMenu_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptionsMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Construct");

	UOptionsMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_13_OnActiveWidgetChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 ActiveWidget                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ActiveWidgetIndex              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenu_C::BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_13_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int ActiveWidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_13_OnActiveWidgetChanged__DelegateSignature");

	UOptionsMenu_C_BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_13_OnActiveWidgetChanged__DelegateSignature_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Enable Overlay Input
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Accept_Input                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Overlay_Text                   (CPF_Parm)

void UOptionsMenu_C::Enable_Overlay_Input(bool Accept_Input, const struct FText& Overlay_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Enable Overlay Input");

	UOptionsMenu_C_Enable_Overlay_Input_Params params;
	params.Accept_Input = Accept_Input;
	params.Overlay_Text = Overlay_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Enable Overlay Video
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Accept_Input                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenu_C::Enable_Overlay_Video(bool Accept_Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Enable Overlay Video");

	UOptionsMenu_C_Enable_Overlay_Video_Params params;
	params.Accept_Input = Accept_Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Disable Overlay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsMenu_C::Disable_Overlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Disable Overlay");

	UOptionsMenu_C_Disable_Overlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_22_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenu_C::BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_22_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_22_CommonButtonClicked__DelegateSignature");

	UOptionsMenu_C_BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_22_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenu_C::BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature");

	UOptionsMenu_C_BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptionsMenu_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Destruct");

	UOptionsMenu_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Tab Setting Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsMenu_C::Tab_Setting_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Tab Setting Changed");

	UOptionsMenu_C_Tab_Setting_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UOptionsMenu_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnActivated");

	UOptionsMenu_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Disable Overlay Input
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsMenu_C::Disable_Overlay_Input()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Disable Overlay Input");

	UOptionsMenu_C_Disable_Overlay_Input_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Gamepad Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Gamepad_Enabled                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenu_C::Gamepad_Changed(bool Gamepad_Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Gamepad Changed");

	UOptionsMenu_C_Gamepad_Changed_Params params;
	params.Gamepad_Enabled = Gamepad_Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonButton*           TabButton                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenu_C::BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature");

	UOptionsMenu_C_BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleBenchmarkComplete
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UOptionsMenu_C::HandleBenchmarkComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleBenchmarkComplete");

	UOptionsMenu_C_HandleBenchmarkComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__LanguageOk_K2Node_ComponentBoundEvent_112_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenu_C::BndEvt__LanguageOk_K2Node_ComponentBoundEvent_112_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__LanguageOk_K2Node_ComponentBoundEvent_112_CommonButtonClicked__DelegateSignature");

	UOptionsMenu_C_BndEvt__LanguageOk_K2Node_ComponentBoundEvent_112_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleSettingsErrorMessageClosed
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UOptionsMenu_C::HandleSettingsErrorMessageClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleSettingsErrorMessageClosed");

	UOptionsMenu_C_HandleSettingsErrorMessageClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.ExecuteUbergraph_OptionsMenu
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenu_C::ExecuteUbergraph_OptionsMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.ExecuteUbergraph_OptionsMenu");

	UOptionsMenu_C_ExecuteUbergraph_OptionsMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
