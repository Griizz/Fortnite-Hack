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

// Function MTXButton.MTXButton_C.UpdateState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMTXButton_C::UpdateState()
{
	static auto fn = UObject::FindObject<UFunction>("Function MTXButton.MTXButton_C.UpdateState");

	UMTXButton_C_UpdateState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MTXButton.MTXButton_C.Get_Button_ToolTipWidget_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* UMTXButton_C::Get_Button_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MTXButton.MTXButton_C.Get_Button_ToolTipWidget_1");

	UMTXButton_C_Get_Button_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MTXButton.MTXButton_C.UpdateAmount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortPrivateAccountInfo FortPrivateAccountInfo         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UMTXButton_C::UpdateAmount(const struct FFortPrivateAccountInfo& FortPrivateAccountInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MTXButton.MTXButton_C.UpdateAmount");

	UMTXButton_C_UpdateAmount_Params params;
	params.FortPrivateAccountInfo = FortPrivateAccountInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MTXButton.MTXButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMTXButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MTXButton.MTXButton_C.Construct");

	UMTXButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MTXButton.MTXButton_C.HandleLocalAccountInfoChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortPrivateAccountInfo NewInfo                        (CPF_Parm)

void UMTXButton_C::HandleLocalAccountInfoChanged(const struct FFortPrivateAccountInfo& NewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MTXButton.MTXButton_C.HandleLocalAccountInfoChanged");

	UMTXButton_C_HandleLocalAccountInfoChanged_Params params;
	params.NewInfo = NewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MTXButton.MTXButton_C.BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMTXButton_C::BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MTXButton.MTXButton_C.BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	UMTXButton_C_BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MTXButton.MTXButton_C.HandleInputActionChnaged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMTXButton_C::HandleInputActionChnaged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function MTXButton.MTXButton_C.HandleInputActionChnaged");

	UMTXButton_C_HandleInputActionChnaged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MTXButton.MTXButton_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMTXButton_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MTXButton.MTXButton_C.Destruct");

	UMTXButton_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MTXButton.MTXButton_C.ExecuteUbergraph_MTXButton
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMTXButton_C::ExecuteUbergraph_MTXButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MTXButton.MTXButton_C.ExecuteUbergraph_MTXButton");

	UMTXButton_C_ExecuteUbergraph_MTXButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
