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

// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.CreateAndAddSquadSlotButton
struct UBP_ExpeditionSquadSlotsView_C_CreateAndAddSquadSlotButton_Params
{
	int*                                               SquadSlotIndex;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHomebaseSquadSlot*                         SquadSlotDefinition;                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	class UWidget*                                     OutSquadSlotButtonHost;                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortSquadSlotSelectorButton*                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.HandleSquadSlotSelected
struct UBP_ExpeditionSquadSlotsView_C_HandleSquadSlotSelected_Params
{
	int                                                SquadSlotIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.PreConstruct
struct UBP_ExpeditionSquadSlotsView_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.HandleSquadSlotOpened
struct UBP_ExpeditionSquadSlotsView_C_HandleSquadSlotOpened_Params
{
};

// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.ExecuteUbergraph_BP_ExpeditionSquadSlotsView
struct UBP_ExpeditionSquadSlotsView_C_ExecuteUbergraph_BP_ExpeditionSquadSlotsView_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.OnSquadSlotOpened__DelegateSignature
struct UBP_ExpeditionSquadSlotsView_C_OnSquadSlotOpened__DelegateSignature_Params
{
};

// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.OnSquadSlotSelected__DelegateSignature
struct UBP_ExpeditionSquadSlotsView_C_OnSquadSlotSelected__DelegateSignature_Params
{
	int                                                SquadSlotIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
