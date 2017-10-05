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
enum class EFortAnimSpeed : uint8_t
{
	Instant                        = 0,
	Fast                           = 1,
	Normal                         = 2,
	EFortAnimSpeed_MAX             = 3
};


// Enum FortniteUI.EFortItemCardSize
enum class EFortItemCardSize : uint8_t
{
	XXS                            = 0,
	XS                             = 1,
	S                              = 2,
	M                              = 3,
	L                              = 4,
	XL                             = 5,
	XXL                            = 6,
	EFortItemCardSize_MAX          = 7
};


// Enum FortniteUI.ECollectionBookSectionNavTarget
enum class ECollectionBookSectionNavTarget : uint8_t
{
	SlotSelect                     = 0,
	SlotPicker                     = 1,
	ECollectionBookSectionNavTarget_MAX = 2
};


// Enum FortniteUI.EFortFrontEndFeatureState
enum class EFortFrontEndFeatureState : uint8_t
{
	Enabled                        = 0,
	NoHeroes                       = 1,
	NoRecruitableHeroes            = 2,
	DisabledByTutorial             = 3,
	Invalid                        = 4,
	EFortFrontEndFeatureState_MAX  = 5
};


// Enum FortniteUI.EFortFrontEndFeature
enum class EFortFrontEndFeature : uint8_t
{
	ShowHomeBase                   = 0,
	ShowHeroList                   = 1,
	ShowVault                      = 2,
	ShowStore                      = 3,
	PlayZone                       = 4,
	ShowDailyRewards               = 5,
	ShowHeroSelect                 = 6,
	RecruitHero                    = 7,
	ShowHomeBaseOverview           = 8,
	MAX_None                       = 9,
	EFortFrontEndFeature_MAX       = 10
};


// Enum FortniteUI.EFortHomebaseNodePurchaseRestrictionReason
enum class EFortHomebaseNodePurchaseRestrictionReason : uint8_t
{
	PrerequisitesNotMet            = 0,
	QuestsNotComplete              = 1,
	CanNotAffordCosts              = 2,
	VaultIsOverflown               = 3,
	EFortHomebaseNodePurchaseRestrictionReason_MAX = 4
};


// Enum FortniteUI.EFortUIFeatureState
enum class EFortUIFeatureState : uint8_t
{
	Enabled                        = 0,
	DisabledByTutorial             = 1,
	DisabledByContentInstall       = 2,
	Invalid                        = 3,
	EFortUIFeatureState_MAX        = 4
};


// Enum FortniteUI.EFortUIFeature
enum class EFortUIFeature : uint8_t
{
	ShowHome                       = 0,
	ShowPlay                       = 1,
	ShowHeros                      = 2,
	ShowSquads                     = 3,
	ShowArmory                     = 4,
	ShowSkillTree                  = 5,
	ShowStore                      = 6,
	ShowQuests                     = 7,
	ShowMainStore                  = 8,
	ShowCampaign                   = 9,
	ShowActiveBoost                = 10,
	ShowJournal                    = 11,
	ShowPartyBar                   = 12,
	ShowChatWindow                 = 13,
	ShowFriendsMenu                = 14,
	ShowObjectives                 = 15,
	Max_None                       = 16,
	EFortUIFeature_MAX             = 17
};


// Enum FortniteUI.EFlagStatus
enum class EFlagStatus : uint8_t
{
	FlagPresent                    = 0,
	FlagNotPresent                 = 1,
	EFlagStatus_MAX                = 2
};


// Enum FortniteUI.EInputPriority
enum class EInputPriority : uint8_t
{
	Normal                         = 0,
	Menu                           = 1,
	Chat                           = 2,
	Modal                          = 3,
	Confirmation                   = 4,
	Error                          = 5,
	HUD                            = 6,
	EInputPriority_MAX             = 7
};


// Enum FortniteUI.EFortInputMode
enum class EFortInputMode : uint8_t
{
	Frontend                       = 0,
	InGame                         = 1,
	InGameCursor                   = 2,
	EFortInputMode_MAX             = 3
};


// Enum FortniteUI.EFortUrlType
enum class EFortUrlType : uint8_t
{
	NormalWebLink                  = 0,
	AccountCreationLink            = 1,
	HelpLink                       = 2,
	EULALink                       = 3,
	EFortUrlType_MAX               = 4
};


// Enum FortniteUI.EFortComparisonType
enum class EFortComparisonType : uint8_t
{
	None                           = 0,
	HigherValue                    = 1,
	LowerValue                     = 2,
	Upgrade                        = 3,
	EFortComparisonType_MAX        = 4
};


// Enum FortniteUI.EFortClampState
enum class EFortClampState : uint8_t
{
	NoClamp                        = 0,
	MinClamp                       = 1,
	MaxClamp                       = 2,
	EFortClampState_MAX            = 3
};


// Enum FortniteUI.EFortBuffState
enum class EFortBuffState : uint8_t
{
	NoChange                       = 0,
	Better                         = 1,
	Worse                          = 2,
	EFortBuffState_MAX             = 3
};


// Enum FortniteUI.EFortStatValueDisplayType
enum class EFortStatValueDisplayType : uint8_t
{
	BasicPaired                    = 0,
	BasicSingle                    = 1,
	Unique                         = 2,
	ElementalFire                  = 3,
	ElementalIce                   = 4,
	ElementalElectric              = 5,
	EFortStatValueDisplayType_MAX  = 6
};


// Enum FortniteUI.EFortHitPointModificationReason
enum class EFortHitPointModificationReason : uint8_t
{
	Invalid                        = 0,
	InitalSet                      = 1,
	AutoRegen                      = 2,
	ItemRegen                      = 3,
	DamageOverTime                 = 4,
	DamageReceived                 = 5,
	EFortHitPointModificationReason_MAX = 6
};


// Enum FortniteUI.EFortBuildingInteraction
enum class EFortBuildingInteraction : uint8_t
{
	None                           = 0,
	Build                          = 1,
	Repair                         = 2,
	Upgrade                        = 3,
	Edit                           = 4,
	BeingModified                  = 5,
	ConfirmEdit                    = 6,
	EFortBuildingInteraction_MAX   = 7
};


// Enum FortniteUI.EFortBuildingHealthDisplayRule
enum class EFortBuildingHealthDisplayRule : uint8_t
{
	Never                          = 0,
	Allowed                        = 1,
	Always                         = 2,
	EFortBuildingHealthDisplayRule_MAX = 3
};


// Enum FortniteUI.EFortPickerMode
enum class EFortPickerMode : uint8_t
{
	BuildingCategory               = 0,
	TrapCategory                   = 1,
	WeaponCategory                 = 2,
	SocialCategory                 = 3,
	Building                       = 4,
	Trap                           = 5,
	TrapRadial                     = 6,
	Weapon                         = 7,
	Social                         = 8,
	WeaponsSlotted                 = 9,
	EFortPickerMode_MAX            = 10
};


// Enum FortniteUI.EFortStoreState
enum class EFortStoreState : uint8_t
{
	Error                          = 0,
	Closed                         = 1,
	CardPackStore                  = 2,
	CurrencyStore                  = 3,
	WebPayment                     = 4,
	PackOpen                       = 5,
	CardEnter                      = 6,
	CardBackReveal                 = 7,
	CardFlip                       = 8,
	CardFrontReveal                = 9,
	CardExit                       = 10,
	SummaryAdd                     = 11,
	PackDestroy                    = 12,
	Summary                        = 13,
	PresentChoice                  = 14,
	ChoiceMade                     = 15,
	MAX_None                       = 16,
	EFortStoreState_MAX            = 17
};


// Enum FortniteUI.EFortItemCooldownType
enum class EFortItemCooldownType : uint8_t
{
	None                           = 0,
	AmmoRegeneration               = 1,
	ItemActivation                 = 2,
	WeaponReloading                = 3,
	Death                          = 4,
	EFortItemCooldownType_MAX      = 5
};


// Enum FortniteUI.EFortTutorialGlowType
enum class EFortTutorialGlowType : uint8_t
{
	None                           = 0,
	Look                           = 1,
	Click                          = 2,
	EFortTutorialGlowType_MAX      = 3
};


// Enum FortniteUI.EFortBangSize
enum class EFortBangSize : uint8_t
{
	XXS                            = 0,
	XS                             = 1,
	S                              = 2,
	M                              = 3,
	L                              = 4,
	XL                             = 5,
	EFortBangSize_MAX              = 6
};


// Enum FortniteUI.EFortUIState
enum class EFortUIState : uint8_t
{
	Invalid                        = 0,
	Login                          = 1,
	JoinServer                     = 2,
	SubgameSelect                  = 3,
	FrontEnd                       = 4,
	PvE_PostGame                   = 5,
	PvP_PostGame                   = 6,
	InGame                         = 7,
	Cinematic                      = 8,
	Athena                         = 9,
	MAX                            = 10,
	EFortUIState_MAX               = 11
};


// Enum FortniteUI.EFortPlayerControllerProcessing
enum class EFortPlayerControllerProcessing : uint8_t
{
	NoPlayerControllerProcessing   = 0,
	LetPlayerControllerProcessFirst = 1,
	HandleAllInput                 = 2,
	EFortPlayerControllerProcessing_MAX = 3
};


// Enum FortniteUI.EVaultItemChangedType
enum class EVaultItemChangedType : uint8_t
{
	Added                          = 0,
	Removed                        = 1,
	NoChange                       = 2,
	EVaultItemChangedType_MAX      = 3
};


// Enum FortniteUI.EFortLoginAccountType
enum class EFortLoginAccountType : uint8_t
{
	Epic                           = 0,
	PS4                            = 1,
	XboxOne                        = 2,
	EFortLoginAccountType_MAX      = 3
};


// Enum FortniteUI.EGridSortKind
enum class EGridSortKind : uint8_t
{
	None                           = 0,
	ByNumber                       = 1,
	ByString                       = 2,
	ByNumberThenString             = 3,
	ByStringThenNumber             = 4,
	EGridSortKind_MAX              = 5
};


// Enum FortniteUI.ESquadSlotItemRestrictionReason
enum class ESquadSlotItemRestrictionReason : uint8_t
{
	VaultOverflow                  = 0,
	MissingLeadershipForHeroType   = 1,
	ReplacementWouldClearMandatorySlot = 2,
	ESquadSlotItemRestrictionReason_MAX = 3
};


// Enum FortniteUI.EFortUIGameFeedbackType
enum class EFortUIGameFeedbackType : uint8_t
{
	Bug                            = 0,
	Comment                        = 1,
	Player                         = 2,
	EFortUIGameFeedbackType_MAX    = 3
};


// Enum FortniteUI.EFortMtxStoreOfferType
enum class EFortMtxStoreOfferType : uint8_t
{
	FoundersPack                   = 0,
	CurrencyPack                   = 1,
	Max_None                       = 2,
	EFortMtxStoreOfferType_MAX     = 3
};


// Enum FortniteUI.EFortItemManagementMode
enum class EFortItemManagementMode : uint8_t
{
	Details                        = 0,
	Comparison                     = 1,
	Mulch                          = 2,
	EFortItemManagementMode_MAX    = 3
};


// Enum FortniteUI.EFortSocialPanelTab
enum class EFortSocialPanelTab : uint8_t
{
	PartyInvitations               = 0,
	Friends                        = 1,
	RecentPlayers                  = 2,
	Max                            = 3,
	EFortSocialPanelTab_MAX        = 4
};


// Enum FortniteUI.EFortSocialPanelType
enum class EFortSocialPanelType : uint8_t
{
	Join                           = 0,
	Invite                         = 1,
	Max                            = 2,
	EFortSocialPanelType_MAX       = 3
};


// Enum FortniteUI.EModalContainerSize
enum class EModalContainerSize : uint8_t
{
	ExtraSmall                     = 0,
	Small                          = 1,
	Medium                         = 2,
	Large                          = 3,
	Max                            = 4,
	EModalContainerSize_MAX        = 5
};


// Enum FortniteUI.ENotificationType
enum class ENotificationType : uint8_t
{
	Basic                          = 0,
	Friends                        = 1,
	ENotificationType_MAX          = 2
};


// Enum FortniteUI.ENotificationResult
enum class ENotificationResult : uint8_t
{
	Confirmed                      = 0,
	Declined                       = 1,
	Unknown                        = 2,
	ENotificationResult_MAX        = 3
};


// Enum FortniteUI.EFortInventoryContext
enum class EFortInventoryContext : uint8_t
{
	Game                           = 0,
	Lobby                          = 1,
	FrontEnd                       = 2,
	Pickup                         = 3,
	EFortInventoryContext_MAX      = 4
};


// Enum FortniteUI.EFortSquadSlottingRestrictionReason
enum class EFortSquadSlottingRestrictionReason : uint8_t
{
	ItemIsInInventoryOverflow      = 0,
	MandatorySlotWouldBeEmptied    = 1,
	ItemIsOnActiveExpedition       = 2,
	HeroRequiresMissingGameplayTag = 3,
	EFortSquadSlottingRestrictionReason_MAX = 4
};


// Enum FortniteUI.EFortAlterationWidgetState
enum class EFortAlterationWidgetState : uint8_t
{
	Normal                         = 0,
	Upgrade                        = 1,
	Evolution                      = 2,
	EFortAlterationWidgetState_MAX = 3
};


// Enum FortniteUI.ECollectionBookRewardStatus
enum class ECollectionBookRewardStatus : uint8_t
{
	Unknown                        = 0,
	Available                      = 1,
	Claimed                        = 2,
	ECollectionBookRewardStatus_MAX = 3
};


// Enum FortniteUI.ECollectionBookPrimaryNavTarget
enum class ECollectionBookPrimaryNavTarget : uint8_t
{
	Overview                       = 0,
	SectionTileView                = 1,
	ECollectionBookPrimaryNavTarget_MAX = 2
};


// Enum FortniteUI.EFortExpeditionListSort
enum class EFortExpeditionListSort : uint8_t
{
	ByRating                       = 0,
	ByDuration                     = 1,
	ByName                         = 2,
	EFortExpeditionListSort_MAX    = 3
};


// Enum FortniteUI.EFortKeybindForcedHoldStatus
enum class EFortKeybindForcedHoldStatus : uint8_t
{
	NoForcedHold                   = 0,
	ForcedHold                     = 1,
	NeverShowHold                  = 2,
	EFortKeybindForcedHoldStatus_MAX = 3
};


// Enum FortniteUI.EFortItemInspectionMode
enum class EFortItemInspectionMode : uint8_t
{
	Overview                       = 0,
	Details                        = 1,
	View                           = 2,
	Evolution                      = 3,
	Upgrade                        = 4,
	EFortItemInspectionMode_MAX    = 5
};


// Enum FortniteUI.EFortReturnToFrontendBehavior
enum class EFortReturnToFrontendBehavior : uint8_t
{
	NotSpecified                   = 0,
	HomeScreen                     = 1,
	MapScreen                      = 2,
	MapScreenWithAutoLaunch        = 3,
	MapScreenWithMinimalAutoLaunch = 4,
	EFortReturnToFrontendBehavior_MAX = 5
};


// Enum FortniteUI.ENameStatus
enum class ENameStatus : uint8_t
{
	Valid                          = 0,
	TooShort                       = 1,
	TooLong                        = 2,
	ContainsInvalidCharacter       = 3,
	ENameStatus_MAX                = 4
};


// Enum FortniteUI.EFortPerksWidgetState
enum class EFortPerksWidgetState : uint8_t
{
	Normal                         = 0,
	Upgrade                        = 1,
	Evolution                      = 2,
	EFortPerksWidgetState_MAX      = 3
};


// Enum FortniteUI.EFortSupportPerkWidgetState
enum class EFortSupportPerkWidgetState : uint8_t
{
	Normal                         = 0,
	Upgrade                        = 1,
	Evolution                      = 2,
	EFortSupportPerkWidgetState_MAX = 3
};


// Enum FortniteUI.ECenterPopupMessageStateEnum
enum class ECenterPopupMessageStateEnum : uint8_t
{
	NotVisible                     = 0,
	WaitingForMatchDelayCountDown  = 1,
	WaitingForOutpostOwner         = 2,
	WaitingForPlayers              = 3,
	ECenterPopupMessageStateEnum_MAX = 4
};


// Enum FortniteUI.EAthenaPlayerActionAlert
enum class EAthenaPlayerActionAlert : uint8_t
{
	PlayerDown                     = 0,
	PlayerKill                     = 1,
	EnteredStorm                   = 2,
	EAthenaPlayerActionAlert_MAX   = 3
};


// Enum FortniteUI.EConversionControlKeyRequest
enum class EConversionControlKeyRequest : uint8_t
{
	AllKeys                        = 0,
	NonConsumableKeys              = 1,
	ConsumableKeys                 = 2,
	EConversionControlKeyRequest_MAX = 3
};


// Enum FortniteUI.EItemRecyclingWarning
enum class EItemRecyclingWarning : uint8_t
{
	HighLevel                      = 0,
	HighRarity                     = 1,
	HighTier                       = 2,
	CanSlotInCollectionBook        = 3,
	EItemRecyclingWarning_MAX      = 4
};


// Enum FortniteUI.EItemDisassembleRestrictionReason
enum class EItemDisassembleRestrictionReason : uint8_t
{
	InnatelyCannotDisassemble      = 0,
	ItemWasGifted                  = 1,
	EItemDisassembleRestrictionReason_MAX = 2
};


// Enum FortniteUI.EItemRecyclingRestrictionReason
enum class EItemRecyclingRestrictionReason : uint8_t
{
	InnatelyUnrecyclable           = 0,
	IsSlottedGroundOperative       = 1,
	MissingCatalyst                = 2,
	ItemOutOnExpedition            = 3,
	EItemRecyclingRestrictionReason_MAX = 4
};


// Enum FortniteUI.EVaultItemLimitStatus
enum class EVaultItemLimitStatus : uint8_t
{
	WellBelowCapacity              = 0,
	NearCapacity                   = 1,
	AtCapacity                     = 2,
	OverCapacity                   = 3,
	EVaultItemLimitStatus_MAX      = 4
};


// Enum FortniteUI.EFortItemCountStyle
enum class EFortItemCountStyle : uint8_t
{
	StackCount                     = 0,
	OverrideCount                  = 1,
	StackCountOverOverride         = 2,
	EFortItemCountStyle_MAX        = 3
};


// Enum FortniteUI.EFortLegacySlateWidget
enum class EFortLegacySlateWidget : uint8_t
{
	None                           = 0,
	FriendsList                    = 1,
	Minimap                        = 2,
	DefaultObjective               = 3,
	AthenaMiniMap                  = 4,
	MAX                            = 5,
	EFortLegacySlateWidget_MAX     = 6
};


// Enum FortniteUI.EFortMaterialProgressBarSectionOverflowBehavior
enum class EFortMaterialProgressBarSectionOverflowBehavior : uint8_t
{
	PreserveValues                 = 0,
	ReverseCollapse                = 1,
	EFortMaterialProgressBarSectionOverflowBehavior_MAX = 2
};


// Enum FortniteUI.EFortMaterialProgressBarSectionColorNumber
enum class EFortMaterialProgressBarSectionColorNumber : uint8_t
{
	Color1                         = 0,
	Color2                         = 1,
	EFortMaterialProgressBarSectionColorNumber_MAX = 2
};


// Enum FortniteUI.EFortMaterialProgressBarSection
enum class EFortMaterialProgressBarSection : uint8_t
{
	Primary                        = 0,
	Secondary                      = 1,
	Tertiary                       = 2,
	Negative                       = 3,
	MAX_PROGRESS_BAR_SECTIONS      = 4,
	EFortMaterialProgressBarSection_MAX = 5
};


// Enum FortniteUI.EModalContainerSlot
enum class EModalContainerSlot : uint8_t
{
	Top                            = 0,
	Middle                         = 1,
	Bottom                         = 2,
	Background                     = 3,
	Max                            = 4,
	EModalContainerSlot_MAX        = 5
};


// Enum FortniteUI.EFortRewardItemType
enum class EFortRewardItemType : uint8_t
{
	RewardedBadges                 = 0,
	MissedBadges                   = 1,
	RewardedItems                  = 2,
	RewardedAccountItems           = 3,
	EFortRewardItemType_MAX        = 4
};


// Enum FortniteUI.EFrontEndRewardType
enum class EFrontEndRewardType : uint8_t
{
	Mission                        = 0,
	Quest                          = 1,
	EpicNewQuest                   = 2,
	Expedition                     = 3,
	CollectionBook                 = 4,
	MissionAlert                   = 5,
	EFrontEndRewardType_MAX        = 6
};


// Enum FortniteUI.ESkillTreePageType
enum class ESkillTreePageType : uint8_t
{
	Basic                          = 0,
	Research                       = 1,
	Event                          = 2,
	ESkillTreePageType_MAX         = 3
};


// Enum FortniteUI.EFortUISurvivorSquadMatchType
enum class EFortUISurvivorSquadMatchType : uint8_t
{
	Multi                          = 0,
	Single                         = 1,
	Summary                        = 2,
	Max_None                       = 3,
	EFortUISurvivorSquadMatchType_MAX = 4
};


// Enum FortniteUI.EPauseType
enum class EPauseType : uint8_t
{
	NoPause                        = 0,
	Rare                           = 1,
	New                            = 2,
	NewAndRare                     = 3,
	EPauseType_MAX                 = 4
};


// Enum FortniteUI.ECardPackPurchaseError
enum class ECardPackPurchaseError : uint8_t
{
	PendingServerConfirmation      = 0,
	CannotAffordItem               = 1,
	NoneLeft                       = 2,
	PurchaseAlreadyPending         = 3,
	NoConnection                   = 4,
	ECardPackPurchaseError_MAX     = 5
};


// Enum FortniteUI.EFortStoreTransition
enum class EFortStoreTransition : uint8_t
{
	X                              = 0,
	EFortStoreTransition_MAX       = 1
};


// Enum FortniteUI.EFortLoginState
enum class EFortLoginState : uint8_t
{
	AutoLogin                      = 0,
	ManualLogin                    = 1,
	EFortLoginState_MAX            = 2
};


// Enum FortniteUI.EVaultCommandType
enum class EVaultCommandType : uint8_t
{
	Upgrade                        = 0,
	Customize                      = 1,
	Recycle                        = 2,
	Retire                         = 3,
	Boost                          = 4,
	Evolve                         = 5,
	Transform                      = 6,
	None                           = 7,
	EVaultCommandType_MAX          = 8
};


// Enum FortniteUI.EFortNodePrerequisiteConnector
enum class EFortNodePrerequisiteConnector : uint8_t
{
	ANDConnector                   = 0,
	ORConnector                    = 1,
	EFortNodePrerequisiteConnector_MAX = 2
};


// Enum FortniteUI.EFortUINavigationOp
enum class EFortUINavigationOp : uint8_t
{
	PopContentStack                = 0,
	FeatureSwitch                  = 1,
	NavigateToSkillTree            = 2,
	NavigateToSquadSlot            = 3,
	NavigateToQuest                = 4,
	NavigateToItemManagement       = 5,
	NavigateToExpeditions          = 6,
	NavigateToCollectionBook       = 7,
	None                           = 8,
	EFortUINavigationOp_MAX        = 9
};


// Enum FortniteUI.EFortNameValidationResult
enum class EFortNameValidationResult : uint8_t
{
	Valid                          = 0,
	TooShort                       = 1,
	TooLong                        = 2,
	IllegalCharacter               = 3,
	EFortNameValidationResult_MAX  = 4
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
	bool                                               bAllowedInZone;                                           // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // 0x0010(0x00A8) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UClass*                                      TabButtonType;                                            // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      TabContentType;                                           // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidget*                                     CreatedTabContentWidget;                                  // 0x00C8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
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
	bool                                               bIsUpgrade;                                               // 0x000C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                CurrentItemLevel;                                         // 0x0010(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortRarity                                        Rarity;                                                   // 0x0014(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUnlockedByEvolution;                                     // 0x0015(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortNodeStyleData
// 0x06C8 (0x06D0 - 0x0008)
struct FFortNodeStyleData : public FTableRowBase
{
	struct FFortMultiSizeBrush                         ActiveBrush;                                              // 0x0008(0x0360) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortMultiSizeBrush                         InactiveBrush;                                            // 0x0368(0x0360) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UMediaSource*                                PreviewMediaSource;                                       // 0x06C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.FortUIFeatureStruct
// 0x0018
struct FFortUIFeatureStruct
{
	EFortUIFeatureState                                CurrentState;                                             // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortUIFeatureState                                ForcedState;                                              // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    ChangeDelegate;                                           // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
};

// ScriptStruct FortniteUI.FortBackendVersion
// 0x0098
struct FFortBackendVersion
{
	bool                                               bIsValid;                                                 // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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

// ScriptStruct FortniteUI.FortLastMissionInfo
// 0x0048
struct FFortLastMissionInfo
{
	struct FText                                       TheaterName;                                              // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       MissionName;                                              // 0x0018(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       Difficulty;                                               // 0x0030(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
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
	EFortStatValueDisplayType                          DisplayType;                                              // 0x006C(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortBuffState                                     BuffState;                                                // 0x006D(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortClampState                                    ClampState;                                               // 0x006E(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortComparisonType                                ComparisonType;                                           // 0x006F(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	bool                                               IsCurrentReward;                                          // 0x000C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsClaimed;                                                // 0x000D(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
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
	bool                                               ClaimedToday;                                             // 0x0090(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortDailyRewardsData
// 0x0018
struct FFortDailyRewardsData
{
	int                                                CurrentLoginDays;                                         // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCanClaim;                                                // 0x0004(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TArray<struct FFortDailyRewardsScheduleData>       Schedules;                                                // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
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

// ScriptStruct FortniteUI.FortItemCard_PowerRatingBlock_Configuration
// 0x0160
struct FFortItemCard_PowerRatingBlock_Configuration
{
	struct FSlateBrush                                 PersonnelPowerRatingIconBrush;                            // 0x0000(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TAssetPtr<class UClass>                            PersonnelPowerRatingTextStyle;                            // 0x0090(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FSlateBrush                                 SchematicPowerRatingIconBrush;                            // 0x00B0(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TAssetPtr<class UClass>                            SchematicPowerRatingTextStyle;                            // 0x0140(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortItemCard_StackCountBlock_Configuration
// 0x00C0
struct FFortItemCard_StackCountBlock_Configuration
{
	struct FSlateBrush                                 BorderBrush;                                              // 0x0000(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FMargin                                     InternalPadding;                                          // 0x0090(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TAssetPtr<class UClass>                            TextStyle;                                                // 0x00A0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortItemCard_NameplateBorder_Configuration
// 0x00A0
struct FFortItemCard_NameplateBorder_Configuration
{
	struct FMargin                                     Padding;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FSlateBrush                                 Brush;                                                    // 0x0010(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortItemCard_DefenderWeaponTypeIcon_Configuration
// 0x0008
struct FFortItemCard_DefenderWeaponTypeIcon_Configuration
{
	struct FVector2D                                   IconConstraints;                                          // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_DetailAreaBorder_Configuration
// 0x0014
struct FFortItemCard_DetailAreaBorder_Configuration
{
	float                                              MinimumHeight;                                            // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMargin                                     Padding;                                                  // 0x0004(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortItemCard_TierMeter_Configuration
// 0x000C
struct FFortItemCard_TierMeter_Configuration
{
	struct FVector2D                                   PipSize;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              InterPipPadding;                                          // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_XL_PersonnelAndSchematics_Configuration
// 0x03B0
struct FFortItemCard_XL_PersonnelAndSchematics_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_PowerRatingBlock_Configuration PowerRatingBlock;                                         // 0x0010(0x0160) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0170(0x00C0) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x0230(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;                                                // 0x0238(0x00A0) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TAssetPtr<class UClass>                            ItemNameTextStyle;                                        // 0x02D8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FVector2D                                   LeadSurvivorTypeIconSize;                                 // 0x02F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FVector2D                                   FirstIconSlotSize;                                        // 0x0300(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              PaddingBetweenIconSlots;                                  // 0x0308(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   SecondIconSlotSize;                                       // 0x030C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;                                   // 0x0314(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                         // 0x031C(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	float                                              RarityNameTextLeftPadding;                                // 0x0330(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0334(0x0004) MISSED OFFSET
	TAssetPtr<class UClass>                            RarityNameTextStyle;                                      // 0x0338(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	float                                              ClassIconImageLeftPadding;                                // 0x0358(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   ClassIconSize;                                            // 0x035C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              PaddingBetweenClassIconAndName;                           // 0x0364(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TAssetPtr<class UClass>                            ClassNameTextStyle;                                       // 0x0368(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	float                                              TierMeterLeftPadding;                                     // 0x0388(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x038C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FMargin                                     IconSlotOverNameplatePadding;                             // 0x0398(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FVector2D                                   IconSlotOverNameplateSize;                                // 0x03A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_DurabilityMeter_Configuration
// 0x0014
struct FFortItemCard_DurabilityMeter_Configuration
{
	float                                              MeterThickness;                                           // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMargin                                     MeterPadding;                                             // 0x0004(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortItemCard_XL_ItemInstance_Configuration
// 0x0298
struct FFortItemCard_XL_ItemInstance_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FMargin                                     PowerRatingBlockPadding;                                  // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_PowerRatingBlock_Configuration PowerRatingBlock;                                         // 0x0020(0x0160) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0180(0x00C0) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FMargin                                     TraitBoxPadding;                                          // 0x0240(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FVector2D                                   FirstTraitSize;                                           // 0x0250(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              PaddingBetweenTraitIcons;                                 // 0x0258(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   SecondTraitSize;                                          // 0x025C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FMargin                                     TierMeterPadding;                                         // 0x0264(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x0274(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                          // 0x0280(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0294(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_LevelMeter_Configuration
// 0x0014
struct FFortItemCard_LevelMeter_Configuration
{
	float                                              MeterThickness;                                           // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMargin                                     MeterPadding;                                             // 0x0004(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortItemCard_L_PersonnelAndSchematics_Configuration
// 0x0340
struct FFortItemCard_L_PersonnelAndSchematics_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_PowerRatingBlock_Configuration PowerRatingBlock;                                         // 0x0010(0x0160) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0170(0x00C0) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x0230(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;                                                // 0x0238(0x00A0) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FVector2D                                   ClassIconSize;                                            // 0x02D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FVector2D                                   LeadSurvivorTypeIconSize;                                 // 0x02E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FVector2D                                   FirstIconSlotSize;                                        // 0x02E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              PaddingBetweenIconSlots;                                  // 0x02F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   SecondIconSlotSize;                                       // 0x02F4(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;                                   // 0x02FC(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                         // 0x0304(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_LevelMeter_Configuration      LevelMeter;                                               // 0x0318(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	float                                              TierMeterLeftPadding;                                     // 0x032C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x0330(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_AmmoCountBlock_Configuration
// 0x0020
struct FFortItemCard_AmmoCountBlock_Configuration
{
	TAssetPtr<class UClass>                            TextStyle;                                                // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortItemCard_L_ItemInstance_Configuration
// 0x02B8
struct FFortItemCard_L_ItemInstance_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FMargin                                     PowerRatingBlockPadding;                                  // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_PowerRatingBlock_Configuration PowerRatingBlock;                                         // 0x0020(0x0160) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0180(0x00C0) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_AmmoCountBlock_Configuration  AmmoCountBlock;                                           // 0x0240(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FMargin                                     TraitBoxPadding;                                          // 0x0260(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FVector2D                                   FirstTraitSize;                                           // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              PaddingBetweenTraitIcons;                                 // 0x0278(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   SecondTraitSize;                                          // 0x027C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FMargin                                     TierMeterPadding;                                         // 0x0284(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x0294(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                          // 0x02A0(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02B4(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_M_PersonnelAndSchematics_Configuration
// 0x0340
struct FFortItemCard_M_PersonnelAndSchematics_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_PowerRatingBlock_Configuration PowerRatingBlock;                                         // 0x0010(0x0160) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0170(0x00C0) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x0230(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;                                                // 0x0238(0x00A0) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FVector2D                                   ClassIconSize;                                            // 0x02D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FVector2D                                   LeadSurvivorTypeIconSize;                                 // 0x02E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FVector2D                                   FirstIconSlotSize;                                        // 0x02E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              PaddingBetweenIconSlots;                                  // 0x02F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   SecondIconSlotSize;                                       // 0x02F4(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;                                   // 0x02FC(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                         // 0x0304(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_LevelMeter_Configuration      LevelMeter;                                               // 0x0318(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	float                                              TierMeterLeftPadding;                                     // 0x032C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x0330(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_M_ItemInstance_Configuration
// 0x0290
struct FFortItemCard_M_ItemInstance_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FMargin                                     PowerRatingBlockPadding;                                  // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_PowerRatingBlock_Configuration PowerRatingBlock;                                         // 0x0020(0x0160) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0180(0x00C0) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_AmmoCountBlock_Configuration  AmmoCountBlock;                                           // 0x0240(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FMargin                                     TraitBoxPadding;                                          // 0x0260(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FVector2D                                   FirstTraitSize;                                           // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                          // 0x0278(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x028C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_S_PersonnelAndSchematics_Configuration
// 0x0340
struct FFortItemCard_S_PersonnelAndSchematics_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_PowerRatingBlock_Configuration PowerRatingBlock;                                         // 0x0010(0x0160) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0170(0x00C0) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x0230(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;                                                // 0x0238(0x00A0) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FVector2D                                   ClassIconSize;                                            // 0x02D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FVector2D                                   LeadSurvivorTypeIconSize;                                 // 0x02E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FVector2D                                   FirstIconSlotSize;                                        // 0x02E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              PaddingBetweenIconSlots;                                  // 0x02F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   SecondIconSlotSize;                                       // 0x02F4(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;                                   // 0x02FC(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                         // 0x0304(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_LevelMeter_Configuration      LevelMeter;                                               // 0x0318(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	float                                              TierMeterLeftPadding;                                     // 0x032C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x0330(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_S_ItemInstance_Configuration
// 0x01C0
struct FFortItemCard_S_ItemInstance_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FMargin                                     PowerRatingBlockPadding;                                  // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_PowerRatingBlock_Configuration PowerRatingBlock;                                         // 0x0020(0x0160) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FMargin                                     TraitBoxPadding;                                          // 0x0180(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FVector2D                                   FirstTraitSize;                                           // 0x0190(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              PaddingBetweenTraitIcons;                                 // 0x0198(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   SecondTraitSize;                                          // 0x019C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FMargin                                     TierMeterPadding;                                         // 0x01A4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x01B4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortItemCard_XS_PersonnelAndSchematics_Configuration
// 0x0034
struct FFortItemCard_XS_PersonnelAndSchematics_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                         // 0x0018(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FVector2D                                   AvailableUpgradeIconSize;                                 // 0x002C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_XS_ItemInstance_Configuration
// 0x0001
struct FFortItemCard_XS_ItemInstance_Configuration
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortFrontEndFeatureStruct
// 0x0018
struct FFortFrontEndFeatureStruct
{
	EFortFrontEndFeatureState                          CurrentState;                                             // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortFrontEndFeatureState                          ForcedState;                                              // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    ChangeDelegate;                                           // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
};

// ScriptStruct FortniteUI.FortMissionRewardInfo
// 0x00B8
struct FFortMissionRewardInfo
{
	struct FSlateBrush                                 Icon;                                                     // 0x0000(0x0090) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       DisplayName;                                              // 0x0090(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UFortItem*                                   Item;                                                     // 0x00A8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsMissionAlertReward;                                    // 0x00B0(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortMissionDetails
// 0x0160
struct FFortMissionDetails
{
	EFortTheaterMapTileType                            TileType;                                                 // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       TheaterDisplayName;                                       // 0x0008(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       MissionName;                                              // 0x0020(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       MissionDescription;                                       // 0x0038(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	bool                                               bIsGroupContent;                                          // 0x0050(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	class UFortMissionGenerator*                       MissionDefinition;                                        // 0x0058(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       ZoneName;                                                 // 0x0060(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       ZoneDescription;                                          // 0x0078(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       RegionThemeName;                                          // 0x0090(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TAssetPtr<class USlateBrushAsset>                  RegionThemeIcon;                                          // 0x00A8(0x0020) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       DifficultyName;                                           // 0x00C8(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TArray<struct FFortMissionRewardInfo>              MissionRewards;                                           // 0x00E0(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FTimespan                                   AvailableTime;                                            // 0x00F0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                RequiredBaseRating;                                       // 0x00F8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RecommendedBaseRating;                                    // 0x00FC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ContentDifficultyLevel;                                   // 0x0100(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ContentAccountLevel;                                      // 0x0104(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LootLevel;                                                // 0x0108(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bOverrideConningText;                                     // 0x010C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x010D(0x0003) MISSED OFFSET
	struct FText                                       ConningOverrideText;                                      // 0x0110(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FString                                     TheaterUniqueId;                                          // 0x0128(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	class UFortCloudSaveItemDefinition*                AssociatedCloudSaveItemDefinition;                        // 0x0138(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UFortGameplayModifierItemDefinition*> GameplayModifiers;                                        // 0x0140(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<struct FText>                               Objectives;                                               // 0x0150(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteUI.HeroUIData
// 0x0020
struct FHeroUIData
{
	class UFortHero*                                   Hero;                                                     // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsSelected;                                              // 0x0008(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                XPRequirementForCurrentLevel;                             // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                XPRequirementForNextLevel;                                // 0x0010(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RequiredXPToLevelUp;                                      // 0x0014(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsMaxHeroLevel;                                          // 0x0018(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
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

// ScriptStruct FortniteUI.FortKillerVisualInfo
// 0x00A8
struct FFortKillerVisualInfo
{
	struct FSlateBrush                                 KillerBrush;                                              // 0x0000(0x0090) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       KillerName;                                               // 0x0090(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortFocusedBuildingInfo
// 0x0050
struct FFortFocusedBuildingInfo
{
	bool                                               bIsInteractable;                                          // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCanBePlayerEdited;                                       // 0x0001(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FVector                                     IndicatorRelativeLocation;                                // 0x0004(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	EFortBuildingHealthDisplayRule                     HealthDisplayRule;                                        // 0x0010(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              MaxHealth;                                                // 0x0014(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsAnyTrapAttached;                                       // 0x0018(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsTrapAttachedFacingPlayer;                              // 0x0019(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsPreviewTrapAttached;                                   // 0x001A(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	float                                              AttachedTrapMaxDurability;                                // 0x001C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentLevel;                                             // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortBuildingInteraction                           InteractionType;                                          // 0x0024(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	int                                                InteractionCost;                                          // 0x0028(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                UpgradeBonus;                                             // 0x002C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortResourceType>                     BuildingMaterial;                                         // 0x0030(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsHostile;                                               // 0x0031(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	struct FText                                       ContextualText;                                           // 0x0038(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
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
	bool                                               bSkipEndOfMissionVideo;                                   // 0x03B0(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.ItemDefinitionChangedStruct
// 0x0010
struct FItemDefinitionChangedStruct
{
	struct FScriptMulticastDelegate                    ChangeDelegate;                                           // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
};

// ScriptStruct FortniteUI.FortItemListFilter
// 0x0018
struct FFortItemListFilter
{
	struct FString                                     SearchText;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	EFortInventoryFilter                               FilterType;                                               // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bInStorageVault;                                          // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIncludeVaultOverflow;                                    // 0x0012(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortUIPerk
// 0x0088
struct FFortUIPerk
{
	struct FFortSpecializationSlot                     SpecializationSlot;                                       // 0x0000(0x0078) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UFortHero*                                   Hero;                                                     // 0x0078(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortItemTier>                         Tier;                                                     // 0x0080(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortSupportBonusType                              SupportBonusType;                                         // 0x0081(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsTierPerk;                                              // 0x0082(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsUpgrade;                                               // 0x0083(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsEvolution;                                             // 0x0084(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsEvolutionBranch;                                       // 0x0085(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0086(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemManagementInventoryFilterTabLabelInfo
// 0x0008 (0x00B0 - 0x00A8)
struct FFortItemManagementInventoryFilterTabLabelInfo : public FFortTabButtonLabelInfo
{
	struct FName                                       FilterTabNameId;                                          // 0x00A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemEntryPreviewData
// 0x0004
struct FFortItemEntryPreviewData
{
	int                                                Quantity;                                                 // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	bool                                               bGradientBar;                                             // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
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

// ScriptStruct FortniteUI.FortUIPerkTier
// 0x0020
struct FFortUIPerkTier
{
	class UFortHeroSpecialization*                     HeroSpecialization;                                       // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortItemTier>                         Tier;                                                     // 0x0008(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UFortHero*                                   CurrentHero;                                              // 0x0010(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsUpgrade;                                               // 0x0018(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsEvolution;                                             // 0x0019(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
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
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.BuildingOptionData
// 0x0018 (0x00C0 - 0x00A8)
struct FBuildingOptionData : public FRadialOptionData
{
	struct FString                                     ClassSuffix;                                              // 0x00A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	bool                                               ClassMirrored;                                            // 0x00B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.ItemCategoryOptionData
// 0x0018 (0x00C0 - 0x00A8)
struct FItemCategoryOptionData : public FRadialOptionData
{
	struct FString                                     TemplatePrefix;                                           // 0x00A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TEnumAsByte<EBuildingAttachmentType>               BuildingAttachmentType;                                   // 0x00B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
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

// ScriptStruct FortniteUI.FortSurvivorSquadSelectorButtonPersonalityMatches
// 0x0370
struct FFortSurvivorSquadSelectorButtonPersonalityMatches
{
	int                                                NumPersonalityMatches;                                    // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TotalNonLeaderSquadMembers;                               // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               HavePersonalityIcons;                                     // 0x0008(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FFortMultiSizeBrush                         PersonalityIcons;                                         // 0x0010(0x0360) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
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
	EFortUISurvivorSquadMatchType                      MatchType;                                                // 0x0398(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortBuffState                                     PreviewEffect;                                            // 0x0399(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x039A(0x0006) MISSED OFFSET
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
	bool                                               bTimedOffer;                                              // 0x0064(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	EPauseType                                         PauseType;                                                // 0x0010(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.OpenedCardPack
// 0x0010
struct FOpenedCardPack
{
	class UFortCardPackItemDefinition*                 CardPackDefinition;                                       // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DisplayLevel;                                             // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortUIXpInfo
// 0x002C
struct FFortUIXpInfo
{
	int                                                InitialLevel;                                             // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InitialDisplayXp;                                         // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortExperienceDelta                        ChangeInXp;                                               // 0x0008(0x0024) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteUI.ContentPushState
// 0x0003
struct FContentPushState
{
	bool                                               bHideHeader;                                              // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bHideFooter;                                              // 0x0001(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bHideChatWidget;                                          // 0x0002(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.VaultContentDetails
// 0x0018
struct FVaultContentDetails
{
	struct FString                                     SearchText;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	EInventoryContentSortType                          SortType;                                                 // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortInventoryFilter                               SubType;                                                  // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortCanvasProperties
// 0x0070
struct FFortCanvasProperties
{
	struct FMargin                                     Reserves;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	bool                                               bMouseAutoPan;                                            // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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

// ScriptStruct FortniteUI.FortUINodePrerequisite
// 0x0710
struct FFortUINodePrerequisite
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortNodeStyleData                          Style;                                                    // 0x0018(0x06D0) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	bool                                               bIsNodePage;                                              // 0x06E8(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06E9(0x0003) MISSED OFFSET
	int                                                MinRequiredNodesInPage;                                   // 0x06EC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OwnedNodesInPage;                                         // 0x06F0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x06F4(0x0004) MISSED OFFSET
	struct FText                                       NodeType;                                                 // 0x06F8(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteUI.UINavigationData
// 0x0030
struct FUINavigationData
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UObject*                                     ObjectData;                                               // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       IdData;                                                   // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                IntData;                                                  // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.UINavigationEntry
// 0x0050
struct FUINavigationEntry
{
	struct FUINavigationData                           Data;                                                     // 0x0000(0x0030)
	struct FScriptDelegate                             NavigateToDelegate;                                       // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
	struct FScriptDelegate                             NavigateFromDelegate;                                     // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
};

// ScriptStruct FortniteUI.FortUINavigationOperation
// 0x0038
struct FFortUINavigationOperation
{
	EFortUINavigationOp                                Operation;                                                // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       SquadId;                                                  // 0x0008(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SquadSlotIndex;                                           // 0x0010(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FName                                       PageId;                                                   // 0x0018(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       NodeID;                                                   // 0x0020(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortItem*                                   Item;                                                     // 0x0028(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortUIFeature                                     Feature;                                                  // 0x0030(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortFrontendInventoryFilter                       ItemManagementFilter;                                     // 0x0031(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortUINavigationRequest
// 0x0010
struct FFortUINavigationRequest
{
	TArray<struct FFortUINavigationOperation>          Operations;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
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
	EFortStatValueDisplayType                          DisplayType;                                              // 0x0030(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortBuffState                                     BuffState;                                                // 0x0031(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteUI.NodeTypeData
// 0x0010 (0x0018 - 0x0008)
struct FNodeTypeData : public FTableRowBase
{
	EFortHomebaseNodeDisplayType                       NodeType;                                                 // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UClass*                                      UIClass;                                                  // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteUI.ConsumedCriteriaData
// 0x0018
struct FConsumedCriteriaData
{
	float                                              PowerMod;                                                 // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FName>                               CriteriaNames;                                            // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FortniteUI.FortItemCard_CustomRatingBlock_Configuration
// 0x0020
struct FFortItemCard_CustomRatingBlock_Configuration
{
	TAssetPtr<class UClass>                            TextStyle;                                                // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteUI.AttributeRequirement
// 0x0020
struct FAttributeRequirement
{
	struct FText                                       Name;                                                     // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                Level;                                                    // 0x0018(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRequirementsMet;                                         // 0x001C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
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
	bool                                               bIsCategory;                                              // 0x001C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteUI.EmptyHeroSlot
// 0x0010
struct FEmptyHeroSlot
{
	class UFortHeroType*                               Type;                                                     // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumAvailable;                                             // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bHasMale;                                                 // 0x000C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bHasFemale;                                               // 0x000D(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemTransformFilterTabLabelInfo
// 0x00C8
struct FFortItemTransformFilterTabLabelInfo
{
	struct FName                                       FilterTabNameId;                                          // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortTabButtonLabelInfo                     TabButtonLabelInfo;                                       // 0x0008(0x00A8) (CPF_Edit, CPF_BlueprintVisible)
	TArray<EFortInventoryFilter>                       ItemFilters;                                              // 0x00B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	EFortItemType                                      ItemType;                                                 // 0x00C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortRichTextStyleData
// 0x0210 (0x0218 - 0x0008)
struct FFortRichTextStyleData : public FTableRowBase
{
	struct FTextBlockStyle                             TextStyle;                                                // 0x0008(0x0208) (CPF_Edit)
	bool                                               bHyperlinkStyle;                                          // 0x0210(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0211(0x0007) MISSED OFFSET
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
