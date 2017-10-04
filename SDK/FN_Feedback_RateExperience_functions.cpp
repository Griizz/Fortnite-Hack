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

// Function Feedback_RateExperience.Feedback_RateExperience_C.CreateToolTip
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Star_Widget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            WidgetIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFeedback_RateExperience_C::CreateToolTip(class UWidget* Star_Widget, int WidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback_RateExperience.Feedback_RateExperience_C.CreateToolTip");

	UFeedback_RateExperience_C_CreateToolTip_Params params;
	params.Star_Widget = Star_Widget;
	params.WidgetIndex = WidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback_RateExperience.Feedback_RateExperience_C.CloseWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFeedback_RateExperience_C::CloseWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback_RateExperience.Feedback_RateExperience_C.CloseWidget");

	UFeedback_RateExperience_C_CloseWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback_RateExperience.Feedback_RateExperience_C.SendAnalyticsEvent
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 FeedbackSentBy                 (CPF_Parm, CPF_ZeroConstructor)

void UFeedback_RateExperience_C::SendAnalyticsEvent(const struct FString& FeedbackSentBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback_RateExperience.Feedback_RateExperience_C.SendAnalyticsEvent");

	UFeedback_RateExperience_C_SendAnalyticsEvent_Params params;
	params.FeedbackSentBy = FeedbackSentBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback_RateExperience.Feedback_RateExperience_C.SetupStarButtons
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFeedback_RateExperience_C::SetupStarButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback_RateExperience.Feedback_RateExperience_C.SetupStarButtons");

	UFeedback_RateExperience_C_SetupStarButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback_RateExperience.Feedback_RateExperience_C.SetStarCount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Star_Count                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFeedback_RateExperience_C::SetStarCount(int Star_Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback_RateExperience.Feedback_RateExperience_C.SetStarCount");

	UFeedback_RateExperience_C_SetStarCount_Params params;
	params.Star_Count = Star_Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback_RateExperience.Feedback_RateExperience_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFeedback_RateExperience_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback_RateExperience.Feedback_RateExperience_C.Construct");

	UFeedback_RateExperience_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback_RateExperience.Feedback_RateExperience_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFeedback_RateExperience_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback_RateExperience.Feedback_RateExperience_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	UFeedback_RateExperience_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback_RateExperience.Feedback_RateExperience_C.BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFeedback_RateExperience_C::BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback_RateExperience.Feedback_RateExperience_C.BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UFeedback_RateExperience_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback_RateExperience.Feedback_RateExperience_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UFeedback_RateExperience_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback_RateExperience.Feedback_RateExperience_C.OnActivated");

	UFeedback_RateExperience_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback_RateExperience.Feedback_RateExperience_C.BndEvt__5Star_K2Node_ComponentBoundEvent_868_On Mouse Hovered Changed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           Is_Hovered                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFeedback_RateExperience_C::BndEvt__5Star_K2Node_ComponentBoundEvent_868_On_Mouse_Hovered_Changed__DelegateSignature(bool Is_Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback_RateExperience.Feedback_RateExperience_C.BndEvt__5Star_K2Node_ComponentBoundEvent_868_On Mouse Hovered Changed__DelegateSignature");

	UFeedback_RateExperience_C_BndEvt__5Star_K2Node_ComponentBoundEvent_868_On_Mouse_Hovered_Changed__DelegateSignature_Params params;
	params.Is_Hovered = Is_Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback_RateExperience.Feedback_RateExperience_C.BndEvt__4Star_K2Node_ComponentBoundEvent_890_On Mouse Hovered Changed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           Is_Hovered                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFeedback_RateExperience_C::BndEvt__4Star_K2Node_ComponentBoundEvent_890_On_Mouse_Hovered_Changed__DelegateSignature(bool Is_Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback_RateExperience.Feedback_RateExperience_C.BndEvt__4Star_K2Node_ComponentBoundEvent_890_On Mouse Hovered Changed__DelegateSignature");

	UFeedback_RateExperience_C_BndEvt__4Star_K2Node_ComponentBoundEvent_890_On_Mouse_Hovered_Changed__DelegateSignature_Params params;
	params.Is_Hovered = Is_Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback_RateExperience.Feedback_RateExperience_C.BndEvt__3Star_K2Node_ComponentBoundEvent_907_On Mouse Hovered Changed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           Is_Hovered                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFeedback_RateExperience_C::BndEvt__3Star_K2Node_ComponentBoundEvent_907_On_Mouse_Hovered_Changed__DelegateSignature(bool Is_Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback_RateExperience.Feedback_RateExperience_C.BndEvt__3Star_K2Node_ComponentBoundEvent_907_On Mouse Hovered Changed__DelegateSignature");

	UFeedback_RateExperience_C_BndEvt__3Star_K2Node_ComponentBoundEvent_907_On_Mouse_Hovered_Changed__DelegateSignature_Params params;
	params.Is_Hovered = Is_Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback_RateExperience.Feedback_RateExperience_C.BndEvt__2Star_K2Node_ComponentBoundEvent_925_On Mouse Hovered Changed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           Is_Hovered                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFeedback_RateExperience_C::BndEvt__2Star_K2Node_ComponentBoundEvent_925_On_Mouse_Hovered_Changed__DelegateSignature(bool Is_Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback_RateExperience.Feedback_RateExperience_C.BndEvt__2Star_K2Node_ComponentBoundEvent_925_On Mouse Hovered Changed__DelegateSignature");

	UFeedback_RateExperience_C_BndEvt__2Star_K2Node_ComponentBoundEvent_925_On_Mouse_Hovered_Changed__DelegateSignature_Params params;
	params.Is_Hovered = Is_Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback_RateExperience.Feedback_RateExperience_C.BndEvt__1Star_K2Node_ComponentBoundEvent_944_On Mouse Hovered Changed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           Is_Hovered                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFeedback_RateExperience_C::BndEvt__1Star_K2Node_ComponentBoundEvent_944_On_Mouse_Hovered_Changed__DelegateSignature(bool Is_Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback_RateExperience.Feedback_RateExperience_C.BndEvt__1Star_K2Node_ComponentBoundEvent_944_On Mouse Hovered Changed__DelegateSignature");

	UFeedback_RateExperience_C_BndEvt__1Star_K2Node_ComponentBoundEvent_944_On_Mouse_Hovered_Changed__DelegateSignature_Params params;
	params.Is_Hovered = Is_Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback_RateExperience.Feedback_RateExperience_C.OnClientPartyStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFeedback_RateExperience_C::OnClientPartyStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback_RateExperience.Feedback_RateExperience_C.OnClientPartyStateChanged");

	UFeedback_RateExperience_C_OnClientPartyStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback_RateExperience.Feedback_RateExperience_C.OnStarButtonClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button_Clicked                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFeedback_RateExperience_C::OnStarButtonClicked(class UFortBaseButton* Button_Clicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback_RateExperience.Feedback_RateExperience_C.OnStarButtonClicked");

	UFeedback_RateExperience_C_OnStarButtonClicked_Params params;
	params.Button_Clicked = Button_Clicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback_RateExperience.Feedback_RateExperience_C.OnInputMethodChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFeedback_RateExperience_C::OnInputMethodChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback_RateExperience.Feedback_RateExperience_C.OnInputMethodChanged");

	UFeedback_RateExperience_C_OnInputMethodChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback_RateExperience.Feedback_RateExperience_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFeedback_RateExperience_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback_RateExperience.Feedback_RateExperience_C.Destruct");

	UFeedback_RateExperience_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback_RateExperience.Feedback_RateExperience_C.ExecuteUbergraph_Feedback_RateExperience
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFeedback_RateExperience_C::ExecuteUbergraph_Feedback_RateExperience(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback_RateExperience.Feedback_RateExperience_C.ExecuteUbergraph_Feedback_RateExperience");

	UFeedback_RateExperience_C_ExecuteUbergraph_Feedback_RateExperience_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
