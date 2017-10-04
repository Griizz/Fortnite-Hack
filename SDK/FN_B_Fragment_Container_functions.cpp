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

// Function B_Fragment_Container.B_Fragment_Container_C.ForceFeedbackInteract
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Soft                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Fragment_Container_C::ForceFeedbackInteract(bool Soft)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.ForceFeedbackInteract");

	AB_Fragment_Container_C_ForceFeedbackInteract_Params params;
	params.Soft = Soft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.OnRep_IsOrbTaken
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Fragment_Container_C::OnRep_IsOrbTaken()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.OnRep_IsOrbTaken");

	AB_Fragment_Container_C_OnRep_IsOrbTaken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.OnRep_IsOn
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Fragment_Container_C::OnRep_IsOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.OnRep_IsOn");

	AB_Fragment_Container_C_OnRep_IsOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.SetOutlander
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  NewOutlander                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Fragment_Container_C::SetOutlander(class AActor* NewOutlander)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.SetOutlander");

	AB_Fragment_Container_C_SetOutlander_Params params;
	params.NewOutlander = NewOutlander;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.SetAwake
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           NewAwake                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Fragment_Container_C::SetAwake(bool NewAwake)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.SetAwake");

	AB_Fragment_Container_C_SetAwake_Params params;
	params.NewAwake = NewAwake;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.UpdateShouldTick
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Fragment_Container_C::UpdateShouldTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.UpdateShouldTick");

	AB_Fragment_Container_C_UpdateShouldTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintGetFailedInteractionString
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText AB_Fragment_Container_C::BlueprintGetFailedInteractionString(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.BlueprintGetFailedInteractionString");

	AB_Fragment_Container_C_BlueprintGetFailedInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_Fragment_Container.B_Fragment_Container_C.OnRep_IsOpen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Fragment_Container_C::OnRep_IsOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.OnRep_IsOpen");

	AB_Fragment_Container_C_OnRep_IsOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.DelayedDestroy
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Fragment_Container_C::DelayedDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.DelayedDestroy");

	AB_Fragment_Container_C_DelayedDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.OnRep_BuffType
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Fragment_Container_C::OnRep_BuffType()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.OnRep_BuffType");

	AB_Fragment_Container_C_OnRep_BuffType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintGetInteractionString
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortPawn**              InteractingPawn                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText AB_Fragment_Container_C::BlueprintGetInteractionString(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.BlueprintGetInteractionString");

	AB_Fragment_Container_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintCanInteract
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AB_Fragment_Container_C::BlueprintCanInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.BlueprintCanInteract");

	AB_Fragment_Container_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_Fragment_Container.B_Fragment_Container_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Fragment_Container_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.UserConstructionScript");

	AB_Fragment_Container_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__FinishedFunc
// (FUNC_BlueprintEvent)

void AB_Fragment_Container_C::VerticalMovementTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__FinishedFunc");

	AB_Fragment_Container_C_VerticalMovementTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__UpdateFunc
// (FUNC_BlueprintEvent)

void AB_Fragment_Container_C::VerticalMovementTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__UpdateFunc");

	AB_Fragment_Container_C_VerticalMovementTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__Up__EventFunc
// (FUNC_BlueprintEvent)

void AB_Fragment_Container_C::VerticalMovementTimeline__Up__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__Up__EventFunc");

	AB_Fragment_Container_C_VerticalMovementTimeline__Up__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__down__EventFunc
// (FUNC_BlueprintEvent)

void AB_Fragment_Container_C::VerticalMovementTimeline__down__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__down__EventFunc");

	AB_Fragment_Container_C_VerticalMovementTimeline__down__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AB_Fragment_Container_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.ReceiveBeginPlay");

	AB_Fragment_Container_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.OnDeathServer
// (FUNC_BlueprintAuthorityOnly, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// float*                         Damage                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FVector*                Momentum                       (CPF_Parm, CPF_IsPlainOldData)
// struct FHitResult*             HitInfo                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// class AController**            InstigatedBy                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor**                 DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (CPF_Parm)

void AB_Fragment_Container_C::OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.OnDeathServer");

	AB_Fragment_Container_C_OnDeathServer_Params params;
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


// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintOnInteract
// (FUNC_BlueprintAuthorityOnly, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AFortPawn**              InteractingPawn                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Fragment_Container_C::BlueprintOnInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.BlueprintOnInteract");

	AB_Fragment_Container_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.ActivateFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Fragment_Container_C::ActivateFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.ActivateFX");

	AB_Fragment_Container_C_ActivateFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_108_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFromSweep                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void AB_Fragment_Container_C::BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_108_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_108_ComponentBeginOverlapSignature__DelegateSignature");

	AB_Fragment_Container_C_BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_108_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function B_Fragment_Container.B_Fragment_Container_C.BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_111_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Fragment_Container_C::BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_111_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_111_ComponentEndOverlapSignature__DelegateSignature");

	AB_Fragment_Container_C_BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_111_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Fragment_Container_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.ReceiveTick");

	AB_Fragment_Container_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.MoveUp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Fragment_Container_C::MoveUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.MoveUp");

	AB_Fragment_Container_C_MoveUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.PowerDown
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Fragment_Container_C::PowerDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.PowerDown");

	AB_Fragment_Container_C_PowerDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.MoveDown
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Fragment_Container_C::MoveDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.MoveDown");

	AB_Fragment_Container_C_MoveDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.ShowOnMiniMap
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Fragment_Container_C::ShowOnMiniMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.ShowOnMiniMap");

	AB_Fragment_Container_C_ShowOnMiniMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.StartHide
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Fragment_Container_C::StartHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.StartHide");

	AB_Fragment_Container_C_StartHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.Reset_Activation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Fragment_Container_C::Reset_Activation()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.Reset_Activation");

	AB_Fragment_Container_C_Reset_Activation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintOnBeginInteract
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AB_Fragment_Container_C::BlueprintOnBeginInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.BlueprintOnBeginInteract");

	AB_Fragment_Container_C_BlueprintOnBeginInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.MultiFeedback
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Fragment_Container_C::MultiFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.MultiFeedback");

	AB_Fragment_Container_C_MultiFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.SoftFeedback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Fragment_Container_C::SoftFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.SoftFeedback");

	AB_Fragment_Container_C_SoftFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.ExecuteUbergraph_B_Fragment_Container
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Fragment_Container_C::ExecuteUbergraph_B_Fragment_Container(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.ExecuteUbergraph_B_Fragment_Container");

	AB_Fragment_Container_C_ExecuteUbergraph_B_Fragment_Container_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
