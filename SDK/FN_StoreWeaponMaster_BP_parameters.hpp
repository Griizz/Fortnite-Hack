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

// Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.UserConstructionScript
struct AStoreWeaponMaster_BP_C_UserConstructionScript_Params
{
};

// Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.ReceiveBeginPlay
struct AStoreWeaponMaster_BP_C_ReceiveBeginPlay_Params
{
};

// Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.ReceiveTick
struct AStoreWeaponMaster_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.ExecuteUbergraph_StoreWeaponMaster_BP
struct AStoreWeaponMaster_BP_C_ExecuteUbergraph_StoreWeaponMaster_BP_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
