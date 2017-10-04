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

// Function SquadSlotGroup.SquadSlotGroup_C.RemoveDarkeningFromAllSlotsInGroup
struct USquadSlotGroup_C_RemoveDarkeningFromAllSlotsInGroup_Params
{
};

// Function SquadSlotGroup.SquadSlotGroup_C.DarkenAllSlotsExceptIndex
struct USquadSlotGroup_C_DarkenAllSlotsExceptIndex_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SquadSlotGroup.SquadSlotGroup_C.SelectSquadSlot
struct USquadSlotGroup_C_SelectSquadSlot_Params
{
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SquadSlotGroup.SquadSlotGroup_C.Get_SquadSlotBox_ToolTipWidget
struct USquadSlotGroup_C_Get_SquadSlotBox_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function SquadSlotGroup.SquadSlotGroup_C.Update Squad Slot Visibility
struct USquadSlotGroup_C_Update_Squad_Slot_Visibility_Params
{
};

// Function SquadSlotGroup.SquadSlotGroup_C.AddSquadSlots
struct USquadSlotGroup_C_AddSquadSlots_Params
{
	TArray<class UWidget*>                             SquadSlots;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function SquadSlotGroup.SquadSlotGroup_C.PreConstruct
struct USquadSlotGroup_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SquadSlotGroup.SquadSlotGroup_C.OnMouseEnter
struct USquadSlotGroup_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function SquadSlotGroup.SquadSlotGroup_C.OnMouseLeave
struct USquadSlotGroup_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function SquadSlotGroup.SquadSlotGroup_C.ExecuteUbergraph_SquadSlotGroup
struct USquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SquadSlotGroup.SquadSlotGroup_C.HandleMouseLeave__DelegateSignature
struct USquadSlotGroup_C_HandleMouseLeave__DelegateSignature_Params
{
};

// Function SquadSlotGroup.SquadSlotGroup_C.HandleMouseEnter__DelegateSignature
struct USquadSlotGroup_C_HandleMouseEnter__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
