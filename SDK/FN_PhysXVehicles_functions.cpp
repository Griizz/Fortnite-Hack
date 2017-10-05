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

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bUseAuto                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetUseAutoGears(bool bUseAuto)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears");

	UWheeledVehicleMovementComponent_SetUseAutoGears_Params params;
	params.bUseAuto = bUseAuto;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Throttle                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetThrottleInput(float Throttle)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput");

	UWheeledVehicleMovementComponent_SetThrottleInput_Params params;
	params.Throttle = Throttle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            GearNum                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bImmediate                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetTargetGear(int GearNum, bool bImmediate)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear");

	UWheeledVehicleMovementComponent_SetTargetGear_Params params;
	params.GearNum = GearNum;
	params.bImmediate = bImmediate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Steering                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetSteeringInput(float Steering)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput");

	UWheeledVehicleMovementComponent_SetSteeringInput_Params params;
	params.Steering = Steering;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bNewHandbrake                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetHandbrakeInput(bool bNewHandbrake)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput");

	UWheeledVehicleMovementComponent_SetHandbrakeInput_Params params;
	params.bNewHandbrake = bNewHandbrake;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask       GroupMask                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask");

	UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask_Params params;
	params.GroupMask = GroupMask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            GroupFlags                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetGroupsToIgnore(int GroupFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore");

	UWheeledVehicleMovementComponent_SetGroupsToIgnore_Params params;
	params.GroupFlags = GroupFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask       GroupMask                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask");

	UWheeledVehicleMovementComponent_SetGroupsToAvoidMask_Params params;
	params.GroupMask = GroupMask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            GroupFlags                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetGroupsToAvoid(int GroupFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid");

	UWheeledVehicleMovementComponent_SetGroupsToAvoid_Params params;
	params.GroupFlags = GroupFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bNewGearUp                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetGearUp(bool bNewGearUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp");

	UWheeledVehicleMovementComponent_SetGearUp_Params params;
	params.bNewGearUp = bNewGearUp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bNewGearDown                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetGearDown(bool bNewGearDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown");

	UWheeledVehicleMovementComponent_SetGearDown_Params params;
	params.bNewGearDown = bNewGearDown;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Brake                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetBrakeInput(float Brake)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput");

	UWheeledVehicleMovementComponent_SetBrakeInput_Params params;
	params.Brake = Brake;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask       GroupMask                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask");

	UWheeledVehicleMovementComponent_SetAvoidanceGroupMask_Params params;
	params.GroupMask = GroupMask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            GroupFlags                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetAvoidanceGroup(int GroupFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup");

	UWheeledVehicleMovementComponent_SetAvoidanceGroup_Params params;
	params.GroupFlags = GroupFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bEnable                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetAvoidanceEnabled(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled");

	UWheeledVehicleMovementComponent_SetAvoidanceEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// float                          InSteeringInput                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InThrottleInput                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InBrakeInput                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InHandbrakeInput               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            CurrentGear                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int CurrentGear)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState");

	UWheeledVehicleMovementComponent_ServerUpdateState_Params params;
	params.InSteeringInput = InSteeringInput;
	params.InThrottleInput = InThrottleInput;
	params.InBrakeInput = InBrakeInput;
	params.InHandbrakeInput = InHandbrakeInput;
	params.CurrentGear = CurrentGear;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWheeledVehicleMovementComponent::GetUseAutoGears()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears");

	UWheeledVehicleMovementComponent_GetUseAutoGears_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UWheeledVehicleMovementComponent::GetTargetGear()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear");

	UWheeledVehicleMovementComponent_GetTargetGear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UWheeledVehicleMovementComponent::GetForwardSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed");

	UWheeledVehicleMovementComponent_GetForwardSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UWheeledVehicleMovementComponent::GetEngineRotationSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed");

	UWheeledVehicleMovementComponent_GetEngineRotationSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UWheeledVehicleMovementComponent::GetEngineMaxRotationSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed");

	UWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UWheeledVehicleMovementComponent::GetCurrentGear()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear");

	UWheeledVehicleMovementComponent_GetCurrentGear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          SteerAngle                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USimpleWheeledVehicleMovementComponent::SetSteerAngle(float SteerAngle, int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle");

	USimpleWheeledVehicleMovementComponent_SetSteerAngle_Params params;
	params.SteerAngle = SteerAngle;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          DriveTorque                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USimpleWheeledVehicleMovementComponent::SetDriveTorque(float DriveTorque, int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque");

	USimpleWheeledVehicleMovementComponent_SetDriveTorque_Params params;
	params.DriveTorque = DriveTorque;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          BrakeTorque                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USimpleWheeledVehicleMovementComponent::SetBrakeTorque(float BrakeTorque, int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque");

	USimpleWheeledVehicleMovementComponent_SetBrakeTorque_Params params;
	params.BrakeTorque = BrakeTorque;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.VehicleAnimInstance.GetVehicle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AWheeledVehicle*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AWheeledVehicle* UVehicleAnimInstance::GetVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleAnimInstance.GetVehicle");

	UVehicleAnimInstance_GetVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.VehicleWheel.GetSuspensionOffset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVehicleWheel::GetSuspensionOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleWheel.GetSuspensionOffset");

	UVehicleWheel_GetSuspensionOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.VehicleWheel.GetSteerAngle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVehicleWheel::GetSteerAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleWheel.GetSteerAngle");

	UVehicleWheel_GetSteerAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.VehicleWheel.GetRotationAngle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVehicleWheel::GetRotationAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleWheel.GetRotationAngle");

	UVehicleWheel_GetRotationAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
