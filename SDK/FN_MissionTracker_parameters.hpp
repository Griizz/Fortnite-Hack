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

// Function MissionTracker.MissionTracker_C.HandlePinnedQuestsChanged
struct UMissionTracker_C_HandlePinnedQuestsChanged_Params
{
};

// Function MissionTracker.MissionTracker_C.HasVisibleMission
struct UMissionTracker_C_HasVisibleMission_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MissionTracker.MissionTracker_C.UpdateVisibility
struct UMissionTracker_C_UpdateVisibility_Params
{
};

// Function MissionTracker.MissionTracker_C.HandleQuestsUpdated
struct UMissionTracker_C_HandleQuestsUpdated_Params
{
};

// Function MissionTracker.MissionTracker_C.Construct
struct UMissionTracker_C_Construct_Params
{
};

// Function MissionTracker.MissionTracker_C.Destruct
struct UMissionTracker_C_Destruct_Params
{
};

// Function MissionTracker.MissionTracker_C.ExecuteUbergraph_MissionTracker
struct UMissionTracker_C_ExecuteUbergraph_MissionTracker_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
