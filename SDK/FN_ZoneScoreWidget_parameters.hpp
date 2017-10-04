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

// Function ZoneScoreWidget.ZoneScoreWidget_C.ShowTeamScoreContributions
struct UZoneScoreWidget_C_ShowTeamScoreContributions_Params
{
};

// Function ZoneScoreWidget.ZoneScoreWidget_C.ShowXPReward
struct UZoneScoreWidget_C_ShowXPReward_Params
{
};

// Function ZoneScoreWidget.ZoneScoreWidget_C.UpdateXPLERP
struct UZoneScoreWidget_C_UpdateXPLERP_Params
{
	float                                              LERP_Factor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ZoneScoreWidget.ZoneScoreWidget_C.BeginTweeningXP
struct UZoneScoreWidget_C_BeginTweeningXP_Params
{
};

// Function ZoneScoreWidget.ZoneScoreWidget_C.UpdateScoresLERP
struct UZoneScoreWidget_C_UpdateScoresLERP_Params
{
	float                                              LERP_Factor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ZoneScoreWidget.ZoneScoreWidget_C.BeginTweeningScores
struct UZoneScoreWidget_C_BeginTweeningScores_Params
{
};

// Function ZoneScoreWidget.ZoneScoreWidget_C.StartEndOfDayRecapAfterAnimation
struct UZoneScoreWidget_C_StartEndOfDayRecapAfterAnimation_Params
{
};

// Function ZoneScoreWidget.ZoneScoreWidget_C.OnXPTweenEndEvent
struct UZoneScoreWidget_C_OnXPTweenEndEvent_Params
{
};

// Function ZoneScoreWidget.ZoneScoreWidget_C.OnScoreTweenEndEvent
struct UZoneScoreWidget_C_OnScoreTweenEndEvent_Params
{
};

// Function ZoneScoreWidget.ZoneScoreWidget_C.Construct
struct UZoneScoreWidget_C_Construct_Params
{
};

// Function ZoneScoreWidget.ZoneScoreWidget_C.Tick
struct UZoneScoreWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ZoneScoreWidget.ZoneScoreWidget_C.OnEndOfDayRecap
struct UZoneScoreWidget_C_OnEndOfDayRecap_Params
{
	struct FEndOfDayRecap                              EndOfDayRecap;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function ZoneScoreWidget.ZoneScoreWidget_C.ExecuteUbergraph_ZoneScoreWidget
struct UZoneScoreWidget_C_ExecuteUbergraph_ZoneScoreWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ZoneScoreWidget.ZoneScoreWidget_C.OnEndOfDayRecapEnded__DelegateSignature
struct UZoneScoreWidget_C_OnEndOfDayRecapEnded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
