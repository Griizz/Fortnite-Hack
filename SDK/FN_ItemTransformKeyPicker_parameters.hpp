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

// Function ItemTransformKeyPicker.ItemTransformKeyPicker_C.NavigateToFirstItem
struct UItemTransformKeyPicker_C_NavigateToFirstItem_Params
{
};

// Function ItemTransformKeyPicker.ItemTransformKeyPicker_C.NavigateToSelectedItem
struct UItemTransformKeyPicker_C_NavigateToSelectedItem_Params
{
	class UFortItem*                                   InItem;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformKeyPicker.ItemTransformKeyPicker_C.GetSelectedKey
struct UItemTransformKeyPicker_C_GetSelectedKey_Params
{
	class UFortItem*                                   SelectedKey;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformKeyPicker.ItemTransformKeyPicker_C.SetSelectedKey
struct UItemTransformKeyPicker_C_SetSelectedKey_Params
{
	class UFortAccountItem*                            AccountKey;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
