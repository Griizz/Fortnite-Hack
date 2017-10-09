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

// Enum FortniteGame.EFortAIDirectorEvent
enum class EFortAIDirectorEvent : uint8_t
{
	PlayerAIEnemies                = 0,
	PlayerTakeDamage               = 1,
	PlayerHealth                   = 2,
	PlayerDeath                    = 3,
	PlayerLookAtAIEnemy            = 4,
	PlayerDamageAIEnemy            = 5,
	PlayerKillAIEnemy              = 6,
	PlayerHealingPotential         = 7,
	PlayerAmmoLight                = 8,
	PlayerAmmoMedium               = 9,
	PlayerAmmoHeavy                = 10,
	PlayerAmmoShells               = 11,
	PlayerAmmoEnergy               = 12,
	PlayerAINear                   = 13,
	PlayerMovement                 = 14,
	ObjectiveTakeDamage            = 15,
	ObjectiveHealth                = 16,
	ObjectiveDestroyed             = 17,
	TrapFired                      = 18,
	TrapDamagedAIEnemy             = 19,
	ObjectivePathCost              = 20,
	PlayerPathCost                 = 21,
	ObjectiveNearbyBuildingDamaged = 22,
	Max_None                       = 23,
	EFortAIDirectorEvent_MAX       = 24
};


// Enum FortniteGame.EKeepDefenseState
enum class EKeepDefenseState : uint8_t
{
	Inactive                       = 0,
	Warmup                         = 1,
	Defense                        = 2,
	LastAlive                      = 3,
	Max                            = 4,
	EKeepDefenseState_MAX          = 5
};


// Enum FortniteGame.EFortDayPhase
enum class EFortDayPhase : uint8_t
{
	Morning                        = 0,
	Day                            = 1,
	Evening                        = 2,
	Night                          = 3,
	NumPhases                      = 4,
	EFortDayPhase_MAX              = 5
};


// Enum FortniteGame.EFortInventoryType
enum class EFortInventoryType : uint8_t
{
	World                          = 0,
	Account                        = 1,
	Outpost                        = 2,
	MAX                            = 3,
	EFortInventoryType_MAX         = 4
};


// Enum FortniteGame.EFortAlteration
enum class EFortAlteration : uint8_t
{
	AttributeSlot                  = 0,
	GameplaySlot                   = 1,
	ComplexCosmeticSlot            = 2,
	ColorSlot                      = 3,
	HeroSpecializationTier1Slot    = 4,
	HeroSpecializationTier2Slot    = 5,
	HeroSpecializationTier3Slot    = 6,
	HeroSpecializationTier4Slot    = 7,
	HeroSpecializationTier5Slot    = 8,
	EFortAlteration_MAX            = 9
};


// Enum FortniteGame.EFortItemType
enum class EFortItemType : uint8_t
{
	WorldItem                      = 0,
	Ammo                           = 1,
	Badge                          = 2,
	BackpackPickup                 = 3,
	BuildingPiece                  = 4,
	CharacterPart                  = 5,
	Deco                           = 6,
	EditTool                       = 7,
	Ingredient                     = 8,
	Food                           = 9,
	Gadget                         = 10,
	HomebaseGadget                 = 11,
	HeroAbility                    = 12,
	MissionItem                    = 13,
	Trap                           = 14,
	Weapon                         = 15,
	WeaponMelee                    = 16,
	WeaponRanged                   = 17,
	WeaponHarvest                  = 18,
	WorldResource                  = 19,
	AccountItem                    = 20,
	AccountResource                = 21,
	CollectedResource              = 22,
	Alteration                     = 23,
	CardPack                       = 24,
	CharacterCosmetic              = 25,
	Currency                       = 26,
	Hero                           = 27,
	Schematic                      = 28,
	Worker                         = 29,
	Token                          = 30,
	DailyRewardScheduleToken       = 31,
	CodeToken                      = 32,
	Buff                           = 33,
	BuffCredit                     = 34,
	Quest                          = 35,
	GameplayModifier               = 36,
	Outpost                        = 37,
	HomebaseNode                   = 38,
	Defender                       = 39,
	ConversionControl              = 40,
	DeployableBaseCloudSave        = 41,
	ConsumableAccountItem          = 42,
	Quota                          = 43,
	Expedition                     = 44,
	HomebaseBannerIcon             = 45,
	HomebaseBannerColor            = 46,
	SpecialItem                    = 47,
	Emote                          = 48,
	Stack                          = 49,
	CollectionBookPage             = 50,
	Profile                        = 51,
	Max_None                       = 52,
	EFortItemType_MAX              = 53
};


// Enum FortniteGame.EFortTeam
enum class EFortTeam : uint8_t
{
	HumanCampaign                  = 0,
	Monster                        = 1,
	HumanPvP_Team1                 = 2,
	HumanPvP_Team2                 = 3,
	HumanPvP_Team3                 = 4,
	HumanPvP_Team4                 = 5,
	HumanPvP_Team5                 = 6,
	HumanPvP_Team6                 = 7,
	HumanPvP_Team7                 = 8,
	HumanPvP_Team8                 = 9,
	HumanPvP_Team9                 = 10,
	HumanPvP_Team10                = 11,
	HumanPvP_Team11                = 12,
	HumanPvP_Team12                = 13,
	HumanPvP_Team13                = 14,
	HumanPvP_Team14                = 15,
	HumanPvP_Team15                = 16,
	HumanPvP_Team16                = 17,
	HumanPvP_Team17                = 18,
	HumanPvP_Team18                = 19,
	HumanPvP_Team19                = 20,
	HumanPvP_Team20                = 21,
	HumanPvP_Team21                = 22,
	HumanPvP_Team22                = 23,
	HumanPvP_Team23                = 24,
	HumanPvP_Team24                = 25,
	HumanPvP_Team25                = 26,
	HumanPvP_Team26                = 27,
	HumanPvP_Team27                = 28,
	HumanPvP_Team28                = 29,
	HumanPvP_Team29                = 30,
	HumanPvP_Team30                = 31,
	HumanPvP_Team31                = 32,
	HumanPvP_Team32                = 33,
	HumanPvP_Team33                = 34,
	HumanPvP_Team34                = 35,
	HumanPvP_Team35                = 36,
	HumanPvP_Team36                = 37,
	HumanPvP_Team37                = 38,
	HumanPvP_Team38                = 39,
	HumanPvP_Team39                = 40,
	HumanPvP_Team40                = 41,
	HumanPvP_Team41                = 42,
	HumanPvP_Team42                = 43,
	HumanPvP_Team43                = 44,
	HumanPvP_Team44                = 45,
	HumanPvP_Team45                = 46,
	HumanPvP_Team46                = 47,
	HumanPvP_Team47                = 48,
	HumanPvP_Team48                = 49,
	HumanPvP_Team49                = 50,
	HumanPvP_Team50                = 51,
	HumanPvP_Team51                = 52,
	HumanPvP_Team52                = 53,
	HumanPvP_Team53                = 54,
	HumanPvP_Team54                = 55,
	HumanPvP_Team55                = 56,
	HumanPvP_Team56                = 57,
	HumanPvP_Team57                = 58,
	HumanPvP_Team58                = 59,
	HumanPvP_Team59                = 60,
	HumanPvP_Team60                = 61,
	HumanPvP_Team61                = 62,
	HumanPvP_Team62                = 63,
	HumanPvP_Team63                = 64,
	HumanPvP_Team64                = 65,
	HumanPvP_Team65                = 66,
	HumanPvP_Team66                = 67,
	HumanPvP_Team67                = 68,
	HumanPvP_Team68                = 69,
	HumanPvP_Team69                = 70,
	HumanPvP_Team70                = 71,
	HumanPvP_Team71                = 72,
	HumanPvP_Team72                = 73,
	HumanPvP_Team73                = 74,
	HumanPvP_Team74                = 75,
	HumanPvP_Team75                = 76,
	HumanPvP_Team76                = 77,
	HumanPvP_Team77                = 78,
	HumanPvP_Team78                = 79,
	HumanPvP_Team79                = 80,
	HumanPvP_Team80                = 81,
	HumanPvP_Team81                = 82,
	HumanPvP_Team82                = 83,
	HumanPvP_Team83                = 84,
	HumanPvP_Team84                = 85,
	HumanPvP_Team85                = 86,
	HumanPvP_Team86                = 87,
	HumanPvP_Team87                = 88,
	HumanPvP_Team88                = 89,
	HumanPvP_Team89                = 90,
	HumanPvP_Team90                = 91,
	HumanPvP_Team91                = 92,
	HumanPvP_Team92                = 93,
	HumanPvP_Team93                = 94,
	HumanPvP_Team94                = 95,
	HumanPvP_Team95                = 96,
	HumanPvP_Team96                = 97,
	HumanPvP_Team97                = 98,
	HumanPvP_Team98                = 99,
	HumanPvP_Team99                = 100,
	HumanPvP_Team100               = 101,
	HumanPvP_Team101               = 102,
	Spectator                      = 103,
	MAX                            = 104,
	EFortTeam_MAX                  = 105
};


// Enum FortniteGame.EFortCustomPartType
enum class EFortCustomPartType : uint8_t
{
	Head                           = 0,
	Body                           = 1,
	Hat                            = 2,
	Backpack                       = 3,
	Charm                          = 4,
	Face                           = 5,
	NumTypes                       = 6,
	EFortCustomPartType_MAX        = 7
};


// Enum FortniteGame.EFortReportDayPhase
enum class EFortReportDayPhase : uint8_t
{
	Dawn                           = 0,
	Dusk                           = 1,
	ZoneFinished                   = 2,
	PlayerLogout                   = 3,
	EFortReportDayPhase_MAX        = 4
};


// Enum FortniteGame.EAthenaGamePhase
enum class EAthenaGamePhase : uint8_t
{
	None                           = 0,
	Setup                          = 1,
	Warmup                         = 2,
	Aircraft                       = 3,
	SafeZones                      = 4,
	EndGame                        = 5,
	EAthenaGamePhase_MAX           = 6
};


// Enum FortniteGame.EAthenaGamePhaseStep
enum class EAthenaGamePhaseStep : uint8_t
{
	None                           = 0,
	Setup                          = 1,
	Warmup                         = 2,
	BusLocked                      = 3,
	BusFlying                      = 4,
	StormForming                   = 5,
	StormHolding                   = 6,
	StormShrinking                 = 7,
	EndGame                        = 8,
	EAthenaGamePhaseStep_MAX       = 9
};


// Enum FortniteGame.ECaptureState
enum class ECaptureState : uint8_t
{
	CS_Idle                        = 0,
	CS_Capturing                   = 1,
	CS_Contested                   = 2,
	CS_Resetting                   = 3,
	CS_Captured                    = 4,
	CS_Reset                       = 5,
	CS_MAX                         = 6
};


// Enum FortniteGame.EFOBIOStatus
enum class EFOBIOStatus : uint8_t
{
	Saving                         = 0,
	Loading                        = 1,
	Free                           = 2,
	EFOBIOStatus_MAX               = 3
};


// Enum FortniteGame.ECollectionBookRewardType
enum class ECollectionBookRewardType : uint8_t
{
	Uninitialized                  = 0,
	Book                           = 1,
	Page                           = 2,
	Section                        = 3,
	ECollectionBookRewardType_MAX  = 4
};


// Enum FortniteGame.EFortObjectiveStatus
enum class EFortObjectiveStatus : uint8_t
{
	Created                        = 0,
	InProgress                     = 1,
	Succeeded                      = 2,
	Failed                         = 3,
	NeutralCompletion              = 4,
	Max_None                       = 5,
	EFortObjectiveStatus_MAX       = 6
};


// Enum FortniteGame.EFortMissionVisibilityOverride
enum class EFortMissionVisibilityOverride : uint8_t
{
	Visible                        = 0,
	Invisible                      = 1,
	Max_None                       = 2,
	EFortMissionVisibilityOverride_MAX = 3
};


// Enum FortniteGame.EFortPrototypingStatus
enum class EFortPrototypingStatus : uint8_t
{
	Unknown                        = 0,
	Disabled                       = 1,
	Enabled                        = 2,
	EFortPrototypingStatus_MAX     = 3
};


// Enum FortniteGame.EMatchmakingCompleteResult
enum class EMatchmakingCompleteResult : uint8_t
{
	NotStarted                     = 0,
	UpdateNeeded                   = 1,
	OutpostNotFound                = 2,
	Cancelled                      = 3,
	NoResults                      = 4,
	Failure                        = 5,
	CreateFailure                  = 6,
	Success                        = 7,
	EMatchmakingCompleteResult_MAX = 8
};


// Enum FortniteGame.EMatchmakingState
enum class EMatchmakingState : uint8_t
{
	NotMatchmaking                 = 0,
	CancelingMatchmaking           = 1,
	ReleasingLock                  = 2,
	AcquiringLock                  = 3,
	LockAcquistionFailure          = 4,
	FindingEmptyServer             = 5,
	FindingExistingSession         = 6,
	TestingEmptyServers            = 7,
	TestingExistingSessions        = 8,
	JoiningExistingSession         = 9,
	NoMatchesAvailable             = 10,
	CleaningUpExisting             = 11,
	HandlingFailure                = 12,
	JoinSuccess                    = 13,
	EMatchmakingState_MAX          = 14
};


// Enum FortniteGame.EFortPartyRestriction
enum class EFortPartyRestriction : uint8_t
{
	Invalid                        = 0,
	PartyCreatePending             = 1,
	AlreadyInParty                 = 2,
	PartyFull                      = 3,
	GameFull                       = 4,
	Private                        = 5,
	CurrentlyNotAvailable          = 6,
	NotPlayingThisGame             = 7,
	GameModeRestricted             = 8,
	Max                            = 9,
	EFortPartyRestriction_MAX      = 10
};


// Enum FortniteGame.EFortFriendRequestStatus
enum class EFortFriendRequestStatus : uint8_t
{
	None                           = 0,
	Accepted                       = 1,
	PendingReceived                = 2,
	PendingSent                    = 3,
	EFortFriendRequestStatus_MAX   = 4
};


// Enum FortniteGame.EFortPartyMemberLocation
enum class EFortPartyMemberLocation : uint8_t
{
	PreLobby                       = 0,
	ConnectingToLobby              = 1,
	Lobby                          = 2,
	JoiningGame                    = 3,
	ProcessingRejoin               = 4,
	InGame                         = 5,
	ReturningToFrontEnd            = 6,
	EFortPartyMemberLocation_MAX   = 7
};


// Enum FortniteGame.EFortAthenaPlaylist
enum class EFortAthenaPlaylist : uint8_t
{
	AthenaSolo                     = 0,
	AthenaDuo                      = 1,
	AthenaSquad                    = 2,
	EFortAthenaPlaylist_MAX        = 3
};


// Enum FortniteGame.EFortPartyState
enum class EFortPartyState : uint8_t
{
	Undetermined                   = 0,
	WorldView                      = 1,
	TheaterView                    = 2,
	Matchmaking                    = 3,
	PostMatchmaking                = 4,
	ReturningToFrontEnd            = 5,
	BattleRoyaleView               = 6,
	BattleRoyalePreloading         = 7,
	BattleRoyaleMatchmaking        = 8,
	BattleRoyalePostMatchmaking    = 9,
	EFortPartyState_MAX            = 10
};


// Enum FortniteGame.EFortPartyMemberDisplayState
enum class EFortPartyMemberDisplayState : uint8_t
{
	Open                           = 0,
	Connecting                     = 1,
	Connected                      = 2,
	Max                            = 3,
	EFortPartyMemberDisplayState_MAX = 4
};


// Enum FortniteGame.EFortPartyTransition
enum class EFortPartyTransition : uint8_t
{
	Idle                           = 0,
	Joining                        = 1,
	Leaving                        = 2,
	Max                            = 3,
	EFortPartyTransition_MAX       = 4
};


// Enum FortniteGame.EFortSocialItemHeaderType
enum class EFortSocialItemHeaderType : uint8_t
{
	PartyInvites                   = 0,
	Friends                        = 1,
	None                           = 2,
	EFortSocialItemHeaderType_MAX  = 3
};


// Enum FortniteGame.EFortDialogFeedbackType
enum class EFortDialogFeedbackType : uint8_t
{
	FriendRequestSent              = 0,
	FriendRequestReceived          = 1,
	FriendRequestAccepted          = 2,
	Default                        = 3,
	EFortDialogFeedbackType_MAX    = 4
};


// Enum FortniteGame.EFortEncounterDirection
enum class EFortEncounterDirection : uint8_t
{
	North                          = 0,
	NorthEast                      = 1,
	East                           = 2,
	SouthEast                      = 3,
	South                          = 4,
	SouthWest                      = 5,
	West                           = 6,
	NorthWest                      = 7,
	Max_None                       = 8,
	EFortEncounterDirection_MAX    = 9
};


// Enum FortniteGame.EAIHotSpotSlot
enum class EAIHotSpotSlot : uint8_t
{
	Free                           = 0,
	Claimed                        = 1,
	Occupied                       = 2,
	Blocked                        = 3,
	Disabled                       = 4,
	EAIHotSpotSlot_MAX             = 5
};


// Enum FortniteGame.EAIHotSpotAssignmentFilter
enum class EAIHotSpotAssignmentFilter : uint8_t
{
	All                            = 0,
	WithSlots                      = 1,
	WaitingList                    = 2,
	EAIHotSpotAssignmentFilter_MAX = 3
};


// Enum FortniteGame.EAIHotSpotSlotFilter
enum class EAIHotSpotSlotFilter : uint8_t
{
	All                            = 0,
	AvailableOnly                  = 1,
	UnavailableOnly                = 2,
	EAIHotSpotSlotFilter_MAX       = 3
};


// Enum FortniteGame.EFortGliderType
enum class EFortGliderType : uint8_t
{
	StockGlider                    = 0,
	FounderGlider                  = 1,
	Umbrella                       = 2,
	FounderUmbrella                = 3,
	EFortGliderType_MAX            = 4
};


// Enum FortniteGame.EFortMissionAlertCategory
enum class EFortMissionAlertCategory : uint8_t
{
	General                        = 0,
	Storm                          = 1,
	Horde                          = 2,
	StormLow                       = 3,
	Total                          = 4,
	EFortMissionAlertCategory_MAX  = 5
};


// Enum FortniteGame.EItemTileViewDisplayType
enum class EItemTileViewDisplayType : uint8_t
{
	World                          = 0,
	Outpost                        = 1,
	Account                        = 2,
	DeployableBase                 = 3,
	Max                            = 4,
	EItemTileViewDisplayType_MAX   = 5
};


// Enum FortniteGame.EOutpostBuildings
enum class EOutpostBuildings : uint8_t
{
	StormShield                    = 0,
	CraftingTable                  = 1,
	Fabricator                     = 2,
	HarvestingOptimizer            = 3,
	StorageVault                   = 4,
	POST                           = 5,
	EOutpostBuildings_MAX          = 6
};


// Enum FortniteGame.EFortClientAnnouncementQueueType
enum class EFortClientAnnouncementQueueType : uint8_t
{
	Toasts                         = 0,
	Stickies                       = 1,
	Max                            = 2,
	EFortClientAnnouncementQueueType_MAX = 3
};


// Enum FortniteGame.EFortNotificationQueueType
enum class EFortNotificationQueueType : uint8_t
{
	Toasts                         = 0,
	Stickies                       = 1,
	Messages                       = 2,
	Max                            = 3,
	EFortNotificationQueueType_MAX = 4
};


// Enum FortniteGame.EFortDialogResult
enum class EFortDialogResult : uint8_t
{
	Confirmed                      = 0,
	Declined                       = 1,
	Ignored                        = 2,
	Killed                         = 3,
	TimedOut                       = 4,
	Unknown                        = 5,
	EFortDialogResult_MAX          = 6
};


// Enum FortniteGame.EFortBangType
enum class EFortBangType : uint8_t
{
	Invalid                        = 0,
	Custom                         = 1,
	PlayTab                        = 2,
	HeroesTab                      = 3,
	VaultTab                       = 4,
	StoreTab                       = 5,
	FriendsButton                  = 6,
	PartyInviteButton              = 7,
	SubGameAccessChanged           = 8,
	DailyRewardsButton             = 9,
	QuestsButton                   = 10,
	CompletedExpeditions           = 11,
	MainMenu                       = 12,
	VaultSchematics                = 13,
	VaultLeadSurvivors             = 14,
	VaultSurvivors                 = 15,
	VaultHeroes                    = 16,
	VaultDefenders                 = 17,
	VaultResources                 = 18,
	VaultMelee                     = 19,
	VaultRanged                    = 20,
	VaultConsumables               = 21,
	VaultIngredients               = 22,
	VaultTraps                     = 23,
	PlayerBanners                  = 24,
	EFortBangType_MAX              = 25
};


// Enum FortniteGame.EFortEventNameType
enum class EFortEventNameType : uint8_t
{
	Mission                        = 0,
	Client                         = 1,
	EFortEventNameType_MAX         = 2
};


// Enum FortniteGame.EFortCraftFailCause
enum class EFortCraftFailCause : uint8_t
{
	Unknown                        = 0,
	NotEnoughResources             = 1,
	InventoryFull                  = 2,
	InsufficientTeamLevel          = 3,
	CraftingQueueFull              = 4,
	CurrentlyLocked                = 5,
	OverflowSchematic              = 6,
	EFortCraftFailCause_MAX        = 7
};


// Enum FortniteGame.EKeepContainerType
enum class EKeepContainerType : uint8_t
{
	Base                           = 0,
	Storeroom                      = 1,
	FirstAid                       = 2,
	Armory                         = 3,
	Workshop                       = 4,
	AmmoStash                      = 5,
	Max                            = 6,
	EKeepContainerType_MAX         = 7
};


// Enum FortniteGame.EFortIndicatorState
enum class EFortIndicatorState : uint8_t
{
	Hidden                         = 0,
	OnlyFriendsVisible             = 1,
	Visible                        = 2,
	EFortIndicatorState_MAX        = 3
};


// Enum FortniteGame.EReadyCheckState
enum class EReadyCheckState : uint8_t
{
	CheckStarted                   = 0,
	Ready                          = 1,
	NotReady                       = 2,
	EReadyCheckState_MAX           = 3
};


// Enum FortniteGame.ERichPresenceStateChange
enum class ERichPresenceStateChange : uint8_t
{
	AutoUpdate                     = 0,
	Idle                           = 1,
	Active                         = 2,
	Busy                           = 3,
	NotBusy                        = 4,
	ERichPresenceStateChange_MAX   = 5
};


// Enum FortniteGame.EFortTeamAffiliation
enum class EFortTeamAffiliation : uint8_t
{
	Friendly                       = 0,
	Neutral                        = 1,
	Hostile                        = 2,
	EFortTeamAffiliation_MAX       = 3
};


// Enum FortniteGame.EFortAIUtility
enum class EFortAIUtility : uint8_t
{
	KillPlayersMelee               = 0,
	KillPlayersRanged              = 1,
	KillPlayersArtillery           = 2,
	DestroyBuildingsMelee          = 3,
	DestroyBuildingsRanged         = 4,
	DestroyBuildingsArtillery      = 5,
	DestroyTraps                   = 6,
	Tank                           = 7,
	Infiltrate                     = 8,
	Mob                            = 9,
	Support                        = 10,
	Kiting                         = 11,
	AreaOfDenial                   = 12,
	DisableTraps                   = 13,
	Dormant                        = 14,
	Assassin                       = 15,
	MAX                            = 16,
	EFortAIUtility_MAX             = 17
};


// Enum FortniteGame.EFortTileEdgeType
enum class EFortTileEdgeType : uint8_t
{
	Undefined                      = 0,
	Outer                          = 1,
	Transition                     = 2,
	Inner                          = 3,
	Border                         = 4,
	BorderTransitionSingle         = 5,
	BorderTransitionDouble         = 6,
	MAX                            = 7,
	EFortTileEdgeType_MAX          = 8
};


// Enum FortniteGame.EFortRequestedGameplayAction
enum class EFortRequestedGameplayAction : uint8_t
{
	ContinuePlaying                = 0,
	StartPlaying                   = 1,
	StopPlaying                    = 2,
	EnterZone                      = 3,
	LeaveZone                      = 4,
	ReturnToMainMenu               = 5,
	QuitGame                       = 6,
	Invalid                        = 7,
	EFortRequestedGameplayAction_MAX = 8
};


// Enum FortniteGame.EFortGameplayState
enum class EFortGameplayState : uint8_t
{
	NormalGameplay                 = 0,
	WaitingToStart                 = 1,
	EndOfZone                      = 2,
	EnteringZone                   = 3,
	LeavingZone                    = 4,
	Invalid                        = 5,
	EFortGameplayState_MAX         = 6
};


// Enum FortniteGame.EFortMovementUrgency
enum class EFortMovementUrgency : uint8_t
{
	None                           = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	NumLevels                      = 4,
	EFortMovementUrgency_MAX       = 5
};


// Enum FortniteGame.EFortMovementStyle
enum class EFortMovementStyle : uint8_t
{
	Running                        = 0,
	Walking                        = 1,
	Charging                       = 2,
	Sprinting                      = 3,
	EFortMovementStyle_MAX         = 4
};


// Enum FortniteGame.EFortWeaponTriggerType
enum class EFortWeaponTriggerType : uint8_t
{
	OnPress                        = 0,
	Automatic                      = 1,
	OnRelease                      = 2,
	OnPressAndRelease              = 3,
	EFortWeaponTriggerType_MAX     = 4
};


// Enum FortniteGame.EFortJumpStaminaCost
enum class EFortJumpStaminaCost : uint8_t
{
	None                           = 0,
	Trigger                        = 1,
	SprintTrigger                  = 2,
	SprintAir                      = 3,
	EFortJumpStaminaCost_MAX       = 4
};


// Enum FortniteGame.EFortDayPhasePrio
enum class EFortDayPhasePrio : uint8_t
{
	Default                        = 0,
	DailySummary                   = 1,
	EFortDayPhasePrio_MAX          = 2
};


// Enum FortniteGame.EFortCustomBodyType
enum class EFortCustomBodyType : uint8_t
{
	Small                          = 0,
	Medium                         = 1,
	MediumAndSmall                 = 2,
	Large                          = 3,
	LargeAndSmall                  = 4,
	LargeAndMedium                 = 5,
	All                            = 6,
	Deprecated                     = 7,
	EFortCustomBodyType_MAX        = 8
};


// Enum FortniteGame.EFortDisplayGender
enum class EFortDisplayGender : uint8_t
{
	Unknown                        = 0,
	Male                           = 1,
	Female                         = 2,
	NumTypes                       = 3,
	EFortDisplayGender_MAX         = 4
};


// Enum FortniteGame.EFortCustomGender
enum class EFortCustomGender : uint8_t
{
	Invalid                        = 0,
	Male                           = 1,
	Female                         = 2,
	Both                           = 3,
	EFortCustomGender_MAX          = 4
};


// Enum FortniteGame.EFortCompletionResult
enum class EFortCompletionResult : uint8_t
{
	Win                            = 0,
	Loss                           = 1,
	Draw                           = 2,
	Undefined                      = 3,
	EFortCompletionResult_MAX      = 4
};


// Enum FortniteGame.EFortPvPGameResult
enum class EFortPvPGameResult : uint8_t
{
	Win                            = 0,
	Loss                           = 1,
	Draw                           = 2,
	EFortPvPGameResult_MAX         = 3
};


// Enum FortniteGame.EFortItemTier
enum class EFortItemTier : uint8_t
{
	No_Tier                        = 0,
	I                              = 1,
	II                             = 2,
	III                            = 3,
	IV                             = 4,
	V                              = 5,
	VI                             = 6,
	VII                            = 7,
	VIII                           = 8,
	IX                             = 9,
	X                              = 10,
	NumItemTierValues              = 11,
	EFortItemTier_MAX              = 12
};


// Enum FortniteGame.EFortQuality
enum class EFortQuality : uint8_t
{
	Common                         = 0,
	Uncommon                       = 1,
	Rare                           = 2,
	NumQualityValues               = 3,
	EFortQuality_MAX               = 4
};


// Enum FortniteGame.EFortRarity
enum class EFortRarity : uint8_t
{
	Handmade                       = 0,
	Ordinary                       = 1,
	Sturdy                         = 2,
	Quality                        = 3,
	Fine                           = 4,
	Elegant                        = 5,
	Masterwork                     = 6,
	Epic                           = 7,
	Badass                         = 8,
	Legendary                      = 9,
	NumRarityValues                = 10,
	EFortRarity_MAX                = 11
};


// Enum FortniteGame.EFortTargetSelectionFilter
enum class EFortTargetSelectionFilter : uint8_t
{
	Damageable                     = 0,
	Everything                     = 1,
	Pawns                          = 2,
	Buildings                      = 3,
	Walls                          = 4,
	Traps                          = 5,
	Players                        = 6,
	AIPawns                        = 7,
	Instigator                     = 8,
	WeakSpots                      = 9,
	World                          = 10,
	Max                            = 11,
	EFortTargetSelectionFilter_MAX = 12
};


// Enum FortniteGame.EFortTargetSelectionTestType
enum class EFortTargetSelectionTestType : uint8_t
{
	Overlap                        = 0,
	Swept                          = 1,
	Ballistic                      = 2,
	EFortTargetSelectionTestType_MAX = 3
};


// Enum FortniteGame.EFortTargetSelectionShape
enum class EFortTargetSelectionShape : uint8_t
{
	Sphere                         = 0,
	Cone                           = 1,
	Box                            = 2,
	Capsule                        = 3,
	Line                           = 4,
	Custom                         = 5,
	EFortTargetSelectionShape_MAX  = 6
};


// Enum FortniteGame.EFortBrushSize
enum class EFortBrushSize : uint8_t
{
	VeryVerySmall                  = 0,
	VerySmall                      = 1,
	Small                          = 2,
	Medium                         = 3,
	Large                          = 4,
	VeryLarge                      = 5,
	EFortBrushSize_MAX             = 6
};


// Enum FortniteGame.EInventoryContentSortType
enum class EInventoryContentSortType : uint8_t
{
	ByName                         = 0,
	ByRating                       = 1,
	ByLevel                        = 2,
	ByCategory                     = 3,
	ByRarity                       = 4,
	ByLocation                     = 5,
	ByPersonality                  = 6,
	ByBonus                        = 7,
	BySubtype                      = 8,
	EInventoryContentSortType_MAX  = 9
};


// Enum FortniteGame.EFortFrontendInventoryFilter
enum class EFortFrontendInventoryFilter : uint8_t
{
	Schematics                     = 0,
	SchematicsInGame               = 1,
	Consumables                    = 2,
	WorldItems                     = 3,
	WorldItemsInGame               = 4,
	WorldItemsStorage              = 5,
	AccountResources               = 6,
	ConsumablesAndAccountResources = 7,
	HeroesAndDefenders             = 8,
	DefendersAndSurvivors          = 9,
	Heroes                         = 10,
	Defenders                      = 11,
	Survivors                      = 12,
	Invisible                      = 13,
	Max_None                       = 14,
	EFortFrontendInventoryFilter_MAX = 15
};


// Enum FortniteGame.EFortInventoryFilter
enum class EFortInventoryFilter : uint8_t
{
	WeaponMelee                    = 0,
	WeaponRanged                   = 1,
	Ammo                           = 2,
	Traps                          = 3,
	Consumables                    = 4,
	Ingredients                    = 5,
	Gadget                         = 6,
	Decorations                    = 7,
	Badges                         = 8,
	Heroes                         = 9,
	LeadSurvivors                  = 10,
	Survivors                      = 11,
	Defenders                      = 12,
	Resources                      = 13,
	ConversionControl              = 14,
	Invisible                      = 15,
	Max_None                       = 16,
	EFortInventoryFilter_MAX       = 17
};


// Enum FortniteGame.EFortItemCategoryOrdinal
enum class EFortItemCategoryOrdinal : uint8_t
{
	Primary                        = 0,
	Secondary                      = 1,
	Tertiary                       = 2,
	EFortItemCategoryOrdinal_MAX   = 3
};


// Enum FortniteGame.ESubGameMatchmakingStatus
enum class ESubGameMatchmakingStatus : uint8_t
{
	Disabled                       = 0,
	Enabled                        = 1,
	ESubGameMatchmakingStatus_MAX  = 2
};


// Enum FortniteGame.ESubGameAccessStatus
enum class ESubGameAccessStatus : uint8_t
{
	Disabled                       = 0,
	LimitedAccess                  = 1,
	OpenAccess                     = 2,
	ESubGameAccessStatus_MAX       = 3
};


// Enum FortniteGame.ESubGame
enum class ESubGame : uint8_t
{
	Campaign                       = 0,
	Athena                         = 1,
	Invalid                        = 2,
	ESubGame_MAX                   = 3
};


// Enum FortniteGame.ENavigationObstacleOverride
enum class ENavigationObstacleOverride : uint8_t
{
	UseMeshSettings                = 0,
	ForceEnabled                   = 1,
	ForceDisabled                  = 2,
	ENavigationObstacleOverride_MAX = 3
};


// Enum FortniteGame.EFortPartialPathUsage
enum class EFortPartialPathUsage : uint8_t
{
	Always                         = 0,
	OnlyGoalsOnDestructible        = 1,
	Never                          = 2,
	EFortPartialPathUsage_MAX      = 3
};


// Enum FortniteGame.EHotspotTypeConfigMode
enum class EHotspotTypeConfigMode : uint8_t
{
	AlwaysAdd                      = 0,
	WhenNotDefined                 = 1,
	WhenNotValid                   = 2,
	EHotspotTypeConfigMode_MAX     = 3
};


// Enum FortniteGame.EFortHotSpotPreview
enum class EFortHotSpotPreview : uint8_t
{
	None                           = 0,
	Smashing                       = 1,
	Shooting                       = 2,
	EFortHotSpotPreview_MAX        = 3
};


// Enum FortniteGame.EFortHotSpotDirection
enum class EFortHotSpotDirection : uint8_t
{
	PositiveX                      = 0,
	NegativeX                      = 1,
	PositiveY                      = 2,
	NegativeY                      = 3,
	PositiveZ                      = 4,
	NegativeZ                      = 5,
	Any                            = 6,
	EFortHotSpotDirection_MAX      = 7
};


// Enum FortniteGame.EFortHotSpotSlot
enum class EFortHotSpotSlot : uint8_t
{
	Melee                          = 0,
	MeleeHuge                      = 1,
	Ranged                         = 2,
	None                           = 3,
	EFortHotSpotSlot_MAX           = 4
};


// Enum FortniteGame.EBuildingFloorRailing
enum class EBuildingFloorRailing : uint8_t
{
	None                           = 0,
	Balcony                        = 1,
	EBuildingFloorRailing_MAX      = 2
};


// Enum FortniteGame.EBuildingStairsRailing
enum class EBuildingStairsRailing : uint8_t
{
	None                           = 0,
	Partial                        = 1,
	Full                           = 2,
	EBuildingStairsRailing_MAX     = 3
};


// Enum FortniteGame.EBuildingWallArea
enum class EBuildingWallArea : uint8_t
{
	Regular                        = 0,
	Flat                           = 1,
	Special                        = 2,
	EBuildingWallArea_MAX          = 3
};


// Enum FortniteGame.EAssignmentType
enum class EAssignmentType : uint8_t
{
	Invalid                        = 0,
	Encounter                      = 1,
	World                          = 2,
	Enemy                          = 3,
	NumAssignmentTypes             = 4,
	EAssignmentType_MAX            = 5
};


// Enum FortniteGame.EFortAILODLevel
enum class EFortAILODLevel : uint8_t
{
	Invalid                        = 0,
	Lowest                         = 1,
	Lower                          = 2,
	BelowNormal                    = 3,
	Normal                         = 4,
	AboveNormal                    = 5,
	EFortAILODLevel_MAX            = 6
};


// Enum FortniteGame.EFortItemEntryState
enum class EFortItemEntryState : uint8_t
{
	NoneState                      = 0,
	NewItemCount                   = 1,
	ShouldShowItemToast            = 2,
	DurabilityInitialized          = 3,
	DoNotShowSpawnParticles        = 4,
	FromRecoveredBackpack          = 5,
	FromGift                       = 6,
	PendingUpgradeCriteriaProgress = 7,
	OwnerBuildingHandle            = 8,
	FromDroppedPickup              = 9,
	CraftAndSlotTarget             = 10,
	EFortItemEntryState_MAX        = 11
};


// Enum FortniteGame.EFortBounceType
enum class EFortBounceType : uint8_t
{
	Hit                            = 0,
	Interact                       = 1,
	EditPlaced                     = 2,
	EFortBounceType_MAX            = 3
};


// Enum FortniteGame.EBuildingHighlightType
enum class EBuildingHighlightType : uint8_t
{
	Primary                        = 0,
	Interact                       = 1,
	WillBeDestroyed                = 2,
	MAX                            = 3,
	EBuildingHighlightType_MAX     = 4
};


// Enum FortniteGame.EFortConnectivityCubeFace
enum class EFortConnectivityCubeFace : uint8_t
{
	Front                          = 0,
	Left                           = 1,
	Back                           = 2,
	Right                          = 3,
	Upper                          = 4,
	Lower                          = 5,
	MAX                            = 6,
	EFortConnectivityCubeFace_MAX  = 7
};


// Enum FortniteGame.EFortDecoPlacementQueryResults
enum class EFortDecoPlacementQueryResults : uint8_t
{
	CanAdd                         = 0,
	ExistingTrap                   = 1,
	ExistingObject                 = 2,
	Obstructed                     = 3,
	NoLocation                     = 4,
	WrongType                      = 5,
	WrongShape                     = 6,
	BeingModified                  = 7,
	WrongTeam                      = 8,
	BlueprintFailure               = 9,
	AbilityFailure                 = 10,
	RequiresPlayerBuildableActor   = 11,
	NoEditPermission               = 12,
	EFortDecoPlacementQueryResults_MAX = 13
};


// Enum FortniteGame.EFortStructuralGridQueryResults
enum class EFortStructuralGridQueryResults : uint8_t
{
	CanAdd                         = 0,
	ExistingActor                  = 1,
	Obstructed                     = 2,
	NoStructuralSupport            = 3,
	InvalidActor                   = 4,
	ReachedLimit                   = 5,
	NoEditPermission               = 6,
	PatternNotPermittedByLayoutRequirement = 7,
	ResourceTypeNotPermittedByLayoutRequirement = 8,
	BuildingAtRequirementsDisabled = 9,
	BuildingOtherThanRequirementsDisabled = 10,
	EFortStructuralGridQueryResults_MAX = 11
};


// Enum FortniteGame.EFortCostInfoTypes
enum class EFortCostInfoTypes : uint8_t
{
	Placement                      = 0,
	Repair                         = 1,
	Conversion                     = 2,
	Ability                        = 3,
	None                           = 4,
	EFortCostInfoTypes_MAX         = 5
};


// Enum FortniteGame.EFortBuildingInitializationReason
enum class EFortBuildingInitializationReason : uint8_t
{
	StaticallyPlaced               = 0,
	Spawned                        = 1,
	Replaced                       = 2,
	LoadedFromSave                 = 3,
	DynamicBuilderPlaced           = 4,
	PlacementTool                  = 5,
	TrapTool                       = 6,
	None                           = 7,
	EFortBuildingInitializationReason_MAX = 8
};


// Enum FortniteGame.EFortBuildingPersistentState
enum class EFortBuildingPersistentState : uint8_t
{
	Default                        = 0,
	New                            = 1,
	Constructed                    = 2,
	Destroyed                      = 3,
	Searched                       = 4,
	None                           = 5,
	EFortBuildingPersistentState_MAX = 6
};


// Enum FortniteGame.EFortBuildingState
enum class EFortBuildingState : uint8_t
{
	Placement                      = 0,
	EditMode                       = 1,
	None                           = 2,
	EFortBuildingState_MAX         = 3
};


// Enum FortniteGame.EFortResourceLevel
enum class EFortResourceLevel : uint8_t
{
	First                          = 0,
	Second                         = 1,
	Third                          = 2,
	Fourth                         = 3,
	Fifth                          = 4,
	Sixth                          = 5,
	NumLevels                      = 6,
	Invalid                        = 7,
	EFortResourceLevel_MAX         = 8
};


// Enum FortniteGame.EFortResourceType
enum class EFortResourceType : uint8_t
{
	Wood                           = 0,
	Stone                          = 1,
	Metal                          = 2,
	Permanite                      = 3,
	None                           = 4,
	EFortResourceType_MAX          = 5
};


// Enum FortniteGame.EFortTextureDataSlot
enum class EFortTextureDataSlot : uint8_t
{
	Primary                        = 0,
	Secondary                      = 1,
	Tertiary                       = 2,
	Fourth                         = 3,
	NumSlots                       = 4,
	EFortTextureDataSlot_MAX       = 5
};


// Enum FortniteGame.EFortTextureDataType
enum class EFortTextureDataType : uint8_t
{
	Any                            = 0,
	OuterWall                      = 1,
	InnerWall                      = 2,
	Corner                         = 3,
	Floor                          = 4,
	Ceiling                        = 5,
	Trim                           = 6,
	Roof                           = 7,
	Pillar                         = 8,
	Shingle                        = 9,
	None                           = 10,
	EFortTextureDataType_MAX       = 11
};


// Enum FortniteGame.EBuildingAttachmentType
enum class EBuildingAttachmentType : uint8_t
{
	ATTACH_Floor                   = 0,
	ATTACH_Wall                    = 1,
	ATTACH_Ceiling                 = 2,
	ATTACH_Corner                  = 3,
	ATTACH_All                     = 4,
	ATTACH_WallThenFloor           = 5,
	ATTACH_None                    = 6,
	ATTACH_MAX                     = 7
};


// Enum FortniteGame.EFortBuildingType
enum class EFortBuildingType : uint8_t
{
	Wall                           = 0,
	Floor                          = 1,
	Corner                         = 2,
	Deco                           = 3,
	Prop                           = 4,
	Stairs                         = 5,
	Roof                           = 6,
	Pillar                         = 7,
	SpawnedItem                    = 8,
	Container                      = 9,
	Trap                           = 10,
	GenericCenterCellActor         = 11,
	None                           = 12,
	EFortBuildingType_MAX          = 13
};


// Enum FortniteGame.EFortMissionAudibility
enum class EFortMissionAudibility : uint8_t
{
	UseVisibility                  = 0,
	Audible                        = 1,
	Inaudible                      = 2,
	EFortMissionAudibility_MAX     = 3
};


// Enum FortniteGame.EFortMissionType
enum class EFortMissionType : uint8_t
{
	Primary                        = 0,
	Secondary                      = 1,
	Max_None                       = 2,
	EFortMissionType_MAX           = 3
};


// Enum FortniteGame.EFortObjectiveRequirement
enum class EFortObjectiveRequirement : uint8_t
{
	Optional                       = 0,
	Required                       = 1,
	RequiredButCanFail             = 2,
	EFortObjectiveRequirement_MAX  = 3
};


// Enum FortniteGame.EFortMissionStatus
enum class EFortMissionStatus : uint8_t
{
	Created                        = 0,
	InProgress                     = 1,
	Succeeded                      = 2,
	Failed                         = 3,
	NeutralCompletion              = 4,
	Quit                           = 5,
	Max_None                       = 6,
	EFortMissionStatus_MAX         = 7
};


// Enum FortniteGame.EMissionGenerationCategory
enum class EMissionGenerationCategory : uint8_t
{
	Primary                        = 0,
	Secondary                      = 1,
	Tertiary                       = 2,
	Survivor                       = 3,
	Max_None                       = 4,
	EMissionGenerationCategory_MAX = 5
};


// Enum FortniteGame.TInteractionType
enum class ETInteractionType : uint8_t
{
	IT_NoInteraction               = 0,
	IT_Simple                      = 1,
	IT_LongPress                   = 2,
	IT_BuildingEdit                = 3,
	IT_BuildingImprovement         = 4,
	IT_TrapPlacement               = 5,
	IT_MAX                         = 6
};


// Enum FortniteGame.EFortPIDValueGraphElements
enum class EFortPIDValueGraphElements : uint8_t
{
	Proportional                   = 0,
	Integral                       = 1,
	Max_None                       = 2,
	EFortPIDValueGraphElements_MAX = 3
};


// Enum FortniteGame.EFortIntensityGraphElements
enum class EFortIntensityGraphElements : uint8_t
{
	ActualIntensity                = 0,
	DesiredIntensity               = 1,
	Max_None                       = 2,
	EFortIntensityGraphElements_MAX = 3
};


// Enum FortniteGame.EFortContributionGraphElements
enum class EFortContributionGraphElements : uint8_t
{
	ProportionalLine               = 0,
	IntegralLine                   = 1,
	TotalLine                      = 2,
	PendingLine                    = 3,
	ActionLine                     = 4,
	Max_None                       = 5,
	EFortContributionGraphElements_MAX = 6
};


// Enum FortniteGame.EFortFactorContributionType
enum class EFortFactorContributionType : uint8_t
{
	CurrentValue_Direct            = 0,
	CurrentValue_Inverse           = 1,
	AverageValue_Direct            = 2,
	AverageValue_Inverse           = 3,
	EFortFactorContributionType_MAX = 4
};


// Enum FortniteGame.EFortAIDirectorFactor
enum class EFortAIDirectorFactor : uint8_t
{
	PlayerDamageThreat             = 0,
	ObjectiveDamageThreat          = 1,
	ObjectivePathCost              = 2,
	PlayerPathCost                 = 3,
	PlayerMovement                 = 4,
	TrapsEffective                 = 5,
	PlayerWander                   = 6,
	NearbyEnemyPresence            = 7,
	OffensiveResources             = 8,
	DefensiveResources             = 9,
	Boredom                        = 10,
	ArtilleryVulnerability         = 11,
	Max_None                       = 12,
	EFortAIDirectorFactor_MAX      = 13
};


// Enum FortniteGame.EFortCombatFactors
enum class EFortCombatFactors : uint8_t
{
	PlayerDamageThreat             = 0,
	ObjectiveDamageThreat          = 1,
	ObjectivePathCost              = 2,
	PlayerPathCost                 = 3,
	PlayerMovement                 = 4,
	TrapsEffective                 = 5,
	PlayerWander                   = 6,
	NearbyEnemyPresence            = 7,
	OffensiveResources             = 8,
	DefensiveResources             = 9,
	Boredom                        = 10,
	ArtilleryVulnerability         = 11,
	Max_None                       = 12,
	EFortCombatFactors_MAX         = 13
};


// Enum FortniteGame.EFortCombatEvents
enum class EFortCombatEvents : uint8_t
{
	HuskFollowing                  = 0,
	SmasherFollowing               = 1,
	TrollFollowing                 = 2,
	TakerFollowing                 = 3,
	PlayerTakeDamage               = 4,
	PlayerHealth                   = 5,
	PlayerLookAtEnemy              = 6,
	PlayerDamageEnemy              = 7,
	PlayerKilledEnemy              = 8,
	AtlasTakeDamage                = 9,
	AtlasHealth                    = 10,
	AtlasDestroyed                 = 11,
	TrapFiring                     = 12,
	BuildingTakeDamage             = 13,
	FoodHealingPotential           = 14,
	PlayerAmmo                     = 15,
	EnemiesNear                    = 16,
	PlayerMovement                 = 17,
	BuildingDamagedNearObjective   = 18,
	TrapDamageEnemy                = 19,
	ObjectivePathCost              = 20,
	PlayerPathCost                 = 21,
	Max_None                       = 22,
	EFortCombatEvents_MAX          = 23
};


// Enum FortniteGame.EFortAIDirectorEventParticipant
enum class EFortAIDirectorEventParticipant : uint8_t
{
	Target                         = 0,
	Source                         = 1,
	Either                         = 2,
	Max_None                       = 3,
	EFortAIDirectorEventParticipant_MAX = 4
};


// Enum FortniteGame.EFortCombatThresholds
enum class EFortCombatThresholds : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Extreme                        = 3,
	Max_None                       = 4,
	EFortCombatThresholds_MAX      = 5
};


// Enum FortniteGame.EFortElementalDamageType
enum class EFortElementalDamageType : uint8_t
{
	None                           = 0,
	Fire                           = 1,
	Ice                            = 2,
	Lightning                      = 3,
	MAX                            = 4,
	EFortElementalDamageType_MAX   = 5
};


// Enum FortniteGame.EFortDamageZone
enum class EFortDamageZone : uint8_t
{
	Light                          = 0,
	Normal                         = 1,
	Critical                       = 2,
	Vulnerability                  = 3,
	Max                            = 4,
	EFortDamageZone_MAX            = 5
};


// Enum FortniteGame.EFortBaseWeaponDamage
enum class EFortBaseWeaponDamage : uint8_t
{
	Combat                         = 0,
	Environmental                  = 1,
	EFortBaseWeaponDamage_MAX      = 2
};


// Enum FortniteGame.EFortWeaponCoreAnimation
enum class EFortWeaponCoreAnimation : uint8_t
{
	Melee                          = 0,
	Pistol                         = 1,
	Shotgun                        = 2,
	PaperBlueprint                 = 3,
	Rifle                          = 4,
	MeleeOneHand                   = 5,
	MachinePistol                  = 6,
	RocketLauncher                 = 7,
	GrenadeLauncher                = 8,
	GoingCommando                  = 9,
	AssaultRifle                   = 10,
	TacticalShotgun                = 11,
	SniperRifle                    = 12,
	TrapPlacement                  = 13,
	ShoulderLauncher               = 14,
	AbilityDecoTool                = 15,
	EFortWeaponCoreAnimation_MAX   = 16
};


// Enum FortniteGame.EFortReloadFXState
enum class EFortReloadFXState : uint8_t
{
	ReloadStart                    = 0,
	ReloadCartridge                = 1,
	ReloadEnd                      = 2,
	Max_None                       = 3,
	EFortReloadFXState_MAX         = 4
};


// Enum FortniteGame.EFortWeaponSoundState
enum class EFortWeaponSoundState : uint8_t
{
	Normal                         = 0,
	LowAmmo                        = 1,
	Degraded                       = 2,
	Max_None                       = 3,
	EFortWeaponSoundState_MAX      = 4
};


// Enum FortniteGame.EFortMontageInputType
enum class EFortMontageInputType : uint8_t
{
	WindowClickOrHold              = 0,
	WindowHoldOnly                 = 1,
	InstantClick                   = 2,
	EFortMontageInputType_MAX      = 3
};


// Enum FortniteGame.EFortAbilityTargetingSource
enum class EFortAbilityTargetingSource : uint8_t
{
	Camera                         = 0,
	PawnForward                    = 1,
	PawnTowardsFocus               = 2,
	WeaponForward                  = 3,
	WeaponTowardsFocus             = 4,
	Custom                         = 5,
	Max_None                       = 6,
	EFortAbilityTargetingSource_MAX = 7
};


// Enum FortniteGame.EFortAmmoType
enum class EFortAmmoType : uint8_t
{
	Pistol                         = 0,
	Shotgun                        = 1,
	Assault                        = 2,
	Sniper                         = 3,
	Energy                         = 4,
	EFortAmmoType_MAX              = 5
};


// Enum FortniteGame.EAbilitySystemComponentCreationPolicy
enum class EAbilitySystemComponentCreationPolicy : uint8_t
{
	Never                          = 0,
	Lazy                           = 1,
	Always                         = 2,
	EAbilitySystemComponentCreationPolicy_MAX = 3
};


// Enum FortniteGame.EAttributeInitLevelSource
enum class EAttributeInitLevelSource : uint8_t
{
	WorldDifficulty                = 0,
	PlayerBuildingSkill            = 1,
	EAttributeInitLevelSource_MAX  = 2
};


// Enum FortniteGame.EDynamicBuildingPlacementType
enum class EDynamicBuildingPlacementType : uint8_t
{
	CountsTowardsBounds            = 0,
	DestroyIfColliding             = 1,
	DestroyAnythingThatCollides    = 2,
	EDynamicBuildingPlacementType_MAX = 3
};


// Enum FortniteGame.ELootQuotaLevel
enum class ELootQuotaLevel : uint8_t
{
	Unlimited                      = 0,
	Level1                         = 1,
	Level2                         = 2,
	Level3                         = 3,
	Level4                         = 4,
	Level5                         = 5,
	Level6                         = 6,
	Level7                         = 7,
	Level8                         = 8,
	Level9                         = 9,
	Level10                        = 10,
	Level11                        = 11,
	Level12                        = 12,
	Level13                        = 13,
	Level14                        = 14,
	Level15                        = 15,
	Level16                        = 16,
	Level17                        = 17,
	NumLevels                      = 18,
	ELootQuotaLevel_MAX            = 19
};


// Enum FortniteGame.EBuildingNavObstacleType
enum class EBuildingNavObstacleType : uint8_t
{
	UnwalkableAll                  = 0,
	UnwalkableHuskOnly             = 1,
	SmashWhenLowHeight             = 2,
	SmashOnlyLowHeight             = 3,
	SmashSmasherOnly               = 4,
	SmashAll                       = 5,
	EBuildingNavObstacleType_MAX   = 6
};


// Enum FortniteGame.EFortDamageVisualsState
enum class EFortDamageVisualsState : uint8_t
{
	UnDamaged                      = 0,
	DamagedAndAnimating            = 1,
	DamagedAndStatic               = 2,
	EFortDamageVisualsState_MAX    = 3
};


// Enum FortniteGame.EStructuralSupportCheck
enum class EStructuralSupportCheck : uint8_t
{
	Stable                         = 0,
	Unstable                       = 1,
	Max_None                       = 2,
	EStructuralSupportCheck_MAX    = 3
};


// Enum FortniteGame.EBuildingReplacementType
enum class EBuildingReplacementType : uint8_t
{
	BRT_None                       = 0,
	BRT_Edited                     = 1,
	BRT_Conversion                 = 2,
	BRT_MAX                        = 3
};


// Enum FortniteGame.EPlacementType
enum class EPlacementType : uint8_t
{
	Free                           = 0,
	Grid                           = 1,
	None                           = 2,
	EPlacementType_MAX             = 3
};


// Enum FortniteGame.EBuildingAttachmentSide
enum class EBuildingAttachmentSide : uint8_t
{
	Front                          = 0,
	Back                           = 1,
	Any                            = 2,
	EBuildingAttachmentSide_MAX    = 3
};


// Enum FortniteGame.EBuildingAttachmentSlot
enum class EBuildingAttachmentSlot : uint8_t
{
	SLOT_Floor                     = 0,
	SLOT_Wall                      = 1,
	SLOT_Ceiling                   = 2,
	SLOT_None                      = 3,
	SLOT_MAX                       = 4
};


// Enum FortniteGame.EBuildingAnim
enum class EBuildingAnim : uint8_t
{
	EBA_None                       = 0,
	EBA_Building                   = 1,
	EBA_Breaking                   = 2,
	EBA_Destruction                = 3,
	EBA_Placement                  = 4,
	EBA_DynamicLOD                 = 5,
	EBA_DynamicShrink              = 6,
	EBA_MAX                        = 7
};


// Enum FortniteGame.EBoundingBoxSlotDirectionCalculation
enum class EBoundingBoxSlotDirectionCalculation : uint8_t
{
	Auto                           = 0,
	FaceWall                       = 1,
	FaceAwayFromWall               = 2,
	FaceCenter                     = 3,
	EBoundingBoxSlotDirectionCalculation_MAX = 4
};


// Enum FortniteGame.EFortProximityBasedGEApplicationType
enum class EFortProximityBasedGEApplicationType : uint8_t
{
	ApplyOnProximityPulse          = 0,
	ApplyOnProximityTouch          = 1,
	ApplyOnlyDuringProximityTouch  = 2,
	EFortProximityBasedGEApplicationType_MAX = 3
};


// Enum FortniteGame.EFortDeliveryInfoBuildingActorSpecification
enum class EFortDeliveryInfoBuildingActorSpecification : uint8_t
{
	All                            = 0,
	PlayerBuildable                = 1,
	NonPlayerBuildable             = 2,
	EFortDeliveryInfoBuildingActorSpecification_MAX = 3
};


// Enum FortniteGame.EUnlockRules
enum class EUnlockRules : uint8_t
{
	UR_Reset                       = 0,
	UR_MaintainState               = 1,
	UR_ResetDeactivate             = 2,
	UR_MAX                         = 3
};


// Enum FortniteGame.EContentionRules
enum class EContentionRules : uint8_t
{
	CR_MajorityWins                = 0,
	CR_OneTeamOnlyWins             = 1,
	CR_MAX                         = 2
};


// Enum FortniteGame.EFortIsFinalXpUpdate
enum class EFortIsFinalXpUpdate : uint8_t
{
	Uninitialized                  = 0,
	NotFinal                       = 1,
	Final                          = 2,
	EFortIsFinalXpUpdate_MAX       = 3
};


// Enum FortniteGame.EFortRewardType
enum class EFortRewardType : uint8_t
{
	Default                        = 0,
	Missed                         = 1,
	Max_None                       = 2,
	EFortRewardType_MAX            = 3
};


// Enum FortniteGame.EFortRewardActivityType
enum class EFortRewardActivityType : uint8_t
{
	General                        = 0,
	MissionPrimary                 = 1,
	MissionSecondary               = 2,
	AccountLevelUp                 = 3,
	Max_None                       = 4,
	EFortRewardActivityType_MAX    = 5
};


// Enum FortniteGame.EStatCategory
enum class EStatCategory : uint8_t
{
	Combat                         = 0,
	Building                       = 1,
	Utility                        = 2,
	Max_None                       = 3,
	EStatCategory_MAX              = 4
};


// Enum FortniteGame.EFortReplicatedStat
enum class EFortReplicatedStat : uint8_t
{
	MonsterKills                   = 0,
	MonsterDamagePoints            = 1,
	PlayerKills                    = 2,
	WoodGathered                   = 3,
	StoneGathered                  = 4,
	MetalGathered                  = 5,
	Deaths                         = 6,
	BuildingsBuilt                 = 7,
	BuildingsBuilt_Wood            = 8,
	BuildingsBuilt_Stone           = 9,
	BuildingsBuilt_Metal           = 10,
	BuildingsUpgraded_Wood2        = 11,
	BuildingsUpgraded_Wood3        = 12,
	BuildingsUpgraded_Stone2       = 13,
	BuildingsUpgraded_Stone3       = 14,
	BuildingsUpgraded_Metal2       = 15,
	BuildingsUpgraded_Metal3       = 16,
	BuildingsDestroyed             = 17,
	Repair_Wood                    = 18,
	Repair_Stone                   = 19,
	Repair_Metal                   = 20,
	FlagsCaptured                  = 21,
	FlagsReturned                  = 22,
	ContainersLooted               = 23,
	CraftingPoints                 = 24,
	TrapPlacementPoints            = 25,
	TrapActivationPoints           = 26,
	TotalScore                     = 27,
	OldTotalScore                  = 28,
	CombatScore                    = 29,
	BuildingScore                  = 30,
	UtilityScore                   = 31,
	BadgesScore                    = 32,
	None                           = 33,
	MAX                            = 34,
	EFortReplicatedStat_MAX        = 35
};


// Enum FortniteGame.EFortReplenishmentType
enum class EFortReplenishmentType : uint8_t
{
	Restricted                     = 0,
	ClampMin                       = 1,
	Add                            = 2,
	Ability                        = 3,
	EFortReplenishmentType_MAX     = 4
};


// Enum FortniteGame.EFortTemplateAccess
enum class EFortTemplateAccess : uint8_t
{
	Normal                         = 0,
	Trusted                        = 1,
	Private                        = 2,
	EFortTemplateAccess_MAX        = 3
};


// Enum FortniteGame.EItemEvolutionRestrictionReason
enum class EItemEvolutionRestrictionReason : uint8_t
{
	NoEvolutions                   = 0,
	BelowMaximumLevel              = 1,
	VaultOverflow                  = 2,
	MissingCatalyst                = 3,
	MissingCosts                   = 4,
	EItemEvolutionRestrictionReason_MAX = 5
};


// Enum FortniteGame.EItemUpgradeRestrictionReason
enum class EItemUpgradeRestrictionReason : uint8_t
{
	NoAdditionalLevels             = 0,
	MaximumLevelAchieved           = 1,
	VaultOverflow                  = 2,
	EItemUpgradeRestrictionReason_MAX = 3
};


// Enum FortniteGame.EFortQuickBars
enum class EFortQuickBars : uint8_t
{
	Primary                        = 0,
	Secondary                      = 1,
	Max_None                       = 2,
	EFortQuickBars_MAX             = 3
};


// Enum FortniteGame.EFOBFileHeaderStatus
enum class EFOBFileHeaderStatus : uint8_t
{
	NoExistingFile                 = 0,
	HasExistingFile                = 1,
	UnableToDetermine              = 2,
	EFOBFileHeaderStatus_MAX       = 3
};


// Enum FortniteGame.EFOBInitStatus
enum class EFOBInitStatus : uint8_t
{
	Successful                     = 0,
	Failure_CloudStorageDisabled   = 1,
	Failure_PreviouslyInitialized  = 2,
	Failure_DataOwner              = 3,
	Failure_CloudStorageError      = 4,
	Failure_MissingFileName        = 5,
	Failure_Generic                = 6,
	EFOBInitStatus_MAX             = 7
};


// Enum FortniteGame.EFOBMode
enum class EFOBMode : uint8_t
{
	Uninitialized                  = 0,
	Creation                       = 1,
	Deployment                     = 2,
	EFOBMode_MAX                   = 3
};


// Enum FortniteGame.EFortItemCollectorBehavior
enum class EFortItemCollectorBehavior : uint8_t
{
	FirstToGoal                    = 0,
	FreeForAll                     = 1,
	TugOfWar                       = 2,
	EFortItemCollectorBehavior_MAX = 3
};


// Enum FortniteGame.EFortItemCollectorState
enum class EFortItemCollectorState : uint8_t
{
	CanInteract                    = 0,
	Active                         = 1,
	Inactive                       = 2,
	Captured                       = 3,
	Invalid                        = 4,
	EFortItemCollectorState_MAX    = 5
};


// Enum FortniteGame.EDeployableBaseConstructionStatus
enum class EDeployableBaseConstructionStatus : uint8_t
{
	Constructing                   = 0,
	Destroying                     = 1,
	Finished                       = 2,
	EDeployableBaseConstructionStatus_MAX = 3
};


// Enum FortniteGame.EDeployableBaseBuildingState
enum class EDeployableBaseBuildingState : uint8_t
{
	Empty                          = 0,
	Built                          = 1,
	Unoccupied                     = 2,
	WaitingToBuild                 = 3,
	Building                       = 4,
	WaitingToDestroy               = 5,
	Destroying                     = 6,
	WaitingToReset                 = 7,
	Resetting                      = 8,
	EDeployableBaseBuildingState_MAX = 9
};


// Enum FortniteGame.EDeployableBaseBoxType
enum class EDeployableBaseBoxType : uint8_t
{
	BuildSpace                     = 0,
	SaveSpace                      = 1,
	PlotSpace                      = 2,
	NumSpaceTypes                  = 3,
	EDeployableBaseBoxType_MAX     = 4
};


// Enum FortniteGame.EFortMiniMapIconRotation
enum class EFortMiniMapIconRotation : uint8_t
{
	EFMMIR_None                    = 0,
	EFMMIR_Absolute                = 1,
	EFMMIR_Relative                = 2,
	EFMMIR_MAX                     = 3
};


// Enum FortniteGame.EFortMiniMapContext
enum class EFortMiniMapContext : uint8_t
{
	EFMC_MiniMap                   = 0,
	EFMC_FullScreenMap             = 1,
	EFMC_MAX                       = 2
};


// Enum FortniteGame.EFortMiniMapHeight
enum class EFortMiniMapHeight : uint8_t
{
	EFMH_Equal                     = 0,
	EFMH_Below                     = 1,
	EFMH_Above                     = 2,
	EFMH_MAX                       = 3
};


// Enum FortniteGame.EFortAbilityTargetSelectionUsage
enum class EFortAbilityTargetSelectionUsage : uint8_t
{
	BothTargetingAndCanHit         = 0,
	OnlyTargeting                  = 1,
	OnlyCanHit                     = 2,
	EFortAbilityTargetSelectionUsage_MAX = 3
};


// Enum FortniteGame.EFortAbilityCostSource
enum class EFortAbilityCostSource : uint8_t
{
	Stamina                        = 0,
	Durability                     = 1,
	AmmoMagazine                   = 2,
	AmmoPrimary                    = 3,
	Item                           = 4,
	EFortAbilityCostSource_MAX     = 5
};


// Enum FortniteGame.EFortGameplayAbilityActivation
enum class EFortGameplayAbilityActivation : uint8_t
{
	Passive                        = 0,
	Triggered                      = 1,
	Active                         = 2,
	EFortGameplayAbilityActivation_MAX = 3
};


// Enum FortniteGame.EFortAIWeaponUsage
enum class EFortAIWeaponUsage : uint8_t
{
	NoWeaponUsage                  = 0,
	UsesRangedWeapon               = 1,
	UsesMeleeWeapon                = 2,
	EFortAIWeaponUsage_MAX         = 3
};


// Enum FortniteGame.EFortGameplayAbilityMontageSectionToPlay
enum class EFortGameplayAbilityMontageSectionToPlay : uint8_t
{
	FirstSection                   = 0,
	RandomSection                  = 1,
	TestedRandomSection            = 2,
	EFortGameplayAbilityMontageSectionToPlay_MAX = 3
};


// Enum FortniteGame.EFortStrategicBuildingLevelCriteriaDisplayRepresentation
enum class EFortStrategicBuildingLevelCriteriaDisplayRepresentation : uint8_t
{
	Integer                        = 0,
	Float                          = 1,
	EFortStrategicBuildingLevelCriteriaDisplayRepresentation_MAX = 2
};


// Enum FortniteGame.EFortStrategicBuildingCategory
enum class EFortStrategicBuildingCategory : uint8_t
{
	Defensive                      = 0,
	Offensive                      = 1,
	Utility                        = 2,
	EFortStrategicBuildingCategory_MAX = 3
};


// Enum FortniteGame.EFortRiftSlotStatus
enum class EFortRiftSlotStatus : uint8_t
{
	Reserved                       = 0,
	Occupied                       = 1,
	Max_None                       = 2,
	EFortRiftSlotStatus_MAX        = 3
};


// Enum FortniteGame.EFortDisplayTier
enum class EFortDisplayTier : uint8_t
{
	Invalid                        = 0,
	Handmade                       = 1,
	Copper                         = 2,
	Silver                         = 3,
	Malachite                      = 4,
	Obsidian                       = 5,
	Brightcore                     = 6,
	Spectrolite                    = 7,
	Shadowshard                    = 8,
	Sunbeam                        = 9,
	Moonglow                       = 10,
	EFortDisplayTier_MAX           = 11
};


// Enum FortniteGame.ETrackVerticality
enum class ETrackVerticality : uint8_t
{
	Floor                          = 0,
	Ramp                           = 1,
	GradualRamp                    = 2,
	Max_None                       = 3,
	ETrackVerticality_MAX          = 4
};


// Enum FortniteGame.ETrackIncline
enum class ETrackIncline : uint8_t
{
	NoNeighbor                     = 0,
	Flat                           = 1,
	Up                             = 2,
	Down                           = 3,
	GradualUp                      = 4,
	GradualDown                    = 5,
	Max_None                       = 6,
	ETrackIncline_MAX              = 7
};


// Enum FortniteGame.ETrackPieceType
enum class ETrackPieceType : uint8_t
{
	None                           = 0,
	Straight                       = 1,
	Turn                           = 2,
	TShape                         = 3,
	Cross                          = 4,
	Max_None                       = 5,
	ETrackPieceType_MAX            = 6
};


// Enum FortniteGame.ETrackDirection
enum class ETrackDirection : uint8_t
{
	YNegative                      = 0,
	XPositive                      = 1,
	YPositive                      = 2,
	XNegative                      = 3,
	Max_None                       = 4,
	ETrackDirection_MAX            = 5
};


// Enum FortniteGame.EFortAccountLinkingUIConfig
enum class EFortAccountLinkingUIConfig : uint8_t
{
	Disabled                       = 0,
	Default                        = 1,
	ExternalViewerOnly             = 2,
	FullExternal                   = 3,
	EFortAccountLinkingUIConfig_MAX = 4
};


// Enum FortniteGame.EFortThreatDeactivationType
enum class EFortThreatDeactivationType : uint8_t
{
	Off                            = 0,
	Dormant                        = 1,
	EFortThreatDeactivationType_MAX = 2
};


// Enum FortniteGame.EBuildingFoundationType
enum class EBuildingFoundationType : uint8_t
{
	BFT_3x3                        = 0,
	BFT_5x5                        = 1,
	BFT_5x10                       = 2,
	BFT_None                       = 3,
	BFT_MAX                        = 4
};


// Enum FortniteGame.ELayoutRequirementStatus
enum class ELayoutRequirementStatus : uint8_t
{
	Inactive_Invisible             = 0,
	Active_Invisible               = 1,
	Active_Visible                 = 2,
	ELayoutRequirementStatus_MAX   = 3
};


// Enum FortniteGame.EFortDefenderInteractionError
enum class EFortDefenderInteractionError : uint8_t
{
	None                           = 0,
	Obstructed                     = 1,
	NoEditPermission               = 2,
	EFortDefenderInteractionError_MAX = 3
};


// Enum FortniteGame.FDynamicBuildOrder
enum class EFDynamicBuildOrder : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	None                           = 3,
	FDynamicBuildOrder_MAX         = 4
};


// Enum FortniteGame.EBinaryToggleValues
enum class EBinaryToggleValues : uint8_t
{
	BTV_Active                     = 0,
	BTV_Inactive                   = 1,
	BTV_Either                     = 2,
	BTV_MAX                        = 3
};


// Enum FortniteGame.EAuxIndicatorStates
enum class EAuxIndicatorStates : uint8_t
{
	AIS_GuidingArrow               = 0,
	AIS_ConfirmedArrow             = 1,
	AIS_Inactive                   = 2,
	AIS_Active                     = 3,
	AIS_MAX                        = 4
};


// Enum FortniteGame.EColorSwatchType
enum class EColorSwatchType : uint8_t
{
	EColorSwatchType_Skin          = 0,
	EColorSwatchType_Hair          = 1,
	EColorSwatchType_BodyAccessory = 2,
	EColorSwatchType_Accessory     = 3,
	EColorSwatchType_NumTypes      = 4,
	EColorSwatchType_MAX           = 5
};


// Enum FortniteGame.ECharacterColorSwatchType
enum class ECharacterColorSwatchType : uint8_t
{
	ECharacterColorSwatchType_Skin = 0,
	ECharacterColorSwatchType_Hair = 1,
	ECharacterColorSwatchType_NumTypes = 2,
	ECharacterColorSwatchType_MAX  = 3
};


// Enum FortniteGame.EAccessoryColorName
enum class EAccessoryColorName : uint8_t
{
	EAccessoryColorName_AccessoryColor1 = 0,
	EAccessoryColorName_AccessoryColor2 = 1,
	EAccessoryColorName_AccessoryColor3 = 2,
	EAccessoryColorName_NumTypes   = 3,
	EAccessoryColorName_MAX        = 4
};


// Enum FortniteGame.ECustomHatType
enum class ECustomHatType : uint8_t
{
	ECustomHatType_None            = 0,
	ECustomHatType_Cap             = 1,
	ECustomHatType_Helmet          = 2,
	ECustomHatType_Mask            = 3,
	ECustomHatType_Hat             = 4,
	ECustomHatType_HeadReplacement = 5,
	ECustomHatType_MAX             = 6
};


// Enum FortniteGame.EClothingColorName
enum class EClothingColorName : uint8_t
{
	EClothingColorName_AccessoryColor1 = 0,
	EClothingColorName_AccessoryColor2 = 1,
	EClothingColorName_NumTypes    = 2,
	EClothingColorName_MAX         = 3
};


// Enum FortniteGame.EFortAttributeDisplay
enum class EFortAttributeDisplay : uint8_t
{
	BasicInt                       = 0,
	NegativeImpliesInfiniteInt     = 1,
	BasicFloat                     = 2,
	NegativeImpliesInfiniteFloat   = 3,
	BasicString                    = 4,
	NormalizedPercentage           = 5,
	StringArray                    = 6,
	SlateBrush                     = 7,
	DoNotDisplay                   = 8,
	None_Max                       = 9,
	EFortAttributeDisplay_MAX      = 10
};


// Enum FortniteGame.EFortStatDisplayType
enum class EFortStatDisplayType : uint8_t
{
	Category                       = 0,
	Buff                           = 1,
	Debuff                         = 2,
	Neutral                        = 3,
	DoNotDisplay                   = 4,
	EFortStatDisplayType_MAX       = 5
};


// Enum FortniteGame.EFortDirectedMovementSpace
enum class EFortDirectedMovementSpace : uint8_t
{
	WorldSpace                     = 0,
	ActorLocRelative               = 1,
	ActorLocRotRelative            = 2,
	CameraRelative                 = 3,
	EFortDirectedMovementSpace_MAX = 4
};


// Enum FortniteGame.EPathUndermineEvent
enum class EPathUndermineEvent : uint8_t
{
	Predicted                      = 0,
	Started                        = 1,
	Finished                       = 2,
	EPathUndermineEvent_MAX        = 3
};


// Enum FortniteGame.EPathObstacleAction
enum class EPathObstacleAction : uint8_t
{
	Melee                          = 0,
	Ignore                         = 1,
	AbortMoveAsFailed              = 2,
	FinishMoveAsSucceeded          = 3,
	EPathObstacleAction_MAX        = 4
};


// Enum FortniteGame.EFortFeedbackBroadcastFilter
enum class EFortFeedbackBroadcastFilter : uint8_t
{
	FFBF_Speaker                   = 0,
	FFBF_SpeakerTeam               = 1,
	FFBF_SpeakerAdressee           = 2,
	FFBF_HumanPvP_Team1            = 3,
	FFBF_HumanPvP_Team2            = 4,
	FFBF_None_Max                  = 5,
	FFBF_MAX                       = 6
};


// Enum FortniteGame.EFortFeedbackSelectionMethod
enum class EFortFeedbackSelectionMethod : uint8_t
{
	FFSM_Instigator                = 0,
	FFSM_Recipient                 = 1,
	FFSM_TeamWitness               = 2,
	FFSM_EnemyWitness              = 3,
	FFSM_Random                    = 4,
	FFSM_Priority_IRTE             = 5,
	FFSM_AllPawns                  = 6,
	FFSM_Announcer                 = 7,
	FFSM_MAX                       = 8
};


// Enum FortniteGame.EFortFeedbackAddressee
enum class EFortFeedbackAddressee : uint8_t
{
	FFA_Instigator                 = 0,
	FFA_Recipient                  = 1,
	FFA_All                        = 2,
	FFA_MAX                        = 3
};


// Enum FortniteGame.EFortFeedbackContext
enum class EFortFeedbackContext : uint8_t
{
	FFC_Instigator                 = 0,
	FFC_Recipient                  = 1,
	FFC_TeamWitness                = 2,
	FFC_EnemyWitness               = 3,
	FFC_AllPawns                   = 4,
	FFC_Announcer                  = 5,
	FFC_None_Max                   = 6,
	FFC_MAX                        = 7
};


// Enum FortniteGame.EFortSentenceAudioPreference
enum class EFortSentenceAudioPreference : uint8_t
{
	AudioAsset                     = 0,
	FeedbackBank                   = 1,
	EFortSentenceAudioPreference_MAX = 2
};


// Enum FortniteGame.EFortPickupTossState
enum class EFortPickupTossState : uint8_t
{
	NotTossed                      = 0,
	InProgress                     = 1,
	AtRest                         = 2,
	EFortPickupTossState_MAX       = 3
};


// Enum FortniteGame.EFortControlRecoveryBehavior
enum class EFortControlRecoveryBehavior : uint8_t
{
	DefaultControl                 = 0,
	LimitedControl                 = 1,
	ChainControl                   = 2,
	EFortControlRecoveryBehavior_MAX = 3
};


// Enum FortniteGame.EFortPawnPushSize
enum class EFortPawnPushSize : uint8_t
{
	FFPS_Normal                    = 0,
	FPPS_Player                    = 1,
	FPPS_Large                     = 2,
	FPPS_SuperLarge                = 3,
	EFortPawnPushSize_MAX          = 4
};


// Enum FortniteGame.EFortAIPawnGender
enum class EFortAIPawnGender : uint8_t
{
	FAPG_Default                   = 0,
	FAPG_Female                    = 1,
	FAPG_Male                      = 2,
	FAPG_MAX                       = 3
};


// Enum FortniteGame.EFortAILevelRatingDisplayType
enum class EFortAILevelRatingDisplayType : uint8_t
{
	DisplayRatingBasedOnDifficulty = 0,
	DisplayAIDifficultyAsRating    = 1,
	DontDisplayRating              = 2,
	EFortAILevelRatingDisplayType_MAX = 3
};


// Enum FortniteGame.EFortressAIType
enum class EFortressAIType : uint8_t
{
	FAT_Dormant                    = 0,
	FAT_Cleaner                    = 1,
	FAT_DayWanderer                = 2,
	FAT_NightWanderer              = 3,
	FAT_DebugOnly                  = 4,
	FAT_Encounter                  = 5,
	FAT_MAX                        = 6
};


// Enum FortniteGame.EFortEncounterSpawnLimitType
enum class EFortEncounterSpawnLimitType : uint8_t
{
	NoLimit                        = 0,
	NumPawnsLimit                  = 1,
	SpawnPointLimit                = 2,
	UserDefined                    = 3,
	MAX                            = 4,
	EFortEncounterSpawnLimitType_MAX = 5
};


// Enum FortniteGame.EFortEncounterUtilitiesMode
enum class EFortEncounterUtilitiesMode : uint8_t
{
	LockedOnly                     = 0,
	LockedAndFree                  = 1,
	EFortEncounterUtilitiesMode_MAX = 2
};


// Enum FortniteGame.EFortEncounterSpawnLocationPlacementMode
enum class EFortEncounterSpawnLocationPlacementMode : uint8_t
{
	Directional                    = 0,
	Ring                           = 1,
	Volume                         = 2,
	Custom                         = 3,
	Max_None                       = 4,
	EFortEncounterSpawnLocationPlacementMode_MAX = 5
};


// Enum FortniteGame.EFortEncounterPacingMode
enum class EFortEncounterPacingMode : uint8_t
{
	SpawnPointsPercentageCurve     = 0,
	IntensityCurve                 = 1,
	Burst                          = 2,
	EFortEncounterPacingMode_MAX   = 3
};


// Enum FortniteGame.EWardAffectType
enum class EWardAffectType : uint8_t
{
	AffectsBothStartAndEndPoints   = 0,
	AffectsOnlyStartPoints         = 1,
	AffectsOnlyEndPoints           = 2,
	EWardAffectType_MAX            = 3
};


// Enum FortniteGame.EFortEncounterUtilityDesire
enum class EFortEncounterUtilityDesire : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	VeryHigh                       = 3,
	Max_None                       = 4,
	EFortEncounterUtilityDesire_MAX = 5
};


// Enum FortniteGame.EFortAIDirectorFactorContribution
enum class EFortAIDirectorFactorContribution : uint8_t
{
	Direct                         = 0,
	Inverse                        = 1,
	EFortAIDirectorFactorContribution_MAX = 2
};


// Enum FortniteGame.EFortAIDirectorEventContribution
enum class EFortAIDirectorEventContribution : uint8_t
{
	Increment                      = 0,
	Set                            = 1,
	EFortAIDirectorEventContribution_MAX = 2
};


// Enum FortniteGame.ETagGoalScoringCategory
enum class ETagGoalScoringCategory : uint8_t
{
	Ignore                         = 0,
	HighInterest                   = 1,
	NumCategories                  = 2,
	ETagGoalScoringCategory_MAX    = 3
};


// Enum FortniteGame.EFortIntensityCurveSequenceType
enum class EFortIntensityCurveSequenceType : uint8_t
{
	Sequence                       = 0,
	Loop                           = 1,
	Random                         = 2,
	Max_None                       = 3,
	EFortIntensityCurveSequenceType_MAX = 4
};


// Enum FortniteGame.EFortAIWaveProgressSection
enum class EFortAIWaveProgressSection : uint8_t
{
	SectionOne                     = 0,
	SectionTwo                     = 1,
	Max_None                       = 2,
	EFortAIWaveProgressSection_MAX = 3
};


// Enum FortniteGame.EFortEncounterState
enum class EFortEncounterState : uint8_t
{
	Uninitialized                  = 0,
	InitializingProperties         = 1,
	InitializingRiftManager        = 2,
	AwaitingActivation             = 3,
	Active                         = 4,
	Max_None                       = 5,
	EFortEncounterState_MAX        = 6
};


// Enum FortniteGame.EFortEncounterPacingState
enum class EFortEncounterPacingState : uint8_t
{
	Ramp                           = 0,
	Peak                           = 1,
	Fade                           = 2,
	Rest                           = 3,
	Max_None                       = 4,
	EFortEncounterPacingState_MAX  = 5
};


// Enum FortniteGame.EFortEncounterSequenceResult
enum class EFortEncounterSequenceResult : uint8_t
{
	Success                        = 0,
	FailedEncounterInProgress      = 1,
	EFortEncounterSequenceResult_MAX = 2
};


// Enum FortniteGame.EAssignmentCreationResult
enum class EAssignmentCreationResult : uint8_t
{
	AssignmentNotFoundOrCreated    = 0,
	AssignmentCreated              = 1,
	AssignmentFound                = 2,
	EAssignmentCreationResult_MAX  = 3
};


// Enum FortniteGame.ECorePerceptionTypes
enum class ECorePerceptionTypes : uint8_t
{
	Sight                          = 0,
	Hearing                        = 1,
	Damage                         = 2,
	Touch                          = 3,
	Team                           = 4,
	Prediction                     = 5,
	MAX                            = 6,
	ECorePerceptionTypes_MAX       = 7
};


// Enum FortniteGame.EFortHuskAnimType
enum class EFortHuskAnimType : uint8_t
{
	Basic                          = 0,
	Dwarf                          = 1,
	BlasterBig                     = 2,
	Weak                           = 3,
	TinyHead                       = 4,
	Beehive                        = 5,
	Husky                          = 6,
	Sploder                        = 7,
	EFortHuskAnimType_MAX          = 8
};


// Enum FortniteGame.EFortSupportBonusType
enum class EFortSupportBonusType : uint8_t
{
	Normal                         = 0,
	Tactical                       = 1,
	Max_None                       = 2,
	EFortSupportBonusType_MAX      = 3
};


// Enum FortniteGame.ESpecializationType
enum class ESpecializationType : uint8_t
{
	Tier1                          = 0,
	Tier2                          = 1,
	Tier3                          = 2,
	Tier4                          = 3,
	NumTiers                       = 4,
	ESpecializationType_MAX        = 5
};


// Enum FortniteGame.EFortPawnStasisMode
enum class EFortPawnStasisMode : uint8_t
{
	None                           = 0,
	NoMovement                     = 1,
	NoMovementOrTurning            = 2,
	EFortPawnStasisMode_MAX        = 3
};


// Enum FortniteGame.EMontageInterrupt
enum class EMontageInterrupt : uint8_t
{
	Any                            = 0,
	RootMotionOnly                 = 1,
	None                           = 2,
	EMontageInterrupt_MAX          = 3
};


// Enum FortniteGame.EPrereqNodeType
enum class EPrereqNodeType : uint8_t
{
	Invalid                        = 0,
	SkillPoint                     = 1,
	ResearchPoint                  = 2,
	All                            = 3,
	EPrereqNodeType_MAX            = 4
};


// Enum FortniteGame.EFortHomebaseNodeActionType
enum class EFortHomebaseNodeActionType : uint8_t
{
	None                           = 0,
	DrillDown                      = 1,
	CollectResources               = 2,
	Max_None                       = 3,
	EFortHomebaseNodeActionType_MAX = 4
};


// Enum FortniteGame.EFortHomebaseNodeMagnitude
enum class EFortHomebaseNodeMagnitude : uint8_t
{
	Small                          = 0,
	Medium                         = 1,
	Large                          = 2,
	Max_None                       = 3,
	EFortHomebaseNodeMagnitude_MAX = 4
};


// Enum FortniteGame.EFortHomebaseNodeDisplayType
enum class EFortHomebaseNodeDisplayType : uint8_t
{
	Stat                           = 0,
	SquadSlot                      = 1,
	Gadget                         = 2,
	Inventory                      = 3,
	Hero                           = 4,
	ExitNode                       = 5,
	Max_None                       = 6,
	EFortHomebaseNodeDisplayType_MAX = 7
};


// Enum FortniteGame.EFortHomebaseSquadSlotType
enum class EFortHomebaseSquadSlotType : uint8_t
{
	GroundSlot                     = 0,
	SupportSlot                    = 1,
	TacticalSlot                   = 2,
	Max_None                       = 3,
	EFortHomebaseSquadSlotType_MAX = 4
};


// Enum FortniteGame.EFortHomebaseSquadType
enum class EFortHomebaseSquadType : uint8_t
{
	AttributeSquad                 = 0,
	CombatSquad                    = 1,
	DefenderSquad                  = 2,
	ExpeditionSquad                = 3,
	Max_None                       = 4,
	EFortHomebaseSquadType_MAX     = 5
};


// Enum FortniteGame.EFortAnnouncementDisplayPreference
enum class EFortAnnouncementDisplayPreference : uint8_t
{
	Default_HUD                    = 0,
	QuestIntroduction              = 1,
	QuestJournal                   = 2,
	EFortAnnouncementDisplayPreference_MAX = 3
};


// Enum FortniteGame.EFortAnnouncementChannel
enum class EFortAnnouncementChannel : uint8_t
{
	Primary                        = 0,
	Conversation                   = 1,
	Tutorial                       = 2,
	Max_None                       = 3,
	EFortAnnouncementChannel_MAX   = 4
};


// Enum FortniteGame.EFortAnnouncementDelivery
enum class EFortAnnouncementDelivery : uint8_t
{
	Created                        = 0,
	Received                       = 1,
	Ignored                        = 2,
	Active                         = 3,
	Stopped                        = 4,
	Max_None                       = 5,
	EFortAnnouncementDelivery_MAX  = 6
};


// Enum FortniteGame.EStatRecordingPeriod
enum class EStatRecordingPeriod : uint8_t
{
	Minute                         = 0,
	Life                           = 1,
	Map                            = 2,
	Campaign                       = 3,
	Persistent                     = 4,
	Max                            = 5,
	EStatRecordingPeriod_MAX       = 6
};


// Enum FortniteGame.EStatMod
enum class EStatMod : uint8_t
{
	Delta                          = 0,
	Set                            = 1,
	Maximum                        = 2,
	EStatMod_MAX                   = 3
};


// Enum FortniteGame.EFortEventConditionType
enum class EFortEventConditionType : uint8_t
{
	EFEC_StatCompare               = 0,
	EFEC_CanCraft                  = 1,
	EFEC_MAX                       = 2
};


// Enum FortniteGame.EFortCompare
enum class EFortCompare : uint8_t
{
	EFC_LessThan                   = 0,
	EFC_LessThanOrEqual            = 1,
	EFC_GreaterThan                = 2,
	EFC_GreaterThanOrEqual         = 3,
	EFC_Equals                     = 4,
	EFC_MAX                        = 5
};


// Enum FortniteGame.EFortEventRepeat
enum class EFortEventRepeat : uint8_t
{
	EFER_Inactive                  = 0,
	EFER_Always                    = 1,
	EFER_OncePerPlayer             = 2,
	EFER_OncePerCampaign           = 3,
	EFER_OncePerMap                = 4,
	EFER_MAX                       = 5
};


// Enum FortniteGame.EFortNotificationPriority
enum class EFortNotificationPriority : uint8_t
{
	Friend                         = 0,
	BoostedXP                      = 1,
	TwitchHigh                     = 2,
	GeneralSendNotification        = 3,
	TwitchLow                      = 4,
	Max                            = 5,
	EFortNotificationPriority_MAX  = 6
};


// Enum FortniteGame.EFortNotificationType
enum class EFortNotificationType : uint8_t
{
	Default                        = 0,
	Power                          = 1,
	EFortNotificationType_MAX      = 2
};


// Enum FortniteGame.EFortHexTileAdjacency
enum class EFortHexTileAdjacency : uint8_t
{
	North                          = 0,
	NorthEast                      = 1,
	SouthEast                      = 2,
	South                          = 3,
	SouthWest                      = 4,
	NorthWest                      = 5,
	Max_None                       = 6,
	EFortHexTileAdjacency_MAX      = 7
};


// Enum FortniteGame.EFortTheaterType
enum class EFortTheaterType : uint8_t
{
	Standard                       = 0,
	Elder                          = 1,
	PvP                            = 2,
	PvP2                           = 3,
	Tutorial                       = 4,
	TutorialGate                   = 5,
	Test                           = 6,
	Max_None                       = 7,
	EFortTheaterType_MAX           = 8
};


// Enum FortniteGame.EFortTheaterMapTileType
enum class EFortTheaterMapTileType : uint8_t
{
	Normal                         = 0,
	CriticalMission                = 1,
	AlwaysActive                   = 2,
	Outpost                        = 3,
	NonMission                     = 4,
	PvPFOB                         = 5,
	EFortTheaterMapTileType_MAX    = 6
};


// Enum FortniteGame.EFortOptionGenerationResult
enum class EFortOptionGenerationResult : uint8_t
{
	NoOptionsGenerated             = 0,
	NewOptionsGenerated            = 1,
	ExistingOptionsGenerated       = 2,
	EFortOptionGenerationResult_MAX = 3
};


// Enum FortniteGame.EFortQuestState
enum class EFortQuestState : uint8_t
{
	Inactive                       = 0,
	Active                         = 1,
	Completed                      = 2,
	Claimed                        = 3,
	EFortQuestState_MAX            = 4
};


// Enum FortniteGame.EFortMissionQuestValidityResult
enum class EFortMissionQuestValidityResult : uint8_t
{
	Invalid                        = 0,
	InvalidNotPlayable             = 1,
	ValidLinked                    = 2,
	ValidObjectiveCondition        = 3,
	ValidFallback                  = 4,
	EFortMissionQuestValidityResult_MAX = 5
};


// Enum FortniteGame.EWaveRules
enum class EWaveRules : uint8_t
{
	KillAllEnemies                 = 0,
	Timed                          = 1,
	KillPoints                     = 2,
	EWaveRules_MAX                 = 3
};


// Enum FortniteGame.EFriendFeedbackType
enum class EFriendFeedbackType : uint8_t
{
	FriendRequestSent              = 0,
	FriendRequestReceived          = 1,
	FriendRequestAccepted          = 2,
	Default                        = 3,
	EFriendFeedbackType_MAX        = 4
};


// Enum FortniteGame.ECameraOrigin
enum class ECameraOrigin : uint8_t
{
	ViewTargetTransform            = 0,
	BoneTransform                  = 1,
	ECameraOrigin_MAX              = 2
};


// Enum FortniteGame.EFortVisibilityBehavior
enum class EFortVisibilityBehavior : uint8_t
{
	Proximity                      = 0,
	OnceSeenAlwaysSeen             = 1,
	Invalid                        = 2,
	EFortVisibilityBehavior_MAX    = 3
};


// Enum FortniteGame.EFortSafeZoneState
enum class EFortSafeZoneState : uint8_t
{
	None                           = 0,
	Starting                       = 1,
	Holding                        = 2,
	Shrinking                      = 3,
	EFortSafeZoneState_MAX         = 4
};


// Enum FortniteGame.ECollectionSelectionMethod
enum class ECollectionSelectionMethod : uint8_t
{
	TierAsIndex                    = 0,
	TierAsIndexOverflowToLastValid = 1,
	Modulo                         = 2,
	Random                         = 3,
	None                           = 4,
	ECollectionSelectionMethod_MAX = 5
};


// Enum FortniteGame.ETargetDistanceComparisonType
enum class ETargetDistanceComparisonType : uint8_t
{
	TwoDimensions                  = 0,
	ThreeDimensions                = 1,
	CollisionHalfHeightMultiplier  = 2,
	ETargetDistanceComparisonType_MAX = 3
};


// Enum FortniteGame.EFortSocialItemPresenceStatus
enum class EFortSocialItemPresenceStatus : uint8_t
{
	Offline                        = 0,
	InGame                         = 1,
	Away                           = 2,
	Unknown                        = 3,
	EFortSocialItemPresenceStatus_MAX = 4
};


// Enum FortniteGame.EFortSocialItemType
enum class EFortSocialItemType : uint8_t
{
	Header                         = 0,
	Friend                         = 1,
	PartyInvite                    = 2,
	RecentPlayer                   = 3,
	Max                            = 4,
	EFortSocialItemType_MAX        = 5
};


// Enum FortniteGame.EFortDamageNumberType
enum class EFortDamageNumberType : uint8_t
{
	None                           = 0,
	Pawn                           = 1,
	Building                       = 2,
	Player                         = 3,
	Shield                         = 4,
	Score                          = 5,
	DBNO                           = 6,
	EFortDamageNumberType_MAX      = 7
};


// Enum FortniteGame.EClampType
enum class EClampType : uint8_t
{
	Minimum                        = 0,
	Maximum                        = 1,
	EClampType_MAX                 = 2
};


// Enum FortniteGame.EFortCollectionBookState
enum class EFortCollectionBookState : uint8_t
{
	Active                         = 0,
	Completed                      = 1,
	Claimed                        = 2,
	EFortCollectionBookState_MAX   = 3
};


// Enum FortniteGame.ETimespanAsTextFormat
enum class ETimespanAsTextFormat : uint8_t
{
	DaysHoursMinutesSeconds        = 0,
	Colons                         = 1,
	ETimespanAsTextFormat_MAX      = 2
};


// Enum FortniteGame.EHordeTierStartStatus
enum class EHordeTierStartStatus : uint8_t
{
	ReadyToStart                   = 0,
	WaitingForPlayer               = 1,
	WaitingForDBM                  = 2,
	GenericNotReadyToStart         = 3,
	EHordeTierStartStatus_MAX      = 4
};


// Enum FortniteGame.EFortUserCloudRequestResult
enum class EFortUserCloudRequestResult : uint8_t
{
	Success                        = 0,
	Failure_CloudStorageDisabled   = 1,
	Failure_CloudStorageError      = 2,
	Failure_FileNotFoundInUserFileList = 3,
	Failure_SavingNotAllowedForSpecifiedUser = 4,
	EFortUserCloudRequestResult_MAX = 5
};


// Enum FortniteGame.EFortUserCloudRequestType
enum class EFortUserCloudRequestType : uint8_t
{
	LoadCloudFile                  = 0,
	SaveCloudFile                  = 1,
	EFortUserCloudRequestType_MAX  = 2
};


// Enum FortniteGame.ETeamChatRoomState
enum class ETeamChatRoomState : uint8_t
{
	NotCreated                     = 0,
	Creating                       = 1,
	Created                        = 2,
	Timeout                        = 3,
	ETeamChatRoomState_MAX         = 4
};


// Enum FortniteGame.EFortWorldManagerState
enum class EFortWorldManagerState : uint8_t
{
	WMS_Created                    = 0,
	WMS_QueryingWorld              = 1,
	WMS_WorldQueryComplete         = 2,
	WMS_CreatingNewWorld           = 3,
	WMS_LoadingExistingWorld       = 4,
	WMS_Running                    = 5,
	WMS_Failed                     = 6,
	WMS_MAX                        = 7
};


// Enum FortniteGame.EFortLevelStreamingState
enum class EFortLevelStreamingState : uint8_t
{
	LSS_Unloaded                   = 0,
	LSS_Loaded                     = 1,
	LSS_UnconditionalFoundationsUpdated = 2,
	LSS_AllFoundationsUpdated      = 3,
	LSS_NewActorsCreatedButNotUpdated = 4,
	LSS_AllUpdated                 = 5,
	LSS_Ready                      = 6,
	LSS_MAX                        = 7
};


// Enum FortniteGame.EFortQueuedActionUserStatus
enum class EFortQueuedActionUserStatus : uint8_t
{
	Succeeded                      = 0,
	Failed                         = 1,
	WaitingForCloudRequest         = 2,
	WaitingForProfileSave          = 3,
	EFortQueuedActionUserStatus_MAX = 4
};


// Enum FortniteGame.EFortWorldRecordState
enum class EFortWorldRecordState : uint8_t
{
	StartProcessing                = 0,
	WaitingForResponse             = 1,
	RetrievingTheaterInformation   = 2,
	RetrievingZoneInformation      = 3,
	LoadingWorldRecord             = 4,
	LoadingZoneRecord              = 5,
	SavingZoneRecord               = 6,
	SavingPlayerProfiles           = 7,
	SavingPlayerDeployableBases    = 8,
	Succeeded                      = 9,
	Failed                         = 10,
	Max_None                       = 11,
	EFortWorldRecordState_MAX      = 12
};


// Enum FortniteGame.EFortWorldRecordAction
enum class EFortWorldRecordAction : uint8_t
{
	LoadWorldOnly                  = 0,
	SaveWorldOnly                  = 1,
	SaveZoneAndWorld               = 2,
	LoadZoneAndWorld               = 3,
	SaveDeployableBasesAndWorld    = 4,
	Max_None                       = 5,
	EFortWorldRecordAction_MAX     = 6
};


// Enum FortniteGame.EDeployableBaseUseType
enum class EDeployableBaseUseType : uint8_t
{
	Neighborhood                   = 0,
	PvECombat                      = 1,
	EDeployableBaseUseType_MAX     = 2
};


// Enum FortniteGame.EFortZoneType
enum class EFortZoneType : uint8_t
{
	PVE                            = 0,
	PVP                            = 1,
	Keep                           = 2,
	SingleZone                     = 3,
	Max_None                       = 4,
	EFortZoneType_MAX              = 5
};


// Enum FortniteGame.EHordeWaveStingerType
enum class EHordeWaveStingerType : uint8_t
{
	WaveSuccess                    = 0,
	WaveFailure                    = 1,
	WaveIncoming                   = 2,
	WaveStarted                    = 3,
	EHordeWaveStingerType_MAX      = 4
};


// Enum FortniteGame.EQueueActionType
enum class EQueueActionType : uint8_t
{
	Plot                           = 0,
	ZoneCleanup                    = 1,
	EnvironmentActorRestoration    = 2,
	EQueueActionType_MAX           = 3
};


// Enum FortniteGame.EAthenaPIEStartupMode
enum class EAthenaPIEStartupMode : uint8_t
{
	UseDefaults                    = 0,
	Warmup                         = 1,
	WarmupPaused                   = 2,
	Aircraft                       = 3,
	AircraftPaused                 = 4,
	Gameplay                       = 5,
	EAthenaPIEStartupMode_MAX      = 6
};


// Enum FortniteGame.EPvPGameEndReasons
enum class EPvPGameEndReasons : uint8_t
{
	PVPGER_TeamScoreLimit          = 0,
	PVPGER_LastManStanding         = 1,
	PVPGER_TimeExpired             = 2,
	PVPGER_MissionCompletion       = 3,
	PVPGER_MAX                     = 4
};


// Enum FortniteGame.EFortMtxPlatform
enum class EFortMtxPlatform : uint8_t
{
	Epic                           = 0,
	PSN                            = 1,
	Live                           = 2,
	Shared                         = 3,
	EFortMtxPlatform_MAX           = 4
};


// Enum FortniteGame.EFortInputActionGroup
enum class EFortInputActionGroup : uint8_t
{
	AllModes                       = 0,
	Combat                         = 1,
	Building                       = 2,
	Edit                           = 3,
	Death                          = 4,
	Cinematic                      = 5,
	EFortInputActionGroup_MAX      = 6
};


// Enum FortniteGame.EFortInputActionType
enum class EFortInputActionType : uint8_t
{
	Press                          = 0,
	Click                          = 1,
	Hold                           = 2,
	Release                        = 3,
	EFortInputActionType_MAX       = 4
};


// Enum FortniteGame.EInventoryOverflowReason
enum class EInventoryOverflowReason : uint8_t
{
	NoOverflow                     = 0,
	ItemStackLimitReached          = 1,
	BackpackStackLimitReached      = 2,
	EInventoryOverflowReason_MAX   = 3
};


// Enum FortniteGame.EFortServerGameMode
enum class EFortServerGameMode : uint8_t
{
	Idle                           = 0,
	LobbyPvE                       = 1,
	LobbyPvP                       = 2,
	ZonePvP                        = 3,
	ZonePvE                        = 4,
	EFortServerGameMode_MAX        = 5
};


// Enum FortniteGame.EFortMatchKickOption
enum class EFortMatchKickOption : uint8_t
{
	MarkForBan                     = 0,
	Immediate                      = 1,
	EFortMatchKickOption_MAX       = 2
};


// Enum FortniteGame.EAthenaAerialPhase
enum class EAthenaAerialPhase : uint8_t
{
	None                           = 0,
	BusCantExit                    = 1,
	BusCanExit                     = 2,
	Skydiving                      = 3,
	Parachuting                    = 4,
	EAthenaAerialPhase_MAX         = 5
};


// Enum FortniteGame.EFortNamedNavmesh
enum class EFortNamedNavmesh : uint8_t
{
	Husk                           = 0,
	Smasher                        = 1,
	MAX                            = 2,
	EFortNamedNavmesh_MAX          = 3
};


// Enum FortniteGame.EFortCharacterCosmetic
enum class EFortCharacterCosmetic : uint8_t
{
	Head                           = 0,
	Texture                        = 1,
	Color                          = 2,
	Trinket                        = 3,
	Face                           = 4,
	Gadget                         = 5,
	Body                           = 6,
	ClassFlair                     = 7,
	Max_Invalid                    = 8,
	EFortCharacterCosmetic_MAX     = 9
};


// Enum FortniteGame.ECodeTokenPlatform
enum class ECodeTokenPlatform : uint8_t
{
	PC                             = 0,
	PS4                            = 1,
	XBOX                           = 2,
	ECodeTokenPlatform_MAX         = 3
};


// Enum FortniteGame.EFortQuestObjectiveItemEvent
enum class EFortQuestObjectiveItemEvent : uint8_t
{
	Craft                          = 0,
	Collect                        = 1,
	Acquire                        = 2,
	Consume                        = 3,
	OpenCardPack                   = 4,
	PurchaseCardPack               = 5,
	Convert                        = 6,
	Upgrade                        = 7,
	QuestComplete                  = 8,
	AssignWorker                   = 9,
	LevelUpCollectionBook          = 10,
	HasItem                        = 11,
	SlotInCollection               = 12,
	HasCompletedQuest              = 13,
	HasAssignedWorker              = 14,
	HasUpgraded                    = 15,
	HasConverted                   = 16,
	HasLeveledUpCollectionBook     = 17,
	Max_None                       = 18,
	EFortQuestObjectiveItemEvent_MAX = 19
};


// Enum FortniteGame.EFortQuestObjectiveStatEvent
enum class EFortQuestObjectiveStatEvent : uint8_t
{
	Kill                           = 0,
	KillContribution               = 1,
	Build                          = 2,
	BuildingEdit                   = 3,
	BuildingRepair                 = 4,
	BuildingUpgrade                = 5,
	Complete                       = 6,
	Craft                          = 7,
	Collect                        = 8,
	Win                            = 9,
	Interact                       = 10,
	Destroy                        = 11,
	Ability                        = 12,
	WaveComplete                   = 13,
	Custom                         = 14,
	Client                         = 15,
	NumGameplayEvents              = 16,
	Acquire                        = 17,
	Consume                        = 18,
	OpenCardPack                   = 19,
	PurchaseCardPack               = 20,
	Convert                        = 21,
	Upgrade                        = 22,
	QuestComplete                  = 23,
	AssignWorker                   = 24,
	CollectExpedition              = 25,
	CollectSuccessfulExpedition    = 26,
	LevelUpCollectionBook          = 27,
	HasItem                        = 28,
	SlotInCollection               = 29,
	HasCompletedQuest              = 30,
	HasAssignedWorker              = 31,
	HasUpgraded                    = 32,
	HasConverted                   = 33,
	HasLeveledUpCollectionBook     = 34,
	Max_None                       = 35,
	EFortQuestObjectiveStatEvent_MAX = 36
};


// Enum FortniteGame.EFortQuestRewardType
enum class EFortQuestRewardType : uint8_t
{
	BasicRewards                   = 0,
	BasicPlusSingleChoice          = 1,
	EFortQuestRewardType_MAX       = 2
};


// Enum FortniteGame.EFortQuestType
enum class EFortQuestType : uint8_t
{
	Task                           = 0,
	Optional                       = 1,
	DailyQuest                     = 2,
	TransientQuest                 = 3,
	SurvivorQuest                  = 4,
	Achievement                    = 5,
	Onboarding                     = 6,
	StreamBroadcaster              = 7,
	StreamViewer                   = 8,
	StreamSubscriber               = 9,
	All                            = 10,
	EFortQuestType_MAX             = 11
};


// Enum FortniteGame.ETwitchViewerStatusType
enum class ETwitchViewerStatusType : uint8_t
{
	TwitchViewerStatus_Unknown     = 0,
	TwitchViewerStatus_Nonsubscriber = 1,
	TwitchViewerStatus_Subscriber  = 2,
	TwitchViewerStatus_Broadcaster = 3,
	TwitchViewerStatus_Max         = 4
};


// Enum FortniteGame.ELobbyMissionGeneratorDetailsRequirement
enum class ELobbyMissionGeneratorDetailsRequirement : uint8_t
{
	Unknown                        = 0,
	NotRequired                    = 1,
	Required                       = 2,
	ELobbyMissionGeneratorDetailsRequirement_MAX = 3
};


// Enum FortniteGame.EFortMatchmakingPool
enum class EFortMatchmakingPool : uint8_t
{
	Any                            = 0,
	Desktop                        = 1,
	PS4                            = 2,
	XboxOne                        = 3,
	Mobile                         = 4,
	EFortMatchmakingPool_MAX       = 5
};


// Enum FortniteGame.EFortMatchmakingPrivacyConfiguration
enum class EFortMatchmakingPrivacyConfiguration : uint8_t
{
	UserPartyConfigured            = 0,
	ForcePrivate                   = 1,
	ForcePublic                    = 2,
	EFortMatchmakingPrivacyConfiguration_MAX = 3
};


// Enum FortniteGame.EMatchmakingFlags
enum class EMatchmakingFlags : uint8_t
{
	None                           = 0,
	CreateNewOnly                  = 1,
	NoReservation                  = 2,
	Private                        = 3,
	UseWorldDataOwner              = 4,
	EMatchmakingFlags_MAX          = 5
};


// Enum FortniteGame.EMatchmakingStartLocation
enum class EMatchmakingStartLocation : uint8_t
{
	Lobby                          = 0,
	Game                           = 1,
	CreateNew                      = 2,
	FindSingle                     = 3,
	EMatchmakingStartLocation_MAX  = 4
};


// Enum FortniteGame.EFortMatchmakingType
enum class EFortMatchmakingType : uint8_t
{
	Gathering                      = 0,
	CriticalMission                = 1,
	QuickPlay                      = 2,
	Session                        = 3,
	EFortMatchmakingType_MAX       = 4
};


// Enum FortniteGame.EFortSessionHelperJoinState
enum class EFortSessionHelperJoinState : uint8_t
{
	NotJoining                     = 0,
	RequestingReservation          = 1,
	FailedReservation              = 2,
	WaitingOnGame                  = 3,
	AttemptingJoin                 = 4,
	JoiningSession                 = 5,
	FailedJoin                     = 6,
	CanceledJoin                   = 7,
	EFortSessionHelperJoinState_MAX = 8
};


// Enum FortniteGame.EFortCheatMissionGenType
enum class EFortCheatMissionGenType : uint8_t
{
	NewGeneration                  = 0,
	OldGeneration                  = 1,
	Max_None                       = 2,
	EFortCheatMissionGenType_MAX   = 3
};


// Enum FortniteGame.EPollActorsInVolumeTypes
enum class EPollActorsInVolumeTypes : uint8_t
{
	DesignerPlacedOnly             = 0,
	PlayerBuiltOnly                = 1,
	All                            = 2,
	EPollActorsInVolumeTypes_MAX   = 3
};


// Enum FortniteGame.EMissionReplyTypes
enum class EMissionReplyTypes : uint8_t
{
	Handled                        = 0,
	NotHandled                     = 1,
	EMissionReplyTypes_MAX         = 2
};


// Enum FortniteGame.ETimerOverrideSetting
enum class ETimerOverrideSetting : uint8_t
{
	DefaultBehavior                = 0,
	ForceShow                      = 1,
	ForceHide                      = 2,
	ETimerOverrideSetting_MAX      = 3
};


// Enum FortniteGame.EMusicChannel
enum class EMusicChannel : uint8_t
{
	A                              = 0,
	B                              = 1,
	Stinger                        = 2,
	Max_None                       = 3,
	EMusicChannel_MAX              = 4
};


// Enum FortniteGame.EMusicFadeStyles
enum class EMusicFadeStyles : uint8_t
{
	CrossFade                      = 0,
	FadeOutThenIn                  = 1,
	Max_None                       = 2,
	EMusicFadeStyles_MAX           = 3
};


// Enum FortniteGame.EFortAreaFlag
enum class EFortAreaFlag : uint8_t
{
	Default                        = 0,
	Obstacle                       = 1,
	Smashable                      = 2,
	Unwalkable                     = 3,
	Interactable                   = 4,
	EFortAreaFlag_MAX              = 5
};


// Enum FortniteGame.EFortNavLinkPattern
enum class EFortNavLinkPattern : uint8_t
{
	Floor                          = 0,
	Stairs                         = 1,
	Roof                           = 2,
	Manual                         = 3,
	EFortNavLinkPattern_MAX        = 4
};


// Enum FortniteGame.EFortAnnouncerTeamVocalChords
enum class EFortAnnouncerTeamVocalChords : uint8_t
{
	Team1                          = 0,
	Team2                          = 1,
	Max_None                       = 2,
	EFortAnnouncerTeamVocalChords_MAX = 3
};


// Enum FortniteGame.EFrontEndCamera
enum class EFrontEndCamera : uint8_t
{
	Invalid                        = 0,
	HomeBase                       = 1,
	MissionControl                 = 2,
	Store                          = 3,
	Vault                          = 4,
	SkillTrees                     = 5,
	Heroes                         = 6,
	Login                          = 7,
	TutorialPhaseOne               = 8,
	TutorialPhaseTwo               = 9,
	TutorialPhaseThree             = 10,
	HeroSelect                     = 11,
	Party                          = 12,
	WorldMap                       = 13,
	Home                           = 14,
	EFrontEndCamera_MAX            = 15
};


// Enum FortniteGame.ESpectatorCameraType
enum class ESpectatorCameraType : uint8_t
{
	Chase                          = 0,
	Drone                          = 1,
	MAX                            = 2,
	ESpectatorCameraType_MAX       = 3
};


// Enum FortniteGame.EFocusMethod
enum class EFocusMethod : uint8_t
{
	NoFocus                        = 0,
	AutoFocus                      = 1,
	ManualFocus                    = 2,
	EFocusMethod_MAX               = 3
};


// Enum FortniteGame.EDeathCause
enum class EDeathCause : uint8_t
{
	OutsideSafeZone                = 0,
	FallDamage                     = 1,
	Pistol                         = 2,
	Shotgun                        = 3,
	Rifle                          = 4,
	SMG                            = 5,
	Sniper                         = 6,
	Melee                          = 7,
	Heavy                          = 8,
	DBNOTimeout                    = 9,
	Banhammer                      = 10,
	RemovedFromGame                = 11,
	Unspecified                    = 12,
	EDeathCause_MAX                = 13
};


// Enum FortniteGame.EFortPointsFromNavGraphGoalPathDistanceFilterOperator
enum class EFortPointsFromNavGraphGoalPathDistanceFilterOperator : uint8_t
{
	AllGoalsInRange                = 0,
	AnyGoalInRange                 = 1,
	EFortPointsFromNavGraphGoalPathDistanceFilterOperator_MAX = 2
};


// Enum FortniteGame.EFortTestGoalActorDot
enum class EFortTestGoalActorDot : uint8_t
{
	Dot3D                          = 0,
	Dot2D                          = 1,
	EFortTestGoalActorDot_MAX      = 2
};


// Enum FortniteGame.EDistanceMode
enum class EDistanceMode : uint8_t
{
	DistItemToContext              = 0,
	DistItemGoalActorToContext     = 1,
	DistItemToItemGoalActor        = 2,
	EDistanceMode_MAX              = 3
};


// Enum FortniteGame.ECountAIAssignedToType
enum class ECountAIAssignedToType : uint8_t
{
	Goal                           = 0,
	Actor                          = 1,
	Assignment                     = 2,
	ECountAIAssignedToType_MAX     = 3
};


// Enum FortniteGame.ETwoPointSolverRotationA
enum class ETwoPointSolverRotationA : uint8_t
{
	PointAToQuerier                = 0,
	QuerierToPointA                = 1,
	PointAToQuerierWithRandomOffset = 2,
	QuerierToPointAWithRandomOffset = 3,
	Custom                         = 4,
	ETwoPointSolverRotationA_MAX   = 5
};


// Enum FortniteGame.ERegisteredPlayerUnregistrationStatus
enum class ERegisteredPlayerUnregistrationStatus : uint8_t
{
	Registered                     = 0,
	UnregistrationStarting         = 1,
	UnregistrationWaitingForInitialLock = 2,
	UnregistrationWaitingForFinalSave = 3,
	UnregistrationWaitingForProfileUnlock = 4,
	UnregistrationComplete         = 5,
	ERegisteredPlayerUnregistrationStatus_MAX = 6
};


// Enum FortniteGame.EFortUIScoreType
enum class EFortUIScoreType : uint8_t
{
	Combat                         = 0,
	Building                       = 1,
	Utility                        = 2,
	Badges                         = 3,
	Bonus                          = 4,
	Total                          = 5,
	Max_None                       = 6,
	EFortUIScoreType_MAX           = 7
};


// Enum FortniteGame.EFortScriptedActionEnvironment
enum class EFortScriptedActionEnvironment : uint8_t
{
	FrontEnd                       = 0,
	GameServer                     = 1,
	GameClient                     = 2,
	Max_None                       = 3,
	EFortScriptedActionEnvironment_MAX = 4
};


// Enum FortniteGame.EFortScriptedActionSource
enum class EFortScriptedActionSource : uint8_t
{
	Quest                          = 0,
	Token                          = 1,
	Manual                         = 2,
	Max_None                       = 3,
	EFortScriptedActionSource_MAX  = 4
};


// Enum FortniteGame.EFortContextualReticleTypes
enum class EFortContextualReticleTypes : uint8_t
{
	FCR_GenericFailure             = 0,
	FCR_Upgrade                    = 1,
	FCR_Repair                     = 2,
	FCR_Locked                     = 3,
	FCR_Placement                  = 4,
	FCR_Edit                       = 5,
	FCR_NoTarget                   = 6,
	FCR_InProgress                 = 7,
	FCR_None                       = 8,
	FCR_MAX                        = 9
};


// Enum FortniteGame.EFortUIFriendNotificationType
enum class EFortUIFriendNotificationType : uint8_t
{
	Default                        = 0,
	FriendRequest                  = 1,
	PartyInvite                    = 2,
	EFortUIFriendNotificationType_MAX = 3
};


// Enum FortniteGame.EFortReloadMontageSection
enum class EFortReloadMontageSection : uint8_t
{
	Intro                          = 0,
	Loop                           = 1,
	Outro                          = 2,
	EFortReloadMontageSection_MAX  = 3
};


// Enum FortniteGame.EFortSessionHelperJoinResult
enum class EFortSessionHelperJoinResult : uint8_t
{
	NoResult                       = 0,
	ReservationSuccess             = 1,
	ReservationFailure_PartyLimitReached = 2,
	ReservationFailure_IncorrectPlayerCount = 3,
	ReservationFailure_RequestTimedOut = 4,
	ReservationFailure_ReservationNotFound = 5,
	ReservationFailure_ReservationDenied = 6,
	ReservationFailure_ReservationDenied_Banned = 7,
	ReservationFailure_ReservationRequestCanceled = 8,
	ReservationFailure_ReservationInvalid = 9,
	ReservationFailure_BadSessionId = 10,
	ReservationFailure_ReservationDenied_ContainsExistingPlayers = 11,
	ReservationFailure_GeneralError = 12,
	ReservationFailure_NoSubsystem = 13,
	ReservationFailure_NoIdentity  = 14,
	ReservationFailure_InvalidSession = 15,
	ReservationFailure_InvalidUser = 16,
	ReservationFailure_EncryptionKey = 17,
	ReservationFailure_RefreshAuth = 18,
	ReservationFailure_AlreadyJoiningDuringReserve = 19,
	ReservationFailure_AlreadyJoiningDuringSkip = 20,
	JoinSessionSuccess             = 21,
	JoinSessionFailure_SessionIsFull = 22,
	JoinSessionFailure_SessionDoesNotExist = 23,
	JoinSessionFailure_CouldNotRetrieveAddress = 24,
	JoinSessionFailure_AlreadyInSession = 25,
	JoinSessionFailure_UnknownError = 26,
	JoinSessionFailure_InvalidSession = 27,
	JoinSessionFailure_InvalidSearchResultIndex = 28,
	JoinSessionFailure_AlreadyJoiningDuringJoin = 29,
	SearchPassFailure_NoSessionHelper = 30,
	SearchPassFailure_InvalidUser  = 31,
	SearchPassFailure_NoIdentity   = 32,
	SearchPassFailure_InvalidSearchResult = 33,
	SearchPassFailure_InvalidSearchResultIndex = 34,
	JoinSessionCanceled            = 35,
	EFortSessionHelperJoinResult_MAX = 36
};


// Enum FortniteGame.ESpeedWarpingAxisMode
enum class ESpeedWarpingAxisMode : uint8_t
{
	IKFootRootLocalX               = 0,
	IKFootRootLocalY               = 1,
	IKFootRootLocalZ               = 2,
	WorldSpaceVectorInput          = 3,
	ComponentSpaceVectorInput      = 4,
	ActorSpaceVectorInput          = 5,
	ESpeedWarpingAxisMode_MAX      = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FortniteGame.FortMultiSizeBrush
// 0x0360
struct FFortMultiSizeBrush
{
	struct FSlateBrush                                 Brush_XXS;                                                // 0x0000(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FSlateBrush                                 Brush_XS;                                                 // 0x0090(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FSlateBrush                                 Brush_S;                                                  // 0x0120(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FSlateBrush                                 Brush_M;                                                  // 0x01B0(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FSlateBrush                                 Brush_L;                                                  // 0x0240(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FSlateBrush                                 Brush_XL;                                                 // 0x02D0(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.BuildingActorHotSpotDirection
// 0x0020
struct FBuildingActorHotSpotDirection
{
	class UAIHotSpotConfig*                            HotSpotConfig;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x0008(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      bMirrorX : 1;                                             // 0x0014(0x0001) (CPF_Edit)
	unsigned char                                      bMirrorY : 1;                                             // 0x0014(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	EFortHotSpotDirection                              Direction;                                                // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	EHotspotTypeConfigMode                             TypeConfigUsage;                                          // 0x0019(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteGame.AIHotSpotSlotInfo
// 0x0010
struct FAIHotSpotSlotInfo
{
	class AAIHotSpot*                                  HotSpot;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData)
	int                                                SlotIndex;                                                // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.AutoAcquireSlot
// 0x0010 (0x0020 - 0x0010)
struct FAutoAcquireSlot : public FAIHotSpotSlotInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.InteractionType
// 0x0028
struct FInteractionType
{
	TEnumAsByte<ETInteractionType>                     InteractionType;                                          // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TWeakObjectPtr<class AFortPlayerPawn>              RequestingPawn;                                           // 0x0004(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x000C(0x0008) MISSED OFFSET
	TWeakObjectPtr<class UPrimitiveComponent>          InteractComponent;                                        // 0x0014(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FVector                                     InteractPoint;                                            // 0x001C(0x000C) (CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortAttributeInitializationKey
// 0x0010
struct FFortAttributeInitializationKey
{
	struct FName                                       AttributeInitCategory;                                    // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       AttributeInitSubCategory;                                 // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortDamageSource
// 0x0010
struct FFortDamageSource
{
	TWeakObjectPtr<class AController>                  InstigatorController;                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class AActor>                       DamageCauser;                                             // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortBounceData
// 0x0030
struct FFortBounceData
{
	float                                              StartTime;                                                // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              BounceValue;                                              // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FLinearColor                                DeformationVector;                                        // 0x000C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_IsPlainOldData)
	struct FLinearColor                                DeformationCenter;                                        // 0x001C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_IsPlainOldData)
	TEnumAsByte<EFortBounceType>                       BounceType;                                               // 0x002C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.MeshSet
// 0x0070
struct FMeshSet
{
	float                                              Weight;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UStaticMesh*                                 BaseMesh;                                                 // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EFortResourceType>                     ResourceType;                                             // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	unsigned char                                      bDoNotBlockBuildings : 1;                                 // 0x0014(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      bDestroyOnPlayerBuildingPlacement : 1;                    // 0x0014(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      bNeedsDamageOverlay : 1;                                  // 0x0014(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	class UParticleSystem*                             BreakEffect;                                              // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             DeathParticles;                                           // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       DeathParticleSocketName;                                  // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  DeathSound;                                               // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             ConstructedEffect;                                        // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UStaticMesh*                                 SearchedMesh;                                             // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FCurveTableRowHandle                        SearchSpeed;                                              // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              LootNoiseRange;                                           // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LootNoiseLoudness;                                        // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FVector                                     LootSpawnLocation;                                        // 0x0060(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.TierMeshSets
// 0x0018
struct FTierMeshSets
{
	int                                                Tier;                                                     // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FMeshSet>                            MeshSets;                                                 // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.BuildingNavObstacle
// 0x0020
struct FBuildingNavObstacle
{
	struct FBox                                        LocalBounds;                                              // 0x0000(0x001C) (CPF_Edit, CPF_IsPlainOldData)
	EBuildingNavObstacleType                           ObstacleType;                                             // 0x001C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.EditorOnlyBuildingInstanceMaterialParameters
// 0x0030
struct FEditorOnlyBuildingInstanceMaterialParameters
{
	TArray<struct FScalarParameterValue>               ScalarParams;                                             // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate)
	TArray<struct FVectorParameterValue>               VectorParams;                                             // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate)
	TArray<struct FTextureParameterValue>              TextureParams;                                            // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate)
};

// ScriptStruct FortniteGame.ChosenQuotaInfo
// 0x0010
struct FChosenQuotaInfo
{
	int                                                LootTier;                                                 // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       LootTierKey;                                              // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.RandomDayphaseFX
// 0x0040
struct FRandomDayphaseFX
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UParticleSystem*>                     AltParticleSystems;                                       // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              ChanceToSpawnFX;                                          // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EFortDayPhase>>                 RequiredDayphases;                                        // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	bool                                               bRandomSelectionAlreadyHappened;                          // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    SpawnedComponent;                                         // 0x0038(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortConnectionData
// 0x0030
struct FFortConnectionData
{
	class ABuildingSMActor*                            ConnectedActor;                                           // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	struct FGuid                                       ConnectedActorGuid;                                       // 0x0008(0x0010) (CPF_SaveGame, CPF_IsPlainOldData)
	struct FName                                       MySocketName;                                             // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	struct FName                                       TheirSocketName;                                          // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortConnectivityComponentData
// 0x0018
struct FFortConnectivityComponentData
{
	TArray<struct FFortConnectionData>                 Connections;                                              // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_SaveGame)
	bool                                               bIsPowered;                                               // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	bool                                               bIsProvidingPower;                                        // 0x0011(0x0001) (CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	bool                                               bAllowConnections;                                        // 0x0012(0x0001) (CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	bool                                               bAllowsPowerToPassThrough;                                // 0x0013(0x0001) (CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.EditModeState
// 0x0010
struct FEditModeState
{
	class UClass*                                      EditClass;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                RotationIterations;                                       // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bMirrored;                                                // 0x000C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bCurrentlyValid;                                          // 0x000D(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteGame.AIHotSpotSlotConfig
// 0x001C
struct FAIHotSpotSlotConfig
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x000C(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	EFortHotSpotSlot                                   SlotType;                                                 // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.GameplayEffectApplicationInfo
// 0x0028
struct FGameplayEffectApplicationInfo
{
	TAssetPtr<class UClass>                            GameplayEffect;                                           // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              Level;                                                    // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortDeliveryInfoRequirementsFilter
// 0x0098
struct FFortDeliveryInfoRequirementsFilter
{
	struct FGameplayTagRequirements                    SourceTagRequirements;                                    // 0x0000(0x0040) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagRequirements                    TargetTagRequirements;                                    // 0x0040(0x0040) (CPF_Edit, CPF_DisableEditOnInstance)
	TEnumAsByte<EFortTeamAffiliation>                  ApplicableTeamAffiliation;                                // 0x0080(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	unsigned char                                      bConsiderTeamAffiliationToInstigator : 1;                 // 0x0084(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	TEnumAsByte<EFortTeam>                             ApplicableTeam;                                           // 0x0088(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	unsigned char                                      bConsiderTeam : 1;                                        // 0x008C(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bApplyToPlayerPawns : 1;                                  // 0x008C(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bApplyToAIPawns : 1;                                      // 0x008C(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bApplyToBuildingActors : 1;                               // 0x008C(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	EFortDeliveryInfoBuildingActorSpecification        BuildingActorSpecification;                               // 0x0090(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	unsigned char                                      bApplyToGlobalEnvironmentAbilityActor : 1;                // 0x0094(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.ProximityBasedGEDeliveryInfo
// 0x00B0
struct FProximityBasedGEDeliveryInfo
{
	struct FFortDeliveryInfoRequirementsFilter         DeliveryRequirements;                                     // 0x0000(0x0098) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<struct FGameplayEffectApplicationInfo>      EffectsToApply;                                           // 0x0098(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	EFortProximityBasedGEApplicationType               ProximityApplicationType;                                 // 0x00A8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAbilitySetDeliveryInfo
// 0x00A8
struct FFortAbilitySetDeliveryInfo
{
	struct FFortDeliveryInfoRequirementsFilter         DeliveryRequirements;                                     // 0x0000(0x0098) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<TAssetPtr<class UFortAbilitySet>>           AbilitySets;                                              // 0x0098(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortAbilitySetHandle
// 0x0028
struct FFortAbilitySetHandle
{
	TWeakObjectPtr<class UAbilitySystemComponent>      TargetAbilitySystemComponent;                             // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<struct FGameplayAbilitySpecHandle>          GrantedAbilityHandles;                                    // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FActiveGameplayEffectHandle>         AppliedEffectHandles;                                     // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FortniteGame.BuildingGameplayActorAbilityDeliveryBucket
// 0x0090
struct FBuildingGameplayActorAbilityDeliveryBucket
{
	struct FGameplayTag                                Tag;                                                      // 0x0000(0x0008) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<struct FProximityBasedGEDeliveryInfo>       ProximityBasedEffectBuckets;                              // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FFortAbilitySetDeliveryInfo>         PawnPersistentAbilitySetBuckets;                          // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FFortAbilitySetHandle>               PersistentlyAppliedAbilitySets;                           // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      bEnabled : 1;                                             // 0x0038(0x0001) (CPF_Transient)
	unsigned char                                      bEnabledByDefault : 1;                                    // 0x0038(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bHasGEsToApplyOnTouch : 1;                                // 0x0038(0x0001)
	unsigned char                                      bHasGEsToApplyOnPulseTimer : 1;                           // 0x0038(0x0001)
	unsigned char                                      bHasPersistentEffects : 1;                                // 0x0038(0x0001)
	unsigned char                                      UnknownData00[0x57];                                      // 0x0039(0x0057) MISSED OFFSET
};

// ScriptStruct FortniteGame.BuildingGameplayActorAbilityDeliveryInfo
// 0x0080
struct FBuildingGameplayActorAbilityDeliveryInfo
{
	TArray<struct FBuildingGameplayActorAbilityDeliveryBucket> DeliveryBuckets;                                          // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              ProximityPulseInterval;                                   // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bHasGEsToApplyOnTouch : 1;                                // 0x0014(0x0001)
	unsigned char                                      bHasGEsToApplyOnPulseTimer : 1;                           // 0x0014(0x0001)
	unsigned char                                      bHasPersistentEffects : 1;                                // 0x0014(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	class ABuildingGameplayActor*                      OwningActor;                                              // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<class AActor*>                              DeferredTouchActorsToProcess;                             // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0030(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteGame.CarriedObjectAttachmentInfo
// 0x0028
struct FCarriedObjectAttachmentInfo
{
	class AActor*                                      AttachParent;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     RelativeTranslation;                                      // 0x0010(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // 0x001C(0x000C) (CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortTooltipMapEntry
// 0x0018
struct FFortTooltipMapEntry
{
	class UClass*                                      ObjectClass;                                              // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      SecondaryObjectClass;                                     // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      TooltipClass;                                             // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortTooltipValueData
// 0x0070
struct FFortTooltipValueData
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       FormattedValue;                                           // 0x0018(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       ExplanationText;                                          // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Value;                                                    // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       StateTags;                                                // 0x0050(0x0020) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct FortniteGame.FortTooltipDisplayStatInfo
// 0x0050
struct FFortTooltipDisplayStatInfo
{
	struct FGameplayTag                                Token;                                                    // 0x0000(0x0008) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayAttribute                          Attribute;                                                // 0x0008(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       ContextTags;                                              // 0x0028(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	bool                                               bLowerIsBetter;                                           // 0x0048(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTooltipDisplayStatsCategory
// 0x0028
struct FFortTooltipDisplayStatsCategory
{
	struct FText                                       CategoryName;                                             // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TArray<struct FFortTooltipDisplayStatInfo>         TooltipStats;                                             // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortTooltipDisplayInfo
// 0x0038
struct FFortTooltipDisplayInfo
{
	class UClass*                                      PrimaryObjectClass;                                       // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      SecondaryObjectClass;                                     // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       DescriptionStatsTags;                                     // 0x0010(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	class UFortTooltipDisplayStatsList*                TooltipStatsList;                                         // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.QuickBarSlot
// 0x0018
struct FQuickBarSlot
{
	TArray<struct FGuid>                               Items;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
	bool                                               bEnabled;                                                 // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.QuickBarSlotData
// 0x0038
struct FQuickBarSlotData
{
	TArray<EFortItemType>                              AcceptedItemTypes;                                        // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	bool                                               bStaticSlot;                                              // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TAssetPtr<class UFortWorldItemDefinition>          DefaultItem;                                              // 0x0018(0x0020) (CPF_Edit)
};

// ScriptStruct FortniteGame.QuickBarData
// 0x0010
struct FQuickBarData
{
	TArray<struct FQuickBarSlotData>                   QuickbarSlots;                                            // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.QuickBar
// 0x0090
struct FQuickBar
{
	int                                                CurrentFocusedSlot;                                       // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PreviousFocusedSlot;                                      // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SecondaryFocusedSlot;                                     // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FQuickBarSlot>                       Slots;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FQuickBarData                               DataDefinition;                                           // 0x0020(0x0010)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0030(0x0050) UNKNOWN PROPERTY: SetProperty FortniteGame.QuickBar.EquippedItemDefinitions
	TArray<int>                                        SharedVisibleSlotIndicesWhenUsingGamepad;                 // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
};

// ScriptStruct FortniteGame.FortCloudSaveRecordInfo
// 0x0018
struct FFortCloudSaveRecordInfo
{
	int                                                RecordIndex;                                              // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ArchiveNumber;                                            // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     RecordFilename;                                           // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortCloudSaveInfo
// 0x0018
struct FFortCloudSaveInfo
{
	int                                                SaveCount;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FFortCloudSaveRecordInfo>            SavedRecords;                                             // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.PlayerStatsRecord
// 0x0088
struct FPlayerStatsRecord
{
	int                                                Stats[0x22];                                              // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.StatRecord
// 0x0010
struct FStatRecord
{
	struct FName                                       StatName;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StatValue;                                                // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.StatManagerPeriodRecord
// 0x0010
struct FStatManagerPeriodRecord
{
	TArray<struct FStatRecord>                         StatRecords;                                              // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.PinnedSchematicsRecord
// 0x0010
struct FPinnedSchematicsRecord
{
	TArray<struct FString>                             PinnedSchematicInstances;                                 // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortPlayerRecord
// 0x0200
struct FFortPlayerRecord
{
	struct FString                                     DisplayName;                                              // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     UniqueId;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<unsigned char>                              BackpackData;                                             // 0x0020(0x0010) (CPF_ZeroConstructor)
	bool                                               bPlayerIsNew;                                             // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FPlayerStatsRecord                          PlayerStatsData;                                          // 0x0034(0x0088)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	struct FStatManagerPeriodRecord                    CampaignPeriodRecord;                                     // 0x00C0(0x0010)
	struct FPinnedSchematicsRecord                     PinnedSchematicsRecord;                                   // 0x00D0(0x0010)
	struct FQuickBar                                   PrimaryQuickBarRecord;                                    // 0x00E0(0x0090)
	struct FQuickBar                                   SecondaryQuickBarRecord;                                  // 0x0170(0x0090)
};

// ScriptStruct FortniteGame.FortZoneInstanceInfo
// 0x0060
struct FFortZoneInstanceInfo
{
	struct FString                                     WorldId;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     TheaterId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FString                                     TheaterMissionId;                                         // 0x0020(0x0010) (CPF_ZeroConstructor)
	struct FString                                     TheaterMissionAlertId;                                    // 0x0030(0x0010) (CPF_ZeroConstructor)
	TAssetPtr<class UClass>                            ZoneThemeClass;                                           // 0x0040(0x0020)
};

// ScriptStruct FortniteGame.FortZoneInstanceDetails
// 0x00A8 (0x0108 - 0x0060)
struct FFortZoneInstanceDetails : public FFortZoneInstanceInfo
{
	TAssetPtr<class UClass>                            MissionGenerator;                                         // 0x0060(0x0020)
	struct FDataTableRowHandle                         ZoneDifficultyInfo;                                       // 0x0080(0x0010)
	struct FMcpLootResult                              MissionRewards;                                           // 0x0090(0x0020)
	struct FMcpLootResult                              MissionAlertRewards;                                      // 0x00B0(0x0020)
	struct FMcpLootResult                              ZoneModifiers;                                            // 0x00D0(0x0020)
	struct FString                                     MissionAlertCategoryName;                                 // 0x00F0(0x0010) (CPF_ZeroConstructor)
	int                                                TileIndex;                                                // 0x0100(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortActorRecord
// 0x0070
struct FFortActorRecord
{
	struct FGuid                                       ActorGuid;                                                // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_IsPlainOldData)
	TEnumAsByte<EFortBuildingPersistentState>          ActorState;                                               // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class UClass*                                      ActorClass;                                               // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FTransform                                  ActorTransform;                                           // 0x0020(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_IsPlainOldData)
	bool                                               bSpawnedActor;                                            // 0x0050(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	TArray<unsigned char>                              ActorData;                                                // 0x0058(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortLevelRecord
// 0x0040
struct FFortLevelRecord
{
	int                                                ParentLevelIndex;                                         // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       BoundActorGuid;                                           // 0x0004(0x0010) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FName                                       PackageName;                                              // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FFortActorRecord>                    SavedActors;                                              // 0x0020(0x0010) (CPF_ZeroConstructor)
	int                                                X_Loc;                                                    // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Y_Loc;                                                    // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Rotation;                                                 // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortBuildingInstruction
// 0x0070
struct FFortBuildingInstruction
{
	struct FFortActorRecord                            ActorRecord;                                              // 0x0000(0x0070) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_SaveGame)
};

// ScriptStruct FortniteGame.FOBCoreChoice
// 0x002C (0x0038 - 0x000C)
struct FFOBCoreChoice : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UFortFOBCoreDecoItemDefinition*              FOBCoreDef;                                               // 0x0010(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	EFOBFileHeaderStatus                               FileHeaderStatus;                                         // 0x0018(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FString                                     CoreFilename;                                             // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UFortBuildingInstructions*                   BuildingInstructions;                                     // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
};

// ScriptStruct FortniteGame.FOBCoreChoiceArray
// 0x0010 (0x00C0 - 0x00B0)
struct FFOBCoreChoiceArray : public FFastArraySerializer
{
	TArray<struct FFOBCoreChoice>                      Items;                                                    // 0x00B0(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortGiftingInfo
// 0x0028
struct FFortGiftingInfo
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
	class UFortHeroType*                               HeroType;                                                 // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortItemEntryStateValue
// 0x0018
struct FFortItemEntryStateValue
{
	int                                                IntValue;                                                 // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       NameValue;                                                // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TEnumAsByte<EFortItemEntryState>                   StateType;                                                // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortItemEntry
// 0x009C (0x00A8 - 0x000C)
struct FFortItemEntry : public FFastArraySerializerItem
{
	int                                                Count;                                                    // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	class UFortItemDefinition*                         ItemDefinition;                                           // 0x0010(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	float                                              Durability;                                               // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	int                                                Level;                                                    // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	int                                                LoadedAmmo;                                               // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<class UFortAlterationItemDefinition*>       AlterationDefinitions;                                    // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_SaveGame)
	struct FString                                     ItemSource;                                               // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_SaveGame)
	struct FGuid                                       ItemGuid;                                                 // 0x0048(0x0010) (CPF_SaveGame, CPF_IsPlainOldData)
	bool                                               inventory_overflow_date;                                  // 0x0058(0x0001) (CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	bool                                               bIsReplicatedCopy;                                        // 0x0059(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bIsDirty;                                                 // 0x005A(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x005B(0x0005) MISSED OFFSET
	struct FFortGiftingInfo                            GiftingInfo;                                              // 0x0060(0x0028)
	TArray<struct FFortItemEntryStateValue>            StateValues;                                              // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TWeakObjectPtr<class AFortInventory>               ParentInventory;                                          // 0x0098(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FGameplayAbilitySpecHandle                  GameplayAbilitySpecHandle;                                // 0x00A0(0x0004) (CPF_Transient)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortItemList
// 0x00C0 (0x0170 - 0x00B0)
struct FFortItemList : public FFastArraySerializer
{
	TArray<struct FFortItemEntry>                      ReplicatedEntries;                                        // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_SaveGame)
	unsigned char                                      UnknownData00[0x50];                                      // 0x00C0(0x0050) MISSED OFFSET
	TArray<class UFortWorldItem*>                      ItemInstances;                                            // 0x0110(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0120(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteGame.DeferredActorData
// 0x0040
struct FDeferredActorData
{
	class ABuildingActor*                              BuildingActor;                                            // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ActorRecordIndex;                                         // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FTransform                                  BuildingTransform;                                        // 0x0010(0x0030) (CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.TeamStrategicBuildingHandle
// 0x0004
struct FTeamStrategicBuildingHandle
{
	int                                                Handle;                                                   // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortTargetFilter
// 0x0020
struct FFortTargetFilter
{
	TEnumAsByte<EFortTargetSelectionFilter>            ActorTypeFilter;                                          // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UClass*                                      ActorClassFilter;                                         // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bExcludeInstigator;                                       // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bExcludeRequester;                                        // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bExcludeAllAttachedToInstigator;                          // 0x0012(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bExcludeAllAttachedToRequester;                           // 0x0013(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bExcludePawnFriends;                                      // 0x0014(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bExcludeFriendlyAI;                                       // 0x0015(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bExcludePawnEnemies;                                      // 0x0016(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bExcludeNonPawnFriends;                                   // 0x0017(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bExcludeNonPawnEnemies;                                   // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bExcludeWithoutNavigationCorridor;                        // 0x0019(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bExcludeNonPlayerBuiltPieces;                             // 0x001A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bExcludePlayerBuiltPieces;                                // 0x001B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bExcludeNonBGABuildings;                                  // 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bExcludeNonBlockingHits;                                  // 0x001D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bTraceComplexCollision;                                   // 0x001E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x001F(0x0001) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAbilityTargetSelection
// 0x0060
struct FFortAbilityTargetSelection
{
	TEnumAsByte<EFortTargetSelectionShape>             Shape;                                                    // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     CustomShapeComponentName;                                 // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	EFortTargetSelectionTestType                       TestType;                                                 // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortAbilityTargetingSource                        PrimarySource;                                            // 0x0019(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortAbilityTargetingSource                        SecondarySource;                                          // 0x001A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	float                                              Range;                                                    // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     HalfExtents;                                              // 0x0020(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              ConeYawAngle;                                             // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ConePitchAngle;                                           // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ConeMinRadius;                                            // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortTargetFilter                           TargetFilter;                                             // 0x0038(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	bool                                               bExcludeObstructedByWorld;                                // 0x0058(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCreateHitResultWhenNoTargetsFound;                       // 0x0059(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseProjectileRotationForDamageZones;                     // 0x005A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortAbilityTargetSelectionUsage                   TargetSelectionUsage;                                     // 0x005B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxTargets;                                               // 0x005C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortAbilityTargetSelectionList
// 0x0020
struct FFortAbilityTargetSelectionList
{
	TArray<struct FFortAbilityTargetSelection>         List;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      bStopAtFirstSuccess : 1;                                  // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bKeepCheckingListOnIndestructibleHit : 1;                 // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bUseWeaponRanges : 1;                                     // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bUseMaxYawAngleToTarget : 1;                              // 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              MaxYawAngleToTarget;                                      // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGameplayEffectContainer
// 0x0088
struct FFortGameplayEffectContainer
{
	struct FGameplayTag                                ApplicationTag;                                           // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortAbilityTargetSelectionList             TargetSelection;                                          // 0x0008(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TArray<class UClass*>                              TargetGameplayEffectClasses;                              // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<class UClass*>                              OwnerGameplayEffectClasses;                               // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FGameplayTagContainer                       ActivationCues;                                           // 0x0048(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FGameplayTagContainer                       ImpactCues;                                               // 0x0068(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.FortAbilityCost
// 0x0040
struct FFortAbilityCost
{
	EFortAbilityCostSource                             CostSource;                                               // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FScalableFloat                              CostValue;                                                // 0x0008(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UFortItemDefinition*                         ItemDefinition;                                           // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bOnlyApplyCostOnHit;                                      // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGameplayAbilityBehaviorDistanceData
// 0x0028
struct FFortGameplayAbilityBehaviorDistanceData
{
	struct FGameplayTagContainer                       DistanceDataTag;                                          // 0x0000(0x0020) (CPF_Edit)
	float                                              Distance;                                                 // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCharacterPartMontageInfo
// 0x0010
struct FFortCharacterPartMontageInfo
{
	TEnumAsByte<EFortCustomPartType>                   CharacterPart;                                            // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UAnimMontage*                                AnimMontage;                                              // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortGameplayAbilityMontageInfo
// 0x0060
struct FFortGameplayAbilityMontageInfo
{
	class UAnimMontage*                                MontageToPlay;                                            // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimPlayRate;                                             // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimRootMotionTranslationScale;                           // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortGameplayAbilityMontageSectionToPlay           MontageSectionToPlay;                                     // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FName                                       OverrideSection;                                          // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bPlayRandomSection;                                       // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FFortCharacterPartMontageInfo>       CharacterPartMontages;                                    // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0038(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGameplayEffectContainerSpec
// 0x0080
struct FFortGameplayEffectContainerSpec
{
	struct FFortAbilityTargetSelectionList             TargetSelection;                                          // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TArray<struct FGameplayEffectSpecHandle>           TargetGameplayEffectSpecs;                                // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<struct FGameplayEffectSpecHandle>           OwnerGameplayEffectSpecs;                                 // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FGameplayTagContainer                       ActivationCues;                                           // 0x0040(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FGameplayTagContainer                       ImpactCues;                                               // 0x0060(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.StrategicBuildingLevelCriteria
// 0x0020
struct FStrategicBuildingLevelCriteria
{
	struct FText                                       UnlockRequirementText;                                    // 0x0000(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	EFortStrategicBuildingLevelCriteriaDisplayRepresentation RequirementDisplayRepresentation;                         // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              UnlockRequirementQuantity;                                // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.StrategicBuildingUpgradePathInfo
// 0x00C8
struct FStrategicBuildingUpgradePathInfo
{
	struct FText                                       UpgradeDesc;                                              // 0x0000(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FSlateBrush                                 UpgradeBrush;                                             // 0x0018(0x0090) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       UpgradeTags;                                              // 0x00A8(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.StrategicBuildingLevelUnlocks
// 0x0030
struct FStrategicBuildingLevelUnlocks
{
	TArray<struct FFortAbilitySetDeliveryInfo>         OwnerStrategicBuildingAbilitySetBuckets;                  // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FFortAbilitySetDeliveryInfo>         PawnPersistentAbilitySetBuckets;                          // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FProximityBasedGEDeliveryInfo>       ProximityBasedEffectBuckets;                              // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.StrategicBuildingLevelInformation
// 0x0068
struct FStrategicBuildingLevelInformation
{
	struct FStrategicBuildingLevelCriteria             UpgradeCriteria;                                          // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TArray<struct FStrategicBuildingUpgradePathInfo>   UpgradePaths;                                             // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FStrategicBuildingLevelUnlocks              LevelUnlocks;                                             // 0x0030(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	float                                              ConstructionTime;                                         // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DestructionRecoveryTime;                                  // 0x0064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.StrategicBuildingActiveConstructionInfo
// 0x0010
struct FStrategicBuildingActiveConstructionInfo
{
	float                                              ConstructionStartTime;                                    // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              ConstructionEndTime;                                      // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                ConstructionLevel;                                        // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bUnderConstruction : 1;                                   // 0x000C(0x0001) (CPF_Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.StrategicBuildingLevelActiveCriteriaProgress
// 0x000C
struct FStrategicBuildingLevelActiveCriteriaProgress
{
	float                                              CurrentProgress;                                          // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              MaxProgress;                                              // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bProgressAllowed : 1;                                     // 0x0008(0x0001) (CPF_Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSpawnSlotData
// 0x0020
struct FFortSpawnSlotData
{
	struct FVector                                     SpawnSlotLocation;                                        // 0x0000(0x000C) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class AFortAIPawn*                                 OccupyingAI;                                              // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortRiftSlotStatus>                   SlotStatus;                                               // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSearchBounceData
// 0x0010
struct FFortSearchBounceData
{
	struct FVector                                     BounceNormal;                                             // 0x0000(0x000C) (CPF_IsPlainOldData)
	uint32_t                                           SearchAnimationCount;                                     // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.BuildingActorNavArea
// 0x0004
struct FBuildingActorNavArea
{
	int                                                AreaBits;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortItemQuantityPair
// 0x0028
struct FFortItemQuantityPair
{
	TAssetPtr<class UFortItemDefinition>               ItemDefinition;                                           // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                Quantity;                                                 // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCosmeticModification
// 0x08F8
struct FFortCosmeticModification
{
	TAssetPtr<class UMaterialInterface>                CosmeticMaterial;                                         // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TAssetPtr<class UParticleSystem>                   AmbientParticleSystem;                                    // 0x0020(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TAssetPtr<class UParticleSystem>                   MuzzleParticleSystem;                                     // 0x0040(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TAssetPtr<class UParticleSystem>                   ReloadParticleSystem;                                     // 0x0060(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TAssetPtr<class UParticleSystem>                   BeamParticleSystem;                                       // 0x0080(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TAssetPtr<class UParticleSystem>                   ImpactPhysicalSurfaceEffects[0x3F];                       // 0x00A0(0x0020) (CPF_Edit)
	TAssetPtr<class UClass>                            TracerTemplate;                                           // 0x0880(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	bool                                               bModifyColor;                                             // 0x08A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08A1(0x0003) MISSED OFFSET
	struct FLinearColor                                ColorAlteration;                                          // 0x08A4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08B4(0x0004) MISSED OFFSET
	struct FName                                       ColorParameterName;                                       // 0x08B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bModifyDecalColour;                                       // 0x08C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x08C1(0x0003) MISSED OFFSET
	struct FLinearColor                                DecalColourAlterationStart;                               // 0x08C4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                DecalColourAlterationEnd;                                 // 0x08D4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	bool                                               bModifyShellColour;                                       // 0x08E4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x08E5(0x0003) MISSED OFFSET
	struct FLinearColor                                ShellColourAlteration;                                    // 0x08E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortConditionalCosmeticModification
// 0x0918
struct FFortConditionalCosmeticModification
{
	struct FFortCosmeticModification                   CosmeticModification;                                     // 0x0000(0x08F8) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FGameplayTagContainer                       ConditionalTags;                                          // 0x08F8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.FortConditionalIncludeTags
// 0x0040
struct FFortConditionalIncludeTags
{
	struct FGameplayTagContainer                       ConditionTags;                                            // 0x0000(0x0020) (CPF_Edit)
	struct FGameplayTagContainer                       IncludeTags;                                              // 0x0020(0x0020) (CPF_Edit)
};

// ScriptStruct FortniteGame.BASEGameplayEffect
// 0x0010
struct FBASEGameplayEffect
{
	class UClass*                                      Effect;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                LevelOverride;                                            // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.PatternBASEEffect
// 0x0010
struct FPatternBASEEffect
{
	class UBuildingEditModeMetadata*                   Pattern;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UStaticMesh*                                 Mesh;                                                     // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortBaseWeaponStats
// 0x0118 (0x0120 - 0x0008)
struct FFortBaseWeaponStats : public FTableRowBase
{
	int                                                BaseLevel;                                                // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DmgPB;                                                    // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DmgMid;                                                   // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DmgLong;                                                  // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DmgMaxRange;                                              // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EnvDmgPB;                                                 // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EnvDmgMid;                                                // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EnvDmgLong;                                               // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EnvDmgMaxRange;                                           // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ImpactDmgPB;                                              // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ImpactDmgMid;                                             // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ImpactDmgLong;                                            // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ImpactDmgMaxRange;                                        // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bForceControl;                                            // 0x003C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              RngPB;                                                    // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RngMid;                                                   // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RngLong;                                                  // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RngMax;                                                   // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveTable*                                 DmgScaleTable;                                            // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       DmgScaleTableRow;                                         // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DmgScale;                                                 // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	class UCurveTable*                                 EnvDmgScaleTable;                                         // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       EnvDmgScaleTableRow;                                      // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EnvDmgScale;                                              // 0x0078(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	class UCurveTable*                                 ImpactDmgScaleTable;                                      // 0x0080(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ImpactDmgScaleTableRow;                                   // 0x0088(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ImpactDmgScale;                                           // 0x0090(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	struct FName                                       SurfaceRatioRowName;                                      // 0x0098(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageZone_Light;                                         // 0x00A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageZone_Normal;                                        // 0x00A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageZone_Critical;                                      // 0x00A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageZone_Vulnerability;                                 // 0x00AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              KnockbackMagnitude;                                       // 0x00B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MidRangeKnockbackMagnitude;                               // 0x00B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LongRangeKnockbackMagnitude;                              // 0x00B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              KnockbackZAngle;                                          // 0x00BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StunTime;                                                 // 0x00C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StunScale;                                                // 0x00C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDataTable*                                  Durability;                                               // 0x00C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       DurabilityRowName;                                        // 0x00D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DurabilityScale;                                          // 0x00D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DurabilityPerUse;                                         // 0x00DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DiceCritChance;                                           // 0x00E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DiceCritDamageMultiplier;                                 // 0x00E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReloadTime;                                               // 0x00E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReloadScale;                                              // 0x00EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bReloadIndividualBullets;                                 // 0x00F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bReloadInterruptIsImmediate;                              // 0x00F1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x00F2(0x0002) MISSED OFFSET
	int                                                ClipSize;                                                 // 0x00F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ClipScale;                                                // 0x00F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InitialClips;                                             // 0x00FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CartridgePerFire;                                         // 0x0100(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AmmoCostPerFire;                                          // 0x0104(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxAmmoCostPerFire;                                       // 0x0108(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinChargeTime;                                            // 0x010C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxChargeTime;                                            // 0x0110(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ChargeDownTime;                                           // 0x0114(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinChargeDamageMultiplier;                                // 0x0118(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxChargeDamageMultiplier;                                // 0x011C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.TrackConnectorMeshConfig
// 0x0010
struct FTrackConnectorMeshConfig
{
	ETrackIncline                                      InclineSideA;                                             // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	ETrackIncline                                      InclineSideB;                                             // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class UStaticMesh*                                 Mesh;                                                     // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.LoginFailureLogSubmitOptions
// 0x0018
struct FLoginFailureLogSubmitOptions
{
	bool                                               bSubmitLogs;                                              // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                LogTailKb;                                                // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<ELoginResult>                               DoNotUploadReasons;                                       // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.PurchaseFailureLogSubmitOptions
// 0x0018
struct FPurchaseFailureLogSubmitOptions
{
	bool                                               bSubmitLogs;                                              // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                LogTailKb;                                                // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FString>                             DoNotUploadReasons;                                       // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.PartyFailureLogSubmitReason
// 0x0020
struct FPartyFailureLogSubmitReason
{
	struct FString                                     Reason;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     SubReason;                                                // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.PartyFailureLogSubmit
// 0x0018
struct FPartyFailureLogSubmit
{
	bool                                               bSubmitLogs;                                              // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                LogTailKb;                                                // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FPartyFailureLogSubmitReason>        Reasons;                                                  // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.SubGameAccess
// 0x0003
struct FSubGameAccess
{
	ESubGame                                           SubGame;                                                  // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	ESubGameAccessStatus                               AccessStatus;                                             // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	ESubGameMatchmakingStatus                          MatchmakingStatus;                                        // 0x0002(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.ThreatLocationInfo
// 0x0054 (0x0060 - 0x000C)
struct FThreatLocationInfo : public FFastArraySerializerItem
{
	struct FVector                                     CloudLocation;                                            // 0x000C(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient, CPF_IsPlainOldData)
	struct FBox                                        ThreatVolume;                                             // 0x0018(0x001C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class AFortThreatVisualsManager*                   ThreatVisualsManager;                                     // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TWeakObjectPtr<class AThreatCloud>                 CloudActor;                                               // 0x0040(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0048(0x0001) MISSED OFFSET
	bool                                               bThreatActivated;                                         // 0x0049(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	EFortThreatDeactivationType                        DeactivationType;                                         // 0x004A(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x15];                                      // 0x004B(0x0015) MISSED OFFSET
};

// ScriptStruct FortniteGame.ThreatLocationArray
// 0x0010 (0x00C0 - 0x00B0)
struct FThreatLocationArray : public FFastArraySerializer
{
	TArray<struct FThreatLocationInfo>                 Locations;                                                // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FortniteGame.FortWindImpulseHandle
// 0x0004
struct FFortWindImpulseHandle
{
	int                                                UID;                                                      // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.StormWind
// 0x0044 (0x0050 - 0x000C)
struct FStormWind : public FFastArraySerializerItem
{
	struct FVector                                     Location;                                                 // 0x000C(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x0018(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              Magnitude;                                                // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class AFortThreatVisualsManager*                   ThreatVisualsManager;                                     // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<class UFortAIEncounterInfo*>                Encounters;                                               // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FFortWindImpulseHandle                      WindHandle;                                               // 0x0048(0x0004) (CPF_Transient, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.StormWindArray
// 0x0010 (0x00C0 - 0x00B0)
struct FStormWindArray : public FFastArraySerializer
{
	TArray<struct FStormWind>                          StormWinds;                                               // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FortniteGame.CameraAltitudeAdjustments
// 0x0010
struct FCameraAltitudeAdjustments
{
	float                                              Altitude;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FogHeightFalloff;                                         // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeightFogZOffset;                                         // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FogDensity;                                               // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.SkyLightValues
// 0x0028
struct FSkyLightValues
{
	struct FLinearColor                                SkyLightColor;                                            // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                SkyLightOcclusionTint;                                    // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyLightMinOcclusion;                                     // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VolumetricScatteringIntensity;                            // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.CloudColorState
// 0x0050
struct FCloudColorState
{
	struct FLinearColor                                BottomEmissive;                                           // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                TopEmissive;                                              // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                BottomLightning;                                          // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                TopLightning;                                             // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                InternalColor;                                            // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.ThreatCloudValues
// 0x00A0
struct FThreatCloudValues
{
	struct FCloudColorState                            CloudActivated;                                           // 0x0000(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FCloudColorState                            CloudDeactivated;                                         // 0x0050(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.ElementalCharValues
// 0x0014
struct FElementalCharValues
{
	struct FLinearColor                                FireCharColor;                                            // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ElectricalCharEmissive;                                   // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.DirectionalLightValues
// 0x000C
struct FDirectionalLightValues
{
	struct FColor                                      LightColor;                                               // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              Brightness;                                               // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VolumetricScatteringIntensity;                            // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.ExponentialHeightFogValues
// 0x0048
struct FExponentialHeightFogValues
{
	float                                              FogDensity;                                               // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FogHeightFalloff;                                         // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FogMaxOpacity;                                            // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartDistance;                                            // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DirectionalInscatteringExponent;                          // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DirectionalInscatteringStartDistance;                     // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                DirectionalInscatteringColor;                             // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                FogInscatteringColor;                                     // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              VolumetricFogScatteringDistribution;                      // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VolumetricFogScatteringScale;                             // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VolumetricFogAbsorptionScale;                             // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VolumetricFogDistance;                                    // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.DayPhaseInfo
// 0x0170
struct FDayPhaseInfo
{
	struct FString                                     PhaseStartAnnouncement;                                   // 0x0000(0x0010) (CPF_ZeroConstructor)
	float                                              TimePhaseBegins;                                          // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PhaseLengthInHours;                                       // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
	float                                              PercentageTransitionIn;                                   // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TransitionInTimeInMinutes;                                // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              PercentageTransitionOut;                                  // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TransitionOutTimeInMinutes;                               // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FSkyLightValues                             SkyLightValues;                                           // 0x0028(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FThreatCloudValues                          ThreatCloudValues;                                        // 0x0050(0x00A0) (CPF_Edit, CPF_BlueprintVisible)
	struct FElementalCharValues                        ElementalCharValues;                                      // 0x00F0(0x0014) (CPF_Edit, CPF_BlueprintVisible)
	struct FDirectionalLightValues                     DirectionalLightValues;                                   // 0x0104(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	struct FExponentialHeightFogValues                 ExpHeightFogValues;                                       // 0x0110(0x0048) (CPF_Edit, CPF_BlueprintVisible)
	class UPostProcessComponent*                       LowPriPostProcessComponent;                               // 0x0158(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class UMaterialInstance*                           SkyMaterialInstance;                                      // 0x0160(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstance*                           StarMapMaterialInstance;                                  // 0x0168(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.ClimbLinkData
// 0x002C
struct FClimbLinkData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
	uint32_t                                           UniqueLinkId;                                             // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0024(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.ConnectivityCube
// 0x00C0
struct FConnectivityCube
{
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0000(0x00C0) MISSED OFFSET
};

// ScriptStruct FortniteGame.AuxiliaryEditTileMeshData
// 0x0020
struct FAuxiliaryEditTileMeshData
{
	class UStaticMesh*                                 TileMesh;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  TileTexture;                                              // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    RelativeRot;                                              // 0x0010(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.TileCompInterpData
// 0x0018
struct FTileCompInterpData
{
	struct FVector                                     InitialTranslation;                                       // 0x0000(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     DesiredTranslation;                                       // 0x000C(0x000C) (CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortMapData
// 0x0040
struct FFortMapData
{
	TAssetPtr<class UWorld>                            BuildingWorld;                                            // 0x0000(0x0020) (CPF_Edit)
	struct FGameplayTagContainer                       BuildingLevelTags;                                        // 0x0020(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.MOBATurretPrioritySetting
// 0x000C
struct FMOBATurretPrioritySetting
{
	int                                                AIPriority;                                               // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                PlayerPriority;                                           // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                BuildingPriority;                                         // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.ColorSwatchPair
// 0x0018
struct FColorSwatchPair
{
	struct FName                                       ColorName;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                ColorValue;                                               // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.AbilityKitItem
// 0x0010
struct FAbilityKitItem
{
	class UFortItemDefinition*                         Item;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Quantity;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortReplenishmentType>                Replenishment;                                            // 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.ReplicatedMontagePair
// 0x0028
struct FReplicatedMontagePair
{
	class UAnimMontage*                                Montage1;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                Montage2;                                                 // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Section1;                                                 // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Section2;                                                 // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int8_t                                             RepIndex;                                                 // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.AttributeInfo
// 0x0010
struct FAttributeInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAttributeDetailsInfo
// 0x03B0
struct FFortAttributeDetailsInfo
{
	struct FGameplayTagContainer                       RequiredTags;                                             // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortMultiSizeBrush                         Icon;                                                     // 0x0020(0x0360) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       DisplayName;                                              // 0x0380(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0398(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.FortAttributeInfo
// 0x0078
struct FFortAttributeInfo
{
	struct FGameplayAttribute                          Attribute;                                                // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	TEnumAsByte<EFortAttributeDisplay>                 DisplayMethod;                                            // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FText                                       UnitDisplayName;                                          // 0x0028(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	float                                              DisplayScalingFactor;                                     // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FText                                       FormatText;                                               // 0x0048(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TArray<struct FFortAttributeDetailsInfo>           AttributeDetails;                                         // 0x0060(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	bool                                               bShowInSummaries;                                         // 0x0070(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bShowInDifferences;                                       // 0x0071(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bShowAsBuffInFE;                                          // 0x0072(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bNegativeValuesShouldBeDisplayedPositively;               // 0x0073(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGameplayEffectModifierDescription
// 0x0040
struct FFortGameplayEffectModifierDescription
{
	struct FGameplayAttribute                          ModAttribute;                                             // 0x0000(0x0020)
	struct FText                                       ModDescription;                                           // 0x0020(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	bool                                               bIsBuff;                                                  // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortAttributeDisplay>                 MagnitudeFormat;                                          // 0x0039(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortStatDisplayType                               DisplayType;                                              // 0x003A(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x003B(0x0001) MISSED OFFSET
	float                                              Magnitude;                                                // 0x003C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortGameplayEffectDescription
// 0x0050
struct FFortGameplayEffectDescription
{
	struct FText                                       EffectDisplayName;                                        // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       EffectWrittenDescription;                                 // 0x0018(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TArray<struct FFortGameplayEffectModifierDescription> ModDescriptions;                                          // 0x0030(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<struct FText>                               GrantedTagDescriptions;                                   // 0x0040(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortSpawnContext
// 0x0028
struct FFortSpawnContext
{
	TEnumAsByte<EFortTeam>                             Team;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_SaveGame, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       Tags;                                                     // 0x0008(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_SaveGame)
};

// ScriptStruct FortniteGame.FortAIAssignmentIdentifier
// 0x0030
struct FFortAIAssignmentIdentifier
{
	EAssignmentType                                    AssignmentType;                                           // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       AssignmentGameplayTags;                                   // 0x0008(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<EFortTeam>                             AssignmentTeam;                                           // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIGoalInfo
// 0x0018
struct FFortAIGoalInfo
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	bool                                               bActorAlwaysPerceived;                                    // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIGoal
// 0x0010 (0x0028 - 0x0018)
struct FFortAIGoal : public FFortAIGoalInfo
{
	TArray<class AFortAIController*>                   ControllersAssignedToGoal;                                // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FortniteGame.GoalSelectionQueryInfo
// 0x0028
struct FGoalSelectionQueryInfo
{
	class UEnvQuery*                                   GoalSelectionQuery;                                       // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       RequiredGameplayTags;                                     // 0x0008(0x0020) (CPF_Edit)
};

// ScriptStruct FortniteGame.FortFeedbackHandle
// 0x0018
struct FFortFeedbackHandle
{
	class UFortFeedbackBank*                           FeedbackBank;                                             // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       EventName;                                                // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bReadOnly;                                                // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bBankDefined;                                             // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortFeedbackBroadcastFilter>          BroadcastFilterOverride;                                  // 0x0012(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortFeedbackEventData
// 0x0038
struct FFortFeedbackEventData
{
	struct FFortFeedbackHandle                         Handle;                                                   // 0x0000(0x0018) (CPF_Edit)
	float                                              ChanceToPlay;                                             // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinReplayTime;                                            // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinReplayTimeForSpeaker;                                  // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxWitnessDistance;                                       // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bInterruptCurrentLine;                                    // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCanBeInterrupted;                                        // 0x0029(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCanQue;                                                  // 0x002A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortFeedbackBroadcastFilter>          MultiplayerBroadcastFilter;                               // 0x002B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortFeedbackSelectionMethod>          ContextSelectionMethod;                                   // 0x002C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	float                                              FeedbackDelay;                                            // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeLastPlayed;                                           // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortGameplayAttributeData
// 0x0010 (0x0020 - 0x0010)
struct FFortGameplayAttributeData : public FGameplayAttributeData
{
	float                                              Minimum;                                                  // 0x0010(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Maximum;                                                  // 0x0014(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsClamped;                                               // 0x0018(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bShouldClampBase;                                         // 0x0019(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSentenceAudio
// 0x0038
struct FFortSentenceAudio
{
	TAssetPtr<class USoundBase>                        Audio;                                                    // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FFortFeedbackHandle                         Handle;                                                   // 0x0020(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortConversationSentence
// 0x00B0
struct FFortConversationSentence
{
	struct FFortSentenceAudio                          SpeechAudio;                                              // 0x0000(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       SpeechText;                                               // 0x0038(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TAssetPtr<class UTexture2D>                        TalkingHeadTexture;                                       // 0x0050(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       TalkingHeadTitle;                                         // 0x0070(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TAssetPtr<class UAnimMontage>                      AnimMontage;                                              // 0x0088(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	float                                              PostSentenceDelay;                                        // 0x00A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DisplayDuration;                                          // 0x00AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortSplineBase
// 0x0010
struct FFortSplineBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              StartTime;                                                // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                                 // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortCatmullRomSpline
// 0x0010 (0x0020 - 0x0010)
struct FFortCatmullRomSpline : public FFortSplineBase
{
	TArray<struct FVector>                             ControlPoints;                                            // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortPickupLocationData
// 0x0060
struct FFortPickupLocationData
{
	class AFortPawn*                                   PickupTarget;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AFortPickup*                                 CombineTarget;                                            // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AFortPawn*                                   ItemOwner;                                                // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector_NetQuantize10                       LootInitialPosition;                                      // 0x0018(0x000C)
	struct FVector_NetQuantize10                       LootFinalPosition;                                        // 0x0024(0x000C)
	float                                              FlyTime;                                                  // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector_NetQuantizeNormal                   StartDirection;                                           // 0x0034(0x000C)
	struct FVector_NetQuantize10                       FinalTossRestLocation;                                    // 0x0040(0x000C)
	EFortPickupTossState                               TossState;                                                // 0x004C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FGuid                                       PickupGuid;                                               // 0x0050(0x0010) (CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
};

// ScriptStruct FortniteGame.FortPickupEntryData
// 0x0030
struct FFortPickupEntryData
{
	struct FInterpCurveFloat                           FloatCurve;                                               // 0x0000(0x0018)
	struct FGuid                                       PickupGuid;                                               // 0x0018(0x0010) (CPF_IsPlainOldData)
	float                                              StartTime;                                                // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.PawnDamageZones
// 0x0018
struct FPawnDamageZones
{
	bool                                               bActive;                                                  // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FName>                               Bones;                                                    // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortSpokenLine
// 0x0030
struct FFortSpokenLine
{
	class USoundBase*                                  Audio;                                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                AnimMontage;                                              // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequence*                               AnimSequence;                                             // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AFortPawn*                                   Addressee;                                                // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortFeedbackBroadcastFilter>          BroadcastFilter;                                          // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              Delay;                                                    // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bInterruptCurrentLine;                                    // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCanBeInterrupted;                                        // 0x0029(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCanQue;                                                  // 0x002A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPawnVocalChord
// 0x00D8
struct FFortPawnVocalChord
{
	class UAudioComponent*                             FeedbackAudioComponent;                                   // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FFortSpokenLine                             ReplicatedSpokenLine;                                     // 0x0008(0x0030)
	struct FFortSpokenLine                             PendingSpokenLine;                                        // 0x0038(0x0030) (CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FFortSpokenLine                             QueuedSpokenLine;                                         // 0x0068(0x0030) (CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FFortSpokenLine                             CurrentSpokenLine;                                        // 0x0098(0x0030) (CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortActiveMontageDecisionWindow
// 0x0018
struct FFortActiveMontageDecisionWindow
{
	class UFortAnimNotifyState_AbilityDecisionWindow*  DecisionWindow;                                           // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           DecisionAnimation;                                        // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bReceivedPrimaryInput;                                    // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bReceivedSecondaryInput;                                  // 0x0011(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAlreadyProcessedInput;                                   // 0x0012(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
};

// ScriptStruct FortniteGame.DamagerInfo
// 0x0030
struct FDamagerInfo
{
	class AActor*                                      DamageCauser;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DamageAmount;                                             // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       SourceTags;                                               // 0x0010(0x0020)
};

// ScriptStruct FortniteGame.CalloutEntry
// 0x0098
struct FCalloutEntry
{
	struct FGameplayTag                                CalloutTag;                                               // 0x0000(0x0008) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FSlateBrush                                 CalloutIcon;                                              // 0x0008(0x0090) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.AssetAttachment
// 0x0030
struct FAssetAttachment
{
	struct FName                                       SocketName;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USkeletalMesh*                               SkeletalMeshAsset;                                        // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 StaticMeshAsset;                                          // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSkipOnDedicatedServers;                                  // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	class USkeletalMeshComponent*                      SkelMeshComp;                                             // 0x0020(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshComp;                                           // 0x0028(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.MinimapGoalByTagColorsData
// 0x0030
struct FMinimapGoalByTagColorsData
{
	struct FGameplayTagContainer                       GoalTags;                                                 // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLinearColor                                MinimapColor;                                             // 0x0020(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortAISpawnGroupUpgradeUIData
// 0x00A8
struct FFortAISpawnGroupUpgradeUIData
{
	bool                                               bAlwaysDisplayHealthBar;                                  // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bOverrideHealthBarColor;                                  // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FSlateBrush                                 UpgradeIcon;                                              // 0x0008(0x0090) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLinearColor                                HealthBarColorOverride;                                   // 0x0098(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortAIAppearanceOverrideEntry
// 0x0050
struct FFortAIAppearanceOverrideEntry
{
	struct FName                                       AppearanceName;                                           // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsFemale;                                                // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TAssetPtr<class USkeletalMesh>                     SkeletalMesh;                                             // 0x0010(0x0020) (CPF_Edit)
	TAssetPtr<class UFortFeedbackBank>                 FeedbackBank;                                             // 0x0030(0x0020) (CPF_Edit)
};

// ScriptStruct FortniteGame.AIHotSpotUseInfo
// 0x0008 (0x0018 - 0x0010)
struct FAIHotSpotUseInfo : public FAIHotSpotSlotInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.IntensityContribution
// 0x0048
struct FIntensityContribution
{
	TEnumAsByte<EFortCombatFactors>                    CombatFactor;                                             // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortAIDirectorFactor                              ContributingAIDirectorFactor;                             // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              MaxContribution;                                          // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bModifyContributionByCompletionPercentage;                // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FCurveTableRowHandle                        CompletionPercentageInitialMultiplier;                    // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FCurveTableRowHandle                        CompletionPercentageToStartReducingMultiplier;            // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FCurveTableRowHandle                        CompletionPercentageToStopReducingMultiplier;             // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	bool                                               bModifyByNumberOfCriticalEncounterGoals;                  // 0x0040(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.IntensityData
// 0x0030
struct FIntensityData
{
	TArray<struct FIntensityContribution>              ContributingFactors;                                      // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	float                                              ContributionsTotal;                                       // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<class UBuildingEditModeMetadata*>           ExceptionEditModes;                                       // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              ExceptionEditModeWeight;                                  // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIEncounterPIDController
// 0x0068
struct FFortAIEncounterPIDController
{
	float                                              ProportionalGain;                                         // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IntegralGain;                                             // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DerivativeGain;                                           // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5C];                                      // 0x000C(0x005C) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIEncounterPIDControllerSettings
// 0x0030
struct FFortAIEncounterPIDControllerSettings
{
	struct FCurveTableRowHandle                        ProportionalGain;                                         // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FCurveTableRowHandle                        IntegralGain;                                             // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FCurveTableRowHandle                        DerivativeGain;                                           // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.UtilityContribution
// 0x000C
struct FUtilityContribution
{
	TEnumAsByte<EFortCombatFactors>                    ContributingFactor;                                       // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortAIDirectorFactor                              ContributingAIDirectorFactor;                             // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              MaxContribution;                                          // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortFactorContributionType>           ContributionType;                                         // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.UtilityData
// 0x0040
struct FUtilityData
{
	TArray<struct FUtilityContribution>                ContributingFactors;                                      // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	float                                              ContributionsTotal;                                       // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	bool                                               bApplyRecentSelectionPenalty;                             // 0x0014(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              RecentlySelectedPenaltyPercentage;                        // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PenaltyFallOffRate;                                       // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     DebugGraphName;                                           // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FLinearColor                                DebugGraphColor;                                          // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortPlayerPerformanceEstimateSettings
// 0x0040
struct FFortPlayerPerformanceEstimateSettings
{
	struct FCurveTableRowHandle                        PlayerPerformanceEstimateTransformMin;                    // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FCurveTableRowHandle                        PlayerPerformanceEstimateTransformOrigin;                 // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FCurveTableRowHandle                        PlayerPerformanceEstimateTransformMax;                    // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	float                                              EncounterPlayerPerformanceWeight;                         // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PreviousWavePlayerPerformanceWeight;                      // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CampaignPlayerPerformanceWeight;                          // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIEncounterSpawnGroupCap
// 0x0020
struct FFortAIEncounterSpawnGroupCap
{
	struct FCurveTableRowHandle                        MinSpawnGroupNumberCap;                                   // 0x0000(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FCurveTableRowHandle                        MaxSpawnGroupNumberCap;                                   // 0x0010(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortAIEncounterSpawnGroupCapsCategory
// 0x0100
struct FFortAIEncounterSpawnGroupCapsCategory
{
	struct FGameplayTagQuery                           TagQuery;                                                 // 0x0000(0x0048) (CPF_Edit, CPF_DisableEditOnInstance)
	bool                                               bApplyGroupPopulationCurveToCategoryMax;                  // 0x0048(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FCurveTableRowHandle                        UpgradeProbability;                                       // 0x0050(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FCurveTableRowHandle                        InitialSpawnGroupAvailabilityDelaySeconds;                // 0x0060(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FCurveTableRowHandle                        SpawnGroupAvailabilityDelaySeconds;                       // 0x0070(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<struct FFortAIEncounterSpawnGroupCap>       SpawnGroupCapsPerPlayerCount;                             // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              InitialSpawnGroupAvailabilityTime;                        // 0x0090(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NumActiveCategorySpawnGroups;                             // 0x0094(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<float>                                      SpawnGroupAvailabilityTimes;                              // 0x0098(0x0010) (CPF_ZeroConstructor)
	int                                                NumSpawnGroupAvailable;                                   // 0x00A8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x54];                                      // 0x00AC(0x0054) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIEncounterSpawnGroupCapsProfile
// 0x0030
struct FFortAIEncounterSpawnGroupCapsProfile
{
	struct FGameplayTagContainer                       EncounterTypeTags;                                        // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<struct FFortAIEncounterSpawnGroupCapsCategory> PopulationCategories;                                     // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortAIEncounterSpawnPointsProfile
// 0x0040
struct FFortAIEncounterSpawnPointsProfile
{
	struct FGameplayTagContainer                       EncounterTypeTags;                                        // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<struct FCurveTableRowHandle>                MaxSpawnPointsPerPlayerCount;                             // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FCurveTableRowHandle>                MinSpawnPointsPerPlayerCount;                             // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortAIEncounterPawnDifficultyLevelModifier
// 0x0058
struct FFortAIEncounterPawnDifficultyLevelModifier
{
	struct FGameplayTagQuery                           EncounterTagRequirementsQuery;                            // 0x0000(0x0048) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FCurveTableRowHandle                        DifficultyLevelModifierCurve;                             // 0x0048(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortAIPawnUpgradeData
// 0x0038
struct FFortAIPawnUpgradeData
{
	struct FCurveTableRowHandle                        SpawnPointsMultiplierCurve;                               // 0x0000(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FCurveTableRowHandle                        LifespanMultiplierCurve;                                  // 0x0010(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FCurveTableRowHandle                        ScoreMultiplierCurve;                                     // 0x0020(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	class UFortGameplayModifierItemDefinition*         ModifierDefinition;                                       // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortAIPawnUpgrade
// 0x0058
struct FFortAIPawnUpgrade
{
	struct FGameplayTagQuery                           TagQuery;                                                 // 0x0000(0x0048) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<struct FFortAIPawnUpgradeData>              PawnUpgradeDataPerPlayerCount;                            // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortAISpawnGroupUpgrade
// 0x0130
struct FFortAISpawnGroupUpgrade
{
	struct FGameplayTagContainer                       UpgradeTags;                                              // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<struct FFortAIPawnUpgrade>                  BasePawnUpgrades;                                         // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FName                                       AdditionalModifiersLootTierGroup;                         // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bInvalidForEnemySpawners;                                 // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FGameplayTagQuery                           EncounterTagRequirementsQuery;                            // 0x0040(0x0048) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FFortAISpawnGroupUpgradeUIData              UIData;                                                   // 0x0088(0x00A8) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.EncounterEnvironmentQueryInfo
// 0x0028
struct FEncounterEnvironmentQueryInfo
{
	class UEnvQuery*                                   EnvironmentQuery;                                         // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	bool                                               bIsDirectional;                                           // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortEncounterPawnNumberCaps
// 0x0018
struct FFortEncounterPawnNumberCaps
{
	bool                                               bApplyPawnNumberCaps;                                     // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FCurveTableRowHandle>                PawnCapsPerPlayerCount;                                   // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.PendingSpawnInfo
// 0x0160
struct FPendingSpawnInfo
{
	class UClass*                                      PawnClassToSpawn;                                         // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      SpawnPoint;                                               // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // 0x0010(0x000C) (CPF_IsPlainOldData)
	struct FRotator                                    SpawnRotation;                                            // 0x001C(0x000C) (CPF_IsPlainOldData)
	class AActor*                                      SpawnSource;                                              // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSpawnedFromExternalSpawner;                              // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                SpawnSetIndex;                                            // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortressAIType                                    AIType;                                                   // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class AFortPlayerController*                       TargetPlayer;                                             // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortAIEncounterInfo*                        EncounterInfo;                                            // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DifficultyLevel;                                          // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	class UFortAISpawnGroup*                           SpawnGroup;                                               // 0x0058(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       SpawnGroupGuid;                                           // 0x0060(0x0010) (CPF_IsPlainOldData)
	int                                                EnemyIndexInSpawnGroup;                                   // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeToSpawn;                                              // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       PendingSpawnInfoGuid;                                     // 0x0078(0x0010) (CPF_IsPlainOldData)
	bool                                               bIgnoreCollision;                                         // 0x0088(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bKillBuildingActorsAtSpawnLocation;                       // 0x0089(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x008A(0x0002) MISSED OFFSET
	float                                              EncounterAILifespan;                                      // 0x008C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScoreMultiplier;                                          // 0x0090(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDebugSpawnedAI;                                          // 0x0094(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	TArray<class UFortAbilitySet*>                     AbilitySetsToGrantOnSpawn;                                // 0x0098(0x0010) (CPF_ZeroConstructor)
	TArray<class UFortGameplayModifierItemDefinition*> ModifiersToApplyOnSpawn;                                  // 0x00A8(0x0010) (CPF_ZeroConstructor)
	struct FFortAISpawnGroupUpgradeUIData              UpgradeUIData;                                            // 0x00B8(0x00A8)
};

// ScriptStruct FortniteGame.UtilityTypeFloatPair
// 0x0008
struct FUtilityTypeFloatPair
{
	TEnumAsByte<EFortAIUtility>                        Utility;                                                  // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.AIDirectorEventData
// 0x0030
struct FAIDirectorEventData
{
	EFortAIDirectorEvent                               Event;                                                    // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FCurveTableRowHandle                        DataMax;                                                  // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FCurveTableRowHandle                        CoolDownRate;                                             // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	EFortAIDirectorEventContribution                   ContributionType;                                         // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortAIDirectorEventParticipant                    OwnerParticipantType;                                     // 0x0029(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIDirectorFactorContribution
// 0x000C
struct FFortAIDirectorFactorContribution
{
	EFortAIDirectorEvent                               AIDirectorEvent;                                          // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MaxContribution;                                          // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortAIDirectorFactorContribution>     ContributionType;                                         // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIDirectorFactorData
// 0x0020
struct FFortAIDirectorFactorData
{
	EFortAIDirectorFactor                              AIDirectorFactor;                                         // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FFortAIDirectorFactorContribution>   ContributingEvents;                                       // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	float                                              MaxValue;                                                 // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIDirectorEvent
// 0x0020
struct FFortAIDirectorEvent
{
	EFortAIDirectorEvent                               Event;                                                    // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UObject*                                     EventSource;                                              // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventTarget;                                              // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EventValue;                                               // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.GoalSelectionCriteria
// 0x0008
struct FGoalSelectionCriteria
{
	class UEnvQuery*                                   GoalSelectionQuery;                                       // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.EncounterGoalSelectionTableEntry
// 0x0028
struct FEncounterGoalSelectionTableEntry
{
	struct FGameplayTagContainer                       RequiredGameplayTags;                                     // 0x0000(0x0020) (CPF_Edit)
	struct FGoalSelectionCriteria                      GoalSelectionCriteria;                                    // 0x0020(0x0008) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortCurveSequenceInstanceInfo
// 0x0004
struct FFortCurveSequenceInstanceInfo
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSpawnPointsPercentageCurveSequenceInstanceInfo
// 0x000C (0x0010 - 0x0004)
struct FFortSpawnPointsPercentageCurveSequenceInstanceInfo : public FFortCurveSequenceInstanceInfo
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UFortSpawnPointsPercentageCurveSequence*     SpawnPointsPercentageCurveSequence;                       // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortIntensityCurveSequenceInstanceInfo
// 0x000C (0x0010 - 0x0004)
struct FFortIntensityCurveSequenceInstanceInfo : public FFortCurveSequenceInstanceInfo
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UFortIntensityCurveSequence*                 IntensityCurveSequence;                                   // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.AIEncounterSpawnGroupWeights
// 0x0018
struct FAIEncounterSpawnGroupWeights
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.SpawnGroupInstanceInfo
// 0x0130
struct FSpawnGroupInstanceInfo
{
	class UFortAISpawnGroup*                           SpawnGroup;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumActiveAlive;                                           // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TotalGroupCost;                                           // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SpawnPointsUsed;                                          // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumEngaged;                                               // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bReadyToSpawn;                                            // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFinishedSpawning;                                        // 0x0019(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	struct FGuid                                       GroupGuid;                                                // 0x001C(0x0010) (CPF_IsPlainOldData)
	int                                                EnemySpawnDataIndex;                                      // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeSelected;                                             // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NextEnemyToSpawnIndex;                                    // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       UpgradeTags;                                              // 0x0038(0x0020)
	struct FFortAISpawnGroupUpgradeUIData              UpgradeUIData;                                            // 0x0058(0x00A8)
	TArray<struct FFortAIPawnUpgradeData>              PawnUpgrades;                                             // 0x0100(0x0010) (CPF_ZeroConstructor)
	TArray<class UFortGameplayModifierItemDefinition*> ModifiersForAllPawns;                                     // 0x0110(0x0010) (CPF_ZeroConstructor)
	TArray<class AFortAIPawn*>                         PawnList;                                                 // 0x0120(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortAIEncounterWaveProgressEstimation
// 0x001C
struct FFortAIEncounterWaveProgressEstimation
{
	float                                              SectionProgressEstimate;                                  // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SectionStartTime;                                         // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LastWaveProgressUpdateTime;                               // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PeakAndFadeWavePercentage;                                // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxAdjustmentPerSecond;                                   // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortAIWaveProgressSection>            CurrentSection;                                           // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                NumberOfWaveSegments;                                     // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortGoalActorEncounterDataManagerPair
// 0x0010
struct FFortGoalActorEncounterDataManagerPair
{
	class AActor*                                      GoalActor;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AFortAIDirectorDataManager*                  EncounterDataManager;                                     // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortEncounterSettings
// 0x0058
struct FFortEncounterSettings
{
	TArray<TEnumAsByte<EFortEncounterDirection>>       ForbiddenSpawnDirections;                                 // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               bRiftsDestroyPlayerBuiltBuildings;                        // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bMustFindSpawnPoints;                                     // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bTrackCombatParticipation;                                // 0x0012(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDisplayThreatVisuals;                                    // 0x0013(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumRiftsToUseOverride;                                    // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseEQSQueryToFindAISpawnLocations;                       // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRelevantForTotalAICap;                                   // 0x0019(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
	class UEnvQuery*                                   RiftSelectionQuery;                                       // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class AActor*>                              ScriptedSpawnPoints;                                      // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<class AActor*>                              WorkingScriptedSpawnPoints;                               // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<class UFortDifficultyOptionCategoryEncounter*> InjectedOverrideCategories;                               // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FortniteGame.FortSpawnAIRequest
// 0x0050
struct FFortSpawnAIRequest
{
	struct FGuid                                       SpawnGroupInstanceGuid;                                   // 0x0000(0x0010) (CPF_IsPlainOldData)
	int                                                EnemyIndex;                                               // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // 0x0014(0x000C) (CPF_IsPlainOldData)
	struct FRotator                                    SpawnRotation;                                            // 0x0020(0x000C) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class AActor*                                      SpawnPoint;                                               // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UFortAbilitySet*>                     AbilitySetsToGrantOnSpawn;                                // 0x0038(0x0010) (CPF_ZeroConstructor)
	bool                                               bIgnoreCollisionWhenSpawning;                             // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAISpawnerData
// 0x0060
struct FFortAISpawnerData
{
	struct FGuid                                       SpawnGroupInstanceGuid;                                   // 0x0000(0x0010) (CPF_IsPlainOldData)
	struct FFortSpawnAIRequest                         ReservedSpawnRequest;                                     // 0x0010(0x0050)
};

// ScriptStruct FortniteGame.FortAIPawnVariantDefinition
// 0x0068
struct FFortAIPawnVariantDefinition
{
	class UClass*                                      PawnClass;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FCurveTableRowHandle                        VariantWeightCurve;                                       // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	float                                              CurrentWeight;                                            // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FGameplayTagQuery                           RequiredTagsQuery;                                        // 0x0020(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.SpawnGroupEnemy
// 0x0010
struct FSpawnGroupEnemy
{
	class UClass*                                      EnemyVariantClass;                                        // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bOverrideVariantSpawnPointValue;                          // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                SpawnValue;                                               // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortSpawnGroupEncounterTypeData
// 0x0040
struct FFortSpawnGroupEncounterTypeData
{
	struct FGameplayTagContainer                       EncounterTypeTags;                                        // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FCurveTableRowHandle                        MaxGroupCategoryPopulationDensityCurve;                   // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FCurveTableRowHandle                        RespawnDelayCurve;                                        // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.EncounterEnvironmentQueryInstance
// 0x0048
struct FEncounterEnvironmentQueryInstance
{
	struct FEncounterEnvironmentQueryInfo              EnvironmentQueryInfo;                                     // 0x0000(0x0028)
	int                                                QueryID;                                                  // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsWaitingForQueryResults;                                // 0x002C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortEncounterDirection>               ChosenDirection;                                          // 0x002D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	TArray<struct FVector>                             QueryLocations;                                           // 0x0030(0x0010) (CPF_ZeroConstructor)
	int                                                NumTimesUsed;                                             // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIEncounterRift
// 0x0018
struct FFortAIEncounterRift
{
	int                                                QueryID;                                                  // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     RiftLocation;                                             // 0x0004(0x000C) (CPF_IsPlainOldData)
	class ABuildingRift*                               RiftActor;                                                // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortAIEncounterSpawnArea
// 0x0048
struct FFortAIEncounterSpawnArea
{
	TArray<struct FEncounterEnvironmentQueryInstance>  QueryInstances;                                           // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FFortAIEncounterRift>                PendingRifts;                                             // 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<struct FFortAIEncounterRift>                Rifts;                                                    // 0x0020(0x0010) (CPF_ZeroConstructor)
	TArray<class UFortPathCostEstimator*>              PathEstimators;                                           // 0x0030(0x0010) (CPF_ZeroConstructor)
	bool                                               bIsActive;                                                // 0x0040(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUsingFallbackQuery;                                      // 0x0041(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIEncounterQueryDirectionTracker
// 0x0048
struct FFortAIEncounterQueryDirectionTracker
{
	bool                                               bHasTriedPreviousDirections;                              // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<EFortEncounterDirection>>       PreviousQueryDirections;                                  // 0x0008(0x0010) (CPF_ZeroConstructor)
	TArray<TEnumAsByte<EFortEncounterDirection>>       ChosenDirections;                                         // 0x0018(0x0010) (CPF_ZeroConstructor)
	TArray<TEnumAsByte<EFortEncounterDirection>>       FailedDirections;                                         // 0x0028(0x0010) (CPF_ZeroConstructor)
	TArray<TEnumAsByte<EFortEncounterDirection>>       AvailableDirections;                                      // 0x0038(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortEncounterTransitionSettings
// 0x0001
struct FFortEncounterTransitionSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGeneratedEncounterSequence
// 0x0030
struct FFortGeneratedEncounterSequence
{
	struct FFortEncounterTransitionSettings            TransitionSettings;                                       // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                StartingGeneratedEncounterProfileIndex;                   // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumEncountersInSequence;                                  // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       EncounterSequenceTags;                                    // 0x0010(0x0020)
};

// ScriptStruct FortniteGame.PawnGoalSelectionCriteria
// 0x0050
struct FPawnGoalSelectionCriteria
{
	struct FGameplayTagContainer                       IncludeEnemiesWithTags;                                   // 0x0000(0x0020) (CPF_Edit)
	struct FGameplayTagContainer                       ExcludeEnemiesWithTags;                                   // 0x0020(0x0020) (CPF_Edit)
	TArray<struct FGoalSelectionCriteria>              GoalSelectionCriteria;                                    // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.PawnGoalSelectionTableEntry
// 0x0070
struct FPawnGoalSelectionTableEntry
{
	struct FGameplayTagContainer                       RequiredGameplayTags;                                     // 0x0000(0x0020) (CPF_Edit)
	struct FPawnGoalSelectionCriteria                  PawnGoalSelectionCriteria;                                // 0x0020(0x0050) (CPF_Edit)
};

// ScriptStruct FortniteGame.SpawnGroupProgression
// 0x0008
struct FSpawnGroupProgression
{
	class UFortAISpawnGroup*                           SpawnGroup;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortMoveConfig
// 0x0028
struct FFortMoveConfig
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	class AActor*                                      FocusTarget;                                              // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      PushPawnClassOnBump;                                      // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.GameplayTagAnimationData
// 0x0048
struct FGameplayTagAnimationData
{
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0000(0x0020) (CPF_Edit)
	TEnumAsByte<EFortCustomGender>                     ValidGenders;                                             // 0x0020(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TAssetPtr<class UAnimMontage>                      AnimMontage;                                              // 0x0028(0x0020) (CPF_Edit)
};

// ScriptStruct FortniteGame.GameplayTagAnimations
// 0x0010
struct FGameplayTagAnimations
{
	TArray<struct FGameplayTagAnimationData>           GameplayTagAnimData;                                      // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.HeroSpecializationAttributeRequirement
// 0x0028
struct FHeroSpecializationAttributeRequirement
{
	struct FGameplayAttribute                          Attribute;                                                // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	float                                              MinimumValue;                                             // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSpecializationSlot
// 0x0078
struct FFortSpecializationSlot
{
	TAssetPtr<class UFortAbilityKit>                   GrantedAbilityKit;                                        // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TAssetPtr<class UFortAbilityKit>                   RemovedAbilityKit;                                        // 0x0020(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TArray<struct FHeroSpecializationAttributeRequirement> AttributeRequirements;                                    // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       RequiredTags;                                             // 0x0050(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	int                                                MinimumHeroLevel;                                         // 0x0070(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.HeroAbilityKit
// 0x0048
struct FHeroAbilityKit
{
	TAssetPtr<class UFortAbilityKit>                   InherentAbilityKit;                                       // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FGameplayTagContainer                       RequiredGPTags;                                           // 0x0020(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	bool                                               bShowInAbilityScreen;                                     // 0x0040(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.HeroItem
// 0x0070
struct FHeroItem
{
	TAssetPtr<class UFortWorldItemDefinition>          Item;                                                     // 0x0000(0x0020) (CPF_Edit)
	int                                                Quantity;                                                 // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortReplenishmentType>                Replenishment;                                            // 0x0024(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FGameplayTagContainer                       RequiredGPTags;                                           // 0x0028(0x0020) (CPF_Edit)
	struct FGameplayTagContainer                       SwapTag;                                                  // 0x0048(0x0020) (CPF_Edit)
	bool                                               bShowInAbilityScreen;                                     // 0x0068(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSavedModeLoadout
// 0x0020
struct FFortSavedModeLoadout
{
	struct FString                                     LoadoutName;                                              // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             SelectedGadgets;                                          // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortCharacterPartsRepMontageInfo
// 0x0020
struct FFortCharacterPartsRepMontageInfo
{
	TArray<struct FFortCharacterPartMontageInfo>       CharPartMontages;                                         // 0x0000(0x0010) (CPF_ZeroConstructor)
	class UAnimMontage*                                PawnMontage;                                              // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bPlayBit;                                                 // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.AthenaBatchedDamageGameplayCues
// 0x0058
struct FAthenaBatchedDamageGameplayCues
{
	class AActor*                                      HitActor;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector_NetQuantize10                       Location;                                                 // 0x0008(0x000C)
	struct FVector_NetQuantizeNormal                   Normal;                                                   // 0x0014(0x000C)
	float                                              Magnitude;                                                // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWeaponActivate;                                          // 0x0024(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsFatal;                                                 // 0x0025(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsCritical;                                              // 0x0026(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsShield;                                                // 0x0027(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsShieldDestroyed;                                       // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class AActor*                                      NonPlayerHitActor;                                        // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FVector_NetQuantize10                       NonPlayerLocation;                                        // 0x0038(0x000C) (CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FVector_NetQuantizeNormal                   NonPlayerNormal;                                          // 0x0044(0x000C) (CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	float                                              NonPlayerMagnitude;                                       // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	bool                                               NonPlayerbIsFatal;                                        // 0x0054(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	bool                                               NonPlayerbIsCritical;                                     // 0x0055(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	bool                                               bIsValid;                                                 // 0x0056(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0057(0x0001) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMontageInputAction
// 0x0018
struct FFortMontageInputAction
{
	struct FGameplayTag                                TriggerAbilityTag;                                        // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FName                                       NextSection;                                              // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortMontageInputType                              InputType;                                                // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.HomebaseBannerColor
// 0x0020
struct FHomebaseBannerColor
{
	struct FLinearColor                                PrimaryColor;                                             // 0x0000(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                SecondaryColor;                                           // 0x0010(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.WorkerPortraitData
// 0x0020
struct FWorkerPortraitData
{
	TAssetPtr<class UFortItemIconDefinition>           Portrait;                                                 // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.WorkerGenderData
// 0x0018
struct FWorkerGenderData
{
	TEnumAsByte<EFortCustomGender>                     Gender;                                                   // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FWorkerPortraitData>                 PotraitData;                                              // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.WorkerPersonalityData
// 0x0038
struct FWorkerPersonalityData
{
	struct FGameplayTag                                PersonalityTypeTag;                                       // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       PersonalityName;                                          // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                SelectionWeight;                                          // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FWorkerGenderData>                   GenderData;                                               // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.WorkerSetBonusData
// 0x0038
struct FWorkerSetBonusData
{
	struct FGameplayTag                                SetBonusTypeTag;                                          // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                RequiredWorkersCount;                                     // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UClass*                                      SetBonusEffect;                                           // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SelectionWeight;                                          // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PowerPoints;                                              // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.ManagerSynergyData
// 0x0018
struct FManagerSynergyData
{
	struct FGameplayTag                                SynergyTypeTag;                                           // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TArray<struct FWorkerGenderData>                   GenderData;                                               // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.HomebaseSquadAttributeBonus
// 0x0030
struct FHomebaseSquadAttributeBonus
{
	struct FGameplayAttribute                          AttributeGranted;                                         // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FCurveTableRowHandle                        BonusCurve;                                               // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.HomebaseSquadSlot
// 0x0060
struct FHomebaseSquadSlot
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TArray<EFortItemType>                              ValidSlottableItemTypes;                                  // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FGameplayTagContainer                       TagFilter;                                                // 0x0028(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TArray<struct FHomebaseSquadAttributeBonus>        SlottingBonuses;                                          // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	class UCurveTable*                                 PersonalityMatchBonusTable;                               // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.HomebaseSquad
// 0x0080 (0x0088 - 0x0008)
struct FHomebaseSquad : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       ShortDisplayName;                                         // 0x0020(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	EFortHomebaseSquadType                             SquadType;                                                // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FGameplayTag                                ManagerSynergyTag;                                        // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TArray<struct FHomebaseSquadSlot>                  CrewSlots;                                                // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FGameplayTagContainer                       RequiredTheaterTags;                                      // 0x0058(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                MaxNumDefendersAllowedInLevel;                            // 0x0078(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxNumDefendersAllowedInGroupLevel;                       // 0x007C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bConsiderNumPlayersForMaxNumDefenders;                    // 0x0080(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAlwaysRemoveOldestDefenderWhenReplacing;                 // 0x0081(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0082(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteGame.HomebaseNodePage
// 0x0058 (0x0060 - 0x0008)
struct FHomebaseNodePage : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0020(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FString                                     EventID;                                                  // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	int                                                PositionIndex;                                            // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<struct FName>                               NodeList;                                                 // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.HomebaseNodeInstancePrerequisites
// 0x0020
struct FHomebaseNodeInstancePrerequisites
{
	struct FName                                       NodeInstanceId;                                           // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bHideConnection;                                          // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FName                                       PrereqPageId;                                             // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EPrereqNodeType                                    PrereqNodeType;                                           // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                MinOwnedNodesRequiredFromPrereqPage;                      // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.HomebaseNodeANDPrerequisites
// 0x0010
struct FHomebaseNodeANDPrerequisites
{
	TArray<struct FHomebaseNodeInstancePrerequisites>  AND_Prerequisites;                                        // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.HomebaseSquadSlotId
// 0x0010
struct FHomebaseSquadSlotId
{
	struct FName                                       SquadId;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SquadSlotIndex;                                           // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.HomebaseNode
// 0x00B8 (0x00C0 - 0x0008)
struct FHomebaseNode : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TArray<struct FHomebaseNodeANDPrerequisites>       OR_Prerequisites;                                         // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<struct FFortItemQuantityPair>               Cost;                                                     // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<TAssetPtr<class UFortQuestItemDefinition>>  QuestTemplateRequirements;                                // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	EFortHomebaseNodeDisplayType                       DisplayType;                                              // 0x0050(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortHomebaseNodeMagnitude                         DisplayMagnitude;                                         // 0x0051(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortHomebaseNodeActionType                        ActionType;                                               // 0x0052(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0053(0x0005) MISSED OFFSET
	struct FName                                       DrillDownNodePageId;                                      // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortAbilityKit*                             AbilityKit;                                               // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      GameplayEffect;                                           // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FName>                               GameplayEffectRowNames;                                   // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<struct FHomebaseSquadSlotId>                UnlockedSquadSlots;                                       // 0x0080(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	int                                                NumPowerPoints;                                           // 0x0090(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	struct FName                                       StyleId;                                                  // 0x0098(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Description;                                              // 0x00A0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UClass*                                      CustomTooltip;                                            // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.WorkerSetBonusState
// 0x0010
struct FWorkerSetBonusState
{
	struct FGameplayTag                                SetBonusTag;                                              // 0x0000(0x0008) (CPF_BlueprintVisible)
	int                                                CurrentMatchCount;                                        // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RequiredMatchCountToActivate;                             // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortClientEvent
// 0x0020
struct FFortClientEvent
{
	struct FName                                       CategoryName;                                             // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       EventName;                                                // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventSource;                                              // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortClientAnnouncementData
// 0x0001
struct FFortClientAnnouncementData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortClientAnnouncementData_Basic
// 0x00EF (0x00F0 - 0x0001)
struct FFortClientAnnouncementData_Basic : public FFortClientAnnouncementData
{
	struct FSlateBrush                                 Icon;                                                     // 0x0000(0x0090) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       TitleText;                                                // 0x0090(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       DetailText;                                               // 0x00A8(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       GamepadDetailText;                                        // 0x00C0(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	int                                                Priority;                                                 // 0x00D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	float                                              DisplayTime;                                              // 0x00E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	class USoundBase*                                  OnStartSound;                                             // 0x00E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.CustomPartMaterialOverrideData
// 0x0028
struct FCustomPartMaterialOverrideData
{
	int                                                MaterialOverrideIndex;                                    // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TAssetPtr<class UMaterialInterface>                OverrideMaterial;                                         // 0x0008(0x0020) (CPF_Edit)
};

// ScriptStruct FortniteGame.CustomPartTextureParameter
// 0x0030
struct FCustomPartTextureParameter
{
	int                                                MaterialIndexForTextureParameter;                         // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       TextureParameterNameForMaterial;                          // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TAssetPtr<class UTexture>                          TextureOverride;                                          // 0x0010(0x0020) (CPF_Edit)
};

// ScriptStruct FortniteGame.CustomPartScalarParameter
// 0x0018
struct FCustomPartScalarParameter
{
	int                                                MaterialIndexForScalarParameter;                          // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       ScalarParameterNameForMaterial;                           // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScalarOverride;                                           // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.CustomPartVectorParameter
// 0x0020
struct FCustomPartVectorParameter
{
	int                                                MaterialIndexForVectorParameter;                          // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       VectorParameterNameForMaterial;                           // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                VectorOverride;                                           // 0x0010(0x0010) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortEventConditional
// 0x0038
struct FFortEventConditional
{
	TEnumAsByte<EFortEventConditionType>               ConditionalType;                                          // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       StatToCompare;                                            // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EStatRecordingPeriod                               RelevantPeriod;                                           // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortCompare>                          ComparisonType;                                           // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	int                                                Value;                                                    // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortSchematicItemDefinition*                CraftingItem;                                             // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCanCraft;                                                // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class UStat*                                       Stat;                                                     // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class AFortPlayerController*                       FPC;                                                      // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortStatEvent
// 0x0050
struct FFortStatEvent
{
	struct FName                                       StatEventName;                                            // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortEventRepeat>                      RepeatType;                                               // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<struct FName>                               StatsToMonitor;                                           // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<struct FFortEventConditional>               Conditions;                                               // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	class UClass*                                      AnnouncementToDisplay;                                    // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     NotificationParameter;                                    // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UStat*                                       AssociatedStat;                                           // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class AFortPlayerController*                       FPC;                                                      // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortStatEventSequence
// 0x0050
struct FFortStatEventSequence
{
	struct FName                                       StatEventName;                                            // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortEventRepeat>                      RepeatType;                                               // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<struct FFortStatEvent>                      EventSequence;                                            // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	class UStat*                                       AssociatedStat;                                           // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class AFortPlayerController*                       FPC;                                                      // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<struct FName>                               StatsToMonitor;                                           // 0x0030(0x0010) (CPF_ZeroConstructor)
	TArray<struct FFortEventConditional>               Conditions;                                               // 0x0040(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortDailyRewardScheduleDisplayData
// 0x0060
struct FFortDailyRewardScheduleDisplayData
{
	struct FText                                       Title;                                                    // 0x0000(0x0018) (CPF_Edit)
	struct FText                                       Description;                                              // 0x0018(0x0018) (CPF_Edit)
	struct FText                                       ItemDescription;                                          // 0x0030(0x0018) (CPF_Edit)
	struct FText                                       EpicItemDescription;                                      // 0x0048(0x0018) (CPF_Edit)
};

// ScriptStruct FortniteGame.FortDailyRewardScheduleDefinition
// 0x00A0
struct FFortDailyRewardScheduleDefinition
{
	struct FName                                       ScheduleName;                                             // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TAssetPtr<class UFortDailyRewardScheduleTokenDefinition> EnablingToken;                                            // 0x0008(0x0020) (CPF_Edit)
	class UDataTable*                                  Rewards;                                                  // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortDailyRewardScheduleDisplayData         DisplayData;                                              // 0x0030(0x0060) (CPF_Edit)
	struct FDateTime                                   BeginDate;                                                // 0x0090(0x0008) (CPF_Edit)
	struct FDateTime                                   EndDate;                                                  // 0x0098(0x0008) (CPF_Edit)
};

// ScriptStruct FortniteGame.OutpostBuildingData
// 0x0020
struct FOutpostBuildingData
{
	TAssetPtr<class UFortOutpostItemDefinition>        ItemDefinition;                                           // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.CraftingTableBuildingData
// 0x0010 (0x0030 - 0x0020)
struct FCraftingTableBuildingData : public FOutpostBuildingData
{
	class UDataTable*                                  ActivationCostData;                                       // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      ActivationEffect;                                         // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.OutpostFabricatorPerTheaterData
// 0x0008
struct FOutpostFabricatorPerTheaterData
{
	int                                                TheaterSlot;                                              // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortItemTier>                         MaxAllowedTier;                                           // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.FabricatorBuildingData
// 0x0048 (0x0068 - 0x0020)
struct FFabricatorBuildingData : public FOutpostBuildingData
{
	TArray<TAssetPtr<class UFortWorldItemDefinition>>  AlwaysAvailableFabricationItems;                          // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UDataTable*                                  DefaultIngredientDisintergrationData;                     // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FOutpostFabricatorPerTheaterData>    IngredientDisintergrationPerTheaterData;                  // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	float                                              FabricationDuration;                                      // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                DisintegrationToFabricationRatio;                         // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                QuantumGooProductionTime;                                 // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<int>                                        QuantumGooCapacityPerLevel;                               // 0x0058(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.HarvestingOptimizerBuildingData
// 0x0000 (0x0020 - 0x0020)
struct FHarvestingOptimizerBuildingData : public FOutpostBuildingData
{

};

// ScriptStruct FortniteGame.StorageVaultBuildingData
// 0x0010 (0x0030 - 0x0020)
struct FStorageVaultBuildingData : public FOutpostBuildingData
{
	TArray<int>                                        ItemCapacityPerLevel;                                     // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.OutpostUpgradesPerTheaterData
// 0x0010
struct FOutpostUpgradesPerTheaterData
{
	int                                                TheaterSlot;                                              // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UDataTable*                                  OutpostUpgradesData;                                      // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.OutpostPrestigeEffects
// 0x0010
struct FOutpostPrestigeEffects
{
	TArray<class UClass*>                              EnemyPrestigeEffect;                                      // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.OutpostPrestigeEffectsPerTheater
// 0x0018
struct FOutpostPrestigeEffectsPerTheater
{
	int                                                TheaterSlot;                                              // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FOutpostPrestigeEffects                     PrestigeEffects;                                          // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.OutpostPOSTBoost
// 0x0010
struct FOutpostPOSTBoost
{
	struct FCurveTableRowHandle                        PlayerStructureHealthModPerPOSTLevel;                     // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.OutpostPOSTPerTheaterData
// 0x0018
struct FOutpostPOSTPerTheaterData
{
	int                                                TheaterSlot;                                              // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FOutpostPOSTBoost                           POSTData;                                                 // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.OutpostUpgradeAndPrestigeBuildingData
// 0x0068 (0x0088 - 0x0020)
struct FOutpostUpgradeAndPrestigeBuildingData : public FOutpostBuildingData
{
	int                                                MaxPrestigeLevel;                                         // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UDataTable*                                  DefaultOutpostBuildingUpgradeData;                        // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FOutpostUpgradesPerTheaterData>      PerTheaterOutpostBuildingUpgradeData;                     // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FOutpostPrestigeEffects                     DefaultPrestigeData;                                      // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TArray<struct FOutpostPrestigeEffectsPerTheater>   PrestigePerTheaterData;                                   // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FOutpostPOSTBoost                           DefaultPOSTData;                                          // 0x0060(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TArray<struct FOutpostPOSTPerTheaterData>          POSTPerTheaterData;                                       // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	class UClass*                                      POSTBuildingGameplayEffectClass;                          // 0x0080(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.MyFortCategoryData
// 0x0058
struct FMyFortCategoryData
{
	struct FText                                       CategoryName;                                             // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FGameplayTag                                TooltipTag;                                               // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FGameplayTagContainer                       ModifiedTagContainer;                                     // 0x0020(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	bool                                               bIsCore;                                                  // 0x0040(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	TArray<struct FGameplayAttribute>                  Attributes;                                               // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortTagUIData
// 0x0398
struct FFortTagUIData
{
	struct FGameplayTag                                Tag;                                                      // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortMultiSizeBrush                         Icon;                                                     // 0x0008(0x0360) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       DisplayName;                                              // 0x0368(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0380(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.FortDifficultyOptionBudget
// 0x0030
struct FFortDifficultyOptionBudget
{
	struct FGameplayTagContainer                       BudgetTypeTags;                                           // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FCurveTableRowHandle                        DifficultyOptionPointsCurve;                              // 0x0020(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortEncounterLockedUtility
// 0x0002
struct FFortEncounterLockedUtility
{
	TEnumAsByte<EFortAIUtility>                        Utility;                                                  // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EFortEncounterUtilityDesire>           UtilityDesire;                                            // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.MyTownWorkerPortraitData
// 0x0028
struct FMyTownWorkerPortraitData
{
	TAssetPtr<class UFortItemIconDefinition>           Portrait;                                                 // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                SelectionWeight;                                          // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.MyTownWorkerGenderData
// 0x0018
struct FMyTownWorkerGenderData
{
	TEnumAsByte<EFortCustomGender>                     Gender;                                                   // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                SelectionWeight;                                          // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FMyTownWorkerPortraitData>           PotraitData;                                              // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.MyTownWorkerPersonalityData
// 0x0050
struct FMyTownWorkerPersonalityData
{
	struct FGameplayTagContainer                       PersonalityTypeTag;                                       // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       PersonalityName;                                          // 0x0020(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                SelectionWeight;                                          // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<struct FMyTownWorkerGenderData>             GenderData;                                               // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.MyTownWorkerSetBonusData
// 0x0050
struct FMyTownWorkerSetBonusData
{
	struct FGameplayTagContainer                       SetBonusTypeTag;                                          // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       DisplayName;                                              // 0x0020(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                RequiredWorkersCount;                                     // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class UClass*                                      SetBonusEffect;                                           // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SelectionWeight;                                          // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortUIFeedback
// 0x0020
struct FFortUIFeedback
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	class USoundBase*                                  Audio;                                                    // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bLooping;                                                 // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              FadeIn;                                                   // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FadeOut;                                                  // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortUIFeedbackBlueprintOnly
// 0x0008 (0x0028 - 0x0020)
struct FFortUIFeedbackBlueprintOnly : public FFortUIFeedback
{
	struct FName                                       EditableName;                                             // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FriendCode
// 0x0020
struct FFriendCode
{
	struct FString                                     Code;                                                     // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     CodeType;                                                 // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FriendCodeLocString
// 0x0020
struct FFriendCodeLocString
{
	struct FString                                     Lang;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FString                                     Text;                                                     // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortPublicAccountInfo
// 0x0010
struct FFortPublicAccountInfo
{
	int                                                Level;                                                    // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxLevel;                                                 // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LevelXp;                                                  // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LevelXpForLevel;                                          // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortPrivateAccountInfo
// 0x0004 (0x0014 - 0x0010)
struct FFortPrivateAccountInfo : public FFortPublicAccountInfo
{
	int                                                MtxBalance;                                               // 0x0010(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortHomeBaseInfo
// 0x0040
struct FFortHomeBaseInfo
{
	struct FString                                     BannerIconId;                                             // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     BannerColorId;                                            // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FText                                       Name;                                                     // 0x0020(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	bool                                               ValidData;                                                // 0x0038(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTeamMemberInfo
// 0x0190
struct FFortTeamMemberInfo
{
	struct FUniqueNetIdRepl                            MemberUniqueId;                                           // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient)
	struct FUniqueNetIdRepl                            PartyLeaderUniqueId;                                      // 0x0018(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient)
	struct FUniqueNetIdRepl                            ConsoleUniqueId;                                          // 0x0030(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient)
	struct FText                                       PlayerName;                                               // 0x0048(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	bool                                               bPartyLeader;                                             // 0x0060(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsInZone;                                                // 0x0061(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bHasBoostXp;                                              // 0x0062(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bHasRestXp;                                               // 0x0063(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumPlayersInParty;                                        // 0x0064(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PlayerIndex;                                              // 0x0068(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortTeam>                             TeamAffiliation;                                          // 0x006C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	struct FText                                       HeroClass;                                                // 0x0070(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       HeroLevel;                                                // 0x0088(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                HeroXP;                                                   // 0x00A0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	class UFortItem*                                   HeroItem;                                                 // 0x00A8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UFortItem*>                           SelectedGadgetItems;                                      // 0x00B0(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FSlateBrush                                 HeroIcon;                                                 // 0x00C0(0x0090) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortHomeBaseInfo                           HomeBaseInfo;                                             // 0x0150(0x0040) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.FortRequirementsInfo
// 0x0040
struct FFortRequirementsInfo
{
	int                                                CommanderLevel;                                           // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                PersonalPowerRating;                                      // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                PartyPowerRating;                                         // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UFortQuestItemDefinition*                    ActiveQuestDefinition;                                    // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UFortQuestItemDefinition*                    QuestDefinition;                                          // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FDataTableRowHandle                         ObjectiveStatHandle;                                      // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UFortQuestItemDefinition*                    UncompletedQuestDefinition;                               // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UFortItemDefinition*                         ItemDefinition;                                           // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortMissionAlertRequirementsInfo
// 0x0048
struct FFortMissionAlertRequirementsInfo
{
	EFortMissionAlertCategory                          Category;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FFortRequirementsInfo                       Requirements;                                             // 0x0008(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortTheaterMissionWeight
// 0x0028
struct FFortTheaterMissionWeight
{
	TAssetPtr<class UClass>                            MissionGenerator;                                         // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              Weight;                                                   // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTheaterDifficultyWeight
// 0x0028
struct FFortTheaterDifficultyWeight
{
	struct FDataTableRowHandle                         DifficultyInfo;                                           // 0x0000(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FString                                     LootTierGroup;                                            // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	float                                              Weight;                                                   // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTheaterMapMissionData
// 0x0030
struct FFortTheaterMapMissionData
{
	TArray<struct FFortTheaterMissionWeight>           MissionWeights;                                           // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FFortTheaterDifficultyWeight>        DifficultyWeights;                                        // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                NumMissionsAvailable;                                     // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                NumMissionsToChange;                                      // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MissionChangeFrequency;                                   // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTheaterColorInfo
// 0x0030
struct FFortTheaterColorInfo
{
	bool                                               bUseDifficultyToDetermineColor;                           // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FSlateColor                                 Color;                                                    // 0x0008(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortMissionAlertRuntimeData
// 0x0003
struct FFortMissionAlertRuntimeData
{
	EFortMissionAlertCategory                          MissionAlertCategory;                                     // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bRespectTileRequirements;                                 // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bAllowQuickplay;                                          // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortTheaterRuntimeData
// 0x04B0
struct FFortTheaterRuntimeData
{
	EFortTheaterType                                   TheaterType;                                              // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TheaterTags;                                              // 0x0008(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FFortRequirementsInfo                       TheaterVisibilityRequirements;                            // 0x0028(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FFortRequirementsInfo                       Requirements;                                             // 0x0068(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	ESubGame                                           RequiredSubGameForVisibility;                             // 0x00A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bOnlyMatchLinkedQuestsToTiles;                            // 0x00A9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00AA(0x0006) MISSED OFFSET
	class UClass*                                      WorldMapPinClass;                                         // 0x00B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTexture2D*                                  TheaterImage;                                             // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FFortMultiSizeBrush                         TheaterImages;                                            // 0x00C0(0x0360) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FFortTheaterColorInfo                       TheaterColorInfo;                                         // 0x0420(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FName                                       Socket;                                                   // 0x0450(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FFortRequirementsInfo                       MissionAlertRequirements;                                 // 0x0458(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TArray<struct FFortMissionAlertRuntimeData>        MissionAlertCategoryRequirements;                         // 0x0498(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              HighestDifficulty;                                        // 0x04A8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortLinkedQuest
// 0x0018
struct FFortLinkedQuest
{
	class UFortQuestItemDefinition*                    QuestDefinition;                                          // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FDataTableRowHandle                         ObjectiveStatHandle;                                      // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.FortTheaterMapTileData
// 0x00C8
struct FFortTheaterMapTileData
{
	EFortTheaterMapTileType                            TileType;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TAssetPtr<class UClass>                            ZoneTheme;                                                // 0x0008(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortRequirementsInfo                       Requirements;                                             // 0x0028(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TArray<struct FFortLinkedQuest>                    LinkedQuests;                                             // 0x0068(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	int                                                XCoordinate;                                              // 0x0078(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                YCoordinate;                                              // 0x007C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FFortTheaterMissionWeight>           MissionWeightOverrides;                                   // 0x0080(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<struct FFortTheaterDifficultyWeight>        DifficultyWeightOverrides;                                // 0x0090(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	bool                                               CanBeMissionAlert;                                        // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TileTags;                                                 // 0x00A8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_EditConst)
};

// ScriptStruct FortniteGame.FortTheaterMapRegionData
// 0x00E8
struct FFortTheaterMapRegionData
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_EditConst)
	struct FGameplayTagContainer                       RegionTags;                                               // 0x0018(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_EditConst)
	TArray<int>                                        TileIndices;                                              // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst)
	TAssetPtr<class USlateBrushAsset>                  RegionThemeIcon;                                          // 0x0048(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_EditConst)
	struct FFortTheaterMapMissionData                  MissionData;                                              // 0x0068(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FFortRequirementsInfo                       Requirements;                                             // 0x0098(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TArray<struct FFortMissionAlertRequirementsInfo>   MissionAlertRequirements;                                 // 0x00D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortTheaterMapData
// 0x0540
struct FFortTheaterMapData
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FString                                     UniqueId;                                                 // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst)
	int                                                TheaterSlot;                                              // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bIsTestTheater;                                           // 0x002C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	struct FString                                     RequiredEventFlag;                                        // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0040(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       ThreatDisplayName;                                        // 0x0058(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FFortTheaterRuntimeData                     RuntimeInfo;                                              // 0x0070(0x04B0) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TArray<struct FFortTheaterMapTileData>             Tiles;                                                    // 0x0520(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst)
	TArray<struct FFortTheaterMapRegionData>           Regions;                                                  // 0x0530(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst)
};

// ScriptStruct FortniteGame.FortMissionAlertAvailableData
// 0x0008
struct FFortMissionAlertAvailableData
{
	EFortMissionAlertCategory                          MissionAlertCategory;                                     // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                NumMissionAlertsAvailable;                                // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortTheaterMapMissionAlertData
// 0x0020
struct FFortTheaterMapMissionAlertData
{
	int                                                NumMissionAlertsAvailable;                                // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FFortMissionAlertAvailableData>      AvailabilityDataPerCategory;                              // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              MissionAlertChangeFrequency;                              // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortEditorTheaterMapRegionColor
// 0x0018
struct FFortEditorTheaterMapRegionColor
{
	class UFortRegionInfo*                             Region;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FLinearColor                                RegionColor;                                              // 0x0008(0x0010) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortTheaterTileEditorData
// 0x00B8
struct FFortTheaterTileEditorData
{
	int                                                XCoordinate;                                              // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                YCoordinate;                                              // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      ZoneTheme;                                                // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UFortRegionInfo*                             Region;                                                   // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FFortRequirementsInfo                       Requirements;                                             // 0x0018(0x0040) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<struct FFortLinkedQuest>                    LinkedQuests;                                             // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	EFortTheaterMapTileType                            TileType;                                                 // 0x0068(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TileTags;                                                 // 0x0070(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<struct FFortTheaterMissionWeight>           MissionWeightOverrides;                                   // 0x0090(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FFortTheaterDifficultyWeight>        DifficultyWeightOverrides;                                // 0x00A0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	bool                                               bCanBeMissionAlert;                                       // 0x00B0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortWindImpulseRadius
// 0x004C
struct FFortWindImpulseRadius
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrentRadius;                                            // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PreviousRadius;                                           // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Magnitude;                                                // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrentMagnitude;                                         // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PreviousMagnitude;                                        // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlendTime;                                                // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrentBlendTime;                                         // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBox                                        WorldBounds;                                              // 0x002C(0x001C) (CPF_IsPlainOldData)
	struct FFortWindImpulseHandle                      Handle;                                                   // 0x0048(0x0004) (CPF_Transient)
};

// ScriptStruct FortniteGame.FortWindImpulseCylinderDelta
// 0x0090
struct FFortWindImpulseCylinderDelta
{
	struct FVector                                     DeltaCenter;                                              // 0x0000(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	bool                                               bInitialized;                                             // 0x000C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bRippleOutward;                                           // 0x000D(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	float                                              SectionWidth;                                             // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              InnerSectionRadius;                                       // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              OuterSectionRadius;                                       // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              MaximumRadius;                                            // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              DesiredOverallBlendTime;                                  // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              SectionBlendTime;                                         // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              SectionCurrentBlendTime;                                  // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              PreviousMagnitude;                                        // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              SectionCurrentMagnitude;                                  // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              DesiredMagnitude;                                         // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FBox                                        OuterWorldBounds;                                         // 0x0038(0x001C) (CPF_Transient, CPF_IsPlainOldData)
	struct FBox                                        InnerWorldBounds;                                         // 0x0054(0x001C) (CPF_Transient, CPF_IsPlainOldData)
	struct FBox                                        WindImpulseBounds;                                        // 0x0070(0x001C) (CPF_Transient, CPF_IsPlainOldData)
	struct FFortWindImpulseHandle                      WindImpulseHandleToModify;                                // 0x008C(0x0004) (CPF_Transient)
};

// ScriptStruct FortniteGame.FortWindImpulseCylinderRadial
// 0x003C
struct FFortWindImpulseCylinderRadial
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              InnerRadius;                                              // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OuterRadius;                                              // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Magnitude;                                                // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBox                                        WorldBounds;                                              // 0x0018(0x001C) (CPF_IsPlainOldData)
	bool                                               bIsChanging;                                              // 0x0034(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsChangePending;                                         // 0x0035(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
	struct FFortWindImpulseHandle                      Handle;                                                   // 0x0038(0x0004) (CPF_Transient)
};

// ScriptStruct FortniteGame.FortWindImpulseCylinder
// 0x000C (0x0048 - 0x003C)
struct FFortWindImpulseCylinder : public FFortWindImpulseCylinderRadial
{
	struct FVector                                     WindDirection;                                            // 0x003C(0x000C) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.WindScalarMaterialInterpolationData
// 0x0018
struct FWindScalarMaterialInterpolationData
{
	struct FName                                       MaterialParameterName;                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaterialParameterIndex;                                   // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LerpFromValue;                                            // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LerpToValue;                                              // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.WindVectorMaterialInterpolationData
// 0x0030
struct FWindVectorMaterialInterpolationData
{
	struct FName                                       MaterialParameterName;                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaterialParameterIndex;                                   // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                LerpFromValue;                                            // 0x000C(0x0010) (CPF_IsPlainOldData)
	struct FLinearColor                                LerpToValue;                                              // 0x001C(0x0010) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMaterialParameterID
// 0x0010
struct FFortMaterialParameterID
{
	int                                                VariableIndex;                                            // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       VariableName;                                             // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortWindMaterialParameterPairID
// 0x0028
struct FFortWindMaterialParameterPairID
{
	int                                                PairIndex;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FFortMaterialParameterID                    SpeedParameter;                                           // 0x0008(0x0010)
	struct FFortMaterialParameterID                    OffsetParameter;                                          // 0x0018(0x0010)
};

// ScriptStruct FortniteGame.FortWindMaterialData
// 0x0048
struct FFortWindMaterialData
{
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    IntenseStateMID;                                          // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaterialParameterPairIndices;                             // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                WindVectorParameterIndex;                                 // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FWindScalarMaterialInterpolationData> ScalarInterpolationData;                                  // 0x0018(0x0010) (CPF_ZeroConstructor)
	TArray<struct FWindVectorMaterialInterpolationData> VectorInterpolationData;                                  // 0x0028(0x0010) (CPF_ZeroConstructor)
	TArray<struct FFortWindMaterialParameterPairID>    ParametersToSet;                                          // 0x0038(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortWindResponderMaterialVariablePairData
// 0x0028
struct FFortWindResponderMaterialVariablePairData
{
	float                                              PreviousSpeed;                                            // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PreviousOffset;                                           // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaterialsPreviousTime;                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DeltaTimeModifiedByMaterialSpeed;                         // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaterialVariableIndex;                                    // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FName                                       SpeedVariableName;                                        // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TimeOffsetVariableName;                                   // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortWindResponder
// 0x0098
struct FFortWindResponder
{
	class ABuildingSMActor*                            WindUpdatingBuildingSMActor;                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UCurveLinearColor*                           WindSpeedCurve;                                           // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UCurveLinearColor*                           WindPannerSpeedCurve;                                     // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class USoundBase*                                  WindAudio;                                                // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<class UMaterialInterface*>                  MildWindMaterialInstances;                                // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<class UMaterialInterface*>                  IntenseWindMaterialInstances;                             // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FFortWindMaterialData>               MaterialsData;                                            // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	int                                                MaterialParameterPairIndices;                             // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FFortWindResponderMaterialVariablePairData> PairedVariablesData;                                      // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x0068(0x001C) MISSED OFFSET
	float                                              WindSpeed;                                                // 0x0084(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bNeedsInitialization;                                     // 0x0088(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bInitialized;                                             // 0x0089(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xE];                                       // 0x008A(0x000E) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortObjectiveEntry
// 0x0050
struct FFortObjectiveEntry
{
	TAssetPtr<class UClass>                            ObjectiveRef;                                             // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	class UFortBadgeItemDefinition*                    ObjectiveRewardBadge;                                     // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EFortObjectiveRequirement>             MissionRequirement;                                       // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // 0x0030(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortObjectiveBlock
// 0x0010
struct FFortObjectiveBlock
{
	TArray<struct FFortObjectiveEntry>                 ObjectiveEntries;                                         // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortMissionPlacementFoundationItem
// 0x0070
struct FFortMissionPlacementFoundationItem
{
	struct FGameplayTagContainer                       ItemIdentifyingTags;                                      // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       TagsToAddToChosenPlacementActorOrFoundationActor;         // 0x0020(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	class UEnvQuery*                                   PlacementQuery;                                           // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TAssetPtr<class UClass>                            BuildingFoundationToPlace;                                // 0x0048(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	int                                                NumLocationsToFind;                                       // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bAdjustFoundationPlacementForFloors;                      // 0x006C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionPlacementActorItem
// 0x0078
struct FFortMissionPlacementActorItem
{
	struct FGameplayTagContainer                       ItemIdentifyingTags;                                      // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       TagsToAddToChosenPlacementActor;                          // 0x0020(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	class UEnvQuery*                                   PlacementQuery;                                           // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TAssetPtr<class UClass>                            ActorToPlace;                                             // 0x0048(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	int                                                NumLocationsToFind;                                       // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bSpawnActorAutomatically;                                 // 0x006C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bShouldReserveLocations;                                  // 0x006D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bSnapToGrid;                                              // 0x006E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bAdjustPlacementForFloors;                                // 0x006F(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bDontCreateSpawnRiftsNearby;                              // 0x0070(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionPlacementItems
// 0x0040
struct FFortMissionPlacementItems
{
	struct FGameplayTagContainer                       TagsToAddToChosenPlacementActors;                         // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<struct FFortMissionPlacementFoundationItem> AdditionalWorldFoundations;                               // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FFortMissionPlacementActorItem>      ActorsAndLocations;                                       // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortFinderProperty
// 0x0018
struct FFortFinderProperty
{
	class UProperty*                                   Property;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Value;                                                    // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortPlacementActorFinderEntry
// 0x00B0
struct FFortPlacementActorFinderEntry
{
	TAssetPtr<class UClass>                            BuildingToSpawn;                                          // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	class UClass*                                      BuildingClassToFind;                                      // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	TArray<class UClass*>                              BuildingClassesToFind;                                    // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       RequiredTags;                                             // 0x0038(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       PreferredTags;                                            // 0x0058(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       ExlusionTags;                                             // 0x0078(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TArray<struct FFortFinderProperty>                 RequiredProperties;                                       // 0x0098(0x0010) (CPF_ZeroConstructor)
	bool                                               bIgnoreCollisionCheck;                                    // 0x00A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bSnapToGrid;                                              // 0x00A9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00AA(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPlacementActorFinderInfo
// 0x0018
struct FFortPlacementActorFinderInfo
{
	float                                              DistanceRangeMin;                                         // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DistanceRangeMax;                                         // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FFortPlacementActorFinderEntry>      BuildingData;                                             // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortMissionPopupWidgetData
// 0x01E8
struct FFortMissionPopupWidgetData
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	bool                                               bShowDescription;                                         // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0020(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FSlateBrush                                 DescriptionIcon;                                          // 0x0038(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FSlateBrush                                 AvailableIcon;                                            // 0x00C8(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FSlateBrush                                 UnavailableIcon;                                          // 0x0158(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortEncounterProfile
// 0x0058
struct FFortEncounterProfile
{
	TAssetPtr<class UFortDifficultyOptionSetEncounter> EncounterOptions;                                         // 0x0000(0x0020) (CPF_Edit)
	TArray<class UFortDifficultyOptionCategoryEncounter*> OverrideCategories;                                       // 0x0020(0x0010) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	bool                                               bShouldReselectOptionsPerInstance;                        // 0x0030(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       EncounterTypeTags;                                        // 0x0038(0x0020) (CPF_Edit)
};

// ScriptStruct FortniteGame.FortEncounterSequenceSettings
// 0x0038
struct FFortEncounterSequenceSettings
{
	struct FFortEncounterTransitionSettings            TransitionSettings;                                       // 0x0000(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FFortEncounterProfile>               EncounterSequence;                                        // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       SequenceTags;                                             // 0x0018(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortMissionTaggedRewards
// 0x0018
struct FFortMissionTaggedRewards
{
	struct FGameplayTag                                Tag;                                                      // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TArray<TAssetPtr<class UFortWorldItemDefinition>>  WorldItemDefinitions;                                     // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortTimeOfDayTheme
// 0x0040
struct FFortTimeOfDayTheme
{
	TArray<class UFortTimeOfDayCollection*>            TimeOfDayCollections;                                     // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<TAssetPtr<class UClass>>                    AdditionalTimeOfDayManagers;                              // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<TAssetPtr<class UClass>>                    ProhibitedTimeOfDayManagers;                              // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<TAssetPtr<class UClass>>                    ValidTimeOfDayManagers;                                   // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FortniteGame.FortWindIntensityAndDirection
// 0x0008
struct FFortWindIntensityAndDirection
{
	float                                              WindIntensity;                                            // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WindHeading;                                              // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortGlobalWindInfo
// 0x0018
struct FFortGlobalWindInfo
{
	TArray<struct FFortWindIntensityAndDirection>      ValidWindInfos;                                           // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                WindIndex;                                                // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.MissionPerDifficultyProperties
// 0x0068
struct FMissionPerDifficultyProperties
{
	TArray<struct FDataTableRowHandle>                 ValidDifficulties;                                        // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FFortTimeOfDayTheme                         OverrideTimeOfDayTheme;                                   // 0x0010(0x0040) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FFortGlobalWindInfo                         OverrideGlobalWindInfo;                                   // 0x0050(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortMissionConfigDataBucket
// 0x0028
struct FFortMissionConfigDataBucket
{
	struct FGameplayTag                                Tag;                                                      // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TAssetPtr<class UClass>                            ConfigDataClass;                                          // 0x0008(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortMissionConfigDataParams
// 0x0010
struct FFortMissionConfigDataParams
{
	TArray<struct FFortMissionConfigDataBucket>        ConfigParams;                                             // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.ZoneLoadingScreenHeadingConfig
// 0x0038
struct FZoneLoadingScreenHeadingConfig
{
	class UTexture2D*                                  HeadingImage;                                             // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       Heading;                                                  // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       HeadingDescription;                                       // 0x0020(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.ZoneLoadingScreenConfig
// 0x0108
struct FZoneLoadingScreenConfig
{
	TAssetPtr<class UTexture2D>                        BackgroundImage;                                          // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FText                                       TitleDescription;                                         // 0x0020(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FText                                       Title;                                                    // 0x0038(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FZoneLoadingScreenHeadingConfig             Headings[0x3];                                            // 0x0050(0x0038) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<class UFortTips*>                           LoadingTips;                                              // 0x00F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.MissionGenerationInfo
// 0x0050
struct FMissionGenerationInfo
{
	int                                                NumMissionsRequired;                                      // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FGameplayTagQuery                           MissionTagRequirements;                                   // 0x0008(0x0048) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.PerDifficultyMissionGenerationInfo
// 0x0020
struct FPerDifficultyMissionGenerationInfo
{
	struct FDataTableRowHandle                         MaxDifficulty;                                            // 0x0000(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<struct FMissionGenerationInfo>              MissionGenerationInfos;                                   // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortPossibleMission
// 0x0030
struct FFortPossibleMission
{
	TAssetPtr<class UFortMissionInfo>                  MissionInfo;                                              // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              Weight;                                                   // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                MinAlwaysGenerated;                                       // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bIsPrototype;                                             // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionInfoOption
// 0x0028
struct FFortMissionInfoOption
{
	TAssetPtr<class UFortMissionInfo>                  MissionInfo;                                              // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              MinDifficultyLevel;                                       // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPlayerSpawnPadPlacementData
// 0x0050
struct FFortPlayerSpawnPadPlacementData
{
	class UEnvQuery*                                   PlacementQuery;                                           // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TAssetPtr<class UClass>                            ActorToPlace;                                             // 0x0008(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	bool                                               bSnapToGrid;                                              // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bAdjustPlacementForFloors;                                // 0x0029(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	struct FGameplayTagContainer                       TagsToAddToChosenPlacementActor;                          // 0x0030(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortAvailableMissionData
// 0x00A0
struct FFortAvailableMissionData
{
	struct FString                                     MissionGuid;                                              // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FMcpLootResult                              MissionRewards;                                           // 0x0010(0x0020)
	struct FMcpLootResult                              BonusMissionRewards;                                      // 0x0030(0x0020)
	TAssetPtr<class UClass>                            MissionGenerator;                                         // 0x0050(0x0020)
	struct FDataTableRowHandle                         MissionDifficultyInfo;                                    // 0x0070(0x0010)
	int                                                TileIndex;                                                // 0x0080(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FDateTime                                   AvailableUntil;                                           // 0x0088(0x0008)
	TArray<class UFortItemDefinition*>                 ItemDefinitionRefCache;                                   // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FortniteGame.FortAvailableTheaterMissions
// 0x0028
struct FFortAvailableTheaterMissions
{
	struct FString                                     TheaterId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FFortAvailableMissionData>           AvailableMissions;                                        // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FDateTime                                   NextRefresh;                                              // 0x0020(0x0008)
};

// ScriptStruct FortniteGame.FortAvailableMissionAlertData
// 0x0098
struct FFortAvailableMissionAlertData
{
	struct FString                                     CategoryName;                                             // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     SpreadDataName;                                           // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FString                                     MissionAlertGuid;                                         // 0x0020(0x0010) (CPF_ZeroConstructor)
	int                                                TileIndex;                                                // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FDateTime                                   AvailableUntil;                                           // 0x0038(0x0008)
	struct FDateTime                                   RefreshSpreadAt;                                          // 0x0040(0x0008)
	struct FMcpLootResult                              MissionAlertRewards;                                      // 0x0048(0x0020)
	struct FMcpLootResult                              MissionAlertModifiers;                                    // 0x0068(0x0020)
	TArray<class UFortItemDefinition*>                 ItemDefinitionRefCache;                                   // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FortniteGame.FortAvailableMissionAlerts
// 0x0028
struct FFortAvailableMissionAlerts
{
	struct FString                                     TheaterId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FFortAvailableMissionAlertData>      AvailableMissionAlerts;                                   // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FDateTime                                   NextRefresh;                                              // 0x0020(0x0008)
};

// ScriptStruct FortniteGame.FortClientAnnouncementData_ZoneModifiers
// 0x000F (0x0010 - 0x0001)
struct FFortClientAnnouncementData_ZoneModifiers : public FFortClientAnnouncementData
{
	TArray<class UFortGameplayModifierItemDefinition*> Modifiers;                                                // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortHighlightColors
// 0x0030
struct FFortHighlightColors
{
	struct FLinearColor                                OutlineColor;                                             // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                SceneModulationColor1;                                    // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                SceneModulationColor2;                                    // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortHighlightColorsContainer
// 0x0060
struct FFortHighlightColorsContainer
{
	struct FFortHighlightColors                        ValidHighlight;                                           // 0x0000(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortHighlightColors                        InvalidHighlight;                                         // 0x0030(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.FortReplicatedStatMapping
// 0x0020
struct FFortReplicatedStatMapping
{
	EStatCategory                                      StatCategory;                                             // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.KeybindIcon
// 0x0378
struct FKeybindIcon
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortMultiSizeBrush                         Brush;                                                    // 0x0018(0x0360) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.SubGameInfo
// 0x0010
struct FSubGameInfo
{
	class UFortTokenType*                              AccessToken;                                              // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               RequiredFullInstall;                                      // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.SoundPerResourceLevel
// 0x0030
struct FSoundPerResourceLevel
{
	class USoundBase*                                  Sounds[0x6];                                              // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortQuestPackInfo
// 0x0030
struct FFortQuestPackInfo
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     DefaultQuestPack;                                         // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                MaxActiveDailyQuests;                                     // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxRerollsPerDay;                                         // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsStreamingQuestPack;                                     // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.ConditionalFoundationQuotaTier
// 0x0018
struct FConditionalFoundationQuotaTier
{
	TArray<class UClass*>                              FoundationClasses;                                        // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                MinFoundations;                                           // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxFoundations;                                           // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.ConditionalFoundationQuota
// 0x0010
struct FConditionalFoundationQuota
{
	TArray<struct FConditionalFoundationQuotaTier>     Tiers;                                                    // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.SettingsHUDVisibilityAndText
// 0x0038
struct FSettingsHUDVisibilityAndText
{
	struct FGameplayTag                                HUDVisibilityGameplayTag;                                 // 0x0000(0x0008) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FText                                       DisplayText;                                              // 0x0008(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FText                                       ToolTipText;                                              // 0x0020(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.ItemDefinitionAndCount
// 0x0028
struct FItemDefinitionAndCount
{
	int                                                Count;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TAssetPtr<class UFortItemDefinition>               ItemDefinition;                                           // 0x0008(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.FortAbilityTagRelationship
// 0x0048
struct FFortAbilityTagRelationship
{
	struct FGameplayTag                                AbilityTag;                                               // 0x0000(0x0008) (CPF_Edit)
	struct FGameplayTagContainer                       AbilityTagsToBlock;                                       // 0x0008(0x0020) (CPF_Edit)
	struct FGameplayTagContainer                       AbilityTagsToCancel;                                      // 0x0028(0x0020) (CPF_Edit)
};

// ScriptStruct FortniteGame.UISoundFeedback
// 0x0008
struct FUISoundFeedback
{
	class USoundBase*                                  UISound;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.TieredWaveSetData
// 0x0120
struct FTieredWaveSetData
{
	int                                                EDOIdx;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              BreatherBetweenWaves;                                     // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	EWaveRules                                         WaveRules;                                                // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              WaveLengthMod;                                            // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              NumKillsMod;                                              // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              KillPointsMod;                                            // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              DifficultyAddMod;                                         // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TAssetPtr<class UClass>                            OverrideSpawnPointsMultiplier;                            // 0x0020(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TAssetPtr<class UClass>                            OverrideSpawnProgression;                                 // 0x0040(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TAssetPtr<class UClass>                            OverrideUtilitiesAdjustment;                              // 0x0060(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TAssetPtr<class UClass>                            OverrideUtilitiesFree;                                    // 0x0080(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TAssetPtr<class UClass>                            OverrideUtilitiesLocked;                                  // 0x00A0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TAssetPtr<class UClass>                            OverrideDistance;                                         // 0x00C0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TAssetPtr<class UClass>                            OverrideDirectionNumber;                                  // 0x00E0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TAssetPtr<class UClass>                            OverrideModifierTags;                                     // 0x0100(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.ChoiceDataEntry
// 0x0050
struct FChoiceDataEntry
{
	struct FText                                       ButtonText;                                               // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       ButtonDescription;                                        // 0x0018(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       ConfirmText;                                              // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               bEnabled;                                                 // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRequireConfirmation;                                     // 0x0049(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCloseAfterSelection;                                     // 0x004A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x004B(0x0005) MISSED OFFSET
};

// ScriptStruct FortniteGame.ChoiceData
// 0x0030
struct FChoiceData
{
	int                                                MenuIdentifier;                                           // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bShowCloseButton;                                         // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FText                                       Title;                                                    // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FChoiceDataEntry>                    Items;                                                    // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortDialogDescription
// 0x0170
struct FFortDialogDescription
{
	struct FSlateBrush                                 Icon;                                                     // 0x0000(0x0090) (CPF_BlueprintVisible)
	struct FText                                       MessageHeader;                                            // 0x0090(0x0018) (CPF_BlueprintVisible)
	struct FText                                       MessageBody;                                              // 0x00A8(0x0018) (CPF_BlueprintVisible)
	struct FText                                       AcceptButtonText;                                         // 0x00C0(0x0018) (CPF_BlueprintVisible)
	struct FText                                       IgnoreButtonText;                                         // 0x00D8(0x0018) (CPF_BlueprintVisible)
	struct FText                                       DismissButtonText;                                        // 0x00F0(0x0018) (CPF_BlueprintVisible)
	float                                              DisplayTime;                                              // 0x0108(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	class UUserWidget*                                 AdditionalContent;                                        // 0x0110(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	EFortDialogFeedbackType                            FeedBackType;                                             // 0x0118(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Dismissable;                                              // 0x0119(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	class UFortNotificationHandler*                    NotificationHandler;                                      // 0x0120(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x48];                                      // 0x0128(0x0048) MISSED OFFSET
};

// ScriptStruct FortniteGame.ViewOffsetData
// 0x0024
struct FViewOffsetData
{
	struct FVector                                     OffsetHigh;                                               // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     OffsetMid;                                                // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     OffsetLow;                                                // 0x0018(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.PenetrationAvoidanceFeeler
// 0x0020
struct FPenetrationAvoidanceFeeler
{
	struct FRotator                                    AdjustmentRot;                                            // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              WorldWeight;                                              // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PawnWeight;                                               // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Extent;                                                   // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TraceInterval;                                            // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                FramesUntilNextTrace;                                     // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.InterpOffsetData
// 0x001C
struct FInterpOffsetData
{
	struct FVector                                     ViewOffset;                                               // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     LargeBodyTypeAddtnlOffset;                                // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              PitchAngle;                                               // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.InterpOffset
// 0x0010
struct FInterpOffset
{
	TArray<struct FInterpOffsetData>                   SamplePoints;                                             // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.ReplicatedAthenaVehicleState
// 0x000C
struct FReplicatedAthenaVehicleState
{
	struct FVector                                     ForwardVectorTarget;                                      // 0x0000(0x000C) (CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortMiniMapData
// 0x0080
struct FFortMiniMapData
{
	class UTexture2D*                                  MiniMapIcon;                                              // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	struct FVector2D                                   IconScale;                                                // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_SaveGame, CPF_IsPlainOldData)
	unsigned char                                      bUseIconSize : 1;                                         // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_SaveGame)
	unsigned char                                      bIsVisible : 1;                                           // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_SaveGame)
	unsigned char                                      bIsVisibleOnMiniMap : 1;                                  // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_SaveGame)
	unsigned char                                      bShowVerticalOffset : 1;                                  // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_SaveGame)
	unsigned char                                      bAllowLocalOverrides : 1;                                 // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_SaveGame)
	unsigned char                                      bUseTeamAffiliationColors : 1;                            // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_SaveGame)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0014(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_SaveGame, CPF_IsPlainOldData)
	struct FLinearColor                                FriendColor;                                              // 0x0024(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_SaveGame, CPF_IsPlainOldData)
	struct FLinearColor                                EnemyColor;                                               // 0x0034(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_SaveGame, CPF_IsPlainOldData)
	struct FLinearColor                                NeutralColor;                                             // 0x0044(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_SaveGame, CPF_IsPlainOldData)
	struct FLinearColor                                PulseColor;                                               // 0x0054(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_SaveGame, CPF_IsPlainOldData)
	float                                              ColorPulsesPerSecond;                                     // 0x0064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	float                                              SizePulsesPerSecond;                                      // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	float                                              ViewableDistance;                                         // 0x006C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x0070(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_SaveGame, CPF_IsPlainOldData)
	int                                                Priority;                                                 // 0x007C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortSafeZoneDefinition
// 0x0110
struct FFortSafeZoneDefinition
{
	struct FScalableFloat                              Radius;                                                   // 0x0000(0x0028) (CPF_Edit)
	struct FScalableFloat                              RejectRadius;                                             // 0x0028(0x0028) (CPF_Edit)
	struct FScalableFloat                              WaitTime;                                                 // 0x0050(0x0028) (CPF_Edit)
	struct FScalableFloat                              ShrinkTime;                                               // 0x0078(0x0028) (CPF_Edit)
	struct FScalableFloat                              SupplyDropMinCount;                                       // 0x00A0(0x0028) (CPF_Edit)
	struct FScalableFloat                              SupplyDropMaxCount;                                       // 0x00C8(0x0028) (CPF_Edit)
	unsigned char                                      UnknownData00[0x20];                                      // 0x00F0(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.AthenaCarPlayerSlot
// 0x0020
struct FAthenaCarPlayerSlot
{
	struct FName                                       SeatSocket;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FName>                               ExitSockets;                                              // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class APawn*                                       Player;                                                   // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.TieredCollectionProgressionDataBase
// 0x0001
struct FTieredCollectionProgressionDataBase
{
	ECollectionSelectionMethod                         SelectionMethod;                                          // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.TieredNamedCollectionProgressionData
// 0x0017 (0x0018 - 0x0001)
struct FTieredNamedCollectionProgressionData : public FTieredCollectionProgressionDataBase
{
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FName>                               CollectionNames;                                          // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.DifficultyRowProgression
// 0x0030
struct FDifficultyRowProgression
{
	struct FName                                       DifficultyRowName;                                        // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FScalableFloat                              AdditiveDifficultyMod;                                    // 0x0008(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.DifficultyCollectionProgressionData
// 0x0017 (0x0018 - 0x0001)
struct FDifficultyCollectionProgressionData : public FTieredCollectionProgressionDataBase
{
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FDifficultyRowProgression>           DifficultyCollections;                                    // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.RewardBadgesProgression
// 0x0010
struct FRewardBadgesProgression
{
	TArray<class UFortBadgeItemDefinition*>            RewardBadges;                                             // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.RewardBadgesCollectionProgressionData
// 0x0017 (0x0018 - 0x0001)
struct FRewardBadgesCollectionProgressionData : public FTieredCollectionProgressionDataBase
{
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FRewardBadgesProgression>            BadgeCollections;                                         // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.CollectionLootSetData
// 0x0017 (0x0018 - 0x0001)
struct FCollectionLootSetData : public FTieredCollectionProgressionDataBase
{
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FName>                               LootSetNames;                                             // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.ItemAndCount
// 0x0010
struct FItemAndCount
{
	int                                                Count;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UFortItemDefinition*                         Item;                                                     // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortCriteriaRequirementData
// 0x0018 (0x0020 - 0x0008)
struct FFortCriteriaRequirementData : public FTableRowBase
{
	struct FGameplayTag                                RequiredTag;                                              // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	bool                                               bGlobalMod;                                               // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              ModValue;                                                 // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	bool                                               bRequireRarity;                                           // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	EFortRarity                                        RequiredRarity;                                           // 0x0019(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAnalyticsEventAttribute
// 0x0020
struct FFortAnalyticsEventAttribute
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTierCollectionLayoutOutput
// 0x0050
struct FFortTierCollectionLayoutOutput
{
	struct FName                                       SpawnCollectionName;                                      // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       DifficultyRowName;                                        // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ModifierProgressionName;                                  // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AdditiveDifficultyMod;                                    // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<class UFortBadgeItemDefinition*>            RewardBadges;                                             // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FName>                               StartTierLootTierGroups;                                  // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FName>                               WaveCompleteLootTierGroups;                               // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.DistanceToTargetComparison
// 0x0030
struct FDistanceToTargetComparison
{
	bool                                               bUseOverriddenValue;                                      // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              OverriddenValue;                                          // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       DistanceDataTags;                                         // 0x0008(0x0020) (CPF_Edit)
	TEnumAsByte<EArithmeticKeyOperation>               Operator;                                                 // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETargetDistanceComparisonType>         ComparisonType;                                           // 0x0029(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteGame.AIDirectorDebugInfo
// 0x0028
struct FAIDirectorDebugInfo
{
	float                                              TimeStamp;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<float>                                      DebugGraphData;                                           // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.LastBuildableState
// 0x0010
struct FLastBuildableState
{
	class UBuildingEditModeMetadata*                   LastBuildableMetaData;                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               LastBuildableMirrored;                                    // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                LastBuildableRotationIterations;                          // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortDamageNumberInfo
// 0x0068
struct FFortDamageNumberInfo
{
	struct FVector                                     WorldLocation;                                            // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FVector                                     HitNormal;                                                // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	bool                                               bIsCriticalDamage;                                        // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                Damage;                                                   // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortDamageNumberType                              DamageNumberType;                                         // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              VisualDamageScale;                                        // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortElementalDamageType                           ElementalDamageType;                                      // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EStatCategory                                      ScoreType;                                                // 0x0029(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAttachScoreNumberToPlayer;                               // 0x002A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            MeshMIDs;                                                 // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<int>                                        DamageNumberArray;                                        // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TWeakObjectPtr<class AActor>                       DamagedActor;                                             // 0x0058(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class APawn>                        DamageCauser;                                             // 0x0060(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortRewardActivity
// 0x0078
struct FFortRewardActivity
{
	TEnumAsByte<EFortRewardActivityType>               ActivityType;                                             // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FGuid                                       ActivityGuid;                                             // 0x0004(0x0010) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FText                                       TitleText;                                                // 0x0018(0x0018)
	struct FText                                       DescriptionText;                                          // 0x0030(0x0018)
	float                                              RewardDisplayTime;                                        // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<struct FFortItemEntry>                      RewardItems;                                              // 0x0050(0x0010) (CPF_ZeroConstructor)
	TArray<struct FFortItemEntry>                      MissedRewardItems;                                        // 0x0060(0x0010) (CPF_ZeroConstructor)
	EFortCompletionResult                              ActivityCompletionResult;                                 // 0x0070(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	int                                                AdditionalCompletionMissionPoints;                        // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortRewardReport
// 0x0068
struct FFortRewardReport
{
	struct FText                                       MissionName;                                              // 0x0000(0x0018)
	struct FText                                       TheaterName;                                              // 0x0018(0x0018)
	struct FText                                       Difficulty;                                               // 0x0030(0x0018)
	float                                              DifficultyValue;                                          // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<struct FFortRewardActivity>                 RewardActivities;                                         // 0x0050(0x0010) (CPF_ZeroConstructor)
	bool                                               bIsFinalized;                                             // 0x0060(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortUpdatedObjectiveStat
// 0x0018
struct FFortUpdatedObjectiveStat
{
	class UFortQuestItemDefinition*                    Quest;                                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BackendName;                                              // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StatValue;                                                // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPersistentGameplayStatValue
// 0x0018
struct FFortPersistentGameplayStatValue
{
	struct FString                                     StatName;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                StatValue;                                                // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPersistentGameplayStatContainer
// 0x0010
struct FFortPersistentGameplayStatContainer
{
	TArray<struct FFortPersistentGameplayStatValue>    GameplayStats;                                            // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortCombatManagerEvent
// 0x0008
struct FFortCombatManagerEvent
{
	float                                              EventValue;                                               // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortCombatEvents>                     Event;                                                    // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCrackEffectData
// 0x0028
struct FFortCrackEffectData
{
	struct FVector_NetQuantizeNormal                   Normal;                                                   // 0x0000(0x000C)
	struct FVector_NetQuantize10                       Position;                                                 // 0x000C(0x000C)
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	class AFortCrackEffect*                            OldCrackEffect;                                           // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.BuildingClassData
// 0x0010
struct FBuildingClassData
{
	class UClass*                                      BuildingClass;                                            // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                PreviousBuildingLevel;                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                UpgradeLevel;                                             // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.AttributeModifierInfo
// 0x0030
struct FAttributeModifierInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	class UGameplayEffect*                             InstantGEs;                                               // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.SpawnPickupEntry
// 0x0018
struct FSpawnPickupEntry
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor)
	class UClass*                                      PickupClass;                                              // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortClientAnnouncementData_Conversation
// 0x000F (0x0010 - 0x0001)
struct FFortClientAnnouncementData_Conversation : public FFortClientAnnouncementData
{
	class UFortConversation*                           Conversation;                                             // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortAnnouncementDisplayPreference                 ConversationDisplayPreference;                            // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortClientAnnouncementData_Tutorial
// 0x0050 (0x0140 - 0x00F0)
struct FFortClientAnnouncementData_Tutorial : public FFortClientAnnouncementData_Basic
{
	float                                              AutoContinueDelay;                                        // 0x00F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	struct FText                                       NameText;                                                 // 0x00F8(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       SystemText;                                               // 0x0110(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               bButtonEnabled;                                           // 0x0128(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bLightboxEnabled;                                         // 0x0129(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bLightboxDisableInputOnly;                                // 0x012A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x012B(0x0001) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x012C(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<EVerticalAlignment>                    VAlign;                                                   // 0x013C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HAlign;                                                   // 0x013D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x013E(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortClientAnnouncementQueue
// 0x0010
struct FFortClientAnnouncementQueue
{
	TArray<class AFortClientAnnouncement*>             Announcements;                                            // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortSocialItemBasicData
// 0x0004
struct FFortSocialItemBasicData
{
	int                                                Rating;                                                   // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortEventName
// 0x0010
struct FFortEventName
{
	struct FName                                       CategoryName;                                             // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       EventName;                                                // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortClientEventName
// 0x0000 (0x0010 - 0x0010)
struct FFortClientEventName : public FFortEventName
{

};

// ScriptStruct FortniteGame.PooledDamageNumberComponents
// 0x0010
struct FPooledDamageNumberComponents
{
	TArray<class UStaticMeshComponent*>                Components;                                               // 0x0000(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FortniteGame.LiveDamageNumberComponent
// 0x0018
struct FLiveDamageNumberComponent
{
	class UStaticMeshComponent*                        Component;                                                // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortFXAnimationInfoBase
// 0x0018
struct FFortFXAnimationInfoBase
{
	class UCurveFloat*                                 LerpCurve;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSplineMeshScaleAnimationInfo
// 0x0010 (0x0028 - 0x0018)
struct FFortSplineMeshScaleAnimationInfo : public FFortFXAnimationInfoBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSplineMeshSnapAnimationInfo
// 0x0010 (0x0028 - 0x0018)
struct FFortSplineMeshSnapAnimationInfo : public FFortFXAnimationInfoBase
{
	class USplineComponent*                            TargetSpline;                                             // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSplineMeshAnimSet
// 0x0030
struct FFortSplineMeshAnimSet
{
	class USplineMeshComponent*                        SplineMesh;                                               // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<struct FFortSplineMeshScaleAnimationInfo>   ScaleAnims;                                               // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FFortSplineMeshSnapAnimationInfo>    SnapAnims;                                                // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortFloatAnimationInfo
// 0x0008 (0x0020 - 0x0018)
struct FFortFloatAnimationInfo : public FFortFXAnimationInfoBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortFloatParamAnimationInfo
// 0x0008 (0x0028 - 0x0020)
struct FFortFloatParamAnimationInfo : public FFortFloatAnimationInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortLinearColorAnimationInfo
// 0x0020 (0x0038 - 0x0018)
struct FFortLinearColorAnimationInfo : public FFortFXAnimationInfoBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0018(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortLinearColorParamAnimationInfo
// 0x0008 (0x0040 - 0x0038)
struct FFortLinearColorParamAnimationInfo : public FFortLinearColorAnimationInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortLinearColorCurveAnimationInfo
// 0x0010 (0x0028 - 0x0018)
struct FFortLinearColorCurveAnimationInfo : public FFortFXAnimationInfoBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortLinearColorCurveParamAnimationInfo
// 0x0008 (0x0030 - 0x0028)
struct FFortLinearColorCurveParamAnimationInfo : public FFortLinearColorCurveAnimationInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMIDAnimSet
// 0x0040
struct FFortMIDAnimSet
{
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<struct FFortFloatParamAnimationInfo>        FloatParamAnims;                                          // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FFortLinearColorParamAnimationInfo>  ColorParamAnims;                                          // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FFortLinearColorCurveParamAnimationInfo> ColorCurveParamAnims;                                     // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortParticleAnimSet
// 0x0020
struct FFortParticleAnimSet
{
	class UParticleSystemComponent*                    PSC;                                                      // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<struct FFortFloatParamAnimationInfo>        ParamAnims;                                               // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortLightAnimSet
// 0x0020
struct FFortLightAnimSet
{
	class ULightComponent*                             LightComp;                                                // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<struct FFortFloatAnimationInfo>             IntensityAnims;                                           // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortHexMapCoord
// 0x000C
struct FFortHexMapCoord
{
	int                                                Horizontal;                                               // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Vertical;                                                 // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Depth;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.GameDifficultyInfo
// 0x0078 (0x0080 - 0x0008)
struct FGameDifficultyInfo : public FTableRowBase
{
	int                                                ContentAccountLevel;                                      // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Difficulty;                                               // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DifficultyMatchmakingMinOverride;                         // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DifficultyMatchmakingMaxOverride;                         // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LootLevel;                                                // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RequiredRating;                                           // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PvPRating;                                                // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RecommendedRating;                                        // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScoreBonus;                                               // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     LootTierGroup;                                            // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     BonusLootTierGroup;                                       // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FText                                       ThreatDisplayName;                                        // 0x0050(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FName                                       ColorParamName;                                           // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DefaultPlayerLives;                                       // 0x0070(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FName                                       PlayerStatClampRowName;                                   // 0x0078(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortPendingSlottedItemOperation
// 0x0018
struct FFortPendingSlottedItemOperation
{
	struct FString                                     SlottedItemId;                                            // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FName                                       SlotRowName;                                              // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortSelectableRewardOption
// 0x0010
struct FFortSelectableRewardOption
{
	TArray<struct FFortItemQuantityPair>               Rewards;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortHiddenRewardQuantityPair
// 0x0010
struct FFortHiddenRewardQuantityPair
{
	struct FName                                       TemplateId;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Quantity;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortRewardInfo
// 0x0030
struct FFortRewardInfo
{
	TArray<struct FFortSelectableRewardOption>         SelectableRewards;                                        // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<struct FFortItemQuantityPair>               StandardRewards;                                          // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<struct FFortHiddenRewardQuantityPair>       HiddenRewards;                                            // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortCollectionBookRewards
// 0x0070
struct FFortCollectionBookRewards
{
	ECollectionBookRewardType                          RewardType;                                               // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       PageId;                                                   // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SectionId;                                                // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                XpRequired;                                               // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0020(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	bool                                               bIsMajorReward;                                           // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FFortRewardInfo                             Rewards;                                                  // 0x0040(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.FortCollectionBookSectionState
// 0x0018
struct FFortCollectionBookSectionState
{
	struct FString                                     Section;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
	EFortCollectionBookState                           State;                                                    // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.CombatEventData
// 0x0030
struct FCombatEventData
{
	float                                              Heat;                                                     // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxHeatContribution;                                      // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CoolDownRate;                                             // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     EventName;                                                // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FLinearColor                                DebugGraphColor;                                          // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.CombatEventMultiplier
// 0x0008
struct FCombatEventMultiplier
{
	TEnumAsByte<EFortCombatEvents>                     CombatEvent;                                              // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MaxContribution;                                          // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.CombatFactorData
// 0x0038
struct FCombatFactorData
{
	TArray<struct FCombatEventMultiplier>              ContributingCombatEvents;                                 // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	float                                              MaxValue;                                                 // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     DebugFactorName;                                          // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FLinearColor                                DebugGraphColor;                                          // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.CombatThresholdData
// 0x0028
struct FCombatThresholdData
{
	float                                              HeatLevel;                                                // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     ThresholdName;                                            // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FLinearColor                                DebugGraphColor;                                          // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.DecoPlacementState
// 0x0080
struct FDecoPlacementState
{
	struct FVector                                     Start;                                                    // 0x0000(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     End;                                                      // 0x000C(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     RawLocation;                                              // 0x0018(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x0024(0x000C) (CPF_IsPlainOldData)
	struct FQuat                                       AbsoluteRotation;                                         // 0x0030(0x0010) (CPF_IsPlainOldData)
	struct FVector                                     GridLocation;                                             // 0x0040(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     PreviousLocation;                                         // 0x004C(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     FallbackLocation;                                         // 0x0058(0x000C) (CPF_IsPlainOldData)
	TWeakObjectPtr<class AActor>                       LastHitActor;                                             // 0x0064(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class ABuildingSMActor>             CurrentBuildingActorAttachment;                           // 0x006C(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortDecoPlacementQueryResults>        CanPlaceState;                                            // 0x0074(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0075(0x000B) MISSED OFFSET
};

// ScriptStruct FortniteGame.TieredModifierSetData
// 0x0010
struct FTieredModifierSetData
{
	int                                                WaveNumber;                                               // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                ModifierDuration;                                         // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FName                                       ModifierLootTierGroup;                                    // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.ActiveGameplayModifierHandle
// 0x0004
struct FActiveGameplayModifierHandle
{
	int                                                Handle;                                                   // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortLevelStreamingInfo
// 0x0010
struct FFortLevelStreamingInfo
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortLevelStreamingState>              LevelState;                                               // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFailedToLoad;                                            // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortLootQuotaData
// 0x0020 (0x0028 - 0x0008)
struct FFortLootQuotaData : public FTableRowBase
{
	struct FName                                       QuotaCategory;                                            // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ELootQuotaLevel>                       QuotaLevel;                                               // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                Min;                                                      // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Max;                                                      // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Quota;                                                    // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinWorldLevel;                                            // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxWorldLevel;                                            // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortTileLootData
// 0x0318
struct FFortTileLootData
{
	struct FFortLootQuotaData                          LootQuotas[0x12];                                         // 0x0000(0x0028)
	int                                                LootDrops[0x12];                                          // 0x02D0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.WorldTileSubArray
// 0x0010
struct FWorldTileSubArray
{
	TArray<class AWorldTileFoundation*>                X;                                                        // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortStartingMissionInfo
// 0x0018
struct FFortStartingMissionInfo
{
	TArray<class UFortMissionInfo*>                    StartingMissions;                                         // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	bool                                               bDisableSharedMissionLoading;                             // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGeneratedMissionOption
// 0x0018
struct FFortGeneratedMissionOption
{
	class UFortDifficultyOptionCategoryMission*        MissionOptionCategory;                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      MissionOption;                                            // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RangeLerpValue;                                           // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGeneratedEncounterOption
// 0x0018
struct FFortGeneratedEncounterOption
{
	class UFortDifficultyOptionCategoryEncounter*      EncounterOptionCategory;                                  // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      EncounterOption;                                          // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RangeLerpValue;                                           // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bChangedSinceLastVLog;                                    // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortEncounterModeSettings
// 0x0004
struct FFortEncounterModeSettings
{
	TEnumAsByte<EFortEncounterPacingMode>              PacingMode;                                               // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortEncounterSpawnLocationPlacementMode> SpawnLocationMode;                                        // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortEncounterUtilitiesMode>           UtilitiesMode;                                            // 0x0002(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortEncounterSpawnLimitType>          SpawnLimitMode;                                           // 0x0003(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortGeneratedEncounterProfile
// 0x0050
struct FFortGeneratedEncounterProfile
{
	float                                              EncounterDifficultyLevel;                                 // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FFortGeneratedEncounterOption>       EncounterOptions;                                         // 0x0008(0x0010) (CPF_ZeroConstructor)
	struct FFortEncounterModeSettings                  EncounterModeSettings;                                    // 0x0018(0x0004)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       EncounterTypeTags;                                        // 0x0020(0x0020)
	int                                                DifficultyOptionPointsAvailableAtGeneration;              // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinDifficultyOptionPointsToUse;                           // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bShouldReselectOptionsPerInstance;                        // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	int                                                GeneratedEncounterIndex;                                  // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortGeneratedDifficultyOptions
// 0x0040
struct FFortGeneratedDifficultyOptions
{
	float                                              GameDifficultyAtGeneration;                               // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DifficultyOptionPointsAvailableAtGeneration;              // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxEncounterSpawnPointsAtGeneration;                      // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinDifficultyOptionPointsToUse;                           // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FFortGeneratedEncounterSequence>     GeneratedEncounterSequences;                              // 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<struct FFortGeneratedMissionOption>         MissionOptions;                                           // 0x0020(0x0010) (CPF_ZeroConstructor)
	TArray<struct FFortGeneratedEncounterProfile>      GeneratedEncounterProfiles;                               // 0x0030(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortMissionPlacementItemLookupData
// 0x0078
struct FFortMissionPlacementItemLookupData
{
	struct FGameplayTagContainer                       ItemIdentifyingTags;                                      // 0x0000(0x0020) (CPF_Transient)
	struct FGameplayTagContainer                       TagsAddedToPlacementActors;                               // 0x0020(0x0020) (CPF_Transient)
	class UClass*                                      ActorToPlace;                                             // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class AActor*                                      ActorToUseForSpawnLocation;                               // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class AActor*                                      SpawnedActor;                                             // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // 0x0058(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FRotator                                    SpawnRotation;                                            // 0x0064(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bDontCreateSpawnRiftsNearby : 1;                          // 0x0070(0x0001) (CPF_Transient)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionEntry
// 0x0088
struct FFortMissionEntry
{
	float                                              Weight;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                WorldMinLevel;                                            // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                WorldMaxLevel;                                            // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FDataTableRowHandle                         MinDifficultyInfoRow;                                     // 0x0010(0x0010) (CPF_Edit)
	class UFortMissionGenerator*                       MissionGenerator;                                         // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortMissionInfo*                            MissionInfo;                                              // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EMissionGenerationCategory>            GenerationCategory;                                       // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FFortGeneratedDifficultyOptions             GeneratedDifficultyOptions;                               // 0x0038(0x0040)
	TArray<struct FFortMissionPlacementItemLookupData> BlueprintLookupData;                                      // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FortniteGame.FortObjectiveRecord
// 0x0018
struct FFortObjectiveRecord
{
	class UClass*                                      ObjectiveClass;                                           // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<unsigned char>                              ObjectiveData;                                            // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortMissionRecord
// 0x0128
struct FFortMissionRecord
{
	struct FFortMissionEntry                           MissionEntry;                                             // 0x0000(0x0088)
	class UFortMissionGenerator*                       MissionGenerator;                                         // 0x0088(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FFortGeneratedDifficultyOptions             GeneratedMissionOptions;                                  // 0x0090(0x0040) (CPF_Transient)
	int                                                DayGenerated;                                             // 0x00D0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                UIIndex;                                                  // 0x00D4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUniqueNetIdRepl                            QuestOwnerAccount;                                        // 0x00D8(0x0018)
	EFortMissionStatus                                 MissionStatus;                                            // 0x00F0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	TArray<struct FFortObjectiveRecord>                ObjectiveRecords;                                         // 0x00F8(0x0010) (CPF_ZeroConstructor)
	TArray<unsigned char>                              MissionData;                                              // 0x0108(0x0010) (CPF_ZeroConstructor)
	struct FGuid                                       MissionGuid;                                              // 0x0118(0x0010) (CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortMissionManagerRecord
// 0x0038
struct FFortMissionManagerRecord
{
	class UClass*                                      MissionManagerClass;                                      // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FFortMissionRecord>                  MissionRecords;                                           // 0x0008(0x0010) (CPF_ZeroConstructor)
	int                                                NumRequiredMissionsOfType[0x4];                           // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<unsigned char>                              MissionManagerData;                                       // 0x0028(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortDeferredNewActorData
// 0x0010
struct FFortDeferredNewActorData
{
	class ABuildingActor*                              BuildingActor;                                            // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SavedLevelIndex;                                          // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ActorRecordIndex;                                         // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.OnTimeHitInfo
// 0x0030
struct FOnTimeHitInfo
{
	struct FScriptDelegate                             TimeCallback;                                             // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.TeamChangeRequest
// 0x0010
struct FTeamChangeRequest
{
	class AFortPlayerController*                       RequestingController;                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortTeam>                             DesiredTeam;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.AppliedHomebaseData
// 0x0030
struct FAppliedHomebaseData
{
	class UAbilitySystemComponent*                     Source;                                                   // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAbilitySystemComponent*                     Target;                                                   // 0x0008(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<struct FActiveGameplayEffectHandle>         AppliedEffects;                                           // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FFortAbilitySetHandle>               AppliedAbilitySets;                                       // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FortniteGame.ReplicatedStatValues
// 0x0008
struct FReplicatedStatValues
{
	int                                                StatValue;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ScoreValue;                                               // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortExperienceDelta
// 0x0024
struct FFortExperienceDelta
{
	int                                                Level;                                                    // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Xp;                                                       // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BaseXPEarned;                                             // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BonusXPEarned;                                            // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BoostXPEarned;                                            // 0x0010(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BoostXPMissed;                                            // 0x0014(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RestXPEarned;                                             // 0x0018(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GroupBoostXPEarned;                                       // 0x001C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortIsFinalXpUpdate                               IsFinalXpUpdate;                                          // 0x0020(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPlayerScoreReport
// 0x0288
struct FFortPlayerScoreReport
{
	struct FUniqueNetIdRepl                            PlayerID;                                                 // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FString                                     PlayerName;                                               // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TWeakObjectPtr<class AFortPlayerState>             PlayerState;                                              // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortTeam>                             PlayerTeam;                                               // 0x0030(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FReplicatedStatValues                       ReplicatedStats_Campaign[0x22];                           // 0x0034(0x0008)
	struct FReplicatedStatValues                       ReplicatedStats_Zone[0x22];                               // 0x0144(0x0008)
	int                                                InitialLevel;                                             // 0x0254(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InitialExperienceAmount;                                  // 0x0258(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortExperienceDelta                        ExperienceInfoDelta;                                      // 0x025C(0x0024)
	int                                                LastExperienceDeltaAmount;                                // 0x0280(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LastScoreDeltaAmount;                                     // 0x0284(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.EndOfDayRecap
// 0x0020
struct FEndOfDayRecap
{
	int                                                DayNumber;                                                // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TeamScoreAtStartOfDay;                                    // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TeamScoreAtEndOfDay;                                      // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FFortPlayerScoreReport>              ScoreReports;                                             // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortMissionWeightedReward
// 0x00A0
struct FFortMissionWeightedReward
{
	struct FName                                       LootTierGroup;                                            // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FSlateBrush                                 LootIcon;                                                 // 0x0008(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	float                                              Weight;                                                   // 0x0098(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionEventName
// 0x0000 (0x0010 - 0x0010)
struct FFortMissionEventName : public FFortEventName
{

};

// ScriptStruct FortniteGame.FortMissionPlacementActorPreferredTagInfo
// 0x0038
struct FFortMissionPlacementActorPreferredTagInfo
{
	struct FDataTableRowHandle                         DifficultyInfo;                                           // 0x0000(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       PlacementActorPreferredTags;                              // 0x0010(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              Difficulty;                                               // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionFocusDisplayData
// 0x0020
struct FFortMissionFocusDisplayData
{
	struct FText                                       CurrentFocusDisplayText;                                  // 0x0000(0x0018)
	float                                              CurrentFocusPercentage;                                   // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortBadgeCount
// 0x0014 (0x0020 - 0x000C)
struct FFortBadgeCount : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UFortBadgeItemDefinition*                    Badge;                                                    // 0x0010(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                Count;                                                    // 0x0018(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortBadgeCountArray
// 0x0010 (0x00C0 - 0x00B0)
struct FFortBadgeCountArray : public FFastArraySerializer
{
	TArray<struct FFortBadgeCount>                     Badges;                                                   // 0x00B0(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortMissionInstancedConfigDataBucket
// 0x0010
struct FFortMissionInstancedConfigDataBucket
{
	struct FGameplayTag                                Tag;                                                      // 0x0000(0x0008) (CPF_Transient)
	class UFortMissionConfigData*                      ConfigData;                                               // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortMissionInstancedConfigData
// 0x0010
struct FFortMissionInstancedConfigData
{
	TArray<struct FFortMissionInstancedConfigDataBucket> ConfigDataBuckets;                                        // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FortniteGame.FortMissionEvent
// 0x0098
struct FFortMissionEvent
{
	struct FName                                       EventType;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // 0x0008(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	class UObject*                                     EventFocus;                                               // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GenericInt;                                               // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GenericFloat;                                             // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       GenericText;                                              // 0x0048(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0060(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FGuid                                       MissionGuid;                                              // 0x0080(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	class UFortMissionEventParams*                     Params;                                                   // 0x0090(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortTaggedUnlockBase
// 0x0008
struct FFortTaggedUnlockBase
{
	struct FGameplayTag                                RequiredTag;                                              // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortTaggedDeployableBasePlotExpansionUnlock
// 0x0010 (0x0018 - 0x0008)
struct FFortTaggedDeployableBasePlotExpansionUnlock : public FFortTaggedUnlockBase
{
	struct FIntVector                                  CellExpansionVector;                                      // 0x0008(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTaggedDeployableBaseLootUnlock
// 0x0008 (0x0010 - 0x0008)
struct FFortTaggedDeployableBaseLootUnlock : public FFortTaggedUnlockBase
{
	struct FName                                       LootTierGroup;                                            // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.DeployableBaseSupportSettings
// 0x0080
struct FDeployableBaseSupportSettings
{
	bool                                               bUseDeployableBases;                                      // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TAssetPtr<class UFortDeployableBaseCloudSaveItemDefinition> DeployableBaseCloudSaveItemDef;                           // 0x0008(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UClass>                            DeployableBasePlot;                                       // 0x0028(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UFortDeployableBaseSkillTreeUnlocks> SupportedUnlocks;                                         // 0x0048(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	bool                                               bDeployableBasesReadOnly;                                 // 0x0068(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	EDeployableBaseUseType                             SupportedUseType;                                         // 0x0069(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x006A(0x0006) MISSED OFFSET
	TArray<class UFortTieredCollectionLayout*>         TieredCollectionLayouts;                                  // 0x0070(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.ZoneThemeDifficultyProperties
// 0x0068
struct FZoneThemeDifficultyProperties
{
	TArray<struct FDataTableRowHandle>                 ValidDifficulties;                                        // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FFortTimeOfDayTheme                         TimeOfDayTheme;                                           // 0x0010(0x0040) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FFortGlobalWindInfo                         GlobalWindInfo;                                           // 0x0050(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.ActiveTieredCollectionLayout
// 0x0014 (0x0020 - 0x000C)
struct FActiveTieredCollectionLayout : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UFortTieredCollectionLayout*                 Layout;                                                   // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                MaxTierUnlocked;                                          // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bLocked : 1;                                              // 0x001C(0x0001) (CPF_Transient)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.ActiveTieredCollectionLayoutArray
// 0x0018 (0x00C8 - 0x00B0)
struct FActiveTieredCollectionLayoutArray : public FFastArraySerializer
{
	TArray<struct FActiveTieredCollectionLayout>       LayoutArray;                                              // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	bool                                               bTiersForced;                                             // 0x00C0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.DeployableBaseInstance
// 0x000C (0x0018 - 0x000C)
struct FDeployableBaseInstance : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class ADeployableBasePlot*                         DeployableBase;                                           // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.DeployableBaseArray
// 0x0010 (0x00C0 - 0x00B0)
struct FDeployableBaseArray : public FFastArraySerializer
{
	TArray<struct FDeployableBaseInstance>             DeployableBases;                                          // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FortniteGame.FortUserCloudRequestHandle
// 0x0008
struct FFortUserCloudRequestHandle
{
	uint64_t                                           Handle;                                                   // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.PendingDeployableBaseUser
// 0x0030
struct FPendingDeployableBaseUser
{
	struct FUniqueNetIdRepl                            UserNetID;                                                // 0x0000(0x0018)
	struct FFortUserCloudRequestHandle                 LoadingCloudRequestHandle;                                // 0x0018(0x0008)
	class UFortDeployableBaseRecord*                   BaseRecord;                                               // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ADeployableBasePlot*                         BasePlot;                                                 // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.PendingDeployableManagerAction
// 0x0070
struct FPendingDeployableManagerAction
{
	EQueueActionType                                   ActionType;                                               // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class ADeployableBasePlot*>                 PendingPlots;                                             // 0x0008(0x0010) (CPF_ZeroConstructor)
	int                                                CurrentPlotRunningIndex;                                  // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EDeployableBaseBuildingState                       DesiredPlotState;                                         // 0x001C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x43];                                      // 0x001D(0x0043) MISSED OFFSET
	class AFortDeployableBaseManager*                  Manager;                                                  // 0x0060(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.EnvironmentBuildingRestorationRecord
// 0x0050
struct FEnvironmentBuildingRestorationRecord
{
	class UClass*                                      ActorClass;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  ActorTransform;                                           // 0x0010(0x0030) (CPF_IsPlainOldData)
	struct FName                                       QuotaSelectedLootTierKey;                                 // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                QuotaSelectedLootTier;                                    // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.AvailableTierLayout
// 0x0030
struct FAvailableTierLayout
{
	class UFortTieredCollectionLayout*                 Layout;                                                   // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FFortTierCollectionLayoutOutput>     AvailableTiers;                                           // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<struct FFortTierCollectionLayoutOutput>     LockedTiers;                                              // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      bLocked : 1;                                              // 0x0028(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortFeedbackResponse
// 0x0020
struct FFortFeedbackResponse
{
	struct FFortFeedbackHandle                         Handle;                                                   // 0x0000(0x0018) (CPF_Edit)
	TEnumAsByte<EFortFeedbackContext>                  Context;                                                  // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortFeedbackLine
// 0x0080
struct FFortFeedbackLine
{
	TAssetPtr<class USoundBase>                        Audio;                                                    // 0x0000(0x0020) (CPF_Edit)
	TAssetPtr<class UAnimSequence>                     AnimSequence;                                             // 0x0020(0x0020) (CPF_Edit)
	TAssetPtr<class UAnimMontage>                      AnimMontage;                                              // 0x0040(0x0020) (CPF_Edit)
	TEnumAsByte<EFortFeedbackAddressee>                Addressee;                                                // 0x0060(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortFeedbackContext>                  Context;                                                  // 0x0061(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0062(0x0006) MISSED OFFSET
	TArray<struct FFortFeedbackResponse>               ResponseEvents;                                           // 0x0068(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	bool                                               bInterruptCurrentLine;                                    // 0x0078(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bCanBeInterrupted;                                        // 0x0079(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bCanQue;                                                  // 0x007A(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x007B(0x0005) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortFeedbackAction
// 0x0030
struct FFortFeedbackAction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FFortFeedbackHandle                         Handle;                                                   // 0x0008(0x0018) (CPF_Edit)
	TArray<struct FFortFeedbackLine>                   Lines;                                                    // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortFeedbackActionBankDefined
// 0x0008 (0x0038 - 0x0030)
struct FFortFeedbackActionBankDefined : public FFortFeedbackAction
{
	float                                              MinReplayTime;                                            // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinReplayTimeForSpeaker;                                  // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.VisibilityInfo
// 0x001C (0x0028 - 0x000C)
struct FVisibilityInfo : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class AActor*                                      Actor;                                                    // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortVisibilityComponent*                    VisibilityComponent;                                      // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	uint16_t                                           TeamVisibilityFlag;                                       // 0x0020(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteGame.VisibiltyInfoArray
// 0x0010 (0x00C0 - 0x00B0)
struct FVisibiltyInfoArray : public FFastArraySerializer
{
	TArray<struct FVisibilityInfo>                     VisibilityInfoArray;                                      // 0x00B0(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortPlacedBuilding
// 0x0020
struct FFortPlacedBuilding
{
	struct FString                                     BuildingTag;                                              // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     PlacedTag;                                                // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortOutpostCoreInfo
// 0x0020
struct FFortOutpostCoreInfo
{
	TArray<struct FFortPlacedBuilding>                 PlacedBuildings;                                          // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             AccountsWithEditPermission;                               // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.TeamFOBRequiredTags
// 0x0028
struct FTeamFOBRequiredTags
{
	struct FGameplayTagContainer                       RequiredFOBSpawnTags;                                     // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TEnumAsByte<EFortTeam>                             Team;                                                     // 0x0020(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.CachedPlayerFOBInformation
// 0x0020
struct FCachedPlayerFOBInformation
{
	struct FUniqueNetIdRepl                            PlayerID;                                                 // 0x0000(0x0018) (CPF_Transient)
	TEnumAsByte<EFortTeam>                             Team;                                                     // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAccountClientSettings
// 0x0010
struct FFortAccountClientSettings
{
	TArray<struct FString>                             PinnedQuestInstances;                                     // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortQuestObjectiveCompletion
// 0x0028
struct FFortQuestObjectiveCompletion
{
	struct FString                                     StatName;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                Count;                                                    // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0014(0x0014) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortQuestEarnedBadgeData
// 0x0018
struct FFortQuestEarnedBadgeData
{
	struct FString                                     TemplateId;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                Count;                                                    // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.AccountIdAndScore
// 0x0018
struct FAccountIdAndScore
{
	struct FString                                     AccountId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                TotalScore;                                               // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCriticalMatchBonus;                                      // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortInputActionGroupContext
// 0x0010
struct FFortInputActionGroupContext
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	EFortInputActionGroup                              InputActionGroup;                                         // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortActionKeyMapping
// 0x0058
struct FFortActionKeyMapping
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       LocalizedName;                                            // 0x0008(0x0018)
	struct FKey                                        KeyBind1;                                                 // 0x0020(0x0018)
	struct FKey                                        KeyBind2;                                                 // 0x0038(0x0018)
	float                                              InputScale;                                               // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsAxisMapping;                                           // 0x0054(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPlayerDeathReport
// 0x0050
struct FFortPlayerDeathReport
{
	float                                              ServerTimeForRespawn;                                     // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              ServerTimeForResurrect;                                   // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              LethalDamage;                                             // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class AFortPlayerState*                            KillerPlayerState;                                        // 0x0010(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class AFortPawn*                                   KillerPawn;                                               // 0x0018(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // 0x0020(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bDroppedBackpack : 1;                                     // 0x0028(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient)
	unsigned char                                      bNotifyUI : 1;                                            // 0x0028(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       Tags;                                                     // 0x0030(0x0020) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient)
};

// ScriptStruct FortniteGame.TurnFloatRange
// 0x0008
struct FTurnFloatRange
{
	float                                              Min;                                                      // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Max;                                                      // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.TurnTransitionData
// 0x0048
struct FTurnTransitionData
{
	struct FName                                       MontageSectionName;                                       // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinYawAngle;                                              // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxYawAngle;                                              // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TurnRate;                                                 // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       RequiredGameplayTags;                                     // 0x0018(0x0020) (CPF_Edit)
	int                                                PriorityLevel;                                            // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTurnFloatRange                             SpeedConstraintRange;                                     // 0x003C(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	bool                                               bEnableSpeedConstraint;                                   // 0x0044(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSkipTransitionInCrowd;                                   // 0x0045(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0046(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortParticleSystemParamBucket
// 0x0010
struct FFortParticleSystemParamBucket
{
	TArray<struct FParticleSysParam>                   Parameters;                                               // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortHostSessionParams
// 0x0010
struct FFortHostSessionParams
{
	struct FName                                       SessionName;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ControllerId;                                             // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortDisconnectedPlayerReservation
// 0x0028
struct FFortDisconnectedPlayerReservation
{
	struct FName                                       SessionName;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUniqueNetIdRepl                            PlayerID;                                                 // 0x0008(0x0018)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.ActiveGameplayModifier
// 0x00CC (0x00D8 - 0x000C)
struct FActiveGameplayModifier : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UFortGameplayModifierItemDefinition*         ModifierDef;                                              // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FActiveGameplayModifierHandle               ModifierHandle;                                           // 0x0018(0x0004) (CPF_Transient, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<class AFortGameplayMutator*>                Mutators;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	int                                                Expiration;                                               // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0xA4];                                      // 0x0034(0x00A4) MISSED OFFSET
};

// ScriptStruct FortniteGame.ActiveGameplayModifierArray
// 0x0018 (0x00C8 - 0x00B0)
struct FActiveGameplayModifierArray : public FFastArraySerializer
{
	TArray<struct FActiveGameplayModifier>             Items;                                                    // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	int                                                ModifierHandleGenerator;                                  // 0x00C0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	bool                                               bSupportRuntimeModifierShutdown;                          // 0x00C4(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.PlayerBuildableClassContainer
// 0x0010
struct FPlayerBuildableClassContainer
{
	TArray<class UClass*>                              BuildingClasses;                                          // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FortniteGame.Voter
// 0x0020
struct FVoter
{
	int                                                VoteDecision;                                             // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FUniqueNetIdRepl                            NetId;                                                    // 0x0008(0x0018) (CPF_Transient)
};

// ScriptStruct FortniteGame.HordeDifficultyTierInfo
// 0x0010
struct FHordeDifficultyTierInfo
{
	struct FName                                       DifficultyTierName;                                       // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UFortQuestItemDefinition*                    QuestPrerequisite;                                        // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.PermaniteBoundariesInfo
// 0x0014
struct FPermaniteBoundariesInfo
{
	int                                                MaxPermaniteStructures;                                   // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TotalPermaniteStructures;                                 // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AveragePermaniteStructureLevel;                           // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinPermaniteStructureLevel;                               // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxPermaniteStructureLevel;                               // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.TeamMapInfo
// 0x0048
struct FTeamMapInfo
{
	TArray<unsigned char>                              ReplicatedSeedPack;                                       // 0x0000(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x34];                                      // 0x0010(0x0034) MISSED OFFSET
	TEnumAsByte<EFortTeam>                             TeamId;                                                   // 0x0044(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.TeamMapExplorationEvent
// 0x0002
struct FTeamMapExplorationEvent
{
	TEnumAsByte<EFortTeam>                             TeamId;                                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int8_t                                             ExplorationThreshold;                                     // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortInstensityCurveSequenceProgression
// 0x0018
struct FFortInstensityCurveSequenceProgression
{
	class UFortIntensityCurveSequence*                 CurveSequence;                                            // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FCurveTableRowHandle                        SelectionWeight;                                          // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.FortAlterationSlots
// 0x0002
struct FFortAlterationSlots
{
	TEnumAsByte<EFortAlteration>                       Type;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      NumSlots;                                                 // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.SchematicRequirement
// 0x0010
struct FSchematicRequirement
{
	class UFortWorldItemDefinition*                    ItemDefinition;                                           // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsConsumed;                                              // 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortItemInstanceQuantityPair
// 0x0010
struct FFortItemInstanceQuantityPair
{
	class UFortItem*                                   Item;                                                     // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortInventoryType>                    InventoryType;                                            // 0x0008(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                Quantity;                                                 // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortTierProgressionInfo
// 0x0018
struct FFortTierProgressionInfo
{
	struct FString                                     ProgressionLayoutGuid;                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                HighestDefeatedTier;                                      // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTierProgression
// 0x0010
struct FFortTierProgression
{
	TArray<struct FFortTierProgressionInfo>            ProgressionInfo;                                          // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.ItemCategoryMappingData
// 0x0020
struct FItemCategoryMappingData
{
	EFortItemType                                      CategoryType;                                             // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       CategoryName;                                             // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.ItemCategory
// 0x0398
struct FItemCategory
{
	struct FGameplayTagContainer                       TagContainer;                                             // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       CategoryName;                                             // 0x0020(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortMultiSizeBrush                         CategoryBrush;                                            // 0x0038(0x0360) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.FortGameplayEffectDeliveryInfo
// 0x00A8
struct FFortGameplayEffectDeliveryInfo
{
	struct FFortDeliveryInfoRequirementsFilter         DeliveryRequirements;                                     // 0x0000(0x0098) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<struct FGameplayEffectApplicationInfo>      GameplayEffects;                                          // 0x0098(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortMcpQuestRewardInfo
// 0x0010
struct FFortMcpQuestRewardInfo
{
	TArray<struct FFortItemQuantityPair>               Rewards;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortMcpQuestObjectiveInfo
// 0x00F8
struct FFortMcpQuestObjectiveInfo
{
	struct FName                                       BackendName;                                              // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDataTableRowHandle                         ObjectiveStatHandle;                                      // 0x0008(0x0010) (CPF_Edit)
	TArray<struct FDataTableRowHandle>                 AlternativeStatHandles;                                   // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	EFortQuestObjectiveItemEvent                       ItemEvent;                                                // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TAssetPtr<class UFortItemDefinition>               ItemReference;                                            // 0x0030(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FString                                     ItemTemplateIdOverride;                                   // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FName                                       LinkSquadID;                                              // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LinkSquadIndex;                                           // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortInventoryFilter                               LinkVaultTab;                                             // 0x006C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortFrontendInventoryFilter                       LinkToItemManagement;                                     // 0x006D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x006E(0x0002) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0070(0x0018) (CPF_Edit)
	struct FText                                       HudShortDescription;                                      // 0x0088(0x0018) (CPF_Edit)
	TAssetPtr<class UTexture2D>                        HudIcon;                                                  // 0x00A0(0x0020) (CPF_Edit)
	int                                                Count;                                                    // 0x00C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Stage;                                                    // 0x00C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bHidden;                                                  // 0x00C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRequirePrimaryMissionCompletion;                         // 0x00C9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCanProgressInZone;                                       // 0x00CA(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDisplayDynamicAnnouncementUpdate;                        // 0x00CB(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDisplayDynamicStatusUpdate;                              // 0x00CC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	float                                              DynamicUpdateCompletionDelay;                             // 0x00D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	TAssetPtr<class UClass>                            ScriptedAction;                                           // 0x00D8(0x0020) (CPF_Edit)
};

// ScriptStruct FortniteGame.FortQuestMissionCreationContext
// 0x0038
struct FFortQuestMissionCreationContext
{
	TAssetPtr<class UFortMissionInfo>                  MissionInfo;                                              // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TArray<struct FGameplayTagContainer>               MissionCreationContextTags;                               // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	bool                                               bSetQuestOwnerAsMissionOwner;                             // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                MaxNumberToSpawnInWorld;                                  // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.ConsumeEffectData
// 0x0048
struct FConsumeEffectData
{
	TAssetPtr<class UClass>                            EffectClass;                                              // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FScalableFloat                              Level;                                                    // 0x0020(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.KeepEventWaveData
// 0x0040
struct FKeepEventWaveData
{
	struct FText                                       WaveDescription;                                          // 0x0000(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	class UClass*                                      EncounterTemplate;                                        // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UFortAISpawnGroupProgressionInfo*            SpawnGroupProgressionInfo;                                // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WarmupTime;                                               // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              EncounterTime;                                            // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                DifficultyLevel;                                          // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AliveMultiplier;                                          // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                EnemySpawnBits1;                                          // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                EnemySpawnBits2;                                          // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.KeepEventInfo
// 0x0028
struct FKeepEventInfo
{
	TAssetPtr<class UFortKeepEventInfo>                KeepEvent;                                                // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	int                                                DifficultyLevelOffset;                                    // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortDialogExternalLatentActionHandle
// 0x0004
struct FFortDialogExternalLatentActionHandle
{
	int                                                Handle;                                                   // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortWeaponDurabilityByRarityStats
// 0x0028 (0x0030 - 0x0008)
struct FFortWeaponDurabilityByRarityStats : public FTableRowBase
{
	int                                                Handmade;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Ordinary;                                                 // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Sturdy;                                                   // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Quality;                                                  // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Fine;                                                     // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Elegant;                                                  // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Masterwork;                                               // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Epic;                                                     // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Badass;                                                   // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Legendary;                                                // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortTrapStats
// 0x0018 (0x0138 - 0x0120)
struct FFortTrapStats : public FFortBaseWeaponStats
{
	float                                              ArmTime;                                                  // 0x0120(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FireDelay;                                                // 0x0124(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageDelay;                                              // 0x0128(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PlacementScore;                                           // 0x012C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ActivationScore;                                          // 0x0130(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortRangedWeaponStats
// 0x00F8 (0x0218 - 0x0120)
struct FFortRangedWeaponStats : public FFortBaseWeaponStats
{
	float                                              Spread;                                                   // 0x0120(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpreadDownsights;                                         // 0x0124(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StandingStillSpreadMultiplier;                            // 0x0128(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AthenaCrouchingSpreadMultiplier;                          // 0x012C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AthenaJumpingFallingSpreadMultiplier;                     // 0x0130(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AthenaSprintingSpreadMultiplier;                          // 0x0134(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinSpeedForSpreadMultiplier;                              // 0x0138(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxSpeedForSpreadMultiplier;                              // 0x013C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpreadDownsightsAdditionalCooldownTime;                   // 0x0140(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeatX1;                                                   // 0x0144(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeatY1;                                                   // 0x0148(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeatX2;                                                   // 0x014C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeatY2;                                                   // 0x0150(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeatX3;                                                   // 0x0154(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeatY3;                                                   // 0x0158(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeatXScale;                                               // 0x015C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeatYScale;                                               // 0x0160(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CoolX1;                                                   // 0x0164(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CoolY1;                                                   // 0x0168(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CoolX2;                                                   // 0x016C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CoolY2;                                                   // 0x0170(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CoolX3;                                                   // 0x0174(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CoolY3;                                                   // 0x0178(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CoolXScale;                                               // 0x017C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CoolYScale;                                               // 0x0180(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BulletsPerCartridge;                                      // 0x0184(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FiringRate;                                               // 0x0188(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ROFScale;                                                 // 0x018C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BurstFiringRate;                                          // 0x0190(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilVert;                                               // 0x0194(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilVertScale;                                          // 0x0198(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilVertScaleGamepad;                                   // 0x019C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VertRecoilDownChance;                                     // 0x01A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilHoriz;                                              // 0x01A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilHorizScale;                                         // 0x01A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilHorizScaleGamepad;                                  // 0x01AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilInterpSpeed;                                        // 0x01B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilRecoveryInterpSpeed;                                // 0x01B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilRecoveryDelay;                                      // 0x01B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilRecoveryFraction;                                   // 0x01BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilDownsightsMultiplier;                               // 0x01C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxSpareAmmo;                                             // 0x01C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BulletsPerTracer;                                         // 0x01C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AIDelayBeforeFiringMin;                                   // 0x01CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AIDelayBeforeFiringMax;                                   // 0x01D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AIFireDurationMin;                                        // 0x01D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AIFireDurationMax;                                        // 0x01D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AIMinSpreadDuration;                                      // 0x01DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AIMaxSpreadDuration;                                      // 0x01E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AIDurationSpreadMultiplier;                               // 0x01E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AIAdditionalSpreadForTargetMovingLaterally;               // 0x01E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EQSDensity;                                               // 0x01EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinApproachRange;                                         // 0x01F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinActualRange;                                           // 0x01F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinPreferredRange;                                        // 0x01F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinPreferredRangeEQS;                                     // 0x01FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxPreferredRangeEQS;                                     // 0x0200(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxPreferredRange;                                        // 0x0204(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxActualRange;                                           // 0x0208(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxApproachRange;                                         // 0x020C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SweepRadius;                                              // 0x0210(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoReloadDelayOverride;                                  // 0x0214(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortPawnStats
// 0x0070 (0x0078 - 0x0008)
struct FFortPawnStats : public FTableRowBase
{
	float                                              MaximumHealth;                                            // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpeedWalk;                                                // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpeedRun;                                                 // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpeedSprint;                                              // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpeedCrouchedRun;                                         // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpeedCrouchedSprint;                                      // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpeedBackwardsMultiplier;                                 // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpeedDBNO;                                                // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AccelerationStrafeMultiplierSprint;                       // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UCurveTable*                                 FallingDamageTable;                                       // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       FallingDamageTableRow;                                    // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HealthRegenRate;                                          // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HealthRegenDelay;                                         // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HealthRegenThreshold;                                     // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxShield;                                                // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ShieldRegenRate;                                          // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ShieldRegenDelay;                                         // 0x0054(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ShieldRegenThreshold;                                     // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxControlResistance;                                     // 0x005C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ControlResistanceRegenRate;                               // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ControlResistanceRegenDelay;                              // 0x0064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ControlResistanceRegenThreshold;                          // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              KnockbackMultiplier;                                      // 0x006C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              KnockbackThreshold;                                       // 0x0070(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAllowChainStun;                                          // 0x0074(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortControlRecoveryBehavior                       ControlRecoveryBehavior;                                  // 0x0075(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0076(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMeleeWeaponStats
// 0x0028 (0x0148 - 0x0120)
struct FFortMeleeWeaponStats : public FFortBaseWeaponStats
{
	float                                              RangeVSEnemies;                                           // 0x0120(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ConeYawAngle;                                             // 0x0124(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ConePitchAngle;                                           // 0x0128(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SwingPlaySpeed;                                           // 0x012C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SwingTime;                                                // 0x0130(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BuildingConeAngle;                                        // 0x0134(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BuildingConeAnglePitch;                                   // 0x0138(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RangeVSBuildings2D;                                       // 0x013C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RangeVSBuildingsZ;                                        // 0x0140(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RangeVSWeakSpots;                                         // 0x0144(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.MatchmakingParams
// 0x0098
struct FMatchmakingParams
{
	int                                                ControllerId;                                             // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PartySize;                                                // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     DatacenterId;                                             // 0x0008(0x0010) (CPF_ZeroConstructor)
	int                                                PlaylistId;                                               // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MatchmakingLevel;                                         // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MissionDifficultyMin;                                     // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MissionDifficultyMax;                                     // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     TheaterId;                                                // 0x0028(0x0010) (CPF_ZeroConstructor)
	struct FString                                     ZoneInstanceId;                                           // 0x0038(0x0010) (CPF_ZeroConstructor)
	struct FString                                     WUID;                                                     // 0x0048(0x0010) (CPF_ZeroConstructor)
	struct FUniqueNetIdRepl                            WorldOwnerId;                                             // 0x0058(0x0018)
	struct FString                                     SessionId;                                                // 0x0070(0x0010) (CPF_ZeroConstructor)
	EMatchmakingStartLocation                          StartWith;                                                // 0x0080(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EMatchmakingFlags                                  Flags;                                                    // 0x0081(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0082(0x0002) MISSED OFFSET
	float                                              ChanceToHostOverride;                                     // 0x0084(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ChanceToHostIncrease;                                     // 0x0088(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumAttempts;                                              // 0x008C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxSearchResultsOverride;                                 // 0x0090(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxProcessedSearchResults;                                // 0x0094(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortCachedMatchmakingSearchParams
// 0x00A8
struct FFortCachedMatchmakingSearchParams
{
	EFortMatchmakingType                               MatchmakingType;                                          // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FMatchmakingParams                          MatchmakingParams;                                        // 0x0008(0x0098)
	bool                                               bValid;                                                   // 0x00A0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMatchmakingConfig
// 0x0010
struct FFortMatchmakingConfig
{
	float                                              ChanceToHostOverride;                                     // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ChanceToHostIncrease;                                     // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxSearchResultsOverride;                                 // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxProcessedSearchResults;                                // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.EmptyServerReservation
// 0x0048
struct FEmptyServerReservation
{
	int                                                PlaylistId;                                               // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     ZoneInstanceId;                                           // 0x0008(0x0010) (CPF_ZeroConstructor)
	struct FString                                     WUID;                                                     // 0x0018(0x0010) (CPF_ZeroConstructor)
	struct FUniqueNetIdRepl                            WorldDataOwner;                                           // 0x0028(0x0018)
	bool                                               bMakePrivate;                                             // 0x0040(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortMatchmakingPool                               MatchmakingPool;                                          // 0x0041(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortInviteSessionParams
// 0x0038
struct FFortInviteSessionParams
{
	TEnumAsByte<EMatchmakingState>                     State;                                                    // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       FailureReason;                                            // 0x0008(0x0018)
	TEnumAsByte<EPartyReservationResult>               LastBeaconResponse;                                       // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0021(0x0017) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortWorldPlayerLoadout
// 0x0140
struct FFortWorldPlayerLoadout
{
	bool                                               bPlayerIsNew;                                             // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FString>                             PinnedSchematicInstances;                                 // 0x0008(0x0010) (CPF_ZeroConstructor)
	struct FQuickBar                                   PrimaryQuickBarRecord;                                    // 0x0018(0x0090)
	struct FQuickBar                                   SecondaryQuickBarRecord;                                  // 0x00A8(0x0090)
	int                                                ZonesCompleted;                                           // 0x0138(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortWorldProfileUpdateRequest
// 0x00F0
struct FFortWorldProfileUpdateRequest
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
	int                                                NumberOfRequests;                                         // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xAC];                                      // 0x0044(0x00AC) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortBatchUpdatePlayer_Update
// 0x00D0
struct FFortBatchUpdatePlayer_Update
{
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0000(0x00D0) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortBatchUpdatePlayer_DeployableBaseUpdate
// 0x0038
struct FFortBatchUpdatePlayer_DeployableBaseUpdate
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortActiveTheaterInfo
// 0x0030
struct FFortActiveTheaterInfo
{
	TArray<struct FFortTheaterMapData>                 Theaters;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FFortAvailableTheaterMissions>       Missions;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<struct FFortAvailableMissionAlerts>         MissionAlerts;                                            // 0x0020(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.NavAgentData
// 0x0018
struct FNavAgentData
{
	struct FName                                       AgentName;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FCurveTableRowHandle                        BuildingActorHealthToNavAreaStrengthHandle;               // 0x0008(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.TieredWaveSetCollectionData
// 0x0088
struct FTieredWaveSetCollectionData
{
	struct FText                                       DefenseText;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	struct FText                                       LevelText;                                                // 0x0018(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	struct FText                                       WaveText;                                                 // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	struct FText                                       BreatherText;                                             // 0x0048(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	int                                                MinLvl;                                                   // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                MaxLvl;                                                   // 0x0064(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FName                                       BaseWaveLengthRowName;                                    // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BaseNumOfKillsRowName;                                    // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BaseNumOfKillPointsRowName;                               // 0x0078(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       WaveSet;                                                  // 0x0080(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortMissionUIActorHandle
// 0x0030
struct FFortMissionUIActorHandle
{
	TWeakObjectPtr<class AActor>                       AttachedActor;                                            // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     AttachmentOffset;                                         // 0x0008(0x000C) (CPF_IsPlainOldData)
	float                                              MaxVisibleDistance;                                       // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       MissionGuid;                                              // 0x0018(0x0010) (CPF_IsPlainOldData)
	TWeakObjectPtr<class UFortMissionInfoIndicator>    MissionUIIndicator;                                       // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
};

// ScriptStruct FortniteGame.EarnedBadgePlayerData
// 0x0020
struct FEarnedBadgePlayerData
{
	struct FUniqueNetIdRepl                            PlayerID;                                                 // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient)
	int                                                Count;                                                    // 0x0018(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.EarnedBadgeEntry
// 0x0024 (0x0030 - 0x000C)
struct FEarnedBadgeEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UFortBadgeItemDefinition*                    Badge;                                                    // 0x0010(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<struct FEarnedBadgePlayerData>              PlayerData;                                               // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient)
	TEnumAsByte<EFortRewardType>                       RewardType;                                               // 0x0028(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.EarnedBadgeEntryArray
// 0x0010 (0x00C0 - 0x00B0)
struct FEarnedBadgeEntryArray : public FFastArraySerializer
{
	TArray<struct FEarnedBadgeEntry>                   Items;                                                    // 0x00B0(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.MissionTimeDisplayData
// 0x002C
struct FMissionTimeDisplayData
{
	float                                              LessThanTimeValue;                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bHideTimer;                                               // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FLinearColor                                BaseColor;                                                // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                PulseColor;                                               // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ColorPulsesPerSecond;                                     // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.MissionTimerData
// 0x0028
struct FMissionTimerData
{
	bool                                               bTimerIsPaused;                                           // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              OriginalTimePeriod;                                       // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReplicatedRemainingTime;                                  // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ClientRemainingTime;                                      // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.AthenaJumpPenalty
// 0x0008
struct FAthenaJumpPenalty
{
	float                                              JumpScalar;                                               // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MovementScalar;                                           // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.AirControlParams
// 0x0014
struct FAirControlParams
{
	float                                              MaxAcceleration;                                          // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LateralFriction;                                          // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxLateralSpeed;                                          // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TerminalVelocity;                                         // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GravityScalar;                                            // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortNavLinkPattern
// 0x0008
struct FFortNavLinkPattern
{
	int                                                PatternBits;                                              // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                WildcardBits;                                             // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortPartyRepState
// 0x0068 (0x0078 - 0x0010)
struct FFortPartyRepState : public FPartyState
{
	EFortPartyState                                    PartyProgression;                                         // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bLobbyConnectionStarted;                                  // 0x0011(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EMatchmakingCompleteResult                         MatchmakingResult;                                        // 0x0012(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EMatchmakingState>                     MatchmakingState;                                         // 0x0013(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     SessionId;                                                // 0x0018(0x0010) (CPF_ZeroConstructor)
	bool                                               bSessionIsCriticalMission;                                // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                ZoneTileIndex;                                            // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ZoneInstanceId;                                           // 0x0030(0x0010) (CPF_ZeroConstructor)
	struct FString                                     TheaterId;                                                // 0x0040(0x0010) (CPF_ZeroConstructor)
	TArray<bool>                                       TileStates;                                               // 0x0050(0x0010) (CPF_ZeroConstructor)
	struct FString                                     BucketId;                                                 // 0x0060(0x0010) (CPF_ZeroConstructor)
	EFortAthenaPlaylist                                PlaylistType;                                             // 0x0070(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSquadFill;                                               // 0x0071(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0072(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPartyMemberRepState
// 0x0078 (0x0080 - 0x0008)
struct FFortPartyMemberRepState : public FPartyMemberRepState
{
	EFortPartyMemberLocation                           Location;                                                 // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                MatchmakingLevel;                                         // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ZoneInstanceId;                                           // 0x0010(0x0010) (CPF_ZeroConstructor)
	int                                                CurrentCharXP;                                            // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     HeroId;                                                   // 0x0028(0x0010) (CPF_ZeroConstructor)
	struct FString                                     HeroTypeRefName;                                          // 0x0038(0x0010) (CPF_ZeroConstructor)
	TEnumAsByte<EFortCustomGender>                     CharacterGender;                                          // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	int64_t                                            HomeBaseVersion;                                          // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ConsoleOSSString;                                         // 0x0058(0x0010) (CPF_ZeroConstructor)
	struct FString                                     ConsoleUniqueNetIdString;                                 // 0x0068(0x0010) (CPF_ZeroConstructor)
	bool                                               bPreloadedAthena;                                         // 0x0078(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bReadyAthena;                                             // 0x0079(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x007A(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteGame.BuildingHitTime
// 0x0018
struct FBuildingHitTime
{
	class ABuildingActor*                              HitBuilding;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPlayerAttributeSets
// 0x0048
struct FFortPlayerAttributeSets
{
	class UFortRegenHealthSet*                         HealthSet;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortControlResistanceSet*                   ControlResistanceSet;                                     // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortDamageSet*                              DamageSet;                                                // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortMovementSet*                            MovementSet;                                              // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortConstructionSet*                        ConstructionSet;                                          // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortPlayerAttrSet*                          PlayerAttrSet;                                            // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortCharacterAttrSet*                       CharacterAttrSet;                                         // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortWeaponAttrSet*                          WeaponAttrSet;                                            // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortHomebaseSet*                            HomebaseSet;                                              // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.ActiveFortCamera
// 0x0020
struct FActiveFortCamera
{
	class UFortCameraMode*                             Camera;                                                   // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      ViewTarget;                                               // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TransitionAlpha;                                          // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TransitionUpdateRate;                                     // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlendWeight;                                              // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCameraInstanceEntry
// 0x0018
struct FFortCameraInstanceEntry
{
	class UClass*                                      CameraClass;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      ViewTarget;                                               // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortCameraMode*                             Camera;                                                   // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortCameraModeOverride
// 0x0010
struct FFortCameraModeOverride
{
	class UClass*                                      OriginalClass;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      ClassOverride;                                            // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortCameraPrototype
// 0x0028
struct FFortCameraPrototype
{
	struct FName                                       PrototypeName;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     PrototypeDescription;                                     // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FFortCameraModeOverride>             ModeOverrides;                                            // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortDepositedResources
// 0x0018
struct FFortDepositedResources
{
	struct FString                                     TemplateId;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                Quantity;                                                 // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortInputActionKeyAlias
// 0x0028
struct FFortInputActionKeyAlias
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FKey                                        KeyAlias;                                                 // 0x0008(0x0018) (CPF_Config)
	EFortInputActionType                               InputActionType;                                          // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.MorphValuePair
// 0x0010
struct FMorphValuePair
{
	struct FName                                       MorphName;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MorphValue;                                               // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.AccumulatedItemEntry
// 0x0010
struct FAccumulatedItemEntry
{
	class UFortWorldItemDefinition*                    ItemDefinition;                                           // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Quantity;                                                 // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.DeathInfo
// 0x0010
struct FDeathInfo
{
	class AFortPlayerStateAthena*                      Killer;                                                   // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDBNO;                                                    // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EDeathCause                                        DeathCause;                                               // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPointOnCurveRange
// 0x0008
struct FFortPointOnCurveRange
{
	float                                              MinPercentage;                                            // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxPercentage;                                            // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortPointsOnCurve
// 0x0030
struct FFortPointsOnCurve
{
	TAssetPtr<class UCurveFloat>                       Curve;                                                    // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<struct FFortPointOnCurveRange>              RangesForPointsOnCurve;                                   // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortGameplayTagQueryPerDifficulty
// 0x0060
struct FFortGameplayTagQueryPerDifficulty
{
	struct FDataTableRowHandle                         DifficultyInfo;                                           // 0x0000(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagQuery                           TagQueryToMatch;                                          // 0x0010(0x0048) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              Difficulty;                                               // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.GoalDistanceData
// 0x0088
struct FGoalDistanceData
{
	bool                                               bIgnoreScreeningDistance;                                 // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FAIDataProviderFloatValue                   ScreeningTestMaxDistance;                                 // 0x0008(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UCurveFloat>                       TestScoreCurve;                                           // 0x0038(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   CurveDistanceScale;                                       // 0x0058(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortCategoryTableRow
// 0x0020 (0x0028 - 0x0008)
struct FFortCategoryTableRow : public FTableRowBase
{
	struct FText                                       Name;                                                     // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                SortPriority;                                             // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortRarityItemData
// 0x0080
struct FFortRarityItemData
{
	struct FText                                       Name;                                                     // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FLinearColor                                Color1;                                                   // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                Color2;                                                   // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                Color3;                                                   // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                Color4;                                                   // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                Color5;                                                   // 0x0058(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Falloff;                                                  // 0x006C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Brightness;                                               // 0x0070(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Roughness;                                                // 0x0074(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Glow;                                                     // 0x0078(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortScoreStylingInfo
// 0x0388
struct FFortScoreStylingInfo
{
	struct FText                                       Name;                                                     // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortMultiSizeBrush                         Icon;                                                     // 0x0018(0x0360) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FLinearColor                                Color;                                                    // 0x0378(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortScriptedActionParams
// 0x0030
struct FFortScriptedActionParams
{
	class AFortPlayerController*                       Player;                                                   // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortScriptedActionSource                          SourceType;                                               // 0x0008(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UFortItem*                                   SourceItem;                                               // 0x0010(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDataTableRowHandle                         SourceData;                                               // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FName                                       SourceName;                                               // 0x0028(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortAvailableScriptedAction
// 0x0038
struct FFortAvailableScriptedAction
{
	struct FFortScriptedActionParams                   Params;                                                   // 0x0000(0x0030)
	class AFortScriptedAction*                         ActionDefaults;                                           // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortSearchPassParams
// 0x0028
struct FFortSearchPassParams
{
	int                                                ControllerId;                                             // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       SessionName;                                              // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     BestDatacenterId;                                         // 0x0010(0x0010) (CPF_ZeroConstructor)
	int                                                MaxProcessedSearchResults;                                // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSearchPassState
// 0x0018
struct FFortSearchPassState
{
	int                                                BestSessionIdx;                                           // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWasCanceled;                                             // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortSessionHelperJoinResult                       FailureType;                                              // 0x0005(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EMatchmakingState>                     MatchmakingState;                                         // 0x0006(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EPartyReservationResult>               LastBeaconResponse;                                       // 0x0007(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTrackedPlayerBehaviorInteraction
// 0x0080
struct FFortTrackedPlayerBehaviorInteraction
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTrackedPlayerBehavior
// 0x0078
struct FFortTrackedPlayerBehavior
{
	class AFortPlayerControllerAthena*                 PC;                                                       // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TMap<struct FUniqueNetIdRepl, struct FFortTrackedPlayerBehaviorInteraction> Interactions;                                             // 0x0008(0x0050) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0058(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGlobalMission
// 0x0170
struct FFortGlobalMission
{
	TAssetPtr<class UFortMissionInfo>                  MissionInfo;                                              // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<EFortTheaterType>                           AllowedTheaterTypes;                                      // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FGameplayTagQuery                           TheaterTagQuery;                                          // 0x0030(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FGameplayTagQuery                           RegionTagQuery;                                           // 0x0078(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TArray<EFortZoneType>                              AllowedZoneTypes;                                         // 0x00C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FGameplayTagQuery                           ZoneTagQuery;                                             // 0x00D0(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FGameplayTagQuery                           PrimaryMissionTagQuery;                                   // 0x0118(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	float                                              MaxDifficultyLevel;                                       // 0x0160(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinDifficultyLevel;                                       // 0x0164(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bIsPrototype;                                             // 0x0168(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bAllowInTestMaps;                                         // 0x0169(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x016A(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortQuestDrivenMission
// 0x0008 (0x0178 - 0x0170)
struct FFortQuestDrivenMission : public FFortGlobalMission
{
	class UFortQuestItemDefinition*                    RequiredQuest;                                            // 0x0170(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.TransformableNavLinkClass
// 0x0020
struct FTransformableNavLinkClass
{
	struct FVector                                     Translation;                                              // 0x0000(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	class UClass*                                      NavigationLinksClass;                                     // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.TeamSpottedActorInfo
// 0x0014 (0x0020 - 0x000C)
struct FTeamSpottedActorInfo : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class AFortPlayerController*                       Spotter;                                                  // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class AActor*                                      SpottedActor;                                             // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.TeamSpottedActorInfoArray
// 0x0018 (0x00C8 - 0x00B0)
struct FTeamSpottedActorInfoArray : public FFastArraySerializer
{
	TArray<struct FTeamSpottedActorInfo>               SpottedActorInfo;                                         // 0x00B0(0x0010) (CPF_ZeroConstructor)
	class AFortTeamInfo*                               OwningTeam;                                               // 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
};

// ScriptStruct FortniteGame.TeamStrategicBuildingEntry
// 0x000C (0x0018 - 0x000C)
struct FTeamStrategicBuildingEntry : public FFastArraySerializerItem
{
	struct FTeamStrategicBuildingHandle                StrategicBuildingHandle;                                  // 0x000C(0x0004) (CPF_Transient)
	class AStrategicBuildingActor*                     StrategicBuilding;                                        // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.TeamStrategicBuildingEntryArray
// 0x0010 (0x00C0 - 0x00B0)
struct FTeamStrategicBuildingEntryArray : public FFastArraySerializer
{
	TArray<struct FTeamStrategicBuildingEntry>         Items;                                                    // 0x00B0(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.TeamFOBCoreBuildingEntry
// 0x002C (0x0038 - 0x000C)
struct FTeamFOBCoreBuildingEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class ABuildingFOBCoreActor*                       FOB;                                                      // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       SpawnLocationTags;                                        // 0x0018(0x0020) (CPF_Transient)
};

// ScriptStruct FortniteGame.TeamFOBCoreBuildingEntryArray
// 0x0010 (0x00C0 - 0x00B0)
struct FTeamFOBCoreBuildingEntryArray : public FFastArraySerializer
{
	TArray<struct FTeamFOBCoreBuildingEntry>           Items;                                                    // 0x00B0(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.TokenAttributePair
// 0x0028
struct FTokenAttributePair
{
	struct FGameplayTag                                Token;                                                    // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FGameplayAttribute                          Attribute;                                                // 0x0008(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.FortTokenContextInfo
// 0x0038
struct FFortTokenContextInfo
{
	struct FGameplayTagContainer                       RequiredContextTags;                                      // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       Text;                                                     // 0x0020(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.FortTooltipTokenInfo
// 0x0018
struct FFortTooltipTokenInfo
{
	struct FGameplayTag                                Token;                                                    // 0x0000(0x0008) (CPF_Edit)
	TArray<struct FFortTokenContextInfo>               ContextDetails;                                           // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.TrackMovement
// 0x0010
struct FTrackMovement
{
	class USplineComponent*                            CurrentSpline;                                            // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              DistanceAlongSpline;                                      // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bReverseDirectionAlongSpline;                             // 0x000C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.RepTrackMovement
// 0x0008 (0x0018 - 0x0010)
struct FRepTrackMovement : public FTrackMovement
{
	float                                              TimeStamp;                                                // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.AbilityToolSpawnParameters
// 0x0028
struct FAbilityToolSpawnParameters
{
	class UClass*                                      SpawnClass;                                               // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0014(0x000C) (CPF_BlueprintVisible, CPF_IsPlainOldData)
	class ABuildingSMActor*                            AttachedToActor;                                          // 0x0020(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortEffectDistanceQuality
// 0x0018
struct FFortEffectDistanceQuality
{
	float                                              MinDistanceCinematic;                                     // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinDistanceEpic;                                          // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinDistanceHigh;                                          // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinDistanceMedium;                                        // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinDistanceLow;                                           // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAllowCinematic : 1;                                      // 0x0014(0x0001)
	unsigned char                                      bAllowEpic : 1;                                           // 0x0014(0x0001)
	unsigned char                                      bAllowHigh : 1;                                           // 0x0014(0x0001)
	unsigned char                                      bAllowMedium : 1;                                         // 0x0014(0x0001)
	unsigned char                                      bAllowLow : 1;                                            // 0x0014(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.CameraPair
// 0x0010
struct FCameraPair
{
	EFrontEndCamera                                    Type;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AFortCameraBase*                             Camera;                                                   // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.TileGroupInfo
// 0x0018
struct FTileGroupInfo
{
	class UWorldTileGroup*                             TileGroup;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Weight;                                                   // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinTiles;                                                 // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxTiles;                                                 // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bPlaceAdjacent : 1;                                       // 0x0014(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.TileGroupSelection
// 0x0010
struct FTileGroupSelection
{
	TArray<struct FTileGroupInfo>                      TileGroupOptions;                                         // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.TileGroupMapInfo
// 0x0030
struct FTileGroupMapInfo
{
	TAssetPtr<class UWorld>                            GroupWorld;                                               // 0x0000(0x0020) (CPF_Edit)
	float                                              Weight;                                                   // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FName                                       QuotaCategory;                                            // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.ProjectileEventData
// 0x0028
struct FProjectileEventData
{
	class AFortProjectileBase*                         SpawnedProjectile;                                        // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FHitResult>                          Hits;                                                     // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<class AActor*>                              ExplodedActors;                                           // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.MtxPackage
// 0x00A0
struct FMtxPackage
{
	struct FString                                     StorefrontName;                                           // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     OfferId;                                                  // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FText                                       Title;                                                    // 0x0020(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0038(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                TotalAmount;                                              // 0x0050(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BonusAmount;                                              // 0x0054(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Price;                                                    // 0x0058(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET
	struct FText                                       SaleBasePrice;                                            // 0x0078(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FString                                     DisplayAssetPath;                                         // 0x0090(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortInputActionDetails
// 0x0020
struct FFortInputActionDetails
{
	EFortInputActionType                               InputActionType;                                          // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FKey                                        ActionKey;                                                // 0x0008(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.GameSummaryInfo
// 0x0018
struct FGameSummaryInfo
{
	struct FString                                     GameSessionID;                                            // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	bool                                               Completed;                                                // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.ConfirmationDialogAction
// 0x00D0
struct FConfirmationDialogAction
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_BlueprintVisible)
	struct FText                                       HoverText;                                                // 0x0018(0x0018) (CPF_BlueprintVisible)
	struct FName                                       ResultName;                                               // 0x0030(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FSlateBrush                                 Icon;                                                     // 0x0038(0x0090) (CPF_BlueprintVisible)
	struct FName                                       ActionName;                                               // 0x00C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortDialogDescription_NUI
// 0x0180
struct FFortDialogDescription_NUI
{
	struct FSlateBrush                                 Icon;                                                     // 0x0000(0x0090) (CPF_BlueprintVisible)
	struct FText                                       MessageHeader;                                            // 0x0090(0x0018) (CPF_BlueprintVisible)
	struct FText                                       MessageBody;                                              // 0x00A8(0x0018) (CPF_BlueprintVisible)
	TArray<struct FConfirmationDialogAction>           ConfirmButtonInputActions;                                // 0x00C0(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FName                                       DeclineButtonInputAction;                                 // 0x00D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bMultipleConfirmButtons;                                  // 0x00D8(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	class UWidget*                                     AdditionalContent;                                        // 0x00E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidget*                                     LeftAdditionalContent;                                    // 0x00E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              DisplayTime;                                              // 0x00F0(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Dismissable;                                              // 0x00F4(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bShouldWaitForLatentActionOnConfirmAction;                // 0x00F5(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00F6(0x0002) MISSED OFFSET
	class UFortNotificationHandler*                    NotificationHandler;                                      // 0x00F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x80];                                      // 0x0100(0x0080) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCatalogMetaPreload
// 0x0030
struct FFortCatalogMetaPreload
{
	TArray<TAssetPtr<class UFortAccountItemDefinition>> ChaseItems;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TAssetPtr<class UFortCardPackItemDefinition>       PackDefinition;                                           // 0x0010(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.FortCatalogMeta
// 0x0018
struct FFortCatalogMeta
{
	TArray<class UFortAccountItemDefinition*>          ChaseItems;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	class UFortCardPackItemDefinition*                 PackDefinition;                                           // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortLoginReward
// 0x0048 (0x0050 - 0x0008)
struct FFortLoginReward : public FTableRowBase
{
	TAssetPtr<class UFortAccountItemDefinition>        ItemDefinition;                                           // 0x0008(0x0020) (CPF_Edit)
	int                                                ItemCount;                                                // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0030(0x0018) (CPF_Edit)
	bool                                               bIsMajorReward;                                           // 0x0048(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.TransmogSacrifice
// 0x0008 (0x0010 - 0x0008)
struct FTransmogSacrifice : public FTableRowBase
{
	int                                                TransmogSacrificePoints;                                  // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.Recipe
// 0x0048 (0x0050 - 0x0008)
struct FRecipe : public FTableRowBase
{
	TArray<struct FFortItemQuantityPair>               RecipeResults;                                            // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	bool                                               bIsConsumed;                                              // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TArray<struct FFortItemQuantityPair>               RecipeCosts;                                              // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FGameplayTagContainer                       RequiredCatalysts;                                        // 0x0030(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.FortDayPhaseCallbackHandle
// 0x0010
struct FFortDayPhaseCallbackHandle
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMultiSizeMargin
// 0x0060
struct FFortMultiSizeMargin
{
	struct FMargin                                     Margin_XXS;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FMargin                                     Margin_XS;                                                // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FMargin                                     Margin_S;                                                 // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FMargin                                     Margin_M;                                                 // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FMargin                                     Margin_L;                                                 // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FMargin                                     Margin_XL;                                                // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.FortMultiSizeFont
// 0x0270
struct FFortMultiSizeFont
{
	struct FSlateFontInfo                              Font_XXS;                                                 // 0x0000(0x0068) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FSlateFontInfo                              Font_XS;                                                  // 0x0068(0x0068) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FSlateFontInfo                              Font_S;                                                   // 0x00D0(0x0068) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FSlateFontInfo                              Font_M;                                                   // 0x0138(0x0068) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FSlateFontInfo                              Font_L;                                                   // 0x01A0(0x0068) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FSlateFontInfo                              Font_XL;                                                  // 0x0208(0x0068) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.FortGiftGiver
// 0x0008 (0x0030 - 0x0028)
struct FFortGiftGiver : public FFortGiftingInfo
{
	int                                                NumItemsGiven;                                            // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPlacementDistanceRequirements
// 0x0008
struct FFortPlacementDistanceRequirements
{
	float                                              DistanceRangeMin;                                         // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DistanceRangeMax;                                         // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortSurfaceDamageRatioStats
// 0x0060 (0x0068 - 0x0008)
struct FFortSurfaceDamageRatioStats : public FTableRowBase
{
	struct FName                                       Default;                                                  // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       Wood;                                                     // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       Stone;                                                    // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       Metal;                                                    // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       HumanEntity;                                              // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       AIEntity;                                                 // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       Explosive;                                                // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeakSpot;                                                 // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       Objective;                                                // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeakSpot_Wood;                                            // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeakSpot_Stone;                                           // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeakSpot_Metal;                                           // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortSurfaceDamageRatioByAffiliationStats
// 0x0010 (0x0018 - 0x0008)
struct FFortSurfaceDamageRatioByAffiliationStats : public FTableRowBase
{
	float                                              Friendly;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Neutral;                                                  // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Hostile;                                                  // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortWeakSpotPosition
// 0x001C
struct FFortWeakSpotPosition
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x000C(0x000C) (CPF_IsPlainOldData)
	bool                                               bValidSpot;                                               // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.BuildingValueRules
// 0x001C
struct FBuildingValueRules
{
	int                                                CellsAbove;                                               // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CellsBelow;                                               // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CellHorizontalRadius;                                     // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DistanceFromObjectiveWeight;                              // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AttackWeight;                                             // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StructuralWeight;                                         // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TrapWeight;                                               // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortGameplayAbilityTargetData_SingleTargetHit
// 0x0008 (0x0098 - 0x0090)
struct FFortGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData_SingleTargetHit
{
	int                                                CartridgeID;                                              // 0x0090(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGameplayEffectContext
// 0x0058 (0x00C0 - 0x0068)
struct FFortGameplayEffectContext : public FGameplayEffectContext
{
	bool                                               bIsFatalHit;                                              // 0x0068(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsCriticalHit;                                           // 0x0069(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsFullBodyHit;                                           // 0x006A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x006B(0x0001) MISSED OFFSET
	float                                              KnockbackMagnitude;                                       // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              KnockbackZAngle;                                          // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StunTime;                                                 // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ChargeMagnitude;                                          // 0x0078(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       TooltipTags;                                              // 0x0080(0x0020)
	int                                                CartridgeID;                                              // 0x00A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       ItemGuid;                                                 // 0x00A4(0x0010) (CPF_IsPlainOldData)
	TWeakObjectPtr<class UObject>                      DamageSourceObject;                                       // 0x00B4(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SourceLevel;                                              // 0x00BC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortPresenceBasicInfo
// 0x0004
struct FFortPresenceBasicInfo
{
	int                                                HomeBaseRating;                                           // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortNamedCounterStat
// 0x0010
struct FFortNamedCounterStat
{
	int                                                CurrentCount;                                             // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FDateTime                                   LastIncrementedTime;                                      // 0x0008(0x0008)
};

// ScriptStruct FortniteGame.QuickBarAndSlot
// 0x0008
struct FQuickBarAndSlot
{
	EFortQuickBars                                     QuickBarType;                                             // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                QuickBarSlot;                                             // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortZoneStats
// 0x0190
struct FFortZoneStats
{
	unsigned char                                      UnknownData00[0x190];                                     // 0x0000(0x0190) MISSED OFFSET
};

// ScriptStruct FortniteGame.ContainerStatInfo
// 0x000C
struct FContainerStatInfo
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct FortniteGame.EnemyNpcStatInfo
// 0x0010
struct FEnemyNpcStatInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.DefenderNPCStatInfo
// 0x000C
struct FDefenderNPCStatInfo
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct FortniteGame.VisibilityTestPoint
// 0x0018
struct FVisibilityTestPoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         Component;                                                // 0x0010(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortAbilityCanHitParameters
// 0x0018
struct FFortAbilityCanHitParameters
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortKeepAmmoStash
// 0x0028 (0x0030 - 0x0008)
struct FFortKeepAmmoStash : public FTableRowBase
{
	int                                                Max1;                                                     // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Cooldown1;                                                // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Max2;                                                     // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Cooldown2;                                                // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Max3;                                                     // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Cooldown3;                                                // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Max4;                                                     // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Cooldown4;                                                // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PickupTier;                                               // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortKeepItemGroup
// 0x0010 (0x0018 - 0x0008)
struct FFortKeepItemGroup : public FTableRowBase
{
	int                                                Items;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxTier;                                                  // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BaseLevel;                                                // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortKeepResourceGroup
// 0x0040 (0x0048 - 0x0008)
struct FFortKeepResourceGroup : public FTableRowBase
{
	struct FName                                       Container;                                                // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ItemCount;                                                // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     ResourceName;                                             // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TAssetPtr<class UFortItemDefinition>               FullPath;                                                 // 0x0028(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.TrackPieceConfig
// 0x001C
struct FTrackPieceConfig
{
	ETrackPieceType                                    Type;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FRotator                                    Rotation;                                                 // 0x0004(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0010(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.TrackSplineConfig
// 0x0003
struct FTrackSplineConfig
{
	bool                                               bUseSpline;                                               // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	ETrackDirection                                    Start;                                                    // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	ETrackDirection                                    End;                                                      // 0x0002(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.TrackSwitchStateConfig
// 0x0024
struct FTrackSwitchStateConfig
{
	struct FTrackPieceConfig                           TrackPiece;                                               // 0x0000(0x001C) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FTrackSplineConfig                          SplineConfig1;                                            // 0x001C(0x0003) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FTrackSplineConfig                          SplineConfig2;                                            // 0x001F(0x0003) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteGame.TrackConfiguration
// 0x0038
struct FTrackConfiguration
{
	TArray<bool>                                       NeighborsByDirection;                                     // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FTrackSwitchStateConfig>             SwitchStates;                                             // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FRotator                                    SwitchRotation;                                           // 0x0020(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     SwitchOffset;                                             // 0x002C(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.TimeOfDayEditorViewSettings
// 0x0001
struct FTimeOfDayEditorViewSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct FortniteGame.ThreatGridIndex
// 0x0008
struct FThreatGridIndex
{
	int                                                X;                                                        // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                Y;                                                        // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortFeedbackEvent
// 0x0030
struct FFortFeedbackEvent
{
	class AFortPawn*                                   Instigator;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AFortPawn*                                   Recipient;                                                // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortFeedbackHandle                         Handle;                                                   // 0x0010(0x0018) (CPF_Edit)
	float                                              Delay;                                                    // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bOverriddenQueuing;                                       // 0x002C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortLinearSpline
// 0x0001
struct FFortLinearSpline
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct FortniteGame.DamagerInfoAnalytics
// 0x0018
struct FDamagerInfoAnalytics
{
	struct FString                                     DamageCauser;                                             // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                DamageAmount;                                             // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIPawnStats
// 0x0058 (0x00D0 - 0x0078)
struct FFortAIPawnStats : public FFortPawnStats
{
	int                                                ScoreValue;                                               // 0x0078(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DormantSightRadius;                                       // 0x007C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DormantHearingThreshold;                                  // 0x0080(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DormantLOSHearingThreshold;                               // 0x0084(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DormantPeripheralVisionAngle;                             // 0x0088(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AlertSightRadius;                                         // 0x008C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AlertHearingThreshold;                                    // 0x0090(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AlertLOSHearingThreshold;                                 // 0x0094(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AlertPeripheralVisionAngle;                               // 0x0098(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoSuccessRangeFromLastSeenLocation;                     // 0x009C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveTable*                                 HealthScalingTable;                                       // 0x00A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       HealthScalingTableRow;                                    // 0x00A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveTable*                                 ControlResistanceScalingTable;                            // 0x00B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ControlResistanceScalingTableRow;                         // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveTable*                                 DifficultyRatingTable;                                    // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       DifficultyRatingTableRow;                                 // 0x00C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.RunVariationData
// 0x000C
struct FRunVariationData
{
	TWeakObjectPtr<class AFortAIPawn>                  FortAIPawn;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Distance;                                                 // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortMissionGenerationElementCostAndAvailabilityRow
// 0x0018 (0x0020 - 0x0008)
struct FFortMissionGenerationElementCostAndAvailabilityRow : public FTableRowBase
{
	class UCurveTable*                                 AvailabilityCurveTable;                                   // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       AvailabilityCurveTableRow;                                // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinCost;                                                  // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxCost;                                                  // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortEncounterAIDirectorFactor
// 0x000C
struct FFortEncounterAIDirectorFactor
{
	float                                              CurrentValue;                                             // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AccumulatedPeriodValue;                                   // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TotalPeriodTime;                                          // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.CurrentIntensityAnalyticsBucket
// 0x0038
struct FCurrentIntensityAnalyticsBucket
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortIntensityCurve
// 0x0038 (0x0040 - 0x0008)
struct FFortIntensityCurve : public FTableRowBase
{
	class UCurveTable*                                 IntensityCurveTable;                                      // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       IntensityCurveTableRow;                                   // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LowPlayerPerformancePeakIntensityThreshold;               // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NormalPlayerPerformancePeakIntensityThreshold;            // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HighPlayerPerformancePeakIntensityThreshold;              // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxRampTime;                                              // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FadeEndIntensityThreshold;                                // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartIntensityOffsetFloor;                                // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndIntensityOffsetFloor;                                  // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartIntensityOffsetCeiling;                              // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndIntensityOffsetCeiling;                                // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSpawnPointsPercentageCurve
// 0x0018 (0x0020 - 0x0008)
struct FFortSpawnPointsPercentageCurve : public FTableRowBase
{
	class UCurveTable*                                 SpawnPointsPercentageCurveTable;                          // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SpawnPointsPercentageCurveTableRow;                       // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxRampTime;                                              // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortVariantSpawnPoints
// 0x0008 (0x0010 - 0x0008)
struct FFortVariantSpawnPoints : public FTableRowBase
{
	int                                                BudgetPoints;                                             // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIEncounterRiftManagerInitializationData
// 0x00C0
struct FFortAIEncounterRiftManagerInitializationData
{
	class UFortAIEncounterInfo*                        EncounterInfo;                                            // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortEncounterSettings                      EncounterSettings;                                        // 0x0008(0x0058)
	struct FEncounterEnvironmentQueryInfo              CurrentEnvironmentQueryInfo;                              // 0x0060(0x0028)
	struct FEncounterEnvironmentQueryInfo              FallbackEnvironmentQueryInfo;                             // 0x0088(0x0028)
	class UClass*                                      RiftClassTemplate;                                        // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumRiftsToUse;                                            // 0x00B8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinRiftsToUse;                                            // 0x00BC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.AIAssignmentInfo
// 0x0080
struct FAIAssignmentInfo
{
	TWeakObjectPtr<class UFortAIAssignment>            CurrentAssignment;                                        // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortAIGoalInfo                             CurrentGoal;                                              // 0x0008(0x0018)
	float                                              TimeCurrentGoalWasChosen;                                 // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeExitedLastAssignmentOfType[0x4];                      // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UFortAIAssignment>            PreviousAssignment;                                       // 0x0034(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortAIGoalInfo                             PreviousGoal;                                             // 0x003C(0x0018)
	bool                                               bWaitingForQueryResponse;                                 // 0x0054(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSuppressGoalUpdates;                                     // 0x0055(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bReportEnemyGoalSelection;                                // 0x0056(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x29];                                      // 0x0057(0x0029) MISSED OFFSET
};

// ScriptStruct FortniteGame.AIDiscouragedGoalTimer
// 0x0028
struct FAIDiscouragedGoalTimer
{
	struct FFortAIGoalInfo                             DiscouragedGoalInfo;                                      // 0x0000(0x0018)
	double                                             ExpirationTime;                                           // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           NumberOfTimesMarkedForDiscouragement;                     // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPlayerPawnStats
// 0x0018 (0x0090 - 0x0078)
struct FFortPlayerPawnStats : public FFortPawnStats
{
	float                                              MaxJumpTime;                                              // 0x0078(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxStamina;                                               // 0x007C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StaminaRegenRate;                                         // 0x0080(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StaminaRegenDelay;                                        // 0x0084(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SprintingStaminaExpenditureRate;                          // 0x0088(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.HomebaseBannerColorData
// 0x0010 (0x0018 - 0x0008)
struct FHomebaseBannerColorData : public FTableRowBase
{
	struct FName                                       ColorKeyName;                                             // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       CategoryRowName;                                          // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.HomebaseBannerIconData
// 0x0078 (0x0080 - 0x0008)
struct FHomebaseBannerIconData : public FTableRowBase
{
	TAssetPtr<class UTexture2D>                        SmallImage;                                               // 0x0008(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UTexture2D>                        LargeImage;                                               // 0x0028(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FName                                       CategoryRowName;                                          // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0050(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FText                                       DisplayDescription;                                       // 0x0068(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.HomebaseBannerCategoryData
// 0x0020 (0x0028 - 0x0008)
struct FHomebaseBannerCategoryData : public FTableRowBase
{
	struct FText                                       CategoryDisplayName;                                      // 0x0008(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	int                                                SortPriority;                                             // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.ExpeditionSlot
// 0x0018 (0x0020 - 0x0008)
struct FExpeditionSlot : public FTableRowBase
{
	struct FGameplayTag                                SlotTag;                                                  // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FString                                     LootTierGroup;                                            // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.HomebaseNodeState
// 0x0008
struct FHomebaseNodeState
{
	bool                                               bIsOwned;                                                 // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bArePrereqsMet;                                           // 0x0001(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bArePrereqQuestsCompleted;                                // 0x0002(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAreCostsPayable;                                         // 0x0003(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PurchasePercent;                                          // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortCollectionBookPageCategoryTableRow
// 0x0020 (0x0028 - 0x0008)
struct FFortCollectionBookPageCategoryTableRow : public FTableRowBase
{
	struct FText                                       Name;                                                     // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                SortPriority;                                             // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortDailyLoginRewardStat_ScheduleClaimed
// 0x0008
struct FFortDailyLoginRewardStat_ScheduleClaimed
{
	int                                                RewardsClaimed;                                           // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ClaimedToday;                                             // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortDailyLoginRewardStat
// 0x0060
struct FFortDailyLoginRewardStat
{
	int                                                NextDefaultReward;                                        // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TotalDaysLoggedIn;                                        // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDateTime                                   LastClaimDate;                                            // 0x0008(0x0008)
	TMap<struct FName, struct FFortDailyLoginRewardStat_ScheduleClaimed> AdditionalSchedules;                                      // 0x0010(0x0050) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortDailyRewardsNotification
// 0x0018
struct FFortDailyRewardsNotification
{
	int                                                DaysLoggedIn;                                             // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FMcpLootEntry>                       Items;                                                    // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortOutpostFabricatorInfo
// 0x0018
struct FFortOutpostFabricatorInfo
{
	struct FString                                     DisintegrationStartTime;                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                QuantumGooCompleted;                                      // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                QuantumGooStillToProcess;                                 // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortOutpostPOSTInfo
// 0x0010
struct FFortOutpostPOSTInfo
{
	TArray<struct FFortDepositedResources>             DepositedPostItems;                                       // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.OutpostCraftingTableData
// 0x0018 (0x0020 - 0x0008)
struct FOutpostCraftingTableData : public FTableRowBase
{
	int                                                Level;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ItemCount;                                                // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     RequiredItems;                                            // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.OutpostDisintegrationData
// 0x0028 (0x0030 - 0x0008)
struct FOutpostDisintegrationData : public FTableRowBase
{
	TAssetPtr<class UFortWorldItemDefinition>          ItemDefinition;                                           // 0x0008(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                DisintegrationValue;                                      // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.OutpostItemUpgradeData
// 0x0048 (0x0050 - 0x0008)
struct FOutpostItemUpgradeData : public FTableRowBase
{
	TAssetPtr<class UFortOutpostItemDefinition>        ItemDefinition;                                           // 0x0008(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                ItemLevel;                                                // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     RequiredItems;                                            // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     RequiredAccountItems;                                     // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortLootTierData
// 0x00A8 (0x00B0 - 0x0008)
struct FFortLootTierData : public FTableRowBase
{
	struct FName                                       TierGroup;                                                // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Weight;                                                   // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ELootQuotaLevel>                       QuotaLevel;                                               // 0x0014(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                LootTier;                                                 // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinWorldLevel;                                            // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxWorldLevel;                                            // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     StreakBreakerCurrency;                                    // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	int                                                StreakBreakerPointsMin;                                   // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StreakBreakerPointsMax;                                   // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StreakBreakerPointsSpend;                                 // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FName                                       LootPackage;                                              // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       LootPreviewPackage;                                       // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NumLootPackageDrops;                                      // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<int>                                        LootPackageCategoryWeightArray;                           // 0x0060(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<int>                                        LootPackageCategoryMinArray;                              // 0x0070(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<int>                                        LootPackageCategoryMaxArray;                              // 0x0080(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	struct FGameplayTag                                RequiredGameplayTag;                                      // 0x0090(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	bool                                               bAllowBonusLootDrops;                                     // 0x0098(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FString                                     Annotation;                                               // 0x00A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortLootPackageData
// 0x0080 (0x0088 - 0x0008)
struct FFortLootPackageData : public FTableRowBase
{
	struct FName                                       LootPackageID;                                            // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Weight;                                                   // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LootPackageCategory;                                      // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FName                                       RequiredTag;                                              // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     LootPackageCall;                                          // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TAssetPtr<class UFortItemDefinition>               ItemDefinition;                                           // 0x0038(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FString                                     PersistentLevel;                                          // 0x0058(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	int                                                MinWorldLevel;                                            // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxWorldLevel;                                            // 0x006C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAllowBonusDrops;                                         // 0x0070(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	struct FString                                     Annotation;                                               // 0x0078(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortSurvivorNameData
// 0x0018 (0x0020 - 0x0008)
struct FFortSurvivorNameData : public FTableRowBase
{
	struct FText                                       Name;                                                     // 0x0008(0x0018) (CPF_Edit, CPF_EditConst)
};

// ScriptStruct FortniteGame.FortZoneEvent
// 0x0020
struct FFortZoneEvent
{
	struct FName                                       EventType;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortQuestManagerAttributes
// 0x0010
struct FFortQuestManagerAttributes
{
	struct FDateTime                                   DailyLoginInterval;                                       // 0x0000(0x0008)
	int                                                DailyQuestRerolls;                                        // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortFoundQuestMissions
// 0x0048
struct FFortFoundQuestMissions
{
	struct FString                                     TheaterId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor)
	bool                                               bIsValidForAllPlayableMissions;                           // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<struct FFortAvailableMissionData>           LinkedMissions;                                           // 0x0018(0x0010) (CPF_ZeroConstructor)
	TArray<struct FFortAvailableMissionData>           TagMatchingMissions;                                      // 0x0028(0x0010) (CPF_ZeroConstructor)
	TArray<struct FFortAvailableMissionData>           FallbackMatchingMissions;                                 // 0x0038(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.TieredWaveCollectionLootSetData
// 0x0020
struct FTieredWaveCollectionLootSetData
{
	TArray<struct FName>                               StartOfCollectionItemTierGroups;                          // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FName>                               SuccessfulWaveItemTierGroups;                             // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
};

// ScriptStruct FortniteGame.TieredWaveCollectionLootSet
// 0x0010 (0x0018 - 0x0008)
struct FTieredWaveCollectionLootSet : public FTableRowBase
{
	TArray<struct FTieredWaveCollectionLootSetData>    LootSetData;                                              // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
};

// ScriptStruct FortniteGame.TieredModifierSet
// 0x0010 (0x0018 - 0x0008)
struct FTieredModifierSet : public FTableRowBase
{
	TArray<struct FTieredModifierSetData>              ModifierData;                                             // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
};

// ScriptStruct FortniteGame.TieredWaveSet
// 0x0010 (0x0018 - 0x0008)
struct FTieredWaveSet : public FTableRowBase
{
	TArray<struct FTieredWaveSetData>                  WaveData;                                                 // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
};

// ScriptStruct FortniteGame.TieredWaveSetCollection
// 0x0010 (0x0018 - 0x0008)
struct FTieredWaveSetCollection : public FTableRowBase
{
	TArray<struct FTieredWaveSetCollectionData>        CollectionData;                                           // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
};

// ScriptStruct FortniteGame.ScoreMultiplierRow
// 0x0080 (0x0088 - 0x0008)
struct FScoreMultiplierRow : public FTableRowBase
{
	float                                              CombatMultiplier;                                         // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BuildingMultiplier;                                       // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UtilityMultiplier;                                        // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BadgeMultiplier;                                          // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MonsterKills;                                             // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MonsterDamagePoints;                                      // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PlayerKills;                                              // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                WoodGathered;                                             // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StoneGathered;                                            // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MetalGathered;                                            // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Deaths;                                                   // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BuildingsBuilt;                                           // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BuildingsBuilt_Wood;                                      // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BuildingsBuilt_Stone;                                     // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BuildingsBuilt_Metal;                                     // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BuildingsUpgraded_Wood2;                                  // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BuildingsUpgraded_Wood3;                                  // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BuildingsUpgraded_Stone2;                                 // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BuildingsUpgraded_Stone3;                                 // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BuildingsUpgraded_Metal2;                                 // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BuildingsUpgraded_Metal3;                                 // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BuildingsDestroyed;                                       // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Repair_Wood;                                              // 0x0060(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Repair_Stone;                                             // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Repair_Metal;                                             // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                FlagsCaptured;                                            // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                FlagsReturned;                                            // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ContainersLooted;                                         // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CraftingPoints;                                           // 0x0078(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TrapPlacementPoints;                                      // 0x007C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TrapActivationPoints;                                     // 0x0080(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.WorldItemAndMinMaxCount
// 0x0028
struct FWorldItemAndMinMaxCount
{
	struct FCurveTableRowHandle                        MinCurveTable;                                            // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FCurveTableRowHandle                        MaxCurveTable;                                            // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UFortWorldItemDefinition*                    Item;                                                     // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortLevelUpData
// 0x0028 (0x0030 - 0x0008)
struct FFortLevelUpData : public FTableRowBase
{
	int                                                Xp;                                                       // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     ItemRewardsText;                                          // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	float                                              XPDisplayMultiplier;                                      // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RestXPCap;                                                // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RestXPRechargeRate;                                       // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BoostXPPerConsumable;                                     // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.GeneralChatRoom
// 0x0028
struct FGeneralChatRoom
{
	struct FString                                     RoomName;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                CurrentMembersCount;                                      // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxMembersCount;                                          // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     PublicFacingShardName;                                    // 0x0018(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.GeneralChatRecommendations
// 0x0028
struct FGeneralChatRecommendations
{
	TArray<struct FGeneralChatRoom>                    GlobalChatRooms;                                          // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FGeneralChatRoom>                    FounderChatRooms;                                         // 0x0010(0x0010) (CPF_ZeroConstructor)
	bool                                               bNeedsPaidAccessForGlobalChat;                            // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bNeedsPaidAccessForFounderChat;                           // 0x0021(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsGlobalChatDisabled;                                    // 0x0022(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsFounderChatDisabled;                                   // 0x0023(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsSubGameGlobalChatDisabled;                             // 0x0024(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.QueryXboxUserXUIDParams
// 0x0010
struct FQueryXboxUserXUIDParams
{
	struct FString                                     UserXSTSToken;                                            // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.IssuedFriendCode
// 0x0028
struct FIssuedFriendCode
{
	struct FString                                     CodeId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     CodeType;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FDateTime                                   DateCreated;                                              // 0x0020(0x0008)
};

// ScriptStruct FortniteGame.XboxDedicatedServerSessionCreationParams
// 0x0030
struct FXboxDedicatedServerSessionCreationParams
{
	struct FString                                     TitleId;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     SandboxId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             XboxUserIds;                                              // 0x0020(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.AttributeClamp
// 0x0028
struct FAttributeClamp
{
	struct FGameplayAttribute                          Attribute;                                                // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	EClampType                                         ClampType;                                                // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              ClampValue;                                               // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.PlayerClampInfo
// 0x0010 (0x0018 - 0x0008)
struct FPlayerClampInfo : public FTableRowBase
{
	TArray<struct FAttributeClamp>                     AttributeClamps;                                          // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortCollectionBookStat
// 0x0018
struct FFortCollectionBookStat
{
	TArray<struct FString>                             Pages;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                MaxBookXpLevelAchieved;                                   // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortUserCloudRequestPayload
// 0x0048
struct FFortUserCloudRequestPayload
{
	struct FFortUserCloudRequestHandle                 RequestHandle;                                            // 0x0000(0x0008)
	struct FUniqueNetIdRepl                            UserNetID;                                                // 0x0008(0x0018)
	struct FString                                     Filename;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor)
	EFortUserCloudRequestType                          RequestType;                                              // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	TArray<unsigned char>                              DataBuffer;                                               // 0x0038(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortUserCloudRequest
// 0x0090
struct FFortUserCloudRequest
{
	struct FFortUserCloudRequestPayload                RequestPayload;                                           // 0x0000(0x0048)
	unsigned char                                      bNeedsFileEnumeration : 1;                                // 0x0048(0x0001)
	unsigned char                                      bStartedProcessing : 1;                                   // 0x0048(0x0001)
	unsigned char                                      UnknownData00[0x47];                                      // 0x0049(0x0047) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortUserCloudRequestQueue
// 0x0028
struct FFortUserCloudRequestQueue
{
	unsigned char                                      bFreezeIncomingRequests : 1;                              // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FFortUserCloudRequestHandle                 FirstFrozenHandle;                                        // 0x0008(0x0008)
	struct FTimerHandle                                ProcessingTimerHandle;                                    // 0x0010(0x0008)
	TArray<struct FFortUserCloudRequest>               RequestQueue;                                             // 0x0018(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortMissionAlertData
// 0x0090 (0x0098 - 0x0008)
struct FFortMissionAlertData : public FTableRowBase
{
	struct FName                                       CategoryRowName;                                          // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SpreadRowName;                                            // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     RequiredEventFlag;                                        // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	bool                                               bOnlyUsedForSpreading;                                    // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                MinimumTileDifficulty;                                    // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaximumTileDifficulty;                                    // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<TAssetPtr<class UClass>>                    AllowedZoneThemes;                                        // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TAssetPtr<class UClass>                            MissionGenerator;                                         // 0x0048(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TArray<struct FFortItemQuantityPair>               ItemRewards;                                              // 0x0068(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     LootTierGroup;                                            // 0x0078(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     ModifierTierGroup;                                        // 0x0088(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortMissionAlertSpreadData
// 0x0018 (0x0020 - 0x0008)
struct FFortMissionAlertSpreadData : public FTableRowBase
{
	float                                              ChanceToSpread;                                           // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TotalChancesToSpread;                                     // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxNumTilesToSpreadTo;                                    // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SpreadInterval;                                           // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       MissionAlertRowName;                                      // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortMissionAlertCategoryData
// 0x0030 (0x0038 - 0x0008)
struct FFortMissionAlertCategoryData : public FTableRowBase
{
	EFortMissionAlertCategory                          Category;                                                 // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                Priority;                                                 // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Quota;                                                    // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               MissionAlertRepeatable;                                   // 0x0014(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FGameplayTagContainer                       CategoryTagsContainer;                                    // 0x0018(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortEventFlagsNotification
// 0x0018
struct FFortEventFlagsNotification
{
	TArray<struct FString>                             EventFlags;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FDateTime                                   RefreshTime;                                              // 0x0010(0x0008)
};

// ScriptStruct FortniteGame.FriendCodeIssuedNotification
// 0x0020
struct FFriendCodeIssuedNotification
{
	struct FString                                     Code;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     CodeType;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortMissionAlertClaimData
// 0x0020
struct FFortMissionAlertClaimData
{
	TArray<struct FString>                             MissionAlertGUIDs;                                        // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FDateTime>                           LastClaimedTimes;                                         // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortMissionAlertRecord
// 0x0080
struct FFortMissionAlertRecord
{
	TMap<EFortMissionAlertCategory, struct FFortMissionAlertClaimData> LastClaimTimesMap;                                        // 0x0000(0x0050) (CPF_ZeroConstructor)
	TArray<int>                                        OldestClaimIndexForCategory;                              // 0x0050(0x0010) (CPF_ZeroConstructor)
	struct FMcpLootResult                              PendingMissionAlertRewards;                               // 0x0060(0x0020)
};

// ScriptStruct FortniteGame.FortCollectionBookClaimRewardNotification
// 0x0040
struct FFortCollectionBookClaimRewardNotification
{
	struct FMcpLootResult                              Loot;                                                     // 0x0000(0x0020)
	struct FString                                     Page;                                                     // 0x0020(0x0010) (CPF_ZeroConstructor)
	struct FString                                     Section;                                                  // 0x0030(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortCollectionBookSlotItemNotification
// 0x0010
struct FFortCollectionBookSlotItemNotification
{
	struct FString                                     SlottedItemId;                                            // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortMissionAlertCompleteNotification
// 0x0020
struct FFortMissionAlertCompleteNotification
{
	struct FMcpLootResult                              LootGranted;                                              // 0x0000(0x0020)
};

// ScriptStruct FortniteGame.FortTransmogResultNotification
// 0x0020
struct FFortTransmogResultNotification
{
	TArray<struct FMcpLootEntry>                       TransmoggedItems;                                         // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FMcpLootEntry>                       RecycledItems;                                            // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortConversionResultNotification
// 0x0010
struct FFortConversionResultNotification
{
	TArray<struct FMcpLootEntry>                       ItemsGranted;                                             // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortCollectedResourceNotification
// 0x0020
struct FFortCollectedResourceNotification
{
	struct FMcpLootResult                              Loot;                                                     // 0x0000(0x0020)
};

// ScriptStruct FortniteGame.FortReceivedGiftedBoostXpNotification
// 0x0018
struct FFortReceivedGiftedBoostXpNotification
{
	int                                                AmountBoostXpGifted;                                      // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     GifterAccountId;                                          // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortEarnScoreNotification
// 0x0018
struct FFortEarnScoreNotification
{
	int                                                BaseXPEarned;                                             // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BonusXPEarned;                                            // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BoostXPEarned;                                            // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BoostXPMissed;                                            // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RestXPEarned;                                             // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GroupBoostXPEarned;                                       // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortDailyQuestRerollNotification
// 0x0010
struct FFortDailyQuestRerollNotification
{
	struct FString                                     NewQuestId;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortQuestRewardNotification
// 0x0030
struct FFortQuestRewardNotification
{
	struct FString                                     QuestId;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FMcpLootResult                              Loot;                                                     // 0x0010(0x0020)
};

// ScriptStruct FortniteGame.FortExpeditionResultNotification
// 0x0018
struct FFortExpeditionResultNotification
{
	bool                                               bExpeditionSucceeded;                                     // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FMcpLootEntry>                       ExpeditionRewards;                                        // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortGetMcpTimeForPlayerNotification
// 0x0008
struct FFortGetMcpTimeForPlayerNotification
{
	struct FDateTime                                   McpTime;                                                  // 0x0000(0x0008)
};

// ScriptStruct FortniteGame.CardPackResultNotification
// 0x0028
struct FCardPackResultNotification
{
	struct FMcpLootResult                              LootGranted;                                              // 0x0000(0x0020)
	int                                                DisplayLevel;                                             // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortLootNotification
// 0x0040
struct FFortLootNotification
{
	struct FString                                     LootSource;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     LootSourceInstance;                                       // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FMcpLootResult                              LootGranted;                                              // 0x0020(0x0020)
};

// ScriptStruct FortniteGame.FortNotificationLevelUp
// 0x0058
struct FFortNotificationLevelUp
{
	int                                                Level;                                                    // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     HeroId;                                                   // 0x0008(0x0010) (CPF_ZeroConstructor)
	struct FFortLootNotification                       Loot;                                                     // 0x0018(0x0040)
};

// ScriptStruct FortniteGame.FortMissionCompletionNotification
// 0x0038
struct FFortMissionCompletionNotification
{
	bool                                               bWasCritical;                                             // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     MissionName;                                              // 0x0008(0x0010) (CPF_ZeroConstructor)
	struct FMcpLootResult                              LootGranted;                                              // 0x0018(0x0020)
};

// ScriptStruct FortniteGame.FortHomebaseView
// 0x0040
struct FFortHomebaseView
{
	struct FString                                     TownName;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     BannerIconId;                                             // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FString                                     BannerColorId;                                            // 0x0020(0x0010) (CPF_ZeroConstructor)
	int                                                FlagPattern;                                              // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FlagColor;                                                // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PlayerXP;                                                 // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.CraftingQueueInfo
// 0x0008
struct FCraftingQueueInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMatchKickNotification
// 0x0030
struct FFortMatchKickNotification
{
	struct FUniqueNetIdRepl                            AccountId;                                                // 0x0000(0x0018)
	struct FString                                     Reason;                                                   // 0x0018(0x0010) (CPF_ZeroConstructor)
	EFortMatchKickOption                               Option;                                                   // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.PlayerBuildableClassFilter
// 0x0010
struct FPlayerBuildableClassFilter
{
	TEnumAsByte<EFortResourceType>                     ResourceType;                                             // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TEnumAsByte<EFortBuildingType>                     BuildingType;                                             // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                Level;                                                    // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UBuildingEditModeMetadata*                   EditModeMetadata;                                         // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortHealthBarComponentData
// 0x0018
struct FFortHealthBarComponentData
{
	struct FText                                       DisplayText;                                              // 0x0000(0x0018)
};

// ScriptStruct FortniteGame.HomebaseNodeGameplayEffectDataTableRow
// 0x00D0 (0x00D8 - 0x0008)
struct FHomebaseNodeGameplayEffectDataTableRow : public FTableRowBase
{
	struct FGameplayAttribute                          Attribute;                                                // 0x0008(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TEnumAsByte<EGameplayModOp>                        Operation;                                                // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              Magnitude;                                                // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       ApplicationRequiredTagsContainer;                         // 0x0030(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       RequiredSourceTagsContainer;                              // 0x0050(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       RequiredTargetTagsContainer;                              // 0x0070(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       GrantedTagsContainer;                                     // 0x0090(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       IgnoreSourceTagsContainer;                                // 0x00B0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	int                                                AssociatedGEIdx;                                          // 0x00D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                AssociatedModifierIdx;                                    // 0x00D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.SchematicRequirements
// 0x0010 (0x0018 - 0x0008)
struct FSchematicRequirements : public FTableRowBase
{
	TArray<struct FSchematicRequirement>               Requirements;                                             // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortConversionTierData
// 0x0008
struct FFortConversionTierData
{
	int                                                TierCost;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RequiredItemQuantity;                                     // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortConversionControlKeyCosts
// 0x0090 (0x0098 - 0x0008)
struct FFortConversionControlKeyCosts : public FTableRowBase
{
	TAssetPtr<class UFortItemDefinition>               RequiredItem;                                             // 0x0008(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortConversionTierData                     Handmade;                                                 // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortConversionTierData                     Ordinary;                                                 // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortConversionTierData                     Sturdy;                                                   // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortConversionTierData                     Quality;                                                  // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortConversionTierData                     Fine;                                                     // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortConversionTierData                     Elegant;                                                  // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortConversionTierData                     Masterwork;                                               // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortConversionTierData                     Epic;                                                     // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortConversionTierData                     Badass;                                                   // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortConversionTierData                     Legendary;                                                // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FGameplayTagContainer                       RequiredCatalysts;                                        // 0x0078(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.FortBadgeScoringData
// 0x0010 (0x0018 - 0x0008)
struct FFortBadgeScoringData : public FTableRowBase
{
	int                                                ScoreAwarded;                                             // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                MissionPoints;                                            // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	EStatCategory                                      ScoreCategory;                                            // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                ScoreThreshold;                                           // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortTwitchPendingQuestNotification
// 0x0010
struct FFortTwitchPendingQuestNotification
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTwitchViewerNameAndAccountId
// 0x0020
struct FFortTwitchViewerNameAndAccountId
{
	struct FString                                     TwitchViewerName;                                         // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     AccountId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortTwitchViewerCompletedQuestNotification
// 0x0010
struct FFortTwitchViewerCompletedQuestNotification
{
	TArray<struct FFortTwitchViewerNameAndAccountId>   ViewerIds;                                                // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortTwitchViewerGrantedQuestNotification
// 0x0020
struct FFortTwitchViewerGrantedQuestNotification
{
	struct FString                                     QuestTemplateId;                                          // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FFortTwitchViewerNameAndAccountId>   ViewerIds;                                                // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.QueuedMusic
// 0x0010
struct FQueuedMusic
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortQuestAchievementTableRow
// 0x0010 (0x0018 - 0x0008)
struct FFortQuestAchievementTableRow : public FTableRowBase
{
	EFortQuestState                                    QuestState;                                               // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                XboxAchievementID;                                        // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PS4TrophyID;                                              // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortDestroyedActorRecord
// 0x0050
struct FFortDestroyedActorRecord
{
	struct FGuid                                       ActorGuid;                                                // 0x0000(0x0010) (CPF_IsPlainOldData)
	class UClass*                                      ActorClass;                                               // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FTransform                                  ActorTransform;                                           // 0x0020(0x0030) (CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortBuildingActorArray
// 0x0010
struct FFortBuildingActorArray
{
	TArray<struct FFortDestroyedActorRecord>           ActorRecords;                                             // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.MMAttemptState
// 0x000C
struct FMMAttemptState
{
	int                                                BestSessionIdx;                                           // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumSearchResults;                                         // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EMatchmakingState>                     State;                                                    // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EPartyReservationResult>               LastBeaconResponse;                                       // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTaggedActorOctreeFilter
// 0x0068
struct FFortTaggedActorOctreeFilter
{
	struct FBoxSphereBounds                            Bounds;                                                   // 0x0000(0x001C) (CPF_IsPlainOldData)
	float                                              MinDistanceFromBoundsCenter;                              // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UClass*>                              OptionalSubclasses;                                       // 0x0020(0x0010) (CPF_ZeroConstructor)
	TArray<struct FFortFinderProperty>                 RequiredProperties;                                       // 0x0030(0x0010) (CPF_ZeroConstructor)
	struct FGameplayTagContainer                       TagsToLookFor;                                            // 0x0040(0x0020)
	bool                                               bHasAllTags;                                              // 0x0060(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCollectionBookPageData
// 0x0070 (0x0078 - 0x0008)
struct FFortCollectionBookPageData : public FTableRowBase
{
	struct FText                                       Name;                                                     // 0x0008(0x0018) (CPF_Edit, CPF_EditConst)
	struct FName                                       CategoryId;                                               // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                SortPriority;                                             // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FName                                       ProfileId;                                                // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	TArray<struct FName>                               SectionRowNames;                                          // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	struct FFortRewardInfo                             Rewards;                                                  // 0x0048(0x0030) (CPF_Edit, CPF_EditConst)
};

// ScriptStruct FortniteGame.FortCollectionBookSectionData
// 0x0058 (0x0060 - 0x0008)
struct FFortCollectionBookSectionData : public FTableRowBase
{
	struct FText                                       Name;                                                     // 0x0008(0x0018) (CPF_Edit, CPF_EditConst)
	TArray<struct FName>                               SlotRowNames;                                             // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	struct FFortRewardInfo                             Rewards;                                                  // 0x0030(0x0030) (CPF_Edit, CPF_EditConst)
};

// ScriptStruct FortniteGame.FortCollectionBookSlotXPWeightData
// 0x0010 (0x0018 - 0x0008)
struct FFortCollectionBookSlotXPWeightData : public FTableRowBase
{
	float                                              ConstantWeight;                                           // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              RarityWeight;                                             // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              ItemLevelWeight;                                          // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              ItemRatingWeight;                                         // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortCollectionBookSlotData
// 0x0038 (0x0040 - 0x0008)
struct FFortCollectionBookSlotData : public FTableRowBase
{
	struct FName                                       SlotXpWeightName;                                         // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SlotSourceId;                                             // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SlotSourceId2;                                            // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<TAssetPtr<class UFortItemDefinition>>       AllowedItems;                                             // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FGameplayTag>                        AllowedWorkerPersonalities;                               // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
};

// ScriptStruct FortniteGame.FortCollectionBookSlotSourceData
// 0x0018 (0x0020 - 0x0008)
struct FFortCollectionBookSlotSourceData : public FTableRowBase
{
	struct FText                                       Description;                                              // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.FortCollectionBookXPData
// 0x0040 (0x0048 - 0x0008)
struct FFortCollectionBookXPData : public FTableRowBase
{
	int                                                XpToNextLevel;                                            // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                TotalXpToGetToThisLevel;                                  // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FFortRewardInfo                             Rewards;                                                  // 0x0010(0x0030) (CPF_Edit, CPF_EditConst)
	bool                                               bIsMajorReward;                                           // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	bool                                               bAutoOpenRewardCardPacks;                                 // 0x0041(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMigrationDataTableRow
// 0x0020 (0x0028 - 0x0008)
struct FFortMigrationDataTableRow : public FTableRowBase
{
	struct FString                                     OldItemTemplate;                                          // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FString                                     NewItemTemplate;                                          // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortLootLevelData
// 0x0018 (0x0020 - 0x0008)
struct FFortLootLevelData : public FTableRowBase
{
	struct FName                                       Category;                                                 // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LootLevel;                                                // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinItemLevel;                                             // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxItemLevel;                                             // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortQuestObjectiveStatTableRow
// 0x00D0 (0x00D8 - 0x0008)
struct FFortQuestObjectiveStatTableRow : public FTableRowBase
{
	EFortQuestObjectiveStatEvent                       Type;                                                     // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     TargetTags;                                               // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     SourceTags;                                               // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     ContextTags;                                              // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     Condition;                                                // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     TemplateId;                                               // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FGameplayTagContainer                       TargetTagContainer;                                       // 0x0060(0x0020) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient)
	struct FGameplayTagContainer                       SourceTagContainer;                                       // 0x0080(0x0020) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient)
	struct FGameplayTagContainer                       ContextTagContainer;                                      // 0x00A0(0x0020) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient)
	bool                                               bIsCached;                                                // 0x00C0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x00C1(0x0017) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAnimNode_ScaleHuskBones
// 0x0158 (0x0188 - 0x0030)
struct FFortAnimNode_ScaleHuskBones : public FAnimNode_Base
{
	struct FPoseLink                                   PreScalePose;                                             // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x140];                                     // 0x0048(0x0140) MISSED OFFSET
};

// ScriptStruct FortniteGame.SlopeWarpingFootDefinition
// 0x0040
struct FSlopeWarpingFootDefinition
{
	struct FBoneReference                              IKFootBone;                                               // 0x0000(0x0010) (CPF_Edit)
	struct FBoneReference                              FKFootBone;                                               // 0x0010(0x0010) (CPF_Edit)
	int                                                NumBonesInLimb;                                           // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FName                                       ToeSocketName;                                            // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       HeelSocketName;                                           // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FootSize;                                                 // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.SlopeWarpingFootData
// 0x00E0
struct FSlopeWarpingFootData
{
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0000(0x00E0) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAnimNode_SlopeWarping
// 0x0158 (0x01C8 - 0x0070)
struct FFortAnimNode_SlopeWarping : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0070(0x0018) MISSED OFFSET
	struct FBoneReference                              IKFootRootBone;                                           // 0x0088(0x0010) (CPF_Edit)
	struct FBoneReference                              PelvisBone;                                               // 0x0098(0x0010) (CPF_Edit)
	TArray<struct FSlopeWarpingFootDefinition>         FeetDefinitions;                                          // 0x00A8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FSlopeWarpingFootData>               FeetData;                                                 // 0x00B8(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	struct FVectorRK4SpringInterpolator                PelvisOffsetInterpolator;                                 // 0x00C8(0x0008) (CPF_Edit)
	unsigned char                                      UnknownData01[0x34];                                      // 0x00D0(0x0034) MISSED OFFSET
	struct FVector                                     GravityDir;                                               // 0x0104(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              CachedDeltaTime;                                          // 0x0110(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     TargetFloorNormalWorldSpace;                              // 0x0114(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FVectorRK4SpringInterpolator                FloorNormalInterpolator;                                  // 0x0120(0x0008) (CPF_Edit)
	unsigned char                                      UnknownData02[0x34];                                      // 0x0128(0x0034) MISSED OFFSET
	struct FVector                                     TargetFloorOffsetLocalSpace;                              // 0x015C(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FVectorRK4SpringInterpolator                FloorOffsetInterpolator;                                  // 0x0168(0x0008) (CPF_Edit)
	unsigned char                                      UnknownData03[0x34];                                      // 0x0170(0x0034) MISSED OFFSET
	float                                              MaxStepHeight;                                            // 0x01A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseCapsuleInfoInsteadOfFootTraces : 1;                   // 0x01A8(0x0001) (CPF_Edit)
	unsigned char                                      bWasOnGround : 1;                                         // 0x01A8(0x0001) (CPF_Transient)
	unsigned char                                      bShowDebug : 1;                                           // 0x01A8(0x0001) (CPF_Transient)
	unsigned char                                      bFloorSmoothingInitialized : 1;                           // 0x01A8(0x0001) (CPF_Transient)
	unsigned char                                      UnknownData04[0x3];                                       // 0x01A9(0x0003) MISSED OFFSET
	struct FVector                                     ActorLocation;                                            // 0x01AC(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     GravityDirCompSpace;                                      // 0x01B8(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x01C4(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.SpeedWarpingFootDefinition
// 0x0028
struct FSpeedWarpingFootDefinition
{
	struct FBoneReference                              IKFootBone;                                               // 0x0000(0x0010) (CPF_Edit)
	struct FBoneReference                              FKFootBone;                                               // 0x0010(0x0010) (CPF_Edit)
	int                                                NumBonesInLimb;                                           // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.SpeedWarpingFootData
// 0x0040
struct FSpeedWarpingFootData
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAnimNode_SpeedWarping
// 0x00C0 (0x0130 - 0x0070)
struct FFortAnimNode_SpeedWarping : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET
	struct FBoneReference                              IKFootRootBone;                                           // 0x0078(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FSpeedWarpingFootDefinition>         FeetDefinitions;                                          // 0x0088(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FSpeedWarpingFootData>               FeetData;                                                 // 0x0098(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	struct FBoneReference                              PelvisBone;                                               // 0x00A8(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	ESpeedWarpingAxisMode                              SpeedWarpingAxisMode;                                     // 0x00B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	ESpeedWarpingAxisMode                              FloorNormalAxisMode;                                      // 0x00B9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	ESpeedWarpingAxisMode                              GravityDirAxisMode;                                       // 0x00BA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00BB(0x0001) MISSED OFFSET
	float                                              SpeedScaling;                                             // 0x00BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ManualSpeedWarpingDir;                                    // 0x00C0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     ManualFloorNormalInput;                                   // 0x00CC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     ManualGravityDirInput;                                    // 0x00D8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              PelvisPostAdjustmentAlpha;                                // 0x00E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PelvisAdjustmentMaxIter;                                  // 0x00E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVectorRK4SpringInterpolator                PelvisAdjustmentInterp;                                   // 0x00EC(0x0008) (CPF_Edit)
	unsigned char                                      UnknownData02[0x34];                                      // 0x00F4(0x0034) MISSED OFFSET
	unsigned char                                      bAdjustThighBonesRotation : 1;                            // 0x0128(0x0001) (CPF_Edit)
	unsigned char                                      bClampIKUsingFKLeg : 1;                                   // 0x0128(0x0001) (CPF_Edit)
	unsigned char                                      bOrientSpeedWarpingAxisBasedOnFloorNormal : 1;            // 0x0128(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0129(0x0003) MISSED OFFSET
	float                                              CachedDeltaTime;                                          // 0x012C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.ReflectedEngineVersion
// 0x0020
struct FReflectedEngineVersion
{
	int                                                Major;                                                    // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Minor;                                                    // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Patch;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Changelist;                                               // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Branch;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortRecordVersion
// 0x0040
struct FFortRecordVersion
{
	int                                                DataVersion;                                              // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PackageFileVersion;                                       // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FReflectedEngineVersion                     EngineVersion;                                            // 0x0008(0x0020)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
