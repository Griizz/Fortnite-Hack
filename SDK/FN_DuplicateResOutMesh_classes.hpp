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

// BlueprintGeneratedClass DuplicateResOutMesh.DuplicateResOutMesh_C
// 0x0138 (0x04C0 - 0x0388)
class ADuplicateResOutMesh_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CharacterSpawnInTimeline_FirstPassComplete_2AB89084476E64255664E9B2D45E14C1;// 0x0398(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CharacterSpawnInTimeline_LightIntensity_2AB89084476E64255664E9B2D45E14C1;// 0x039C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CharacterSpawnInTimeline_zHieght_2AB89084476E64255664E9B2D45E14C1;// 0x03A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CharacterSpawnInTimeline__Direction_2AB89084476E64255664E9B2D45E14C1;// 0x03A4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CharacterSpawnInTimeline;                                 // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      Skeletal_Mesh_Duplicate;                                  // 0x03B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               Gun_True;                                                 // 0x03B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03B9(0x0003) MISSED OFFSET
	float                                              BoundsRadius;                                             // 0x03BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              NewVar_1;                                                 // 0x03C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            MIDArray;                                                 // 0x03C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FVector                                     World_location_for_the_dissolve_location;                 // 0x03D8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Current_MID;                                              // 0x03E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Head_Space;                                               // 0x03F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Leg_Space;                                                // 0x03F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UPointLightComponent*                        Spawn_Light;                                              // 0x03F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              light_intensity;                                          // 0x0400(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Number_of_Base_skeletal_mesh_materials;                   // 0x0404(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FirstPassComplete;                                        // 0x0408(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x040C(0x0004) MISSED OFFSET
	TArray<class USkeletalMeshComponent*>              ExternalSkeletalMeshComponent;                            // 0x0410(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FTransform                                  Box_Local_Transform;                                      // 0x0420(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Timeline_Play_Length;                                     // 0x0450(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               TeleportOut_;                                             // 0x0454(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0455(0x0003) MISSED OFFSET
	class AActor*                                      ExternalActor;                                            // 0x0458(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	TArray<class USkeletalMeshComponent*>              InternalSkeletalMeshComponents;                           // 0x0460(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                CurrentMeshMidIndex;                                      // 0x0470(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      External_Base_Mesh_Component;                             // 0x0478(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            ExternalMidArray;                                         // 0x0480(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	class USkeletalMeshComponent*                      ExternalRootMeshComponent;                                // 0x0490(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UMaterialInterface*>                  ListOfMaterialsExemptFromReparenting;                     // 0x0498(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	bool                                               MaterialParentIsValid;                                    // 0x04A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	class UMaterialInterface*                          CurrentParentMaterial;                                    // 0x04B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInterface*                          CurrentMaterial;                                          // 0x04B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DuplicateResOutMesh.DuplicateResOutMesh_C");
		return ptr;
	}


	void Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array();
	void Make_and_slave_internal_meshes();
	void Spawn__Light();
	void Find_Bounds();
	void initializeExternalSkeletalMeshArray();
	void UserConstructionScript();
	void CharacterSpawnInTimeline__FinishedFunc();
	void CharacterSpawnInTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void UpdateExternalParameters(TArray<class UMaterialInstanceDynamic*> MID_Array, TArray<class USkeletalMeshComponent*> External_MEsh_Component_Array);
	void ExecuteUbergraph_DuplicateResOutMesh(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
