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

// Function QuestUpdatesLog.QuestUpdatesLog_C.CanDisplayAnotherObjective
struct UQuestUpdatesLog_C_CanDisplayAnotherObjective_Params
{
	bool                                               Result;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestUpdatesLog.QuestUpdatesLog_C.GetTotalDisplayedObjectives
struct UQuestUpdatesLog_C_GetTotalDisplayedObjectives_Params
{
	int                                                NumObjectives;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestUpdatesLog.QuestUpdatesLog_C.CreateAnnouncementUpdate
struct UQuestUpdatesLog_C_CreateAnnouncementUpdate_Params
{
	struct FDynamicQuestUpdateInfo                     UpdateInfo;                                               // (CPF_Parm)
};

// Function QuestUpdatesLog.QuestUpdatesLog_C.HandleQuestUpdateWidgetFinished
struct UQuestUpdatesLog_C_HandleQuestUpdateWidgetFinished_Params
{
	class UQuestUpdateEntry_C*                         UpdateWidget;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestUpdatesLog.QuestUpdatesLog_C.GetAvailableQuestUpdateWidget
struct UQuestUpdatesLog_C_GetAvailableQuestUpdateWidget_Params
{
	struct FDynamicQuestUpdateInfo                     UpdateInfo;                                               // (CPF_Parm)
	class UQuestUpdateEntry_C*                         AvailableWIdget;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestUpdatesLog.QuestUpdatesLog_C.TryDisplayDynamicQuestStatusUpdate
struct UQuestUpdatesLog_C_TryDisplayDynamicQuestStatusUpdate_Params
{
};

// Function QuestUpdatesLog.QuestUpdatesLog_C.CreateQuestUpdateWIdgets
struct UQuestUpdatesLog_C_CreateQuestUpdateWIdgets_Params
{
};

// Function QuestUpdatesLog.QuestUpdatesLog_C.HandleDisplayDynamicQuestUpdate
struct UQuestUpdatesLog_C_HandleDisplayDynamicQuestUpdate_Params
{
	class UFortQuestObjectiveInfo*                     QuestObjective;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDisplayStatusUpdate;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDisplayAnnouncementUpdate;                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestUpdatesLog.QuestUpdatesLog_C.Construct
struct UQuestUpdatesLog_C_Construct_Params
{
};

// Function QuestUpdatesLog.QuestUpdatesLog_C.ExecuteUbergraph_QuestUpdatesLog
struct UQuestUpdatesLog_C_ExecuteUbergraph_QuestUpdatesLog_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
