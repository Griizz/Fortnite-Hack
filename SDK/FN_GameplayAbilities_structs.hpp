#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
enum class EGameplayEffectGrantedAbilityRemovePolicy
{
	EGameplayEffectGrantedAbilityRemovePolicy__CancelAbilityImmediately = 0,
	EGameplayEffectGrantedAbilityRemovePolicy__RemoveAbilityOnEnd = 1,
	EGameplayEffectGrantedAbilityRemovePolicy__DoNothing = 2,
	EGameplayEffectGrantedAbilityRemovePolicy__EGameplayEffectGrantedAbilityRemovePolicy_MAX = 3
};


// Enum GameplayAbilities.EGameplayEffectAttributeCaptureSource
enum class EGameplayEffectAttributeCaptureSource
{
	EGameplayEffectAttributeCaptureSource__Source = 0,
	EGameplayEffectAttributeCaptureSource__Target = 1,
	EGameplayEffectAttributeCaptureSource__EGameplayEffectAttributeCaptureSource_MAX = 2
};


// Enum GameplayAbilities.EGameplayAbilityActivationMode
enum class EGameplayAbilityActivationMode
{
	EGameplayAbilityActivationMode__Authority = 0,
	EGameplayAbilityActivationMode__NonAuthority = 1,
	EGameplayAbilityActivationMode__Predicting = 2,
	EGameplayAbilityActivationMode__Confirmed = 3,
	EGameplayAbilityActivationMode__Rejected = 4,
	EGameplayAbilityActivationMode__EGameplayAbilityActivationMode_MAX = 5
};


// Enum GameplayAbilities.EAbilityGenericReplicatedEvent
enum class EAbilityGenericReplicatedEvent
{
	EAbilityGenericReplicatedEvent__GenericConfirm = 0,
	EAbilityGenericReplicatedEvent__GenericCancel = 1,
	EAbilityGenericReplicatedEvent__InputPressed = 2,
	EAbilityGenericReplicatedEvent__InputReleased = 3,
	EAbilityGenericReplicatedEvent__GenericSignalFromClient = 4,
	EAbilityGenericReplicatedEvent__GenericSignalFromServer = 5,
	EAbilityGenericReplicatedEvent__GameCustom1 = 6,
	EAbilityGenericReplicatedEvent__GameCustom2 = 7,
	EAbilityGenericReplicatedEvent__GameCustom3 = 8,
	EAbilityGenericReplicatedEvent__GameCustom4 = 9,
	EAbilityGenericReplicatedEvent__GameCustom5 = 10,
	EAbilityGenericReplicatedEvent__GameCustom6 = 11,
	EAbilityGenericReplicatedEvent__MAX = 12,
	EAbilityGenericReplicatedEvent__EAbilityGenericReplicatedEvent_MAX = 13
};


// Enum GameplayAbilities.EGameplayCueEvent
enum class EGameplayCueEvent
{
	EGameplayCueEvent__OnActive    = 0,
	EGameplayCueEvent__WhileActive = 1,
	EGameplayCueEvent__Executed    = 2,
	EGameplayCueEvent__Removed     = 3,
	EGameplayCueEvent__EGameplayCueEvent_MAX = 4
};


// Enum GameplayAbilities.EGameplayModOp
enum class EGameplayModOp
{
	EGameplayModOp__Additive       = 0,
	EGameplayModOp__Multiplicitive = 1,
	EGameplayModOp__Division       = 2,
	EGameplayModOp__Override       = 3,
	EGameplayModOp__Max            = 4,
	EGameplayModOp__EGameplayModOp_MAX = 5
};


// Enum GameplayAbilities.EGameplayTagEventType
enum class EGameplayTagEventType
{
	EGameplayTagEventType__NewOrRemoved = 0,
	EGameplayTagEventType__AnyCountChange = 1,
	EGameplayTagEventType__EGameplayTagEventType_MAX = 2
};


// Enum GameplayAbilities.EGameplayEffectStackingType
enum class EGameplayEffectStackingType
{
	EGameplayEffectStackingType__None = 0,
	EGameplayEffectStackingType__AggregateBySource = 1,
	EGameplayEffectStackingType__AggregateByTarget = 2,
	EGameplayEffectStackingType__EGameplayEffectStackingType_MAX = 3
};


// Enum GameplayAbilities.EGameplayModEvaluationChannel
enum class EGameplayModEvaluationChannel
{
	EGameplayModEvaluationChannel__Channel0 = 0,
	EGameplayModEvaluationChannel__Channel1 = 1,
	EGameplayModEvaluationChannel__Channel2 = 2,
	EGameplayModEvaluationChannel__Channel3 = 3,
	EGameplayModEvaluationChannel__Channel4 = 4,
	EGameplayModEvaluationChannel__Channel5 = 5,
	EGameplayModEvaluationChannel__Channel6 = 6,
	EGameplayModEvaluationChannel__Channel7 = 7,
	EGameplayModEvaluationChannel__Channel8 = 8,
	EGameplayModEvaluationChannel__Channel9 = 9,
	EGameplayModEvaluationChannel__Channel_MAX = 10,
	EGameplayModEvaluationChannel__EGameplayModEvaluationChannel_MAX = 11
};


// Enum GameplayAbilities.EGameplayAbilityTargetingLocationType
enum class EGameplayAbilityTargetingLocationType
{
	EGameplayAbilityTargetingLocationType__LiteralTransform = 0,
	EGameplayAbilityTargetingLocationType__ActorTransform = 1,
	EGameplayAbilityTargetingLocationType__SocketTransform = 2,
	EGameplayAbilityTargetingLocationType__EGameplayAbilityTargetingLocationType_MAX = 3
};


// Enum GameplayAbilities.EGameplayTargetingConfirmation
enum class EGameplayTargetingConfirmation
{
	EGameplayTargetingConfirmation__Instant = 0,
	EGameplayTargetingConfirmation__UserConfirmed = 1,
	EGameplayTargetingConfirmation__Custom = 2,
	EGameplayTargetingConfirmation__CustomMulti = 3,
	EGameplayTargetingConfirmation__EGameplayTargetingConfirmation_MAX = 4
};


// Enum GameplayAbilities.EGameplayAbilityTriggerSource
enum class EGameplayAbilityTriggerSource
{
	EGameplayAbilityTriggerSource__GameplayEvent = 0,
	EGameplayAbilityTriggerSource__OwnedTagAdded = 1,
	EGameplayAbilityTriggerSource__OwnedTagPresent = 2,
	EGameplayAbilityTriggerSource__EGameplayAbilityTriggerSource_MAX = 3
};


// Enum GameplayAbilities.EGameplayAbilityReplicationPolicy
enum class EGameplayAbilityReplicationPolicy
{
	EGameplayAbilityReplicationPolicy__ReplicateNo = 0,
	EGameplayAbilityReplicationPolicy__ReplicateYes = 1,
	EGameplayAbilityReplicationPolicy__EGameplayAbilityReplicationPolicy_MAX = 2
};


// Enum GameplayAbilities.EGameplayAbilityNetExecutionPolicy
enum class EGameplayAbilityNetExecutionPolicy
{
	EGameplayAbilityNetExecutionPolicy__LocalPredicted = 0,
	EGameplayAbilityNetExecutionPolicy__LocalOnly = 1,
	EGameplayAbilityNetExecutionPolicy__ServerInitiated = 2,
	EGameplayAbilityNetExecutionPolicy__ServerOnly = 3,
	EGameplayAbilityNetExecutionPolicy__EGameplayAbilityNetExecutionPolicy_MAX = 4
};


// Enum GameplayAbilities.EGameplayAbilityInstancingPolicy
enum class EGameplayAbilityInstancingPolicy
{
	EGameplayAbilityInstancingPolicy__NonInstanced = 0,
	EGameplayAbilityInstancingPolicy__InstancedPerActor = 1,
	EGameplayAbilityInstancingPolicy__InstancedPerExecution = 2,
	EGameplayAbilityInstancingPolicy__EGameplayAbilityInstancingPolicy_MAX = 3
};


// Enum GameplayAbilities.ETargetDataFilterSelf
enum class ETargetDataFilterSelf
{
	ETargetDataFilterSelf__TDFS_Any = 0,
	ETargetDataFilterSelf__TDFS_NoSelf = 1,
	ETargetDataFilterSelf__TDFS_NoOthers = 2,
	ETargetDataFilterSelf__TDFS_MAX = 3
};


// Enum GameplayAbilities.EGameplayEffectStackingExpirationPolicy
enum class EGameplayEffectStackingExpirationPolicy
{
	EGameplayEffectStackingExpirationPolicy__ClearEntireStack = 0,
	EGameplayEffectStackingExpirationPolicy__RemoveSingleStackAndRefreshDuration = 1,
	EGameplayEffectStackingExpirationPolicy__RefreshDuration = 2,
	EGameplayEffectStackingExpirationPolicy__EGameplayEffectStackingExpirationPolicy_MAX = 3
};


// Enum GameplayAbilities.EGameplayEffectStackingPeriodPolicy
enum class EGameplayEffectStackingPeriodPolicy
{
	EGameplayEffectStackingPeriodPolicy__ResetOnSuccessfulApplication = 0,
	EGameplayEffectStackingPeriodPolicy__NeverReset = 1,
	EGameplayEffectStackingPeriodPolicy__EGameplayEffectStackingPeriodPolicy_MAX = 2
};


// Enum GameplayAbilities.EGameplayEffectStackingDurationPolicy
enum class EGameplayEffectStackingDurationPolicy
{
	EGameplayEffectStackingDurationPolicy__RefreshOnSuccessfulApplication = 0,
	EGameplayEffectStackingDurationPolicy__NeverRefresh = 1,
	EGameplayEffectStackingDurationPolicy__EGameplayEffectStackingDurationPolicy_MAX = 2
};


// Enum GameplayAbilities.EGameplayEffectDurationType
enum class EGameplayEffectDurationType
{
	EGameplayEffectDurationType__Instant = 0,
	EGameplayEffectDurationType__Infinite = 1,
	EGameplayEffectDurationType__HasDuration = 2,
	EGameplayEffectDurationType__EGameplayEffectDurationType_MAX = 3
};


// Enum GameplayAbilities.EAttributeBasedFloatCalculationType
enum class EAttributeBasedFloatCalculationType
{
	EAttributeBasedFloatCalculationType__AttributeMagnitude = 0,
	EAttributeBasedFloatCalculationType__AttributeBaseValue = 1,
	EAttributeBasedFloatCalculationType__AttributeBonusMagnitude = 2,
	EAttributeBasedFloatCalculationType__AttributeMagnitudeEvaluatedUpToChannel = 3,
	EAttributeBasedFloatCalculationType__EAttributeBasedFloatCalculationType_MAX = 4
};


// Enum GameplayAbilities.EGameplayEffectMagnitudeCalculation
enum class EGameplayEffectMagnitudeCalculation
{
	EGameplayEffectMagnitudeCalculation__ScalableFloat = 0,
	EGameplayEffectMagnitudeCalculation__AttributeBased = 1,
	EGameplayEffectMagnitudeCalculation__CustomCalculationClass = 2,
	EGameplayEffectMagnitudeCalculation__SetByCaller = 3,
	EGameplayEffectMagnitudeCalculation__EGameplayEffectMagnitudeCalculation_MAX = 4
};


// Enum GameplayAbilities.EReplicationMode
enum class EReplicationMode
{
	EReplicationMode__Minimal      = 0,
	EReplicationMode__Mixed        = 1,
	EReplicationMode__Full         = 2,
	EReplicationMode__EReplicationMode_MAX = 3
};


// Enum GameplayAbilities.EAbilityTaskWaitState
enum class EAbilityTaskWaitState
{
	EAbilityTaskWaitState__WaitingOnGame = 0,
	EAbilityTaskWaitState__WaitingOnUser = 1,
	EAbilityTaskWaitState__WaitingOnAvatar = 2,
	EAbilityTaskWaitState__EAbilityTaskWaitState_MAX = 3
};


// Enum GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
enum class ERootMotionMoveToActorTargetOffsetType
{
	ERootMotionMoveToActorTargetOffsetType__AlignFromTargetToSource = 0,
	ERootMotionMoveToActorTargetOffsetType__AlignToTargetForward = 1,
	ERootMotionMoveToActorTargetOffsetType__AlignToWorldSpace = 2,
	ERootMotionMoveToActorTargetOffsetType__ERootMotionMoveToActorTargetOffsetType_MAX = 3
};


// Enum GameplayAbilities.EAbilityTaskNetSyncType
enum class EAbilityTaskNetSyncType
{
	EAbilityTaskNetSyncType__BothWait = 0,
	EAbilityTaskNetSyncType__OnlyServerWait = 1,
	EAbilityTaskNetSyncType__OnlyClientWait = 2,
	EAbilityTaskNetSyncType__EAbilityTaskNetSyncType_MAX = 3
};


// Enum GameplayAbilities.ETargetAbilitySelfSelection
enum class ETargetAbilitySelfSelection
{
	ETargetAbilitySelfSelection__TASS_Permit = 0,
	ETargetAbilitySelfSelection__TASS_Forbid = 1,
	ETargetAbilitySelfSelection__TASS_Require = 2,
	ETargetAbilitySelfSelection__TASS_MAX = 3
};


// Enum GameplayAbilities.EWaitAttributeChangeComparison
enum class EWaitAttributeChangeComparison
{
	EWaitAttributeChangeComparison__None = 0,
	EWaitAttributeChangeComparison__GreaterThan = 1,
	EWaitAttributeChangeComparison__LessThan = 2,
	EWaitAttributeChangeComparison__GreaterThanOrEqualTo = 3,
	EWaitAttributeChangeComparison__LessThanOrEqualTo = 4,
	EWaitAttributeChangeComparison__NotEqualTo = 5,
	EWaitAttributeChangeComparison__ExactlyEqualTo = 6,
	EWaitAttributeChangeComparison__MAX = 7,
	EWaitAttributeChangeComparison__EWaitAttributeChangeComparison_MAX = 8
};


// Enum GameplayAbilities.EGameplayAbilityInputBinds
enum class EGameplayAbilityInputBinds
{
	EGameplayAbilityInputBinds__Ability1 = 0,
	EGameplayAbilityInputBinds__Ability2 = 1,
	EGameplayAbilityInputBinds__Ability3 = 2,
	EGameplayAbilityInputBinds__Ability4 = 3,
	EGameplayAbilityInputBinds__Ability5 = 4,
	EGameplayAbilityInputBinds__Ability6 = 5,
	EGameplayAbilityInputBinds__Ability7 = 6,
	EGameplayAbilityInputBinds__Ability8 = 7,
	EGameplayAbilityInputBinds__Ability9 = 8,
	EGameplayAbilityInputBinds__EGameplayAbilityInputBinds_MAX = 9
};


// Enum GameplayAbilities.EGameplayCuePayloadType
enum class EGameplayCuePayloadType
{
	EGameplayCuePayloadType__EffectContext = 0,
	EGameplayCuePayloadType__CueParameters = 1,
	EGameplayCuePayloadType__FromSpec = 2,
	EGameplayCuePayloadType__EGameplayCuePayloadType_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayAbilities.PredictionKey
// 0x0018
struct FPredictionKey
{
	int16_t                                            Current;                                                  // 0x0000(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            Base;                                                     // 0x0002(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UPackageMap*                                 PredictiveConnection;                                     // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      bIsStale : 1;                                             // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      bIsServerInitiated : 1;                                   // 0x0011(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilityActivationInfo
// 0x0020
struct FGameplayAbilityActivationInfo
{
	TEnumAsByte<EGameplayAbilityActivationMode>        ActivationMode;                                           // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCanBeEndedByOtherInstance : 1;                           // 0x0001(0x0001)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FPredictionKey                              PredictionKeyWhenActivated;                               // 0x0008(0x0018)
};

// ScriptStruct GameplayAbilities.GameplayEffectContextHandle
// 0x0018
struct FGameplayEffectContextHandle
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetDataHandle
// 0x0020
struct FGameplayAbilityTargetDataHandle
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEventData
// 0x00A8
struct FGameplayEventData
{
	struct FGameplayTag                                EventTag;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	class AActor*                                      Instigator;                                               // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      Target;                                                   // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     OptionalObject2;                                          // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle                ContextHandle;                                            // 0x0028(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTagContainer                       InstigatorTags;                                           // 0x0040(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTagContainer                       TargetTags;                                               // 0x0060(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	float                                              EventMagnitude;                                           // 0x0080(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // 0x0088(0x0020) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct GameplayAbilities.AbilityTriggerData
// 0x0010
struct FAbilityTriggerData
{
	struct FGameplayTag                                TriggerTag;                                               // 0x0000(0x0008) (CPF_Edit)
	TEnumAsByte<EGameplayAbilityTriggerSource>         TriggerSource;                                            // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.AttributeDefaults
// 0x0010
struct FAttributeDefaults
{
	class UClass*                                      Attributes;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDataTable*                                  DefaultStartingTable;                                     // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandle
// 0x0004
struct FGameplayAbilitySpecHandle
{
	int                                                Handle;                                                   // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectHandle
// 0x0008
struct FActiveGameplayEffectHandle
{
	int                                                Handle;                                                   // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bPassedFiltersAndWasExecuted : 1;                         // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpec
// 0x006C (0x0078 - 0x000C)
struct FGameplayAbilitySpec : public FFastArraySerializerItem
{
	struct FGameplayAbilitySpecHandle                  Handle;                                                   // 0x000C(0x0004)
	class UGameplayAbility*                            Ability;                                                  // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Level;                                                    // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InputID;                                                  // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     SourceObject;                                             // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ActiveCount;                                              // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      InputPressed : 1;                                         // 0x0029(0x0001) (CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      RemoveAfterActivation : 1;                                // 0x0029(0x0001) (CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      PendingRemove : 1;                                        // 0x0029(0x0001) (CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                           // 0x0030(0x0020) (CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	TArray<class UGameplayAbility*>                    NonReplicatedInstances;                                   // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	TArray<class UGameplayAbility*>                    ReplicatedInstances;                                      // 0x0060(0x0010) (CPF_ZeroConstructor)
	struct FActiveGameplayEffectHandle                 GameplayEffectHandle;                                     // 0x0070(0x0008) (CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecContainer
// 0x0018 (0x00C8 - 0x00B0)
struct FGameplayAbilitySpecContainer : public FFastArraySerializer
{
	TArray<struct FGameplayAbilitySpec>                Items;                                                    // 0x00B0(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontage
// 0x0030
struct FGameplayAbilityRepAnimMontage
{
	class UAnimMontage*                                AnimMontage;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Position;                                                 // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlendTime;                                                // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      NextSectionID;                                            // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsStopped : 1;                                            // 0x0015(0x0001)
	unsigned char                                      ForcePlayBit : 1;                                         // 0x0015(0x0001)
	unsigned char                                      SkipPositionCorrection : 1;                               // 0x0015(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	struct FPredictionKey                              PredictionKey;                                            // 0x0018(0x0018)
};

// ScriptStruct GameplayAbilities.GameplayAbilityLocalAnimMontage
// 0x0030
struct FGameplayAbilityLocalAnimMontage
{
	class UAnimMontage*                                AnimMontage;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      PlayBit : 1;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FPredictionKey                              PredictionKey;                                            // 0x0010(0x0018)
	class UGameplayAbility*                            AnimatingAbility;                                         // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAttribute
// 0x0020
struct FGameplayAttribute
{
	struct FString                                     AttributeName;                                            // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	class UProperty*                                   Attribute;                                                // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStruct*                                     AttributeOwner;                                           // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayEffectModifiedAttribute
// 0x0028
struct FGameplayEffectModifiedAttribute
{
	struct FGameplayAttribute                          Attribute;                                                // 0x0000(0x0020)
	float                                              TotalMagnitude;                                           // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureDefinition
// 0x0028
struct FGameplayEffectAttributeCaptureDefinition
{
	struct FGameplayAttribute                          AttributeToCapture;                                       // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0020(0x0001) UNKNOWN PROPERTY: EnumProperty GameplayAbilities.GameplayEffectAttributeCaptureDefinition.AttributeSource
	unsigned char                                      bSnapshot : 1;                                            // 0x0021(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpec
// 0x0038
struct FGameplayEffectAttributeCaptureSpec
{
	struct FGameplayEffectAttributeCaptureDefinition   BackingDefinition;                                        // 0x0000(0x0028)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
// 0x0028
struct FGameplayEffectAttributeCaptureSpecContainer
{
	TArray<struct FGameplayEffectAttributeCaptureSpec> SourceAttributes;                                         // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FGameplayEffectAttributeCaptureSpec> TargetAttributes;                                         // 0x0010(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bHasNonSnapshottedAttributes : 1;                         // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.TagContainerAggregator
// 0x0088
struct FTagContainerAggregator
{
	struct FGameplayTagContainer                       CapturedActorTags;                                        // 0x0000(0x0020)
	struct FGameplayTagContainer                       CapturedSpecTags;                                         // 0x0020(0x0020)
	struct FGameplayTagContainer                       ScopedTags;                                               // 0x0040(0x0020)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0060(0x0028) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ModifierSpec
// 0x0004
struct FModifierSpec
{
	float                                              EvaluatedMagnitude;                                       // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.ScalableFloat
// 0x0028
struct FScalableFloat
{
	float                                              Value;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FCurveTableRowHandle                        Curve;                                                    // 0x0008(0x0010) (CPF_Edit)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecDef
// 0x0050
struct FGameplayAbilitySpecDef
{
	class UClass*                                      Ability;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	int                                                Level;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FScalableFloat                              LevelScalableFloat;                                       // 0x0010(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	int                                                InputID;                                                  // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x1];                                       // 0x003C(0x0001) UNKNOWN PROPERTY: EnumProperty GameplayAbilities.GameplayAbilitySpecDef.RemovalPolicy
	unsigned char                                      UnknownData02[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	class UObject*                                     SourceObject;                                             // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FGameplayAbilitySpecHandle                  AssignedHandle;                                           // 0x0048(0x0004)
};

// ScriptStruct GameplayAbilities.GameplayEffectSpec
// 0x0248
struct FGameplayEffectSpec
{
	class UGameplayEffect*                             Def;                                                      // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FGameplayEffectModifiedAttribute>    ModifiedAttributes;                                       // 0x0008(0x0010) (CPF_ZeroConstructor)
	struct FGameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes;                               // 0x0018(0x0028) (CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	float                                              Duration;                                                 // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Period;                                                   // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ChanceToApplyToTarget;                                    // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FTagContainerAggregator                     CapturedSourceTags;                                       // 0x0060(0x0088) (CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FTagContainerAggregator                     CapturedTargetTags;                                       // 0x00E8(0x0088) (CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                       DynamicGrantedTags;                                       // 0x0170(0x0020)
	struct FGameplayTagContainer                       DynamicAssetTags;                                         // 0x0190(0x0020)
	TArray<struct FModifierSpec>                       Modifiers;                                                // 0x01B0(0x0010) (CPF_ZeroConstructor)
	int                                                StackCount;                                               // 0x01C0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCompletedSourceAttributeCapture : 1;                     // 0x01C4(0x0001) (CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      bCompletedTargetAttributeCapture : 1;                     // 0x01C4(0x0001) (CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      bDurationLocked : 1;                                      // 0x01C4(0x0001) (CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01C5(0x0003) MISSED OFFSET
	TArray<struct FGameplayAbilitySpecDef>             GrantedAbilitySpecs;                                      // 0x01C8(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData03[0x50];                                      // 0x01D8(0x0050) MISSED OFFSET
	struct FGameplayEffectContextHandle                EffectContext;                                            // 0x0228(0x0018)
	float                                              Level;                                                    // 0x0240(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffect
// 0x03F4 (0x0400 - 0x000C)
struct FActiveGameplayEffect : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
	struct FGameplayEffectSpec                         Spec;                                                     // 0x0018(0x0248)
	struct FPredictionKey                              PredictionKey;                                            // 0x0260(0x0018)
	float                                              StartServerWorldTime;                                     // 0x0278(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CachedStartServerWorldTime;                               // 0x027C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	float                                              StartWorldTime;                                           // 0x0280(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      bIsInhibited : 1;                                         // 0x0284(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x17B];                                     // 0x0285(0x017B) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectsContainer
// 0x03F0 (0x04A0 - 0x00B0)
struct FActiveGameplayEffectsContainer : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x00B0(0x0090) MISSED OFFSET
	TArray<struct FActiveGameplayEffect>               GameplayEffects_Internal;                                 // 0x0140(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x320];                                     // 0x0150(0x0320) MISSED OFFSET
	TArray<class UGameplayEffect*>                     ApplicationImmunityQueryEffects;                          // 0x0470(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0480(0x0020) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayCueParameters
// 0x00B8
struct FGameplayCueParameters
{
	float                                              NormalizedMagnitude;                                      // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RawMagnitude;                                             // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // 0x0008(0x0018) (CPF_BlueprintVisible)
	struct FGameplayTag                                MatchedTagName;                                           // 0x0020(0x0008) (CPF_BlueprintVisible, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FGameplayTag                                OriginalTag;                                              // 0x0028(0x0008) (CPF_BlueprintVisible, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                       AggregatedSourceTags;                                     // 0x0030(0x0020) (CPF_BlueprintVisible)
	struct FGameplayTagContainer                       AggregatedTargetTags;                                     // 0x0050(0x0020) (CPF_BlueprintVisible)
	struct FVector_NetQuantize10                       Location;                                                 // 0x0070(0x000C) (CPF_BlueprintVisible)
	struct FVector_NetQuantizeNormal                   Normal;                                                   // 0x007C(0x000C) (CPF_BlueprintVisible)
	TWeakObjectPtr<class AActor>                       Instigator;                                               // 0x0088(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class AActor>                       EffectCauser;                                             // 0x0090(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UObject>                      SourceObject;                                             // 0x0098(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UPhysicalMaterial>            PhysicalMaterial;                                         // 0x00A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GameplayEffectLevel;                                      // 0x00A8(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AbilityLevel;                                             // 0x00AC(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class USceneComponent>              TargetAttachComponent;                                    // 0x00B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.ActiveGameplayCue
// 0x00E4 (0x00F0 - 0x000C)
struct FActiveGameplayCue : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FGameplayTag                                GameplayCueTag;                                           // 0x0010(0x0008)
	struct FPredictionKey                              PredictionKey;                                            // 0x0018(0x0018)
	struct FGameplayCueParameters                      Parameters;                                               // 0x0030(0x00B8)
	unsigned char                                      bPredictivelyRemoved : 1;                                 // 0x00E8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
};

// ScriptStruct GameplayAbilities.ActiveGameplayCueContainer
// 0x0020 (0x00D0 - 0x00B0)
struct FActiveGameplayCueContainer : public FFastArraySerializer
{
	TArray<struct FActiveGameplayCue>                  GameplayCues;                                             // 0x00B0(0x0010) (CPF_ZeroConstructor)
	class UAbilitySystemComponent*                     Owner;                                                    // 0x00C0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.MinimalReplicationTagCountMap
// 0x0060
struct FMinimalReplicationTagCountMap
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
	class UAbilitySystemComponent*                     Owner;                                                    // 0x0050(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ReplicatedPredictionKeyItem
// 0x001C (0x0028 - 0x000C)
struct FReplicatedPredictionKeyItem : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FPredictionKey                              PredictionKey;                                            // 0x0010(0x0018)
};

// ScriptStruct GameplayAbilities.ReplicatedPredictionKeyMap
// 0x0010 (0x00C0 - 0x00B0)
struct FReplicatedPredictionKeyMap : public FFastArraySerializer
{
	TArray<struct FReplicatedPredictionKeyItem>        PredictionKeys;                                           // 0x00B0(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct GameplayAbilities.GameplayCueObjectLibrary
// 0x00C0
struct FGameplayCueObjectLibrary
{
	TArray<struct FString>                             Paths;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0010(0x0080) MISSED OFFSET
	class UObjectLibrary*                              ActorObjectLibrary;                                       // 0x0090(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObjectLibrary*                              StaticObjectLibrary;                                      // 0x0098(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00A0(0x0004) MISSED OFFSET
	unsigned char                                      bShouldSyncScan : 1;                                      // 0x00A4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShouldAsyncLoad : 1;                                     // 0x00A5(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShouldSyncLoad : 1;                                      // 0x00A6(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x00A7(0x0001) MISSED OFFSET
	class UGameplayCueSet*                             CueSet;                                                   // 0x00A8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHasBeenInitialized : 1;                                  // 0x00B0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0xF];                                       // 0x00B1(0x000F) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectSpecForRPC
// 0x0078
struct FGameplayEffectSpecForRPC
{
	class UGameplayEffect*                             Def;                                                      // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FGameplayEffectModifiedAttribute>    ModifiedAttributes;                                       // 0x0008(0x0010) (CPF_ZeroConstructor)
	struct FGameplayEffectContextHandle                EffectContext;                                            // 0x0018(0x0018)
	struct FGameplayTagContainer                       AggregatedSourceTags;                                     // 0x0030(0x0020)
	struct FGameplayTagContainer                       AggregatedTargetTags;                                     // 0x0050(0x0020)
	float                                              Level;                                                    // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AbilityLevel;                                             // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayCuePendingExecute
// 0x0170
struct FGameplayCuePendingExecute
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	struct FPredictionKey                              PredictionKey;                                            // 0x0018(0x0018)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0030(0x0001) UNKNOWN PROPERTY: EnumProperty GameplayAbilities.GameplayCuePendingExecute.PayloadType
	unsigned char                                      UnknownData02[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UAbilitySystemComponent*                     OwningComponent;                                          // 0x0038(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FGameplayEffectSpecForRPC                   FromSpec;                                                 // 0x0040(0x0078)
	struct FGameplayCueParameters                      CueParameters;                                            // 0x00B8(0x00B8)
};

// ScriptStruct GameplayAbilities.PreallocationInfo
// 0x0068
struct FPreallocationInfo
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
	TArray<class AGameplayCueNotify_Actor*>            ClassesNeedingPreallocation;                              // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.AttributeBasedFloat
// 0x00F8
struct FAttributeBasedFloat
{
	struct FScalableFloat                              Coefficient;                                              // 0x0000(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FScalableFloat                              PreMultiplyAdditiveValue;                                 // 0x0028(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FScalableFloat                              PostMultiplyAdditiveValue;                                // 0x0050(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayEffectAttributeCaptureDefinition   BackingAttribute;                                         // 0x0078(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FCurveTableRowHandle                        AttributeCurve;                                           // 0x00A0(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00B0(0x0001) UNKNOWN PROPERTY: EnumProperty GameplayAbilities.AttributeBasedFloat.AttributeCalculationType
	unsigned char                                      UnknownData01[0x1];                                       // 0x00B1(0x0001) UNKNOWN PROPERTY: EnumProperty GameplayAbilities.AttributeBasedFloat.FinalChannel
	unsigned char                                      UnknownData02[0x6];                                       // 0x00B2(0x0006) MISSED OFFSET
	struct FGameplayTagContainer                       SourceTagFilter;                                          // 0x00B8(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       TargetTagFilter;                                          // 0x00D8(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.CustomCalculationBasedFloat
// 0x0080
struct FCustomCalculationBasedFloat
{
	class UClass*                                      CalculationClassMagnitude;                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FScalableFloat                              Coefficient;                                              // 0x0008(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FScalableFloat                              PreMultiplyAdditiveValue;                                 // 0x0030(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FScalableFloat                              PostMultiplyAdditiveValue;                                // 0x0058(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.SetByCallerFloat
// 0x0008
struct FSetByCallerFloat
{
	struct FName                                       DataName;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
// 0x01B0
struct FGameplayEffectModifierMagnitude
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty GameplayAbilities.GameplayEffectModifierMagnitude.MagnitudeCalculationType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FScalableFloat                              ScalableFloatMagnitude;                                   // 0x0008(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FAttributeBasedFloat                        AttributeBasedMagnitude;                                  // 0x0030(0x00F8) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FCustomCalculationBasedFloat                CustomMagnitude;                                          // 0x0128(0x0080) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FSetByCallerFloat                           SetByCallerMagnitude;                                     // 0x01A8(0x0008) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayModEvaluationChannelSettings
// 0x0001
struct FGameplayModEvaluationChannelSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty GameplayAbilities.GameplayModEvaluationChannelSettings.Channel
};

// ScriptStruct GameplayAbilities.GameplayTagRequirements
// 0x0040
struct FGameplayTagRequirements
{
	struct FGameplayTagContainer                       RequireTags;                                              // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTagContainer                       IgnoreTags;                                               // 0x0020(0x0020) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct GameplayAbilities.GameplayModifierInfo
// 0x0288
struct FGameplayModifierInfo
{
	struct FGameplayAttribute                          Attribute;                                                // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                               // 0x0020(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FScalableFloat                              Magnitude;                                                // 0x0028(0x0028)
	struct FGameplayEffectModifierMagnitude            ModifierMagnitude;                                        // 0x0050(0x01B0) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayModEvaluationChannelSettings       EvaluationChannelSettings;                                // 0x0200(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0201(0x0007) MISSED OFFSET
	struct FGameplayTagRequirements                    SourceTags;                                               // 0x0208(0x0040) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagRequirements                    TargetTags;                                               // 0x0248(0x0040) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
// 0x0268
struct FGameplayEffectExecutionScopedModifierInfo
{
	struct FGameplayEffectAttributeCaptureDefinition   CapturedAttribute;                                        // 0x0000(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_EditConst)
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                               // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FGameplayEffectModifierMagnitude            ModifierMagnitude;                                        // 0x0030(0x01B0) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayModEvaluationChannelSettings       EvaluationChannelSettings;                                // 0x01E0(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01E1(0x0007) MISSED OFFSET
	struct FGameplayTagRequirements                    SourceTags;                                               // 0x01E8(0x0040) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagRequirements                    TargetTags;                                               // 0x0228(0x0040) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.ConditionalGameplayEffect
// 0x0028
struct FConditionalGameplayEffect
{
	class UClass*                                      EffectClass;                                              // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       RequiredSourceTags;                                       // 0x0008(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
// 0x0058
struct FGameplayEffectExecutionDefinition
{
	class UClass*                                      CalculationClass;                                         // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       PassedInTags;                                             // 0x0008(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<struct FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers;                                     // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UClass*>                              ConditionalGameplayEffectClasses;                         // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_Deprecated)
	TArray<struct FConditionalGameplayEffect>          ConditionalGameplayEffects;                               // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayEffectCue
// 0x0048
struct FGameplayEffectCue
{
	struct FGameplayAttribute                          MagnitudeAttribute;                                       // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              MinLevel;                                                 // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxLevel;                                                 // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       GameplayCueTags;                                          // 0x0028(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.InheritedTagContainer
// 0x0060
struct FInheritedTagContainer
{
	struct FGameplayTagContainer                       CombinedTags;                                             // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient, CPF_EditConst)
	struct FGameplayTagContainer                       Added;                                                    // 0x0020(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       Removed;                                                  // 0x0040(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient, CPF_DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayEffectQuery
// 0x0170
struct FGameplayEffectQuery
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
	struct FScriptDelegate                             CustomMatchDelegate_BP;                                   // 0x0040(0x000A) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0000(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FGameplayTagQuery                           OwningTagQuery;                                           // 0x0050(0x0048) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTagQuery                           EffectTagQuery;                                           // 0x0098(0x0048) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTagQuery                           SourceTagQuery;                                           // 0x00E0(0x0048) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayAttribute                          ModifyingAttribute;                                       // 0x0128(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	class UObject*                                     EffectSource;                                             // 0x0148(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      EffectDefinition;                                         // 0x0150(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0158(0x0018) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.WorldReticleParameters
// 0x000C
struct FWorldReticleParameters
{
	struct FVector                                     AOEScale;                                                 // 0x0000(0x000C) (CPF_BlueprintVisible, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetingLocationInfo
// 0x0070
struct FGameplayAbilityTargetingLocationInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	TEnumAsByte<EGameplayAbilityTargetingLocationType> LocationType;                                             // 0x0010(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0011(0x000F) MISSED OFFSET
	struct FTransform                                  LiteralTransform;                                         // 0x0020(0x0030) (CPF_BlueprintVisible, CPF_IsPlainOldData)
	class AActor*                                      SourceActor;                                              // 0x0050(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMeshComponent*                              SourceComponent;                                          // 0x0058(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UGameplayAbility*                            SourceAbility;                                            // 0x0060(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SourceSocketName;                                         // 0x0068(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilterHandle
// 0x0010
struct FGameplayTargetDataFilterHandle
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityBindInfo
// 0x0010
struct FGameplayAbilityBindInfo
{
	TEnumAsByte<EGameplayAbilityInputBinds>            Command;                                                  // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UClass*                                      GameplayAbilityClass;                                     // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayCueNotifyData
// 0x0028
struct FGameplayCueNotifyData
{
	struct FGameplayTag                                GameplayCueTag;                                           // 0x0000(0x0008) (CPF_Edit)
	struct FStringAssetReference                       GameplayCueNotifyObj;                                     // 0x0008(0x0010) (CPF_Edit)
	class UClass*                                      LoadedGameplayCueClass;                                   // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayTagReponsePair
// 0x0028
struct FGameplayTagReponsePair
{
	struct FGameplayTag                                Tag;                                                      // 0x0000(0x0008) (CPF_Edit)
	class UClass*                                      ResponseGameplayEffect;                                   // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UClass*>                              ResponseGameplayEffects;                                  // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                SoftCountCap;                                             // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayTagResponseTableEntry
// 0x0050
struct FGameplayTagResponseTableEntry
{
	struct FGameplayTagReponsePair                     Positive;                                                 // 0x0000(0x0028) (CPF_Edit)
	struct FGameplayTagReponsePair                     Negative;                                                 // 0x0028(0x0028) (CPF_Edit)
};

// ScriptStruct GameplayAbilities.GameplayEffectSpecHandle
// 0x0018
struct FGameplayEffectSpecHandle
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ServerAbilityRPCBatch
// 0x0048
struct FGameplayAbilities_FServerAbilityRPCBatch
{
	struct FGameplayAbilitySpecHandle                  AbilitySpecHandle;                                        // 0x0000(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FPredictionKey                              PredictionKey;                                            // 0x0008(0x0018)
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // 0x0020(0x0020)
	unsigned char                                      InputPressed : 1;                                         // 0x0040(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Ended : 1;                                                // 0x0041(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Started : 1;                                              // 0x0042(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
};

// ScriptStruct GameplayAbilities.GameplayAttributeData
// 0x0010
struct FGameplayAttributeData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              BaseValue;                                                // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrentValue;                                             // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData
// 0x0008
struct FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
// 0x0088 (0x0090 - 0x0008)
struct FGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData
{
	struct FHitResult                                  HitResult;                                                // 0x0008(0x0088) (CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayEffectContext
// 0x0068
struct FGameplayEffectContext
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       Instigator;                                               // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class AActor>                       EffectCauser;                                             // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UGameplayAbility>             AbilityCDO;                                               // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AbilityLevel;                                             // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UObject>                      SourceObject;                                             // 0x0024(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UAbilitySystemComponent>      InstigatorAbilitySystemComponent;                         // 0x002C(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<TWeakObjectPtr<class AActor>>               Actors;                                                   // 0x0038(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
	struct FVector                                     WorldOrigin;                                              // 0x0058(0x000C) (CPF_IsPlainOldData)
	unsigned char                                      bHasWorldOrigin : 1;                                      // 0x0064(0x0001)
	unsigned char                                      bReplicateSourceObject : 1;                               // 0x0064(0x0001)
};

// ScriptStruct GameplayAbilities.AttributeMetaData
// 0x0028 (0x0030 - 0x0008)
struct FAttributeMetaData : public FTableRowBase
{
	float                                              BaseValue;                                                // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinValue;                                                 // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     DerivedAttributeInfo;                                     // 0x0018(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bCanStack : 1;                                            // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GlobalCurveDataOverride
// 0x0010
struct FGlobalCurveDataOverride
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayModifierEvaluatedData
// 0x0038
struct FGameplayModifierEvaluatedData
{
	struct FGameplayAttribute                          Attribute;                                                // 0x0000(0x0020)
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                               // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              Magnitude;                                                // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FActiveGameplayEffectHandle                 Handle;                                                   // 0x0028(0x0008)
	unsigned char                                      IsValid : 1;                                              // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_ActorArray
// 0x0088 (0x0090 - 0x0008)
struct FGameplayAbilityTargetData_ActorArray : public FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FGameplayAbilityTargetingLocationInfo       SourceLocation;                                           // 0x0010(0x0070) (CPF_Edit, CPF_BlueprintVisible)
	TArray<TWeakObjectPtr<class AActor>>               TargetActorArray;                                         // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_LocationInfo
// 0x00E8 (0x00F0 - 0x0008)
struct FGameplayAbilityTargetData_LocationInfo : public FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FGameplayAbilityTargetingLocationInfo       SourceLocation;                                           // 0x0010(0x0070) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayAbilityTargetingLocationInfo       TargetLocation;                                           // 0x0080(0x0070) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct GameplayAbilities.GameplayCueTag
// 0x0008
struct FGameplayCueTag
{
	struct FGameplayTag                                GameplayCueTag;                                           // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct GameplayAbilities.AbilityTaskDebugMessage
// 0x0018
struct FAbilityTaskDebugMessage
{
	class UGameplayTask*                               FromTask;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
// 0x0008
struct FGameplayAbilitySpecHandleAndPredictionKey
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // 0x0000(0x0004)
	int                                                PredictionKeyAtCreation;                                  // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilityActorInfo
// 0x0040
struct FGameplayAbilityActorInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       OwnerActor;                                               // 0x0008(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class AActor>                       AvatarActor;                                              // 0x0010(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class APlayerController>            PlayerController;                                         // 0x0018(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UAbilitySystemComponent>      AbilitySystemComponent;                                   // 0x0020(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TWeakObjectPtr<class USkeletalMeshComponent>       SkeletalMeshComponent;                                    // 0x0028(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TWeakObjectPtr<class UAnimInstance>                AnimInstance;                                             // 0x0030(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UMovementComponent>           MovementComponent;                                        // 0x0038(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilter
// 0x0028
struct FGameplayTargetDataFilter
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AActor*                                      SelfActor;                                                // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETargetDataFilterSelf>                 SelfFilter;                                               // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class UClass*                                      RequiredActorClass;                                       // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bReverseFilter : 1;                                       // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectQuery
// 0x00A0
struct FActiveGameplayEffectQuery
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayCueTranslationLink
// 0x0018
struct FGameplayCueTranslationLink
{
	class UGameplayCueTranslator*                      RulesCDO;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayCueTranslatorNodeIndex
// 0x0004
struct FGameplayCueTranslatorNodeIndex
{
	int                                                Index;                                                    // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayCueTranslatorNode
// 0x0078
struct FGameplayCueTranslatorNode
{
	TArray<struct FGameplayCueTranslationLink>         Links;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FGameplayCueTranslatorNodeIndex             CachedIndex;                                              // 0x0010(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FGameplayTag                                CachedGameplayTag;                                        // 0x0018(0x0008)
	struct FName                                       CachedGameplayTagName;                                    // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0028(0x0050) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayCueTranslationManager
// 0x0080
struct FGameplayCueTranslationManager
{
	TArray<struct FGameplayCueTranslatorNode>          TranslationLUT;                                           // 0x0000(0x0010) (CPF_ZeroConstructor)
	TMap<struct FName, struct FGameplayCueTranslatorNodeIndex> TranslationNameToIndexMap;                                // 0x0010(0x0050) (CPF_ZeroConstructor)
	class UGameplayTagsManager*                        TagManager;                                               // 0x0060(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionOutput
// 0x0018
struct FGameplayEffectCustomExecutionOutput
{
	TArray<struct FGameplayModifierEvaluatedData>      OutputModifiers;                                          // 0x0000(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bTriggerConditionalGameplayEffects : 1;                   // 0x0010(0x0001)
	unsigned char                                      bHandledStackCountManually : 1;                           // 0x0010(0x0001)
	unsigned char                                      bHandledGameplayCuesManually : 1;                         // 0x0010(0x0001)
};

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionParameters
// 0x00A8
struct FGameplayEffectCustomExecutionParameters
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
