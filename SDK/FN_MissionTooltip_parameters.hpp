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

// Function MissionTooltip.MissionTooltip_C.HandleGameplayModifiers
struct UMissionTooltip_C_HandleGameplayModifiers_Params
{
	TArray<class UFortGameplayModifierItemDefinition*> GameplayModifiers;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function MissionTooltip.MissionTooltip_C.HandleMissionRewards
struct UMissionTooltip_C_HandleMissionRewards_Params
{
};

// Function MissionTooltip.MissionTooltip_C.UpdateMissionInfo
struct UMissionTooltip_C_UpdateMissionInfo_Params
{
	class ABP_Hex_PARENT_C*                            Mission_Details;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionTooltip.MissionTooltip_C.Construct
struct UMissionTooltip_C_Construct_Params
{
};

// Function MissionTooltip.MissionTooltip_C.InitFromObject
struct UMissionTooltip_C_InitFromObject_Params
{
	class UObject*                                     InitObject;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionTooltip.MissionTooltip_C.ExecuteUbergraph_MissionTooltip
struct UMissionTooltip_C_ExecuteUbergraph_MissionTooltip_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
