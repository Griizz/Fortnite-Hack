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

// Function ItemCraftingIngredientsDetailWidget.ItemCraftingIngredientsDetailWidget_C.HandlePostDifferentItemToDetailSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemCraftingIngredientsDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCraftingIngredientsDetailWidget.ItemCraftingIngredientsDetailWidget_C.HandlePostDifferentItemToDetailSet");

	UItemCraftingIngredientsDetailWidget_C_HandlePostDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCraftingIngredientsDetailWidget.ItemCraftingIngredientsDetailWidget_C.ExecuteUbergraph_ItemCraftingIngredientsDetailWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemCraftingIngredientsDetailWidget_C::ExecuteUbergraph_ItemCraftingIngredientsDetailWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCraftingIngredientsDetailWidget.ItemCraftingIngredientsDetailWidget_C.ExecuteUbergraph_ItemCraftingIngredientsDetailWidget");

	UItemCraftingIngredientsDetailWidget_C_ExecuteUbergraph_ItemCraftingIngredientsDetailWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
