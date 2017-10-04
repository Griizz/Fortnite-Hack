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

// Function MissionTrackerEntry.MissionTrackerEntry_C.Construct
struct UMissionTrackerEntry_C_Construct_Params
{
};

// Function MissionTrackerEntry.MissionTrackerEntry_C.OnMissionSet
struct UMissionTrackerEntry_C_OnMissionSet_Params
{
};

// Function MissionTrackerEntry.MissionTrackerEntry_C.ExecuteUbergraph_MissionTrackerEntry
struct UMissionTrackerEntry_C_ExecuteUbergraph_MissionTrackerEntry_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionTrackerEntry.MissionTrackerEntry_C.WidgetVisibilityChanged__DelegateSignature
struct UMissionTrackerEntry_C_WidgetVisibilityChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
