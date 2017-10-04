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

// Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bShouldBlockAbilities          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayAbility::SetShouldBlockOtherAbilities(bool bShouldBlockAbilities)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities");

	UGameplayAbility_SetShouldBlockOtherAbilities_Params params;
	params.bShouldBlockAbilities = bShouldBlockAbilities;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.SetCanBeCanceled
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bCanBeCanceled                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayAbility::SetCanBeCanceled(bool bCanBeCanceled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.SetCanBeCanceled");

	UGameplayAbility_SetCanBeCanceled_Params params;
	params.bCanBeCanceled = bCanBeCanceled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.SendGameplayEvent
// (FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTag            EventTag                       (CPF_Parm)
// struct FGameplayEventData      Payload                        (CPF_Parm)

void UGameplayAbility::SendGameplayEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.SendGameplayEvent");

	UGameplayAbility_SendGameplayEvent_Params params;
	params.EventTag = EventTag;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.RemoveGrantedByEffect
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UGameplayAbility::RemoveGrantedByEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.RemoveGrantedByEffect");

	UGameplayAbility_RemoveGrantedByEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.MontageStop
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// float                          OverrideBlendOutTime           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayAbility::MontageStop(float OverrideBlendOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MontageStop");

	UGameplayAbility_MontageStop_Params params;
	params.OverrideBlendOutTime = OverrideBlendOutTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   FromSectionName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ToSectionName                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayAbility::MontageSetNextSectionName(const struct FName& FromSectionName, const struct FName& ToSectionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName");

	UGameplayAbility_MontageSetNextSectionName_Params params;
	params.FromSectionName = FromSectionName;
	params.ToSectionName = ToSectionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.MontageJumpToSection
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   SectionName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayAbility::MontageJumpToSection(const struct FName& SectionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MontageJumpToSection");

	UGameplayAbility_MontageJumpToSection_Params params;
	params.SectionName = SectionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   SocketName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayAbilityTargetingLocationInfo ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(const struct FName& SocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent");

	UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Params params;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetingLocationInfo ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor");

	UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UClass*                  GameplayEffectClass            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Level                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectSpecHandle UGameplayAbility::MakeOutgoingGameplayEffectSpec(class UClass* GameplayEffectClass, float Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec");

	UGameplayAbility_MakeOutgoingGameplayEffectSpec_Params params;
	params.GameplayEffectClass = GameplayEffectClass;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (CPF_Parm)
// struct FGameplayEventData      Payload                        (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayAbility::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent");

	UGameplayAbility_K2_ShouldAbilityRespondToEvent_Params params;
	params.ActorInfo = ActorInfo;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
// (FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_Parm)

void UGameplayAbility::K2_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue");

	UGameplayAbility_K2_RemoveGameplayCue_Params params;
	params.GameplayCueTag = GameplayCueTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.K2_OnEndAbility
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UGameplayAbility::K2_OnEndAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_OnEndAbility");

	UGameplayAbility_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
// (FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_Parm)
// struct FGameplayCueParameters  GameplayCueParameters          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UGameplayAbility::K2_ExecuteGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams");

	UGameplayAbility_K2_ExecuteGameplayCueWithParams_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.GameplayCueParameters = GameplayCueParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
// (FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_Parm)
// struct FGameplayEffectContextHandle Context                        (CPF_Parm)

void UGameplayAbility::K2_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue");

	UGameplayAbility_K2_ExecuteGameplayCue_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.K2_EndAbility
// (FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UGameplayAbility::K2_EndAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_EndAbility");

	UGameplayAbility_K2_EndAbility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.K2_CommitExecute
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGameplayAbility::K2_CommitExecute()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CommitExecute");

	UGameplayAbility_K2_CommitExecute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           BroadcastCommitEvent           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayAbility::K2_CommitAbilityCost(bool BroadcastCommitEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost");

	UGameplayAbility_K2_CommitAbilityCost_Params params;
	params.BroadcastCommitEvent = BroadcastCommitEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           BroadcastCommitEvent           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ForceCooldown                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayAbility::K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown");

	UGameplayAbility_K2_CommitAbilityCooldown_Params params;
	params.BroadcastCommitEvent = BroadcastCommitEvent;
	params.ForceCooldown = ForceCooldown;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CommitAbility
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayAbility::K2_CommitAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CommitAbility");

	UGameplayAbility_K2_CommitAbility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayAbility::K2_CheckAbilityCost()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost");

	UGameplayAbility_K2_CheckAbilityCost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayAbility::K2_CheckAbilityCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown");

	UGameplayAbility_K2_CheckAbilityCooldown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (CPF_Parm)
// struct FGameplayTagContainer   RelevantTags                   (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayAbility::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility");

	UGameplayAbility_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle EffectSpecHandle               (CPF_ConstParm, CPF_Parm)
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_Parm)
// TArray<struct FActiveGameplayEffectHandle> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::K2_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& EffectSpecHandle, const struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget");

	UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Params params;
	params.EffectSpecHandle = EffectSpecHandle;
	params.TargetData = TargetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle EffectSpecHandle               (CPF_ConstParm, CPF_Parm)
// struct FActiveGameplayEffectHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FActiveGameplayEffectHandle UGameplayAbility::K2_ApplyGameplayEffectSpecToOwner(const struct FGameplayEffectSpecHandle& EffectSpecHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner");

	UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Params params;
	params.EffectSpecHandle = EffectSpecHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams
// (FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_Parm)
// struct FGameplayCueParameters  GameplayCueParameter           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bRemoveOnAbilityEnd            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayAbility::K2_AddGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams");

	UGameplayAbility_K2_AddGameplayCueWithParams_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.GameplayCueParameter = GameplayCueParameter;
	params.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue
// (FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_Parm)
// struct FGameplayEffectContextHandle Context                        (CPF_Parm)
// bool                           bRemoveOnAbilityEnd            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayAbility::K2_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue");

	UGameplayAbility_K2_AddGameplayCue_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.Context = Context;
	params.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UGameplayAbility::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent");

	UGameplayAbility_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.K2_ActivateAbility
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UGameplayAbility::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ActivateAbility");

	UGameplayAbility_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_Const)

void UGameplayAbility::InvalidateClientPredictionKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey");

	UGameplayAbility_InvalidateClientPredictionKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class USkeletalMeshComponent* UGameplayAbility::GetOwningComponentFromActorInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo");

	UGameplayAbility_GetOwningComponentFromActorInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* UGameplayAbility::GetOwningActorFromActorInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo");

	UGameplayAbility_GetOwningActorFromActorInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FGameplayEffectContextHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectContextHandle UGameplayAbility::GetGrantedByEffectContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext");

	UGameplayAbility_GetGrantedByEffectContext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UObject* UGameplayAbility::GetCurrentSourceObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject");

	UGameplayAbility_GetCurrentSourceObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetCurrentMontage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAnimMontage* UGameplayAbility::GetCurrentMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetCurrentMontage");

	UGameplayAbility_GetCurrentMontage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetCoolDownTimeRemaining
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UGameplayAbility::GetCoolDownTimeRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetCoolDownTimeRemaining");

	UGameplayAbility_GetCoolDownTimeRemaining_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetContextFromOwner
// (FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FGameplayAbilityTargetDataHandle OptionalTargetData             (CPF_Parm)
// struct FGameplayEffectContextHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectContextHandle UGameplayAbility::GetContextFromOwner(const struct FGameplayAbilityTargetDataHandle& OptionalTargetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetContextFromOwner");

	UGameplayAbility_GetContextFromOwner_Params params;
	params.OptionalTargetData = OptionalTargetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* UGameplayAbility::GetAvatarActorFromActorInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo");

	UGameplayAbility_GetAvatarActorFromActorInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetActorInfo
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FGameplayAbilityActorInfo ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayAbilityActorInfo UGameplayAbility::GetActorInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetActorInfo");

	UGameplayAbility_GetActorInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetAbilityLevel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UGameplayAbility::GetAbilityLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetAbilityLevel");

	UGameplayAbility_GetAbilityLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InstanceName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayAbility::EndTaskByInstanceName(const struct FName& InstanceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName");

	UGameplayAbility_EndTaskByInstanceName_Params params;
	params.InstanceName = InstanceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.EndAbilityState
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   OptionalStateNameToEnd         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayAbility::EndAbilityState(const struct FName& OptionalStateNameToEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.EndAbilityState");

	UGameplayAbility_EndAbilityState_Params params;
	params.OptionalStateNameToEnd = OptionalStateNameToEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InstanceName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bEndTask                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayAbility::ConfirmTaskByInstanceName(const struct FName& InstanceName, bool bEndTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName");

	UGameplayAbility_ConfirmTaskByInstanceName_Params params;
	params.InstanceName = InstanceName;
	params.bEndTask = bEndTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InstanceName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayAbility::CancelTaskByInstanceName(const struct FName& InstanceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName");

	UGameplayAbility_CancelTaskByInstanceName_Params params;
	params.InstanceName = InstanceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                         (CPF_Parm)
// int                            StacksToRemove                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithHandle(const struct FActiveGameplayEffectHandle& Handle, int StacksToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle");

	UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithHandle_Params params;
	params.Handle = Handle;
	params.StacksToRemove = StacksToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   WithGrantedTags                (CPF_Parm)
// int                            StacksToRemove                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithGrantedTags(const struct FGameplayTagContainer& WithGrantedTags, int StacksToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags");

	UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Params params;
	params.WithGrantedTags = WithGrantedTags;
	params.StacksToRemove = StacksToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   WithAssetTags                  (CPF_Parm)
// int                            StacksToRemove                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithAssetTags(const struct FGameplayTagContainer& WithAssetTags, int StacksToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags");

	UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Params params;
	params.WithAssetTags = WithAssetTags;
	params.StacksToRemove = StacksToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_Parm)
// class UClass*                  GameplayEffectClass            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            GameplayEffectLevel            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Stacks                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FActiveGameplayEffectHandle> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::BP_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* GameplayEffectClass, int GameplayEffectLevel, int Stacks)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget");

	UGameplayAbility_BP_ApplyGameplayEffectToTarget_Params params;
	params.TargetData = TargetData;
	params.GameplayEffectClass = GameplayEffectClass;
	params.GameplayEffectLevel = GameplayEffectLevel;
	params.Stacks = Stacks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  GameplayEffectClass            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            GameplayEffectLevel            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Stacks                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FActiveGameplayEffectHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FActiveGameplayEffectHandle UGameplayAbility::BP_ApplyGameplayEffectToOwner(class UClass* GameplayEffectClass, int GameplayEffectLevel, int Stacks)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner");

	UGameplayAbility_BP_ApplyGameplayEffectToOwner_Params params;
	params.GameplayEffectClass = GameplayEffectClass;
	params.GameplayEffectLevel = GameplayEffectLevel;
	params.Stacks = Stacks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  InAbilityToActivate            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bAllowRemoteActivation         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemComponent::TryActivateAbilityByClass(class UClass* InAbilityToActivate, bool bAllowRemoteActivation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass");

	UAbilitySystemComponent_TryActivateAbilityByClass_Params params;
	params.InAbilityToActivate = InAbilityToActivate;
	params.bAllowRemoteActivation = bAllowRemoteActivation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bAllowRemoteActivation         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemComponent::TryActivateAbilitiesByTag(const struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag");

	UAbilitySystemComponent_TryActivateAbilitiesByTag_Params params;
	params.GameplayTagContainer = GameplayTagContainer;
	params.bAllowRemoteActivation = bAllowRemoteActivation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.TargetConfirm
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAbilitySystemComponent::TargetConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.TargetConfirm");

	UAbilitySystemComponent_TargetConfirm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.TargetCancel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAbilitySystemComponent::TargetCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.TargetCancel");

	UAbilitySystemComponent_TargetCancel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           NewInhibit                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilitySystemComponent::SetUserAbilityActivationInhibited(bool NewInhibit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited");

	UAbilitySystemComponent_SetUserAbilityActivationInhibited_Params params;
	params.NewInhibit = NewInhibit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectQuery    Query                          (CPF_Parm)
// int                            NewLevel                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilitySystemComponent::SetActiveGameplayEffectLevelUsingQuery(const struct FGameplayEffectQuery& Query, int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery");

	UAbilitySystemComponent_SetActiveGameplayEffectLevelUsingQuery_Params params;
	params.Query = Query;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                   (CPF_Parm)
// int                            NewLevel                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilitySystemComponent::SetActiveGameplayEffectLevel(const struct FActiveGameplayEffectHandle& ActiveHandle, int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel");

	UAbilitySystemComponent_SetActiveGameplayEffectLevel_Params params;
	params.ActiveHandle = ActiveHandle;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (CPF_Parm)
// bool                           InputPressed                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FPredictionKey          PredictionKey                  (CPF_Parm)
// struct FGameplayEventData      TriggerEventData               (CPF_Parm)

void UAbilitySystemComponent::ServerTryActivateAbilityWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData");

	UAbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params params;
	params.AbilityToActivate = AbilityToActivate;
	params.InputPressed = InputPressed;
	params.PredictionKey = PredictionKey;
	params.TriggerEventData = TriggerEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (CPF_Parm)
// bool                           InputPressed                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FPredictionKey          PredictionKey                  (CPF_Parm)

void UAbilitySystemComponent::ServerTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility");

	UAbilitySystemComponent_ServerTryActivateAbility_Params params;
	params.AbilityToActivate = AbilityToActivate;
	params.InputPressed = InputPressed;
	params.PredictionKey = PredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityHandle                  (CPF_Parm)
// struct FPredictionKey          AbilityOriginalPredictionKey   (CPF_Parm)
// struct FPredictionKey          CurrentPredictionKey           (CPF_Parm)

void UAbilitySystemComponent::ServerSetReplicatedTargetDataCancelled(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled");

	UAbilitySystemComponent_ServerSetReplicatedTargetDataCancelled_Params params;
	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	params.CurrentPredictionKey = CurrentPredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityHandle                  (CPF_Parm)
// struct FPredictionKey          AbilityOriginalPredictionKey   (CPF_Parm)
// struct FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle     (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (CPF_Parm)
// struct FPredictionKey          CurrentPredictionKey           (CPF_Parm)

void UAbilitySystemComponent::ServerSetReplicatedTargetData(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, const struct FGameplayTag& ApplicationTag, const struct FPredictionKey& CurrentPredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData");

	UAbilitySystemComponent_ServerSetReplicatedTargetData_Params params;
	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	params.ReplicatedTargetDataHandle = ReplicatedTargetDataHandle;
	params.ApplicationTag = ApplicationTag;
	params.CurrentPredictionKey = CurrentPredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<EAbilityGenericReplicatedEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayAbilitySpecHandle AbilityHandle                  (CPF_Parm)
// struct FPredictionKey          AbilityOriginalPredictionKey   (CPF_Parm)
// struct FPredictionKey          CurrentPredictionKey           (CPF_Parm)
// struct FVector_NetQuantize100  VectorPayload                  (CPF_Parm)

void UAbilitySystemComponent::ServerSetReplicatedEventWithPayload(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey, const struct FVector_NetQuantize100& VectorPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload");

	UAbilitySystemComponent_ServerSetReplicatedEventWithPayload_Params params;
	params.EventType = EventType;
	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	params.CurrentPredictionKey = CurrentPredictionKey;
	params.VectorPayload = VectorPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<EAbilityGenericReplicatedEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayAbilitySpecHandle AbilityHandle                  (CPF_Parm)
// struct FPredictionKey          AbilityOriginalPredictionKey   (CPF_Parm)
// struct FPredictionKey          CurrentPredictionKey           (CPF_Parm)

void UAbilitySystemComponent::ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent");

	UAbilitySystemComponent_ServerSetReplicatedEvent_Params params;
	params.EventType = EventType;
	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	params.CurrentPredictionKey = CurrentPredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityHandle                  (CPF_Parm)

void UAbilitySystemComponent::ServerSetInputReleased(const struct FGameplayAbilitySpecHandle& AbilityHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased");

	UAbilitySystemComponent_ServerSetInputReleased_Params params;
	params.AbilityHandle = AbilityHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityHandle                  (CPF_Parm)

void UAbilitySystemComponent::ServerSetInputPressed(const struct FGameplayAbilitySpecHandle& AbilityHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed");

	UAbilitySystemComponent_ServerSetInputPressed_Params params;
	params.AbilityHandle = AbilityHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// TArray<struct FString>         Strings                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UAbilitySystemComponent::ServerPrintDebug_RequestWithStrings(TArray<struct FString> Strings)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings");

	UAbilitySystemComponent_ServerPrintDebug_RequestWithStrings_Params params;
	params.Strings = Strings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)

void UAbilitySystemComponent::ServerPrintDebug_Request()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request");

	UAbilitySystemComponent_ServerPrintDebug_Request_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToEnd                   (CPF_Parm)
// struct FGameplayAbilityActivationInfo ActivationInfo                 (CPF_Parm)
// struct FPredictionKey          PredictionKey                  (CPF_Parm)

void UAbilitySystemComponent::ServerEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo, const struct FPredictionKey& PredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility");

	UAbilitySystemComponent_ServerEndAbility_Params params;
	params.AbilityToEnd = AbilityToEnd;
	params.ActivationInfo = ActivationInfo;
	params.PredictionKey = PredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// class UAnimMontage*            ClientAnimMontage              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InPlayRate                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilitySystemComponent::ServerCurrentMontageSetPlayRate(class UAnimMontage* ClientAnimMontage, float InPlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate");

	UAbilitySystemComponent_ServerCurrentMontageSetPlayRate_Params params;
	params.ClientAnimMontage = ClientAnimMontage;
	params.InPlayRate = InPlayRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// class UAnimMontage*            ClientAnimMontage              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ClientPosition                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SectionName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   NextSectionName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilitySystemComponent::ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, const struct FName& SectionName, const struct FName& NextSectionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName");

	UAbilitySystemComponent_ServerCurrentMontageSetNextSectionName_Params params;
	params.ClientAnimMontage = ClientAnimMontage;
	params.ClientPosition = ClientPosition;
	params.SectionName = SectionName;
	params.NextSectionName = NextSectionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// class UAnimMontage*            ClientAnimMontage              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SectionName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilitySystemComponent::ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, const struct FName& SectionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName");

	UAbilitySystemComponent_ServerCurrentMontageJumpToSectionName_Params params;
	params.ClientAnimMontage = ClientAnimMontage;
	params.SectionName = SectionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToCancel                (CPF_Parm)
// struct FGameplayAbilityActivationInfo ActivationInfo                 (CPF_Parm)

void UAbilitySystemComponent::ServerCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility");

	UAbilitySystemComponent_ServerCancelAbility_Params params;
	params.AbilityToCancel = AbilityToCancel;
	params.ActivationInfo = ActivationInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilities_FServerAbilityRPCBatch BatchInfo                      (CPF_Parm)

void UAbilitySystemComponent::ServerAbilityRPCBatch(const struct FGameplayAbilities_FServerAbilityRPCBatch& BatchInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch");

	UAbilitySystemComponent_ServerAbilityRPCBatch_Params params;
	params.BatchInfo = BatchInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  GameplayEffect                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilitySystemComponent* InstigatorAbilitySystemComponent (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            StacksToRemove                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilitySystemComponent::RemoveActiveGameplayEffectBySourceEffect(class UClass* GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int StacksToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect");

	UAbilitySystemComponent_RemoveActiveGameplayEffectBySourceEffect_Params params;
	params.GameplayEffect = GameplayEffect;
	params.InstigatorAbilitySystemComponent = InstigatorAbilitySystemComponent;
	params.StacksToRemove = StacksToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                         (CPF_Parm)
// int                            StacksToRemove                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemComponent::RemoveActiveGameplayEffect(const struct FActiveGameplayEffectHandle& Handle, int StacksToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect");

	UAbilitySystemComponent_RemoveActiveGameplayEffect_Params params;
	params.Handle = Handle;
	params.StacksToRemove = StacksToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   Tags                           (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAbilitySystemComponent::RemoveActiveEffectsWithTags(const struct FGameplayTagContainer& Tags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags");

	UAbilitySystemComponent_RemoveActiveEffectsWithTags_Params params;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   Tags                           (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAbilitySystemComponent::RemoveActiveEffectsWithSourceTags(const struct FGameplayTagContainer& Tags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags");

	UAbilitySystemComponent_RemoveActiveEffectsWithSourceTags_Params params;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   Tags                           (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAbilitySystemComponent::RemoveActiveEffectsWithGrantedTags(const struct FGameplayTagContainer& Tags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags");

	UAbilitySystemComponent_RemoveActiveEffectsWithGrantedTags_Params params;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   Tags                           (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAbilitySystemComponent::RemoveActiveEffectsWithAppliedTags(const struct FGameplayTagContainer& Tags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags");

	UAbilitySystemComponent_RemoveActiveEffectsWithAppliedTags_Params params;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString
// (FUNC_Native, FUNC_Public)

void UAbilitySystemComponent::OnRep_ServerDebugString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString");

	UAbilitySystemComponent_OnRep_ServerDebugString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UAbilitySystemComponent::OnRep_ReplicatedAnimMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage");

	UAbilitySystemComponent_OnRep_ReplicatedAnimMontage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAbilitySystemComponent::OnRep_OwningActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor");

	UAbilitySystemComponent_OnRep_OwningActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString
// (FUNC_Native, FUNC_Public)

void UAbilitySystemComponent::OnRep_ClientDebugString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString");

	UAbilitySystemComponent_OnRep_ClientDebugString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UAbilitySystemComponent::OnRep_ActivateAbilities()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities");

	UAbilitySystemComponent_OnRep_ActivateAbilities_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// struct FGameplayTagContainer   GameplayCueTags                (CPF_ConstParm, CPF_Parm)
// struct FPredictionKey          PredictionKey                  (CPF_Parm)
// struct FGameplayCueParameters  GameplayCueParameters          (CPF_Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesExecuted_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams");

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_WithParams_Params params;
	params.GameplayCueTags = GameplayCueTags;
	params.PredictionKey = PredictionKey;
	params.GameplayCueParameters = GameplayCueParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// struct FGameplayTagContainer   GameplayCueTags                (CPF_ConstParm, CPF_Parm)
// struct FPredictionKey          PredictionKey                  (CPF_Parm)
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesExecuted(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted");

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_Params params;
	params.GameplayCueTags = GameplayCueTags;
	params.PredictionKey = PredictionKey;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// struct FGameplayTagContainer   GameplayCueTags                (CPF_ConstParm, CPF_Parm)
// struct FPredictionKey          PredictionKey                  (CPF_Parm)
// struct FGameplayCueParameters  GameplayCueParameters          (CPF_Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams");

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams_Params params;
	params.GameplayCueTags = GameplayCueTags;
	params.PredictionKey = PredictionKey;
	params.GameplayCueParameters = GameplayCueParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_ConstParm, CPF_Parm)
// struct FPredictionKey          PredictionKey                  (CPF_Parm)
// struct FGameplayCueParameters  GameplayCueParameters          (CPF_Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams");

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_WithParams_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.PredictionKey = PredictionKey;
	params.GameplayCueParameters = GameplayCueParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// struct FGameplayEffectSpecForRPC Spec                           (CPF_ConstParm, CPF_Parm)
// struct FPredictionKey          PredictionKey                  (CPF_Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec");

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_FromSpec_Params params;
	params.Spec = Spec;
	params.PredictionKey = PredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_ConstParm, CPF_Parm)
// struct FPredictionKey          PredictionKey                  (CPF_Parm)
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted");

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.PredictionKey = PredictionKey;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_ConstParm, CPF_Parm)
// struct FPredictionKey          PredictionKey                  (CPF_Parm)
// struct FGameplayCueParameters  GameplayCueParameters          (CPF_Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams");

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.PredictionKey = PredictionKey;
	params.GameplayCueParameters = GameplayCueParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// struct FGameplayEffectSpecForRPC Spec                           (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
// struct FPredictionKey          PredictionKey                  (CPF_Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec");

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Params params;
	params.Spec = Spec;
	params.PredictionKey = PredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_ConstParm, CPF_Parm)
// struct FPredictionKey          PredictionKey                  (CPF_Parm)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAdded_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams");

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_WithParams_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.PredictionKey = PredictionKey;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_ConstParm, CPF_Parm)
// struct FPredictionKey          PredictionKey                  (CPF_Parm)
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAdded(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded");

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.PredictionKey = PredictionKey;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UClass*                  GameplayEffectClass            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Level                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectContextHandle Context                        (CPF_Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemComponent::MakeOutgoingSpec(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec");

	UAbilitySystemComponent_MakeOutgoingSpec_Params params;
	params.GameplayEffectClass = GameplayEffectClass;
	params.Level = Level;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FGameplayEffectContextHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectContextHandle UAbilitySystemComponent::MakeEffectContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext");

	UAbilitySystemComponent_MakeEffectContext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.K2_InitStats
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  Attributes                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDataTable*              DataTable                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilitySystemComponent::K2_InitStats(class UClass* Attributes, class UDataTable* DataTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.K2_InitStats");

	UAbilitySystemComponent_K2_InitStats_Params params;
	params.Attributes = Attributes;
	params.DataTable = DataTable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_ConstParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemComponent::IsGameplayCueActive(const struct FGameplayTag& GameplayCueTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive");

	UAbilitySystemComponent_IsGameplayCueActive_Params params;
	params.GameplayCueTag = GameplayCueTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemComponent::GetUserAbilityActivationInhibited()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited");

	UAbilitySystemComponent_GetUserAbilityActivationInhibited_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                         (CPF_Parm)
// struct FGameplayAttribute      Attribute                      (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAbilitySystemComponent::GetGameplayEffectMagnitude(const struct FActiveGameplayEffectHandle& Handle, const struct FGameplayAttribute& Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude");

	UAbilitySystemComponent_GetGameplayEffectMagnitude_Params params;
	params.Handle = Handle;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UClass*                  SourceGameplayEffect           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilitySystemComponent* OptionalInstigatorFilterComponent (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           bEnforceOnGoingCheck           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAbilitySystemComponent::GetGameplayEffectCount(class UClass* SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount");

	UAbilitySystemComponent_GetGameplayEffectCount_Params params;
	params.SourceGameplayEffect = SourceGameplayEffect;
	params.OptionalInstigatorFilterComponent = OptionalInstigatorFilterComponent;
	params.bEnforceOnGoingCheck = bEnforceOnGoingCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (CPF_Parm)

void UAbilitySystemComponent::ClientTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility");

	UAbilitySystemComponent_ClientTryActivateAbility_Params params;
	params.AbilityToActivate = AbilityToActivate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// TEnumAsByte<EAbilityGenericReplicatedEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayAbilitySpecHandle AbilityHandle                  (CPF_Parm)
// struct FPredictionKey          AbilityOriginalPredictionKey   (CPF_Parm)

void UAbilitySystemComponent::ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent");

	UAbilitySystemComponent_ClientSetReplicatedEvent_Params params;
	params.EventType = EventType;
	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// TArray<struct FString>         Strings                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            GameFlags                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilitySystemComponent::ClientPrintDebug_Response(TArray<struct FString> Strings, int GameFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response");

	UAbilitySystemComponent_ClientPrintDebug_Response_Params params;
	params.Strings = Strings;
	params.GameFlags = GameFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToEnd                   (CPF_Parm)
// struct FGameplayAbilityActivationInfo ActivationInfo                 (CPF_Parm)

void UAbilitySystemComponent::ClientEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility");

	UAbilitySystemComponent_ClientEndAbility_Params params;
	params.AbilityToEnd = AbilityToEnd;
	params.ActivationInfo = ActivationInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToCancel                (CPF_Parm)
// struct FGameplayAbilityActivationInfo ActivationInfo                 (CPF_Parm)

void UAbilitySystemComponent::ClientCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility");

	UAbilitySystemComponent_ClientCancelAbility_Params params;
	params.AbilityToCancel = AbilityToCancel;
	params.ActivationInfo = ActivationInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (CPF_Parm)
// struct FPredictionKey          PredictionKey                  (CPF_Parm)
// struct FGameplayEventData      TriggerEventData               (CPF_Parm)

void UAbilitySystemComponent::ClientActivateAbilitySucceedWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData");

	UAbilitySystemComponent_ClientActivateAbilitySucceedWithEventData_Params params;
	params.AbilityToActivate = AbilityToActivate;
	params.PredictionKey = PredictionKey;
	params.TriggerEventData = TriggerEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (CPF_Parm)
// struct FPredictionKey          PredictionKey                  (CPF_Parm)

void UAbilitySystemComponent::ClientActivateAbilitySucceed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed");

	UAbilitySystemComponent_ClientActivateAbilitySucceed_Params params;
	params.AbilityToActivate = AbilityToActivate;
	params.PredictionKey = PredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (CPF_Parm)
// int16_t                        PredictionKey                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilitySystemComponent::ClientActivateAbilityFailed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, int16_t PredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed");

	UAbilitySystemComponent_ClientActivateAbilityFailed_Params params;
	params.AbilityToActivate = AbilityToActivate;
	params.PredictionKey = PredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  GameplayEffectClass            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilitySystemComponent* Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// float                          Level                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectContextHandle Context                        (CPF_Parm)
// struct FActiveGameplayEffectHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToTarget(class UClass* GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget");

	UAbilitySystemComponent_BP_ApplyGameplayEffectToTarget_Params params;
	params.GameplayEffectClass = GameplayEffectClass;
	params.Target = Target;
	params.Level = Level;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  GameplayEffectClass            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Level                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm)
// struct FActiveGameplayEffectHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToSelf(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf");

	UAbilitySystemComponent_BP_ApplyGameplayEffectToSelf_Params params;
	params.GameplayEffectClass = GameplayEffectClass;
	params.Level = Level;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UAbilitySystemComponent* Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FActiveGameplayEffectHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToTarget(class UAbilitySystemComponent* Target, struct FGameplayEffectSpecHandle* SpecHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget");

	UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpecHandle != nullptr)
		*SpecHandle = params.SpecHandle;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FActiveGameplayEffectHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle* SpecHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf");

	UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpecHandle != nullptr)
		*SpecHandle = params.SpecHandle;

	return params.ReturnValue;
}


// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)

void UAbilitySystemComponent::AbilityConfirmOrCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature");

	UAbilitySystemComponent_AbilityConfirmOrCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// int                            InputID                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilitySystemComponent::AbilityAbilityKey__DelegateSignature(int InputID)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature");

	UAbilitySystemComponent_AbilityAbilityKey__DelegateSignature_Params params;
	params.InputID = InputID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts
// (FUNC_Exec, FUNC_Native, FUNC_Public)

void UAbilitySystemGlobals::ToggleIgnoreAbilitySystemCosts()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts");

	UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCosts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns
// (FUNC_Exec, FUNC_Native, FUNC_Public)

void UAbilitySystemGlobals::ToggleIgnoreAbilitySystemCooldowns()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns");

	UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCooldowns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AGameplayCueNotify_Actor::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive");

	AGameplayCueNotify_Actor_WhileActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AGameplayCueNotify_Actor::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove");

	AGameplayCueNotify_Actor_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
// (FUNC_Native, FUNC_Public)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AGameplayCueNotify_Actor::OnOwnerDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed");

	AGameplayCueNotify_Actor_OnOwnerDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AGameplayCueNotify_Actor::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute");

	AGameplayCueNotify_Actor_OnExecute_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnActive
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AGameplayCueNotify_Actor::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.OnActive");

	AGameplayCueNotify_Actor_OnActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AGameplayCueNotify_Actor::K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue");

	AGameplayCueNotify_Actor_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AGameplayCueNotify_Actor::K2_EndGameplayCue()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue");

	AGameplayCueNotify_Actor_K2_EndGameplayCue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayCueNotify_Static.WhileActive
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayCueNotify_Static::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Static.WhileActive");

	UGameplayCueNotify_Static_WhileActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Static.OnRemove
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayCueNotify_Static::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Static.OnRemove");

	UGameplayCueNotify_Static_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Static.OnExecute
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayCueNotify_Static::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Static.OnExecute");

	UGameplayCueNotify_Static_OnExecute_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Static.OnActive
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayCueNotify_Static::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Static.OnActive");

	UGameplayCueNotify_Static_OnActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UGameplayCueNotify_Static::K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue");

	UGameplayCueNotify_Static_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FGameplayEffectCustomExecutionParameters ExecutionParams                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayEffectCustomExecutionOutput OutExecutionOutput             (CPF_Parm, CPF_OutParm)

void UGameplayEffectExecutionCalculation::Execute(const struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute");

	UGameplayEffectExecutionCalculation_Execute_Params params;
	params.ExecutionParams = ExecutionParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutExecutionOutput != nullptr)
		*OutExecutionOutput = params.OutExecutionOutput;
}


// Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UGameplayModMagnitudeCalculation::CalculateBaseMagnitude(const struct FGameplayEffectSpec& Spec)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude");

	UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
// (FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UGameplayCueInterface::ForwardGameplayCueToParent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent");

	UGameplayCueInterface_ForwardGameplayCueToParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)

void UGameplayCueInterface::BlueprintCustomHandler(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler");

	UGameplayCueInterface_BlueprintCustomHandler_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_TargetDataHasOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin");

	UAbilitySystemBlueprintLibrary_TargetDataHasOrigin_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle HitResult                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_TargetDataHasHitResult(const struct FGameplayAbilityTargetDataHandle& HitResult, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult");

	UAbilitySystemBlueprintLibrary_TargetDataHasHitResult_Params params;
	params.HitResult = HitResult;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_TargetDataHasEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint");

	UAbilitySystemBlueprintLibrary_TargetDataHasEndPoint_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_TargetDataHasActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor");

	UAbilitySystemBlueprintLibrary_TargetDataHasActor_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_SetStackCountToMax(const struct FGameplayEffectSpecHandle& SpecHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax");

	UAbilitySystemBlueprintLibrary_SetStackCountToMax_Params params;
	params.SpecHandle = SpecHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm)
// int                            StackCount                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_SetStackCount(const struct FGameplayEffectSpecHandle& SpecHandle, int StackCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount");

	UAbilitySystemBlueprintLibrary_SetStackCount_Params params;
	params.SpecHandle = SpecHandle;
	params.StackCount = StackCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_SetDuration(const struct FGameplayEffectSpecHandle& SpecHandle, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration");

	UAbilitySystemBlueprintLibrary_SetDuration_Params params;
	params.SpecHandle = SpecHandle;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTag            EventTag                       (CPF_Parm)
// struct FGameplayEventData      Payload                        (CPF_Parm)

void UAbilitySystemBlueprintLibrary::STATIC_SendGameplayEventToActor(class AActor* Actor, const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor");

	UAbilitySystemBlueprintLibrary_SendGameplayEventToActor_Params params;
	params.Actor = Actor;
	params.EventTag = EventTag;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAttribute      AttributeA                     (CPF_Parm)
// struct FGameplayAttribute      AttributeB                     (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_NotEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute");

	UAbilitySystemBlueprintLibrary_NotEqual_GameplayAttributeGameplayAttribute_Params params;
	params.AttributeA = AttributeA;
	params.AttributeB = AttributeB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UGameplayEffect*         InGameplayEffect               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  InInstigator                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  InEffectCauser                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InLevel                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle");

	UAbilitySystemBlueprintLibrary_MakeSpecHandle_Params params;
	params.InGameplayEffect = InGameplayEffect;
	params.InInstigator = InInstigator;
	params.InEffectCauser = InEffectCauser;
	params.InLevel = InLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTargetDataFilter Filter                         (CPF_Parm)
// class AActor*                  FilterActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTargetDataFilterHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayTargetDataFilterHandle UAbilitySystemBlueprintLibrary::STATIC_MakeFilterHandle(const struct FGameplayTargetDataFilter& Filter, class AActor* FilterActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle");

	UAbilitySystemBlueprintLibrary_MakeFilterHandle_Params params;
	params.Filter = Filter;
	params.FilterActor = FilterActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAttribute      Attribute                      (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_IsValid(const struct FGameplayAttribute& Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid");

	UAbilitySystemBlueprintLibrary_IsValid_Params params;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_IsInstigatorLocallyControlledPlayer(const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer");

	UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlledPlayer_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_IsInstigatorLocallyControlled(const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled");

	UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlled_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_HasHitResult(const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult");

	UAbilitySystemBlueprintLibrary_HasHitResult_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform UAbilitySystemBlueprintLibrary::STATIC_GetTargetDataOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin");

	UAbilitySystemBlueprintLibrary_GetTargetDataOrigin_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform UAbilitySystemBlueprintLibrary::STATIC_GetTargetDataEndPointTransform(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform");

	UAbilitySystemBlueprintLibrary_GetTargetDataEndPointTransform_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UAbilitySystemBlueprintLibrary::STATIC_GetTargetDataEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint");

	UAbilitySystemBlueprintLibrary_GetTargetDataEndPoint_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UAbilitySystemBlueprintLibrary::STATIC_GetOrigin(const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin");

	UAbilitySystemBlueprintLibrary_GetOrigin_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm)
// struct FGameplayAttribute      Attribute                      (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAbilitySystemBlueprintLibrary::STATIC_GetModifiedAttributeMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayAttribute& Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude");

	UAbilitySystemBlueprintLibrary_GetModifiedAttributeMagnitude_Params params;
	params.SpecHandle = SpecHandle;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform UAbilitySystemBlueprintLibrary::STATIC_GetInstigatorTransform(const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform");

	UAbilitySystemBlueprintLibrary_GetInstigatorTransform_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* UAbilitySystemBlueprintLibrary::STATIC_GetInstigatorActor(const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor");

	UAbilitySystemBlueprintLibrary_GetInstigatorActor_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle HitResult                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FHitResult UAbilitySystemBlueprintLibrary::STATIC_GetHitResultFromTargetData(const struct FGameplayAbilityTargetDataHandle& HitResult, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData");

	UAbilitySystemBlueprintLibrary_GetHitResultFromTargetData_Params params;
	params.HitResult = HitResult;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// struct FHitResult              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FHitResult UAbilitySystemBlueprintLibrary::STATIC_GetHitResult(const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult");

	UAbilitySystemBlueprintLibrary_GetHitResult_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// struct FVector                 Location                       (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FVector                 Normal                         (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Location, struct FVector* Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal");

	UAbilitySystemBlueprintLibrary_GetGameplayCueEndLocationAndNormal_Params params;
	params.TargetActor = TargetActor;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Normal != nullptr)
		*Normal = params.Normal;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// struct FVector                 Direction                      (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_GetGameplayCueDirection(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection");

	UAbilitySystemBlueprintLibrary_GetGameplayCueDirection_Params params;
	params.TargetActor = TargetActor;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UAbilitySystemComponent* AbilitySystem                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FGameplayAttribute      Attribute                      (CPF_Parm)
// bool                           bSuccessfullyFoundAttribute    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAbilitySystemBlueprintLibrary::STATIC_GetFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent");

	UAbilitySystemBlueprintLibrary_GetFloatAttributeFromAbilitySystemComponent_Params params;
	params.AbilitySystem = AbilitySystem;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessfullyFoundAttribute != nullptr)
		*bSuccessfullyFoundAttribute = params.bSuccessfullyFoundAttribute;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FGameplayAttribute      Attribute                      (CPF_Parm)
// bool                           bSuccessfullyFoundAttribute    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAbilitySystemBlueprintLibrary::STATIC_GetFloatAttributeBaseFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent");

	UAbilitySystemBlueprintLibrary_GetFloatAttributeBaseFromAbilitySystemComponent_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessfullyFoundAttribute != nullptr)
		*bSuccessfullyFoundAttribute = params.bSuccessfullyFoundAttribute;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayAttribute      Attribute                      (CPF_Parm)
// bool                           bSuccessfullyFoundAttribute    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAbilitySystemBlueprintLibrary::STATIC_GetFloatAttributeBase(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase");

	UAbilitySystemBlueprintLibrary_GetFloatAttributeBase_Params params;
	params.Actor = Actor;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessfullyFoundAttribute != nullptr)
		*bSuccessfullyFoundAttribute = params.bSuccessfullyFoundAttribute;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayAttribute      Attribute                      (CPF_Parm)
// bool                           bSuccessfullyFoundAttribute    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAbilitySystemBlueprintLibrary::STATIC_GetFloatAttribute(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute");

	UAbilitySystemBlueprintLibrary_GetFloatAttribute_Params params;
	params.Actor = Actor;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessfullyFoundAttribute != nullptr)
		*bSuccessfullyFoundAttribute = params.bSuccessfullyFoundAttribute;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm)
// struct FGameplayEffectContextHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectContextHandle UAbilitySystemBlueprintLibrary::STATIC_GetEffectContext(const struct FGameplayEffectSpecHandle& SpecHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext");

	UAbilitySystemBlueprintLibrary_GetEffectContext_Params params;
	params.SpecHandle = SpecHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAbilitySystemBlueprintLibrary::STATIC_GetDataCountFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData");

	UAbilitySystemBlueprintLibrary_GetDataCountFromTargetData_Params params;
	params.TargetData = TargetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm)
// TArray<struct FGameplayEffectSpecHandle> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FGameplayEffectSpecHandle> UAbilitySystemBlueprintLibrary::STATIC_GetAllLinkedGameplayEffectSpecHandles(const struct FGameplayEffectSpecHandle& SpecHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles");

	UAbilitySystemBlueprintLibrary_GetAllLinkedGameplayEffectSpecHandles_Params params;
	params.SpecHandle = SpecHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class AActor*>          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<class AActor*> UAbilitySystemBlueprintLibrary::STATIC_GetActorsFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData");

	UAbilitySystemBlueprintLibrary_GetActorsFromTargetData_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAbilitySystemBlueprintLibrary::STATIC_GetActorCount(const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount");

	UAbilitySystemBlueprintLibrary_GetActorCount_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* UAbilitySystemBlueprintLibrary::STATIC_GetActorByIndex(const struct FGameplayCueParameters& Parameters, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex");

	UAbilitySystemBlueprintLibrary_GetActorByIndex_Params params;
	params.Parameters = Parameters;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                   (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAbilitySystemBlueprintLibrary::STATIC_GetActiveGameplayEffectStackLimitCount(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount");

	UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackLimitCount_Params params;
	params.ActiveHandle = ActiveHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                   (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAbilitySystemBlueprintLibrary::STATIC_GetActiveGameplayEffectStackCount(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount");

	UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackCount_Params params;
	params.ActiveHandle = ActiveHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                   (CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UAbilitySystemBlueprintLibrary::STATIC_GetActiveGameplayEffectDebugString(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString");

	UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectDebugString_Params params;
	params.ActiveHandle = ActiveHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilitySystemComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UAbilitySystemComponent* UAbilitySystemBlueprintLibrary::STATIC_GetAbilitySystemComponent(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent");

	UAbilitySystemBlueprintLibrary_GetAbilitySystemComponent_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameplayCueInterface> TargetCueInterface             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)

void UAbilitySystemBlueprintLibrary::STATIC_ForwardGameplayCueToTarget(const TScriptInterface<class UGameplayCueInterface>& TargetCueInterface, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget");

	UAbilitySystemBlueprintLibrary_ForwardGameplayCueToTarget_Params params;
	params.TargetCueInterface = TargetCueInterface;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetDataHandle               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTargetDataFilterHandle ActorFilterClass               (CPF_Parm)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::STATIC_FilterTargetData(const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTargetDataFilterHandle& ActorFilterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData");

	UAbilitySystemBlueprintLibrary_FilterTargetData_Params params;
	params.TargetDataHandle = TargetDataHandle;
	params.ActorFilterClass = ActorFilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UAbilitySystemComponent* AbilitySystem                  (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FGameplayAttribute      Attribute                      (CPF_Parm)
// struct FGameplayTagContainer   SourceTags                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTagContainer   TargetTags                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          BaseValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bSuccess                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAbilitySystemBlueprintLibrary::STATIC_EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, float BaseValue, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase");

	UAbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTagsAndBase_Params params;
	params.AbilitySystem = AbilitySystem;
	params.Attribute = Attribute;
	params.SourceTags = SourceTags;
	params.TargetTags = TargetTags;
	params.BaseValue = BaseValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UAbilitySystemComponent* AbilitySystem                  (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FGameplayAttribute      Attribute                      (CPF_Parm)
// struct FGameplayTagContainer   SourceTags                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTagContainer   TargetTags                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bSuccess                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAbilitySystemBlueprintLibrary::STATIC_EvaluateAttributeValueWithTags(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags");

	UAbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTags_Params params;
	params.AbilitySystem = AbilitySystem;
	params.Attribute = Attribute;
	params.SourceTags = SourceTags;
	params.TargetTags = TargetTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAttribute      AttributeA                     (CPF_Parm)
// struct FGameplayAttribute      AttributeB                     (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_EqualEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute");

	UAbilitySystemBlueprintLibrary_EqualEqual_GameplayAttributeGameplayAttribute_Params params;
	params.AttributeA = AttributeA;
	params.AttributeB = AttributeB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm)
// struct FVector                 Origin                         (CPF_Parm, CPF_IsPlainOldData)

void UAbilitySystemBlueprintLibrary::STATIC_EffectContextSetOrigin(const struct FGameplayEffectContextHandle& EffectContext, const struct FVector& Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin");

	UAbilitySystemBlueprintLibrary_EffectContextSetOrigin_Params params;
	params.EffectContext = EffectContext;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_EffectContextIsValid(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid");

	UAbilitySystemBlueprintLibrary_EffectContextIsValid_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_EffectContextIsInstigatorLocallyControlled(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled");

	UAbilitySystemBlueprintLibrary_EffectContextIsInstigatorLocallyControlled_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_EffectContextHasHitResult(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult");

	UAbilitySystemBlueprintLibrary_EffectContextHasHitResult_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm)
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UObject* UAbilitySystemBlueprintLibrary::STATIC_EffectContextGetSourceObject(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject");

	UAbilitySystemBlueprintLibrary_EffectContextGetSourceObject_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* UAbilitySystemBlueprintLibrary::STATIC_EffectContextGetOriginalInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor");

	UAbilitySystemBlueprintLibrary_EffectContextGetOriginalInstigatorActor_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UAbilitySystemBlueprintLibrary::STATIC_EffectContextGetOrigin(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin");

	UAbilitySystemBlueprintLibrary_EffectContextGetOrigin_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* UAbilitySystemBlueprintLibrary::STATIC_EffectContextGetInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor");

	UAbilitySystemBlueprintLibrary_EffectContextGetInstigatorActor_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm)
// struct FHitResult              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FHitResult UAbilitySystemBlueprintLibrary::STATIC_EffectContextGetHitResult(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult");

	UAbilitySystemBlueprintLibrary_EffectContextGetHitResult_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* UAbilitySystemBlueprintLibrary::STATIC_EffectContextGetEffectCauser(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser");

	UAbilitySystemBlueprintLibrary_EffectContextGetEffectCauser_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm)
// struct FHitResult              HitResult                      (CPF_Parm, CPF_IsPlainOldData)
// bool                           bReset                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilitySystemBlueprintLibrary::STATIC_EffectContextAddHitResult(const struct FGameplayEffectContextHandle& EffectContext, const struct FHitResult& HitResult, bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult");

	UAbilitySystemBlueprintLibrary_EffectContextAddHitResult_Params params;
	params.EffectContext = EffectContext;
	params.HitResult = HitResult;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_DoesTargetDataContainActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor");

	UAbilitySystemBlueprintLibrary_DoesTargetDataContainActor_Params params;
	params.TargetData = TargetData;
	params.Index = Index;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// struct FGameplayTagRequirements SourceTagReqs                  (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTagRequirements TargetTagReqs                  (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_DoesGameplayCueMeetTagRequirements(const struct FGameplayCueParameters& Parameters, struct FGameplayTagRequirements* SourceTagReqs, struct FGameplayTagRequirements* TargetTagReqs)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements");

	UAbilitySystemBlueprintLibrary_DoesGameplayCueMeetTagRequirements_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SourceTagReqs != nullptr)
		*SourceTagReqs = params.SourceTagReqs;
	if (TargetTagReqs != nullptr)
		*TargetTagReqs = params.TargetTagReqs;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm)
// struct FName                   DataName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Magnitude                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_AssignSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FName& DataName, float Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude");

	UAbilitySystemBlueprintLibrary_AssignSetByCallerMagnitude_Params params;
	params.SpecHandle = SpecHandle;
	params.DataName = DataName;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetHandle                   (CPF_Parm)
// struct FGameplayAbilityTargetDataHandle HandleToAdd                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::STATIC_AppendTargetDataHandle(const struct FGameplayAbilityTargetDataHandle& TargetHandle, const struct FGameplayAbilityTargetDataHandle& HandleToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle");

	UAbilitySystemBlueprintLibrary_AppendTargetDataHandle_Params params;
	params.TargetHandle = TargetHandle;
	params.HandleToAdd = HandleToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm)
// struct FGameplayEffectSpecHandle LinkedGameplayEffectSpec       (CPF_Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_AddLinkedGameplayEffectSpec(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayEffectSpecHandle& LinkedGameplayEffectSpec)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec");

	UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffectSpec_Params params;
	params.SpecHandle = SpecHandle;
	params.LinkedGameplayEffectSpec = LinkedGameplayEffectSpec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm)
// class UClass*                  LinkedGameplayEffect           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_AddLinkedGameplayEffect(const struct FGameplayEffectSpecHandle& SpecHandle, class UClass* LinkedGameplayEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect");

	UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffect_Params params;
	params.SpecHandle = SpecHandle;
	params.LinkedGameplayEffect = LinkedGameplayEffect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm)
// struct FGameplayTagContainer   NewGameplayTags                (CPF_Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_AddGrantedTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags");

	UAbilitySystemBlueprintLibrary_AddGrantedTags_Params params;
	params.SpecHandle = SpecHandle;
	params.NewGameplayTags = NewGameplayTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm)
// struct FGameplayTag            NewGameplayTag                 (CPF_Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_AddGrantedTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag");

	UAbilitySystemBlueprintLibrary_AddGrantedTag_Params params;
	params.SpecHandle = SpecHandle;
	params.NewGameplayTag = NewGameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm)
// struct FGameplayTagContainer   NewGameplayTags                (CPF_Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_AddAssetTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags");

	UAbilitySystemBlueprintLibrary_AddAssetTags_Params params;
	params.SpecHandle = SpecHandle;
	params.NewGameplayTags = NewGameplayTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm)
// struct FGameplayTag            NewGameplayTag                 (CPF_Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_AddAssetTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag");

	UAbilitySystemBlueprintLibrary_AddAssetTag_Params params;
	params.SpecHandle = SpecHandle;
	params.NewGameplayTag = NewGameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetingLocationInfo SourceLocation                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayAbilityTargetingLocationInfo TargetLocation                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::STATIC_AbilityTargetDataFromLocations(const struct FGameplayAbilityTargetingLocationInfo& SourceLocation, const struct FGameplayAbilityTargetingLocationInfo& TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations");

	UAbilitySystemBlueprintLibrary_AbilityTargetDataFromLocations_Params params;
	params.SourceLocation = SourceLocation;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHitResult              HitResult                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::STATIC_AbilityTargetDataFromHitResult(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult");

	UAbilitySystemBlueprintLibrary_AbilityTargetDataFromHitResult_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<class AActor*>          ActorArray                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           OneTargetPerHandle             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::STATIC_AbilityTargetDataFromActorArray(TArray<class AActor*> ActorArray, bool OneTargetPerHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray");

	UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActorArray_Params params;
	params.ActorArray = ActorArray;
	params.OneTargetPerHandle = OneTargetPerHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::STATIC_AbilityTargetDataFromActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor");

	UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 WorldDirection                 (CPF_Parm, CPF_IsPlainOldData)
// float                          Strength                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIsAdditive                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCurveFloat*             StrengthOverTime               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 SetVelocityOnFinish            (CPF_Parm, CPF_IsPlainOldData)
// float                          ClampVelocityOnFinish          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_ApplyRootMotionConstantForce* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_ApplyRootMotionConstantForce* UAbilityTask_ApplyRootMotionConstantForce::STATIC_ApplyRootMotionConstantForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& WorldDirection, float Strength, float Duration, bool bIsAdditive, class UCurveFloat* StrengthOverTime, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce");

	UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Params params;
	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.WorldDirection = WorldDirection;
	params.Strength = Strength;
	params.Duration = Duration;
	params.bIsAdditive = bIsAdditive;
	params.StrengthOverTime = StrengthOverTime;
	params.SetVelocityOnFinish = SetVelocityOnFinish;
	params.ClampVelocityOnFinish = ClampVelocityOnFinish;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void UAbilityTask_ApplyRootMotionJumpForce::OnLandedCallback(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback");

	UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAbilityTask_ApplyRootMotionJumpForce::Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish");

	UAbilityTask_ApplyRootMotionJumpForce_Finish_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                Rotation                       (CPF_Parm, CPF_IsPlainOldData)
// float                          Distance                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Height                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MinimumLandedTriggerTime       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFinishOnLanded                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 SetVelocityOnFinish            (CPF_Parm, CPF_IsPlainOldData)
// float                          ClampVelocityOnFinish          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCurveVector*            PathOffsetCurve                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCurveFloat*             TimeMappingCurve               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_ApplyRootMotionJumpForce* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_ApplyRootMotionJumpForce* UAbilityTask_ApplyRootMotionJumpForce::STATIC_ApplyRootMotionJumpForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FRotator& Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce");

	UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Params params;
	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.Rotation = Rotation;
	params.Distance = Distance;
	params.Height = Height;
	params.Duration = Duration;
	params.MinimumLandedTriggerTime = MinimumLandedTriggerTime;
	params.bFinishOnLanded = bFinishOnLanded;
	params.SetVelocityOnFinish = SetVelocityOnFinish;
	params.ClampVelocityOnFinish = ClampVelocityOnFinish;
	params.PathOffsetCurve = PathOffsetCurve;
	params.TimeMappingCurve = TimeMappingCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UAbilityTask_ApplyRootMotionMoveToActorForce::OnRep_TargetLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation");

	UAbilityTask_ApplyRootMotionMoveToActorForce_OnRep_TargetLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 TargetLocationOffset           (CPF_Parm, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCurveFloat*             TargetLerpSpeedHorizontal      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCurveFloat*             TargetLerpSpeedVertical        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bSetNewMovementMode            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EMovementMode>     MovementMode                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bRestrictSpeedToExpected       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCurveVector*            PathOffsetCurve                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCurveFloat*             TimeMappingCurve               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 SetVelocityOnFinish            (CPF_Parm, CPF_IsPlainOldData)
// float                          ClampVelocityOnFinish          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDisableDestinationReachedInterrupt (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_ApplyRootMotionMoveToActorForce* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_ApplyRootMotionMoveToActorForce* UAbilityTask_ApplyRootMotionMoveToActorForce::STATIC_ApplyRootMotionMoveToActorForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, class AActor* TargetActor, const struct FVector& TargetLocationOffset, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce");

	UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Params params;
	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.TargetActor = TargetActor;
	params.TargetLocationOffset = TargetLocationOffset;
	params.Duration = Duration;
	params.TargetLerpSpeedHorizontal = TargetLerpSpeedHorizontal;
	params.TargetLerpSpeedVertical = TargetLerpSpeedVertical;
	params.bSetNewMovementMode = bSetNewMovementMode;
	params.MovementMode = MovementMode;
	params.bRestrictSpeedToExpected = bRestrictSpeedToExpected;
	params.PathOffsetCurve = PathOffsetCurve;
	params.TimeMappingCurve = TimeMappingCurve;
	params.SetVelocityOnFinish = SetVelocityOnFinish;
	params.ClampVelocityOnFinish = ClampVelocityOnFinish;
	params.bDisableDestinationReachedInterrupt = bDisableDestinationReachedInterrupt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 TargetLocation                 (CPF_Parm, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bSetNewMovementMode            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EMovementMode>     MovementMode                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bRestrictSpeedToExpected       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCurveVector*            PathOffsetCurve                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 SetVelocityOnFinish            (CPF_Parm, CPF_IsPlainOldData)
// float                          ClampVelocityOnFinish          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_ApplyRootMotionMoveToForce* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_ApplyRootMotionMoveToForce* UAbilityTask_ApplyRootMotionMoveToForce::STATIC_ApplyRootMotionMoveToForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& TargetLocation, float Duration, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce");

	UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Params params;
	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.TargetLocation = TargetLocation;
	params.Duration = Duration;
	params.bSetNewMovementMode = bSetNewMovementMode;
	params.MovementMode = MovementMode;
	params.bRestrictSpeedToExpected = bRestrictSpeedToExpected;
	params.PathOffsetCurve = PathOffsetCurve;
	params.SetVelocityOnFinish = SetVelocityOnFinish;
	params.ClampVelocityOnFinish = ClampVelocityOnFinish;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// class AActor*                  LocationActor                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Strength                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIsPush                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIsAdditive                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bNoZForce                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCurveFloat*             StrengthDistanceFalloff        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCurveFloat*             StrengthOverTime               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bUseFixedWorldDirection        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                FixedWorldDirection            (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 SetVelocityOnFinish            (CPF_Parm, CPF_IsPlainOldData)
// float                          ClampVelocityOnFinish          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_ApplyRootMotionRadialForce* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_ApplyRootMotionRadialForce* UAbilityTask_ApplyRootMotionRadialForce::STATIC_ApplyRootMotionRadialForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& Location, class AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, class UCurveFloat* StrengthDistanceFalloff, class UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, const struct FRotator& FixedWorldDirection, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce");

	UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Params params;
	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.Location = Location;
	params.LocationActor = LocationActor;
	params.Strength = Strength;
	params.Duration = Duration;
	params.Radius = Radius;
	params.bIsPush = bIsPush;
	params.bIsAdditive = bIsAdditive;
	params.bNoZForce = bNoZForce;
	params.StrengthDistanceFalloff = StrengthDistanceFalloff;
	params.StrengthOverTime = StrengthOverTime;
	params.bUseFixedWorldDirection = bUseFixedWorldDirection;
	params.FixedWorldDirection = FixedWorldDirection;
	params.SetVelocityOnFinish = SetVelocityOnFinish;
	params.ClampVelocityOnFinish = ClampVelocityOnFinish;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCurveFloat*             OptionalInterpolationCurve     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCurveVector*            OptionalVectorInterpolationCurve (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_MoveToLocation* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_MoveToLocation* UAbilityTask_MoveToLocation::STATIC_MoveToLocation(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation");

	UAbilityTask_MoveToLocation_MoveToLocation_Params params;
	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.Location = Location;
	params.Duration = Duration;
	params.OptionalInterpolationCurve = OptionalInterpolationCurve;
	params.OptionalVectorInterpolationCurve = OptionalVectorInterpolationCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_NetworkSyncPoint* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_NetworkSyncPoint* UAbilityTask_NetworkSyncPoint::STATIC_WaitNetSync(class UGameplayAbility* OwningAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync");

	UAbilityTask_NetworkSyncPoint_WaitNetSync_Params params;
	params.OwningAbility = OwningAbility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAbilityTask_NetworkSyncPoint::OnSignalCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback");

	UAbilityTask_NetworkSyncPoint_OnSignalCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAbilityTask_PlayMontageAndWait::OnMontageInterrupted()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted");

	UAbilityTask_PlayMontageAndWait_OnMontageInterrupted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bInterrupted                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilityTask_PlayMontageAndWait::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded");

	UAbilityTask_PlayMontageAndWait_OnMontageEnded_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bInterrupted                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilityTask_PlayMontageAndWait::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut");

	UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAnimMontage*            MontageToPlay                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Rate                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   StartSection                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bStopWhenAbilityEnds           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          AnimRootMotionTranslationScale (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_PlayMontageAndWait* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_PlayMontageAndWait* UAbilityTask_PlayMontageAndWait::STATIC_CreatePlayMontageAndWaitProxy(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, const struct FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy");

	UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Params params;
	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.MontageToPlay = MontageToPlay;
	params.Rate = Rate;
	params.StartSection = StartSection;
	params.bStopWhenAbilityEnds = bStopWhenAbilityEnds;
	params.AnimRootMotionTranslationScale = AnimRootMotionTranslationScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_Repeat.RepeatAction
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          TimeBetweenActions             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TotalActionCount               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_Repeat*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_Repeat* UAbilityTask_Repeat::STATIC_RepeatAction(class UGameplayAbility* OwningAbility, float TimeBetweenActions, int TotalActionCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_Repeat.RepeatAction");

	UAbilityTask_Repeat_RepeatAction_Params params;
	params.OwningAbility = OwningAbility;
	params.TimeBetweenActions = TimeBetweenActions;
	params.TotalActionCount = TotalActionCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_Parm)
// class UClass*                  Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_SpawnActor* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_SpawnActor* UAbilityTask_SpawnActor::STATIC_SpawnActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor");

	UAbilityTask_SpawnActor_SpawnActor_Params params;
	params.OwningAbility = OwningAbility;
	params.TargetData = TargetData;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_Parm)
// class AActor*                  SpawnedActor                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilityTask_SpawnActor::FinishSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class AActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor");

	UAbilityTask_SpawnActor_FinishSpawningActor_Params params;
	params.OwningAbility = OwningAbility;
	params.TargetData = TargetData;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_Parm)
// class UClass*                  Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  SpawnedActor                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilityTask_SpawnActor::BeginSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class, class AActor** SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor");

	UAbilityTask_SpawnActor_BeginSpawningActor_Params params;
	params.OwningAbility = OwningAbility;
	params.TargetData = TargetData;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   StateName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bEndCurrentState               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_StartAbilityState* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_StartAbilityState* UAbilityTask_StartAbilityState::STATIC_StartAbilityState(class UGameplayAbility* OwningAbility, const struct FName& StateName, bool bEndCurrentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState");

	UAbilityTask_StartAbilityState_StartAbilityState_Params params;
	params.OwningAbility = OwningAbility;
	params.StateName = StateName;
	params.bEndCurrentState = bEndCurrentState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ParamName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Value                          (CPF_Parm, CPF_IsPlainOldData)

void AGameplayAbilityWorldReticle::SetReticleMaterialParamVector(const struct FName& ParamName, const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector");

	AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Params params;
	params.ParamName = ParamName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ParamName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AGameplayAbilityWorldReticle::SetReticleMaterialParamFloat(const struct FName& ParamName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat");

	AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Params params;
	params.ParamName = ParamName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AGameplayAbilityWorldReticle::OnValidTargetChanged(bool bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged");

	AGameplayAbilityWorldReticle_OnValidTargetChanged_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AGameplayAbilityWorldReticle::OnTargetingAnActor(bool bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor");

	AGameplayAbilityWorldReticle_OnTargetingAnActor_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AGameplayAbilityWorldReticle::OnParametersInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized");

	AGameplayAbilityWorldReticle_OnParametersInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bFaceIn2D                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AGameplayAbilityWorldReticle::FaceTowardSource(bool bFaceIn2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource");

	AGameplayAbilityWorldReticle_FaceTowardSource_Params params;
	params.bFaceIn2D = bFaceIn2D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
// (FUNC_Native, FUNC_Public)

void AGameplayAbilityTargetActor::ConfirmTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting");

	AGameplayAbilityTargetActor_ConfirmTargeting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
// (FUNC_Native, FUNC_Public)

void AGameplayAbilityTargetActor::CancelTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting");

	AGameplayAbilityTargetActor_CancelTargeting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AGameplayAbilityTargetActor* TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_VisualizeTargeting* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::STATIC_VisualizeTargetingUsingActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* TargetActor, const struct FName& TaskInstanceName, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor");

	UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Params params;
	params.OwningAbility = OwningAbility;
	params.TargetActor = TargetActor;
	params.TaskInstanceName = TaskInstanceName;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_VisualizeTargeting* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::STATIC_VisualizeTargeting(class UGameplayAbility* OwningAbility, class UClass* Class, const struct FName& TaskInstanceName, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting");

	UAbilityTask_VisualizeTargeting_VisualizeTargeting_Params params;
	params.OwningAbility = OwningAbility;
	params.Class = Class;
	params.TaskInstanceName = TaskInstanceName;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AGameplayAbilityTargetActor* SpawnedActor                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilityTask_VisualizeTargeting::FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor");

	UAbilityTask_VisualizeTargeting_FinishSpawningActor_Params params;
	params.OwningAbility = OwningAbility;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AGameplayAbilityTargetActor* SpawnedActor                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilityTask_VisualizeTargeting::BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor");

	UAbilityTask_VisualizeTargeting_BeginSpawningActor_Params params;
	params.OwningAbility = OwningAbility;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTagRequirements TagRequirements                (CPF_Parm)
// bool                           IncludeTriggeredAbilities      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           TriggerOnce                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitAbilityActivate* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::STATIC_WaitForAbilityActivateWithTagRequirements(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements");

	UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Params params;
	params.OwningAbility = OwningAbility;
	params.TagRequirements = TagRequirements;
	params.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	params.TriggerOnce = TriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTag            WithTag                        (CPF_Parm)
// struct FGameplayTag            WithoutTag                     (CPF_Parm)
// bool                           IncludeTriggeredAbilities      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           TriggerOnce                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitAbilityActivate* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::STATIC_WaitForAbilityActivate(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate");

	UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Params params;
	params.OwningAbility = OwningAbility;
	params.WithTag = WithTag;
	params.WithoutTag = WithoutTag;
	params.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	params.TriggerOnce = TriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UGameplayAbility*        ActivatedAbility               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilityTask_WaitAbilityActivate::OnAbilityActivate(class UGameplayAbility* ActivatedAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate");

	UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Params params;
	params.ActivatedAbility = ActivatedAbility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTag            WithTag                        (CPF_Parm)
// struct FGameplayTag            WithoutTage                    (CPF_Parm)
// bool                           TriggerOnce                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitAbilityCommit* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitAbilityCommit* UAbilityTask_WaitAbilityCommit::STATIC_WaitForAbilityCommit(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTage, bool TriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit");

	UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Params params;
	params.OwningAbility = OwningAbility;
	params.WithTag = WithTag;
	params.WithoutTage = WithoutTage;
	params.TriggerOnce = TriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UGameplayAbility*        ActivatedAbility               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilityTask_WaitAbilityCommit::OnAbilityCommit(class UGameplayAbility* ActivatedAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit");

	UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Params params;
	params.ActivatedAbility = ActivatedAbility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayAttribute      InAttribute                    (CPF_Parm)
// struct FGameplayTag            InWithTag                      (CPF_Parm)
// struct FGameplayTag            InWithoutTag                   (CPF_Parm)
// TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InComparisonValue              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           TriggerOnce                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitAttributeChange* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::STATIC_WaitForAttributeChangeWithComparison(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& InAttribute, const struct FGameplayTag& InWithTag, const struct FGameplayTag& InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType, float InComparisonValue, bool TriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison");

	UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Params params;
	params.OwningAbility = OwningAbility;
	params.InAttribute = InAttribute;
	params.InWithTag = InWithTag;
	params.InWithoutTag = InWithoutTag;
	params.InComparisonType = InComparisonType;
	params.InComparisonValue = InComparisonValue;
	params.TriggerOnce = TriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayAttribute      Attribute                      (CPF_Parm)
// struct FGameplayTag            WithSrcTag                     (CPF_Parm)
// struct FGameplayTag            WithoutSrcTag                  (CPF_Parm)
// bool                           TriggerOnce                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitAttributeChange* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::STATIC_WaitForAttributeChange(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, const struct FGameplayTag& WithSrcTag, const struct FGameplayTag& WithoutSrcTag, bool TriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange");

	UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Params params;
	params.OwningAbility = OwningAbility;
	params.Attribute = Attribute;
	params.WithSrcTag = WithSrcTag;
	params.WithoutSrcTag = WithoutSrcTag;
	params.TriggerOnce = TriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayAttribute      AttributeNumerator             (CPF_Parm)
// struct FGameplayAttribute      AttributeDenominator           (CPF_Parm)
// TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ComparisonValue                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bTriggerOnce                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitAttributeChangeRatioThreshold* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitAttributeChangeRatioThreshold* UAbilityTask_WaitAttributeChangeRatioThreshold::STATIC_WaitForAttributeChangeRatioThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& AttributeNumerator, const struct FGameplayAttribute& AttributeDenominator, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold");

	UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Params params;
	params.OwningAbility = OwningAbility;
	params.AttributeNumerator = AttributeNumerator;
	params.AttributeDenominator = AttributeDenominator;
	params.ComparisonType = ComparisonType;
	params.ComparisonValue = ComparisonValue;
	params.bTriggerOnce = bTriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayAttribute      Attribute                      (CPF_Parm)
// TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ComparisonValue                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bTriggerOnce                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitAttributeChangeThreshold* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitAttributeChangeThreshold* UAbilityTask_WaitAttributeChangeThreshold::STATIC_WaitForAttributeChangeThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold");

	UAbilityTask_WaitAttributeChangeThreshold_WaitForAttributeChangeThreshold_Params params;
	params.OwningAbility = OwningAbility;
	params.Attribute = Attribute;
	params.ComparisonType = ComparisonType;
	params.ComparisonValue = ComparisonValue;
	params.bTriggerOnce = bTriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitCancel* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitCancel* UAbilityTask_WaitCancel::STATIC_WaitCancel(class UGameplayAbility* OwningAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel");

	UAbilityTask_WaitCancel_WaitCancel_Params params;
	params.OwningAbility = OwningAbility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAbilityTask_WaitCancel::OnLocalCancelCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback");

	UAbilityTask_WaitCancel_OnLocalCancelCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAbilityTask_WaitCancel::OnCancelCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback");

	UAbilityTask_WaitCancel_OnCancelCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitConfirm* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitConfirm* UAbilityTask_WaitConfirm::STATIC_WaitConfirm(class UGameplayAbility* OwningAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm");

	UAbilityTask_WaitConfirm_WaitConfirm_Params params;
	params.OwningAbility = OwningAbility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UGameplayAbility*        InAbility                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilityTask_WaitConfirm::OnConfirmCallback(class UGameplayAbility* InAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback");

	UAbilityTask_WaitConfirm_OnConfirmCallback_Params params;
	params.InAbility = InAbility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitConfirmCancel* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitConfirmCancel* UAbilityTask_WaitConfirmCancel::STATIC_WaitConfirmCancel(class UGameplayAbility* OwningAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel");

	UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Params params;
	params.OwningAbility = OwningAbility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAbilityTask_WaitConfirmCancel::OnLocalConfirmCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback");

	UAbilityTask_WaitConfirmCancel_OnLocalConfirmCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAbilityTask_WaitConfirmCancel::OnLocalCancelCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback");

	UAbilityTask_WaitConfirmCancel_OnLocalCancelCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAbilityTask_WaitConfirmCancel::OnConfirmCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback");

	UAbilityTask_WaitConfirmCancel_OnConfirmCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAbilityTask_WaitConfirmCancel::OnCancelCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback");

	UAbilityTask_WaitConfirmCancel_OnCancelCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Time                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitDelay*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitDelay* UAbilityTask_WaitDelay::STATIC_WaitDelay(class UGameplayAbility* OwningAbility, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay");

	UAbilityTask_WaitDelay_WaitDelay_Params params;
	params.OwningAbility = OwningAbility;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// class UAbilitySystemComponent* Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FGameplayEffectSpec     SpecApplied                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FActiveGameplayEffectHandle ActiveHandle                   (CPF_Parm)

void UAbilityTask_WaitGameplayEffectApplied::OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, const struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback");

	UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Params params;
	params.Target = Target;
	params.SpecApplied = SpecApplied;
	params.ActiveHandle = ActiveHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTargetDataFilterHandle SourceFilter                   (CPF_ConstParm, CPF_Parm)
// struct FGameplayTagRequirements SourceTagRequirements          (CPF_Parm)
// struct FGameplayTagRequirements TargetTagRequirements          (CPF_Parm)
// bool                           TriggerOnce                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  OptionalExternalOwner          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ListenForPeriodicEffect        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitGameplayEffectApplied_Self* UAbilityTask_WaitGameplayEffectApplied_Self::STATIC_WaitGameplayEffectAppliedToSelf(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf");

	UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Params params;
	params.OwningAbility = OwningAbility;
	params.SourceFilter = SourceFilter;
	params.SourceTagRequirements = SourceTagRequirements;
	params.TargetTagRequirements = TargetTagRequirements;
	params.TriggerOnce = TriggerOnce;
	params.OptionalExternalOwner = OptionalExternalOwner;
	params.ListenForPeriodicEffect = ListenForPeriodicEffect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTargetDataFilterHandle TargetFilter                   (CPF_ConstParm, CPF_Parm)
// struct FGameplayTagRequirements SourceTagRequirements          (CPF_Parm)
// struct FGameplayTagRequirements TargetTagRequirements          (CPF_Parm)
// bool                           TriggerOnce                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  OptionalExternalOwner          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ListenForPeriodicEffects       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitGameplayEffectApplied_Target* UAbilityTask_WaitGameplayEffectApplied_Target::STATIC_WaitGameplayEffectAppliedToTarget(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& TargetFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget");

	UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Params params;
	params.OwningAbility = OwningAbility;
	params.TargetFilter = TargetFilter;
	params.SourceTagRequirements = SourceTagRequirements;
	params.TargetTagRequirements = TargetTagRequirements;
	params.TriggerOnce = TriggerOnce;
	params.OptionalExternalOwner = OptionalExternalOwner;
	params.ListenForPeriodicEffects = ListenForPeriodicEffects;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTagRequirements SourceTagRequirements          (CPF_Parm)
// struct FGameplayTagRequirements TargetTagRequirements          (CPF_Parm)
// class AActor*                  OptionalExternalTarget         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           OnlyTriggerOnce                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitGameplayEffectBlockedImmunity* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitGameplayEffectBlockedImmunity* UAbilityTask_WaitGameplayEffectBlockedImmunity::STATIC_WaitGameplayEffectBlockedByImmunity(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity");

	UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Params params;
	params.OwningAbility = OwningAbility;
	params.SourceTagRequirements = SourceTagRequirements;
	params.TargetTagRequirements = TargetTagRequirements;
	params.OptionalExternalTarget = OptionalExternalTarget;
	params.OnlyTriggerOnce = OnlyTriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FActiveGameplayEffectHandle Handle                         (CPF_Parm)
// class UAbilityTask_WaitGameplayEffectRemoved* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitGameplayEffectRemoved* UAbilityTask_WaitGameplayEffectRemoved::STATIC_WaitForGameplayEffectRemoved(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved");

	UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Params params;
	params.OwningAbility = OwningAbility;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAbilityTask_WaitGameplayEffectRemoved::OnGameplayEffectRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved");

	UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FActiveGameplayEffectHandle Handle                         (CPF_Parm)
// class UAbilityTask_WaitGameplayEffectStackChange* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitGameplayEffectStackChange* UAbilityTask_WaitGameplayEffectStackChange::STATIC_WaitForGameplayEffectStackChange(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange");

	UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Params params;
	params.OwningAbility = OwningAbility;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                         (CPF_Parm)
// int                            NewCount                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldCount                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilityTask_WaitGameplayEffectStackChange::OnGameplayEffectStackChange(const struct FActiveGameplayEffectHandle& Handle, int NewCount, int OldCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange");

	UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Params params;
	params.Handle = Handle;
	params.NewCount = NewCount;
	params.OldCount = OldCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTag            EventTag                       (CPF_Parm)
// class AActor*                  OptionalExternalTarget         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           OnlyTriggerOnce                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitGameplayEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitGameplayEvent* UAbilityTask_WaitGameplayEvent::STATIC_WaitGameplayEvent(class UGameplayAbility* OwningAbility, const struct FGameplayTag& EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent");

	UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Params params;
	params.OwningAbility = OwningAbility;
	params.EventTag = EventTag;
	params.OptionalExternalTarget = OptionalExternalTarget;
	params.OnlyTriggerOnce = OnlyTriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FGameplayTag            Tag                            (CPF_ConstParm, CPF_Parm)
// int                            NewCount                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilityTask_WaitGameplayTag::GameplayTagCallback(const struct FGameplayTag& Tag, int NewCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback");

	UAbilityTask_WaitGameplayTag_GameplayTagCallback_Params params;
	params.Tag = Tag;
	params.NewCount = NewCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTag            Tag                            (CPF_Parm)
// class AActor*                  InOptionalExternalTarget       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           OnlyTriggerOnce                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitGameplayTagAdded* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitGameplayTagAdded* UAbilityTask_WaitGameplayTagAdded::STATIC_WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd");

	UAbilityTask_WaitGameplayTagAdded_WaitGameplayTagAdd_Params params;
	params.OwningAbility = OwningAbility;
	params.Tag = Tag;
	params.InOptionalExternalTarget = InOptionalExternalTarget;
	params.OnlyTriggerOnce = OnlyTriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTag            Tag                            (CPF_Parm)
// class AActor*                  InOptionalExternalTarget       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           OnlyTriggerOnce                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitGameplayTagRemoved* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitGameplayTagRemoved* UAbilityTask_WaitGameplayTagRemoved::STATIC_WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove");

	UAbilityTask_WaitGameplayTagRemoved_WaitGameplayTagRemove_Params params;
	params.OwningAbility = OwningAbility;
	params.Tag = Tag;
	params.InOptionalExternalTarget = InOptionalExternalTarget;
	params.OnlyTriggerOnce = OnlyTriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bTestAlreadyPressed            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitInputPress* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitInputPress* UAbilityTask_WaitInputPress::STATIC_WaitInputPress(class UGameplayAbility* OwningAbility, bool bTestAlreadyPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress");

	UAbilityTask_WaitInputPress_WaitInputPress_Params params;
	params.OwningAbility = OwningAbility;
	params.bTestAlreadyPressed = bTestAlreadyPressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAbilityTask_WaitInputPress::OnPressCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback");

	UAbilityTask_WaitInputPress_OnPressCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bTestAlreadyReleased           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitInputRelease* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitInputRelease* UAbilityTask_WaitInputRelease::STATIC_WaitInputRelease(class UGameplayAbility* OwningAbility, bool bTestAlreadyReleased)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease");

	UAbilityTask_WaitInputRelease_WaitInputRelease_Params params;
	params.OwningAbility = OwningAbility;
	params.bTestAlreadyReleased = bTestAlreadyReleased;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAbilityTask_WaitInputRelease::OnReleaseCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback");

	UAbilityTask_WaitInputRelease_OnReleaseCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EMovementMode>     PrevMovementMode               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// unsigned char                  PreviousCustomMode             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilityTask_WaitMovementModeChange::OnMovementModeChange(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange");

	UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Params params;
	params.Character = Character;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EMovementMode>     NewMode                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitMovementModeChange* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitMovementModeChange* UAbilityTask_WaitMovementModeChange::STATIC_CreateWaitMovementModeChange(class UGameplayAbility* OwningAbility, TEnumAsByte<EMovementMode> NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange");

	UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Params params;
	params.OwningAbility = OwningAbility;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitOverlap* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitOverlap* UAbilityTask_WaitOverlap::STATIC_WaitForOverlap(class UGameplayAbility* OwningAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap");

	UAbilityTask_WaitOverlap_WaitForOverlap_Params params;
	params.OwningAbility = OwningAbility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComp                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FVector                 NormalImpulse                  (CPF_Parm, CPF_IsPlainOldData)
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void UAbilityTask_WaitOverlap::OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback");

	UAbilityTask_WaitOverlap_OnHitCallback_Params params;
	params.HitComp = HitComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AGameplayAbilityTargetActor* TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitTargetData* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::STATIC_WaitTargetDataUsingActor(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class AGameplayAbilityTargetActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor");

	UAbilityTask_WaitTargetData_WaitTargetDataUsingActor_Params params;
	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.ConfirmationType = ConfirmationType;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitTargetData* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::STATIC_WaitTargetData(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData");

	UAbilityTask_WaitTargetData_WaitTargetData_Params params;
	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.ConfirmationType = ConfirmationType;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCancelledCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback");

	UAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Data                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTag            ActivationTag                  (CPF_Parm)

void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback");

	UAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Params params;
	params.Data = Data;
	params.ActivationTag = ActivationTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Data                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UAbilityTask_WaitTargetData::OnTargetDataReadyCallback(const struct FGameplayAbilityTargetDataHandle& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback");

	UAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Data                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UAbilityTask_WaitTargetData::OnTargetDataCancelledCallback(const struct FGameplayAbilityTargetDataHandle& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback");

	UAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AGameplayAbilityTargetActor* SpawnedActor                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilityTask_WaitTargetData::FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor");

	UAbilityTask_WaitTargetData_FinishSpawningActor_Params params;
	params.OwningAbility = OwningAbility;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AGameplayAbilityTargetActor* SpawnedActor                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilityTask_WaitTargetData::BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor");

	UAbilityTask_WaitTargetData_BeginSpawningActor_Params params;
	params.OwningAbility = OwningAbility;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Direction                      (CPF_Parm, CPF_IsPlainOldData)
// float                          MinimumMagnitude               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitVelocityChange* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitVelocityChange* UAbilityTask_WaitVelocityChange::STATIC_CreateWaitVelocityChange(class UGameplayAbility* OwningAbility, const struct FVector& Direction, float MinimumMagnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange");

	UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Params params;
	params.OwningAbility = OwningAbility;
	params.Direction = Direction;
	params.MinimumMagnitude = MinimumMagnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UGameplayEffect*         GameplayEffect                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectSpec     Spec                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UAbilitySystemComponent* ASC                            (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayEffectCustomApplicationRequirement::CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, const struct FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect");

	UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Params params;
	params.GameplayEffect = GameplayEffect;
	params.Spec = Spec;
	params.ASC = ASC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FGameplayTag            Tag                            (CPF_ConstParm, CPF_Parm)
// int                            NewCount                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilitySystemComponent* ASC                            (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            Idx                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayTagReponseTable::TagResponseEvent(const struct FGameplayTag& Tag, int NewCount, class UAbilitySystemComponent* ASC, int Idx)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent");

	UGameplayTagReponseTable_TagResponseEvent_Params params;
	params.Tag = Tag;
	params.NewCount = NewCount;
	params.ASC = ASC;
	params.Idx = Idx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
