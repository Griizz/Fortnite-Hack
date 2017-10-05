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

// Function HitPointBar.HitPointBar_C.UpdateVolatileForUpdate
struct UHitPointBar_C_UpdateVolatileForUpdate_Params
{
};

// Function HitPointBar.HitPointBar_C.Update
struct UHitPointBar_C_Update_Params
{
};

// Function HitPointBar.HitPointBar_C.Update Delta Bar
struct UHitPointBar_C_Update_Delta_Bar_Params
{
};

// Function HitPointBar.HitPointBar_C.Initialize Bar
struct UHitPointBar_C_Initialize_Bar_Params
{
};

// Function HitPointBar.HitPointBar_C.UpdateCurrentValueWithoutReason
struct UHitPointBar_C_UpdateCurrentValueWithoutReason_Params
{
	float                                              Current;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HitPointBar.HitPointBar_C.Update Fill Bar
struct UHitPointBar_C_Update_Fill_Bar_Params
{
};

// Function HitPointBar.HitPointBar_C.UpdateCurrentValue
struct UHitPointBar_C_UpdateCurrentValue_Params
{
	float                                              Current;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortHitPointModificationReason                    Reason;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HitPointBar.HitPointBar_C.UpdateMaxValue
struct UHitPointBar_C_UpdateMaxValue_Params
{
	float                                              Max;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HitPointBar.HitPointBar_C.PreConstruct
struct UHitPointBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HitPointBar.HitPointBar_C.Construct
struct UHitPointBar_C_Construct_Params
{
};

// Function HitPointBar.HitPointBar_C.Tick
struct UHitPointBar_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HitPointBar.HitPointBar_C.ExecuteUbergraph_HitPointBar
struct UHitPointBar_C_ExecuteUbergraph_HitPointBar_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
