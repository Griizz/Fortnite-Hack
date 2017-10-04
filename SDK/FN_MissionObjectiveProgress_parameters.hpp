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

// Function MissionObjectiveProgress.MissionObjectiveProgress_C.GetHeightEstimate
struct UMissionObjectiveProgress_C_GetHeightEstimate_Params
{
	float                                              Height;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionObjectiveProgress.MissionObjectiveProgress_C.Update
struct UMissionObjectiveProgress_C_Update_Params
{
	class AFortObjectiveBase*                          Objective;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BarIndex;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionObjectiveProgress.MissionObjectiveProgress_C.Construct
struct UMissionObjectiveProgress_C_Construct_Params
{
};

// Function MissionObjectiveProgress.MissionObjectiveProgress_C.ExecuteUbergraph_MissionObjectiveProgress
struct UMissionObjectiveProgress_C_ExecuteUbergraph_MissionObjectiveProgress_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
