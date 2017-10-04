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

// Function AthenaTabsScreen.AthenaTabsScreen_C.HandleTabSelected
struct UAthenaTabsScreen_C_HandleTabSelected_Params
{
	struct FName                                       TabName;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaTabsScreen.AthenaTabsScreen_C.HandleTabCreated
struct UAthenaTabsScreen_C_HandleTabCreated_Params
{
	struct FName                                       TabId;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaTabsScreen.AthenaTabsScreen_C.OnActivated
struct UAthenaTabsScreen_C_OnActivated_Params
{
};

// Function AthenaTabsScreen.AthenaTabsScreen_C.Construct
struct UAthenaTabsScreen_C_Construct_Params
{
};

// Function AthenaTabsScreen.AthenaTabsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature
struct UAthenaTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaTabsScreen.AthenaTabsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature
struct UAthenaTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaTabsScreen.AthenaTabsScreen_C.OnDeactivated
struct UAthenaTabsScreen_C_OnDeactivated_Params
{
};

// Function AthenaTabsScreen.AthenaTabsScreen_C.ExecuteUbergraph_AthenaTabsScreen
struct UAthenaTabsScreen_C_ExecuteUbergraph_AthenaTabsScreen_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
