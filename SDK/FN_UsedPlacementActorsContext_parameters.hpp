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

// Function UsedPlacementActorsContext.UsedPlacementActorsContext_C.ProvideActorsSet
struct UUsedPlacementActorsContext_C_ProvideActorsSet_Params
{
	class UObject**                                    QuerierObject;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     QuerierActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class AActor*>                              ResultingActorsSet;                                       // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
