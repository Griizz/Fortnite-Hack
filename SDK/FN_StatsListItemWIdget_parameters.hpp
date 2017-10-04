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

// Function StatsListItemWIdget.StatsListItemWIdget_C.GetListItemTooltipWidget
struct UStatsListItemWIdget_C_GetListItemTooltipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.SetStatIcon
struct UStatsListItemWIdget_C_SetStatIcon_Params
{
	struct FSlateBrush                                 NewParam;                                                 // (CPF_Parm)
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateBuffArrows
struct UStatsListItemWIdget_C_UpdateBuffArrows_Params
{
	struct FFortDisplayAttribute                       CurrentAttribute;                                         // (CPF_Parm)
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateBasicPairLabel
struct UStatsListItemWIdget_C_UpdateBasicPairLabel_Params
{
	struct FFortDisplayAttribute                       CurrentAttribute;                                         // (CPF_Parm)
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateValueText
struct UStatsListItemWIdget_C_UpdateValueText_Params
{
	struct FFortDisplayAttribute                       CurrentAttribute;                                         // (CPF_Parm)
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateType
struct UStatsListItemWIdget_C_UpdateType_Params
{
	struct FFortDisplayAttribute                       CurrentAttribute;                                         // (CPF_Parm)
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateColors
struct UStatsListItemWIdget_C_UpdateColors_Params
{
	struct FFortDisplayAttribute                       CurrentAttribute;                                         // (CPF_Parm)
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.Update
struct UStatsListItemWIdget_C_Update_Params
{
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.DisplayAttributeChanged
struct UStatsListItemWIdget_C_DisplayAttributeChanged_Params
{
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.PreviewStarted
struct UStatsListItemWIdget_C_PreviewStarted_Params
{
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.PreviewEnded
struct UStatsListItemWIdget_C_PreviewEnded_Params
{
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.ValueChanged
struct UStatsListItemWIdget_C_ValueChanged_Params
{
	float*                                             Delta;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.Construct
struct UStatsListItemWIdget_C_Construct_Params
{
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.ExecuteUbergraph_StatsListItemWIdget
struct UStatsListItemWIdget_C_ExecuteUbergraph_StatsListItemWIdget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
