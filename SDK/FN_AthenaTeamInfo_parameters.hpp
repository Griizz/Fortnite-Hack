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

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamMemberRemoved
struct UAthenaTeamInfo_C_HandleTeamMemberRemoved_Params
{
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamRevivingChanged
struct UAthenaTeamInfo_C_HandleTeamRevivingChanged_Params
{
	TArray<bool>                                       TeamReviving;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamMemberPlayerNamesChanged
struct UAthenaTeamInfo_C_HandleTeamMemberPlayerNamesChanged_Params
{
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamDeadChanged
struct UAthenaTeamInfo_C_HandleTeamDeadChanged_Params
{
	TArray<bool>                                       TeamDead;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamDBNOChanged
struct UAthenaTeamInfo_C_HandleTeamDBNOChanged_Params
{
	TArray<bool>                                       TeamDBNO;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamMemberAdded
struct UAthenaTeamInfo_C_HandleTeamMemberAdded_Params
{
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamHitInfoChanged
struct UAthenaTeamInfo_C_HandleTeamHitInfoChanged_Params
{
	TArray<float>                                      HealthFractions;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<float>                                      ShieldFractions;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.ClearContents
struct UAthenaTeamInfo_C_ClearContents_Params
{
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.AppendTeamMember
struct UAthenaTeamInfo_C_AppendTeamMember_Params
{
	class AFortPlayerStateAthena*                      PlayerState;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.Construct
struct UAthenaTeamInfo_C_Construct_Params
{
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandlePartyLeft
struct UAthenaTeamInfo_C_HandlePartyLeft_Params
{
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.PreConstruct
struct UAthenaTeamInfo_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.ExecuteUbergraph_AthenaTeamInfo
struct UAthenaTeamInfo_C_ExecuteUbergraph_AthenaTeamInfo_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
