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

// Function B_Pickups.B_Pickups_C.CreateHologramMIDs
struct AB_Pickups_C_CreateHologramMIDs_Params
{
};

// Function B_Pickups.B_Pickups_C.SetHologramPickedUpParams
struct AB_Pickups_C_SetHologramPickedUpParams_Params
{
	bool                                               Tier_0_or_1;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Pickups.B_Pickups_C.SpawnPickedUpTrailPS
struct AB_Pickups_C_SpawnPickedUpTrailPS_Params
{
};

// Function B_Pickups.B_Pickups_C.SetRarityColor
struct AB_Pickups_C_SetRarityColor_Params
{
};

// Function B_Pickups.B_Pickups_C.UserConstructionScript
struct AB_Pickups_C_UserConstructionScript_Params
{
};

// Function B_Pickups.B_Pickups_C.ReceiveTick
struct AB_Pickups_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Pickups.B_Pickups_C.OnAboutToEnterBackpack
struct AB_Pickups_C_OnAboutToEnterBackpack_Params
{
	class AFortPawn**                                  PickupTarget;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Pickups.B_Pickups_C.OnTossed
struct AB_Pickups_C_OnTossed_Params
{
};

// Function B_Pickups.B_Pickups_C.OnPickedUp
struct AB_Pickups_C_OnPickedUp_Params
{
};

// Function B_Pickups.B_Pickups_C.ReceiveBeginPlay
struct AB_Pickups_C_ReceiveBeginPlay_Params
{
};

// Function B_Pickups.B_Pickups_C.ExecuteUbergraph_B_Pickups
struct AB_Pickups_C_ExecuteUbergraph_B_Pickups_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
