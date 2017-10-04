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

// Function ItemCountOverCost.ItemCountOverCost_C.Calculate Total Item Def in Inventory
struct UItemCountOverCost_C_Calculate_Total_Item_Def_in_Inventory_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemCountOverCost.ItemCountOverCost_C.Update
struct UItemCountOverCost_C_Update_Params
{
};

// Function ItemCountOverCost.ItemCountOverCost_C.Get Meets Criteria Color
struct UItemCountOverCost_C_Get_Meets_Criteria_Color_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemCountOverCost.ItemCountOverCost_C.Construct
struct UItemCountOverCost_C_Construct_Params
{
};

// Function ItemCountOverCost.ItemCountOverCost_C.PreConstruct
struct UItemCountOverCost_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemCountOverCost.ItemCountOverCost_C.ExecuteUbergraph_ItemCountOverCost
struct UItemCountOverCost_C_ExecuteUbergraph_ItemCountOverCost_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
