#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

//#include "../SDK.hpp"
#include"FN_FortUIStylesheet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StyleLibrary.StyleLibrary_C.Get Conning Color For Specific Difficulty
struct UStyleLibrary_C_Get_Conning_Color_For_Specific_Difficulty_Params
{
	int                                                Difficulty_Value;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Difficulty_Linear_Color;                                  // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               Invalid;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StyleLibrary.StyleLibrary_C.Get Conning Color From Difficulty Value
struct UStyleLibrary_C_Get_Conning_Color_From_Difficulty_Value_Params
{
	int                                                Player_Skill_Level;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Content_Difficulty_Level;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameDifficultyInfo                         Game_Difficulty_Info;                                     // (CPF_Parm)
	int                                                Content_Skill_Points;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Difficulty_Linear_Color;                                  // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               Success;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ToolTipText;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	int                                                DifficultyValue;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StyleLibrary.StyleLibrary_C.Get HarvestWeakPoint Color
struct UStyleLibrary_C_Get_HarvestWeakPoint_Color_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                               // (CPF_Parm)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                StyleSheetOut;                                            // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function StyleLibrary.StyleLibrary_C.ResizeBrush
struct UStyleLibrary_C_ResizeBrush_Params
{
	TEnumAsByte<EFortBrushSize>                        BrushSize;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FSlateBrush                                 BaseBrush;                                                // (CPF_Parm)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FSlateBrush                                 NewParam;                                                 // (CPF_Parm, CPF_OutParm)
};

// Function StyleLibrary.StyleLibrary_C.Get Base & Buff Colors
struct UStyleLibrary_C_Get_Base___Buff_Colors_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                               // (CPF_Parm)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Base;                                                     // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	struct FLinearColor                                buff;                                                     // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function StyleLibrary.StyleLibrary_C.Get Bolt Elemental Color
struct UStyleLibrary_C_Get_Bolt_Elemental_Color_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                               // (CPF_Parm)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function StyleLibrary.StyleLibrary_C.Get Ice Elemental Color
struct UStyleLibrary_C_Get_Ice_Elemental_Color_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                               // (CPF_Parm)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function StyleLibrary.StyleLibrary_C.Get Fire Elemental Color
struct UStyleLibrary_C_Get_Fire_Elemental_Color_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                               // (CPF_Parm)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function StyleLibrary.StyleLibrary_C.Get Unique Color
struct UStyleLibrary_C_Get_Unique_Color_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                               // (CPF_Parm)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function StyleLibrary.StyleLibrary_C.Get Item Size
struct UStyleLibrary_C_Get_Item_Size_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                               // (CPF_Parm)
	TEnumAsByte<EFortBrushSize>                        Brush_Size;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   Item_Size;                                                // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function StyleLibrary.StyleLibrary_C.Get Debuff Color
struct UStyleLibrary_C_Get_Debuff_Color_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                               // (CPF_Parm)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function StyleLibrary.StyleLibrary_C.Get Buff Color
struct UStyleLibrary_C_Get_Buff_Color_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                               // (CPF_Parm)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function StyleLibrary.StyleLibrary_C.Get Item Icon Size
struct UStyleLibrary_C_Get_Item_Icon_Size_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                               // (CPF_Parm)
	TEnumAsByte<EFortBrushSize>                        Brush_Size;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   Icon_Size;                                                // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function StyleLibrary.StyleLibrary_C.Get Standard Icon Size
struct UStyleLibrary_C_Get_Standard_Icon_Size_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                               // (CPF_Parm)
	TEnumAsByte<EFortBrushSize>                        Brush_Size;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   Icon_Size;                                                // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function StyleLibrary.StyleLibrary_C.Get Theme
struct UStyleLibrary_C_Get_Theme_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                               // (CPF_Parm)
	TEnumAsByte<EFortUITheme>                          Theme_Type;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortUITheme                                Theme;                                                    // (CPF_Parm, CPF_OutParm)
};

// Function StyleLibrary.StyleLibrary_C.Get Theme Color
struct UStyleLibrary_C_Get_Theme_Color_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                               // (CPF_Parm)
	TEnumAsByte<EFortUITheme>                          Theme_Type;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortUIThemeColor>                     Color_Type;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Theme_Color;                                              // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
