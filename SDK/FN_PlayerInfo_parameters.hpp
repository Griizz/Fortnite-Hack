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

// Function PlayerInfo.PlayerInfo_C.UpdateLocalPlayerInfo
struct UPlayerInfo_C_UpdateLocalPlayerInfo_Params
{
	struct FFortTeamMemberInfo                         Player_Info;                                              // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function PlayerInfo.PlayerInfo_C.Construct
struct UPlayerInfo_C_Construct_Params
{
};

// Function PlayerInfo.PlayerInfo_C.HandlePlayerStateChanged
struct UPlayerInfo_C_HandlePlayerStateChanged_Params
{
	struct FFortTeamMemberInfo                         PlayerInfo;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function PlayerInfo.PlayerInfo_C.Destruct
struct UPlayerInfo_C_Destruct_Params
{
};

// Function PlayerInfo.PlayerInfo_C.ExecuteUbergraph_PlayerInfo
struct UPlayerInfo_C_ExecuteUbergraph_PlayerInfo_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
