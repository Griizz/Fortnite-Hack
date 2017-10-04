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

// Function SchematicTooltipCraftingIngredient.SchematicTooltipCraftingIngredient_C.Get Tooltip
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* USchematicTooltipCraftingIngredient_C::Get_Tooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function SchematicTooltipCraftingIngredient.SchematicTooltipCraftingIngredient_C.Get Tooltip");

	USchematicTooltipCraftingIngredient_C_Get_Tooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SchematicTooltipCraftingIngredient.SchematicTooltipCraftingIngredient_C.Refresh
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USchematicTooltipCraftingIngredient_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function SchematicTooltipCraftingIngredient.SchematicTooltipCraftingIngredient_C.Refresh");

	USchematicTooltipCraftingIngredient_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SchematicTooltipCraftingIngredient.SchematicTooltipCraftingIngredient_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USchematicTooltipCraftingIngredient_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SchematicTooltipCraftingIngredient.SchematicTooltipCraftingIngredient_C.Construct");

	USchematicTooltipCraftingIngredient_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SchematicTooltipCraftingIngredient.SchematicTooltipCraftingIngredient_C.ExecuteUbergraph_SchematicTooltipCraftingIngredient
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USchematicTooltipCraftingIngredient_C::ExecuteUbergraph_SchematicTooltipCraftingIngredient(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SchematicTooltipCraftingIngredient.SchematicTooltipCraftingIngredient_C.ExecuteUbergraph_SchematicTooltipCraftingIngredient");

	USchematicTooltipCraftingIngredient_C_ExecuteUbergraph_SchematicTooltipCraftingIngredient_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
