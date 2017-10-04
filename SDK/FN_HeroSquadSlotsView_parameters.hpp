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

// Function HeroSquadSlotsView.HeroSquadSlotsView_C.UndarkenAllSlots
struct UHeroSquadSlotsView_C_UndarkenAllSlots_Params
{
};

// Function HeroSquadSlotsView.HeroSquadSlotsView_C.HighlightSlotByIndex
struct UHeroSquadSlotsView_C_HighlightSlotByIndex_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HeroSquadSlotsView.HeroSquadSlotsView_C.HandleSquadNavigation
struct UHeroSquadSlotsView_C_HandleSquadNavigation_Params
{
	struct FName                                       SquadId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HeroSquadSlotsView.HeroSquadSlotsView_C.CreateAndAddSquadSlotButton
struct UHeroSquadSlotsView_C_CreateAndAddSquadSlotButton_Params
{
	int*                                               SquadSlotIndex;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHomebaseSquadSlot*                         SquadSlotDefinition;                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	class UWidget*                                     OutSquadSlotButtonHost;                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortSquadSlotSelectorButton*                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function HeroSquadSlotsView.HeroSquadSlotsView_C.Construct
struct UHeroSquadSlotsView_C_Construct_Params
{
};

// Function HeroSquadSlotsView.HeroSquadSlotsView_C.ExecuteUbergraph_HeroSquadSlotsView
struct UHeroSquadSlotsView_C_ExecuteUbergraph_HeroSquadSlotsView_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
