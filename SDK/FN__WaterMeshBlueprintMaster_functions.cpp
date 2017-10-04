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

// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Construction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void A_WaterMeshBlueprintMaster_C::Construction()
{
	static auto fn = UObject::FindObject<UFunction>("Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Construction");

	A_WaterMeshBlueprintMaster_C_Construction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Handle Water Penetration Components And Arrays
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           In_T_Out_F                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Touching_Actor                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UStaticMeshComponent*    Touching_Volume                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void A_WaterMeshBlueprintMaster_C::Handle_Water_Penetration_Components_And_Arrays(bool In_T_Out_F, class AActor* Touching_Actor, class UStaticMeshComponent* Touching_Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Handle Water Penetration Components And Arrays");

	A_WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays_Params params;
	params.In_T_Out_F = In_T_Out_F;
	params.Touching_Actor = Touching_Actor;
	params.Touching_Volume = Touching_Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Find Placement on water mesh surfaces
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              Traced_Transform               (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FVector                 VelocityVector                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           Trace_Hit                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void A_WaterMeshBlueprintMaster_C::Find_Placement_on_water_mesh_surfaces(struct FTransform* Traced_Transform, struct FVector* VelocityVector, bool* Trace_Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Find Placement on water mesh surfaces");

	A_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Traced_Transform != nullptr)
		*Traced_Transform = params.Traced_Transform;
	if (VelocityVector != nullptr)
		*VelocityVector = params.VelocityVector;
	if (Trace_Hit != nullptr)
		*Trace_Hit = params.Trace_Hit;
}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.SetupMeshCollisionVolumes
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    StaticMeshComponent            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Target_Int                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void A_WaterMeshBlueprintMaster_C::SetupMeshCollisionVolumes(class UStaticMeshComponent* StaticMeshComponent, int Target_Int)
{
	static auto fn = UObject::FindObject<UFunction>("Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.SetupMeshCollisionVolumes");

	A_WaterMeshBlueprintMaster_C_SetupMeshCollisionVolumes_Params params;
	params.StaticMeshComponent = StaticMeshComponent;
	params.Target_Int = Target_Int;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void A_WaterMeshBlueprintMaster_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.UserConstructionScript");

	A_WaterMeshBlueprintMaster_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.ReturnWaterHitLocation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerPawn_Generic_C*   CallingActor                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void A_WaterMeshBlueprintMaster_C::ReturnWaterHitLocation(class APlayerPawn_Generic_C* CallingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.ReturnWaterHitLocation");

	A_WaterMeshBlueprintMaster_C_ReturnWaterHitLocation_Params params;
	params.CallingActor = CallingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void A_WaterMeshBlueprintMaster_C::BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature");

	A_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void A_WaterMeshBlueprintMaster_C::BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature");

	A_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFromSweep                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void A_WaterMeshBlueprintMaster_C::BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature");

	A_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void A_WaterMeshBlueprintMaster_C::BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature");

	A_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFromSweep                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void A_WaterMeshBlueprintMaster_C::BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature");

	A_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFromSweep                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void A_WaterMeshBlueprintMaster_C::BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature");

	A_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFromSweep                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void A_WaterMeshBlueprintMaster_C::BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature");

	A_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void A_WaterMeshBlueprintMaster_C::BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature");

	A_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Construct
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void A_WaterMeshBlueprintMaster_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Construct");

	A_WaterMeshBlueprintMaster_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void A_WaterMeshBlueprintMaster_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.ReceiveBeginPlay");

	A_WaterMeshBlueprintMaster_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.ExecuteUbergraph__WaterMeshBlueprintMaster
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void A_WaterMeshBlueprintMaster_C::ExecuteUbergraph__WaterMeshBlueprintMaster(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.ExecuteUbergraph__WaterMeshBlueprintMaster");

	A_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
