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

// Function CollectionMultiProgressBar.CollectionMultiProgressBar_C.PlayFlashAnimation
struct UCollectionMultiProgressBar_C_PlayFlashAnimation_Params
{
};

// Function CollectionMultiProgressBar.CollectionMultiProgressBar_C.UpdateVisibleBar
struct UCollectionMultiProgressBar_C_UpdateVisibleBar_Params
{
};

// Function CollectionMultiProgressBar.CollectionMultiProgressBar_C.Update
struct UCollectionMultiProgressBar_C_Update_Params
{
	int                                                AchievedCount;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CollectionMultiProgressBar.CollectionMultiProgressBar_C.Setup
struct UCollectionMultiProgressBar_C_Setup_Params
{
	TArray<struct FCollectionMissionBadgeDisplayInfo>  InBarInfos;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	int                                                AchievedCount;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CollectionMultiProgressBar.CollectionMultiProgressBar_C.Construct
struct UCollectionMultiProgressBar_C_Construct_Params
{
};

// Function CollectionMultiProgressBar.CollectionMultiProgressBar_C.ExecuteUbergraph_CollectionMultiProgressBar
struct UCollectionMultiProgressBar_C_ExecuteUbergraph_CollectionMultiProgressBar_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
