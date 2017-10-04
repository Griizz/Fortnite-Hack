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

// Function ActiveModifiersHUD.ActiveModifiersHUD_C.PopulateModifiers
struct UActiveModifiersHUD_C_PopulateModifiers_Params
{
	TArray<class UFortGameplayModifierItemDefinition*> inModifiers;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function ActiveModifiersHUD.ActiveModifiersHUD_C.OnActiveGameplayModifiersChanged
struct UActiveModifiersHUD_C_OnActiveGameplayModifiersChanged_Params
{
	TArray<class UFortGameplayModifierItemDefinition*> AppliedModifiers;                                         // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function ActiveModifiersHUD.ActiveModifiersHUD_C.Construct
struct UActiveModifiersHUD_C_Construct_Params
{
};

// Function ActiveModifiersHUD.ActiveModifiersHUD_C.ExecuteUbergraph_ActiveModifiersHUD
struct UActiveModifiersHUD_C_ExecuteUbergraph_ActiveModifiersHUD_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
