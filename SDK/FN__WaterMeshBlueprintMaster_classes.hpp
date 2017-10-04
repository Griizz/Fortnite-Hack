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

// BlueprintGeneratedClass _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C
// 0x00C3 (0x044B - 0x0388)
class A_WaterMeshBlueprintMaster_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        CollisionMesh1;                                           // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        CollisionMesh2;                                           // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        CollisionMesh4;                                           // 0x03A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        CollisionMesh3;                                           // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Number_of_Collision_Meshes;                               // 0x03B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	class UParticleSystem*                             EnterExitWaterSplash_Ripple_Texture_Particle;             // 0x03C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             EnterExitWaterSplash_Visual_Particle;                     // 0x03C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      FlipFlow : 1;                                             // 0x03D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      NoFlow : 1;                                               // 0x03D1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03D2(0x0006) MISSED OFFSET
	class UMaterialInterface*                          FlippedMaterial;                                          // 0x03D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<int>                                        Internal_volume_penetration_Counter;                      // 0x03E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class APlayerPawn_Generic_C*>               PlayerGenericArray;                                       // 0x03F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            WaterRingArray;                                           // 0x0400(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                Current_Characters_Personal_Water_Counter;                // 0x0410(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0414(0x0004) MISSED OFFSET
	TArray<struct FListOfWaterComponentsThatTheCharactersInteractingWithByIndex> ArrayOfCollisionComponentsPerActor;                       // 0x0418(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      Water_Interactions : 1;                                   // 0x0428(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Entering_True_Exiting_False : 1;                          // 0x0429(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x042A(0x0006) MISSED OFFSET
	class APlayerPawn_Generic_C*                       ExternalActor;                                            // 0x0430(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Internal_Mesh;                                            // 0x0438(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Continue : 1;                                             // 0x0440(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0441(0x0003) MISSED OFFSET
	float                                              Minimum_time_between_splashes;                            // 0x0444(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      ShowTestMesh : 1;                                         // 0x0448(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      HasExecutedConstuctionScript : 1;                         // 0x0449(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Is_Deep_Water_Asset_ : 1;                                 // 0x044A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C");
		return ptr;
	}


	void Construction();
	void Handle_Water_Penetration_Components_And_Arrays(bool In_T_Out_F, class AActor* Touching_Actor, class UStaticMeshComponent* Touching_Volume);
	void Find_Placement_on_water_mesh_surfaces(struct FTransform* Traced_Transform, struct FVector* VelocityVector, bool* Trace_Hit);
	void SetupMeshCollisionVolumes(class UStaticMeshComponent* StaticMeshComponent, int Target_Int);
	void UserConstructionScript();
	void ReturnWaterHitLocation(class APlayerPawn_Generic_C* CallingActor);
	void BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void Construct();
	void ReceiveBeginPlay();
	void ExecuteUbergraph__WaterMeshBlueprintMaster(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
