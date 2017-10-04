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

// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.Update Air Vehicles
struct UBP_FortExpeditionIconTabButton_C_Update_Air_Vehicles_Params
{
};

// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.Update Sea Vehicles
struct UBP_FortExpeditionIconTabButton_C_Update_Sea_Vehicles_Params
{
};

// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.Update Land Vehicles
struct UBP_FortExpeditionIconTabButton_C_Update_Land_Vehicles_Params
{
};

// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.Update All Vehicles
struct UBP_FortExpeditionIconTabButton_C_Update_All_Vehicles_Params
{
};

// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.Update Available Vehicles
struct UBP_FortExpeditionIconTabButton_C_Update_Available_Vehicles_Params
{
};

// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.Set Tab Id
struct UBP_FortExpeditionIconTabButton_C_Set_Tab_Id_Params
{
	struct FName                                       TabId;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.Refresh Bang State
struct UBP_FortExpeditionIconTabButton_C_Refresh_Bang_State_Params
{
};

// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.Set Icon
struct UBP_FortExpeditionIconTabButton_C_Set_Icon_Params
{
	struct FSlateBrush                                 IconBrush;                                                // (CPF_Parm)
};

// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.Set Text
struct UBP_FortExpeditionIconTabButton_C_Set_Text_Params
{
	struct FText                                       ButtonText;                                               // (CPF_Parm)
};

// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.OnCurrentTextStyleChanged
struct UBP_FortExpeditionIconTabButton_C_OnCurrentTextStyleChanged_Params
{
};

// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.PreConstruct
struct UBP_FortExpeditionIconTabButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.SetTabLabelInfo
struct UBP_FortExpeditionIconTabButton_C_SetTabLabelInfo_Params
{
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.Construct
struct UBP_FortExpeditionIconTabButton_C_Construct_Params
{
};

// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.OnSelected
struct UBP_FortExpeditionIconTabButton_C_OnSelected_Params
{
};

// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.OnDeselected
struct UBP_FortExpeditionIconTabButton_C_OnDeselected_Params
{
};

// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.OnHovered
struct UBP_FortExpeditionIconTabButton_C_OnHovered_Params
{
};

// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.OnUnhovered
struct UBP_FortExpeditionIconTabButton_C_OnUnhovered_Params
{
};

// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.ExecuteUbergraph_BP_FortExpeditionIconTabButton
struct UBP_FortExpeditionIconTabButton_C_ExecuteUbergraph_BP_FortExpeditionIconTabButton_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
