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

// Function WebPurchase.WebPurchase_C.HandleBack
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWebPurchase_C::HandleBack(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function WebPurchase.WebPurchase_C.HandleBack");

	UWebPurchase_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function WebPurchase.WebPurchase_C.BindDelegates
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWebPurchase_C::BindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function WebPurchase.WebPurchase_C.BindDelegates");

	UWebPurchase_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPurchase.WebPurchase_C.Dismiss
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWebPurchase_C::Dismiss()
{
	static auto fn = UObject::FindObject<UFunction>("Function WebPurchase.WebPurchase_C.Dismiss");

	UWebPurchase_C_Dismiss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPurchase.WebPurchase_C.Display
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 WebWidget                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 AttemptedMTXOfferId            (CPF_Parm, CPF_ZeroConstructor)

void UWebPurchase_C::Display(class UWidget* WebWidget, const struct FString& AttemptedMTXOfferId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WebPurchase.WebPurchase_C.Display");

	UWebPurchase_C_Display_Params params;
	params.WebWidget = WebWidget;
	params.AttemptedMTXOfferId = AttemptedMTXOfferId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPurchase.WebPurchase_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWebPurchase_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WebPurchase.WebPurchase_C.OnActivated");

	UWebPurchase_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPurchase.WebPurchase_C.ExecuteUbergraph_WebPurchase
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWebPurchase_C::ExecuteUbergraph_WebPurchase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WebPurchase.WebPurchase_C.ExecuteUbergraph_WebPurchase");

	UWebPurchase_C_ExecuteUbergraph_WebPurchase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
