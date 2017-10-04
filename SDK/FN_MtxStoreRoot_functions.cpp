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

// Function MtxStoreRoot.MtxStoreRoot_C.ClosePopup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMtxStoreRoot_C::ClosePopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxStoreRoot.MtxStoreRoot_C.ClosePopup");

	UMtxStoreRoot_C_ClosePopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxStoreRoot.MtxStoreRoot_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMtxStoreRoot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxStoreRoot.MtxStoreRoot_C.Construct");

	UMtxStoreRoot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxStoreRoot.MtxStoreRoot_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_215_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMtxStoreRoot_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_215_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxStoreRoot.MtxStoreRoot_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_215_CommonButtonClicked__DelegateSignature");

	UMtxStoreRoot_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_215_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxStoreRoot.MtxStoreRoot_C.BndEvt__MtxOffersList_2_K2Node_ComponentBoundEvent_31_PurchaseComplete__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMtxStoreRoot_C::BndEvt__MtxOffersList_2_K2Node_ComponentBoundEvent_31_PurchaseComplete__DelegateSignature(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxStoreRoot.MtxStoreRoot_C.BndEvt__MtxOffersList_2_K2Node_ComponentBoundEvent_31_PurchaseComplete__DelegateSignature");

	UMtxStoreRoot_C_BndEvt__MtxOffersList_2_K2Node_ComponentBoundEvent_31_PurchaseComplete__DelegateSignature_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxStoreRoot.MtxStoreRoot_C.ExecuteUbergraph_MtxStoreRoot
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMtxStoreRoot_C::ExecuteUbergraph_MtxStoreRoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxStoreRoot.MtxStoreRoot_C.ExecuteUbergraph_MtxStoreRoot");

	UMtxStoreRoot_C_ExecuteUbergraph_MtxStoreRoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
