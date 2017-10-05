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

// Class CinematicCamera.CameraRig_Crane
// 0x0050 (0x03D8 - 0x0388)
class ACameraRig_Crane : public AActor
{
public:
	float                                              CranePitch;                                               // 0x0388(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CraneYaw;                                                 // 0x038C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CraneArmLength;                                           // 0x0390(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bLockMountPitch;                                          // 0x0394(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bLockMountYaw;                                            // 0x0395(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0396(0x0002) MISSED OFFSET
	class USceneComponent*                             TransformComponent;                                       // 0x0398(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             CraneYawControl;                                          // 0x03A0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             CranePitchControl;                                        // 0x03A8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             CraneCameraMount;                                         // 0x03B0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        PreviewMesh_CraneArm;                                     // 0x03B8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        PreviewMesh_CraneBase;                                    // 0x03C0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        PreviewMesh_CraneMount;                                   // 0x03C8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        PreviewMesh_CraneCounterWeight;                           // 0x03D0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Crane");
		return ptr;
	}

};


// Class CinematicCamera.CameraRig_Rail
// 0x0048 (0x03D0 - 0x0388)
class ACameraRig_Rail : public AActor
{
public:
	float                                              CurrentPositionOnRail;                                    // 0x0388(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	class USceneComponent*                             TransformComponent;                                       // 0x0390(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class USplineComponent*                            RailSplineComponent;                                      // 0x0398(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             RailCameraMount;                                          // 0x03A0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class USplineMeshComponent*                        PreviewMesh_Rail;                                         // 0x03A8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class USplineMeshComponent*>                PreviewRailMeshSegments;                                  // 0x03B0(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	class UStaticMesh*                                 PreviewRailStaticMesh;                                    // 0x03C0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        PreviewMesh_Mount;                                        // 0x03C8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Rail");
		return ptr;
	}

};


// Class CinematicCamera.CineCameraActor
// 0x0040 (0x08C0 - 0x0880)
class ACineCameraActor : public ACameraActor
{
public:
	struct FCameraLookatTrackingSettings               LookatTrackingSettings;                                   // 0x0880(0x0030) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x08B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CineCameraActor");
		return ptr;
	}


	class UCineCameraComponent* GetCineCameraComponent();
};


// Class CinematicCamera.CineCameraComponent
// 0x00B0 (0x0880 - 0x07D0)
class UCineCameraComponent : public UCameraComponent
{
public:
	struct FCameraFilmbackSettings                     FilmbackSettings;                                         // 0x07D0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FCameraLensSettings                         LensSettings;                                             // 0x07DC(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FCameraFocusSettings                        FocusSettings;                                            // 0x07F0(0x0030) (CPF_Edit, CPF_BlueprintVisible)
	float                                              CurrentFocalLength;                                       // 0x0820(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrentAperture;                                          // 0x0824(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrentFocusDistance;                                     // 0x0828(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x082C(0x000C) MISSED OFFSET
	TArray<struct FNamedFilmbackPreset>                FilmbackPresets;                                          // 0x0838(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FNamedLensPreset>                    LensPresets;                                              // 0x0848(0x0010) (CPF_ZeroConstructor, CPF_Config)
	struct FString                                     DefaultFilmbackPresetName;                                // 0x0858(0x0010) (CPF_ZeroConstructor, CPF_Config)
	struct FString                                     DefaultLensPresetName;                                    // 0x0868(0x0010) (CPF_ZeroConstructor, CPF_Config)
	float                                              DefaultLensFocalLength;                                   // 0x0878(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              DefaultLensFStop;                                         // 0x087C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CineCameraComponent");
		return ptr;
	}


	float GetVerticalFieldOfView();
	float GetHorizontalFieldOfView();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
