#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass B_Ranged_Generic.B_Ranged_Generic_C
// 0x0148 (0x0D78 - 0x0C30)
class AB_Ranged_Generic_C : public AFortWeaponRanged
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C30(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystemComponent*                    Reload_Empty_;                                            // 0x0C38(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPostProcessComponent*                       SecondDownScopePostProcess;                               // 0x0C40(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    Shells_empty_;                                            // 0x0C48(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPostProcessComponent*                       DownScopePostProcess;                                     // 0x0C50(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        ScopeMesh1P;                                              // 0x0C58(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    Muzzle_Empty_;                                            // 0x0C60(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimateScopePostProcess_DownSightPostProcessAmount_393D8BA5486879173797EF8C9B8D4642;// 0x0C68(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    AnimateScopePostProcess__Direction_393D8BA5486879173797EF8C9B8D4642;// 0x0C6C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0C6D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          AnimateScopePostProcess;                                  // 0x0C70(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystem*                             MuzzleParticleSystem;                                     // 0x0C78(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             WeaponDurabilityDestroyEffect;                            // 0x0C80(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             WeaponDurabilityDestroyEffectIcon;                        // 0x0C88(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UseDestroyEffect : 1;                                     // 0x0C90(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Use_Reload_Particles : 1;                                 // 0x0C91(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0C92(0x0006) MISSED OFFSET
	class UParticleSystem*                             Reload_ParticleSystem;                                    // 0x0C98(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LastPlayFXTime;                                           // 0x0CA0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              MinPlayFXTime;                                            // 0x0CA4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UseShellsOnFire_ : 1;                                     // 0x0CA8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UseShellsOnReload_ : 1;                                   // 0x0CA9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UseShellsOnPump_ : 1;                                     // 0x0CAA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0CAB(0x0005) MISSED OFFSET
	class UParticleSystem*                             ShellsParticleSystemTemplate;                             // 0x0CB0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ReloadSocketName;                                         // 0x0CB8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class AFortAIPawn*>                         Array_Of_Active_Enemy_AI;                                 // 0x0CC0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	unsigned char                                      Scope___Render_Enemies_To_Custom_Depth_Buffer : 1;        // 0x0CD0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0CD1(0x0007) MISSED OFFSET
	struct FName                                       Shells_Socket_Name;                                       // 0x0CD8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<En_ShellTypes_01>                      ShellTypeSelect;                                          // 0x0CE0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0CE1(0x0003) MISSED OFFSET
	float                                              Shells_Spawn_Rate_Scale;                                  // 0x0CE4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     ShellsRotationRate;                                       // 0x0CE8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     Shells_Velocity;                                          // 0x0CF4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     Shells_Gravity;                                           // 0x0D00(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Shells_Lifetime;                                          // 0x0D0C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     Shells_Size;                                              // 0x0D10(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Shells_Time_Dilation;                                     // 0x0D1C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Target_Scope_Vignette_Blur_Screen_Percentage;             // 0x0D20(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Scope_Camera_Offset_Amount;                               // 0x0D24(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      SmallShells : 1;                                          // 0x0D28(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      MediumShells : 1;                                         // 0x0D29(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      LargeShells : 1;                                          // 0x0D2A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      ShotgunShells : 1;                                        // 0x0D2B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      EnergyShells : 1;                                         // 0x0D2C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0D2D(0x0003) MISSED OFFSET
	float                                              Inherit_Parent_Velocity;                                  // 0x0D30(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Cylindrical_Radius;                                       // 0x0D34(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Cylindrical_Height;                                       // 0x0D38(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      DebugShellsSocket_ : 1;                                   // 0x0D3C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Use_2_Post_Processes_For_the_Scope : 1;                   // 0x0D3D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0D3E(0x0002) MISSED OFFSET
	class USoundBase*                                  Sound_ScopeZoomIn;                                        // 0x0D40(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_ScopeZoomOut;                                       // 0x0D48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    Alteration_Ambient_PS;                                    // 0x0D50(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       ReticleHUDElementTags;                                    // 0x0D58(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Ranged_Generic.B_Ranged_Generic_C");
		return ptr;
	}


	void DeactivateMuzzleFX();
	void DeactivateReloadSmokeFX();
	void ActivateReloadSmokeFX();
	void ActivateShellsFX(bool Bool);
	void DeactivateShellsFX();
	void SetupShellFX();
	void UpdateShellEmittersFX();
	void Muzzle_Play_Reload_FX(TEnumAsByte<EFortReloadFXState> Selection);
	void Muzzle_Flash_FX(bool Condition);
	void SetWpnRarity();
	void AddRandomScale();
	void UserConstructionScript();
	void AnimateScopePostProcess__FinishedFunc();
	void AnimateScopePostProcess__UpdateFunc();
	void OnLoaded_4DE6158742ED7EE528BC98A240A81632(class UObject* Loaded);
	void OnLoaded_3A9BBE884A5C5966375089938B7DC0CA(class UObject* Loaded);
	void OnLoaded_83457BA843174AC6288682A342EBEAD9(class UObject* Loaded);
	void OnLoaded_5B08633343C4DA6FF40449A8A36357E4(class UObject* Loaded);
	void OnPlayWeaponFireFX(bool* bPersistentFire, bool* bSecondaryFire);
	void OnStopWeaponFireFX();
	void OnPlayReloadFX(TEnumAsByte<EFortReloadFXState>* ReloadStage);
	void OnSetTargeting(bool* bNewIsTargeting);
	void K2_OnUnEquip();
	void InitializeScopeVariables();
	void Update_Enemy_Custom_Depths(bool Enable_Or_Disable, int StencilBufferValue);
	void OnWeaponAttached();
	void OnInitAlteration(class UFortAlterationItemDefinition** NewAlteration);
	void OnInitCosmeticAlterations(struct FFortCosmeticModification* CosmeticMod, class UMaterialInstanceDynamic** DynamicMaterialInstance);
	void ShellsON__onPump_();
	void OnEquippedWeaponDestory();
	void SetWeaponPierceThrough(bool Enable, int TargetLimit);
	void SetWeaponPierceThrough_ClientRep(bool Enable, int TargetLimit);
	void ExecuteUbergraph_B_Ranged_Generic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
