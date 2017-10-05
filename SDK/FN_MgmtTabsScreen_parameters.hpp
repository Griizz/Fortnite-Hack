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

// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleMgmtMenuTabChangeRequested
struct UMgmtTabsScreen_C_HandleMgmtMenuTabChangeRequested_Params
{
	struct FName                                       TabName;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleDamageReceived
struct UMgmtTabsScreen_C_HandleDamageReceived_Params
{
};

// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleCursorModeChanged
struct UMgmtTabsScreen_C_HandleCursorModeChanged_Params
{
	bool                                               IsEnabled;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ActionName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UUserWidget*                                 CursorModeContentCustomWidget;                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MgmtTabsScreen.MgmtTabsScreen_C.OnActivated
struct UMgmtTabsScreen_C_OnActivated_Params
{
};

// Function MgmtTabsScreen.MgmtTabsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature
struct UMgmtTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MgmtTabsScreen.MgmtTabsScreen_C.Construct
struct UMgmtTabsScreen_C_Construct_Params
{
};

// Function MgmtTabsScreen.MgmtTabsScreen_C.Destruct
struct UMgmtTabsScreen_C_Destruct_Params
{
};

// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleShowQuests
struct UMgmtTabsScreen_C_HandleShowQuests_Params
{
	EFortUIFeature                                     ChangedFeature;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortUIFeatureState                                NewState;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleShowObjectives
struct UMgmtTabsScreen_C_HandleShowObjectives_Params
{
	EFortUIFeature                                     ChangedFeature;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortUIFeatureState                                NewState;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MgmtTabsScreen.MgmtTabsScreen_C.ExecuteUbergraph_MgmtTabsScreen
struct UMgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
