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
enum class EFortAIDirectorEvent
{
	EFortAIDirectorEvent__PlayerAIEnemies = 0,
	EFortAIDirectorEvent__PlayerTakeDamage = 1,
	EFortAIDirectorEvent__PlayerHealth = 2,
	EFortAIDirectorEvent__PlayerDeath = 3,
	EFortAIDirectorEvent__PlayerLookAtAIEnemy = 4,
	EFortAIDirectorEvent__PlayerDamageAIEnemy = 5,
	EFortAIDirectorEvent__PlayerKillAIEnemy = 6,
	EFortAIDirectorEvent__PlayerHealingPotential = 7,
	EFortAIDirectorEvent__PlayerAmmoLight = 8,
	EFortAIDirectorEvent__PlayerAmmoMedium = 9,
	EFortAIDirectorEvent__PlayerAmmoHeavy = 10,
	EFortAIDirectorEvent__PlayerAmmoShells = 11,
	EFortAIDirectorEvent__PlayerAmmoEnergy = 12,
	EFortAIDirectorEvent__PlayerAINear = 13,
	EFortAIDirectorEvent__PlayerMovement = 14,
	EFortAIDirectorEvent__ObjectiveTakeDamage = 15,
	EFortAIDirectorEvent__ObjectiveHealth = 16,
	EFortAIDirectorEvent__ObjectiveDestroyed = 17,
	EFortAIDirectorEvent__TrapFired = 18,
	EFortAIDirectorEvent__TrapDamagedAIEnemy = 19,
	EFortAIDirectorEvent__ObjectivePathCost = 20,
	EFortAIDirectorEvent__PlayerPathCost = 21,
	EFortAIDirectorEvent__ObjectiveNearbyBuildingDamaged = 22,
	EFortAIDirectorEvent__Max_None = 23,
	EFortAIDirectorEvent__EFortAIDirectorEvent_MAX = 24
};


// Enum FortniteGame.EKeepDefenseState
enum class EKeepDefenseState
{
	EKeepDefenseState__Inactive    = 0,
	EKeepDefenseState__Warmup      = 1,
	EKeepDefenseState__Defense     = 2,
	EKeepDefenseState__LastAlive   = 3,
	EKeepDefenseState__Max         = 4,
	EKeepDefenseState__EKeepDefenseState_MAX = 5
};


// Enum FortniteGame.EFortInventoryType
enum class EFortInventoryType
{
	EFortInventoryType__World      = 0,
	EFortInventoryType__Account    = 1,
	EFortInventoryType__Outpost    = 2,
	EFortInventoryType__MAX        = 3,
	EFortInventoryType__EFortInventoryType_MAX = 4
};


// Enum FortniteGame.EFortAlteration
enum class EFortAlteration
{
	EFortAlteration__AttributeSlot = 0,
	EFortAlteration__GameplaySlot  = 1,
	EFortAlteration__ComplexCosmeticSlot = 2,
	EFortAlteration__ColorSlot     = 3,
	EFortAlteration__HeroSpecializationTier1Slot = 4,
	EFortAlteration__HeroSpecializationTier2Slot = 5,
	EFortAlteration__HeroSpecializationTier3Slot = 6,
	EFortAlteration__HeroSpecializationTier4Slot = 7,
	EFortAlteration__HeroSpecializationTier5Slot = 8,
	EFortAlteration__EFortAlteration_MAX = 9
};


// Enum FortniteGame.EFortItemType
enum class EFortItemType
{
	EFortItemType__WorldItem       = 0,
	EFortItemType__Ammo            = 1,
	EFortItemType__Badge           = 2,
	EFortItemType__BackpackPickup  = 3,
	EFortItemType__BuildingPiece   = 4,
	EFortItemType__CharacterPart   = 5,
	EFortItemType__Deco            = 6,
	EFortItemType__EditTool        = 7,
	EFortItemType__Ingredient      = 8,
	EFortItemType__Food            = 9,
	EFortItemType__Gadget          = 10,
	EFortItemType__HomebaseGadget  = 11,
	EFortItemType__HeroAbility     = 12,
	EFortItemType__MissionItem     = 13,
	EFortItemType__Trap            = 14,
	EFortItemType__Weapon          = 15,
	EFortItemType__WeaponMelee     = 16,
	EFortItemType__WeaponRanged    = 17,
	EFortItemType__WeaponHarvest   = 18,
	EFortItemType__WorldResource   = 19,
	EFortItemType__AccountItem     = 20,
	EFortItemType__AccountResource = 21,
	EFortItemType__CollectedResource = 22,
	EFortItemType__Alteration      = 23,
	EFortItemType__CardPack        = 24,
	EFortItemType__CharacterCosmetic = 25,
	EFortItemType__Currency        = 26,
	EFortItemType__Hero            = 27,
	EFortItemType__Schematic       = 28,
	EFortItemType__Worker          = 29,
	EFortItemType__Token           = 30,
	EFortItemType__DailyRewardScheduleToken = 31,
	EFortItemType__CodeToken       = 32,
	EFortItemType__Buff            = 33,
	EFortItemType__BuffCredit      = 34,
	EFortItemType__Quest           = 35,
	EFortItemType__GameplayModifier = 36,
	EFortItemType__Outpost         = 37,
	EFortItemType__HomebaseNode    = 38,
	EFortItemType__Defender        = 39,
	EFortItemType__ConversionControl = 40,
	EFortItemType__DeployableBaseCloudSave = 41,
	EFortItemType__ConsumableAccountItem = 42,
	EFortItemType__Quota           = 43,
	EFortItemType__Expedition      = 44,
	EFortItemType__HomebaseBannerIcon = 45,
	EFortItemType__HomebaseBannerColor = 46,
	EFortItemType__SpecialItem     = 47,
	EFortItemType__Emote           = 48,
	EFortItemType__Stack           = 49,
	EFortItemType__CollectionBookPage = 50,
	EFortItemType__Profile         = 51,
	EFortItemType__Max_None        = 52,
	EFortItemType__EFortItemType_MAX = 53
};


// Enum FortniteGame.EFortTeam
enum class EFortTeam
{
	EFortTeam__HumanCampaign       = 0,
	EFortTeam__Monster             = 1,
	EFortTeam__HumanPvP_Team1      = 2,
	EFortTeam__HumanPvP_Team2      = 3,
	EFortTeam__HumanPvP_Team3      = 4,
	EFortTeam__HumanPvP_Team4      = 5,
	EFortTeam__HumanPvP_Team5      = 6,
	EFortTeam__HumanPvP_Team6      = 7,
	EFortTeam__HumanPvP_Team7      = 8,
	EFortTeam__HumanPvP_Team8      = 9,
	EFortTeam__HumanPvP_Team9      = 10,
	EFortTeam__HumanPvP_Team10     = 11,
	EFortTeam__HumanPvP_Team11     = 12,
	EFortTeam__HumanPvP_Team12     = 13,
	EFortTeam__HumanPvP_Team13     = 14,
	EFortTeam__HumanPvP_Team14     = 15,
	EFortTeam__HumanPvP_Team15     = 16,
	EFortTeam__HumanPvP_Team16     = 17,
	EFortTeam__HumanPvP_Team17     = 18,
	EFortTeam__HumanPvP_Team18     = 19,
	EFortTeam__HumanPvP_Team19     = 20,
	EFortTeam__HumanPvP_Team20     = 21,
	EFortTeam__HumanPvP_Team21     = 22,
	EFortTeam__HumanPvP_Team22     = 23,
	EFortTeam__HumanPvP_Team23     = 24,
	EFortTeam__HumanPvP_Team24     = 25,
	EFortTeam__HumanPvP_Team25     = 26,
	EFortTeam__HumanPvP_Team26     = 27,
	EFortTeam__HumanPvP_Team27     = 28,
	EFortTeam__HumanPvP_Team28     = 29,
	EFortTeam__HumanPvP_Team29     = 30,
	EFortTeam__HumanPvP_Team30     = 31,
	EFortTeam__HumanPvP_Team31     = 32,
	EFortTeam__HumanPvP_Team32     = 33,
	EFortTeam__HumanPvP_Team33     = 34,
	EFortTeam__HumanPvP_Team34     = 35,
	EFortTeam__HumanPvP_Team35     = 36,
	EFortTeam__HumanPvP_Team36     = 37,
	EFortTeam__HumanPvP_Team37     = 38,
	EFortTeam__HumanPvP_Team38     = 39,
	EFortTeam__HumanPvP_Team39     = 40,
	EFortTeam__HumanPvP_Team40     = 41,
	EFortTeam__HumanPvP_Team41     = 42,
	EFortTeam__HumanPvP_Team42     = 43,
	EFortTeam__HumanPvP_Team43     = 44,
	EFortTeam__HumanPvP_Team44     = 45,
	EFortTeam__HumanPvP_Team45     = 46,
	EFortTeam__HumanPvP_Team46     = 47,
	EFortTeam__HumanPvP_Team47     = 48,
	EFortTeam__HumanPvP_Team48     = 49,
	EFortTeam__HumanPvP_Team49     = 50,
	EFortTeam__HumanPvP_Team50     = 51,
	EFortTeam__HumanPvP_Team51     = 52,
	EFortTeam__HumanPvP_Team52     = 53,
	EFortTeam__HumanPvP_Team53     = 54,
	EFortTeam__HumanPvP_Team54     = 55,
	EFortTeam__HumanPvP_Team55     = 56,
	EFortTeam__HumanPvP_Team56     = 57,
	EFortTeam__HumanPvP_Team57     = 58,
	EFortTeam__HumanPvP_Team58     = 59,
	EFortTeam__HumanPvP_Team59     = 60,
	EFortTeam__HumanPvP_Team60     = 61,
	EFortTeam__HumanPvP_Team61     = 62,
	EFortTeam__HumanPvP_Team62     = 63,
	EFortTeam__HumanPvP_Team63     = 64,
	EFortTeam__HumanPvP_Team64     = 65,
	EFortTeam__HumanPvP_Team65     = 66,
	EFortTeam__HumanPvP_Team66     = 67,
	EFortTeam__HumanPvP_Team67     = 68,
	EFortTeam__HumanPvP_Team68     = 69,
	EFortTeam__HumanPvP_Team69     = 70,
	EFortTeam__HumanPvP_Team70     = 71,
	EFortTeam__HumanPvP_Team71     = 72,
	EFortTeam__HumanPvP_Team72     = 73,
	EFortTeam__HumanPvP_Team73     = 74,
	EFortTeam__HumanPvP_Team74     = 75,
	EFortTeam__HumanPvP_Team75     = 76,
	EFortTeam__HumanPvP_Team76     = 77,
	EFortTeam__HumanPvP_Team77     = 78,
	EFortTeam__HumanPvP_Team78     = 79,
	EFortTeam__HumanPvP_Team79     = 80,
	EFortTeam__HumanPvP_Team80     = 81,
	EFortTeam__HumanPvP_Team81     = 82,
	EFortTeam__HumanPvP_Team82     = 83,
	EFortTeam__HumanPvP_Team83     = 84,
	EFortTeam__HumanPvP_Team84     = 85,
	EFortTeam__HumanPvP_Team85     = 86,
	EFortTeam__HumanPvP_Team86     = 87,
	EFortTeam__HumanPvP_Team87     = 88,
	EFortTeam__HumanPvP_Team88     = 89,
	EFortTeam__HumanPvP_Team89     = 90,
	EFortTeam__HumanPvP_Team90     = 91,
	EFortTeam__HumanPvP_Team91     = 92,
	EFortTeam__HumanPvP_Team92     = 93,
	EFortTeam__HumanPvP_Team93     = 94,
	EFortTeam__HumanPvP_Team94     = 95,
	EFortTeam__HumanPvP_Team95     = 96,
	EFortTeam__HumanPvP_Team96     = 97,
	EFortTeam__HumanPvP_Team97     = 98,
	EFortTeam__HumanPvP_Team98     = 99,
	EFortTeam__HumanPvP_Team99     = 100,
	EFortTeam__HumanPvP_Team100    = 101,
	EFortTeam__HumanPvP_Team101    = 102,
	EFortTeam__Spectator           = 103,
	EFortTeam__MAX                 = 104,
	EFortTeam__EFortTeam_MAX       = 105
};


// Enum FortniteGame.EFortDayPhase
enum class EFortDayPhase
{
	EFortDayPhase__Morning         = 0,
	EFortDayPhase__Day             = 1,
	EFortDayPhase__Evening         = 2,
	EFortDayPhase__Night           = 3,
	EFortDayPhase__NumPhases       = 4,
	EFortDayPhase__EFortDayPhase_MAX = 5
};


// Enum FortniteGame.EFortReportDayPhase
enum class EFortReportDayPhase
{
	EFortReportDayPhase__Dawn      = 0,
	EFortReportDayPhase__Dusk      = 1,
	EFortReportDayPhase__ZoneFinished = 2,
	EFortReportDayPhase__PlayerLogout = 3,
	EFortReportDayPhase__EFortReportDayPhase_MAX = 4
};


// Enum FortniteGame.EFortCustomPartType
enum class EFortCustomPartType
{
	EFortCustomPartType__Head      = 0,
	EFortCustomPartType__Body      = 1,
	EFortCustomPartType__Hat       = 2,
	EFortCustomPartType__Backpack  = 3,
	EFortCustomPartType__Charm     = 4,
	EFortCustomPartType__Face      = 5,
	EFortCustomPartType__NumTypes  = 6,
	EFortCustomPartType__EFortCustomPartType_MAX = 7
};


// Enum FortniteGame.EAthenaGamePhase
enum class EAthenaGamePhase
{
	EAthenaGamePhase__None         = 0,
	EAthenaGamePhase__Setup        = 1,
	EAthenaGamePhase__Warmup       = 2,
	EAthenaGamePhase__Aircraft     = 3,
	EAthenaGamePhase__SafeZones    = 4,
	EAthenaGamePhase__EndGame      = 5,
	EAthenaGamePhase__EAthenaGamePhase_MAX = 6
};


// Enum FortniteGame.EAthenaGamePhaseStep
enum class EAthenaGamePhaseStep
{
	EAthenaGamePhaseStep__None     = 0,
	EAthenaGamePhaseStep__Setup    = 1,
	EAthenaGamePhaseStep__Warmup   = 2,
	EAthenaGamePhaseStep__BusLocked = 3,
	EAthenaGamePhaseStep__BusFlying = 4,
	EAthenaGamePhaseStep__StormForming = 5,
	EAthenaGamePhaseStep__StormHolding = 6,
	EAthenaGamePhaseStep__StormShrinking = 7,
	EAthenaGamePhaseStep__EndGame  = 8,
	EAthenaGamePhaseStep__EAthenaGamePhaseStep_MAX = 9
};


// Enum FortniteGame.ECaptureState
enum class ECaptureState
{
	ECaptureState__CS_Idle         = 0,
	ECaptureState__CS_Capturing    = 1,
	ECaptureState__CS_Contested    = 2,
	ECaptureState__CS_Resetting    = 3,
	ECaptureState__CS_Captured     = 4,
	ECaptureState__CS_Reset        = 5,
	ECaptureState__CS_MAX          = 6
};


// Enum FortniteGame.EFOBIOStatus
enum class EFOBIOStatus
{
	EFOBIOStatus__Saving           = 0,
	EFOBIOStatus__Loading          = 1,
	EFOBIOStatus__Free             = 2,
	EFOBIOStatus__EFOBIOStatus_MAX = 3
};


// Enum FortniteGame.ECollectionBookRewardType
enum class ECollectionBookRewardType
{
	ECollectionBookRewardType__Uninitialized = 0,
	ECollectionBookRewardType__Book = 1,
	ECollectionBookRewardType__Page = 2,
	ECollectionBookRewardType__Section = 3,
	ECollectionBookRewardType__ECollectionBookRewardType_MAX = 4
};


// Enum FortniteGame.EFortObjectiveStatus
enum class EFortObjectiveStatus
{
	EFortObjectiveStatus__Created  = 0,
	EFortObjectiveStatus__InProgress = 1,
	EFortObjectiveStatus__Succeeded = 2,
	EFortObjectiveStatus__Failed   = 3,
	EFortObjectiveStatus__NeutralCompletion = 4,
	EFortObjectiveStatus__Max_None = 5,
	EFortObjectiveStatus__EFortObjectiveStatus_MAX = 6
};


// Enum FortniteGame.EFortMissionVisibilityOverride
enum class EFortMissionVisibilityOverride
{
	EFortMissionVisibilityOverride__Visible = 0,
	EFortMissionVisibilityOverride__Invisible = 1,
	EFortMissionVisibilityOverride__Max_None = 2,
	EFortMissionVisibilityOverride__EFortMissionVisibilityOverride_MAX = 3
};


// Enum FortniteGame.EFortPrototypingStatus
enum class EFortPrototypingStatus
{
	EFortPrototypingStatus__Unknown = 0,
	EFortPrototypingStatus__Disabled = 1,
	EFortPrototypingStatus__Enabled = 2,
	EFortPrototypingStatus__EFortPrototypingStatus_MAX = 3
};


// Enum FortniteGame.EMatchmakingCompleteResult
enum class EMatchmakingCompleteResult
{
	EMatchmakingCompleteResult__NotStarted = 0,
	EMatchmakingCompleteResult__UpdateNeeded = 1,
	EMatchmakingCompleteResult__OutpostNotFound = 2,
	EMatchmakingCompleteResult__Cancelled = 3,
	EMatchmakingCompleteResult__NoResults = 4,
	EMatchmakingCompleteResult__Failure = 5,
	EMatchmakingCompleteResult__CreateFailure = 6,
	EMatchmakingCompleteResult__Success = 7,
	EMatchmakingCompleteResult__EMatchmakingCompleteResult_MAX = 8
};


// Enum FortniteGame.EMatchmakingState
enum class EMatchmakingState
{
	EMatchmakingState__NotMatchmaking = 0,
	EMatchmakingState__CancelingMatchmaking = 1,
	EMatchmakingState__ReleasingLock = 2,
	EMatchmakingState__AcquiringLock = 3,
	EMatchmakingState__LockAcquistionFailure = 4,
	EMatchmakingState__FindingEmptyServer = 5,
	EMatchmakingState__FindingExistingSession = 6,
	EMatchmakingState__TestingEmptyServers = 7,
	EMatchmakingState__TestingExistingSessions = 8,
	EMatchmakingState__JoiningExistingSession = 9,
	EMatchmakingState__NoMatchesAvailable = 10,
	EMatchmakingState__CleaningUpExisting = 11,
	EMatchmakingState__HandlingFailure = 12,
	EMatchmakingState__JoinSuccess = 13,
	EMatchmakingState__EMatchmakingState_MAX = 14
};


// Enum FortniteGame.EFortPartyRestriction
enum class EFortPartyRestriction
{
	EFortPartyRestriction__Invalid = 0,
	EFortPartyRestriction__PartyCreatePending = 1,
	EFortPartyRestriction__AlreadyInParty = 2,
	EFortPartyRestriction__PartyFull = 3,
	EFortPartyRestriction__GameFull = 4,
	EFortPartyRestriction__Private = 5,
	EFortPartyRestriction__CurrentlyNotAvailable = 6,
	EFortPartyRestriction__NotPlayingThisGame = 7,
	EFortPartyRestriction__Max     = 8,
	EFortPartyRestriction__EFortPartyRestriction_MAX = 9
};


// Enum FortniteGame.EFortFriendRequestStatus
enum class EFortFriendRequestStatus
{
	EFortFriendRequestStatus__None = 0,
	EFortFriendRequestStatus__Accepted = 1,
	EFortFriendRequestStatus__PendingReceived = 2,
	EFortFriendRequestStatus__PendingSent = 3,
	EFortFriendRequestStatus__EFortFriendRequestStatus_MAX = 4
};


// Enum FortniteGame.EFortAthenaPlaylist
enum class EFortAthenaPlaylist
{
	EFortAthenaPlaylist__AthenaSolo = 0,
	EFortAthenaPlaylist__AthenaDuo = 1,
	EFortAthenaPlaylist__AthenaSquad = 2,
	EFortAthenaPlaylist__EFortAthenaPlaylist_MAX = 3
};


// Enum FortniteGame.EFortPartyState
enum class EFortPartyState
{
	EFortPartyState__WorldView     = 0,
	EFortPartyState__TheaterView   = 1,
	EFortPartyState__Matchmaking   = 2,
	EFortPartyState__PostMatchmaking = 3,
	EFortPartyState__ReturningToFrontEnd = 4,
	EFortPartyState__BattleRoyaleView = 5,
	EFortPartyState__BattleRoyalePreloading = 6,
	EFortPartyState__BattleRoyaleMatchmaking = 7,
	EFortPartyState__BattleRoyalePostMatchmaking = 8,
	EFortPartyState__EFortPartyState_MAX = 9
};


// Enum FortniteGame.EFortPartyMemberDisplayState
enum class EFortPartyMemberDisplayState
{
	EFortPartyMemberDisplayState__Open = 0,
	EFortPartyMemberDisplayState__Connecting = 1,
	EFortPartyMemberDisplayState__Connected = 2,
	EFortPartyMemberDisplayState__Max = 3,
	EFortPartyMemberDisplayState__EFortPartyMemberDisplayState_MAX = 4
};


// Enum FortniteGame.EFortPartyTransition
enum class EFortPartyTransition
{
	EFortPartyTransition__Idle     = 0,
	EFortPartyTransition__Joining  = 1,
	EFortPartyTransition__Leaving  = 2,
	EFortPartyTransition__Max      = 3,
	EFortPartyTransition__EFortPartyTransition_MAX = 4
};


// Enum FortniteGame.EFortPartyMemberLocation
enum class EFortPartyMemberLocation
{
	EFortPartyMemberLocation__PreLobby = 0,
	EFortPartyMemberLocation__ConnectingToLobby = 1,
	EFortPartyMemberLocation__Lobby = 2,
	EFortPartyMemberLocation__JoiningGame = 3,
	EFortPartyMemberLocation__ProcessingRejoin = 4,
	EFortPartyMemberLocation__InGame = 5,
	EFortPartyMemberLocation__ReturningToFrontEnd = 6,
	EFortPartyMemberLocation__EFortPartyMemberLocation_MAX = 7
};


// Enum FortniteGame.EFortSocialItemHeaderType
enum class EFortSocialItemHeaderType
{
	EFortSocialItemHeaderType__PartyInvites = 0,
	EFortSocialItemHeaderType__Friends = 1,
	EFortSocialItemHeaderType__None = 2,
	EFortSocialItemHeaderType__EFortSocialItemHeaderType_MAX = 3
};


// Enum FortniteGame.EFortDialogFeedbackType
enum class EFortDialogFeedbackType
{
	EFortDialogFeedbackType__FriendRequestSent = 0,
	EFortDialogFeedbackType__FriendRequestReceived = 1,
	EFortDialogFeedbackType__FriendRequestAccepted = 2,
	EFortDialogFeedbackType__Default = 3,
	EFortDialogFeedbackType__EFortDialogFeedbackType_MAX = 4
};


// Enum FortniteGame.EAIHotSpotSlot
enum class EAIHotSpotSlot
{
	EAIHotSpotSlot__Free           = 0,
	EAIHotSpotSlot__Claimed        = 1,
	EAIHotSpotSlot__Occupied       = 2,
	EAIHotSpotSlot__Blocked        = 3,
	EAIHotSpotSlot__Disabled       = 4,
	EAIHotSpotSlot__EAIHotSpotSlot_MAX = 5
};


// Enum FortniteGame.EAIHotSpotAssignmentFilter
enum class EAIHotSpotAssignmentFilter
{
	EAIHotSpotAssignmentFilter__All = 0,
	EAIHotSpotAssignmentFilter__WithSlots = 1,
	EAIHotSpotAssignmentFilter__WaitingList = 2,
	EAIHotSpotAssignmentFilter__EAIHotSpotAssignmentFilter_MAX = 3
};


// Enum FortniteGame.EAIHotSpotSlotFilter
enum class EAIHotSpotSlotFilter
{
	EAIHotSpotSlotFilter__All      = 0,
	EAIHotSpotSlotFilter__AvailableOnly = 1,
	EAIHotSpotSlotFilter__UnavailableOnly = 2,
	EAIHotSpotSlotFilter__EAIHotSpotSlotFilter_MAX = 3
};


// Enum FortniteGame.EFortGliderType
enum class EFortGliderType
{
	EFortGliderType__StockGlider   = 0,
	EFortGliderType__FounderGlider = 1,
	EFortGliderType__Umbrella      = 2,
	EFortGliderType__FounderUmbrella = 3,
	EFortGliderType__EFortGliderType_MAX = 4
};


// Enum FortniteGame.EFortMissionAlertCategory
enum class EFortMissionAlertCategory
{
	EFortMissionAlertCategory__General = 0,
	EFortMissionAlertCategory__Storm = 1,
	EFortMissionAlertCategory__Total = 2,
	EFortMissionAlertCategory__EFortMissionAlertCategory_MAX = 3
};


// Enum FortniteGame.EItemTileViewDisplayType
enum class EItemTileViewDisplayType
{
	EItemTileViewDisplayType__World = 0,
	EItemTileViewDisplayType__Outpost = 1,
	EItemTileViewDisplayType__Account = 2,
	EItemTileViewDisplayType__DeployableBase = 3,
	EItemTileViewDisplayType__Max  = 4,
	EItemTileViewDisplayType__EItemTileViewDisplayType_MAX = 5
};


// Enum FortniteGame.EOutpostBuildings
enum class EOutpostBuildings
{
	EOutpostBuildings__StormShield = 0,
	EOutpostBuildings__CraftingTable = 1,
	EOutpostBuildings__Fabricator  = 2,
	EOutpostBuildings__HarvestingOptimizer = 3,
	EOutpostBuildings__StorageVault = 4,
	EOutpostBuildings__POST        = 5,
	EOutpostBuildings__EOutpostBuildings_MAX = 6
};


// Enum FortniteGame.EFortClientAnnouncementQueueType
enum class EFortClientAnnouncementQueueType
{
	EFortClientAnnouncementQueueType__Toasts = 0,
	EFortClientAnnouncementQueueType__Stickies = 1,
	EFortClientAnnouncementQueueType__Max = 2,
	EFortClientAnnouncementQueueType__EFortClientAnnouncementQueueType_MAX = 3
};


// Enum FortniteGame.EFortNotificationQueueType
enum class EFortNotificationQueueType
{
	EFortNotificationQueueType__Toasts = 0,
	EFortNotificationQueueType__Stickies = 1,
	EFortNotificationQueueType__Messages = 2,
	EFortNotificationQueueType__Max = 3,
	EFortNotificationQueueType__EFortNotificationQueueType_MAX = 4
};


// Enum FortniteGame.EFortDialogResult
enum class EFortDialogResult
{
	EFortDialogResult__Confirmed   = 0,
	EFortDialogResult__Declined    = 1,
	EFortDialogResult__Ignored     = 2,
	EFortDialogResult__Killed      = 3,
	EFortDialogResult__TimedOut    = 4,
	EFortDialogResult__Unknown     = 5,
	EFortDialogResult__EFortDialogResult_MAX = 6
};


// Enum FortniteGame.EFortBangType
enum class EFortBangType
{
	EFortBangType__Invalid         = 0,
	EFortBangType__Custom          = 1,
	EFortBangType__PlayTab         = 2,
	EFortBangType__HeroesTab       = 3,
	EFortBangType__VaultTab        = 4,
	EFortBangType__StoreTab        = 5,
	EFortBangType__FriendsButton   = 6,
	EFortBangType__PartyInviteButton = 7,
	EFortBangType__SubGameAccessChanged = 8,
	EFortBangType__DailyRewardsButton = 9,
	EFortBangType__QuestsButton    = 10,
	EFortBangType__CompletedExpeditions = 11,
	EFortBangType__MainMenu        = 12,
	EFortBangType__VaultSchematics = 13,
	EFortBangType__VaultLeadSurvivors = 14,
	EFortBangType__VaultSurvivors  = 15,
	EFortBangType__VaultHeroes     = 16,
	EFortBangType__VaultDefenders  = 17,
	EFortBangType__VaultResources  = 18,
	EFortBangType__VaultMelee      = 19,
	EFortBangType__VaultRanged     = 20,
	EFortBangType__VaultConsumables = 21,
	EFortBangType__VaultIngredients = 22,
	EFortBangType__VaultTraps      = 23,
	EFortBangType__PlayerBanners   = 24,
	EFortBangType__EFortBangType_MAX = 25
};


// Enum FortniteGame.EFortEventNameType
enum class EFortEventNameType
{
	EFortEventNameType__Mission    = 0,
	EFortEventNameType__Client     = 1,
	EFortEventNameType__EFortEventNameType_MAX = 2
};


// Enum FortniteGame.EFortCraftFailCause
enum class EFortCraftFailCause
{
	EFortCraftFailCause__Unknown   = 0,
	EFortCraftFailCause__NotEnoughResources = 1,
	EFortCraftFailCause__InventoryFull = 2,
	EFortCraftFailCause__InsufficientTeamLevel = 3,
	EFortCraftFailCause__CraftingQueueFull = 4,
	EFortCraftFailCause__CurrentlyLocked = 5,
	EFortCraftFailCause__OverflowSchematic = 6,
	EFortCraftFailCause__EFortCraftFailCause_MAX = 7
};


// Enum FortniteGame.EKeepContainerType
enum class EKeepContainerType
{
	EKeepContainerType__Base       = 0,
	EKeepContainerType__Storeroom  = 1,
	EKeepContainerType__FirstAid   = 2,
	EKeepContainerType__Armory     = 3,
	EKeepContainerType__Workshop   = 4,
	EKeepContainerType__AmmoStash  = 5,
	EKeepContainerType__Max        = 6,
	EKeepContainerType__EKeepContainerType_MAX = 7
};


// Enum FortniteGame.EFortIndicatorState
enum class EFortIndicatorState
{
	EFortIndicatorState__Hidden    = 0,
	EFortIndicatorState__OnlyFriendsVisible = 1,
	EFortIndicatorState__Visible   = 2,
	EFortIndicatorState__EFortIndicatorState_MAX = 3
};


// Enum FortniteGame.EReadyCheckState
enum class EReadyCheckState
{
	EReadyCheckState__CheckStarted = 0,
	EReadyCheckState__Ready        = 1,
	EReadyCheckState__NotReady     = 2,
	EReadyCheckState__EReadyCheckState_MAX = 3
};


// Enum FortniteGame.ERichPresenceStateChange
enum class ERichPresenceStateChange
{
	ERichPresenceStateChange__AutoUpdate = 0,
	ERichPresenceStateChange__Idle = 1,
	ERichPresenceStateChange__Active = 2,
	ERichPresenceStateChange__Busy = 3,
	ERichPresenceStateChange__NotBusy = 4,
	ERichPresenceStateChange__ERichPresenceStateChange_MAX = 5
};


// Enum FortniteGame.EFortTeamAffiliation
enum class EFortTeamAffiliation
{
	EFortTeamAffiliation__Friendly = 0,
	EFortTeamAffiliation__Neutral  = 1,
	EFortTeamAffiliation__Hostile  = 2,
	EFortTeamAffiliation__EFortTeamAffiliation_MAX = 3
};


// Enum FortniteGame.EFortAIUtility
enum class EFortAIUtility
{
	EFortAIUtility__KillPlayersMelee = 0,
	EFortAIUtility__KillPlayersRanged = 1,
	EFortAIUtility__KillPlayersArtillery = 2,
	EFortAIUtility__DestroyBuildingsMelee = 3,
	EFortAIUtility__DestroyBuildingsRanged = 4,
	EFortAIUtility__DestroyBuildingsArtillery = 5,
	EFortAIUtility__DestroyTraps   = 6,
	EFortAIUtility__Tank           = 7,
	EFortAIUtility__Infiltrate     = 8,
	EFortAIUtility__Mob            = 9,
	EFortAIUtility__Support        = 10,
	EFortAIUtility__Kiting         = 11,
	EFortAIUtility__AreaOfDenial   = 12,
	EFortAIUtility__DisableTraps   = 13,
	EFortAIUtility__Dormant        = 14,
	EFortAIUtility__Assassin       = 15,
	EFortAIUtility__MAX            = 16,
	EFortAIUtility__EFortAIUtility_MAX = 17
};


// Enum FortniteGame.EFortTileEdgeType
enum class EFortTileEdgeType
{
	EFortTileEdgeType__Undefined   = 0,
	EFortTileEdgeType__Outer       = 1,
	EFortTileEdgeType__Transition  = 2,
	EFortTileEdgeType__Inner       = 3,
	EFortTileEdgeType__Border      = 4,
	EFortTileEdgeType__BorderTransitionSingle = 5,
	EFortTileEdgeType__BorderTransitionDouble = 6,
	EFortTileEdgeType__MAX         = 7,
	EFortTileEdgeType__EFortTileEdgeType_MAX = 8
};


// Enum FortniteGame.EFortRequestedGameplayAction
enum class EFortRequestedGameplayAction
{
	EFortRequestedGameplayAction__ContinuePlaying = 0,
	EFortRequestedGameplayAction__StartPlaying = 1,
	EFortRequestedGameplayAction__StopPlaying = 2,
	EFortRequestedGameplayAction__EnterZone = 3,
	EFortRequestedGameplayAction__LeaveZone = 4,
	EFortRequestedGameplayAction__ReturnToMainMenu = 5,
	EFortRequestedGameplayAction__QuitGame = 6,
	EFortRequestedGameplayAction__Invalid = 7,
	EFortRequestedGameplayAction__EFortRequestedGameplayAction_MAX = 8
};


// Enum FortniteGame.EFortGameplayState
enum class EFortGameplayState
{
	EFortGameplayState__NormalGameplay = 0,
	EFortGameplayState__WaitingToStart = 1,
	EFortGameplayState__EndOfZone  = 2,
	EFortGameplayState__EnteringZone = 3,
	EFortGameplayState__LeavingZone = 4,
	EFortGameplayState__Invalid    = 5,
	EFortGameplayState__EFortGameplayState_MAX = 6
};


// Enum FortniteGame.EFortEncounterDirection
enum class EFortEncounterDirection
{
	EFortEncounterDirection__North = 0,
	EFortEncounterDirection__NorthEast = 1,
	EFortEncounterDirection__East  = 2,
	EFortEncounterDirection__SouthEast = 3,
	EFortEncounterDirection__South = 4,
	EFortEncounterDirection__SouthWest = 5,
	EFortEncounterDirection__West  = 6,
	EFortEncounterDirection__NorthWest = 7,
	EFortEncounterDirection__Max_None = 8,
	EFortEncounterDirection__EFortEncounterDirection_MAX = 9
};


// Enum FortniteGame.EFortMovementUrgency
enum class EFortMovementUrgency
{
	EFortMovementUrgency__None     = 0,
	EFortMovementUrgency__Low      = 1,
	EFortMovementUrgency__Medium   = 2,
	EFortMovementUrgency__High     = 3,
	EFortMovementUrgency__NumLevels = 4,
	EFortMovementUrgency__EFortMovementUrgency_MAX = 5
};


// Enum FortniteGame.EFortMovementStyle
enum class EFortMovementStyle
{
	EFortMovementStyle__Running    = 0,
	EFortMovementStyle__Walking    = 1,
	EFortMovementStyle__Charging   = 2,
	EFortMovementStyle__Sprinting  = 3,
	EFortMovementStyle__EFortMovementStyle_MAX = 4
};


// Enum FortniteGame.EFortWeaponTriggerType
enum class EFortWeaponTriggerType
{
	EFortWeaponTriggerType__OnPress = 0,
	EFortWeaponTriggerType__Automatic = 1,
	EFortWeaponTriggerType__OnRelease = 2,
	EFortWeaponTriggerType__OnPressAndRelease = 3,
	EFortWeaponTriggerType__EFortWeaponTriggerType_MAX = 4
};


// Enum FortniteGame.EFortJumpStaminaCost
enum class EFortJumpStaminaCost
{
	EFortJumpStaminaCost__None     = 0,
	EFortJumpStaminaCost__Trigger  = 1,
	EFortJumpStaminaCost__SprintTrigger = 2,
	EFortJumpStaminaCost__SprintAir = 3,
	EFortJumpStaminaCost__EFortJumpStaminaCost_MAX = 4
};


// Enum FortniteGame.EFortDayPhasePrio
enum class EFortDayPhasePrio
{
	EFortDayPhasePrio__Default     = 0,
	EFortDayPhasePrio__DailySummary = 1,
	EFortDayPhasePrio__EFortDayPhasePrio_MAX = 2
};


// Enum FortniteGame.EFortCustomBodyType
enum class EFortCustomBodyType
{
	EFortCustomBodyType__Small     = 0,
	EFortCustomBodyType__Medium    = 1,
	EFortCustomBodyType__MediumAndSmall = 2,
	EFortCustomBodyType__Large     = 3,
	EFortCustomBodyType__LargeAndSmall = 4,
	EFortCustomBodyType__LargeAndMedium = 5,
	EFortCustomBodyType__All       = 6,
	EFortCustomBodyType__Deprecated = 7,
	EFortCustomBodyType__EFortCustomBodyType_MAX = 8
};


// Enum FortniteGame.EFortDisplayGender
enum class EFortDisplayGender
{
	EFortDisplayGender__Unknown    = 0,
	EFortDisplayGender__Male       = 1,
	EFortDisplayGender__Female     = 2,
	EFortDisplayGender__NumTypes   = 3,
	EFortDisplayGender__EFortDisplayGender_MAX = 4
};


// Enum FortniteGame.EFortCustomGender
enum class EFortCustomGender
{
	EFortCustomGender__Invalid     = 0,
	EFortCustomGender__Male        = 1,
	EFortCustomGender__Female      = 2,
	EFortCustomGender__Both        = 3,
	EFortCustomGender__EFortCustomGender_MAX = 4
};


// Enum FortniteGame.EFortCompletionResult
enum class EFortCompletionResult
{
	EFortCompletionResult__Win     = 0,
	EFortCompletionResult__Loss    = 1,
	EFortCompletionResult__Draw    = 2,
	EFortCompletionResult__Undefined = 3,
	EFortCompletionResult__EFortCompletionResult_MAX = 4
};


// Enum FortniteGame.EFortPvPGameResult
enum class EFortPvPGameResult
{
	EFortPvPGameResult__Win        = 0,
	EFortPvPGameResult__Loss       = 1,
	EFortPvPGameResult__Draw       = 2,
	EFortPvPGameResult__EFortPvPGameResult_MAX = 3
};


// Enum FortniteGame.EFortItemTier
enum class EFortItemTier
{
	EFortItemTier__No_Tier         = 0,
	EFortItemTier__I               = 1,
	EFortItemTier__II              = 2,
	EFortItemTier__III             = 3,
	EFortItemTier__IV              = 4,
	EFortItemTier__V               = 5,
	EFortItemTier__VI              = 6,
	EFortItemTier__VII             = 7,
	EFortItemTier__VIII            = 8,
	EFortItemTier__IX              = 9,
	EFortItemTier__X               = 10,
	EFortItemTier__NumItemTierValues = 11,
	EFortItemTier__EFortItemTier_MAX = 12
};


// Enum FortniteGame.EFortQuality
enum class EFortQuality
{
	EFortQuality__Common           = 0,
	EFortQuality__Uncommon         = 1,
	EFortQuality__Rare             = 2,
	EFortQuality__NumQualityValues = 3,
	EFortQuality__EFortQuality_MAX = 4
};


// Enum FortniteGame.EFortRarity
enum class EFortRarity
{
	EFortRarity__Handmade          = 0,
	EFortRarity__Ordinary          = 1,
	EFortRarity__Sturdy            = 2,
	EFortRarity__Quality           = 3,
	EFortRarity__Fine              = 4,
	EFortRarity__Elegant           = 5,
	EFortRarity__Masterwork        = 6,
	EFortRarity__Epic              = 7,
	EFortRarity__Badass            = 8,
	EFortRarity__Legendary         = 9,
	EFortRarity__NumRarityValues   = 10,
	EFortRarity__EFortRarity_MAX   = 11
};


// Enum FortniteGame.EFortTargetSelectionFilter
enum class EFortTargetSelectionFilter
{
	EFortTargetSelectionFilter__Damageable = 0,
	EFortTargetSelectionFilter__Everything = 1,
	EFortTargetSelectionFilter__Pawns = 2,
	EFortTargetSelectionFilter__Buildings = 3,
	EFortTargetSelectionFilter__Walls = 4,
	EFortTargetSelectionFilter__Traps = 5,
	EFortTargetSelectionFilter__Players = 6,
	EFortTargetSelectionFilter__AIPawns = 7,
	EFortTargetSelectionFilter__Instigator = 8,
	EFortTargetSelectionFilter__WeakSpots = 9,
	EFortTargetSelectionFilter__World = 10,
	EFortTargetSelectionFilter__Max = 11,
	EFortTargetSelectionFilter__EFortTargetSelectionFilter_MAX = 12
};


// Enum FortniteGame.EFortTargetSelectionTestType
enum class EFortTargetSelectionTestType
{
	EFortTargetSelectionTestType__Overlap = 0,
	EFortTargetSelectionTestType__Swept = 1,
	EFortTargetSelectionTestType__Ballistic = 2,
	EFortTargetSelectionTestType__EFortTargetSelectionTestType_MAX = 3
};


// Enum FortniteGame.EFortTargetSelectionShape
enum class EFortTargetSelectionShape
{
	EFortTargetSelectionShape__Sphere = 0,
	EFortTargetSelectionShape__Cone = 1,
	EFortTargetSelectionShape__Box = 2,
	EFortTargetSelectionShape__Capsule = 3,
	EFortTargetSelectionShape__Line = 4,
	EFortTargetSelectionShape__Custom = 5,
	EFortTargetSelectionShape__EFortTargetSelectionShape_MAX = 6
};


// Enum FortniteGame.EFortBrushSize
enum class EFortBrushSize
{
	EFortBrushSize__VeryVerySmall  = 0,
	EFortBrushSize__VerySmall      = 1,
	EFortBrushSize__Small          = 2,
	EFortBrushSize__Medium         = 3,
	EFortBrushSize__Large          = 4,
	EFortBrushSize__VeryLarge      = 5,
	EFortBrushSize__EFortBrushSize_MAX = 6
};


// Enum FortniteGame.EInventoryContentSortType
enum class EInventoryContentSortType
{
	EInventoryContentSortType__ByName = 0,
	EInventoryContentSortType__ByRating = 1,
	EInventoryContentSortType__ByLevel = 2,
	EInventoryContentSortType__ByCategory = 3,
	EInventoryContentSortType__ByRarity = 4,
	EInventoryContentSortType__ByLocation = 5,
	EInventoryContentSortType__ByPersonality = 6,
	EInventoryContentSortType__ByBonus = 7,
	EInventoryContentSortType__BySubtype = 8,
	EInventoryContentSortType__EInventoryContentSortType_MAX = 9
};


// Enum FortniteGame.EFortFrontendInventoryFilter
enum class EFortFrontendInventoryFilter
{
	EFortFrontendInventoryFilter__Schematics = 0,
	EFortFrontendInventoryFilter__SchematicsInGame = 1,
	EFortFrontendInventoryFilter__Consumables = 2,
	EFortFrontendInventoryFilter__WorldItems = 3,
	EFortFrontendInventoryFilter__WorldItemsInGame = 4,
	EFortFrontendInventoryFilter__WorldItemsStorage = 5,
	EFortFrontendInventoryFilter__AccountResources = 6,
	EFortFrontendInventoryFilter__ConsumablesAndAccountResources = 7,
	EFortFrontendInventoryFilter__HeroesAndDefenders = 8,
	EFortFrontendInventoryFilter__DefendersAndSurvivors = 9,
	EFortFrontendInventoryFilter__Heroes = 10,
	EFortFrontendInventoryFilter__Defenders = 11,
	EFortFrontendInventoryFilter__Survivors = 12,
	EFortFrontendInventoryFilter__Invisible = 13,
	EFortFrontendInventoryFilter__Max_None = 14,
	EFortFrontendInventoryFilter__EFortFrontendInventoryFilter_MAX = 15
};


// Enum FortniteGame.EFortInventoryFilter
enum class EFortInventoryFilter
{
	EFortInventoryFilter__WeaponMelee = 0,
	EFortInventoryFilter__WeaponRanged = 1,
	EFortInventoryFilter__Ammo     = 2,
	EFortInventoryFilter__Traps    = 3,
	EFortInventoryFilter__Consumables = 4,
	EFortInventoryFilter__Ingredients = 5,
	EFortInventoryFilter__Gadget   = 6,
	EFortInventoryFilter__Decorations = 7,
	EFortInventoryFilter__Badges   = 8,
	EFortInventoryFilter__Heroes   = 9,
	EFortInventoryFilter__LeadSurvivors = 10,
	EFortInventoryFilter__Survivors = 11,
	EFortInventoryFilter__Defenders = 12,
	EFortInventoryFilter__Resources = 13,
	EFortInventoryFilter__ConversionControl = 14,
	EFortInventoryFilter__Invisible = 15,
	EFortInventoryFilter__Max_None = 16,
	EFortInventoryFilter__EFortInventoryFilter_MAX = 17
};


// Enum FortniteGame.EFortItemCategoryOrdinal
enum class EFortItemCategoryOrdinal
{
	EFortItemCategoryOrdinal__Primary = 0,
	EFortItemCategoryOrdinal__Secondary = 1,
	EFortItemCategoryOrdinal__Tertiary = 2,
	EFortItemCategoryOrdinal__EFortItemCategoryOrdinal_MAX = 3
};


// Enum FortniteGame.ESubGameMatchmakingStatus
enum class ESubGameMatchmakingStatus
{
	ESubGameMatchmakingStatus__Disabled = 0,
	ESubGameMatchmakingStatus__Enabled = 1,
	ESubGameMatchmakingStatus__ESubGameMatchmakingStatus_MAX = 2
};


// Enum FortniteGame.ESubGameAccessStatus
enum class ESubGameAccessStatus
{
	ESubGameAccessStatus__Disabled = 0,
	ESubGameAccessStatus__LimitedAccess = 1,
	ESubGameAccessStatus__OpenAccess = 2,
	ESubGameAccessStatus__ESubGameAccessStatus_MAX = 3
};


// Enum FortniteGame.ESubGame
enum class ESubGame
{
	ESubGame__Campaign             = 0,
	ESubGame__Athena               = 1,
	ESubGame__Invalid              = 2,
	ESubGame__ESubGame_MAX         = 3
};


// Enum FortniteGame.ENavigationObstacleOverride
enum class ENavigationObstacleOverride
{
	ENavigationObstacleOverride__UseMeshSettings = 0,
	ENavigationObstacleOverride__ForceEnabled = 1,
	ENavigationObstacleOverride__ForceDisabled = 2,
	ENavigationObstacleOverride__ENavigationObstacleOverride_MAX = 3
};


// Enum FortniteGame.EFortPartialPathUsage
enum class EFortPartialPathUsage
{
	EFortPartialPathUsage__Always  = 0,
	EFortPartialPathUsage__OnlyGoalsOnDestructible = 1,
	EFortPartialPathUsage__Never   = 2,
	EFortPartialPathUsage__EFortPartialPathUsage_MAX = 3
};


// Enum FortniteGame.EHotspotTypeConfigMode
enum class EHotspotTypeConfigMode
{
	EHotspotTypeConfigMode__AlwaysAdd = 0,
	EHotspotTypeConfigMode__WhenNotDefined = 1,
	EHotspotTypeConfigMode__WhenNotValid = 2,
	EHotspotTypeConfigMode__EHotspotTypeConfigMode_MAX = 3
};


// Enum FortniteGame.EFortHotSpotPreview
enum class EFortHotSpotPreview
{
	EFortHotSpotPreview__None      = 0,
	EFortHotSpotPreview__Smashing  = 1,
	EFortHotSpotPreview__Shooting  = 2,
	EFortHotSpotPreview__EFortHotSpotPreview_MAX = 3
};


// Enum FortniteGame.EFortHotSpotDirection
enum class EFortHotSpotDirection
{
	EFortHotSpotDirection__PositiveX = 0,
	EFortHotSpotDirection__NegativeX = 1,
	EFortHotSpotDirection__PositiveY = 2,
	EFortHotSpotDirection__NegativeY = 3,
	EFortHotSpotDirection__PositiveZ = 4,
	EFortHotSpotDirection__NegativeZ = 5,
	EFortHotSpotDirection__Any     = 6,
	EFortHotSpotDirection__EFortHotSpotDirection_MAX = 7
};


// Enum FortniteGame.EFortHotSpotSlot
enum class EFortHotSpotSlot
{
	EFortHotSpotSlot__Melee        = 0,
	EFortHotSpotSlot__MeleeHuge    = 1,
	EFortHotSpotSlot__Ranged       = 2,
	EFortHotSpotSlot__None         = 3,
	EFortHotSpotSlot__EFortHotSpotSlot_MAX = 4
};


// Enum FortniteGame.EBuildingFloorRailing
enum class EBuildingFloorRailing
{
	EBuildingFloorRailing__None    = 0,
	EBuildingFloorRailing__Balcony = 1,
	EBuildingFloorRailing__EBuildingFloorRailing_MAX = 2
};


// Enum FortniteGame.EBuildingStairsRailing
enum class EBuildingStairsRailing
{
	EBuildingStairsRailing__None   = 0,
	EBuildingStairsRailing__Partial = 1,
	EBuildingStairsRailing__Full   = 2,
	EBuildingStairsRailing__EBuildingStairsRailing_MAX = 3
};


// Enum FortniteGame.EBuildingWallArea
enum class EBuildingWallArea
{
	EBuildingWallArea__Regular     = 0,
	EBuildingWallArea__Flat        = 1,
	EBuildingWallArea__Special     = 2,
	EBuildingWallArea__EBuildingWallArea_MAX = 3
};


// Enum FortniteGame.EAssignmentType
enum class EAssignmentType
{
	EAssignmentType__Invalid       = 0,
	EAssignmentType__Encounter     = 1,
	EAssignmentType__World         = 2,
	EAssignmentType__Enemy         = 3,
	EAssignmentType__NumAssignmentTypes = 4,
	EAssignmentType__EAssignmentType_MAX = 5
};


// Enum FortniteGame.EFortAILODLevel
enum class EFortAILODLevel
{
	EFortAILODLevel__Invalid       = 0,
	EFortAILODLevel__Lowest        = 1,
	EFortAILODLevel__Lower         = 2,
	EFortAILODLevel__BelowNormal   = 3,
	EFortAILODLevel__Normal        = 4,
	EFortAILODLevel__AboveNormal   = 5,
	EFortAILODLevel__EFortAILODLevel_MAX = 6
};


// Enum FortniteGame.EFortItemEntryState
enum class EFortItemEntryState
{
	EFortItemEntryState__NoneState = 0,
	EFortItemEntryState__NewItemCount = 1,
	EFortItemEntryState__ShouldShowItemToast = 2,
	EFortItemEntryState__DurabilityInitialized = 3,
	EFortItemEntryState__DoNotShowSpawnParticles = 4,
	EFortItemEntryState__FromRecoveredBackpack = 5,
	EFortItemEntryState__FromGift  = 6,
	EFortItemEntryState__PendingUpgradeCriteriaProgress = 7,
	EFortItemEntryState__OwnerBuildingHandle = 8,
	EFortItemEntryState__FromDroppedPickup = 9,
	EFortItemEntryState__CraftAndSlotTarget = 10,
	EFortItemEntryState__EFortItemEntryState_MAX = 11
};


// Enum FortniteGame.EFortBounceType
enum class EFortBounceType
{
	EFortBounceType__Hit           = 0,
	EFortBounceType__Interact      = 1,
	EFortBounceType__EditPlaced    = 2,
	EFortBounceType__EFortBounceType_MAX = 3
};


// Enum FortniteGame.EBuildingHighlightType
enum class EBuildingHighlightType
{
	EBuildingHighlightType__Primary = 0,
	EBuildingHighlightType__Interact = 1,
	EBuildingHighlightType__WillBeDestroyed = 2,
	EBuildingHighlightType__MAX    = 3,
	EBuildingHighlightType__EBuildingHighlightType_MAX = 4
};


// Enum FortniteGame.EFortConnectivityCubeFace
enum class EFortConnectivityCubeFace
{
	EFortConnectivityCubeFace__Front = 0,
	EFortConnectivityCubeFace__Left = 1,
	EFortConnectivityCubeFace__Back = 2,
	EFortConnectivityCubeFace__Right = 3,
	EFortConnectivityCubeFace__Upper = 4,
	EFortConnectivityCubeFace__Lower = 5,
	EFortConnectivityCubeFace__MAX = 6,
	EFortConnectivityCubeFace__EFortConnectivityCubeFace_MAX = 7
};


// Enum FortniteGame.EFortDecoPlacementQueryResults
enum class EFortDecoPlacementQueryResults
{
	EFortDecoPlacementQueryResults__CanAdd = 0,
	EFortDecoPlacementQueryResults__ExistingTrap = 1,
	EFortDecoPlacementQueryResults__ExistingObject = 2,
	EFortDecoPlacementQueryResults__Obstructed = 3,
	EFortDecoPlacementQueryResults__NoLocation = 4,
	EFortDecoPlacementQueryResults__WrongType = 5,
	EFortDecoPlacementQueryResults__WrongShape = 6,
	EFortDecoPlacementQueryResults__BeingModified = 7,
	EFortDecoPlacementQueryResults__WrongTeam = 8,
	EFortDecoPlacementQueryResults__BlueprintFailure = 9,
	EFortDecoPlacementQueryResults__AbilityFailure = 10,
	EFortDecoPlacementQueryResults__RequiresPlayerBuildableActor = 11,
	EFortDecoPlacementQueryResults__NoEditPermission = 12,
	EFortDecoPlacementQueryResults__EFortDecoPlacementQueryResults_MAX = 13
};


// Enum FortniteGame.EFortStructuralGridQueryResults
enum class EFortStructuralGridQueryResults
{
	EFortStructuralGridQueryResults__CanAdd = 0,
	EFortStructuralGridQueryResults__ExistingActor = 1,
	EFortStructuralGridQueryResults__Obstructed = 2,
	EFortStructuralGridQueryResults__NoStructuralSupport = 3,
	EFortStructuralGridQueryResults__InvalidActor = 4,
	EFortStructuralGridQueryResults__ReachedLimit = 5,
	EFortStructuralGridQueryResults__NoEditPermission = 6,
	EFortStructuralGridQueryResults__PatternNotPermittedByLayoutRequirement = 7,
	EFortStructuralGridQueryResults__ResourceTypeNotPermittedByLayoutRequirement = 8,
	EFortStructuralGridQueryResults__BuildingAtRequirementsDisabled = 9,
	EFortStructuralGridQueryResults__BuildingOtherThanRequirementsDisabled = 10,
	EFortStructuralGridQueryResults__EFortStructuralGridQueryResults_MAX = 11
};


// Enum FortniteGame.EFortCostInfoTypes
enum class EFortCostInfoTypes
{
	EFortCostInfoTypes__Placement  = 0,
	EFortCostInfoTypes__Repair     = 1,
	EFortCostInfoTypes__Conversion = 2,
	EFortCostInfoTypes__Ability    = 3,
	EFortCostInfoTypes__None       = 4,
	EFortCostInfoTypes__EFortCostInfoTypes_MAX = 5
};


// Enum FortniteGame.EFortBuildingInitializationReason
enum class EFortBuildingInitializationReason
{
	EFortBuildingInitializationReason__StaticallyPlaced = 0,
	EFortBuildingInitializationReason__Spawned = 1,
	EFortBuildingInitializationReason__Replaced = 2,
	EFortBuildingInitializationReason__LoadedFromSave = 3,
	EFortBuildingInitializationReason__DynamicBuilderPlaced = 4,
	EFortBuildingInitializationReason__PlacementTool = 5,
	EFortBuildingInitializationReason__TrapTool = 6,
	EFortBuildingInitializationReason__None = 7,
	EFortBuildingInitializationReason__EFortBuildingInitializationReason_MAX = 8
};


// Enum FortniteGame.EFortBuildingPersistentState
enum class EFortBuildingPersistentState
{
	EFortBuildingPersistentState__Default = 0,
	EFortBuildingPersistentState__New = 1,
	EFortBuildingPersistentState__Constructed = 2,
	EFortBuildingPersistentState__Destroyed = 3,
	EFortBuildingPersistentState__Searched = 4,
	EFortBuildingPersistentState__None = 5,
	EFortBuildingPersistentState__EFortBuildingPersistentState_MAX = 6
};


// Enum FortniteGame.EFortBuildingState
enum class EFortBuildingState
{
	EFortBuildingState__Placement  = 0,
	EFortBuildingState__EditMode   = 1,
	EFortBuildingState__None       = 2,
	EFortBuildingState__EFortBuildingState_MAX = 3
};


// Enum FortniteGame.EFortResourceLevel
enum class EFortResourceLevel
{
	EFortResourceLevel__First      = 0,
	EFortResourceLevel__Second     = 1,
	EFortResourceLevel__Third      = 2,
	EFortResourceLevel__Fourth     = 3,
	EFortResourceLevel__Fifth      = 4,
	EFortResourceLevel__Sixth      = 5,
	EFortResourceLevel__NumLevels  = 6,
	EFortResourceLevel__Invalid    = 7,
	EFortResourceLevel__EFortResourceLevel_MAX = 8
};


// Enum FortniteGame.EFortResourceType
enum class EFortResourceType
{
	EFortResourceType__Wood        = 0,
	EFortResourceType__Stone       = 1,
	EFortResourceType__Metal       = 2,
	EFortResourceType__Permanite   = 3,
	EFortResourceType__None        = 4,
	EFortResourceType__EFortResourceType_MAX = 5
};


// Enum FortniteGame.EFortTextureDataSlot
enum class EFortTextureDataSlot
{
	EFortTextureDataSlot__Primary  = 0,
	EFortTextureDataSlot__Secondary = 1,
	EFortTextureDataSlot__Tertiary = 2,
	EFortTextureDataSlot__Fourth   = 3,
	EFortTextureDataSlot__NumSlots = 4,
	EFortTextureDataSlot__EFortTextureDataSlot_MAX = 5
};


// Enum FortniteGame.EFortTextureDataType
enum class EFortTextureDataType
{
	EFortTextureDataType__Any      = 0,
	EFortTextureDataType__OuterWall = 1,
	EFortTextureDataType__InnerWall = 2,
	EFortTextureDataType__Corner   = 3,
	EFortTextureDataType__Floor    = 4,
	EFortTextureDataType__Ceiling  = 5,
	EFortTextureDataType__Trim     = 6,
	EFortTextureDataType__Roof     = 7,
	EFortTextureDataType__Pillar   = 8,
	EFortTextureDataType__Shingle  = 9,
	EFortTextureDataType__None     = 10,
	EFortTextureDataType__EFortTextureDataType_MAX = 11
};


// Enum FortniteGame.EBuildingAttachmentType
enum class EBuildingAttachmentType
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
enum class EFortBuildingType
{
	EFortBuildingType__Wall        = 0,
	EFortBuildingType__Floor       = 1,
	EFortBuildingType__Corner      = 2,
	EFortBuildingType__Deco        = 3,
	EFortBuildingType__Prop        = 4,
	EFortBuildingType__Stairs      = 5,
	EFortBuildingType__Roof        = 6,
	EFortBuildingType__Pillar      = 7,
	EFortBuildingType__SpawnedItem = 8,
	EFortBuildingType__Container   = 9,
	EFortBuildingType__Trap        = 10,
	EFortBuildingType__GenericCenterCellActor = 11,
	EFortBuildingType__None        = 12,
	EFortBuildingType__EFortBuildingType_MAX = 13
};


// Enum FortniteGame.EFortMissionAudibility
enum class EFortMissionAudibility
{
	EFortMissionAudibility__UseVisibility = 0,
	EFortMissionAudibility__Audible = 1,
	EFortMissionAudibility__Inaudible = 2,
	EFortMissionAudibility__EFortMissionAudibility_MAX = 3
};


// Enum FortniteGame.EFortMissionType
enum class EFortMissionType
{
	EFortMissionType__Primary      = 0,
	EFortMissionType__Secondary    = 1,
	EFortMissionType__Max_None     = 2,
	EFortMissionType__EFortMissionType_MAX = 3
};


// Enum FortniteGame.EFortObjectiveRequirement
enum class EFortObjectiveRequirement
{
	EFortObjectiveRequirement__Optional = 0,
	EFortObjectiveRequirement__Required = 1,
	EFortObjectiveRequirement__RequiredButCanFail = 2,
	EFortObjectiveRequirement__EFortObjectiveRequirement_MAX = 3
};


// Enum FortniteGame.EFortMissionStatus
enum class EFortMissionStatus
{
	EFortMissionStatus__Created    = 0,
	EFortMissionStatus__InProgress = 1,
	EFortMissionStatus__Succeeded  = 2,
	EFortMissionStatus__Failed     = 3,
	EFortMissionStatus__NeutralCompletion = 4,
	EFortMissionStatus__Quit       = 5,
	EFortMissionStatus__Max_None   = 6,
	EFortMissionStatus__EFortMissionStatus_MAX = 7
};


// Enum FortniteGame.EMissionGenerationCategory
enum class EMissionGenerationCategory
{
	EMissionGenerationCategory__Primary = 0,
	EMissionGenerationCategory__Secondary = 1,
	EMissionGenerationCategory__Tertiary = 2,
	EMissionGenerationCategory__Survivor = 3,
	EMissionGenerationCategory__Max_None = 4,
	EMissionGenerationCategory__EMissionGenerationCategory_MAX = 5
};


// Enum FortniteGame.TInteractionType
enum class ETInteractionType
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
enum class EFortPIDValueGraphElements
{
	EFortPIDValueGraphElements__Proportional = 0,
	EFortPIDValueGraphElements__Integral = 1,
	EFortPIDValueGraphElements__Max_None = 2,
	EFortPIDValueGraphElements__EFortPIDValueGraphElements_MAX = 3
};


// Enum FortniteGame.EFortIntensityGraphElements
enum class EFortIntensityGraphElements
{
	EFortIntensityGraphElements__ActualIntensity = 0,
	EFortIntensityGraphElements__DesiredIntensity = 1,
	EFortIntensityGraphElements__Max_None = 2,
	EFortIntensityGraphElements__EFortIntensityGraphElements_MAX = 3
};


// Enum FortniteGame.EFortContributionGraphElements
enum class EFortContributionGraphElements
{
	EFortContributionGraphElements__ProportionalLine = 0,
	EFortContributionGraphElements__IntegralLine = 1,
	EFortContributionGraphElements__TotalLine = 2,
	EFortContributionGraphElements__PendingLine = 3,
	EFortContributionGraphElements__ActionLine = 4,
	EFortContributionGraphElements__Max_None = 5,
	EFortContributionGraphElements__EFortContributionGraphElements_MAX = 6
};


// Enum FortniteGame.EFortFactorContributionType
enum class EFortFactorContributionType
{
	EFortFactorContributionType__CurrentValue_Direct = 0,
	EFortFactorContributionType__CurrentValue_Inverse = 1,
	EFortFactorContributionType__AverageValue_Direct = 2,
	EFortFactorContributionType__AverageValue_Inverse = 3,
	EFortFactorContributionType__EFortFactorContributionType_MAX = 4
};


// Enum FortniteGame.EFortAIDirectorFactor
enum class EFortAIDirectorFactor
{
	EFortAIDirectorFactor__PlayerDamageThreat = 0,
	EFortAIDirectorFactor__ObjectiveDamageThreat = 1,
	EFortAIDirectorFactor__ObjectivePathCost = 2,
	EFortAIDirectorFactor__PlayerPathCost = 3,
	EFortAIDirectorFactor__PlayerMovement = 4,
	EFortAIDirectorFactor__TrapsEffective = 5,
	EFortAIDirectorFactor__PlayerWander = 6,
	EFortAIDirectorFactor__NearbyEnemyPresence = 7,
	EFortAIDirectorFactor__OffensiveResources = 8,
	EFortAIDirectorFactor__DefensiveResources = 9,
	EFortAIDirectorFactor__Boredom = 10,
	EFortAIDirectorFactor__ArtilleryVulnerability = 11,
	EFortAIDirectorFactor__Max_None = 12,
	EFortAIDirectorFactor__EFortAIDirectorFactor_MAX = 13
};


// Enum FortniteGame.EFortCombatFactors
enum class EFortCombatFactors
{
	EFortCombatFactors__PlayerDamageThreat = 0,
	EFortCombatFactors__ObjectiveDamageThreat = 1,
	EFortCombatFactors__ObjectivePathCost = 2,
	EFortCombatFactors__PlayerPathCost = 3,
	EFortCombatFactors__PlayerMovement = 4,
	EFortCombatFactors__TrapsEffective = 5,
	EFortCombatFactors__PlayerWander = 6,
	EFortCombatFactors__NearbyEnemyPresence = 7,
	EFortCombatFactors__OffensiveResources = 8,
	EFortCombatFactors__DefensiveResources = 9,
	EFortCombatFactors__Boredom    = 10,
	EFortCombatFactors__ArtilleryVulnerability = 11,
	EFortCombatFactors__Max_None   = 12,
	EFortCombatFactors__EFortCombatFactors_MAX = 13
};


// Enum FortniteGame.EFortCombatEvents
enum class EFortCombatEvents
{
	EFortCombatEvents__HuskFollowing = 0,
	EFortCombatEvents__SmasherFollowing = 1,
	EFortCombatEvents__TrollFollowing = 2,
	EFortCombatEvents__TakerFollowing = 3,
	EFortCombatEvents__PlayerTakeDamage = 4,
	EFortCombatEvents__PlayerHealth = 5,
	EFortCombatEvents__PlayerLookAtEnemy = 6,
	EFortCombatEvents__PlayerDamageEnemy = 7,
	EFortCombatEvents__PlayerKilledEnemy = 8,
	EFortCombatEvents__AtlasTakeDamage = 9,
	EFortCombatEvents__AtlasHealth = 10,
	EFortCombatEvents__AtlasDestroyed = 11,
	EFortCombatEvents__TrapFiring  = 12,
	EFortCombatEvents__BuildingTakeDamage = 13,
	EFortCombatEvents__FoodHealingPotential = 14,
	EFortCombatEvents__PlayerAmmo  = 15,
	EFortCombatEvents__EnemiesNear = 16,
	EFortCombatEvents__PlayerMovement = 17,
	EFortCombatEvents__BuildingDamagedNearObjective = 18,
	EFortCombatEvents__TrapDamageEnemy = 19,
	EFortCombatEvents__ObjectivePathCost = 20,
	EFortCombatEvents__PlayerPathCost = 21,
	EFortCombatEvents__Max_None    = 22,
	EFortCombatEvents__EFortCombatEvents_MAX = 23
};


// Enum FortniteGame.EFortAIDirectorEventParticipant
enum class EFortAIDirectorEventParticipant
{
	EFortAIDirectorEventParticipant__Target = 0,
	EFortAIDirectorEventParticipant__Source = 1,
	EFortAIDirectorEventParticipant__Either = 2,
	EFortAIDirectorEventParticipant__Max_None = 3,
	EFortAIDirectorEventParticipant__EFortAIDirectorEventParticipant_MAX = 4
};


// Enum FortniteGame.EFortCombatThresholds
enum class EFortCombatThresholds
{
	EFortCombatThresholds__Low     = 0,
	EFortCombatThresholds__Medium  = 1,
	EFortCombatThresholds__High    = 2,
	EFortCombatThresholds__Extreme = 3,
	EFortCombatThresholds__Max_None = 4,
	EFortCombatThresholds__EFortCombatThresholds_MAX = 5
};


// Enum FortniteGame.EFortElementalDamageType
enum class EFortElementalDamageType
{
	EFortElementalDamageType__None = 0,
	EFortElementalDamageType__Fire = 1,
	EFortElementalDamageType__Ice  = 2,
	EFortElementalDamageType__Lightning = 3,
	EFortElementalDamageType__MAX  = 4,
	EFortElementalDamageType__EFortElementalDamageType_MAX = 5
};


// Enum FortniteGame.EFortDamageZone
enum class EFortDamageZone
{
	EFortDamageZone__Light         = 0,
	EFortDamageZone__Normal        = 1,
	EFortDamageZone__Critical      = 2,
	EFortDamageZone__Vulnerability = 3,
	EFortDamageZone__Max           = 4,
	EFortDamageZone__EFortDamageZone_MAX = 5
};


// Enum FortniteGame.EFortBaseWeaponDamage
enum class EFortBaseWeaponDamage
{
	EFortBaseWeaponDamage__Combat  = 0,
	EFortBaseWeaponDamage__Environmental = 1,
	EFortBaseWeaponDamage__EFortBaseWeaponDamage_MAX = 2
};


// Enum FortniteGame.EFortWeaponCoreAnimation
enum class EFortWeaponCoreAnimation
{
	EFortWeaponCoreAnimation__Melee = 0,
	EFortWeaponCoreAnimation__Pistol = 1,
	EFortWeaponCoreAnimation__Shotgun = 2,
	EFortWeaponCoreAnimation__PaperBlueprint = 3,
	EFortWeaponCoreAnimation__Rifle = 4,
	EFortWeaponCoreAnimation__MeleeOneHand = 5,
	EFortWeaponCoreAnimation__MachinePistol = 6,
	EFortWeaponCoreAnimation__RocketLauncher = 7,
	EFortWeaponCoreAnimation__GrenadeLauncher = 8,
	EFortWeaponCoreAnimation__GoingCommando = 9,
	EFortWeaponCoreAnimation__AssaultRifle = 10,
	EFortWeaponCoreAnimation__TacticalShotgun = 11,
	EFortWeaponCoreAnimation__SniperRifle = 12,
	EFortWeaponCoreAnimation__TrapPlacement = 13,
	EFortWeaponCoreAnimation__ShoulderLauncher = 14,
	EFortWeaponCoreAnimation__AbilityDecoTool = 15,
	EFortWeaponCoreAnimation__EFortWeaponCoreAnimation_MAX = 16
};


// Enum FortniteGame.EFortReloadFXState
enum class EFortReloadFXState
{
	EFortReloadFXState__ReloadStart = 0,
	EFortReloadFXState__ReloadCartridge = 1,
	EFortReloadFXState__ReloadEnd  = 2,
	EFortReloadFXState__Max_None   = 3,
	EFortReloadFXState__EFortReloadFXState_MAX = 4
};


// Enum FortniteGame.EFortWeaponSoundState
enum class EFortWeaponSoundState
{
	EFortWeaponSoundState__Normal  = 0,
	EFortWeaponSoundState__LowAmmo = 1,
	EFortWeaponSoundState__Degraded = 2,
	EFortWeaponSoundState__Max_None = 3,
	EFortWeaponSoundState__EFortWeaponSoundState_MAX = 4
};


// Enum FortniteGame.EFortMontageInputType
enum class EFortMontageInputType
{
	EFortMontageInputType__WindowClickOrHold = 0,
	EFortMontageInputType__WindowHoldOnly = 1,
	EFortMontageInputType__InstantClick = 2,
	EFortMontageInputType__EFortMontageInputType_MAX = 3
};


// Enum FortniteGame.EFortAbilityTargetingSource
enum class EFortAbilityTargetingSource
{
	EFortAbilityTargetingSource__Camera = 0,
	EFortAbilityTargetingSource__PawnForward = 1,
	EFortAbilityTargetingSource__PawnTowardsFocus = 2,
	EFortAbilityTargetingSource__WeaponForward = 3,
	EFortAbilityTargetingSource__WeaponTowardsFocus = 4,
	EFortAbilityTargetingSource__Custom = 5,
	EFortAbilityTargetingSource__Max_None = 6,
	EFortAbilityTargetingSource__EFortAbilityTargetingSource_MAX = 7
};


// Enum FortniteGame.EFortAmmoType
enum class EFortAmmoType
{
	EFortAmmoType__Pistol          = 0,
	EFortAmmoType__Shotgun         = 1,
	EFortAmmoType__Assault         = 2,
	EFortAmmoType__Sniper          = 3,
	EFortAmmoType__Energy          = 4,
	EFortAmmoType__EFortAmmoType_MAX = 5
};


// Enum FortniteGame.EAbilitySystemComponentCreationPolicy
enum class EAbilitySystemComponentCreationPolicy
{
	EAbilitySystemComponentCreationPolicy__Never = 0,
	EAbilitySystemComponentCreationPolicy__Lazy = 1,
	EAbilitySystemComponentCreationPolicy__Always = 2,
	EAbilitySystemComponentCreationPolicy__EAbilitySystemComponentCreationPolicy_MAX = 3
};


// Enum FortniteGame.EAttributeInitLevelSource
enum class EAttributeInitLevelSource
{
	EAttributeInitLevelSource__WorldDifficulty = 0,
	EAttributeInitLevelSource__PlayerBuildingSkill = 1,
	EAttributeInitLevelSource__EAttributeInitLevelSource_MAX = 2
};


// Enum FortniteGame.EDynamicBuildingPlacementType
enum class EDynamicBuildingPlacementType
{
	EDynamicBuildingPlacementType__CountsTowardsBounds = 0,
	EDynamicBuildingPlacementType__DestroyIfColliding = 1,
	EDynamicBuildingPlacementType__DestroyAnythingThatCollides = 2,
	EDynamicBuildingPlacementType__EDynamicBuildingPlacementType_MAX = 3
};


// Enum FortniteGame.ELootQuotaLevel
enum class ELootQuotaLevel
{
	ELootQuotaLevel__Unlimited     = 0,
	ELootQuotaLevel__Level1        = 1,
	ELootQuotaLevel__Level2        = 2,
	ELootQuotaLevel__Level3        = 3,
	ELootQuotaLevel__Level4        = 4,
	ELootQuotaLevel__Level5        = 5,
	ELootQuotaLevel__Level6        = 6,
	ELootQuotaLevel__Level7        = 7,
	ELootQuotaLevel__Level8        = 8,
	ELootQuotaLevel__Level9        = 9,
	ELootQuotaLevel__Level10       = 10,
	ELootQuotaLevel__Level11       = 11,
	ELootQuotaLevel__Level12       = 12,
	ELootQuotaLevel__Level13       = 13,
	ELootQuotaLevel__Level14       = 14,
	ELootQuotaLevel__Level15       = 15,
	ELootQuotaLevel__Level16       = 16,
	ELootQuotaLevel__Level17       = 17,
	ELootQuotaLevel__NumLevels     = 18,
	ELootQuotaLevel__ELootQuotaLevel_MAX = 19
};


// Enum FortniteGame.EBuildingNavObstacleType
enum class EBuildingNavObstacleType
{
	EBuildingNavObstacleType__UnwalkableAll = 0,
	EBuildingNavObstacleType__UnwalkableHuskOnly = 1,
	EBuildingNavObstacleType__SmashWhenLowHeight = 2,
	EBuildingNavObstacleType__SmashOnlyLowHeight = 3,
	EBuildingNavObstacleType__SmashSmasherOnly = 4,
	EBuildingNavObstacleType__SmashAll = 5,
	EBuildingNavObstacleType__EBuildingNavObstacleType_MAX = 6
};


// Enum FortniteGame.EFortDamageVisualsState
enum class EFortDamageVisualsState
{
	EFortDamageVisualsState__UnDamaged = 0,
	EFortDamageVisualsState__DamagedAndAnimating = 1,
	EFortDamageVisualsState__DamagedAndStatic = 2,
	EFortDamageVisualsState__EFortDamageVisualsState_MAX = 3
};


// Enum FortniteGame.EStructuralSupportCheck
enum class EStructuralSupportCheck
{
	EStructuralSupportCheck__Stable = 0,
	EStructuralSupportCheck__Unstable = 1,
	EStructuralSupportCheck__Max_None = 2,
	EStructuralSupportCheck__EStructuralSupportCheck_MAX = 3
};


// Enum FortniteGame.EBuildingReplacementType
enum class EBuildingReplacementType
{
	BRT_None                       = 0,
	BRT_Edited                     = 1,
	BRT_Conversion                 = 2,
	BRT_MAX                        = 3
};


// Enum FortniteGame.EPlacementType
enum class EPlacementType
{
	EPlacementType__Free           = 0,
	EPlacementType__Grid           = 1,
	EPlacementType__None           = 2,
	EPlacementType__EPlacementType_MAX = 3
};


// Enum FortniteGame.EBuildingAttachmentSide
enum class EBuildingAttachmentSide
{
	EBuildingAttachmentSide__Front = 0,
	EBuildingAttachmentSide__Back  = 1,
	EBuildingAttachmentSide__Any   = 2,
	EBuildingAttachmentSide__EBuildingAttachmentSide_MAX = 3
};


// Enum FortniteGame.EBuildingAttachmentSlot
enum class EBuildingAttachmentSlot
{
	SLOT_Floor                     = 0,
	SLOT_Wall                      = 1,
	SLOT_Ceiling                   = 2,
	SLOT_None                      = 3,
	SLOT_MAX                       = 4
};


// Enum FortniteGame.EBuildingAnim
enum class EBuildingAnim
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
enum class EBoundingBoxSlotDirectionCalculation
{
	EBoundingBoxSlotDirectionCalculation__Auto = 0,
	EBoundingBoxSlotDirectionCalculation__FaceWall = 1,
	EBoundingBoxSlotDirectionCalculation__FaceAwayFromWall = 2,
	EBoundingBoxSlotDirectionCalculation__FaceCenter = 3,
	EBoundingBoxSlotDirectionCalculation__EBoundingBoxSlotDirectionCalculation_MAX = 4
};


// Enum FortniteGame.EFortProximityBasedGEApplicationType
enum class EFortProximityBasedGEApplicationType
{
	EFortProximityBasedGEApplicationType__ApplyOnProximityPulse = 0,
	EFortProximityBasedGEApplicationType__ApplyOnProximityTouch = 1,
	EFortProximityBasedGEApplicationType__ApplyOnlyDuringProximityTouch = 2,
	EFortProximityBasedGEApplicationType__EFortProximityBasedGEApplicationType_MAX = 3
};


// Enum FortniteGame.EFortDeliveryInfoBuildingActorSpecification
enum class EFortDeliveryInfoBuildingActorSpecification
{
	EFortDeliveryInfoBuildingActorSpecification__All = 0,
	EFortDeliveryInfoBuildingActorSpecification__PlayerBuildable = 1,
	EFortDeliveryInfoBuildingActorSpecification__NonPlayerBuildable = 2,
	EFortDeliveryInfoBuildingActorSpecification__EFortDeliveryInfoBuildingActorSpecification_MAX = 3
};


// Enum FortniteGame.EUnlockRules
enum class EUnlockRules
{
	EUnlockRules__UR_Reset         = 0,
	EUnlockRules__UR_MaintainState = 1,
	EUnlockRules__UR_ResetDeactivate = 2,
	EUnlockRules__UR_MAX           = 3
};


// Enum FortniteGame.EContentionRules
enum class EContentionRules
{
	EContentionRules__CR_MajorityWins = 0,
	EContentionRules__CR_OneTeamOnlyWins = 1,
	EContentionRules__CR_MAX       = 2
};


// Enum FortniteGame.EFortIsFinalXpUpdate
enum class EFortIsFinalXpUpdate
{
	EFortIsFinalXpUpdate__Uninitialized = 0,
	EFortIsFinalXpUpdate__NotFinal = 1,
	EFortIsFinalXpUpdate__Final    = 2,
	EFortIsFinalXpUpdate__EFortIsFinalXpUpdate_MAX = 3
};


// Enum FortniteGame.EFortRewardType
enum class EFortRewardType
{
	EFortRewardType__Default       = 0,
	EFortRewardType__Missed        = 1,
	EFortRewardType__Max_None      = 2,
	EFortRewardType__EFortRewardType_MAX = 3
};


// Enum FortniteGame.EFortRewardActivityType
enum class EFortRewardActivityType
{
	EFortRewardActivityType__General = 0,
	EFortRewardActivityType__MissionPrimary = 1,
	EFortRewardActivityType__MissionSecondary = 2,
	EFortRewardActivityType__AccountLevelUp = 3,
	EFortRewardActivityType__Max_None = 4,
	EFortRewardActivityType__EFortRewardActivityType_MAX = 5
};


// Enum FortniteGame.EStatCategory
enum class EStatCategory
{
	EStatCategory__Combat          = 0,
	EStatCategory__Building        = 1,
	EStatCategory__Utility         = 2,
	EStatCategory__Max_None        = 3,
	EStatCategory__EStatCategory_MAX = 4
};


// Enum FortniteGame.EFortReplicatedStat
enum class EFortReplicatedStat
{
	EFortReplicatedStat__MonsterKills = 0,
	EFortReplicatedStat__MonsterDamagePoints = 1,
	EFortReplicatedStat__PlayerKills = 2,
	EFortReplicatedStat__WoodGathered = 3,
	EFortReplicatedStat__StoneGathered = 4,
	EFortReplicatedStat__MetalGathered = 5,
	EFortReplicatedStat__Deaths    = 6,
	EFortReplicatedStat__BuildingsBuilt = 7,
	EFortReplicatedStat__BuildingsBuilt_Wood = 8,
	EFortReplicatedStat__BuildingsBuilt_Stone = 9,
	EFortReplicatedStat__BuildingsBuilt_Metal = 10,
	EFortReplicatedStat__BuildingsUpgraded_Wood2 = 11,
	EFortReplicatedStat__BuildingsUpgraded_Wood3 = 12,
	EFortReplicatedStat__BuildingsUpgraded_Stone2 = 13,
	EFortReplicatedStat__BuildingsUpgraded_Stone3 = 14,
	EFortReplicatedStat__BuildingsUpgraded_Metal2 = 15,
	EFortReplicatedStat__BuildingsUpgraded_Metal3 = 16,
	EFortReplicatedStat__BuildingsDestroyed = 17,
	EFortReplicatedStat__Repair_Wood = 18,
	EFortReplicatedStat__Repair_Stone = 19,
	EFortReplicatedStat__Repair_Metal = 20,
	EFortReplicatedStat__FlagsCaptured = 21,
	EFortReplicatedStat__FlagsReturned = 22,
	EFortReplicatedStat__ContainersLooted = 23,
	EFortReplicatedStat__CraftingPoints = 24,
	EFortReplicatedStat__TrapPlacementPoints = 25,
	EFortReplicatedStat__TrapActivationPoints = 26,
	EFortReplicatedStat__TotalScore = 27,
	EFortReplicatedStat__OldTotalScore = 28,
	EFortReplicatedStat__CombatScore = 29,
	EFortReplicatedStat__BuildingScore = 30,
	EFortReplicatedStat__UtilityScore = 31,
	EFortReplicatedStat__BadgesScore = 32,
	EFortReplicatedStat__None      = 33,
	EFortReplicatedStat__MAX       = 34,
	EFortReplicatedStat__EFortReplicatedStat_MAX = 35
};


// Enum FortniteGame.EFortReplenishmentType
enum class EFortReplenishmentType
{
	EFortReplenishmentType__Restricted = 0,
	EFortReplenishmentType__ClampMin = 1,
	EFortReplenishmentType__Add    = 2,
	EFortReplenishmentType__Ability = 3,
	EFortReplenishmentType__EFortReplenishmentType_MAX = 4
};


// Enum FortniteGame.EFortTemplateAccess
enum class EFortTemplateAccess
{
	EFortTemplateAccess__Normal    = 0,
	EFortTemplateAccess__Trusted   = 1,
	EFortTemplateAccess__Private   = 2,
	EFortTemplateAccess__EFortTemplateAccess_MAX = 3
};


// Enum FortniteGame.EItemEvolutionRestrictionReason
enum class EItemEvolutionRestrictionReason
{
	EItemEvolutionRestrictionReason__NoEvolutions = 0,
	EItemEvolutionRestrictionReason__BelowMaximumLevel = 1,
	EItemEvolutionRestrictionReason__VaultOverflow = 2,
	EItemEvolutionRestrictionReason__MissingCatalyst = 3,
	EItemEvolutionRestrictionReason__MissingCosts = 4,
	EItemEvolutionRestrictionReason__EItemEvolutionRestrictionReason_MAX = 5
};


// Enum FortniteGame.EItemUpgradeRestrictionReason
enum class EItemUpgradeRestrictionReason
{
	EItemUpgradeRestrictionReason__NoAdditionalLevels = 0,
	EItemUpgradeRestrictionReason__MaximumLevelAchieved = 1,
	EItemUpgradeRestrictionReason__VaultOverflow = 2,
	EItemUpgradeRestrictionReason__EItemUpgradeRestrictionReason_MAX = 3
};


// Enum FortniteGame.EFortQuickBars
enum class EFortQuickBars
{
	EFortQuickBars__Primary        = 0,
	EFortQuickBars__Secondary      = 1,
	EFortQuickBars__Max_None       = 2,
	EFortQuickBars__EFortQuickBars_MAX = 3
};


// Enum FortniteGame.EFOBFileHeaderStatus
enum class EFOBFileHeaderStatus
{
	EFOBFileHeaderStatus__NoExistingFile = 0,
	EFOBFileHeaderStatus__HasExistingFile = 1,
	EFOBFileHeaderStatus__UnableToDetermine = 2,
	EFOBFileHeaderStatus__EFOBFileHeaderStatus_MAX = 3
};


// Enum FortniteGame.EFOBInitStatus
enum class EFOBInitStatus
{
	EFOBInitStatus__Successful     = 0,
	EFOBInitStatus__Failure_CloudStorageDisabled = 1,
	EFOBInitStatus__Failure_PreviouslyInitialized = 2,
	EFOBInitStatus__Failure_DataOwner = 3,
	EFOBInitStatus__Failure_CloudStorageError = 4,
	EFOBInitStatus__Failure_MissingFileName = 5,
	EFOBInitStatus__Failure_Generic = 6,
	EFOBInitStatus__EFOBInitStatus_MAX = 7
};


// Enum FortniteGame.EFOBMode
enum class EFOBMode
{
	EFOBMode__Uninitialized        = 0,
	EFOBMode__Creation             = 1,
	EFOBMode__Deployment           = 2,
	EFOBMode__EFOBMode_MAX         = 3
};


// Enum FortniteGame.EFortItemCollectorBehavior
enum class EFortItemCollectorBehavior
{
	EFortItemCollectorBehavior__FirstToGoal = 0,
	EFortItemCollectorBehavior__FreeForAll = 1,
	EFortItemCollectorBehavior__TugOfWar = 2,
	EFortItemCollectorBehavior__EFortItemCollectorBehavior_MAX = 3
};


// Enum FortniteGame.EFortItemCollectorState
enum class EFortItemCollectorState
{
	EFortItemCollectorState__CanInteract = 0,
	EFortItemCollectorState__Active = 1,
	EFortItemCollectorState__Inactive = 2,
	EFortItemCollectorState__Captured = 3,
	EFortItemCollectorState__Invalid = 4,
	EFortItemCollectorState__EFortItemCollectorState_MAX = 5
};


// Enum FortniteGame.EDeployableBaseConstructionStatus
enum class EDeployableBaseConstructionStatus
{
	EDeployableBaseConstructionStatus__Constructing = 0,
	EDeployableBaseConstructionStatus__Destroying = 1,
	EDeployableBaseConstructionStatus__Finished = 2,
	EDeployableBaseConstructionStatus__EDeployableBaseConstructionStatus_MAX = 3
};


// Enum FortniteGame.EDeployableBaseBuildingState
enum class EDeployableBaseBuildingState
{
	EDeployableBaseBuildingState__Empty = 0,
	EDeployableBaseBuildingState__Built = 1,
	EDeployableBaseBuildingState__Unoccupied = 2,
	EDeployableBaseBuildingState__WaitingToBuild = 3,
	EDeployableBaseBuildingState__Building = 4,
	EDeployableBaseBuildingState__WaitingToDestroy = 5,
	EDeployableBaseBuildingState__Destroying = 6,
	EDeployableBaseBuildingState__WaitingToReset = 7,
	EDeployableBaseBuildingState__Resetting = 8,
	EDeployableBaseBuildingState__EDeployableBaseBuildingState_MAX = 9
};


// Enum FortniteGame.EDeployableBaseBoxType
enum class EDeployableBaseBoxType
{
	EDeployableBaseBoxType__BuildSpace = 0,
	EDeployableBaseBoxType__SaveSpace = 1,
	EDeployableBaseBoxType__PlotSpace = 2,
	EDeployableBaseBoxType__NumSpaceTypes = 3,
	EDeployableBaseBoxType__EDeployableBaseBoxType_MAX = 4
};


// Enum FortniteGame.EFortMiniMapIconRotation
enum class EFortMiniMapIconRotation
{
	EFMMIR_None                    = 0,
	EFMMIR_Absolute                = 1,
	EFMMIR_Relative                = 2,
	EFMMIR_MAX                     = 3
};


// Enum FortniteGame.EFortMiniMapContext
enum class EFortMiniMapContext
{
	EFMC_MiniMap                   = 0,
	EFMC_FullScreenMap             = 1,
	EFMC_MAX                       = 2
};


// Enum FortniteGame.EFortMiniMapHeight
enum class EFortMiniMapHeight
{
	EFMH_Equal                     = 0,
	EFMH_Below                     = 1,
	EFMH_Above                     = 2,
	EFMH_MAX                       = 3
};


// Enum FortniteGame.EFortAbilityTargetSelectionUsage
enum class EFortAbilityTargetSelectionUsage
{
	EFortAbilityTargetSelectionUsage__BothTargetingAndCanHit = 0,
	EFortAbilityTargetSelectionUsage__OnlyTargeting = 1,
	EFortAbilityTargetSelectionUsage__OnlyCanHit = 2,
	EFortAbilityTargetSelectionUsage__EFortAbilityTargetSelectionUsage_MAX = 3
};


// Enum FortniteGame.EFortAbilityCostSource
enum class EFortAbilityCostSource
{
	EFortAbilityCostSource__Stamina = 0,
	EFortAbilityCostSource__Durability = 1,
	EFortAbilityCostSource__AmmoMagazine = 2,
	EFortAbilityCostSource__AmmoPrimary = 3,
	EFortAbilityCostSource__Item   = 4,
	EFortAbilityCostSource__EFortAbilityCostSource_MAX = 5
};


// Enum FortniteGame.EFortGameplayAbilityActivation
enum class EFortGameplayAbilityActivation
{
	EFortGameplayAbilityActivation__Passive = 0,
	EFortGameplayAbilityActivation__Triggered = 1,
	EFortGameplayAbilityActivation__Active = 2,
	EFortGameplayAbilityActivation__EFortGameplayAbilityActivation_MAX = 3
};


// Enum FortniteGame.EFortAIWeaponUsage
enum class EFortAIWeaponUsage
{
	EFortAIWeaponUsage__NoWeaponUsage = 0,
	EFortAIWeaponUsage__UsesRangedWeapon = 1,
	EFortAIWeaponUsage__UsesMeleeWeapon = 2,
	EFortAIWeaponUsage__EFortAIWeaponUsage_MAX = 3
};


// Enum FortniteGame.EFortGameplayAbilityMontageSectionToPlay
enum class EFortGameplayAbilityMontageSectionToPlay
{
	EFortGameplayAbilityMontageSectionToPlay__FirstSection = 0,
	EFortGameplayAbilityMontageSectionToPlay__RandomSection = 1,
	EFortGameplayAbilityMontageSectionToPlay__TestedRandomSection = 2,
	EFortGameplayAbilityMontageSectionToPlay__EFortGameplayAbilityMontageSectionToPlay_MAX = 3
};


// Enum FortniteGame.EFortStrategicBuildingLevelCriteriaDisplayRepresentation
enum class EFortStrategicBuildingLevelCriteriaDisplayRepresentation
{
	EFortStrategicBuildingLevelCriteriaDisplayRepresentation__Integer = 0,
	EFortStrategicBuildingLevelCriteriaDisplayRepresentation__Float = 1,
	EFortStrategicBuildingLevelCriteriaDisplayRepresentation__EFortStrategicBuildingLevelCriteriaDisplayRepresentation_MAX = 2
};


// Enum FortniteGame.EFortStrategicBuildingCategory
enum class EFortStrategicBuildingCategory
{
	EFortStrategicBuildingCategory__Defensive = 0,
	EFortStrategicBuildingCategory__Offensive = 1,
	EFortStrategicBuildingCategory__Utility = 2,
	EFortStrategicBuildingCategory__EFortStrategicBuildingCategory_MAX = 3
};


// Enum FortniteGame.EFortRiftSlotStatus
enum class EFortRiftSlotStatus
{
	EFortRiftSlotStatus__Reserved  = 0,
	EFortRiftSlotStatus__Occupied  = 1,
	EFortRiftSlotStatus__Max_None  = 2,
	EFortRiftSlotStatus__EFortRiftSlotStatus_MAX = 3
};


// Enum FortniteGame.EFortDisplayTier
enum class EFortDisplayTier
{
	EFortDisplayTier__Invalid      = 0,
	EFortDisplayTier__Handmade     = 1,
	EFortDisplayTier__Copper       = 2,
	EFortDisplayTier__Silver       = 3,
	EFortDisplayTier__Malachite    = 4,
	EFortDisplayTier__Obsidian     = 5,
	EFortDisplayTier__Brightcore   = 6,
	EFortDisplayTier__Spectrolite  = 7,
	EFortDisplayTier__Shadowshard  = 8,
	EFortDisplayTier__Sunbeam      = 9,
	EFortDisplayTier__Moonglow     = 10,
	EFortDisplayTier__EFortDisplayTier_MAX = 11
};


// Enum FortniteGame.ETrackVerticality
enum class ETrackVerticality
{
	ETrackVerticality__Floor       = 0,
	ETrackVerticality__Ramp        = 1,
	ETrackVerticality__GradualRamp = 2,
	ETrackVerticality__Max_None    = 3,
	ETrackVerticality__ETrackVerticality_MAX = 4
};


// Enum FortniteGame.ETrackIncline
enum class ETrackIncline
{
	ETrackIncline__NoNeighbor      = 0,
	ETrackIncline__Flat            = 1,
	ETrackIncline__Up              = 2,
	ETrackIncline__Down            = 3,
	ETrackIncline__GradualUp       = 4,
	ETrackIncline__GradualDown     = 5,
	ETrackIncline__Max_None        = 6,
	ETrackIncline__ETrackIncline_MAX = 7
};


// Enum FortniteGame.ETrackPieceType
enum class ETrackPieceType
{
	ETrackPieceType__None          = 0,
	ETrackPieceType__Straight      = 1,
	ETrackPieceType__Turn          = 2,
	ETrackPieceType__TShape        = 3,
	ETrackPieceType__Cross         = 4,
	ETrackPieceType__Max_None      = 5,
	ETrackPieceType__ETrackPieceType_MAX = 6
};


// Enum FortniteGame.ETrackDirection
enum class ETrackDirection
{
	ETrackDirection__YNegative     = 0,
	ETrackDirection__XPositive     = 1,
	ETrackDirection__YPositive     = 2,
	ETrackDirection__XNegative     = 3,
	ETrackDirection__Max_None      = 4,
	ETrackDirection__ETrackDirection_MAX = 5
};


// Enum FortniteGame.EBuildingFoundationType
enum class EBuildingFoundationType
{
	BFT_3x3                        = 0,
	BFT_5x5                        = 1,
	BFT_5x10                       = 2,
	BFT_None                       = 3,
	BFT_MAX                        = 4
};


// Enum FortniteGame.ELayoutRequirementStatus
enum class ELayoutRequirementStatus
{
	ELayoutRequirementStatus__Inactive_Invisible = 0,
	ELayoutRequirementStatus__Active_Invisible = 1,
	ELayoutRequirementStatus__Active_Visible = 2,
	ELayoutRequirementStatus__ELayoutRequirementStatus_MAX = 3
};


// Enum FortniteGame.EFortDefenderInteractionError
enum class EFortDefenderInteractionError
{
	EFortDefenderInteractionError__None = 0,
	EFortDefenderInteractionError__FullParty = 1,
	EFortDefenderInteractionError__Obstructed = 2,
	EFortDefenderInteractionError__NoEditPermission = 3,
	EFortDefenderInteractionError__EFortDefenderInteractionError_MAX = 4
};


// Enum FortniteGame.FDynamicBuildOrder
enum class EFDynamicBuildOrder
{
	FDynamicBuildOrder__X          = 0,
	FDynamicBuildOrder__Y          = 1,
	FDynamicBuildOrder__Z          = 2,
	FDynamicBuildOrder__None       = 3,
	FDynamicBuildOrder__FDynamicBuildOrder_MAX = 4
};


// Enum FortniteGame.EBinaryToggleValues
enum class EBinaryToggleValues
{
	BTV_Active                     = 0,
	BTV_Inactive                   = 1,
	BTV_Either                     = 2,
	BTV_MAX                        = 3
};


// Enum FortniteGame.EAuxIndicatorStates
enum class EAuxIndicatorStates
{
	AIS_GuidingArrow               = 0,
	AIS_ConfirmedArrow             = 1,
	AIS_Inactive                   = 2,
	AIS_Active                     = 3,
	AIS_MAX                        = 4
};


// Enum FortniteGame.EColorSwatchType
enum class EColorSwatchType
{
	EColorSwatchType_Skin          = 0,
	EColorSwatchType_Hair          = 1,
	EColorSwatchType_BodyAccessory = 2,
	EColorSwatchType_Accessory     = 3,
	EColorSwatchType_NumTypes      = 4,
	EColorSwatchType_MAX           = 5
};


// Enum FortniteGame.ECharacterColorSwatchType
enum class ECharacterColorSwatchType
{
	ECharacterColorSwatchType_Skin = 0,
	ECharacterColorSwatchType_Hair = 1,
	ECharacterColorSwatchType_NumTypes = 2,
	ECharacterColorSwatchType_MAX  = 3
};


// Enum FortniteGame.EAccessoryColorName
enum class EAccessoryColorName
{
	EAccessoryColorName_AccessoryColor1 = 0,
	EAccessoryColorName_AccessoryColor2 = 1,
	EAccessoryColorName_AccessoryColor3 = 2,
	EAccessoryColorName_NumTypes   = 3,
	EAccessoryColorName_MAX        = 4
};


// Enum FortniteGame.ECustomHatType
enum class ECustomHatType
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
enum class EClothingColorName
{
	EClothingColorName_AccessoryColor1 = 0,
	EClothingColorName_AccessoryColor2 = 1,
	EClothingColorName_NumTypes    = 2,
	EClothingColorName_MAX         = 3
};


// Enum FortniteGame.EFortAttributeDisplay
enum class EFortAttributeDisplay
{
	EFortAttributeDisplay__BasicInt = 0,
	EFortAttributeDisplay__NegativeImpliesInfiniteInt = 1,
	EFortAttributeDisplay__BasicFloat = 2,
	EFortAttributeDisplay__NegativeImpliesInfiniteFloat = 3,
	EFortAttributeDisplay__BasicString = 4,
	EFortAttributeDisplay__NormalizedPercentage = 5,
	EFortAttributeDisplay__StringArray = 6,
	EFortAttributeDisplay__SlateBrush = 7,
	EFortAttributeDisplay__DoNotDisplay = 8,
	EFortAttributeDisplay__None_Max = 9,
	EFortAttributeDisplay__EFortAttributeDisplay_MAX = 10
};


// Enum FortniteGame.EFortStatDisplayType
enum class EFortStatDisplayType
{
	EFortStatDisplayType__Category = 0,
	EFortStatDisplayType__Buff     = 1,
	EFortStatDisplayType__Debuff   = 2,
	EFortStatDisplayType__Neutral  = 3,
	EFortStatDisplayType__DoNotDisplay = 4,
	EFortStatDisplayType__EFortStatDisplayType_MAX = 5
};


// Enum FortniteGame.EFortDirectedMovementSpace
enum class EFortDirectedMovementSpace
{
	EFortDirectedMovementSpace__WorldSpace = 0,
	EFortDirectedMovementSpace__ActorLocRelative = 1,
	EFortDirectedMovementSpace__ActorLocRotRelative = 2,
	EFortDirectedMovementSpace__CameraRelative = 3,
	EFortDirectedMovementSpace__EFortDirectedMovementSpace_MAX = 4
};


// Enum FortniteGame.EPathUndermineEvent
enum class EPathUndermineEvent
{
	EPathUndermineEvent__Predicted = 0,
	EPathUndermineEvent__Started   = 1,
	EPathUndermineEvent__Finished  = 2,
	EPathUndermineEvent__EPathUndermineEvent_MAX = 3
};


// Enum FortniteGame.EPathObstacleAction
enum class EPathObstacleAction
{
	EPathObstacleAction__Melee     = 0,
	EPathObstacleAction__Ignore    = 1,
	EPathObstacleAction__AbortMoveAsFailed = 2,
	EPathObstacleAction__FinishMoveAsSucceeded = 3,
	EPathObstacleAction__EPathObstacleAction_MAX = 4
};


// Enum FortniteGame.EFortAccountLinkingUIConfig
enum class EFortAccountLinkingUIConfig
{
	EFortAccountLinkingUIConfig__Disabled = 0,
	EFortAccountLinkingUIConfig__Default = 1,
	EFortAccountLinkingUIConfig__ExternalViewerOnly = 2,
	EFortAccountLinkingUIConfig__FullExternal = 3,
	EFortAccountLinkingUIConfig__EFortAccountLinkingUIConfig_MAX = 4
};


// Enum FortniteGame.EFortFeedbackBroadcastFilter
enum class EFortFeedbackBroadcastFilter
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
enum class EFortFeedbackSelectionMethod
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
enum class EFortFeedbackAddressee
{
	FFA_Instigator                 = 0,
	FFA_Recipient                  = 1,
	FFA_All                        = 2,
	FFA_MAX                        = 3
};


// Enum FortniteGame.EFortFeedbackContext
enum class EFortFeedbackContext
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
enum class EFortSentenceAudioPreference
{
	EFortSentenceAudioPreference__AudioAsset = 0,
	EFortSentenceAudioPreference__FeedbackBank = 1,
	EFortSentenceAudioPreference__EFortSentenceAudioPreference_MAX = 2
};


// Enum FortniteGame.EFortPickupTossState
enum class EFortPickupTossState
{
	EFortPickupTossState__NotTossed = 0,
	EFortPickupTossState__InProgress = 1,
	EFortPickupTossState__AtRest   = 2,
	EFortPickupTossState__EFortPickupTossState_MAX = 3
};


// Enum FortniteGame.EFortControlRecoveryBehavior
enum class EFortControlRecoveryBehavior
{
	EFortControlRecoveryBehavior__DefaultControl = 0,
	EFortControlRecoveryBehavior__LimitedControl = 1,
	EFortControlRecoveryBehavior__ChainControl = 2,
	EFortControlRecoveryBehavior__EFortControlRecoveryBehavior_MAX = 3
};


// Enum FortniteGame.EFortPawnPushSize
enum class EFortPawnPushSize
{
	EFortPawnPushSize__FFPS_Normal = 0,
	EFortPawnPushSize__FPPS_Player = 1,
	EFortPawnPushSize__FPPS_Large  = 2,
	EFortPawnPushSize__FPPS_SuperLarge = 3,
	EFortPawnPushSize__EFortPawnPushSize_MAX = 4
};


// Enum FortniteGame.EFortAIPawnGender
enum class EFortAIPawnGender
{
	EFortAIPawnGender__FAPG_Default = 0,
	EFortAIPawnGender__FAPG_Female = 1,
	EFortAIPawnGender__FAPG_Male   = 2,
	EFortAIPawnGender__FAPG_MAX    = 3
};


// Enum FortniteGame.EFortAILevelRatingDisplayType
enum class EFortAILevelRatingDisplayType
{
	EFortAILevelRatingDisplayType__DisplayRatingBasedOnDifficulty = 0,
	EFortAILevelRatingDisplayType__DisplayAIDifficultyAsRating = 1,
	EFortAILevelRatingDisplayType__DontDisplayRating = 2,
	EFortAILevelRatingDisplayType__EFortAILevelRatingDisplayType_MAX = 3
};


// Enum FortniteGame.EFortressAIType
enum class EFortressAIType
{
	EFortressAIType__FAT_Dormant   = 0,
	EFortressAIType__FAT_Cleaner   = 1,
	EFortressAIType__FAT_DayWanderer = 2,
	EFortressAIType__FAT_NightWanderer = 3,
	EFortressAIType__FAT_DebugOnly = 4,
	EFortressAIType__FAT_Encounter = 5,
	EFortressAIType__FAT_MAX       = 6
};


// Enum FortniteGame.EFortEncounterSpawnLimitType
enum class EFortEncounterSpawnLimitType
{
	EFortEncounterSpawnLimitType__NoLimit = 0,
	EFortEncounterSpawnLimitType__NumPawnsLimit = 1,
	EFortEncounterSpawnLimitType__SpawnPointLimit = 2,
	EFortEncounterSpawnLimitType__UserDefined = 3,
	EFortEncounterSpawnLimitType__MAX = 4,
	EFortEncounterSpawnLimitType__EFortEncounterSpawnLimitType_MAX = 5
};


// Enum FortniteGame.EFortEncounterUtilitiesMode
enum class EFortEncounterUtilitiesMode
{
	EFortEncounterUtilitiesMode__LockedOnly = 0,
	EFortEncounterUtilitiesMode__LockedAndFree = 1,
	EFortEncounterUtilitiesMode__EFortEncounterUtilitiesMode_MAX = 2
};


// Enum FortniteGame.EFortEncounterSpawnLocationPlacementMode
enum class EFortEncounterSpawnLocationPlacementMode
{
	EFortEncounterSpawnLocationPlacementMode__Directional = 0,
	EFortEncounterSpawnLocationPlacementMode__Ring = 1,
	EFortEncounterSpawnLocationPlacementMode__Volume = 2,
	EFortEncounterSpawnLocationPlacementMode__Custom = 3,
	EFortEncounterSpawnLocationPlacementMode__Max_None = 4,
	EFortEncounterSpawnLocationPlacementMode__EFortEncounterSpawnLocationPlacementMode_MAX = 5
};


// Enum FortniteGame.EFortEncounterPacingMode
enum class EFortEncounterPacingMode
{
	EFortEncounterPacingMode__SpawnPointsPercentageCurve = 0,
	EFortEncounterPacingMode__IntensityCurve = 1,
	EFortEncounterPacingMode__Burst = 2,
	EFortEncounterPacingMode__EFortEncounterPacingMode_MAX = 3
};


// Enum FortniteGame.EWardAffectType
enum class EWardAffectType
{
	EWardAffectType__AffectsBothStartAndEndPoints = 0,
	EWardAffectType__AffectsOnlyStartPoints = 1,
	EWardAffectType__AffectsOnlyEndPoints = 2,
	EWardAffectType__EWardAffectType_MAX = 3
};


// Enum FortniteGame.EFortEncounterUtilityDesire
enum class EFortEncounterUtilityDesire
{
	EFortEncounterUtilityDesire__Low = 0,
	EFortEncounterUtilityDesire__Medium = 1,
	EFortEncounterUtilityDesire__High = 2,
	EFortEncounterUtilityDesire__VeryHigh = 3,
	EFortEncounterUtilityDesire__Max_None = 4,
	EFortEncounterUtilityDesire__EFortEncounterUtilityDesire_MAX = 5
};


// Enum FortniteGame.EFortAIDirectorFactorContribution
enum class EFortAIDirectorFactorContribution
{
	EFortAIDirectorFactorContribution__Direct = 0,
	EFortAIDirectorFactorContribution__Inverse = 1,
	EFortAIDirectorFactorContribution__EFortAIDirectorFactorContribution_MAX = 2
};


// Enum FortniteGame.EFortAIDirectorEventContribution
enum class EFortAIDirectorEventContribution
{
	EFortAIDirectorEventContribution__Increment = 0,
	EFortAIDirectorEventContribution__Set = 1,
	EFortAIDirectorEventContribution__EFortAIDirectorEventContribution_MAX = 2
};


// Enum FortniteGame.ETagGoalScoringCategory
enum class ETagGoalScoringCategory
{
	ETagGoalScoringCategory__Ignore = 0,
	ETagGoalScoringCategory__HighInterest = 1,
	ETagGoalScoringCategory__NumCategories = 2,
	ETagGoalScoringCategory__ETagGoalScoringCategory_MAX = 3
};


// Enum FortniteGame.EFortIntensityCurveSequenceType
enum class EFortIntensityCurveSequenceType
{
	EFortIntensityCurveSequenceType__Sequence = 0,
	EFortIntensityCurveSequenceType__Loop = 1,
	EFortIntensityCurveSequenceType__Random = 2,
	EFortIntensityCurveSequenceType__Max_None = 3,
	EFortIntensityCurveSequenceType__EFortIntensityCurveSequenceType_MAX = 4
};


// Enum FortniteGame.EFortAIWaveProgressSection
enum class EFortAIWaveProgressSection
{
	EFortAIWaveProgressSection__SectionOne = 0,
	EFortAIWaveProgressSection__SectionTwo = 1,
	EFortAIWaveProgressSection__Max_None = 2,
	EFortAIWaveProgressSection__EFortAIWaveProgressSection_MAX = 3
};


// Enum FortniteGame.EFortEncounterState
enum class EFortEncounterState
{
	EFortEncounterState__Uninitialized = 0,
	EFortEncounterState__InitializingProperties = 1,
	EFortEncounterState__InitializingRiftManager = 2,
	EFortEncounterState__AwaitingActivation = 3,
	EFortEncounterState__Active    = 4,
	EFortEncounterState__Max_None  = 5,
	EFortEncounterState__EFortEncounterState_MAX = 6
};


// Enum FortniteGame.EFortEncounterPacingState
enum class EFortEncounterPacingState
{
	EFortEncounterPacingState__Ramp = 0,
	EFortEncounterPacingState__Peak = 1,
	EFortEncounterPacingState__Fade = 2,
	EFortEncounterPacingState__Rest = 3,
	EFortEncounterPacingState__Max_None = 4,
	EFortEncounterPacingState__EFortEncounterPacingState_MAX = 5
};


// Enum FortniteGame.EFortThreatDeactivationType
enum class EFortThreatDeactivationType
{
	EFortThreatDeactivationType__Off = 0,
	EFortThreatDeactivationType__Dormant = 1,
	EFortThreatDeactivationType__EFortThreatDeactivationType_MAX = 2
};


// Enum FortniteGame.EFortEncounterSequenceResult
enum class EFortEncounterSequenceResult
{
	EFortEncounterSequenceResult__Success = 0,
	EFortEncounterSequenceResult__FailedEncounterInProgress = 1,
	EFortEncounterSequenceResult__EFortEncounterSequenceResult_MAX = 2
};


// Enum FortniteGame.EAssignmentCreationResult
enum class EAssignmentCreationResult
{
	EAssignmentCreationResult__AssignmentNotFoundOrCreated = 0,
	EAssignmentCreationResult__AssignmentCreated = 1,
	EAssignmentCreationResult__AssignmentFound = 2,
	EAssignmentCreationResult__EAssignmentCreationResult_MAX = 3
};


// Enum FortniteGame.ECorePerceptionTypes
enum class ECorePerceptionTypes
{
	ECorePerceptionTypes__Sight    = 0,
	ECorePerceptionTypes__Hearing  = 1,
	ECorePerceptionTypes__Damage   = 2,
	ECorePerceptionTypes__Touch    = 3,
	ECorePerceptionTypes__Team     = 4,
	ECorePerceptionTypes__Prediction = 5,
	ECorePerceptionTypes__MAX      = 6,
	ECorePerceptionTypes__ECorePerceptionTypes_MAX = 7
};


// Enum FortniteGame.EFortHuskAnimType
enum class EFortHuskAnimType
{
	EFortHuskAnimType__Basic       = 0,
	EFortHuskAnimType__Dwarf       = 1,
	EFortHuskAnimType__BlasterBig  = 2,
	EFortHuskAnimType__Weak        = 3,
	EFortHuskAnimType__TinyHead    = 4,
	EFortHuskAnimType__Beehive     = 5,
	EFortHuskAnimType__Husky       = 6,
	EFortHuskAnimType__Sploder     = 7,
	EFortHuskAnimType__EFortHuskAnimType_MAX = 8
};


// Enum FortniteGame.EMontageInterrupt
enum class EMontageInterrupt
{
	EMontageInterrupt__Any         = 0,
	EMontageInterrupt__RootMotionOnly = 1,
	EMontageInterrupt__None        = 2,
	EMontageInterrupt__EMontageInterrupt_MAX = 3
};


// Enum FortniteGame.EFortSupportBonusType
enum class EFortSupportBonusType
{
	EFortSupportBonusType__Normal  = 0,
	EFortSupportBonusType__Tactical = 1,
	EFortSupportBonusType__Max_None = 2,
	EFortSupportBonusType__EFortSupportBonusType_MAX = 3
};


// Enum FortniteGame.EPrereqNodeType
enum class EPrereqNodeType
{
	EPrereqNodeType__Invalid       = 0,
	EPrereqNodeType__SkillPoint    = 1,
	EPrereqNodeType__ResearchPoint = 2,
	EPrereqNodeType__All           = 3,
	EPrereqNodeType__EPrereqNodeType_MAX = 4
};


// Enum FortniteGame.EFortHomebaseNodeActionType
enum class EFortHomebaseNodeActionType
{
	EFortHomebaseNodeActionType__None = 0,
	EFortHomebaseNodeActionType__DrillDown = 1,
	EFortHomebaseNodeActionType__CollectResources = 2,
	EFortHomebaseNodeActionType__Max_None = 3,
	EFortHomebaseNodeActionType__EFortHomebaseNodeActionType_MAX = 4
};


// Enum FortniteGame.EFortHomebaseNodeMagnitude
enum class EFortHomebaseNodeMagnitude
{
	EFortHomebaseNodeMagnitude__Small = 0,
	EFortHomebaseNodeMagnitude__Medium = 1,
	EFortHomebaseNodeMagnitude__Large = 2,
	EFortHomebaseNodeMagnitude__Max_None = 3,
	EFortHomebaseNodeMagnitude__EFortHomebaseNodeMagnitude_MAX = 4
};


// Enum FortniteGame.EFortHomebaseNodeDisplayType
enum class EFortHomebaseNodeDisplayType
{
	EFortHomebaseNodeDisplayType__Stat = 0,
	EFortHomebaseNodeDisplayType__SquadSlot = 1,
	EFortHomebaseNodeDisplayType__Gadget = 2,
	EFortHomebaseNodeDisplayType__Inventory = 3,
	EFortHomebaseNodeDisplayType__Hero = 4,
	EFortHomebaseNodeDisplayType__ExitNode = 5,
	EFortHomebaseNodeDisplayType__Max_None = 6,
	EFortHomebaseNodeDisplayType__EFortHomebaseNodeDisplayType_MAX = 7
};


// Enum FortniteGame.EFortHomebaseSquadSlotType
enum class EFortHomebaseSquadSlotType
{
	EFortHomebaseSquadSlotType__GroundSlot = 0,
	EFortHomebaseSquadSlotType__SupportSlot = 1,
	EFortHomebaseSquadSlotType__TacticalSlot = 2,
	EFortHomebaseSquadSlotType__Max_None = 3,
	EFortHomebaseSquadSlotType__EFortHomebaseSquadSlotType_MAX = 4
};


// Enum FortniteGame.EFortHomebaseSquadType
enum class EFortHomebaseSquadType
{
	EFortHomebaseSquadType__AttributeSquad = 0,
	EFortHomebaseSquadType__CombatSquad = 1,
	EFortHomebaseSquadType__DefenderSquad = 2,
	EFortHomebaseSquadType__ExpeditionSquad = 3,
	EFortHomebaseSquadType__Max_None = 4,
	EFortHomebaseSquadType__EFortHomebaseSquadType_MAX = 5
};


// Enum FortniteGame.ECameraOrigin
enum class ECameraOrigin
{
	ECameraOrigin__ViewTargetTransform = 0,
	ECameraOrigin__BoneTransform   = 1,
	ECameraOrigin__ECameraOrigin_MAX = 2
};


// Enum FortniteGame.EFortVisibilityBehavior
enum class EFortVisibilityBehavior
{
	EFortVisibilityBehavior__Proximity = 0,
	EFortVisibilityBehavior__OnceSeenAlwaysSeen = 1,
	EFortVisibilityBehavior__Invalid = 2,
	EFortVisibilityBehavior__EFortVisibilityBehavior_MAX = 3
};


// Enum FortniteGame.EFortSafeZoneState
enum class EFortSafeZoneState
{
	EFortSafeZoneState__None       = 0,
	EFortSafeZoneState__Starting   = 1,
	EFortSafeZoneState__Holding    = 2,
	EFortSafeZoneState__Shrinking  = 3,
	EFortSafeZoneState__EFortSafeZoneState_MAX = 4
};


// Enum FortniteGame.ECollectionSelectionMethod
enum class ECollectionSelectionMethod
{
	ECollectionSelectionMethod__TierAsIndex = 0,
	ECollectionSelectionMethod__TierAsIndexOverflowToLastValid = 1,
	ECollectionSelectionMethod__Modulo = 2,
	ECollectionSelectionMethod__Random = 3,
	ECollectionSelectionMethod__None = 4,
	ECollectionSelectionMethod__ECollectionSelectionMethod_MAX = 5
};


// Enum FortniteGame.EFortAnnouncementDisplayPreference
enum class EFortAnnouncementDisplayPreference
{
	EFortAnnouncementDisplayPreference__Default_HUD = 0,
	EFortAnnouncementDisplayPreference__QuestIntroduction = 1,
	EFortAnnouncementDisplayPreference__QuestJournal = 2,
	EFortAnnouncementDisplayPreference__EFortAnnouncementDisplayPreference_MAX = 3
};


// Enum FortniteGame.EFortAnnouncementChannel
enum class EFortAnnouncementChannel
{
	EFortAnnouncementChannel__Primary = 0,
	EFortAnnouncementChannel__Conversation = 1,
	EFortAnnouncementChannel__Tutorial = 2,
	EFortAnnouncementChannel__Max_None = 3,
	EFortAnnouncementChannel__EFortAnnouncementChannel_MAX = 4
};


// Enum FortniteGame.EFortAnnouncementDelivery
enum class EFortAnnouncementDelivery
{
	EFortAnnouncementDelivery__Created = 0,
	EFortAnnouncementDelivery__Received = 1,
	EFortAnnouncementDelivery__Ignored = 2,
	EFortAnnouncementDelivery__Active = 3,
	EFortAnnouncementDelivery__Stopped = 4,
	EFortAnnouncementDelivery__Max_None = 5,
	EFortAnnouncementDelivery__EFortAnnouncementDelivery_MAX = 6
};


// Enum FortniteGame.EStatRecordingPeriod
enum class EStatRecordingPeriod
{
	EStatRecordingPeriod__Minute   = 0,
	EStatRecordingPeriod__Life     = 1,
	EStatRecordingPeriod__Map      = 2,
	EStatRecordingPeriod__Campaign = 3,
	EStatRecordingPeriod__Persistent = 4,
	EStatRecordingPeriod__Max      = 5,
	EStatRecordingPeriod__EStatRecordingPeriod_MAX = 6
};


// Enum FortniteGame.EStatMod
enum class EStatMod
{
	EStatMod__Delta                = 0,
	EStatMod__Set                  = 1,
	EStatMod__Maximum              = 2,
	EStatMod__EStatMod_MAX         = 3
};


// Enum FortniteGame.EFortEventConditionType
enum class EFortEventConditionType
{
	EFortEventConditionType__EFEC_StatCompare = 0,
	EFortEventConditionType__EFEC_CanCraft = 1,
	EFortEventConditionType__EFEC_MAX = 2
};


// Enum FortniteGame.EFortCompare
enum class EFortCompare
{
	EFortCompare__EFC_LessThan     = 0,
	EFortCompare__EFC_LessThanOrEqual = 1,
	EFortCompare__EFC_GreaterThan  = 2,
	EFortCompare__EFC_GreaterThanOrEqual = 3,
	EFortCompare__EFC_Equals       = 4,
	EFortCompare__EFC_MAX          = 5
};


// Enum FortniteGame.EFortEventRepeat
enum class EFortEventRepeat
{
	EFortEventRepeat__EFER_Inactive = 0,
	EFortEventRepeat__EFER_Always  = 1,
	EFortEventRepeat__EFER_OncePerPlayer = 2,
	EFortEventRepeat__EFER_OncePerCampaign = 3,
	EFortEventRepeat__EFER_OncePerMap = 4,
	EFortEventRepeat__EFER_MAX     = 5
};


// Enum FortniteGame.EFortNotificationPriority
enum class EFortNotificationPriority
{
	EFortNotificationPriority__Friend = 0,
	EFortNotificationPriority__BoostedXP = 1,
	EFortNotificationPriority__TwitchHigh = 2,
	EFortNotificationPriority__GeneralSendNotification = 3,
	EFortNotificationPriority__TwitchLow = 4,
	EFortNotificationPriority__Max = 5,
	EFortNotificationPriority__EFortNotificationPriority_MAX = 6
};


// Enum FortniteGame.EFortNotificationType
enum class EFortNotificationType
{
	EFortNotificationType__Default = 0,
	EFortNotificationType__Power   = 1,
	EFortNotificationType__EFortNotificationType_MAX = 2
};


// Enum FortniteGame.EFortHexTileAdjacency
enum class EFortHexTileAdjacency
{
	EFortHexTileAdjacency__North   = 0,
	EFortHexTileAdjacency__NorthEast = 1,
	EFortHexTileAdjacency__SouthEast = 2,
	EFortHexTileAdjacency__South   = 3,
	EFortHexTileAdjacency__SouthWest = 4,
	EFortHexTileAdjacency__NorthWest = 5,
	EFortHexTileAdjacency__Max_None = 6,
	EFortHexTileAdjacency__EFortHexTileAdjacency_MAX = 7
};


// Enum FortniteGame.EFortTheaterType
enum class EFortTheaterType
{
	EFortTheaterType__Standard     = 0,
	EFortTheaterType__Elder        = 1,
	EFortTheaterType__PvP          = 2,
	EFortTheaterType__PvP2         = 3,
	EFortTheaterType__Tutorial     = 4,
	EFortTheaterType__TutorialGate = 5,
	EFortTheaterType__Test         = 6,
	EFortTheaterType__Max_None     = 7,
	EFortTheaterType__EFortTheaterType_MAX = 8
};


// Enum FortniteGame.EFortTheaterMapTileType
enum class EFortTheaterMapTileType
{
	EFortTheaterMapTileType__Normal = 0,
	EFortTheaterMapTileType__CriticalMission = 1,
	EFortTheaterMapTileType__AlwaysActive = 2,
	EFortTheaterMapTileType__Outpost = 3,
	EFortTheaterMapTileType__NonMission = 4,
	EFortTheaterMapTileType__PvPFOB = 5,
	EFortTheaterMapTileType__EFortTheaterMapTileType_MAX = 6
};


// Enum FortniteGame.EFortOptionGenerationResult
enum class EFortOptionGenerationResult
{
	EFortOptionGenerationResult__NoOptionsGenerated = 0,
	EFortOptionGenerationResult__NewOptionsGenerated = 1,
	EFortOptionGenerationResult__ExistingOptionsGenerated = 2,
	EFortOptionGenerationResult__EFortOptionGenerationResult_MAX = 3
};


// Enum FortniteGame.EFortQuestState
enum class EFortQuestState
{
	EFortQuestState__Inactive      = 0,
	EFortQuestState__Active        = 1,
	EFortQuestState__Completed     = 2,
	EFortQuestState__Claimed       = 3,
	EFortQuestState__EFortQuestState_MAX = 4
};


// Enum FortniteGame.EFortMissionQuestValidityResult
enum class EFortMissionQuestValidityResult
{
	EFortMissionQuestValidityResult__Invalid = 0,
	EFortMissionQuestValidityResult__InvalidNotPlayable = 1,
	EFortMissionQuestValidityResult__ValidLinked = 2,
	EFortMissionQuestValidityResult__ValidObjectiveCondition = 3,
	EFortMissionQuestValidityResult__ValidFallback = 4,
	EFortMissionQuestValidityResult__EFortMissionQuestValidityResult_MAX = 5
};


// Enum FortniteGame.EWaveRules
enum class EWaveRules
{
	EWaveRules__KillAllEnemies     = 0,
	EWaveRules__Timed              = 1,
	EWaveRules__KillPoints         = 2,
	EWaveRules__EWaveRules_MAX     = 3
};


// Enum FortniteGame.EFriendFeedbackType
enum class EFriendFeedbackType
{
	EFriendFeedbackType__FriendRequestSent = 0,
	EFriendFeedbackType__FriendRequestReceived = 1,
	EFriendFeedbackType__FriendRequestAccepted = 2,
	EFriendFeedbackType__Default   = 3,
	EFriendFeedbackType__EFriendFeedbackType_MAX = 4
};


// Enum FortniteGame.ETargetDistanceComparisonType
enum class ETargetDistanceComparisonType
{
	ETargetDistanceComparisonType__TwoDimensions = 0,
	ETargetDistanceComparisonType__ThreeDimensions = 1,
	ETargetDistanceComparisonType__CollisionHalfHeightMultiplier = 2,
	ETargetDistanceComparisonType__ETargetDistanceComparisonType_MAX = 3
};


// Enum FortniteGame.EFortSocialItemPresenceStatus
enum class EFortSocialItemPresenceStatus
{
	EFortSocialItemPresenceStatus__Offline = 0,
	EFortSocialItemPresenceStatus__InGame = 1,
	EFortSocialItemPresenceStatus__Away = 2,
	EFortSocialItemPresenceStatus__Unknown = 3,
	EFortSocialItemPresenceStatus__EFortSocialItemPresenceStatus_MAX = 4
};


// Enum FortniteGame.EFortSocialItemType
enum class EFortSocialItemType
{
	EFortSocialItemType__Header    = 0,
	EFortSocialItemType__Friend    = 1,
	EFortSocialItemType__PartyInvite = 2,
	EFortSocialItemType__RecentPlayer = 3,
	EFortSocialItemType__Max       = 4,
	EFortSocialItemType__EFortSocialItemType_MAX = 5
};


// Enum FortniteGame.EFortDamageNumberType
enum class EFortDamageNumberType
{
	EFortDamageNumberType__None    = 0,
	EFortDamageNumberType__Pawn    = 1,
	EFortDamageNumberType__Building = 2,
	EFortDamageNumberType__Player  = 3,
	EFortDamageNumberType__Shield  = 4,
	EFortDamageNumberType__Score   = 5,
	EFortDamageNumberType__EFortDamageNumberType_MAX = 6
};


// Enum FortniteGame.EClampType
enum class EClampType
{
	EClampType__Minimum            = 0,
	EClampType__Maximum            = 1,
	EClampType__EClampType_MAX     = 2
};


// Enum FortniteGame.EFortCollectionBookState
enum class EFortCollectionBookState
{
	EFortCollectionBookState__Active = 0,
	EFortCollectionBookState__Completed = 1,
	EFortCollectionBookState__Claimed = 2,
	EFortCollectionBookState__EFortCollectionBookState_MAX = 3
};


// Enum FortniteGame.ETimespanAsTextFormat
enum class ETimespanAsTextFormat
{
	ETimespanAsTextFormat__DaysHoursMinutesSeconds = 0,
	ETimespanAsTextFormat__Colons  = 1,
	ETimespanAsTextFormat__ETimespanAsTextFormat_MAX = 2
};


// Enum FortniteGame.EHordeTierStartStatus
enum class EHordeTierStartStatus
{
	EHordeTierStartStatus__ReadyToStart = 0,
	EHordeTierStartStatus__WaitingForPlayer = 1,
	EHordeTierStartStatus__WaitingForDBM = 2,
	EHordeTierStartStatus__GenericNotReadyToStart = 3,
	EHordeTierStartStatus__EHordeTierStartStatus_MAX = 4
};


// Enum FortniteGame.EFortUserCloudRequestResult
enum class EFortUserCloudRequestResult
{
	EFortUserCloudRequestResult__Success = 0,
	EFortUserCloudRequestResult__Failure_CloudStorageDisabled = 1,
	EFortUserCloudRequestResult__Failure_CloudStorageError = 2,
	EFortUserCloudRequestResult__Failure_FileNotFoundInUserFileList = 3,
	EFortUserCloudRequestResult__Failure_SavingNotAllowedForSpecifiedUser = 4,
	EFortUserCloudRequestResult__EFortUserCloudRequestResult_MAX = 5
};


// Enum FortniteGame.EFortUserCloudRequestType
enum class EFortUserCloudRequestType
{
	EFortUserCloudRequestType__LoadCloudFile = 0,
	EFortUserCloudRequestType__SaveCloudFile = 1,
	EFortUserCloudRequestType__EFortUserCloudRequestType_MAX = 2
};


// Enum FortniteGame.ETeamChatRoomState
enum class ETeamChatRoomState
{
	ETeamChatRoomState__NotCreated = 0,
	ETeamChatRoomState__Creating   = 1,
	ETeamChatRoomState__Created    = 2,
	ETeamChatRoomState__Timeout    = 3,
	ETeamChatRoomState__ETeamChatRoomState_MAX = 4
};


// Enum FortniteGame.EFortWorldManagerState
enum class EFortWorldManagerState
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
enum class EFortLevelStreamingState
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
enum class EFortQueuedActionUserStatus
{
	EFortQueuedActionUserStatus__Succeeded = 0,
	EFortQueuedActionUserStatus__Failed = 1,
	EFortQueuedActionUserStatus__WaitingForCloudRequest = 2,
	EFortQueuedActionUserStatus__WaitingForProfileSave = 3,
	EFortQueuedActionUserStatus__EFortQueuedActionUserStatus_MAX = 4
};


// Enum FortniteGame.EFortWorldRecordState
enum class EFortWorldRecordState
{
	EFortWorldRecordState__StartProcessing = 0,
	EFortWorldRecordState__WaitingForResponse = 1,
	EFortWorldRecordState__RetrievingTheaterInformation = 2,
	EFortWorldRecordState__RetrievingZoneInformation = 3,
	EFortWorldRecordState__LoadingWorldRecord = 4,
	EFortWorldRecordState__LoadingZoneRecord = 5,
	EFortWorldRecordState__SavingZoneRecord = 6,
	EFortWorldRecordState__SavingPlayerProfiles = 7,
	EFortWorldRecordState__SavingPlayerDeployableBases = 8,
	EFortWorldRecordState__Succeeded = 9,
	EFortWorldRecordState__Failed  = 10,
	EFortWorldRecordState__Max_None = 11,
	EFortWorldRecordState__EFortWorldRecordState_MAX = 12
};


// Enum FortniteGame.EFortWorldRecordAction
enum class EFortWorldRecordAction
{
	EFortWorldRecordAction__LoadWorldOnly = 0,
	EFortWorldRecordAction__SaveWorldOnly = 1,
	EFortWorldRecordAction__SaveZoneAndWorld = 2,
	EFortWorldRecordAction__LoadZoneAndWorld = 3,
	EFortWorldRecordAction__SaveDeployableBasesAndWorld = 4,
	EFortWorldRecordAction__Max_None = 5,
	EFortWorldRecordAction__EFortWorldRecordAction_MAX = 6
};


// Enum FortniteGame.EDeployableBaseUseType
enum class EDeployableBaseUseType
{
	EDeployableBaseUseType__Neighborhood = 0,
	EDeployableBaseUseType__PvECombat = 1,
	EDeployableBaseUseType__EDeployableBaseUseType_MAX = 2
};


// Enum FortniteGame.EFortZoneType
enum class EFortZoneType
{
	EFortZoneType__PVE             = 0,
	EFortZoneType__PVP             = 1,
	EFortZoneType__Keep            = 2,
	EFortZoneType__SingleZone      = 3,
	EFortZoneType__Max_None        = 4,
	EFortZoneType__EFortZoneType_MAX = 5
};


// Enum FortniteGame.EHordeWaveStingerType
enum class EHordeWaveStingerType
{
	EHordeWaveStingerType__WaveSuccess = 0,
	EHordeWaveStingerType__WaveFailure = 1,
	EHordeWaveStingerType__WaveIncoming = 2,
	EHordeWaveStingerType__WaveStarted = 3,
	EHordeWaveStingerType__EHordeWaveStingerType_MAX = 4
};


// Enum FortniteGame.EQueueActionType
enum class EQueueActionType
{
	EQueueActionType__Plot         = 0,
	EQueueActionType__ZoneCleanup  = 1,
	EQueueActionType__EnvironmentActorRestoration = 2,
	EQueueActionType__EQueueActionType_MAX = 3
};


// Enum FortniteGame.EAthenaPIEStartupMode
enum class EAthenaPIEStartupMode
{
	EAthenaPIEStartupMode__UseDefaults = 0,
	EAthenaPIEStartupMode__Warmup  = 1,
	EAthenaPIEStartupMode__WarmupPaused = 2,
	EAthenaPIEStartupMode__Aircraft = 3,
	EAthenaPIEStartupMode__AircraftPaused = 4,
	EAthenaPIEStartupMode__Gameplay = 5,
	EAthenaPIEStartupMode__EAthenaPIEStartupMode_MAX = 6
};


// Enum FortniteGame.ESpecializationType
enum class ESpecializationType
{
	ESpecializationType__Tier1     = 0,
	ESpecializationType__Tier2     = 1,
	ESpecializationType__Tier3     = 2,
	ESpecializationType__Tier4     = 3,
	ESpecializationType__NumTiers  = 4,
	ESpecializationType__ESpecializationType_MAX = 5
};


// Enum FortniteGame.EPvPGameEndReasons
enum class EPvPGameEndReasons
{
	PVPGER_TeamScoreLimit          = 0,
	PVPGER_LastManStanding         = 1,
	PVPGER_TimeExpired             = 2,
	PVPGER_MissionCompletion       = 3,
	PVPGER_MAX                     = 4
};


// Enum FortniteGame.EFortPawnStasisMode
enum class EFortPawnStasisMode
{
	EFortPawnStasisMode__None      = 0,
	EFortPawnStasisMode__NoMovement = 1,
	EFortPawnStasisMode__NoMovementOrTurning = 2,
	EFortPawnStasisMode__EFortPawnStasisMode_MAX = 3
};


// Enum FortniteGame.EFortMtxPlatform
enum class EFortMtxPlatform
{
	EFortMtxPlatform__Epic         = 0,
	EFortMtxPlatform__PSN          = 1,
	EFortMtxPlatform__Live         = 2,
	EFortMtxPlatform__EFortMtxPlatform_MAX = 3
};


// Enum FortniteGame.EFortInputActionType
enum class EFortInputActionType
{
	EFortInputActionType__Press    = 0,
	EFortInputActionType__Click    = 1,
	EFortInputActionType__Hold     = 2,
	EFortInputActionType__Release  = 3,
	EFortInputActionType__EFortInputActionType_MAX = 4
};


// Enum FortniteGame.EInventoryOverflowReason
enum class EInventoryOverflowReason
{
	EInventoryOverflowReason__NoOverflow = 0,
	EInventoryOverflowReason__ItemStackLimitReached = 1,
	EInventoryOverflowReason__BackpackStackLimitReached = 2,
	EInventoryOverflowReason__EInventoryOverflowReason_MAX = 3
};


// Enum FortniteGame.EFortServerGameMode
enum class EFortServerGameMode
{
	EFortServerGameMode__Idle      = 0,
	EFortServerGameMode__LobbyPvE  = 1,
	EFortServerGameMode__LobbyPvP  = 2,
	EFortServerGameMode__ZonePvP   = 3,
	EFortServerGameMode__ZonePvE   = 4,
	EFortServerGameMode__EFortServerGameMode_MAX = 5
};


// Enum FortniteGame.EAthenaAerialPhase
enum class EAthenaAerialPhase
{
	EAthenaAerialPhase__None       = 0,
	EAthenaAerialPhase__BusCantExit = 1,
	EAthenaAerialPhase__BusCanExit = 2,
	EAthenaAerialPhase__Skydiving  = 3,
	EAthenaAerialPhase__Parachuting = 4,
	EAthenaAerialPhase__EAthenaAerialPhase_MAX = 5
};


// Enum FortniteGame.EFortNamedNavmesh
enum class EFortNamedNavmesh
{
	EFortNamedNavmesh__Husk        = 0,
	EFortNamedNavmesh__Smasher     = 1,
	EFortNamedNavmesh__MAX         = 2,
	EFortNamedNavmesh__EFortNamedNavmesh_MAX = 3
};


// Enum FortniteGame.EFortCharacterCosmetic
enum class EFortCharacterCosmetic
{
	EFortCharacterCosmetic__Head   = 0,
	EFortCharacterCosmetic__Texture = 1,
	EFortCharacterCosmetic__Color  = 2,
	EFortCharacterCosmetic__Trinket = 3,
	EFortCharacterCosmetic__Face   = 4,
	EFortCharacterCosmetic__Gadget = 5,
	EFortCharacterCosmetic__Body   = 6,
	EFortCharacterCosmetic__ClassFlair = 7,
	EFortCharacterCosmetic__Max_Invalid = 8,
	EFortCharacterCosmetic__EFortCharacterCosmetic_MAX = 9
};


// Enum FortniteGame.ECodeTokenPlatform
enum class ECodeTokenPlatform
{
	ECodeTokenPlatform__PC         = 0,
	ECodeTokenPlatform__PS4        = 1,
	ECodeTokenPlatform__XBOX       = 2,
	ECodeTokenPlatform__ECodeTokenPlatform_MAX = 3
};


// Enum FortniteGame.EFortQuestObjectiveItemEvent
enum class EFortQuestObjectiveItemEvent
{
	EFortQuestObjectiveItemEvent__Craft = 0,
	EFortQuestObjectiveItemEvent__Collect = 1,
	EFortQuestObjectiveItemEvent__Acquire = 2,
	EFortQuestObjectiveItemEvent__Consume = 3,
	EFortQuestObjectiveItemEvent__OpenCardPack = 4,
	EFortQuestObjectiveItemEvent__PurchaseCardPack = 5,
	EFortQuestObjectiveItemEvent__Convert = 6,
	EFortQuestObjectiveItemEvent__Upgrade = 7,
	EFortQuestObjectiveItemEvent__QuestComplete = 8,
	EFortQuestObjectiveItemEvent__AssignWorker = 9,
	EFortQuestObjectiveItemEvent__HasItem = 10,
	EFortQuestObjectiveItemEvent__SlotInCollection = 11,
	EFortQuestObjectiveItemEvent__HasCompletedQuest = 12,
	EFortQuestObjectiveItemEvent__HasAssignedWorker = 13,
	EFortQuestObjectiveItemEvent__HasUpgraded = 14,
	EFortQuestObjectiveItemEvent__HasConverted = 15,
	EFortQuestObjectiveItemEvent__Max_None = 16,
	EFortQuestObjectiveItemEvent__EFortQuestObjectiveItemEvent_MAX = 17
};


// Enum FortniteGame.EFortQuestObjectiveStatEvent
enum class EFortQuestObjectiveStatEvent
{
	EFortQuestObjectiveStatEvent__Kill = 0,
	EFortQuestObjectiveStatEvent__KillContribution = 1,
	EFortQuestObjectiveStatEvent__Build = 2,
	EFortQuestObjectiveStatEvent__BuildingEdit = 3,
	EFortQuestObjectiveStatEvent__BuildingRepair = 4,
	EFortQuestObjectiveStatEvent__BuildingUpgrade = 5,
	EFortQuestObjectiveStatEvent__Complete = 6,
	EFortQuestObjectiveStatEvent__Craft = 7,
	EFortQuestObjectiveStatEvent__Collect = 8,
	EFortQuestObjectiveStatEvent__Win = 9,
	EFortQuestObjectiveStatEvent__Interact = 10,
	EFortQuestObjectiveStatEvent__Destroy = 11,
	EFortQuestObjectiveStatEvent__Ability = 12,
	EFortQuestObjectiveStatEvent__WaveComplete = 13,
	EFortQuestObjectiveStatEvent__Custom = 14,
	EFortQuestObjectiveStatEvent__Client = 15,
	EFortQuestObjectiveStatEvent__NumGameplayEvents = 16,
	EFortQuestObjectiveStatEvent__Acquire = 17,
	EFortQuestObjectiveStatEvent__Consume = 18,
	EFortQuestObjectiveStatEvent__OpenCardPack = 19,
	EFortQuestObjectiveStatEvent__PurchaseCardPack = 20,
	EFortQuestObjectiveStatEvent__Convert = 21,
	EFortQuestObjectiveStatEvent__Upgrade = 22,
	EFortQuestObjectiveStatEvent__QuestComplete = 23,
	EFortQuestObjectiveStatEvent__AssignWorker = 24,
	EFortQuestObjectiveStatEvent__CollectExpedition = 25,
	EFortQuestObjectiveStatEvent__CollectSuccessfulExpedition = 26,
	EFortQuestObjectiveStatEvent__HasItem = 27,
	EFortQuestObjectiveStatEvent__SlotInCollection = 28,
	EFortQuestObjectiveStatEvent__HasCompletedQuest = 29,
	EFortQuestObjectiveStatEvent__HasAssignedWorker = 30,
	EFortQuestObjectiveStatEvent__HasUpgraded = 31,
	EFortQuestObjectiveStatEvent__HasConverted = 32,
	EFortQuestObjectiveStatEvent__Max_None = 33,
	EFortQuestObjectiveStatEvent__EFortQuestObjectiveStatEvent_MAX = 34
};


// Enum FortniteGame.EFortQuestRewardType
enum class EFortQuestRewardType
{
	EFortQuestRewardType__BasicRewards = 0,
	EFortQuestRewardType__BasicPlusSingleChoice = 1,
	EFortQuestRewardType__EFortQuestRewardType_MAX = 2
};


// Enum FortniteGame.EFortQuestType
enum class EFortQuestType
{
	EFortQuestType__Task           = 0,
	EFortQuestType__Optional       = 1,
	EFortQuestType__DailyQuest     = 2,
	EFortQuestType__TransientQuest = 3,
	EFortQuestType__SurvivorQuest  = 4,
	EFortQuestType__Achievement    = 5,
	EFortQuestType__Onboarding     = 6,
	EFortQuestType__StreamBroadcaster = 7,
	EFortQuestType__StreamViewer   = 8,
	EFortQuestType__StreamSubscriber = 9,
	EFortQuestType__All            = 10,
	EFortQuestType__EFortQuestType_MAX = 11
};


// Enum FortniteGame.ETwitchViewerStatusType
enum class ETwitchViewerStatusType
{
	ETwitchViewerStatusType__TwitchViewerStatus_Unknown = 0,
	ETwitchViewerStatusType__TwitchViewerStatus_Nonsubscriber = 1,
	ETwitchViewerStatusType__TwitchViewerStatus_Subscriber = 2,
	ETwitchViewerStatusType__TwitchViewerStatus_Broadcaster = 3,
	ETwitchViewerStatusType__TwitchViewerStatus_Max = 4
};


// Enum FortniteGame.ELobbyMissionGeneratorDetailsRequirement
enum class ELobbyMissionGeneratorDetailsRequirement
{
	ELobbyMissionGeneratorDetailsRequirement__Unknown = 0,
	ELobbyMissionGeneratorDetailsRequirement__NotRequired = 1,
	ELobbyMissionGeneratorDetailsRequirement__Required = 2,
	ELobbyMissionGeneratorDetailsRequirement__ELobbyMissionGeneratorDetailsRequirement_MAX = 3
};


// Enum FortniteGame.EFortMatchmakingPool
enum class EFortMatchmakingPool
{
	EFortMatchmakingPool__Any      = 0,
	EFortMatchmakingPool__Desktop  = 1,
	EFortMatchmakingPool__PS4      = 2,
	EFortMatchmakingPool__XboxOne  = 3,
	EFortMatchmakingPool__Mobile   = 4,
	EFortMatchmakingPool__EFortMatchmakingPool_MAX = 5
};


// Enum FortniteGame.EFortMatchmakingPrivacyConfiguration
enum class EFortMatchmakingPrivacyConfiguration
{
	EFortMatchmakingPrivacyConfiguration__UserPartyConfigured = 0,
	EFortMatchmakingPrivacyConfiguration__ForcePrivate = 1,
	EFortMatchmakingPrivacyConfiguration__ForcePublic = 2,
	EFortMatchmakingPrivacyConfiguration__EFortMatchmakingPrivacyConfiguration_MAX = 3
};


// Enum FortniteGame.EMatchmakingFlags
enum class EMatchmakingFlags
{
	EMatchmakingFlags__None        = 0,
	EMatchmakingFlags__CreateNewOnly = 1,
	EMatchmakingFlags__NoReservation = 2,
	EMatchmakingFlags__Private     = 3,
	EMatchmakingFlags__UseWorldDataOwner = 4,
	EMatchmakingFlags__EMatchmakingFlags_MAX = 5
};


// Enum FortniteGame.EMatchmakingStartLocation
enum class EMatchmakingStartLocation
{
	EMatchmakingStartLocation__Lobby = 0,
	EMatchmakingStartLocation__Game = 1,
	EMatchmakingStartLocation__CreateNew = 2,
	EMatchmakingStartLocation__FindSingle = 3,
	EMatchmakingStartLocation__EMatchmakingStartLocation_MAX = 4
};


// Enum FortniteGame.EFortMatchmakingType
enum class EFortMatchmakingType
{
	EFortMatchmakingType__Gathering = 0,
	EFortMatchmakingType__CriticalMission = 1,
	EFortMatchmakingType__QuickPlay = 2,
	EFortMatchmakingType__Session  = 3,
	EFortMatchmakingType__EFortMatchmakingType_MAX = 4
};


// Enum FortniteGame.EFortSessionHelperJoinState
enum class EFortSessionHelperJoinState
{
	EFortSessionHelperJoinState__NotJoining = 0,
	EFortSessionHelperJoinState__RequestingReservation = 1,
	EFortSessionHelperJoinState__FailedReservation = 2,
	EFortSessionHelperJoinState__WaitingOnGame = 3,
	EFortSessionHelperJoinState__AttemptingJoin = 4,
	EFortSessionHelperJoinState__JoiningSession = 5,
	EFortSessionHelperJoinState__FailedJoin = 6,
	EFortSessionHelperJoinState__CanceledJoin = 7,
	EFortSessionHelperJoinState__EFortSessionHelperJoinState_MAX = 8
};


// Enum FortniteGame.EFortCheatMissionGenType
enum class EFortCheatMissionGenType
{
	EFortCheatMissionGenType__NewGeneration = 0,
	EFortCheatMissionGenType__OldGeneration = 1,
	EFortCheatMissionGenType__Max_None = 2,
	EFortCheatMissionGenType__EFortCheatMissionGenType_MAX = 3
};


// Enum FortniteGame.EPollActorsInVolumeTypes
enum class EPollActorsInVolumeTypes
{
	EPollActorsInVolumeTypes__DesignerPlacedOnly = 0,
	EPollActorsInVolumeTypes__PlayerBuiltOnly = 1,
	EPollActorsInVolumeTypes__All  = 2,
	EPollActorsInVolumeTypes__EPollActorsInVolumeTypes_MAX = 3
};


// Enum FortniteGame.EMissionReplyTypes
enum class EMissionReplyTypes
{
	EMissionReplyTypes__Handled    = 0,
	EMissionReplyTypes__NotHandled = 1,
	EMissionReplyTypes__EMissionReplyTypes_MAX = 2
};


// Enum FortniteGame.ETimerOverrideSetting
enum class ETimerOverrideSetting
{
	ETimerOverrideSetting__DefaultBehavior = 0,
	ETimerOverrideSetting__ForceShow = 1,
	ETimerOverrideSetting__ForceHide = 2,
	ETimerOverrideSetting__ETimerOverrideSetting_MAX = 3
};


// Enum FortniteGame.EMusicChannel
enum class EMusicChannel
{
	EMusicChannel__A               = 0,
	EMusicChannel__B               = 1,
	EMusicChannel__Stinger         = 2,
	EMusicChannel__Max_None        = 3,
	EMusicChannel__EMusicChannel_MAX = 4
};


// Enum FortniteGame.EMusicFadeStyles
enum class EMusicFadeStyles
{
	EMusicFadeStyles__CrossFade    = 0,
	EMusicFadeStyles__FadeOutThenIn = 1,
	EMusicFadeStyles__Max_None     = 2,
	EMusicFadeStyles__EMusicFadeStyles_MAX = 3
};


// Enum FortniteGame.EFortAreaFlag
enum class EFortAreaFlag
{
	EFortAreaFlag__Default         = 0,
	EFortAreaFlag__Obstacle        = 1,
	EFortAreaFlag__Smashable       = 2,
	EFortAreaFlag__Unwalkable      = 3,
	EFortAreaFlag__Interactable    = 4,
	EFortAreaFlag__EFortAreaFlag_MAX = 5
};


// Enum FortniteGame.EFortNavLinkPattern
enum class EFortNavLinkPattern
{
	EFortNavLinkPattern__Floor     = 0,
	EFortNavLinkPattern__Stairs    = 1,
	EFortNavLinkPattern__Roof      = 2,
	EFortNavLinkPattern__Manual    = 3,
	EFortNavLinkPattern__EFortNavLinkPattern_MAX = 4
};


// Enum FortniteGame.EFortAnnouncerTeamVocalChords
enum class EFortAnnouncerTeamVocalChords
{
	EFortAnnouncerTeamVocalChords__Team1 = 0,
	EFortAnnouncerTeamVocalChords__Team2 = 1,
	EFortAnnouncerTeamVocalChords__Max_None = 2,
	EFortAnnouncerTeamVocalChords__EFortAnnouncerTeamVocalChords_MAX = 3
};


// Enum FortniteGame.EFrontEndCamera
enum class EFrontEndCamera
{
	EFrontEndCamera__Invalid       = 0,
	EFrontEndCamera__HomeBase      = 1,
	EFrontEndCamera__MissionControl = 2,
	EFrontEndCamera__Store         = 3,
	EFrontEndCamera__Vault         = 4,
	EFrontEndCamera__SkillTrees    = 5,
	EFrontEndCamera__Heroes        = 6,
	EFrontEndCamera__Login         = 7,
	EFrontEndCamera__TutorialPhaseOne = 8,
	EFrontEndCamera__TutorialPhaseTwo = 9,
	EFrontEndCamera__TutorialPhaseThree = 10,
	EFrontEndCamera__HeroSelect    = 11,
	EFrontEndCamera__Party         = 12,
	EFrontEndCamera__WorldMap      = 13,
	EFrontEndCamera__Home          = 14,
	EFrontEndCamera__EFrontEndCamera_MAX = 15
};


// Enum FortniteGame.ESpectatorCameraType
enum class ESpectatorCameraType
{
	ESpectatorCameraType__Chase    = 0,
	ESpectatorCameraType__Drone    = 1,
	ESpectatorCameraType__MAX      = 2,
	ESpectatorCameraType__ESpectatorCameraType_MAX = 3
};


// Enum FortniteGame.EFocusMethod
enum class EFocusMethod
{
	EFocusMethod__NoFocus          = 0,
	EFocusMethod__AutoFocus        = 1,
	EFocusMethod__ManualFocus      = 2,
	EFocusMethod__EFocusMethod_MAX = 3
};


// Enum FortniteGame.EDeathCause
enum class EDeathCause
{
	EDeathCause__OutsideSafeZone   = 0,
	EDeathCause__FallDamage        = 1,
	EDeathCause__Pistol            = 2,
	EDeathCause__Shotgun           = 3,
	EDeathCause__Rifle             = 4,
	EDeathCause__SMG               = 5,
	EDeathCause__Sniper            = 6,
	EDeathCause__Melee             = 7,
	EDeathCause__Heavy             = 8,
	EDeathCause__DBNOTimeout       = 9,
	EDeathCause__Unspecified       = 10,
	EDeathCause__EDeathCause_MAX   = 11
};


// Enum FortniteGame.EFortPointsFromNavGraphGoalPathDistanceFilterOperator
enum class EFortPointsFromNavGraphGoalPathDistanceFilterOperator
{
	EFortPointsFromNavGraphGoalPathDistanceFilterOperator__AllGoalsInRange = 0,
	EFortPointsFromNavGraphGoalPathDistanceFilterOperator__AnyGoalInRange = 1,
	EFortPointsFromNavGraphGoalPathDistanceFilterOperator__EFortPointsFromNavGraphGoalPathDistanceFilterOperator_MAX = 2
};


// Enum FortniteGame.EFortTestGoalActorDot
enum class EFortTestGoalActorDot
{
	EFortTestGoalActorDot__Dot3D   = 0,
	EFortTestGoalActorDot__Dot2D   = 1,
	EFortTestGoalActorDot__EFortTestGoalActorDot_MAX = 2
};


// Enum FortniteGame.EDistanceMode
enum class EDistanceMode
{
	EDistanceMode__DistItemToContext = 0,
	EDistanceMode__DistItemGoalActorToContext = 1,
	EDistanceMode__DistItemToItemGoalActor = 2,
	EDistanceMode__EDistanceMode_MAX = 3
};


// Enum FortniteGame.ECountAIAssignedToType
enum class ECountAIAssignedToType
{
	ECountAIAssignedToType__Goal   = 0,
	ECountAIAssignedToType__Actor  = 1,
	ECountAIAssignedToType__Assignment = 2,
	ECountAIAssignedToType__ECountAIAssignedToType_MAX = 3
};


// Enum FortniteGame.ETwoPointSolverRotationA
enum class ETwoPointSolverRotationA
{
	ETwoPointSolverRotationA__PointAToQuerier = 0,
	ETwoPointSolverRotationA__QuerierToPointA = 1,
	ETwoPointSolverRotationA__PointAToQuerierWithRandomOffset = 2,
	ETwoPointSolverRotationA__QuerierToPointAWithRandomOffset = 3,
	ETwoPointSolverRotationA__Custom = 4,
	ETwoPointSolverRotationA__ETwoPointSolverRotationA_MAX = 5
};


// Enum FortniteGame.ERegisteredPlayerUnregistrationStatus
enum class ERegisteredPlayerUnregistrationStatus
{
	ERegisteredPlayerUnregistrationStatus__Registered = 0,
	ERegisteredPlayerUnregistrationStatus__UnregistrationStarting = 1,
	ERegisteredPlayerUnregistrationStatus__UnregistrationWaitingForInitialLock = 2,
	ERegisteredPlayerUnregistrationStatus__UnregistrationWaitingForFinalSave = 3,
	ERegisteredPlayerUnregistrationStatus__UnregistrationWaitingForProfileUnlock = 4,
	ERegisteredPlayerUnregistrationStatus__UnregistrationComplete = 5,
	ERegisteredPlayerUnregistrationStatus__ERegisteredPlayerUnregistrationStatus_MAX = 6
};


// Enum FortniteGame.EFortUIScoreType
enum class EFortUIScoreType
{
	EFortUIScoreType__Combat       = 0,
	EFortUIScoreType__Building     = 1,
	EFortUIScoreType__Utility      = 2,
	EFortUIScoreType__Badges       = 3,
	EFortUIScoreType__Bonus        = 4,
	EFortUIScoreType__Total        = 5,
	EFortUIScoreType__Max_None     = 6,
	EFortUIScoreType__EFortUIScoreType_MAX = 7
};


// Enum FortniteGame.EFortScriptedActionEnvironment
enum class EFortScriptedActionEnvironment
{
	EFortScriptedActionEnvironment__FrontEnd = 0,
	EFortScriptedActionEnvironment__GameServer = 1,
	EFortScriptedActionEnvironment__GameClient = 2,
	EFortScriptedActionEnvironment__Max_None = 3,
	EFortScriptedActionEnvironment__EFortScriptedActionEnvironment_MAX = 4
};


// Enum FortniteGame.EFortScriptedActionSource
enum class EFortScriptedActionSource
{
	EFortScriptedActionSource__Quest = 0,
	EFortScriptedActionSource__Token = 1,
	EFortScriptedActionSource__Manual = 2,
	EFortScriptedActionSource__Max_None = 3,
	EFortScriptedActionSource__EFortScriptedActionSource_MAX = 4
};


// Enum FortniteGame.EFortContextualReticleTypes
enum class EFortContextualReticleTypes
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
enum class EFortUIFriendNotificationType
{
	EFortUIFriendNotificationType__Default = 0,
	EFortUIFriendNotificationType__FriendRequest = 1,
	EFortUIFriendNotificationType__PartyInvite = 2,
	EFortUIFriendNotificationType__EFortUIFriendNotificationType_MAX = 3
};


// Enum FortniteGame.EFortReloadMontageSection
enum class EFortReloadMontageSection
{
	EFortReloadMontageSection__Intro = 0,
	EFortReloadMontageSection__Loop = 1,
	EFortReloadMontageSection__Outro = 2,
	EFortReloadMontageSection__EFortReloadMontageSection_MAX = 3
};


// Enum FortniteGame.EFortSessionHelperJoinResult
enum class EFortSessionHelperJoinResult
{
	EFortSessionHelperJoinResult__NoResult = 0,
	EFortSessionHelperJoinResult__ReservationSuccess = 1,
	EFortSessionHelperJoinResult__ReservationFailure_PartyLimitReached = 2,
	EFortSessionHelperJoinResult__ReservationFailure_IncorrectPlayerCount = 3,
	EFortSessionHelperJoinResult__ReservationFailure_RequestTimedOut = 4,
	EFortSessionHelperJoinResult__ReservationFailure_ReservationNotFound = 5,
	EFortSessionHelperJoinResult__ReservationFailure_ReservationDenied = 6,
	EFortSessionHelperJoinResult__ReservationFailure_ReservationDenied_Banned = 7,
	EFortSessionHelperJoinResult__ReservationFailure_ReservationRequestCanceled = 8,
	EFortSessionHelperJoinResult__ReservationFailure_ReservationInvalid = 9,
	EFortSessionHelperJoinResult__ReservationFailure_BadSessionId = 10,
	EFortSessionHelperJoinResult__ReservationFailure_ReservationDenied_ContainsExistingPlayers = 11,
	EFortSessionHelperJoinResult__ReservationFailure_GeneralError = 12,
	EFortSessionHelperJoinResult__ReservationFailure_NoSubsystem = 13,
	EFortSessionHelperJoinResult__ReservationFailure_NoIdentity = 14,
	EFortSessionHelperJoinResult__ReservationFailure_InvalidSession = 15,
	EFortSessionHelperJoinResult__ReservationFailure_InvalidUser = 16,
	EFortSessionHelperJoinResult__ReservationFailure_EncryptionKey = 17,
	EFortSessionHelperJoinResult__ReservationFailure_RefreshAuth = 18,
	EFortSessionHelperJoinResult__ReservationFailure_AlreadyJoiningDuringReserve = 19,
	EFortSessionHelperJoinResult__ReservationFailure_AlreadyJoiningDuringSkip = 20,
	EFortSessionHelperJoinResult__JoinSessionSuccess = 21,
	EFortSessionHelperJoinResult__JoinSessionFailure_SessionIsFull = 22,
	EFortSessionHelperJoinResult__JoinSessionFailure_SessionDoesNotExist = 23,
	EFortSessionHelperJoinResult__JoinSessionFailure_CouldNotRetrieveAddress = 24,
	EFortSessionHelperJoinResult__JoinSessionFailure_AlreadyInSession = 25,
	EFortSessionHelperJoinResult__JoinSessionFailure_UnknownError = 26,
	EFortSessionHelperJoinResult__JoinSessionFailure_InvalidSession = 27,
	EFortSessionHelperJoinResult__JoinSessionFailure_InvalidSearchResultIndex = 28,
	EFortSessionHelperJoinResult__JoinSessionFailure_AlreadyJoiningDuringJoin = 29,
	EFortSessionHelperJoinResult__SearchPassFailure_NoSessionHelper = 30,
	EFortSessionHelperJoinResult__SearchPassFailure_InvalidUser = 31,
	EFortSessionHelperJoinResult__SearchPassFailure_NoIdentity = 32,
	EFortSessionHelperJoinResult__SearchPassFailure_InvalidSearchResult = 33,
	EFortSessionHelperJoinResult__SearchPassFailure_InvalidSearchResultIndex = 34,
	EFortSessionHelperJoinResult__JoinSessionCanceled = 35,
	EFortSessionHelperJoinResult__EFortSessionHelperJoinResult_MAX = 36
};


// Enum FortniteGame.ESpeedWarpingAxisMode
enum class ESpeedWarpingAxisMode
{
	ESpeedWarpingAxisMode__IKFootRootLocalX = 0,
	ESpeedWarpingAxisMode__IKFootRootLocalY = 1,
	ESpeedWarpingAxisMode__IKFootRootLocalZ = 2,
	ESpeedWarpingAxisMode__WorldSpaceVectorInput = 3,
	ESpeedWarpingAxisMode__ComponentSpaceVectorInput = 4,
	ESpeedWarpingAxisMode__ActorSpaceVectorInput = 5,
	ESpeedWarpingAxisMode__ESpeedWarpingAxisMode_MAX = 6
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
	unsigned char                                      UnknownData01[0x1];                                       // 0x0015(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.BuildingActorHotSpotDirection.Direction
	unsigned char                                      UnknownData02[0x1];                                       // 0x0019(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.BuildingActorHotSpotDirection.TypeConfigUsage
};

// ScriptStruct FortniteGame.AIHotSpotSlotInfo
// 0x0010
struct FAIHotSpotSlotInfo
{
	class AAIHotSpot*                                  HotSpot;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData)
	int                                                SlotIndex;                                                // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.AutoAcquireSlot
// 0x0010 (0x0020 - 0x0010)
struct FAutoAcquireSlot : public FAIHotSpotSlotInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
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
};

// ScriptStruct FortniteGame.TierMeshSets
// 0x0018
struct FTierMeshSets
{
	int                                                Tier;                                                     // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FMeshSet>                            MeshSets;                                                 // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
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
};

// ScriptStruct FortniteGame.BuildingNavObstacle
// 0x0020
struct FBuildingNavObstacle
{
	struct FBox                                        LocalBounds;                                              // 0x0000(0x001C) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001C(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.BuildingNavObstacle.ObstacleType
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
	unsigned char                                      bRandomSelectionAlreadyHappened : 1;                      // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
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
	unsigned char                                      bIsPowered : 1;                                           // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	unsigned char                                      bIsProvidingPower : 1;                                    // 0x0011(0x0001) (CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	unsigned char                                      bAllowConnections : 1;                                    // 0x0012(0x0001) (CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	unsigned char                                      bAllowsPowerToPassThrough : 1;                            // 0x0013(0x0001) (CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.EditModeState
// 0x0010
struct FEditModeState
{
	class UClass*                                      EditClass;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                RotationIterations;                                       // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bMirrored : 1;                                            // 0x000C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bCurrentlyValid : 1;                                      // 0x000D(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.AIHotSpotSlotConfig
// 0x001C
struct FAIHotSpotSlotConfig
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x000C(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0018(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.AIHotSpotSlotConfig.SlotType
};

// ScriptStruct FortniteGame.GameplayEffectApplicationInfo
// 0x0028
struct FGameplayEffectApplicationInfo
{
	TAssetPtr<class UClass>                            GameplayEffect;                                           // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              Level;                                                    // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
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
	unsigned char                                      UnknownData04[0x1];                                       // 0x008D(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortDeliveryInfoRequirementsFilter.BuildingActorSpecification
	unsigned char                                      UnknownData05[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	unsigned char                                      bApplyToGlobalEnvironmentAbilityActor : 1;                // 0x0094(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.ProximityBasedGEDeliveryInfo
// 0x00B0
struct FProximityBasedGEDeliveryInfo
{
	struct FFortDeliveryInfoRequirementsFilter         DeliveryRequirements;                                     // 0x0000(0x0098) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<struct FGameplayEffectApplicationInfo>      EffectsToApply;                                           // 0x0098(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00A8(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.ProximityBasedGEDeliveryInfo.ProximityApplicationType
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

// ScriptStruct FortniteGame.FortTooltipMapEntry
// 0x0018
struct FFortTooltipMapEntry
{
	class UClass*                                      ObjectClass;                                              // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      SecondaryObjectClass;                                     // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      TooltipClass;                                             // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortTooltipDisplayStatInfo
// 0x0050
struct FFortTooltipDisplayStatInfo
{
	struct FGameplayTag                                Token;                                                    // 0x0000(0x0008) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayAttribute                          Attribute;                                                // 0x0008(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       ContextTags;                                              // 0x0028(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bLowerIsBetter : 1;                                       // 0x0048(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
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
	unsigned char                                      bEnabled : 1;                                             // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.QuickBarSlotData
// 0x0038
struct FQuickBarSlotData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty FortniteGame.QuickBarSlotData.AcceptedItemTypes
	unsigned char                                      bStaticSlot : 1;                                          // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
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
	unsigned char                                      bPlayerIsNew : 1;                                         // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bSpawnedActor : 1;                                        // 0x0050(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
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
	unsigned char                                      UnknownData01[0x1];                                       // 0x0018(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FOBCoreChoice.FileHeaderStatus
	unsigned char                                      UnknownData02[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
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
	unsigned char                                      inventory_overflow_date : 1;                              // 0x0058(0x0001) (CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	unsigned char                                      bIsReplicatedCopy : 1;                                    // 0x0059(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bIsDirty : 1;                                             // 0x005A(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x005B(0x0005) MISSED OFFSET
	struct FFortGiftingInfo                            GiftingInfo;                                              // 0x0060(0x0028)
	TArray<struct FFortItemEntryStateValue>            StateValues;                                              // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TWeakObjectPtr<class AFortInventory>               ParentInventory;                                          // 0x0098(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FGameplayAbilitySpecHandle                  GameplayAbilitySpecHandle;                                // 0x00A0(0x0004) (CPF_Transient)
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
	unsigned char                                      bExcludeInstigator : 1;                                   // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bExcludeRequester : 1;                                    // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bExcludeAllAttachedToInstigator : 1;                      // 0x0012(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bExcludeAllAttachedToRequester : 1;                       // 0x0013(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bExcludePawnFriends : 1;                                  // 0x0014(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bExcludeFriendlyAI : 1;                                   // 0x0015(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bExcludePawnEnemies : 1;                                  // 0x0016(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bExcludeNonPawnFriends : 1;                               // 0x0017(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bExcludeNonPawnEnemies : 1;                               // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bExcludeWithoutNavigationCorridor : 1;                    // 0x0019(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bExcludeNonPlayerBuiltPieces : 1;                         // 0x001A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bExcludePlayerBuiltPieces : 1;                            // 0x001B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bExcludeNonBGABuildings : 1;                              // 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bExcludeNonBlockingHits : 1;                              // 0x001D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bTraceComplexCollision : 1;                               // 0x001E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortAbilityTargetSelection
// 0x0060
struct FFortAbilityTargetSelection
{
	TEnumAsByte<EFortTargetSelectionShape>             Shape;                                                    // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     CustomShapeComponentName;                                 // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0018(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortAbilityTargetSelection.TestType
	unsigned char                                      UnknownData02[0x1];                                       // 0x0019(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortAbilityTargetSelection.PrimarySource
	unsigned char                                      UnknownData03[0x1];                                       // 0x001A(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortAbilityTargetSelection.SecondarySource
	unsigned char                                      UnknownData04[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	float                                              Range;                                                    // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     HalfExtents;                                              // 0x0020(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              ConeYawAngle;                                             // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ConePitchAngle;                                           // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ConeMinRadius;                                            // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortTargetFilter                           TargetFilter;                                             // 0x0038(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bExcludeObstructedByWorld : 1;                            // 0x0058(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCreateHitResultWhenNoTargetsFound : 1;                   // 0x0059(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseProjectileRotationForDamageZones : 1;                 // 0x005A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x005B(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortAbilityTargetSelection.TargetSelectionUsage
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
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortAbilityCost.CostSource
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FScalableFloat                              CostValue;                                                // 0x0008(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UFortItemDefinition*                         ItemDefinition;                                           // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bOnlyApplyCostOnHit : 1;                                  // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortGameplayAbilityBehaviorDistanceData
// 0x0028
struct FFortGameplayAbilityBehaviorDistanceData
{
	struct FGameplayTagContainer                       DistanceDataTag;                                          // 0x0000(0x0020) (CPF_Edit)
	float                                              Distance;                                                 // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      UnknownData00[0x1];                                       // 0x0010(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortGameplayAbilityMontageInfo.MontageSectionToPlay
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FName                                       OverrideSection;                                          // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bPlayRandomSection : 1;                                   // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FFortCharacterPartMontageInfo>       CharacterPartMontages;                                    // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0038(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.StrategicBuildingLevelCriteria
// 0x0020
struct FStrategicBuildingLevelCriteria
{
	struct FText                                       UnlockRequirementText;                                    // 0x0000(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0018(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.StrategicBuildingLevelCriteria.RequirementDisplayRepresentation
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
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
};

// ScriptStruct FortniteGame.StrategicBuildingLevelActiveCriteriaProgress
// 0x000C
struct FStrategicBuildingLevelActiveCriteriaProgress
{
	float                                              CurrentProgress;                                          // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              MaxProgress;                                              // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bProgressAllowed : 1;                                     // 0x0008(0x0001) (CPF_Transient)
};

// ScriptStruct FortniteGame.FortSpawnSlotData
// 0x0020
struct FFortSpawnSlotData
{
	struct FVector                                     SpawnSlotLocation;                                        // 0x0000(0x000C) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class AFortAIPawn*                                 OccupyingAI;                                              // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortRiftSlotStatus>                   SlotStatus;                                               // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bModifyColor : 1;                                         // 0x08A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08A1(0x0003) MISSED OFFSET
	struct FLinearColor                                ColorAlteration;                                          // 0x08A4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08B4(0x0004) MISSED OFFSET
	struct FName                                       ColorParameterName;                                       // 0x08B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bModifyDecalColour : 1;                                   // 0x08C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x08C1(0x0003) MISSED OFFSET
	struct FLinearColor                                DecalColourAlterationStart;                               // 0x08C4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                DecalColourAlterationEnd;                                 // 0x08D4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      bModifyShellColour : 1;                                   // 0x08E4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bForceControl : 1;                                        // 0x003C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bReloadIndividualBullets : 1;                             // 0x00F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bReloadInterruptIsImmediate : 1;                          // 0x00F1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.TrackConnectorMeshConfig.InclineSideA
	unsigned char                                      UnknownData01[0x1];                                       // 0x0001(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.TrackConnectorMeshConfig.InclineSideB
	unsigned char                                      UnknownData02[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class UStaticMesh*                                 Mesh;                                                     // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
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
	unsigned char                                      bShowInSummaries : 1;                                     // 0x0070(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShowInDifferences : 1;                                   // 0x0071(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShowAsBuffInFE : 1;                                      // 0x0072(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bNegativeValuesShouldBeDisplayedPositively : 1;           // 0x0073(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortAIAssignmentIdentifier.AssignmentType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       AssignmentGameplayTags;                                   // 0x0008(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<EFortTeam>                             AssignmentTeam;                                           // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortAIGoalInfo
// 0x0018
struct FFortAIGoalInfo
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bActorAlwaysPerceived : 1;                                // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
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

// ScriptStruct FortniteGame.LoginFailureLogSubmitOptions
// 0x0018
struct FLoginFailureLogSubmitOptions
{
	unsigned char                                      bSubmitLogs : 1;                                          // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                LogTailKb;                                                // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0008(0x0010) UNKNOWN PROPERTY: ArrayProperty FortniteGame.LoginFailureLogSubmitOptions.DoNotUploadReasons
};

// ScriptStruct FortniteGame.PurchaseFailureLogSubmitOptions
// 0x0018
struct FPurchaseFailureLogSubmitOptions
{
	unsigned char                                      bSubmitLogs : 1;                                          // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bSubmitLogs : 1;                                          // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                LogTailKb;                                                // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FPartyFailureLogSubmitReason>        Reasons;                                                  // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.SubGameAccess
// 0x0003
struct FSubGameAccess
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.SubGameAccess.SubGame
	unsigned char                                      UnknownData01[0x1];                                       // 0x0001(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.SubGameAccess.AccessStatus
	unsigned char                                      UnknownData02[0x1];                                       // 0x0002(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.SubGameAccess.MatchmakingStatus
};

// ScriptStruct FortniteGame.FortFeedbackHandle
// 0x0018
struct FFortFeedbackHandle
{
	class UFortFeedbackBank*                           FeedbackBank;                                             // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       EventName;                                                // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bReadOnly : 1;                                            // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bBankDefined : 1;                                         // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortFeedbackBroadcastFilter>          BroadcastFilterOverride;                                  // 0x0012(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bInterruptCurrentLine : 1;                                // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCanBeInterrupted : 1;                                    // 0x0029(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCanQue : 1;                                              // 0x002A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bIsClamped : 1;                                           // 0x0018(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShouldClampBase : 1;                                     // 0x0019(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      UnknownData00[0x1];                                       // 0x004C(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortPickupLocationData.TossState
	unsigned char                                      UnknownData01[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FGuid                                       PickupGuid;                                               // 0x0050(0x0010) (CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
};

// ScriptStruct FortniteGame.FortPickupEntryData
// 0x0030
struct FFortPickupEntryData
{
	struct FInterpCurveFloat                           FloatCurve;                                               // 0x0000(0x0018)
	struct FGuid                                       PickupGuid;                                               // 0x0018(0x0010) (CPF_IsPlainOldData)
	float                                              StartTime;                                                // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.PawnDamageZones
// 0x0018
struct FPawnDamageZones
{
	unsigned char                                      bActive : 1;                                              // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
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
	unsigned char                                      bInterruptCurrentLine : 1;                                // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCanBeInterrupted : 1;                                    // 0x0029(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCanQue : 1;                                              // 0x002A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bReceivedPrimaryInput : 1;                                // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bReceivedSecondaryInput : 1;                              // 0x0011(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAlreadyProcessedInput : 1;                               // 0x0012(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bAlwaysDisplayHealthBar : 1;                              // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bOverrideHealthBarColor : 1;                              // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FSlateBrush                                 UpgradeIcon;                                              // 0x0008(0x0090) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLinearColor                                HealthBarColorOverride;                                   // 0x0098(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortAIAppearanceOverrideEntry
// 0x0050
struct FFortAIAppearanceOverrideEntry
{
	struct FName                                       AppearanceName;                                           // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsFemale : 1;                                            // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.IntensityContribution.ContributingAIDirectorFactor
	unsigned char                                      UnknownData01[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              MaxContribution;                                          // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bModifyContributionByCompletionPercentage : 1;            // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FCurveTableRowHandle                        CompletionPercentageInitialMultiplier;                    // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FCurveTableRowHandle                        CompletionPercentageToStartReducingMultiplier;            // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FCurveTableRowHandle                        CompletionPercentageToStopReducingMultiplier;             // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bModifyByNumberOfCriticalEncounterGoals : 1;              // 0x0040(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.UtilityContribution.ContributingAIDirectorFactor
	unsigned char                                      UnknownData01[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              MaxContribution;                                          // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortFactorContributionType>           ContributionType;                                         // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.UtilityData
// 0x0040
struct FUtilityData
{
	TArray<struct FUtilityContribution>                ContributingFactors;                                      // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	float                                              ContributionsTotal;                                       // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bApplyRecentSelectionPenalty : 1;                         // 0x0014(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bApplyGroupPopulationCurveToCategoryMax : 1;              // 0x0048(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
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
	unsigned char                                      bInvalidForEnemySpawners : 1;                             // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
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
	unsigned char                                      bIsDirectional : 1;                                       // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortEncounterPawnNumberCaps
// 0x0018
struct FFortEncounterPawnNumberCaps
{
	unsigned char                                      bApplyPawnNumberCaps : 1;                                 // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
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
	unsigned char                                      bSpawnedFromExternalSpawner : 1;                          // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                SpawnSetIndex;                                            // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0038(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.PendingSpawnInfo.AIType
	unsigned char                                      UnknownData02[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class AFortPlayerController*                       TargetPlayer;                                             // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortAIEncounterInfo*                        EncounterInfo;                                            // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DifficultyLevel;                                          // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	class UFortAISpawnGroup*                           SpawnGroup;                                               // 0x0058(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       SpawnGroupGuid;                                           // 0x0060(0x0010) (CPF_IsPlainOldData)
	int                                                EnemyIndexInSpawnGroup;                                   // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeToSpawn;                                              // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       PendingSpawnInfoGuid;                                     // 0x0078(0x0010) (CPF_IsPlainOldData)
	unsigned char                                      bIgnoreCollision : 1;                                     // 0x0088(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bKillBuildingActorsAtSpawnLocation : 1;                   // 0x0089(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x008A(0x0002) MISSED OFFSET
	float                                              EncounterAILifespan;                                      // 0x008C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScoreMultiplier;                                          // 0x0090(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDebugSpawnedAI : 1;                                      // 0x0094(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
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
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.AIDirectorEventData.Event
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FCurveTableRowHandle                        DataMax;                                                  // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FCurveTableRowHandle                        CoolDownRate;                                             // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0028(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.AIDirectorEventData.ContributionType
	unsigned char                                      UnknownData03[0x1];                                       // 0x0029(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.AIDirectorEventData.OwnerParticipantType
};

// ScriptStruct FortniteGame.FortAIDirectorFactorContribution
// 0x000C
struct FFortAIDirectorFactorContribution
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortAIDirectorFactorContribution.AIDirectorEvent
	unsigned char                                      UnknownData01[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MaxContribution;                                          // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortAIDirectorFactorContribution>     ContributionType;                                         // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortAIDirectorFactorData
// 0x0020
struct FFortAIDirectorFactorData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortAIDirectorFactorData.AIDirectorFactor
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FFortAIDirectorFactorContribution>   ContributingEvents;                                       // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	float                                              MaxValue;                                                 // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bReadyToSpawn : 1;                                        // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bFinishedSpawning : 1;                                    // 0x0019(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bRiftsDestroyPlayerBuiltBuildings : 1;                    // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bMustFindSpawnPoints : 1;                                 // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bTrackCombatParticipation : 1;                            // 0x0012(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDisplayThreatVisuals : 1;                                // 0x0013(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumRiftsToUseOverride;                                    // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseEQSQueryToFindAISpawnLocations : 1;                   // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRelevantForTotalAICap : 1;                               // 0x0019(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bIgnoreCollisionWhenSpawning : 1;                         // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bOverrideVariantSpawnPointValue : 1;                      // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
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
	unsigned char                                      bIsWaitingForQueryResults : 1;                            // 0x002C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortEncounterDirection>               ChosenDirection;                                          // 0x002D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	TArray<struct FVector>                             QueryLocations;                                           // 0x0030(0x0010) (CPF_ZeroConstructor)
	int                                                NumTimesUsed;                                             // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bIsActive : 1;                                            // 0x0040(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUsingFallbackQuery : 1;                                  // 0x0041(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortAIEncounterQueryDirectionTracker
// 0x0048
struct FFortAIEncounterQueryDirectionTracker
{
	unsigned char                                      bHasTriedPreviousDirections : 1;                          // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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

// ScriptStruct FortniteGame.FortMontageInputAction
// 0x0018
struct FFortMontageInputAction
{
	struct FGameplayTag                                TriggerAbilityTag;                                        // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FName                                       NextSection;                                              // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0010(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortMontageInputAction.InputType
};

// ScriptStruct FortniteGame.HomebaseBannerColor
// 0x0020
struct FHomebaseBannerColor
{
	struct FLinearColor                                PrimaryColor;                                             // 0x0000(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                SecondaryColor;                                           // 0x0010(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.HeroSpecializationAttributeRequirement
// 0x0028
struct FHeroSpecializationAttributeRequirement
{
	struct FGameplayAttribute                          Attribute;                                                // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	float                                              MinimumValue;                                             // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
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

// ScriptStruct FortniteGame.ChoiceDataEntry
// 0x0050
struct FChoiceDataEntry
{
	struct FText                                       ButtonText;                                               // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       ButtonDescription;                                        // 0x0018(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       ConfirmText;                                              // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bEnabled : 1;                                             // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRequireConfirmation : 1;                                 // 0x0049(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCloseAfterSelection : 1;                                 // 0x004A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.ChoiceData
// 0x0030
struct FChoiceData
{
	int                                                MenuIdentifier;                                           // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShowCloseButton : 1;                                     // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      UnknownData01[0x1];                                       // 0x0118(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortDialogDescription.FeedBackType
	unsigned char                                      Dismissable : 1;                                          // 0x0119(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	class UFortNotificationHandler*                    NotificationHandler;                                      // 0x0120(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x48];                                      // 0x0128(0x0048) MISSED OFFSET
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

// ScriptStruct FortniteGame.MyFortCategoryData
// 0x0058
struct FMyFortCategoryData
{
	struct FText                                       CategoryName;                                             // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FGameplayTag                                TooltipTag;                                               // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FGameplayTagContainer                       ModifiedTagContainer;                                     // 0x0020(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bIsCore : 1;                                              // 0x0040(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	TArray<struct FGameplayAttribute>                  Attributes;                                               // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.TieredCollectionProgressionDataBase
// 0x0001
struct FTieredCollectionProgressionDataBase
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.TieredCollectionProgressionDataBase.SelectionMethod
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

// ScriptStruct FortniteGame.FortClientAnnouncementData
// 0x0001
struct FFortClientAnnouncementData
{

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
	unsigned char                                      UnknownData01[0x1];                                       // 0x0010(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortEventConditional.RelevantPeriod
	TEnumAsByte<EFortCompare>                          ComparisonType;                                           // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	int                                                Value;                                                    // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortSchematicItemDefinition*                CraftingItem;                                             // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCanCraft : 1;                                            // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
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

// ScriptStruct FortniteGame.HeroAbilityKit
// 0x0048
struct FHeroAbilityKit
{
	TAssetPtr<class UFortAbilityKit>                   InherentAbilityKit;                                       // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FGameplayTagContainer                       RequiredGPTags;                                           // 0x0020(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bShowInAbilityScreen : 1;                                 // 0x0040(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bShowInAbilityScreen : 1;                                 // 0x0068(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
};

// ScriptStruct FortniteGame.FortUIFeedback
// 0x0020
struct FFortUIFeedback
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	class USoundBase*                                  Audio;                                                    // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLooping : 1;                                             // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              FadeIn;                                                   // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FadeOut;                                                  // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortUIFeedbackBlueprintOnly
// 0x0008 (0x0028 - 0x0020)
struct FFortUIFeedbackBlueprintOnly : public FFortUIFeedback
{
	struct FName                                       EditableName;                                             // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortRequirementsInfo
// 0x0038
struct FFortRequirementsInfo
{
	int                                                CommanderLevel;                                           // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                PersonalPowerRating;                                      // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                PartyPowerRating;                                         // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UFortQuestItemDefinition*                    ActiveQuestDefinition;                                    // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UFortQuestItemDefinition*                    QuestDefinition;                                          // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FDataTableRowHandle                         ObjectiveStatHandle;                                      // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UFortItemDefinition*                         ItemDefinition;                                           // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortMissionAlertRequirementsInfo
// 0x0040
struct FFortMissionAlertRequirementsInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortMissionAlertRequirementsInfo.Category
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FFortRequirementsInfo                       Requirements;                                             // 0x0008(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortTheaterMissionWeight
// 0x0028
struct FFortTheaterMissionWeight
{
	TAssetPtr<class UClass>                            MissionGenerator;                                         // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              Weight;                                                   // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortTheaterDifficultyWeight
// 0x0028
struct FFortTheaterDifficultyWeight
{
	struct FDataTableRowHandle                         DifficultyInfo;                                           // 0x0000(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FString                                     LootTierGroup;                                            // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	float                                              Weight;                                                   // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
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
};

// ScriptStruct FortniteGame.FortTheaterColorInfo
// 0x0030
struct FFortTheaterColorInfo
{
	unsigned char                                      bUseDifficultyToDetermineColor : 1;                       // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FSlateColor                                 Color;                                                    // 0x0008(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortMissionAlertRuntimeData
// 0x0003
struct FFortMissionAlertRuntimeData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortMissionAlertRuntimeData.MissionAlertCategory
	unsigned char                                      bRespectTileRequirements : 1;                             // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bAllowQuickplay : 1;                                      // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortTheaterRuntimeData
// 0x0490
struct FFortTheaterRuntimeData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortTheaterRuntimeData.TheaterType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TheaterTags;                                              // 0x0008(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FFortRequirementsInfo                       TheaterVisibilityRequirements;                            // 0x0028(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FFortRequirementsInfo                       Requirements;                                             // 0x0060(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0098(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortTheaterRuntimeData.RequiredSubGameForVisibility
	unsigned char                                      bOnlyMatchLinkedQuestsToTiles : 1;                        // 0x0099(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x009A(0x0006) MISSED OFFSET
	class UClass*                                      WorldMapPinClass;                                         // 0x00A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTexture2D*                                  TheaterImage;                                             // 0x00A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FFortMultiSizeBrush                         TheaterImages;                                            // 0x00B0(0x0360) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FFortTheaterColorInfo                       TheaterColorInfo;                                         // 0x0410(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FName                                       Socket;                                                   // 0x0440(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FFortRequirementsInfo                       MissionAlertRequirements;                                 // 0x0448(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TArray<struct FFortMissionAlertRuntimeData>        MissionAlertCategoryRequirements;                         // 0x0480(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortLinkedQuest
// 0x0018
struct FFortLinkedQuest
{
	class UFortQuestItemDefinition*                    QuestDefinition;                                          // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FDataTableRowHandle                         ObjectiveStatHandle;                                      // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.FortTheaterMapTileData
// 0x00C0
struct FFortTheaterMapTileData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortTheaterMapTileData.TileType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TAssetPtr<class UClass>                            ZoneTheme;                                                // 0x0008(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortRequirementsInfo                       Requirements;                                             // 0x0028(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TArray<struct FFortLinkedQuest>                    LinkedQuests;                                             // 0x0060(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	int                                                XCoordinate;                                              // 0x0070(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                YCoordinate;                                              // 0x0074(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FFortTheaterMissionWeight>           MissionWeightOverrides;                                   // 0x0078(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<struct FFortTheaterDifficultyWeight>        DifficultyWeightOverrides;                                // 0x0088(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      CanBeMissionAlert : 1;                                    // 0x0098(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TileTags;                                                 // 0x00A0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_EditConst)
};

// ScriptStruct FortniteGame.FortTheaterMapRegionData
// 0x00E0
struct FFortTheaterMapRegionData
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_EditConst)
	struct FGameplayTagContainer                       RegionTags;                                               // 0x0018(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_EditConst)
	TArray<int>                                        TileIndices;                                              // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst)
	TAssetPtr<class USlateBrushAsset>                  RegionThemeIcon;                                          // 0x0048(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_EditConst)
	struct FFortTheaterMapMissionData                  MissionData;                                              // 0x0068(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FFortRequirementsInfo                       Requirements;                                             // 0x0098(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TArray<struct FFortMissionAlertRequirementsInfo>   MissionAlertRequirements;                                 // 0x00D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FortTheaterMapData
// 0x0520
struct FFortTheaterMapData
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FString                                     UniqueId;                                                 // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst)
	int                                                TheaterSlot;                                              // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsTestTheater : 1;                                       // 0x002C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	struct FString                                     RequiredEventFlag;                                        // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0040(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       ThreatDisplayName;                                        // 0x0058(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FFortTheaterRuntimeData                     RuntimeInfo;                                              // 0x0070(0x0490) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TArray<struct FFortTheaterMapTileData>             Tiles;                                                    // 0x0500(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst)
	TArray<struct FFortTheaterMapRegionData>           Regions;                                                  // 0x0510(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst)
};

// ScriptStruct FortniteGame.FortMissionAlertAvailableData
// 0x0008
struct FFortMissionAlertAvailableData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortMissionAlertAvailableData.MissionAlertCategory
	unsigned char                                      UnknownData01[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
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
};

// ScriptStruct FortniteGame.FortEditorTheaterMapRegionColor
// 0x0018
struct FFortEditorTheaterMapRegionColor
{
	class UFortRegionInfo*                             Region;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FLinearColor                                RegionColor;                                              // 0x0008(0x0010) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortTheaterTileEditorData
// 0x00B0
struct FFortTheaterTileEditorData
{
	int                                                XCoordinate;                                              // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                YCoordinate;                                              // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      ZoneTheme;                                                // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UFortRegionInfo*                             Region;                                                   // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FFortRequirementsInfo                       Requirements;                                             // 0x0018(0x0038) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<struct FFortLinkedQuest>                    LinkedQuests;                                             // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0060(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortTheaterTileEditorData.TileType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TileTags;                                                 // 0x0068(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<struct FFortTheaterMissionWeight>           MissionWeightOverrides;                                   // 0x0088(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FFortTheaterDifficultyWeight>        DifficultyWeightOverrides;                                // 0x0098(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      bCanBeMissionAlert : 1;                                   // 0x00A8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
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
	unsigned char                                      bThreatActivated : 1;                                     // 0x0049(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x004A(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.ThreatLocationInfo.DeactivationType
	unsigned char                                      UnknownData03[0x15];                                      // 0x004B(0x0015) MISSED OFFSET
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
	unsigned char                                      bInitialized : 1;                                         // 0x000C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bRippleOutward : 1;                                       // 0x000D(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
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
	unsigned char                                      bIsChanging : 1;                                          // 0x0034(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsChangePending : 1;                                     // 0x0035(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
};

// ScriptStruct FortniteGame.WindVectorMaterialInterpolationData
// 0x0030
struct FWindVectorMaterialInterpolationData
{
	struct FName                                       MaterialParameterName;                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaterialParameterIndex;                                   // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                LerpFromValue;                                            // 0x000C(0x0010) (CPF_IsPlainOldData)
	struct FLinearColor                                LerpToValue;                                              // 0x001C(0x0010) (CPF_IsPlainOldData)
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
	unsigned char                                      bNeedsInitialization : 1;                                 // 0x0088(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bInitialized : 1;                                         // 0x0089(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
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
	unsigned char                                      bAdjustFoundationPlacementForFloors : 1;                  // 0x006C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
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
	unsigned char                                      bSpawnActorAutomatically : 1;                             // 0x006C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bShouldReserveLocations : 1;                              // 0x006D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bSnapToGrid : 1;                                          // 0x006E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bAdjustPlacementForFloors : 1;                            // 0x006F(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bDontCreateSpawnRiftsNearby : 1;                          // 0x0070(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
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
	unsigned char                                      bIgnoreCollisionCheck : 1;                                // 0x00A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bSnapToGrid : 1;                                          // 0x00A9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
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
	unsigned char                                      bShowDescription : 1;                                     // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
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
	unsigned char                                      bShouldReselectOptionsPerInstance : 1;                    // 0x0030(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bIsPrototype : 1;                                         // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortMissionInfoOption
// 0x0028
struct FFortMissionInfoOption
{
	TAssetPtr<class UFortMissionInfo>                  MissionInfo;                                              // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              MinDifficultyLevel;                                       // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortPlayerSpawnPadPlacementData
// 0x0050
struct FFortPlayerSpawnPadPlacementData
{
	class UEnvQuery*                                   PlacementQuery;                                           // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TAssetPtr<class UClass>                            ActorToPlace;                                             // 0x0008(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bSnapToGrid : 1;                                          // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bAdjustPlacementForFloors : 1;                            // 0x0029(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
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
// 0x00A0
struct FFortAvailableMissionAlertData
{
	struct FString                                     CategoryName;                                             // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     SpreadDataName;                                           // 0x0010(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bIgnoreQuotaCheck : 1;                                    // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FString                                     MissionAlertGuid;                                         // 0x0028(0x0010) (CPF_ZeroConstructor)
	int                                                TileIndex;                                                // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FDateTime                                   AvailableUntil;                                           // 0x0040(0x0008)
	struct FDateTime                                   RefreshSpreadAt;                                          // 0x0048(0x0008)
	struct FMcpLootResult                              MissionAlertRewards;                                      // 0x0050(0x0020)
	struct FMcpLootResult                              MissionAlertModifiers;                                    // 0x0070(0x0020)
	TArray<class UFortItemDefinition*>                 ItemDefinitionRefCache;                                   // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_Transient)
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
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortReplicatedStatMapping.StatCategory
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
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
	unsigned char                                      RequiredFullInstall : 1;                                  // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.SoundPerResourceLevel
// 0x0030
struct FSoundPerResourceLevel
{
	class USoundBase*                                  Sounds[0x6];                                              // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortDailyRewardScheduleData
// 0x0028
struct FFortDailyRewardScheduleData
{
	TAssetPtr<class UFortDailyRewardScheduleTokenDefinition> EnablingToken;                                            // 0x0000(0x0020) (CPF_Edit)
	class UDataTable*                                  Rewards;                                                  // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortQuestPackInfo
// 0x0030
struct FFortQuestPackInfo
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     DefaultQuestPack;                                         // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                MaxActiveDailyQuests;                                     // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxRerollsPerDay;                                         // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsStreamingQuestPack : 1;                                 // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
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

// ScriptStruct FortniteGame.DistanceToTargetComparison
// 0x0030
struct FDistanceToTargetComparison
{
	unsigned char                                      bUseOverriddenValue : 1;                                  // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              OverriddenValue;                                          // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       DistanceDataTags;                                         // 0x0008(0x0020) (CPF_Edit)
	TEnumAsByte<EArithmeticKeyOperation>               Operator;                                                 // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETargetDistanceComparisonType>         ComparisonType;                                           // 0x0029(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      LastBuildableMirrored : 1;                                // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                LastBuildableRotationIterations;                          // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortDamageNumberInfo
// 0x0068
struct FFortDamageNumberInfo
{
	struct FVector                                     WorldLocation;                                            // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FVector                                     HitNormal;                                                // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      bIsCriticalDamage : 1;                                    // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                Damage;                                                   // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0020(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortDamageNumberInfo.DamageNumberType
	unsigned char                                      UnknownData02[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              VisualDamageScale;                                        // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0028(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortDamageNumberInfo.ElementalDamageType
	unsigned char                                      UnknownData04[0x1];                                       // 0x0029(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortDamageNumberInfo.ScoreType
	unsigned char                                      bAttachScoreNumberToPlayer : 1;                           // 0x002A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
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
	unsigned char                                      UnknownData03[0x1];                                       // 0x0070(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortRewardActivity.ActivityCompletionResult
	unsigned char                                      UnknownData04[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
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
	unsigned char                                      bIsFinalized : 1;                                         // 0x0060(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortUpdatedObjectiveStat
// 0x0018
struct FFortUpdatedObjectiveStat
{
	class UFortQuestItemDefinition*                    Quest;                                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BackendName;                                              // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StatValue;                                                // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortPersistentGameplayStatValue
// 0x0018
struct FFortPersistentGameplayStatValue
{
	struct FString                                     StatName;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                StatValue;                                                // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortPersistentGameplayStatContainer
// 0x0010
struct FFortPersistentGameplayStatContainer
{
	TArray<struct FFortPersistentGameplayStatValue>    GameplayStats;                                            // 0x0000(0x0010) (CPF_ZeroConstructor)
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
	unsigned char                                      UnknownData00[0x1];                                       // 0x0008(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortClientAnnouncementData_Conversation.ConversationDisplayPreference
};

// ScriptStruct FortniteGame.FortClientAnnouncementData_Tutorial
// 0x0050 (0x0140 - 0x00F0)
struct FFortClientAnnouncementData_Tutorial : public FFortClientAnnouncementData_Basic
{
	float                                              AutoContinueDelay;                                        // 0x00F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	struct FText                                       NameText;                                                 // 0x00F8(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       SystemText;                                               // 0x0110(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bButtonEnabled : 1;                                       // 0x0128(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLightboxEnabled : 1;                                     // 0x0129(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLightboxDisableInputOnly : 1;                            // 0x012A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x012B(0x0001) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x012C(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<EVerticalAlignment>                    VAlign;                                                   // 0x013C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HAlign;                                                   // 0x013D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortClientAnnouncementQueue
// 0x0010
struct FFortClientAnnouncementQueue
{
	TArray<class AFortClientAnnouncement*>             Announcements;                                            // 0x0000(0x0010) (CPF_ZeroConstructor)
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

// ScriptStruct FortniteGame.FortPendingSlottedItemOperation
// 0x0018
struct FFortPendingSlottedItemOperation
{
	struct FString                                     SlottedItemId;                                            // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FName                                       SlotRowName;                                              // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortCollectionBookSectionState
// 0x0018
struct FFortCollectionBookSectionState
{
	struct FString                                     Section;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0010(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortCollectionBookSectionState.State
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

// ScriptStruct FortniteGame.FortLevelStreamingInfo
// 0x0010
struct FFortLevelStreamingInfo
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortLevelStreamingState>              LevelState;                                               // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bFailedToLoad : 1;                                        // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bDisableSharedMissionLoading : 1;                         // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortGeneratedMissionOption
// 0x0018
struct FFortGeneratedMissionOption
{
	class UFortDifficultyOptionCategoryMission*        MissionOptionCategory;                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      MissionOption;                                            // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RangeLerpValue;                                           // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortGeneratedEncounterOption
// 0x0018
struct FFortGeneratedEncounterOption
{
	class UFortDifficultyOptionCategoryEncounter*      EncounterOptionCategory;                                  // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      EncounterOption;                                          // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RangeLerpValue;                                           // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bChangedSinceLastVLog : 1;                                // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bShouldReselectOptionsPerInstance : 1;                    // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      UnknownData00[0x1];                                       // 0x00F0(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortMissionRecord.MissionStatus
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
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
	struct FScriptDelegate                             TimeCallback;                                             // 0x0000(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0000(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData01[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.TeamChangeRequest
// 0x0010
struct FTeamChangeRequest
{
	class AFortPlayerController*                       RequestingController;                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortTeam>                             DesiredTeam;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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

// ScriptStruct FortniteGame.FortMissionWeightedReward
// 0x00A0
struct FFortMissionWeightedReward
{
	struct FName                                       LootTierGroup;                                            // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FSlateBrush                                 LootIcon;                                                 // 0x0008(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	float                                              Weight;                                                   // 0x0098(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
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
};

// ScriptStruct FortniteGame.FortBadgeCount
// 0x0014 (0x0020 - 0x000C)
struct FFortBadgeCount : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UFortBadgeItemDefinition*                    Badge;                                                    // 0x0010(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                Count;                                                    // 0x0018(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
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
	unsigned char                                      bUseDeployableBases : 1;                                  // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TAssetPtr<class UFortDeployableBaseCloudSaveItemDefinition> DeployableBaseCloudSaveItemDef;                           // 0x0008(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UClass>                            DeployableBasePlot;                                       // 0x0028(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UFortDeployableBaseSkillTreeUnlocks> SupportedUnlocks;                                         // 0x0048(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bDeployableBasesReadOnly : 1;                             // 0x0068(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0069(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.DeployableBaseSupportSettings.SupportedUseType
	unsigned char                                      UnknownData02[0x6];                                       // 0x006A(0x0006) MISSED OFFSET
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
};

// ScriptStruct FortniteGame.ActiveTieredCollectionLayoutArray
// 0x0018 (0x00C8 - 0x00B0)
struct FActiveTieredCollectionLayoutArray : public FFastArraySerializer
{
	TArray<struct FActiveTieredCollectionLayout>       LayoutArray;                                              // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      bTiersForced : 1;                                         // 0x00C0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
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
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.PendingDeployableManagerAction.ActionType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class ADeployableBasePlot*>                 PendingPlots;                                             // 0x0008(0x0010) (CPF_ZeroConstructor)
	int                                                CurrentPlotRunningIndex;                                  // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x001C(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.PendingDeployableManagerAction.DesiredPlotState
	unsigned char                                      UnknownData03[0x43];                                      // 0x001D(0x0043) MISSED OFFSET
	class AFortDeployableBaseManager*                  Manager;                                                  // 0x0060(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
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
};

// ScriptStruct FortniteGame.FortFeedbackResponse
// 0x0020
struct FFortFeedbackResponse
{
	struct FFortFeedbackHandle                         Handle;                                                   // 0x0000(0x0018) (CPF_Edit)
	TEnumAsByte<EFortFeedbackContext>                  Context;                                                  // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bInterruptCurrentLine : 1;                                // 0x0078(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bCanBeInterrupted : 1;                                    // 0x0079(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bCanQue : 1;                                              // 0x007A(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
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

// ScriptStruct FortniteGame.FortSavedModeLoadout
// 0x0020
struct FFortSavedModeLoadout
{
	struct FString                                     LoadoutName;                                              // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             SelectedGadgets;                                          // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.VisibilityInfo
// 0x001C (0x0028 - 0x000C)
struct FVisibilityInfo : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class AActor*                                      Actor;                                                    // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortVisibilityComponent*                    VisibilityComponent;                                      // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	uint16_t                                           TeamVisibilityFlag;                                       // 0x0020(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.VisibiltyInfoArray
// 0x0010 (0x00C0 - 0x00B0)
struct FVisibiltyInfoArray : public FFastArraySerializer
{
	TArray<struct FVisibilityInfo>                     VisibilityInfoArray;                                      // 0x00B0(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.ItemAndCount
// 0x0010
struct FItemAndCount
{
	int                                                Count;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UFortItemDefinition*                         Item;                                                     // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
};

// ScriptStruct FortniteGame.CachedPlayerFOBInformation
// 0x0020
struct FCachedPlayerFOBInformation
{
	struct FUniqueNetIdRepl                            PlayerID;                                                 // 0x0000(0x0018) (CPF_Transient)
	TEnumAsByte<EFortTeam>                             Team;                                                     // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortCharacterPartsRepMontageInfo
// 0x0020
struct FFortCharacterPartsRepMontageInfo
{
	TArray<struct FFortCharacterPartMontageInfo>       CharPartMontages;                                         // 0x0000(0x0010) (CPF_ZeroConstructor)
	class UAnimMontage*                                PawnMontage;                                              // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bPlayBit : 1;                                             // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortAccountClientSettings
// 0x0010
struct FFortAccountClientSettings
{
	TArray<struct FString>                             PinnedQuestInstances;                                     // 0x0000(0x0010) (CPF_ZeroConstructor)
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
	unsigned char                                      bIsAxisMapping : 1;                                       // 0x0054(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bEnableSpeedConstraint : 1;                               // 0x0044(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSkipTransitionInCrowd : 1;                               // 0x0045(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
};

// ScriptStruct FortniteGame.FortDisconnectedPlayerReservation
// 0x0028
struct FFortDisconnectedPlayerReservation
{
	struct FName                                       SessionName;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUniqueNetIdRepl                            PlayerID;                                                 // 0x0008(0x0018)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.ActiveGameplayModifierHandle
// 0x0004
struct FActiveGameplayModifierHandle
{
	int                                                Handle;                                                   // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
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
	unsigned char                                      bSupportRuntimeModifierShutdown : 1;                      // 0x00C4(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
};

// ScriptStruct FortniteGame.FortItemQuantityPair
// 0x0028
struct FFortItemQuantityPair
{
	TAssetPtr<class UFortItemDefinition>               ItemDefinition;                                           // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                Quantity;                                                 // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
// 0x0038
struct FTeamMapInfo
{
	TArray<unsigned char>                              ExplorationSeedPack;                                      // 0x0000(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0010(0x0024) MISSED OFFSET
	TEnumAsByte<EFortTeam>                             TeamId;                                                   // 0x0034(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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

// ScriptStruct FortniteGame.FortTierProgressionInfo
// 0x0018
struct FFortTierProgressionInfo
{
	struct FString                                     ProgressionLayoutGuid;                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                HighestDefeatedTier;                                      // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.ItemCategoryMappingData.CategoryType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
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

// ScriptStruct FortniteGame.FortHiddenRewardQuantityPair
// 0x0010
struct FFortHiddenRewardQuantityPair
{
	struct FName                                       TemplateId;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Quantity;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      UnknownData00[0x1];                                       // 0x0028(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortMcpQuestObjectiveInfo.ItemEvent
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TAssetPtr<class UFortItemDefinition>               ItemReference;                                            // 0x0030(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FString                                     ItemTemplateIdOverride;                                   // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FName                                       LinkSquadID;                                              // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LinkSquadIndex;                                           // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x006C(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortMcpQuestObjectiveInfo.LinkVaultTab
	unsigned char                                      UnknownData03[0x1];                                       // 0x006D(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortMcpQuestObjectiveInfo.LinkToItemManagement
	unsigned char                                      UnknownData04[0x2];                                       // 0x006E(0x0002) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0070(0x0018) (CPF_Edit)
	struct FText                                       HudShortDescription;                                      // 0x0088(0x0018) (CPF_Edit)
	TAssetPtr<class UTexture2D>                        HudIcon;                                                  // 0x00A0(0x0020) (CPF_Edit)
	int                                                Count;                                                    // 0x00C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Stage;                                                    // 0x00C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHidden : 1;                                              // 0x00C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRequirePrimaryMissionCompletion : 1;                     // 0x00C9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCanProgressInZone : 1;                                   // 0x00CA(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDisplayDynamicAnnouncementUpdate : 1;                    // 0x00CB(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDisplayDynamicStatusUpdate : 1;                          // 0x00CC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	float                                              DynamicUpdateCompletionDelay;                             // 0x00D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	TAssetPtr<class UClass>                            ScriptedAction;                                           // 0x00D8(0x0020) (CPF_Edit)
};

// ScriptStruct FortniteGame.FortQuestMissionCreationContext
// 0x0038
struct FFortQuestMissionCreationContext
{
	TAssetPtr<class UFortMissionInfo>                  MissionInfo;                                              // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TArray<struct FGameplayTagContainer>               MissionCreationContextTags;                               // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      bSetQuestOwnerAsMissionOwner : 1;                         // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      UnknownData00[0x1];                                       // 0x0020(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortExperienceDelta.IsFinalXpUpdate
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
	unsigned char                                      UnknownData00[0x1];                                       // 0x0080(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.MatchmakingParams.StartWith
	unsigned char                                      UnknownData01[0x1];                                       // 0x0081(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.MatchmakingParams.Flags
	unsigned char                                      UnknownData02[0x2];                                       // 0x0082(0x0002) MISSED OFFSET
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
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortCachedMatchmakingSearchParams.MatchmakingType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FMatchmakingParams                          MatchmakingParams;                                        // 0x0008(0x0098)
	unsigned char                                      bValid : 1;                                               // 0x00A0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bMakePrivate : 1;                                         // 0x0040(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0041(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.EmptyServerReservation.MatchmakingPool
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
	unsigned char                                      bPlayerIsNew : 1;                                         // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FString>                             PinnedSchematicInstances;                                 // 0x0008(0x0010) (CPF_ZeroConstructor)
	struct FQuickBar                                   PrimaryQuickBarRecord;                                    // 0x0018(0x0090)
	struct FQuickBar                                   SecondaryQuickBarRecord;                                  // 0x00A8(0x0090)
	int                                                ZonesCompleted;                                           // 0x0138(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortWorldProfileUpdateRequest
// 0x00F0
struct FFortWorldProfileUpdateRequest
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
	int                                                NumberOfRequests;                                         // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xAC];                                      // 0x0044(0x00AC) MISSED OFFSET
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
};

// ScriptStruct FortniteGame.EarnedBadgeEntry
// 0x0024 (0x0030 - 0x000C)
struct FEarnedBadgeEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UFortBadgeItemDefinition*                    Badge;                                                    // 0x0010(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<struct FEarnedBadgePlayerData>              PlayerData;                                               // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient)
	TEnumAsByte<EFortRewardType>                       RewardType;                                               // 0x0028(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
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
	unsigned char                                      bHideTimer : 1;                                           // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FLinearColor                                BaseColor;                                                // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                PulseColor;                                               // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ColorPulsesPerSecond;                                     // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.MissionTimerData
// 0x0028
struct FMissionTimerData
{
	unsigned char                                      bTimerIsPaused : 1;                                       // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      UnknownData00[0x1];                                       // 0x0010(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortPartyRepState.PartyProgression
	unsigned char                                      bLobbyConnectionStarted : 1;                              // 0x0011(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0012(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortPartyRepState.MatchmakingResult
	TEnumAsByte<EMatchmakingState>                     MatchmakingState;                                         // 0x0013(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     SessionId;                                                // 0x0018(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bSessionIsCriticalMission : 1;                            // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                ZoneTileIndex;                                            // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ZoneInstanceId;                                           // 0x0030(0x0010) (CPF_ZeroConstructor)
	struct FString                                     TheaterId;                                                // 0x0040(0x0010) (CPF_ZeroConstructor)
	TArray<unsigned char>                              TileStates;                                               // 0x0050(0x0010) (CPF_ZeroConstructor)
	struct FString                                     BucketId;                                                 // 0x0060(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0070(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortPartyRepState.PlaylistType
	unsigned char                                      bSquadFill : 1;                                           // 0x0071(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortPartyMemberRepState
// 0x0078 (0x0080 - 0x0008)
struct FFortPartyMemberRepState : public FPartyMemberRepState
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0008(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortPartyMemberRepState.Location
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                MatchmakingLevel;                                         // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ZoneInstanceId;                                           // 0x0010(0x0010) (CPF_ZeroConstructor)
	int                                                CurrentCharXP;                                            // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     HeroId;                                                   // 0x0028(0x0010) (CPF_ZeroConstructor)
	struct FString                                     HeroTypeRefName;                                          // 0x0038(0x0010) (CPF_ZeroConstructor)
	TEnumAsByte<EFortCustomGender>                     CharacterGender;                                          // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	int64_t                                            HomeBaseVersion;                                          // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ConsoleOSSString;                                         // 0x0058(0x0010) (CPF_ZeroConstructor)
	struct FString                                     ConsoleUniqueNetIdString;                                 // 0x0068(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bPreloadedAthena : 1;                                     // 0x0078(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bReadyAthena : 1;                                         // 0x0079(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.BuildingHitTime
// 0x0018
struct FBuildingHitTime
{
	class ABuildingActor*                              HitBuilding;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.AthenaBatchedDamageGameplayCues
// 0x0050
struct FAthenaBatchedDamageGameplayCues
{
	class AActor*                                      HitActor;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector_NetQuantize10                       Location;                                                 // 0x0008(0x000C)
	struct FVector_NetQuantizeNormal                   Normal;                                                   // 0x0014(0x000C)
	float                                              Magnitude;                                                // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bWeaponActivate : 1;                                      // 0x0024(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsFatal : 1;                                             // 0x0025(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsCritical : 1;                                          // 0x0026(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsShield : 1;                                            // 0x0027(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      NonPlayerHitActor;                                        // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FVector_NetQuantize10                       NonPlayerLocation;                                        // 0x0030(0x000C) (CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FVector_NetQuantizeNormal                   NonPlayerNormal;                                          // 0x003C(0x000C) (CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	float                                              NonPlayerMagnitude;                                       // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      NonPlayerbIsFatal : 1;                                    // 0x004C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      NonPlayerbIsCritical : 1;                                 // 0x004D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      bIsValid : 1;                                             // 0x004E(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
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
};

// ScriptStruct FortniteGame.FortInputActionKeyAlias
// 0x0028
struct FFortInputActionKeyAlias
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FKey                                        KeyAlias;                                                 // 0x0008(0x0018) (CPF_Config)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0020(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortInputActionKeyAlias.InputActionType
};

// ScriptStruct FortniteGame.MorphValuePair
// 0x0010
struct FMorphValuePair
{
	struct FName                                       MorphName;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MorphValue;                                               // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.AccumulatedItemEntry
// 0x0010
struct FAccumulatedItemEntry
{
	class UFortWorldItemDefinition*                    ItemDefinition;                                           // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Quantity;                                                 // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.DeathInfo
// 0x0010
struct FDeathInfo
{
	class AFortPlayerStateAthena*                      Killer;                                                   // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDBNO : 1;                                                // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0009(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.DeathInfo.DeathCause
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
};

// ScriptStruct FortniteGame.GoalDistanceData
// 0x0088
struct FGoalDistanceData
{
	unsigned char                                      bIgnoreScreeningDistance : 1;                             // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
};

// ScriptStruct FortniteGame.FortQuestObjectiveCompletion
// 0x0028
struct FFortQuestObjectiveCompletion
{
	struct FString                                     StatName;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                Count;                                                    // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0014(0x0014) MISSED OFFSET
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
	unsigned char                                      UnknownData00[0x1];                                       // 0x0008(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortScriptedActionParams.SourceType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
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
};

// ScriptStruct FortniteGame.FortSearchPassState
// 0x0018
struct FFortSearchPassState
{
	int                                                BestSessionIdx;                                           // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bWasCanceled : 1;                                         // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0005(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortSearchPassState.FailureType
	TEnumAsByte<EMatchmakingState>                     MatchmakingState;                                         // 0x0006(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EPartyReservationResult>               LastBeaconResponse;                                       // 0x0007(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGlobalMission
// 0x0170
struct FFortGlobalMission
{
	TAssetPtr<class UFortMissionInfo>                  MissionInfo;                                              // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) UNKNOWN PROPERTY: ArrayProperty FortniteGame.FortGlobalMission.AllowedTheaterTypes
	struct FGameplayTagQuery                           TheaterTagQuery;                                          // 0x0030(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FGameplayTagQuery                           RegionTagQuery;                                           // 0x0078(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00C0(0x0010) UNKNOWN PROPERTY: ArrayProperty FortniteGame.FortGlobalMission.AllowedZoneTypes
	struct FGameplayTagQuery                           ZoneTagQuery;                                             // 0x00D0(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FGameplayTagQuery                           PrimaryMissionTagQuery;                                   // 0x0118(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	float                                              MaxDifficultyLevel;                                       // 0x0160(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinDifficultyLevel;                                       // 0x0164(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsPrototype : 1;                                         // 0x0168(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bAllowInTestMaps : 1;                                     // 0x0169(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
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
	unsigned char                                      bReverseDirectionAlongSpline : 1;                         // 0x000C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.RepTrackMovement
// 0x0008 (0x0018 - 0x0010)
struct FRepTrackMovement : public FTrackMovement
{
	float                                              TimeStamp;                                                // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
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
};

// ScriptStruct FortniteGame.CameraPair
// 0x0010
struct FCameraPair
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.CameraPair.Type
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
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

// ScriptStruct FortniteGame.FortAIDirectorEvent
// 0x0020
struct FFortAIDirectorEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortAIDirectorEvent.Event
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UObject*                                     EventSource;                                              // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventTarget;                                              // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EventValue;                                               // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      ValidData : 1;                                            // 0x0038(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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

// ScriptStruct FortniteGame.FortTeamMemberInfo
// 0x0190
struct FFortTeamMemberInfo
{
	struct FUniqueNetIdRepl                            MemberUniqueId;                                           // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient)
	struct FUniqueNetIdRepl                            PartyLeaderUniqueId;                                      // 0x0018(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient)
	struct FUniqueNetIdRepl                            ConsoleUniqueId;                                          // 0x0030(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient)
	struct FText                                       PlayerName;                                               // 0x0048(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bPartyLeader : 1;                                         // 0x0060(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsInZone : 1;                                            // 0x0061(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHasBoostXp : 1;                                          // 0x0062(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHasRestXp : 1;                                           // 0x0063(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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

// ScriptStruct FortniteGame.FortSelectableRewardOption
// 0x0010
struct FFortSelectableRewardOption
{
	TArray<struct FFortItemQuantityPair>               Rewards;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
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
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortCollectionBookRewards.RewardType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       PageId;                                                   // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SectionId;                                                // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                XpRequired;                                               // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0020(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bIsMajorReward : 1;                                       // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FFortRewardInfo                             Rewards;                                                  // 0x0040(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.HomebaseNodePage
// 0x0040 (0x0048 - 0x0008)
struct FHomebaseNodePage : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0020(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TArray<struct FName>                               NodeList;                                                 // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortDialogExternalLatentActionHandle
// 0x0004
struct FFortDialogExternalLatentActionHandle
{
	int                                                Handle;                                                   // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.HomebaseNodeInstancePrerequisites
// 0x0020
struct FHomebaseNodeInstancePrerequisites
{
	struct FName                                       NodeInstanceId;                                           // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHideConnection : 1;                                      // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FName                                       PrereqPageId;                                             // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0018(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.HomebaseNodeInstancePrerequisites.PrereqNodeType
	unsigned char                                      UnknownData02[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
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
};

// ScriptStruct FortniteGame.HomebaseNode
// 0x00B8 (0x00C0 - 0x0008)
struct FHomebaseNode : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TArray<struct FHomebaseNodeANDPrerequisites>       OR_Prerequisites;                                         // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<struct FFortItemQuantityPair>               Cost;                                                     // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<TAssetPtr<class UFortQuestItemDefinition>>  QuestTemplateRequirements;                                // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0050(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.HomebaseNode.DisplayType
	unsigned char                                      UnknownData01[0x1];                                       // 0x0051(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.HomebaseNode.DisplayMagnitude
	unsigned char                                      UnknownData02[0x1];                                       // 0x0052(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.HomebaseNode.ActionType
	unsigned char                                      UnknownData03[0x5];                                       // 0x0053(0x0005) MISSED OFFSET
	struct FName                                       DrillDownNodePageId;                                      // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortAbilityKit*                             AbilityKit;                                               // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      GameplayEffect;                                           // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FName>                               GameplayEffectRowNames;                                   // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<struct FHomebaseSquadSlotId>                UnlockedSquadSlots;                                       // 0x0080(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	int                                                NumPowerPoints;                                           // 0x0090(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	struct FName                                       StyleId;                                                  // 0x0098(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Description;                                              // 0x00A0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UClass*                                      CustomTooltip;                                            // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortInputActionDetails
// 0x0020
struct FFortInputActionDetails
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortInputActionDetails.InputActionType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FKey                                        ActionKey;                                                // 0x0008(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.GameSummaryInfo
// 0x0018
struct FGameSummaryInfo
{
	struct FString                                     GameSessionID;                                            // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      Completed : 1;                                            // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bMultipleConfirmButtons : 1;                              // 0x00D8(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	class UWidget*                                     AdditionalContent;                                        // 0x00E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidget*                                     LeftAdditionalContent;                                    // 0x00E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              DisplayTime;                                              // 0x00F0(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Dismissable : 1;                                          // 0x00F4(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShouldWaitForLatentActionOnConfirmAction : 1;            // 0x00F5(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00F6(0x0002) MISSED OFFSET
	class UFortNotificationHandler*                    NotificationHandler;                                      // 0x00F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x80];                                      // 0x0100(0x0080) MISSED OFFSET
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
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) UNKNOWN PROPERTY: ArrayProperty FortniteGame.HomebaseSquadSlot.ValidSlottableItemTypes
	struct FGameplayTagContainer                       TagFilter;                                                // 0x0028(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TArray<struct FHomebaseSquadAttributeBonus>        SlottingBonuses;                                          // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	class UCurveTable*                                 PersonalityMatchBonusTable;                               // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.HomebaseSquad
// 0x0078 (0x0080 - 0x0008)
struct FHomebaseSquad : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       ShortDisplayName;                                         // 0x0020(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0038(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.HomebaseSquad.SquadType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FGameplayTag                                ManagerSynergyTag;                                        // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TArray<struct FHomebaseSquadSlot>                  CrewSlots;                                                // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FGameplayTagContainer                       RequiredTheaterTags;                                      // 0x0058(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                MaxNumDefendersAllowedInLevel;                            // 0x0078(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bConsiderNumPlayersForMaxNumDefenders : 1;                // 0x007C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAlwaysRemoveOldestDefenderWhenReplacing : 1;             // 0x007D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bIsMajorReward : 1;                                       // 0x0048(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.TransmogSacrifice
// 0x0008 (0x0010 - 0x0008)
struct FTransmogSacrifice : public FTableRowBase
{
	int                                                TransmogSacrificePoints;                                  // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.Recipe
// 0x0048 (0x0050 - 0x0008)
struct FRecipe : public FTableRowBase
{
	TArray<struct FFortItemQuantityPair>               RecipeResults;                                            // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      bIsConsumed : 1;                                          // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
};

// ScriptStruct FortniteGame.FortPlacementDistanceRequirements
// 0x0008
struct FFortPlacementDistanceRequirements
{
	float                                              DistanceRangeMin;                                         // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DistanceRangeMax;                                         // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
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

// ScriptStruct FortniteGame.InteractionType
// 0x0020
struct FInteractionType
{
	TEnumAsByte<ETInteractionType>                     InteractionType;                                          // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TWeakObjectPtr<class AFortPlayerPawn>              RequestingPawn;                                           // 0x0004(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UPrimitiveComponent>          InteractComponent;                                        // 0x000C(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FVector                                     InteractPoint;                                            // 0x0014(0x000C) (CPF_IsPlainOldData)
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
};

// ScriptStruct FortniteGame.FortCombatManagerEvent
// 0x0008
struct FFortCombatManagerEvent
{
	float                                              EventValue;                                               // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortCombatEvents>                     Event;                                                    // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.BuildingClassData
// 0x0010
struct FBuildingClassData
{
	class UClass*                                      BuildingClass;                                            // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                PreviousBuildingLevel;                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                UpgradeLevel;                                             // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
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

// ScriptStruct FortniteGame.FortWeakSpotPosition
// 0x001C
struct FFortWeakSpotPosition
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x000C(0x000C) (CPF_IsPlainOldData)
	unsigned char                                      bValidSpot : 1;                                           // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
};

// ScriptStruct FortniteGame.FortGameplayEffectContext
// 0x0058 (0x00C0 - 0x0068)
struct FFortGameplayEffectContext : public FGameplayEffectContext
{
	unsigned char                                      bIsFatalHit : 1;                                          // 0x0068(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsCriticalHit : 1;                                       // 0x0069(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsFullBodyHit : 1;                                       // 0x006A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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

// ScriptStruct FortniteGame.QuickBarAndSlot
// 0x0008
struct FQuickBarAndSlot
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.QuickBarAndSlot.QuickBarType
	unsigned char                                      UnknownData01[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
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
};

// ScriptStruct FortniteGame.FortKeepItemGroup
// 0x0010 (0x0018 - 0x0008)
struct FFortKeepItemGroup : public FTableRowBase
{
	int                                                Items;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxTier;                                                  // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BaseLevel;                                                // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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

// ScriptStruct FortniteGame.TrackPieceConfig
// 0x001C
struct FTrackPieceConfig
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.TrackPieceConfig.Type
	unsigned char                                      UnknownData01[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FRotator                                    Rotation;                                                 // 0x0004(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0010(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.TrackSplineConfig
// 0x0003
struct FTrackSplineConfig
{
	unsigned char                                      bUseSpline : 1;                                           // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.TrackSplineConfig.Start
	unsigned char                                      UnknownData01[0x1];                                       // 0x0002(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.TrackSplineConfig.End
};

// ScriptStruct FortniteGame.TrackSwitchStateConfig
// 0x0024
struct FTrackSwitchStateConfig
{
	struct FTrackPieceConfig                           TrackPiece;                                               // 0x0000(0x001C) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FTrackSplineConfig                          SplineConfig1;                                            // 0x001C(0x0003) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FTrackSplineConfig                          SplineConfig2;                                            // 0x001F(0x0003) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.TrackConfiguration
// 0x0038
struct FTrackConfiguration
{
	TArray<unsigned char>                              NeighborsByDirection;                                     // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FTrackSwitchStateConfig>             SwitchStates;                                             // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FRotator                                    SwitchRotation;                                           // 0x0020(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     SwitchOffset;                                             // 0x002C(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.AttributeModifierInfo
// 0x0030
struct FAttributeModifierInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	class UGameplayEffect*                             InstantGEs;                                               // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.AttributeInfo
// 0x0010
struct FAttributeInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGameplayEffectModifierDescription
// 0x0040
struct FFortGameplayEffectModifierDescription
{
	struct FGameplayAttribute                          ModAttribute;                                             // 0x0000(0x0020)
	struct FText                                       ModDescription;                                           // 0x0020(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bIsBuff : 1;                                              // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortAttributeDisplay>                 MagnitudeFormat;                                          // 0x0039(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x003A(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortGameplayEffectModifierDescription.DisplayType
	unsigned char                                      UnknownData01[0x1];                                       // 0x003B(0x0001) MISSED OFFSET
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

// ScriptStruct FortniteGame.FortFeedbackEvent
// 0x0030
struct FFortFeedbackEvent
{
	class AFortPawn*                                   Instigator;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AFortPawn*                                   Recipient;                                                // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortFeedbackHandle                         Handle;                                                   // 0x0010(0x0018) (CPF_Edit)
	float                                              Delay;                                                    // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bOverriddenQueuing : 1;                                   // 0x002C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortLinearSpline
// 0x0001
struct FFortLinearSpline
{

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
	unsigned char                                      bAllowChainStun : 1;                                      // 0x0074(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0075(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortPawnStats.ControlRecoveryBehavior
};

// ScriptStruct FortniteGame.AssetAttachment
// 0x0030
struct FAssetAttachment
{
	struct FName                                       SocketName;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USkeletalMesh*                               SkeletalMeshAsset;                                        // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 StaticMeshAsset;                                          // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSkipOnDedicatedServers : 1;                              // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	class USkeletalMeshComponent*                      SkelMeshComp;                                             // 0x0020(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshComp;                                           // 0x0028(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.DamagerInfoAnalytics
// 0x0018
struct FDamagerInfoAnalytics
{
	struct FString                                     DamageCauser;                                             // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                DamageAmount;                                             // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
};

// ScriptStruct FortniteGame.FortSpawnPointsPercentageCurve
// 0x0018 (0x0020 - 0x0008)
struct FFortSpawnPointsPercentageCurve : public FTableRowBase
{
	class UCurveTable*                                 SpawnPointsPercentageCurveTable;                          // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SpawnPointsPercentageCurveTableRow;                       // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxRampTime;                                              // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortVariantSpawnPoints
// 0x0008 (0x0010 - 0x0008)
struct FFortVariantSpawnPoints : public FTableRowBase
{
	int                                                BudgetPoints;                                             // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
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
	unsigned char                                      bWaitingForQueryResponse : 1;                             // 0x0054(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSuppressGoalUpdates : 1;                                 // 0x0055(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bReportEnemyGoalSelection : 1;                            // 0x0056(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x29];                                      // 0x0057(0x0029) MISSED OFFSET
};

// ScriptStruct FortniteGame.AIDiscouragedGoalTimer
// 0x0028
struct FAIDiscouragedGoalTimer
{
	struct FFortAIGoalInfo                             DiscouragedGoalInfo;                                      // 0x0000(0x0018)
	double                                             ExpirationTime;                                           // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           NumberOfTimesMarkedForDiscouragement;                     // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bIsOwned : 1;                                             // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bArePrereqsMet : 1;                                       // 0x0001(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bArePrereqQuestsCompleted : 1;                            // 0x0002(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAreCostsPayable : 1;                                     // 0x0003(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PurchasePercent;                                          // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.WorkerSetBonusState
// 0x0010
struct FWorkerSetBonusState
{
	struct FGameplayTag                                SetBonusTag;                                              // 0x0000(0x0008) (CPF_BlueprintVisible)
	int                                                CurrentMatchCount;                                        // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RequiredMatchCountToActivate;                             // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
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

// ScriptStruct FortniteGame.FortCollectionBookPageCategoryTableRow
// 0x0020 (0x0028 - 0x0008)
struct FFortCollectionBookPageCategoryTableRow : public FTableRowBase
{
	struct FText                                       Name;                                                     // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                SortPriority;                                             // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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

// ScriptStruct FortniteGame.FortDailyLoginRewardStat_ScheduleClaimed
// 0x0008
struct FFortDailyLoginRewardStat_ScheduleClaimed
{
	int                                                RewardsClaimed;                                           // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ClaimedToday : 1;                                         // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bAllowBonusLootDrops : 1;                                 // 0x0098(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FString                                     Annotation;                                               // 0x00A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
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

// ScriptStruct FortniteGame.ThreatGridIndex
// 0x0008
struct FThreatGridIndex
{
	int                                                X;                                                        // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                Y;                                                        // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.TimeOfDayEditorViewSettings
// 0x0001
struct FTimeOfDayEditorViewSettings
{

};

// ScriptStruct FortniteGame.FortQuestManagerAttributes
// 0x0010
struct FFortQuestManagerAttributes
{
	struct FDateTime                                   DailyLoginInterval;                                       // 0x0000(0x0008)
	int                                                DailyQuestRerolls;                                        // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortQuestEarnedBadgeData
// 0x0018
struct FFortQuestEarnedBadgeData
{
	struct FString                                     TemplateId;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                Count;                                                    // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortFoundQuestMissions
// 0x0048
struct FFortFoundQuestMissions
{
	struct FString                                     TheaterId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bIsValidForAllPlayableMissions : 1;                       // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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

// ScriptStruct FortniteGame.TieredModifierSetData
// 0x0010
struct FTieredModifierSetData
{
	int                                                WaveNumber;                                               // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                ModifierDuration;                                         // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FName                                       ModifierLootTierGroup;                                    // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.TieredModifierSet
// 0x0010 (0x0018 - 0x0008)
struct FTieredModifierSet : public FTableRowBase
{
	TArray<struct FTieredModifierSetData>              ModifierData;                                             // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
};

// ScriptStruct FortniteGame.TieredWaveSetData
// 0x0120
struct FTieredWaveSetData
{
	int                                                EDOIdx;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              BreatherBetweenWaves;                                     // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0008(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.TieredWaveSetData.WaveRules
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              WaveLengthMod;                                            // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              NumKillsMod;                                              // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              KillPointsMod;                                            // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              DifficultyAddMod;                                         // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TAssetPtr<class UClass>                            OverrideSpawnPointsMultiplier;                            // 0x0020(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TAssetPtr<class UClass>                            OverrideSpawnProgression;                                 // 0x0040(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TAssetPtr<class UClass>                            OverrideUtilitiesAdjustment;                              // 0x0060(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TAssetPtr<class UClass>                            OverrideUtilitiesFree;                                    // 0x0080(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TAssetPtr<class UClass>                            OverrideUtilitiesLocked;                                  // 0x00A0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TAssetPtr<class UClass>                            OverrideDistance;                                         // 0x00C0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TAssetPtr<class UClass>                            OverrideDirectionNumber;                                  // 0x00E0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TAssetPtr<class UClass>                            OverrideModifierTags;                                     // 0x0100(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FortniteGame.TieredWaveSet
// 0x0010 (0x0018 - 0x0008)
struct FTieredWaveSet : public FTableRowBase
{
	TArray<struct FTieredWaveSetData>                  WaveData;                                                 // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
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

// ScriptStruct FortniteGame.FortCriteriaRequirementData
// 0x0018 (0x0020 - 0x0008)
struct FFortCriteriaRequirementData : public FTableRowBase
{
	struct FGameplayTag                                RequiredTag;                                              // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	unsigned char                                      bGlobalMod : 1;                                           // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              ModValue;                                                 // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bRequireRarity : 1;                                       // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0019(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortCriteriaRequirementData.RequiredRarity
};

// ScriptStruct FortniteGame.FortAnalyticsEventAttribute
// 0x0020
struct FFortAnalyticsEventAttribute
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
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
	unsigned char                                      bNeedsPaidAccessForGlobalChat : 1;                        // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bNeedsPaidAccessForFounderChat : 1;                       // 0x0021(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsGlobalChatDisabled : 1;                                // 0x0022(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsFounderChatDisabled : 1;                               // 0x0023(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsSubGameGlobalChatDisabled : 1;                         // 0x0024(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortSocialItemBasicData
// 0x0004
struct FFortSocialItemBasicData
{
	int                                                Rating;                                                   // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      UnknownData00[0x1];                                       // 0x0020(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.AttributeClamp.ClampType
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              ClampValue;                                               // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.PlayerClampInfo
// 0x0010 (0x0018 - 0x0008)
struct FPlayerClampInfo : public FTableRowBase
{
	TArray<struct FAttributeClamp>                     AttributeClamps;                                          // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
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

// ScriptStruct FortniteGame.FortCollectionBookStat
// 0x0018
struct FFortCollectionBookStat
{
	TArray<struct FString>                             Pages;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                MaxBookXpLevelAchieved;                                   // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.FortUserCloudRequestPayload
// 0x0048
struct FFortUserCloudRequestPayload
{
	struct FFortUserCloudRequestHandle                 RequestHandle;                                            // 0x0000(0x0008)
	struct FUniqueNetIdRepl                            UserNetID;                                                // 0x0008(0x0018)
	struct FString                                     Filename;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0030(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortUserCloudRequestPayload.RequestType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
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

// ScriptStruct FortniteGame.AvailableTierLayout
// 0x0020
struct FAvailableTierLayout
{
	class UFortTieredCollectionLayout*                 Layout;                                                   // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FFortTierCollectionLayoutOutput>     AvailableTiers;                                           // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      bLocked : 1;                                              // 0x0018(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
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
};

// ScriptStruct FortniteGame.FortMissionAlertData
// 0x0098 (0x00A0 - 0x0008)
struct FFortMissionAlertData : public FTableRowBase
{
	struct FName                                       CategoryRowName;                                          // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SpreadRowName;                                            // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     RequiredEventFlag;                                        // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      bOnlyUsedForSpreading : 1;                                // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                MinimumTileDifficulty;                                    // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaximumTileDifficulty;                                    // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<TAssetPtr<class UClass>>                    AllowedZoneThemes;                                        // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TAssetPtr<class UClass>                            MissionGenerator;                                         // 0x0048(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TArray<struct FFortItemQuantityPair>               ItemRewards;                                              // 0x0068(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     LootTierGroup;                                            // 0x0078(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	int                                                LootTier;                                                 // 0x0088(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FString                                     ModifierTierGroup;                                        // 0x0090(0x0010) (CPF_Edit, CPF_ZeroConstructor)
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
	unsigned char                                      UnknownData00[0x1];                                       // 0x0008(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortMissionAlertCategoryData.Category
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                Priority;                                                 // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Quota;                                                    // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       CategoryTagsContainer;                                    // 0x0018(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct FortniteGame.FriendCodeIssuedNotification
// 0x0020
struct FFriendCodeIssuedNotification
{
	struct FString                                     Code;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     CodeType;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortMissionAlertRecord
// 0x0080
struct FFortMissionAlertRecord
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: MapProperty FortniteGame.FortMissionAlertRecord.LastClaimTimesMap
	TArray<int>                                        OldestClaimIndexForCategory;                              // 0x0050(0x0010) (CPF_ZeroConstructor)
	struct FMcpLootResult                              PendingMissionAlertRewards;                               // 0x0060(0x0020)
};

// ScriptStruct FortniteGame.FortMissionAlertClaimData
// 0x0020
struct FFortMissionAlertClaimData
{
	TArray<struct FString>                             MissionAlertGUIDs;                                        // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FDateTime>                           LastClaimedTimes;                                         // 0x0010(0x0010) (CPF_ZeroConstructor)
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

// ScriptStruct FortniteGame.AccountIdAndScore
// 0x0018
struct FAccountIdAndScore
{
	struct FString                                     AccountId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                TotalScore;                                               // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCriticalMatchBonus : 1;                                  // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bExpeditionSucceeded : 1;                                 // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bWasCritical : 1;                                         // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
};

// ScriptStruct FortniteGame.CraftingQueueInfo
// 0x0008
struct FCraftingQueueInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
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

// ScriptStruct FortniteGame.TeamMapExplorationEvent
// 0x0002
struct FTeamMapExplorationEvent
{
	TEnumAsByte<EFortTeam>                             TeamId;                                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int8_t                                             ExplorationThreshold;                                     // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FortniteGame.SchematicRequirement
// 0x0010
struct FSchematicRequirement
{
	class UFortWorldItemDefinition*                    ItemDefinition;                                           // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsConsumed : 1;                                          // 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      UnknownData00[0x1];                                       // 0x0010(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortBadgeScoringData.ScoreCategory
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                ScoreThreshold;                                           // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
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
	float                                              HeatX1;                                                   // 0x0140(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeatY1;                                                   // 0x0144(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeatX2;                                                   // 0x0148(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeatY2;                                                   // 0x014C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeatX3;                                                   // 0x0150(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeatY3;                                                   // 0x0154(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeatXScale;                                               // 0x0158(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeatYScale;                                               // 0x015C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CoolX1;                                                   // 0x0160(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CoolY1;                                                   // 0x0164(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CoolX2;                                                   // 0x0168(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CoolY2;                                                   // 0x016C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CoolX3;                                                   // 0x0170(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CoolY3;                                                   // 0x0174(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CoolXScale;                                               // 0x0178(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CoolYScale;                                               // 0x017C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BulletsPerCartridge;                                      // 0x0180(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FiringRate;                                               // 0x0184(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ROFScale;                                                 // 0x0188(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BurstFiringRate;                                          // 0x018C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilVert;                                               // 0x0190(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilVertScale;                                          // 0x0194(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilVertScaleGamepad;                                   // 0x0198(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VertRecoilDownChance;                                     // 0x019C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilHoriz;                                              // 0x01A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilHorizScale;                                         // 0x01A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilHorizScaleGamepad;                                  // 0x01A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilInterpSpeed;                                        // 0x01AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilRecoveryInterpSpeed;                                // 0x01B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilRecoveryDelay;                                      // 0x01B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilRecoveryFraction;                                   // 0x01B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilDownsightsMultiplier;                               // 0x01BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxSpareAmmo;                                             // 0x01C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BulletsPerTracer;                                         // 0x01C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AIDelayBeforeFiringMin;                                   // 0x01C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AIDelayBeforeFiringMax;                                   // 0x01CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AIFireDurationMin;                                        // 0x01D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AIFireDurationMax;                                        // 0x01D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AIMinSpreadDuration;                                      // 0x01D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AIMaxSpreadDuration;                                      // 0x01DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AIDurationSpreadMultiplier;                               // 0x01E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AIAdditionalSpreadForTargetMovingLaterally;               // 0x01E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EQSDensity;                                               // 0x01E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinApproachRange;                                         // 0x01EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinActualRange;                                           // 0x01F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinPreferredRange;                                        // 0x01F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinPreferredRangeEQS;                                     // 0x01F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxPreferredRangeEQS;                                     // 0x01FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxPreferredRange;                                        // 0x0200(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxActualRange;                                           // 0x0204(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxApproachRange;                                         // 0x0208(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SweepRadius;                                              // 0x020C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoReloadDelayOverride;                                  // 0x0210(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      UnknownData00[0x1];                                       // 0x0008(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortQuestAchievementTableRow.QuestState
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                XboxAchievementID;                                        // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PS4TrophyID;                                              // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
};

// ScriptStruct FortniteGame.FortTrackedPlayerBehavior
// 0x0010
struct FFortTrackedPlayerBehavior
{
	class AFortPlayerControllerAthena*                 PC;                                                       // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
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
	unsigned char                                      bHasAllTags : 1;                                          // 0x0060(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      bIsMajorReward : 1;                                       // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bAutoOpenRewardCardPacks : 1;                             // 0x0041(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
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
	unsigned char                                      bAllowBonusDrops : 1;                                     // 0x0070(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	struct FString                                     Annotation;                                               // 0x0078(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FortniteGame.FortQuestObjectiveStatTableRow
// 0x00D0 (0x00D8 - 0x0008)
struct FFortQuestObjectiveStatTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0008(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortQuestObjectiveStatTableRow.Type
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     TargetTags;                                               // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     SourceTags;                                               // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     ContextTags;                                              // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     Condition;                                                // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     TemplateId;                                               // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FGameplayTagContainer                       TargetTagContainer;                                       // 0x0060(0x0020) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient)
	struct FGameplayTagContainer                       SourceTagContainer;                                       // 0x0080(0x0020) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient)
	struct FGameplayTagContainer                       ContextTagContainer;                                      // 0x00A0(0x0020) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient)
	unsigned char                                      bIsCached : 1;                                            // 0x00C0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x17];                                      // 0x00C1(0x0017) MISSED OFFSET
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
};

// ScriptStruct FortniteGame.SpeedWarpingFootDefinition
// 0x0028
struct FSpeedWarpingFootDefinition
{
	struct FBoneReference                              IKFootBone;                                               // 0x0000(0x0010) (CPF_Edit)
	struct FBoneReference                              FKFootBone;                                               // 0x0010(0x0010) (CPF_Edit)
	int                                                NumBonesInLimb;                                           // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	unsigned char                                      UnknownData01[0x1];                                       // 0x00B8(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortAnimNode_SpeedWarping.SpeedWarpingAxisMode
	unsigned char                                      UnknownData02[0x1];                                       // 0x00B9(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortAnimNode_SpeedWarping.FloorNormalAxisMode
	unsigned char                                      UnknownData03[0x1];                                       // 0x00BA(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortAnimNode_SpeedWarping.GravityDirAxisMode
	unsigned char                                      UnknownData04[0x1];                                       // 0x00BB(0x0001) MISSED OFFSET
	float                                              SpeedScaling;                                             // 0x00BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ManualSpeedWarpingDir;                                    // 0x00C0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     ManualFloorNormalInput;                                   // 0x00CC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     ManualGravityDirInput;                                    // 0x00D8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              PelvisPostAdjustmentAlpha;                                // 0x00E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PelvisAdjustmentMaxIter;                                  // 0x00E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVectorRK4SpringInterpolator                PelvisAdjustmentInterp;                                   // 0x00EC(0x0008) (CPF_Edit)
	unsigned char                                      UnknownData05[0x34];                                      // 0x00F4(0x0034) MISSED OFFSET
	unsigned char                                      bAdjustThighBonesRotation : 1;                            // 0x0128(0x0001) (CPF_Edit)
	unsigned char                                      bClampIKUsingFKLeg : 1;                                   // 0x0128(0x0001) (CPF_Edit)
	unsigned char                                      bOrientSpeedWarpingAxisBasedOnFloorNormal : 1;            // 0x0128(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0129(0x0003) MISSED OFFSET
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
