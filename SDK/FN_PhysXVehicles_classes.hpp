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

// Class PhysXVehicles.WheeledVehicleMovementComponent
// 0x0168 (0x02E0 - 0x0178)
class UWheeledVehicleMovementComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
	unsigned char                                      bDeprecatedSpringOffsetMode : 1;                          // 0x0180(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0181(0x0007) MISSED OFFSET
	TArray<struct FWheelSetup>                         WheelSetups;                                              // 0x0188(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              Mass;                                                     // 0x0198(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DragCoefficient;                                          // 0x019C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ChassisWidth;                                             // 0x01A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ChassisHeight;                                            // 0x01A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bReverseAsBrake;                                          // 0x01A8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01A9(0x0003) MISSED OFFSET
	float                                              DragArea;                                                 // 0x01AC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              EstimatedMaxEngineSpeed;                                  // 0x01B0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              MaxEngineRPM;                                             // 0x01B4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              DebugDragMagnitude;                                       // 0x01B8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     InertiaTensorScale;                                       // 0x01BC(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              MinNormalizedTireLoad;                                    // 0x01C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinNormalizedTireLoadFiltered;                            // 0x01CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxNormalizedTireLoad;                                    // 0x01D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxNormalizedTireLoadFiltered;                            // 0x01D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ThresholdLongitudinalSpeed;                               // 0x01D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LowForwardSpeedSubStepCount;                              // 0x01DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                HighForwardSpeedSubStepCount;                             // 0x01E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x01E4(0x0004) MISSED OFFSET
	TArray<class UVehicleWheel*>                       Wheels;                                                   // 0x01E8(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	unsigned char                                      UnknownData04[0x18];                                      // 0x01F8(0x0018) MISSED OFFSET
	unsigned char                                      bUseRVOAvoidance : 1;                                     // 0x0210(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0211(0x0003) MISSED OFFSET
	float                                              RVOAvoidanceRadius;                                       // 0x0214(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RVOAvoidanceHeight;                                       // 0x0218(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AvoidanceConsiderationRadius;                             // 0x021C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RVOSteeringStep;                                          // 0x0220(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RVOThrottleStep;                                          // 0x0224(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AvoidanceUID;                                             // 0x0228(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FNavAvoidanceMask                           AvoidanceGroup;                                           // 0x022C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToAvoid;                                            // 0x0230(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToIgnore;                                           // 0x0234(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              AvoidanceWeight;                                          // 0x0238(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     PendingLaunchVelocity;                                    // 0x023C(0x000C) (CPF_IsPlainOldData)
	struct FReplicatedVehicleState                     ReplicatedState;                                          // 0x0248(0x0014) (CPF_Net, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x025C(0x0004) MISSED OFFSET
	float                                              RawSteeringInput;                                         // 0x0260(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              RawThrottleInput;                                         // 0x0264(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              RawBrakeInput;                                            // 0x0268(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bRawHandbrakeInput : 1;                                   // 0x026C(0x0001) (CPF_Transient)
	unsigned char                                      bRawGearUpInput : 1;                                      // 0x026C(0x0001) (CPF_Transient)
	unsigned char                                      bRawGearDownInput : 1;                                    // 0x026C(0x0001) (CPF_Transient)
	unsigned char                                      UnknownData07[0x3];                                       // 0x026D(0x0003) MISSED OFFSET
	float                                              SteeringInput;                                            // 0x0270(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x0274(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              BrakeInput;                                               // 0x0278(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              HandbrakeInput;                                           // 0x027C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              IdleBrakeInput;                                           // 0x0280(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StopThreshold;                                            // 0x0284(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WrongDirectionThreshold;                                  // 0x0288(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVehicleInputRate                           ThrottleInputRate;                                        // 0x028C(0x0008) (CPF_Edit)
	struct FVehicleInputRate                           BrakeInputRate;                                           // 0x0294(0x0008) (CPF_Edit)
	struct FVehicleInputRate                           HandbrakeInputRate;                                       // 0x029C(0x0008) (CPF_Edit)
	struct FVehicleInputRate                           SteeringInputRate;                                        // 0x02A4(0x0008) (CPF_Edit)
	unsigned char                                      bWasAvoidanceUpdated : 1;                                 // 0x02AC(0x0001) (CPF_Transient)
	unsigned char                                      UnknownData08[0x2B];                                      // 0x02AD(0x002B) MISSED OFFSET
	class AController*                                 OverrideController;                                       // 0x02D8(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicleMovementComponent");
		return ptr;
	}


	void SetUseAutoGears(bool bUseAuto);
	void SetThrottleInput(float Throttle);
	void SetTargetGear(int GearNum, bool bImmediate);
	void SetSteeringInput(float Steering);
	void SetHandbrakeInput(bool bNewHandbrake);
	void SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToIgnore(int GroupFlags);
	void SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToAvoid(int GroupFlags);
	void SetGearUp(bool bNewGearUp);
	void SetGearDown(bool bNewGearDown);
	void SetBrakeInput(float Brake);
	void SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask);
	void SetAvoidanceGroup(int GroupFlags);
	void SetAvoidanceEnabled(bool bEnable);
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int CurrentGear);
	bool GetUseAutoGears();
	int GetTargetGear();
	float GetForwardSpeed();
	float GetEngineRotationSpeed();
	float GetEngineMaxRotationSpeed();
	int GetCurrentGear();
};


// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// 0x0000 (0x02E0 - 0x02E0)
class USimpleWheeledVehicleMovementComponent : public UWheeledVehicleMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.SimpleWheeledVehicleMovementComponent");
		return ptr;
	}


	void SetSteerAngle(float SteerAngle, int WheelIndex);
	void SetDriveTorque(float DriveTorque, int WheelIndex);
	void SetBrakeTorque(float BrakeTorque, int WheelIndex);
};


// Class PhysXVehicles.WheeledVehicleMovementComponent4W
// 0x0160 (0x0440 - 0x02E0)
class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
{
public:
	struct FVehicleEngineData                          EngineSetup;                                              // 0x02E0(0x0090) (CPF_Edit)
	struct FVehicleDifferential4WData                  DifferentialSetup;                                        // 0x0370(0x001C) (CPF_Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	struct FVehicleTransmissionData                    TransmissionSetup;                                        // 0x0390(0x0030) (CPF_Edit)
	struct FRuntimeFloatCurve                          SteeringCurve;                                            // 0x03C0(0x0078) (CPF_Edit)
	float                                              AckermannAccuracy;                                        // 0x0438(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x043C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicleMovementComponent4W");
		return ptr;
	}

};


// Class PhysXVehicles.TireConfig
// 0x0020 (0x0048 - 0x0028)
class UTireConfig : public UDataAsset
{
public:
	float                                              FrictionScale;                                            // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FTireConfigMaterialFriction>         TireFrictionScales;                                       // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.TireConfig");
		return ptr;
	}

};


// Class PhysXVehicles.VehicleAnimInstance
// 0x0498 (0x07F0 - 0x0358)
class UVehicleAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x488];                                     // 0x0358(0x0488) MISSED OFFSET
	class UWheeledVehicleMovementComponent*            WheeledVehicleMovementComponent;                          // 0x07E0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x07E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.VehicleAnimInstance");
		return ptr;
	}


	class AWheeledVehicle* GetVehicle();
};


// Class PhysXVehicles.VehicleWheel
// 0x00C0 (0x00E8 - 0x0028)
class UVehicleWheel : public UObject
{
public:
	class UStaticMesh*                                 CollisionMesh;                                            // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bDontCreateShape;                                         // 0x0030(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bAutoAdjustCollisionSize;                                 // 0x0031(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	struct FVector                                     Offset;                                                   // 0x0034(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              ShapeRadius;                                              // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ShapeWidth;                                               // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Mass;                                                     // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingRate;                                              // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SteerAngle;                                               // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAffectedByHandbrake;                                     // 0x0054(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	class UTireType*                                   TireType;                                                 // 0x0058(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTireConfig*                                 TireConfig;                                               // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LatStiffMaxLoad;                                          // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LatStiffValue;                                            // 0x006C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LongStiffValue;                                           // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SuspensionForceOffset;                                    // 0x0074(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SuspensionMaxRaise;                                       // 0x0078(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SuspensionMaxDrop;                                        // 0x007C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SuspensionNaturalFrequency;                               // 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SuspensionDampingRatio;                                   // 0x0084(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxBrakeTorque;                                           // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxHandBrakeTorque;                                       // 0x008C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWheeledVehicleMovementComponent*            VehicleSim;                                               // 0x0090(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                WheelIndex;                                               // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              DebugLongSlip;                                            // 0x009C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              DebugLatSlip;                                             // 0x00A0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              DebugNormalizedTireLoad;                                  // 0x00A4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00A8(0x0004) MISSED OFFSET
	float                                              DebugWheelTorque;                                         // 0x00AC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              DebugLongForce;                                           // 0x00B0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              DebugLatForce;                                            // 0x00B4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x00B8(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     OldLocation;                                              // 0x00C4(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x00D0(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x00DC(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.VehicleWheel");
		return ptr;
	}


	float GetSuspensionOffset();
	float GetSteerAngle();
	float GetRotationAngle();
};


// Class PhysXVehicles.WheeledVehicle
// 0x0010 (0x03F8 - 0x03E8)
class AWheeledVehicle : public APawn
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x03E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWheeledVehicleMovementComponent*            VehicleMovement;                                          // 0x03F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicle");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
