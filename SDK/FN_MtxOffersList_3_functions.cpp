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

// Function MtxOffersList_3.MtxOffersList_2_C.PlayMtxOfferAnimation_MouseLeave
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMtxOffersList_2_C::PlayMtxOfferAnimation_MouseLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxOffersList_3.MtxOffersList_2_C.PlayMtxOfferAnimation_MouseLeave");

	UMtxOffersList_2_C_PlayMtxOfferAnimation_MouseLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffersList_3.MtxOffersList_2_C.PlayMtxOfferAnimation_MouseEnter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMtxOffersList_2_C::PlayMtxOfferAnimation_MouseEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxOffersList_3.MtxOffersList_2_C.PlayMtxOfferAnimation_MouseEnter");

	UMtxOffersList_2_C_PlayMtxOfferAnimation_MouseEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffersList_3.MtxOffersList_2_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMtxOffersList_2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxOffersList_3.MtxOffersList_2_C.Construct");

	UMtxOffersList_2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffersList_3.MtxOffersList_2_C.OnPackagesListed
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FMtxPackage>     Offers                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UMtxOffersList_2_C::OnPackagesListed(TArray<struct FMtxPackage> Offers)
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxOffersList_3.MtxOffersList_2_C.OnPackagesListed");

	UMtxOffersList_2_C_OnPackagesListed_Params params;
	params.Offers = Offers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffersList_3.MtxOffersList_2_C.OnBuyItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 OfferId                        (CPF_Parm, CPF_ZeroConstructor)

void UMtxOffersList_2_C::OnBuyItem(const struct FString& OfferId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxOffersList_3.MtxOffersList_2_C.OnBuyItem");

	UMtxOffersList_2_C_OnBuyItem_Params params;
	params.OfferId = OfferId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffersList_3.MtxOffersList_2_C.OnPurchaseComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMtxOffersList_2_C::OnPurchaseComplete(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxOffersList_3.MtxOffersList_2_C.OnPurchaseComplete");

	UMtxOffersList_2_C_OnPurchaseComplete_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffersList_3.MtxOffersList_2_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMtxOffersList_2_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxOffersList_3.MtxOffersList_2_C.CustomEvent_1");

	UMtxOffersList_2_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffersList_3.MtxOffersList_2_C.CustomEvent_0_Copy
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMtxOffersList_2_C::CustomEvent_0_Copy()
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxOffersList_3.MtxOffersList_2_C.CustomEvent_0_Copy");

	UMtxOffersList_2_C_CustomEvent_0_Copy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffersList_3.MtxOffersList_2_C.ExecuteUbergraph_MtxOffersList_3
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMtxOffersList_2_C::ExecuteUbergraph_MtxOffersList_3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxOffersList_3.MtxOffersList_2_C.ExecuteUbergraph_MtxOffersList_3");

	UMtxOffersList_2_C_ExecuteUbergraph_MtxOffersList_3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffersList_3.MtxOffersList_2_C.PurchaseComplete__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMtxOffersList_2_C::PurchaseComplete__DelegateSignature(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxOffersList_3.MtxOffersList_2_C.PurchaseComplete__DelegateSignature");

	UMtxOffersList_2_C_PurchaseComplete__DelegateSignature_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
