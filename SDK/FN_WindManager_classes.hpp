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

// BlueprintGeneratedClass WindManager.WindManager_C
// 0x0097 (0x066F - 0x05D8)
class AWindManager_C : public AFortWindManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05D8(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        EmptyStaticMesh;                                          // 0x05E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x05E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneCaptureComponent2D*                    TopDownCaptureActorOfTheWorld;                            // 0x05F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    DebugParticleSystem;                                      // 0x05F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D03;                                // 0x0600(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D02;                                // 0x0608(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D01;                                // 0x0610(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0618(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SmallerRenderTargetOrthoWidth;                            // 0x0620(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LargestRenderTargetOrthoWidth;                            // 0x0624(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MidSizedRenderTargetOrthoWidth;                           // 0x0628(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x062C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              External_Test_Actor;                                      // 0x0630(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	unsigned char                                      DebugParticleBasedWind : 1;                               // 0x0640(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0641(0x0007) MISSED OFFSET
	TArray<class AFortStaticMeshActor*>                World_Terrain_Meshes;                                     // 0x0648(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	struct FVector                                     Camera_Height_Offset;                                     // 0x0658(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Character_Initialized : 1;                                // 0x0664(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0665(0x0003) MISSED OFFSET
	float                                              Particle_Z_Offset;                                        // 0x0668(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Activate_Grass_Wind_And_Top_Down_Z_Depth_Texture_Renders_Of_the_World : 1;// 0x066C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Has_Water_Interaction_Enabled_Variable_Been_Set : 1;      // 0x066D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Is_Water_Interaction_Enabled : 1;                         // 0x066E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WindManager.WindManager_C");
		return ptr;
	}


	struct FVector CeilVector(float Scale, class USceneCaptureComponent2D* Scene_Capture);
	void ActivateTestContent(bool Condition);
	void SetRenderOnlyAssets(class UPrimitiveComponent* InComponent);
	void InitializeOrthoSettings();
	void UserConstructionScript();
	void Add_Render_To_Texture_Particle(class UParticleSystem* EmitterTemplate, const struct FTransform& InTransform);
	void OnWorldReady();
	void ReceiveTick(float* DeltaSeconds);
	void Register_player_for_render_to_texture_purposes(class APlayerPawn_Generic_C* Player_Pawn_Generic);
	void ExecuteUbergraph_WindManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
