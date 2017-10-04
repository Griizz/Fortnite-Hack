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

// Function ItemEntry.ItemEntry_C.DoesItemHaveChildren
struct UItemEntry_C_DoesItemHaveChildren_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemEntry.ItemEntry_C.GetIndentLevel
struct UItemEntry_C_GetIndentLevel_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemEntry.ItemEntry_C.IsItemExpanded
struct UItemEntry_C_IsItemExpanded_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemEntry.ItemEntry_C.GetData
struct UItemEntry_C_GetData_Params
{
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemEntry.ItemEntry_C.OnAcquireFromPool
struct UItemEntry_C_OnAcquireFromPool_Params
{
};

// Function ItemEntry.ItemEntry_C.OnReleaseToPool
struct UItemEntry_C_OnReleaseToPool_Params
{
};

// Function ItemEntry.ItemEntry_C.Private_OnExpanderArrowShiftClicked
struct UItemEntry_C_Private_OnExpanderArrowShiftClicked_Params
{
};

// Function ItemEntry.ItemEntry_C.RegisterOnClicked
struct UItemEntry_C_RegisterOnClicked_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function ItemEntry.ItemEntry_C.SetExpanded
struct UItemEntry_C_SetExpanded_Params
{
	bool                                               bExpanded;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemEntry.ItemEntry_C.SetIndexInList
struct UItemEntry_C_SetIndexInList_Params
{
	int                                                InIndexInList;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemEntry.ItemEntry_C.SetSelected
struct UItemEntry_C_SetSelected_Params
{
	bool                                               bSelected;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemEntry.ItemEntry_C.ToggleExpansion
struct UItemEntry_C_ToggleExpansion_Params
{
};

// Function ItemEntry.ItemEntry_C.Reset
struct UItemEntry_C_Reset_Params
{
};

// Function ItemEntry.ItemEntry_C.SetData
struct UItemEntry_C_SetData_Params
{
	class UObject*                                     InData;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonListView*                             OwningList;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemEntry.ItemEntry_C.Construct
struct UItemEntry_C_Construct_Params
{
};

// Function ItemEntry.ItemEntry_C.ExecuteUbergraph_ItemEntry
struct UItemEntry_C_ExecuteUbergraph_ItemEntry_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemEntry.ItemEntry_C.Entry Selected__DelegateSignature
struct UItemEntry_C_Entry_Selected__DelegateSignature_Params
{
	class UFortItemDefinition*                         Items_Definition;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
