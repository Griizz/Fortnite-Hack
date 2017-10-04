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

// Function AbilitiesPage.AbilitiesPage_C.HandleInventory
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilitiesPage_C::HandleInventory(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPage.AbilitiesPage_C.HandleInventory");

	UAbilitiesPage_C_HandleInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function AbilitiesPage.AbilitiesPage_C.UpdateAbilityMovie
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortGadgetItemDefinition* inGadgetItemDef                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilitiesPage_C::UpdateAbilityMovie(class UFortGadgetItemDefinition* inGadgetItemDef)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPage.AbilitiesPage_C.UpdateAbilityMovie");

	UAbilitiesPage_C_UpdateAbilityMovie_Params params;
	params.inGadgetItemDef = inGadgetItemDef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilitiesPage.AbilitiesPage_C.InitializeAbilityTiles
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAbilitiesPage_C::InitializeAbilityTiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPage.AbilitiesPage_C.InitializeAbilityTiles");

	UAbilitiesPage_C_InitializeAbilityTiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilitiesPage.AbilitiesPage_C.AddTilesToButtonGroup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UVerticalBox*            ButtonContainer                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilitiesPage_C::AddTilesToButtonGroup(class UVerticalBox* ButtonContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPage.AbilitiesPage_C.AddTilesToButtonGroup");

	UAbilitiesPage_C_AddTilesToButtonGroup_Params params;
	params.ButtonContainer = ButtonContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilitiesPage.AbilitiesPage_C.HandleSelectedButtonChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           InSelectedButton               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InSelectedButtonIndex          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilitiesPage_C::HandleSelectedButtonChanged(class UCommonButton* InSelectedButton, int InSelectedButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPage.AbilitiesPage_C.HandleSelectedButtonChanged");

	UAbilitiesPage_C_HandleSelectedButtonChanged_Params params;
	params.InSelectedButton = InSelectedButton;
	params.InSelectedButtonIndex = InSelectedButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilitiesPage.AbilitiesPage_C.OnAbilitySelected
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           AbilityButton                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilitiesPage_C::OnAbilitySelected(class UCommonButton* AbilityButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPage.AbilitiesPage_C.OnAbilitySelected");

	UAbilitiesPage_C_OnAbilitySelected_Params params;
	params.AbilityButton = AbilityButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilitiesPage.AbilitiesPage_C.HandleBack
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilitiesPage_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPage.AbilitiesPage_C.HandleBack");

	UAbilitiesPage_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function AbilitiesPage.AbilitiesPage_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UAbilitiesPage_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPage.AbilitiesPage_C.OnActivated");

	UAbilitiesPage_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilitiesPage.AbilitiesPage_C.OnQuickbarContentsChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAbilitiesPage_C::OnQuickbarContentsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPage.AbilitiesPage_C.OnQuickbarContentsChanged");

	UAbilitiesPage_C_OnQuickbarContentsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilitiesPage.AbilitiesPage_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAbilitiesPage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPage.AbilitiesPage_C.Construct");

	UAbilitiesPage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilitiesPage.AbilitiesPage_C.OnDeactivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UAbilitiesPage_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPage.AbilitiesPage_C.OnDeactivated");

	UAbilitiesPage_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilitiesPage.AbilitiesPage_C.ExecuteUbergraph_AbilitiesPage
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilitiesPage_C::ExecuteUbergraph_AbilitiesPage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPage.AbilitiesPage_C.ExecuteUbergraph_AbilitiesPage");

	UAbilitiesPage_C_ExecuteUbergraph_AbilitiesPage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
