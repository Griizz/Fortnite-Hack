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

// Function ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C.UpdateDoneButtonText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemManagementMulchDetailsPanel_C::UpdateDoneButtonText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C.UpdateDoneButtonText");

	UItemManagementMulchDetailsPanel_C_UpdateDoneButtonText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C.GetWarningText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<EItemRecyclingWarning>  Warnings                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           HasAnimateItems                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   WarningText                    (CPF_Parm, CPF_OutParm)

void UItemManagementMulchDetailsPanel_C::GetWarningText(bool HasAnimateItems, TArray<EItemRecyclingWarning>* Warnings, struct FText* WarningText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C.GetWarningText");

	UItemManagementMulchDetailsPanel_C_GetWarningText_Params params;
	params.HasAnimateItems = HasAnimateItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Warnings != nullptr)
		*Warnings = params.Warnings;
	if (WarningText != nullptr)
		*WarningText = params.WarningText;
}


// Function ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C.DialogResult_58BF1F8B4DC97D1C2902828F65095294
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ResultName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementMulchDetailsPanel_C::DialogResult_58BF1F8B4DC97D1C2902828F65095294(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C.DialogResult_58BF1F8B4DC97D1C2902828F65095294");

	UItemManagementMulchDetailsPanel_C_DialogResult_58BF1F8B4DC97D1C2902828F65095294_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C.HandleSetOfItemsToMulchChangedBP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemManagementMulchDetailsPanel_C::HandleSetOfItemsToMulchChangedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C.HandleSetOfItemsToMulchChangedBP");

	UItemManagementMulchDetailsPanel_C_HandleSetOfItemsToMulchChangedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C.BndEvt__DoneButton_K2Node_ComponentBoundEvent_62_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementMulchDetailsPanel_C::BndEvt__DoneButton_K2Node_ComponentBoundEvent_62_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C.BndEvt__DoneButton_K2Node_ComponentBoundEvent_62_CommonButtonClicked__DelegateSignature");

	UItemManagementMulchDetailsPanel_C_BndEvt__DoneButton_K2Node_ComponentBoundEvent_62_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C.ExecuteUbergraph_ItemManagementMulchDetailsPanel
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementMulchDetailsPanel_C::ExecuteUbergraph_ItemManagementMulchDetailsPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C.ExecuteUbergraph_ItemManagementMulchDetailsPanel");

	UItemManagementMulchDetailsPanel_C_ExecuteUbergraph_ItemManagementMulchDetailsPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C.MulchListChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemManagementMulchDetailsPanel_C::MulchListChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C.MulchListChanged__DelegateSignature");

	UItemManagementMulchDetailsPanel_C_MulchListChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
