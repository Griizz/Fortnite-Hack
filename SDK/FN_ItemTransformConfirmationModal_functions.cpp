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

// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.UpdateTransformInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               TransformKey                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UFortItem*>       SacrificeItems                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            SacrificePoints                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            CurrentTier                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformConfirmationModal_C::UpdateTransformInfo(class UFortItem* TransformKey, int SacrificePoints, int CurrentTier, TArray<class UFortItem*>* SacrificeItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.UpdateTransformInfo");

	UItemTransformConfirmationModal_C_UpdateTransformInfo_Params params;
	params.TransformKey = TransformKey;
	params.SacrificePoints = SacrificePoints;
	params.CurrentTier = CurrentTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SacrificeItems != nullptr)
		*SacrificeItems = params.SacrificeItems;
}


// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformConfirmationModal_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	UItemTransformConfirmationModal_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformConfirmationModal_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");

	UItemTransformConfirmationModal_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemTransformConfirmationModal_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.OnActivated");

	UItemTransformConfirmationModal_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.ExecuteUbergraph_ItemTransformConfirmationModal
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformConfirmationModal_C::ExecuteUbergraph_ItemTransformConfirmationModal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.ExecuteUbergraph_ItemTransformConfirmationModal");

	UItemTransformConfirmationModal_C_ExecuteUbergraph_ItemTransformConfirmationModal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.OnConfirm__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransformConfirmationModal_C::OnConfirm__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.OnConfirm__DelegateSignature");

	UItemTransformConfirmationModal_C_OnConfirm__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.OnCancel__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransformConfirmationModal_C::OnCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.OnCancel__DelegateSignature");

	UItemTransformConfirmationModal_C_OnCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
