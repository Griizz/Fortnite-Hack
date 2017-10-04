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

// Function ProjectileHuskRanged.ProjectileHuskRanged_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AProjectileHuskRanged_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileHuskRanged.ProjectileHuskRanged_C.UserConstructionScript");

	AProjectileHuskRanged_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileHuskRanged.ProjectileHuskRanged_C.ReceiveHit
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    MyComp                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor**                 Other                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool*                          bSelfMoved                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector*                HitLocation                    (CPF_Parm, CPF_IsPlainOldData)
// struct FVector*                HitNormal                      (CPF_Parm, CPF_IsPlainOldData)
// struct FVector*                NormalImpulse                  (CPF_Parm, CPF_IsPlainOldData)
// struct FHitResult*             Hit                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void AProjectileHuskRanged_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileHuskRanged.ProjectileHuskRanged_C.ReceiveHit");

	AProjectileHuskRanged_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileHuskRanged.ProjectileHuskRanged_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AProjectileHuskRanged_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileHuskRanged.ProjectileHuskRanged_C.ReceiveBeginPlay");

	AProjectileHuskRanged_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileHuskRanged.ProjectileHuskRanged_C.ProjectileCheck
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AProjectileHuskRanged_C::ProjectileCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileHuskRanged.ProjectileHuskRanged_C.ProjectileCheck");

	AProjectileHuskRanged_C_ProjectileCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileHuskRanged.ProjectileHuskRanged_C.StopHoming
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AProjectileHuskRanged_C::StopHoming()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileHuskRanged.ProjectileHuskRanged_C.StopHoming");

	AProjectileHuskRanged_C_StopHoming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileHuskRanged.ProjectileHuskRanged_C.OnExploded
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AActor*>*         HitActors                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FHitResult>*     HitResults                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void AProjectileHuskRanged_C::OnExploded(TArray<class AActor*>* HitActors, TArray<struct FHitResult>* HitResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileHuskRanged.ProjectileHuskRanged_C.OnExploded");

	AProjectileHuskRanged_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileHuskRanged.ProjectileHuskRanged_C.OnStoppedOnServer
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AProjectileHuskRanged_C::OnStoppedOnServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileHuskRanged.ProjectileHuskRanged_C.OnStoppedOnServer");

	AProjectileHuskRanged_C_OnStoppedOnServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileHuskRanged.ProjectileHuskRanged_C.ExecuteUbergraph_ProjectileHuskRanged
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AProjectileHuskRanged_C::ExecuteUbergraph_ProjectileHuskRanged(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileHuskRanged.ProjectileHuskRanged_C.ExecuteUbergraph_ProjectileHuskRanged");

	AProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
