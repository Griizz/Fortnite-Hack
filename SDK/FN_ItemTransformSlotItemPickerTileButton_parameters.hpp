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

// Function ItemTransformSlotItemPickerTileButton.ItemTransformSlotItemPickerTileButton_C.SetData
struct UItemTransformSlotItemPickerTileButton_C_SetData_Params
{
	class UObject**                                    InData;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonListView**                            OwningList;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformSlotItemPickerTileButton.ItemTransformSlotItemPickerTileButton_C.ExecuteUbergraph_ItemTransformSlotItemPickerTileButton
struct UItemTransformSlotItemPickerTileButton_C_ExecuteUbergraph_ItemTransformSlotItemPickerTileButton_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
