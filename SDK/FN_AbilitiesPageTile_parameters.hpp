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

// Function AbilitiesPageTile.AbilitiesPageTile_C.SetAbilityPerkInfo
struct UAbilitiesPageTile_C_SetAbilityPerkInfo_Params
{
	struct FFortUIPerk                                 AbilityPerk;                                              // (CPF_Parm)
};

// Function AbilitiesPageTile.AbilitiesPageTile_C.UpdateKeyBinding
struct UAbilitiesPageTile_C_UpdateKeyBinding_Params
{
};

// Function AbilitiesPageTile.AbilitiesPageTile_C.SetAbilityItemInfo
struct UAbilitiesPageTile_C_SetAbilityItemInfo_Params
{
	class UFortItem*                                   SlottedAbilityItem;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AbilitiesPageTile.AbilitiesPageTile_C.Construct
struct UAbilitiesPageTile_C_Construct_Params
{
};

// Function AbilitiesPageTile.AbilitiesPageTile_C.HandleInputMethodChanged
struct UAbilitiesPageTile_C_HandleInputMethodChanged_Params
{
	bool                                               bUsingGamepad;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AbilitiesPageTile.AbilitiesPageTile_C.ExecuteUbergraph_AbilitiesPageTile
struct UAbilitiesPageTile_C_ExecuteUbergraph_AbilitiesPageTile_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
