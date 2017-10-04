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

// Function QuestInfo_Widget.QuestInfo_Widget_C.SetQuestText
struct UQuestInfo_Widget_C_SetQuestText_Params
{
};

// Function QuestInfo_Widget.QuestInfo_Widget_C.SetQuestIcon
struct UQuestInfo_Widget_C_SetQuestIcon_Params
{
};

// Function QuestInfo_Widget.QuestInfo_Widget_C.PopulateRewards
struct UQuestInfo_Widget_C_PopulateRewards_Params
{
};

// Function QuestInfo_Widget.QuestInfo_Widget_C.PopulateObjectives
struct UQuestInfo_Widget_C_PopulateObjectives_Params
{
};

// Function QuestInfo_Widget.QuestInfo_Widget_C.Reset
struct UQuestInfo_Widget_C_Reset_Params
{
};

// Function QuestInfo_Widget.QuestInfo_Widget_C.InitDesignView
struct UQuestInfo_Widget_C_InitDesignView_Params
{
};

// Function QuestInfo_Widget.QuestInfo_Widget_C.PopulateFromQuest
struct UQuestInfo_Widget_C_PopulateFromQuest_Params
{
	class UFortQuestItem*                              InQuest;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function QuestInfo_Widget.QuestInfo_Widget_C.Construct
struct UQuestInfo_Widget_C_Construct_Params
{
};

// Function QuestInfo_Widget.QuestInfo_Widget_C.PreConstruct
struct UQuestInfo_Widget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestInfo_Widget.QuestInfo_Widget_C.ExecuteUbergraph_QuestInfo_Widget
struct UQuestInfo_Widget_C_ExecuteUbergraph_QuestInfo_Widget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
