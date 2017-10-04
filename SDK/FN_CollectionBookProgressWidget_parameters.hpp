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

// Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.OnCollectionBookLevelProgressionChanged
struct UCollectionBookProgressWidget_C_OnCollectionBookLevelProgressionChanged_Params
{
	float*                                             NewCompletionPct;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.OnCollectionBookPreviewXPChange
struct UCollectionBookProgressWidget_C_OnCollectionBookPreviewXPChange_Params
{
	float*                                             PreviewCompletionPct;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.ExecuteUbergraph_CollectionBookProgressWidget
struct UCollectionBookProgressWidget_C_ExecuteUbergraph_CollectionBookProgressWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
