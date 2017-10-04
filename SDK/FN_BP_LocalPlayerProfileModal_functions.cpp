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

// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.Handle Leaving Banner Editor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_LocalPlayerProfileModal_C::Handle_Leaving_Banner_Editor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.Handle Leaving Banner Editor");

	UBP_LocalPlayerProfileModal_C_Handle_Leaving_Banner_Editor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.HandleNextAction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocalPlayerProfileModal_C::HandleNextAction(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.HandleNextAction");

	UBP_LocalPlayerProfileModal_C_HandleNextAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.HandlePreviousAction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocalPlayerProfileModal_C::HandlePreviousAction(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.HandlePreviousAction");

	UBP_LocalPlayerProfileModal_C_HandlePreviousAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.Setup Input Action Handlers
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_LocalPlayerProfileModal_C::Setup_Input_Action_Handlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.Setup Input Action Handlers");

	UBP_LocalPlayerProfileModal_C_Setup_Input_Action_Handlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.HandleCloseAction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocalPlayerProfileModal_C::HandleCloseAction(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.HandleCloseAction");

	UBP_LocalPlayerProfileModal_C_HandleCloseAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.Activate Widget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Selection                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocalPlayerProfileModal_C::Activate_Widget(int Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.Activate Widget");

	UBP_LocalPlayerProfileModal_C_Activate_Widget_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocalPlayerProfileModal_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.PreConstruct");

	UBP_LocalPlayerProfileModal_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_11_OpenBannerEditor__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_LocalPlayerProfileModal_C::BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_11_OpenBannerEditor__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_11_OpenBannerEditor__DelegateSignature");

	UBP_LocalPlayerProfileModal_C_BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_11_OpenBannerEditor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_66_OnActiveWidgetChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 ActiveWidget                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ActiveWidgetIndex              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocalPlayerProfileModal_C::BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_66_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int ActiveWidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_66_OnActiveWidgetChanged__DelegateSignature");

	UBP_LocalPlayerProfileModal_C_BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_66_OnActiveWidgetChanged__DelegateSignature_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_LocalPlayerProfileModal_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.OnActivated");

	UBP_LocalPlayerProfileModal_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_LocalPlayerProfileModal_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.Construct");

	UBP_LocalPlayerProfileModal_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_14_CloseProfileModal__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_LocalPlayerProfileModal_C::BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_14_CloseProfileModal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_14_CloseProfileModal__DelegateSignature");

	UBP_LocalPlayerProfileModal_C_BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_14_CloseProfileModal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   IconId                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ColorId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocalPlayerProfileModal_C::BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature(const struct FName& IconId, const struct FName& ColorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature");

	UBP_LocalPlayerProfileModal_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature_Params params;
	params.IconId = IconId;
	params.ColorId = ColorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.OnDeactivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_LocalPlayerProfileModal_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.OnDeactivated");

	UBP_LocalPlayerProfileModal_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.ExecuteUbergraph_BP_LocalPlayerProfileModal
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocalPlayerProfileModal_C::ExecuteUbergraph_BP_LocalPlayerProfileModal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.ExecuteUbergraph_BP_LocalPlayerProfileModal");

	UBP_LocalPlayerProfileModal_C_ExecuteUbergraph_BP_LocalPlayerProfileModal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
