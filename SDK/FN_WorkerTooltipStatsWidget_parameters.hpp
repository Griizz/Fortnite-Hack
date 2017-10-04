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

// Function WorkerTooltipStatsWidget.WorkerTooltipStatsWidget_C.Construct
struct UWorkerTooltipStatsWidget_C_Construct_Params
{
};

// Function WorkerTooltipStatsWidget.WorkerTooltipStatsWidget_C.Tick
struct UWorkerTooltipStatsWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WorkerTooltipStatsWidget.WorkerTooltipStatsWidget_C.On Worker Preview State Changed
struct UWorkerTooltipStatsWidget_C_On_Worker_Preview_State_Changed_Params
{
};

// Function WorkerTooltipStatsWidget.WorkerTooltipStatsWidget_C.ExecuteUbergraph_WorkerTooltipStatsWidget
struct UWorkerTooltipStatsWidget_C_ExecuteUbergraph_WorkerTooltipStatsWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
