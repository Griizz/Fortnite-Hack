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

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnLobbyPlayerUnhovered
struct AVaultWeaponPlacementHelper_C_OnLobbyPlayerUnhovered_Params
{
	int                                                PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.GetFrontendAnimInstance
struct AVaultWeaponPlacementHelper_C_GetFrontendAnimInstance_Params
{
};

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnTeamMemberStateChanged
struct AVaultWeaponPlacementHelper_C_OnTeamMemberStateChanged_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (CPF_Parm)
};

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnTeamMemberRemoved
struct AVaultWeaponPlacementHelper_C_OnTeamMemberRemoved_Params
{
	int                                                TeamMemberInfo;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnTeamMemberAdded
struct AVaultWeaponPlacementHelper_C_OnTeamMemberAdded_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (CPF_Parm)
};

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnFrontEndCameraChanged
struct AVaultWeaponPlacementHelper_C_OnFrontEndCameraChanged_Params
{
	EFrontEndCamera                                    NewCamera;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFrontEndCamera                                    OldCamera;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnLobbyStarted
struct AVaultWeaponPlacementHelper_C_OnLobbyStarted_Params
{
};

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.Initialize
struct AVaultWeaponPlacementHelper_C_Initialize_Params
{
};

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.InitializeContextEvents
struct AVaultWeaponPlacementHelper_C_InitializeContextEvents_Params
{
};

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnLobbyPlayerSelected
struct AVaultWeaponPlacementHelper_C_OnLobbyPlayerSelected_Params
{
	int                                                PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnLobbyPlayerHovered
struct AVaultWeaponPlacementHelper_C_OnLobbyPlayerHovered_Params
{
	int                                                PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.UserConstructionScript
struct AVaultWeaponPlacementHelper_C_UserConstructionScript_Params
{
};

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ReceiveBeginPlay
struct AVaultWeaponPlacementHelper_C_ReceiveBeginPlay_Params
{
};

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ItemRez
struct AVaultWeaponPlacementHelper_C_ItemRez_Params
{
};

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ExecuteUbergraph_VaultWeaponPlacementHelper
struct AVaultWeaponPlacementHelper_C_ExecuteUbergraph_VaultWeaponPlacementHelper_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.NewEventDispatcher_0__DelegateSignature
struct AVaultWeaponPlacementHelper_C_NewEventDispatcher_0__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
