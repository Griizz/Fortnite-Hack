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

// Function BP_LiveStreamerDescription.BP_LiveStreamerDescription_C.GetBroadcasterName
struct UBP_LiveStreamerDescription_C_GetBroadcasterName_Params
{
	struct FText                                       BroadcasterName;                                          // (CPF_Parm, CPF_OutParm)
};

// Function BP_LiveStreamerDescription.BP_LiveStreamerDescription_C.SetViewerQuestText
struct UBP_LiveStreamerDescription_C_SetViewerQuestText_Params
{
	struct FText                                       NewText;                                                  // (CPF_Parm)
};

// Function BP_LiveStreamerDescription.BP_LiveStreamerDescription_C.Update Viewer Note Visibility
struct UBP_LiveStreamerDescription_C_Update_Viewer_Note_Visibility_Params
{
};

// Function BP_LiveStreamerDescription.BP_LiveStreamerDescription_C.Setup Broadcaster Name
struct UBP_LiveStreamerDescription_C_Setup_Broadcaster_Name_Params
{
};

// Function BP_LiveStreamerDescription.BP_LiveStreamerDescription_C.Is Viewer Quest
struct UBP_LiveStreamerDescription_C_Is_Viewer_Quest_Params
{
	bool                                               ViewerQuest;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_LiveStreamerDescription.BP_LiveStreamerDescription_C.Update Visibility
struct UBP_LiveStreamerDescription_C_Update_Visibility_Params
{
	class UFortQuestItemDefinition*                    Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_LiveStreamerDescription.BP_LiveStreamerDescription_C.Set Quest
struct UBP_LiveStreamerDescription_C_Set_Quest_Params
{
	class UFortQuestItem*                              Quest;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
