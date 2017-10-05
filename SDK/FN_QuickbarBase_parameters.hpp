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

// Function QuickbarBase.QuickbarBase_C.RefreshQuickbar
struct UQuickbarBase_C_RefreshQuickbar_Params
{
};

// Function QuickbarBase.QuickbarBase_C.HandleKeybindsChanged
struct UQuickbarBase_C_HandleKeybindsChanged_Params
{
};

// Function QuickbarBase.QuickbarBase_C.Minimize
struct UQuickbarBase_C_Minimize_Params
{
};

// Function QuickbarBase.QuickbarBase_C.Maximize
struct UQuickbarBase_C_Maximize_Params
{
};

// Function QuickbarBase.QuickbarBase_C.Is Valid Slot
struct UQuickbarBase_C_Is_Valid_Slot_Params
{
	int                                                Slot;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Is_Valid;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Array_Index;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuickbarBase.QuickbarBase_C.Construct
struct UQuickbarBase_C_Construct_Params
{
};

// Function QuickbarBase.QuickbarBase_C.OnWorldItemListChanged
struct UQuickbarBase_C_OnWorldItemListChanged_Params
{
	TArray<class UFortWorldItem*>                      ItemsAdded;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<class UFortWorldItem*>                      ItemsRemoved;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function QuickbarBase.QuickbarBase_C.OnQuickbarSlotFocusChanged
struct UQuickbarBase_C_OnQuickbarSlotFocusChanged_Params
{
	EFortQuickBars                                     QuickbarIndex;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Slot;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuickbarBase.QuickbarBase_C.OnQuickbarContentsChanged
struct UQuickbarBase_C_OnQuickbarContentsChanged_Params
{
	EFortQuickBars                                     QuickbarIndex;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuickbarBase.QuickbarBase_C.OnQuickbarForceFullUpdate
struct UQuickbarBase_C_OnQuickbarForceFullUpdate_Params
{
	EFortQuickBars                                     QuickbarIndex;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuickbarBase.QuickbarBase_C.OnQuickbarSecondarySlotFocusChanged_Event_1
struct UQuickbarBase_C_OnQuickbarSecondarySlotFocusChanged_Event_1_Params
{
	EFortQuickBars                                     QuickbarIndex;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Slot;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuickbarBase.QuickbarBase_C.OnLocalPlayerDied
struct UQuickbarBase_C_OnLocalPlayerDied_Params
{
	struct FFortPlayerDeathReport                      DeathReport;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function QuickbarBase.QuickbarBase_C.OnLocalPlayerRevived
struct UQuickbarBase_C_OnLocalPlayerRevived_Params
{
};

// Function QuickbarBase.QuickbarBase_C.OnLocalPlayerSpawned
struct UQuickbarBase_C_OnLocalPlayerSpawned_Params
{
};

// Function QuickbarBase.QuickbarBase_C.Destruct
struct UQuickbarBase_C_Destruct_Params
{
};

// Function QuickbarBase.QuickbarBase_C.ExecuteUbergraph_QuickbarBase
struct UQuickbarBase_C_ExecuteUbergraph_QuickbarBase_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
