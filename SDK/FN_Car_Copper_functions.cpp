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

// Function Car_Copper.Car_Copper_C.toggle light visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewVisibility                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACar_Copper_C::toggle_light_visibility(bool bNewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.toggle light visibility");

	ACar_Copper_C_toggle_light_visibility_Params params;
	params.bNewVisibility = bNewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.Randomize the target brightness levels
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACar_Copper_C::Randomize_the_target_brightness_levels()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.Randomize the target brightness levels");

	ACar_Copper_C_Randomize_the_target_brightness_levels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.Set Light Brightness
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          _0_1_Intensity                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Include_Second_Emissive_Channel (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACar_Copper_C::Set_Light_Brightness(float _0_1_Intensity, bool Include_Second_Emissive_Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.Set Light Brightness");

	ACar_Copper_C_Set_Light_Brightness_Params params;
	params._0_1_Intensity = _0_1_Intensity;
	params.Include_Second_Emissive_Channel = Include_Second_Emissive_Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.MaterialEditorSine
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Look_up_value                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Period                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ACar_Copper_C::MaterialEditorSine(float Look_up_value, float Period)
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.MaterialEditorSine");

	ACar_Copper_C_MaterialEditorSine_Params params;
	params.Look_up_value = Look_up_value;
	params.Period = Period;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Car_Copper.Car_Copper_C.SetCarAlarmEnabledBasedOnLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// bool                           NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ACar_Copper_C::SetCarAlarmEnabledBasedOnLocation(const struct FVector& Location, bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.SetCarAlarmEnabledBasedOnLocation");

	ACar_Copper_C_SetCarAlarmEnabledBasedOnLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

	return params.ReturnValue;
}


// Function Car_Copper.Car_Copper_C.setcanmakebouncingnoisetrue
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACar_Copper_C::setcanmakebouncingnoisetrue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.setcanmakebouncingnoisetrue");

	ACar_Copper_C_setcanmakebouncingnoisetrue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.StopCarAlarmFromPlaying
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACar_Copper_C::StopCarAlarmFromPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.StopCarAlarmFromPlaying");

	ACar_Copper_C_StopCarAlarmFromPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACar_Copper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.UserConstructionScript");

	ACar_Copper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void ACar_Copper_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.Timeline_0__FinishedFunc");

	ACar_Copper_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void ACar_Copper_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.Timeline_0__UpdateFunc");

	ACar_Copper_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.BounceCar__FinishedFunc
// (FUNC_BlueprintEvent)

void ACar_Copper_C::BounceCar__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.BounceCar__FinishedFunc");

	ACar_Copper_C_BounceCar__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.BounceCar__UpdateFunc
// (FUNC_BlueprintEvent)

void ACar_Copper_C::BounceCar__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.BounceCar__UpdateFunc");

	ACar_Copper_C_BounceCar__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.Timeline_2__FinishedFunc
// (FUNC_BlueprintEvent)

void ACar_Copper_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.Timeline_2__FinishedFunc");

	ACar_Copper_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.Timeline_2__UpdateFunc
// (FUNC_BlueprintEvent)

void ACar_Copper_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.Timeline_2__UpdateFunc");

	ACar_Copper_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.Timeline_2__FireOffNoise__EventFunc
// (FUNC_BlueprintEvent)

void ACar_Copper_C::Timeline_2__FireOffNoise__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.Timeline_2__FireOffNoise__EventFunc");

	ACar_Copper_C_Timeline_2__FireOffNoise__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ACar_Copper_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.ReceiveBeginPlay");

	ACar_Copper_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.ReceiveHit
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

void ACar_Copper_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.ReceiveHit");

	ACar_Copper_C_ReceiveHit_Params params;
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


// Function Car_Copper.Car_Copper_C.StartSirenLight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACar_Copper_C::StartSirenLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.StartSirenLight");

	ACar_Copper_C_StartSirenLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.FadeSirenLight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACar_Copper_C::FadeSirenLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.FadeSirenLight");

	ACar_Copper_C_FadeSirenLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.TriggerLowHealthParticleEffect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACar_Copper_C::TriggerLowHealthParticleEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.TriggerLowHealthParticleEffect");

	ACar_Copper_C_TriggerLowHealthParticleEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.OnDeathPlayEffects
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// float*                         Damage                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FVector*                Momentum                       (CPF_Parm, CPF_IsPlainOldData)
// struct FHitResult*             HitInfo                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor**                 DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (CPF_Parm)

void ACar_Copper_C::OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.OnDeathPlayEffects");

	ACar_Copper_C_OnDeathPlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.OnDamagePlayEffects
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// float*                         Damage                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FVector*                Momentum                       (CPF_Parm, CPF_IsPlainOldData)
// struct FHitResult*             HitInfo                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor**                 DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (CPF_Parm)

void ACar_Copper_C::OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.OnDamagePlayEffects");

	ACar_Copper_C_OnDamagePlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACar_Copper_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.ReceiveEndPlay");

	ACar_Copper_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.OnDamageServer
// (FUNC_BlueprintAuthorityOnly, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// float*                         Damage                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FVector*                Momentum                       (CPF_Parm, CPF_IsPlainOldData)
// struct FHitResult*             HitInfo                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// class AController**            InstigatedBy                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor**                 DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (CPF_Parm)

void ACar_Copper_C::OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.OnDamageServer");

	ACar_Copper_C_OnDamageServer_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.FireOffCarAlarm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACar_Copper_C::FireOffCarAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.FireOffCarAlarm");

	ACar_Copper_C_FireOffCarAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.OnBounceAnimationUpdate
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFortBounceData*        Data                           (CPF_Parm)

void ACar_Copper_C::OnBounceAnimationUpdate(struct FFortBounceData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.OnBounceAnimationUpdate");

	ACar_Copper_C_OnBounceAnimationUpdate_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.Hit Bounce Finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACar_Copper_C::Hit_Bounce_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.Hit Bounce Finished");

	ACar_Copper_C_Hit_Bounce_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.Player jump based bounce 
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACar_Copper_C::Player_jump_based_bounce_()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.Player jump based bounce ");

	ACar_Copper_C_Player_jump_based_bounce__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.ExecuteUbergraph_Car_Copper
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACar_Copper_C::ExecuteUbergraph_Car_Copper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.ExecuteUbergraph_Car_Copper");

	ACar_Copper_C_ExecuteUbergraph_Car_Copper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
