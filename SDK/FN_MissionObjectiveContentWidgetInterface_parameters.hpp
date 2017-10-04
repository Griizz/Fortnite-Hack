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

// Function MissionObjectiveContentWidgetInterface.MissionObjectiveContentWidgetInterface_C.GetHeightEstimate
struct UMissionObjectiveContentWidgetInterface_C_GetHeightEstimate_Params
{
	float                                              Height;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionObjectiveContentWidgetInterface.MissionObjectiveContentWidgetInterface_C.Setup
struct UMissionObjectiveContentWidgetInterface_C_Setup_Params
{
	class AFortObjectiveBase*                          Objective;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bInConfigureAsHUD;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
