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

// Function CollectionBookWidget.CollectionBookWidget_C.Construct
struct UCollectionBookWidget_C_Construct_Params
{
};

// Function CollectionBookWidget.CollectionBookWidget_C.SlotItemComplete
struct UCollectionBookWidget_C_SlotItemComplete_Params
{
	class UFortAccountItem*                            ItemSlotted;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SlotId;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CollectionBookWidget.CollectionBookWidget_C.Destruct
struct UCollectionBookWidget_C_Destruct_Params
{
};

// Function CollectionBookWidget.CollectionBookWidget_C.OnActivated
struct UCollectionBookWidget_C_OnActivated_Params
{
};

// Function CollectionBookWidget.CollectionBookWidget_C.ExecuteUbergraph_CollectionBookWidget
struct UCollectionBookWidget_C_ExecuteUbergraph_CollectionBookWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
