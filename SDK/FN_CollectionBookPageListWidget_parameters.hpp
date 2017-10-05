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

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.Update Available Slots Widget
struct UCollectionBookPageListWidget_C_Update_Available_Slots_Widget_Params
{
	int                                                NumAvailableSlots;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.UpdateAvailableSlotsBorderColors
struct UCollectionBookPageListWidget_C_UpdateAvailableSlotsBorderColors_Params
{
};

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.SetupAsCategory
struct UCollectionBookPageListWidget_C_SetupAsCategory_Params
{
	class UFortCollectionBookCategory**                Category;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.SetupAsPage
struct UCollectionBookPageListWidget_C_SetupAsPage_Params
{
	class UFortCollectionBookPage**                    Page;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnExpansionChanged
struct UCollectionBookPageListWidget_C_OnExpansionChanged_Params
{
	bool*                                              bExpanded;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.PreConstruct
struct UCollectionBookPageListWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnPageDetailsUpdated
struct UCollectionBookPageListWidget_C_OnPageDetailsUpdated_Params
{
	int*                                               NumAvailableSlots;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortCollectionBookState*                          State;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnSelectionChanged
struct UCollectionBookPageListWidget_C_OnSelectionChanged_Params
{
	class UCommonButton*                               ThisButton;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSelected;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.ExecuteUbergraph_CollectionBookPageListWidget
struct UCollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
