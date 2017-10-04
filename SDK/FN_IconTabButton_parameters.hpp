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

// Function IconTabButton.IconTabButton_C.Update Bang State
struct UIconTabButton_C_Update_Bang_State_Params
{
	bool                                               bBangEnabled;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function IconTabButton.IconTabButton_C.SetTutorialBorderStyle
struct UIconTabButton_C_SetTutorialBorderStyle_Params
{
	class UClass*                                      BorderStyle;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function IconTabButton.IconTabButton_C.ShowText
struct UIconTabButton_C_ShowText_Params
{
};

// Function IconTabButton.IconTabButton_C.Set Icon
struct UIconTabButton_C_Set_Icon_Params
{
	struct FSlateBrush                                 IconBrush;                                                // (CPF_Parm)
};

// Function IconTabButton.IconTabButton_C.Set Text
struct UIconTabButton_C_Set_Text_Params
{
	struct FText                                       ButtonText;                                               // (CPF_Parm)
};

// Function IconTabButton.IconTabButton_C.PreConstruct
struct UIconTabButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function IconTabButton.IconTabButton_C.OnCurrentTextStyleChanged
struct UIconTabButton_C_OnCurrentTextStyleChanged_Params
{
};

// Function IconTabButton.IconTabButton_C.SetTabLabelInfo
struct UIconTabButton_C_SetTabLabelInfo_Params
{
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function IconTabButton.IconTabButton_C.OnSelected
struct UIconTabButton_C_OnSelected_Params
{
};

// Function IconTabButton.IconTabButton_C.OnDeselected
struct UIconTabButton_C_OnDeselected_Params
{
};

// Function IconTabButton.IconTabButton_C.Construct
struct UIconTabButton_C_Construct_Params
{
};

// Function IconTabButton.IconTabButton_C.OnHovered
struct UIconTabButton_C_OnHovered_Params
{
};

// Function IconTabButton.IconTabButton_C.OnUnhovered
struct UIconTabButton_C_OnUnhovered_Params
{
};

// Function IconTabButton.IconTabButton_C.OnEnabled
struct UIconTabButton_C_OnEnabled_Params
{
};

// Function IconTabButton.IconTabButton_C.OnDisabled
struct UIconTabButton_C_OnDisabled_Params
{
};

// Function IconTabButton.IconTabButton_C.ExecuteUbergraph_IconTabButton
struct UIconTabButton_C_ExecuteUbergraph_IconTabButton_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
