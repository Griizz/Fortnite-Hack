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

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.RefreshBuildingInfo
struct UBuildingInfoIndicator_C_RefreshBuildingInfo_Params
{
};

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleQuickbarFocusChanged
struct UBuildingInfoIndicator_C_HandleQuickbarFocusChanged_Params
{
	int                                                QuickBarSlot;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleAttachedTrapChanged
struct UBuildingInfoIndicator_C_HandleAttachedTrapChanged_Params
{
	class ABuildingTrap*                               BuildingTrap;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.UpdateBuildingInfo_InteractionWidgets
struct UBuildingInfoIndicator_C_UpdateBuildingInfo_InteractionWidgets_Params
{
	bool                                               Interactable;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CanBePlayerEdited;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsAnyTrapAttached;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsTrapAttachedFacingPlayer;                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsPreviewTrapAttached;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InteractionCost;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortResourceType>                     BuildingMaterial;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.IsCurrentBuildingBeingRepaired
struct UBuildingInfoIndicator_C_IsCurrentBuildingBeingRepaired_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.UpdateBuildingRepairCost
struct UBuildingInfoIndicator_C_UpdateBuildingRepairCost_Params
{
	int                                                NewInteractionCost;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandlePlayerTargetingChanged
struct UBuildingInfoIndicator_C_HandlePlayerTargetingChanged_Params
{
	bool                                               bIsTargeting;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HideHealth
struct UBuildingInfoIndicator_C_HideHealth_Params
{
};

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.Update Keybinds
struct UBuildingInfoIndicator_C_Update_Keybinds_Params
{
};

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleTrapDurabilityChanged
struct UBuildingInfoIndicator_C_HandleTrapDurabilityChanged_Params
{
	float                                              CurrentDurability;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxDurability;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleBuildingHealthChanged
struct UBuildingInfoIndicator_C_HandleBuildingHealthChanged_Params
{
	float                                              Health;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleBuildingFocused
struct UBuildingInfoIndicator_C_HandleBuildingFocused_Params
{
	class ABuildingActor*                              FocusedBuilding;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.UpdateBuildingInfo
struct UBuildingInfoIndicator_C_UpdateBuildingInfo_Params
{
	struct FFortFocusedBuildingInfo                    NewBuildingInfo;                                          // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.Construct
struct UBuildingInfoIndicator_C_Construct_Params
{
};

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.ExecuteUbergraph_BuildingInfoIndicator
struct UBuildingInfoIndicator_C_ExecuteUbergraph_BuildingInfoIndicator_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
