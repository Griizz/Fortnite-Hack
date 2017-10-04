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

// Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.GetHaveQuantity
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FFortItemQuantityPair   InPair                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UItemInspectEvolutionIngredientsEntry_C::GetHaveQuantity(const struct FFortItemQuantityPair& InPair)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.GetHaveQuantity");

	UItemInspectEvolutionIngredientsEntry_C_GetHaveQuantity_Params params;
	params.InPair = InPair;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.SetIngredientCount
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemInspectEvolutionIngredientsEntry_C::SetIngredientCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.SetIngredientCount");

	UItemInspectEvolutionIngredientsEntry_C_SetIngredientCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.GetIconBrush
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UFortItemDefinition*     ItemDefinition                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FSlateBrush             Brush                          (CPF_Parm, CPF_OutParm)

void UItemInspectEvolutionIngredientsEntry_C::GetIconBrush(class UFortItemDefinition* ItemDefinition, struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.GetIconBrush");

	UItemInspectEvolutionIngredientsEntry_C_GetIconBrush_Params params;
	params.ItemDefinition = ItemDefinition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemInspectEvolutionIngredientsEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.Construct");

	UItemInspectEvolutionIngredientsEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.ExecuteUbergraph_ItemInspectEvolutionIngredientsEntry
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectEvolutionIngredientsEntry_C::ExecuteUbergraph_ItemInspectEvolutionIngredientsEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.ExecuteUbergraph_ItemInspectEvolutionIngredientsEntry");

	UItemInspectEvolutionIngredientsEntry_C_ExecuteUbergraph_ItemInspectEvolutionIngredientsEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
