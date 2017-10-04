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

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.PopDetails
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStoreMain_OfferDetails_C::PopDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.PopDetails");

	UStoreMain_OfferDetails_C_PopDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Init
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStoreMain_OfferDetails_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Init");

	UStoreMain_OfferDetails_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.HandleBack
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStoreMain_OfferDetails_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.HandleBack");

	UStoreMain_OfferDetails_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UStoreMain_OfferDetails_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnActivated");

	UStoreMain_OfferDetails_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnDeactivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UStoreMain_OfferDetails_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnDeactivated");

	UStoreMain_OfferDetails_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStoreMain_OfferDetails_C::BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature");

	UStoreMain_OfferDetails_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.HandlePurchaseComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStoreMain_OfferDetails_C::HandlePurchaseComplete(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.HandlePurchaseComplete");

	UStoreMain_OfferDetails_C_HandlePurchaseComplete_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStoreMain_OfferDetails_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Construct");

	UStoreMain_OfferDetails_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStoreMain_OfferDetails_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Destruct");

	UStoreMain_OfferDetails_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.ExecuteUbergraph_StoreMain_OfferDetails
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStoreMain_OfferDetails_C::ExecuteUbergraph_StoreMain_OfferDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.ExecuteUbergraph_StoreMain_OfferDetails");

	UStoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
