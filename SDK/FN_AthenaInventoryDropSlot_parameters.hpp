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

// Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.OnDrop
struct UAthenaInventoryDropSlot_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (CPF_Parm)
	class UDragDropOperation**                         Operation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.Construct
struct UAthenaInventoryDropSlot_C_Construct_Params
{
};

// Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.OnFocusLost
struct UAthenaInventoryDropSlot_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (CPF_Parm)
};

// Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.Tick
struct UAthenaInventoryDropSlot_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.ExecuteUbergraph_AthenaInventoryDropSlot
struct UAthenaInventoryDropSlot_C_ExecuteUbergraph_AthenaInventoryDropSlot_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.OnEquipRequested__DelegateSignature
struct UAthenaInventoryDropSlot_C_OnEquipRequested__DelegateSignature_Params
{
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
