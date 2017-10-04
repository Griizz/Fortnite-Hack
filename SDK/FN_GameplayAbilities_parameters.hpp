#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
struct UGameplayAbility_SetShouldBlockOtherAbilities_Params
{
	bool                                               bShouldBlockAbilities;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.SetCanBeCanceled
struct UGameplayAbility_SetCanBeCanceled_Params
{
	bool                                               bCanBeCanceled;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.SendGameplayEvent
struct UGameplayAbility_SendGameplayEvent_Params
{
	struct FGameplayTag                                EventTag;                                                 // (CPF_Parm)
	struct FGameplayEventData                          Payload;                                                  // (CPF_Parm)
};

// Function GameplayAbilities.GameplayAbility.RemoveGrantedByEffect
struct UGameplayAbility_RemoveGrantedByEffect_Params
{
};

// Function GameplayAbilities.GameplayAbility.MontageStop
struct UGameplayAbility_MontageStop_Params
{
	float                                              OverrideBlendOutTime;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName
struct UGameplayAbility_MontageSetNextSectionName_Params
{
	struct FName                                       FromSectionName;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ToSectionName;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.MontageJumpToSection
struct UGameplayAbility_MontageJumpToSection_Params
{
	struct FName                                       SectionName;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
struct UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Params
{
	struct FName                                       SocketName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayAbilityTargetingLocationInfo       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
struct UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Params
{
	struct FGameplayAbilityTargetingLocationInfo       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
struct UGameplayAbility_MakeOutgoingGameplayEffectSpec_Params
{
	class UClass*                                      GameplayEffectClass;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Level;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
struct UGameplayAbility_K2_ShouldAbilityRespondToEvent_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                // (CPF_Parm)
	struct FGameplayEventData                          Payload;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
struct UGameplayAbility_K2_RemoveGameplayCue_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (CPF_Parm)
};

// Function GameplayAbilities.GameplayAbility.K2_OnEndAbility
struct UGameplayAbility_K2_OnEndAbility_Params
{
};

// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
struct UGameplayAbility_K2_ExecuteGameplayCueWithParams_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (CPF_Parm)
	struct FGameplayCueParameters                      GameplayCueParameters;                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
struct UGameplayAbility_K2_ExecuteGameplayCue_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (CPF_Parm)
	struct FGameplayEffectContextHandle                Context;                                                  // (CPF_Parm)
};

// Function GameplayAbilities.GameplayAbility.K2_EndAbility
struct UGameplayAbility_K2_EndAbility_Params
{
};

// Function GameplayAbilities.GameplayAbility.K2_CommitExecute
struct UGameplayAbility_K2_CommitExecute_Params
{
};

// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
struct UGameplayAbility_K2_CommitAbilityCost_Params
{
	bool                                               BroadcastCommitEvent;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
struct UGameplayAbility_K2_CommitAbilityCooldown_Params
{
	bool                                               BroadcastCommitEvent;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ForceCooldown;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.K2_CommitAbility
struct UGameplayAbility_K2_CommitAbility_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
struct UGameplayAbility_K2_CheckAbilityCost_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
struct UGameplayAbility_K2_CheckAbilityCooldown_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility
struct UGameplayAbility_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                // (CPF_Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
struct UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Params
{
	struct FGameplayEffectSpecHandle                   EffectSpecHandle;                                         // (CPF_ConstParm, CPF_Parm)
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_Parm)
	TArray<struct FActiveGameplayEffectHandle>         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
struct UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Params
{
	struct FGameplayEffectSpecHandle                   EffectSpecHandle;                                         // (CPF_ConstParm, CPF_Parm)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams
struct UGameplayAbility_K2_AddGameplayCueWithParams_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (CPF_Parm)
	struct FGameplayCueParameters                      GameplayCueParameter;                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               bRemoveOnAbilityEnd;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue
struct UGameplayAbility_K2_AddGameplayCue_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (CPF_Parm)
	struct FGameplayEffectContextHandle                Context;                                                  // (CPF_Parm)
	bool                                               bRemoveOnAbilityEnd;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
struct UGameplayAbility_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GameplayAbilities.GameplayAbility.K2_ActivateAbility
struct UGameplayAbility_K2_ActivateAbility_Params
{
};

// Function GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey
struct UGameplayAbility_InvalidateClientPredictionKey_Params
{
};

// Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
struct UGameplayAbility_GetOwningComponentFromActorInfo_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
struct UGameplayAbility_GetOwningActorFromActorInfo_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
struct UGameplayAbility_GetGrantedByEffectContext_Params
{
	struct FGameplayEffectContextHandle                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject
struct UGameplayAbility_GetCurrentSourceObject_Params
{
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.GetCurrentMontage
struct UGameplayAbility_GetCurrentMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.GetCoolDownTimeRemaining
struct UGameplayAbility_GetCoolDownTimeRemaining_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.GetContextFromOwner
struct UGameplayAbility_GetContextFromOwner_Params
{
	struct FGameplayAbilityTargetDataHandle            OptionalTargetData;                                       // (CPF_Parm)
	struct FGameplayEffectContextHandle                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
struct UGameplayAbility_GetAvatarActorFromActorInfo_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.GetActorInfo
struct UGameplayAbility_GetActorInfo_Params
{
	struct FGameplayAbilityActorInfo                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.GetAbilityLevel
struct UGameplayAbility_GetAbilityLevel_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName
struct UGameplayAbility_EndTaskByInstanceName_Params
{
	struct FName                                       InstanceName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.EndAbilityState
struct UGameplayAbility_EndAbilityState_Params
{
	struct FName                                       OptionalStateNameToEnd;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
struct UGameplayAbility_ConfirmTaskByInstanceName_Params
{
	struct FName                                       InstanceName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bEndTask;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
struct UGameplayAbility_CancelTaskByInstanceName_Params
{
	struct FName                                       InstanceName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle
struct UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithHandle_Params
{
	struct FActiveGameplayEffectHandle                 Handle;                                                   // (CPF_Parm)
	int                                                StacksToRemove;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
struct UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Params
{
	struct FGameplayTagContainer                       WithGrantedTags;                                          // (CPF_Parm)
	int                                                StacksToRemove;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
struct UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Params
{
	struct FGameplayTagContainer                       WithAssetTags;                                            // (CPF_Parm)
	int                                                StacksToRemove;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
struct UGameplayAbility_BP_ApplyGameplayEffectToTarget_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_Parm)
	class UClass*                                      GameplayEffectClass;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GameplayEffectLevel;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Stacks;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FActiveGameplayEffectHandle>         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
struct UGameplayAbility_BP_ApplyGameplayEffectToOwner_Params
{
	class UClass*                                      GameplayEffectClass;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GameplayEffectLevel;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Stacks;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
struct UAbilitySystemComponent_TryActivateAbilityByClass_Params
{
	class UClass*                                      InAbilityToActivate;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAllowRemoteActivation;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
struct UAbilitySystemComponent_TryActivateAbilitiesByTag_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               bAllowRemoteActivation;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.TargetConfirm
struct UAbilitySystemComponent_TargetConfirm_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.TargetCancel
struct UAbilitySystemComponent_TargetCancel_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
struct UAbilitySystemComponent_SetUserAbilityActivationInhibited_Params
{
	bool                                               NewInhibit;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery
struct UAbilitySystemComponent_SetActiveGameplayEffectLevelUsingQuery_Params
{
	struct FGameplayEffectQuery                        Query;                                                    // (CPF_Parm)
	int                                                NewLevel;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
struct UAbilitySystemComponent_SetActiveGameplayEffectLevel_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             // (CPF_Parm)
	int                                                NewLevel;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
struct UAbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                        // (CPF_Parm)
	bool                                               InputPressed;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FPredictionKey                              PredictionKey;                                            // (CPF_Parm)
	struct FGameplayEventData                          TriggerEventData;                                         // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
struct UAbilitySystemComponent_ServerTryActivateAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                        // (CPF_Parm)
	bool                                               InputPressed;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FPredictionKey                              PredictionKey;                                            // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
struct UAbilitySystemComponent_ServerSetReplicatedTargetDataCancelled_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // (CPF_Parm)
	struct FPredictionKey                              AbilityOriginalPredictionKey;                             // (CPF_Parm)
	struct FPredictionKey                              CurrentPredictionKey;                                     // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
struct UAbilitySystemComponent_ServerSetReplicatedTargetData_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // (CPF_Parm)
	struct FPredictionKey                              AbilityOriginalPredictionKey;                             // (CPF_Parm)
	struct FGameplayAbilityTargetDataHandle            ReplicatedTargetDataHandle;                               // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
	struct FPredictionKey                              CurrentPredictionKey;                                     // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
struct UAbilitySystemComponent_ServerSetReplicatedEventWithPayload_Params
{
	TEnumAsByte<EAbilityGenericReplicatedEvent>        EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // (CPF_Parm)
	struct FPredictionKey                              AbilityOriginalPredictionKey;                             // (CPF_Parm)
	struct FPredictionKey                              CurrentPredictionKey;                                     // (CPF_Parm)
	struct FVector_NetQuantize100                      VectorPayload;                                            // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
struct UAbilitySystemComponent_ServerSetReplicatedEvent_Params
{
	TEnumAsByte<EAbilityGenericReplicatedEvent>        EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // (CPF_Parm)
	struct FPredictionKey                              AbilityOriginalPredictionKey;                             // (CPF_Parm)
	struct FPredictionKey                              CurrentPredictionKey;                                     // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
struct UAbilitySystemComponent_ServerSetInputReleased_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
struct UAbilitySystemComponent_ServerSetInputPressed_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings
struct UAbilitySystemComponent_ServerPrintDebug_RequestWithStrings_Params
{
	TArray<struct FString>                             Strings;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request
struct UAbilitySystemComponent_ServerPrintDebug_Request_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility
struct UAbilitySystemComponent_ServerEndAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToEnd;                                             // (CPF_Parm)
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                           // (CPF_Parm)
	struct FPredictionKey                              PredictionKey;                                            // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate
struct UAbilitySystemComponent_ServerCurrentMontageSetPlayRate_Params
{
	class UAnimMontage*                                ClientAnimMontage;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InPlayRate;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
struct UAbilitySystemComponent_ServerCurrentMontageSetNextSectionName_Params
{
	class UAnimMontage*                                ClientAnimMontage;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ClientPosition;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SectionName;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       NextSectionName;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
struct UAbilitySystemComponent_ServerCurrentMontageJumpToSectionName_Params
{
	class UAnimMontage*                                ClientAnimMontage;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SectionName;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
struct UAbilitySystemComponent_ServerCancelAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToCancel;                                          // (CPF_Parm)
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                           // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch
struct UAbilitySystemComponent_ServerAbilityRPCBatch_Params
{
	struct FGameplayAbilities_FServerAbilityRPCBatch   BatchInfo;                                                // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
struct UAbilitySystemComponent_RemoveActiveGameplayEffectBySourceEffect_Params
{
	class UClass*                                      GameplayEffect;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilitySystemComponent*                     InstigatorAbilitySystemComponent;                         // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                StacksToRemove;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
struct UAbilitySystemComponent_RemoveActiveGameplayEffect_Params
{
	struct FActiveGameplayEffectHandle                 Handle;                                                   // (CPF_Parm)
	int                                                StacksToRemove;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
struct UAbilitySystemComponent_RemoveActiveEffectsWithTags_Params
{
	struct FGameplayTagContainer                       Tags;                                                     // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
struct UAbilitySystemComponent_RemoveActiveEffectsWithSourceTags_Params
{
	struct FGameplayTagContainer                       Tags;                                                     // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
struct UAbilitySystemComponent_RemoveActiveEffectsWithGrantedTags_Params
{
	struct FGameplayTagContainer                       Tags;                                                     // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
struct UAbilitySystemComponent_RemoveActiveEffectsWithAppliedTags_Params
{
	struct FGameplayTagContainer                       Tags;                                                     // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString
struct UAbilitySystemComponent_OnRep_ServerDebugString_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
struct UAbilitySystemComponent_OnRep_ReplicatedAnimMontage_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
struct UAbilitySystemComponent_OnRep_OwningActor_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString
struct UAbilitySystemComponent_OnRep_ClientDebugString_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
struct UAbilitySystemComponent_OnRep_ActivateAbilities_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_WithParams_Params
{
	struct FGameplayTagContainer                       GameplayCueTags;                                          // (CPF_ConstParm, CPF_Parm)
	struct FPredictionKey                              PredictionKey;                                            // (CPF_Parm)
	struct FGameplayCueParameters                      GameplayCueParameters;                                    // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_Params
{
	struct FGameplayTagContainer                       GameplayCueTags;                                          // (CPF_ConstParm, CPF_Parm)
	struct FPredictionKey                              PredictionKey;                                            // (CPF_Parm)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams_Params
{
	struct FGameplayTagContainer                       GameplayCueTags;                                          // (CPF_ConstParm, CPF_Parm)
	struct FPredictionKey                              PredictionKey;                                            // (CPF_Parm)
	struct FGameplayCueParameters                      GameplayCueParameters;                                    // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_WithParams_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (CPF_ConstParm, CPF_Parm)
	struct FPredictionKey                              PredictionKey;                                            // (CPF_Parm)
	struct FGameplayCueParameters                      GameplayCueParameters;                                    // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_FromSpec_Params
{
	struct FGameplayEffectSpecForRPC                   Spec;                                                     // (CPF_ConstParm, CPF_Parm)
	struct FPredictionKey                              PredictionKey;                                            // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (CPF_ConstParm, CPF_Parm)
	struct FPredictionKey                              PredictionKey;                                            // (CPF_Parm)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (CPF_ConstParm, CPF_Parm)
	struct FPredictionKey                              PredictionKey;                                            // (CPF_Parm)
	struct FGameplayCueParameters                      GameplayCueParameters;                                    // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Params
{
	struct FGameplayEffectSpecForRPC                   Spec;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
	struct FPredictionKey                              PredictionKey;                                            // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_WithParams_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (CPF_ConstParm, CPF_Parm)
	struct FPredictionKey                              PredictionKey;                                            // (CPF_Parm)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (CPF_ConstParm, CPF_Parm)
	struct FPredictionKey                              PredictionKey;                                            // (CPF_Parm)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
struct UAbilitySystemComponent_MakeOutgoingSpec_Params
{
	class UClass*                                      GameplayEffectClass;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Level;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle                Context;                                                  // (CPF_Parm)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext
struct UAbilitySystemComponent_MakeEffectContext_Params
{
	struct FGameplayEffectContextHandle                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.K2_InitStats
struct UAbilitySystemComponent_K2_InitStats_Params
{
	class UClass*                                      Attributes;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDataTable*                                  DataTable;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
struct UAbilitySystemComponent_IsGameplayCueActive_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (CPF_ConstParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
struct UAbilitySystemComponent_GetUserAbilityActivationInhibited_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
struct UAbilitySystemComponent_GetGameplayEffectMagnitude_Params
{
	struct FActiveGameplayEffectHandle                 Handle;                                                   // (CPF_Parm)
	struct FGameplayAttribute                          Attribute;                                                // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
struct UAbilitySystemComponent_GetGameplayEffectCount_Params
{
	class UClass*                                      SourceGameplayEffect;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilitySystemComponent*                     OptionalInstigatorFilterComponent;                        // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               bEnforceOnGoingCheck;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
struct UAbilitySystemComponent_ClientTryActivateAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                        // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
struct UAbilitySystemComponent_ClientSetReplicatedEvent_Params
{
	TEnumAsByte<EAbilityGenericReplicatedEvent>        EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // (CPF_Parm)
	struct FPredictionKey                              AbilityOriginalPredictionKey;                             // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
struct UAbilitySystemComponent_ClientPrintDebug_Response_Params
{
	TArray<struct FString>                             Strings;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)
	int                                                GameFlags;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility
struct UAbilitySystemComponent_ClientEndAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToEnd;                                             // (CPF_Parm)
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                           // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
struct UAbilitySystemComponent_ClientCancelAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToCancel;                                          // (CPF_Parm)
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                           // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
struct UAbilitySystemComponent_ClientActivateAbilitySucceedWithEventData_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                        // (CPF_Parm)
	struct FPredictionKey                              PredictionKey;                                            // (CPF_Parm)
	struct FGameplayEventData                          TriggerEventData;                                         // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
struct UAbilitySystemComponent_ClientActivateAbilitySucceed_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                        // (CPF_Parm)
	struct FPredictionKey                              PredictionKey;                                            // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
struct UAbilitySystemComponent_ClientActivateAbilityFailed_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                        // (CPF_Parm)
	int16_t                                            PredictionKey;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
struct UAbilitySystemComponent_BP_ApplyGameplayEffectToTarget_Params
{
	class UClass*                                      GameplayEffectClass;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilitySystemComponent*                     Target;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Level;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle                Context;                                                  // (CPF_Parm)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
struct UAbilitySystemComponent_BP_ApplyGameplayEffectToSelf_Params
{
	class UClass*                                      GameplayEffectClass;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Level;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (CPF_Parm)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
struct UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToTarget_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	class UAbilitySystemComponent*                     Target;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
struct UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToSelf_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
struct UAbilitySystemComponent_AbilityConfirmOrCancel__DelegateSignature_Params
{
};

// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
struct UAbilitySystemComponent_AbilityAbilityKey__DelegateSignature_Params
{
	int                                                InputID;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts
struct UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCosts_Params
{
};

// Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns
struct UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCooldowns_Params
{
};

// Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive
struct AGameplayCueNotify_Actor_WhileActive_Params
{
	class AActor*                                      MyTarget;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove
struct AGameplayCueNotify_Actor_OnRemove_Params
{
	class AActor*                                      MyTarget;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
struct AGameplayCueNotify_Actor_OnOwnerDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute
struct AGameplayCueNotify_Actor_OnExecute_Params
{
	class AActor*                                      MyTarget;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.OnActive
struct AGameplayCueNotify_Actor_OnActive_Params
{
	class AActor*                                      MyTarget;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
struct AGameplayCueNotify_Actor_K2_HandleGameplayCue_Params
{
	class AActor*                                      MyTarget;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue
struct AGameplayCueNotify_Actor_K2_EndGameplayCue_Params
{
};

// Function GameplayAbilities.GameplayCueNotify_Static.WhileActive
struct UGameplayCueNotify_Static_WhileActive_Params
{
	class AActor*                                      MyTarget;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueNotify_Static.OnRemove
struct UGameplayCueNotify_Static_OnRemove_Params
{
	class AActor*                                      MyTarget;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueNotify_Static.OnExecute
struct UGameplayCueNotify_Static_OnExecute_Params
{
	class AActor*                                      MyTarget;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueNotify_Static.OnActive
struct UGameplayCueNotify_Static_OnActive_Params
{
	class AActor*                                      MyTarget;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
struct UGameplayCueNotify_Static_K2_HandleGameplayCue_Params
{
	class AActor*                                      MyTarget;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute
struct UGameplayEffectExecutionCalculation_Execute_Params
{
	struct FGameplayEffectCustomExecutionParameters    ExecutionParams;                                          // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayEffectCustomExecutionOutput        OutExecutionOutput;                                       // (CPF_Parm, CPF_OutParm)
};

// Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
struct UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
struct UGameplayCueInterface_ForwardGameplayCueToParent_Params
{
};

// Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
struct UGameplayCueInterface_BlueprintCustomHandler_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
struct UAbilitySystemBlueprintLibrary_TargetDataHasOrigin_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
struct UAbilitySystemBlueprintLibrary_TargetDataHasHitResult_Params
{
	struct FGameplayAbilityTargetDataHandle            HitResult;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
struct UAbilitySystemBlueprintLibrary_TargetDataHasEndPoint_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
struct UAbilitySystemBlueprintLibrary_TargetDataHasActor_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
struct UAbilitySystemBlueprintLibrary_SetStackCountToMax_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (CPF_Parm)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
struct UAbilitySystemBlueprintLibrary_SetStackCount_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (CPF_Parm)
	int                                                StackCount;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
struct UAbilitySystemBlueprintLibrary_SetDuration_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (CPF_Parm)
	float                                              Duration;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
struct UAbilitySystemBlueprintLibrary_SendGameplayEventToActor_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTag                                EventTag;                                                 // (CPF_Parm)
	struct FGameplayEventData                          Payload;                                                  // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute
struct UAbilitySystemBlueprintLibrary_NotEqual_GameplayAttributeGameplayAttribute_Params
{
	struct FGameplayAttribute                          AttributeA;                                               // (CPF_Parm)
	struct FGameplayAttribute                          AttributeB;                                               // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
struct UAbilitySystemBlueprintLibrary_MakeSpecHandle_Params
{
	class UGameplayEffect*                             InGameplayEffect;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      InInstigator;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      InEffectCauser;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InLevel;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
struct UAbilitySystemBlueprintLibrary_MakeFilterHandle_Params
{
	struct FGameplayTargetDataFilter                   Filter;                                                   // (CPF_Parm)
	class AActor*                                      FilterActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTargetDataFilterHandle             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid
struct UAbilitySystemBlueprintLibrary_IsValid_Params
{
	struct FGameplayAttribute                          Attribute;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
struct UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlledPlayer_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
struct UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlled_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
struct UAbilitySystemBlueprintLibrary_HasHitResult_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
struct UAbilitySystemBlueprintLibrary_GetTargetDataOrigin_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
struct UAbilitySystemBlueprintLibrary_GetTargetDataEndPointTransform_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
struct UAbilitySystemBlueprintLibrary_GetTargetDataEndPoint_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
struct UAbilitySystemBlueprintLibrary_GetOrigin_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude
struct UAbilitySystemBlueprintLibrary_GetModifiedAttributeMagnitude_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (CPF_Parm)
	struct FGameplayAttribute                          Attribute;                                                // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
struct UAbilitySystemBlueprintLibrary_GetInstigatorTransform_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
struct UAbilitySystemBlueprintLibrary_GetInstigatorActor_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
struct UAbilitySystemBlueprintLibrary_GetHitResultFromTargetData_Params
{
	struct FGameplayAbilityTargetDataHandle            HitResult;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
struct UAbilitySystemBlueprintLibrary_GetHitResult_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
	struct FHitResult                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
struct UAbilitySystemBlueprintLibrary_GetGameplayCueEndLocationAndNormal_Params
{
	class AActor*                                      TargetActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	struct FVector                                     Normal;                                                   // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
struct UAbilitySystemBlueprintLibrary_GetGameplayCueDirection_Params
{
	class AActor*                                      TargetActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
	struct FVector                                     Direction;                                                // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent
struct UAbilitySystemBlueprintLibrary_GetFloatAttributeFromAbilitySystemComponent_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FGameplayAttribute                          Attribute;                                                // (CPF_Parm)
	bool                                               bSuccessfullyFoundAttribute;                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent
struct UAbilitySystemBlueprintLibrary_GetFloatAttributeBaseFromAbilitySystemComponent_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FGameplayAttribute                          Attribute;                                                // (CPF_Parm)
	bool                                               bSuccessfullyFoundAttribute;                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase
struct UAbilitySystemBlueprintLibrary_GetFloatAttributeBase_Params
{
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayAttribute                          Attribute;                                                // (CPF_Parm)
	bool                                               bSuccessfullyFoundAttribute;                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
struct UAbilitySystemBlueprintLibrary_GetFloatAttribute_Params
{
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayAttribute                          Attribute;                                                // (CPF_Parm)
	bool                                               bSuccessfullyFoundAttribute;                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext
struct UAbilitySystemBlueprintLibrary_GetEffectContext_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (CPF_Parm)
	struct FGameplayEffectContextHandle                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
struct UAbilitySystemBlueprintLibrary_GetDataCountFromTargetData_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles
struct UAbilitySystemBlueprintLibrary_GetAllLinkedGameplayEffectSpecHandles_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (CPF_Parm)
	TArray<struct FGameplayEffectSpecHandle>           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
struct UAbilitySystemBlueprintLibrary_GetActorsFromTargetData_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class AActor*>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
struct UAbilitySystemBlueprintLibrary_GetActorCount_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
struct UAbilitySystemBlueprintLibrary_GetActorByIndex_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackLimitCount_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackCount_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectDebugString_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
struct UAbilitySystemBlueprintLibrary_GetAbilitySystemComponent_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilitySystemComponent*                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
struct UAbilitySystemBlueprintLibrary_ForwardGameplayCueToTarget_Params
{
	TScriptInterface<class UGameplayCueInterface>      TargetCueInterface;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
struct UAbilitySystemBlueprintLibrary_FilterTargetData_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetDataHandle;                                         // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTargetDataFilterHandle             ActorFilterClass;                                         // (CPF_Parm)
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase
struct UAbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTagsAndBase_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FGameplayAttribute                          Attribute;                                                // (CPF_Parm)
	struct FGameplayTagContainer                       SourceTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTagContainer                       TargetTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	float                                              BaseValue;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSuccess;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags
struct UAbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTags_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FGameplayAttribute                          Attribute;                                                // (CPF_Parm)
	struct FGameplayTagContainer                       SourceTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTagContainer                       TargetTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               bSuccess;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute
struct UAbilitySystemBlueprintLibrary_EqualEqual_GameplayAttributeGameplayAttribute_Params
{
	struct FGameplayAttribute                          AttributeA;                                               // (CPF_Parm)
	struct FGameplayAttribute                          AttributeB;                                               // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin
struct UAbilitySystemBlueprintLibrary_EffectContextSetOrigin_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (CPF_Parm)
	struct FVector                                     Origin;                                                   // (CPF_Parm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid
struct UAbilitySystemBlueprintLibrary_EffectContextIsValid_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
struct UAbilitySystemBlueprintLibrary_EffectContextIsInstigatorLocallyControlled_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
struct UAbilitySystemBlueprintLibrary_EffectContextHasHitResult_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
struct UAbilitySystemBlueprintLibrary_EffectContextGetSourceObject_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (CPF_Parm)
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
struct UAbilitySystemBlueprintLibrary_EffectContextGetOriginalInstigatorActor_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (CPF_Parm)
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
struct UAbilitySystemBlueprintLibrary_EffectContextGetOrigin_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
struct UAbilitySystemBlueprintLibrary_EffectContextGetInstigatorActor_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (CPF_Parm)
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
struct UAbilitySystemBlueprintLibrary_EffectContextGetHitResult_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (CPF_Parm)
	struct FHitResult                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
struct UAbilitySystemBlueprintLibrary_EffectContextGetEffectCauser_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (CPF_Parm)
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult
struct UAbilitySystemBlueprintLibrary_EffectContextAddHitResult_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (CPF_Parm)
	struct FHitResult                                  HitResult;                                                // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bReset;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
struct UAbilitySystemBlueprintLibrary_DoesTargetDataContainActor_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
struct UAbilitySystemBlueprintLibrary_DoesGameplayCueMeetTagRequirements_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
	struct FGameplayTagRequirements                    SourceTagReqs;                                            // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTagRequirements                    TargetTagReqs;                                            // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
struct UAbilitySystemBlueprintLibrary_AssignSetByCallerMagnitude_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (CPF_Parm)
	struct FName                                       DataName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Magnitude;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
struct UAbilitySystemBlueprintLibrary_AppendTargetDataHandle_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetHandle;                                             // (CPF_Parm)
	struct FGameplayAbilityTargetDataHandle            HandleToAdd;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
struct UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffectSpec_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (CPF_Parm)
	struct FGameplayEffectSpecHandle                   LinkedGameplayEffectSpec;                                 // (CPF_Parm)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect
struct UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffect_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (CPF_Parm)
	class UClass*                                      LinkedGameplayEffect;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
struct UAbilitySystemBlueprintLibrary_AddGrantedTags_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (CPF_Parm)
	struct FGameplayTagContainer                       NewGameplayTags;                                          // (CPF_Parm)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
struct UAbilitySystemBlueprintLibrary_AddGrantedTag_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (CPF_Parm)
	struct FGameplayTag                                NewGameplayTag;                                           // (CPF_Parm)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
struct UAbilitySystemBlueprintLibrary_AddAssetTags_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (CPF_Parm)
	struct FGameplayTagContainer                       NewGameplayTags;                                          // (CPF_Parm)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
struct UAbilitySystemBlueprintLibrary_AddAssetTag_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (CPF_Parm)
	struct FGameplayTag                                NewGameplayTag;                                           // (CPF_Parm)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromLocations_Params
{
	struct FGameplayAbilityTargetingLocationInfo       SourceLocation;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayAbilityTargetingLocationInfo       TargetLocation;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromHitResult_Params
{
	struct FHitResult                                  HitResult;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActorArray_Params
{
	TArray<class AActor*>                              ActorArray;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	bool                                               OneTargetPerHandle;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActor_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
struct UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     WorldDirection;                                           // (CPF_Parm, CPF_IsPlainOldData)
	float                                              Strength;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsAdditive;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 StrengthOverTime;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     SetVelocityOnFinish;                                      // (CPF_Parm, CPF_IsPlainOldData)
	float                                              ClampVelocityOnFinish;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_ApplyRootMotionConstantForce*   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
struct UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Params
{
	struct FHitResult                                  Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish
struct UAbilityTask_ApplyRootMotionJumpForce_Finish_Params
{
};

// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
struct UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	float                                              Distance;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Height;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinimumLandedTriggerTime;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFinishOnLanded;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     SetVelocityOnFinish;                                      // (CPF_Parm, CPF_IsPlainOldData)
	float                                              ClampVelocityOnFinish;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveVector*                                PathOffsetCurve;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 TimeMappingCurve;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_ApplyRootMotionJumpForce*       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation
struct UAbilityTask_ApplyRootMotionMoveToActorForce_OnRep_TargetLocation_Params
{
};

// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce
struct UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     TargetLocationOffset;                                     // (CPF_Parm, CPF_IsPlainOldData)
	float                                              Duration;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 TargetLerpSpeedHorizontal;                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 TargetLerpSpeedVertical;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSetNewMovementMode;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRestrictSpeedToExpected;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveVector*                                PathOffsetCurve;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 TimeMappingCurve;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     SetVelocityOnFinish;                                      // (CPF_Parm, CPF_IsPlainOldData)
	float                                              ClampVelocityOnFinish;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDisableDestinationReachedInterrupt;                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_ApplyRootMotionMoveToActorForce* ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
struct UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (CPF_Parm, CPF_IsPlainOldData)
	float                                              Duration;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSetNewMovementMode;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRestrictSpeedToExpected;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveVector*                                PathOffsetCurve;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     SetVelocityOnFinish;                                      // (CPF_Parm, CPF_IsPlainOldData)
	float                                              ClampVelocityOnFinish;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_ApplyRootMotionMoveToForce*     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
struct UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	class AActor*                                      LocationActor;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Strength;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsPush;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsAdditive;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bNoZForce;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 StrengthDistanceFalloff;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 StrengthOverTime;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseFixedWorldDirection;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    FixedWorldDirection;                                      // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     SetVelocityOnFinish;                                      // (CPF_Parm, CPF_IsPlainOldData)
	float                                              ClampVelocityOnFinish;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_ApplyRootMotionRadialForce*     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
struct UAbilityTask_MoveToLocation_MoveToLocation_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	float                                              Duration;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 OptionalInterpolationCurve;                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveVector*                                OptionalVectorInterpolationCurve;                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_MoveToLocation*                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
struct UAbilityTask_NetworkSyncPoint_WaitNetSync_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_NetworkSyncPoint*               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
struct UAbilityTask_NetworkSyncPoint_OnSignalCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
struct UAbilityTask_PlayMontageAndWait_OnMontageInterrupted_Params
{
};

// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded
struct UAbilityTask_PlayMontageAndWait_OnMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bInterrupted;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
struct UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Params
{
	class UAnimMontage*                                Montage;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bInterrupted;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
struct UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                MontageToPlay;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Rate;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       StartSection;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bStopWhenAbilityEnds;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimRootMotionTranslationScale;                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_PlayMontageAndWait*             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_Repeat.RepeatAction
struct UAbilityTask_Repeat_RepeatAction_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeBetweenActions;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TotalActionCount;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_Repeat*                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
struct UAbilityTask_SpawnActor_SpawnActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_Parm)
	class UClass*                                      Class;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_SpawnActor*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
struct UAbilityTask_SpawnActor_FinishSpawningActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_Parm)
	class AActor*                                      SpawnedActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
struct UAbilityTask_SpawnActor_BeginSpawningActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_Parm)
	class UClass*                                      Class;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      SpawnedActor;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
struct UAbilityTask_StartAbilityState_StartAbilityState_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       StateName;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bEndCurrentState;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_StartAbilityState*              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
struct AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Params
{
	struct FName                                       ParamName;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Value;                                                    // (CPF_Parm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
struct AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Params
{
	struct FName                                       ParamName;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
struct AGameplayAbilityWorldReticle_OnValidTargetChanged_Params
{
	bool                                               bNewValue;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
struct AGameplayAbilityWorldReticle_OnTargetingAnActor_Params
{
	bool                                               bNewValue;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
struct AGameplayAbilityWorldReticle_OnParametersInitialized_Params
{
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
struct AGameplayAbilityWorldReticle_FaceTowardSource_Params
{
	bool                                               bFaceIn2D;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
struct AGameplayAbilityTargetActor_ConfirmTargeting_Params
{
};

// Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
struct AGameplayAbilityTargetActor_CancelTargeting_Params
{
};

// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
struct UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AGameplayAbilityTargetActor*                 TargetActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_VisualizeTargeting*             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
struct UAbilityTask_VisualizeTargeting_VisualizeTargeting_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      Class;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_VisualizeTargeting*             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
struct UAbilityTask_VisualizeTargeting_FinishSpawningActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AGameplayAbilityTargetActor*                 SpawnedActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
struct UAbilityTask_VisualizeTargeting_BeginSpawningActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      Class;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AGameplayAbilityTargetActor*                 SpawnedActor;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements
struct UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagRequirements                    TagRequirements;                                          // (CPF_Parm)
	bool                                               IncludeTriggeredAbilities;                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               TriggerOnce;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_WaitAbilityActivate*            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
struct UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTag                                WithTag;                                                  // (CPF_Parm)
	struct FGameplayTag                                WithoutTag;                                               // (CPF_Parm)
	bool                                               IncludeTriggeredAbilities;                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               TriggerOnce;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_WaitAbilityActivate*            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
struct UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Params
{
	class UGameplayAbility*                            ActivatedAbility;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
struct UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTag                                WithTag;                                                  // (CPF_Parm)
	struct FGameplayTag                                WithoutTage;                                              // (CPF_Parm)
	bool                                               TriggerOnce;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_WaitAbilityCommit*              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
struct UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Params
{
	class UGameplayAbility*                            ActivatedAbility;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
struct UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayAttribute                          InAttribute;                                              // (CPF_Parm)
	struct FGameplayTag                                InWithTag;                                                // (CPF_Parm)
	struct FGameplayTag                                InWithoutTag;                                             // (CPF_Parm)
	TEnumAsByte<EWaitAttributeChangeComparison>        InComparisonType;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InComparisonValue;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               TriggerOnce;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_WaitAttributeChange*            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
struct UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayAttribute                          Attribute;                                                // (CPF_Parm)
	struct FGameplayTag                                WithSrcTag;                                               // (CPF_Parm)
	struct FGameplayTag                                WithoutSrcTag;                                            // (CPF_Parm)
	bool                                               TriggerOnce;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_WaitAttributeChange*            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold
struct UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayAttribute                          AttributeNumerator;                                       // (CPF_Parm)
	struct FGameplayAttribute                          AttributeDenominator;                                     // (CPF_Parm)
	TEnumAsByte<EWaitAttributeChangeComparison>        ComparisonType;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ComparisonValue;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bTriggerOnce;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_WaitAttributeChangeRatioThreshold* ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold
struct UAbilityTask_WaitAttributeChangeThreshold_WaitForAttributeChangeThreshold_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayAttribute                          Attribute;                                                // (CPF_Parm)
	TEnumAsByte<EWaitAttributeChangeComparison>        ComparisonType;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ComparisonValue;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bTriggerOnce;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_WaitAttributeChangeThreshold*   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
struct UAbilityTask_WaitCancel_WaitCancel_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_WaitCancel*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
struct UAbilityTask_WaitCancel_OnLocalCancelCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
struct UAbilityTask_WaitCancel_OnCancelCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
struct UAbilityTask_WaitConfirm_WaitConfirm_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_WaitConfirm*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
struct UAbilityTask_WaitConfirm_OnConfirmCallback_Params
{
	class UGameplayAbility*                            InAbility;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
struct UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_WaitConfirmCancel*              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
struct UAbilityTask_WaitConfirmCancel_OnLocalConfirmCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
struct UAbilityTask_WaitConfirmCancel_OnLocalCancelCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
struct UAbilityTask_WaitConfirmCancel_OnConfirmCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
struct UAbilityTask_WaitConfirmCancel_OnCancelCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
struct UAbilityTask_WaitDelay_WaitDelay_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Time;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_WaitDelay*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
struct UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Params
{
	class UAbilitySystemComponent*                     Target;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FGameplayEffectSpec                         SpecApplied;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             // (CPF_Parm)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
struct UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTargetDataFilterHandle             SourceFilter;                                             // (CPF_ConstParm, CPF_Parm)
	struct FGameplayTagRequirements                    SourceTagRequirements;                                    // (CPF_Parm)
	struct FGameplayTagRequirements                    TargetTagRequirements;                                    // (CPF_Parm)
	bool                                               TriggerOnce;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OptionalExternalOwner;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ListenForPeriodicEffect;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
struct UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTargetDataFilterHandle             TargetFilter;                                             // (CPF_ConstParm, CPF_Parm)
	struct FGameplayTagRequirements                    SourceTagRequirements;                                    // (CPF_Parm)
	struct FGameplayTagRequirements                    TargetTagRequirements;                                    // (CPF_Parm)
	bool                                               TriggerOnce;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OptionalExternalOwner;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ListenForPeriodicEffects;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity
struct UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagRequirements                    SourceTagRequirements;                                    // (CPF_Parm)
	struct FGameplayTagRequirements                    TargetTagRequirements;                                    // (CPF_Parm)
	class AActor*                                      OptionalExternalTarget;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OnlyTriggerOnce;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_WaitGameplayEffectBlockedImmunity* ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
struct UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FActiveGameplayEffectHandle                 Handle;                                                   // (CPF_Parm)
	class UAbilityTask_WaitGameplayEffectRemoved*      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
struct UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
struct UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FActiveGameplayEffectHandle                 Handle;                                                   // (CPF_Parm)
	class UAbilityTask_WaitGameplayEffectStackChange*  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
struct UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Params
{
	struct FActiveGameplayEffectHandle                 Handle;                                                   // (CPF_Parm)
	int                                                NewCount;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OldCount;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
struct UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTag                                EventTag;                                                 // (CPF_Parm)
	class AActor*                                      OptionalExternalTarget;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OnlyTriggerOnce;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_WaitGameplayEvent*              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
struct UAbilityTask_WaitGameplayTag_GameplayTagCallback_Params
{
	struct FGameplayTag                                Tag;                                                      // (CPF_ConstParm, CPF_Parm)
	int                                                NewCount;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
struct UAbilityTask_WaitGameplayTagAdded_WaitGameplayTagAdd_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTag                                Tag;                                                      // (CPF_Parm)
	class AActor*                                      InOptionalExternalTarget;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OnlyTriggerOnce;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_WaitGameplayTagAdded*           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
struct UAbilityTask_WaitGameplayTagRemoved_WaitGameplayTagRemove_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTag                                Tag;                                                      // (CPF_Parm)
	class AActor*                                      InOptionalExternalTarget;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OnlyTriggerOnce;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_WaitGameplayTagRemoved*         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
struct UAbilityTask_WaitInputPress_WaitInputPress_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bTestAlreadyPressed;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_WaitInputPress*                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
struct UAbilityTask_WaitInputPress_OnPressCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
struct UAbilityTask_WaitInputRelease_WaitInputRelease_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bTestAlreadyReleased;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_WaitInputRelease*               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
struct UAbilityTask_WaitInputRelease_OnReleaseCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
struct UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Params
{
	class ACharacter*                                  Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      PreviousCustomMode;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
struct UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EMovementMode>                         NewMode;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_WaitMovementModeChange*         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
struct UAbilityTask_WaitOverlap_WaitForOverlap_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_WaitOverlap*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
struct UAbilityTask_WaitOverlap_OnHitCallback_Params
{
	class UPrimitiveComponent*                         HitComp;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
struct UAbilityTask_WaitTargetData_WaitTargetDataUsingActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EGameplayTargetingConfirmation>        ConfirmationType;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AGameplayAbilityTargetActor*                 TargetActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_WaitTargetData*                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
struct UAbilityTask_WaitTargetData_WaitTargetData_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EGameplayTargetingConfirmation>        ConfirmationType;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      Class;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_WaitTargetData*                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
struct UAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
struct UAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Params
{
	struct FGameplayAbilityTargetDataHandle            Data;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ActivationTag;                                            // (CPF_Parm)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
struct UAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Params
{
	struct FGameplayAbilityTargetDataHandle            Data;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
struct UAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Params
{
	struct FGameplayAbilityTargetDataHandle            Data;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
struct UAbilityTask_WaitTargetData_FinishSpawningActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AGameplayAbilityTargetActor*                 SpawnedActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
struct UAbilityTask_WaitTargetData_BeginSpawningActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      Class;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AGameplayAbilityTargetActor*                 SpawnedActor;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
struct UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Direction;                                                // (CPF_Parm, CPF_IsPlainOldData)
	float                                              MinimumMagnitude;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilityTask_WaitVelocityChange*             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect
struct UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Params
{
	class UGameplayEffect*                             GameplayEffect;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectSpec                         Spec;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	class UAbilitySystemComponent*                     ASC;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
struct UGameplayTagReponseTable_TagResponseEvent_Params
{
	struct FGameplayTag                                Tag;                                                      // (CPF_ConstParm, CPF_Parm)
	int                                                NewCount;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilitySystemComponent*                     ASC;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                Idx;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
