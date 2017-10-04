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

// Function DeathWidget.DeathWidget_C.ShowExtraLivesText
struct UDeathWidget_C_ShowExtraLivesText_Params
{
};

// Function DeathWidget.DeathWidget_C.SetRespawnTimerText
struct UDeathWidget_C_SetRespawnTimerText_Params
{
};

// Function DeathWidget.DeathWidget_C.OnRespawnTimerUpdate
struct UDeathWidget_C_OnRespawnTimerUpdate_Params
{
};

// Function DeathWidget.DeathWidget_C.ConfigureRespawnTimer
struct UDeathWidget_C_ConfigureRespawnTimer_Params
{
	float                                              ServerRespawnTime;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ServerResurrectTime;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DeathWidget.DeathWidget_C.OnPawnDied
struct UDeathWidget_C_OnPawnDied_Params
{
	struct FFortPlayerDeathReport                      DeathReport;                                              // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function DeathWidget.DeathWidget_C.OnPawnSpawned
struct UDeathWidget_C_OnPawnSpawned_Params
{
};

// Function DeathWidget.DeathWidget_C.Construct
struct UDeathWidget_C_Construct_Params
{
};

// Function DeathWidget.DeathWidget_C.ExecuteUbergraph_DeathWidget
struct UDeathWidget_C_ExecuteUbergraph_DeathWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
