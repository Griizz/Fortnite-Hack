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

// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Play Anim Intro
struct UResults_TeleportPadPlayerTop_C_Play_Anim_Intro_Params
{
};

// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Initialize
struct UResults_TeleportPadPlayerTop_C_Initialize_Params
{
	struct FUniqueNetIdRepl                            UniqueNetID;                                              // (CPF_Parm)
	class UFortUIScoreReport*                          ScoreReport;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ScoreReportIndex;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.IntroName
struct UResults_TeleportPadPlayerTop_C_IntroName_Params
{
};

// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.PreConstruct
struct UResults_TeleportPadPlayerTop_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Intro
struct UResults_TeleportPadPlayerTop_C_Intro_Params
{
};

// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.ExecuteUbergraph_Results_TeleportPadPlayerTop
struct UResults_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
