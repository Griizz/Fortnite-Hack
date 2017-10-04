// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateMuzzleFX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::DeactivateMuzzleFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateMuzzleFX");

	AB_Ranged_Generic_C_DeactivateMuzzleFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateReloadSmokeFX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::DeactivateReloadSmokeFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateReloadSmokeFX");

	AB_Ranged_Generic_C_DeactivateReloadSmokeFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateReloadSmokeFX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::ActivateReloadSmokeFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateReloadSmokeFX");

	AB_Ranged_Generic_C_ActivateReloadSmokeFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateShellsFX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Bool                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::ActivateShellsFX(bool Bool)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateShellsFX");

	AB_Ranged_Generic_C_ActivateShellsFX_Params params;
	params.Bool = Bool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateShellsFX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::DeactivateShellsFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateShellsFX");

	AB_Ranged_Generic_C_DeactivateShellsFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetupShellFX
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::SetupShellFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.SetupShellFX");

	AB_Ranged_Generic_C_SetupShellFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.UpdateShellEmittersFX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::UpdateShellEmittersFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.UpdateShellEmittersFX");

	AB_Ranged_Generic_C_UpdateShellEmittersFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Play Reload FX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortReloadFXState> Selection                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::Muzzle_Play_Reload_FX(TEnumAsByte<EFortReloadFXState> Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Play Reload FX");

	AB_Ranged_Generic_C_Muzzle_Play_Reload_FX_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Flash FX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::Muzzle_Flash_FX(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Flash FX");

	AB_Ranged_Generic_C_Muzzle_Flash_FX_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetWpnRarity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::SetWpnRarity()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.SetWpnRarity");

	AB_Ranged_Generic_C_SetWpnRarity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.AddRandomScale
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::AddRandomScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.AddRandomScale");

	AB_Ranged_Generic_C_AddRandomScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.UserConstructionScript");

	AB_Ranged_Generic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__FinishedFunc
// (FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::AnimateScopePostProcess__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__FinishedFunc");

	AB_Ranged_Generic_C_AnimateScopePostProcess__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__UpdateFunc
// (FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::AnimateScopePostProcess__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__UpdateFunc");

	AB_Ranged_Generic_C_AnimateScopePostProcess__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_4DE6158742ED7EE528BC98A240A81632
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::OnLoaded_4DE6158742ED7EE528BC98A240A81632(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_4DE6158742ED7EE528BC98A240A81632");

	AB_Ranged_Generic_C_OnLoaded_4DE6158742ED7EE528BC98A240A81632_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_3A9BBE884A5C5966375089938B7DC0CA
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::OnLoaded_3A9BBE884A5C5966375089938B7DC0CA(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_3A9BBE884A5C5966375089938B7DC0CA");

	AB_Ranged_Generic_C_OnLoaded_3A9BBE884A5C5966375089938B7DC0CA_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_83457BA843174AC6288682A342EBEAD9
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::OnLoaded_83457BA843174AC6288682A342EBEAD9(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_83457BA843174AC6288682A342EBEAD9");

	AB_Ranged_Generic_C_OnLoaded_83457BA843174AC6288682A342EBEAD9_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_5B08633343C4DA6FF40449A8A36357E4
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::OnLoaded_5B08633343C4DA6FF40449A8A36357E4(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_5B08633343C4DA6FF40449A8A36357E4");

	AB_Ranged_Generic_C_OnLoaded_5B08633343C4DA6FF40449A8A36357E4_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayWeaponFireFX
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bPersistentFire                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool*                          bSecondaryFire                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::OnPlayWeaponFireFX(bool* bPersistentFire, bool* bSecondaryFire)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayWeaponFireFX");

	AB_Ranged_Generic_C_OnPlayWeaponFireFX_Params params;
	params.bPersistentFire = bPersistentFire;
	params.bSecondaryFire = bSecondaryFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnStopWeaponFireFX
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::OnStopWeaponFireFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnStopWeaponFireFX");

	AB_Ranged_Generic_C_OnStopWeaponFireFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayReloadFX
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortReloadFXState>* ReloadStage                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::OnPlayReloadFX(TEnumAsByte<EFortReloadFXState>* ReloadStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayReloadFX");

	AB_Ranged_Generic_C_OnPlayReloadFX_Params params;
	params.ReloadStage = ReloadStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnSetTargeting
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bNewIsTargeting                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::OnSetTargeting(bool* bNewIsTargeting)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnSetTargeting");

	AB_Ranged_Generic_C_OnSetTargeting_Params params;
	params.bNewIsTargeting = bNewIsTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.K2_OnUnEquip
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::K2_OnUnEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.K2_OnUnEquip");

	AB_Ranged_Generic_C_K2_OnUnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.InitializeScopeVariables
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::InitializeScopeVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.InitializeScopeVariables");

	AB_Ranged_Generic_C_InitializeScopeVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.Update Enemy Custom Depths
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enable_Or_Disable              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            StencilBufferValue             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::Update_Enemy_Custom_Depths(bool Enable_Or_Disable, int StencilBufferValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.Update Enemy Custom Depths");

	AB_Ranged_Generic_C_Update_Enemy_Custom_Depths_Params params;
	params.Enable_Or_Disable = Enable_Or_Disable;
	params.StencilBufferValue = StencilBufferValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponAttached
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::OnWeaponAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponAttached");

	AB_Ranged_Generic_C_OnWeaponAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitAlteration
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UFortAlterationItemDefinition** NewAlteration                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::OnInitAlteration(class UFortAlterationItemDefinition** NewAlteration)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitAlteration");

	AB_Ranged_Generic_C_OnInitAlteration_Params params;
	params.NewAlteration = NewAlteration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitCosmeticAlterations
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FFortCosmeticModification* CosmeticMod                    (CPF_Parm)
// class UMaterialInstanceDynamic** DynamicMaterialInstance        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::OnInitCosmeticAlterations(struct FFortCosmeticModification* CosmeticMod, class UMaterialInstanceDynamic** DynamicMaterialInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitCosmeticAlterations");

	AB_Ranged_Generic_C_OnInitCosmeticAlterations_Params params;
	params.CosmeticMod = CosmeticMod;
	params.DynamicMaterialInstance = DynamicMaterialInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ShellsON_(onPump)
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::ShellsON__onPump_()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.ShellsON_(onPump)");

	AB_Ranged_Generic_C_ShellsON__onPump__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnEquippedWeaponDestory
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::OnEquippedWeaponDestory()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnEquippedWeaponDestory");

	AB_Ranged_Generic_C_OnEquippedWeaponDestory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enable                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TargetLimit                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::SetWeaponPierceThrough(bool Enable, int TargetLimit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough");

	AB_Ranged_Generic_C_SetWeaponPierceThrough_Params params;
	params.Enable = Enable;
	params.TargetLimit = TargetLimit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough_ClientRep
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enable                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TargetLimit                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::SetWeaponPierceThrough_ClientRep(bool Enable, int TargetLimit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough_ClientRep");

	AB_Ranged_Generic_C_SetWeaponPierceThrough_ClientRep_Params params;
	params.Enable = Enable;
	params.TargetLimit = TargetLimit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ExecuteUbergraph_B_Ranged_Generic
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::ExecuteUbergraph_B_Ranged_Generic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.ExecuteUbergraph_B_Ranged_Generic");

	AB_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
