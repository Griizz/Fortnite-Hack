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

// Function ItemTransformResultItems.ItemTransformResultItems_C.UpdateMainReward
struct UItemTransformResultItems_C_UpdateMainReward_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentTier;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformResultItems.ItemTransformResultItems_C.CalculateRecycleXP
struct UItemTransformResultItems_C_CalculateRecycleXP_Params
{
	TArray<class UFortItem*>                           SacrificeItems;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	int                                                TotalHeroXP;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TotalSchematicXP;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TotalWorkerXP;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformResultItems.ItemTransformResultItems_C.UpdateItems
struct UItemTransformResultItems_C_UpdateItems_Params
{
	class UFortItem*                                   Transform_Key;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UFortItem*>                           SacrificeItems;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	int                                                CurrentTier;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformResultItems.ItemTransformResultItems_C.PreConstruct
struct UItemTransformResultItems_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformResultItems.ItemTransformResultItems_C.ExecuteUbergraph_ItemTransformResultItems
struct UItemTransformResultItems_C_ExecuteUbergraph_ItemTransformResultItems_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
