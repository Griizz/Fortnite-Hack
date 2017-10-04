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

// Function MiniCraftingIngredientList.MiniCraftingIngredientList_C.AddListEntry
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UFortItemQuantityListEntryBase** ListEntry                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMiniCraftingIngredientList_C::AddListEntry(class UFortItemQuantityListEntryBase** ListEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniCraftingIngredientList.MiniCraftingIngredientList_C.AddListEntry");

	UMiniCraftingIngredientList_C_AddListEntry_Params params;
	params.ListEntry = ListEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniCraftingIngredientList.MiniCraftingIngredientList_C.ExecuteUbergraph_MiniCraftingIngredientList
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMiniCraftingIngredientList_C::ExecuteUbergraph_MiniCraftingIngredientList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniCraftingIngredientList.MiniCraftingIngredientList_C.ExecuteUbergraph_MiniCraftingIngredientList");

	UMiniCraftingIngredientList_C_ExecuteUbergraph_MiniCraftingIngredientList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
