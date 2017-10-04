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

// Function KeybindWidget.KeybindWidget_C.ShowHoldBackPlate
struct UKeybindWidget_C_ShowHoldBackPlate_Params
{
};

// Function KeybindWidget.KeybindWidget_C.SetOpacity
struct UKeybindWidget_C_SetOpacity_Params
{
	float                                              InOpacity;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KeybindWidget.KeybindWidget_C.Get Bound Action
struct UKeybindWidget_C_Get_Bound_Action_Params
{
	struct FName                                       Action;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KeybindWidget.KeybindWidget_C.Set Brush Size
struct UKeybindWidget_C_Set_Brush_Size_Params
{
	TEnumAsByte<EFortBrushSize>                        Brush_Size;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KeybindWidget.KeybindWidget_C.Get Brush Size
struct UKeybindWidget_C_Get_Brush_Size_Params
{
	TEnumAsByte<EFortBrushSize>                        Brush_Size;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KeybindWidget.KeybindWidget_C.Construct
struct UKeybindWidget_C_Construct_Params
{
};

// Function KeybindWidget.KeybindWidget_C.Update
struct UKeybindWidget_C_Update_Params
{
};

// Function KeybindWidget.KeybindWidget_C.PreConstruct
struct UKeybindWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KeybindWidget.KeybindWidget_C.UpdateFrameSize
struct UKeybindWidget_C_UpdateFrameSize_Params
{
};

// Function KeybindWidget.KeybindWidget_C.ExecuteUbergraph_KeybindWidget
struct UKeybindWidget_C_ExecuteUbergraph_KeybindWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
