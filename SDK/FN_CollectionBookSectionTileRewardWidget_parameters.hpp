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

// Function CollectionBookSectionTileRewardWidget.CollectionBookSectionTileRewardWidget_C.SetSlotCompletionRatio
struct UCollectionBookSectionTileRewardWidget_C_SetSlotCompletionRatio_Params
{
	int                                                NumSlotted;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumSlots;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CollectionBookSectionTileRewardWidget.CollectionBookSectionTileRewardWidget_C.OnRewardStatusChanged
struct UCollectionBookSectionTileRewardWidget_C_OnRewardStatusChanged_Params
{
};

// Function CollectionBookSectionTileRewardWidget.CollectionBookSectionTileRewardWidget_C.ExecuteUbergraph_CollectionBookSectionTileRewardWidget
struct UCollectionBookSectionTileRewardWidget_C_ExecuteUbergraph_CollectionBookSectionTileRewardWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
