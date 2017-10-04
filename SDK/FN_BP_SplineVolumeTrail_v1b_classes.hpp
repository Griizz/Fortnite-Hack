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

// BlueprintGeneratedClass BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C
// 0x0230 (0x05B8 - 0x0388)
class ABP_SplineVolumeTrail_v1b_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UArrowComponent*                             DebugArrow;                                               // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    DebugRotateTimeline__Direction_A8B473E74A53FB0F346216B4D4D23AC9;// 0x03A0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          DebugRotateTimeline;                                      // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // 0x03B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      Skeletal_Mesh;                                            // 0x03B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Socket_Attach_Point;                                      // 0x03C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 SplineMeshTemplate;                                       // 0x03C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          SplineMeshMaterialOverride;                               // 0x03D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystem*                             Particles;                                                // 0x03D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LifeTime;                                                 // 0x03E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Lifetime_Buffer;                                          // 0x03E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SplineSystemDuration;                                     // 0x03E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LifetimeAfterCompletion;                                  // 0x03EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      KeepTickEnabledWhenCompleting : 1;                        // 0x03F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03F1(0x0003) MISSED OFFSET
	int                                                NumberOfSplineMeshesToUpdate;                             // 0x03F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Initial_Size;                                             // 0x03F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET
	TArray<class USplineMeshComponent*>                SplineMeshes;                                             // 0x0400(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              SplineDistanceThreshold;                                  // 0x0410(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SplineDistanceThresholdEmpty;                             // 0x0414(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class USplineMeshComponent*>                SplineMeshesHidden;                                       // 0x0418(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<float>                                      SplineTimestamps;                                         // 0x0428(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                ArrayIndex;                                               // 0x0438(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      SplineSystemActive : 1;                                   // 0x043C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x043D(0x0003) MISSED OFFSET
	float                                              CompletionTimestamp;                                      // 0x0440(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LifetimeAdjusted;                                         // 0x0444(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveLinearColor*                           SizeOverLife;                                             // 0x0448(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Mids_1;                                                   // 0x0450(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UCurveLinearColor*                           ColorAndAlphaOverLife;                                    // 0x0460(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    ParticlesComponent;                                       // 0x0468(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                SplineID;                                                 // 0x0470(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	class USplineMeshComponent*                        Current_Spline_Mesh;                                      // 0x0478(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Initial_Rotation__Roll_;                                  // 0x0480(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0484(0x0004) MISSED OFFSET
	class UCurveFloat*                                 RotationOverLife;                                         // 0x0488(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      DebugMode : 1;                                            // 0x0490(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0491(0x0003) MISSED OFFSET
	struct FVector                                     DebugPositionOffset;                                      // 0x0494(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FRotator                                    DebugRotationRate;                                        // 0x04A0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              DebugTickDelta;                                           // 0x04AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DebugPreviousTickTimestamp;                               // 0x04B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	struct FTimerHandle                                Spline_System_Duration_Event_Handle;                      // 0x04B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      Use_Tick_Interval_LODs : 1;                               // 0x04C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x04C1(0x0007) MISSED OFFSET
	struct FTimerHandle                                Tick_Interval_Event_Handle;                               // 0x04C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              Tick_Interval_LOD_Check_Rate;                             // 0x04D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x04D4(0x0004) MISSED OFFSET
	TArray<int>                                        Tick_Interval_LOD_Distances;                              // 0x04D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<float>                                      Tick_Actor_Intervals;                                     // 0x04E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                LOD_Array_Index;                                          // 0x04F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Use_Recently_Rendered_LOD : 1;                            // 0x04FC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x04FD(0x0003) MISSED OFFSET
	float                                              Recently_Rendered_Check_Rate;                             // 0x0500(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0504(0x0004) MISSED OFFSET
	struct FTimerHandle                                Recently_Rendered_Event_Handle;                           // 0x0508(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      RecentlyRendered : 1;                                     // 0x0510(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0511(0x0003) MISSED OFFSET
	float                                              Recently_Rendered_Tolerance;                              // 0x0514(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     SplineDefaultUpVector;                                    // 0x0518(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      SplineDefaultUpVectorInWorldSpace : 1;                    // 0x0524(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<En_SplineForwardAxes_01>               SplineMeshForwardAxis;                                    // 0x0525(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CeaseAndDetachSplineUponCompletion : 1;                   // 0x0526(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CanNewSplinePointsBeCreated : 1;                          // 0x0527(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      LinearColorOverLengthOfSpline : 1;                        // 0x0528(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0529(0x0007) MISSED OFFSET
	TArray<int>                                        IndiciesToDelete;                                         // 0x0530(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      RedistributePointsAlongSplineWhenCreated : 1;             // 0x0540(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0541(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CurveBakeMID;                                             // 0x0548(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x0550(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   RenderTextureResolution;                                  // 0x0558(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	TArray<class UCurveLinearColor*>                   LinearColorCurvesToBake;                                  // 0x0560(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      WriteBakedCurveDataToDisk : 1;                            // 0x0570(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x0571(0x0007) MISSED OFFSET
	struct FString                                     File_Path;                                                // 0x0578(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     File_Name;                                                // 0x0588(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FLinearColor>                        LinearColorArray;                                         // 0x0598(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UseCheapSplines : 1;                                      // 0x05A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x05A9(0x0007) MISSED OFFSET
	class UTexture*                                    LinearColorTexture;                                       // 0x05B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C");
		return ptr;
	}


	void UpdateCheapSplinesWPOVectors();
	void GetSocketLocationWS(const struct FName& Socket_Name, struct FVector* LocationWS);
	void SetStartAndEndAllSplineMeshes(bool Update_All_Spline_Meshes);
	void DestroyAllSplineMeshes();
	void BakeLinearColor(class UCurveLinearColor* Curve_Linear_Color, int Pixel__X_, struct FLinearColor* LinearColorOut);
	void ReturnSplineMeshToPool(class USplineMeshComponent* SplineMesh, int IndexToRemove);
	void SplineUpdateOnTick();
	void RedistributePointsAlongSpline();
	void GetLinearColorFromCurveAtTime(class UCurveLinearColor* Curve_Linear_Color, int Index, struct FLinearColor* LinearColorOut);
	void TickIntervalLODCheck();
	void SetWasRecentlyRendered();
	bool AddSplineDistanceCheck();
	void SetNewSplinePointsBool();
	void SetForwardAxisOnSplineMesh(class USplineMeshComponent* SplineMesh);
	void RollSplineMesh();
	void UpdateParticleSystemPosition();
	void UpdateMID();
	void ScaleSplineMesh();
	void SplineTimestampManagement();
	void UpdateSplinePointPosition();
	void AddSplinePoint();
	void SetStartAndEndSplineMesh(bool Update_Spline_Mesh);
	void AddSplineMesh();
	void UserConstructionScript();
	void DebugRotateTimeline__FinishedFunc();
	void DebugRotateTimeline__UpdateFunc();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void SplineSystemDurationReached();
	void DebugMode_Rotate();
	void ManuallyStopSplineSystem();
	void Tick_Interval_LOD_Check();
	void Recently_Rendered_Check();
	void ClearRenderTarget();
	void GenerateCurveTextures();
	void ExecuteUbergraph_BP_SplineVolumeTrail_v1b(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
