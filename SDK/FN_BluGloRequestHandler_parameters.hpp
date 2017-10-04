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

// Function BluGloRequestHandler.BluGloRequestHandler_C.BuildLocationsRandomly
struct UBluGloRequestHandler_C_BuildLocationsRandomly_Params
{
};

// Function BluGloRequestHandler.BluGloRequestHandler_C.BuildLocationsFromQueryLocations
struct UBluGloRequestHandler_C_BuildLocationsFromQueryLocations_Params
{
	TArray<struct FVector>                             QueryResultLocations;                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function BluGloRequestHandler.BluGloRequestHandler_C.EQSQueryFinished
struct UBluGloRequestHandler_C_EQSQueryFinished_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BluGloRequestHandler.BluGloRequestHandler_C.InitializeBluGloRequestHandler
struct UBluGloRequestHandler_C_InitializeBluGloRequestHandler_Params
{
	int                                                NumBluGloToSpawn;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      ActorToSpawnFrom;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     LocationToSpawnFromIfActorInvalid;                        // (CPF_Parm, CPF_IsPlainOldData)
};

// Function BluGloRequestHandler.BluGloRequestHandler_C.ExecuteUbergraph_BluGloRequestHandler
struct UBluGloRequestHandler_C_ExecuteUbergraph_BluGloRequestHandler_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BluGloRequestHandler.BluGloRequestHandler_C.OnBluGloQueryFinished__DelegateSignature
struct UBluGloRequestHandler_C_OnBluGloQueryFinished__DelegateSignature_Params
{
	class AActor*                                      ActorToSpawnFrom;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     LocationToSpawnFromIfActorInvalid;                        // (CPF_Parm, CPF_IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumBluGloToSpawn;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
