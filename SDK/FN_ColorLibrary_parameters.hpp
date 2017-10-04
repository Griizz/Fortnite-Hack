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

// Function ColorLibrary.ColorLibrary_C.Get Conning Color For Specific Difficulty
struct UColorLibrary_C_Get_Conning_Color_For_Specific_Difficulty_Params
{
	int                                                Difficulty_Value;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Difficulty_Linear_Color;                                  // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               Invalid;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ColorLibrary.ColorLibrary_C.Get Conning Color From Difficulty Value
struct UColorLibrary_C_Get_Conning_Color_From_Difficulty_Value_Params
{
	int                                                Skill_Level;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Content_Difficulty;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Difficulty_Linear_Color;                                  // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               Success;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                HexConningColor;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ToolTipText;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function ColorLibrary.ColorLibrary_C.Get HarvestWeakPoint Color
struct UColorLibrary_C_Get_HarvestWeakPoint_Color_Params
{
	struct FColorStylesheet                            Stylesheet;                                               // (CPF_Parm)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                StyleSheetOut;                                            // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function ColorLibrary.ColorLibrary_C.Get Base & Buff Colors
struct UColorLibrary_C_Get_Base___Buff_Colors_Params
{
	struct FColorStylesheet                            Stylesheet;                                               // (CPF_Parm)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Base;                                                     // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	struct FLinearColor                                buff;                                                     // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function ColorLibrary.ColorLibrary_C.Get Bolt Elemental Color
struct UColorLibrary_C_Get_Bolt_Elemental_Color_Params
{
	struct FColorStylesheet                            Stylesheet;                                               // (CPF_Parm)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function ColorLibrary.ColorLibrary_C.Get Ice Elemental Color
struct UColorLibrary_C_Get_Ice_Elemental_Color_Params
{
	struct FColorStylesheet                            Stylesheet;                                               // (CPF_Parm)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function ColorLibrary.ColorLibrary_C.Get Fire Elemental Color
struct UColorLibrary_C_Get_Fire_Elemental_Color_Params
{
	struct FColorStylesheet                            Stylesheet;                                               // (CPF_Parm)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function ColorLibrary.ColorLibrary_C.Get Unique Color
struct UColorLibrary_C_Get_Unique_Color_Params
{
	struct FColorStylesheet                            Stylesheet;                                               // (CPF_Parm)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function ColorLibrary.ColorLibrary_C.Get Debuff Color
struct UColorLibrary_C_Get_Debuff_Color_Params
{
	struct FColorStylesheet                            Stylesheet;                                               // (CPF_Parm)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function ColorLibrary.ColorLibrary_C.Get Buff Color
struct UColorLibrary_C_Get_Buff_Color_Params
{
	struct FColorStylesheet                            Stylesheet;                                               // (CPF_Parm)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
