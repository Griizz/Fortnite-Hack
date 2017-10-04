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

// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.EnablePowerBarChunk
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UImage*                  inImage                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOutpostScreenStormShieldContent_C::EnablePowerBarChunk(class UImage* inImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.EnablePowerBarChunk");

	UOutpostScreenStormShieldContent_C_EnablePowerBarChunk_Params params;
	params.inImage = inImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.CenterActiveButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOutpostScreenStormShieldContent_C::CenterActiveButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.CenterActiveButton");

	UOutpostScreenStormShieldContent_C_CenterActiveButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.HandleBack
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOutpostScreenStormShieldContent_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.HandleBack");

	UOutpostScreenStormShieldContent_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.AddInputHandlers
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOutpostScreenStormShieldContent_C::AddInputHandlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.AddInputHandlers");

	UOutpostScreenStormShieldContent_C_AddInputHandlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.SetButtonState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           enabled_                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOutpostScreenStormShieldContent_C::SetButtonState(bool enabled_)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.SetButtonState");

	UOutpostScreenStormShieldContent_C_SetButtonState_Params params;
	params.enabled_ = enabled_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.Get_GetHelpButton_ToolTipWidget_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* UOutpostScreenStormShieldContent_C::Get_GetHelpButton_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.Get_GetHelpButton_ToolTipWidget_1");

	UOutpostScreenStormShieldContent_C_Get_GetHelpButton_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.UpdateGetHelpButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOutpostScreenStormShieldContent_C::UpdateGetHelpButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.UpdateGetHelpButton");

	UOutpostScreenStormShieldContent_C_UpdateGetHelpButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.SetExpandShieldText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   NewExpandText                  (CPF_Parm)

void UOutpostScreenStormShieldContent_C::SetExpandShieldText(const struct FText& NewExpandText)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.SetExpandShieldText");

	UOutpostScreenStormShieldContent_C_SetExpandShieldText_Params params;
	params.NewExpandText = NewExpandText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.Update_ExpandShieldText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOutpostScreenStormShieldContent_C::Update_ExpandShieldText()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.Update_ExpandShieldText");

	UOutpostScreenStormShieldContent_C_Update_ExpandShieldText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.SetCoreBuilding
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortOutpostBuilding*    NewCoreBuilding                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UOutpostScreenStormShield_C* Parent_Widget                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOutpostScreenStormShieldContent_C::SetCoreBuilding(class AFortOutpostBuilding* NewCoreBuilding, class UOutpostScreenStormShield_C* Parent_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.SetCoreBuilding");

	UOutpostScreenStormShieldContent_C_SetCoreBuilding_Params params;
	params.NewCoreBuilding = NewCoreBuilding;
	params.Parent_Widget = Parent_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.Update_LeaveOutpost_ButtonEnabled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOutpostScreenStormShieldContent_C::Update_LeaveOutpost_ButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.Update_LeaveOutpost_ButtonEnabled");

	UOutpostScreenStormShieldContent_C_Update_LeaveOutpost_ButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.Get_LeaveOutpost_Button_ToolTipWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* UOutpostScreenStormShieldContent_C::Get_LeaveOutpost_Button_ToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.Get_LeaveOutpost_Button_ToolTipWidget");

	UOutpostScreenStormShieldContent_C_Get_LeaveOutpost_Button_ToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.IsOwningPlayerOutpostOwner
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UOutpostScreenStormShieldContent_C::IsOwningPlayerOutpostOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.IsOwningPlayerOutpostOwner");

	UOutpostScreenStormShieldContent_C_IsOwningPlayerOutpostOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.Update_Upgrade_ButtonEnabled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOutpostScreenStormShieldContent_C::Update_Upgrade_ButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.Update_Upgrade_ButtonEnabled");

	UOutpostScreenStormShieldContent_C_Update_Upgrade_ButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.isPlayerAlone
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           isAlone                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOutpostScreenStormShieldContent_C::isPlayerAlone(bool* isAlone)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.isPlayerAlone");

	UOutpostScreenStormShieldContent_C_isPlayerAlone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isAlone != nullptr)
		*isAlone = params.isAlone;
}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.ResrouceProgress_Wood
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewParam                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            NewParam1                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOutpostScreenStormShieldContent_C::ResrouceProgress_Wood(int NewParam, int NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.ResrouceProgress_Wood");

	UOutpostScreenStormShieldContent_C_ResrouceProgress_Wood_Params params;
	params.NewParam = NewParam;
	params.NewParam1 = NewParam1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.GetPercent_3
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UOutpostScreenStormShieldContent_C::GetPercent_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.GetPercent_3");

	UOutpostScreenStormShieldContent_C_GetPercent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.GetPercent_2
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UOutpostScreenStormShieldContent_C::GetPercent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.GetPercent_2");

	UOutpostScreenStormShieldContent_C_GetPercent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.GetPercent_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UOutpostScreenStormShieldContent_C::GetPercent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.GetPercent_1");

	UOutpostScreenStormShieldContent_C_GetPercent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOutpostScreenStormShieldContent_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.Construct");

	UOutpostScreenStormShieldContent_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.UpdateEnabledStates
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOutpostScreenStormShieldContent_C::UpdateEnabledStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.UpdateEnabledStates");

	UOutpostScreenStormShieldContent_C_UpdateEnabledStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.BndEvt__Upgrade_Button_K2Node_ComponentBoundEvent_158_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOutpostScreenStormShieldContent_C::BndEvt__Upgrade_Button_K2Node_ComponentBoundEvent_158_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.BndEvt__Upgrade_Button_K2Node_ComponentBoundEvent_158_CommonButtonClicked__DelegateSignature");

	UOutpostScreenStormShieldContent_C_BndEvt__Upgrade_Button_K2Node_ComponentBoundEvent_158_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.OutpostIsDefined_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOutpostScreenStormShieldContent_C::OutpostIsDefined_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.OutpostIsDefined_Event");

	UOutpostScreenStormShieldContent_C_OutpostIsDefined_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.BndEvt__AllowFriendsOfFriendsButton_K2Node_ComponentBoundEvent_243_CommonSelectedStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Selected                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOutpostScreenStormShieldContent_C::BndEvt__AllowFriendsOfFriendsButton_K2Node_ComponentBoundEvent_243_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.BndEvt__AllowFriendsOfFriendsButton_K2Node_ComponentBoundEvent_243_CommonSelectedStateChanged__DelegateSignature");

	UOutpostScreenStormShieldContent_C_BndEvt__AllowFriendsOfFriendsButton_K2Node_ComponentBoundEvent_243_CommonSelectedStateChanged__DelegateSignature_Params params;
	params.Button = Button;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.ExecuteUbergraph_OutpostScreenStormShieldContent
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOutpostScreenStormShieldContent_C::ExecuteUbergraph_OutpostScreenStormShieldContent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.ExecuteUbergraph_OutpostScreenStormShieldContent");

	UOutpostScreenStormShieldContent_C_ExecuteUbergraph_OutpostScreenStormShieldContent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.OutpostIsDefined__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOutpostScreenStormShieldContent_C::OutpostIsDefined__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.OutpostIsDefined__DelegateSignature");

	UOutpostScreenStormShieldContent_C_OutpostIsDefined__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.CloseOutpostScreen__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOutpostScreenStormShieldContent_C::CloseOutpostScreen__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.CloseOutpostScreen__DelegateSignature");

	UOutpostScreenStormShieldContent_C_CloseOutpostScreen__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
