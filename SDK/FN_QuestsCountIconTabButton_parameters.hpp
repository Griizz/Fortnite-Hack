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

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Update Bang State
struct UQuestsCountIconTabButton_C_Update_Bang_State_Params
{
	bool                                               bBangEnabled;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Update Text
struct UQuestsCountIconTabButton_C_Update_Text_Params
{
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.SetTutorialBorderStyle
struct UQuestsCountIconTabButton_C_SetTutorialBorderStyle_Params
{
	class UClass*                                      BorderStyle;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.ShowText
struct UQuestsCountIconTabButton_C_ShowText_Params
{
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Set Icon
struct UQuestsCountIconTabButton_C_Set_Icon_Params
{
	struct FSlateBrush                                 IconBrush;                                                // (CPF_Parm)
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Set Text
struct UQuestsCountIconTabButton_C_Set_Text_Params
{
	struct FText                                       ButtonText;                                               // (CPF_Parm)
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnCurrentTextStyleChanged
struct UQuestsCountIconTabButton_C_OnCurrentTextStyleChanged_Params
{
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.PreConstruct
struct UQuestsCountIconTabButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.SetTabLabelInfo
struct UQuestsCountIconTabButton_C_SetTabLabelInfo_Params
{
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnSelected
struct UQuestsCountIconTabButton_C_OnSelected_Params
{
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnDeselected
struct UQuestsCountIconTabButton_C_OnDeselected_Params
{
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Construct
struct UQuestsCountIconTabButton_C_Construct_Params
{
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnHovered
struct UQuestsCountIconTabButton_C_OnHovered_Params
{
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnUnhovered
struct UQuestsCountIconTabButton_C_OnUnhovered_Params
{
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Handle Quest Count Updated
struct UQuestsCountIconTabButton_C_Handle_Quest_Count_Updated_Params
{
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.ExecuteUbergraph_QuestsCountIconTabButton
struct UQuestsCountIconTabButton_C_ExecuteUbergraph_QuestsCountIconTabButton_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
