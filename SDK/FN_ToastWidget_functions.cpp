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

// Function ToastWidget.ToastWidget_C.GetOpenButtonVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)

void UToastWidget_C::GetOpenButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget.ToastWidget_C.GetOpenButtonVisibility");

	UToastWidget_C_GetOpenButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget.ToastWidget_C.StartIntro
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UToastWidget_C::StartIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget.ToastWidget_C.StartIntro");

	UToastWidget_C_StartIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget.ToastWidget_C.ShowText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_Parm)
// class UCommonTextBlock*        TextBlock                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UToastWidget_C::ShowText(const struct FText& Text, class UCommonTextBlock* TextBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget.ToastWidget_C.ShowText");

	UToastWidget_C_ShowText_Params params;
	params.Text = Text;
	params.TextBlock = TextBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget.ToastWidget_C.SetToast
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortUINotification*     Toast                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UToastWidget_C::SetToast(class UFortUINotification* Toast)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget.ToastWidget_C.SetToast");

	UToastWidget_C_SetToast_Params params;
	params.Toast = Toast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget.ToastWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UToastWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget.ToastWidget_C.Construct");

	UToastWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget.ToastWidget_C.HandleIntroFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UToastWidget_C::HandleIntroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget.ToastWidget_C.HandleIntroFinished");

	UToastWidget_C_HandleIntroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget.ToastWidget_C.HandleOutroFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UToastWidget_C::HandleOutroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget.ToastWidget_C.HandleOutroFinished");

	UToastWidget_C_HandleOutroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget.ToastWidget_C.HandleAnimationDelay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UToastWidget_C::HandleAnimationDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget.ToastWidget_C.HandleAnimationDelay");

	UToastWidget_C_HandleAnimationDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget.ToastWidget_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UToastWidget_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget.ToastWidget_C.OnMouseEnter");

	UToastWidget_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget.ToastWidget_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UToastWidget_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget.ToastWidget_C.OnMouseLeave");

	UToastWidget_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget.ToastWidget_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UToastWidget_C::BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget.ToastWidget_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	UToastWidget_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget.ToastWidget_C.ExecuteUbergraph_ToastWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UToastWidget_C::ExecuteUbergraph_ToastWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget.ToastWidget_C.ExecuteUbergraph_ToastWidget");

	UToastWidget_C_ExecuteUbergraph_ToastWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget.ToastWidget_C.OnFinishedToast__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UToastWidget_C::OnFinishedToast__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget.ToastWidget_C.OnFinishedToast__DelegateSignature");

	UToastWidget_C_OnFinishedToast__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
