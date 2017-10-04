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

// Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.GetRecipeItemQuantityPairs
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FFortItemQuantityPair> Pairs                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UMiniItemCraftingIngredientsDetailWidget_C::GetRecipeItemQuantityPairs(TArray<struct FFortItemQuantityPair>* Pairs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.GetRecipeItemQuantityPairs");

	UMiniItemCraftingIngredientsDetailWidget_C_GetRecipeItemQuantityPairs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pairs != nullptr)
		*Pairs = params.Pairs;
}


// Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.HandlePostDifferentItemToDetailSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UMiniItemCraftingIngredientsDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.HandlePostDifferentItemToDetailSet");

	UMiniItemCraftingIngredientsDetailWidget_C_HandlePostDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.ExecuteUbergraph_MiniItemCraftingIngredientsDetailWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMiniItemCraftingIngredientsDetailWidget_C::ExecuteUbergraph_MiniItemCraftingIngredientsDetailWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.ExecuteUbergraph_MiniItemCraftingIngredientsDetailWidget");

	UMiniItemCraftingIngredientsDetailWidget_C_ExecuteUbergraph_MiniItemCraftingIngredientsDetailWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
