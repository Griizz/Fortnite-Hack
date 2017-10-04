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

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateCheapSplinesWPOVectors
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::UpdateCheapSplinesWPOVectors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateCheapSplinesWPOVectors");

	ABP_SplineVolumeTrail_v1b_C_UpdateCheapSplinesWPOVectors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.GetSocketLocationWS
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   Socket_Name                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 LocationWS                     (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void ABP_SplineVolumeTrail_v1b_C::GetSocketLocationWS(const struct FName& Socket_Name, struct FVector* LocationWS)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.GetSocketLocationWS");

	ABP_SplineVolumeTrail_v1b_C_GetSocketLocationWS_Params params;
	params.Socket_Name = Socket_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationWS != nullptr)
		*LocationWS = params.LocationWS;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetStartAndEndAllSplineMeshes
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Update_All_Spline_Meshes       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SplineVolumeTrail_v1b_C::SetStartAndEndAllSplineMeshes(bool Update_All_Spline_Meshes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetStartAndEndAllSplineMeshes");

	ABP_SplineVolumeTrail_v1b_C_SetStartAndEndAllSplineMeshes_Params params;
	params.Update_All_Spline_Meshes = Update_All_Spline_Meshes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DestroyAllSplineMeshes
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::DestroyAllSplineMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DestroyAllSplineMeshes");

	ABP_SplineVolumeTrail_v1b_C_DestroyAllSplineMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.BakeLinearColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UCurveLinearColor*       Curve_Linear_Color             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Pixel__X_                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            LinearColorOut                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void ABP_SplineVolumeTrail_v1b_C::BakeLinearColor(class UCurveLinearColor* Curve_Linear_Color, int Pixel__X_, struct FLinearColor* LinearColorOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.BakeLinearColor");

	ABP_SplineVolumeTrail_v1b_C_BakeLinearColor_Params params;
	params.Curve_Linear_Color = Curve_Linear_Color;
	params.Pixel__X_ = Pixel__X_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LinearColorOut != nullptr)
		*LinearColorOut = params.LinearColorOut;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ReturnSplineMeshToPool
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USplineMeshComponent*    SplineMesh                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            IndexToRemove                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SplineVolumeTrail_v1b_C::ReturnSplineMeshToPool(class USplineMeshComponent* SplineMesh, int IndexToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ReturnSplineMeshToPool");

	ABP_SplineVolumeTrail_v1b_C_ReturnSplineMeshToPool_Params params;
	params.SplineMesh = SplineMesh;
	params.IndexToRemove = IndexToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SplineUpdateOnTick
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::SplineUpdateOnTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SplineUpdateOnTick");

	ABP_SplineVolumeTrail_v1b_C_SplineUpdateOnTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.RedistributePointsAlongSpline
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::RedistributePointsAlongSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.RedistributePointsAlongSpline");

	ABP_SplineVolumeTrail_v1b_C_RedistributePointsAlongSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.GetLinearColorFromCurveAtTime
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UCurveLinearColor*       Curve_Linear_Color             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            LinearColorOut                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void ABP_SplineVolumeTrail_v1b_C::GetLinearColorFromCurveAtTime(class UCurveLinearColor* Curve_Linear_Color, int Index, struct FLinearColor* LinearColorOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.GetLinearColorFromCurveAtTime");

	ABP_SplineVolumeTrail_v1b_C_GetLinearColorFromCurveAtTime_Params params;
	params.Curve_Linear_Color = Curve_Linear_Color;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LinearColorOut != nullptr)
		*LinearColorOut = params.LinearColorOut;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.TickIntervalLODCheck
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::TickIntervalLODCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.TickIntervalLODCheck");

	ABP_SplineVolumeTrail_v1b_C_TickIntervalLODCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetWasRecentlyRendered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::SetWasRecentlyRendered()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetWasRecentlyRendered");

	ABP_SplineVolumeTrail_v1b_C_SetWasRecentlyRendered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.AddSplineDistanceCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ABP_SplineVolumeTrail_v1b_C::AddSplineDistanceCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.AddSplineDistanceCheck");

	ABP_SplineVolumeTrail_v1b_C_AddSplineDistanceCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetNewSplinePointsBool
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::SetNewSplinePointsBool()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetNewSplinePointsBool");

	ABP_SplineVolumeTrail_v1b_C_SetNewSplinePointsBool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetForwardAxisOnSplineMesh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USplineMeshComponent*    SplineMesh                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SplineVolumeTrail_v1b_C::SetForwardAxisOnSplineMesh(class USplineMeshComponent* SplineMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetForwardAxisOnSplineMesh");

	ABP_SplineVolumeTrail_v1b_C_SetForwardAxisOnSplineMesh_Params params;
	params.SplineMesh = SplineMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.RollSplineMesh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::RollSplineMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.RollSplineMesh");

	ABP_SplineVolumeTrail_v1b_C_RollSplineMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateParticleSystemPosition
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::UpdateParticleSystemPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateParticleSystemPosition");

	ABP_SplineVolumeTrail_v1b_C_UpdateParticleSystemPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateMID
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::UpdateMID()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateMID");

	ABP_SplineVolumeTrail_v1b_C_UpdateMID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ScaleSplineMesh
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::ScaleSplineMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ScaleSplineMesh");

	ABP_SplineVolumeTrail_v1b_C_ScaleSplineMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SplineTimestampManagement
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::SplineTimestampManagement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SplineTimestampManagement");

	ABP_SplineVolumeTrail_v1b_C_SplineTimestampManagement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateSplinePointPosition
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::UpdateSplinePointPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateSplinePointPosition");

	ABP_SplineVolumeTrail_v1b_C_UpdateSplinePointPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.AddSplinePoint
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::AddSplinePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.AddSplinePoint");

	ABP_SplineVolumeTrail_v1b_C_AddSplinePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetStartAndEndSplineMesh
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Update_Spline_Mesh             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SplineVolumeTrail_v1b_C::SetStartAndEndSplineMesh(bool Update_Spline_Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetStartAndEndSplineMesh");

	ABP_SplineVolumeTrail_v1b_C_SetStartAndEndSplineMesh_Params params;
	params.Update_Spline_Mesh = Update_Spline_Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.AddSplineMesh
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::AddSplineMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.AddSplineMesh");

	ABP_SplineVolumeTrail_v1b_C_AddSplineMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UserConstructionScript");

	ABP_SplineVolumeTrail_v1b_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DebugRotateTimeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::DebugRotateTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DebugRotateTimeline__FinishedFunc");

	ABP_SplineVolumeTrail_v1b_C_DebugRotateTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DebugRotateTimeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::DebugRotateTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DebugRotateTimeline__UpdateFunc");

	ABP_SplineVolumeTrail_v1b_C_DebugRotateTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SplineVolumeTrail_v1b_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ReceiveTick");

	ABP_SplineVolumeTrail_v1b_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ReceiveBeginPlay");

	ABP_SplineVolumeTrail_v1b_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SplineSystemDurationReached
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::SplineSystemDurationReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SplineSystemDurationReached");

	ABP_SplineVolumeTrail_v1b_C_SplineSystemDurationReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DebugMode_Rotate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::DebugMode_Rotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DebugMode_Rotate");

	ABP_SplineVolumeTrail_v1b_C_DebugMode_Rotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ManuallyStopSplineSystem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::ManuallyStopSplineSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ManuallyStopSplineSystem");

	ABP_SplineVolumeTrail_v1b_C_ManuallyStopSplineSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.Tick Interval LOD Check
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::Tick_Interval_LOD_Check()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.Tick Interval LOD Check");

	ABP_SplineVolumeTrail_v1b_C_Tick_Interval_LOD_Check_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.Recently Rendered Check
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::Recently_Rendered_Check()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.Recently Rendered Check");

	ABP_SplineVolumeTrail_v1b_C_Recently_Rendered_Check_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ClearRenderTarget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::ClearRenderTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ClearRenderTarget");

	ABP_SplineVolumeTrail_v1b_C_ClearRenderTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.GenerateCurveTextures
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::GenerateCurveTextures()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.GenerateCurveTextures");

	ABP_SplineVolumeTrail_v1b_C_GenerateCurveTextures_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ExecuteUbergraph_BP_SplineVolumeTrail_v1b
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SplineVolumeTrail_v1b_C::ExecuteUbergraph_BP_SplineVolumeTrail_v1b(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ExecuteUbergraph_BP_SplineVolumeTrail_v1b");

	ABP_SplineVolumeTrail_v1b_C_ExecuteUbergraph_BP_SplineVolumeTrail_v1b_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
