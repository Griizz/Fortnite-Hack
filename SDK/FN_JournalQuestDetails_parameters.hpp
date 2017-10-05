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

// Function JournalQuestDetails.JournalQuestDetails_C.Get Streaming Attached Quest Name
struct UJournalQuestDetails_C_Get_Streaming_Attached_Quest_Name_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function JournalQuestDetails.JournalQuestDetails_C.Is Streaming Quest
struct UJournalQuestDetails_C_Is_Streaming_Quest_Params
{
	bool                                               bStreamingQuest;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function JournalQuestDetails.JournalQuestDetails_C.Get Quest Item Def
struct UJournalQuestDetails_C_Get_Quest_Item_Def_Params
{
	class UFortQuestItemDefinition*                    AsFort_Quest_Item_Definition;                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function JournalQuestDetails.JournalQuestDetails_C.Set Quest Display Name
struct UJournalQuestDetails_C_Set_Quest_Display_Name_Params
{
	struct FText                                       InText;                                                   // (CPF_Parm)
};

// Function JournalQuestDetails.JournalQuestDetails_C.IsQuestAudioPlaying
struct UJournalQuestDetails_C_IsQuestAudioPlaying_Params
{
	bool                                               IsQuestAudioPlaying;                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function JournalQuestDetails.JournalQuestDetails_C.StartConversation
struct UJournalQuestDetails_C_StartConversation_Params
{
	class UFortConversation*                           Conversation;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortQuestItem*                              QuestItem;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsOutro_;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function JournalQuestDetails.JournalQuestDetails_C.StopConversation
struct UJournalQuestDetails_C_StopConversation_Params
{
};

// Function JournalQuestDetails.JournalQuestDetails_C.AbandonQuest
struct UJournalQuestDetails_C_AbandonQuest_Params
{
	bool                                               questAbandoned_;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function JournalQuestDetails.JournalQuestDetails_C.UpdatePanelInfo
struct UJournalQuestDetails_C_UpdatePanelInfo_Params
{
};

// Function JournalQuestDetails.JournalQuestDetails_C.UpdatePlayButtonState
struct UJournalQuestDetails_C_UpdatePlayButtonState_Params
{
};

// Function JournalQuestDetails.JournalQuestDetails_C.UpdateButtonStates
struct UJournalQuestDetails_C_UpdateButtonStates_Params
{
};

// Function JournalQuestDetails.JournalQuestDetails_C.HandleOnEndSpokenDialog
struct UJournalQuestDetails_C_HandleOnEndSpokenDialog_Params
{
};

// Function JournalQuestDetails.JournalQuestDetails_C.HandleOnBeginSpokenDialog
struct UJournalQuestDetails_C_HandleOnBeginSpokenDialog_Params
{
	class UTexture2D*                                  Image;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Title;                                                    // (CPF_Parm)
	struct FText                                       Subtitle;                                                 // (CPF_Parm)
	EFortAnnouncementDisplayPreference                 DisplayPreference;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function JournalQuestDetails.JournalQuestDetails_C.Setup
struct UJournalQuestDetails_C_Setup_Params
{
};

// Function JournalQuestDetails.JournalQuestDetails_C.Construct
struct UJournalQuestDetails_C_Construct_Params
{
};

// Function JournalQuestDetails.JournalQuestDetails_C.HandleCurrentQuestChangedBP
struct UJournalQuestDetails_C_HandleCurrentQuestChangedBP_Params
{
};

// Function JournalQuestDetails.JournalQuestDetails_C.ExecuteUbergraph_JournalQuestDetails
struct UJournalQuestDetails_C_ExecuteUbergraph_JournalQuestDetails_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function JournalQuestDetails.JournalQuestDetails_C.OnSpokenDialogEnded__DelegateSignature
struct UJournalQuestDetails_C_OnSpokenDialogEnded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
