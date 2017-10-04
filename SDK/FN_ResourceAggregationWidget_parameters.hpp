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

// Function ResourceAggregationWidget.ResourceAggregationWidget_C.ForceHideWidget
struct UResourceAggregationWidget_C_ForceHideWidget_Params
{
};

// Function ResourceAggregationWidget.ResourceAggregationWidget_C.HideWidget
struct UResourceAggregationWidget_C_HideWidget_Params
{
};

// Function ResourceAggregationWidget.ResourceAggregationWidget_C.TriggerAggregateAnimation
struct UResourceAggregationWidget_C_TriggerAggregateAnimation_Params
{
};

// Function ResourceAggregationWidget.ResourceAggregationWidget_C.UpdateAggregateResourceCollected
struct UResourceAggregationWidget_C_UpdateAggregateResourceCollected_Params
{
	class UFortItem*                                   InPotentialResource;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ResourceAggregationWidget.ResourceAggregationWidget_C.ResetSourceOfResource
struct UResourceAggregationWidget_C_ResetSourceOfResource_Params
{
	class ABuildingSMActor*                            InResourceObject;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortItem*                                   InPotentialResource;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ResourceAggregationWidget.ResourceAggregationWidget_C.HandleDamagedResourceObject
struct UResourceAggregationWidget_C_HandleDamagedResourceObject_Params
{
	class ABuildingSMActor*                            DamagedResourceObject;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortItem*                                   PotentialResource;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Destroyed;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               WeakpointDamage;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ResourceAggregationWidget.ResourceAggregationWidget_C.Construct
struct UResourceAggregationWidget_C_Construct_Params
{
};

// Function ResourceAggregationWidget.ResourceAggregationWidget_C.ExecuteUbergraph_ResourceAggregationWidget
struct UResourceAggregationWidget_C_ExecuteUbergraph_ResourceAggregationWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
