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

// Class GameplayAbilities.AttributeSet
// 0x0008 (0x0030 - 0x0028)
class UAttributeSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AttributeSet");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbility
// 0x0568 (0x0590 - 0x0028)
class UGameplayAbility : public UObject
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x0028(0x0158) MISSED OFFSET
	struct FGameplayTagContainer                       AbilityTags;                                              // 0x0180(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x70];                                      // 0x01A0(0x0070) MISSED OFFSET
	bool                                               bReplicateInputDirectly;                                  // 0x0210(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0211(0x0028) MISSED OFFSET
	TEnumAsByte<EGameplayAbilityReplicationPolicy>     ReplicationPolicy;                                        // 0x0239(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EGameplayAbilityInstancingPolicy>      InstancingPolicy;                                         // 0x023A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bServerRespectsRemoteAbilityCancellation;                 // 0x023B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bRetriggerInstancedAbility;                               // 0x023C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x023D(0x0003) MISSED OFFSET
	struct FGameplayAbilityActivationInfo              CurrentActivationInfo;                                    // 0x0240(0x0020) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FGameplayEventData                          CurrentEventData;                                         // 0x0260(0x00A8) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TEnumAsByte<EGameplayAbilityNetExecutionPolicy>    NetExecutionPolicy;                                       // 0x0308(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0309(0x0007) MISSED OFFSET
	class UClass*                                      CostGameplayEffectClass;                                  // 0x0310(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FAbilityTriggerData>                 AbilityTriggers;                                          // 0x0318(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UClass*                                      CooldownGameplayEffectClass;                              // 0x0328(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagQuery                           CancelAbilitiesMatchingTagQuery;                          // 0x0330(0x0048) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagQuery                           ConstTagQuery;                                            // 0x0378(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_EditConst)
	struct FGameplayTagContainer                       CancelAbilitiesWithTag;                                   // 0x03C0(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       BlockAbilitiesWithTag;                                    // 0x03E0(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       ActivationOwnedTags;                                      // 0x0400(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       ActivationRequiredTags;                                   // 0x0420(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       ActivationBlockedTags;                                    // 0x0440(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       SourceRequiredTags;                                       // 0x0460(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       SourceBlockedTags;                                        // 0x0480(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       TargetRequiredTags;                                       // 0x04A0(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       TargetBlockedTags;                                        // 0x04C0(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<class UGameplayTask*>                       ActiveTasks;                                              // 0x04E0(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData05[0x70];                                      // 0x04F0(0x0070) MISSED OFFSET
	class UAnimMontage*                                CurrentMontage;                                           // 0x0560(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsActive;                                                // 0x0568(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsCancelable;                                            // 0x0569(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x16];                                      // 0x056A(0x0016) MISSED OFFSET
	bool                                               bIsBlockingOtherAbilities;                                // 0x0580(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0xF];                                       // 0x0581(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbility");
		return ptr;
	}


	void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);
	void SetCanBeCanceled(bool bCanBeCanceled);
	void SendGameplayEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload);
	void RemoveGrantedByEffect();
	void MontageStop(float OverrideBlendOutTime);
	void MontageSetNextSectionName(const struct FName& FromSectionName, const struct FName& ToSectionName);
	void MontageJumpToSection(const struct FName& SectionName);
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(const struct FName& SocketName);
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();
	struct FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(class UClass* GameplayEffectClass, float Level);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload);
	void K2_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag);
	void K2_OnEndAbility();
	void K2_ExecuteGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
	void K2_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context);
	void K2_EndAbility();
	void K2_CommitExecute();
	bool K2_CommitAbilityCost(bool BroadcastCommitEvent);
	bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown);
	bool K2_CommitAbility();
	bool K2_CheckAbilityCost();
	bool K2_CheckAbilityCooldown();
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);
	TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& EffectSpecHandle, const struct FGameplayAbilityTargetDataHandle& TargetData);
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(const struct FGameplayEffectSpecHandle& EffectSpecHandle);
	void K2_AddGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd);
	void K2_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_ActivateAbility();
	void InvalidateClientPredictionKey();
	class USkeletalMeshComponent* GetOwningComponentFromActorInfo();
	class AActor* GetOwningActorFromActorInfo();
	struct FGameplayEffectContextHandle GetGrantedByEffectContext();
	class UObject* GetCurrentSourceObject();
	class UAnimMontage* GetCurrentMontage();
	float GetCoolDownTimeRemaining();
	struct FGameplayEffectContextHandle GetContextFromOwner(const struct FGameplayAbilityTargetDataHandle& OptionalTargetData);
	class AActor* GetAvatarActorFromActorInfo();
	struct FGameplayAbilityActorInfo GetActorInfo();
	int GetAbilityLevel();
	void EndTaskByInstanceName(const struct FName& InstanceName);
	void EndAbilityState(const struct FName& OptionalStateNameToEnd);
	void ConfirmTaskByInstanceName(const struct FName& InstanceName, bool bEndTask);
	void CancelTaskByInstanceName(const struct FName& InstanceName);
	void BP_RemoveGameplayEffectFromOwnerWithHandle(const struct FActiveGameplayEffectHandle& Handle, int StacksToRemove);
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(const struct FGameplayTagContainer& WithGrantedTags, int StacksToRemove);
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags(const struct FGameplayTagContainer& WithAssetTags, int StacksToRemove);
	TArray<struct FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* GameplayEffectClass, int GameplayEffectLevel, int Stacks);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(class UClass* GameplayEffectClass, int GameplayEffectLevel, int Stacks);
};


// Class GameplayAbilities.AbilitySystemComponent
// 0x1488 (0x15E0 - 0x0158)
class UAbilitySystemComponent : public UGameplayTasksComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET
	TArray<struct FAttributeDefaults>                  DefaultStartingData;                                      // 0x0168(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<class UAttributeSet*>                       SpawnedAttributes;                                        // 0x0178(0x0010) (CPF_ExportObject, CPF_Net, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x288];                                     // 0x0188(0x0288) MISSED OFFSET
	float                                              OutgoingDuration;                                         // 0x0410(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IncomingDuration;                                         // 0x0414(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0418(0x0008) MISSED OFFSET
	TArray<struct FString>                             ClientDebugStrings;                                       // 0x0420(0x0010) (CPF_Net, CPF_ZeroConstructor)
	TArray<struct FString>                             ServerDebugStrings;                                       // 0x0430(0x0010) (CPF_Net, CPF_ZeroConstructor)
	struct FGameplayAbilitySpecContainer               ActivatableAbilities;                                     // 0x0440(0x00C8) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net)
	unsigned char                                      UnknownData03[0x50];                                      // 0x0508(0x0050) MISSED OFFSET
	TArray<class UGameplayAbility*>                    AllReplicatedInstancedAbilities;                          // 0x0558(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData04[0x438];                                     // 0x0568(0x0438) MISSED OFFSET
	TArray<class AGameplayAbilityTargetActor*>         SpawnedTargetActors;                                      // 0x09A0(0x0010) (CPF_ZeroConstructor)
	struct FGameplayAbilityRepAnimMontage              RepAnimMontageInfo;                                       // 0x09B0(0x0030) (CPF_Net)
	unsigned char                                      UnknownData05[0x8];                                       // 0x09E0(0x0008) MISSED OFFSET
	struct FGameplayAbilityLocalAnimMontage            LocalAnimMontageInfo;                                     // 0x09E8(0x0030)
	unsigned char                                      UnknownData06[0x118];                                     // 0x0A18(0x0118) MISSED OFFSET
	class AActor*                                      OwnerActor;                                               // 0x0B30(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      AvatarActor;                                              // 0x0B38(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x20];                                      // 0x0B40(0x0020) MISSED OFFSET
	struct FActiveGameplayEffectsContainer             ActiveGameplayEffects;                                    // 0x0B60(0x04A0) (CPF_Net)
	struct FActiveGameplayCueContainer                 ActiveGameplayCues;                                       // 0x1000(0x00D0) (CPF_Net)
	struct FActiveGameplayCueContainer                 MinimalReplicationGameplayCues;                           // 0x10D0(0x00D0) (CPF_Net)
	unsigned char                                      UnknownData08[0x180];                                     // 0x11A0(0x0180) MISSED OFFSET
	TArray<unsigned char>                              BlockedAbilityBindings;                                   // 0x1320(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData09[0x180];                                     // 0x1330(0x0180) MISSED OFFSET
	struct FMinimalReplicationTagCountMap              MinimalReplicationTags;                                   // 0x14B0(0x0060) (CPF_Net)
	unsigned char                                      UnknownData10[0x10];                                      // 0x1510(0x0010) MISSED OFFSET
	struct FReplicatedPredictionKeyMap                 ReplicatedPredictionKeyMap;                               // 0x1520(0x00C0) (CPF_Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemComponent");
		return ptr;
	}


	bool TryActivateAbilityByClass(class UClass* InAbilityToActivate, bool bAllowRemoteActivation);
	bool TryActivateAbilitiesByTag(const struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);
	void TargetConfirm();
	void TargetCancel();
	void SetUserAbilityActivationInhibited(bool NewInhibit);
	void SetActiveGameplayEffectLevelUsingQuery(const struct FGameplayEffectQuery& Query, int NewLevel);
	void SetActiveGameplayEffectLevel(const struct FActiveGameplayEffectHandle& ActiveHandle, int NewLevel);
	void ServerTryActivateAbilityWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData);
	void ServerTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey);
	void ServerSetReplicatedTargetDataCancelled(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetReplicatedTargetData(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, const struct FGameplayTag& ApplicationTag, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetReplicatedEventWithPayload(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey, const struct FVector_NetQuantize100& VectorPayload);
	void ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetInputReleased(const struct FGameplayAbilitySpecHandle& AbilityHandle);
	void ServerSetInputPressed(const struct FGameplayAbilitySpecHandle& AbilityHandle);
	void ServerPrintDebug_RequestWithStrings(TArray<struct FString> Strings);
	void ServerPrintDebug_Request();
	void ServerEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo, const struct FPredictionKey& PredictionKey);
	void ServerCurrentMontageSetPlayRate(class UAnimMontage* ClientAnimMontage, float InPlayRate);
	void ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, const struct FName& SectionName, const struct FName& NextSectionName);
	void ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, const struct FName& SectionName);
	void ServerCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void ServerAbilityRPCBatch(const struct FGameplayAbilities_FServerAbilityRPCBatch& BatchInfo);
	void RemoveActiveGameplayEffectBySourceEffect(class UClass* GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int StacksToRemove);
	bool RemoveActiveGameplayEffect(const struct FActiveGameplayEffectHandle& Handle, int StacksToRemove);
	int RemoveActiveEffectsWithTags(const struct FGameplayTagContainer& Tags);
	int RemoveActiveEffectsWithSourceTags(const struct FGameplayTagContainer& Tags);
	int RemoveActiveEffectsWithGrantedTags(const struct FGameplayTagContainer& Tags);
	int RemoveActiveEffectsWithAppliedTags(const struct FGameplayTagContainer& Tags);
	void OnRep_ServerDebugString();
	void OnRep_ReplicatedAnimMontage();
	void OnRep_OwningActor();
	void OnRep_ClientDebugString();
	void OnRep_ActivateAbilities();
	void NetMulticast_InvokeGameplayCuesExecuted_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCuesExecuted(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey);
	void NetMulticast_InvokeGameplayCueExecuted(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey);
	void NetMulticast_InvokeGameplayCueAdded_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& Parameters);
	void NetMulticast_InvokeGameplayCueAdded(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	struct FGameplayEffectSpecHandle MakeOutgoingSpec(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& Context);
	struct FGameplayEffectContextHandle MakeEffectContext();
	void K2_InitStats(class UClass* Attributes, class UDataTable* DataTable);
	bool IsGameplayCueActive(const struct FGameplayTag& GameplayCueTag);
	bool GetUserAbilityActivationInhibited();
	float GetGameplayEffectMagnitude(const struct FActiveGameplayEffectHandle& Handle, const struct FGameplayAttribute& Attribute);
	int GetGameplayEffectCount(class UClass* SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck);
	void ClientTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate);
	void ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey);
	void ClientPrintDebug_Response(TArray<struct FString> Strings, int GameFlags);
	void ClientEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void ClientCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void ClientActivateAbilitySucceedWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData);
	void ClientActivateAbilitySucceed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey);
	void ClientActivateAbilityFailed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, int16_t PredictionKey);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(class UClass* GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& EffectContext);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(class UAbilitySystemComponent* Target, struct FGameplayEffectSpecHandle* SpecHandle);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle* SpecHandle);
	void AbilityConfirmOrCancel__DelegateSignature();
	void AbilityAbilityKey__DelegateSignature(int InputID);
};


// Class GameplayAbilities.AbilitySystemGlobals
// 0x02E8 (0x0310 - 0x0028)
class UAbilitySystemGlobals : public UObject
{
public:
	struct FStringClassReference                       AbilitySystemGlobalsClassName;                            // 0x0028(0x0010) (CPF_Config)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0038(0x0088) MISSED OFFSET
	struct FGameplayTag                                ActivateFailCooldownTag;                                  // 0x00C0(0x0008)
	struct FName                                       ActivateFailCooldownName;                                 // 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FGameplayTag                                ActivateFailCostTag;                                      // 0x00D0(0x0008)
	struct FName                                       ActivateFailCostName;                                     // 0x00D8(0x0008) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FGameplayTag                                ActivateFailTagsBlockedTag;                               // 0x00E0(0x0008)
	struct FName                                       ActivateFailTagsBlockedName;                              // 0x00E8(0x0008) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FGameplayTag                                ActivateFailTagsMissingTag;                               // 0x00F0(0x0008)
	struct FName                                       ActivateFailTagsMissingName;                              // 0x00F8(0x0008) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FGameplayTag                                ActivateFailNetworkingTag;                                // 0x0100(0x0008)
	struct FName                                       ActivateFailNetworkingName;                               // 0x0108(0x0008) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                MinimalReplicationTagCountBits;                           // 0x0110(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               bAllowGameplayModEvaluationChannels;                      // 0x0114(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	EGameplayModEvaluationChannel                      DefaultGameplayModEvaluationChannel;                      // 0x0115(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0116(0x0002) MISSED OFFSET
	struct FName                                       GameplayModEvaluationChannelAliases[0xA];                 // 0x0118(0x0008) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FStringAssetReference                       GlobalCurveTableName;                                     // 0x0168(0x0010) (CPF_Config)
	struct FStringAssetReference                       GlobalAttributeMetaDataTableName;                         // 0x0178(0x0010) (CPF_Config)
	struct FStringAssetReference                       GlobalAttributeSetDefaultsTableName;                      // 0x0188(0x0010) (CPF_Config)
	TArray<struct FStringAssetReference>               GlobalAttributeSetDefaultsTableNames;                     // 0x0198(0x0010) (CPF_ZeroConstructor, CPF_Config)
	struct FStringAssetReference                       GlobalGameplayCueManagerClass;                            // 0x01A8(0x0010) (CPF_Config)
	struct FStringAssetReference                       GlobalGameplayCueManagerName;                             // 0x01B8(0x0010) (CPF_Config)
	TArray<struct FString>                             GameplayCueNotifyPaths;                                   // 0x01C8(0x0010) (CPF_ZeroConstructor, CPF_Config)
	struct FStringAssetReference                       GameplayTagResponseTableName;                             // 0x01D8(0x0010) (CPF_Config)
	class UGameplayTagReponseTable*                    GameplayTagResponseTable;                                 // 0x01E8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               PredictTargetGameplayEffects;                             // 0x01F0(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01F1(0x0007) MISSED OFFSET
	class UCurveTable*                                 GlobalCurveTable;                                         // 0x01F8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UCurveTable*>                         GlobalAttributeDefaultsTables;                            // 0x0200(0x0010) (CPF_ZeroConstructor)
	class UDataTable*                                  GlobalAttributeMetaDataTable;                             // 0x0210(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UGameplayCueManager*                         GlobalGameplayCueManager;                                 // 0x0218(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0xF0];                                      // 0x0220(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemGlobals");
		return ptr;
	}


	void ToggleIgnoreAbilitySystemCosts();
	void ToggleIgnoreAbilitySystemCooldowns();
};


// Class GameplayAbilities.AbilityTask
// 0x0018 (0x0080 - 0x0068)
class UAbilityTask : public UGameplayTask
{
public:
	class UGameplayAbility*                            Ability;                                                  // 0x0068(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // 0x0070(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueManager
// 0x0388 (0x03B0 - 0x0028)
class UGameplayCueManager : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FGameplayCueObjectLibrary                   RuntimeGameplayCueObjectLibrary;                          // 0x0030(0x00C0) (CPF_Transient)
	struct FGameplayCueObjectLibrary                   EditorGameplayCueObjectLibrary;                           // 0x00F0(0x00C0) (CPF_Transient)
	unsigned char                                      UnknownData01[0x1B0];                                     // 0x01B0(0x01B0) MISSED OFFSET
	TArray<class UClass*>                              LoadedGameplayCueNotifyClasses;                           // 0x0360(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<class AGameplayCueNotify_Actor*>            GameplayCueClassesForPreallocation;                       // 0x0370(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FGameplayCuePendingExecute>          PendingExecuteCues;                                       // 0x0380(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	int                                                GameplayCueSendContextCount;                              // 0x0390(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0394(0x0004) MISSED OFFSET
	TArray<struct FPreallocationInfo>                  PreallocationInfoList_Internal;                           // 0x0398(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x03A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueManager");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueNotify_Actor
// 0x0060 (0x03E8 - 0x0388)
class AGameplayCueNotify_Actor : public AActor
{
public:
	bool                                               bAutoDestroyOnRemove;                                     // 0x0388(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0389(0x0003) MISSED OFFSET
	float                                              AutoDestroyDelay;                                         // 0x038C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               WarnIfTimelineIsStillRunning;                             // 0x0390(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               WarnIfLatentActionIsStillRunning;                         // 0x0391(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0392(0x0006) MISSED OFFSET
	struct FGameplayTag                                GameplayCueTag;                                           // 0x0398(0x0008) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FName                                       GameplayCueName;                                          // 0x03A0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAutoAttachToOwner;                                       // 0x03A8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IsOverride;                                               // 0x03A9(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bUniqueInstancePerInstigator;                             // 0x03AA(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bUniqueInstancePerSourceObject;                           // 0x03AB(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bAllowMultipleOnActiveEvents;                             // 0x03AC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bAllowMultipleWhileActiveEvents;                          // 0x03AD(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03AE(0x0002) MISSED OFFSET
	int                                                NumPreallocatedInstances;                                 // 0x03B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x34];                                      // 0x03B4(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_Actor");
		return ptr;
	}


	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnOwnerDestroyed(class AActor* DestroyedActor);
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void K2_EndGameplayCue();
};


// Class GameplayAbilities.GameplayCueNotify_Static
// 0x0018 (0x0040 - 0x0028)
class UGameplayCueNotify_Static : public UObject
{
public:
	struct FGameplayTag                                GameplayCueTag;                                           // 0x0028(0x0008) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FName                                       GameplayCueName;                                          // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsOverride;                                               // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_Static");
		return ptr;
	}


	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
};


// Class GameplayAbilities.GameplayEffectCalculation
// 0x0010 (0x0038 - 0x0028)
class UGameplayEffectCalculation : public UObject
{
public:
	TArray<struct FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture;                              // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectCalculation");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectExecutionCalculation
// 0x0008 (0x0040 - 0x0038)
class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
{
public:
	bool                                               bRequiresPassedInTags;                                    // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectExecutionCalculation");
		return ptr;
	}


	void Execute(const struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput);
};


// Class GameplayAbilities.GameplayEffectUIData
// 0x0000 (0x0028 - 0x0028)
class UGameplayEffectUIData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectUIData");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayModMagnitudeCalculation
// 0x0008 (0x0040 - 0x0038)
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{
public:
	bool                                               bAllowNonNetAuthorityDependencyRegistration;              // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayModMagnitudeCalculation");
		return ptr;
	}


	float CalculateBaseMagnitude(const struct FGameplayEffectSpec& Spec);
};


// Class GameplayAbilities.GameplayCueInterface
// 0x0000 (0x0028 - 0x0028)
class UGameplayCueInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueInterface");
		return ptr;
	}


	void ForwardGameplayCueToParent();
	void BlueprintCustomHandler(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
};


// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemBlueprintLibrary");
		return ptr;
	}


	bool STATIC_TargetDataHasOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	bool STATIC_TargetDataHasHitResult(const struct FGameplayAbilityTargetDataHandle& HitResult, int Index);
	bool STATIC_TargetDataHasEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	bool STATIC_TargetDataHasActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	struct FGameplayEffectSpecHandle STATIC_SetStackCountToMax(const struct FGameplayEffectSpecHandle& SpecHandle);
	struct FGameplayEffectSpecHandle STATIC_SetStackCount(const struct FGameplayEffectSpecHandle& SpecHandle, int StackCount);
	struct FGameplayEffectSpecHandle STATIC_SetDuration(const struct FGameplayEffectSpecHandle& SpecHandle, float Duration);
	void STATIC_SendGameplayEventToActor(class AActor* Actor, const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload);
	bool STATIC_NotEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB);
	struct FGameplayEffectSpecHandle STATIC_MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel);
	struct FGameplayTargetDataFilterHandle STATIC_MakeFilterHandle(const struct FGameplayTargetDataFilter& Filter, class AActor* FilterActor);
	bool STATIC_IsValid(const struct FGameplayAttribute& Attribute);
	bool STATIC_IsInstigatorLocallyControlledPlayer(const struct FGameplayCueParameters& Parameters);
	bool STATIC_IsInstigatorLocallyControlled(const struct FGameplayCueParameters& Parameters);
	bool STATIC_HasHitResult(const struct FGameplayCueParameters& Parameters);
	struct FTransform STATIC_GetTargetDataOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	struct FTransform STATIC_GetTargetDataEndPointTransform(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	struct FVector STATIC_GetTargetDataEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	struct FVector STATIC_GetOrigin(const struct FGameplayCueParameters& Parameters);
	float STATIC_GetModifiedAttributeMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayAttribute& Attribute);
	struct FTransform STATIC_GetInstigatorTransform(const struct FGameplayCueParameters& Parameters);
	class AActor* STATIC_GetInstigatorActor(const struct FGameplayCueParameters& Parameters);
	struct FHitResult STATIC_GetHitResultFromTargetData(const struct FGameplayAbilityTargetDataHandle& HitResult, int Index);
	struct FHitResult STATIC_GetHitResult(const struct FGameplayCueParameters& Parameters);
	bool STATIC_GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Location, struct FVector* Normal);
	bool STATIC_GetGameplayCueDirection(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Direction);
	float STATIC_GetFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	float STATIC_GetFloatAttributeBaseFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	float STATIC_GetFloatAttributeBase(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	float STATIC_GetFloatAttribute(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	struct FGameplayEffectContextHandle STATIC_GetEffectContext(const struct FGameplayEffectSpecHandle& SpecHandle);
	int STATIC_GetDataCountFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData);
	TArray<struct FGameplayEffectSpecHandle> STATIC_GetAllLinkedGameplayEffectSpecHandles(const struct FGameplayEffectSpecHandle& SpecHandle);
	TArray<class AActor*> STATIC_GetActorsFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	int STATIC_GetActorCount(const struct FGameplayCueParameters& Parameters);
	class AActor* STATIC_GetActorByIndex(const struct FGameplayCueParameters& Parameters, int Index);
	int STATIC_GetActiveGameplayEffectStackLimitCount(const struct FActiveGameplayEffectHandle& ActiveHandle);
	int STATIC_GetActiveGameplayEffectStackCount(const struct FActiveGameplayEffectHandle& ActiveHandle);
	struct FString STATIC_GetActiveGameplayEffectDebugString(const struct FActiveGameplayEffectHandle& ActiveHandle);
	class UAbilitySystemComponent* STATIC_GetAbilitySystemComponent(class AActor* Actor);
	void STATIC_ForwardGameplayCueToTarget(const TScriptInterface<class UGameplayCueInterface>& TargetCueInterface, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	struct FGameplayAbilityTargetDataHandle STATIC_FilterTargetData(const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTargetDataFilterHandle& ActorFilterClass);
	float STATIC_EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, float BaseValue, bool* bSuccess);
	float STATIC_EvaluateAttributeValueWithTags(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, bool* bSuccess);
	bool STATIC_EqualEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB);
	void STATIC_EffectContextSetOrigin(const struct FGameplayEffectContextHandle& EffectContext, const struct FVector& Origin);
	bool STATIC_EffectContextIsValid(const struct FGameplayEffectContextHandle& EffectContext);
	bool STATIC_EffectContextIsInstigatorLocallyControlled(const struct FGameplayEffectContextHandle& EffectContext);
	bool STATIC_EffectContextHasHitResult(const struct FGameplayEffectContextHandle& EffectContext);
	class UObject* STATIC_EffectContextGetSourceObject(const struct FGameplayEffectContextHandle& EffectContext);
	class AActor* STATIC_EffectContextGetOriginalInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);
	struct FVector STATIC_EffectContextGetOrigin(const struct FGameplayEffectContextHandle& EffectContext);
	class AActor* STATIC_EffectContextGetInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);
	struct FHitResult STATIC_EffectContextGetHitResult(const struct FGameplayEffectContextHandle& EffectContext);
	class AActor* STATIC_EffectContextGetEffectCauser(const struct FGameplayEffectContextHandle& EffectContext);
	void STATIC_EffectContextAddHitResult(const struct FGameplayEffectContextHandle& EffectContext, const struct FHitResult& HitResult, bool bReset);
	bool STATIC_DoesTargetDataContainActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index, class AActor* Actor);
	bool STATIC_DoesGameplayCueMeetTagRequirements(const struct FGameplayCueParameters& Parameters, struct FGameplayTagRequirements* SourceTagReqs, struct FGameplayTagRequirements* TargetTagReqs);
	struct FGameplayEffectSpecHandle STATIC_AssignSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FName& DataName, float Magnitude);
	struct FGameplayAbilityTargetDataHandle STATIC_AppendTargetDataHandle(const struct FGameplayAbilityTargetDataHandle& TargetHandle, const struct FGameplayAbilityTargetDataHandle& HandleToAdd);
	struct FGameplayEffectSpecHandle STATIC_AddLinkedGameplayEffectSpec(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayEffectSpecHandle& LinkedGameplayEffectSpec);
	struct FGameplayEffectSpecHandle STATIC_AddLinkedGameplayEffect(const struct FGameplayEffectSpecHandle& SpecHandle, class UClass* LinkedGameplayEffect);
	struct FGameplayEffectSpecHandle STATIC_AddGrantedTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);
	struct FGameplayEffectSpecHandle STATIC_AddGrantedTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);
	struct FGameplayEffectSpecHandle STATIC_AddAssetTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);
	struct FGameplayEffectSpecHandle STATIC_AddAssetTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);
	struct FGameplayAbilityTargetDataHandle STATIC_AbilityTargetDataFromLocations(const struct FGameplayAbilityTargetingLocationInfo& SourceLocation, const struct FGameplayAbilityTargetingLocationInfo& TargetLocation);
	struct FGameplayAbilityTargetDataHandle STATIC_AbilityTargetDataFromHitResult(const struct FHitResult& HitResult);
	struct FGameplayAbilityTargetDataHandle STATIC_AbilityTargetDataFromActorArray(TArray<class AActor*> ActorArray, bool OneTargetPerHandle);
	struct FGameplayAbilityTargetDataHandle STATIC_AbilityTargetDataFromActor(class AActor* Actor);
};


// Class GameplayAbilities.GameplayEffect
// 0x0638 (0x0660 - 0x0028)
class UGameplayEffect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	EGameplayEffectDurationType                        DurationPolicy;                                           // 0x0030(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FGameplayEffectModifierMagnitude            DurationMagnitude;                                        // 0x0038(0x01B0) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FScalableFloat                              Period;                                                   // 0x01E8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	bool                                               bExecutePeriodicEffectOnApplication;                      // 0x0210(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0211(0x0007) MISSED OFFSET
	TArray<struct FGameplayModifierInfo>               Modifiers;                                                // 0x0218(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FGameplayEffectExecutionDefinition>  Executions;                                               // 0x0228(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FScalableFloat                              ChanceToApplyToTarget;                                    // 0x0238(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<class UClass*>                              ApplicationRequirements;                                  // 0x0260(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UClass*>                              TargetEffectClasses;                                      // 0x0270(0x0010) (CPF_ZeroConstructor, CPF_Deprecated)
	TArray<struct FConditionalGameplayEffect>          ConditionalGameplayEffects;                               // 0x0280(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UClass*>                              OverflowEffects;                                          // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	bool                                               bDenyOverflowApplication;                                 // 0x02A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bClearStackOnOverflow;                                    // 0x02A1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x02A2(0x0006) MISSED OFFSET
	TArray<class UClass*>                              PrematureExpirationEffectClasses;                         // 0x02A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UClass*>                              RoutineExpirationEffectClasses;                           // 0x02B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	bool                                               bRequireModifierSuccessToTriggerCues;                     // 0x02C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bSuppressStackingCues;                                    // 0x02C9(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x02CA(0x0006) MISSED OFFSET
	TArray<struct FGameplayEffectCue>                  GameplayCues;                                             // 0x02D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UGameplayEffectUIData*                       UIData;                                                   // 0x02E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FInheritedTagContainer                      InheritableGameplayEffectTags;                            // 0x02E8(0x0060) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FInheritedTagContainer                      InheritableOwnedTagsContainer;                            // 0x0348(0x0060) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FGameplayTagRequirements                    OngoingTagRequirements;                                   // 0x03A8(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FGameplayTagRequirements                    ApplicationTagRequirements;                               // 0x03E8(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FInheritedTagContainer                      RemoveGameplayEffectsWithTags;                            // 0x0428(0x0060) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FGameplayTagRequirements                    GrantedApplicationImmunityTags;                           // 0x0488(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData05[0x8];                                       // 0x04C8(0x0008) MISSED OFFSET
	struct FGameplayEffectQuery                        GrantedApplicationImmunityQuery;                          // 0x04D0(0x0170) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData06[0x1];                                       // 0x0640(0x0001) MISSED OFFSET
	EGameplayEffectStackingType                        StackingType;                                             // 0x0641(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0642(0x0002) MISSED OFFSET
	int                                                StackLimitCount;                                          // 0x0644(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	EGameplayEffectStackingDurationPolicy              StackDurationRefreshPolicy;                               // 0x0648(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	EGameplayEffectStackingPeriodPolicy                StackPeriodResetPolicy;                                   // 0x0649(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	EGameplayEffectStackingExpirationPolicy            StackExpirationPolicy;                                    // 0x064A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x5];                                       // 0x064B(0x0005) MISSED OFFSET
	TArray<struct FGameplayAbilitySpecDef>             GrantedAbilities;                                         // 0x0650(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffect");
		return ptr;
	}

};


// Class GameplayAbilities.AbilitySystemReplicationProxyInterface
// 0x0000 (0x0028 - 0x0028)
class UAbilitySystemReplicationProxyInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemReplicationProxyInterface");
		return ptr;
	}

};


// Class GameplayAbilities.AbilitySystemDebugHUD
// 0x0000 (0x0470 - 0x0470)
class AAbilitySystemDebugHUD : public AHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemDebugHUD");
		return ptr;
	}

};


// Class GameplayAbilities.AbilitySystemInterface
// 0x0000 (0x0028 - 0x0028)
class UAbilitySystemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemInterface");
		return ptr;
	}

};


// Class GameplayAbilities.AbilitySystemTestPawn
// 0x0020 (0x0430 - 0x0410)
class AAbilitySystemTestPawn : public ADefaultPawn
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0410(0x0018) MISSED OFFSET
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // 0x0428(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemTestPawn");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// 0x0038 (0x00B8 - 0x0080)
class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask
{
public:
	struct FName                                       ForceName;                                                // 0x0080(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	ERootMotionFinishVelocityMode                      FinishVelocityMode;                                       // 0x0088(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	struct FVector                                     FinishSetVelocity;                                        // 0x008C(0x000C) (CPF_Net, CPF_IsPlainOldData)
	float                                              FinishClampVelocity;                                      // 0x0098(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	class UCharacterMovementComponent*                 MovementComponent;                                        // 0x00A0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
// 0x0030 (0x00E8 - 0x00B8)
class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                 // 0x00B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FVector                                     WorldDirection;                                           // 0x00C8(0x000C) (CPF_Net, CPF_IsPlainOldData)
	float                                              Strength;                                                 // 0x00D4(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                                 // 0x00D8(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsAdditive;                                              // 0x00DC(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET
	class UCurveFloat*                                 StrengthOverTime;                                         // 0x00E0(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce");
		return ptr;
	}


	class UAbilityTask_ApplyRootMotionConstantForce* STATIC_ApplyRootMotionConstantForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& WorldDirection, float Strength, float Duration, bool bIsAdditive, class UCurveFloat* StrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish);
};


// Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
// 0x0058 (0x0110 - 0x00B8)
class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                 // 0x00B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLanded;                                                 // 0x00C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FRotator                                    Rotation;                                                 // 0x00D8(0x000C) (CPF_Net, CPF_IsPlainOldData)
	float                                              Distance;                                                 // 0x00E4(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Height;                                                   // 0x00E8(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                                 // 0x00EC(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinimumLandedTriggerTime;                                 // 0x00F0(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFinishOnLanded;                                          // 0x00F4(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F5(0x0003) MISSED OFFSET
	class UCurveVector*                                PathOffsetCurve;                                          // 0x00F8(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 TimeMappingCurve;                                         // 0x0100(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0108(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce");
		return ptr;
	}


	void OnLandedCallback(const struct FHitResult& Hit);
	void Finish();
	class UAbilityTask_ApplyRootMotionJumpForce* STATIC_ApplyRootMotionJumpForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FRotator& Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve);
};


// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// 0x0070 (0x0128 - 0x00B8)
class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	struct FScriptMulticastDelegate                    OnFinished;                                               // 0x00B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FVector                                     StartLocation;                                            // 0x00C8(0x000C) (CPF_Net, CPF_IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x00D4(0x000C) (CPF_Net, CPF_IsPlainOldData)
	class AActor*                                      TargetActor;                                              // 0x00E0(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     TargetLocationOffset;                                     // 0x00E8(0x000C) (CPF_Net, CPF_IsPlainOldData)
	ERootMotionMoveToActorTargetOffsetType             OffsetAlignment;                                          // 0x00F4(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F5(0x0003) MISSED OFFSET
	float                                              Duration;                                                 // 0x00F8(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDisableDestinationReachedInterrupt;                      // 0x00FC(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSetNewMovementMode;                                      // 0x00FD(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          // 0x00FE(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRestrictSpeedToExpected;                                 // 0x00FF(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveVector*                                PathOffsetCurve;                                          // 0x0100(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 TimeMappingCurve;                                         // 0x0108(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 TargetLerpSpeedHorizontalCurve;                           // 0x0110(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 TargetLerpSpeedVerticalCurve;                             // 0x0118(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce");
		return ptr;
	}


	void OnRep_TargetLocation();
	class UAbilityTask_ApplyRootMotionMoveToActorForce* STATIC_ApplyRootMotionMoveToActorForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, class AActor* TargetActor, const struct FVector& TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt);
};


// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// 0x0050 (0x0108 - 0x00B8)
class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	struct FScriptMulticastDelegate                    OnTimedOut;                                               // 0x00B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTimedOutAndDestinationReached;                          // 0x00C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FVector                                     StartLocation;                                            // 0x00D8(0x000C) (CPF_Net, CPF_IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x00E4(0x000C) (CPF_Net, CPF_IsPlainOldData)
	float                                              Duration;                                                 // 0x00F0(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSetNewMovementMode;                                      // 0x00F4(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          // 0x00F5(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRestrictSpeedToExpected;                                 // 0x00F6(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00F7(0x0001) MISSED OFFSET
	class UCurveVector*                                PathOffsetCurve;                                          // 0x00F8(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce");
		return ptr;
	}


	class UAbilityTask_ApplyRootMotionMoveToForce* STATIC_ApplyRootMotionMoveToForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& TargetLocation, float Duration, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish);
};


// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// 0x0058 (0x0110 - 0x00B8)
class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                 // 0x00B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FVector                                     Location;                                                 // 0x00C8(0x000C) (CPF_Net, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	class AActor*                                      LocationActor;                                            // 0x00D8(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Strength;                                                 // 0x00E0(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                                 // 0x00E4(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x00E8(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsPush;                                                  // 0x00EC(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsAdditive;                                              // 0x00ED(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bNoZForce;                                                // 0x00EE(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00EF(0x0001) MISSED OFFSET
	class UCurveFloat*                                 StrengthDistanceFalloff;                                  // 0x00F0(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 StrengthOverTime;                                         // 0x00F8(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseFixedWorldDirection;                                  // 0x0100(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
	struct FRotator                                    FixedWorldDirection;                                      // 0x0104(0x000C) (CPF_Net, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce");
		return ptr;
	}


	class UAbilityTask_ApplyRootMotionRadialForce* STATIC_ApplyRootMotionRadialForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& Location, class AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, class UCurveFloat* StrengthDistanceFalloff, class UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, const struct FRotator& FixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish);
};


// Class GameplayAbilities.AbilityTask_MoveToLocation
// 0x0048 (0x00C8 - 0x0080)
class UAbilityTask_MoveToLocation : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnTargetLocationReached;                                  // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0090(0x0004) MISSED OFFSET
	struct FVector                                     StartLocation;                                            // 0x0094(0x000C) (CPF_Net, CPF_IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x00A0(0x000C) (CPF_Net, CPF_IsPlainOldData)
	float                                              DurationOfMovement;                                       // 0x00AC(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	class UCurveFloat*                                 LerpCurve;                                                // 0x00B8(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveVector*                                LerpCurveVector;                                          // 0x00C0(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_MoveToLocation");
		return ptr;
	}


	class UAbilityTask_MoveToLocation* STATIC_MoveToLocation(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve);
};


// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// 0x0018 (0x0098 - 0x0080)
class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnSync;                                                   // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_NetworkSyncPoint");
		return ptr;
	}


	class UAbilityTask_NetworkSyncPoint* STATIC_WaitNetSync(class UGameplayAbility* OwningAbility, EAbilityTaskNetSyncType SyncType);
	void OnSignalCallback();
};


// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// 0x00F0 (0x0170 - 0x0080)
class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnCompleted;                                              // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBlendOut;                                               // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInterrupted;                                            // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCancelled;                                              // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0xB0];                                      // 0x00C0(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_PlayMontageAndWait");
		return ptr;
	}


	void OnMontageInterrupted();
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	class UAbilityTask_PlayMontageAndWait* STATIC_CreatePlayMontageAndWaitProxy(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, const struct FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale);
};


// Class GameplayAbilities.AbilityTask_Repeat
// 0x0038 (0x00B8 - 0x0080)
class UAbilityTask_Repeat : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnPerformAction;                                          // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFinished;                                               // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00A0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_Repeat");
		return ptr;
	}


	class UAbilityTask_Repeat* STATIC_RepeatAction(class UGameplayAbility* OwningAbility, float TimeBetweenActions, int TotalActionCount);
};


// Class GameplayAbilities.AbilityTask_SpawnActor
// 0x0040 (0x00C0 - 0x0080)
class UAbilityTask_SpawnActor : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    Success;                                                  // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    DidNotSpawn;                                              // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x00A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_SpawnActor");
		return ptr;
	}


	class UAbilityTask_SpawnActor* STATIC_SpawnActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class AActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class, class AActor** SpawnedActor);
};


// Class GameplayAbilities.AbilityTask_StartAbilityState
// 0x0038 (0x00B8 - 0x0080)
class UAbilityTask_StartAbilityState : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnStateEnded;                                             // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateInterrupted;                                       // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00A0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_StartAbilityState");
		return ptr;
	}


	class UAbilityTask_StartAbilityState* STATIC_StartAbilityState(class UGameplayAbility* OwningAbility, const struct FName& StateName, bool bEndCurrentState);
};


// Class GameplayAbilities.GameplayAbilityWorldReticle
// 0x0020 (0x03A8 - 0x0388)
class AGameplayAbilityWorldReticle : public AActor
{
public:
	struct FWorldReticleParameters                     Parameters;                                               // 0x0388(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate)
	bool                                               bFaceOwnerFlat;                                           // 0x0394(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSnapToTargetedActor;                                     // 0x0395(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsTargetValid;                                           // 0x0396(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsTargetAnActor;                                         // 0x0397(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APlayerController*                           MasterPC;                                                 // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      TargetingActor;                                           // 0x03A0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityWorldReticle");
		return ptr;
	}


	void SetReticleMaterialParamVector(const struct FName& ParamName, const struct FVector& Value);
	void SetReticleMaterialParamFloat(const struct FName& ParamName, float Value);
	void OnValidTargetChanged(bool bNewValue);
	void OnTargetingAnActor(bool bNewValue);
	void OnParametersInitialized();
	void FaceTowardSource(bool bFaceIn2D);
};


// Class GameplayAbilities.GameplayAbilityTargetActor
// 0x01C8 (0x0550 - 0x0388)
class AGameplayAbilityTargetActor : public AActor
{
public:
	bool                                               ShouldProduceTargetDataOnServer;                          // 0x0388(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	struct FGameplayAbilityTargetingLocationInfo       StartLocation;                                            // 0x0390(0x0070) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net)
	unsigned char                                      UnknownData01[0xE0];                                      // 0x0400(0x00E0) MISSED OFFSET
	class APlayerController*                           MasterPC;                                                 // 0x04E0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UGameplayAbility*                            OwningAbility;                                            // 0x04E8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDestroyOnConfirmation;                                   // 0x04F0(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x04F1(0x0007) MISSED OFFSET
	class AActor*                                      SourceActor;                                              // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWorldReticleParameters                     ReticleParams;                                            // 0x0500(0x000C) (CPF_BlueprintVisible)
	unsigned char                                      UnknownData03[0x4];                                       // 0x050C(0x0004) MISSED OFFSET
	class UClass*                                      ReticleClass;                                             // 0x0510(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTargetDataFilterHandle             Filter;                                                   // 0x0518(0x0010) (CPF_BlueprintVisible, CPF_Net)
	bool                                               bDebug;                                                   // 0x0528(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x17];                                      // 0x0529(0x0017) MISSED OFFSET
	class UAbilitySystemComponent*                     GenericDelegateBoundASC;                                  // 0x0540(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0548(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor");
		return ptr;
	}


	void ConfirmTargeting();
	void CancelTargeting();
};


// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// 0x0028 (0x00A8 - 0x0080)
class UAbilityTask_VisualizeTargeting : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    TimeElapsed;                                              // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0090(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_VisualizeTargeting");
		return ptr;
	}


	class UAbilityTask_VisualizeTargeting* STATIC_VisualizeTargetingUsingActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* TargetActor, const struct FName& TaskInstanceName, float Duration);
	class UAbilityTask_VisualizeTargeting* STATIC_VisualizeTargeting(class UGameplayAbility* OwningAbility, class UClass* Class, const struct FName& TaskInstanceName, float Duration);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor);
};


// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// 0x0070 (0x00F0 - 0x0080)
class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnActivate;                                               // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0090(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAbilityActivate");
		return ptr;
	}


	class UAbilityTask_WaitAbilityActivate* STATIC_WaitForAbilityActivateWithTagRequirements(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce);
	class UAbilityTask_WaitAbilityActivate* STATIC_WaitForAbilityActivate(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce);
	void OnAbilityActivate(class UGameplayAbility* ActivatedAbility);
};


// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// 0x0030 (0x00B0 - 0x0080)
class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnCommit;                                                 // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0090(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAbilityCommit");
		return ptr;
	}


	class UAbilityTask_WaitAbilityCommit* STATIC_WaitForAbilityCommit(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTage, bool TriggerOnce);
	void OnAbilityCommit(class UGameplayAbility* ActivatedAbility);
};


// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// 0x0058 (0x00D8 - 0x0080)
class UAbilityTask_WaitAttributeChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                 // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0090(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAttributeChange");
		return ptr;
	}


	class UAbilityTask_WaitAttributeChange* STATIC_WaitForAttributeChangeWithComparison(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& InAttribute, const struct FGameplayTag& InWithTag, const struct FGameplayTag& InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType, float InComparisonValue, bool TriggerOnce);
	class UAbilityTask_WaitAttributeChange* STATIC_WaitForAttributeChange(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, const struct FGameplayTag& WithSrcTag, const struct FGameplayTag& WithoutSrcTag, bool TriggerOnce);
};


// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// 0x0088 (0x0108 - 0x0080)
class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                 // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0090(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold");
		return ptr;
	}


	class UAbilityTask_WaitAttributeChangeRatioThreshold* STATIC_WaitForAttributeChangeRatioThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& AttributeNumerator, const struct FGameplayAttribute& AttributeDenominator, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce);
};


// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// 0x0050 (0x00D0 - 0x0080)
class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                 // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0090(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold");
		return ptr;
	}


	class UAbilityTask_WaitAttributeChangeThreshold* STATIC_WaitForAttributeChangeThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce);
};


// Class GameplayAbilities.AbilityTask_WaitCancel
// 0x0018 (0x0098 - 0x0080)
class UAbilityTask_WaitCancel : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnCancel;                                                 // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitCancel");
		return ptr;
	}


	class UAbilityTask_WaitCancel* STATIC_WaitCancel(class UGameplayAbility* OwningAbility);
	void OnLocalCancelCallback();
	void OnCancelCallback();
};


// Class GameplayAbilities.AbilityTask_WaitConfirm
// 0x0020 (0x00A0 - 0x0080)
class UAbilityTask_WaitConfirm : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnConfirm;                                                // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitConfirm");
		return ptr;
	}


	class UAbilityTask_WaitConfirm* STATIC_WaitConfirm(class UGameplayAbility* OwningAbility);
	void OnConfirmCallback(class UGameplayAbility* InAbility);
};


// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// 0x0028 (0x00A8 - 0x0080)
class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnConfirm;                                                // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCancel;                                                 // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitConfirmCancel");
		return ptr;
	}


	class UAbilityTask_WaitConfirmCancel* STATIC_WaitConfirmCancel(class UGameplayAbility* OwningAbility);
	void OnLocalConfirmCallback();
	void OnLocalCancelCallback();
	void OnConfirmCallback();
	void OnCancelCallback();
};


// Class GameplayAbilities.AbilityTask_WaitDelay
// 0x0018 (0x0098 - 0x0080)
class UAbilityTask_WaitDelay : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                 // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitDelay");
		return ptr;
	}


	class UAbilityTask_WaitDelay* STATIC_WaitDelay(class UGameplayAbility* OwningAbility, float Time);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// 0x00A8 (0x0128 - 0x0080)
class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0080(0x0098) MISSED OFFSET
	class UAbilitySystemComponent*                     ExternalOwner;                                            // 0x0118(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied");
		return ptr;
	}


	void OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, const struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// 0x0020 (0x0148 - 0x0128)
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	struct FScriptMulticastDelegate                    OnApplied;                                                // 0x0128(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0138(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self");
		return ptr;
	}


	class UAbilityTask_WaitGameplayEffectApplied_Self* STATIC_WaitGameplayEffectAppliedToSelf(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// 0x0020 (0x0148 - 0x0128)
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	struct FScriptMulticastDelegate                    OnApplied;                                                // 0x0128(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0138(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target");
		return ptr;
	}


	class UAbilityTask_WaitGameplayEffectApplied_Target* STATIC_WaitGameplayEffectAppliedToTarget(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& TargetFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffects);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// 0x00A8 (0x0128 - 0x0080)
class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    bLocked;                                                  // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0090(0x0088) MISSED OFFSET
	class UAbilitySystemComponent*                     ExternalOwner;                                            // 0x0118(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity");
		return ptr;
	}


	class UAbilityTask_WaitGameplayEffectBlockedImmunity* STATIC_WaitGameplayEffectBlockedByImmunity(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// 0x0038 (0x00B8 - 0x0080)
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnRemoved;                                                // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    InvalidHandle;                                            // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00A0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved");
		return ptr;
	}


	class UAbilityTask_WaitGameplayEffectRemoved* STATIC_WaitForGameplayEffectRemoved(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle);
	void OnGameplayEffectRemoved();
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// 0x0038 (0x00B8 - 0x0080)
class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                 // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    InvalidHandle;                                            // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00A0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange");
		return ptr;
	}


	class UAbilityTask_WaitGameplayEffectStackChange* STATIC_WaitForGameplayEffectStackChange(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle);
	void OnGameplayEffectStackChange(const struct FActiveGameplayEffectHandle& Handle, int NewCount, int OldCount);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// 0x0030 (0x00B0 - 0x0080)
class UAbilityTask_WaitGameplayEvent : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    EventReceived;                                            // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	class UAbilitySystemComponent*                     OptionalExternalTarget;                                   // 0x0098(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEvent");
		return ptr;
	}


	class UAbilityTask_WaitGameplayEvent* STATIC_WaitGameplayEvent(class UGameplayAbility* OwningAbility, const struct FGameplayTag& EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// 0x0028 (0x00A8 - 0x0080)
class UAbilityTask_WaitGameplayTag : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
	class UAbilitySystemComponent*                     OptionalExternalTarget;                                   // 0x0090(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTag");
		return ptr;
	}


	void GameplayTagCallback(const struct FGameplayTag& Tag, int NewCount);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// 0x0010 (0x00B8 - 0x00A8)
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{
public:
	struct FScriptMulticastDelegate                    Added;                                                    // 0x00A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded");
		return ptr;
	}


	class UAbilityTask_WaitGameplayTagAdded* STATIC_WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// 0x0010 (0x00B8 - 0x00A8)
class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{
public:
	struct FScriptMulticastDelegate                    Removed;                                                  // 0x00A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved");
		return ptr;
	}


	class UAbilityTask_WaitGameplayTagRemoved* STATIC_WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
};


// Class GameplayAbilities.AbilityTask_WaitInputPress
// 0x0020 (0x00A0 - 0x0080)
class UAbilityTask_WaitInputPress : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnPress;                                                  // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitInputPress");
		return ptr;
	}


	class UAbilityTask_WaitInputPress* STATIC_WaitInputPress(class UGameplayAbility* OwningAbility, bool bTestAlreadyPressed);
	void OnPressCallback();
};


// Class GameplayAbilities.AbilityTask_WaitInputRelease
// 0x0020 (0x00A0 - 0x0080)
class UAbilityTask_WaitInputRelease : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnRelease;                                                // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitInputRelease");
		return ptr;
	}


	class UAbilityTask_WaitInputRelease* STATIC_WaitInputRelease(class UGameplayAbility* OwningAbility, bool bTestAlreadyReleased);
	void OnReleaseCallback();
};


// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// 0x0020 (0x00A0 - 0x0080)
class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                 // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitMovementModeChange");
		return ptr;
	}


	void OnMovementModeChange(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
	class UAbilityTask_WaitMovementModeChange* STATIC_CreateWaitMovementModeChange(class UGameplayAbility* OwningAbility, TEnumAsByte<EMovementMode> NewMode);
};


// Class GameplayAbilities.AbilityTask_WaitOverlap
// 0x0010 (0x0090 - 0x0080)
class UAbilityTask_WaitOverlap : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnOverlap;                                                // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitOverlap");
		return ptr;
	}


	class UAbilityTask_WaitOverlap* STATIC_WaitForOverlap(class UGameplayAbility* OwningAbility);
	void OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};


// Class GameplayAbilities.AbilityTask_WaitTargetData
// 0x0040 (0x00C0 - 0x0080)
class UAbilityTask_WaitTargetData : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    ValidData;                                                // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    Cancelled;                                                // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET
	class AGameplayAbilityTargetActor*                 TargetActor;                                              // 0x00A8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitTargetData");
		return ptr;
	}


	class UAbilityTask_WaitTargetData* STATIC_WaitTargetDataUsingActor(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class AGameplayAbilityTargetActor* TargetActor);
	class UAbilityTask_WaitTargetData* STATIC_WaitTargetData(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class UClass* Class);
	void OnTargetDataReplicatedCancelledCallback();
	void OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag);
	void OnTargetDataReadyCallback(const struct FGameplayAbilityTargetDataHandle& Data);
	void OnTargetDataCancelledCallback(const struct FGameplayAbilityTargetDataHandle& Data);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor);
};


// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// 0x0028 (0x00A8 - 0x0080)
class UAbilityTask_WaitVelocityChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnVelocityChage;                                          // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UMovementComponent*                          CachedMovementComponent;                                  // 0x0090(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitVelocityChange");
		return ptr;
	}


	class UAbilityTask_WaitVelocityChange* STATIC_CreateWaitVelocityChange(class UGameplayAbility* OwningAbility, const struct FVector& Direction, float MinimumMagnitude);
};


// Class GameplayAbilities.AbilitySystemTestAttributeSet
// 0x0040 (0x0070 - 0x0030)
class UAbilitySystemTestAttributeSet : public UAttributeSet
{
public:
	float                                              MaxHealth;                                                // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Health;                                                   // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Mana;                                                     // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxMana;                                                  // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Damage;                                                   // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpellDamage;                                              // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PhysicalDamage;                                           // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CritChance;                                               // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CritMultiplier;                                           // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ArmorDamageReduction;                                     // 0x0054(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DodgeChance;                                              // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LifeSteal;                                                // 0x005C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Strength;                                                 // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StackingAttribute1;                                       // 0x0064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StackingAttribute2;                                       // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NoStackAttribute;                                         // 0x006C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemTestAttributeSet");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbility_CharacterJump
// 0x0000 (0x0590 - 0x0590)
class UGameplayAbility_CharacterJump : public UGameplayAbility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbility_CharacterJump");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbility_Montage
// 0x0030 (0x05C0 - 0x0590)
class UGameplayAbility_Montage : public UGameplayAbility
{
public:
	float                                              PlayRate;                                                 // 0x0590(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0594(0x0004) MISSED OFFSET
	struct FName                                       SectionName;                                              // 0x0598(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class UClass*>                              GameplayEffectClassesWhileAnimating;                      // 0x05A0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UGameplayEffect*>                     GameplayEffectsWhileAnimating;                            // 0x05B0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbility_Montage");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityBlueprint
// 0x0000 (0x01A0 - 0x01A0)
class UGameplayAbilityBlueprint : public UBlueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityBlueprint");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilitySet
// 0x0010 (0x0038 - 0x0028)
class UGameplayAbilitySet : public UDataAsset
{
public:
	TArray<struct FGameplayAbilityBindInfo>            Abilities;                                                // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilitySet");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// 0x0000 (0x0550 - 0x0550)
class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_Radius");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// 0x0020 (0x0570 - 0x0550)
class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{
public:
	struct FCollisionProfileName                       TraceProfile;                                             // 0x0550(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Config)
	bool                                               bTraceAffectsAimPitch;                                    // 0x0558(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0559(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_Trace");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// 0x0020 (0x0590 - 0x0570)
class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0570(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// 0x0010 (0x05A0 - 0x0590)
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{
public:
	class UMaterialInterface*                          PlacedActorMaterial;                                      // 0x0590(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0598(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// 0x0000 (0x0570 - 0x0570)
class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// 0x0018 (0x03C0 - 0x03A8)
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{
public:
	class UCapsuleComponent*                           CollisionComponent;                                       // 0x03A8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UActorComponent*>                     VisualizationComponents;                                  // 0x03B0(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueTranslator
// 0x0000 (0x0028 - 0x0028)
class UGameplayCueTranslator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueTranslator");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueTranslator_Test
// 0x0000 (0x0028 - 0x0028)
class UGameplayCueTranslator_Test : public UGameplayCueTranslator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueTranslator_Test");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueNotify_HitImpact
// 0x0010 (0x0050 - 0x0040)
class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{
public:
	class USoundBase*                                  Sound;                                                    // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystem*                             ParticleSystem;                                           // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_HitImpact");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueSet
// 0x0060 (0x0088 - 0x0028)
class UGameplayCueSet : public UDataAsset
{
public:
	TArray<struct FGameplayCueNotifyData>              GameplayCueData;                                          // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueSet");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectTemplate
// 0x0000 (0x0660 - 0x0660)
class UGameplayEffectTemplate : public UGameplayEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectTemplate");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectCustomApplicationRequirement
// 0x0000 (0x0028 - 0x0028)
class UGameplayEffectCustomApplicationRequirement : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectCustomApplicationRequirement");
		return ptr;
	}


	bool CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, const struct FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC);
};


// Class GameplayAbilities.GameplayEffectExtension
// 0x0020 (0x0048 - 0x0028)
class UGameplayEffectExtension : public UObject
{
public:
	TArray<struct FGameplayAttribute>                  RelevantSourceAttributes;                                 // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FGameplayAttribute>                  RelevantTargetAttributes;                                 // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectExtension");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectExtension_LifestealTest
// 0x0008 (0x0050 - 0x0048)
class UGameplayEffectExtension_LifestealTest : public UGameplayEffectExtension
{
public:
	class UGameplayEffect*                             HealthRestoreGameplayEffect;                              // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectExtension_LifestealTest");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectExtension_ShieldTest
// 0x0008 (0x0050 - 0x0048)
class UGameplayEffectExtension_ShieldTest : public UGameplayEffectExtension
{
public:
	class UGameplayEffect*                             ShieldRemoveGameplayEffect;                               // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectExtension_ShieldTest");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectUIData_TextOnly
// 0x0018 (0x0040 - 0x0028)
class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
{
public:
	struct FText                                       Description;                                              // 0x0028(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectUIData_TextOnly");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayTagReponseTable
// 0x01E8 (0x0210 - 0x0028)
class UGameplayTagReponseTable : public UDataAsset
{
public:
	TArray<struct FGameplayTagResponseTableEntry>      Entries;                                                  // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D8];                                     // 0x0038(0x01D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayTagReponseTable");
		return ptr;
	}


	void TagResponseEvent(const struct FGameplayTag& Tag, int NewCount, class UAbilitySystemComponent* ASC, int Idx);
};


// Class GameplayAbilities.TickableAttributeSetInterface
// 0x0000 (0x0028 - 0x0028)
class UTickableAttributeSetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.TickableAttributeSetInterface");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
