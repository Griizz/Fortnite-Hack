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

// Function GAB_GenericDeath.GAB_GenericDeath_C.GetRandomSectionName
struct UGAB_GenericDeath_C_GetRandomSectionName_Params
{
	int                                                MaxNumberOfSections;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       OriginalSectionName;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SectionName;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GAB_GenericDeath.GAB_GenericDeath_C.InitializeDeathHitDirection
struct UGAB_GenericDeath_C_InitializeDeathHitDirection_Params
{
	struct FGameplayEventData                          EventHitData;                                             // (CPF_Parm)
};

// Function GAB_GenericDeath.GAB_GenericDeath_C.OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4
struct UGAB_GenericDeath_C_OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4_Params
{
};

// Function GAB_GenericDeath.GAB_GenericDeath_C.OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4
struct UGAB_GenericDeath_C_OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4_Params
{
};

// Function GAB_GenericDeath.GAB_GenericDeath_C.OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4
struct UGAB_GenericDeath_C_OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4_Params
{
};

// Function GAB_GenericDeath.GAB_GenericDeath_C.OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4
struct UGAB_GenericDeath_C_OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4_Params
{
};

// Function GAB_GenericDeath.GAB_GenericDeath_C.K2_OnEndAbility
struct UGAB_GenericDeath_C_K2_OnEndAbility_Params
{
};

// Function GAB_GenericDeath.GAB_GenericDeath_C.PickDeathMontageSection
struct UGAB_GenericDeath_C_PickDeathMontageSection_Params
{
};

// Function GAB_GenericDeath.GAB_GenericDeath_C.K2_ActivateAbilityFromEvent
struct UGAB_GenericDeath_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GAB_GenericDeath.GAB_GenericDeath_C.ExecuteUbergraph_GAB_GenericDeath
struct UGAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
