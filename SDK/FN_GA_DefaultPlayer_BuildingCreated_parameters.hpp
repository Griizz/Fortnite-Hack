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

// Function GA_DefaultPlayer_BuildingCreated.GA_DefaultPlayer_BuildingCreated_C.K2_ActivateAbilityFromEvent
struct UGA_DefaultPlayer_BuildingCreated_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GA_DefaultPlayer_BuildingCreated.GA_DefaultPlayer_BuildingCreated_C.ExecuteUbergraph_GA_DefaultPlayer_BuildingCreated
struct UGA_DefaultPlayer_BuildingCreated_C_ExecuteUbergraph_GA_DefaultPlayer_BuildingCreated_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
