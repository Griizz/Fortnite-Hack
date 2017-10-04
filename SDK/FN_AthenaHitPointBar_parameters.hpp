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

// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateDBNOState
struct UAthenaHitPointBar_C_UpdateDBNOState_Params
{
	bool                                               bIsDBNO;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateHealthType
struct UAthenaHitPointBar_C_UpdateHealthType_Params
{
};

// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateVolatileForUpdate
struct UAthenaHitPointBar_C_UpdateVolatileForUpdate_Params
{
};

// Function AthenaHitPointBar.AthenaHitPointBar_C.Update
struct UAthenaHitPointBar_C_Update_Params
{
};

// Function AthenaHitPointBar.AthenaHitPointBar_C.Update Delta Bar
struct UAthenaHitPointBar_C_Update_Delta_Bar_Params
{
};

// Function AthenaHitPointBar.AthenaHitPointBar_C.Initialize Bar
struct UAthenaHitPointBar_C_Initialize_Bar_Params
{
};

// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateCurrentValueWithoutReason
struct UAthenaHitPointBar_C_UpdateCurrentValueWithoutReason_Params
{
	float                                              Current;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaHitPointBar.AthenaHitPointBar_C.Update Fill Bar
struct UAthenaHitPointBar_C_Update_Fill_Bar_Params
{
};

// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateCurrentValue
struct UAthenaHitPointBar_C_UpdateCurrentValue_Params
{
	float                                              Current;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateMaxValue
struct UAthenaHitPointBar_C_UpdateMaxValue_Params
{
	float                                              Max;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaHitPointBar.AthenaHitPointBar_C.PreConstruct
struct UAthenaHitPointBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaHitPointBar.AthenaHitPointBar_C.Construct
struct UAthenaHitPointBar_C_Construct_Params
{
};

// Function AthenaHitPointBar.AthenaHitPointBar_C.Tick
struct UAthenaHitPointBar_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaHitPointBar.AthenaHitPointBar_C.ExecuteUbergraph_AthenaHitPointBar
struct UAthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
