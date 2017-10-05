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
	EFortStatValueDisplayType                          Display_Type;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortBuffState                                     Buff_State;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
