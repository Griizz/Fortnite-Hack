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

// Function MainTabsScreen.MainTabsScreen_C.Determine If Any non-MTX offers are purchasable
struct UMainTabsScreen_C_Determine_If_Any_non_MTX_offers_are_purchasable_Params
{
	bool                                               ShowBang;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainTabsScreen.MainTabsScreen_C.CheckDisplayCriteria
struct UMainTabsScreen_C_CheckDisplayCriteria_Params
{
	TEnumAsByte<EStoreOfferCosts>                      InCustomStoreOfferCost;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FCardPackOffer                              InCardPackOffer;                                          // (CPF_Parm)
	bool                                               bPassedDisplayCriteria;                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainTabsScreen.MainTabsScreen_C.GetCustomStoreOfferCost
struct UMainTabsScreen_C_GetCustomStoreOfferCost_Params
{
	struct FCardPackOffer                              InCardPackOffer;                                          // (CPF_Parm)
	TEnumAsByte<EStoreOfferCosts>                      OutCustomStoreOfferCost;                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainTabsScreen.MainTabsScreen_C.CheckHighestPriorityOffer
struct UMainTabsScreen_C_CheckHighestPriorityOffer_Params
{
	TArray<struct FCardPackOffer>                      inOfferArray;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	struct FCardPackOffer                              outPriorityOffer;                                         // (CPF_Parm, CPF_OutParm)
	bool                                               FoundOffer;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainTabsScreen.MainTabsScreen_C.Get Valid Offers
struct UMainTabsScreen_C_Get_Valid_Offers_Params
{
	TArray<struct FCardPackOffer>                      Offers;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function MainTabsScreen.MainTabsScreen_C.Is Transform Feature Unlocked
struct UMainTabsScreen_C_Is_Transform_Feature_Unlocked_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MainTabsScreen.MainTabsScreen_C.HandleCardPackStore
struct UMainTabsScreen_C_HandleCardPackStore_Params
{
	struct FName                                       TabId;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainTabsScreen.MainTabsScreen_C.HandleMtxStore
struct UMainTabsScreen_C_HandleMtxStore_Params
{
	struct FName                                       Tab_Id;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainTabsScreen.MainTabsScreen_C.Handle Unclaimed Resources Updated
struct UMainTabsScreen_C_Handle_Unclaimed_Resources_Updated_Params
{
};

// Function MainTabsScreen.MainTabsScreen_C.Toggle Unclaimed Research Timer
struct UMainTabsScreen_C_Toggle_Unclaimed_Research_Timer_Params
{
	bool                                               Enable;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainTabsScreen.MainTabsScreen_C.Determine Unclaimed Resources at Threshold
struct UMainTabsScreen_C_Determine_Unclaimed_Resources_at_Threshold_Params
{
	bool                                               Result;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainTabsScreen.MainTabsScreen_C.Are Any Nodes Available For Purchase
struct UMainTabsScreen_C_Are_Any_Nodes_Available_For_Purchase_Params
{
	struct FName                                       NodePageId;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MainTabsScreen.MainTabsScreen_C.Update Skills Tab Button Bang
struct UMainTabsScreen_C_Update_Skills_Tab_Button_Bang_Params
{
	struct FName                                       Tab;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainTabsScreen.MainTabsScreen_C.Update Store Tab Button Bang
struct UMainTabsScreen_C_Update_Store_Tab_Button_Bang_Params
{
	struct FName                                       Tab;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainTabsScreen.MainTabsScreen_C.Are Any Inventory Items Unseen
struct UMainTabsScreen_C_Are_Any_Inventory_Items_Unseen_Params
{
	bool                                               Unseen;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainTabsScreen.MainTabsScreen_C.Are Any Transform Keys Unseen
struct UMainTabsScreen_C_Are_Any_Transform_Keys_Unseen_Params
{
	bool                                               Unseen;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainTabsScreen.MainTabsScreen_C.Get FortPC
struct UMainTabsScreen_C_Get_FortPC_Params
{
	class AFortPlayerController*                       FortPC;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainTabsScreen.MainTabsScreen_C.Get Item from Transform Seen State
struct UMainTabsScreen_C_Get_Item_from_Transform_Seen_State_Params
{
	class UFortAccountItem*                            TransformKey;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortAccountItem*                            OutItem;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainTabsScreen.MainTabsScreen_C.Update Armory Tab Button Bang
struct UMainTabsScreen_C_Update_Armory_Tab_Button_Bang_Params
{
	struct FName                                       Tab;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainTabsScreen.MainTabsScreen_C.Update Quest Tab Button Bang
struct UMainTabsScreen_C_Update_Quest_Tab_Button_Bang_Params
{
	struct FName                                       Tab;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainTabsScreen.MainTabsScreen_C.Update Tab Button Bangs
struct UMainTabsScreen_C_Update_Tab_Button_Bangs_Params
{
	struct FName                                       InTab;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainTabsScreen.MainTabsScreen_C.Update Hero Tab Button Bang
struct UMainTabsScreen_C_Update_Hero_Tab_Button_Bang_Params
{
	struct FName                                       Tab;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainTabsScreen.MainTabsScreen_C.Update Squad Tab Button Bang
struct UMainTabsScreen_C_Update_Squad_Tab_Button_Bang_Params
{
	struct FName                                       Tab;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainTabsScreen.MainTabsScreen_C.HandleTabSelected
struct UMainTabsScreen_C_HandleTabSelected_Params
{
	struct FName                                       TabName;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainTabsScreen.MainTabsScreen_C.HandleTabCreated
struct UMainTabsScreen_C_HandleTabCreated_Params
{
	struct FName                                       TabId;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainTabsScreen.MainTabsScreen_C.OnActivated
struct UMainTabsScreen_C_OnActivated_Params
{
};

// Function MainTabsScreen.MainTabsScreen_C.CustomEvent
struct UMainTabsScreen_C_CustomEvent_Params
{
	struct FName                                       TabId;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainTabsScreen.MainTabsScreen_C.Construct
struct UMainTabsScreen_C_Construct_Params
{
};

// Function MainTabsScreen.MainTabsScreen_C.OnHomebaseInventoryUpdated
struct UMainTabsScreen_C_OnHomebaseInventoryUpdated_Params
{
};

// Function MainTabsScreen.MainTabsScreen_C.HandleRefreshSkillTreeNodePage
struct UMainTabsScreen_C_HandleRefreshSkillTreeNodePage_Params
{
};

// Function MainTabsScreen.MainTabsScreen_C.Destruct
struct UMainTabsScreen_C_Destruct_Params
{
};

// Function MainTabsScreen.MainTabsScreen_C.OnQuestSeen_Event_1
struct UMainTabsScreen_C_OnQuestSeen_Event_1_Params
{
	class UFortQuestItem*                              Quest;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainTabsScreen.MainTabsScreen_C.SquadSlotMarkedAsSeen_Event_1
struct UMainTabsScreen_C_SquadSlotMarkedAsSeen_Event_1_Params
{
};

// Function MainTabsScreen.MainTabsScreen_C.HandleMainTabSelected
struct UMainTabsScreen_C_HandleMainTabSelected_Params
{
	struct FName*                                      TabNameID;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainTabsScreen.MainTabsScreen_C.HandleMainTabCreated
struct UMainTabsScreen_C_HandleMainTabCreated_Params
{
	struct FName*                                      TabNameID;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonButton**                              TabButton;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainTabsScreen.MainTabsScreen_C.ExecuteUbergraph_MainTabsScreen
struct UMainTabsScreen_C_ExecuteUbergraph_MainTabsScreen_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
