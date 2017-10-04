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

// Function TeamMicStack.TeamMicStack_C.ClearContents
struct UTeamMicStack_C_ClearContents_Params
{
};

// Function TeamMicStack.TeamMicStack_C.AppendTeamMember
struct UTeamMicStack_C_AppendTeamMember_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function TeamMicStack.TeamMicStack_C.ShiftTeamMembers
struct UTeamMicStack_C_ShiftTeamMembers_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TeamMicStack.TeamMicStack_C.HandleTeamMemberChanged
struct UTeamMicStack_C_HandleTeamMemberChanged_Params
{
	struct FFortTeamMemberInfo                         Member_Info;                                              // (CPF_Parm)
};

// Function TeamMicStack.TeamMicStack_C.HandleTeamMemberRemoved
struct UTeamMicStack_C_HandleTeamMemberRemoved_Params
{
	int                                                Member_Index;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TeamMicStack.TeamMicStack_C.Construct
struct UTeamMicStack_C_Construct_Params
{
};

// Function TeamMicStack.TeamMicStack_C.HandlePartyLeft
struct UTeamMicStack_C_HandlePartyLeft_Params
{
};

// Function TeamMicStack.TeamMicStack_C.ExecuteUbergraph_TeamMicStack
struct UTeamMicStack_C_ExecuteUbergraph_TeamMicStack_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
