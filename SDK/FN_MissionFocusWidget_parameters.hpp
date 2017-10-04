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

// Function MissionFocusWidget.MissionFocusWidget_C.UpdateVisibility
struct UMissionFocusWidget_C_UpdateVisibility_Params
{
};

// Function MissionFocusWidget.MissionFocusWidget_C.HandleFocusedMission
struct UMissionFocusWidget_C_HandleFocusedMission_Params
{
	class AFortMission*                                FocusedMission;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionFocusWidget.MissionFocusWidget_C.HandleTimerComponentChanged
struct UMissionFocusWidget_C_HandleTimerComponentChanged_Params
{
	class UFortMissionTimerComponent*                  TimerComponent;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionFocusWidget.MissionFocusWidget_C.UpdateTimer
struct UMissionFocusWidget_C_UpdateTimer_Params
{
};

// Function MissionFocusWidget.MissionFocusWidget_C.Construct
struct UMissionFocusWidget_C_Construct_Params
{
};

// Function MissionFocusWidget.MissionFocusWidget_C.ExecuteUbergraph_MissionFocusWidget
struct UMissionFocusWidget_C_ExecuteUbergraph_MissionFocusWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
