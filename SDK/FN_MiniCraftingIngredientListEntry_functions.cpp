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

// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.HandleDifferentItemOrQuantitySetBP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsBeingReset                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMiniCraftingIngredientListEntry_C::HandleDifferentItemOrQuantitySetBP(bool* IsBeingReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.HandleDifferentItemOrQuantitySetBP");

	UMiniCraftingIngredientListEntry_C_HandleDifferentItemOrQuantitySetBP_Params params;
	params.IsBeingReset = IsBeingReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.ExecuteUbergraph_MiniCraftingIngredientListEntry
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMiniCraftingIngredientListEntry_C::ExecuteUbergraph_MiniCraftingIngredientListEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.ExecuteUbergraph_MiniCraftingIngredientListEntry");

	UMiniCraftingIngredientListEntry_C_ExecuteUbergraph_MiniCraftingIngredientListEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
