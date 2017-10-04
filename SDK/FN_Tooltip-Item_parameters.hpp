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

// Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Text Visibility
struct UTooltip_Item_C_Get_Tooltip_Header_Text_Visibility_Params
{
};

// Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Icon Visibility
struct UTooltip_Item_C_Get_Tooltip_Header_Icon_Visibility_Params
{
};

// Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Visibility
struct UTooltip_Item_C_Get_Tooltip_Header_Visibility_Params
{
};

// Function Tooltip-Item.Tooltip-Item_C.Get Theme Color [Normal]
struct UTooltip_Item_C_Get_Theme_Color__Normal__Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Tooltip-Item.Tooltip-Item_C.Get Icon Brush
struct UTooltip_Item_C_Get_Icon_Brush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Tooltip-Item.Tooltip-Item_C.Construct
struct UTooltip_Item_C_Construct_Params
{
};

// Function Tooltip-Item.Tooltip-Item_C.ExecuteUbergraph_Tooltip-Item
struct UTooltip_Item_C_ExecuteUbergraph_Tooltip_Item_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
