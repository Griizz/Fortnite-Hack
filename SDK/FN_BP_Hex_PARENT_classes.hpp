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

// BlueprintGeneratedClass BP_Hex_PARENT.BP_Hex_PARENT_C
// 0x0124 (0x0724 - 0x0600)
class ABP_Hex_PARENT_C : public AFortTheaterMapTile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0600(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UWidgetComponent*                            StormZoneIndicator;                                       // 0x0608(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    P_StormAffected;                                          // 0x0610(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBillboardComponent*                         StormBillboard;                                           // 0x0618(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x0620(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    P_CloudTwister_RandomLightning_01;                        // 0x0628(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        PinnedQuestIcon;                                          // 0x0630(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        MissionIconMesh;                                          // 0x0638(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        MouseoverMesh;                                            // 0x0640(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        SelectedIndicatorMesh;                                    // 0x0648(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidgetComponent*                            Widget;                                                   // 0x0650(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAudioComponent*                             HexTileSound;                                             // 0x0658(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Timeline_12_NewTrack_2_9A9B376A4CE242AE90C66285F93293B7;  // 0x0660(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_12__Direction_9A9B376A4CE242AE90C66285F93293B7;  // 0x0664(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0665(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_13;                                              // 0x0668(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Timeline_11_NewTrack_0_ABB0E704455E70C66E9A21979F9D10BE;  // 0x0670(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_11__Direction_ABB0E704455E70C66E9A21979F9D10BE;  // 0x0674(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0675(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_12;                                              // 0x0678(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAudioComponent*                             HexAudioComponent;                                        // 0x0680(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  HexMapSound;                                              // 0x0688(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StormChance;                                              // 0x0690(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               UseHexNeighborTextureBlending;                            // 0x0694(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               DoesTileHaveRoads;                                        // 0x0695(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsFirstOutpost;                                           // 0x0696(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsOutpost;                                                // 0x0697(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsQuickplayMission;                                       // 0x0698(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0699(0x0003) MISSED OFFSET
	int                                                RandomIndex;                                              // 0x069C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        HexDecoMesh;                                              // 0x06A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               Mouseover;                                                // 0x06A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               MissionSelected;                                          // 0x06A9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               TileIsPlayable;                                           // 0x06AA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               TileIsLocked;                                             // 0x06AB(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               TileIsHidden;                                             // 0x06AC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               TileIsVaildMission;                                       // 0x06AD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x06AE(0x0002) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MIDMissionIcon;                                           // 0x06B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_Selected;                                             // 0x06B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class UStaticMesh*>                         Hex_Deco_Meshes;                                          // 0x06C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	class UMaterialInstanceDynamic*                    MID_Mouseover;                                            // 0x06D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               RenderHexWithClouds;                                      // 0x06D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x06D9(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MIDMissionPinnedIcon;                                     // 0x06E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                DifficultyColor;                                          // 0x06E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               PinnedQuest;                                              // 0x06F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x06F9(0x0007) MISSED OFFSET
	class ATheaterCamera_Blueprint_C*                  TheaterCamera;                                            // 0x0700(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               CameraIsMissionControl;                                   // 0x0708(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IsTutorial;                                               // 0x0709(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x070A(0x0002) MISSED OFFSET
	float                                              TimesUpdated;                                             // 0x070C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               TileIsBeingInitialized;                                   // 0x0710(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               PauseUpdates;                                             // 0x0711(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               PinnedMissionExists;                                      // 0x0712(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               OppositePinnedQuest;                                      // 0x0713(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              OppositePinnedQuestOpacity;                               // 0x0714(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               UseLightning;                                             // 0x0718(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IsMainMission;                                            // 0x0719(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IsBlockParty;                                             // 0x071A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x071B(0x0001) MISSED OFFSET
	float                                              TileTypeNumber;                                           // 0x071C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StormModLightningStrength;                                // 0x0720(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Hex_PARENT.BP_Hex_PARENT_C");
		return ptr;
	}


	void HandleUpdatingBannerMesh(class USceneComponent* Target, class UFortQuestItemDefinition* CompletedQuest, class UMaterialInstanceDynamic* Material_Instance_Dynamic);
	void HandleMissionAlert();
	void GroundSliceSettings(class UMaterialInstanceDynamic* SourceMaterial, class UTexture2D* TileTypeA, class UTexture2D* TileTypeB, float TileIsSameRegionA, float TileIsSameRegionB, float TileIsHiddenA, float TileIsHiddenB, float TileExistsA, float TileExistsB);
	void UserConstructionScript();
	void Timeline_11__FinishedFunc();
	void Timeline_11__UpdateFunc();
	void Timeline_12__FinishedFunc();
	void Timeline_12__UpdateFunc();
	void HandleTeamPowerChanged(int TeamPower, int PersonalPower);
	void FireLightningA();
	void OnInitializeTile();
	void HandleFrontendCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);
	void OnMarkedQuestChanged();
	void CheckIfQuestShouldBePinned();
	void CheckFocus();
	void ForceDefocus();
	void OnMissionDataUpdated();
	void CheckForPinnedInLevel();
	void OnDefocus();
	void RetryTileInitialized();
	void RetryUpdatesPaused();
	void OnFocus();
	void OnHostDeselect();
	void OnHostSelect();
	void SetMissionPowerLevelDependencies();
	void OnClientDeselect();
	void OnClientSelect();
	void ReceiveBeginPlay();
	void MissionLightning(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity);
	void MissionLightningOff(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction);
	void ExecuteUbergraph_BP_Hex_PARENT(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
