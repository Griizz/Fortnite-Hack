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

// Function PowerToastWidget.PowerToastWidget_C.StartIntro
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPowerToastWidget_C::StartIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.StartIntro");

	UPowerToastWidget_C_StartIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.ShowText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_Parm)
// class UCommonTextBlock*        TextBlock                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPowerToastWidget_C::ShowText(const struct FText& Text, class UCommonTextBlock* TextBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.ShowText");

	UPowerToastWidget_C_ShowText_Params params;
	params.Text = Text;
	params.TextBlock = TextBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.SetToast
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortUINotification*     Toast                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPowerToastWidget_C::SetToast(class UFortUINotification* Toast)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.SetToast");

	UPowerToastWidget_C_SetToast_Params params;
	params.Toast = Toast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.HandleIntroFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPowerToastWidget_C::HandleIntroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.HandleIntroFinished");

	UPowerToastWidget_C_HandleIntroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.HandleOutroFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPowerToastWidget_C::HandleOutroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.HandleOutroFinished");

	UPowerToastWidget_C_HandleOutroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.HandleAnimationDelay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPowerToastWidget_C::HandleAnimationDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.HandleAnimationDelay");

	UPowerToastWidget_C_HandleAnimationDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UPowerToastWidget_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.OnMouseEnter");

	UPowerToastWidget_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UPowerToastWidget_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.OnMouseLeave");

	UPowerToastWidget_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPowerToastWidget_C::BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	UPowerToastWidget_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.OnPlayerInfoChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo*    NewInfo                        (CPF_Parm)

void UPowerToastWidget_C::OnPlayerInfoChanged(struct FFortTeamMemberInfo* NewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.OnPlayerInfoChanged");

	UPowerToastWidget_C_OnPlayerInfoChanged_Params params;
	params.NewInfo = NewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPowerToastWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.Construct");

	UPowerToastWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UPowerToastWidget_C::BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UPowerToastWidget_C_BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.BndEvt__Outro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UPowerToastWidget_C::BndEvt__Outro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.BndEvt__Outro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UPowerToastWidget_C_BndEvt__Outro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.OnTeamMemberFinishedSynchronizing_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        NewTeamMemberId                (CPF_Parm)

void UPowerToastWidget_C::OnTeamMemberFinishedSynchronizing_Event_1(const struct FUniqueNetIdRepl& NewTeamMemberId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.OnTeamMemberFinishedSynchronizing_Event_1");

	UPowerToastWidget_C_OnTeamMemberFinishedSynchronizing_Event_1_Params params;
	params.NewTeamMemberId = NewTeamMemberId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.ExecuteUbergraph_PowerToastWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPowerToastWidget_C::ExecuteUbergraph_PowerToastWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.ExecuteUbergraph_PowerToastWidget");

	UPowerToastWidget_C_ExecuteUbergraph_PowerToastWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.OnFinishedToast__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPowerToastWidget_C::OnFinishedToast__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.OnFinishedToast__DelegateSignature");

	UPowerToastWidget_C_OnFinishedToast__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
