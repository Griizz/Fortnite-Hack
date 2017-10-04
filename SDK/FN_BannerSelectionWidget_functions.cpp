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

// Function BannerSelectionWidget.BannerSelectionWidget_C.HandleNextCategoryAction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBannerSelectionWidget_C::HandleNextCategoryAction(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BannerSelectionWidget.BannerSelectionWidget_C.HandleNextCategoryAction");

	UBannerSelectionWidget_C_HandleNextCategoryAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function BannerSelectionWidget.BannerSelectionWidget_C.HandlePreviousCategoryAction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBannerSelectionWidget_C::HandlePreviousCategoryAction(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BannerSelectionWidget.BannerSelectionWidget_C.HandlePreviousCategoryAction");

	UBannerSelectionWidget_C_HandlePreviousCategoryAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function BannerSelectionWidget.BannerSelectionWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBannerSelectionWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BannerSelectionWidget.BannerSelectionWidget_C.Construct");

	UBannerSelectionWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BannerSelectionWidget.BannerSelectionWidget_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   IconId                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ColorId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBannerSelectionWidget_C::BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature(const struct FName& IconId, const struct FName& ColorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BannerSelectionWidget.BannerSelectionWidget_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature");

	UBannerSelectionWidget_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature_Params params;
	params.IconId = IconId;
	params.ColorId = ColorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BannerSelectionWidget.BannerSelectionWidget_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBannerSelectionWidget_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BannerSelectionWidget.BannerSelectionWidget_C.OnActivated");

	UBannerSelectionWidget_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BannerSelectionWidget.BannerSelectionWidget_C.BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBannerSelectionWidget_C::BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BannerSelectionWidget.BannerSelectionWidget_C.BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature");

	UBannerSelectionWidget_C_BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BannerSelectionWidget.BannerSelectionWidget_C.OnHomebaseNameCommitFailed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBannerSelectionWidget_C::OnHomebaseNameCommitFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BannerSelectionWidget.BannerSelectionWidget_C.OnHomebaseNameCommitFailed");

	UBannerSelectionWidget_C_OnHomebaseNameCommitFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BannerSelectionWidget.BannerSelectionWidget_C.OnHomebaseNameCommitSucceeded
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBannerSelectionWidget_C::OnHomebaseNameCommitSucceeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BannerSelectionWidget.BannerSelectionWidget_C.OnHomebaseNameCommitSucceeded");

	UBannerSelectionWidget_C_OnHomebaseNameCommitSucceeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BannerSelectionWidget.BannerSelectionWidget_C.GainFocusOfTextBox
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBannerSelectionWidget_C::GainFocusOfTextBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function BannerSelectionWidget.BannerSelectionWidget_C.GainFocusOfTextBox");

	UBannerSelectionWidget_C_GainFocusOfTextBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BannerSelectionWidget.BannerSelectionWidget_C.ExecuteUbergraph_BannerSelectionWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBannerSelectionWidget_C::ExecuteUbergraph_BannerSelectionWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BannerSelectionWidget.BannerSelectionWidget_C.ExecuteUbergraph_BannerSelectionWidget");

	UBannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
