#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AbilitiesPage.AbilitiesPage_C.HandleInventory
struct UAbilitiesPage_C_HandleInventory_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AbilitiesPage.AbilitiesPage_C.UpdateAbilityMovie
struct UAbilitiesPage_C_UpdateAbilityMovie_Params
{
	class UFortGadgetItemDefinition*                   inGadgetItemDef;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AbilitiesPage.AbilitiesPage_C.InitializeAbilityTiles
struct UAbilitiesPage_C_InitializeAbilityTiles_Params
{
};

// Function AbilitiesPage.AbilitiesPage_C.AddTilesToButtonGroup
struct UAbilitiesPage_C_AddTilesToButtonGroup_Params
{
	class UVerticalBox*                                ButtonContainer;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AbilitiesPage.AbilitiesPage_C.HandleSelectedButtonChanged
struct UAbilitiesPage_C_HandleSelectedButtonChanged_Params
{
	class UCommonButton*                               InSelectedButton;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InSelectedButtonIndex;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AbilitiesPage.AbilitiesPage_C.OnAbilitySelected
struct UAbilitiesPage_C_OnAbilitySelected_Params
{
	class UCommonButton*                               AbilityButton;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AbilitiesPage.AbilitiesPage_C.HandleBack
struct UAbilitiesPage_C_HandleBack_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AbilitiesPage.AbilitiesPage_C.OnActivated
struct UAbilitiesPage_C_OnActivated_Params
{
};

// Function AbilitiesPage.AbilitiesPage_C.OnQuickbarContentsChanged
struct UAbilitiesPage_C_OnQuickbarContentsChanged_Params
{
	EFortQuickBars                                     QuickbarIndex;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AbilitiesPage.AbilitiesPage_C.Construct
struct UAbilitiesPage_C_Construct_Params
{
};

// Function AbilitiesPage.AbilitiesPage_C.OnDeactivated
struct UAbilitiesPage_C_OnDeactivated_Params
{
};

// Function AbilitiesPage.AbilitiesPage_C.ExecuteUbergraph_AbilitiesPage
struct UAbilitiesPage_C_ExecuteUbergraph_AbilitiesPage_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
