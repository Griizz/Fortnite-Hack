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

// Function NearestPlayerContext.NearestPlayerContext_C.ProvideSingleLocation
struct UNearestPlayerContext_C_ProvideSingleLocation_Params
{
	class UObject**                                    QuerierObject;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     QuerierActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ResultingLocation;                                        // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
