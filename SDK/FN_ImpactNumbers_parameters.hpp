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

// Function ImpactNumbers.ImpactNumbers_C.Set Material Pararmeters
struct AImpactNumbers_C_Set_Material_Pararmeters_Params
{
	struct FFortDamageNumberInfo                       NewDamageHitInfoStruct;                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FTransform                                  CameraTransform;                                          // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     NumberLocation;                                           // (CPF_Parm, CPF_IsPlainOldData)
};

// Function ImpactNumbers.ImpactNumbers_C.init a new number set
struct AImpactNumbers_C_init_a_new_number_set_Params
{
	struct FFortDamageNumberInfo                       NewDamageHitInfoStruct;                                   // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FTransform                                  OutCameraTransform;                                       // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	struct FVector                                     OutNumberLocation;                                        // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function ImpactNumbers.ImpactNumbers_C.UserConstructionScript
struct AImpactNumbers_C_UserConstructionScript_Params
{
};

// Function ImpactNumbers.ImpactNumbers_C.OnNewDamageNumber
struct AImpactNumbers_C_OnNewDamageNumber_Params
{
	struct FFortDamageNumberInfo*                      NewDamageNumberInfo;                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function ImpactNumbers.ImpactNumbers_C.ExecuteUbergraph_ImpactNumbers
struct AImpactNumbers_C_ExecuteUbergraph_ImpactNumbers_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
