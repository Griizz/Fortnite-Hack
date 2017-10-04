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

// Function SignInWidget.SignInWidget_C.HandleTextCommited
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ETextCommit>       TextCommitType                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonBorder*           HighlightBorder                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonBorder*           NormalBorder                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USignInWidget_C::HandleTextCommited(TEnumAsByte<ETextCommit> TextCommitType, class UCommonBorder* HighlightBorder, class UCommonBorder* NormalBorder)
{
	static auto fn = UObject::FindObject<UFunction>("Function SignInWidget.SignInWidget_C.HandleTextCommited");

	USignInWidget_C_HandleTextCommited_Params params;
	params.TextCommitType = TextCommitType;
	params.HighlightBorder = HighlightBorder;
	params.NormalBorder = NormalBorder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SignInWidget.SignInWidget_C.BndEvt__PasswordEditText_K2Node_ComponentBoundEvent_86_OnEditableTextCommittedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USignInWidget_C::BndEvt__PasswordEditText_K2Node_ComponentBoundEvent_86_OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function SignInWidget.SignInWidget_C.BndEvt__PasswordEditText_K2Node_ComponentBoundEvent_86_OnEditableTextCommittedEvent__DelegateSignature");

	USignInWidget_C_BndEvt__PasswordEditText_K2Node_ComponentBoundEvent_86_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SignInWidget.SignInWidget_C.BndEvt__EmailEditText_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USignInWidget_C::BndEvt__EmailEditText_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function SignInWidget.SignInWidget_C.BndEvt__EmailEditText_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature");

	USignInWidget_C_BndEvt__EmailEditText_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SignInWidget.SignInWidget_C.BndEvt__EmailEditText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void USignInWidget_C::BndEvt__EmailEditText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function SignInWidget.SignInWidget_C.BndEvt__EmailEditText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature");

	USignInWidget_C_BndEvt__EmailEditText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SignInWidget.SignInWidget_C.BndEvt__PasswordEditText_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void USignInWidget_C::BndEvt__PasswordEditText_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function SignInWidget.SignInWidget_C.BndEvt__PasswordEditText_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature");

	USignInWidget_C_BndEvt__PasswordEditText_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SignInWidget.SignInWidget_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void USignInWidget_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function SignInWidget.SignInWidget_C.OnActivated");

	USignInWidget_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SignInWidget.SignInWidget_C.BndEvt__SignInButton_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USignInWidget_C::BndEvt__SignInButton_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SignInWidget.SignInWidget_C.BndEvt__SignInButton_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature");

	USignInWidget_C_BndEvt__SignInButton_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SignInWidget.SignInWidget_C.ExecuteUbergraph_SignInWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USignInWidget_C::ExecuteUbergraph_SignInWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SignInWidget.SignInWidget_C.ExecuteUbergraph_SignInWidget");

	USignInWidget_C_ExecuteUbergraph_SignInWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
