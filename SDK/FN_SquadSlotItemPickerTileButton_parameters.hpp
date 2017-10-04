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

// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.UpdateOverlays
struct USquadSlotItemPickerTileButton_C_UpdateOverlays_Params
{
};

// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.SetData
struct USquadSlotItemPickerTileButton_C_SetData_Params
{
	class UObject**                                    InData;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonListView**                            OwningList;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.HandleItemSlottedToDifferentSquad
struct USquadSlotItemPickerTileButton_C_HandleItemSlottedToDifferentSquad_Params
{
	struct FHomebaseSquadSlotId*                       SquadSlotId;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.HandleSlottingRestrictionReasonsChanged
struct USquadSlotItemPickerTileButton_C_HandleSlottingRestrictionReasonsChanged_Params
{
};

// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.ExecuteUbergraph_SquadSlotItemPickerTileButton
struct USquadSlotItemPickerTileButton_C_ExecuteUbergraph_SquadSlotItemPickerTileButton_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
