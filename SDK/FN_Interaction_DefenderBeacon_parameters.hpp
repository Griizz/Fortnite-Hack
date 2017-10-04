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

// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.CheckAmmoValid
struct UInteraction_DefenderBeacon_C_CheckAmmoValid_Params
{
	bool                                               AmmoValid;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.DisplayWeaponType
struct UInteraction_DefenderBeacon_C_DisplayWeaponType_Params
{
};

// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.Construct
struct UInteraction_DefenderBeacon_C_Construct_Params
{
};

// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.UpdateDefenderBeaconWidget
struct UInteraction_DefenderBeacon_C_UpdateDefenderBeaconWidget_Params
{
};

// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.Destruct
struct UInteraction_DefenderBeacon_C_Destruct_Params
{
};

// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.OnDefenderEquippedWeapon
struct UInteraction_DefenderBeacon_C_OnDefenderEquippedWeapon_Params
{
	class AFortWeapon*                                 NewWeapon;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AFortWeapon*                                 OldWeapon;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.ExecuteUbergraph_Interaction_DefenderBeacon
struct UInteraction_DefenderBeacon_C_ExecuteUbergraph_Interaction_DefenderBeacon_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
