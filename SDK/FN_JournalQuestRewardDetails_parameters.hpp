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

// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdatePanelInfo
struct UJournalQuestRewardDetails_C_UpdatePanelInfo_Params
{
};

// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdatePlayButtonState
struct UJournalQuestRewardDetails_C_UpdatePlayButtonState_Params
{
};

// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdateButtonStates
struct UJournalQuestRewardDetails_C_UpdateButtonStates_Params
{
};

// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.HandleOnEndSpokenDialog
struct UJournalQuestRewardDetails_C_HandleOnEndSpokenDialog_Params
{
};

// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.HandleOnBeginSpokenDialog
struct UJournalQuestRewardDetails_C_HandleOnBeginSpokenDialog_Params
{
	class UTexture2D*                                  Image;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Title;                                                    // (CPF_Parm)
	struct FText                                       Subtitle;                                                 // (CPF_Parm)
	EFortAnnouncementDisplayPreference                 DisplayPreference;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.Setup
struct UJournalQuestRewardDetails_C_Setup_Params
{
};

// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.Construct
struct UJournalQuestRewardDetails_C_Construct_Params
{
};

// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.HandleCurrentQuestChangedBP
struct UJournalQuestRewardDetails_C_HandleCurrentQuestChangedBP_Params
{
};

// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.ExecuteUbergraph_JournalQuestRewardDetails
struct UJournalQuestRewardDetails_C_ExecuteUbergraph_JournalQuestRewardDetails_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
