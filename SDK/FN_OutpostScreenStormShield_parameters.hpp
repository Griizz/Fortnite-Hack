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

// Function OutpostScreenStormShield.OutpostScreenStormShield_C.CenterPermissionsWidget
struct UOutpostScreenStormShield_C_CenterPermissionsWidget_Params
{
};

// Function OutpostScreenStormShield.OutpostScreenStormShield_C.CenterStormShieldWidget
struct UOutpostScreenStormShield_C_CenterStormShieldWidget_Params
{
};

// Function OutpostScreenStormShield.OutpostScreenStormShield_C.HandleBack
struct UOutpostScreenStormShield_C_HandleBack_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OutpostScreenStormShield.OutpostScreenStormShield_C.AddInputHandlers
struct UOutpostScreenStormShield_C_AddInputHandlers_Params
{
};

// Function OutpostScreenStormShield.OutpostScreenStormShield_C.SetCoreBuilding
struct UOutpostScreenStormShield_C_SetCoreBuilding_Params
{
	class AFortOutpostBuilding*                        NewCoreBuilding;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OutpostScreenStormShield.OutpostScreenStormShield_C.Construct
struct UOutpostScreenStormShield_C_Construct_Params
{
};

// Function OutpostScreenStormShield.OutpostScreenStormShield_C.BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature
struct UOutpostScreenStormShield_C_BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OutpostScreenStormShield.OutpostScreenStormShield_C.BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_36_OnTabButtonCreated__DelegateSignature
struct UOutpostScreenStormShield_C_BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_36_OnTabButtonCreated__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OutpostScreenStormShield.OutpostScreenStormShield_C.ExecuteUbergraph_OutpostScreenStormShield
struct UOutpostScreenStormShield_C_ExecuteUbergraph_OutpostScreenStormShield_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OutpostScreenStormShield.OutpostScreenStormShield_C.CloseOutpostScreen__DelegateSignature
struct UOutpostScreenStormShield_C_CloseOutpostScreen__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
