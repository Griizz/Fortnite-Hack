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

// Function AthenaEquipProgress.AthenaEquipProgress_C.Tick
struct UAthenaEquipProgress_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaEquipProgress.AthenaEquipProgress_C.Construct
struct UAthenaEquipProgress_C_Construct_Params
{
};

// Function AthenaEquipProgress.AthenaEquipProgress_C.OnUIGameplayCue_Event_1
struct UAthenaEquipProgress_C_OnUIGameplayCue_Event_1_Params
{
	struct FName                                       CueName;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function AthenaEquipProgress.AthenaEquipProgress_C.Destruct
struct UAthenaEquipProgress_C_Destruct_Params
{
};

// Function AthenaEquipProgress.AthenaEquipProgress_C.ExecuteUbergraph_AthenaEquipProgress
struct UAthenaEquipProgress_C_ExecuteUbergraph_AthenaEquipProgress_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
