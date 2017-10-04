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

// Function ChatWidget.ChatWidget_C.InitializeChat
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UChatWidget_C::InitializeChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.InitializeChat");

	UChatWidget_C_InitializeChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.BindDelegates
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UChatWidget_C::BindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.BindDelegates");

	UChatWidget_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.HandleCursorModeChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ActionName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UUserWidget*             Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UChatWidget_C::HandleCursorModeChanged(bool bEnabled, const struct FName& ActionName, class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.HandleCursorModeChanged");

	UChatWidget_C_HandleCursorModeChanged_Params params;
	params.bEnabled = bEnabled;
	params.ActionName = ActionName;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.HandleShowChatWindow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UChatWidget_C::HandleShowChatWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.HandleShowChatWindow");

	UChatWidget_C_HandleShowChatWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.HandeChatEnteredEvent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bEnteringChat                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UChatWidget_C::HandeChatEnteredEvent(bool bEnteringChat)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.HandeChatEnteredEvent");

	UChatWidget_C_HandeChatEnteredEvent_Params params;
	params.bEnteringChat = bEnteringChat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.UpdateChatUserListIcon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Open                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UChatWidget_C::UpdateChatUserListIcon(bool Open)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.UpdateChatUserListIcon");

	UChatWidget_C_UpdateChatUserListIcon_Params params;
	params.Open = Open;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.Set Chat Shortcut Visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UChatWidget_C::Set_Chat_Shortcut_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.Set Chat Shortcut Visibility");

	UChatWidget_C_Set_Chat_Shortcut_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.Set Chat Visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UChatWidget_C::Set_Chat_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.Set Chat Visibility");

	UChatWidget_C_Set_Chat_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UChatWidget_C::BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature");

	UChatWidget_C_BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.BndEvt__FortChat_K2Node_ComponentBoundEvent_66_OnChatEnteredDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bEnteringChat                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UChatWidget_C::BndEvt__FortChat_K2Node_ComponentBoundEvent_66_OnChatEnteredDelegate__DelegateSignature(bool bEnteringChat)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.BndEvt__FortChat_K2Node_ComponentBoundEvent_66_OnChatEnteredDelegate__DelegateSignature");

	UChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_66_OnChatEnteredDelegate__DelegateSignature_Params params;
	params.bEnteringChat = bEnteringChat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.BndEvt__FortChat_K2Node_ComponentBoundEvent_0_OnUserListChangedDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bOpen                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UChatWidget_C::BndEvt__FortChat_K2Node_ComponentBoundEvent_0_OnUserListChangedDelegate__DelegateSignature(bool bOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.BndEvt__FortChat_K2Node_ComponentBoundEvent_0_OnUserListChangedDelegate__DelegateSignature");

	UChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_0_OnUserListChangedDelegate__DelegateSignature_Params params;
	params.bOpen = bOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UChatWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.Construct");

	UChatWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.HandleInputMethodChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UChatWidget_C::HandleInputMethodChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.HandleInputMethodChanged");

	UChatWidget_C_HandleInputMethodChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UChatWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.Destruct");

	UChatWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.ExecuteUbergraph_ChatWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UChatWidget_C::ExecuteUbergraph_ChatWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.ExecuteUbergraph_ChatWidget");

	UChatWidget_C_ExecuteUbergraph_ChatWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.AboutToEnterChat__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UChatWidget_C::AboutToEnterChat__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.AboutToEnterChat__DelegateSignature");

	UChatWidget_C_AboutToEnterChat__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
