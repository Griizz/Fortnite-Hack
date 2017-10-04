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

// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.Teleport
struct APlayerPawn_Athena_Generic_Parent_C_Teleport_Params
{
	struct FGameplayCueParameters                      GameplayCueParameters;                                    // (CPF_Parm)
	bool                                               TeleportOut_;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Default_PlayLength;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.UserConstructionScript
struct APlayerPawn_Athena_Generic_Parent_C_UserConstructionScript_Params
{
};

// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.GameplayCue.Teleport.Out
struct APlayerPawn_Athena_Generic_Parent_C_GameplayCue_Teleport_Out_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.GameplayCue.Teleport.In
struct APlayerPawn_Athena_Generic_Parent_C_GameplayCue_Teleport_In_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ReceiveBeginPlay
struct APlayerPawn_Athena_Generic_Parent_C_ReceiveBeginPlay_Params
{
};

// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent
struct APlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
