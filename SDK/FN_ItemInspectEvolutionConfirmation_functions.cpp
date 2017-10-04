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

// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.SetEvolutionRestrictions
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemInspectEvolutionConfirmation_C::SetEvolutionRestrictions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.SetEvolutionRestrictions");

	UItemInspectEvolutionConfirmation_C_SetEvolutionRestrictions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.UnselectOtherEvolutions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectEvolutionConfirmation_C::UnselectOtherEvolutions(int SelectedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.UnselectOtherEvolutions");

	UItemInspectEvolutionConfirmation_C_UnselectOtherEvolutions_Params params;
	params.SelectedIndex = SelectedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.ClearEvolutionRepresented
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemInspectEvolutionConfirmation_C::ClearEvolutionRepresented()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.ClearEvolutionRepresented");

	UItemInspectEvolutionConfirmation_C_ClearEvolutionRepresented_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnShow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemInspectEvolutionConfirmation_C::OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnShow");

	UItemInspectEvolutionConfirmation_C_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.HideEvolutionOptions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemInspectEvolutionConfirmation_C::HideEvolutionOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.HideEvolutionOptions");

	UItemInspectEvolutionConfirmation_C_HideEvolutionOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.ShowEvolutionOptions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemInspectEvolutionConfirmation_C::ShowEvolutionOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.ShowEvolutionOptions");

	UItemInspectEvolutionConfirmation_C_ShowEvolutionOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.GetNumEvolutionOptions
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NumRecipes                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectEvolutionConfirmation_C::GetNumEvolutionOptions(int* NumRecipes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.GetNumEvolutionOptions");

	UItemInspectEvolutionConfirmation_C_GetNumEvolutionOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumRecipes != nullptr)
		*NumRecipes = params.NumRecipes;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.SetupEvolutionOptions
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemInspectEvolutionConfirmation_C::SetupEvolutionOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.SetupEvolutionOptions");

	UItemInspectEvolutionConfirmation_C_SetupEvolutionOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.HandleEvolutionOptionSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            RecipeIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectEvolutionConfirmation_C::HandleEvolutionOptionSelected(class UFortItem* Item, int RecipeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.HandleEvolutionOptionSelected");

	UItemInspectEvolutionConfirmation_C_HandleEvolutionOptionSelected_Params params;
	params.Item = Item;
	params.RecipeIndex = RecipeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.HandleEvolutionOptionUnhovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectEvolutionConfirmation_C::HandleEvolutionOptionUnhovered(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.HandleEvolutionOptionUnhovered");

	UItemInspectEvolutionConfirmation_C_HandleEvolutionOptionUnhovered_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.HandleEvolutionOptionHovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            RecipeIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectEvolutionConfirmation_C::HandleEvolutionOptionHovered(class UFortItem* Item, int RecipeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.HandleEvolutionOptionHovered");

	UItemInspectEvolutionConfirmation_C_HandleEvolutionOptionHovered_Params params;
	params.Item = Item;
	params.RecipeIndex = RecipeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.SetEvolutionToRepresent
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            EvolutionIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortItem*               EvolutionItem                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectEvolutionConfirmation_C::SetEvolutionToRepresent(int EvolutionIndex, class UFortItem* EvolutionItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.SetEvolutionToRepresent");

	UItemInspectEvolutionConfirmation_C_SetEvolutionToRepresent_Params params;
	params.EvolutionIndex = EvolutionIndex;
	params.EvolutionItem = EvolutionItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.SetItemToRepresent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectEvolutionConfirmation_C::SetItemToRepresent(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.SetItemToRepresent");

	UItemInspectEvolutionConfirmation_C_SetItemToRepresent_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectEvolutionConfirmation_C::BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	UItemInspectEvolutionConfirmation_C_BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.ExecuteUbergraph_ItemInspectEvolutionConfirmation
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectEvolutionConfirmation_C::ExecuteUbergraph_ItemInspectEvolutionConfirmation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.ExecuteUbergraph_ItemInspectEvolutionConfirmation");

	UItemInspectEvolutionConfirmation_C_ExecuteUbergraph_ItemInspectEvolutionConfirmation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnEvolutionOptionSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            RecipeIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectEvolutionConfirmation_C::OnEvolutionOptionSelected__DelegateSignature(class UFortItem* Item, int RecipeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnEvolutionOptionSelected__DelegateSignature");

	UItemInspectEvolutionConfirmation_C_OnEvolutionOptionSelected__DelegateSignature_Params params;
	params.Item = Item;
	params.RecipeIndex = RecipeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnEvolutionOptionUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectEvolutionConfirmation_C::OnEvolutionOptionUnhovered__DelegateSignature(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnEvolutionOptionUnhovered__DelegateSignature");

	UItemInspectEvolutionConfirmation_C_OnEvolutionOptionUnhovered__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnEvolutionOptionHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectEvolutionConfirmation_C::OnEvolutionOptionHovered__DelegateSignature(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnEvolutionOptionHovered__DelegateSignature");

	UItemInspectEvolutionConfirmation_C_OnEvolutionOptionHovered__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnEvolutionConfirm__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemInspectEvolutionConfirmation_C::OnEvolutionConfirm__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnEvolutionConfirm__DelegateSignature");

	UItemInspectEvolutionConfirmation_C_OnEvolutionConfirm__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
