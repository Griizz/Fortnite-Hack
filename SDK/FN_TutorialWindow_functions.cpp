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

// Function TutorialWindow.TutorialWindow_C.SetDescription
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Description                    (CPF_Parm)

void UTutorialWindow_C::SetDescription(const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialWindow.TutorialWindow_C.SetDescription");

	UTutorialWindow_C_SetDescription_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialWindow.TutorialWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTutorialWindow_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialWindow.TutorialWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	UTutorialWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialWindow.TutorialWindow_C.ExecuteUbergraph_TutorialWindow
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTutorialWindow_C::ExecuteUbergraph_TutorialWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialWindow.TutorialWindow_C.ExecuteUbergraph_TutorialWindow");

	UTutorialWindow_C_ExecuteUbergraph_TutorialWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialWindow.TutorialWindow_C.OnRequestRetry__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTutorialWindow_C::OnRequestRetry__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialWindow.TutorialWindow_C.OnRequestRetry__DelegateSignature");

	UTutorialWindow_C_OnRequestRetry__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
