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

// Function MissionObjectiveWidgetProviderInterface.MissionObjectiveWidgetProviderInterface_C.GetObjectiveBulletIcon
struct UMissionObjectiveWidgetProviderInterface_C_GetObjectiveBulletIcon_Params
{
	struct FSlateBrush                                 BulletIcon;                                               // (CPF_Parm, CPF_OutParm)
};

// Function MissionObjectiveWidgetProviderInterface.MissionObjectiveWidgetProviderInterface_C.GetObjectiveContentWidgetClass
struct UMissionObjectiveWidgetProviderInterface_C_GetObjectiveContentWidgetClass_Params
{
	class UClass*                                      Objective_WIdget_Class;                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
