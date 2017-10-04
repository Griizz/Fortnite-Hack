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

// Function LegacyBasicGradientFill.LegacyBasicGradientFill_C.Set Brush Size
struct ULegacyBasicGradientFill_C_Set_Brush_Size_Params
{
	struct FVector2D                                   Brush_Size;                                               // (CPF_Parm, CPF_IsPlainOldData)
};

// Function LegacyBasicGradientFill.LegacyBasicGradientFill_C.Set Fill
struct ULegacyBasicGradientFill_C_Set_Fill_Params
{
	struct FLinearColor                                Color_1;                                                  // (CPF_Parm, CPF_IsPlainOldData)
	struct FLinearColor                                Color_2;                                                  // (CPF_Parm, CPF_IsPlainOldData)
	float                                              Rotation__0___1_;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LegacyBasicGradientFill.LegacyBasicGradientFill_C.PreConstruct
struct ULegacyBasicGradientFill_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LegacyBasicGradientFill.LegacyBasicGradientFill_C.ExecuteUbergraph_LegacyBasicGradientFill
struct ULegacyBasicGradientFill_C_ExecuteUbergraph_LegacyBasicGradientFill_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
