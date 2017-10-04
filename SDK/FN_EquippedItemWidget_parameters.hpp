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

// Function EquippedItemWidget.EquippedItemWidget_C.GetCurrentAmmoText
struct UEquippedItemWidget_C_GetCurrentAmmoText_Params
{
	int                                                CurrentAmmoCount;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       CurrentAmmoText;                                          // (CPF_Parm, CPF_OutParm)
};

// Function EquippedItemWidget.EquippedItemWidget_C.UpdateResourceCount
struct UEquippedItemWidget_C_UpdateResourceCount_Params
{
};

// Function EquippedItemWidget.EquippedItemWidget_C.UpdateCurrentAmmo
struct UEquippedItemWidget_C_UpdateCurrentAmmo_Params
{
	int                                                LocalCount;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LocalRemaining;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EquippedItemWidget.EquippedItemWidget_C.UpdateAmmoCapacity
struct UEquippedItemWidget_C_UpdateAmmoCapacity_Params
{
};

// Function EquippedItemWidget.EquippedItemWidget_C.UpdateWidgetColor
struct UEquippedItemWidget_C_UpdateWidgetColor_Params
{
	bool                                               HasAmmo;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EquippedItemWidget.EquippedItemWidget_C.UpdateVisibility
struct UEquippedItemWidget_C_UpdateVisibility_Params
{
};

// Function EquippedItemWidget.EquippedItemWidget_C.FullUpdateResourceDisplay
struct UEquippedItemWidget_C_FullUpdateResourceDisplay_Params
{
};

// Function EquippedItemWidget.EquippedItemWidget_C.FullUpdateAmmoDisplay
struct UEquippedItemWidget_C_FullUpdateAmmoDisplay_Params
{
};

// Function EquippedItemWidget.EquippedItemWidget_C.Construct
struct UEquippedItemWidget_C_Construct_Params
{
};

// Function EquippedItemWidget.EquippedItemWidget_C.OnWeaponEquipped
struct UEquippedItemWidget_C_OnWeaponEquipped_Params
{
	class AFortWeapon*                                 NewWeapon;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AFortWeapon*                                 PrevWeapon;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EquippedItemWidget.EquippedItemWidget_C.OnLocalAmmoChanged
struct UEquippedItemWidget_C_OnLocalAmmoChanged_Params
{
	int                                                LocalCount;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LocalRemaining;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EquippedItemWidget.EquippedItemWidget_C.OnWorldItemsChanged
struct UEquippedItemWidget_C_OnWorldItemsChanged_Params
{
};

// Function EquippedItemWidget.EquippedItemWidget_C.OnBuildingMaterialCycled
struct UEquippedItemWidget_C_OnBuildingMaterialCycled_Params
{
};

// Function EquippedItemWidget.EquippedItemWidget_C.ExecuteUbergraph_EquippedItemWidget
struct UEquippedItemWidget_C_ExecuteUbergraph_EquippedItemWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
