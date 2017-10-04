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

// Function SubgameSelectScreen.SubgameSelectScreen_C.Update
struct USubgameSelectScreen_C_Update_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.AdvanceRotator
struct USubgameSelectScreen_C_AdvanceRotator_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.ResetKeyArtForMainMenu
struct USubgameSelectScreen_C_ResetKeyArtForMainMenu_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.ToggleTimer
struct USubgameSelectScreen_C_ToggleTimer_Params
{
	bool                                               Enabled;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.SafeSetSubGame
struct USubgameSelectScreen_C_SafeSetSubGame_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.SetDescriptionForSubGame
struct USubgameSelectScreen_C_SetDescriptionForSubGame_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature
struct USubgameSelectScreen_C_BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__AthenaBtn_K2Node_ComponentBoundEvent_298_CommonButtonClicked__DelegateSignature
struct USubgameSelectScreen_C_BndEvt__AthenaBtn_K2Node_ComponentBoundEvent_298_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.Try And Remove The Dialog
struct USubgameSelectScreen_C_Try_And_Remove_The_Dialog_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.Clear Party and Matchmaking Delegates
struct USubgameSelectScreen_C_Clear_Party_and_Matchmaking_Delegates_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_1
struct USubgameSelectScreen_C_CustomEvent_1_Params
{
	TEnumAsByte<EMatchmakingState>                     OldState;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EMatchmakingState>                     NewState;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_2
struct USubgameSelectScreen_C_CustomEvent_2_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.Show Busy If Async Tasks Still Pending
struct USubgameSelectScreen_C_Show_Busy_If_Async_Tasks_Still_Pending_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature
struct USubgameSelectScreen_C_BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.Construct
struct USubgameSelectScreen_C_Construct_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent_125_CommonButtonClicked__DelegateSignature
struct USubgameSelectScreen_C_BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent_125_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_107_CommonButtonClicked__DelegateSignature
struct USubgameSelectScreen_C_BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_107_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature
struct USubgameSelectScreen_C_BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.OnActivated
struct USubgameSelectScreen_C_OnActivated_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_3
struct USubgameSelectScreen_C_CustomEvent_3_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.ExecuteUbergraph_SubgameSelectScreen
struct USubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
