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

// Function QuantitySelector.QuantitySelector_C.SetupForInputMode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsUsingGamepad                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuantitySelector_C::SetupForInputMode(bool IsUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.SetupForInputMode");

	UQuantitySelector_C_SetupForInputMode_Params params;
	params.IsUsingGamepad = IsUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.SliderValueChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuantitySelector_C::SliderValueChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.SliderValueChanged");

	UQuantitySelector_C_SliderValueChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.HandleCancelPressed
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuantitySelector_C::HandleCancelPressed(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.HandleCancelPressed");

	UQuantitySelector_C_HandleCancelPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function QuantitySelector.QuantitySelector_C.HandleTransferPressed
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuantitySelector_C::HandleTransferPressed(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.HandleTransferPressed");

	UQuantitySelector_C_HandleTransferPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function QuantitySelector.QuantitySelector_C.HandleMaxPressed
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuantitySelector_C::HandleMaxPressed(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.HandleMaxPressed");

	UQuantitySelector_C_HandleMaxPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function QuantitySelector.QuantitySelector_C.CloseSelector
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuantitySelector_C::CloseSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.CloseSelector");

	UQuantitySelector_C_CloseSelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.SetAdditionalText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   AdditionalInfoText             (CPF_Parm)

void UQuantitySelector_C::SetAdditionalText(const struct FText& AdditionalInfoText)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.SetAdditionalText");

	UQuantitySelector_C_SetAdditionalText_Params params;
	params.AdditionalInfoText = AdditionalInfoText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.SetSplitData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            StartingCount                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            MaximumCount                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   TitleText                      (CPF_Parm)
// struct FText                   ButtonText                     (CPF_Parm)
// struct FText                   AdditionalInfoText             (CPF_Parm)

void UQuantitySelector_C::SetSplitData(int StartingCount, int MaximumCount, class UFortItem* Item, const struct FText& TitleText, const struct FText& ButtonText, const struct FText& AdditionalInfoText)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.SetSplitData");

	UQuantitySelector_C_SetSplitData_Params params;
	params.StartingCount = StartingCount;
	params.MaximumCount = MaximumCount;
	params.Item = Item;
	params.TitleText = TitleText;
	params.ButtonText = ButtonText;
	params.AdditionalInfoText = AdditionalInfoText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuantitySelector_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature");

	UQuantitySelector_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_166_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuantitySelector_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_166_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_166_CommonButtonClicked__DelegateSignature");

	UQuantitySelector_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_166_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.BndEvt__AnalogSlider_0_K2Node_ComponentBoundEvent_434_OnFloatValueChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuantitySelector_C::BndEvt__AnalogSlider_0_K2Node_ComponentBoundEvent_434_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.BndEvt__AnalogSlider_0_K2Node_ComponentBoundEvent_434_OnFloatValueChangedEvent__DelegateSignature");

	UQuantitySelector_C_BndEvt__AnalogSlider_0_K2Node_ComponentBoundEvent_434_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.BndEvt__MaxButton_K2Node_ComponentBoundEvent_343_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuantitySelector_C::BndEvt__MaxButton_K2Node_ComponentBoundEvent_343_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.BndEvt__MaxButton_K2Node_ComponentBoundEvent_343_CommonButtonClicked__DelegateSignature");

	UQuantitySelector_C_BndEvt__MaxButton_K2Node_ComponentBoundEvent_343_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UQuantitySelector_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.OnActivated");

	UQuantitySelector_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.OnDeactivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UQuantitySelector_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.OnDeactivated");

	UQuantitySelector_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UQuantitySelector_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.Construct");

	UQuantitySelector_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.HandleChangeInputMode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuantitySelector_C::HandleChangeInputMode(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.HandleChangeInputMode");

	UQuantitySelector_C_HandleChangeInputMode_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.ExecuteUbergraph_QuantitySelector
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuantitySelector_C::ExecuteUbergraph_QuantitySelector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.ExecuteUbergraph_QuantitySelector");

	UQuantitySelector_C_ExecuteUbergraph_QuantitySelector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.OnStackValueChangedDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewValue                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortItem*               FortItem                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuantitySelector_C::OnStackValueChangedDispatcher__DelegateSignature(int NewValue, class UFortItem* FortItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.OnStackValueChangedDispatcher__DelegateSignature");

	UQuantitySelector_C_OnStackValueChangedDispatcher__DelegateSignature_Params params;
	params.NewValue = NewValue;
	params.FortItem = FortItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.OnButtonClickedDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ChosenValue                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortItem*               FortItem                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuantitySelector_C::OnButtonClickedDispatcher__DelegateSignature(int ChosenValue, class UFortItem* FortItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.OnButtonClickedDispatcher__DelegateSignature");

	UQuantitySelector_C_OnButtonClickedDispatcher__DelegateSignature_Params params;
	params.ChosenValue = ChosenValue;
	params.FortItem = FortItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
