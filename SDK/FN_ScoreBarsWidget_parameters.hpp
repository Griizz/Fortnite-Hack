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

// Function ScoreBarsWidget.ScoreBarsWidget_C.UnregisterForScoreStreamEvents
struct UScoreBarsWidget_C_UnregisterForScoreStreamEvents_Params
{
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleScoreNumberChanged
struct UScoreBarsWidget_C_HandleScoreNumberChanged_Params
{
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleMessageDisplayed
struct UScoreBarsWidget_C_HandleMessageDisplayed_Params
{
	class UFortUIMessageItemWidget*                    ItemWidget;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.HideScoreMessageSlots
struct UScoreBarsWidget_C_HideScoreMessageSlots_Params
{
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.RegisterForScoreStreamEvents
struct UScoreBarsWidget_C_RegisterForScoreStreamEvents_Params
{
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleScoreMessageExpired
struct UScoreBarsWidget_C_HandleScoreMessageExpired_Params
{
	class UFortUIMessageItemWidget*                    Expired_Message;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.TryGetNextScoreMessage
struct UScoreBarsWidget_C_TryGetNextScoreMessage_Params
{
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleScoreStatChanged
struct UScoreBarsWidget_C_HandleScoreStatChanged_Params
{
	int                                                Delta;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Name;                                                     // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	TEnumAsByte<EFortReplicatedStat>                   StatType;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.InitializeIcons
struct UScoreBarsWidget_C_InitializeIcons_Params
{
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.UpdateScoreBars
struct UScoreBarsWidget_C_UpdateScoreBars_Params
{
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleUpdateUI
struct UScoreBarsWidget_C_HandleUpdateUI_Params
{
	class AFortMissionState*                           Mission;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.UpdateScoreTotals
struct UScoreBarsWidget_C_UpdateScoreTotals_Params
{
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.HasValidBadgeInfos
struct UScoreBarsWidget_C_HasValidBadgeInfos_Params
{
	bool                                               bHasValidBadgeInfos;                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.InitializeScoreBars
struct UScoreBarsWidget_C_InitializeScoreBars_Params
{
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleMissionsUpdated
struct UScoreBarsWidget_C_HandleMissionsUpdated_Params
{
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.Construct
struct UScoreBarsWidget_C_Construct_Params
{
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.Destruct
struct UScoreBarsWidget_C_Destruct_Params
{
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.ExecuteUbergraph_ScoreBarsWidget
struct UScoreBarsWidget_C_ExecuteUbergraph_ScoreBarsWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
