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

// Function TooltipLibrary.TooltipLibrary_C.CreateXPTooltip
struct UTooltipLibrary_C_CreateXPTooltip_Params
{
	class APlayerController*                           Owner;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Header;                                                   // (CPF_Parm)
	struct FText                                       CommanderXP;                                              // (CPF_Parm)
	struct FText                                       BoostXP;                                                  // (CPF_Parm)
	struct FText                                       RestXP;                                                   // (CPF_Parm)
	struct FText                                       Body;                                                     // (CPF_Parm)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonUserWidget*                           Out;                                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TooltipLibrary.TooltipLibrary_C.Create Core Stat Tooltip
struct UTooltipLibrary_C_Create_Core_Stat_Tooltip_Params
{
	class APlayerController*                           Owning_Player;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHeroCoreStat                               Data;                                                     // (CPF_Parm)
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UUserWidget*                                 Output;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TooltipLibrary.TooltipLibrary_C.Create Basic Multi Line Tooltip
struct UTooltipLibrary_C_Create_Basic_Multi_Line_Tooltip_Params
{
	class APlayerController*                           Owning_Player;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FText>                               Body_Text;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	struct FText                                       Header_Text;                                              // (CPF_Parm)
	class USlateBrushAsset*                            Icon_Brush;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UUserWidget*                                 Output;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TooltipLibrary.TooltipLibrary_C.Create Compare Item Tooltip
struct UTooltipLibrary_C_Create_Compare_Item_Tooltip_Params
{
	class APlayerController*                           Owning_Player;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Header_Text;                                              // (CPF_Parm)
	class USlateBrushAsset*                            Header_Icon;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortItem*                                   ComparedItem;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidget*                                     Return_Value;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TooltipLibrary.TooltipLibrary_C.Create Item Tooltip
struct UTooltipLibrary_C_Create_Item_Tooltip_Params
{
	class APlayerController*                           Owning_Player;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Header_Text;                                              // (CPF_Parm)
	class USlateBrushAsset*                            Header_Icon;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OverrideQuantity;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidget*                                     Return_Value;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TooltipLibrary.TooltipLibrary_C.Set Enabled And Tooltip Text
struct UTooltipLibrary_C_Set_Enabled_And_Tooltip_Text_Params
{
	class UWidget*                                     Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Enabled;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Tooltip_Text;                                             // (CPF_Parm)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TooltipLibrary.TooltipLibrary_C.Create Custom Tooltip
struct UTooltipLibrary_C_Create_Custom_Tooltip_Params
{
	class APlayerController*                           Owning_Player;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Header_Text;                                              // (CPF_Parm)
	class USlateBrushAsset*                            Icon_Brush;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UUserWidget*                                 Output;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TooltipLibrary.TooltipLibrary_C.Create Basic Tooltip
struct UTooltipLibrary_C_Create_Basic_Tooltip_Params
{
	class APlayerController*                           Owning_Player;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Body_Text;                                                // (CPF_Parm)
	struct FText                                       Header_Text;                                              // (CPF_Parm)
	class USlateBrushAsset*                            Icon_Brush;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UUserWidget*                                 Output;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
