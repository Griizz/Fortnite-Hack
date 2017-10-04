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

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ShowPlayerInfo
struct UAthenaTeamMemberInfo_C_ShowPlayerInfo_Params
{
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ShowConnecting
struct UAthenaTeamMemberInfo_C_ShowConnecting_Params
{
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetReviving
struct UAthenaTeamMemberInfo_C_SetReviving_Params
{
	bool                                               Reviving;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdatePlayerName
struct UAthenaTeamMemberInfo_C_UpdatePlayerName_Params
{
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDBNO
struct UAthenaTeamMemberInfo_C_SetDBNO_Params
{
	bool                                               DBNO;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDead
struct UAthenaTeamMemberInfo_C_SetDead_Params
{
	bool                                               Dead;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdatePS
struct UAthenaTeamMemberInfo_C_UpdatePS_Params
{
	class AFortPlayerStateAthena*                      InPlayerState;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetShield
struct UAthenaTeamMemberInfo_C_SetShield_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetHealth
struct UAthenaTeamMemberInfo_C_SetHealth_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.Construct
struct UAthenaTeamMemberInfo_C_Construct_Params
{
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ExecuteUbergraph_AthenaTeamMemberInfo
struct UAthenaTeamMemberInfo_C_ExecuteUbergraph_AthenaTeamMemberInfo_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
