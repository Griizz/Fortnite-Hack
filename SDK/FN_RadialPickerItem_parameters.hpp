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

// Function RadialPickerItem.RadialPickerItem_C.SetKeybindVisibility
struct URadialPickerItem_C_SetKeybindVisibility_Params
{
};

// Function RadialPickerItem.RadialPickerItem_C.SetShowImageAndLabel
struct URadialPickerItem_C_SetShowImageAndLabel_Params
{
	bool                                               ShowImageAndLabel;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RadialPickerItem.RadialPickerItem_C.SetItemContent
struct URadialPickerItem_C_SetItemContent_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Option_Enabled;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Radial_Item_Index;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RadialPickerItem.RadialPickerItem_C.SetSelected
struct URadialPickerItem_C_SetSelected_Params
{
	bool                                               IsSelected;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RadialPickerItem.RadialPickerItem_C.SetImageAndLabelContent
struct URadialPickerItem_C_SetImageAndLabelContent_Params
{
	struct FText                                       Text;                                                     // (CPF_Parm)
	struct FSlateBrush                                 Brush;                                                    // (CPF_Parm)
	bool                                               Option_Enabled;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RadialItemIndex;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RadialPickerItem.RadialPickerItem_C.Construct
struct URadialPickerItem_C_Construct_Params
{
};

// Function RadialPickerItem.RadialPickerItem_C.ExecuteUbergraph_RadialPickerItem
struct URadialPickerItem_C_ExecuteUbergraph_RadialPickerItem_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
