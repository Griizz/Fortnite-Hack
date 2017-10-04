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

// Function BasicGradientFill.BasicGradientFill_C.Set Brush Size
struct UBasicGradientFill_C_Set_Brush_Size_Params
{
	struct FVector2D                                   Brush_Size;                                               // (CPF_Parm, CPF_IsPlainOldData)
};

// Function BasicGradientFill.BasicGradientFill_C.Set Fill
struct UBasicGradientFill_C_Set_Fill_Params
{
	struct FLinearColor                                Color_1;                                                  // (CPF_Parm, CPF_IsPlainOldData)
	struct FLinearColor                                Color_2;                                                  // (CPF_Parm, CPF_IsPlainOldData)
	float                                              Rotation__0___1_;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BasicGradientFill.BasicGradientFill_C.PreConstruct
struct UBasicGradientFill_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BasicGradientFill.BasicGradientFill_C.ExecuteUbergraph_BasicGradientFill
struct UBasicGradientFill_C_ExecuteUbergraph_BasicGradientFill_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
