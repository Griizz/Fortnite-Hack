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

// Function CollectionBar.CollectionBar_C.SetIcon
struct UCollectionBar_C_SetIcon_Params
{
	struct FSlateBrush                                 InIcon;                                                   // (CPF_Parm)
};

// Function CollectionBar.CollectionBar_C.IsAchievedCountInRange
struct UCollectionBar_C_IsAchievedCountInRange_Params
{
	bool                                               bIsInRange;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CollectionBar.CollectionBar_C.SetAchievedCount
struct UCollectionBar_C_SetAchievedCount_Params
{
	int                                                InAchievedCount;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CollectionBar.CollectionBar_C.Update
struct UCollectionBar_C_Update_Params
{
};

// Function CollectionBar.CollectionBar_C.GetProgressBarPercentage
struct UCollectionBar_C_GetProgressBarPercentage_Params
{
	int                                                AchievedCount;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Percentage;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CollectionBar.CollectionBar_C.Construct
struct UCollectionBar_C_Construct_Params
{
};

// Function CollectionBar.CollectionBar_C.ExecuteUbergraph_CollectionBar
struct UCollectionBar_C_ExecuteUbergraph_CollectionBar_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
