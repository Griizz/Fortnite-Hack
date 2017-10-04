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

// Function AthenaPlayerInfo.AthenaPlayerInfo_C.UpdateLocalPlayerInfo
struct UAthenaPlayerInfo_C_UpdateLocalPlayerInfo_Params
{
	struct FFortTeamMemberInfo                         Player_Info;                                              // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function AthenaPlayerInfo.AthenaPlayerInfo_C.Construct
struct UAthenaPlayerInfo_C_Construct_Params
{
};

// Function AthenaPlayerInfo.AthenaPlayerInfo_C.HandlePlayerStateChanged
struct UAthenaPlayerInfo_C_HandlePlayerStateChanged_Params
{
	struct FFortTeamMemberInfo                         PlayerInfo;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function AthenaPlayerInfo.AthenaPlayerInfo_C.Destruct
struct UAthenaPlayerInfo_C_Destruct_Params
{
};

// Function AthenaPlayerInfo.AthenaPlayerInfo_C.ExecuteUbergraph_AthenaPlayerInfo
struct UAthenaPlayerInfo_C_ExecuteUbergraph_AthenaPlayerInfo_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
