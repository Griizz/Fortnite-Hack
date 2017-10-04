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

// Function QuestUpdateEntry.QuestUpdateEntry_C.GetNumDisplayedObjectives
struct UQuestUpdateEntry_C_GetNumDisplayedObjectives_Params
{
	int                                                NumObjectives;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.CreateObjectiveEntryWidget
struct UQuestUpdateEntry_C_CreateObjectiveEntryWidget_Params
{
	class UFortQuestObjectiveInfo*                     Objective;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LastAchievedCount;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.OnDisappearAnimationFinished
struct UQuestUpdateEntry_C_OnDisappearAnimationFinished_Params
{
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.OnPostUpdatesDelayFinished
struct UQuestUpdateEntry_C_OnPostUpdatesDelayFinished_Params
{
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.HaveAllUpdatesFinished
struct UQuestUpdateEntry_C_HaveAllUpdatesFinished_Params
{
	bool                                               Result;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.IsUpdateActive
struct UQuestUpdateEntry_C_IsUpdateActive_Params
{
	struct FDynamicQuestUpdateInfo                     Update;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               Result;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.GetObjectiveWidget
struct UQuestUpdateEntry_C_GetObjectiveWidget_Params
{
	class UFortQuestObjectiveInfo*                     QuestObjective;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UQuestObjectiveEntry_C*                      ObjectiveWidget;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.HasUpdateStarted
struct UQuestUpdateEntry_C_HasUpdateStarted_Params
{
	struct FDynamicQuestUpdateInfo                     Update;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               Result;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.OnUpdateFinished
struct UQuestUpdateEntry_C_OnUpdateFinished_Params
{
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.HasUpdateFinished
struct UQuestUpdateEntry_C_HasUpdateFinished_Params
{
	struct FDynamicQuestUpdateInfo                     Update;                                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               Result;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.CanStartUpdate
struct UQuestUpdateEntry_C_CanStartUpdate_Params
{
	int                                                UpdateIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Result;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.TryStartUpdates
struct UQuestUpdateEntry_C_TryStartUpdates_Params
{
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.OnAppearAnimationFinished
struct UQuestUpdateEntry_C_OnAppearAnimationFinished_Params
{
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.CanAddUpdate
struct UQuestUpdateEntry_C_CanAddUpdate_Params
{
	struct FDynamicQuestUpdateInfo                     UpdateToAdd;                                              // (CPF_Parm)
	bool                                               Result;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.OnReceiveQuestUpdate
struct UQuestUpdateEntry_C_OnReceiveQuestUpdate_Params
{
	struct FDynamicQuestUpdateInfo                     QuestUpdateInfo;                                          // (CPF_Parm)
	bool                                               Success;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.Tick
struct UQuestUpdateEntry_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.Construct
struct UQuestUpdateEntry_C_Construct_Params
{
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.ExecuteUbergraph_QuestUpdateEntry
struct UQuestUpdateEntry_C_ExecuteUbergraph_QuestUpdateEntry_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.AllQuestUpdatesFinished__DelegateSignature
struct UQuestUpdateEntry_C_AllQuestUpdatesFinished__DelegateSignature_Params
{
	class UQuestUpdateEntry_C*                         UpdateWidget;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
