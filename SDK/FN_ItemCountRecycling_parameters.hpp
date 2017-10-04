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

// Function ItemCountRecycling.ItemCountRecycling_C.SetItemDefinition
struct UItemCountRecycling_C_SetItemDefinition_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemCountRecycling.ItemCountRecycling_C.Construct
struct UItemCountRecycling_C_Construct_Params
{
};

// Function ItemCountRecycling.ItemCountRecycling_C.PreConstruct
struct UItemCountRecycling_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemCountRecycling.ItemCountRecycling_C.ExecuteUbergraph_ItemCountRecycling
struct UItemCountRecycling_C_ExecuteUbergraph_ItemCountRecycling_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
