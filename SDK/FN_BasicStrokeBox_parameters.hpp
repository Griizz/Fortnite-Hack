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

// Function BasicStrokeBox.BasicStrokeBox_C.Customize
struct UBasicStrokeBox_C_Customize_Params
{
	int                                                Shape_Style;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Fill_Color;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FLinearColor                                Stroke_Color;                                             // (CPF_Parm, CPF_IsPlainOldData)
};

// Function BasicStrokeBox.BasicStrokeBox_C.Redraw
struct UBasicStrokeBox_C_Redraw_Params
{
};

// Function BasicStrokeBox.BasicStrokeBox_C.PreConstruct
struct UBasicStrokeBox_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BasicStrokeBox.BasicStrokeBox_C.ExecuteUbergraph_BasicStrokeBox
struct UBasicStrokeBox_C_ExecuteUbergraph_BasicStrokeBox_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
