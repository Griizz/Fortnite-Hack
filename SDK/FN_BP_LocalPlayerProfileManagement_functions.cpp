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

// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.Update Bang State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_LocalPlayerProfileManagement_C::Update_Bang_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.Update Bang State");

	UBP_LocalPlayerProfileManagement_C_Update_Bang_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.UpdateBannerEditorButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_LocalPlayerProfileManagement_C::UpdateBannerEditorButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.UpdateBannerEditorButton");

	UBP_LocalPlayerProfileManagement_C_UpdateBannerEditorButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.Get_LeavePartyButton_Visibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)

void UBP_LocalPlayerProfileManagement_C::Get_LeavePartyButton_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.Get_LeavePartyButton_Visibility_1");

	UBP_LocalPlayerProfileManagement_C_Get_LeavePartyButton_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.Get_ViewProfileButton_Visibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)

void UBP_LocalPlayerProfileManagement_C::Get_ViewProfileButton_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.Get_ViewProfileButton_Visibility_1");

	UBP_LocalPlayerProfileManagement_C_Get_ViewProfileButton_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.UpdateBannerIconAndColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   InBannerIconId                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   InBannerColorId                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocalPlayerProfileManagement_C::UpdateBannerIconAndColor(const struct FName& InBannerIconId, const struct FName& InBannerColorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.UpdateBannerIconAndColor");

	UBP_LocalPlayerProfileManagement_C_UpdateBannerIconAndColor_Params params;
	params.InBannerIconId = InBannerIconId;
	params.InBannerColorId = InBannerColorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.OnWidgetDeactivated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_LocalPlayerProfileManagement_C::OnWidgetDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.OnWidgetDeactivated");

	UBP_LocalPlayerProfileManagement_C_OnWidgetDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.OnWidgetActivated
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_LocalPlayerProfileManagement_C::OnWidgetActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.OnWidgetActivated");

	UBP_LocalPlayerProfileManagement_C_OnWidgetActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_LocalPlayerProfileManagement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.Construct");

	UBP_LocalPlayerProfileManagement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocalPlayerProfileManagement_C::BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");

	UBP_LocalPlayerProfileManagement_C_BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.BndEvt__CloseProfileButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocalPlayerProfileManagement_C::BndEvt__CloseProfileButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.BndEvt__CloseProfileButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");

	UBP_LocalPlayerProfileManagement_C_BndEvt__CloseProfileButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.BndEvt__LeavePartyButton_K2Node_ComponentBoundEvent_100_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocalPlayerProfileManagement_C::BndEvt__LeavePartyButton_K2Node_ComponentBoundEvent_100_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.BndEvt__LeavePartyButton_K2Node_ComponentBoundEvent_100_CommonButtonClicked__DelegateSignature");

	UBP_LocalPlayerProfileManagement_C_BndEvt__LeavePartyButton_K2Node_ComponentBoundEvent_100_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocalPlayerProfileManagement_C::BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature");

	UBP_LocalPlayerProfileManagement_C_BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.ExecuteUbergraph_BP_LocalPlayerProfileManagement
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LocalPlayerProfileManagement_C::ExecuteUbergraph_BP_LocalPlayerProfileManagement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.ExecuteUbergraph_BP_LocalPlayerProfileManagement");

	UBP_LocalPlayerProfileManagement_C_ExecuteUbergraph_BP_LocalPlayerProfileManagement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.CloseProfileModal__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_LocalPlayerProfileManagement_C::CloseProfileModal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.CloseProfileModal__DelegateSignature");

	UBP_LocalPlayerProfileManagement_C_CloseProfileModal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.OpenBannerEditor__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_LocalPlayerProfileManagement_C::OpenBannerEditor__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.OpenBannerEditor__DelegateSignature");

	UBP_LocalPlayerProfileManagement_C_OpenBannerEditor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
