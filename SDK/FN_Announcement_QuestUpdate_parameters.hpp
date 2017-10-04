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

// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.UpdateWidgetData
struct UAnnouncement_QuestUpdate_C_UpdateWidgetData_Params
{
	class AFortClientAnnouncement**                    Announcement;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.AllUpdatesFinished
struct UAnnouncement_QuestUpdate_C_AllUpdatesFinished_Params
{
	class UQuestUpdateEntry_C*                         UpdateWidget;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.ExecuteUbergraph_Announcement_QuestUpdate
struct UAnnouncement_QuestUpdate_C_ExecuteUbergraph_Announcement_QuestUpdate_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
