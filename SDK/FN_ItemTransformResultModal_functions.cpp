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

// Function ItemTransformResultModal.ItemTransformResultModal_C.OpenResult
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair> RewardItems                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FFortItemInstanceQuantityPair> SacrificeItems                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UItemTransformResultModal_C::OpenResult(TArray<struct FFortItemInstanceQuantityPair>* RewardItems, TArray<struct FFortItemInstanceQuantityPair>* SacrificeItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultModal.ItemTransformResultModal_C.OpenResult");

	UItemTransformResultModal_C_OpenResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RewardItems != nullptr)
		*RewardItems = params.RewardItems;
	if (SacrificeItems != nullptr)
		*SacrificeItems = params.SacrificeItems;
}


// Function ItemTransformResultModal.ItemTransformResultModal_C.OpenInspect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransformResultModal_C::OpenInspect()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultModal.ItemTransformResultModal_C.OpenInspect");

	UItemTransformResultModal_C_OpenInspect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformResultModal.ItemTransformResultModal_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformResultModal_C::BndEvt__ContinueButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultModal.ItemTransformResultModal_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");

	UItemTransformResultModal_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformResultModal.ItemTransformResultModal_C.BndEvt__InspectButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformResultModal_C::BndEvt__InspectButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultModal.ItemTransformResultModal_C.BndEvt__InspectButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	UItemTransformResultModal_C_BndEvt__InspectButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformResultModal.ItemTransformResultModal_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemTransformResultModal_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultModal.ItemTransformResultModal_C.OnActivated");

	UItemTransformResultModal_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformResultModal.ItemTransformResultModal_C.ExecuteUbergraph_ItemTransformResultModal
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformResultModal_C::ExecuteUbergraph_ItemTransformResultModal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultModal.ItemTransformResultModal_C.ExecuteUbergraph_ItemTransformResultModal");

	UItemTransformResultModal_C_ExecuteUbergraph_ItemTransformResultModal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformResultModal.ItemTransformResultModal_C.OnContinue__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransformResultModal_C::OnContinue__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultModal.ItemTransformResultModal_C.OnContinue__DelegateSignature");

	UItemTransformResultModal_C_OnContinue__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
