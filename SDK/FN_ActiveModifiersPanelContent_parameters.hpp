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

// Function ActiveModifiersPanelContent.ActiveModifiersPanelContent_C.Init
struct UActiveModifiersPanelContent_C_Init_Params
{
	TArray<class UFortGameplayModifierItemDefinition*> inModifiers;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function ActiveModifiersPanelContent.ActiveModifiersPanelContent_C.Construct
struct UActiveModifiersPanelContent_C_Construct_Params
{
};

// Function ActiveModifiersPanelContent.ActiveModifiersPanelContent_C.ExecuteUbergraph_ActiveModifiersPanelContent
struct UActiveModifiersPanelContent_C_ExecuteUbergraph_ActiveModifiersPanelContent_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
