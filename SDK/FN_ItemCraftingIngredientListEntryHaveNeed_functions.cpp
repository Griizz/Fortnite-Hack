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

// Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.GetToolTipWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* UItemCraftingIngredientListEntryHaveNeed_C::GetToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.GetToolTipWidget");

	UItemCraftingIngredientListEntryHaveNeed_C_GetToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.Refresh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemCraftingIngredientListEntryHaveNeed_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.Refresh");

	UItemCraftingIngredientListEntryHaveNeed_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.DoDesignTimeRandomization
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemCraftingIngredientListEntryHaveNeed_C::DoDesignTimeRandomization()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.DoDesignTimeRandomization");

	UItemCraftingIngredientListEntryHaveNeed_C_DoDesignTimeRandomization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemCraftingIngredientListEntryHaveNeed_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.PreConstruct");

	UItemCraftingIngredientListEntryHaveNeed_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.HandleDifferentItemOrQuantitySetBP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsBeingReset                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemCraftingIngredientListEntryHaveNeed_C::HandleDifferentItemOrQuantitySetBP(bool* IsBeingReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.HandleDifferentItemOrQuantitySetBP");

	UItemCraftingIngredientListEntryHaveNeed_C_HandleDifferentItemOrQuantitySetBP_Params params;
	params.IsBeingReset = IsBeingReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeed
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemCraftingIngredientListEntryHaveNeed_C::ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeed");

	UItemCraftingIngredientListEntryHaveNeed_C_ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
