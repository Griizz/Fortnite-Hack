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

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Update Air Vehicles
struct UBP_ItemTransform_TabButton_C_Update_Air_Vehicles_Params
{
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Update Sea Vehicles
struct UBP_ItemTransform_TabButton_C_Update_Sea_Vehicles_Params
{
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Update Land Vehicles
struct UBP_ItemTransform_TabButton_C_Update_Land_Vehicles_Params
{
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Update All Vehicles
struct UBP_ItemTransform_TabButton_C_Update_All_Vehicles_Params
{
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Update Available Vehicles
struct UBP_ItemTransform_TabButton_C_Update_Available_Vehicles_Params
{
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Tab Id
struct UBP_ItemTransform_TabButton_C_Set_Tab_Id_Params
{
	struct FName                                       TabId;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Refresh Bang State
struct UBP_ItemTransform_TabButton_C_Refresh_Bang_State_Params
{
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Icon
struct UBP_ItemTransform_TabButton_C_Set_Icon_Params
{
	struct FSlateBrush                                 IconBrush;                                                // (CPF_Parm)
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Text
struct UBP_ItemTransform_TabButton_C_Set_Text_Params
{
	struct FText                                       ButtonText;                                               // (CPF_Parm)
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnCurrentTextStyleChanged
struct UBP_ItemTransform_TabButton_C_OnCurrentTextStyleChanged_Params
{
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.PreConstruct
struct UBP_ItemTransform_TabButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.SetTabLabelInfo
struct UBP_ItemTransform_TabButton_C_SetTabLabelInfo_Params
{
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Construct
struct UBP_ItemTransform_TabButton_C_Construct_Params
{
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnSelected
struct UBP_ItemTransform_TabButton_C_OnSelected_Params
{
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnDeselected
struct UBP_ItemTransform_TabButton_C_OnDeselected_Params
{
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnHovered
struct UBP_ItemTransform_TabButton_C_OnHovered_Params
{
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnUnhovered
struct UBP_ItemTransform_TabButton_C_OnUnhovered_Params
{
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.ExecuteUbergraph_BP_ItemTransform_TabButton
struct UBP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
