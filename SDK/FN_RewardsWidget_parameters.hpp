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

// Function RewardsWidget.RewardsWidget_C.OnHandleAction
struct URewardsWidget_C_OnHandleAction_Params
{
	struct FEventReply                                 Result;                                                   // (CPF_Parm, CPF_OutParm)
	bool                                               bPassThrough;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RewardsWidget.RewardsWidget_C.On_ClosedChest_MouseButtonDown_2
struct URewardsWidget_C_On_ClosedChest_MouseButtonDown_2_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function RewardsWidget.RewardsWidget_C.GetClosedChestImage
struct URewardsWidget_C_GetClosedChestImage_Params
{
	class UTexture2D*                                  ChestImage;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RewardsWidget.RewardsWidget_C.TerminateQuestConverstation
struct URewardsWidget_C_TerminateQuestConverstation_Params
{
};

// Function RewardsWidget.RewardsWidget_C.Init
struct URewardsWidget_C_Init_Params
{
};

// Function RewardsWidget.RewardsWidget_C.SetupQuestRewardsChoice
struct URewardsWidget_C_SetupQuestRewardsChoice_Params
{
	class UFortQuestItem*                              Quest;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RewardsWidget.RewardsWidget_C.CreateRewardChoice
struct URewardsWidget_C_CreateRewardChoice_Params
{
	TArray<struct FFortItemInstanceQuantityPair>       Rewards;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	int                                                RewardIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsRewardSelection;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RewardsWidget.RewardsWidget_C.SelectRewards
struct URewardsWidget_C_SelectRewards_Params
{
	int                                                RewardIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RewardsWidget.RewardsWidget_C.PlayQuestConversation
struct URewardsWidget_C_PlayQuestConversation_Params
{
	class UFortConversation*                           Conversation;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RewardsWidget.RewardsWidget_C.OnConversationEnded
struct URewardsWidget_C_OnConversationEnded_Params
{
};

// Function RewardsWidget.RewardsWidget_C.GetChestImage
struct URewardsWidget_C_GetChestImage_Params
{
	class UTexture2D*                                  MissionIcon;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RewardsWidget.RewardsWidget_C.SelectText
struct URewardsWidget_C_SelectText_Params
{
	struct FText                                       InText;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FText                                       Default;                                                  // (CPF_Parm)
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function RewardsWidget.RewardsWidget_C.PopulateFromMissionWithRewards
struct URewardsWidget_C_PopulateFromMissionWithRewards_Params
{
	struct FFortLastMissionInfo                        LastMissionInfo;                                          // (CPF_Parm)
	TArray<struct FFortItemInstanceQuantityPair>       MissionRewards;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function RewardsWidget.RewardsWidget_C.PopulateMissionUI
struct URewardsWidget_C_PopulateMissionUI_Params
{
	struct FFortLastMissionInfo                        Mission;                                                  // (CPF_Parm)
};

// Function RewardsWidget.RewardsWidget_C.SetupUI
struct URewardsWidget_C_SetupUI_Params
{
	TEnumAsByte<ERewardType>                           RewardType;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RewardsWidget.RewardsWidget_C.PopulateFromQuestWithRewards
struct URewardsWidget_C_PopulateFromQuestWithRewards_Params
{
	class UFortQuestItem*                              Quest;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FFortItemInstanceQuantityPair>       Rewards;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function RewardsWidget.RewardsWidget_C.PopulateQuestUI
struct URewardsWidget_C_PopulateQuestUI_Params
{
	class UFortQuestItem*                              Quest;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               RewardSelect;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RewardsWidget.RewardsWidget_C.PopulateFromQuest
struct URewardsWidget_C_PopulateFromQuest_Params
{
	class UFortQuestItem*                              Quest;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RewardsWidget.RewardsWidget_C.BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_377_FortBaseButtonClicked__DelegateSignature
struct URewardsWidget_C_BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_377_FortBaseButtonClicked__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RewardsWidget.RewardsWidget_C.Destruct
struct URewardsWidget_C_Destruct_Params
{
};

// Function RewardsWidget.RewardsWidget_C.BndEvt__ButtonIconText_C_0_K2Node_ComponentBoundEvent_70_FortBaseButtonClicked__DelegateSignature
struct URewardsWidget_C_BndEvt__ButtonIconText_C_0_K2Node_ComponentBoundEvent_70_FortBaseButtonClicked__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RewardsWidget.RewardsWidget_C.SetQuest
struct URewardsWidget_C_SetQuest_Params
{
	class UFortQuestItem**                             Quest;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RewardsWidget.RewardsWidget_C.Construct
struct URewardsWidget_C_Construct_Params
{
};

// Function RewardsWidget.RewardsWidget_C.HandleClientEvent_ConversationFinished
struct URewardsWidget_C_HandleClientEvent_ConversationFinished_Params
{
	class UObject*                                     EventSource;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function RewardsWidget.RewardsWidget_C.BndEvt__OpenChestButton_K2Node_ComponentBoundEvent_234_FortBaseButtonClicked__DelegateSignature
struct URewardsWidget_C_BndEvt__OpenChestButton_K2Node_ComponentBoundEvent_234_FortBaseButtonClicked__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RewardsWidget.RewardsWidget_C.HandleImageClickedEvent
struct URewardsWidget_C_HandleImageClickedEvent_Params
{
};

// Function RewardsWidget.RewardsWidget_C.HandleSkipOpenEvent
struct URewardsWidget_C_HandleSkipOpenEvent_Params
{
};

// Function RewardsWidget.RewardsWidget_C.ExecuteUbergraph_RewardsWidget
struct URewardsWidget_C_ExecuteUbergraph_RewardsWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
