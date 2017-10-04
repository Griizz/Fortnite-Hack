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

// Function LeaveButton.LeaveButton_C.SetText
struct ULeaveButton_C_SetText_Params
{
	struct FText                                       TextOverride;                                             // (CPF_Parm)
};

// Function LeaveButton.LeaveButton_C.GetButton
struct ULeaveButton_C_GetButton_Params
{
	class UIconTextButton_C*                           Leave;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LeaveButton.LeaveButton_C.HasUnsavedQuestProgress
struct ULeaveButton_C_HasUnsavedQuestProgress_Params
{
	bool                                               HasUnsavedQuestProgress;                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LeaveButton.LeaveButton_C.LeaveParty
struct ULeaveButton_C_LeaveParty_Params
{
};

// Function LeaveButton.LeaveButton_C.UpdateState
struct ULeaveButton_C_UpdateState_Params
{
};

// Function LeaveButton.LeaveButton_C.IsConsideredInGame
struct ULeaveButton_C_IsConsideredInGame_Params
{
	bool                                               InGame;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LeaveButton.LeaveButton_C.GetLeaveActionText
struct ULeaveButton_C_GetLeaveActionText_Params
{
	struct FText                                       Text;                                                     // (CPF_Parm, CPF_OutParm)
};

// Function LeaveButton.LeaveButton_C.DialogResult_1E39F47546648367BB2F218F69311220
struct ULeaveButton_C_DialogResult_1E39F47546648367BB2F218F69311220_Params
{
	struct FName                                       ResultName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LeaveButton.LeaveButton_C.DialogResult_F5AF58094777CFEEC0BF28BEA620800C
struct ULeaveButton_C_DialogResult_F5AF58094777CFEEC0BF28BEA620800C_Params
{
	struct FName                                       ResultName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LeaveButton.LeaveButton_C.DialogResult_9CCFD7A449420648C97D57A200B3396D
struct ULeaveButton_C_DialogResult_9CCFD7A449420648C97D57A200B3396D_Params
{
	struct FName                                       ResultName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LeaveButton.LeaveButton_C.HandleTeamMemberRemoved
struct ULeaveButton_C_HandleTeamMemberRemoved_Params
{
	int                                                PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LeaveButton.LeaveButton_C.HandleTeamMemberAdded
struct ULeaveButton_C_HandleTeamMemberAdded_Params
{
	struct FFortTeamMemberInfo                         NewTeamMemberInfo;                                        // (CPF_Parm)
};

// Function LeaveButton.LeaveButton_C.HandleLobbyEvents
struct ULeaveButton_C_HandleLobbyEvents_Params
{
};

// Function LeaveButton.LeaveButton_C.Construct
struct ULeaveButton_C_Construct_Params
{
};

// Function LeaveButton.LeaveButton_C.BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature
struct ULeaveButton_C_BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LeaveButton.LeaveButton_C.Destruct
struct ULeaveButton_C_Destruct_Params
{
};

// Function LeaveButton.LeaveButton_C.ExecuteUbergraph_LeaveButton
struct ULeaveButton_C_ExecuteUbergraph_LeaveButton_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LeaveButton.LeaveButton_C.Update Visibility__DelegateSignature
struct ULeaveButton_C_Update_Visibility__DelegateSignature_Params
{
	bool                                               Visibility;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LeaveButton.LeaveButton_C.OnClicked__DelegateSignature
struct ULeaveButton_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
