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

// Function Feedback.Feedback_C.Setup For Reporting Player
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Player_Name                    (CPF_Parm)

void UFeedback_C::Setup_For_Reporting_Player(const struct FText& Player_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.Setup For Reporting Player");

	UFeedback_C_Setup_For_Reporting_Player_Params params;
	params.Player_Name = Player_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.InitializeFeedback
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFeedback_C::InitializeFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.InitializeFeedback");

	UFeedback_C_InitializeFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.IsAllTextNotEmpty
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UFeedback_C::IsAllTextNotEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.IsAllTextNotEmpty");

	UFeedback_C_IsAllTextNotEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Feedback.Feedback_C.AddButtonFeedbackTypes
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFeedback_C::AddButtonFeedbackTypes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.AddButtonFeedbackTypes");

	UFeedback_C_AddButtonFeedbackTypes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.BindDelegates
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFeedback_C::BindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.BindDelegates");

	UFeedback_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFeedback_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.Construct");

	UFeedback_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.OnInitiateDebugInfoForFeedbackComplete
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UFeedback_C::OnInitiateDebugInfoForFeedbackComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.OnInitiateDebugInfoForFeedbackComplete");

	UFeedback_C_OnInitiateDebugInfoForFeedbackComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.OnBeginIntro
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFeedback_C::OnBeginIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.OnBeginIntro");

	UFeedback_C_OnBeginIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFeedback_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	UFeedback_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFeedback_C::BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UFeedback_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.HandleTextChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UFeedback_C::HandleTextChanged(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.HandleTextChanged");

	UFeedback_C_HandleTextChanged_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UFeedback_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.OnActivated");

	UFeedback_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.ExecuteUbergraph_Feedback
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFeedback_C::ExecuteUbergraph_Feedback(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.ExecuteUbergraph_Feedback");

	UFeedback_C_ExecuteUbergraph_Feedback_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
