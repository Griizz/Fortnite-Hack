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

// Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.Truncate Integer Value
struct UItemUIFunctionLibrary_C_Truncate_Integer_Value_Params
{
	int                                                Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Min_Fractional_Digits;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Max_Fractional_Digits;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Formatted_Value;                                          // (CPF_Parm, CPF_OutParm)
};

// Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.Convert Tier To Integer
struct UItemUIFunctionLibrary_C_Convert_Tier_To_Integer_Params
{
	TEnumAsByte<EFortItemTier>                         Tier;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Numeric_Tier;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.ParseLevelRequiredFromString
struct UItemUIFunctionLibrary_C_ParseLevelRequiredFromString_Params
{
	struct FString                                     inString;                                                 // (CPF_Parm, CPF_ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                outInt;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.Add Alteration Widgets
struct UItemUIFunctionLibrary_C_Add_Alteration_Widgets_Params
{
	class UVerticalBox*                                Host_Widget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PreviewLevel;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ShowInVaultDetails;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
