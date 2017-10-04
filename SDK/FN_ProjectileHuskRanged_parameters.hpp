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

// Function ProjectileHuskRanged.ProjectileHuskRanged_C.UserConstructionScript
struct AProjectileHuskRanged_C_UserConstructionScript_Params
{
};

// Function ProjectileHuskRanged.ProjectileHuskRanged_C.ReceiveHit
struct AProjectileHuskRanged_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     Other;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function ProjectileHuskRanged.ProjectileHuskRanged_C.ReceiveBeginPlay
struct AProjectileHuskRanged_C_ReceiveBeginPlay_Params
{
};

// Function ProjectileHuskRanged.ProjectileHuskRanged_C.ProjectileCheck
struct AProjectileHuskRanged_C_ProjectileCheck_Params
{
};

// Function ProjectileHuskRanged.ProjectileHuskRanged_C.StopHoming
struct AProjectileHuskRanged_C_StopHoming_Params
{
};

// Function ProjectileHuskRanged.ProjectileHuskRanged_C.OnExploded
struct AProjectileHuskRanged_C_OnExploded_Params
{
	TArray<class AActor*>*                             HitActors;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<struct FHitResult>*                         HitResults;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function ProjectileHuskRanged.ProjectileHuskRanged_C.OnStoppedOnServer
struct AProjectileHuskRanged_C_OnStoppedOnServer_Params
{
};

// Function ProjectileHuskRanged.ProjectileHuskRanged_C.ExecuteUbergraph_ProjectileHuskRanged
struct AProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
