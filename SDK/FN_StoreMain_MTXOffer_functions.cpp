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

// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.ShowDetails
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStoreMain_MTXOffer_C::ShowDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.ShowDetails");

	UStoreMain_MTXOffer_C_ShowDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.InitOffer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStoreMain_MTXOffer_C::InitOffer()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.InitOffer");

	UStoreMain_MTXOffer_C_InitOffer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStoreMain_MTXOffer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.Construct");

	UStoreMain_MTXOffer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnClick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStoreMain_MTXOffer_C::OnClick(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnClick");

	UStoreMain_MTXOffer_C_OnClick_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnHovered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UStoreMain_MTXOffer_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnHovered");

	UStoreMain_MTXOffer_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnUnhovered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UStoreMain_MTXOffer_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnUnhovered");

	UStoreMain_MTXOffer_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.ExecuteUbergraph_StoreMain_MTXOffer
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStoreMain_MTXOffer_C::ExecuteUbergraph_StoreMain_MTXOffer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.ExecuteUbergraph_StoreMain_MTXOffer");

	UStoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.AboutToShowDetails__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStoreMain_MTXOffer_C::AboutToShowDetails__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.AboutToShowDetails__DelegateSignature");

	UStoreMain_MTXOffer_C_AboutToShowDetails__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
