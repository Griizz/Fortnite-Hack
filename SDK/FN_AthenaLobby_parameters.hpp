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

// Function AthenaLobby.AthenaLobby_C.OnInputFillChangeGamepad
struct UAthenaLobby_C_OnInputFillChangeGamepad_Params
{
	bool                                               bCommited;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.OnInputPlaylistChangeGamepad
struct UAthenaLobby_C_OnInputPlaylistChangeGamepad_Params
{
	bool                                               bCommited;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.IsLocalPlayer
struct UAthenaLobby_C_IsLocalPlayer_Params
{
	int                                                PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsLocalPlayer;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.OnSelect
struct UAthenaLobby_C_OnSelect_Params
{
	int                                                PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.CanNavigatePlayers
struct UAthenaLobby_C_CanNavigatePlayers_Params
{
	bool                                               bCanNavigatePlayers;                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.SetHoveredPlayer
struct UAthenaLobby_C_SetHoveredPlayer_Params
{
	int                                                PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.HoverNextPlayer
struct UAthenaLobby_C_HoverNextPlayer_Params
{
};

// Function AthenaLobby.AthenaLobby_C.HoverPreviousPlayer
struct UAthenaLobby_C_HoverPreviousPlayer_Params
{
};

// Function AthenaLobby.AthenaLobby_C.StartMusic
struct UAthenaLobby_C_StartMusic_Params
{
};

// Function AthenaLobby.AthenaLobby_C.ShouldAddPlay
struct UAthenaLobby_C_ShouldAddPlay_Params
{
	bool                                               bShouldAdd;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.InitializeInput
struct UAthenaLobby_C_InitializeInput_Params
{
};

// Function AthenaLobby.AthenaLobby_C.OnLobbyPlayerPadUnhovered
struct UAthenaLobby_C_OnLobbyPlayerPadUnhovered_Params
{
	int                                                PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.OnLobbyPlayerPadHovered
struct UAthenaLobby_C_OnLobbyPlayerPadHovered_Params
{
	int                                                PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.OnLobbyPlayerGadgetsClicked
struct UAthenaLobby_C_OnLobbyPlayerGadgetsClicked_Params
{
	int                                                PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.OnLobbyEmptyPlayerClicked
struct UAthenaLobby_C_OnLobbyEmptyPlayerClicked_Params
{
	int                                                PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.OnLobbyDisconnected
struct UAthenaLobby_C_OnLobbyDisconnected_Params
{
};

// Function AthenaLobby.AthenaLobby_C.RefreshLaunch
struct UAthenaLobby_C_RefreshLaunch_Params
{
};

// Function AthenaLobby.AthenaLobby_C.OnMouseButtonDown
struct UAthenaLobby_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function AthenaLobby.AthenaLobby_C.ShouldAddScroll
struct UAthenaLobby_C_ShouldAddScroll_Params
{
	bool                                               bShouldAdd;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.ShouldAddCancel
struct UAthenaLobby_C_ShouldAddCancel_Params
{
	bool                                               bShouldAdd;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.RefreshInput
struct UAthenaLobby_C_RefreshInput_Params
{
};

// Function AthenaLobby.AthenaLobby_C.OnInputAbandon
struct UAthenaLobby_C_OnInputAbandon_Params
{
	bool                                               bCommited;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.InitializeContextEvents
struct UAthenaLobby_C_InitializeContextEvents_Params
{
};

// Function AthenaLobby.AthenaLobby_C.Focus
struct UAthenaLobby_C_Focus_Params
{
};

// Function AthenaLobby.AthenaLobby_C.OnInputCancel
struct UAthenaLobby_C_OnInputCancel_Params
{
	bool                                               bCommited;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.RefreshPlayerHeroes
struct UAthenaLobby_C_RefreshPlayerHeroes_Params
{
};

// Function AthenaLobby.AthenaLobby_C.OnTeamMemberStateChanged
struct UAthenaLobby_C_OnTeamMemberStateChanged_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (CPF_Parm)
};

// Function AthenaLobby.AthenaLobby_C.OnTeamMemberRemoved
struct UAthenaLobby_C_OnTeamMemberRemoved_Params
{
	int                                                EmptySlot;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.OnTeamMemberAdded
struct UAthenaLobby_C_OnTeamMemberAdded_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (CPF_Parm)
};

// Function AthenaLobby.AthenaLobby_C.Refresh
struct UAthenaLobby_C_Refresh_Params
{
};

// Function AthenaLobby.AthenaLobby_C.Initialize
struct UAthenaLobby_C_Initialize_Params
{
};

// Function AthenaLobby.AthenaLobby_C.DialogResult_156754AE468EF93DCA2009A412591BA7
struct UAthenaLobby_C_DialogResult_156754AE468EF93DCA2009A412591BA7_Params
{
	EFortDialogResult                                  Result;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ResultName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature
struct UAthenaLobby_C_BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature_Params
{
	class UWidget*                                     ActiveWidget;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ActiveWidgetIndex;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.Event Abandon
struct UAthenaLobby_C_Event_Abandon_Params
{
};

// Function AthenaLobby.AthenaLobby_C.OnEndCursorOverPlayer
struct UAthenaLobby_C_OnEndCursorOverPlayer_Params
{
	int*                                               PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.OnNavigationLeft
struct UAthenaLobby_C_OnNavigationLeft_Params
{
};

// Function AthenaLobby.AthenaLobby_C.OnNavigationRight
struct UAthenaLobby_C_OnNavigationRight_Params
{
};

// Function AthenaLobby.AthenaLobby_C.BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent_198_CommonButtonClicked__DelegateSignature
struct UAthenaLobby_C_BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent_198_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.Construct
struct UAthenaLobby_C_Construct_Params
{
};

// Function AthenaLobby.AthenaLobby_C.OnActivated
struct UAthenaLobby_C_OnActivated_Params
{
};

// Function AthenaLobby.AthenaLobby_C.OnPlayerClicked
struct UAthenaLobby_C_OnPlayerClicked_Params
{
	int*                                               PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.OnBeginCursorOverPlayer
struct UAthenaLobby_C_OnBeginCursorOverPlayer_Params
{
	int*                                               PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.BndEvt__PlayerPanel_K2Node_ComponentBoundEvent_308_OnClosed__DelegateSignature
struct UAthenaLobby_C_BndEvt__PlayerPanel_K2Node_ComponentBoundEvent_308_OnClosed__DelegateSignature_Params
{
};

// Function AthenaLobby.AthenaLobby_C.ExecuteUbergraph_AthenaLobby
struct UAthenaLobby_C_ExecuteUbergraph_AthenaLobby_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
