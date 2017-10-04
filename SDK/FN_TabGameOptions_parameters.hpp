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

// Function TabGameOptions.TabGameOptions_C.Construct
struct UTabGameOptions_C_Construct_Params
{
};

// Function TabGameOptions.TabGameOptions_C.UpdateOptionsTab
struct UTabGameOptions_C_UpdateOptionsTab_Params
{
};

// Function TabGameOptions.TabGameOptions_C.CenterOnTab
struct UTabGameOptions_C_CenterOnTab_Params
{
};

// Function TabGameOptions.TabGameOptions_C.Tab Settings Changed
struct UTabGameOptions_C_Tab_Settings_Changed_Params
{
};

// Function TabGameOptions.TabGameOptions_C.BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_1004_OnActiveWidgetChanged__DelegateSignature
struct UTabGameOptions_C_BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_1004_OnActiveWidgetChanged__DelegateSignature_Params
{
	class UWidget*                                     ActiveWidget;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ActiveWidgetIndex;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabGameOptions.TabGameOptions_C.BndEvt__GameTabs_K2Node_ComponentBoundEvent_21_OnTabButtonCreated__DelegateSignature
struct UTabGameOptions_C_BndEvt__GameTabs_K2Node_ComponentBoundEvent_21_OnTabButtonCreated__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabGameOptions.TabGameOptions_C.ExecuteUbergraph_TabGameOptions
struct UTabGameOptions_C_ExecuteUbergraph_TabGameOptions_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
