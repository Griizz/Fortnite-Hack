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

// Function SquadStatsWidget.SquadStatsWidget_C.HighlightStat
struct USquadStatsWidget_C_HighlightStat_Params
{
	int                                                inStatIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SquadStatsWidget.SquadStatsWidget_C.RefreshScroll
struct USquadStatsWidget_C_RefreshScroll_Params
{
};

// Function SquadStatsWidget.SquadStatsWidget_C.UnbindDelegates
struct USquadStatsWidget_C_UnbindDelegates_Params
{
};

// Function SquadStatsWidget.SquadStatsWidget_C.ToggleBetweenStats
struct USquadStatsWidget_C_ToggleBetweenStats_Params
{
};

// Function SquadStatsWidget.SquadStatsWidget_C.HandlePlayerStateChanged
struct USquadStatsWidget_C_HandlePlayerStateChanged_Params
{
	struct FFortTeamMemberInfo                         PlayerState;                                              // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function SquadStatsWidget.SquadStatsWidget_C.HandlePlayerInfoChanged
struct USquadStatsWidget_C_HandlePlayerInfoChanged_Params
{
	struct FUniqueNetIdRepl                            PlayerID;                                                 // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function SquadStatsWidget.SquadStatsWidget_C.BindDelegates
struct USquadStatsWidget_C_BindDelegates_Params
{
};

// Function SquadStatsWidget.SquadStatsWidget_C.InitCoreStatsWidgetArray
struct USquadStatsWidget_C_InitCoreStatsWidgetArray_Params
{
};

// Function SquadStatsWidget.SquadStatsWidget_C.Construct
struct USquadStatsWidget_C_Construct_Params
{
};

// Function SquadStatsWidget.SquadStatsWidget_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature
struct USquadStatsWidget_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SquadStatsWidget.SquadStatsWidget_C.BndEvt__CloseDetailedStats_K2Node_ComponentBoundEvent_119_CommonButtonClicked__DelegateSignature
struct USquadStatsWidget_C_BndEvt__CloseDetailedStats_K2Node_ComponentBoundEvent_119_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SquadStatsWidget.SquadStatsWidget_C.Destruct
struct USquadStatsWidget_C_Destruct_Params
{
};

// Function SquadStatsWidget.SquadStatsWidget_C.HandleSquadSlottingPreviewStateChanged
struct USquadStatsWidget_C_HandleSquadSlottingPreviewStateChanged_Params
{
};

// Function SquadStatsWidget.SquadStatsWidget_C.ExecuteUbergraph_SquadStatsWidget
struct USquadStatsWidget_C_ExecuteUbergraph_SquadStatsWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SquadStatsWidget.SquadStatsWidget_C.DetailedStatsClosed__DelegateSignature
struct USquadStatsWidget_C_DetailedStatsClosed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
