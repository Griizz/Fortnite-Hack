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

// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.On Team Reviving Changed
struct UAthenaTeamMemberIndicator_C_On_Team_Reviving_Changed_Params
{
	TArray<unsigned char>                              Team_Reviving;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.On Team DBNO Changed
struct UAthenaTeamMemberIndicator_C_On_Team_DBNO_Changed_Params
{
	TArray<unsigned char>                              DBNOStates;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Construct
struct UAthenaTeamMemberIndicator_C_Construct_Params
{
};

// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Tick
struct UAthenaTeamMemberIndicator_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Destruct
struct UAthenaTeamMemberIndicator_C_Destruct_Params
{
};

// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Update Pawn
struct UAthenaTeamMemberIndicator_C_Update_Pawn_Params
{
};

// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.ExecuteUbergraph_AthenaTeamMemberIndicator
struct UAthenaTeamMemberIndicator_C_ExecuteUbergraph_AthenaTeamMemberIndicator_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
