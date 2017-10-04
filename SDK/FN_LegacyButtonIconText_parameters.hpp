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

// Function LegacyButtonIconText.LegacyButtonIconText_C.Outro
struct ULegacyButtonIconText_C_Outro_Params
{
};

// Function LegacyButtonIconText.LegacyButtonIconText_C.Intro
struct ULegacyButtonIconText_C_Intro_Params
{
};

// Function LegacyButtonIconText.LegacyButtonIconText_C.Toggle
struct ULegacyButtonIconText_C_Toggle_Params
{
	bool                                               Show_Button;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LegacyButtonIconText.LegacyButtonIconText_C.Set Alignment
struct ULegacyButtonIconText_C_Set_Alignment_Params
{
	TEnumAsByte<ETextJustify>                          Align;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LegacyButtonIconText.LegacyButtonIconText_C.Update Size Box
struct ULegacyButtonIconText_C_Update_Size_Box_Params
{
};

// Function LegacyButtonIconText.LegacyButtonIconText_C.Get Primary Color
struct ULegacyButtonIconText_C_Get_Primary_Color_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function LegacyButtonIconText.LegacyButtonIconText_C.Get Secondary Color
struct ULegacyButtonIconText_C_Get_Secondary_Color_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function LegacyButtonIconText.LegacyButtonIconText_C.Update Padding
struct ULegacyButtonIconText_C_Update_Padding_Params
{
};

// Function LegacyButtonIconText.LegacyButtonIconText_C.Set Icon
struct ULegacyButtonIconText_C_Set_Icon_Params
{
	struct FSlateBrush                                 InBrush;                                                  // (CPF_Parm)
	bool                                               RefreshPadding;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LegacyButtonIconText.LegacyButtonIconText_C.Set Text
struct ULegacyButtonIconText_C_Set_Text_Params
{
	struct FText                                       InText;                                                   // (CPF_Parm)
	bool                                               RefreshPadding;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LegacyButtonIconText.LegacyButtonIconText_C.PreConstruct
struct ULegacyButtonIconText_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LegacyButtonIconText.LegacyButtonIconText_C.OnMouseEnter
struct ULegacyButtonIconText_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function LegacyButtonIconText.LegacyButtonIconText_C.OnMouseLeave
struct ULegacyButtonIconText_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function LegacyButtonIconText.LegacyButtonIconText_C.ExecuteUbergraph_LegacyButtonIconText
struct ULegacyButtonIconText_C_ExecuteUbergraph_LegacyButtonIconText_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LegacyButtonIconText.LegacyButtonIconText_C.On Mouse Hovered Changed__DelegateSignature
struct ULegacyButtonIconText_C_On_Mouse_Hovered_Changed__DelegateSignature_Params
{
	bool                                               Is_Hovered;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
