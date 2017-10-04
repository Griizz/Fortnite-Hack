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

// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.UpdateWidgetData
struct UAnnouncement_ZoneModifiers_C_UpdateWidgetData_Params
{
	class AFortClientAnnouncement**                    Announcement;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.OnDisplayTimerFinished
struct UAnnouncement_ZoneModifiers_C_OnDisplayTimerFinished_Params
{
};

// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.OnConversationDelayFinished
struct UAnnouncement_ZoneModifiers_C_OnConversationDelayFinished_Params
{
};

// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.WidgetCachingHack
struct UAnnouncement_ZoneModifiers_C_WidgetCachingHack_Params
{
};

// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.ExecuteUbergraph_Announcement_ZoneModifiers
struct UAnnouncement_ZoneModifiers_C_ExecuteUbergraph_Announcement_ZoneModifiers_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
