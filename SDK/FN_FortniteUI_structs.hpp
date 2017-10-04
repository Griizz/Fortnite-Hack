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

// Enum FortniteUI.EFortAnimSpeed
enum class EFortAnimSpeed
{
	EFortAnimSpeed__Instant        = 0,
	EFortAnimSpeed__Fast           = 1,
	EFortAnimSpeed__Normal         = 2,
	EFortAnimSpeed__EFortAnimSpeed_MAX = 3
};


// Enum FortniteUI.ECollectionBookSectionNavTarget
enum class ECollectionBookSectionNavTarget
{
	ECollectionBookSectionNavTarget__SlotSelect = 0,
	ECollectionBookSectionNavTarget__SlotPicker = 1,
	ECollectionBookSectionNavTarget__ECollectionBookSectionNavTarget_MAX = 2
};


// Enum FortniteUI.EFortFrontEndFeatureState
enum class EFortFrontEndFeatureState
{
	EFortFrontEndFeatureState__Enabled = 0,
	EFortFrontEndFeatureState__NoHeroes = 1,
	EFortFrontEndFeatureState__NoRecruitableHeroes = 2,
	EFortFrontEndFeatureState__DisabledByTutorial = 3,
	EFortFrontEndFeatureState__Invalid = 4,
	EFortFrontEndFeatureState__EFortFrontEndFeatureState_MAX = 5
};


// Enum FortniteUI.EFortFrontEndFeature
enum class EFortFrontEndFeature
{
	EFortFrontEndFeature__ShowHomeBase = 0,
	EFortFrontEndFeature__ShowHeroList = 1,
	EFortFrontEndFeature__ShowVault = 2,
	EFortFrontEndFeature__ShowStore = 3,
	EFortFrontEndFeature__PlayZone = 4,
	EFortFrontEndFeature__ShowDailyRewards = 5,
	EFortFrontEndFeature__ShowHeroSelect = 6,
	EFortFrontEndFeature__RecruitHero = 7,
	EFortFrontEndFeature__ShowHomeBaseOverview = 8,
	EFortFrontEndFeature__MAX_None = 9,
	EFortFrontEndFeature__EFortFrontEndFeature_MAX = 10
};


// Enum FortniteUI.EFortHomebaseNodePurchaseRestrictionReason
enum class EFortHomebaseNodePurchaseRestrictionReason
{
	EFortHomebaseNodePurchaseRestrictionReason__PrerequisitesNotMet = 0,
	EFortHomebaseNodePurchaseRestrictionReason__QuestsNotComplete = 1,
	EFortHomebaseNodePurchaseRestrictionReason__CanNotAffordCosts = 2,
	EFortHomebaseNodePurchaseRestrictionReason__VaultIsOverflown = 3,
	EFortHomebaseNodePurchaseRestrictionReason__EFortHomebaseNodePurchaseRestrictionReason_MAX = 4
};


// Enum FortniteUI.EFortUIFeatureState
enum class EFortUIFeatureState
{
	EFortUIFeatureState__Enabled   = 0,
	EFortUIFeatureState__DisabledByTutorial = 1,
	EFortUIFeatureState__DisabledByContentInstall = 2,
	EFortUIFeatureState__Invalid   = 3,
	EFortUIFeatureState__EFortUIFeatureState_MAX = 4
};


// Enum FortniteUI.EFortUIFeature
enum class EFortUIFeature
{
	EFortUIFeature__ShowHome       = 0,
	EFortUIFeature__ShowPlay       = 1,
	EFortUIFeature__ShowHeros      = 2,
	EFortUIFeature__ShowSquads     = 3,
	EFortUIFeature__ShowArmory     = 4,
	EFortUIFeature__ShowSkillTree  = 5,
	EFortUIFeature__ShowStore      = 6,
	EFortUIFeature__ShowQuests     = 7,
	EFortUIFeature__ShowMainStore  = 8,
	EFortUIFeature__ShowCampaign   = 9,
	EFortUIFeature__ShowActiveBoost = 10,
	EFortUIFeature__ShowJournal    = 11,
	EFortUIFeature__ShowPartyBar   = 12,
	EFortUIFeature__ShowChatWindow = 13,
	EFortUIFeature__ShowFriendsMenu = 14,
	EFortUIFeature__ShowObjectives = 15,
	EFortUIFeature__Max_None       = 16,
	EFortUIFeature__EFortUIFeature_MAX = 17
};


// Enum FortniteUI.EFlagStatus
enum class EFlagStatus
{
	EFlagStatus__FlagPresent       = 0,
	EFlagStatus__FlagNotPresent    = 1,
	EFlagStatus__EFlagStatus_MAX   = 2
};


// Enum FortniteUI.EInputPriority
enum class EInputPriority
{
	EInputPriority__Normal         = 0,
	EInputPriority__Menu           = 1,
	EInputPriority__Chat           = 2,
	EInputPriority__Modal          = 3,
	EInputPriority__Confirmation   = 4,
	EInputPriority__Error          = 5,
	EInputPriority__HUD            = 6,
	EInputPriority__EInputPriority_MAX = 7
};


// Enum FortniteUI.EFortInputMode
enum class EFortInputMode
{
	EFortInputMode__Frontend       = 0,
	EFortInputMode__InGame         = 1,
	EFortInputMode__InGameCursor   = 2,
	EFortInputMode__EFortInputMode_MAX = 3
};


// Enum FortniteUI.EFortUrlType
enum class EFortUrlType
{
	EFortUrlType__NormalWebLink    = 0,
	EFortUrlType__AccountCreationLink = 1,
	EFortUrlType__HelpLink         = 2,
	EFortUrlType__EULALink         = 3,
	EFortUrlType__EFortUrlType_MAX = 4
};


// Enum FortniteUI.EFortComparisonType
enum class EFortComparisonType
{
	EFortComparisonType__None      = 0,
	EFortComparisonType__HigherValue = 1,
	EFortComparisonType__LowerValue = 2,
	EFortComparisonType__Upgrade   = 3,
	EFortComparisonType__EFortComparisonType_MAX = 4
};


// Enum FortniteUI.EFortClampState
enum class EFortClampState
{
	EFortClampState__NoClamp       = 0,
	EFortClampState__MinClamp      = 1,
	EFortClampState__MaxClamp      = 2,
	EFortClampState__EFortClampState_MAX = 3
};


// Enum FortniteUI.EFortBuffState
enum class EFortBuffState
{
	EFortBuffState__NoChange       = 0,
	EFortBuffState__Better         = 1,
	EFortBuffState__Worse          = 2,
	EFortBuffState__EFortBuffState_MAX = 3
};


// Enum FortniteUI.EFortStatValueDisplayType
enum class EFortStatValueDisplayType
{
	EFortStatValueDisplayType__BasicPaired = 0,
	EFortStatValueDisplayType__BasicSingle = 1,
	EFortStatValueDisplayType__Unique = 2,
	EFortStatValueDisplayType__ElementalFire = 3,
	EFortStatValueDisplayType__ElementalIce = 4,
	EFortStatValueDisplayType__ElementalElectric = 5,
	EFortStatValueDisplayType__EFortStatValueDisplayType_MAX = 6
};


// Enum FortniteUI.EFortHitPointModificationReason
enum class EFortHitPointModificationReason
{
	EFortHitPointModificationReason__Invalid = 0,
	EFortHitPointModificationReason__InitalSet = 1,
	EFortHitPointModificationReason__AutoRegen = 2,
	EFortHitPointModificationReason__ItemRegen = 3,
	EFortHitPointModificationReason__DamageOverTime = 4,
	EFortHitPointModificationReason__DamageReceived = 5,
	EFortHitPointModificationReason__EFortHitPointModificationReason_MAX = 6
};


// Enum FortniteUI.EFortBuildingInteraction
enum class EFortBuildingInteraction
{
	EFortBuildingInteraction__None = 0,
	EFortBuildingInteraction__Build = 1,
	EFortBuildingInteraction__Repair = 2,
	EFortBuildingInteraction__Upgrade = 3,
	EFortBuildingInteraction__Edit = 4,
	EFortBuildingInteraction__BeingModified = 5,
	EFortBuildingInteraction__ConfirmEdit = 6,
	EFortBuildingInteraction__EFortBuildingInteraction_MAX = 7
};


// Enum FortniteUI.EFortBuildingHealthDisplayRule
enum class EFortBuildingHealthDisplayRule
{
	EFortBuildingHealthDisplayRule__Never = 0,
	EFortBuildingHealthDisplayRule__Allowed = 1,
	EFortBuildingHealthDisplayRule__Always = 2,
	EFortBuildingHealthDisplayRule__EFortBuildingHealthDisplayRule_MAX = 3
};


// Enum FortniteUI.EFortPickerMode
enum class EFortPickerMode
{
	EFortPickerMode__BuildingCategory = 0,
	EFortPickerMode__TrapCategory  = 1,
	EFortPickerMode__WeaponCategory = 2,
	EFortPickerMode__SocialCategory = 3,
	EFortPickerMode__Building      = 4,
	EFortPickerMode__Trap          = 5,
	EFortPickerMode__TrapRadial    = 6,
	EFortPickerMode__Weapon        = 7,
	EFortPickerMode__Social        = 8,
	EFortPickerMode__WeaponsSlotted = 9,
	EFortPickerMode__EFortPickerMode_MAX = 10
};


// Enum FortniteUI.EFortStoreState
enum class EFortStoreState
{
	EFortStoreState__Error         = 0,
	EFortStoreState__Closed        = 1,
	EFortStoreState__CardPackStore = 2,
	EFortStoreState__CurrencyStore = 3,
	EFortStoreState__WebPayment    = 4,
	EFortStoreState__PackOpen      = 5,
	EFortStoreState__CardEnter     = 6,
	EFortStoreState__CardBackReveal = 7,
	EFortStoreState__CardFlip      = 8,
	EFortStoreState__CardFrontReveal = 9,
	EFortStoreState__CardExit      = 10,
	EFortStoreState__SummaryAdd    = 11,
	EFortStoreState__PackDestroy   = 12,
	EFortStoreState__Summary       = 13,
	EFortStoreState__PresentChoice = 14,
	EFortStoreState__ChoiceMade    = 15,
	EFortStoreState__MAX_None      = 16,
	EFortStoreState__EFortStoreState_MAX = 17
};


// Enum FortniteUI.EFortItemCooldownType
enum class EFortItemCooldownType
{
	EFortItemCooldownType__None    = 0,
	EFortItemCooldownType__AmmoRegeneration = 1,
	EFortItemCooldownType__ItemActivation = 2,
	EFortItemCooldownType__WeaponReloading = 3,
	EFortItemCooldownType__Death   = 4,
	EFortItemCooldownType__EFortItemCooldownType_MAX = 5
};


// Enum FortniteUI.EFortTutorialGlowType
enum class EFortTutorialGlowType
{
	EFortTutorialGlowType__None    = 0,
	EFortTutorialGlowType__Look    = 1,
	EFortTutorialGlowType__Click   = 2,
	EFortTutorialGlowType__EFortTutorialGlowType_MAX = 3
};


// Enum FortniteUI.EFortBangSize
enum class EFortBangSize
{
	EFortBangSize__XXS             = 0,
	EFortBangSize__XS              = 1,
	EFortBangSize__S               = 2,
	EFortBangSize__M               = 3,
	EFortBangSize__L               = 4,
	EFortBangSize__XL              = 5,
	EFortBangSize__EFortBangSize_MAX = 6
};


// Enum FortniteUI.EFortUIState
enum class EFortUIState
{
	EFortUIState__Invalid          = 0,
	EFortUIState__Login            = 1,
	EFortUIState__JoinServer       = 2,
	EFortUIState__SubgameSelect    = 3,
	EFortUIState__FrontEnd         = 4,
	EFortUIState__PvE_PostGame     = 5,
	EFortUIState__PvP_PostGame     = 6,
	EFortUIState__InGame           = 7,
	EFortUIState__Cinematic        = 8,
	EFortUIState__Athena           = 9,
	EFortUIState__MAX              = 10,
	EFortUIState__EFortUIState_MAX = 11
};


// Enum FortniteUI.EFortPlayerControllerProcessing
enum class EFortPlayerControllerProcessing
{
	EFortPlayerControllerProcessing__NoPlayerControllerProcessing = 0,
	EFortPlayerControllerProcessing__LetPlayerControllerProcessFirst = 1,
	EFortPlayerControllerProcessing__HandleAllInput = 2,
	EFortPlayerControllerProcessing__EFortPlayerControllerProcessing_MAX = 3
};


// Enum FortniteUI.EVaultItemChangedType
enum class EVaultItemChangedType
{
	EVaultItemChangedType__Added   = 0,
	EVaultItemChangedType__Removed = 1,
	EVaultItemChangedType__NoChange = 2,
	EVaultItemChangedType__EVaultItemChangedType_MAX = 3
};


// Enum FortniteUI.EFortLoginAccountType
enum class EFortLoginAccountType
{
	EFortLoginAccountType__Epic    = 0,
	EFortLoginAccountType__PS4     = 1,
	EFortLoginAccountType__XboxOne = 2,
	EFortLoginAccountType__EFortLoginAccountType_MAX = 3
};


// Enum FortniteUI.EGridSortKind
enum class EGridSortKind
{
	EGridSortKind__None            = 0,
	EGridSortKind__ByNumber        = 1,
	EGridSortKind__ByString        = 2,
	EGridSortKind__ByNumberThenString = 3,
	EGridSortKind__ByStringThenNumber = 4,
	EGridSortKind__EGridSortKind_MAX = 5
};


// Enum FortniteUI.ESquadSlotItemRestrictionReason
enum class ESquadSlotItemRestrictionReason
{
	ESquadSlotItemRestrictionReason__VaultOverflow = 0,
	ESquadSlotItemRestrictionReason__MissingLeadershipForHeroType = 1,
	ESquadSlotItemRestrictionReason__ReplacementWouldClearMandatorySlot = 2,
	ESquadSlotItemRestrictionReason__ESquadSlotItemRestrictionReason_MAX = 3
};


// Enum FortniteUI.EFortUIGameFeedbackType
enum class EFortUIGameFeedbackType
{
	EFortUIGameFeedbackType__Bug   = 0,
	EFortUIGameFeedbackType__Comment = 1,
	EFortUIGameFeedbackType__Player = 2,
	EFortUIGameFeedbackType__EFortUIGameFeedbackType_MAX = 3
};


// Enum FortniteUI.EFortMtxStoreOfferType
enum class EFortMtxStoreOfferType
{
	EFortMtxStoreOfferType__FoundersPack = 0,
	EFortMtxStoreOfferType__CurrencyPack = 1,
	EFortMtxStoreOfferType__Max_None = 2,
	EFortMtxStoreOfferType__EFortMtxStoreOfferType_MAX = 3
};


// Enum FortniteUI.EFortItemManagementMode
enum class EFortItemManagementMode
{
	EFortItemManagementMode__Details = 0,
	EFortItemManagementMode__Comparison = 1,
	EFortItemManagementMode__Mulch = 2,
	EFortItemManagementMode__EFortItemManagementMode_MAX = 3
};


// Enum FortniteUI.EFortSocialPanelTab
enum class EFortSocialPanelTab
{
	EFortSocialPanelTab__PartyInvitations = 0,
	EFortSocialPanelTab__Friends   = 1,
	EFortSocialPanelTab__RecentPlayers = 2,
	EFortSocialPanelTab__Max       = 3,
	EFortSocialPanelTab__EFortSocialPanelTab_MAX = 4
};


// Enum FortniteUI.EFortSocialPanelType
enum class EFortSocialPanelType
{
	EFortSocialPanelType__Join     = 0,
	EFortSocialPanelType__Invite   = 1,
	EFortSocialPanelType__Max      = 2,
	EFortSocialPanelType__EFortSocialPanelType_MAX = 3
};


// Enum FortniteUI.EModalContainerSize
enum class EModalContainerSize
{
	EModalContainerSize__ExtraSmall = 0,
	EModalContainerSize__Small     = 1,
	EModalContainerSize__Medium    = 2,
	EModalContainerSize__Large     = 3,
	EModalContainerSize__Max       = 4,
	EModalContainerSize__EModalContainerSize_MAX = 5
};


// Enum FortniteUI.ENotificationType
enum class ENotificationType
{
	ENotificationType__Basic       = 0,
	ENotificationType__Friends     = 1,
	ENotificationType__ENotificationType_MAX = 2
};


// Enum FortniteUI.ENotificationResult
enum class ENotificationResult
{
	ENotificationResult__Confirmed = 0,
	ENotificationResult__Declined  = 1,
	ENotificationResult__Unknown   = 2,
	ENotificationResult__ENotificationResult_MAX = 3
};


// Enum FortniteUI.EFortInventoryContext
enum class EFortInventoryContext
{
	EFortInventoryContext__Game    = 0,
	EFortInventoryContext__Lobby   = 1,
	EFortInventoryContext__FrontEnd = 2,
	EFortInventoryContext__Pickup  = 3,
	EFortInventoryContext__EFortInventoryContext_MAX = 4
};


// Enum FortniteUI.EFortSquadSlottingRestrictionReason
enum class EFortSquadSlottingRestrictionReason
{
	EFortSquadSlottingRestrictionReason__ItemIsInInventoryOverflow = 0,
	EFortSquadSlottingRestrictionReason__MandatorySlotWouldBeEmptied = 1,
	EFortSquadSlottingRestrictionReason__ItemIsOnActiveExpedition = 2,
	EFortSquadSlottingRestrictionReason__HeroRequiresMissingGameplayTag = 3,
	EFortSquadSlottingRestrictionReason__EFortSquadSlottingRestrictionReason_MAX = 4
};


// Enum FortniteUI.EFortAlterationWidgetState
enum class EFortAlterationWidgetState
{
	EFortAlterationWidgetState__Normal = 0,
	EFortAlterationWidgetState__Upgrade = 1,
	EFortAlterationWidgetState__EFortAlterationWidgetState_MAX = 2
};


// Enum FortniteUI.ECollectionBookRewardStatus
enum class ECollectionBookRewardStatus
{
	ECollectionBookRewardStatus__Unknown = 0,
	ECollectionBookRewardStatus__Available = 1,
	ECollectionBookRewardStatus__Claimed = 2,
	ECollectionBookRewardStatus__ECollectionBookRewardStatus_MAX = 3
};


// Enum FortniteUI.ECollectionBookPrimaryNavTarget
enum class ECollectionBookPrimaryNavTarget
{
	ECollectionBookPrimaryNavTarget__Overview = 0,
	ECollectionBookPrimaryNavTarget__SectionTileView = 1,
	ECollectionBookPrimaryNavTarget__ECollectionBookPrimaryNavTarget_MAX = 2
};


// Enum FortniteUI.EFortExpeditionListSort
enum class EFortExpeditionListSort
{
	EFortExpeditionListSort__ByRating = 0,
	EFortExpeditionListSort__ByDuration = 1,
	EFortExpeditionListSort__ByName = 2,
	EFortExpeditionListSort__EFortExpeditionListSort_MAX = 3
};


// Enum FortniteUI.EFortKeybindForcedHoldStatus
enum class EFortKeybindForcedHoldStatus
{
	EFortKeybindForcedHoldStatus__NoForcedHold = 0,
	EFortKeybindForcedHoldStatus__ForcedHold = 1,
	EFortKeybindForcedHoldStatus__NeverShowHold = 2,
	EFortKeybindForcedHoldStatus__EFortKeybindForcedHoldStatus_MAX = 3
};


// Enum FortniteUI.EFortItemInspectionMode
enum class EFortItemInspectionMode
{
	EFortItemInspectionMode__Overview = 0,
	EFortItemInspectionMode__Details = 1,
	EFortItemInspectionMode__View  = 2,
	EFortItemInspectionMode__Evolution = 3,
	EFortItemInspectionMode__Upgrade = 4,
	EFortItemInspectionMode__EFortItemInspectionMode_MAX = 5
};


// Enum FortniteUI.EFortReturnToFrontendBehavior
enum class EFortReturnToFrontendBehavior
{
	EFortReturnToFrontendBehavior__NotSpecified = 0,
	EFortReturnToFrontendBehavior__HomeScreen = 1,
	EFortReturnToFrontendBehavior__MapScreen = 2,
	EFortReturnToFrontendBehavior__MapScreenWithAutoLaunch = 3,
	EFortReturnToFrontendBehavior__MapScreenWithMinimalAutoLaunch = 4,
	EFortReturnToFrontendBehavior__EFortReturnToFrontendBehavior_MAX = 5
};


// Enum FortniteUI.ENameStatus
enum class ENameStatus
{
	ENameStatus__Valid             = 0,
	ENameStatus__TooShort          = 1,
	ENameStatus__TooLong           = 2,
	ENameStatus__ContainsInvalidCharacter = 3,
	ENameStatus__ENameStatus_MAX   = 4
};


// Enum FortniteUI.EFortPerksWidgetState
enum class EFortPerksWidgetState
{
	EFortPerksWidgetState__Normal  = 0,
	EFortPerksWidgetState__Upgrade = 1,
	EFortPerksWidgetState__Evolution = 2,
	EFortPerksWidgetState__EFortPerksWidgetState_MAX = 3
};


// Enum FortniteUI.ECenterPopupMessageStateEnum
enum class ECenterPopupMessageStateEnum
{
	ECenterPopupMessageStateEnum__NotVisible = 0,
	ECenterPopupMessageStateEnum__WaitingForMatchDelayCountDown = 1,
	ECenterPopupMessageStateEnum__WaitingForOutpostOwner = 2,
	ECenterPopupMessageStateEnum__WaitingForPlayers = 3,
	ECenterPopupMessageStateEnum__ECenterPopupMessageStateEnum_MAX = 4
};


// Enum FortniteUI.EAthenaPlayerActionAlert
enum class EAthenaPlayerActionAlert
{
	EAthenaPlayerActionAlert__PlayerDown = 0,
	EAthenaPlayerActionAlert__PlayerKill = 1,
	EAthenaPlayerActionAlert__EnteredStorm = 2,
	EAthenaPlayerActionAlert__EAthenaPlayerActionAlert_MAX = 3
};


// Enum FortniteUI.EConversionControlKeyRequest
enum class EConversionControlKeyRequest
{
	EConversionControlKeyRequest__AllKeys = 0,
	EConversionControlKeyRequest__NonConsumableKeys = 1,
	EConversionControlKeyRequest__ConsumableKeys = 2,
	EConversionControlKeyRequest__EConversionControlKeyRequest_MAX = 3
};


// Enum FortniteUI.EItemRecyclingWarning
enum class EItemRecyclingWarning
{
	EItemRecyclingWarning__HighLevel = 0,
	EItemRecyclingWarning__HighRarity = 1,
	EItemRecyclingWarning__HighTier = 2,
	EItemRecyclingWarning__CanSlotInCollectionBook = 3,
	EItemRecyclingWarning__EItemRecyclingWarning_MAX = 4
};


// Enum FortniteUI.EItemDisassembleRestrictionReason
enum class EItemDisassembleRestrictionReason
{
	EItemDisassembleRestrictionReason__InnatelyCannotDisassemble = 0,
	EItemDisassembleRestrictionReason__ItemWasGifted = 1,
	EItemDisassembleRestrictionReason__EItemDisassembleRestrictionReason_MAX = 2
};


// Enum FortniteUI.EItemRecyclingRestrictionReason
enum class EItemRecyclingRestrictionReason
{
	EItemRecyclingRestrictionReason__InnatelyUnrecyclable = 0,
	EItemRecyclingRestrictionReason__IsSlottedGroundOperative = 1,
	EItemRecyclingRestrictionReason__MissingCatalyst = 2,
	EItemRecyclingRestrictionReason__ItemOutOnExpedition = 3,
	EItemRecyclingRestrictionReason__EItemRecyclingRestrictionReason_MAX = 4
};


// Enum FortniteUI.EVaultItemLimitStatus
enum class EVaultItemLimitStatus
{
	EVaultItemLimitStatus__WellBelowCapacity = 0,
	EVaultItemLimitStatus__NearCapacity = 1,
	EVaultItemLimitStatus__AtCapacity = 2,
	EVaultItemLimitStatus__OverCapacity = 3,
	EVaultItemLimitStatus__EVaultItemLimitStatus_MAX = 4
};


// Enum FortniteUI.EFortItemCountStyle
enum class EFortItemCountStyle
{
	EFortItemCountStyle__StackCount = 0,
	EFortItemCountStyle__OverrideCount = 1,
	EFortItemCountStyle__StackCountOverOverride = 2,
	EFortItemCountStyle__EFortItemCountStyle_MAX = 3
};


// Enum FortniteUI.EFortLegacySlateWidget
enum class EFortLegacySlateWidget
{
	EFortLegacySlateWidget__None   = 0,
	EFortLegacySlateWidget__Options = 1,
	EFortLegacySlateWidget__FriendsList = 2,
	EFortLegacySlateWidget__Feedback = 3,
	EFortLegacySlateWidget__Minimap = 4,
	EFortLegacySlateWidget__DefaultObjective = 5,
	EFortLegacySlateWidget__Chat   = 6,
	EFortLegacySlateWidget__BannerSelect = 7,
	EFortLegacySlateWidget__AthenaMiniMap = 8,
	EFortLegacySlateWidget__MAX    = 9,
	EFortLegacySlateWidget__EFortLegacySlateWidget_MAX = 10
};


// Enum FortniteUI.EFortMaterialProgressBarSectionOverflowBehavior
enum class EFortMaterialProgressBarSectionOverflowBehavior
{
	EFortMaterialProgressBarSectionOverflowBehavior__PreserveValues = 0,
	EFortMaterialProgressBarSectionOverflowBehavior__ReverseCollapse = 1,
	EFortMaterialProgressBarSectionOverflowBehavior__EFortMaterialProgressBarSectionOverflowBehavior_MAX = 2
};


// Enum FortniteUI.EFortMaterialProgressBarSectionColorNumber
enum class EFortMaterialProgressBarSectionColorNumber
{
	EFortMaterialProgressBarSectionColorNumber__Color1 = 0,
	EFortMaterialProgressBarSectionColorNumber__Color2 = 1,
	EFortMaterialProgressBarSectionColorNumber__EFortMaterialProgressBarSectionColorNumber_MAX = 2
};


// Enum FortniteUI.EFortMaterialProgressBarSection
enum class EFortMaterialProgressBarSection
{
	EFortMaterialProgressBarSection__Primary = 0,
	EFortMaterialProgressBarSection__Secondary = 1,
	EFortMaterialProgressBarSection__Tertiary = 2,
	EFortMaterialProgressBarSection__Negative = 3,
	EFortMaterialProgressBarSection__MAX_PROGRESS_BAR_SECTIONS = 4,
	EFortMaterialProgressBarSection__EFortMaterialProgressBarSection_MAX = 5
};


// Enum FortniteUI.EModalContainerSlot
enum class EModalContainerSlot
{
	EModalContainerSlot__Top       = 0,
	EModalContainerSlot__Middle    = 1,
	EModalContainerSlot__Bottom    = 2,
	EModalContainerSlot__Background = 3,
	EModalContainerSlot__Max       = 4,
	EModalContainerSlot__EModalContainerSlot_MAX = 5
};


// Enum FortniteUI.EFortRewardItemType
enum class EFortRewardItemType
{
	EFortRewardItemType__RewardedBadges = 0,
	EFortRewardItemType__MissedBadges = 1,
	EFortRewardItemType__RewardedItems = 2,
	EFortRewardItemType__RewardedAccountItems = 3,
	EFortRewardItemType__EFortRewardItemType_MAX = 4
};


// Enum FortniteUI.EFrontEndRewardType
enum class EFrontEndRewardType
{
	EFrontEndRewardType__Mission   = 0,
	EFrontEndRewardType__Quest     = 1,
	EFrontEndRewardType__EpicNewQuest = 2,
	EFrontEndRewardType__Expedition = 3,
	EFrontEndRewardType__CollectionBook = 4,
	EFrontEndRewardType__MissionAlert = 5,
	EFrontEndRewardType__EFrontEndRewardType_MAX = 6
};


// Enum FortniteUI.EFortUISurvivorSquadMatchType
enum class EFortUISurvivorSquadMatchType
{
	EFortUISurvivorSquadMatchType__Multi = 0,
	EFortUISurvivorSquadMatchType__Single = 1,
	EFortUISurvivorSquadMatchType__Summary = 2,
	EFortUISurvivorSquadMatchType__Max_None = 3,
	EFortUISurvivorSquadMatchType__EFortUISurvivorSquadMatchType_MAX = 4
};


// Enum FortniteUI.EPauseType
enum class EPauseType
{
	EPauseType__NoPause            = 0,
	EPauseType__Rare               = 1,
	EPauseType__New                = 2,
	EPauseType__NewAndRare         = 3,
	EPauseType__EPauseType_MAX     = 4
};


// Enum FortniteUI.ECardPackPurchaseError
enum class ECardPackPurchaseError
{
	ECardPackPurchaseError__PendingServerConfirmation = 0,
	ECardPackPurchaseError__CannotAffordItem = 1,
	ECardPackPurchaseError__NoneLeft = 2,
	ECardPackPurchaseError__PurchaseAlreadyPending = 3,
	ECardPackPurchaseError__NoConnection = 4,
	ECardPackPurchaseError__ECardPackPurchaseError_MAX = 5
};


// Enum FortniteUI.EFortStoreTransition
enum class EFortStoreTransition
{
	EFortStoreTransition__X        = 0,
	EFortStoreTransition__EFortStoreTransition_MAX = 1
};


// Enum FortniteUI.EFortLoginState
enum class EFortLoginState
{
	EFortLoginState__AutoLogin     = 0,
	EFortLoginState__ManualLogin   = 1,
	EFortLoginState__EFortLoginState_MAX = 2
};


// Enum FortniteUI.EVaultCommandType
enum class EVaultCommandType
{
	EVaultCommandType__Upgrade     = 0,
	EVaultCommandType__Customize   = 1,
	EVaultCommandType__Recycle     = 2,
	EVaultCommandType__Retire      = 3,
	EVaultCommandType__Boost       = 4,
	EVaultCommandType__Evolve      = 5,
	EVaultCommandType__Transform   = 6,
	EVaultCommandType__None        = 7,
	EVaultCommandType__EVaultCommandType_MAX = 8
};


// Enum FortniteUI.EFortNodePrerequisiteConnector
enum class EFortNodePrerequisiteConnector
{
	EFortNodePrerequisiteConnector__ANDConnector = 0,
	EFortNodePrerequisiteConnector__ORConnector = 1,
	EFortNodePrerequisiteConnector__EFortNodePrerequisiteConnector_MAX = 2
};


// Enum FortniteUI.EFortUINavigationOp
enum class EFortUINavigationOp
{
	EFortUINavigationOp__PopContentStack = 0,
	EFortUINavigationOp__FeatureSwitch = 1,
	EFortUINavigationOp__NavigateToSkillTree = 2,
	EFortUINavigationOp__NavigateToSquadSlot = 3,
	EFortUINavigationOp__NavigateToQuest = 4,
	EFortUINavigationOp__NavigateToItemManagement = 5,
	EFortUINavigationOp__NavigateToExpeditions = 6,
	EFortUINavigationOp__NavigateToCollectionBook = 7,
	EFortUINavigationOp__None      = 8,
	EFortUINavigationOp__EFortUINavigationOp_MAX = 9
};


// Enum FortniteUI.EFortNameValidationResult
enum class EFortNameValidationResult
{
	EFortNameValidationResult__Valid = 0,
	EFortNameValidationResult__TooShort = 1,
	EFortNameValidationResult__TooLong = 2,
	EFortNameValidationResult__IllegalCharacter = 3,
	EFortNameValidationResult__EFortNameValidationResult_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FortniteUI.FortTabButtonLabelInfo
// 0x00A8
struct FFortTabButtonLabelInfo
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 IconBrush;                                                // 0x0018(0x0090) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct FortniteUI.FortTabListRegistrationInfo
// 0x00D0
struct FFortTabListRegistrationInfo
{
	struct FName                                       TabNameID;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAllowedInZone : 1;                                       // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // 0x0010(0x00A8) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UClass*                                      TabButtonType;                                            // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      TabContentType;                                           // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidget*                                     CreatedTabContentWidget;                                  // 0x00C8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.FortMtxDetailsAttribute
// 0x0030
struct FFortMtxDetailsAttribute
{
	struct FText                                       Name;                                                     // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       Value;                                                    // 0x0018(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortMtxGradient
// 0x0020
struct FFortMtxGradient
{
	struct FLinearColor                                Start;                                                    // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                Stop;                                                     // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.FortUIAlteration
// 0x0018
struct FFortUIAlteration
{
	class UFortAlterationItemDefinition*               AlterationDef;                                            // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RequiredMinLevel;                                         // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsUpgrade : 1;                                           // 0x000C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                CurrentItemLevel;                                         // 0x0010(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0014(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortUIAlteration.Rarity
};

// ScriptStruct FortniteUI.FortStateStyle
// 0x0380
struct FFortStateStyle
{
	struct FFortMultiSizeBrush                         Brush;                                                    // 0x0000(0x0360) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FLinearColor                                PrimaryColor;                                             // 0x0360(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                SecondaryColor;                                           // 0x0370(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.FortDailyRewardsItemData
// 0x0010
struct FFortDailyRewardsItemData
{
	class UFortItem*                                   RewardItem;                                               // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RewardDay;                                                // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsCurrentReward : 1;                                      // 0x000C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsClaimed : 1;                                            // 0x000D(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.FortDailyRewardsScheduleData
// 0x0098
struct FFortDailyRewardsScheduleData
{
	struct FText                                       ScheduleTitle;                                            // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       ScheduleDescription;                                      // 0x0018(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       ScheduleItemDescription;                                  // 0x0030(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       ScheduleEpicItemDescription;                              // 0x0048(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                WeekOffset;                                               // 0x0060(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RewardsGiven;                                             // 0x0064(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RewardsAllowed;                                           // 0x0068(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<struct FFortDailyRewardsItemData>           CalendarItems;                                            // 0x0070(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<struct FFortDailyRewardsItemData>           HighValueItems;                                           // 0x0080(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      ClaimedToday : 1;                                         // 0x0090(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.ExpeditionTabInfo
// 0x00B0
struct FExpeditionTabInfo
{
	struct FName                                       TabNameID;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // 0x0008(0x00A8) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortSkillTreeNodeDisplayData
// 0x0368
struct FFortSkillTreeNodeDisplayData
{
	struct FFortMultiSizeBrush                         Icon;                                                     // 0x0000(0x0360) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UMediaSource*                                PreviewVideoMediaSource;                                  // 0x0360(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.FortSkillTreeCanvasStyle
// 0x0034
struct FFortSkillTreeCanvasStyle
{
	float                                              ConnectorThickness;                                       // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                ConnectorOwnedColor;                                      // 0x0004(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                ConnectorPurchasableColor;                                // 0x0014(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                ConnectorNonPurchasableColor;                             // 0x0024(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.FortFrontEndFeatureStruct
// 0x0018
struct FFortFrontEndFeatureStruct
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortFrontEndFeatureStruct.CurrentState
	unsigned char                                      UnknownData01[0x1];                                       // 0x0001(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortFrontEndFeatureStruct.ForcedState
	unsigned char                                      UnknownData02[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    ChangeDelegate;                                           // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
};

// ScriptStruct FortniteUI.ItemDefinitionChangedStruct
// 0x0010
struct FItemDefinitionChangedStruct
{
	struct FScriptMulticastDelegate                    ChangeDelegate;                                           // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
};

// ScriptStruct FortniteUI.FortItemManagementInventoryFilterTabLabelInfo
// 0x0008 (0x00B0 - 0x00A8)
struct FFortItemManagementInventoryFilterTabLabelInfo : public FFortTabButtonLabelInfo
{
	struct FName                                       FilterTabNameId;                                          // 0x00A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemFilterDefinition
// 0x0060
struct FFortItemFilterDefinition
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemSorterDefinition
// 0x0050
struct FFortItemSorterDefinition
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortMaterialProgressBarSectionStyle
// 0x0040
struct FFortMaterialProgressBarSectionStyle
{
	unsigned char                                      bGradientBar : 1;                                         // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       BarParamName;                                             // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BarColorOneParamName;                                     // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BarColorTwoParamName;                                     // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                BarColorOne;                                              // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                BarColorTwo;                                              // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.FortMaterialProgressBarSectionInfo
// 0x0048
struct FFortMaterialProgressBarSectionInfo
{
	struct FFortMaterialProgressBarSectionStyle        SectionStyle;                                             // 0x0000(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	float                                              Percent;                                                  // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.FortModalContainerSizeEntry
// 0x001C
struct FFortModalContainerSizeEntry
{
	float                                              AbsoluteWidth;                                            // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TopPercent;                                               // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MiddlePercent;                                            // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BottomPercent;                                            // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VerticalPadding;                                          // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HorizontalPadding;                                        // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ContentPadding;                                           // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.FortUIPerk
// 0x0088
struct FFortUIPerk
{
	struct FFortSpecializationSlot                     SpecializationSlot;                                       // 0x0000(0x0078) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UFortHero*                                   Hero;                                                     // 0x0078(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortItemTier>                         Tier;                                                     // 0x0080(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0081(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortUIPerk.SupportBonusType
	unsigned char                                      bIsTierPerk : 1;                                          // 0x0082(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsUpgrade : 1;                                           // 0x0083(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsEvolution : 1;                                         // 0x0084(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsEvolutionBranch : 1;                                   // 0x0085(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.FortUIPerkTier
// 0x0020
struct FFortUIPerkTier
{
	class UFortHeroSpecialization*                     HeroSpecialization;                                       // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortItemTier>                         Tier;                                                     // 0x0008(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UFortHero*                                   CurrentHero;                                              // 0x0010(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsUpgrade : 1;                                           // 0x0018(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsEvolution : 1;                                         // 0x0019(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.RadialOptionData
// 0x00A8
struct FRadialOptionData
{
	struct FText                                       Label;                                                    // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FSlateBrush                                 Brush;                                                    // 0x0018(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteUI.BuildingCategoryOptionData
// 0x0008 (0x00B0 - 0x00A8)
struct FBuildingCategoryOptionData : public FRadialOptionData
{
	TEnumAsByte<EFortBuildingType>                     BuildingType;                                             // 0x00A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.BuildingOptionData
// 0x0018 (0x00C0 - 0x00A8)
struct FBuildingOptionData : public FRadialOptionData
{
	struct FString                                     ClassSuffix;                                              // 0x00A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      ClassMirrored : 1;                                        // 0x00B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.ItemCategoryOptionData
// 0x0018 (0x00C0 - 0x00A8)
struct FItemCategoryOptionData : public FRadialOptionData
{
	struct FString                                     TemplatePrefix;                                           // 0x00A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TEnumAsByte<EBuildingAttachmentType>               BuildingAttachmentType;                                   // 0x00B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.ChatOptionData
// 0x0018 (0x00C0 - 0x00A8)
struct FChatOptionData : public FRadialOptionData
{
	struct FText                                       ChatText;                                                 // 0x00A8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteUI.MapNoteOptionData
// 0x0018 (0x00C0 - 0x00A8)
struct FMapNoteOptionData : public FRadialOptionData
{
	struct FText                                       MapNoteText;                                              // 0x00A8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteUI.EmoteOptionData
// 0x0008 (0x00B0 - 0x00A8)
struct FEmoteOptionData : public FRadialOptionData
{
	struct FName                                       EmoteCommand;                                             // 0x00A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.FortSwipeDetector
// 0x0130
struct FFortSwipeDetector
{
	struct FVector2D                                   SwipeThreshold;                                           // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x128];                                     // 0x0008(0x0128) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortUISurvivorSquadStatMatch
// 0x03A0
struct FFortUISurvivorSquadStatMatch
{
	struct FFortMultiSizeBrush                         Icons;                                                    // 0x0000(0x0360) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       MagnitudeText;                                            // 0x0360(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       AttributeDisplayName;                                     // 0x0378(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                NumMembersMeetingCriteria;                                // 0x0390(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumMembersRequired;                                       // 0x0394(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0398(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortUISurvivorSquadStatMatch.MatchType
	unsigned char                                      UnknownData01[0x1];                                       // 0x0399(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortUISurvivorSquadStatMatch.PreviewEffect
};

// ScriptStruct FortniteUI.CardPackOffer
// 0x0090
struct FCardPackOffer
{
	struct FText                                       Title;                                                    // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0018(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                MtxPrice;                                                 // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECatalogSaleType>                      SaleType;                                                 // 0x0034(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FText                                       SaleText;                                                 // 0x0038(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                Price;                                                    // 0x0050(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	class UFortAccountItemDefinition*                  CurrencyType;                                             // 0x0058(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                QuantityRemaining;                                        // 0x0060(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bTimedOffer : 1;                                          // 0x0064(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	struct FFortCatalogMeta                            OfferMetaData;                                            // 0x0068(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteUI.Card
// 0x0018
struct FCard
{
	int                                                QuantityReceived;                                         // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UFortItem*                                   Item;                                                     // 0x0008(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0010(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.Card.PauseType
};

// ScriptStruct FortniteUI.OpenedCardPack
// 0x0010
struct FOpenedCardPack
{
	class UFortCardPackItemDefinition*                 CardPackDefinition;                                       // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DisplayLevel;                                             // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.ContentPushState
// 0x0003
struct FContentPushState
{
	unsigned char                                      bHideHeader : 1;                                          // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHideFooter : 1;                                          // 0x0001(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHideChatWidget : 1;                                      // 0x0002(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.FortErrorInfo
// 0x0080
struct FFortErrorInfo
{
	struct FText                                       Operation;                                                // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       ErrorMessage;                                             // 0x0018(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FString                                     ErrorCode;                                                // 0x0030(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0040(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortCanvasProperties
// 0x0070
struct FFortCanvasProperties
{
	struct FMargin                                     Reserves;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bMouseAutoPan : 1;                                        // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              ActiveAreaPercent;                                        // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxZoom;                                                  // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinZoom;                                                  // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ZoomIncrement;                                            // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ConnectorThickness;                                       // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                ConnectorOwnedColor;                                      // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                ConnectorPurchasableColor;                                // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                ConnectorNonPurchasableColor;                             // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                ConnectorTowardsSelectedColor;                            // 0x0058(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    BackgroundMaterial;                                       // 0x0068(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.UINavigationData
// 0x0030
struct FUINavigationData
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UObject*                                     ObjectData;                                               // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       IdData;                                                   // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                IntData;                                                  // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.UINavigationEntry
// 0x0050
struct FUINavigationEntry
{
	struct FUINavigationData                           Data;                                                     // 0x0000(0x0030)
	struct FScriptDelegate                             NavigateToDelegate;                                       // 0x0030(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0030(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             NavigateFromDelegate;                                     // 0x0040(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0040(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
};

// ScriptStruct FortniteUI.FortUINavigationOperation
// 0x0038
struct FFortUINavigationOperation
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortUINavigationOperation.Operation
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       SquadId;                                                  // 0x0008(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SquadSlotIndex;                                           // 0x0010(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FName                                       PageId;                                                   // 0x0018(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       NodeID;                                                   // 0x0020(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortItem*                                   Item;                                                     // 0x0028(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0030(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortUINavigationOperation.Feature
	unsigned char                                      UnknownData04[0x1];                                       // 0x0031(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortUINavigationOperation.ItemManagementFilter
};

// ScriptStruct FortniteUI.FortUINavigationRequest
// 0x0010
struct FFortUINavigationRequest
{
	TArray<struct FFortUINavigationOperation>          Operations;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteUI.FortNodeStyleData
// 0x06C8 (0x06D0 - 0x0008)
struct FFortNodeStyleData : public FTableRowBase
{
	struct FFortMultiSizeBrush                         ActiveBrush;                                              // 0x0008(0x0360) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortMultiSizeBrush                         InactiveBrush;                                            // 0x0368(0x0360) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UMediaSource*                                PreviewMediaSource;                                       // 0x06C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.FortLastMissionInfo
// 0x0048
struct FFortLastMissionInfo
{
	struct FText                                       TheaterName;                                              // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       MissionName;                                              // 0x0018(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       Difficulty;                                               // 0x0030(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortBackendVersion
// 0x0098
struct FFortBackendVersion
{
	unsigned char                                      bIsValid : 1;                                             // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     App;                                                      // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     ModuleName;                                               // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     Branch;                                                   // 0x0028(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     BuildDate;                                                // 0x0038(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     ServerDate;                                               // 0x0048(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     Build;                                                    // 0x0058(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     Changelist;                                               // 0x0068(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     OverridePropertiesVersion;                                // 0x0078(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     Version;                                                  // 0x0088(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteUI.FortUIFeatureStruct
// 0x0018
struct FFortUIFeatureStruct
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortUIFeatureStruct.CurrentState
	unsigned char                                      UnknownData01[0x1];                                       // 0x0001(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortUIFeatureStruct.ForcedState
	unsigned char                                      UnknownData02[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    ChangeDelegate;                                           // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
};

// ScriptStruct FortniteUI.FortDisplayAttribute
// 0x0070
struct FFortDisplayAttribute
{
	struct FGameplayAttribute                          Attribute;                                                // 0x0000(0x0020) (CPF_BlueprintVisible)
	struct FText                                       Label;                                                    // 0x0020(0x0018) (CPF_BlueprintVisible)
	struct FText                                       Value;                                                    // 0x0038(0x0018) (CPF_BlueprintVisible)
	struct FText                                       HoverText;                                                // 0x0050(0x0018) (CPF_BlueprintVisible)
	float                                              NumericValue;                                             // 0x0068(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x006C(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortDisplayAttribute.DisplayType
	unsigned char                                      UnknownData01[0x1];                                       // 0x006D(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortDisplayAttribute.BuffState
	unsigned char                                      UnknownData02[0x1];                                       // 0x006E(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortDisplayAttribute.ClampState
	unsigned char                                      UnknownData03[0x1];                                       // 0x006F(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortDisplayAttribute.ComparisonType
};

// ScriptStruct FortniteUI.FortAttributeModifierDisplayData
// 0x00A8
struct FFortAttributeModifierDisplayData
{
	struct FGameplayAttribute                          Attribute;                                                // 0x0000(0x0020) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	float                                              Value;                                                    // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EGameplayModOp>                        ModifierType;                                             // 0x0024(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FGameplayTagRequirements                    SourceTags;                                               // 0x0028(0x0040) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FGameplayTagRequirements                    TargetTags;                                               // 0x0068(0x0040) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortFocusedBuildingInfo
// 0x0050
struct FFortFocusedBuildingInfo
{
	unsigned char                                      bIsInteractable : 1;                                      // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCanBePlayerEdited : 1;                                   // 0x0001(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FVector                                     IndicatorRelativeLocation;                                // 0x0004(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0010(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortFocusedBuildingInfo.HealthDisplayRule
	unsigned char                                      UnknownData02[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              MaxHealth;                                                // 0x0014(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsAnyTrapAttached : 1;                                   // 0x0018(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsTrapAttachedFacingPlayer : 1;                          // 0x0019(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsPreviewTrapAttached : 1;                               // 0x001A(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	float                                              AttachedTrapMaxDurability;                                // 0x001C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentLevel;                                             // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0024(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortFocusedBuildingInfo.InteractionType
	unsigned char                                      UnknownData05[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	int                                                InteractionCost;                                          // 0x0028(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                UpgradeBonus;                                             // 0x002C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortResourceType>                     BuildingMaterial;                                         // 0x0030(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsHostile : 1;                                           // 0x0031(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	struct FText                                       ContextualText;                                           // 0x0038(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteUI.VaultContentDetails
// 0x0018
struct FVaultContentDetails
{
	struct FString                                     SearchText;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0010(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.VaultContentDetails.SortType
	unsigned char                                      UnknownData01[0x1];                                       // 0x0011(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.VaultContentDetails.SubType
};

// ScriptStruct FortniteUI.GridSortKey
// 0x0018
struct FGridSortKey
{
	float                                              Number;                                                   // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     String;                                                   // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct FortniteUI.FortAthenaItemManagementInventoryFilterTabLabelInfo
// 0x0008 (0x00B0 - 0x00A8)
struct FFortAthenaItemManagementInventoryFilterTabLabelInfo : public FFortTabButtonLabelInfo
{
	struct FName                                       FilterTabNameId;                                          // 0x00A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.FortSquadIconData
// 0x0360 (0x0368 - 0x0008)
struct FFortSquadIconData : public FTableRowBase
{
	struct FFortMultiSizeBrush                         Brush;                                                    // 0x0008(0x0360) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortDisplayModifier
// 0x0038
struct FFortDisplayModifier
{
	struct FText                                       Label;                                                    // 0x0000(0x0018) (CPF_BlueprintVisible)
	struct FText                                       Value;                                                    // 0x0018(0x0018) (CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0030(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortDisplayModifier.DisplayType
	unsigned char                                      UnknownData01[0x1];                                       // 0x0031(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortDisplayModifier.BuffState
};

// ScriptStruct FortniteUI.NodeTypeData
// 0x0010 (0x0018 - 0x0008)
struct FNodeTypeData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0008(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.NodeTypeData.NodeType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UClass*                                      UIClass;                                                  // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.FortDailyRewardsData
// 0x0018
struct FFortDailyRewardsData
{
	int                                                CurrentLoginDays;                                         // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCanClaim : 1;                                            // 0x0004(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TArray<struct FFortDailyRewardsScheduleData>       Schedules;                                                // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteUI.ConsumedCriteriaData
// 0x0018
struct FConsumedCriteriaData
{
	float                                              PowerMod;                                                 // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FName>                               CriteriaNames;                                            // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FortniteUI.FortMissionRewardInfo
// 0x00B8
struct FFortMissionRewardInfo
{
	struct FSlateBrush                                 Icon;                                                     // 0x0000(0x0090) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       DisplayName;                                              // 0x0090(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UFortItem*                                   Item;                                                     // 0x00A8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsMissionAlertReward : 1;                                // 0x00B0(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.FortMissionDetails
// 0x0158
struct FFortMissionDetails
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortMissionDetails.TileType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       TheaterDisplayName;                                       // 0x0008(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       MissionName;                                              // 0x0020(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       MissionDescription;                                       // 0x0038(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UFortMissionGenerator*                       MissionDefinition;                                        // 0x0050(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       ZoneName;                                                 // 0x0058(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       ZoneDescription;                                          // 0x0070(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       RegionThemeName;                                          // 0x0088(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TAssetPtr<class USlateBrushAsset>                  RegionThemeIcon;                                          // 0x00A0(0x0020) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       DifficultyName;                                           // 0x00C0(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TArray<struct FFortMissionRewardInfo>              MissionRewards;                                           // 0x00D8(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FTimespan                                   AvailableTime;                                            // 0x00E8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                RequiredBaseRating;                                       // 0x00F0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RecommendedBaseRating;                                    // 0x00F4(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ContentDifficultyLevel;                                   // 0x00F8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ContentAccountLevel;                                      // 0x00FC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LootLevel;                                                // 0x0100(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bOverrideConningText : 1;                                 // 0x0104(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	struct FText                                       ConningOverrideText;                                      // 0x0108(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FString                                     TheaterUniqueId;                                          // 0x0120(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	class UFortCloudSaveItemDefinition*                AssociatedCloudSaveItemDefinition;                        // 0x0130(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UFortGameplayModifierItemDefinition*> GameplayModifiers;                                        // 0x0138(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<struct FText>                               Objectives;                                               // 0x0148(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteUI.AttributeRequirement
// 0x0020
struct FAttributeRequirement
{
	struct FText                                       Name;                                                     // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                Level;                                                    // 0x0018(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRequirementsMet : 1;                                     // 0x001C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.BuildingRequirements
// 0x0028
struct FBuildingRequirements
{
	int                                                RequiredAccountLevel;                                     // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentAccountLevel;                                      // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FAttributeRequirement>               AttributeRequirements;                                    // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	int                                                RequiredPower;                                            // 0x0018(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentPower;                                             // 0x001C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RequiredManufacturing;                                    // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentManufacturing;                                     // 0x0024(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.HeroStat
// 0x0020
struct FHeroStat
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	float                                              Value;                                                    // 0x0018(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsCategory : 1;                                          // 0x001C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.EmptyHeroSlot
// 0x0010
struct FEmptyHeroSlot
{
	class UFortHeroType*                               Type;                                                     // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumAvailable;                                             // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHasMale : 1;                                             // 0x000C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHasFemale : 1;                                           // 0x000D(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.HeroUIData
// 0x0020
struct FHeroUIData
{
	class UFortHero*                                   Hero;                                                     // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsSelected : 1;                                          // 0x0008(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                XPRequirementForCurrentLevel;                             // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                XPRequirementForNextLevel;                                // 0x0010(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RequiredXPToLevelUp;                                      // 0x0014(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsMaxHeroLevel : 1;                                      // 0x0018(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.FortBasicMissionInfo
// 0x03B8
struct FFortBasicMissionInfo
{
	struct FText                                       MissionName;                                              // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortMultiSizeBrush                         MissionIcons;                                             // 0x0018(0x0360) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       TheaterName;                                              // 0x0378(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       DifficultyName;                                           // 0x0390(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UMediaSource*                                EndOfMissionMediaSource;                                  // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSkipEndOfMissionVideo : 1;                               // 0x03B0(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.FortKillerVisualInfo
// 0x00A8
struct FFortKillerVisualInfo
{
	struct FSlateBrush                                 KillerBrush;                                              // 0x0000(0x0090) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       KillerName;                                               // 0x0090(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortItemListFilter
// 0x0018
struct FFortItemListFilter
{
	struct FString                                     SearchText;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0010(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortItemListFilter.FilterType
	unsigned char                                      bInStorageVault : 1;                                      // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIncludeVaultOverflow : 1;                                // 0x0012(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemTransformFilterTabLabelInfo
// 0x00C8
struct FFortItemTransformFilterTabLabelInfo
{
	struct FName                                       FilterTabNameId;                                          // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortTabButtonLabelInfo                     TabButtonLabelInfo;                                       // 0x0008(0x00A8) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) UNKNOWN PROPERTY: ArrayProperty FortniteUI.FortItemTransformFilterTabLabelInfo.ItemFilters
	unsigned char                                      UnknownData01[0x1];                                       // 0x00C0(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortItemTransformFilterTabLabelInfo.ItemType
};

// ScriptStruct FortniteUI.FortRichTextStyleData
// 0x0210 (0x0218 - 0x0008)
struct FFortRichTextStyleData : public FTableRowBase
{
	struct FTextBlockStyle                             TextStyle;                                                // 0x0008(0x0208) (CPF_Edit)
	unsigned char                                      bHyperlinkStyle : 1;                                      // 0x0210(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.FortLandingPageDefenderSummaryInfo
// 0x0030
struct FFortLandingPageDefenderSummaryInfo
{
	struct FName                                       SquadId;                                                  // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       TheaterDisplayName;                                       // 0x0008(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FString                                     TheaterUniqueId;                                          // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteUI.FortAttributeModifierAccumulation
// 0x0030
struct FFortAttributeModifierAccumulation
{
	struct FGameplayTag                                GameplayTag;                                              // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FGameplayAttribute                          Attribute;                                                // 0x0008(0x0020) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                               // 0x0028(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              Magnitude;                                                // 0x002C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.FortSurvivorSquadSelectorButtonPersonalityMatches
// 0x0370
struct FFortSurvivorSquadSelectorButtonPersonalityMatches
{
	int                                                NumPersonalityMatches;                                    // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TotalNonLeaderSquadMembers;                               // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      HavePersonalityIcons : 1;                                 // 0x0008(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FFortMultiSizeBrush                         PersonalityIcons;                                         // 0x0010(0x0360) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortSurvivorSquadSelectorButtonSummaryStats
// 0x0070
struct FFortSurvivorSquadSelectorButtonSummaryStats
{
	struct FName                                       SquadId;                                                  // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayAttribute                          FortAttribute;                                            // 0x0008(0x0020) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	float                                              FortAttributeValue;                                       // 0x0028(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FGameplayAttribute                          FortTeamAttribute;                                        // 0x0030(0x0020) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	float                                              TeamFortAttributeValue;                                   // 0x0050(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SquadPowerValue;                                          // 0x0054(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       FortAttributeName;                                        // 0x0058(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortUIXpInfo
// 0x002C
struct FFortUIXpInfo
{
	int                                                InitialLevel;                                             // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InitialDisplayXp;                                         // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortExperienceDelta                        ChangeInXp;                                               // 0x0008(0x0024) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortUINodePrerequisite
// 0x0710
struct FFortUINodePrerequisite
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortNodeStyleData                          Style;                                                    // 0x0018(0x06D0) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bIsNodePage : 1;                                          // 0x06E8(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06E9(0x0003) MISSED OFFSET
	int                                                MinRequiredNodesInPage;                                   // 0x06EC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OwnedNodesInPage;                                         // 0x06F0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x06F4(0x0004) MISSED OFFSET
	struct FText                                       NodeType;                                                 // 0x06F8(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortHeroNamesData
// 0x0030 (0x0038 - 0x0008)
struct FFortHeroNamesData : public FTableRowBase
{
	struct FString                                     FirstName;                                                // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     NickName;                                                 // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     LastName;                                                 // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
