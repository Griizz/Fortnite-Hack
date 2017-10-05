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

// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.GetHeightEstimate
struct UMissionObjectiveProgressBarsManager_C_GetHeightEstimate_Params
{
	float                                              Height;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.HandleUpdate
struct UMissionObjectiveProgressBarsManager_C_HandleUpdate_Params
{
	class AFortMissionState*                           Objective;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.HandleObjectiveVisibilityChanged
struct UMissionObjectiveProgressBarsManager_C_HandleObjectiveVisibilityChanged_Params
{
	class AFortObjectiveBase*                          Objective;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               New_Visibility;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.HandleObjectiveStatusChanged
struct UMissionObjectiveProgressBarsManager_C_HandleObjectiveStatusChanged_Params
{
	class AFortObjectiveBase*                          Objective;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortObjectiveStatus                               New_Status;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.CreateProgressBarWidget
struct UMissionObjectiveProgressBarsManager_C_CreateProgressBarWidget_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.Setup
struct UMissionObjectiveProgressBarsManager_C_Setup_Params
{
	class AFortObjectiveBase*                          TrackedObjective;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bInConfigureAsHUD;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.UpdateObjectiveProgressBars
struct UMissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
