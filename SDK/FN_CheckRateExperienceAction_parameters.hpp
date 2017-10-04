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

// Function CheckRateExperienceAction.CheckRateExperienceAction_C.UserConstructionScript
struct ACheckRateExperienceAction_C_UserConstructionScript_Params
{
};

// Function CheckRateExperienceAction.CheckRateExperienceAction_C.HandleClientEvent_FinishedModalQueue
struct ACheckRateExperienceAction_C_HandleClientEvent_FinishedModalQueue_Params
{
	class UObject*                                     EventSource;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function CheckRateExperienceAction.CheckRateExperienceAction_C.Execute
struct ACheckRateExperienceAction_C_Execute_Params
{
	struct FFortScriptedActionParams*                  Params;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function CheckRateExperienceAction.CheckRateExperienceAction_C.ExecuteUbergraph_CheckRateExperienceAction
struct ACheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
