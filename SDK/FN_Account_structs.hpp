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

// Enum Account.ECreateAccountResult
enum class ECreateAccountResult : uint8_t
{
	NotStarted                     = 0,
	Pending                        = 1,
	Success                        = 2,
	Console_LoginFailed            = 3,
	Console_DuplicateAuthAssociation = 4,
	DuplicateAccount               = 5,
	GenericError                   = 6,
	ECreateAccountResult_MAX       = 7
};


// Enum Account.ELoginResult
enum class ELoginResult : uint8_t
{
	NotStarted                     = 0,
	Pending                        = 1,
	Success                        = 2,
	Console_LoginFailed            = 3,
	Console_AuthFailed             = 4,
	Console_MissingAuthAssociation = 5,
	Console_DuplicateAuthAssociation = 6,
	Console_AddedAuthAssociation   = 7,
	Console_AuthAssociationFailure = 8,
	Console_NotEntitled            = 9,
	Console_EntitlementCheckFailed = 10,
	Console_PrivilegeCheck         = 11,
	Console_PatchOrUpdateRequired  = 12,
	AuthFailed                     = 13,
	PlatformNotAllowed             = 14,
	NotEntitled                    = 15,
	Banned                         = 16,
	EULACheckFailed                = 17,
	ServiceUnavailable             = 18,
	GenericError                   = 19,
	RejoinCheckFailure             = 20,
	ConnectionFailed               = 21,
	FailedToCreateParty            = 22,
	ProfileQueryFailed             = 23,
	ClientSettingsDownloadFailed   = 24,
	ELoginResult_MAX               = 25
};


// Enum Account.EConsoleAuthLinkState
enum class EConsoleAuthLinkState : uint8_t
{
	NotOnConsole                   = 0,
	ConsoleNotLoggedIn             = 1,
	EpicNotLoggedIn                = 2,
	ThisEpicAccountLinked          = 3,
	OtherEpicAccountLinked         = 4,
	NoEpicAccountLinked            = 5,
	EConsoleAuthLinkState_MAX      = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Account.WebEnvUrl
// 0x0030
struct FWebEnvUrl
{
	struct FString                                     URL;                                                      // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     RedirectUrl;                                              // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FString                                     Environment;                                              // 0x0020(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Account.GiftMessage
// 0x0030
struct FGiftMessage
{
	struct FString                                     GiftCode;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     SenderName;                                               // 0x0010(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct Account.ExchangeAccessParams
// 0x0040
struct FExchangeAccessParams
{
	struct FString                                     EntitlementId;                                            // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     ReceiptId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FString                                     VendorReceipt;                                            // 0x0020(0x0010) (CPF_ZeroConstructor)
	struct FString                                     AppStore;                                                 // 0x0030(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Account.OnlineAccountTexts_FailedLoginConsole
// 0x0138
struct FOnlineAccountTexts_FailedLoginConsole
{
	struct FText                                       AgeRestriction;                                           // 0x0000(0x0018) (CPF_Edit)
	struct FText                                       Generic;                                                  // 0x0018(0x0018) (CPF_Edit)
	struct FText                                       MissingAuthAssociation;                                   // 0x0030(0x0018) (CPF_Edit)
	struct FText                                       NeedPremiumAccount;                                       // 0x0048(0x0018) (CPF_Edit)
	struct FText                                       OnlinePlayRestriction;                                    // 0x0060(0x0018) (CPF_Edit)
	struct FText                                       PatchAvailable;                                           // 0x0078(0x0018) (CPF_Edit)
	struct FText                                       PleaseSignIn;                                             // 0x0090(0x0018) (CPF_Edit)
	struct FText                                       SystemUpdateAvailable;                                    // 0x00A8(0x0018) (CPF_Edit)
	struct FText                                       UI;                                                       // 0x00C0(0x0018) (CPF_Edit)
	struct FText                                       UnableToComplete;                                         // 0x00D8(0x0018) (CPF_Edit)
	struct FText                                       UnableToSignIn;                                           // 0x00F0(0x0018) (CPF_Edit)
	struct FText                                       UnableToStartPrivCheck;                                   // 0x0108(0x0018) (CPF_Edit)
	struct FText                                       UnexpectedError;                                          // 0x0120(0x0018) (CPF_Edit)
};

// ScriptStruct Account.OnlineAccountTexts
// 0x07B0
struct FOnlineAccountTexts
{
	struct FText                                       AllGiftCodesUsed;                                         // 0x0000(0x0018) (CPF_Edit)
	struct FText                                       AssociateConsoleAuth;                                     // 0x0018(0x0018) (CPF_Edit)
	struct FText                                       AutoLoginFailed;                                          // 0x0030(0x0018) (CPF_Edit)
	struct FText                                       BannedFromGame;                                           // 0x0048(0x0018) (CPF_Edit)
	struct FText                                       CheckEntitledToPlay;                                      // 0x0060(0x0018) (CPF_Edit)
	struct FText                                       CheckingRejoin;                                           // 0x0078(0x0018) (CPF_Edit)
	struct FText                                       CheckServiceAvailability;                                 // 0x0090(0x0018) (CPF_Edit)
	struct FText                                       ConsolePrivileges;                                        // 0x00A8(0x0018) (CPF_Edit)
	struct FText                                       CreateAccountCompleted;                                   // 0x00C0(0x0018) (CPF_Edit)
	struct FText                                       CreateAccountFailure;                                     // 0x00D8(0x0018) (CPF_Edit)
	struct FText                                       CreateHeadless;                                           // 0x00F0(0x0018) (CPF_Edit)
	struct FText                                       DoQosPingTests;                                           // 0x0108(0x0018) (CPF_Edit)
	struct FText                                       DowntimeMinutesWarningText;                               // 0x0120(0x0018) (CPF_Edit)
	struct FText                                       DowntimeSecondsWarningText;                               // 0x0138(0x0018) (CPF_Edit)
	struct FText                                       DuplicateAuthAssociaton;                                  // 0x0150(0x0018) (CPF_Edit)
	struct FText                                       EulaCheck;                                                // 0x0168(0x0018) (CPF_Edit)
	struct FText                                       ExchangeConsoleGiftsForAccess;                            // 0x0180(0x0018) (CPF_Edit)
	struct FText                                       ExchangeConsolePurchaseForAccess;                         // 0x0198(0x0018) (CPF_Edit)
	struct FText                                       FailedAccountCreate;                                      // 0x01B0(0x0018) (CPF_Edit)
	struct FText                                       FailedEulaCheck_EulaAcceptanceFailed;                     // 0x01C8(0x0018) (CPF_Edit)
	struct FText                                       FailedEulaCheck_MustAcceptEula;                           // 0x01E0(0x0018) (CPF_Edit)
	struct FText                                       FailedLoginCredentialsMsg;                                // 0x01F8(0x0018) (CPF_Edit)
	struct FText                                       FailedLoginLockoutMsg;                                    // 0x0210(0x0018) (CPF_Edit)
	struct FText                                       FailedLoginMsg;                                           // 0x0228(0x0018) (CPF_Edit)
	struct FText                                       FailedLoginTencent_UnableToSignIn;                        // 0x0240(0x0018) (CPF_Edit)
	struct FText                                       FailedStartLogin;                                         // 0x0258(0x0018) (CPF_Edit)
	struct FText                                       FounderChatExitedText;                                    // 0x0270(0x0018) (CPF_Edit)
	struct FText                                       FounderChatJoinedText;                                    // 0x0288(0x0018) (CPF_Edit)
	struct FText                                       GameDisplayName;                                          // 0x02A0(0x0018) (CPF_Edit)
	struct FText                                       GeneralLoginFailure;                                      // 0x02B8(0x0018) (CPF_Edit)
	struct FText                                       GlobalChatExitedText;                                     // 0x02D0(0x0018) (CPF_Edit)
	struct FText                                       GlobalChatJoinedText;                                     // 0x02E8(0x0018) (CPF_Edit)
	struct FText                                       HeadlessAccountFailed;                                    // 0x0300(0x0018) (CPF_Edit)
	struct FText                                       InMatchShutdownTimeWarningText;                           // 0x0318(0x0018) (CPF_Edit)
	struct FText                                       InvalidUser;                                              // 0x0330(0x0018) (CPF_Edit)
	struct FText                                       LoggedOutofMCP;                                           // 0x0348(0x0018) (CPF_Edit)
	struct FText                                       DisconnectedFromMCP;                                      // 0x0360(0x0018) (CPF_Edit)
	struct FText                                       LoggedOutReturnedToTitle;                                 // 0x0378(0x0018) (CPF_Edit)
	struct FText                                       LoggedOutSwitchedProfile;                                 // 0x0390(0x0018) (CPF_Edit)
	struct FText                                       LoggingIn;                                                // 0x03A8(0x0018) (CPF_Edit)
	struct FText                                       LoggingInConsoleAuth;                                     // 0x03C0(0x0018) (CPF_Edit)
	struct FText                                       LoggingOut;                                               // 0x03D8(0x0018) (CPF_Edit)
	struct FText                                       LoginConsole;                                             // 0x03F0(0x0018) (CPF_Edit)
	struct FText                                       LoginFailure;                                             // 0x0408(0x0018) (CPF_Edit)
	struct FText                                       Logout_Unlink;                                            // 0x0420(0x0018) (CPF_Edit)
	struct FText                                       LogoutCompleted;                                          // 0x0438(0x0018) (CPF_Edit)
	struct FText                                       LostConnection;                                           // 0x0450(0x0018) (CPF_Edit)
	struct FText                                       MCPTimeout;                                               // 0x0468(0x0018) (CPF_Edit)
	struct FText                                       NoPlayEntitlement;                                        // 0x0480(0x0018) (CPF_Edit)
	struct FText                                       NoServerAccess;                                           // 0x0498(0x0018) (CPF_Edit)
	struct FText                                       PlayAccessRevoked;                                        // 0x04B0(0x0018) (CPF_Edit)
	struct FText                                       PremiumAccountName_Default;                               // 0x04C8(0x0018) (CPF_Edit)
	struct FText                                       PremiumAccountName_PS4;                                   // 0x04E0(0x0018) (CPF_Edit)
	struct FText                                       PremiumAccountName_Switch;                                // 0x04F8(0x0018) (CPF_Edit)
	struct FText                                       PremiumAccountName_XboxOne;                               // 0x0510(0x0018) (CPF_Edit)
	struct FText                                       RedeemOfflinePurchases;                                   // 0x0528(0x0018) (CPF_Edit)
	struct FText                                       ServiceDowntime;                                          // 0x0540(0x0018) (CPF_Edit)
	struct FText                                       SignInCompleting;                                         // 0x0558(0x0018) (CPF_Edit)
	struct FText                                       SignIntoConsoleServices;                                  // 0x0570(0x0018) (CPF_Edit)
	struct FText                                       TokenExpired;                                             // 0x0588(0x0018) (CPF_Edit)
	struct FText                                       UnableToConnect;                                          // 0x05A0(0x0018) (CPF_Edit)
	struct FText                                       UnableToJoinWaitingRoomLoginQueue;                        // 0x05B8(0x0018) (CPF_Edit)
	struct FText                                       UnexpectedConsoleAuthFailure;                             // 0x05D0(0x0018) (CPF_Edit)
	struct FText                                       UnlinkConsoleFailed;                                      // 0x05E8(0x0018) (CPF_Edit)
	struct FText                                       UserLoginFailed;                                          // 0x0600(0x0018) (CPF_Edit)
	struct FText                                       WaitingRoom;                                              // 0x0618(0x0018) (CPF_Edit)
	struct FText                                       WaitingRoomError;                                         // 0x0630(0x0018) (CPF_Edit)
	struct FText                                       WaitingRoomFailure;                                       // 0x0648(0x0018) (CPF_Edit)
	struct FText                                       WaitingRoomWaiting;                                       // 0x0660(0x0018) (CPF_Edit)
	struct FOnlineAccountTexts_FailedLoginConsole      FailedLoginConsole;                                       // 0x0678(0x0138) (CPF_Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
