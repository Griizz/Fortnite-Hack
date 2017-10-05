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

// Function CollectionBookPageDetailsWidget.CollectionBookPageDetailsWidget_C.OnPageProgressionUpdated
struct UCollectionBookPageDetailsWidget_C_OnPageProgressionUpdated_Params
{
	int*                                               TotalFilledSlots;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int*                                               TotalSlots;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortCollectionBookState*                          State;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CollectionBookPageDetailsWidget.CollectionBookPageDetailsWidget_C.ExecuteUbergraph_CollectionBookPageDetailsWidget
struct UCollectionBookPageDetailsWidget_C_ExecuteUbergraph_CollectionBookPageDetailsWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
