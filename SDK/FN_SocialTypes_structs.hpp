#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SocialTypes.ChatChromeColorScheme
// 0x0050
struct FChatChromeColorScheme
{
	struct FLinearColor                                ChatEntryBackgroundColor;                                 // 0x0000(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                NoneActiveTabColor;                                       // 0x0010(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                TabFontColor;                                             // 0x0020(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                TabFontColorInverted;                                     // 0x0030(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                ChatBackgroundColor;                                      // 0x0040(0x0010) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct SocialTypes.ChatChromeMargins
// 0x0064
struct FChatChromeMargins
{
	float                                              TabWidth;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMargin                                     TabPadding;                                               // 0x0004(0x0010) (CPF_Edit)
	struct FMargin                                     ChatWindowPadding;                                        // 0x0014(0x0010) (CPF_Edit)
	struct FMargin                                     ChatWindowToEntryMargin;                                  // 0x0024(0x0010) (CPF_Edit)
	struct FMargin                                     ChatChannelPadding;                                       // 0x0034(0x0010) (CPF_Edit)
	struct FMargin                                     UserListButtonPadding;                                    // 0x0044(0x0010) (CPF_Edit)
	struct FMargin                                     UserListIconPadding;                                      // 0x0054(0x0010) (CPF_Edit)
};

// ScriptStruct SocialTypes.ChatChromeStyle
// 0x0850
struct FChatChromeStyle
{
	struct FSlateBrush                                 UserListBrush;                                            // 0x0000(0x0090) (CPF_Edit)
	struct FSlateBrush                                 ChatBackgroundBrush;                                      // 0x0090(0x0090) (CPF_Edit)
	struct FSlateBrush                                 ChatEntryBackgroundBrush;                                 // 0x0120(0x0090) (CPF_Edit)
	struct FSlateBrush                                 ChannelBackgroundBrush;                                   // 0x01B0(0x0090) (CPF_Edit)
	struct FSlateBrush                                 TabBackgroundBrush;                                       // 0x0240(0x0090) (CPF_Edit)
	struct FButtonStyle                                TabSelectorButtonStyle;                                   // 0x02D0(0x02A8) (CPF_Edit)
	struct FMargin                                     TabOptionPadding;                                         // 0x0578(0x0010) (CPF_Edit)
	struct FMargin                                     TabContentPadding;                                        // 0x0588(0x0010) (CPF_Edit)
	struct FMargin                                     TabClosePadding;                                          // 0x0598(0x0010) (CPF_Edit)
	struct FButtonStyle                                UserListButtonStyle;                                      // 0x05A8(0x02A8) (CPF_Edit)
};

// ScriptStruct SocialTypes.ChatColorScheme
// 0x0120
struct FChatColorScheme
{
	struct FLinearColor                                TimeStampColor;                                           // 0x0000(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                DefaultChatColor;                                         // 0x0010(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                WhisperChatColor;                                         // 0x0020(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                GlobalChatColor;                                          // 0x0030(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                FounderChatColor;                                         // 0x0040(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                GameChatColor;                                            // 0x0050(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                TeamChatColor;                                            // 0x0060(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                PartyChatColor;                                           // 0x0070(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                AdminChatColor;                                           // 0x0080(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                GameAdminChatColor;                                       // 0x0090(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                WhisperHyperlinkChatColor;                                // 0x00A0(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                GlobalHyperlinkChatColor;                                 // 0x00B0(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                FounderHyperlinkChatColor;                                // 0x00C0(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                GameHyperlinkChatColor;                                   // 0x00D0(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                TeamHyperlinkChatColor;                                   // 0x00E0(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                PartyHyperlinkChatColor;                                  // 0x00F0(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                EnemyColor;                                               // 0x0100(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                FriendlyColor;                                            // 0x0110(0x0010) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct SocialTypes.ChatMarkupStyle
// 0x0670
struct FChatMarkupStyle
{
	struct FButtonStyle                                MarkupButtonStyle;                                        // 0x0000(0x02A8) (CPF_Edit)
	struct FTextBlockStyle                             MarkupTextStyle;                                          // 0x02A8(0x0208) (CPF_Edit)
	struct FSlateBrush                                 MarkupBackground;                                         // 0x04B0(0x0090) (CPF_Edit)
	struct FSlateColor                                 ButtonColor;                                              // 0x0540(0x0028) (CPF_Edit)
	struct FSlateColor                                 ButtonHoverColor;                                         // 0x0568(0x0028) (CPF_Edit)
	struct FSlateColor                                 TipColor;                                                 // 0x0590(0x0028) (CPF_Edit)
	struct FSlateBrush                                 SeperatorBrush;                                           // 0x05B8(0x0090) (CPF_Edit)
	float                                              SeperatorThickness;                                       // 0x0648(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMargin                                     MarkupPadding;                                            // 0x064C(0x0010) (CPF_Edit)
	struct FMargin                                     ButtonPadding;                                            // 0x065C(0x0010) (CPF_Edit)
};

// ScriptStruct SocialTypes.ChatStyle
// 0x1490
struct FChatStyle
{
	struct FEditableTextBoxStyle                       ChatEntryTextStyle;                                       // 0x0000(0x0870) (CPF_Edit)
	struct FEditableTextBoxStyle                       ChatDisplayTextStyle;                                     // 0x0870(0x0870) (CPF_Edit)
	struct FScrollBoxStyle                             ScrollBorderStyle;                                        // 0x10E0(0x0248) (CPF_Edit)
	struct FSlateBrush                                 MessageNotificationBrush;                                 // 0x1328(0x0090) (CPF_Edit)
	struct FMargin                                     ChatEntryPadding;                                         // 0x13B8(0x0010) (CPF_Edit)
	float                                              ChatEntryHeight;                                          // 0x13C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x13CC(0x0004) MISSED OFFSET
	struct FSlateBrush                                 ChatMenuBackgroundBrush;                                  // 0x13D0(0x0090) (CPF_Edit)
	struct FMargin                                     FriendActionPadding;                                      // 0x1460(0x0010) (CPF_Edit)
	struct FMargin                                     FriendActionHeaderPadding;                                // 0x1470(0x0010) (CPF_Edit)
	struct FMargin                                     FriendActionStatusMargin;                                 // 0x1480(0x0010) (CPF_Edit)
};

// ScriptStruct SocialTypes.SocialFontStyle
// 0x02A0
struct FSocialFontStyle
{
	struct FSlateFontInfo                              FontSmall;                                                // 0x0000(0x0068) (CPF_Edit)
	struct FSlateFontInfo                              FontSmallBold;                                            // 0x0068(0x0068) (CPF_Edit)
	struct FSlateFontInfo                              FontNormal;                                               // 0x00D0(0x0068) (CPF_Edit)
	struct FSlateFontInfo                              FontNormalBold;                                           // 0x0138(0x0068) (CPF_Edit)
	struct FSlateFontInfo                              FontLarge;                                                // 0x01A0(0x0068) (CPF_Edit)
	struct FSlateFontInfo                              FontLargeBold;                                            // 0x0208(0x0068) (CPF_Edit)
	struct FLinearColor                                DefaultFontColor;                                         // 0x0270(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                InvertedFontColor;                                        // 0x0280(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                DefaultDullFontColor;                                     // 0x0290(0x0010) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct SocialTypes.SocialListMargins
// 0x0200
struct FSocialListMargins
{
	struct FVector2D                                   UserPresenceImageSize;                                    // 0x0000(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	struct FMargin                                     HeaderButtonMargin;                                       // 0x0008(0x0010) (CPF_Edit)
	struct FMargin                                     FriendsListMargin;                                        // 0x0018(0x0010) (CPF_Edit)
	struct FMargin                                     FriendsListNoFriendsMargin;                               // 0x0028(0x0010) (CPF_Edit)
	struct FMargin                                     FriendsListHeaderMargin;                                  // 0x0038(0x0010) (CPF_Edit)
	struct FMargin                                     FriendsListHeaderCountMargin;                             // 0x0048(0x0010) (CPF_Edit)
	struct FMargin                                     HeaderButtonContentMargin;                                // 0x0058(0x0010) (CPF_Edit)
	struct FMargin                                     FriendItemMargin;                                         // 0x0068(0x0010) (CPF_Edit)
	struct FMargin                                     FriendItemStatusMargin;                                   // 0x0078(0x0010) (CPF_Edit)
	struct FMargin                                     FriendTipStatusMargin;                                    // 0x0088(0x0010) (CPF_Edit)
	struct FMargin                                     FriendItemPresenceMargin;                                 // 0x0098(0x0010) (CPF_Edit)
	struct FMargin                                     FriendItemPlatformMargin;                                 // 0x00A8(0x0010) (CPF_Edit)
	struct FMargin                                     FriendItemTextScrollerMargin;                             // 0x00B8(0x0010) (CPF_Edit)
	struct FMargin                                     ConfirmationBorderMargin;                                 // 0x00C8(0x0010) (CPF_Edit)
	struct FMargin                                     ConfirmationButtonMargin;                                 // 0x00D8(0x0010) (CPF_Edit)
	struct FMargin                                     ConfirmationButtonContentMargin;                          // 0x00E8(0x0010) (CPF_Edit)
	struct FMargin                                     NoneFriendContentMargin;                                  // 0x00F8(0x0010) (CPF_Edit)
	float                                              NoneFriendContentHeight;                                  // 0x0108(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NoneFriendIconWidth;                                      // 0x010C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMargin                                     SubMenuBackIconMargin;                                    // 0x0110(0x0010) (CPF_Edit)
	struct FMargin                                     SubMenuPageIconMargin;                                    // 0x0120(0x0010) (CPF_Edit)
	struct FMargin                                     RadioSettingTitleMargin;                                  // 0x0130(0x0010) (CPF_Edit)
	struct FMargin                                     SubMenuSearchIconMargin;                                  // 0x0140(0x0010) (CPF_Edit)
	struct FMargin                                     SubMenuSearchTextMargin;                                  // 0x0150(0x0010) (CPF_Edit)
	struct FMargin                                     SubMenuBackButtonMargin;                                  // 0x0160(0x0010) (CPF_Edit)
	struct FMargin                                     SubMenuSettingButtonMargin;                               // 0x0170(0x0010) (CPF_Edit)
	struct FMargin                                     SubMenuListMargin;                                        // 0x0180(0x0010) (CPF_Edit)
	float                                              SubMenuSeperatorThickness;                                // 0x0190(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PresenceSeperatorThickness;                               // 0x0194(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMargin                                     FriendTipMargin;                                          // 0x0198(0x0010) (CPF_Edit)
	struct FMargin                                     FriendTipPresenceMargin;                                  // 0x01A8(0x0010) (CPF_Edit)
	struct FMargin                                     FriendTipSeperatorMargin;                                 // 0x01B8(0x0010) (CPF_Edit)
	struct FMargin                                     ToolTipMargin;                                            // 0x01C8(0x0010) (CPF_Edit)
	struct FMargin                                     TipStatusMargin;                                          // 0x01D8(0x0010) (CPF_Edit)
	struct FMargin                                     AddButtonMargin;                                          // 0x01E8(0x0010) (CPF_Edit)
	struct FVector2D                                   AddButtonSpacing;                                         // 0x01F8(0x0008) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct SocialTypes.SocialListStyle
// 0x2870
struct FSocialListStyle
{
	struct FButtonStyle                                GlobalChatButtonStyle;                                    // 0x0000(0x02A8) (CPF_Edit)
	struct FSlateBrush                                 GlobalChatIcon;                                           // 0x02A8(0x0090) (CPF_Edit)
	struct FButtonStyle                                FriendItemButtonStyle;                                    // 0x0338(0x02A8) (CPF_Edit)
	struct FButtonStyle                                ConfirmButtonStyle;                                       // 0x05E0(0x02A8) (CPF_Edit)
	struct FButtonStyle                                CancelButtonStyle;                                        // 0x0888(0x02A8) (CPF_Edit)
	struct FSlateColor                                 ButtonContentColor;                                       // 0x0B30(0x0028) (CPF_Edit)
	struct FSlateColor                                 ButtonHoverContentColor;                                  // 0x0B58(0x0028) (CPF_Edit)
	struct FSlateBrush                                 ActionMenuArrowBrush;                                     // 0x0B80(0x0090) (CPF_Edit)
	struct FSlateBrush                                 ActionMenuArrowRightBrush;                                // 0x0C10(0x0090) (CPF_Edit)
	struct FSlateColor                                 ActionMenuBackgroundColor;                                // 0x0CA0(0x0028) (CPF_Edit)
	struct FSlateBrush                                 ToolTipArrowBrush;                                        // 0x0CC8(0x0090) (CPF_Edit)
	struct FButtonStyle                                BackButtonStyle;                                          // 0x0D58(0x02A8) (CPF_Edit)
	struct FButtonStyle                                HeaderButtonStyle;                                        // 0x1000(0x02A8) (CPF_Edit)
	struct FButtonStyle                                FriendListActionButtonStyle;                              // 0x12A8(0x02A8) (CPF_Edit)
	struct FSlateBrush                                 AddFriendButtonContentBrush;                              // 0x1550(0x0090) (CPF_Edit)
	struct FSlateBrush                                 StatusIconBrush;                                          // 0x15E0(0x0090) (CPF_Edit)
	struct FSlateBrush                                 PCIconBrush;                                              // 0x1670(0x0090) (CPF_Edit)
	struct FSlateBrush                                 ConsoleIconBrush;                                         // 0x1700(0x0090) (CPF_Edit)
	struct FSlateBrush                                 EpicIconBrush;                                            // 0x1790(0x0090) (CPF_Edit)
	struct FSlateBrush                                 FriendImageBrush;                                         // 0x1820(0x0090) (CPF_Edit)
	struct FSlateBrush                                 OfflineBrush;                                             // 0x18B0(0x0090) (CPF_Edit)
	struct FSlateBrush                                 OnlineBrush;                                              // 0x1940(0x0090) (CPF_Edit)
	struct FSlateBrush                                 AwayBrush;                                                // 0x19D0(0x0090) (CPF_Edit)
	struct FSlateBrush                                 SpectateBrush;                                            // 0x1A60(0x0090) (CPF_Edit)
	struct FSlateBrush                                 FriendsContainerBackground;                               // 0x1AF0(0x0090) (CPF_Edit)
	struct FSlateBrush                                 FriendsListBackground;                                    // 0x1B80(0x0090) (CPF_Edit)
	struct FEditableTextBoxStyle                       AddFriendEditableTextStyle;                               // 0x1C10(0x0870) (CPF_Edit)
	struct FSlateBrush                                 BackBrush;                                                // 0x2480(0x0090) (CPF_Edit)
	struct FSlateBrush                                 SelectedOptionBrush;                                      // 0x2510(0x0090) (CPF_Edit)
	struct FSlateBrush                                 SettingsBrush;                                            // 0x25A0(0x0090) (CPF_Edit)
	struct FSlateBrush                                 SeperatorBrush;                                           // 0x2630(0x0090) (CPF_Edit)
	struct FSlateBrush                                 PresenceSeperatorBrush;                                   // 0x26C0(0x0090) (CPF_Edit)
	struct FSlateBrush                                 FontSizeBrush;                                            // 0x2750(0x0090) (CPF_Edit)
	struct FSlateBrush                                 SearchBrush;                                              // 0x27E0(0x0090) (CPF_Edit)
};

// ScriptStruct SocialTypes.ProfanityData
// 0x0038
struct FProfanityData
{
	struct FString                                     CountryCode;                                              // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     ProfanityList;                                            // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     WhiteList;                                                // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      bAutoAdd : 1;                                             // 0x0030(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct SocialTypes.SocialSoundSchema
// 0x0048
struct FSocialSoundSchema
{
	struct FSlateSound                                 MessageReceivedSound;                                     // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateSound                                 PartyInviteReceivedSound;                                 // 0x0018(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateSound                                 FriendInviteReceivedSound;                                // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct SocialTypes.SocialStyle
// 0x6DE0
struct FSocialStyle
{
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0000(0x0518) (CPF_Edit)
	struct FButtonStyle                                ActionButtonStyle;                                        // 0x0518(0x02A8) (CPF_Edit)
	struct FSocialFontStyle                            SmallFontStyle;                                           // 0x07C0(0x02A0) (CPF_Edit)
	struct FSocialFontStyle                            NormalFontStyle;                                          // 0x0A60(0x02A0) (CPF_Edit)
	struct FSocialFontStyle                            LargeFontStyle;                                           // 0x0D00(0x02A0) (CPF_Edit)
	struct FSocialFontStyle                            ChatFontStyle;                                            // 0x0FA0(0x02A0) (CPF_Edit)
	struct FCheckBoxStyle                              CheckBoxStyle;                                            // 0x1240(0x05E0) (CPF_Edit)
	struct FCheckBoxStyle                              RadioBoxStyle;                                            // 0x1820(0x05E0) (CPF_Edit)
	struct FSocialListStyle                            SocialListStyle;                                          // 0x1E00(0x2870) (CPF_Edit)
	struct FSocialListMargins                          SocialListMargins;                                        // 0x4670(0x0200) (CPF_Edit)
	struct FChatStyle                                  ChatStyle;                                                // 0x4870(0x1490) (CPF_Edit)
	struct FChatColorScheme                            ChatColorScheme;                                          // 0x5D00(0x0120) (CPF_Edit)
	struct FChatChromeStyle                            ChatChromeStyle;                                          // 0x5E20(0x0850) (CPF_Edit)
	struct FChatChromeMargins                          ChatChromeMargins;                                        // 0x6670(0x0064) (CPF_Edit)
	struct FChatChromeColorScheme                      ChatChromeColorScheme;                                    // 0x66D4(0x0050) (CPF_Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x6724(0x0004) MISSED OFFSET
	struct FChatMarkupStyle                            ChatMarkupStyle;                                          // 0x6728(0x0670) (CPF_Edit)
	struct FSocialSoundSchema                          SoundSchema;                                              // 0x6D98(0x0048) (CPF_Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
