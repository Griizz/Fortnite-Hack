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

// Function Announcement_Layout.Announcement_Layout_C.CreateAnnouncementWidget
struct UAnnouncement_Layout_C_CreateAnnouncementWidget_Params
{
	class UClass*                                      NewWidgetClass;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ForceCreateUI;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortAnnouncementWidget*                     NewWidget;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Announcement_Layout.Announcement_Layout_C.SwapAnnouncementUIContent
struct UAnnouncement_Layout_C_SwapAnnouncementUIContent_Params
{
	class AFortClientAnnouncement*                     NewAnnouncement;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Announcement_Layout.Announcement_Layout_C.Construct
struct UAnnouncement_Layout_C_Construct_Params
{
};

// Function Announcement_Layout.Announcement_Layout_C.OnStartNewAnnouncement
struct UAnnouncement_Layout_C_OnStartNewAnnouncement_Params
{
	class AFortClientAnnouncement*                     NewAnnouncement;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Announcement_Layout.Announcement_Layout_C.ExecuteUbergraph_Announcement_Layout
struct UAnnouncement_Layout_C_ExecuteUbergraph_Announcement_Layout_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
