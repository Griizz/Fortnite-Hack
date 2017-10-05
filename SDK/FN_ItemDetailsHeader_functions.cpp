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

// Function ItemDetailsHeader.ItemDetailsHeader_C.SetStyles
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemDetailsHeader_C::SetStyles()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeader.ItemDetailsHeader_C.SetStyles");

	UItemDetailsHeader_C_SetStyles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsHeader.ItemDetailsHeader_C.UpdateItemsForWidgets
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemDetailsHeader_C::UpdateItemsForWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeader.ItemDetailsHeader_C.UpdateItemsForWidgets");

	UItemDetailsHeader_C_UpdateItemsForWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsHeader.ItemDetailsHeader_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemDetailsHeader_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeader.ItemDetailsHeader_C.Construct");

	UItemDetailsHeader_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsHeader.ItemDetailsHeader_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemDetailsHeader_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeader.ItemDetailsHeader_C.PreConstruct");

	UItemDetailsHeader_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsHeader.ItemDetailsHeader_C.HandleDifferentItemToDetailSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemDetailsHeader_C::HandleDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeader.ItemDetailsHeader_C.HandleDifferentItemToDetailSet");

	UItemDetailsHeader_C_HandleDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsHeader.ItemDetailsHeader_C.HandleDifferentItemToCompareSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemDetailsHeader_C::HandleDifferentItemToCompareSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeader.ItemDetailsHeader_C.HandleDifferentItemToCompareSet");

	UItemDetailsHeader_C_HandleDifferentItemToCompareSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsHeader.ItemDetailsHeader_C.ExecuteUbergraph_ItemDetailsHeader
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemDetailsHeader_C::ExecuteUbergraph_ItemDetailsHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeader.ItemDetailsHeader_C.ExecuteUbergraph_ItemDetailsHeader");

	UItemDetailsHeader_C_ExecuteUbergraph_ItemDetailsHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
