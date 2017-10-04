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

// Function SurvivorRescuedCounter.SurvivorRescuedCounter_C.UpdateSurvivorsRescued
struct USurvivorRescuedCounter_C_UpdateSurvivorsRescued_Params
{
	int                                                SurvivorsRescued;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SurvivorRescuedCounter.SurvivorRescuedCounter_C.Construct
struct USurvivorRescuedCounter_C_Construct_Params
{
};

// Function SurvivorRescuedCounter.SurvivorRescuedCounter_C.ExecuteUbergraph_SurvivorRescuedCounter
struct USurvivorRescuedCounter_C_ExecuteUbergraph_SurvivorRescuedCounter_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
