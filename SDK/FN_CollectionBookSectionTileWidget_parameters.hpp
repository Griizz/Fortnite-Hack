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

// Function CollectionBookSectionTileWidget.CollectionBookSectionTileWidget_C.OnSectionSlotUpdate
struct UCollectionBookSectionTileWidget_C_OnSectionSlotUpdate_Params
{
	int*                                               NumFilledSlots;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int*                                               NumSlots;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CollectionBookSectionTileWidget.CollectionBookSectionTileWidget_C.ExecuteUbergraph_CollectionBookSectionTileWidget
struct UCollectionBookSectionTileWidget_C_ExecuteUbergraph_CollectionBookSectionTileWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
