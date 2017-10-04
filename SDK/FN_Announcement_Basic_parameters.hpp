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

// Function Announcement_Basic.Announcement_Basic_C.UpdateWidgetData
struct UAnnouncement_Basic_C_UpdateWidgetData_Params
{
	class AFortClientAnnouncement**                    Announcement;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Announcement_Basic.Announcement_Basic_C.Construct
struct UAnnouncement_Basic_C_Construct_Params
{
};

// Function Announcement_Basic.Announcement_Basic_C.AnnouncementStopped
struct UAnnouncement_Basic_C_AnnouncementStopped_Params
{
	class AFortClientAnnouncement**                    Announcement;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Announcement_Basic.Announcement_Basic_C.ExecuteUbergraph_Announcement_Basic
struct UAnnouncement_Basic_C_ExecuteUbergraph_Announcement_Basic_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
