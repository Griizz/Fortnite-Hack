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

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleCursorModeChanged
struct UPinnedSchematicItemWidget_C_HandleCursorModeChanged_Params
{
	bool                                               CursorModeEnabled;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ActionName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UUserWidget*                                 CursorModeContentWidget;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.UnbindDelegates
struct UPinnedSchematicItemWidget_C_UnbindDelegates_Params
{
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.ClearPinnedSchematic
struct UPinnedSchematicItemWidget_C_ClearPinnedSchematic_Params
{
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleItemChanged
struct UPinnedSchematicItemWidget_C_HandleItemChanged_Params
{
	bool                                               ItemChanged;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               AmmoChanged;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IngredientsChanged;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.SetupIngredients
struct UPinnedSchematicItemWidget_C_SetupIngredients_Params
{
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleWorldItemListChanged
struct UPinnedSchematicItemWidget_C_HandleWorldItemListChanged_Params
{
	TArray<class UFortWorldItem*>                      ItemsAdded;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<class UFortWorldItem*>                      ItemsRemoved;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleOnSchematicUnlocked
struct UPinnedSchematicItemWidget_C_HandleOnSchematicUnlocked_Params
{
	class UFortSchematicItem*                          Schematic;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.BindDelegates
struct UPinnedSchematicItemWidget_C_BindDelegates_Params
{
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.SetPinnedSchematic
struct UPinnedSchematicItemWidget_C_SetPinnedSchematic_Params
{
	class UFortSchematicItem*                          NewPinnedSchematic;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.Refresh
struct UPinnedSchematicItemWidget_C_Refresh_Params
{
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.PinButton_Clicked
struct UPinnedSchematicItemWidget_C_PinButton_Clicked_Params
{
	class UFortBaseButton*                             NewParam;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.ExecuteUbergraph_PinnedSchematicItemWidget
struct UPinnedSchematicItemWidget_C_ExecuteUbergraph_PinnedSchematicItemWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
