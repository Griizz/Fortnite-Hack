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

// Function SlotLibrary.SlotLibrary_C.Get Attribute Modifier Header Text
struct USlotLibrary_C_Get_Attribute_Modifier_Header_Text_Params
{
	struct FFortAttributeInfo                          Attribute_Info;                                           // (CPF_Parm)
	struct FGameplayTagContainer                       Required_Tags;                                            // (CPF_Parm)
	struct FText                                       Required_Gameplay_Tags_Description;                       // (CPF_Parm)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function SlotLibrary.SlotLibrary_C.Create Attribute Modifier Tool Tip
struct USlotLibrary_C_Create_Attribute_Modifier_Tool_Tip_Params
{
	class APlayerController*                           Owning_Player;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortAttributeInfo                          Attribute_Info;                                           // (CPF_Parm)
	struct FGameplayTagContainer                       Required_Gameplay_Tags;                                   // (CPF_Parm)
	struct FText                                       Required_Gameplay_Tags_Description;                       // (CPF_Parm)
	struct FText                                       Modifier_Source;                                          // (CPF_Parm)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidget*                                     Result;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SlotLibrary.SlotLibrary_C.Get Traits Of Workers
struct USlotLibrary_C_Get_Traits_Of_Workers_Params
{
	TArray<class UFortWorker*>                         Workers;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       Chief_Personality;                                        // (CPF_Parm, CPF_OutParm)
	struct FGameplayTagContainer                       Crew_Personalities;                                       // (CPF_Parm, CPF_OutParm)
	struct FGameplayTagContainer                       Crew_Set_Bonuses;                                         // (CPF_Parm, CPF_OutParm)
};

// Function SlotLibrary.SlotLibrary_C.Calculate Current Pulsing Highlight Color
struct USlotLibrary_C_Calculate_Current_Pulsing_Highlight_Color_Params
{
	struct FLinearColor                                Base_Color;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FLinearColor                                Hightlight_Color;                                         // (CPF_Parm, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Current_Color;                                            // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function SlotLibrary.SlotLibrary_C.EnsureIconBrush
struct USlotLibrary_C_EnsureIconBrush_Params
{
	struct FFortMultiSizeBrush                         Multi_size_Brush;                                         // (CPF_Parm)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // (CPF_Parm, CPF_OutParm)
};

// Function SlotLibrary.SlotLibrary_C.InitItemWidget
struct USlotLibrary_C_InitItemWidget_Params
{
	class UFortItemWidget*                             Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
