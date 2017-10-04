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

// Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateMuzzleFX
struct AB_Ranged_Generic_C_DeactivateMuzzleFX_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateReloadSmokeFX
struct AB_Ranged_Generic_C_DeactivateReloadSmokeFX_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateReloadSmokeFX
struct AB_Ranged_Generic_C_ActivateReloadSmokeFX_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateShellsFX
struct AB_Ranged_Generic_C_ActivateShellsFX_Params
{
	bool                                               Bool;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateShellsFX
struct AB_Ranged_Generic_C_DeactivateShellsFX_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.SetupShellFX
struct AB_Ranged_Generic_C_SetupShellFX_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.UpdateShellEmittersFX
struct AB_Ranged_Generic_C_UpdateShellEmittersFX_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Play Reload FX
struct AB_Ranged_Generic_C_Muzzle_Play_Reload_FX_Params
{
	TEnumAsByte<EFortReloadFXState>                    Selection;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Flash FX
struct AB_Ranged_Generic_C_Muzzle_Flash_FX_Params
{
	bool                                               Condition;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.SetWpnRarity
struct AB_Ranged_Generic_C_SetWpnRarity_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.AddRandomScale
struct AB_Ranged_Generic_C_AddRandomScale_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.UserConstructionScript
struct AB_Ranged_Generic_C_UserConstructionScript_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__FinishedFunc
struct AB_Ranged_Generic_C_AnimateScopePostProcess__FinishedFunc_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__UpdateFunc
struct AB_Ranged_Generic_C_AnimateScopePostProcess__UpdateFunc_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_4DE6158742ED7EE528BC98A240A81632
struct AB_Ranged_Generic_C_OnLoaded_4DE6158742ED7EE528BC98A240A81632_Params
{
	class UObject*                                     Loaded;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_3A9BBE884A5C5966375089938B7DC0CA
struct AB_Ranged_Generic_C_OnLoaded_3A9BBE884A5C5966375089938B7DC0CA_Params
{
	class UObject*                                     Loaded;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_83457BA843174AC6288682A342EBEAD9
struct AB_Ranged_Generic_C_OnLoaded_83457BA843174AC6288682A342EBEAD9_Params
{
	class UObject*                                     Loaded;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_5B08633343C4DA6FF40449A8A36357E4
struct AB_Ranged_Generic_C_OnLoaded_5B08633343C4DA6FF40449A8A36357E4_Params
{
	class UObject*                                     Loaded;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayWeaponFireFX
struct AB_Ranged_Generic_C_OnPlayWeaponFireFX_Params
{
	bool*                                              bPersistentFire;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool*                                              bSecondaryFire;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnStopWeaponFireFX
struct AB_Ranged_Generic_C_OnStopWeaponFireFX_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayReloadFX
struct AB_Ranged_Generic_C_OnPlayReloadFX_Params
{
	TEnumAsByte<EFortReloadFXState>*                   ReloadStage;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnSetTargeting
struct AB_Ranged_Generic_C_OnSetTargeting_Params
{
	bool*                                              bNewIsTargeting;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.K2_OnUnEquip
struct AB_Ranged_Generic_C_K2_OnUnEquip_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.InitializeScopeVariables
struct AB_Ranged_Generic_C_InitializeScopeVariables_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.Update Enemy Custom Depths
struct AB_Ranged_Generic_C_Update_Enemy_Custom_Depths_Params
{
	bool                                               Enable_Or_Disable;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StencilBufferValue;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponAttached
struct AB_Ranged_Generic_C_OnWeaponAttached_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitAlteration
struct AB_Ranged_Generic_C_OnInitAlteration_Params
{
	class UFortAlterationItemDefinition**              NewAlteration;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitCosmeticAlterations
struct AB_Ranged_Generic_C_OnInitCosmeticAlterations_Params
{
	struct FFortCosmeticModification*                  CosmeticMod;                                              // (CPF_Parm)
	class UMaterialInstanceDynamic**                   DynamicMaterialInstance;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.ShellsON_(onPump)
struct AB_Ranged_Generic_C_ShellsON__onPump__Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnEquippedWeaponDestory
struct AB_Ranged_Generic_C_OnEquippedWeaponDestory_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough
struct AB_Ranged_Generic_C_SetWeaponPierceThrough_Params
{
	bool                                               Enable;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TargetLimit;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough_ClientRep
struct AB_Ranged_Generic_C_SetWeaponPierceThrough_ClientRep_Params
{
	bool                                               Enable;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TargetLimit;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.ExecuteUbergraph_B_Ranged_Generic
struct AB_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
