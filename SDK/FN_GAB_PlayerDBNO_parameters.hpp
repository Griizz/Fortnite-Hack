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

// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.InitializeDeathHitDirection
struct UGAB_PlayerDBNO_C_InitializeDeathHitDirection_Params
{
	struct FGameplayEventData                          EventHitData;                                             // (CPF_Parm)
};

// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.OnCancelled_4B0F8658452931EE3B297A9E70C9C496
struct UGAB_PlayerDBNO_C_OnCancelled_4B0F8658452931EE3B297A9E70C9C496_Params
{
};

// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.OnInterrupted_4B0F8658452931EE3B297A9E70C9C496
struct UGAB_PlayerDBNO_C_OnInterrupted_4B0F8658452931EE3B297A9E70C9C496_Params
{
};

// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.OnBlendOut_4B0F8658452931EE3B297A9E70C9C496
struct UGAB_PlayerDBNO_C_OnBlendOut_4B0F8658452931EE3B297A9E70C9C496_Params
{
};

// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.OnCompleted_4B0F8658452931EE3B297A9E70C9C496
struct UGAB_PlayerDBNO_C_OnCompleted_4B0F8658452931EE3B297A9E70C9C496_Params
{
};

// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.K2_ActivateAbilityFromEvent
struct UGAB_PlayerDBNO_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.ExecuteUbergraph_GAB_PlayerDBNO
struct UGAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
