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

// BlueprintGeneratedClass WM_Pin_Master.WM_Pin_Master_C
// 0x0118 (0x04B8 - 0x03A0)
class AWM_Pin_Master_C : public AWorldMapPin
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        PinDiffGlow;                                              // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        PinPing;                                                  // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPointLightComponent*                        PointLight_B_Lock;                                        // 0x03B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPointLightComponent*                        PointLight_A_Lock;                                        // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        PinLocked;                                                // 0x03C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPointLightComponent*                        PointLight_B_Pin;                                         // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPointLightComponent*                        PointLight_A_Pin;                                         // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    P_PinPings;                                               // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCapsuleComponent*                           clickZone;                                                // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Pin;                                                      // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Base;                                                     // 0x03F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 PinMesh;                                                  // 0x0400(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FLinearColor>                        DefaultColor;                                             // 0x0408(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FLinearColor                                IdleHover1;                                               // 0x0418(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                IdleHover2;                                               // 0x0428(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                GlowColor;                                                // 0x0438(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                DifficultyColor;                                          // 0x0448(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	class UStaticMesh*                                 LockedPin;                                                // 0x0458(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       LastVisibleText;                                          // 0x0460(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               LastVisibleValue;                                         // 0x0478(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0479(0x0007) MISSED OFFSET
	struct FString                                     PreviewedTheaterId;                                       // 0x0480(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	bool                                               bHasMouseOver;                                            // 0x0490(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0491(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MID_Ping;                                                 // 0x0498(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_DiffGlow;                                             // 0x04A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_Pin;                                                  // 0x04A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_Locked;                                               // 0x04B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WM_Pin_Master.WM_Pin_Master_C");
		return ptr;
	}


	void UpdateSelectionState();
	void OnQuestsCompleted(TArray<class UFortQuestItem*>* QuestItems);
	void OnTheaterSelected(const struct FString& TheaterId);
	void OnSetPreviewedSceneTheater(const struct FString& PreviewedTheaterId);
	void InitializeContextEvents();
	void UpdateVisuals();
	void GetRequiredText(struct FText* RequirementText);
	void CanAccessPin(bool* Accessible);
	void IsLeader(bool* Enabled);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void HandleOnClicked(class AActor* TouchedActor, const struct FKey& ButtonPressed);
	void HandleOnBeginCursorOver(class AActor* TouchedActor);
	void HandleOnEndCursorOver(class AActor* TouchedActor);
	void OnTheaterIdSet();
	void ExecuteUbergraph_WM_Pin_Master(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
