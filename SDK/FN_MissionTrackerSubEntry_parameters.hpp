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

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.GetHeightEstimate
struct UMissionTrackerSubEntry_C_GetHeightEstimate_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.CreateCompletionAnnouncement
struct UMissionTrackerSubEntry_C_CreateCompletionAnnouncement_Params
{
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HandleMissionUIEvent
struct UMissionTrackerSubEntry_C_HandleMissionUIEvent_Params
{
	class AFortMissionState*                           MissionElement;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       EventTags;                                                // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.DrawAttention
struct UMissionTrackerSubEntry_C_DrawAttention_Params
{
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.Update
struct UMissionTrackerSubEntry_C_Update_Params
{
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HideObjectiveCompletionIcon
struct UMissionTrackerSubEntry_C_HideObjectiveCompletionIcon_Params
{
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.ShowObjectiveWidget
struct UMissionTrackerSubEntry_C_ShowObjectiveWidget_Params
{
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HanldeObjectiveVisiblityOverrideChanged
struct UMissionTrackerSubEntry_C_HanldeObjectiveVisiblityOverrideChanged_Params
{
	class AFortObjectiveBase*                          Objective;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortMissionVisibilityOverride                     New_Visibility_Override;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.CreateObjectiveContentWidget
struct UMissionTrackerSubEntry_C_CreateObjectiveContentWidget_Params
{
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.StartEndingAnimations
struct UMissionTrackerSubEntry_C_StartEndingAnimations_Params
{
	class UWidgetAnimation*                            Animation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HideObjectiveWidget
struct UMissionTrackerSubEntry_C_HideObjectiveWidget_Params
{
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HandleUpdate
struct UMissionTrackerSubEntry_C_HandleUpdate_Params
{
	class AFortMissionState*                           Objective;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HandleObjectiveVisibilityChanged
struct UMissionTrackerSubEntry_C_HandleObjectiveVisibilityChanged_Params
{
	class AFortObjectiveBase*                          Objective;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               NewVisibility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HandleObjectiveStatusChanged
struct UMissionTrackerSubEntry_C_HandleObjectiveStatusChanged_Params
{
	class AFortObjectiveBase*                          Objective;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortObjectiveStatus                               NewStatus;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.Setup
struct UMissionTrackerSubEntry_C_Setup_Params
{
	class AFortObjectiveBase*                          Objective;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.OnObjectiveSet
struct UMissionTrackerSubEntry_C_OnObjectiveSet_Params
{
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.OnHiddenByHeightConstraintChanged
struct UMissionTrackerSubEntry_C_OnHiddenByHeightConstraintChanged_Params
{
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.ExecuteUbergraph_MissionTrackerSubEntry
struct UMissionTrackerSubEntry_C_ExecuteUbergraph_MissionTrackerSubEntry_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.WidgetVisibilityChanged__DelegateSignature
struct UMissionTrackerSubEntry_C_WidgetVisibilityChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
