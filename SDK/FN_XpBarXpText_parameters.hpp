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

// Function XpBarXpText.XpBarXpText_C.Get Skill Points For Next Level
struct UXpBarXpText_C_Get_Skill_Points_For_Next_Level_Params
{
	int                                                Next_Level_Skill_Points;                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function XpBarXpText.XpBarXpText_C.Update Xp Text
struct UXpBarXpText_C_Update_Xp_Text_Params
{
	struct FFortPublicAccountInfo                      Account_Info;                                             // (CPF_Parm)
};

// Function XpBarXpText.XpBarXpText_C.Construct
struct UXpBarXpText_C_Construct_Params
{
};

// Function XpBarXpText.XpBarXpText_C.HandleAccountUpdate
struct UXpBarXpText_C_HandleAccountUpdate_Params
{
	struct FFortPublicAccountInfo                      NewInfo;                                                  // (CPF_Parm)
};

// Function XpBarXpText.XpBarXpText_C.ExecuteUbergraph_XpBarXpText
struct UXpBarXpText_C_ExecuteUbergraph_XpBarXpText_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
