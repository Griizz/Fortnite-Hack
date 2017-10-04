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

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.GetCurrentAmmoText
struct UAthenaEquippedItemWidget_C_GetCurrentAmmoText_Params
{
	int                                                CurrentAmmoCount;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       CurrentAmmoText;                                          // (CPF_Parm, CPF_OutParm)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UpdateResourceCount
struct UAthenaEquippedItemWidget_C_UpdateResourceCount_Params
{
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UpdateCurrentAmmo
struct UAthenaEquippedItemWidget_C_UpdateCurrentAmmo_Params
{
	int                                                LocalCount;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LocalRemaining;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UpdateAmmoCapacity
struct UAthenaEquippedItemWidget_C_UpdateAmmoCapacity_Params
{
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UpdateWidgetColor
struct UAthenaEquippedItemWidget_C_UpdateWidgetColor_Params
{
	bool                                               HasAmmo;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UpdateVisibility
struct UAthenaEquippedItemWidget_C_UpdateVisibility_Params
{
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.FullUpdateResourceDisplay
struct UAthenaEquippedItemWidget_C_FullUpdateResourceDisplay_Params
{
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.FullUpdateAmmoDisplay
struct UAthenaEquippedItemWidget_C_FullUpdateAmmoDisplay_Params
{
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.Construct
struct UAthenaEquippedItemWidget_C_Construct_Params
{
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.OnWeaponEquipped
struct UAthenaEquippedItemWidget_C_OnWeaponEquipped_Params
{
	class AFortWeapon*                                 NewWeapon;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AFortWeapon*                                 PrevWeapon;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.OnLocalAmmoChanged
struct UAthenaEquippedItemWidget_C_OnLocalAmmoChanged_Params
{
	int                                                LocalCount;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LocalRemaining;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.OnWorldItemsChanged
struct UAthenaEquippedItemWidget_C_OnWorldItemsChanged_Params
{
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.OnBuildingMaterialCycled
struct UAthenaEquippedItemWidget_C_OnBuildingMaterialCycled_Params
{
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.ExecuteUbergraph_AthenaEquippedItemWidget
struct UAthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
