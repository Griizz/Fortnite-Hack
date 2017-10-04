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

// Class FortniteUI.AthenaHUDContext
// 0x0118 (0x0140 - 0x0028)
class UAthenaHUDContext : public UBlueprintContextBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnLocalPlayerWon;                                         // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLocalTeamWon;                                           // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLocalPlayerKilledPlayer;                                // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLocalPlayerDBNOStateChanged;                            // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUIGameplayCue;                                          // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnViewTargetHealthChanged;                                // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnViewTargetShieldChanged;                                // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnViewTargetDBNOChanged;                                  // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTeamMemberAdded;                                        // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTeamMemberRemoved;                                      // 0x00C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTeamHitPointFractionsChanged;                           // 0x00D0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTeamMemberDBNOChanged;                                  // 0x00E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTeamMemberRevivingChanged;                              // 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTeamMemberDeadChanged;                                  // 0x0100(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTeamMemberPlayerNamesChanged;                           // 0x0110(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInventoryItemSelected;                                  // 0x0120(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      bPendingAttachToHUD : 1;                                  // 0x0130(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UFortItem>                    LastSelectedInventoryItem;                                // 0x0134(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaHUDContext");
		return ptr;
	}


	void SetSelectedInventoryItem(class UFortItem* Item);
	void HandleUIGameplayCue(const struct FName& CueName, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void HandleLocalPlayerDBNOStateChanged(bool bIsDBNO);
	class UFortItem* GetSelectedInventoryItem();
};


// Class FortniteUI.FortHUDElementWidget
// 0x0028 (0x0260 - 0x0238)
class UFortHUDElementWidget : public UCommonUserWidget
{
public:
	struct FGameplayTagContainer                       HUDElementTag;                                            // 0x0238(0x0020) (CPF_Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0258(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHUDElementWidget");
		return ptr;
	}


	void HandleOnHUDElementVisibilityChanged(const struct FGameplayTagContainer& HiddenHUDElementTags);
};


// Class FortniteUI.AthenaHUDTeamIndicatorBase
// 0x0010 (0x0128 - 0x0118)
class UAthenaHUDTeamIndicatorBase : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaHUDTeamIndicatorBase");
		return ptr;
	}

};


// Class FortniteUI.FortTabButtonInterface
// 0x0000 (0x0028 - 0x0028)
class UFortTabButtonInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTabButtonInterface");
		return ptr;
	}


	void SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo);
};


// Class FortniteUI.FortTabListWidgetBase
// 0x0060 (0x0360 - 0x0300)
class UFortTabListWidgetBase : public UCommonTabListWidget
{
public:
	TArray<struct FFortTabListRegistrationInfo>        PreregisteredTabInfoArray;                                // 0x0300(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TMap<struct FName, struct FFortTabButtonLabelInfo> PendingTabLabelInfoMap;                                   // 0x0310(0x0050) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTabListWidgetBase");
		return ptr;
	}


	void SetPreviousTabInputActionData(const struct FDataTableRowHandle& PreviousData);
	void SetNextTabInputActionData(const struct FDataTableRowHandle& NextData);
	bool RegisterFortTab(const struct FName& TabNameID, class UClass* TabButtonType, const struct FFortTabButtonLabelInfo& LabelInfo, class UWidget* ContentWidget);
	void RegisterAllPreregisteredTabInfos();
	bool IsLastTabActive();
	bool IsFirstTabActive();
	bool GetPreregisteredTabInfo(const struct FName& TabNameID, struct FFortTabListRegistrationInfo* OutTabInfo);
};


// Class FortniteUI.AthenaInventoryPanelBase
// 0x0070 (0x0450 - 0x03E0)
class UAthenaInventoryPanelBase : public UCommonActivatablePanel
{
public:
	class UCommonLoadGuard*                            TileViewLoadGuard;                                        // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortItemTileView*                           TileView;                                                 // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortItemTileView*                           ResourceTiles;                                            // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x03F8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaInventoryPanelBase");
		return ptr;
	}


	void SetSortType();
	void RequestEquip(class UFortItem* Item);
	void OnInventoryItemSelected(class UFortItem* Item);
	void HandleResourceItemDoubleClicked(class UObject* Item);
	void HandleQuickBarChangedBP();
	void HandleItemWidgetCreated(class UUserWidget* ItemWidget);
	void HandleInventoryUpdatedEvent();
	void HandleInventoryItemSelected(class UObject* Item, bool bIsSelected);
	void HandleInventoryItemHovered(class UObject* Item);
	void HandleInventoryItemDoubleClicked(class UObject* Item);
	void HandleInventoryItemClicked(class UObject* Item);
	void HandleDifferentSortTypeSetBP();
	void HandleCursorModeChangedBP(bool bCursorModeEnabled, const struct FName& ActionName, class UUserWidget* CursorModeContentWidget);
	void HandleCursorModeChanged(bool bCursorModeEnabled, const struct FName& ActionName, class UUserWidget* CursorModeContentWidget);
	void GetSupportedSortTypesForCurrentInventory();
	void CycleSortType();
	void AdvanceSelection();
};


// Class FortniteUI.AthenaLeaderboardScreenBase
// 0x0000 (0x03E0 - 0x03E0)
class UAthenaLeaderboardScreenBase : public UCommonActivatablePanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaLeaderboardScreenBase");
		return ptr;
	}

};


// Class FortniteUI.AthenaLobbyBase
// 0x0050 (0x0430 - 0x03E0)
class UAthenaLobbyBase : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x03E0(0x0040) MISSED OFFSET
	class UOverlay*                                    OverlayMain;                                              // 0x0420(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaLobbyBase");
		return ptr;
	}


	void OnPlayerClicked(int PlayerIndex);
	void OnNavigationRight();
	void OnNavigationLeft();
	void OnEndCursorOverPlayer(int PlayerIndex);
	void OnBeginCursorOverPlayer(int PlayerIndex);
};


// Class FortniteUI.AthenaLootStoreScreenBase
// 0x0000 (0x03E0 - 0x03E0)
class UAthenaLootStoreScreenBase : public UCommonActivatablePanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaLootStoreScreenBase");
		return ptr;
	}

};


// Class FortniteUI.AthenaStatsScreenBase
// 0x0000 (0x03E0 - 0x03E0)
class UAthenaStatsScreenBase : public UCommonActivatablePanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaStatsScreenBase");
		return ptr;
	}

};


// Class FortniteUI.FortActivatablePanel
// 0x0020 (0x0400 - 0x03E0)
class UFortActivatablePanel : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortActivatablePanel");
		return ptr;
	}


	void RestoreScrollWidget();
	void RestoreCenterWidget();
};


// Class FortniteUI.FortAccountLinkingWindow
// 0x0030 (0x0430 - 0x0400)
class UFortAccountLinkingWindow : public UFortActivatablePanel
{
public:
	struct FScriptMulticastDelegate                    OnNewPurchaseReceipt;                                     // 0x0400(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FString                                     FoundersPackStoreCategory;                                // 0x0410(0x0010) (CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      bPSPlusHasFreeAccess : 1;                                 // 0x0420(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0421(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAccountLinkingWindow");
		return ptr;
	}


	bool IsPurchaseFree();
};


// Class FortniteUI.FortAsyncAction_CheckHasRedeemForAccess
// 0x0028 (0x0050 - 0x0028)
class UFortAsyncAction_CheckHasRedeemForAccess : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnShowLinkOrBuyAccessScreen;                              // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnShowHaveEpicAccountScreen;                              // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UObject*                                     WorldContextObject;                                       // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAsyncAction_CheckHasRedeemForAccess");
		return ptr;
	}


	class UFortAsyncAction_CheckHasRedeemForAccess* STATIC_CheckHasRedeemForAccess(class UObject* InWorldContextObject);
};


// Class FortniteUI.FortAsyncAction_ShowPlatformStoreForPurchase
// 0x0028 (0x0050 - 0x0028)
class UFortAsyncAction_ShowPlatformStoreForPurchase : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnPurchased;                                              // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotPurchased;                                           // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UObject*                                     WorldContextObject;                                       // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAsyncAction_ShowPlatformStoreForPurchase");
		return ptr;
	}


	class UFortAsyncAction_ShowPlatformStoreForPurchase* STATIC_ShowPlatformStoreForPurchase(class UObject* InWorldContextObject);
};


// Class FortniteUI.FortAsyncAction_ShowPlatformRedeemCode
// 0x0028 (0x0050 - 0x0028)
class UFortAsyncAction_ShowPlatformRedeemCode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnCodeRedeemComplete;                                     // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCodeRedeemCanceled;                                     // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UObject*                                     WorldContextObject;                                       // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAsyncAction_ShowPlatformRedeemCode");
		return ptr;
	}


	class UFortAsyncAction_ShowPlatformRedeemCode* STATIC_ShowPlatformRedeemCode(class UObject* InWorldContextObject);
};


// Class FortniteUI.FortAsyncAction_WebCreateEpicAccountAndLink
// 0x0040 (0x0068 - 0x0028)
class UFortAsyncAction_WebCreateEpicAccountAndLink : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnAccountCreatedAndLinked;                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAccountCreatedButNotLinked;                             // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAccountNotCreated;                                      // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UObject*                                     WorldContextObject;                                       // 0x0058(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bAccountLinked : 1;                                       // 0x0060(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAsyncAction_WebCreateEpicAccountAndLink");
		return ptr;
	}


	class UFortAsyncAction_WebCreateEpicAccountAndLink* STATIC_WebCreateEpicAccountAndLink(class UObject* InWorldContextObject);
};


// Class FortniteUI.FortAsyncAction_CreateHeadlessAccount
// 0x0028 (0x0050 - 0x0028)
class UFortAsyncAction_CreateHeadlessAccount : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnAccountCreated;                                         // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAccountNotCreated;                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UObject*                                     WorldContextObject;                                       // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAsyncAction_CreateHeadlessAccount");
		return ptr;
	}


	class UFortAsyncAction_CreateHeadlessAccount* STATIC_CreateHeadlessAccount(class UObject* InWorldContextObject);
};


// Class FortniteUI.FortCollectionBookProgressionRewardDetailInspectWidget
// 0x0010 (0x0248 - 0x0238)
class UFortCollectionBookProgressionRewardDetailInspectWidget : public UCommonUserWidget
{
public:
	class UCommonNumericTextBlock*                     LevelTextWidget;                                          // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortRewardInfoWidget*                       RewardWidget;                                             // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookProgressionRewardDetailInspectWidget");
		return ptr;
	}


	void SetAssociatedLevel(int Level);
};


// Class FortniteUI.FortCollectionBookProgressionRewardsModalWidget
// 0x0060 (0x0460 - 0x0400)
class UFortCollectionBookProgressionRewardsModalWidget : public UFortActivatablePanel
{
public:
	TAssetPtr<class UClass>                            RewardWidgetClass;                                        // 0x0400(0x0020) (CPF_Edit)
	struct FMargin                                     RewardWidgetPadding;                                      // 0x0420(0x0010) (CPF_Edit)
	int                                                NumRewardsToShow;                                         // 0x0430(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0434(0x0004) MISSED OFFSET
	class UVerticalBox*                                RewardBoxWidget;                                          // 0x0438(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UVerticalBox*                                MajorRewardBoxWidget;                                     // 0x0440(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonTextBlock*                            XPTextWidget;                                             // 0x0448(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonNumericTextBlock*                     LevelTextWidget;                                          // 0x0450(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonButtonGroup*                          ButtonGroup;                                              // 0x0458(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookProgressionRewardsModalWidget");
		return ptr;
	}


	void OnSelectedButtonChanged(class UCommonButton* SelectedButton, int ButtonIndex);
	void OnLevelProgressionSet(int CurrentLevel, float NextLvlPct);
	void OnInputMethodChanged(bool bUsingGamepad);
	void InspectItemBP(class UFortItem* Item);
};


// Class FortniteUI.FortCollectionBookWidget
// 0x0030 (0x0430 - 0x0400)
class UFortCollectionBookWidget : public UFortActivatablePanel
{
public:
	class UFortCollectionBookProgressWidget*           ProgressWidget;                                           // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonWidgetSwitcher*                       MainWidgetSwitcher;                                       // 0x0408(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortCollectionBookPrimaryPanel*             PrimaryPanelWidget;                                       // 0x0410(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortCollectionBookSectionPanel*             SectionPanelWidget;                                       // 0x0418(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                PrimaryPanelIdx;                                          // 0x0420(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                SectionPanelIdx;                                          // 0x0424(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookWidget");
		return ptr;
	}


	void OnPreviewXPChangeRequest(int XPChange);
	void OnCollectionBookSectionCloseRequest();
	void OnCollectionBookSectionClicked(class UFortCollectionBookSection* ClickedSection);
	void OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage);
	void OnCollectionBookPageClicked(class UFortCollectionBookPage* ClickedPage);
};


// Class FortniteUI.FortErrorWindow
// 0x0020 (0x0420 - 0x0400)
class UFortErrorWindow : public UFortActivatablePanel
{
public:
	class UClass*                                      ErrorEntryClass;                                          // 0x0400(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UCommonUserWidget*>                   ErrorEntriesPool;                                         // 0x0408(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0418(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortErrorWindow");
		return ptr;
	}


	void PutErrorEntries(TArray<class UCommonUserWidget*>* ErrorEntries);
	class UCommonUserWidget* GetErrorEntry();
	void DismissErrors(TArray<struct FFortErrorInfo> ErrorInfos);
};


// Class FortniteUI.FortGameFeedbackBase
// 0x00A0 (0x04A0 - 0x0400)
class UFortGameFeedbackBase : public UFortActivatablePanel
{
public:
	class UEditableText*                               SubjectEditable;                                          // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UMultiLineEditableText*                      BodyEditable;                                             // 0x0408(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonButtonGroup*                          ButtonGroup;                                              // 0x0410(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0418(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortGameFeedbackBase");
		return ptr;
	}


	void SubmitFeedback();
	void OnSelectionButtonChanged(class UCommonButton* SelectedButton, int ButtonIndex);
	void OnInitiateDebugInfoForFeedbackComplete();
	void InitiateDebugInfoForFeedback();
	void CancelFeedback();
	void AddButtonWithFeedbackType(class UCommonButton* Button);
};


// Class FortniteUI.FortInfoWindow
// 0x0010 (0x0410 - 0x0400)
class UFortInfoWindow : public UFortActivatablePanel
{
public:
	class UCommonListView*                             InfoEntries;                                              // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0408(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortInfoWindow");
		return ptr;
	}


	class UWidget* GetListWidget(class UObject* Item);
};


// Class FortniteUI.FortMtxOfferData
// 0x0160 (0x0188 - 0x0028)
class UFortMtxOfferData : public UPrimaryDataAsset
{
public:
	struct FSlateBrush                                 TileImage;                                                // 0x0028(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FSlateBrush                                 DetailsImage;                                             // 0x00B8(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TArray<struct FFortMtxDetailsAttribute>            DetailsAttributes;                                        // 0x0148(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FFortMtxGradient                            Gradient;                                                 // 0x0158(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FLinearColor                                Background;                                               // 0x0178(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMtxOfferData");
		return ptr;
	}

};


// Class FortniteUI.FortMtxOfferDetailsBase
// 0x00B0 (0x04B0 - 0x0400)
class UFortMtxOfferDetailsBase : public UFortActivatablePanel
{
public:
	class UFortMtxOfferData*                           OfferDisplayAsset;                                        // 0x0400(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMtxPackage                                 MtxOffer;                                                 // 0x0408(0x00A0) (CPF_Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMtxOfferDetailsBase");
		return ptr;
	}


	void UpdateMtxOffer(class UFortMtxStoreOfferBase* MtxOfferWidget);
	struct FSlateBrush GetTileImage();
	void GetStoreOfferType();
	bool GetSalePrice(struct FText* SalePrice);
	struct FString GetOfferId();
	struct FText GetNormalPrice();
	struct FText GetName();
	struct FFortMtxGradient GetGradient();
	struct FSlateBrush GetDetailsImage();
	TArray<struct FFortMtxDetailsAttribute> GetDetailsAttributes();
	struct FText GetDescription();
	int GetBonusQuantity();
	int GetBaseQuantity();
	struct FLinearColor GetBackground();
};


// Class FortniteUI.FortPlayerProfileModalWidget
// 0x0000 (0x0400 - 0x0400)
class UFortPlayerProfileModalWidget : public UFortActivatablePanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPlayerProfileModalWidget");
		return ptr;
	}

};


// Class FortniteUI.FortFrontendInventoryFilterFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UFortFrontendInventoryFilterFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortFrontendInventoryFilterFunctionLibrary");
		return ptr;
	}


	struct FText STATIC_ToText();
};


// Class FortniteUI.FortItemManagementScreen
// 0x0330 (0x0710 - 0x03E0)
class UFortItemManagementScreen : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x2A0];                                     // 0x03E0(0x02A0) MISSED OFFSET
	unsigned char                                      UnknownData01[0x1];                                       // 0x03E0(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortItemManagementScreen.Mode
	unsigned char                                      UnknownData02[0x1];                                       // 0x0681(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortItemManagementScreen.FrontendInventoryFilter
	unsigned char                                      ConsumeItemRequestInProgress : 1;                         // 0x0682(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x0683(0x0005) MISSED OFFSET
	class UFortItemManagementInventoryPanel*           InventoryPanel;                                           // 0x0688(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortItemManagementModeDetailsPanel*         ModeDetailsPanel;                                         // 0x0690(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TWeakObjectPtr<class UFortItem>                    ItemToDetail;                                             // 0x0698(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x70];                                      // 0x06A0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemManagementScreen");
		return ptr;
	}


	void SetFrontendInventoryFilter();
	void SetConsumeItemRequestInProgress(bool InProgress);
	void NotifyPanelDeactivated();
	void NotifyPanelActivated();
	void InspectItem(class UFortItem* Item);
	bool HasItemBeenSeen(class UFortAccountItem* AccountItem);
	void HandleItemToDetailChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleItemToCompareWithChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleInspectItemBP(class UFortItem* Item);
	void HandleEquipItemBP(class UFortItem* Item);
	void HandleDifferentItemManagementModeSetBP();
	void HandleCraftItemBP(class UFortSchematicItem* SchematicItem);
	void HandleConsumeItemBP(class UFortConsumableAccountItem* ConsumableItem);
	int GetNumItemsToMulch();
	class UFortItem* GetItemToDetail();
	class UFortItem* GetItemToCompareDetailsWith();
	TArray<class UFortItem*> GetItemsToMulchBP();
	void EquipItem(class UFortItem* Item);
	void EnterMulchMode(class UFortItem* ItemToMulch);
	void EnterDetailsMode(class UFortItem* ItemToDetail);
	void EnterComparisonMode(class UFortItem* ItemToCompareDetailsWith);
	void CycleSortType();
	void CraftItem(class UFortSchematicItem* SchematicItem);
	void ConsumeItem(class UFortConsumableAccountItem* ConsumableItem);
	bool CanItemBeMulched(class UFortItem* Item, struct FText* OutRestrictionReason);
};


// Class FortniteUI.FortItemViewContextInterface
// 0x0000 (0x0028 - 0x0028)
class UFortItemViewContextInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemViewContextInterface");
		return ptr;
	}

};


// Class FortniteUI.FortSquadManagementItemViewContextBase
// 0x00D0 (0x00F8 - 0x0028)
class UFortSquadManagementItemViewContextBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0028(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadManagementItemViewContextBase");
		return ptr;
	}

};


// Class FortniteUI.FortItemViewContext_SquadSlotsView
// 0x0008 (0x0100 - 0x00F8)
class UFortItemViewContext_SquadSlotsView : public UFortSquadManagementItemViewContextBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemViewContext_SquadSlotsView");
		return ptr;
	}

};


// Class FortniteUI.FortItemViewContext_SquadSlotItemPicker
// 0x0010 (0x0108 - 0x00F8)
class UFortItemViewContext_SquadSlotItemPicker : public UFortSquadManagementItemViewContextBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemViewContext_SquadSlotItemPicker");
		return ptr;
	}

};


// Class FortniteUI.FortItemViewContext_ExpeditionSquadSlotsView
// 0x0008 (0x0108 - 0x0100)
class UFortItemViewContext_ExpeditionSquadSlotsView : public UFortItemViewContext_SquadSlotsView
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemViewContext_ExpeditionSquadSlotsView");
		return ptr;
	}

};


// Class FortniteUI.FortItemViewContext_ExpeditionSquadSlotItemPicker
// 0x0008 (0x0110 - 0x0108)
class UFortItemViewContext_ExpeditionSquadSlotItemPicker : public UFortItemViewContext_SquadSlotItemPicker
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemViewContext_ExpeditionSquadSlotItemPicker");
		return ptr;
	}

};


// Class FortniteUI.FortSquadManagementScreenBase
// 0x00C0 (0x04C0 - 0x0400)
class UFortSquadManagementScreenBase : public UFortActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0400(0x0010) MISSED OFFSET
	class UFortSquadStatsWidgetBase*                   SquadStatsWidget;                                         // 0x0410(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortSquadSlotsView*                         SquadSlotsView;                                           // 0x0418(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortSquadSlotDetailsPanel*                  SelectedSlotDetailsPanel;                                 // 0x0420(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortSquadSlotItemPicker*                    SelectedSlotItemPicker;                                   // 0x0428(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FDataTableRowHandle                         InspectInputActionRowHandle;                              // 0x0430(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FDataTableRowHandle                         ManageInputActionRowHandle;                               // 0x0440(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FDataTableRowHandle                         BackInputActionRowHandle;                                 // 0x0450(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FDataTableRowHandle                         InventoryInputActionRowHandle;                            // 0x0460(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FDataTableRowHandle                         InventoryCloseInputActionRowHandle;                       // 0x0470(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FDataTableRowHandle                         ClosePickerInputActionRowHandle;                          // 0x0480(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FDataTableRowHandle                         SelectPickerSlotActionRowHandle;                          // 0x0490(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x10];                                      // 0x04A0(0x0010) MISSED OFFSET
	class UFortItemViewContext_SquadSlotsView*         ItemViewContext_SquadSlotsView;                           // 0x04B0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortItemViewContext_SquadSlotItemPicker*    ItemViewContext_SquadSlotItemPicker;                      // 0x04B8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadManagementScreenBase");
		return ptr;
	}


	bool TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData);
	void SetIdOfSquadToManageBP(const struct FName& SquadId);
	void NavigateToSquadSlot(int SquadSlotIndex);
	void HandleSquadSlotPickerShown();
	void HandleSquadSlotPickerHidden();
	void HandleSelectPickerSlotInputAction();
	void HandlePickerSelectionCommitted(class UFortItem* CommittedItem);
	void HandlePickerSelectionChanged(class UFortItem* SelectedItem);
	void HandleOpenSquadSlot(int SquadSlotIndex);
	void HandleManageInputAction();
	void HandleInventoryInputAction();
	void HandleInspectInputAction();
	void HandleDifferentSquadSlotSelected(int SquadSlotIndex);
	void HandleDifferentSquadSetBP();
	void HandleClosePickerInputAction();
	void HandleBackInputAction();
	struct FName GetIdOfSquadToManageBP();
};


// Class FortniteUI.FortHeroSquadManagementScreen
// 0x0020 (0x04E0 - 0x04C0)
class UFortHeroSquadManagementScreen : public UFortSquadManagementScreenBase
{
public:
	struct FDataTableRowHandle                         ManageDefendersInputActionRowHandle;                      // 0x04C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UFortHeroSquadBonusPerksWidgetBase*          BonusPerksWidget;                                         // 0x04D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHeroSquadManagementScreen");
		return ptr;
	}

};


// Class FortniteUI.FortSurvivorSquadManagementScreen
// 0x0010 (0x04D0 - 0x04C0)
class UFortSurvivorSquadManagementScreen : public UFortSquadManagementScreenBase
{
public:
	class UFortSurvivorSquadStatMatchesBase*           StatMatchesWidget;                                        // 0x04C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSurvivorSquadManagementScreen");
		return ptr;
	}

};


// Class FortniteUI.FortSquadSelectorButton
// 0x0020 (0x08C0 - 0x08A0)
class UFortSquadSelectorButton : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x08A0(0x0010) MISSED OFFSET
	class UClass*                                      SquadManagementScreenType;                                // 0x08B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x08B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadSelectorButton");
		return ptr;
	}


	bool TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData);
	void SetIdOfSquadToManageBP(const struct FName& SquadId);
	void HandleSquadChangedBP();
	void HandleDifferentSquadSetBP();
	struct FName GetIdOfSquadToManageBP();
};


// Class FortniteUI.FortSquadTypeLandingPageBase
// 0x0040 (0x0440 - 0x0400)
class UFortSquadTypeLandingPageBase : public UFortActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0400(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortSquadTypeLandingPageBase.SquadType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0401(0x0007) MISSED OFFSET
	struct FDataTableRowHandle                         ManageInputActionRowHandle;                               // 0x0408(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FDataTableRowHandle                         BackInputActionRowHandle;                                 // 0x0418(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0428(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortSquadTypeLandingPageBase.ItemManagementScreenFilter
	unsigned char                                      UnknownData03[0x7];                                       // 0x0429(0x0007) MISSED OFFSET
	TArray<TWeakObjectPtr<class UFortSquadSelectorButton>> SquadSelectorButtons;                                     // 0x0430(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadTypeLandingPageBase");
		return ptr;
	}


	void HandlePendingNavigationOp();
	void HandleManageInputAction(bool* bPassThrough);
	void HandleBackInputAction(bool* bPassThrough);
	class UFortSquadSelectorButton* CreateAndAddSquadButton(const struct FName& SquadId);
};


// Class FortniteUI.FortTopBarPanel
// 0x0010 (0x0410 - 0x0400)
class UFortTopBarPanel : public UFortActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0400(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTopBarPanel");
		return ptr;
	}

};


// Class FortniteUI.FortTwitchLoginModalWidget
// 0x0010 (0x0410 - 0x0400)
class UFortTwitchLoginModalWidget : public UFortActivatablePanel
{
public:
	class UNativeWidgetHost*                           NativeHost;                                               // 0x0400(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0408(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTwitchLoginModalWidget");
		return ptr;
	}


	void OnNativeHostContentChanged();
};


// Class FortniteUI.FortActorCanvas
// 0x0010 (0x0140 - 0x0130)
class UFortActorCanvas : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0130(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortActorCanvas");
		return ptr;
	}


	void OnHUDElementVisibilityChanged(const struct FGameplayTagContainer& HiddenHUDElementTags);
	class UFortActorCanvasSlot* AddActorIndicator(class UFortActorIndicatorWidget* Indicator);
};


// Class FortniteUI.FortActorCanvasSlot
// 0x0010 (0x0048 - 0x0038)
class UFortActorCanvasSlot : public UPanelSlot
{
public:
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0039(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCanAutoRemove : 1;                                       // 0x003A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xD];                                       // 0x003B(0x000D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortActorCanvasSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetCanAutoRemove(bool bAllowAutoRemove);
};


// Class FortniteUI.FortAlterationsWidget_NUI
// 0x0018 (0x0250 - 0x0238)
class UFortAlterationsWidget_NUI : public UCommonUserWidget
{
public:
	class UFortItem*                                   Item;                                                     // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0240(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortAlterationsWidget_NUI.State
	unsigned char                                      UnknownData01[0xF];                                       // 0x0241(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAlterationsWidget_NUI");
		return ptr;
	}


	void SetState();
	void SetItem(class UFortItem* InItem);
	void ProcessAlterations();
	void OnStateChanged();
	void OnItemChanged();
	void OnGenerateAlteration(const struct FFortUIAlteration& AlterationInfo);
};


// Class FortniteUI.FortAlterationWidget_NUI
// 0x0018 (0x0250 - 0x0238)
class UFortAlterationWidget_NUI : public UCommonUserWidget
{
public:
	struct FFortUIAlteration                           AlterationInfo;                                           // 0x0238(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAlterationWidget_NUI");
		return ptr;
	}


	bool IsAlterationUnlocked();
	bool IsAlterationHighlighted();
	int GetRequiredLevel();
	class UFortAlterationItemDefinition* GetAlterationDefintion();
};


// Class FortniteUI.FortAnnouncementWidget
// 0x0008 (0x0240 - 0x0238)
class UFortAnnouncementWidget : public UCommonUserWidget
{
public:
	class AFortClientAnnouncement*                     BoundAnnouncement;                                        // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAnnouncementWidget");
		return ptr;
	}


	void UpdateWidgetData(class AFortClientAnnouncement* Announcement);
	void BindUpdateEvents(class AFortClientAnnouncement* Announcement);
	void AnnouncementStopped(class AFortClientAnnouncement* Announcement);
};


// Class FortniteUI.FortArmoryScreen
// 0x0000 (0x03E0 - 0x03E0)
class UFortArmoryScreen : public UCommonActivatablePanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortArmoryScreen");
		return ptr;
	}

};


// Class FortniteUI.FortAsyncAction_SetUIState
// 0x0020 (0x0048 - 0x0028)
class UFortAsyncAction_SetUIState : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnStateEntered;                                           // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UObject*                                     WorldContextObject;                                       // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAsyncAction_SetUIState");
		return ptr;
	}


	class UFortAsyncAction_SetUIState* STATIC_SetUIState(class UObject* InWorldContextObject);
};


// Class FortniteUI.FortAsyncAction_ShowAdvancedLatentConfirmation_NUI
// 0x0198 (0x01C0 - 0x0028)
class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    DialogResult;                                             // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UObject*                                     WorldContextObject;                                       // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FFortDialogDescription_NUI                  Description;                                              // 0x0040(0x0180)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAsyncAction_ShowAdvancedLatentConfirmation_NUI");
		return ptr;
	}


	class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI* STATIC_ShowAdvancedLatentActionConfirmation(class UObject* InWorldContextObject, const struct FSlateBrush& Icon, const struct FText& Title, const struct FText& MESSAGE, TArray<struct FConfirmationDialogAction> ConfirmButtonInputActions, const struct FName& DeclineButtonInputAction, class UWidget* AdditionalContent, class UWidget* LeftAdditionalContent);
};


// Class FortniteUI.FortAsyncAction_ShowConfirmation
// 0x01A8 (0x01D0 - 0x0028)
class UFortAsyncAction_ShowConfirmation : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnConfirmed;                                              // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDeclined;                                               // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTimedOut;                                               // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UObject*                                     WorldContextObject;                                       // 0x0058(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FFortDialogDescription                      Description;                                              // 0x0060(0x0170)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAsyncAction_ShowConfirmation");
		return ptr;
	}


	class UFortAsyncAction_ShowConfirmation* STATIC_ShowConfirmationDialog(class UObject* InWorldContextObject, const struct FText& Title, const struct FText& MESSAGE, const struct FText& ConfirmButtonText, const struct FText& DeclineButtonText, class UFortUserWidget* InAdditionalContent, float InDisplayTime);
};


// Class FortniteUI.FortAsyncAction_ShowConfirmation_NUI
// 0x0198 (0x01C0 - 0x0028)
class UFortAsyncAction_ShowConfirmation_NUI : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    DialogResult;                                             // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UObject*                                     WorldContextObject;                                       // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FFortDialogDescription_NUI                  Description;                                              // 0x0040(0x0180)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAsyncAction_ShowConfirmation_NUI");
		return ptr;
	}


	class UFortAsyncAction_ShowConfirmation_NUI* STATIC_ShowSimpleConfirmationDialog_NUI(class UObject* InWorldContextObject, const struct FSlateBrush& Icon, const struct FText& Title, const struct FText& MESSAGE, bool bShowConfirm, bool bShowDecline, class UWidget* AdditionalContent, class UWidget* LeftAdditionalContent);
	class UFortAsyncAction_ShowConfirmation_NUI* STATIC_ShowSimpleConfirmationDialog_CustomInput(class UObject* InWorldContextObject, const struct FSlateBrush& Icon, const struct FText& Title, const struct FText& MESSAGE, const struct FName& ConfirmAction, const struct FName& DeclineAction, class UWidget* AdditionalContent, class UWidget* LeftAdditionalContent);
	class UFortAsyncAction_ShowConfirmation_NUI* STATIC_ShowConfirmationDialog_NUI(class UObject* InWorldContextObject, const struct FSlateBrush& Icon, const struct FText& Title, const struct FText& MESSAGE, TArray<struct FConfirmationDialogAction> ConfirmButtonInputActions, const struct FName& DeclineButtonInputAction, class UWidget* AdditionalContent, class UWidget* LeftAdditionalContent);
};


// Class FortniteUI.FortAsyncAction_ShowPartyDialog
// 0x0328 (0x0350 - 0x0028)
class UFortAsyncAction_ShowPartyDialog : public UBlueprintAsyncActionBase
{
public:
	class UObject*                                     WorldContextObject;                                       // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FFortDialogDescription_NUI                  Description;                                              // 0x0030(0x0180)
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // 0x01B0(0x0190)
	class ULocalPlayer*                                LocalPlayer;                                              // 0x0340(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0348(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAsyncAction_ShowPartyDialog");
		return ptr;
	}


	class UFortAsyncAction_ShowPartyDialog* STATIC_ShowPartyMemberManageDialog(class UObject* InWorldContextObject, const struct FFortTeamMemberInfo& TeamMemberInfo, class ULocalPlayer* LocalPlayer, class UUserWidget* LeftAdditionalContent);
	class UFortAsyncAction_ShowPartyDialog* STATIC_ShowPartyLeaderManageDialog(class UObject* InWorldContextObject, const struct FFortTeamMemberInfo& TeamMemberInfo, class ULocalPlayer* LocalPlayer, class UUserWidget* LeftAdditionalContent);
};


// Class FortniteUI.FortAthenaMatchmakingWidget
// 0x00A0 (0x0480 - 0x03E0)
class UFortAthenaMatchmakingWidget : public UCommonActivatablePanel
{
public:
	class UClass*                                      DuoMissionGen;                                            // 0x03E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      SquadMissionGen;                                          // 0x03E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x03F0(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortAthenaMatchmakingWidget.CurrentPlaylist
	unsigned char                                      bCurrentSquadFill : 1;                                    // 0x03F1(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03F2(0x0006) MISSED OFFSET
	class UWidget*                                     SpinnerAndTextContainer;                                  // 0x03F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonWidgetSwitcher*                       ButtonSwitcher;                                           // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonButton*                               PlayButton;                                               // 0x0408(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonButton*                               CancelButton;                                             // 0x0410(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonTextBlock*                            MatchmakingHeaderText;                                    // 0x0418(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonTextBlock*                            MatchmakingMessageText;                                   // 0x0420(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonRotator*                              PlaylistRotator;                                          // 0x0428(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonRotator*                              TeamFillRotator;                                          // 0x0430(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UHorizontalBox*                              TeamFillRow;                                              // 0x0438(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x40];                                      // 0x0440(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAthenaMatchmakingWidget");
		return ptr;
	}


	void SetPlayButtonState(bool bCanMatchmake);
	void SetCancelButtonState(bool bIsMatchmaking);
	void OnPlaylistRotatorChanged(int PlaylistIndex);
	void OnPlayButtonPressed();
	void OnChangeTeamFillChanged(bool bFill);
	void OnCancelButtonPressed();
};


// Class FortniteUI.FortAthenaNewsWidget
// 0x0000 (0x0238 - 0x0238)
class UFortAthenaNewsWidget : public UCommonUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAthenaNewsWidget");
		return ptr;
	}


	bool GetText(struct FText* Title, struct FText* PlatformBody, struct FText* RegionBody, struct FText* Body);
};


// Class FortniteUI.FortUserWidget
// 0x0010 (0x0240 - 0x0230)
class UFortUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0230(0x0008) MISSED OFFSET
	unsigned char                                      bConsumePointerInput : 1;                                 // 0x0238(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUserWidget");
		return ptr;
	}


	void AddStoreCheatMenu();
	void AddGrantCheatMenu(const struct FString& TemplateId, const struct FString& InstanceId);
};


// Class FortniteUI.FortNodeCanvasEntityInterface
// 0x0000 (0x0028 - 0x0028)
class UFortNodeCanvasEntityInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortNodeCanvasEntityInterface");
		return ptr;
	}

};


// Class FortniteUI.FortNodeCanvasInterface
// 0x0000 (0x0028 - 0x0028)
class UFortNodeCanvasInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortNodeCanvasInterface");
		return ptr;
	}

};


// Class FortniteUI.FortBaseCanvasEntity
// 0x0040 (0x0280 - 0x0240)
class UFortBaseCanvasEntity : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0240(0x0008) MISSED OFFSET
	struct FName                                       NodeID;                                                   // 0x0248(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bConsideredInSizeCalculation : 1;                         // 0x0250(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0251(0x0003) MISSED OFFSET
	float                                              MovementMultiplier;                                       // 0x0254(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDataTableRowHandle                         NodeStyleData;                                            // 0x0258(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0268(0x0008) MISSED OFFSET
	struct FVector2D                                   BasePos;                                                  // 0x0270(0x0008) (CPF_IsPlainOldData)
	unsigned char                                      HasHadBasePosSet : 1;                                     // 0x0278(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortBaseCanvasEntity");
		return ptr;
	}


	void Outro();
	void Intro();
};


// Class FortniteUI.FortBaseCanvasNode
// 0x0028 (0x02A8 - 0x0280)
class UFortBaseCanvasNode : public UFortBaseCanvasEntity
{
public:
	class UMediaSource*                                PreviewMediaSource;                                       // 0x0280(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShouldHideConnectorsToDependents : 1;                    // 0x0288(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0289(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnNodeStateChangedEvent;                                  // 0x0290(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortBaseCanvasNode");
		return ptr;
	}


	bool SelectNode();
	void SelectedChanged(bool bEnabled);
	void Purchase();
	void OnNodeStateChanged__DelegateSignature(class UFortBaseCanvasNode* Node);
	bool IsPurchaseable();
	bool IsOwned();
	bool IsLocked();
	void HandleNodeStateChangedInternal();
	void HandleNodeStateChanged();
	struct FText STATIC_GetPurchaseRestrictionReasonText();
	float GetPurchasePercent();
	class UMediaSource* GetPreviewMediaSource();
	bool GetNodeStyleDataCopy(struct FFortNodeStyleData* Style);
	struct FName GetNodeID();
	bool GetNodeDataCopy(struct FHomebaseNode* Node);
	TArray<struct FFortItemInstanceQuantityPair> GetCosts();
	bool DrillDownToNodePage();
	bool DoesDrillDownToCurrentNodePage();
};


// Class FortniteUI.FortNodeCanvas
// 0x0100 (0x0240 - 0x0140)
class UFortNodeCanvas : public UCanvasPanel
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0140(0x0008) MISSED OFFSET
	struct FName                                       NodePageName;                                             // 0x0148(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDataTableRowHandle                         NodeTypeData;                                             // 0x0150(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FVector2D                                   OriginForParallax;                                        // 0x0160(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xD8];                                      // 0x0168(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortNodeCanvas");
		return ptr;
	}


	void PanToNode(const struct FName& NodeID);
};


// Class FortniteUI.FortBangWrapper
// 0x0040 (0x0170 - 0x0130)
class UFortBangWrapper : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0130(0x0008) MISSED OFFSET
	unsigned char                                      UnknownData01[0x1];                                       // 0x0130(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortBangWrapper.Size
	unsigned char                                      UnknownData02[0x3];                                       // 0x0139(0x0003) MISSED OFFSET
	struct FVector2D                                   Offset;                                                   // 0x013C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0144(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortBangWrapper.BangType
	unsigned char                                      UnknownData04[0x3];                                       // 0x0145(0x0003) MISSED OFFSET
	struct FName                                       TutorialNameID;                                           // 0x0148(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x0150(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortBangWrapper.TutorialGlowType
	unsigned char                                      UnknownData06[0x1F];                                      // 0x0151(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortBangWrapper");
		return ptr;
	}


	void SetBangVisibility(bool InVisible);
};


// Class FortniteUI.FortGlobalUIContext
// 0x0318 (0x0340 - 0x0028)
class UFortGlobalUIContext : public UBlueprintContextBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    SubGameChanged;                                           // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0x70];                                      // 0x0040(0x0070) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnKeybindsChanged;                                        // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInputActionHoldStarted;                                 // 0x00C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInputActionHoldStopped;                                 // 0x00D0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTeamPowerChanged;                                       // 0x00E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    DragAndDropStartedDelegate;                               // 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    DragAndDropEndedDelegate;                                 // 0x0100(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnScoreReportChanged;                                     // 0x0110(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGraphNodeDrillDown;                                     // 0x0120(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGraphNodeSelected;                                      // 0x0130(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnQueryFortBackendVersionComplete;                        // 0x0140(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLoadingScreenVisibilityChanged;                         // 0x0150(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLocalPlayerControllerConnectionChanged;                 // 0x0160(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0170(0x0018) MISSED OFFSET
	TMap<struct FName, class UFortUIMessageManager*>   MessageManagersByName;                                    // 0x0188(0x0050) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData03[0x50];                                      // 0x01D8(0x0050) UNKNOWN PROPERTY: MapProperty FortniteUI.FortGlobalUIContext.Features
	unsigned char                                      UnknownData04[0xF0];                                      // 0x0228(0x00F0) MISSED OFFSET
	unsigned char                                      bIsUIVisible : 1;                                         // 0x0318(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bShowRateWidget : 1;                                      // 0x0319(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x031A(0x0006) MISSED OFFSET
	struct FText                                       FeedbackTitle;                                            // 0x0320(0x0018) (CPF_Transient)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0338(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortGlobalUIContext");
		return ptr;
	}


	void UnregisterToReceiveNotifications();
	void UnregisterScriptedAction(class UClass* ScriptedAction);
	void UnbindToFeatureState(const struct FScriptDelegate& Delegate);
	void TriggerUIFeedbackEvent(const struct FName& EventName);
	void TriggerNewQuestStickies();
	void TriggerCompletedQuestStickies();
	bool ShowWebURL(const struct FString& URL);
	void ShowConsoleAccountPicker(int ControllerIndex, const struct FScriptDelegate& CompletionDelegate);
	void ShowBang();
	bool ShouldShowRateWidget();
	bool ShouldCloseMenuOnEscape();
	void SetSubGame();
	void SetRatingWidgetFeedbackTitle(const struct FText& Title);
	void SetInputMode();
	void SetCurrentInputPresetName(const struct FString& InputPresetName);
	void SetBangFromCount(int Count);
	void SendUINavigationAnalytic(const struct FString& Destination, bool bUserInitiated);
	void SendLeaveZoneAnalytic();
	void SendExperienceRatingAnalytic(const struct FString& RatingType, const struct FString& FeedbackSentBy, const struct FText& RatingQuestion, int StarCount, const struct FString& GameSessionID, const struct FString& Comment);
	void ReturnToSubGameSelect();
	void RemoveNotification(const struct FFortDialogDescription& NotificationDescription);
	void RegisterToReceiveNotifications(const struct FScriptDelegate& InOnNotificationAvailable);
	void RegisterScriptedActions(TArray<class UClass*> ScriptedActions);
	void RegisterScriptedAction(class UClass* ScriptedAction);
	void QuitGame();
	void QueryGameBackendVersion();
	void ProcessNotificationResult(const struct FFortDialogDescription& NotificationDescription);
	void ProcessConfirmationResult(const struct FName& InResultName, const struct FFortDialogDescription_NUI& ConfirmationDescription, bool bWaitingForLatentAction, struct FFortDialogExternalLatentActionHandle* WaitingDialogHandle);
	void OnQueryFortBackendVersionDelegate__DelegateSignature(const struct FFortBackendVersion& FortBackendVersion);
	void OnLocalPlayerControllerConnectionChangedDelegate__DelegateSignature(bool bConnected);
	void OnLoadingScreenVisibilityChangedDelegate__DelegateSignature(bool IsVisible);
	void Logout();
	bool IsUsingGamepad();
	bool IsUIVisible();
	bool IsSubgameSelectionAvailable();
	bool IsPendingLogout();
	bool IsMobileApp();
	bool IsInZone();
	bool IsInOutpostZone();
	bool IsHUDVisible();
	bool IsGamepadAttached();
	bool IsDesktopPlatform();
	bool IsBluGloEnabled();
	bool IsAllContentInstalled();
	void InputActionHoldStopped(const struct FName& InputActionName, bool bCompletedSuccessfully);
	void InputActionHoldStarted(const struct FName& InputActionName, float HoldDuration);
	void HideBang();
	bool HasCompletedOnboardingObjective(const struct FDataTableRowHandle& Objective);
	bool HasAccesstoMultipleSubGames();
	struct FString GetWatermark();
	void GetSubGame();
	struct FString GetSessionId();
	class UFortUIScoreReport* GetScoreReport();
	class UFortQuestManager* GetQuestManager();
	struct FText GetPlatformDisplayName();
	bool GetNextNotification(struct FFortDialogDescription* NotificationDescription);
	class UFortUIMessageManager* GetMessageManager(const struct FName& ManagerName, bool* bCreatedNew);
	class UFortUIRewardReport* GetLastMissionRewardReport();
	void GetLastMissionInfo(struct FFortLastMissionInfo* LastMissionInfo);
	struct FGameSummaryInfo GetLastGameSummaryInfo();
	struct FText GetKeyTextForAction(const struct FName& Action, bool bUseAbbreviatedText, struct FText* ButtonActionType);
	struct FKey GetKeyForAction(const struct FName& Action);
	int GetInputPriority();
	bool GetInputDetailsForAction(const struct FName& Action, struct FFortInputActionDetails* InputActionDetails);
	struct FText GetFeedbackTitle();
	void GetFeatureState();
	int GetDisplayXpValue(int StartingRealXp, int EndingRealXp);
	struct FString GetCurrentInputPresetName();
	struct FText GetConningXpModifierMessage(int TotalSkillPoints, int ContentDifficulty);
	float GetConningDifficultyXpModifier(int TotalSkillPoints, int ContentDifficulty);
	class UFortCollectionBookManager* GetCollectionBookManager();
	struct FString GetBackendName();
	struct FString GetAthenaCodeOfConductURL();
	void GetAllPlayerInputPresetNames(TArray<struct FString>* InputPresetNames, TArray<struct FText>* InputPresetFriendlyNames);
	void ForceSetFeatureState();
	void DisplayStateContent(bool bDisplay);
	void CopyToClipboard(const struct FString& ClipboardText);
	float ContentInstallationProgress();
	void ClearSelectionGroup(const struct FName& SelectionGroup);
	void ClearRatingWidgetInfo();
	void ClearLastMissionReports();
	void ClearLastGameSummaryInfo();
	void STATIC_CheckFlag(const struct FString& FlagName);
	bool CanPlay(struct FText* DenialReason);
	bool CanMatchmake(struct FText* DenialReason);
	void BindToFeatureStateAndInitialize(const struct FScriptDelegate& Delegate);
	bool AutoSelectSubGame();
	bool AllowLogout();
};


// Class FortniteUI.FortAthenaTabsScreenBase
// 0x0060 (0x0440 - 0x03E0)
class UFortAthenaTabsScreenBase : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x03E0(0x0048) MISSED OFFSET
	class UFortTabListWidgetBase*                      TopTabList;                                               // 0x0428(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAthenaTabsScreenBase");
		return ptr;
	}


	void HandleFeatureStateChanged();
	void HandleFeatureNavigateRequest();
};


// Class FortniteUI.FortAttributeListItem_NUI
// 0x00F8 (0x0330 - 0x0238)
class UFortAttributeListItem_NUI : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET
	unsigned char                                      bHoverEnabled : 1;                                        // 0x0240(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	struct FGameplayTag                                StatTag;                                                  // 0x0248(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData02[0xE0];                                      // 0x0250(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAttributeListItem_NUI");
		return ptr;
	}


	void ValueChanged(float Delta);
	void SetPreviewAttribute(const struct FFortDisplayAttribute& InPreviewAttribute);
	void SetDisplayAttribute(const struct FFortDisplayAttribute& InDisplayAttribute);
	void PreviewStarted();
	void PreviewEnded();
	void GetDisplayPreviewCopy(struct FFortDisplayAttribute* OutPreviewAttribute);
	void GetDisplayAttributeCopy(struct FFortDisplayAttribute* OutDisplayAttribute);
	void GetCurrentAttributeCopy(struct FFortDisplayAttribute* OutDisplayAttribute);
	void DisplayAttributeChanged();
	void ClearPreview();
};


// Class FortniteUI.FortAttributeList_NUI
// 0x0030 (0x0268 - 0x0238)
class UFortAttributeList_NUI : public UCommonUserWidget
{
public:
	class UClass*                                      AttributeItemClass;                                       // 0x0238(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHoverEnabledOnElements : 1;                              // 0x0240(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	TArray<class UFortAttributeListItem_NUI*>          ShownAttributeWidgets;                                    // 0x0248(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0258(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAttributeList_NUI");
		return ptr;
	}


	void SetPreviewData(TArray<struct FFortDisplayAttribute> Data);
	void SetData(TArray<struct FFortDisplayAttribute> Data);
	void OnRemoveShownAttributeListItem(class UFortAttributeListItem_NUI* AttributeListItemWidget, int AtIndex);
	void OnClearShownAttributes();
	void OnAddShownAttributeListItem(class UFortAttributeListItem_NUI* AttributeListItemWidget);
	void ClearPreviewData();
};


// Class FortniteUI.FortAttributeListItem
// 0x00E8 (0x0318 - 0x0230)
class UFortAttributeListItem : public UUserWidget
{
public:
	unsigned char                                      bHoverEnabled : 1;                                        // 0x0230(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xE7];                                      // 0x0231(0x00E7) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAttributeListItem");
		return ptr;
	}


	void ValueChanged(float Delta);
	void SetPreviewAttribute(const struct FFortDisplayAttribute& InPreviewAttribute);
	bool SetDisplayAttribute(const struct FFortDisplayAttribute& InDisplayAttribute, struct FFortDisplayAttribute* DeltaAttribute);
	void PreviewStarted();
	void PreviewEnded();
	void GetDisplayPreviewCopy(struct FFortDisplayAttribute* OutPreviewAttribute);
	void GetDisplayAttributeCopy(struct FFortDisplayAttribute* OutDisplayAttribute);
	void GetCurrentAttributeCopy(struct FFortDisplayAttribute* OutDisplayAttribute);
	void DisplayAttributeChanged();
	void ClearPreview();
};


// Class FortniteUI.FortBangWrapper_NUI
// 0x0018 (0x0250 - 0x0238)
class UFortBangWrapper_NUI : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET
	unsigned char                                      UnknownData01[0x1];                                       // 0x0238(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortBangWrapper_NUI.BangType
	unsigned char                                      UnknownData02[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	struct FName                                       TutorialNameID;                                           // 0x0248(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortBangWrapper_NUI");
		return ptr;
	}


	void UnregisterTutorialNameID();
	void SetTutorialNameID(const struct FName& InTutorialNameID);
	void SetBangType();
	void SetBangStateBP(bool bEnabled, int Count);
	void OnStopCallout();
	void OnStartCallout();
	void OnBangStateChanged(bool bEnabled, int Count);
};


// Class FortniteUI.FortBannerSelectorBase
// 0x0030 (0x0410 - 0x03E0)
class UFortBannerSelectorBase : public UCommonActivatablePanel
{
public:
	int                                                BannerNameMaxLength;                                      // 0x03E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	class UBorder*                                     ErrorBorder;                                              // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonTextBlock*                            ErrorText;                                                // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x03F8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortBannerSelectorBase");
		return ptr;
	}


	void OnHomebaseNameCommitSucceeded();
	void OnHomebaseNameCommitFailed();
	bool HasIllegalChars(const struct FString& NewBannerName);
	void HandleBannerNameChanged(const struct FText& Text);
	void CompleteHomebaseName();
	void CompleteHomebaseBannerSelection();
};


// Class FortniteUI.FortBannerUtilities
// 0x0000 (0x0028 - 0x0028)
class UFortBannerUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortBannerUtilities");
		return ptr;
	}


	class UTexture2D* STATIC_LoadAndGetBannerLargeIconFromRowName(const struct FName& BannerIconRowName);
	struct FLinearColor STATIC_GetSecondaryColor(const struct FHomebaseBannerColor& BannerColor);
	struct FName STATIC_GetRowNameForBannerIconItem(class UFortHomebaseBannerIconItem* BannerIcon);
	struct FName STATIC_GetRowNameForBannerColorItem(class UFortHomebaseBannerColorItem* BannerColor);
	struct FLinearColor STATIC_GetPrimaryColor(const struct FHomebaseBannerColor& BannerColor);
	TAssetPtr<class UTexture2D> STATIC_GetBannerSmallIconAssetFromRowName(const struct FName& BannerIconRowName);
	TAssetPtr<class UTexture2D> STATIC_GetBannerSmallIconAsset(class UFortHomebaseBannerIconItem* BannerIcon);
	TAssetPtr<class UTexture2D> STATIC_GetBannerLargeIconAssetFromRowName(const struct FName& BannerIconRowName);
	TAssetPtr<class UTexture2D> STATIC_GetBannerLargeIconAsset(class UFortHomebaseBannerIconItem* BannerIcon);
	void STATIC_GetBannerIconsForCategory(class AFortPlayerController* FortPC, const struct FName& CategoryRowName, TArray<class UFortAccountItem*>* BannerIcons);
	class UFortHomebaseBannerIconItem* STATIC_GetBannerIconItemFromRowName(class AFortPlayerController* FortPC, const struct FName& BannerIconRowName);
	struct FName STATIC_GetBannerIconCategoryRowName(const struct FName& BannerIconRowName);
	struct FText STATIC_GetBannerIconCategoryName(const struct FName& CategoryRowName);
	void STATIC_GetBannerColorsForCategory(class AFortPlayerController* FortPC, const struct FName& CategoryRowName, TArray<class UFortAccountItem*>* BannerColors);
	struct FLinearColor STATIC_GetBannerColorSecondaryColorFromRowName(const struct FName& BannerColorRowName);
	struct FLinearColor STATIC_GetBannerColorSecondaryColor(class UFortHomebaseBannerColorItem* BannerColor);
	struct FLinearColor STATIC_GetBannerColorPrimaryColorFromRowName(const struct FName& BannerColorRowName);
	struct FLinearColor STATIC_GetBannerColorPrimaryColor(class UFortHomebaseBannerColorItem* BannerColor);
	class UFortHomebaseBannerColorItem* STATIC_GetBannerColorItemFromRowName(class AFortPlayerController* FortPC, const struct FName& BannerColorRowName);
	struct FHomebaseBannerColor STATIC_GetBannerColorFromRowName(const struct FName& BannerColorRowName);
	struct FName STATIC_GetBannerColorCategoryRowName(const struct FName& BannerColorRowName);
	struct FText STATIC_GetBannerColorCategoryName(const struct FName& CategoryRowName);
	struct FHomebaseBannerColor STATIC_GetBannerColor(class UFortHomebaseBannerColorItem* BannerColor);
};


// Class FortniteUI.FortBorderStyleList
// 0x0008 (0x0240 - 0x0238)
class UFortBorderStyleList : public UCommonUserWidget
{
public:
	struct FName                                       BordersPath;                                              // 0x0238(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortBorderStyleList");
		return ptr;
	}


	TArray<TAssetPtr<class UClass>> GetBorderStyles();
};


// Class FortniteUI.FortButtonInternalWidget
// 0x0018 (0x0480 - 0x0468)
class UFortButtonInternalWidget : public UButton
{
public:
	unsigned char                                      IsClickable : 1;                                          // 0x0468(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0469(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortButtonInternalWidget");
		return ptr;
	}

};


// Class FortniteUI.FortButtonStyle
// 0x1BE0 (0x1C08 - 0x0028)
class UFortButtonStyle : public UObject
{
public:
	struct FFortStateStyle                             NormalBase;                                               // 0x0028(0x0380) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FFortStateStyle                             NormalHovered;                                            // 0x03A8(0x0380) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FFortStateStyle                             NormalPressed;                                            // 0x0728(0x0380) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FFortStateStyle                             SelectedBase;                                             // 0x0AA8(0x0380) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FFortStateStyle                             SelectedHovered;                                          // 0x0E28(0x0380) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FFortStateStyle                             SelectedPressed;                                          // 0x11A8(0x0380) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FFortStateStyle                             Disabled;                                                 // 0x1528(0x0380) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FFortMultiSizeMargin                        ButtonPadding;                                            // 0x18A8(0x0060) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FFortMultiSizeFont                          Font;                                                     // 0x1908(0x0270) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FFortMultiSizeMargin                        CustomPadding;                                            // 0x1B78(0x0060) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x1BD8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x1BF0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortButtonStyle");
		return ptr;
	}


	struct FMargin STATIC_GetMarginBySizeFromMultiSizeMargin(const struct FFortMultiSizeMargin& MultiSizeMargin, TEnumAsByte<EFortBrushSize> Size);
	struct FSlateFontInfo STATIC_GetFontBySizeFromMultiSizeFont(const struct FFortMultiSizeFont& MultiSizeFont, TEnumAsByte<EFortBrushSize> Size);
	struct FSlateFontInfo GetFontBySize(TEnumAsByte<EFortBrushSize> Size);
	struct FMargin GetCustomPaddingBySize(TEnumAsByte<EFortBrushSize> Size);
	struct FMargin GetButtonPaddingBySize(TEnumAsByte<EFortBrushSize> Size);
	struct FSlateBrush STATIC_GetBrushBySizeFromMultiSizeBrush(const struct FFortMultiSizeBrush& MultiSizeBrush, TEnumAsByte<EFortBrushSize> Size);
};


// Class FortniteUI.FortBaseButton
// 0x0628 (0x0868 - 0x0240)
class UFortBaseButton : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0240(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    EnabledChanged;                                           // 0x0248(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    SelectedChanged;                                          // 0x0258(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ButtonClicked;                                            // 0x0268(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0278(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortBaseButton.BangSize
	unsigned char                                      UnknownData02[0x3];                                       // 0x0279(0x0003) MISSED OFFSET
	struct FVector2D                                   BangOffset;                                               // 0x027C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0284(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortBaseButton.BangType
	unsigned char                                      UnknownData04[0x3];                                       // 0x0285(0x0003) MISSED OFFSET
	struct FName                                       TutorialNameID;                                           // 0x0288(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x0290(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortBaseButton.TutorialGlowType
	unsigned char                                      UnknownData06[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	class UClass*                                      Style;                                                    // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortBrushSize>                        BrushSize;                                                // 0x02A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x02A1(0x0007) MISSED OFFSET
	struct FSlateSound                                 PressedSlateSoundOverride;                                // 0x02A8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FSlateSound                                 HoveredSlateSoundOverride;                                // 0x02C0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bSelectable : 1;                                          // 0x02D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x02D9(0x0007) MISSED OFFSET
	struct FName                                       SelectionGroup;                                           // 0x02E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bToggleable : 1;                                          // 0x02E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bClickable : 1;                                           // 0x02E9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                              // 0x02EA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x57D];                                     // 0x02EB(0x057D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortBaseButton");
		return ptr;
	}


	void SetStyle(class UClass* InStyle);
	void SetSelectionGroup(const struct FName& InSelectionGroup);
	void SetSelected(bool InSelected);
	void SetHovered(bool InHovered);
	void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);
	void SetClickable(bool InClickable);
	void SetBrushSize(TEnumAsByte<EFortBrushSize> InSize);
	void SetBangVisibility(bool bVisible);
	void OnButtonClicked();
	class UFortButtonStyle* GetStyle();
	int GetSelectionGroupIndex();
	bool GetSelected();
	struct FFortStateStyle GetCurrentStateStyle();
	struct FSlateFontInfo GetCurrentFont();
	struct FMargin GetCurrentCustomPadding();
	struct FMargin GetCurrentButtonPadding();
	void ForceClick();
};


// Class FortniteUI.FortChatWidget
// 0x0048 (0x0170 - 0x0128)
class UFortChatWidget : public UNativeWidgetHost
{
public:
	unsigned char                                      MinimizeEnabled : 1;                                      // 0x0128(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AutoReleaseFocus : 1;                                     // 0x0129(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AllowEmotes : 1;                                          // 0x012A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x012B(0x0001) MISSED OFFSET
	float                                              ListFadeTime;                                             // 0x012C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinimizedChatMessageNum;                                  // 0x0130(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ThrottleChat : 1;                                         // 0x0134(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0135(0x0003) MISSED OFFSET
	float                                              ThrottleTicketTime;                                       // 0x0138(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	int                                                ThrottleTicketCount;                                      // 0x013C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    OnChatEnteredEvent;                                       // 0x0140(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUserListChanged;                                        // 0x0150(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0160(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortChatWidget");
		return ptr;
	}


	void SetControllerActionBrush(const struct FSlateBrush& SlateBrush);
	void FocusChatEntry();
};


// Class FortniteUI.FortCheatMenuFactory
// 0x0000 (0x0028 - 0x0028)
class UFortCheatMenuFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCheatMenuFactory");
		return ptr;
	}


	void STATIC_AddStoreCheatMenu(class UCommonUserWidget* Widget);
	void STATIC_AddGrantCheatMenu(class UCommonUserWidget* Widget, const struct FString& TemplateId, const struct FString& InstanceId);
};


// Class FortniteUI.FortCollectionBookGenericRewardWidget
// 0x0018 (0x0250 - 0x0238)
class UFortCollectionBookGenericRewardWidget : public UCommonUserWidget
{
public:
	unsigned char                                      bUpdateVisibilityBasedOnRewardExistence : 1;              // 0x0238(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0239(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData01[0x1];                                       // 0x0239(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortCollectionBookGenericRewardWidget.VisibilityWhenNoRewardSpecified
	unsigned char                                      UnknownData02[0x1];                                       // 0x023D(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortCollectionBookGenericRewardWidget.VisibilityWhenRewardSpecified
	unsigned char                                      UnknownData03[0x2];                                       // 0x023E(0x0002) MISSED OFFSET
	class UFortCollectionBookRewardCardWidget*         RewardCardWidget;                                         // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0248(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortCollectionBookGenericRewardWidget.RewardStatus

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookGenericRewardWidget");
		return ptr;
	}


	void SetRewardStatus();
	void SetRewards(const struct FFortRewardInfo& Rewards);
	void SetCurrentItemToDisplay(class UFortItem* ItemToDisplay);
	void OnRewardStatusChanged();
	bool HasRewards();
	void GetRewardStatus();
	void ClearRewards();
};


// Class FortniteUI.FortCollectionBookPageCompletionRewardWidget
// 0x0000 (0x0250 - 0x0250)
class UFortCollectionBookPageCompletionRewardWidget : public UFortCollectionBookGenericRewardWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookPageCompletionRewardWidget");
		return ptr;
	}

};


// Class FortniteUI.FortCollectionBookProgressionRewardWidget
// 0x0010 (0x0260 - 0x0250)
class UFortCollectionBookProgressionRewardWidget : public UFortCollectionBookGenericRewardWidget
{
public:
	class UCommonNumericTextBlock*                     LevelTextWidget;                                          // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonTextBlock*                            DisplayNameWidget;                                        // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookProgressionRewardWidget");
		return ptr;
	}


	void SetAssociatedLevel(int Level);
};


// Class FortniteUI.FortRewardInfoButton
// 0x0020 (0x08C0 - 0x08A0)
class UFortRewardInfoButton : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08A0(0x0008) MISSED OFFSET
	class UPanelWidget*                                ItemCardPanel;                                            // 0x08A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TEnumAsByte<EFortBrushSize>                        ItemCardSize;                                             // 0x08B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDisplayAsRewardCard : 1;                                 // 0x08B1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x08B2(0x0006) MISSED OFFSET
	class UFortItem*                                   ItemInstance;                                             // 0x08B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRewardInfoButton");
		return ptr;
	}


	void SetShowDescriptionBP(bool bInShowDescription);
	void SetShowDescription(bool bInShowDescription);
	void SetItemInstanceQuantityPair(const struct FFortItemInstanceQuantityPair& ItemQuantityPair);
	void HandleDifferentItemOrQuantitySetBP();
	int GetQuantity();
	class UFortItem* GetItemInstance();
};


// Class FortniteUI.FortRewardInfoWidget
// 0x0088 (0x02C0 - 0x0238)
class UFortRewardInfoWidget : public UCommonUserWidget
{
public:
	class UPanelWidget*                                RewardListWidget;                                         // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FMargin                                     RewardWidgetPadding;                                      // 0x0240(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0250(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0251(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShowDescription : 1;                                     // 0x0252(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAllowItemInteraction : 1;                                // 0x0253(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0254(0x0004) MISSED OFFSET
	class UClass*                                      OrWidgetType;                                             // 0x0258(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      RewardInfoButtonType;                                     // 0x0260(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0268(0x0020) MISSED OFFSET
	class UCommonButtonGroup*                          ButtonGroup;                                              // 0x0288(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0290(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRewardInfoWidget");
		return ptr;
	}


	void SetReward(const struct FFortRewardInfo& RewardsIn);
	void SetButtonGroup(class UCommonButtonGroup* InButtonGroup);
};


// Class FortniteUI.FortCollectionBookRewardModalWidget
// 0x0050 (0x0430 - 0x03E0)
class UFortCollectionBookRewardModalWidget : public UCommonActivatablePanel
{
public:
	class UFortRewardInfoWidget*                       RewardWidget;                                             // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortMaterialProgressBar*                    ProgressBar;                                              // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonTextBlock*                            ProgressTextWidget;                                       // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x03F8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookRewardModalWidget");
		return ptr;
	}

};


// Class FortniteUI.FortCollectionBookSectionCompletionRewardWidget
// 0x0050 (0x02A0 - 0x0250)
class UFortCollectionBookSectionCompletionRewardWidget : public UFortCollectionBookGenericRewardWidget
{
public:
	class UCommonButton*                               RewardDetailsButton;                                      // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TAssetPtr<class UClass>                            RewardDetailsModalWidgetClass;                            // 0x0258(0x0020) (CPF_Edit)
	struct FText                                       ModalTitle;                                               // 0x0278(0x0018) (CPF_Edit)
	class UFortCollectionBookRewardModalWidget*        RewardDetailsModalWidget;                                 // 0x0290(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortCollectionBookSection*                  Section;                                                  // 0x0298(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookSectionCompletionRewardWidget");
		return ptr;
	}


	void OnRewardDetailsButtonClicked(class UCommonButton* ClickedButton);
	void HandleRewardDetailsModalWidgetDeactivated(class UCommonActivatablePanel* DeactivatedPanel);
};


// Class FortniteUI.FortCollectionBookOverviewWidget
// 0x0040 (0x0278 - 0x0238)
class UFortCollectionBookOverviewWidget : public UCommonUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnCollectionBookPageSelected;                             // 0x0238(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCollectionBookPageClicked;                              // 0x0248(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UCommonTreeView*                             PageTreeViewWidget;                                       // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UFortCollectionBookCategory*>         CategoryObjectPool;                                       // 0x0260(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	class UFortCollectionBookPage*                     LastSelectedPage;                                         // 0x0270(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookOverviewWidget");
		return ptr;
	}


	void OnPageItemSelected(class UObject* Item, bool bSelected);
	void OnPageItemClicked(class UObject* Item);
	TArray<class UObject*> OnGetChildrenForPageCategory(class UObject* CategoryObject);
	void OnDeactivated();
	void OnActivated();
};


// Class FortniteUI.FortCollectionBookPageDetailsWidget
// 0x0068 (0x02A0 - 0x0238)
class UFortCollectionBookPageDetailsWidget : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                            PageCompletionText;                                       // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortMaterialProgressBar*                    ProgressBar;                                              // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortCollectionBookPageCompletionRewardWidget* PageRewardWidget;                                         // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonButton*                               RewardDetailsButton;                                      // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortCollectionBookPage*                     DetailsPage;                                              // 0x0258(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TAssetPtr<class UClass>                            RewardDetailsModalWidgetClass;                            // 0x0260(0x0020) (CPF_Edit)
	struct FText                                       ModalTitle;                                               // 0x0280(0x0018) (CPF_Edit)
	class UFortCollectionBookRewardModalWidget*        RewardDetailsModalWidget;                                 // 0x0298(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookPageDetailsWidget");
		return ptr;
	}


	void OnSlotItemComplete(class UFortAccountItem* SlottedItem, const struct FName& SlotId);
	void OnRewardDetailsButtonClicked(class UCommonButton* ClickedButton);
	void OnPageProgressionUpdated(int TotalFilledSlots, int TotalSlots);
	void OnDetailsPageChanged(class UFortCollectionBookPage* InNewDetailsPage);
	void HandleRewardDetailsModalWidgetDeactivated(class UCommonActivatablePanel* DeactivatedPanel);
};


// Class FortniteUI.FortCollectionBookPageListWidget
// 0x0030 (0x08D0 - 0x08A0)
class UFortCollectionBookPageListWidget : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08A0(0x0008) MISSED OFFSET
	class UCommonTextBlock*                            PageNameWidget;                                           // 0x08A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonNumericTextBlock*                     AvailableSlotsWidget;                                     // 0x08B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonTextBlock*                            PageCompletionWidget;                                     // 0x08B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TWeakObjectPtr<class UObject>                      AssociatedPageOrCategory;                                 // 0x08C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bIsExpanded : 1;                                          // 0x08C8(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookPageListWidget");
		return ptr;
	}


	void SetupAsPage(class UFortCollectionBookPage* Page);
	void SetupAsCategory(class UFortCollectionBookCategory* Category);
	void OnSlotItemComplete(class UFortAccountItem* SlottedItem, const struct FName& SlotId);
	void OnPageDetailsUpdated(int NumAvailableSlots);
	void OnExpansionChanged(bool bExpanded);
};


// Class FortniteUI.FortCollectionBookPrimaryPanel
// 0x00C0 (0x04A0 - 0x03E0)
class UFortCollectionBookPrimaryPanel : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCollectionBookPageClickedDelegate;                      // 0x03E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCollectionBookSectionClickedDelegate;                   // 0x03F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FDataTableRowHandle                         BackActionRowHandle;                                      // 0x0408(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         SummonInfoPanelActionRowHandle;                           // 0x0418(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	class UFortCollectionBookOverviewWidget*           OverviewWidget;                                           // 0x0428(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonTileView*                             SectionTileViewWidget;                                    // 0x0430(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0438(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortCollectionBookPrimaryPanel.CurrentNavTarget
	unsigned char                                      UnknownData02[0x7];                                       // 0x0439(0x0007) MISSED OFFSET
	class UFortCollectionBookSection*                  LastClickedSection;                                       // 0x0440(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x58];                                      // 0x0448(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookPrimaryPanel");
		return ptr;
	}


	void OnSummonInfoPanelExecuted(bool* bPassThrough);
	void OnInputMethodChanged(bool bUsingGamepad);
	void OnCollectionBookSectionClicked(class UFortCollectionBookSection* ClickedSection);
	void OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage);
	void OnCollectionBookPageClicked(class UFortCollectionBookPage* ClickedPage);
	void OnBackActionExecuted(bool* bPassThrough);
	void HandleSectionTileClicked(class UObject* Item);
};


// Class FortniteUI.FortCollectionBookProgressionRewardsPreviewWidget
// 0x0010 (0x0248 - 0x0238)
class UFortCollectionBookProgressionRewardsPreviewWidget : public UCommonUserWidget
{
public:
	class UFortCollectionBookProgressionRewardWidget*  NextRewardWidget;                                         // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortCollectionBookProgressionRewardWidget*  NextMajorRewardWidget;                                    // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookProgressionRewardsPreviewWidget");
		return ptr;
	}

};


// Class FortniteUI.FortCollectionBookProgressWidget
// 0x0058 (0x0290 - 0x0238)
class UFortCollectionBookProgressWidget : public UCommonUserWidget
{
public:
	int                                                CachedXPLevel;                                            // 0x0238(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              CachedXPCompletionPct;                                    // 0x023C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TAssetPtr<class UClass>                            RewardDetailsModalWidgetClass;                            // 0x0240(0x0020) (CPF_Edit)
	class UFortCollectionBookProgressionRewardsPreviewWidget* ProgressionRewardsPreviewWidget;                          // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonTextBlock*                            XPTextWidget;                                             // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonNumericTextBlock*                     LevelTextWidget;                                          // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonButton*                               DetailsButtonWidget;                                      // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortCollectionBookPageDetailsWidget*        PageDetailsWidget;                                        // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortCollectionBookProgressionRewardsModalWidget* DetailsModalWidget;                                       // 0x0288(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookProgressWidget");
		return ptr;
	}


	void OnSlottedItemOperationComplete(class UFortAccountItem* ItemSlotted, const struct FName& SlotId);
	void OnDetailsButtonClicked(class UCommonButton* ClickedButton);
	void OnCollectionBookPreviewXPChange(float PreviewCompletionPct);
	void OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage);
	void OnCollectionBookLevelProgressionChanged(float NewCompletionPct);
	void OnCollectionBookLevelChanged(int NewLevel);
	void HandleDetailsModalWidgetDeactivated(class UCommonActivatablePanel* DeactivatedPanel);
};


// Class FortniteUI.FortCollectionBookRecycleSlotResultsWidget
// 0x0018 (0x0250 - 0x0238)
class UFortCollectionBookRecycleSlotResultsWidget : public UCommonUserWidget
{
public:
	class UPanelWidget*                                RecycleResultsWidget;                                     // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TEnumAsByte<EFortBrushSize>                        ItemCardSize;                                             // 0x0240(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	class UFortAccountItem*                            ItemToRecycle;                                            // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookRecycleSlotResultsWidget");
		return ptr;
	}


	void SetCurrentItemToRecycle(class UFortAccountItem* InItemToRecycle);
};


// Class FortniteUI.FortCollectionBookRewardCardWidget
// 0x0080 (0x02B8 - 0x0238)
class UFortCollectionBookRewardCardWidget : public UCommonUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnDisplayedItemChangedEvent;                              // 0x0238(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UFortMultiSizeItemCard*                      ItemCardWidget;                                           // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidget*                                     MultiItemRewardOverlay;                                   // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidget*                                     ChoiceRewardOverlay;                                      // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              UpdateCardInterval;                                       // 0x0260(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortBrushSize>                        ItemCardSize;                                             // 0x0264(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDisplayAsRewardCard : 1;                                 // 0x0265(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0266(0x0002) MISSED OFFSET
	struct FFortRewardInfo                             RepresentedRewards;                                       // 0x0268(0x0030) (CPF_Transient)
	TArray<class UFortItem*>                           DummyItems;                                               // 0x0298(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	struct FTimerHandle                                UpdateCardTimer;                                          // 0x02A8(0x0008) (CPF_Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookRewardCardWidget");
		return ptr;
	}


	void SetRewards(const struct FFortRewardInfo& Rewards);
	void OnDisplayedItemChangedEvent__DelegateSignature(class UFortItem* DisplayedItem);
	bool HasRewards();
	void ClearRewards();
};


// Class FortniteUI.FortCollectionBookSectionPanel
// 0x0140 (0x0520 - 0x03E0)
class UFortCollectionBookSectionPanel : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPreviewXPChangeEvent;                                   // 0x03E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UCommonTextBlock*                            SectionNameTextWidget;                                    // 0x03F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortCollectionBookSlotView*                 SlotViewWidget;                                           // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortCollectionBookPicker*                   SlotItemPicker;                                           // 0x0408(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidget*                                     ContextOverlayWidget;                                     // 0x0410(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTextBlock*                                  ContextTextWidget;                                        // 0x0418(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortCollectionBookSectionCompletionRewardWidget* SectionRewardWidget;                                      // 0x0420(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidget*                                     ItemAcquisitionSourceContainerWidget;                     // 0x0428(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonTextBlock*                            ItemAcquisitionSourceDescWidget;                          // 0x0430(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonTextBlock*                            ItemAcquisitionSourceDesc2Widget;                         // 0x0438(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FDataTableRowHandle                         BackActionRowHandle;                                      // 0x0440(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         CloseActionRowHandle;                                     // 0x0450(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         SlotItemActionRowHandle;                                  // 0x0460(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         InspectItemActionRowHandle;                               // 0x0470(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         InspectCollectionBookItemActionRowHandle;                 // 0x0480(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         InspectPreviewItemActionRowHandle;                        // 0x0490(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         OpenPickerActionRowHandle;                                // 0x04A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         LogAllowedItemsActionRowHandle;                           // 0x04B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x1];                                       // 0x04C0(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortCollectionBookSectionPanel.CurrentNavTarget
	unsigned char                                      UnknownData02[0x7];                                       // 0x04C1(0x0007) MISSED OFFSET
	class UFortCollectionBookSection*                  AssociatedSection;                                        // 0x04C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bHasSummonedInspectPanel : 1;                             // 0x04D0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04D1(0x0003) MISSED OFFSET
	struct FFortDialogExternalLatentActionHandle       SlotConfirmationDialogLatentHandle;                       // 0x04D4(0x0004) (CPF_Transient)
	struct FScriptMulticastDelegate                    OnShowItemDetailEvent;                                    // 0x04D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSlotItemConfirmEvent;                                   // 0x04E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInspectItemEvent;                                       // 0x04F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData04[0x18];                                      // 0x0508(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookSectionPanel");
		return ptr;
	}


	void OnSlottedItemOperationComplete(class UFortAccountItem* SlottedItem, const struct FName& SlotId);
	void OnSlotPickerItemSelected(class UFortItem* SelectedItem);
	void OnSlotPickerItemHovered(class UFortItem* HoveredItem);
	void OnSlotItemConfirmationCompleted(class UFortItem* SelectedItem, const struct FName& SlotId, const struct FFortDialogExternalLatentActionHandle& LatentActionHandle);
	void OnSlotItemComplete(class UFortAccountItem* SlottedItem, const struct FName& SlotId);
	void OnSlotItemActionExecuted(bool* bPassThrough);
	void OnSlotButtonSelected(class UFortCollectionBookSlotButton* SlotButton);
	void OnSlotButtonCommitted(class UFortCollectionBookSlotButton* SlotButton);
	void OnSectionChanged(class UFortCollectionBookSection* Section);
	void OnOpenPickerActionExecuted(bool* bPassThrough);
	void OnLogAllowedItemsActionExecuted(bool* bPassThrough);
	void OnItemInspectAction__DelegateSignature(class UFortItem* SelectedItem, bool EnableItemActions, bool IsPlaceholderItem);
	void OnItemAction__DelegateSignature(class UFortItem* SelectedItem);
	void OnInspectActionExecuted(bool* bPassThrough);
	void OnInputMethodChanged(bool bUsingGamepad);
	void OnBackActionExecuted(bool* bPassThrough);
};


// Class FortniteUI.FortCollectionBookSlotWidget
// 0x0128 (0x0360 - 0x0238)
class UFortCollectionBookSlotWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0238(0x0010) MISSED OFFSET
	TEnumAsByte<EFortBrushSize>                        ItemCardSize;                                             // 0x0248(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsRewardCard : 1;                                        // 0x0249(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x024A(0x0006) MISSED OFFSET
	class UFortMultiSizeItemCard*                      ItemCardWidget;                                           // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidget*                                     UnslottedOverlayWidget;                                   // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidget*                                     ReadyToSlotOverlayWidget;                                 // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidget*                                     UnslottedButReadyOverlayWidget;                           // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       SlotRowName;                                              // 0x0270(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FText                                       ItemAvailableToSlotText;                                  // 0x0278(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       NoItemsAvailableToSlotText;                               // 0x0290(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       HigherQualityItemsAvailableToSlotAndUpgradeAvailableText; // 0x02A8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       HigherQualityItemsAvailableToSlotAndEvolveAvailableText;  // 0x02C0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       HigherQualityItemsAvailableToSlotText;                    // 0x02D8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       ItemInSlotFullyUpgradedText;                              // 0x02F0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       ItemInSlotCanBeUpgradedText;                              // 0x0308(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       ItemInSlotCanBeEvolvedText;                               // 0x0320(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UFortItem*                                   SlottedItemRepresentation;                                // 0x0338(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0340(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookSlotWidget");
		return ptr;
	}


	void OnSlottedItemOperationComplete(class UFortAccountItem* ItemSlotted, const struct FName& SlotId);
	void OnItemDestroyed();
	void FortCollectionBookSlottedItemUpdatedDelegate__DelegateSignature();
};


// Class FortniteUI.FortCollectionBookSectionTileWidget
// 0x0070 (0x0910 - 0x08A0)
class UFortCollectionBookSectionTileWidget : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08A0(0x0008) MISSED OFFSET
	TAssetPtr<class UClass>                            SlotWidgetClass;                                          // 0x08A8(0x0020) (CPF_Edit)
	struct FMargin                                     SlotWidgetPadding;                                        // 0x08C8(0x0010) (CPF_Edit)
	int                                                MaxNumSlotsSupported;                                     // 0x08D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08DC(0x0004) MISSED OFFSET
	class UHorizontalBox*                              SlotBoxWidget;                                            // 0x08E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonTextBlock*                            SectionNameWidget;                                        // 0x08E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortCollectionBookGenericRewardWidget*      SectionRewardWidget;                                      // 0x08F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortCollectionBookSection*                  AssociatedSection;                                        // 0x08F8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<class UFortCollectionBookSlotWidget*>       SlotWidgets;                                              // 0x0900(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookSectionTileWidget");
		return ptr;
	}


	void OnSectionSlotUpdate(int NumFilledSlots, int NumSlots);
	void OnItemSlotted(class UFortAccountItem* ItemSlotted, const struct FName& SlotId);
};


// Class FortniteUI.FortCollectionBookSlotButton
// 0x0008 (0x08A8 - 0x08A0)
class UFortCollectionBookSlotButton : public UCommonButton
{
public:
	class UFortCollectionBookSlotWidget*               CollectionBookSlotWidget;                                 // 0x08A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookSlotButton");
		return ptr;
	}


	void OnSlottedItemUpdated();
};


// Class FortniteUI.FortCollectionBookSlotDetailsWidget
// 0x0000 (0x0238 - 0x0238)
class UFortCollectionBookSlotDetailsWidget : public UCommonUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookSlotDetailsWidget");
		return ptr;
	}

};


// Class FortniteUI.FortCollectionBookSlotView
// 0x0138 (0x0370 - 0x0238)
class UFortCollectionBookSlotView : public UCommonUserWidget
{
public:
	TAssetPtr<class UClass>                            CollectionBookButtonClass;                                // 0x0238(0x0020) (CPF_Edit)
	class UHorizontalBox*                              CollectionBookButtonBox;                                  // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortCommittableButtonGroup*                 CollectionBookSlotButtonGroup;                            // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<class UFortCollectionBookSlotButton*>       CollectionBookSlotButtons;                                // 0x0268(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient)
	class UFortCollectionBookSection*                  AssociatedSection;                                        // 0x0278(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0280(0x00E0) MISSED OFFSET
	unsigned char                                      bCommitSelectedItemsOnClick : 1;                          // 0x0360(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0361(0x0003) MISSED OFFSET
	int                                                PreviousSelectedButtonIdx;                                // 0x0364(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentSelectedButtonIdx;                                 // 0x0368(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookSlotView");
		return ptr;
	}


	void OnSlotButtonCommitted(class UCommonButton* CommittedButton, int ButtonIdx);
	void OnSlotButtonClicked(class UCommonButton* ClickedButton, int ButtonIdx);
	void OnSelectedSlotButtonChanged(class UCommonButton* SelectedButton, int ButtonIdx);
};


// Class FortniteUI.FortCommittableButtonGroup
// 0x0010 (0x00A8 - 0x0098)
class UFortCommittableButtonGroup : public UCommonButtonGroup
{
public:
	struct FScriptMulticastDelegate                    OnButtonCommitted;                                        // 0x0098(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCommittableButtonGroup");
		return ptr;
	}

};


// Class FortniteUI.FortDailyRewardsItem
// 0x0010 (0x0248 - 0x0238)
class UFortDailyRewardsItem : public UCommonUserWidget
{
public:
	struct FFortDailyRewardsItemData                   ItemData;                                                 // 0x0238(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortDailyRewardsItem");
		return ptr;
	}

};


// Class FortniteUI.FortDailyRewardsSchedule
// 0x0098 (0x02D0 - 0x0238)
class UFortDailyRewardsSchedule : public UCommonUserWidget
{
public:
	struct FFortDailyRewardsScheduleData               ScheduleData;                                             // 0x0238(0x0098) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortDailyRewardsSchedule");
		return ptr;
	}

};


// Class FortniteUI.FortDailyRewards
// 0x0000 (0x03E0 - 0x03E0)
class UFortDailyRewards : public UCommonActivatablePanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortDailyRewards");
		return ptr;
	}


	bool TryGetDailyRewardsData(int ItemCardsPerSchedule, int MinEpicRewards, struct FFortDailyRewardsData* OutDailyRewardsData);
	void SetupDailyRewards();
	void FinishedClaiming();
	void ClaimResultReceived(TArray<struct FFortItemInstanceQuantityPair> Loot);
};


// Class FortniteUI.FortExpeditionBuildSquadWidget
// 0x0060 (0x0440 - 0x03E0)
class UFortExpeditionBuildSquadWidget : public UCommonActivatablePanel
{
public:
	struct FName                                       CurrentSquadId;                                           // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortSquadSlotsView*                         ExpeditionSquadSlotsView;                                 // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortSquadSlotDetailsPanel*                  ExpeditionSquadSlotDetails;                               // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortSquadSlotItemPicker*                    ExpeditionSquadSlotPicker;                                // 0x03F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortItemViewContext_ExpeditionSquadSlotsView* ItemViewContext_ExpeditionSlotsView;                      // 0x0400(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortItemViewContext_ExpeditionSquadSlotItemPicker* ItemViewContext_ExpeditionSlotItemPicker;                 // 0x0408(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0410(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortExpeditionBuildSquadWidget");
		return ptr;
	}


	bool StartExpedition();
	void SetData(class UFortExpeditionItem* InItem);
	void SetCurrentSquadId(const struct FName& SquadId);
	void OnStartExpeditionCompleted();
	void OnRequestClosePicker();
	void OnRefreshBuildSquadWidget();
	bool IsSquadSlotLocked(int SlotIndex);
	bool IsExpeditionValidToStart();
	void HandleStartExpeditionCompleted(class UFortExpeditionItem* Expedition, bool bSucceeded);
	void HandleDifferentSquadSlotSelected(int SquadSlotIndex);
	void ClearTemporaryExpeditionSquadState(bool bPreviewOnly);
};


// Class FortniteUI.FortExpeditionDetailsWidget
// 0x0040 (0x0278 - 0x0238)
class UFortExpeditionDetailsWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>          Item;                                                     // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortSquadSlotsView*                         ExpeditionSquadSlotsView;                                 // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       CurrentSquadId;                                           // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortItemViewContext_ExpeditionSquadSlotsView* ItemViewContext_ExpeditionSlotsView;                      // 0x0250(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0258(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortExpeditionDetailsWidget");
		return ptr;
	}


	void SetData(class UFortExpeditionItem* InItem);
	void SetCurrentSquadId(const struct FName& SquadId);
	void OnAbandonExpeditionCompleted();
	void HandleAbandonExpeditionCompleted(class UFortExpeditionItem* Expedition, bool bSuccess);
	void AbandonExpedition();
};


// Class FortniteUI.FortExpeditionExpiresWidget
// 0x0010 (0x0248 - 0x0238)
class UFortExpeditionExpiresWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>          Item;                                                     // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0240(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortExpeditionExpiresWidget");
		return ptr;
	}


	void SetData(class UFortExpeditionItem* InItem);
	void OnExpeditionExpirationUpdated();
};


// Class FortniteUI.FortExpeditionListItemWidget
// 0x0018 (0x08B8 - 0x08A0)
class UFortExpeditionListItemWidget : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08A0(0x0008) MISSED OFFSET
	TWeakObjectPtr<class UFortExpeditionItem>          Item;                                                     // 0x08A8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x08B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortExpeditionListItemWidget");
		return ptr;
	}


	void OnItemChanged();
};


// Class FortniteUI.FortExpeditionListViewWidget
// 0x0038 (0x0270 - 0x0238)
class UFortExpeditionListViewWidget : public UCommonUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnExpeditionSelected;                                     // 0x0238(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnExpeditionListViewRefreshed;                            // 0x0248(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UCommonListView*                             ExpeditionListView;                                       // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       CurrentTabNameId;                                         // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0268(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortExpeditionListViewWidget.SortType

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortExpeditionListViewWidget");
		return ptr;
	}


	void SetExpeditionListSortType();
	void HandleListItemSelected(class UObject* Item, bool bSelected);
	struct FText GetExpeditionListSortName();
};


// Class FortniteUI.FortExpeditionMasterWidget
// 0x0080 (0x0460 - 0x03E0)
class UFortExpeditionMasterWidget : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x03E0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortExpeditionMasterWidget");
		return ptr;
	}

};


// Class FortniteUI.FortExpeditionOverviewWidget
// 0x0028 (0x0260 - 0x0238)
class UFortExpeditionOverviewWidget : public UCommonUserWidget
{
public:
	class UClass*                                      TabButtonType;                                            // 0x0238(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FExpeditionTabInfo>                  TabListRegistrationInfo;                                  // 0x0240(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	class UFortTabListWidgetBase*                      ExpeditionTabList;                                        // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortExpeditionListViewWidget*               ExpeditionListView;                                       // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortExpeditionOverviewWidget");
		return ptr;
	}


	void UpdateExpeditionTabs();
	void OnExpeditionTabSelected(const struct FName& TabNameID);
	void OnExpeditionOverviewRefresh();
	void HandleExpeditionTabSelected(const struct FName& TabNameID);
	void HandleExpeditionTabButtonCreated(const struct FName& TabNameID, class UCommonButton* TabButton);
};


// Class FortniteUI.FortExpeditionPickVehicleWidget
// 0x0000 (0x03E0 - 0x03E0)
class UFortExpeditionPickVehicleWidget : public UCommonActivatablePanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortExpeditionPickVehicleWidget");
		return ptr;
	}


	void SetData(class UFortExpeditionItem* InItem);
};


// Class FortniteUI.FortExpeditionReturnsWidget
// 0x0010 (0x0248 - 0x0238)
class UFortExpeditionReturnsWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>          Item;                                                     // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0240(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortExpeditionReturnsWidget");
		return ptr;
	}


	void SetData(class UFortExpeditionItem* InItem);
	void OnExpeditionInProgressUpdated();
};


// Class FortniteUI.FortExpeditionRewardsWidget
// 0x0028 (0x0260 - 0x0238)
class UFortExpeditionRewardsWidget : public UCommonUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnAllExpeditionsCollected;                                // 0x0238(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UCommonTileView*                             RewardsTileView;                                          // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      bPendingCollection : 1;                                   // 0x0250(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0251(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortExpeditionRewardsWidget");
		return ptr;
	}


	void RefreshRewardsUI(class UFortExpeditionItem* Expedition, bool bExpeditionSucceeded, TArray<struct FFortItemInstanceQuantityPair> Rewards);
	void ProcessNextReward();
	void HandleCollectionExpeditionCompleted(bool bMcpSuccess, class UFortExpeditionItem* Expedition, bool bExpeditionSuccess, TArray<struct FFortItemInstanceQuantityPair> Rewards);
};


// Class FortniteUI.FortExpeditionSummaryWidget
// 0x0040 (0x0278 - 0x0238)
class UFortExpeditionSummaryWidget : public UCommonUserWidget
{
public:
	int                                                AvailableExpeditions;                                     // 0x0238(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CompletedExpeditions;                                     // 0x023C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LandVehicles;                                             // 0x0240(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LandVehiclesAvailable;                                    // 0x0244(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AirVehicles;                                              // 0x0248(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AirVehiclesAvailable;                                     // 0x024C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SeaVehicles;                                              // 0x0250(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SeaVehiclesAvailable;                                     // 0x0254(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UFortExpeditionItem*>                 InProgressExpeditions;                                    // 0x0258(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0268(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortExpeditionSummaryWidget");
		return ptr;
	}


	void OnRefreshSummaryWidget();
};


// Class FortniteUI.FortExpeditionUtilities
// 0x0000 (0x0028 - 0x0028)
class UFortExpeditionUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortExpeditionUtilities");
		return ptr;
	}


	int STATIC_TotalUnseenExpeditionsForTab(class UWidget* Widget, const struct FName& TabNameID);
	bool STATIC_IsSquadOnExpedition(class UWidget* Widget, const struct FName& SquadId);
	struct FGameplayTag STATIC_GetVehicleTagRequiredForExpedition(class UFortExpeditionItem* Expedition);
	bool STATIC_GetVehicleTagFromSquadId(const struct FName& SquadId, struct FGameplayTag* OutFoundVehicleTag);
	void STATIC_GetTotalExpeditionVehiclesAvailable(class UWidget* Widget, class AFortPlayerController* FortPC, int* OutLandVehicles, int* OutLandVehiclesAvailable, int* OutSeaVehicles, int* OutSeaVehiclesAvailable, int* OutAirVehicles, int* OutAirVehiclesAvailable);
	void STATIC_GetMatchedCriteriaTags(class UFortExpeditionItem* Expedition, TArray<class UFortItem*> SlottedItems, TArray<struct FGameplayTag>* OutMatchedCriteria);
	bool STATIC_GetExpeditionSquadsThatMatchRequirements(const struct FGameplayTagContainer& RequirementTags, class AFortPlayerController* FortPC, TArray<struct FName>* OutExpeditionSquadIds);
	float STATIC_GetExpeditionSquadPower(class AFortPlayerController* FortPC, const struct FName& SquadId);
	void STATIC_GetAllExpeditionSquadIds(TArray<struct FName>* OutExpeditionSquadIds);
	float STATIC_CalculateTotalPower(class AFortPlayerController* FortPC, class UFortExpeditionItem* Expedition, const struct FName& SquadId, TArray<class UFortItem*> SlottedItems);
	void STATIC_CalculateGlobalAndItemRatingModValuesBP(class UFortExpeditionItem* Expedition, TArray<class UFortItem*> SlottedItems, float* GlobalPowerMod, TArray<float>* SlottedItemMods);
	float STATIC_CalculateExpeditionPercentageChanceForSuccess(class UFortExpeditionItem* Expedition, float TotalPower);
	bool STATIC_AreExpeditionsUnlocked(class UObject* WorldContextObject, const struct FUniqueNetIdRepl& UniqueId);
	bool STATIC_AreAnyExpeditionsComplete(class UWidget* Widget);
};


// Class FortniteUI.FortExpeditionVehicleTileItemWidget
// 0x0010 (0x08B0 - 0x08A0)
class UFortExpeditionVehicleTileItemWidget : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08A0(0x0008) MISSED OFFSET
	TWeakObjectPtr<class UObject>                      SquadId;                                                  // 0x08A8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortExpeditionVehicleTileItemWidget");
		return ptr;
	}

};


// Class FortniteUI.FortSkillTreeCanvasEntityInterface
// 0x0000 (0x0028 - 0x0028)
class UFortSkillTreeCanvasEntityInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSkillTreeCanvasEntityInterface");
		return ptr;
	}


	void PlayOutroTransitionBP();
	void PlayIntroTransitionBP();
};


// Class FortniteUI.FortSkillTreeNodeDisplayDataRegistry
// 0x0070 (0x0098 - 0x0028)
class UFortSkillTreeNodeDisplayDataRegistry : public UDataAsset
{
public:
	TMap<struct FName, struct FFortSkillTreeNodeDisplayData> SkillTreeNodeStyleIdToDisplayDataMap;                     // 0x0028(0x0050) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSkillTreeNodeDisplayDataRegistry");
		return ptr;
	}

};


// Class FortniteUI.FortSkillTreeCanvasNode
// 0x0028 (0x08C8 - 0x08A0)
class UFortSkillTreeCanvasNode : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08A0(0x0008) MISSED OFFSET
	struct FName                                       PageId;                                                   // 0x08A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FName                                       NodeID;                                                   // 0x08B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      ShouldHideConnectorsToDependents : 1;                     // 0x08B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x08B9(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSkillTreeCanvasNode");
		return ptr;
	}


	bool TryGetStaticSkillTreeNodeData(struct FHomebaseNode* OutNodeData);
	bool TryGetSkillTreeNodeState(struct FHomebaseNodeState* OutNodeState);
	bool TryGetNodeDisplayData(struct FFortSkillTreeNodeDisplayData* OutDisplayData);
	void HandleSkillTreeNodeStateChanged();
};


// Class FortniteUI.FortKeybindWidget
// 0x0058 (0x0290 - 0x0238)
class UFortKeybindWidget : public UCommonUserWidget
{
public:
	struct FName                                       BoundAction;                                              // 0x0238(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bForcedHoldKeybind : 1;                                   // 0x0240(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0241(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortKeybindWidget.ForcedHoldKeybindStatus
	unsigned char                                      bIsHoldKeybind : 1;                                       // 0x0242(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bShowKeybindBorder : 1;                                   // 0x0243(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShowTimeCountDown : 1;                                   // 0x0244(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0245(0x0003) MISSED OFFSET
	struct FKey                                        BoundKey;                                                 // 0x0248(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UImage*                                      HoldKeybindImage;                                         // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonTextBlock*                            TextCountdown;                                            // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidgetSwitcher*                             KeyCountdownSwitcher;                                     // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       PercentageMaterialParameterName;                          // 0x0278(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    ProgressPercentageMID;                                    // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0288(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortKeybindWidget");
		return ptr;
	}


	void UpdateKeybindWidget();
	void Update();
	void StopHoldProgress(const struct FName& HoldActionName, bool bCompletedSuccessfully);
	void StartHoldProgress(const struct FName& HoldActionName, float HoldDuration);
	void SetShowProgressCountDown(bool bShow);
	void SetForcedHoldKeybindStatus();
	void SetForcedHoldKeybind(bool InForcedHoldKeybind);
	void SetBoundAction(const struct FName& NewBoundAction);
	bool IsHoldKeybind();
	bool GetBrushForKey(TEnumAsByte<EFortBrushSize> BrushSize, struct FSlateBrush* Brush);
};


// Class FortniteUI.FortItemInspectionScreen
// 0x0000 (0x03E0 - 0x03E0)
class UFortItemInspectionScreen : public UCommonActivatablePanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemInspectionScreen");
		return ptr;
	}


	void OpenItemInspect(class UFortItem* ItemToInspect, bool ShouldAllowUpgrading, bool ShouldAllowEvolution, bool ShouldAllowFavorite, bool IsTemporaryItem);
};


// Class FortniteUI.FortSkillTreeViewer
// 0x00C0 (0x04A0 - 0x03E0)
class UFortSkillTreeViewer : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET
	struct FMargin                                     PageDisplayAreaMargins;                                   // 0x03E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UFortSkillTreePageWidget*                    CurrentPageWidget;                                        // 0x03F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UOverlay*                                    PageHostOverlay;                                          // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FDataTableRowHandle                         BackOutInputAction;                                       // 0x0408(0x0010) (CPF_Edit)
	TMap<struct FName, class UFortSkillTreePageWidget*> PageIdToWidgetCache;                                      // 0x0418(0x0050) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient)
	float                                              ZoomLevel;                                                // 0x0468(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x34];                                      // 0x046C(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSkillTreeViewer");
		return ptr;
	}


	bool TryGetSkillTreePageStaticData(struct FHomebaseNodePage* OutData);
	void ShowPage(const struct FName& SkillTreePageId);
	void OnNodeSelectionChanged__DelegateSignature();
	void NavigateTo(const struct FName& SkillTreeNodeId, bool ShouldSelectNode);
	void HandleViewParametersChangedBP();
	void HandleNodeSelectionChangedBP();
	void HandleDifferentPageShown();
	void HandleBackOutAction(bool* PassThrough);
	void GetViewParameters(struct FVector2D* OutPanOffset, float* OutZoomLevel);
	struct FName GetSelectedNodeId();
	int GetPageTotalNodes(const struct FName& SkillTreePageId);
	bool GetPageLocked(const struct FName& SkillTreePageId);
	int GetPageAquiredNodes(const struct FName& SkillTreePageId);
	void DrillDownToSubPage(const struct FName& DrillDownSkillTreeNodeId);
	bool CanBackOutOfSubPage();
	void BackOutOfSubPage();
};


// Class FortniteUI.FortUIDataConfiguration
// 0x0B20 (0x0B48 - 0x0028)
class UFortUIDataConfiguration : public UPrimaryDataAsset
{
public:
	struct FString                                     DefaultUIDataConfigurationPath;                           // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_Config)
	struct FString                                     MobileUIDataConfigurationPath;                            // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TAssetPtr<class UClass>                            StateWidgetClasses[0xA];                                  // 0x0048(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<TAssetPtr<class UClass>>                    CachedWidgetClasses;                                      // 0x0188(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TMap<TEnumAsByte<EFortBrushSize>, int>             StandardImageBrushSizes;                                  // 0x0198(0x0050) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TAssetPtr<class UFortMultiSizeBrushAsset>          PowerRatingIconMultiSizeBrush;                            // 0x01E8(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLinearColor                                PowerRatingEnchantedPositiveColorOverride;                // 0x0208(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                PowerRatingEnchantedNegativeColorOverride;                // 0x0218(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TAssetPtr<class UFortMultiSizeBrushAsset>          FilledTierPipMultiSizeBrush;                              // 0x0228(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UFortMultiSizeBrushAsset>          UnfilledTierPipMultiSizeBrush;                            // 0x0248(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UFortMultiSizeBrushAsset>          PreviewingTierPipMultiSizeBrush;                          // 0x0268(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UFortMultiSizeBrushAsset>          UpgradeArrowMultiSizeBrush;                               // 0x0288(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UFortMultiSizeBrushAsset>          ComparisonUpArrowMultiSizeBrush;                          // 0x02A8(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLinearColor                                BetterComparisonResultColor;                              // 0x02C8(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                WorseComparisonResultColor;                               // 0x02D8(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TAssetPtr<class UFortMultiSizeBrushAsset>          InventoryOverflowIndicatorMultiSizeBrush;                 // 0x02E8(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UFortMultiSizeBrushAsset>          TrackedSchematicIndicatorMultiSizeBrush;                  // 0x0308(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UFortMultiSizeBrushAsset>          FavoritedItemIndicatorMultiSizeBrush;                     // 0x0328(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bEnableSocialFeatures : 1;                                // 0x0348(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bEnableChat : 1;                                          // 0x0349(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bEnablePartyFeatures : 1;                                 // 0x034A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x034B(0x0005) MISSED OFFSET
	TAssetPtr<class UFortMultiSizeBrushAsset>          UnlockedSquadSlotBorderMultiSizeBrush;                    // 0x0350(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UFortMultiSizeBrushAsset>          LockedSquadSlotBorderMultiSizeBrush;                      // 0x0370(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UFortMultiSizeBrushAsset>          ReadOnlySquadSlotBorderMultiSizeBrush;                    // 0x0390(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UFortMultiSizeBrushAsset>          DefenderIconMultiSizeBrush;                               // 0x03B0(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UFortMultiSizeBrushAsset>          AssaultDefenderIconMultiSizeBrush;                        // 0x03D0(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UFortMultiSizeBrushAsset>          PistolDefenderIconMultiSizeBrush;                         // 0x03F0(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UFortMultiSizeBrushAsset>          MeleeDefenderIconMultiSizeBrush;                          // 0x0410(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UFortMultiSizeBrushAsset>          SniperDefenderIconMultiSizeBrush;                         // 0x0430(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UFortMultiSizeBrushAsset>          ShotgunDefenderIconMultiSizeBrush;                        // 0x0450(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UFortMultiSizeBrushAsset>          LeadSurvivorIconMultiSizeBrush;                           // 0x0470(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UFortMultiSizeBrushAsset>          SurvivorIconMultiSizeBrush;                               // 0x0490(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UClass>                            KeybindWidgetClass;                                       // 0x04B0(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UClass>                            HiddenCursorWidget;                                       // 0x04D0(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UClass>                            VirtualCursorWidget;                                      // 0x04F0(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0510(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortUIDataConfiguration.ReturnToFrontendBehavior
	unsigned char                                      UnknownData02[0x3];                                       // 0x0511(0x0003) MISSED OFFSET
	float                                              SkillTreeMinimumZoomLevel;                                // 0x0514(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkillTreeMaximumZoomLevel;                                // 0x0518(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkillTreeZoomLevelIncrement;                              // 0x051C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkillTreeZoomLevelIncrementController;                    // 0x0520(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkillTreeZoomLevelIncrementMobile;                        // 0x0524(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FFortSkillTreeCanvasStyle                   SkillTreeCanvasStyle;                                     // 0x0528(0x0034) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x4];                                       // 0x055C(0x0004) MISSED OFFSET
	TAssetPtr<class UClass>                            DefaultSkillTreeNodeWidgetType;                           // 0x0560(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData04[0x50];                                      // 0x0580(0x0050) UNKNOWN PROPERTY: MapProperty FortniteUI.FortUIDataConfiguration.SkillTreeNodeWidgetTypeMap
	TMap<TEnumAsByte<EFortBrushSize>, class UClass*>   ItemCardPowerRatingTextStylesByBrushSize;                 // 0x05D0(0x0050) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TMap<TEnumAsByte<EFortBrushSize>, class UClass*>   ItemCardStackCountTextStylesByBrushSize;                  // 0x0620(0x0050) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TAssetPtr<class UMaterialInterface>                ItemCardLevelMeterMaterial;                               // 0x0670(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UMaterialInterface>                ItemCardDurabilityMeterMaterial;                          // 0x0690(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FSlateBrush                                 ItemCardBackgroundPlateBrush;                             // 0x06B0(0x0090) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FSlateBrush                                 ItemCardRarityGradientBrush;                              // 0x0740(0x0090) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FSlateBrush                                 ItemCardDefenderPortraitBackgroundBrush;                  // 0x07D0(0x0090) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FSlateBrush                                 ItemCardHeroPortraitBackgroundBrush;                      // 0x0860(0x0090) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FSlateBrush                                 ItemCardLeadSurvivorPortraitBackgroundBrush;              // 0x08F0(0x0090) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FSlateBrush                                 ItemCardSchematicBackgroundBrush;                         // 0x0980(0x0090) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UFortMultiSizeBrushAsset>          ItemCardRewardTraitsBackgroundMultiSizeBrush;             // 0x0A10(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UFortMultiSizeBrushAsset>          ItemCardSchematicTraitsBackgroundMultiSizeBrush;          // 0x0A30(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UClass>                            FrontendItemManagementScreenType;                         // 0x0A50(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UClass>                            FrontendItemInspectionScreenType;                         // 0x0A70(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UClass>                            SkillTreeViewerScreenType;                                // 0x0A90(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UClass>                            HeroSquadManagementScreenType;                            // 0x0AB0(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UClass>                            SurvivorSquadManagementScreenType;                        // 0x0AD0(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UClass>                            DefenderSquadManagementScreenType;                        // 0x0AF0(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TAssetPtr<class UClass>                            MainTabSet;                                               // 0x0B10(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bLimitedToES2Features : 1;                                // 0x0B30(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0B31(0x0007) MISSED OFFSET
	struct FWeightedBlendables                         FrontEndFFPostProcessMaterials;                           // 0x0B38(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIDataConfiguration");
		return ptr;
	}


	class UFortMultiSizeBrushAsset* STATIC_GetDefenderSubtypeIconMultiSizeBrushByTag(const struct FGameplayTag& DefenderSubtypeTag);
};


// Class FortniteUI.FortFrontEndContext
// 0x0220 (0x0248 - 0x0028)
class UFortFrontEndContext : public UBlueprintContextBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFrontEndCameraChanged;                                  // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyEmptyPlayerClicked;                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyPlayerGadgetsClicked;                              // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyPlayerPadHovered;                                  // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyPlayerPadUnhovered;                                // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyPlayerHovered;                                     // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyPlayerUnhovered;                                   // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyPlayerSelected;                                    // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyPlayerUnselected;                                  // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTheaterPinClicked;                                      // 0x00C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSetPreviewedSceneTheater;                               // 0x00D0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTheaterSelected;                                        // 0x00E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTheaterDataChanged;                                     // 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTheaterTileClicked;                                     // 0x0100(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTheaterTileUnselected;                                  // 0x0110(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRecruitHero;                                            // 0x0120(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerLoggedIn;                                         // 0x0130(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerLoggedOut;                                        // 0x0140(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FFortFrontEndFeatureStruct                  Features[0x9];                                            // 0x0150(0x0018) (CPF_Transient)
	struct FFortSavedModeLoadout                       CachedModeLoadout;                                        // 0x0228(0x0020) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortFrontEndContext");
		return ptr;
	}


	void ViewVaultItem(class UFortItem* ItemToView);
	void UpdateNewAccountItemBangCounts(class UFortInventoryContext* InventoryContext);
	bool TryGetAttributeInfo(const struct FGameplayAttribute& GameplayAttribute, struct FFortAttributeInfo* OutAttribute);
	void SkipInitialBenchmark();
	bool ShouldShowLoginMessage();
	bool ShouldRunInitialBenchmark();
	void SetSelectedTheater(const struct FString& TheaterId);
	void SetSeenLoginMessage();
	void SetPersonalHeroChoice(class UFortHero* Hero);
	void SetHeroChoice(int PartyMemberIndex, class UFortHero* Hero);
	void SetFrontEndCamera();
	void SendPlayQuestAnalytic(class UFortQuestItem* QuestItem);
	void SendFrontendEnteredEvent();
	bool SelectTileForQuest(class UFortQuestItem* QuestItem, float* OutCriticalMissionDifficultyOverrideMin, float* OutCriticalMissionDifficultyOverrideMax);
	void SelectGadgetForSlot(int Slot, class UFortItemDefinition* GadgetDefinition);
	void SelectDefaultTheaterTile();
	void SelectDefaultTheater();
	void RunBenchmarkAndApplyBestSettings();
	void PushContentWidget_Adv(class UWidget* Widget, bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
	void PlayLevelUpEffect();
	void PlayEvolutionEffect();
	bool IsActiveTileMissionValid();
	class UClass* GetUITestingClass();
	bool GetTileMissionDetails(class AFortTheaterMapTile* Tile, struct FFortMissionDetails* MissionDetails);
	void GetTheaterType(const struct FString& TheaterId);
	int GetTheaterRegionCount(const struct FString& TheaterId);
	struct FText GetTheaterName(const struct FString& TheaterId);
	bool GetTheaterData(const struct FString& TheaterId, struct FFortTheaterMapData* OutTheaterData);
	struct FString GetSelectedTheaterId();
	bool GetSelectedTheaterData(struct FFortTheaterMapData* OutTheaterData);
	void GetSelectableGadgets(TArray<class UFortWorldItem*>* SelectableGadgets, TArray<class UFortWorldItem*>* LastSelectedGadgets);
	void GetReturnToFrontendBehavior();
	struct FText GetRequirementText(const struct FFortRequirementsInfo& InRequirements);
	TArray<struct FGameDifficultyInfo> GetRecommendedTeamDifficulties();
	TArray<int> GetRecommendedDifficultyIndexesInAvailableDifficulties(bool bIncludeMissionAlertTiles);
	void GetOutpostStructureUpgradeCost(int TheaterSlot, int UpgradeLevel, class UFortOutpostItemDefinition* OutpostStructure, TArray<struct FFortItemQuantityPair>* OutWorldItems, TArray<struct FFortItemQuantityPair>* OutAccountItems);
	int GetOutpostStructureMaxLevel(int TheaterSlot, class UFortOutpostItemDefinition* OutpostStructure);
	bool GetOutpostCoreLevelByTheaterId(const struct FString& TheaterId, int* OutCoreLevel);
	bool GetOutpostCoreLevelByItemDefinition(class UFortOutpostItemDefinition* OutpostCoreItemDef, int* OutCoreLevel);
	struct FGameDifficultyInfo GetMaxAvailableDifficulty(bool bIncludeMissionAlertTiles);
	class UFortItemDefinition* GetItemFromItemQuantityPair(const struct FFortItemQuantityPair& InPair);
	class AFortPlayerPawn* GetHeroPlayerPawnForCurrentDisplayedItem();
	class AFortPlayerPawn* GetHeroPlayerPawnByIndex(int PartyMemberIndex);
	class UFortWorldItemDefinition* GetHarvestingToolForLevel(int TheaterSlot, int InHarvestingOptimizerLevel);
	void GetFrontEndCamera();
	void GetFeatureState();
	int GetFabricatorStoredGooAmount(int TheaterSlot);
	int GetFabricatorIncomingGooAmount(int TheaterSlot);
	int GetFabricatorDisintegrationSecondsRemaining(int TheaterSlot);
	void GetDesiredPlayButtonCamera();
	struct FName GetDefenderSquadIDByTheaterID(const struct FString& TheaterId);
	struct FText GetCurrentTheaterName();
	TArray<struct FGameDifficultyInfo> GetAvailableDifficulties(bool bIncludeMissionAlertTiles);
	struct FFortMultiSizeBrush GetAttributeIcon(const struct FFortAttributeInfo& InAttribute, const struct FGameplayTagContainer& InRequiredTags);
	struct FText GetAttributeDisplayName(const struct FFortAttributeInfo& InAttribute, const struct FGameplayTagContainer& InRequiredTags);
	struct FText GetAttributeDescription(const struct FFortAttributeInfo& InAttribute, const struct FGameplayTagContainer& InRequiredTags);
	bool GetAllTheaterData(TArray<struct FFortTheaterMapData>* OutAllTheaterData);
	bool GetActiveTileMissionDetails(struct FFortMissionDetails* MissionDetails);
	class AFortTheaterMapTile* GetActiveTile();
	void GetAccountLevelUpRewards(int AccountLevel, TArray<struct FFortItemQuantityPair>* Rewards);
	void ForceSetFeatureState();
	void ClearSelectedTheater();
	bool CanFindTileForQuest(class UFortQuestItem* QuestItem);
	bool CanCompleteQuestInActiveTileMission(class UFortQuestItem* QuestItem);
	void BindToFeatureStateAndInitialize(const struct FScriptDelegate& Delegate);
};


// Class FortniteUI.FortGridPickerTile
// 0x0010 (0x0250 - 0x0240)
class UFortGridPickerTile : public UFortUserWidget
{
public:
	class UObject*                                     Data;                                                     // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortGridWidgetBase*                         Owner;                                                    // 0x0248(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortGridPickerTile");
		return ptr;
	}


	void SetData(class UObject* InData);
	void OnMouseLeave();
	void OnMouseEnter();
	void OnClicked();
	void ForwardClicked();
};


// Class FortniteUI.FortGridWidgetBase
// 0x0150 (0x0280 - 0x0130)
class UFortGridWidgetBase : public UContentWidget
{
public:
	class UClass*                                      ClearWidgetType;                                          // 0x0130(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TileWidth;                                                // 0x0138(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TileHeight;                                               // 0x013C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TilesAcross;                                              // 0x0140(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TilesDown;                                                // 0x0144(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShrinkToFit : 1;                                         // 0x0148(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0149(0x0003) MISSED OFFSET
	float                                              PeekOverflowTilePercentage;                               // 0x014C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMargin                                     TilePadding;                                              // 0x0150(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FSlateBrush                                 GridBackground;                                           // 0x0160(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FMargin                                     GridBackgroundPadding;                                    // 0x01F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TArray<class UObject*>                             DataProvider;                                             // 0x0200(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FScriptMulticastDelegate                    OnTileGenerated;                                          // 0x0210(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTileClicked;                                            // 0x0220(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMouseEnterTile;                                         // 0x0230(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMouseLeaveTile;                                         // 0x0240(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UClass*                                      TileWidgetType;                                           // 0x0250(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0258(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortGridWidgetBase.SortKind
	unsigned char                                      bReversed : 1;                                            // 0x0259(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x025A(0x0006) MISSED OFFSET
	struct FScriptDelegate                             GetSortKeyFor;                                            // 0x0260(0x000A) (CPF_Edit, CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData03[0x6];                                       // 0x025A(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData04[0x10];                                      // 0x0270(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortGridWidgetBase");
		return ptr;
	}


	void SetTileWidth(float Width);
	void SetTilesDown(int Down);
	void SetTilesAcross(int Across);
	void SetTilePadding(const struct FMargin& Padding);
	void SetTileHeight(float Height);
	void SetPeekOverflowTilePercentage(float Percent);
	void SetDataProvider(TArray<class UObject*> Data);
	void SetClearWidgetType(class UClass* InClearWidgetType);
	TArray<class UFortGridPickerTile*> GetTiles();
	class UFortGridPickerTile* GetTileForObject(class UObject* Object);
};


// Class FortniteUI.FortGridPickerButton
// 0x0048 (0x02C8 - 0x0280)
class UFortGridPickerButton : public UFortGridWidgetBase
{
public:
	TEnumAsByte<EMenuPlacement>                        GridPlacement;                                            // 0x0280(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0281(0x0007) MISSED OFFSET
	class UFortGridPickerGrid*                         GridWidget;                                               // 0x0288(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      bCloseOnTileClicked : 1;                                  // 0x0290(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	struct FScriptDelegate                             GridWidgetDelegate;                                       // 0x0298(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0291(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnGridPickerOpenChanged;                                  // 0x02A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData03[0x10];                                      // 0x02B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortGridPickerButton");
		return ptr;
	}


	void SetIsOpen(bool ShouldBeOpen);
	void OnIsGridPickerOpenChanged__DelegateSignature(bool IsOpen);
	void OnButtonClicked();
	class UFortGridPickerGrid* CreateGridWidget__DelegateSignature();
};


// Class FortniteUI.FortGridWidget
// 0x0010 (0x0290 - 0x0280)
class UFortGridWidget : public UFortGridWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0280(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortGridWidget");
		return ptr;
	}

};


// Class FortniteUI.FortHeroManagementContext
// 0x00B0 (0x00D8 - 0x0028)
class UFortHeroManagementContext : public UBlueprintContextBase
{
public:
	struct FScriptMulticastDelegate                    OnPlayerDataUpdated;                                      // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMcpHeroDeleteResponse;                                  // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMcpHeroCreateResponse;                                  // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCurrentHeroChanged;                                     // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMcpAbilityChangeRequestResponse;                        // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMcpAbilityChangeRequestSent;                            // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAbilitySelectionRolledBack;                             // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAvailableAbilityPointsChanged;                          // 0x0098(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHeroStatsChanged;                                       // 0x00A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UFortHero*                                   CurrentHero;                                              // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
	class UFortHero*                                   HeroBeingDeleted;                                         // 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHeroManagementContext");
		return ptr;
	}


	void TriggerHerosStickies();
	bool SetHeroName(const struct FString& NewName);
	bool SetCurrentHero(const struct FString& HeroId);
	bool RequestSetTraitDepthFromID(const struct FString& HeroId, int TraitIdx, int Depth);
	bool RequestSetTraitDepth(int TraitIdx, int Depth);
	bool RequestCreateHero(class UFortHeroType* HeroType, const struct FString& Name, TEnumAsByte<EFortCustomGender> Gender);
	bool RedeemPrevAbilityFromID(const struct FString& HeroId, int TraitIdx);
	bool RedeemPrevAbility(int TraitIdx);
	void RedeemAllAbilitiesFromID(const struct FString& HeroId);
	bool RedeemAllAbilities();
	bool PurchaseNextAbilityFromID(const struct FString& HeroId, int TraitIdx);
	bool PurchaseNextAbility(int TraitIdx);
	void MarkHeroAsSeen(const struct FString& HeroId);
	bool IsSkillTreeUnlocked();
	bool IsShowingStatsScreen();
	bool IsCreateHeroEnabled();
	int GetXPRequiredForHeroLevel(int HeroLevel);
	int GetTraitDepthFromID(const struct FString& HeroId, int TraitIdx);
	bool GetTraitDepth(int TraitIdx, int* Depth);
	int GetNumUnspentAbilityPointsFromID(const struct FString& HeroId);
	bool GetNumUnspentAbilityPoints(int* NumAbilityPoints);
	int GetNumHeroTraits();
	int GetNextAbilityCostFromID(const struct FString& HeroId, int TraitIdx);
	int GetNextAbilityCost(int TraitIdx);
	int GetMaxNameLength();
	int GetHeroLevelAtXP(int Xp);
	struct FHeroUIData GetHeroDataFromID(const struct FString& HeroId);
	bool GetHeroData(struct FHeroUIData* HeroData);
	void GetDisplayStats(TArray<struct FFortGameplayEffectModifierDescription>* Stats);
	bool GetCurrentHeroID(struct FString* HeroId);
	TArray<class UFortAbilityKit*> GetCoreAbilities();
	bool GetAttributeValuesArrayFromID(const struct FString& HeroId, TArray<struct FGameplayAttribute> Attributes, bool bUseProxy, TArray<float>* Values);
	bool GetAttributeValuesArray(TArray<struct FGameplayAttribute> Attributes, bool bUseProxy, TArray<float>* Values);
	float GetAttributeValueFromID(const struct FString& HeroId, const struct FGameplayAttribute& Attribute, bool bUseProxy);
	float GetAttributeValue(const struct FGameplayAttribute& Attribute, bool bUseProxy);
	TArray<struct FString> GetAllHeroIDs();
	class UFortAbilitySystemComponent* GetAbilitySystemComponent();
	int GetAbilityCostFromID(const struct FString& HeroId, int TraitIdx, int TraitDepth);
	int GetAbilityCost(int TraitIdx, int TraitDepth);
	void GenerateRandomHeroName(class UDataTable* NameTable, struct FString* Name);
	void FocusOnHero(const struct FString& HeroId);
	void CheckHeroNameValidity(const struct FString& Name);
	bool CanRedeemAllAbilities();
	bool CanModifyTraitDepthFromID(const struct FString& HeroId, int TraitIdx);
	bool CanModifyTraitDepth(int TraitIdx);
	bool CanAffordNextAbilityFromID(const struct FString& HeroId, int TraitIdx);
	bool CanAffordNextAbility(int TraitIdx);
	bool CanAffordAbilityFromID(const struct FString& HeroId, int TraitIdx, int TraitDepth);
	bool CanAffordAbility(int TraitIdx, int TraitDepth);
};


// Class FortniteUI.FortHeroNotificationHandler
// 0x0010 (0x01F0 - 0x01E0)
class UFortHeroNotificationHandler : public UFortDialogNotificationHandler
{
public:
	class UFortHero*                                   Hero;                                                     // 0x01E0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHeroNotificationHandler");
		return ptr;
	}


	void OnFortItemUpdated(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
};


// Class FortniteUI.FortHeroSupportPerkWidget
// 0x0388 (0x05B8 - 0x0230)
class UFortHeroSupportPerkWidget : public UUserWidget
{
public:
	TWeakObjectPtr<class UFortHero>                    HeroToRepresent;                                          // 0x0230(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0238(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortHeroSupportPerkWidget.SupportTypeToRepresent
	unsigned char                                      UnknownData01[0x7];                                       // 0x0239(0x0007) MISSED OFFSET
	class UFortMultiSizeImage*                         PerkImage;                                                // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonTextBlock*                            NameText;                                                 // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonTextBlock*                            DescriptionText;                                          // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x360];                                     // 0x0258(0x0360) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHeroSupportPerkWidget");
		return ptr;
	}


	void SetSupportTypeToRepresent();
	void SetHeroToRepresent(class UFortHero* InHeroToRepresent);
	void OnSupportTypeUpdated();
	void OnHeroUpdated();
	bool IsPerkUnlocked();
	bool IsPerkInCorrectSlot();
	bool IsPerkEmpty();
	bool IsPerkActive();
};


// Class FortniteUI.FortHomebaseNodeItemUtilities
// 0x0000 (0x0028 - 0x0028)
class UFortHomebaseNodeItemUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHomebaseNodeItemUtilities");
		return ptr;
	}


	bool STATIC_TryGetHomebaseNodeState(class UWidget* Widget, const struct FName& NodeID, struct FHomebaseNodeState* OutNodeState);
	bool STATIC_IsSquadSlotUnseen(class AFortPlayerController* FortPC, const struct FName& SquadId, int SquadSlot);
	bool STATIC_IsHomebaseNodeItemUnseenForTagContainer(class AFortPlayerController* FortPC, const struct FGameplayTagContainer& Tags);
	void STATIC_GetHomebaseNodePageNames(TArray<struct FName>* NodePages);
	void STATIC_GetHomebaseNodeItems(class AFortPlayerController* FortPC, TArray<class UFortHomebaseNodeItem*>* NodeItems);
	struct FName STATIC_GetHomebaseNodeItemNameForTagContainer(class AFortPlayerController* FortPC, const struct FGameplayTagContainer& Tags);
	class UFortHomebaseNodeItem* STATIC_GetHomebaseNodeItemForTagContainer(class AFortPlayerController* FortPC, const struct FGameplayTagContainer& Tags);
	class UFortHomebaseNodeItem* STATIC_GetHomebaseNodeItemForSquadSlot(class AFortPlayerController* FortPC, const struct FName& SquadId, int SquadSlot);
	class UFortHomebaseNodeItem* STATIC_GetHomebaseNodeItem(class AFortPlayerController* FortPC, const struct FName& NodeID);
	bool STATIC_AreAnyHomebaseNodeItemsUnseenForSquadType(class AFortPlayerController* FortPC);
	bool STATIC_AreAnyHomebaseNodeItemsUnseenForSquadId(class AFortPlayerController* FortPC, const struct FName& SquadId);
};


// Class FortniteUI.FortHomebaseUIContext
// 0x0068 (0x0090 - 0x0028)
class UFortHomebaseUIContext : public UBlueprintContextBase
{
public:
	struct FScriptMulticastDelegate                    OnSquadSlotChanged;                                       // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEarlyGameFinished;                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNodePurchased;                                          // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	TAssetPtr<class UDataTable>                        SquadIconDataTableAsset;                                  // 0x0058(0x0020) (CPF_Transient)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0078(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHomebaseUIContext");
		return ptr;
	}


	void SetShowHeroHeadAccessoriesInClientSettingsRecord(bool bShow);
	void SetShowHeroHeadAccessoriesForLocalPlayer(bool bShow);
	void SetShowHeroBackpackInClientSettingsRecord(bool bShow);
	void SetShowHeroBackpackForLocalPlayer(bool bShow);
	void OnSquadSlotChanged__DelegateSignature(const struct FName& SquadName, int SlotIndex);
	void OnNodesPurchased__DelegateSignature(const struct FName& NodeID);
	bool IsInEarlyGame();
	bool IsAnySquadSlotUnlocked(const struct FName& SquadId);
	void GetWorkerSetBonusEffectModifiers(const struct FGameplayTag& SetBonusTag, TArray<struct FFortAttributeModifierDisplayData>* OutModifiers);
	struct FFortMultiSizeBrush GetSquadIcon(const struct FName& SquadId);
	bool GetShowHeroHeadAccessoriesForLocalPlayer();
	bool GetShowHeroBackpackForLocalPlayer();
	struct FName GetRootSkillTreePageId();
	struct FName GetRootSkillTreeNodeId();
	struct FSlateColor GetQuestNodeColour();
	bool GetNodeTagBonusesForDisplay(const struct FName& NodeID, TArray<struct FFortTagUIData>* OutGrantedTagsUIData);
	bool GetNodeDescription(const struct FName& NodeID, struct FText* OutDescription);
	bool GetNodeAttributeBonusesForDisplay(const struct FName& NodeID, TArray<struct FFortDisplayAttribute>* OutDisplayAttributes);
	bool GetLocalPlayerHasHeroHeadAccessories();
	bool GetLocalPlayerHasHeroBackpack();
	TArray<class UFortItem*> GetItemsInSquad(const struct FName& SquadId, bool bRemoveEmptySquadSlots);
	class UFortItem* GetItemInSquadSlot(const struct FName& SquadName, int SlotIndex);
	struct FName GetEarlyGameRootSkillTreePageId();
	struct FName GetEarlyGameRootSkillTreeNodeId();
	void GetEarlyGameNodeProgressionState(int* OutOwnedNodeCount, int* OutRequiredNodeCountToLeaveEarlyGame);
	struct FName GetEarlyGameNodePageId();
};


// Class FortniteUI.FortHomeCMSScreenBase
// 0x0010 (0x0460 - 0x0450)
class UFortHomeCMSScreenBase : public UEpicCMSScreenBase
{
public:
	class UWidgetSwitcher*                             LayoutSwitcher;                                           // 0x0450(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0458(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHomeCMSScreenBase");
		return ptr;
	}


	void OnTilesLoaded();
	bool AreTilesLoaded();
};


// Class FortniteUI.FortHUDCenterPopupMessageWidget
// 0x0030 (0x0268 - 0x0238)
class UFortHUDCenterPopupMessageWidget : public UCommonUserWidget
{
public:
	TAssetPtr<class UClass>                            CenterPopupModalWidgetClass;                              // 0x0238(0x0020) (CPF_Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0258(0x0008) MISSED OFFSET
	class UCommonActivatablePanel*                     CenterPopupModalWidget;                                   // 0x0260(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHUDCenterPopupMessageWidget");
		return ptr;
	}


	void UpdateState();
	void OnModalDisplayed(class UCommonActivatablePanel* ModalPopup);
	void GetCenterPopupMessageState();
};


// Class FortniteUI.FortHUDContext
// 0x0538 (0x0560 - 0x0028)
class UFortHUDContext : public UBlueprintContextBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCursorModeChanging;                                     // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCursorModeChanged;                                      // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMgmtMenuTabChangeRequested;                             // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnIndicatorModeChanged;                                   // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnContextualReticleChanged;                               // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBuildingFocused;                                        // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFocusedBuildingStateChanged;                            // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFocusedBuildingHealthChanged;                           // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFocusedBuildingRepairCostChanged;                       // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFocusedBuildingAttachedTrapDurabilityChanged;           // 0x00C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFocusedBuildingAttachedTrapChanged;                     // 0x00D0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDamagedResourceBuilding;                                // 0x00E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerCanInteract;                                      // 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInteractUpdated;                                        // 0x0100(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerTargetingChanged;                                 // 0x0110(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnScoreChanged;                                           // 0x0120(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnScoreStatChanged;                                       // 0x0130(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnZoneCompleted;                                          // 0x0140(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPawnSet;                                                // 0x0150(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDamageReceived;                                         // 0x0160(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUnableToPerformAction;                                  // 0x0170(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLocalPlayerMaxHealthChanged;                            // 0x0180(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLocalPlayerHealthChanged;                               // 0x0190(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLocalPlayerDied;                                        // 0x01A0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLocalPlayerSpawned;                                     // 0x01B0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLocalPlayerRevived;                                     // 0x01C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLocalPlayerKillsChanged;                                // 0x01D0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLocalPlayerPlaceChanged;                                // 0x01E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLocalPlayerViewTargetChanged;                           // 0x01F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLocalPlayerMaxShieldChanged;                            // 0x0200(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLocalPlayerShieldChanged;                               // 0x0210(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLocalPlayerMaxStaminaChanged;                           // 0x0220(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLocalPlayerStaminaChanged;                              // 0x0230(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnToggleScoreboard;                                       // 0x0240(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndOfDayRecap;                                          // 0x0250(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWaveCombatStart;                                        // 0x0260(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWaveBasedModifiersApplied;                              // 0x0270(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActiveGameplayModifiersChanged;                         // 0x0280(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHordeTierInitialized;                                   // 0x0290(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHordeTierComplete;                                      // 0x02A0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHordeWaveComplete;                                      // 0x02B0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBuildingMaterialCycled;                                 // 0x02C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWeaponEquippedDelegate;                                 // 0x02D0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAbilityDecisionWindowStackUpdated;                      // 0x02E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemCollectorChanged;                                   // 0x02F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTotalQuantumChanged;                                    // 0x0300(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAllFOBCoresAdded;                                       // 0x0310(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWorldDaysElapsedChanged;                                // 0x0320(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNumSurvivorsRescuedChanged;                             // 0x0330(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEarnedBadgesChanged;                                    // 0x0340(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPotentialBadgesChanged;                                 // 0x0350(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMissionManagerCreated;                                  // 0x0360(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMissionsUpdated;                                        // 0x0370(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFocusedMissionChanged;                                  // 0x0380(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTheaterUniqueIDChanged;                                 // 0x0390(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnZoneDifficultyInfoRowChanged;                           // 0x03A0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMissionGeneratorChanged;                                // 0x03B0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMissionRewardsChanged;                                  // 0x03C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPointOfInterestAdded;                                   // 0x03D0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPointOfInterestRemoved;                                 // 0x03E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0x70];                                      // 0x03F0(0x0070) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHUDElementVisibilityChanged;                            // 0x0460(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDebugHUDObjectiveHeightChangedDelegate;                 // 0x0470(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      bDebugHudObjectiveHeight : 1;                             // 0x0480(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bPendingAttachToHUD : 1;                                  // 0x0481(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0482(0x0006) MISSED OFFSET
	class AFortPlayerState*                            OwningPlayerState;                                        // 0x0488(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ABuildingActor*                              CurFocusedBuilding;                                       // 0x0490(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ABuildingTrap*                               CurFocusedTrap;                                           // 0x0498(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x04A0(0x0008) MISSED OFFSET
	class ABuildingActor*                              PendingFocusBuilding;                                     // 0x04A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0xB0];                                      // 0x04B0(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHUDContext");
		return ptr;
	}


	void UpdateTrapAttachedToBuilding();
	bool ShouldOnlyShowNextPrevBuildingSlotKeybinds();
	void SetIndicatorsState();
	void SetIndicatorsAllowed(bool bIndicatorsAllowed);
	void SetHUDElementVisibility(const struct FGameplayTagContainer& HUDElementTags, bool bHideElements);
	void SetCursorModeLocked(bool bLocked);
	void RequestMgmtMenuTab(const struct FName& TabName);
	void RemovePointOfInterest(class AActor* PointOfInterest);
	bool IsInCursorMode();
	void HandleLocalPlayerViewTargetChanged();
	void HandleLocalPlayerPlaceChanged();
	void HandleLocalPlayerKillsChanged();
	void HandleLocalPawnSpawned();
	void HandleLocalPawnRevived();
	void HandleLocalPawnDied(const struct FFortPlayerDeathReport& DeathReport);
	void HandleFocusedBuildingHealthChanged();
	class AFortPvPBaseCornerstone* GetTeamCornerstone(TEnumAsByte<EFortTeam> Team);
	float GetScoreDisplayFactor();
	TArray<struct FFortBadgeCount> GetPotentialBadges();
	class AFortPlayerStateZone* GetPlayerStateZone();
	void GetMissionRewards(TArray<class UFortItem*>* MissionRewards, TArray<class UFortItem*>* MissionAlertRewards);
	TArray<struct FZoneLoadingScreenHeadingConfig> GetMissionOverviewObjectives();
	class AFortMissionManager* GetMissionManager();
	struct FFortKillerVisualInfo GetKillerVisualInfoFromDeathReport(const struct FFortPlayerDeathReport& DeathReport);
	void GetIndicatorsState();
	class AFortGameStateZone* GetGameStateZone();
	class AFortMission* GetFocusedMission();
	bool GetFocusedBuildingInfo(struct FFortFocusedBuildingInfo* OutBuildingInfo);
	TArray<struct FEarnedBadgeEntry> GetEarnedBadges();
	class UFortHero* GetCurrentHero();
	bool GetCurrentBasicMissionInfo(struct FFortBasicMissionInfo* BasicMissionInfo);
	class AFortBluGloManager* GetBluGloManager();
	void ForwardOnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void ForwardOnNumSurvivorsRescuedChanged(int NumSurvivorsRescued);
	void ForwardOnMissionsUpdated();
	void ForwardOnAbilityDecisionWindowStackUpdated();
	void EnterCursorMode(const struct FName& ActionName, class UUserWidget* CursorModeWidget);
	void EnterCameraMode();
	bool AreIndicatorsEnabled();
	bool AreHUDElementsVisible(const struct FGameplayTagContainer& HUDElementTags);
	void AddPointOfInterest(class AActor* PointOfInterest, const struct FText& DisplayText, class UTexture2D* DisplayImage);
};


// Class FortniteUI.AthenaHUDGamePhaseChangingBase
// 0x0000 (0x0260 - 0x0260)
class UAthenaHUDGamePhaseChangingBase : public UFortHUDElementWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaHUDGamePhaseChangingBase");
		return ptr;
	}


	void UpdateMessaging(const struct FText& MESSAGE, const struct FText& TimeText);
	void HandleGamePhaseStepChanged();
	void GamePhaseStepChanged();
};


// Class FortniteUI.AthenaHUDPlayerActionAlertBase
// 0x0020 (0x0280 - 0x0260)
class UAthenaHUDPlayerActionAlertBase : public UFortHUDElementWidget
{
public:
	class AFortPlayerPawnAthena*                       LastPlayerPawn;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bReadyForNextAlert : 1;                                   // 0x0268(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0269(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaHUDPlayerActionAlertBase");
		return ptr;
	}


	void RequestNextAlert();
	void AlertPlayer(const struct FText& DetailText);
};


// Class FortniteUI.FortActorIndicatorWidget
// 0x0038 (0x0298 - 0x0260)
class UFortActorIndicatorWidget : public UFortHUDElementWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET
	class AActor*                                      IndicatedActor;                                           // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         IndicatedActorComponent;                                  // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FVector                                     RelativeLocation;                                         // 0x0278(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0284(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bClampOnScreen : 1;                                       // 0x0288(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShowClampToScreenArrow : 1;                              // 0x0289(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseScreenSpacePosition : 1;                              // 0x028A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x028B(0x0001) MISSED OFFSET
	struct FVector2D                                   ScreenSpaceRelativeOffset;                                // 0x028C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortActorIndicatorWidget");
		return ptr;
	}

};


// Class FortniteUI.AthenaPlayersLeftBase
// 0x0008 (0x0268 - 0x0260)
class UAthenaPlayersLeftBase : public UFortHUDElementWidget
{
public:
	class UTextBlock*                                  PlayersLeftText;                                          // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaPlayersLeftBase");
		return ptr;
	}

};


// Class FortniteUI.AthenaTeamMemberIndicatorBase
// 0x0000 (0x0298 - 0x0298)
class UAthenaTeamMemberIndicatorBase : public UFortActorIndicatorWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaTeamMemberIndicatorBase");
		return ptr;
	}

};


// Class FortniteUI.FortCraftingBarWidget
// 0x0028 (0x0288 - 0x0260)
class UFortCraftingBarWidget : public UFortHUDElementWidget
{
public:
	class UCommonTextBlock*                            CraftingText;                                             // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UProgressBar*                                CraftingProgressBar;                                      // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              CompletedRemainVisibleTime;                               // 0x0270(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0274(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCraftingBarWidget");
		return ptr;
	}


	void SetHideCraftingBar(bool bInHideCraftBar);
	void OnCompletedSetHidden();
	void HandlePlayerStoppedCrafting(bool bSuccess);
	void HandlePlayerStartedCrafting();
};


// Class FortniteUI.FortHUDEquipProgressBase
// 0x0000 (0x0260 - 0x0260)
class UFortHUDEquipProgressBase : public UFortHUDElementWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHUDEquipProgressBase");
		return ptr;
	}

};


// Class FortniteUI.FortHUDObjectiveSizeInterface
// 0x0000 (0x0028 - 0x0028)
class UFortHUDObjectiveSizeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHUDObjectiveSizeInterface");
		return ptr;
	}


	float GetHeightEstimate();
};


// Class FortniteUI.FortMissionTrackerList
// 0x0090 (0x02C8 - 0x0238)
class UFortMissionTrackerList : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET
	class UClass*                                      MissionEntryClass;                                        // 0x0240(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	unsigned char                                      bConfigureAsHUD : 1;                                      // 0x0248(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	class UVerticalBox*                                MissionsListBox;                                          // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    OnMissionTrackerListVisibilityChanged;                    // 0x0258(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSizeEstimateChangedDelegate;                            // 0x0268(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0278(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMissionTrackerList");
		return ptr;
	}


	void UpdateVisibility();
	void HandleSizeEstimateChanged(class UObject* ChangedElement);
	void HandleMissionsUpdated();
};


// Class FortniteUI.FortQuestTrackerList
// 0x0038 (0x0270 - 0x0238)
class UFortQuestTrackerList : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET
	unsigned char                                      bConfigureAsHUD : 1;                                      // 0x0240(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	class UCommonListView*                             QuestList;                                                // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UFortQuestItem*>                      HUDCachedQuests;                                          // 0x0250(0x0010) (CPF_ZeroConstructor)
	struct FScriptMulticastDelegate                    OnSizeEstimateChangedDelegate;                            // 0x0260(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortQuestTrackerList");
		return ptr;
	}


	void HandleSizeEstimateChanged(class UObject* ChangedElement);
	void HandleQuestsUpdated();
	void HandleQuestEntryCreated(class UUserWidget* Widget);
	void HandlePinnedQuestsChanged();
	void HandleHUDFinalObjectiveHidden(class UFortQuestItem* QuestItem);
	TArray<class UFortQuestItem*> GetQuestsToDisplay();
};


// Class FortniteUI.FortMissionTracker
// 0x0030 (0x0290 - 0x0260)
class UFortMissionTracker : public UFortHUDElementWidget
{
public:
	class UFortMissionTrackerList*                     MissionTrackerList;                                       // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortQuestTrackerList*                       MainQuestList;                                            // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortQuestTrackerList*                       PinnedQuestsList;                                         // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidget*                                     AdditionalEntriesIndicator;                               // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonNumericTextBlock*                     DebugHeightEstimate;                                      // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              AllowedSize;                                              // 0x0288(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnforceHeightLimit : 1;                                  // 0x028C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSizeEstimateNeedsRefresh : 1;                            // 0x028D(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMissionTracker");
		return ptr;
	}


	void RefreshSizeEstimate();
	void HandleSizeEstimateChanged(class UObject* ChangedElement);
	void HandleDebugHUDObjectiveHeightChanged(bool bIsDebugging);
};


// Class FortniteUI.FortReticle
// 0x0028 (0x0288 - 0x0260)
class UFortReticle : public UFortHUDElementWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0260(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortReticle");
		return ptr;
	}


	void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void OnReticleColorChanged();
	void OnPawnSet();
	void OnContextualReticleChanged();
};


// Class FortniteUI.FortHUDTargetUnderReticleWidget
// 0x0020 (0x0258 - 0x0238)
class UFortHUDTargetUnderReticleWidget : public UCommonUserWidget
{
public:
	TScriptInterface<class UFortHUDTargetUnderReticleInterface> Target;                                                   // 0x0238(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0248(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHUDTargetUnderReticleWidget");
		return ptr;
	}


	void OnTargetHealthChanged();
	void OnTargetChanged();
	void HandleOnHUDTargetUnderReticle(TScriptInterface<class UFortHUDTargetUnderReticleInterface>* NewTarget);
};


// Class FortniteUI.FortHUDVisibilityData
// 0x0040 (0x0068 - 0x0028)
class UFortHUDVisibilityData : public UDataAsset
{
public:
	struct FGameplayTag                                HUDVisibilityGameplayTag;                                 // 0x0028(0x0008) (CPF_BlueprintVisible)
	struct FText                                       DisplayText;                                              // 0x0030(0x0018) (CPF_BlueprintVisible)
	struct FText                                       ToolTipText;                                              // 0x0048(0x0018) (CPF_BlueprintVisible)
	unsigned char                                      Visible : 1;                                              // 0x0060(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHUDVisibilityData");
		return ptr;
	}

};


// Class FortniteUI.FortIconWithLabel
// 0x0020 (0x0138 - 0x0118)
class UFortIconWithLabel : public UWidget
{
public:
	unsigned char                                      ShouldShowIcon : 1;                                       // 0x0118(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ShouldCollapseIconWhenNotShown : 1;                       // 0x0119(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortBrushSize>                        IconBrushSize;                                            // 0x011A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ShouldShowLabel : 1;                                      // 0x011B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	class UClass*                                      LabelTextStyle;                                           // 0x0120(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0128(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortIconWithLabel");
		return ptr;
	}

};


// Class FortniteUI.FortHeroSupportPerkIndicator
// 0x0010 (0x0148 - 0x0138)
class UFortHeroSupportPerkIndicator : public UFortIconWithLabel
{
public:
	TWeakObjectPtr<class UFortItem>                    ItemToRepresent;                                          // 0x0138(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0140(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortHeroSupportPerkIndicator.SupportTypeToRepresent

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHeroSupportPerkIndicator");
		return ptr;
	}


	void SetSupportTypeToRepresent();
	void SetItemToRepresent(class UFortItem* ItemToRepresent);
};


// Class FortniteUI.FortItemCategoryIndicator
// 0x0010 (0x0148 - 0x0138)
class UFortItemCategoryIndicator : public UFortIconWithLabel
{
public:
	TWeakObjectPtr<class UFortItem>                    ItemToRepresent;                                          // 0x0138(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0140(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortItemCategoryIndicator.OrdinalOfCategoryToRepresent

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemCategoryIndicator");
		return ptr;
	}


	void SetOrdinalOfCategoryToRepresent();
	void SetItemToRepresent(class UFortItem* ItemToRepresent);
};


// Class FortniteUI.FortInventoryContext
// 0x0180 (0x01A8 - 0x0028)
class UFortInventoryContext : public UBlueprintContextBase
{
public:
	struct FScriptMulticastDelegate                    OnWorldItemListChanged;                                   // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOutpostItemListChanged;                                 // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemPickedUp;                                           // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnQuickbarContentsChanged;                                // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnQuickbarSlotFocusChanged;                               // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnQuickbarSecondarySlotFocusChanged;                      // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnQuickbarForceFullUpdate;                                // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWorldItemsChanged;                                      // 0x0098(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPinnedSchematicsChanged;                                // 0x00A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSchematicsLockedChanged;                                // 0x00B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSchematicUnlocked;                                      // 0x00C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCraftItemStarted;                                       // 0x00D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnVaultItemLimitStateChangedEvent;                        // 0x00E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	TMap<class UFortSchematicItemDefinition*, unsigned char> SchematicLockedStates;                                    // 0x00F8(0x0050) (CPF_ZeroConstructor, CPF_Transient)
	TMap<class UFortItemDefinition*, struct FItemDefinitionChangedStruct> DefinitionChangedDelegates;                               // 0x0148(0x0050) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0198(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortInventoryContext");
		return ptr;
	}


	bool WillQuickBarAcceptItem(class UFortItem* Item, int Slot);
	void UnlockSchematic(class UFortSchematicItemDefinition* SchematicDefinition);
	void UnlockAllSchematics();
	void SortAccountItemArrayForTransmog(TArray<class UFortAccountItem*>* VaultItems, TArray<class UFortAccountItem*>* SortedItems);
	bool SetSchematicPinned(class UFortSchematicItem* Schematic, bool bEnabled);
	bool RemoveItemFromQuickBar(class UFortItem* Item);
	struct FFortItemQuantityPair STATIC_MakeItemQuantityPair(class UFortItemDefinition* ItemDefinition, int ItemQuantity);
	void LockAllSchematics();
	bool IsTrapAvailableForBuilding(class ABuildingSMActor* Actor);
	bool IsSlotHidden(int Slot);
	bool IsSchematicPinned(class UFortSchematicItem* Schematic);
	bool IsRecyclable(class UFortItem* Item, struct FText* Reason);
	bool HasTrapReadyForBuilding(class ABuildingSMActor* BuildingToAttachTo);
	bool HasGameplayTagContainerExact(const struct FGameplayTagContainer& GameplayTagContainer);
	bool HasGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer);
	bool HasEvolutions(class UFortItem* Item);
	void GetWorldItemListForDeployableBaseThePlayerIsIn(const struct FFortItemListFilter& FilterSettings, TArray<class UFortWorldItem*>* Items);
	void GetWorldItemList(const struct FFortItemListFilter& FilterSettings, TArray<class UFortWorldItem*>* Items);
	class UFortPersistentResourceItemDefinition* GetVoucherResourceItemDefinition();
	void GetVaultItemLimitStatus();
	int GetVaultItemLimit();
	TArray<struct FText> STATIC_GetUserFriendlyTags(class UFortItem* Item);
	struct FText GetTrapAttachTypeName(class ABuildingSMActor* Actor);
	bool GetTransmogSacrificeDataFromItemDefintion(class UFortItemDefinition* ItemDefinition, struct FTransmogSacrifice* OutTransmogData);
	void GetTransformKeys(TArray<class UFortAccountItem*>* TransformKeys);
	int GetTotalItemQuantityByDefinition(class UFortItemDefinition* ItemDefinition);
	struct FText STATIC_GetTierText(TEnumAsByte<EFortItemTier> Tier);
	bool GetSupportBonusPerks(class UFortHero* Hero, TArray<struct FFortUIPerk>* SupportBonusPerks);
	int GetStorageNumItems();
	int GetStorageCapacity();
	class UFortPersistentResourceItemDefinition* GetSchematicResourceItemDefinition();
	void GetSchematicItemList(const struct FFortItemListFilter& FilterSettings, TArray<class UFortSchematicItem*>* Items);
	class UFortResourceItemDefinition* GetResourceItemDefinition(TEnumAsByte<EFortResourceType> ResourceType);
	class UTexture2D* GetResourceIcon(TEnumAsByte<EFortResourceType> ResourceType);
	int GetResourceCount(TEnumAsByte<EFortResourceType> ResourceType);
	struct FText STATIC_GetRecyclingWarningText(bool WereAnyItemsAnimate);
	struct FText STATIC_GetRecyclingCatalystDisplayName(class UFortItem* Item);
	struct FText STATIC_GetRecycleRestrictionReasonText();
	class UFortItem* GetQuickBarSlottedItem(int Slot);
	void GetQuickbarFocus(int* OutSlot, int* OutSecondarySlot, int* OutPreviousFocusedSlot);
	void GetPinnedSchematicList(TArray<class UFortSchematicItem*>* PinnedItems);
	class UFortPersistentResourceItemDefinition* GetPersonnelResourceItemDefinition();
	int GetNumInInventory(class UFortItemDefinition* ItemDefinition, bool bIncludeReserved);
	TEnumAsByte<EFortItemTier> STATIC_GetItemTierRecyclingWarningThreshold();
	void STATIC_GetItemRarityRecyclingWarningThreshold();
	int STATIC_GetItemLevelRecyclingWarningThreshold();
	void GetItemInstancesByDefinition(class UFortItemDefinition* ItemDefinition, TArray<class UFortItem*>* Items);
	void GetHomebaseUnlockedTransmogKeys(TArray<class UFortAccountItem*>* TransmogKeys);
	class UFortPersistentResourceItemDefinition* GetHeroResourceItemDefinition();
	bool GetHeroAbilityPerks(class UFortHero* Hero, TArray<struct FFortUIPerk>* HeroAbilityPerks);
	bool GetGameplayTagByIndex(const struct FGameplayTagContainer& GameplayTagContainer, int Index, struct FGameplayTag* Result);
	struct FText STATIC_GetEvolveRestrictionReasonText();
	class AFortWeapon* GetEquippedWeapon();
	struct FText STATIC_GetDisassembleRestrictionReasonText();
	void GetDeployableBaseItemCounts(int* ItemsCount, int* MaxItemsCount, int* OverflowItemsCount);
	class UFortResourceItemDefinition* GetCurrentResourceItemDefinition();
	int GetCurrentResourceCount();
	class UFortWorldItemDefinition* GetCurrentAmmoItemDefinition();
	int GetCountOfVaultLimitedItems();
	int GetCountOfHeroItems();
	TArray<struct FRecipe> GetConversionRecipesFromItemDefintion(class UFortItemDefinition* ItemDefinition);
	void GetBackpackItemCounts(int* ItemsCount, int* MaxItemsCount, int* OverflowItemsCount);
	void GetAccountItemsByType(TArray<class UFortAccountItem*>* Items);
	void GetAccountItemsByFilterType(const struct FString& SearchText, TArray<class UFortAccountItem*>* OutItemList);
	void EquipItem(class UFortItem* Item);
	void EnumerateRecyclingWarningsForItems(TArray<class UFortItem*> Items);
	bool DropItemOnQuickBar(class UFortItem* Item, int TargetSlot);
	void DropItemOnPlayerOrWorld(class UFortWorldItem* ItemBeingDropped, class AFortPlayerState* InDestinationPlayer, class UWidget* OwnerWidget, const struct FPointerEvent& PointerEvent, const struct FGeometry& InGeometry);
	void DropItem(class UFortWorldItem* ItemBeingDropped, int Quantity);
	bool DoesItemMatchFilter(class UFortItem* Item, const struct FFortItemListFilter& FilterSettings);
	bool DisassembleItem(class UFortWorldItem* Item);
	bool CraftSchematic(class UFortSchematicItem* SchematicItem);
	bool CraftAndSlotSchematic(class UFortSchematicItem* SchematicItem, int PostCraftSlot);
	bool CanRecycle(class UFortItem* Item);
	bool CanPinSchematic(class UFortSchematicItem* Schematic);
	bool CanEvolve(class UFortItem* Item);
	bool CanDisassembleItem(class UFortWorldItem* Item);
	bool CanCraftSchematic(class UFortSchematicItem* SchematicItem);
	bool AreRecipeRequirementsMet(TArray<struct FFortItemQuantityPair> RecipeCosts);
	bool AreAnyItemsUnseenForInventoryFilter();
	bool STATIC_AreAnyItemsAnimate(TArray<class UFortItem*> Items);
	bool ActivateItem(class UFortItem* Item);
};


// Class FortniteUI.FortItemWidget_NUI
// 0x0028 (0x0140 - 0x0118)
class UFortItemWidget_NUI : public UWidget
{
public:
	TWeakObjectPtr<class UFortItem>                    ItemToRepresent;                                          // 0x0118(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class UFortItemViewContextInterface> ItemViewContext;                                          // 0x0120(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0130(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemWidget_NUI");
		return ptr;
	}


	void SetItemViewContext(const TScriptInterface<class UFortItemViewContextInterface>& ItemViewContext);
	void SetItemToRepresent(class UFortItem* ItemToRepresent);
};


// Class FortniteUI.FortItemCardBase
// 0x0028 (0x0168 - 0x0140)
class UFortItemCardBase : public UFortItemWidget_NUI
{
public:
	unsigned char                                      ShouldDisplayItemAsReward : 1;                            // 0x0140(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0141(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortItemCardBase.EmptyItemType
	unsigned char                                      UnknownData01[0x26];                                      // 0x0142(0x0026) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemCardBase");
		return ptr;
	}


	void SetShouldDisplayItemAsReward(bool Value);
	void SetQuantityOverride(int Quantity);
	TEnumAsByte<EFortBrushSize> GetCardSize();
};


// Class FortniteUI.FortItemCardUtilities
// 0x0000 (0x0028 - 0x0028)
class UFortItemCardUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemCardUtilities");
		return ptr;
	}


	struct FVector2D STATIC_GetCardDimensions(TEnumAsByte<EFortBrushSize> BrushSize, bool IsReward);
};


// Class FortniteUI.FortItemCooldownWidget
// 0x0090 (0x02C8 - 0x0238)
class UFortItemCooldownWidget : public UCommonUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnCooldownStarted_Delegate;                               // 0x0238(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCooldownStopped_Delegate;                               // 0x0248(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UCommonTextBlock*                            CooldownText;                                             // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UImage*                                      CooldownImage;                                            // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       CooldownMaterialParameterName;                            // 0x0268(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0270(0x0010) UNKNOWN PROPERTY: ArrayProperty FortniteUI.FortItemCooldownWidget.CooldownTypesSupported
	class UMaterialInstanceDynamic*                    CooldownPercentageMID;                                    // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0288(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemCooldownWidget");
		return ptr;
	}


	void SetItem(class UFortWorldItem* InWorldItem);
	void OnWorldItemDestroyed();
	void OnCooldownStopped();
	void OnCooldownStarted();
};


// Class FortniteUI.FortItemCountTextBlock
// 0x0018 (0x0338 - 0x0320)
class UFortItemCountTextBlock : public UCommonNumericTextBlock
{
public:
	class UFortItemDefinition*                         ItemDefinition;                                           // 0x0320(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0328(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortItemCountTextBlock.CountStyle
	unsigned char                                      UnknownData01[0x3];                                       // 0x0329(0x0003) MISSED OFFSET
	float                                              ItemCountMaxInterpolateDuration;                          // 0x032C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ItemCountMinInterpolateRate;                              // 0x0330(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemCountTextBlock");
		return ptr;
	}


	void SetOverrideValue(int InOverrideValue);
	void SetItemDefinition(class UFortItemDefinition* InItemDefinition);
	void SetCountStyle();
	void InterpolateOverrideToValue(int TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset);
	void HandleItemCountChanged(class UFortItemDefinition* Definition, int Delta);
};


// Class FortniteUI.FortItemDetailElementWidget
// 0x0038 (0x0270 - 0x0238)
class UFortItemDetailElementWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortItem>                    ItemToDetail;                                             // 0x0238(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData)
	TWeakObjectPtr<class UFortItem>                    ItemToCompareWith;                                        // 0x0240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bShouldPreviewUpgradingItem : 1;                          // 0x0248(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	TScriptInterface<class UFortItemViewContextInterface> ItemViewContext;                                          // 0x0250(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0260(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemDetailElementWidget");
		return ptr;
	}


	void HandleShouldPreviewUpgradingItemChanged();
	void HandlePreDifferentItemToDetailSet();
	void HandlePreDifferentItemToCompareWithSet();
	void HandlePostDifferentItemToDetailSet();
	void HandlePostDifferentItemToCompareWithSet();
};


// Class FortniteUI.FortItemDetailsHostPanel
// 0x0050 (0x0288 - 0x0238)
class UFortItemDetailsHostPanel : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortItem>                    ItemToDetail;                                             // 0x0238(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData)
	TWeakObjectPtr<class UFortItem>                    ItemToCompareWith;                                        // 0x0240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bShouldPreviewUpgradingItem : 1;                          // 0x0248(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	class UFortItemDetailElementWidget*                HeaderWidget;                                             // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UScrollBox*                                  ScrollBox;                                                // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UNamedSlot*                                  DetailsContainerSlotWidget;                               // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TScriptInterface<class UFortItemViewContextInterface> ItemViewContext;                                          // 0x0268(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0278(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemDetailsHostPanel");
		return ptr;
	}


	void ShouldPreviewUpgradingItem(bool Value);
	void SetScrollWidget();
	void SetItemViewContext(const TScriptInterface<class UFortItemViewContextInterface>& ItemViewContext);
	void SetItemToDetail(class UFortItem* ItemToDetail);
	void SetItemToCompareWith(class UFortItem* ItemToCompareWith);
	void HandleShouldPreviewUpgradingItemChangedBP();
	void HandleDifferentItemToDetailSet();
	void HandleDifferentItemToCompareSet();
};


// Class FortniteUI.FortSquadSlotItemDetailElementWidget
// 0x0028 (0x0298 - 0x0270)
class UFortSquadSlotItemDetailElementWidget : public UFortItemDetailElementWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0270(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadSlotItemDetailElementWidget");
		return ptr;
	}


	void SetIdOfSquadSlotToManageBP(const struct FName& SquadId, int SquadSlotIndex);
	bool IsSquadSlotLockedBP();
	void HandlePostDifferentSquadSlotSetBP();
	class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);
	void GetIdOfSquadSlotToManageBP(struct FName* OutSquadId, int* OutSquadSlotIndex);
};


// Class FortniteUI.FortSquadSlotItemDetailsHostPanel
// 0x0028 (0x02B0 - 0x0288)
class UFortSquadSlotItemDetailsHostPanel : public UFortItemDetailsHostPanel
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0288(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadSlotItemDetailsHostPanel");
		return ptr;
	}


	void SetIdOfSquadSlotToManageBP(const struct FName& SquadId, int SquadSlotIndex);
	bool IsSquadSlotLockedBP();
	class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);
	void GetIdOfSquadSlotToManageBP(struct FName* OutSquadId, int* OutSquadSlotIndex);
};


// Class FortniteUI.FortSquadSlotSurvivorTraitMatchesDetailWidget
// 0x0028 (0x02C0 - 0x0298)
class UFortSquadSlotSurvivorTraitMatchesDetailWidget : public UFortSquadSlotItemDetailElementWidget
{
public:
	unsigned char                                      IsSquadLeaderSlot : 1;                                    // 0x0298(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      LeaderMatchesSquadType : 1;                               // 0x0299(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x029A(0x0002) MISSED OFFSET
	int                                                SubordinatePersonalityMatchCount;                         // 0x029C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MatchesLeaderPersonality : 1;                             // 0x02A0(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02A1(0x0003) MISSED OFFSET
	int                                                MatchingSetBonusCount;                                    // 0x02A4(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SetBonusSize;                                             // 0x02A8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x02AC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadSlotSurvivorTraitMatchesDetailWidget");
		return ptr;
	}


	void HandleTraitValuesUpdatedBP();
};


// Class FortniteUI.FortItemDetailsActivatablePanel
// 0x0030 (0x0410 - 0x03E0)
class UFortItemDetailsActivatablePanel : public UCommonActivatablePanel
{
public:
	TWeakObjectPtr<class UFortItem>                    ItemToCompareWith;                                        // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UFortItemManagementScreen>    HostItemManagementScreen;                                 // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x03F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemDetailsActivatablePanel");
		return ptr;
	}


	void HandleDifferentItemToDetailSetBP();
	void HandleDifferentItemToCompareSetBP();
	void HandleConsumeItemProgressChangedBP();
};


// Class FortniteUI.FortItemDetailsModeActivatablePanel
// 0x0010 (0x0420 - 0x0410)
class UFortItemDetailsModeActivatablePanel : public UFortItemDetailsActivatablePanel
{
public:
	class UCommonWidgetSwitcher*                       DetailPanelWidgetSwitcher;                                // 0x0410(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0418(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemDetailsModeActivatablePanel");
		return ptr;
	}


	void HandleOnActiveWidgetChanged(class UWidget* ActiveWidget, int ActiveWidgetIndex);
};


// Class FortniteUI.FortItemCompareModeActivatablePanel
// 0x0010 (0x0420 - 0x0410)
class UFortItemCompareModeActivatablePanel : public UFortItemDetailsActivatablePanel
{
public:
	class UFortItemManagementItemDetailsPanel*         ComparisonModeLeftItemDetailsPanel;                       // 0x0410(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortItemManagementItemDetailsPanel*         ComparisonModeRightItemDetailsPanel;                      // 0x0418(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemCompareModeActivatablePanel");
		return ptr;
	}

};


// Class FortniteUI.FortItemMulchModeActivatablePanel
// 0x0010 (0x0420 - 0x0410)
class UFortItemMulchModeActivatablePanel : public UFortItemDetailsActivatablePanel
{
public:
	class UFortItemManagementItemDetailsPanel*         MulchModeItemDetailsPanel;                                // 0x0410(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortItemManagementMulchDetailsPanel*        MulchDetailsPanel;                                        // 0x0418(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemMulchModeActivatablePanel");
		return ptr;
	}

};


// Class FortniteUI.FortItemManagementItemDetailsPanel
// 0x0018 (0x02A0 - 0x0288)
class UFortItemManagementItemDetailsPanel : public UFortItemDetailsHostPanel
{
public:
	unsigned char                                      HasItemMarkedForMulching : 1;                             // 0x0288(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0289(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UFortItemManagementScreen>    HostItemManagementScreen;                                 // 0x028C(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0294(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemManagementItemDetailsPanel");
		return ptr;
	}


	void HandleHostSet();
	void HandleHasItemMarkedForMulchingChanged();
};


// Class FortniteUI.FortItemManagementMulchDetailsPanel
// 0x0018 (0x0250 - 0x0238)
class UFortItemManagementMulchDetailsPanel : public UCommonUserWidget
{
public:
	class UFortItemQuantityListBase*                   ResourceList;                                             // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TWeakObjectPtr<class UFortItemManagementScreen>    HostItemManagementScreen;                                 // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0248(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemManagementMulchDetailsPanel");
		return ptr;
	}


	void HandleSetOfItemsToMulchChangedBP();
	void HandleHostSet();
	TArray<class UFortItem*> GetItemsToMulch();
	TArray<int> GetItemCountsToMulch();
	void CommitMulch();
};


// Class FortniteUI.FortItemManagementModeDetailsPanel
// 0x0030 (0x0268 - 0x0238)
class UFortItemManagementModeDetailsPanel : public UCommonUserWidget
{
public:
	class UCommonWidgetSwitcher*                       ModeWidgetSwitcher;                                       // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortItemDetailsActivatablePanel*            DetailsModeItemDetailsPanel;                              // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortItemDetailsActivatablePanel*            ComparisonModeItemDetailsPanel;                           // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortItemDetailsActivatablePanel*            MulchModeItemDetailsPanel;                                // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TWeakObjectPtr<class UFortItemManagementScreen>    HostItemManagementScreen;                                 // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemManagementModeDetailsPanel");
		return ptr;
	}


	void HandleHostSet();
	void HandleDifferentItemManagementModeSetBP();
	void GetItemManagementMode();
};


// Class FortniteUI.FortItemDetailsPanel
// 0x0028 (0x0260 - 0x0238)
class UFortItemDetailsPanel : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortItem>                    ItemToDetail;                                             // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UFortItem>                    ItemToCompareWith;                                        // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0248(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemDetailsPanel");
		return ptr;
	}


	void SetItemToDetail(class UFortItem* ItemToDetail);
	void SetItemToCompareWith(class UFortItem* ItemToCompareWith);
	void HandleItemToDetailChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleItemToCompareWithChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleDifferentItemToDetailSet();
	void HandleDifferentItemToCompareSet();
	void HandleCursorModeChanged(bool bCursorModeEnabled, const struct FName& ActionName, class UUserWidget* CustomWidget);
};


// Class FortniteUI.FortItemDisplayNameText
// 0x0030 (0x02C8 - 0x0298)
class UFortItemDisplayNameText : public UCommonTextBlock
{
public:
	TWeakObjectPtr<class UFortItem>                    ItemToRepresent;                                          // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x02A0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemDisplayNameText");
		return ptr;
	}


	void SetItemToRepresent(class UFortItem* ItemToRepresent);
};


// Class FortniteUI.FortItemIcon
// 0x00F0 (0x0208 - 0x0118)
class UFortItemIcon : public UWidget
{
public:
	class UFortItemDefinition*                         ItemDefinition;                                           // 0x0118(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortBrushSize>                        BrushSize;                                                // 0x0120(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0124(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      bShadow : 1;                                              // 0x0134(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0135(0x0003) MISSED OFFSET
	struct FLinearColor                                ShadowColorAndOpacity;                                    // 0x0138(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FSlateBrush                                 SmallPreviewImageBrush;                                   // 0x0148(0x0090)
	unsigned char                                      UnknownData02[0x30];                                      // 0x01D8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemIcon");
		return ptr;
	}


	void SetShadowColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetOpacity(float InOpacity);
	void SetItemDefinition(class UFortItemDefinition* InItemDefinition);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetBrushSize(TEnumAsByte<EFortBrushSize> InBrushSize);
};


// Class FortniteUI.FortItemManagementInventoryPanel
// 0x00C0 (0x02F8 - 0x0238)
class UFortItemManagementInventoryPanel : public UCommonUserWidget
{
public:
	struct FName                                       CurrentFilterName;                                        // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0240(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortItemManagementInventoryPanel.CurrentSortType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	class UClass*                                      FilterTabButtonType;                                      // 0x0248(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      FilterTabButtonStyle;                                     // 0x0250(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FFortItemManagementInventoryFilterTabLabelInfo> FilterTabLabelInfoArray;                                  // 0x0258(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	class UFortTabListWidgetBase*                      FilterTabList;                                            // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonLoadGuard*                            TileViewLoadGuard;                                        // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortItemTileView*                           TileView;                                                 // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPanelWidget*                                CraftingPanel;                                            // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonLoadGuard*                            CraftingTileViewLoadGuard;                                // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortItemTileView*                           CraftingTileView;                                         // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonTextBlock*                            MulchRestrictionReasonText;                               // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TWeakObjectPtr<class UFortItemManagementScreen>    HostItemManagementScreen;                                 // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x02A8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemManagementInventoryPanel");
		return ptr;
	}


	void SetSortType();
	void SetFilter(const struct FName& FilterName);
	void RefreshCraftingSort();
	void HandleSetOfItemsToMulchChangedBP();
	void HandleQuickBarChangedBP();
	void HandleMulchQuantitySelection(class UFortItem* Item);
	void HandleItemWidgetCreated(class UUserWidget* ItemWidget);
	void HandleInventoryUpdatedEvent();
	void HandleInventoryItemSelected(class UObject* Item, bool bIsSelected);
	void HandleInventoryItemHovered(class UObject* Item);
	void HandleInventoryItemDoubleClicked(class UObject* Item);
	void HandleInventoryItemClicked(class UObject* Item);
	void HandleFilterTabSelected(const struct FName& TabNameID);
	void HandleFilterTabButtonCreated(const struct FName& TabNameID, class UCommonButton* TabButton);
	void HandleDifferentSortTypeSetBP();
	void HandleDifferentItemManagementModeSetBP();
	void HandleDifferentFrontendInventoryFilterSetBP();
	void HandleDifferentFilterSetBP();
	void HandleCursorModeChangedBP(bool bCursorModeEnabled, const struct FName& ActionName, class UUserWidget* CursorModeContentWidget);
	void HandleCursorModeChanged(bool bCursorModeEnabled, const struct FName& ActionName, class UUserWidget* CursorModeContentWidget);
	void HandleCraftItemStarted();
	TArray<class UFortItemDefinition*> GetUpgradeItemDefinitionsForCurrentInventory();
	void GetSupportedSortTypesForCurrentInventory();
	struct FText GetQualifiedFilterDisplayName();
	void CycleSortType();
	void AdvanceSelection();
	void AddItemStackToMulch(class UFortItem* Item, int Count);
};


// Class FortniteUI.FortItemPickerBase
// 0x0058 (0x0290 - 0x0238)
class UFortItemPickerBase : public UCommonUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChangedEvent;                                  // 0x0238(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSelectionCommittedEvent;                                // 0x0248(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemHoveredEvent;                                       // 0x0258(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemUnhovered;                                          // 0x0268(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UFortItemTileView*                           PickerTileView;                                           // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TScriptInterface<class UFortItemViewContextInterface> ItemViewContext;                                          // 0x0280(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemPickerBase");
		return ptr;
	}


	bool TryCommitSelectedItem();
	void SetSelectedItem(class UFortItem* ItemToSelect);
	bool SetSelectedIndex(int Index);
	void OnItemSelectionEvent__DelegateSignature(class UFortItem* SelectedItem);
	void HandlePickerTileDestroyed(class UUserWidget* Widget);
	void HandlePickerTileCreated(class UUserWidget* Widget);
	void HandlePickerItemSelected(class UObject* ObjectWhoseSelectionChanged, bool bIsSelected);
	void HandlePickerItemHovered(class UObject* ObjectOfHoveredTile);
	void HandlePickerItemDoubleClicked(class UObject* ObjectOfClickedTile);
	void HandlePickerItemClicked(class UObject* ObjectOfClickedTile);
	class UFortItem* GetSelectedItem();
	int GetIndexForItem(class UObject* Item);
	void ClearSelection();
	void CenterSelectedItemTileWidget();
	bool CanItemBeComitted(class UFortItem* ItemToCommit);
};


// Class FortniteUI.FortCollectionBookPicker
// 0x0020 (0x02B0 - 0x0290)
class UFortCollectionBookPicker : public UFortItemPickerBase
{
public:
	struct FScriptMulticastDelegate                    OnSlotItemConfirmationCompleteEvent;                      // 0x0290(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A0(0x0008) MISSED OFFSET
	class UFortAccountItem*                            CurrentSlottedItem;                                       // 0x02A8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookPicker");
		return ptr;
	}


	void SlotItemConfirmationComplete(class UFortItem* CommittedItem, const struct FFortDialogExternalLatentActionHandle& LatentActionHandle);
	void OnSlotItemConfirmed__DelegateSignature(class UFortItem* ItemToSlot, const struct FName& SlotId, const struct FFortDialogExternalLatentActionHandle& LatentActionHandle);
	class UFortAccountItem* GetCurrentSlottedItem();
};


// Class FortniteUI.FortOutpostStorageItemPicker
// 0x0070 (0x0300 - 0x0290)
class UFortOutpostStorageItemPicker : public UFortItemPickerBase
{
public:
	TWeakObjectPtr<class UFortItemDetailsPanel>        DetailsPanel;                                             // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0298(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortOutpostStorageItemPicker");
		return ptr;
	}


	void UseFilters();
	void UseFilter();
};


// Class FortniteUI.FortSquadSlotItemPicker
// 0x00E0 (0x0370 - 0x0290)
class UFortSquadSlotItemPicker : public UFortItemPickerBase
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0290(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadSlotItemPicker");
		return ptr;
	}


	void SetIdOfSquadSlotToManageBP(const struct FName& SquadId, int SquadSlotIndex);
	void GetIdOfSquadSlotToManageBP(struct FName* OutSquadId, int* OutSquadSlotIndex);
};


// Class FortniteUI.FortTransformKeyPicker
// 0x0060 (0x02F0 - 0x0290)
class UFortTransformKeyPicker : public UFortItemPickerBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0290(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTransformKeyPicker");
		return ptr;
	}


	void RebuildTransformKeys(TArray<class UObject*> InDataProvider);
};


// Class FortniteUI.FortTransformSlotItemPicker
// 0x0000 (0x0290 - 0x0290)
class UFortTransformSlotItemPicker : public UFortItemPickerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTransformSlotItemPicker");
		return ptr;
	}


	void RebuildSlottableItems(TArray<class UFortItem*> ItemsToIgnore);
};


// Class FortniteUI.FortTrapDefenderItemPicker
// 0x0070 (0x0300 - 0x0290)
class UFortTrapDefenderItemPicker : public UFortItemPickerBase
{
public:
	TWeakObjectPtr<class UFortItemDetailsHostPanel>    DetailsPanel;                                             // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TWeakObjectPtr<class ABuildingTrapDefender>        DefenderTrap;                                             // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x02A0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTrapDefenderItemPicker");
		return ptr;
	}


	void HandleSelectionCommittedBP(class UFortItem* CommittedItem);
};


// Class FortniteUI.FortItemQuantityListEntryBase
// 0x0020 (0x0258 - 0x0238)
class UFortItemQuantityListEntryBase : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET
	int                                                Quantity;                                                 // 0x0240(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0244(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemQuantityListEntryBase");
		return ptr;
	}


	void SetItemInstanceAndQuantity(const struct FFortItemInstanceQuantityPair& ItemQuantityPair, bool ShouldTreatAsReset);
	void SetItemDefinitionAndQuantity(const struct FFortItemQuantityPair& ItemQuantityPair, bool ShouldTreatAsReset);
	void HandleDifferentItemOrQuantitySetBP(bool IsBeingReset);
	class UFortItem* GetItemInstance();
	class UFortItemDefinition* GetItemDefinition();
};


// Class FortniteUI.FortItemQuantityListBase
// 0x0078 (0x02B0 - 0x0238)
class UFortItemQuantityListBase : public UCommonUserWidget
{
public:
	class UClass*                                      ListEntryWidgetType;                                      // 0x0238(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TMap<class UObject*, class UFortItemQuantityListEntryBase*> ItemObjectToWidgetMap;                                    // 0x0240(0x0050) (CPF_ExportObject, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0290(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemQuantityListBase");
		return ptr;
	}


	void SetItemInstancesAndQuantities(TArray<struct FFortItemInstanceQuantityPair> ItemQuantityPairs, bool ShouldResetWidgets);
	void SetItemDefinitionsAndQuantities(TArray<struct FFortItemQuantityPair> ItemQuantityPairs, bool ShouldResetWidgets);
	bool IsEmptyList();
	TArray<class UFortItemDefinition*> GetItemDefinitions();
	void AddListEntry(class UFortItemQuantityListEntryBase* ListEntry);
};


// Class FortniteUI.FortItemRatingIndicator
// 0x0398 (0x05D0 - 0x0238)
class UFortItemRatingIndicator : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortItem>                    ItemToRepresent;                                          // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UFortItem>                    ItemToCompareWith;                                        // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortMultiSizeBrush                         RatingTypeIcon;                                           // 0x0248(0x0360) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                RatingValue;                                              // 0x05A8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x05AC(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortItemRatingIndicator.ComparisonResult
	unsigned char                                      ShouldAppearEnchanted : 1;                                // 0x05AD(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x22];                                      // 0x05AE(0x0022) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemRatingIndicator");
		return ptr;
	}


	void SetItemViewContext(const TScriptInterface<class UFortItemViewContextInterface>& ItemViewContext);
	void SetItemToRepresent(class UFortItem* ItemToRepresent);
	void SetItemToCompareWith(class UFortItem* ItemToCompareWith);
	void HandleViewModelChanged();
};


// Class FortniteUI.FortItemTileButton
// 0x0030 (0x08D0 - 0x08A0)
class UFortItemTileButton : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08A0(0x0008) MISSED OFFSET
	class UFortMultiSizeItemCard*                      ItemWidget;                                               // 0x08A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TWeakObjectPtr<class UFortItem>                    Item;                                                     // 0x08B0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortBrushSize>                        CardSize;                                                 // 0x08B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsRewardCard : 1;                                         // 0x08B9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x08BA(0x0006) MISSED OFFSET
	TScriptInterface<class UFortItemViewContextInterface> ItemViewContext;                                          // 0x08C0(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemTileButton");
		return ptr;
	}

};


// Class FortniteUI.AthenaInventoryFortItemTileButtonBase
// 0x0000 (0x08D0 - 0x08D0)
class UAthenaInventoryFortItemTileButtonBase : public UFortItemTileButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaInventoryFortItemTileButtonBase");
		return ptr;
	}


	void HandleEquipSlotChanged(int EquipSlot);
};


// Class FortniteUI.FortItemManagementItemTileButton
// 0x0038 (0x0908 - 0x08D0)
class UFortItemManagementItemTileButton : public UFortItemTileButton
{
public:
	unsigned char                                      HasTheItemToDetail : 1;                                   // 0x08D0(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      HasTheItemToCompareDetailsWith : 1;                       // 0x08D1(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      HasAnItemMarkedForMulching : 1;                           // 0x08D2(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x08D3(0x0001) MISSED OFFSET
	int                                                MulchCount;                                               // 0x08D4(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UOverlay*                                    NotCraftableOverlay;                                      // 0x08D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TWeakObjectPtr<class UFortItemManagementScreen>    HostItemManagementScreen;                                 // 0x08E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x08E8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemManagementItemTileButton");
		return ptr;
	}


	void HandleItemMulchStateChanged();
	void HandleHasItemToDetailChanged();
	void HandleHasItemToCompareDetailsWithChanged();
	void HandleEquipSlotChanged(int EquipSlot);
	void HandleDifferentItemManagementModeSetBP();
	void GetItemManagementMode();
};


// Class FortniteUI.FortItemPickerButton
// 0x0000 (0x08D0 - 0x08D0)
class UFortItemPickerButton : public UFortItemTileButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemPickerButton");
		return ptr;
	}

};


// Class FortniteUI.FortSquadSlotItemPickerTileButton
// 0x0018 (0x08E8 - 0x08D0)
class UFortSquadSlotItemPickerTileButton : public UFortItemPickerButton
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x08D0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadSlotItemPickerTileButton");
		return ptr;
	}


	void HandleSlottingRestrictionReasonsChanged();
	void HandleItemSlottedToDifferentSquad(const struct FHomebaseSquadSlotId& SquadSlotId);
	void GetSlottingRestrictionReasons();
};


// Class FortniteUI.FortTransformKeyPickerTileButton
// 0x0000 (0x08D0 - 0x08D0)
class UFortTransformKeyPickerTileButton : public UFortItemPickerButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTransformKeyPickerTileButton");
		return ptr;
	}

};


// Class FortniteUI.FortTransformSlotItemPickerTileButton
// 0x0000 (0x08D0 - 0x08D0)
class UFortTransformSlotItemPickerTileButton : public UFortItemPickerButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTransformSlotItemPickerTileButton");
		return ptr;
	}

};


// Class FortniteUI.FortItemTileView
// 0x0110 (0x0440 - 0x0330)
class UFortItemTileView : public UCommonTileView
{
public:
	struct FFortItemFilterDefinition                   Filter;                                                   // 0x0330(0x0060) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FFortItemSorterDefinition                   Sorter;                                                   // 0x0390(0x0050) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bShouldShowNullItemTile : 1;                              // 0x03E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAutomaticallyLoadItemDetails : 1;                        // 0x03E1(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x03E2(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortItemTileView.DisplayType
	unsigned char                                      UnknownData01[0x5];                                       // 0x03E3(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInventoryUpdatedEvent;                                  // 0x03E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData02[0x18];                                      // 0x03F8(0x0018) MISSED OFFSET
	TArray<TWeakObjectPtr<class UFortItem>>            ItemsForTileView;                                         // 0x0410(0x0010) (CPF_ZeroConstructor)
	TScriptInterface<class UFortItemViewContextInterface> ItemViewContext;                                          // 0x0420(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemTileView");
		return ptr;
	}


	void ShowNullItemTile();
	void SetSorter(const struct FFortItemSorterDefinition& Sorter);
	void SetItemViewContext(const TScriptInterface<class UFortItemViewContextInterface>& ItemViewContext);
	void SetFilterAndSorter(const struct FFortItemFilterDefinition& Filter, const struct FFortItemSorterDefinition& Sorter);
	void SetFilter(const struct FFortItemFilterDefinition& Filter);
	void RefreshSort();
	void RefreshFilterAndSort();
	void OnInventoryUpdated__DelegateSignature();
	void HideNullItemTile();
	void HandleItemWidgetCreated(class UUserWidget* Widget);
	void CenterSelectedItemTileWidget();
};


// Class FortniteUI.FortItemTransform
// 0x0000 (0x03E0 - 0x03E0)
class UFortItemTransform : public UCommonActivatablePanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemTransform");
		return ptr;
	}


	void ProcessPendingSeenTransformKeys();
};


// Class FortniteUI.FortItemCard_L
// 0x0000 (0x0168 - 0x0168)
class UFortItemCard_L : public UFortItemCardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemCard_L");
		return ptr;
	}

};


// Class FortniteUI.FortItemCard_M
// 0x0000 (0x0168 - 0x0168)
class UFortItemCard_M : public UFortItemCardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemCard_M");
		return ptr;
	}

};


// Class FortniteUI.FortItemCard_S
// 0x0008 (0x0170 - 0x0168)
class UFortItemCard_S : public UFortItemCardBase
{
public:
	unsigned char                                      ShouldDisplayDurabilityBar : 1;                           // 0x0168(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemCard_S");
		return ptr;
	}

};


// Class FortniteUI.FortItemCard_XL
// 0x0000 (0x0168 - 0x0168)
class UFortItemCard_XL : public UFortItemCardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemCard_XL");
		return ptr;
	}

};


// Class FortniteUI.FortItemCard_XS
// 0x0000 (0x0168 - 0x0168)
class UFortItemCard_XS : public UFortItemCardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemCard_XS");
		return ptr;
	}

};


// Class FortniteUI.FortItemCard_XXS
// 0x0000 (0x0168 - 0x0168)
class UFortItemCard_XXS : public UFortItemCardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemCard_XXS");
		return ptr;
	}

};


// Class FortniteUI.FortMultiSizeItemCard
// 0x0010 (0x0178 - 0x0168)
class UFortMultiSizeItemCard : public UFortItemCardBase
{
public:
	TEnumAsByte<EFortBrushSize>                        BPCardSize;                                               // 0x0168(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0169(0x0007) MISSED OFFSET
	class UFortItemCardBase*                           InnerCard;                                                // 0x0170(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMultiSizeItemCard");
		return ptr;
	}


	void SetCardSize(TEnumAsByte<EFortBrushSize> CardSize);
};


// Class FortniteUI.FortJournalQuestDetails
// 0x0008 (0x0240 - 0x0238)
class UFortJournalQuestDetails : public UCommonUserWidget
{
public:
	class UFortQuestItem*                              CurrentQuest;                                             // 0x0238(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortJournalQuestDetails");
		return ptr;
	}


	void SetCurrentQuest(class UFortQuestItem* InCurrentQuest);
	void HandleCurrentQuestChangedBP();
	void GetVisibleObjectives(TArray<class UFortQuestObjectiveInfo*>* VisibleObjectives);
	void GetRewards(TArray<struct FFortItemInstanceQuantityPair>* OutRewards, TArray<struct FFortItemInstanceQuantityPair>* OutSelectableRewards);
	void GetFutureObjectives(TArray<class UFortQuestObjectiveInfo*>* FutureObjectives);
	void GetActiveMissionTileType();
	bool CanPlayQuest();
	bool CanPartyLeaderPlayQuest();
	bool CanGotoQuest();
};


// Class FortniteUI.FortJournalQuestProgressBar
// 0x0010 (0x0248 - 0x0238)
class UFortJournalQuestProgressBar : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET
	TWeakObjectPtr<class UFortQuestObjectiveInfo>      QuestObjectiveInfo;                                       // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortJournalQuestProgressBar");
		return ptr;
	}


	void HandleNewQuestObjectiveBP();
	void GetProgressDetails(struct FText* OutNumerator, struct FText* OutDenominator, float* OutFraction);
};


// Class FortniteUI.FortLegacySlateBridgeWidget
// 0x0040 (0x0168 - 0x0128)
class UFortLegacySlateBridgeWidget : public UNativeWidgetHost
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0128(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortLegacySlateBridgeWidget.ContainedWidgetType
	unsigned char                                      UnknownData01[0x3];                                       // 0x0129(0x0003) MISSED OFFSET
	float                                              DPIScaleFactor;                                           // 0x012C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptDelegate                             OnClose;                                                  // 0x0130(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0130(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData03[0x28];                                      // 0x0140(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortLegacySlateBridgeWidget");
		return ptr;
	}


	void UpdateSlateWidget();
	void SetOnCloseHandler(const struct FScriptDelegate& OnCloseHandler);
};


// Class FortniteUI.FortLevelIndicator
// 0x0078 (0x0190 - 0x0118)
class UFortLevelIndicator : public UWidget
{
public:
	TWeakObjectPtr<class UFortItem>                    ItemToRepresent;                                          // 0x0118(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UFortItem>                    ItemForComparison;                                        // 0x0120(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ShouldShowLabel : 1;                                      // 0x0128(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0129(0x0007) MISSED OFFSET
	class UClass*                                      TextStyle;                                                // 0x0130(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ShouldShowMaximumLevel : 1;                               // 0x0138(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0139(0x0003) MISSED OFFSET
	int                                                CurrentLevel;                                             // 0x013C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaximumLevel;                                             // 0x0140(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsComparingLevels : 1;                                    // 0x0144(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortBrushSize>                        ComparisonResultIndicatorSize;                            // 0x0145(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0146(0x0002) MISSED OFFSET
	int                                                CurrentLevelForComparison;                                // 0x0148(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaximumLevelForComparison;                                // 0x014C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonTextBlock*                            LabelTextBlock;                                           // 0x0150(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonNumericTextBlock*                     CurrentLevelNumericTextBlock;                             // 0x0158(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0160(0x0010) MISSED OFFSET
	class UCommonTextBlock*                            DivisionOperatorTextBlock;                                // 0x0170(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonNumericTextBlock*                     MaximumLevelNumericTextBlock;                             // 0x0178(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0180(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortLevelIndicator");
		return ptr;
	}


	void SetShouldShowMaximumLevel(bool InShouldShowMaximumLevel);
	void SetItemToRepresent(class UFortItem* ItemToRepresent);
	void SetItemForComparison(class UFortItem* ItemForComparison);
	void HandleItemToRepresentChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleItemForComparisonChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
};


// Class FortniteUI.FortListView
// 0x0068 (0x0180 - 0x0118)
class UFortListView : public UTableViewBase
{
public:
	struct FScriptMulticastDelegate                    OnItemClicked;                                            // 0x0118(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemSelected;                                           // 0x0128(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptDelegate                             OnGenerateRowEvent;                                       // 0x0138(0x000A) (CPF_Edit, CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0138(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	float                                              ItemHeight;                                               // 0x0148(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	TArray<class UObject*>                             DataProvider;                                             // 0x0150(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TEnumAsByte<ESelectionMode>                        SelectionMode;                                            // 0x0160(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0161(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortListView.ConsumeMouseWheel
	unsigned char                                      UnknownData03[0x6];                                       // 0x0162(0x0006) MISSED OFFSET
	class UClass*                                      ListItemClass;                                            // 0x0168(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0170(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortListView");
		return ptr;
	}


	bool SetItemSelected(class UObject* Item);
	bool SetIndexSelected(int Index);
	void SetDataProvider(TArray<class UObject*> NewData);
	void RemoveItemAt(int Index);
	class UObject* GetItemAt(int Index);
	int GetIndexForItem(class UObject* Item);
	void ClearSelection();
	void Clear();
	void AddItem(class UObject* NewItem);
};


// Class FortniteUI.FortLiveStreamGrantWindowExpires
// 0x0000 (0x0238 - 0x0238)
class UFortLiveStreamGrantWindowExpires : public UCommonUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortLiveStreamGrantWindowExpires");
		return ptr;
	}

};


// Class FortniteUI.FortLobby
// 0x0050 (0x0430 - 0x03E0)
class UFortLobby : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x03E0(0x0040) MISSED OFFSET
	class UOverlay*                                    OverlayMain;                                              // 0x0420(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortLobby");
		return ptr;
	}


	void OnPlayerClicked(int PlayerIndex);
	void OnNavigationRight();
	void OnNavigationLeft();
	void OnEndCursorOverPlayer(int PlayerIndex);
	void OnBeginCursorOverPlayer(int PlayerIndex);
};


// Class FortniteUI.FortLoginAccountSelect
// 0x0010 (0x03F0 - 0x03E0)
class UFortLoginAccountSelect : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortLoginAccountSelect");
		return ptr;
	}


	void ChooseLoginAccountType();
};


// Class FortniteUI.FortMainTabsScreenBase
// 0x0060 (0x0440 - 0x03E0)
class UFortMainTabsScreenBase : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x03E0(0x0048) MISSED OFFSET
	class UHorizontalBox*                              TopTabContainer;                                          // 0x0428(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortTabListWidgetBase*                      TopTabList;                                               // 0x0430(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0438(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMainTabsScreenBase");
		return ptr;
	}


	void HandleRefreshSkillTreeNodePage();
	void HandleMainTabSelected(const struct FName& TabNameID);
	void HandleMainTabCreated(const struct FName& TabNameID, class UCommonButton* TabButton);
	void HandleFeatureStateChanged();
	void HandleFeatureNavigateRequest();
	void ConstructTabs();
};


// Class FortniteUI.FortMaterialProgressBarStyle
// 0x0118 (0x0140 - 0x0028)
class UFortMaterialProgressBarStyle : public UObject
{
public:
	struct FName                                       BackgroundColorParamName;                                 // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x0030(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FFortMaterialProgressBarSectionStyle        BarSectionStyles[0x4];                                    // 0x0040(0x0040) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMaterialProgressBarStyle");
		return ptr;
	}

};


// Class FortniteUI.FortMaterialProgressBar
// 0x0158 (0x0390 - 0x0238)
class UFortMaterialProgressBar : public UCommonUserWidget
{
public:
	class UClass*                                      Style;                                                    // 0x0238(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BackgroundColorParamName;                                 // 0x0240(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x0248(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0258(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortMaterialProgressBar.OverflowBehavior
	unsigned char                                      UnknownData01[0x7];                                       // 0x0259(0x0007) MISSED OFFSET
	struct FFortMaterialProgressBarSectionInfo         BarSectionInfo[0x4];                                      // 0x0260(0x0048) (CPF_Edit)
	class UCommonBorder*                               ProgressBar;                                              // 0x0380(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    ProgressBarMID;                                           // 0x0388(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMaterialProgressBar");
		return ptr;
	}


	void SetStyle(class UClass* BarStyle);
	void SetProgressBarSectionPercent(TEnumAsByte<EFortMaterialProgressBarSection> BarSection, float Percent);
	void SetProgressBarSectionColor(TEnumAsByte<EFortMaterialProgressBarSection> BarSection, const struct FLinearColor& Color);
	void SetBackgroundColor(const struct FLinearColor& Color);
};


// Class FortniteUI.FortMicIndicatorWidget
// 0x0028 (0x0260 - 0x0238)
class UFortMicIndicatorWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0238(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMicIndicatorWidget");
		return ptr;
	}


	void SetPlayerUniqueId(const struct FUniqueNetIdRepl& InPlayerUniqueId);
	void OnPlayerTalkingChanged(bool bIsTalking);
	void OnPlayerMuted(bool bIsMuted);
	void OnPlayerMicAvailable(bool bIsTalking);
};


// Class FortniteUI.FortMissionSelect
// 0x0060 (0x0440 - 0x03E0)
class UFortMissionSelect : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x03E0(0x0040) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnNavigation;                                             // 0x0420(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UCommonBorder*                               MainBorder;                                               // 0x0430(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0438(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMissionSelect");
		return ptr;
	}


	bool NavigateMissionTiles();
};


// Class FortniteUI.FortMissionTrackerEntry
// 0x00A8 (0x02E0 - 0x0238)
class UFortMissionTrackerEntry : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMissionEntryVisibilityChanged;                          // 0x0240(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
	class UClass*                                      SubEntryClass;                                            // 0x0250(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	unsigned char                                      bConfigureAsHUD : 1;                                      // 0x0258(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHiddenByHeightConstraint : 1;                            // 0x0259(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x025A(0x0006) MISSED OFFSET
	class UCommonTextBlock*                            MissionNameText;                                          // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UVerticalBox*                                ObjectivesListBox;                                        // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UImage*                                      UpperSeparator;                                           // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class AFortMission*                                TrackedMission;                                           // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSizeEstimateChangedDelegate;                            // 0x0280(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0290(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMissionTrackerEntry");
		return ptr;
	}


	void UpdateVisibility();
	void OnMissionSet();
	void HandleObjectivesChanged();
};


// Class FortniteUI.FortMissionTrackerSubEntry
// 0x0038 (0x0270 - 0x0238)
class UFortMissionTrackerSubEntry : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMissionSubEntryVisibilityChanged;                       // 0x0240(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      bConfigureAsHUD : 1;                                      // 0x0250(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHiddenByHeightConstraint : 1;                            // 0x0251(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0252(0x0006) MISSED OFFSET
	class AFortObjectiveBase*                          TrackedObjective;                                         // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSizeEstimateChangedDelegate;                            // 0x0260(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMissionTrackerSubEntry");
		return ptr;
	}


	void OnObjectiveSet();
	void OnHiddenByHeightConstraintChanged();
	void NotifyVisibilityChanged();
};


// Class FortniteUI.FortModalContainerData
// 0x0010 (0x0038 - 0x0028)
class UFortModalContainerData : public UDataAsset
{
public:
	TArray<struct FFortModalContainerSizeEntry>        Entries;                                                  // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortModalContainerData");
		return ptr;
	}

};


// Class FortniteUI.FortModalContainerWidget
// 0x0058 (0x0170 - 0x0118)
class UFortModalContainerWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	unsigned char                                      UnknownData01[0x1];                                       // 0x0118(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortModalContainerWidget.SizeConstraint
	unsigned char                                      UnknownData02[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	TArray<struct FFortModalContainerSizeEntry>        DefaultSizeEntries;                                       // 0x0128(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	class UFortModalContainerData*                     OverrideSizeEntries;                                      // 0x0138(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidget*                                     TopContent;                                               // 0x0140(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidget*                                     MiddleContent;                                            // 0x0148(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidget*                                     BottomContent;                                            // 0x0150(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidget*                                     BackgroudContent;                                         // 0x0158(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0160(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortModalContainerWidget");
		return ptr;
	}

};


// Class FortniteUI.FortMtxStoreOfferBase
// 0x00A8 (0x0948 - 0x08A0)
class UFortMtxStoreOfferBase : public UCommonButton
{
public:
	class UFortMtxOfferData*                           OfferDisplayAsset;                                        // 0x08A0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMtxPackage                                 MtxOffer;                                                 // 0x08A8(0x00A0) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMtxStoreOfferBase");
		return ptr;
	}


	struct FSlateBrush GetTileImage();
	void GetStoreOfferType();
	bool GetSalePrice(struct FText* SalePrice);
	struct FString GetOfferId();
	struct FText GetNormalPrice();
	struct FText GetName();
	struct FFortMtxGradient GetGradient();
	struct FSlateBrush GetDetailsImage();
	TArray<struct FFortMtxDetailsAttribute> GetDetailsAttributes();
	struct FText GetDescription();
	int GetBonusQuantity();
	int GetBaseQuantity();
	struct FLinearColor GetBackground();
};


// Class FortniteUI.FortMtxStoreRootBase
// 0x0040 (0x0420 - 0x03E0)
class UFortMtxStoreRootBase : public UCommonActivatablePanel
{
public:
	class UClass*                                      MtxOfferWidgetClass;                                      // 0x03E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIncludeCurrency : 1;                                     // 0x03E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03E9(0x0007) MISSED OFFSET
	TArray<struct FMtxPackage>                         MtxOffers;                                                // 0x03F0(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0400(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMtxStoreRootBase");
		return ptr;
	}


	void OnStartReadingOffers();
	void OnOffersGenerated();
	void OnMtxOfferGenerated(class UFortMtxStoreOfferBase* MtxOffer);
	void NoOffersAvailable();
	void HandleMtxPackagesRead(TArray<struct FMtxPackage> Offers);
	void GetStoreOfferType(const struct FMtxPackage& Package);
	bool AreOffersLoaded();
};


// Class FortniteUI.FortMultiSizeImage
// 0x0388 (0x04A0 - 0x0118)
class UFortMultiSizeImage : public UWidget
{
public:
	struct FFortMultiSizeBrush                         MultiSizeBrush;                                           // 0x0118(0x0360) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TEnumAsByte<EFortBrushSize>                        BrushSize;                                                // 0x0478(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0479(0x0003) MISSED OFFSET
	struct FLinearColor                                ColorAndOpacity;                                          // 0x047C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x048C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMultiSizeImage");
		return ptr;
	}


	void SetMultiSizeBrush(const struct FFortMultiSizeBrush& MultiSizeBrush);
	void SetColorAndOpacity(const struct FLinearColor& Color);
	void SetBrushSize(TEnumAsByte<EFortBrushSize> BrushSize);
};


// Class FortniteUI.FortComparisonResultIndicator
// 0x0008 (0x04A8 - 0x04A0)
class UFortComparisonResultIndicator : public UFortMultiSizeImage
{
public:
	unsigned char                                      bShouldCollapseWhenNotShown : 1;                          // 0x04A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x04A1(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortComparisonResultIndicator.ComparisonResult

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortComparisonResultIndicator");
		return ptr;
	}


	void SetComparisonResult();
};


// Class FortniteUI.FortSimpleItemConditionIconIndicator
// 0x0008 (0x04A8 - 0x04A0)
class UFortSimpleItemConditionIconIndicator : public UFortMultiSizeImage
{
public:
	unsigned char                                      bShouldCollapseWhenConditionIsFalse : 1;                  // 0x04A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSimpleItemConditionIconIndicator");
		return ptr;
	}


	void ShouldCollapseWhenConditionIsFalse(bool Value);
	void SetItemToRepresent(class UFortItem* ItemToRepresent);
	class UFortItem* GetItemToRepresent();
};


// Class FortniteUI.FortEvolveIndicator
// 0x0000 (0x04A8 - 0x04A8)
class UFortEvolveIndicator : public UFortSimpleItemConditionIconIndicator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortEvolveIndicator");
		return ptr;
	}

};


// Class FortniteUI.FortFavoriteIndicator
// 0x0000 (0x04A8 - 0x04A8)
class UFortFavoriteIndicator : public UFortSimpleItemConditionIconIndicator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortFavoriteIndicator");
		return ptr;
	}

};


// Class FortniteUI.FortInventoryOverflowIndicator
// 0x0000 (0x04A8 - 0x04A8)
class UFortInventoryOverflowIndicator : public UFortSimpleItemConditionIconIndicator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortInventoryOverflowIndicator");
		return ptr;
	}

};


// Class FortniteUI.FortTrackedIndicator
// 0x0000 (0x04A8 - 0x04A8)
class UFortTrackedIndicator : public UFortSimpleItemConditionIconIndicator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTrackedIndicator");
		return ptr;
	}

};


// Class FortniteUI.FortUpgradeIndicator
// 0x0000 (0x04A8 - 0x04A8)
class UFortUpgradeIndicator : public UFortSimpleItemConditionIconIndicator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUpgradeIndicator");
		return ptr;
	}

};


// Class FortniteUI.FortNumericTextBlock
// 0x0050 (0x0298 - 0x0248)
class UFortNumericTextBlock : public UTextBlock
{
public:
	struct FScriptMulticastDelegate                    CountFinished;                                            // 0x0248(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	int                                                StartingValue;                                            // 0x0258(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DestValue;                                                // 0x025C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseGrouping : 1;                                         // 0x0260(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAsCurrency : 1;                                          // 0x0261(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0262(0x0002) MISSED OFFSET
	float                                              EaseOutExp;                                               // 0x0264(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UpdateInterval;                                           // 0x0268(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ShrinkTime;                                               // 0x026C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0270(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortNumericTextBlock");
		return ptr;
	}


	bool IsInterpolatingNumber();
	void InterpolateSet(int InValue, float InUpdateLength, float InReportEndEarly);
	int GetCurrentValue();
	void DirectlySet(int InValue);
};


// Class FortniteUI.FortOptionsMenu
// 0x0000 (0x03E0 - 0x03E0)
class UFortOptionsMenu : public UCommonActivatablePanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortOptionsMenu");
		return ptr;
	}


	void UpdateEula();
	bool ShowVideoOptions();
	bool ShowInputOptions();
	bool ShowGameOptions();
	bool ShowControllerOptions();
	void ResetClientHUDSettings();
	void OnVideoAccept();
	void OnResetToDefaults();
	void OnReset();
	void OnApply();
	bool NeedsVideoChangeConfirmation();
	bool NeedsLanguageChangeConfirmation();
	void HandleSettingsErrorMessageClosed();
	void HandleBenchmarkComplete();
};


// Class FortniteUI.FortOptionsMenuInputData
// 0x0058 (0x0080 - 0x0028)
class UFortOptionsMenuInputData : public UDataAsset
{
public:
	struct FText                                       DisplayText;                                              // 0x0028(0x0018) (CPF_BlueprintVisible)
	struct FText                                       PrimaryText;                                              // 0x0040(0x0018) (CPF_BlueprintVisible)
	struct FText                                       SecondaryText;                                            // 0x0058(0x0018) (CPF_BlueprintVisible)
	int                                                ElementNumber;                                            // 0x0070(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	class UCommonTextBlock*                            TabText;                                                  // 0x0078(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortOptionsMenuInputData");
		return ptr;
	}

};


// Class FortniteUI.FortOptionsTab
// 0x0010 (0x0248 - 0x0238)
class UFortOptionsTab : public UCommonUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnTabSettingChanged;                                      // 0x0238(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortOptionsTab");
		return ptr;
	}


	void UpdateOptionsTab();
	bool IsXboxPlatform();
	bool IsPS4Platform();
	bool IsAthena();
	void CenterOnTab();
};


// Class FortniteUI.FortAccountOptions
// 0x0000 (0x0248 - 0x0248)
class UFortAccountOptions : public UFortOptionsTab
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAccountOptions");
		return ptr;
	}

};


// Class FortniteUI.FortAudioOptions
// 0x0000 (0x0248 - 0x0248)
class UFortAudioOptions : public UFortOptionsTab
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAudioOptions");
		return ptr;
	}


	void SoundFXVolumeChanged(float NewValue);
	bool ShowQuality();
	bool ShowChatVolume();
	void SetSubtitlesEnabled(bool bNewValue);
	void SetQuality(int NewQuality);
	void MusicVolumeChanged(float NewValue);
	bool GetSubtitlesEnabled();
	float GetSoundFXVolumeValue();
	int GetQuality();
	float GetMusicVolumeValue();
	float GetDialogVolumeValue();
	float GetChatVolumeValue();
	void DialogVolumeChanged(float NewValue);
	void ChatVolumeChanged(float NewValue);
};


// Class FortniteUI.FortGameOptions
// 0x0040 (0x0288 - 0x0248)
class UFortGameOptions : public UFortOptionsTab
{
public:
	float                                              MinGammaValue;                                            // 0x0248(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxGammaValue;                                            // 0x024C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UFortHUDVisibilityData*>              HUDData;                                                  // 0x0250(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	class UCommonListView*                             HUDCommonListView;                                        // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0268(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortGameOptions");
		return ptr;
	}


	void UpdatePossibleLanguages();
	void UpdateHUDSettings(const struct FGameplayTag& HUDMapping, bool NewVisibility);
	void UpdateGammaSettings(float GammaValue);
	void TapInteractChanged(bool bInChecked);
	void SprintToggleChanged(bool bInChecked);
	void SprintCancelsReloadChanged(bool bInChecked);
	bool ShouldShowSafeZoneOption();
	void SetControllerPlatform(const struct FString& InControllerPlatform);
	void SafeZoneChanged(float NewValue);
	void OnForceFeedbackChanged(bool bInChecked);
	void OnFocusOnFirstBuildingPieceWhenQuickbarSwappedChanged(bool bInChecked);
	void MouseSensitivityChanged(float NewValue);
	void LookInversionChanged(bool bInChecked);
	void LanguageChanged(int NewMode);
	bool Initialize();
	bool GetTapInteractState();
	bool GetSprintToggleState();
	bool GetSprintCancelsReloadState();
	float GetSafeZoneValue();
	TArray<struct FText> GetPossibleLanguages();
	float GetMouseSensitivityValue();
	bool GetLookInversionState();
	class UWidget* GetListWidget(class UObject* Item);
	bool GetHUDSettings(const struct FGameplayTag& HUDMapping);
	float GetGammaSettings();
	struct FVector2D GetGamepadLookSensitivityValue();
	bool GetForceFeedbackState();
	bool GetFocusOnFirstBuildingPieceWhenQuickbarSwappedState();
	bool GetFirstPersonCameraState();
	float GetDefaultGammaSettings();
	int GetCurrentLanguage();
	struct FString GetControllerPlatform();
	bool GetAutoEquipState();
	void GamepadLookSensitivityYChanged(float NewValue);
	void GamepadLookSensitivityXChanged(float NewValue);
	void FirstPersonCameraChanged(bool bInChecked);
	void ConstructHUDTagList();
	void AutoEquipChanged(bool bInChecked);
};


// Class FortniteUI.FortInputOptions
// 0x0038 (0x0280 - 0x0248)
class UFortInputOptions : public UFortOptionsTab
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0248(0x0010) MISSED OFFSET
	TArray<class UFortOptionsMenuInputData*>           InputData;                                                // 0x0258(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	class UCommonListView*                             InputCommonListView;                                      // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonTextBlock*                            TooltipDisplay;                                           // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0278(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortInputOptions");
		return ptr;
	}


	void HandleUsingGamepadChanged(bool bUsingGamepad);
	class UWidget* GetListWidget(class UObject* Item);
	struct FText GetBindedKeyNameBP(int KeyBind, bool IsPrimary);
	void ConstructKeyBindList();
	void ChangeBinding(bool IsPrimarySlot, int Input, const struct FKey& NewKey);
};


// Class FortniteUI.FortVideoOptions
// 0x0060 (0x02A8 - 0x0248)
class UFortVideoOptions : public UFortOptionsTab
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0248(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortVideoOptions");
		return ptr;
	}


	void WindowModeChanged(int NewMode);
	void ViewDistanceQualityChanged(int ButtonId);
	void UseVsyncChanged(bool IsChecked);
	void TextureQualityChanged(int ButtonId);
	void ShowGrassChanged(bool IsChecked);
	void ShowFPSChanged(bool IsChecked);
	void ShadowQualityChanged(int ButtonId);
	void ResolutionChanged(int NewResolution);
	void PostProcessQualityChanged(int ButtonId);
	void OnQualitySelectorChanged(int ValueRef);
	void MotionBlurChanged(bool IsChecked);
	bool IsWindowedFullscreen(int CurrentMode);
	void InitializeValues();
	int GetViewDistanceQuality();
	bool GetUseVsync();
	int GetTextureQuality();
	bool GetShowGrass();
	bool GetShowFPS();
	int GetShadowQuality();
	int GetPostProcessQuality();
	TArray<struct FText> GetPossibleWindowModes();
	TArray<struct FText> GetPossibleFPS();
	TArray<struct FText> GetPossibleDisplayResolutions();
	bool GetMotionBlur();
	int GetEffectsQuality();
	int GetDiscreteResolutionQuality();
	int GetCurrentWindowMode();
	int GetCurrentFPS();
	int GetCurrentDisplayResolution();
	int GetAntiAliasingQuality();
	void FrameRateLimitChanged(int FrameRateLimit);
	void EffectsQualityChanged(int ButtonId);
	void DiscreteResolutionQualityChanged(int ButtonId);
	void AntiAliasingQualityChanged(int ButtonId);
};


// Class FortniteUI.FortPartyTreeItemBase
// 0x0018 (0x08B8 - 0x08A0)
class UFortPartyTreeItemBase : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08A0(0x0008) MISSED OFFSET
	class UFortSocialItem*                             SocialItem;                                               // 0x08A8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x08B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPartyTreeItemBase");
		return ptr;
	}


	void OnSocialItemSet();
	void ExpansionChanged(bool bExpanded);
};


// Class FortniteUI.FortPerkWidget_NUI
// 0x0098 (0x02D0 - 0x0238)
class UFortPerkWidget_NUI : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET
	struct FFortUIPerk                                 Perk;                                                     // 0x0240(0x0088) (CPF_BlueprintVisible)
	class UFortTooltipContext*                         TooltipContext;                                           // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPerkWidget_NUI");
		return ptr;
	}


	void SetTooltipContext(class UFortTooltipContext* TooltipContext);
	void OnPerkUpdated();
	bool IsTierPerk();
	bool IsPerkUnlocked();
	bool IsPerkHighlighted();
	bool IsPerkEmpty();
	bool HasAbility();
	struct FText GetTooltipTitle();
	TArray<struct FText> GetTooltipDescription();
	void GetSupportBonusType();
	int GetRequiredLevel();
	TEnumAsByte<EFortItemTier> GetPerkTier();
	bool GetIcon(struct FSlateBrush* Brush);
	struct FText GetCombinedTooltipDescription();
};


// Class FortniteUI.FortPerkTierWidget_NUI
// 0x0050 (0x0288 - 0x0238)
class UFortPerkTierWidget_NUI : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET
	struct FFortUIPerkTier                             FortPerkTier;                                             // 0x0240(0x0020) (CPF_BlueprintVisible)
	class UFortTooltipContext*                         TooltipContext;                                           // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0268(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPerkTierWidget_NUI");
		return ptr;
	}


	void ProcessPerks();
	void OnGeneratePerk(const struct FFortUIPerk& Perk, class UFortPerkWidget_NUI* PerkWidget);
};


// Class FortniteUI.FortPerksWidget_NUI
// 0x0078 (0x02B0 - 0x0238)
class UFortPerksWidget_NUI : public UCommonUserWidget
{
public:
	class UFortHero*                                   Hero;                                                     // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0240(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortPerksWidget_NUI.State
	unsigned char                                      UnknownData01[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	class UFortHero*                                   EvolutionOption;                                          // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      PerkTierWidgetType;                                       // 0x0250(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      PerkWidgetType;                                           // 0x0258(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortTooltipContext*                         TooltipContext;                                           // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x48];                                      // 0x0268(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPerksWidget_NUI");
		return ptr;
	}


	void SetState(class UFortHero* InEvolutionOption);
	void SetHero(class UFortHero* InHero);
	void ProcessPerkTiers();
	void ProcessPerks();
	void OnStateChanged();
	void OnHeroChanged();
	void OnGeneratePerkTier(const struct FFortUIPerkTier& FortPerkTier, class UFortPerkTierWidget_NUI* PerkTierWidget);
	void OnGeneratePerk(const struct FFortUIPerk& FortPerk, class UFortPerkWidget_NUI* PerkWidget);
};


// Class FortniteUI.FortPickerContext
// 0x00D8 (0x0100 - 0x0028)
class UFortPickerContext : public UBlueprintContextBase
{
public:
	struct FScriptMulticastDelegate                    OnShowPicker;                                             // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPickerConfirm;                                          // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPickerCancel;                                           // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPickerOptionMoved;                                      // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPickerOptionChosen;                                     // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0078(0x0018) MISSED OFFSET
	TMap<class UFortItemDefinition*, float>            TrackedTrapsMap;                                          // 0x0090(0x0050) (CPF_ZeroConstructor, CPF_Transient)
	class UFortPickerData*                             PickerData;                                               // 0x00E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<class UFortSchematicItem*>                  AccountTrapSchematics;                                    // 0x00E8(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPickerContext");
		return ptr;
	}


	bool UseLeftThumbstick();
	void SetFortPickerData(class UFortPickerData* Data);
	void RestoreInputAxes();
	void PickerOptionAccepted(int Option);
	void PickerCanceled();
	void GetRadialPickerOptionItem(int Index, class UFortItem** Item, bool* bOptionEnabled);
	void GetRadialPickerOptionImageAndLabel(int Index, struct FText* Label, struct FSlateBrush* Brush, bool* bOptionEnabled);
	int GetNumPickerOptions();
	class UFortItem* GetListPickerOption(int Index);
	bool DoesRadialCloseOnRelease();
};


// Class FortniteUI.FortPickerData
// 0x00B0 (0x00D8 - 0x0028)
class UFortPickerData : public UDataAsset
{
public:
	TArray<struct FBuildingCategoryOptionData>         BuildingCategories;                                       // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FBuildingOptionData>                 WallOptions;                                              // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FBuildingOptionData>                 FloorOptions;                                             // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FBuildingOptionData>                 StairOptions;                                             // 0x0058(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FBuildingOptionData>                 RoofOptions;                                              // 0x0068(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FItemCategoryOptionData>             TrapCategories;                                           // 0x0078(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FItemCategoryOptionData>             WeaponCategories;                                         // 0x0088(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FRadialOptionData>                   SocialCategories;                                         // 0x0098(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FChatOptionData>                     ChatOptions;                                              // 0x00A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FMapNoteOptionData>                  MapNoteOptions;                                           // 0x00B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FEmoteOptionData>                    EmoteOptions;                                             // 0x00C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPickerData");
		return ptr;
	}

};


// Class FortniteUI.FortPlayerProfileBannerEditor
// 0x0040 (0x0278 - 0x0238)
class UFortPlayerProfileBannerEditor : public UCommonUserWidget
{
public:
	TArray<struct FName>                               IconCategories;                                           // 0x0238(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FName>                               ColorCategories;                                          // 0x0248(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient)
	struct FName                                       ChosenIcon;                                               // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FName                                       ChosenIconCategory;                                       // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FName                                       ChosenColor;                                              // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FName                                       ChosenColorCategory;                                      // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPlayerProfileBannerEditor");
		return ptr;
	}


	void SetBannerIcon(const struct FName& Icon);
	void SetBannerColor(const struct FName& Color);
	void RefreshBannerEditor();
	void HandleEditorDeactivated();
	void HandleEditorActivated();
	void CommitChosenIconAndColor();
};


// Class FortniteUI.FortPlayerProfileBannerEditorTile
// 0x0010 (0x08B0 - 0x08A0)
class UFortPlayerProfileBannerEditorTile : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08A0(0x0008) MISSED OFFSET
	TWeakObjectPtr<class UFortItem>                    Item;                                                     // 0x08A8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPlayerProfileBannerEditorTile");
		return ptr;
	}

};


// Class FortniteUI.FortPlayerTrackerBase
// 0x0028 (0x0260 - 0x0238)
class UFortPlayerTrackerBase : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x0240(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                PartyIndex;                                               // 0x0258(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsLocalPlayer : 1;                                        // 0x025C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPlayerTrackerBase");
		return ptr;
	}


	void UpdateBasedOnId();
	void SetUniqueIdInternal(const struct FUniqueNetIdRepl& InUniqueId);
	void SetUniqueId(const struct FUniqueNetIdRepl& InUniqueId);
	void SetTeamMember(int InPlayerIndex);
	void ResetPartyEvents();
	void OnPlayerInfoChanged(const struct FFortTeamMemberInfo& NewInfo);
	bool HasModifiedStats();
	void HandleTeamMemberStateChangedId(const struct FFortTeamMemberInfo& NewInfo);
	void HandleTeamMemberStateChanged(const struct FFortTeamMemberInfo& NewInfo);
	void HandleTeamMemberRemoved(int RemovedIndex);
	void HandleTeamMemberAdded(const struct FFortTeamMemberInfo& NewInfo);
	void HandlePartyLeft();
	void HandleOnPlayerIdUpdated(const struct FUniqueNetIdRepl& NewInfo);
	void HandleOnLocalPlayerInfoUpdated(const struct FFortTeamMemberInfo& NewInfo);
	int GetTech();
	int GetTeamTech();
	int GetTeamResistance();
	int GetTeamOffense();
	int GetTeamFortitude();
	int GetResistance();
	int GetOffense();
	int GetModifiedTech();
	int GetModifiedResistance();
	int GetModifiedOffense();
	bool GetModifiedHomebaseRating(int* Rating, float* ProgressFraction);
	int GetModifiedFortitude();
	bool GetHomebaseRating(int* Rating, float* ProgressFraction);
	int GetFortitude();
};


// Class FortniteUI.FortPrivacyBase
// 0x0080 (0x0460 - 0x03E0)
class UFortPrivacyBase : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET
	class UCommonButton*                               AllowFriendsOfFriendsButton;                              // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPanelWidget*                                AllowFriendsOfFriendsContainer;                           // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonButtonGroup*                          ButtonGroup;                                              // 0x03F8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0400(0x0050) UNKNOWN PROPERTY: MapProperty FortniteUI.FortPrivacyBase.PrivacyButtonMap
	unsigned char                                      UnknownData02[0x10];                                      // 0x0450(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPrivacyBase");
		return ptr;
	}


	void HandlePrivacyButtonSelected(class UCommonButton* SelectedPrivacyButton, int ButtonIndex);
	void HandleAllowFriendsButtonClicked(class UCommonButton* SelectedPrivacyButton);
	void ApplyPrivacySetting();
	void AddPrivacyButton(class UCommonButton* PrivacyButton);
};


// Class FortniteUI.FortQuestExpiresWidget
// 0x0010 (0x0248 - 0x0238)
class UFortQuestExpiresWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortQuestItem>               Item;                                                     // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0240(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortQuestExpiresWidget");
		return ptr;
	}


	void SetData(class UFortQuestItem* InItem);
	void OnQuestExpirationUpdated();
};


// Class FortniteUI.FortQuestNotificationHandler
// 0x0010 (0x01F0 - 0x01E0)
class UFortQuestNotificationHandler : public UFortDialogNotificationHandler
{
public:
	class UFortQuestItem*                              Quest;                                                    // 0x01E0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortQuestNotificationHandler");
		return ptr;
	}

};


// Class FortniteUI.FortQuestScreen
// 0x0000 (0x03E0 - 0x03E0)
class UFortQuestScreen : public UCommonActivatablePanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortQuestScreen");
		return ptr;
	}


	void ProcessPendingSeenQuestItems();
};


// Class FortniteUI.FortQuestTrackerEntry
// 0x0060 (0x0298 - 0x0238)
class UFortQuestTrackerEntry : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0238(0x0010) MISSED OFFSET
	class UCommonTextBlock*                            QuestNameText;                                            // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonListView*                             ObjectivesList;                                           // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortQuestItem*                              TrackedQuest;                                             // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    OnHUDQuestFinalObjectiveHiddenDelegate;                   // 0x0260(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
	TArray<class UFortQuestObjectiveInfo*>             HUDCachedObjectiveInfos;                                  // 0x0270(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bConfigureAsHUD : 1;                                      // 0x0280(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0281(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSizeEstimateChangedDelegate;                            // 0x0288(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortQuestTrackerEntry");
		return ptr;
	}


	void OnSetup();
	void HandleObjectiveEntryCreated(class UUserWidget* Widget);
	void HandleHUDObjectiveCompletion(class UFortQuestObjectiveInfo* QuestObjective);
};


// Class FortniteUI.FortQuestTrackerSubEntry
// 0x0040 (0x0278 - 0x0238)
class UFortQuestTrackerSubEntry : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0238(0x0010) MISSED OFFSET
	class UFortQuestObjectiveInfo*                     TrackedObjective;                                         // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSizeEstimateChangedDelegate;                            // 0x0250(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
	struct FScriptMulticastDelegate                    OnHUDQuestObjectiveCompletedDelegate;                     // 0x0260(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      bConfigureAsHUD : 1;                                      // 0x0270(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortQuestTrackerSubEntry");
		return ptr;
	}


	void OnSetup();
	void OnQuestsUpdated();
	void OnPlayObjectiveCompletedAnimation();
	void NotifyCompletionAnimationFinished();
	void HandleQuestsUpdated();
};


// Class FortniteUI.FortQuestTreeItemWidget
// 0x0010 (0x08B0 - 0x08A0)
class UFortQuestTreeItemWidget : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08A0(0x0008) MISSED OFFSET
	TWeakObjectPtr<class UObject>                      QuestOrCategory;                                          // 0x08A8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortQuestTreeItemWidget");
		return ptr;
	}


	void SetupAsQuest(class UFortQuestItem* Category);
	void SetupAsCategory(class UFortQuestCategory* Category);
	void OnQuestsUpdated();
	void HandleQuestsUpdated();
	void ExpansionChanged(bool bExpanded);
};


// Class FortniteUI.FortRejoinWindowBase
// 0x0010 (0x03F0 - 0x03E0)
class UFortRejoinWindowBase : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRejoinWindowBase");
		return ptr;
	}


	void StopTimeout();
	void StartTimeout(float TimeoutTime);
	void OnTimeoutTimeReached();
};


// Class FortniteUI.FortResultsSummaryScreenWidget
// 0x0000 (0x0238 - 0x0238)
class UFortResultsSummaryScreenWidget : public UCommonUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortResultsSummaryScreenWidget");
		return ptr;
	}


	void GetTotalScoreSortedScoreIndices(class UFortUIScoreReport* ScoreReport, TArray<int>* OutSortedScoreIndices);
};


// Class FortniteUI.FortResultsTeleportScreenWidget
// 0x0068 (0x02A0 - 0x0238)
class UFortResultsTeleportScreenWidget : public UCommonUserWidget
{
public:
	float                                              ExitTime;                                                 // 0x0238(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x64];                                      // 0x023C(0x0064) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortResultsTeleportScreenWidget");
		return ptr;
	}


	void StartExitTimer();
	void OnExitTimerFinished();
	void OnExitTimeRemainingUpdated(int TimeRemainingSeconds);
	void OnExitTimePercentagePassedUpdated(float Percent);
};


// Class FortniteUI.FortResultsWidget
// 0x00B0 (0x0490 - 0x03E0)
class UFortResultsWidget : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x03E0(0x0068) MISSED OFFSET
	int                                                AdditionalGrantedMissionPoints;                           // 0x0448(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x044C(0x0004) MISSED OFFSET
	TArray<class UFortItem*>                           RewardedBadges;                                           // 0x0450(0x0010) (CPF_ZeroConstructor)
	TArray<class UFortItem*>                           MissedBadges;                                             // 0x0460(0x0010) (CPF_ZeroConstructor)
	TArray<class UFortItem*>                           RewardedItems;                                            // 0x0470(0x0010) (CPF_ZeroConstructor)
	TArray<class UFortItem*>                           RewardedAccountItems;                                     // 0x0480(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortResultsWidget");
		return ptr;
	}


	void TriggerSetupTeleportCameraEvent();
	void SendEndOfRoundUpVoteAnalytic(const struct FUniqueNetIdRepl& TargetId, const struct FString& TargetPlayerName);
	void SendEndOfRoundScreenAnalytic(const struct FString& ScreenName, bool Skipped, float TimeSpent);
	void SendEndOfRoundFriendInviteAnalytic(const struct FUniqueNetIdRepl& TargetId, const struct FString& TargetPlayerName);
	void RequestExitZone();
	void LogXPData();
	bool IsDataFinalized();
	void GetZoneCompletionResult();
	int GetTotalMissionPointsEarned();
	void GetRewardsByType(TArray<class UFortItem*>* OutRewards);
};


// Class FortniteUI.FortRewardNotificationData
// 0x0008 (0x0030 - 0x0028)
class UFortRewardNotificationData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0028(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortRewardNotificationData.RewardType

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRewardNotificationData");
		return ptr;
	}


	bool GetIconBrush(TEnumAsByte<EFortBrushSize> BrushSize, struct FSlateBrush* IconBrush);
};


// Class FortniteUI.FortRewardCollectionBookData
// 0x0070 (0x00A0 - 0x0030)
class UFortRewardCollectionBookData : public UFortRewardNotificationData
{
public:
	struct FFortCollectionBookRewards                  CollectionBookRewards;                                    // 0x0030(0x0070) (CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRewardCollectionBookData");
		return ptr;
	}


	bool GetIconBrush(TEnumAsByte<EFortBrushSize> BrushSize, struct FSlateBrush* IconBrush);
};


// Class FortniteUI.FortRewardEpicQuestData
// 0x0008 (0x0038 - 0x0030)
class UFortRewardEpicQuestData : public UFortRewardNotificationData
{
public:
	class UFortQuestItem*                              Quest;                                                    // 0x0030(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRewardEpicQuestData");
		return ptr;
	}


	bool GetIconBrush(TEnumAsByte<EFortBrushSize> BrushSize, struct FSlateBrush* IconBrush);
};


// Class FortniteUI.FortRewardExpeditionData
// 0x0008 (0x0038 - 0x0030)
class UFortRewardExpeditionData : public UFortRewardNotificationData
{
public:
	class UFortExpeditionItem*                         Expedition;                                               // 0x0030(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRewardExpeditionData");
		return ptr;
	}


	bool GetIconBrush(TEnumAsByte<EFortBrushSize> BrushSize, struct FSlateBrush* IconBrush);
};


// Class FortniteUI.FortRewardMissionAlertData
// 0x0000 (0x0030 - 0x0030)
class UFortRewardMissionAlertData : public UFortRewardNotificationData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRewardMissionAlertData");
		return ptr;
	}

};


// Class FortniteUI.FortRewardMissionData
// 0x0000 (0x0030 - 0x0030)
class UFortRewardMissionData : public UFortRewardNotificationData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRewardMissionData");
		return ptr;
	}

};


// Class FortniteUI.FortRewardQuestData
// 0x0008 (0x0038 - 0x0030)
class UFortRewardQuestData : public UFortRewardNotificationData
{
public:
	class UFortQuestItem*                              Quest;                                                    // 0x0030(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRewardQuestData");
		return ptr;
	}


	bool GetIconBrush(TEnumAsByte<EFortBrushSize> BrushSize, struct FSlateBrush* IconBrush);
};


// Class FortniteUI.FortRewardNotificationWidget
// 0x01B0 (0x0590 - 0x03E0)
class UFortRewardNotificationWidget : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x03E0(0x0050) MISSED OFFSET
	class UOverlay*                                    OverlayMain;                                              // 0x0430(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0438(0x0008) MISSED OFFSET
	struct FFortSwipeDetector                          SwipeDetector;                                            // 0x0440(0x0130) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0570(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRewardNotificationWidget");
		return ptr;
	}


	void SetPrimaryActionText(const struct FText& Text);
	void SetPrimaryActionHidden();
	void SetPrimaryActionEnabled(bool bEnabled);
	void OnPrimaryActionTextChanged(const struct FText& Text);
	void OnPrimaryActionHidden();
	void OnPrimaryActionEnabled();
	void OnPrimaryActionDisabled();
	void OnNavigationUp();
	void OnNavigationRight();
	void OnNavigationLeft();
	void OnNavigationDown();
	void IsPrimaryActionHidden(bool* bHidden);
	void IsPrimaryActionEnabled(bool* bEnabled);
	void InspectItem(class UFortItem* ItemToInspect);
	void AddQuestData(class UFortQuestItem* Quest);
	void AddMissionData();
	void AddMissionAlertData();
	void AddExpeditionData(class UFortExpeditionItem* ExpeditionItem);
	void AddEpicQuestData(class UFortQuestItem* Quest);
	void AddCollectionBookData(const struct FFortCollectionBookRewards& CollectionBookRewards);
};


// Class FortniteUI.FortRewardNotificationSubWidget
// 0x0028 (0x0260 - 0x0238)
class UFortRewardNotificationSubWidget : public UCommonUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnTransitionInComplete;                                   // 0x0238(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTransitionOutComplete;                                  // 0x0248(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0258(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRewardNotificationSubWidget");
		return ptr;
	}


	void TransitionOutBegin();
	void TransitionOut();
	void TransitionInBegin();
	void TransitionIn();
	void SetPrimaryActionText(const struct FText& Text);
	void SetPrimaryActionHidden();
	void SetPrimaryActionEnabled(bool bEnabled);
	void SetInputActionHandlerState(class UDataTable* DataTable, const struct FName& RowName);
	void RemoveInputActionHandler(const struct FDataTableRowHandle& InputActionRow);
	void RemoveAllInputActionHandlers();
	void OnPrimaryAction();
	void OnNavigationUp();
	void OnNavigationRight();
	void OnNavigationLeft();
	void OnNavigationDown();
	void OnDeactivated();
	void OnActivated();
	void IsPrimaryActionHidden(bool* bHidden);
	void IsPrimaryActionEnabled(bool* bEnabled);
	void InspectItem(class UFortItem* ItemToInspect);
	void Init(class UFortRewardNotificationWidget* MainWidget);
	void AddInputActionHandler(class UDataTable* DataTable, const struct FName& RowName, const struct FScriptDelegate& CommittedEvent);
};


// Class FortniteUI.FortRewardConversationWidget
// 0x0000 (0x0260 - 0x0260)
class UFortRewardConversationWidget : public UFortRewardNotificationSubWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRewardConversationWidget");
		return ptr;
	}


	bool IsValidConversation(class UFortConversation* Conversation);
	void GetDataFromSentence(const struct FFortConversationSentence& Sentence, struct FText* Text, class UTexture2D** TalkingHeadTexture);
};


// Class FortniteUI.FortRewardExpeditionWidget
// 0x0068 (0x02C8 - 0x0260)
class UFortRewardExpeditionWidget : public UFortRewardNotificationSubWidget
{
public:
	struct FScriptMulticastDelegate                    OnMcpError;                                               // 0x0260(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0270(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRewardExpeditionWidget");
		return ptr;
	}


	void OnCollectExpeditionCompleted(class UFortExpeditionItem* Expedition, bool bSucceeded, TArray<struct FFortItemInstanceQuantityPair> Rewards);
	void CollectExpedition(class UFortExpeditionItem* Expedition);
};


// Class FortniteUI.FortRewardNewQuestWidget
// 0x0000 (0x0260 - 0x0260)
class UFortRewardNewQuestWidget : public UFortRewardNotificationSubWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRewardNewQuestWidget");
		return ptr;
	}


	bool IsValidConversation(class UFortConversation* Conversation);
	void GetDataFromSentence(const struct FFortConversationSentence& Sentence, struct FText* Text, class UTexture2D** TalkingHeadTexture);
};


// Class FortniteUI.FortRichTextBlock
// 0x0A28 (0x0B40 - 0x0118)
class UFortRichTextBlock : public UWidget
{
public:
	struct FText                                       Text;                                                     // 0x0118(0x0018) (CPF_Edit)
	class UDataTable*                                  StyleSet;                                                 // 0x0130(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMargin                                     TextMargin;                                               // 0x0138(0x0010) (CPF_Edit)
	float                                              WrapTextAt;                                               // 0x0148(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AutoWrapText : 1;                                         // 0x014C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x014D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x014E(0x0002) MISSED OFFSET
	struct FButtonStyle                                HyperlinkButtonStyle;                                     // 0x0150(0x02A8) (CPF_Edit)
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x03F8(0x0518) (CPF_Edit)
	class UClass*                                      KeybindWidgetClass;                                       // 0x0910(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x228];                                     // 0x0918(0x0228) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRichTextBlock");
		return ptr;
	}


	void SetText(const struct FText& InText);
};


// Class FortniteUI.FortSignInWidget
// 0x0030 (0x0410 - 0x03E0)
class UFortSignInWidget : public UCommonActivatablePanel
{
public:
	class UEditableText*                               Password;                                                 // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonButton*                               SignInButton;                                             // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    OnStartSignIn;                                            // 0x03F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      bStartedSignIn : 1;                                       // 0x0400(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0401(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSignInWidget");
		return ptr;
	}


	void UpdateSignInButton();
	void StartSignIn();
};


// Class FortniteUI.FortSkillTreeCanvasEditorInterface
// 0x0000 (0x0028 - 0x0028)
class UFortSkillTreeCanvasEditorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSkillTreeCanvasEditorInterface");
		return ptr;
	}

};


// Class FortniteUI.FortSkillTreeCanvas
// 0x01A0 (0x02D0 - 0x0130)
class UFortSkillTreeCanvas : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0130(0x0008) MISSED OFFSET
	struct FVector2D                                   OriginForParallaxEffect;                                  // 0x0138(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xE8];                                      // 0x0140(0x00E8) MISSED OFFSET
	class UCommonButtonGroup*                          NodeButtonGroup;                                          // 0x0228(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xA0];                                      // 0x0230(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSkillTreeCanvas");
		return ptr;
	}


	void HandleNodeButtonClicked(class UCommonButton* Button);
	void HandleButtonGroupSelectionCleared();
	void HandleButtonGroupSelectionChanged(class UCommonButton* SelectedButton, int ButtonIndex);
};


// Class FortniteUI.FortSkillTreeCanvasSlot
// 0x0018 (0x0050 - 0x0038)
class UFortSkillTreeCanvasSlot : public UPanelSlot
{
public:
	struct FVector2D                                   BasePosition;                                             // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              ParallaxPanningFactor;                                    // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ZOrder;                                                   // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSkillTreeCanvasSlot");
		return ptr;
	}


	void SetZOrder(int InZOrder);
	void SetPosition(const struct FVector2D& InPosition);
	int GetZOrder();
	struct FVector2D GetPosition();
	struct FVector2D GetBasePosition();
};


// Class FortniteUI.FortSkillTreePageSelectorButton
// 0x0018 (0x08B8 - 0x08A0)
class UFortSkillTreePageSelectorButton : public UCommonButton
{
public:
	struct FName                                       SkillTreePageId;                                          // 0x08A0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      SkillTreeViewerType;                                      // 0x08A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x08B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSkillTreePageSelectorButton");
		return ptr;
	}


	bool TryGetStaticSkillTreePageData(struct FHomebaseNodePage* OutStaticData);
	bool TryGetSkillTreeNodeState(const struct FName& NodeID, struct FHomebaseNodeState* OutNodeState);
	bool IsSkillTreePageLocked();
	void HandleRefreshSkillTreeNodePage();
	void HandleDifferentSkillTreePageSet();
	struct FText GetButtonNodeCompletionText();
};


// Class FortniteUI.FortSkillTreeLandingPage
// 0x0020 (0x0400 - 0x03E0)
class UFortSkillTreeLandingPage : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET
	TArray<struct FDataTableRowHandle>                 ResearchToLinkTo;                                         // 0x03E8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSkillTreeLandingPage");
		return ptr;
	}


	class UFortSkillTreePageSelectorButton* CreateAndAddPageButton(const struct FName& SkillTreePageId, bool IsResearchTree);
};


// Class FortniteUI.FortSkillTreeNodeDetailsPanel
// 0x0010 (0x0248 - 0x0238)
class UFortSkillTreeNodeDetailsPanel : public UCommonUserWidget
{
public:
	struct FName                                       IdOfSkillTreeNodeToRepresent;                             // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0240(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSkillTreeNodeDetailsPanel");
		return ptr;
	}


	bool TryGetSkillTreeNodeState(struct FHomebaseNodeState* OutNodeState);
	bool TryGetNodeSquadAttributeData(const struct FHomebaseNode& HomebaseNode, struct FText* Name, struct FText* Description, struct FFortMultiSizeBrush* Brush);
	bool TryGetNodeDisplayDataFromID(const struct FName& HomeBaseNodeID, struct FFortSkillTreeNodeDisplayData* OutDisplayData);
	bool TryGetNodeDisplayData(const struct FHomebaseNode& HomebaseNode, struct FFortSkillTreeNodeDisplayData* OutDisplayData);
	void SetSkillTreeNodeToRepresent(const struct FName& SkillTreeNodeId);
	bool HasSkillTreeNodeToRepresent();
	void HandleSkillTreeNodeStateChanged();
	void HandleDifferentSkillTreeNodeToRepresentSetBP();
};


// Class FortniteUI.FortSkillTreePageWidget
// 0x00F8 (0x0330 - 0x0238)
class UFortSkillTreePageWidget : public UCommonUserWidget
{
public:
	struct FName                                       SkillTreePageId;                                          // 0x0238(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0240(0x00E8) MISSED OFFSET
	class UFortSkillTreeCanvas*                        SkillTreeCanvas;                                          // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSkillTreePageWidget");
		return ptr;
	}


	bool TryGetStaticSkillTreePageData(struct FHomebaseNodePage* OutStaticData);
	void PlayOutroTransitionBP();
	void PlayIntroTransitionBP();
};


// Class FortniteUI.FortSkillTreePageWidgetRegistry
// 0x0070 (0x0098 - 0x0028)
class UFortSkillTreePageWidgetRegistry : public UDataAsset
{
public:
	TMap<struct FName, class UClass*>                  SkillTreePageIdToWidgetTypeMap;                           // 0x0028(0x0050) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSkillTreePageWidgetRegistry");
		return ptr;
	}

};


// Class FortniteUI.FortSocialListView
// 0x07C8 (0x08E0 - 0x0118)
class UFortSocialListView : public UWidget
{
public:
	struct FScriptDelegate                             GenerateItemEvent;                                        // 0x0118(0x000A) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0118(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UClass*                                      SocialItemWidgetType;                                     // 0x0128(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTableRowStyle                              ListRowStyle;                                             // 0x0130(0x0718) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TArray<class UFortSocialItem*>                     SocialList;                                               // 0x0848(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData01[0x88];                                      // 0x0858(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSocialListView");
		return ptr;
	}


	void SetList(TArray<class UFortSocialItem*> InList);
};


// Class FortniteUI.FortSocialStyle
// 0x6DE8 (0x6E10 - 0x0028)
class UFortSocialStyle : public UDataAsset
{
public:
	struct FSocialStyle                                Style;                                                    // 0x0028(0x6DE0) (CPF_Edit)
	class USocialStyleDataAsset*                       OverrideStyle;                                            // 0x6E08(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSocialStyle");
		return ptr;
	}

};


// Class FortniteUI.FortSplashScreenWidget
// 0x0010 (0x03F0 - 0x03E0)
class UFortSplashScreenWidget : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSplashScreenWidget");
		return ptr;
	}


	bool ShouldBypassSplashScreen();
	void ResetFromAccountLinkingFlow();
	void OnGameBootableInviteReceived(int UserIndex);
	void CloseSplashScreen(int UserIndex);
};


// Class FortniteUI.FortSquadIcon
// 0x0018 (0x0250 - 0x0238)
class UFortSquadIcon : public UCommonUserWidget
{
public:
	struct FName                                       Name;                                                     // 0x0238(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortBrushSize>                        ImageSize;                                                // 0x0240(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	class UImage*                                      Icon;                                                     // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadIcon");
		return ptr;
	}


	void SetSquad(const struct FName& InName);
	void HandleDifferentSquadSetBP();
};


// Class FortniteUI.FortSquadLandingPageDefenderSummary
// 0x0008 (0x0240 - 0x0238)
class UFortSquadLandingPageDefenderSummary : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadLandingPageDefenderSummary");
		return ptr;
	}


	void HandleClearDefenderSquadDetailsBP();
	void HandleAddLockedDefenderSquadDetailsBP(const struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
	void HandleAddDefenderSquadDetailsBP(const struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
};


// Class FortniteUI.FortSquadLandingPageDefenderSquadDetails
// 0x0010 (0x0248 - 0x0238)
class UFortSquadLandingPageDefenderSquadDetails : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                            OutpostName;                                              // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonNumericTextBlock*                     PowerRating;                                              // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadLandingPageDefenderSquadDetails");
		return ptr;
	}


	void SetDefenderSquadInfo(const struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
	void HandleDefenderSquadInfoSetBP(const struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
	void HandleAddDefenderSquadMemberBP(const struct FName& SquadId, int Index);
};


// Class FortniteUI.FortSquadLandingPageDefenderSquadDetailsLocked
// 0x0008 (0x0240 - 0x0238)
class UFortSquadLandingPageDefenderSquadDetailsLocked : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                            OutpostName;                                              // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadLandingPageDefenderSquadDetailsLocked");
		return ptr;
	}


	void SetDefenderSquadInfo(const struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
};


// Class FortniteUI.FortSquadLandingPageSurvivorSummary
// 0x0088 (0x02C0 - 0x0238)
class UFortSquadLandingPageSurvivorSummary : public UCommonUserWidget
{
public:
	class UFortSquadStatValueWithIcon*                 FortitudeStatValue;                                       // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortSquadStatValueWithIcon*                 OffenseStatValue;                                         // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortSquadStatValueWithIcon*                 ResistanceStatValue;                                      // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortSquadStatValueWithIcon*                 TechStatValue;                                            // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0258(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadLandingPageSurvivorSummary");
		return ptr;
	}


	void HandleClearSetBonusSummaryLineItemsBP();
	void HandleAddSetBonusSummaryLineItemBP(const struct FFortAttributeModifierAccumulation& AttributeModifierAccumulation);
};


// Class FortniteUI.FortDefenderSquadSelectorButton
// 0x0000 (0x08C0 - 0x08C0)
class UFortDefenderSquadSelectorButton : public UFortSquadSelectorButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortDefenderSquadSelectorButton");
		return ptr;
	}


	bool TryGetTheaterUniqueId(struct FString* OutTheaterUniqueId, bool* OutIsUnlocked);
	bool TryGetPowerLevel(int* OutPowerLevel);
};


// Class FortniteUI.FortSurvivorSquadSelectorButton
// 0x0020 (0x08E0 - 0x08C0)
class UFortSurvivorSquadSelectorButton : public UFortSquadSelectorButton
{
public:
	TArray<struct FGameplayAttribute>                  FortStatAttributes;                                       // 0x08C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FGameplayAttribute>                  FortTeamStatAttributes;                                   // 0x08D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSurvivorSquadSelectorButton");
		return ptr;
	}


	bool TryGetSummaryStats(struct FFortSurvivorSquadSelectorButtonSummaryStats* OutSummaryStats);
	bool TryGetSquadMembers(TArray<class UFortWorker*>* OutSquadMembers);
	bool TryGetPersonalityMatches(struct FFortSurvivorSquadSelectorButtonPersonalityMatches* OutPersonalityMatches);
};


// Class FortniteUI.FortSquadSlotDetailsPanel
// 0x0060 (0x0298 - 0x0238)
class UFortSquadSlotDetailsPanel : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0238(0x0028) MISSED OFFSET
	class UFortSquadSlotItemDetailsHostPanel*          ItemDetailsPanel;                                         // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TScriptInterface<class UFortItemViewContextInterface> ItemViewContext;                                          // 0x0268(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0278(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadSlotDetailsPanel");
		return ptr;
	}


	bool TryGetItemToPreviewInSlot(class UFortItem** OutItemToPreviewInSlot);
	void SetScrollWidget();
	void SetIdOfSquadSlotToManageBP(const struct FName& SquadId, int SquadSlotIndex);
	bool IsSquadSlotLockedBP();
	void HandleSquadSlotStateChangedBP();
	void HandleSquadSlotRestrictionFactorsChangedBP();
	void HandleDifferentSquadSlotSetBP();
	void GetSlottingRestrictionReasons();
	class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);
	void GetIdOfSquadSlotToManageBP(struct FName* OutSquadId, int* OutSquadSlotIndex);
};


// Class FortniteUI.FortSquadSlotSelectorButton
// 0x0058 (0x08F8 - 0x08A0)
class UFortSquadSlotSelectorButton : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x08A0(0x0028) MISSED OFFSET
	class UFortSquadSlotWidget*                        SquadSlotWidget;                                          // 0x08C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TScriptInterface<class UFortItemViewContextInterface> ItemViewContext;                                          // 0x08D0(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x08E0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadSlotSelectorButton");
		return ptr;
	}


	void SquadSlotWidgetUpdated();
	void SetIdOfSquadSlotToManageBP(const struct FName& SquadId, int SquadSlotIndex);
	bool IsSquadSlotLockedBP();
	void HandlePreDifferentSquadSlotSetBP();
	void HandlePostDifferentSquadSlotSetBP();
	bool GetInPreviewMode();
	void GetIdOfSquadSlotToManageBP(struct FName* OutSquadId, int* OutSquadSlotIndex);
};


// Class FortniteUI.FortSquadSlotsView
// 0x0088 (0x02C0 - 0x0238)
class UFortSquadSlotsView : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0238(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDifferentSquadSlotSelectedEvent;                        // 0x0248(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRequestOpenSquadSlotEvent;                              // 0x0258(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	int                                                IndexOfSelectedSquadSlot;                                 // 0x0268(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSlotButtonsRequireSelection : 1;                         // 0x026C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bInPreviewMode : 1;                                       // 0x026D(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x026E(0x0002) MISSED OFFSET
	class UFortCommittableButtonGroup*                 SquadSlotButtonGroup;                                     // 0x0270(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0278(0x0030) MISSED OFFSET
	TScriptInterface<class UFortItemViewContextInterface> ItemViewContext;                                          // 0x02A8(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x02B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadSlotsView");
		return ptr;
	}


	bool TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData);
	void SetIsSelectionLocked(bool ShouldSelectionBeLocked);
	void SetInPreviewMode(bool bPreview);
	void SetIdOfSquadToManageBP(const struct FName& SquadId);
	void SelectSlot(int SquadSlotIndex);
	void OnRequestOpenSquadSlot__DelegateSignature(int SquadSlotIndex);
	void OnDifferentSquadSlotSelected__DelegateSignature(int SquadSlotIndex);
	void HandleSelectedButtonChanged(class UCommonButton* SelectedButton, int ButtonIndex);
	void HandleHoveredButtonChanged(class UCommonButton* HoveredButton, int ButtonIndex);
	void HandleButtonClicked(class UCommonButton* CommittedButton, int ButtonIndex);
	int GetIndexOfSelectedSquadSlot();
	struct FName GetIdOfSquadToManageBP();
	class UFortSquadSlotSelectorButton* CreateAndAddSquadSlotButton(int SquadSlotIndex, const struct FHomebaseSquadSlot& SquadSlotDefinition, class UWidget** OutSquadSlotButtonHost);
};


// Class FortniteUI.FortSquadSlotWidget
// 0x00F8 (0x0210 - 0x0118)
class UFortSquadSlotWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0118(0x0028) MISSED OFFSET
	TEnumAsByte<EFortBrushSize>                        CardSize;                                                 // 0x0140(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x9F];                                      // 0x0141(0x009F) MISSED OFFSET
	class UFortMultiSizeItemCard*                      SlottedItemCard;                                          // 0x01E0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x01E8(0x0008) MISSED OFFSET
	TScriptInterface<class UFortItemViewContextInterface> ItemViewContext;                                          // 0x01F0(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0200(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadSlotWidget");
		return ptr;
	}


	void SetIdOfSquadSlotToManageBP(const struct FName& SquadId, int SquadSlotIndex);
	void SetCardSize(TEnumAsByte<EFortBrushSize> CardSize);
	bool IsSquadSlotLockedBP();
	class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);
	void GetIdOfSquadSlotToManageBP(struct FName* OutSquadId, int* OutSquadSlotIndex);
};


// Class FortniteUI.FortSquadStatDetailsWidget
// 0x0030 (0x0268 - 0x0238)
class UFortSquadStatDetailsWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0238(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadStatDetailsWidget");
		return ptr;
	}

};


// Class FortniteUI.FortPerkWidget
// 0x0088 (0x02C8 - 0x0240)
class UFortPerkWidget : public UFortUserWidget
{
public:
	struct FFortUIPerk                                 Perk;                                                     // 0x0240(0x0088) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPerkWidget");
		return ptr;
	}


	bool IsTierPerk();
	bool IsPerkUnlocked();
	bool IsPerkHighlighted();
	bool HasAbility();
	struct FText GetTooltipTitle();
	TArray<struct FText> GetTooltipDescription();
	void GetSupportBonusType();
	int GetRequiredLevel();
	TEnumAsByte<EFortItemTier> GetPerkTier();
	bool GetIcon(struct FSlateBrush* Brush);
};


// Class FortniteUI.FortHeroSquadBonusPerksWidgetBase
// 0x0010 (0x0278 - 0x0268)
class UFortHeroSquadBonusPerksWidgetBase : public UFortSquadStatDetailsWidget
{
public:
	class UFortPerkWidget_NUI*                         SupportBonusPerkWidget;                                   // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortPerkWidget_NUI*                         TacticalBonusPerkWidget;                                  // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHeroSquadBonusPerksWidgetBase");
		return ptr;
	}

};


// Class FortniteUI.FortSurvivorSquadStatMatchBase
// 0x03A8 (0x05E0 - 0x0238)
class UFortSurvivorSquadStatMatchBase : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET
	struct FFortUISurvivorSquadStatMatch               StatMatch;                                                // 0x0240(0x03A0) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSurvivorSquadStatMatchBase");
		return ptr;
	}


	void OnStatMatchUpdated(const struct FFortUISurvivorSquadStatMatch& UpdatedMatch);
};


// Class FortniteUI.FortSurvivorSquadStatMatchesBase
// 0x0030 (0x0298 - 0x0268)
class UFortSurvivorSquadStatMatchesBase : public UFortSquadStatDetailsWidget
{
public:
	class UClass*                                      StatMatchClass;                                           // 0x0268(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSummaryView : 1;                                         // 0x0270(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0271(0x0007) MISSED OFFSET
	TArray<class UFortSurvivorSquadStatMatchBase*>     StatMatches;                                              // 0x0278(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0288(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSurvivorSquadStatMatchesBase");
		return ptr;
	}


	bool TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData);
	void SetSummaryView(bool bInSummaryView);
	void SetIdOfSquadToManageBP(const struct FName& SquadId);
	void HandleDifferentSquadSetBP();
	struct FName GetIdOfSquadToManageBP();
	void AddStatMatch(class UFortSurvivorSquadStatMatchBase* SetBonus);
};


// Class FortniteUI.FortSquadStatsWidgetBase
// 0x0030 (0x0268 - 0x0238)
class UFortSquadStatsWidgetBase : public UCommonUserWidget
{
public:
	TArray<class UFortAttributeListItem_NUI*>          OverviewStats;                                            // 0x0238(0x0010) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor)
	class UFortAttributeList_NUI*                      DetailedStats;                                            // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0250(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadStatsWidgetBase");
		return ptr;
	}


	void UpdateStats();
	void HandleSquadSlottingPreviewStateChanged();
	struct FUniqueNetIdRepl GetLocalPlayerId();
	void AttemptShowPreviewStats();
};


// Class FortniteUI.FortSquadStatValueWithIcon
// 0x0058 (0x0290 - 0x0238)
class UFortSquadStatValueWithIcon : public UCommonUserWidget
{
public:
	struct FGameplayAttribute                          Attribute;                                                // 0x0238(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayAttribute                          TeamAttribute;                                            // 0x0258(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<EFortBrushSize>                        ImageSize;                                                // 0x0278(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0279(0x0007) MISSED OFFSET
	class UCommonNumericTextBlock*                     Value;                                                    // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UImage*                                      Icon;                                                     // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadStatValueWithIcon");
		return ptr;
	}


	void HandleDifferentAttributeSetBP();
};


// Class FortniteUI.FortStatIcon
// 0x0030 (0x0268 - 0x0238)
class UFortStatIcon : public UCommonUserWidget
{
public:
	struct FGameplayAttribute                          Attribute;                                                // 0x0238(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<EFortBrushSize>                        ImageSize;                                                // 0x0258(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0259(0x0007) MISSED OFFSET
	class UImage*                                      Icon;                                                     // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortStatIcon");
		return ptr;
	}


	void SetAttribute(const struct FGameplayAttribute& InAttribute);
	void HandleDifferentAttributeSetBP();
};


// Class FortniteUI.FortStoreContext
// 0x00A8 (0x00D0 - 0x0028)
class UFortStoreContext : public UBlueprintContextBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCardPackOffersChanged;                                  // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStoreStateChange;                                       // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	TArray<struct FCardPackOffer>                      Offers;                                                   // 0x0050(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FDateTime                                   NextStoreRefresh;                                         // 0x0060(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TArray<struct FCard>                               CardList;                                                 // 0x0068(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	int                                                CardIndex;                                                // 0x0078(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FOpenedCardPack                             OpenedCardPack;                                           // 0x0080(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0090(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortStoreContext.LastCardRarity
	unsigned char                                      UnknownData03[0x2F];                                      // 0x0091(0x002F) MISSED OFFSET
	TArray<struct FStringAssetReference>               MissingAssetsAttemptedAsyncLoad;                          // 0x00C0(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortStoreContext");
		return ptr;
	}


	void RealMoneyPurchaseStart();
	void RealMoneyPurchaseFinished();
	bool OpenWebPayment(const struct FString& AttemptedMTXOfferId);
	void MakePurchase(const struct FCardPackOffer& Offer, int Quantity);
	bool MakeChoice(int ChoiceIdx);
	bool IsWaitingForMcp();
	struct FTimespan GetTimeUntilMarketplaceRefresh();
	struct FTimespan GetTimeUntilDailyLimitReset();
	void GetStoreState();
	struct FLinearColor GetRarityColor();
	void GetPreviousState();
	int GetNumUnopenedCardPacksRemaining(class UFortCardPackItemDefinition* PackType);
	bool GetCard(int CardIdx, struct FCard* ResultOut);
	void GetAccountItems(TArray<class UFortAccountItemDefinition*> AccountItemDefinitions, TArray<class UFortAccountItem*>* AccountItems);
	void FreshenCache();
	void FireInteractionAnalyticsEvent(const struct FString& Interaction, const struct FString& Details);
	bool ExitWebPayment();
	bool ExitSummary();
	void ExitRealMoneyStore();
	bool ExitCurrencyStore();
	bool ExitCardPackStore();
	bool ErrorOccurred(const struct FString& ErrorAnalytics);
	void EnterRealMoneyStore();
	bool EnterCurrencyStore(const struct FString& AttemptedPurchaseCardPackId);
	bool EnterCardPackStore();
	void DismissError();
	bool ChoiceResultComplete();
	bool CardPackOpeningComplete();
	bool CardPackDestroyComplete();
	bool CardFrontRevealComplete();
	bool CardFlipComplete();
	bool CardExitComplete();
	bool CardEntryComplete();
	bool CardBackRevealComplete();
	bool CardAddedToSummaryComplete();
};


// Class FortniteUI.FortStoreRootBase
// 0x0000 (0x03E0 - 0x03E0)
class UFortStoreRootBase : public UCommonActivatablePanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortStoreRootBase");
		return ptr;
	}

};


// Class FortniteUI.StoreCardObject
// 0x0018 (0x0040 - 0x0028)
class UStoreCardObject : public UObject
{
public:
	struct FCard                                       Card;                                                     // 0x0028(0x0018) (CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.StoreCardObject");
		return ptr;
	}

};


// Class FortniteUI.FortStoreSummary
// 0x0010 (0x03F0 - 0x03E0)
class UFortStoreSummary : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET
	class UCommonTileView*                             TileView;                                                 // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortStoreSummary");
		return ptr;
	}


	void SetCards(TArray<struct FCard> Cards);
};


// Class FortniteUI.FortSubGameSelectButtonBase
// 0x0000 (0x0238 - 0x0238)
class UFortSubGameSelectButtonBase : public UCommonUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSubGameSelectButtonBase");
		return ptr;
	}


	void UpdateButtonState(bool bVisible);
};


// Class FortniteUI.FortSurvivorSquadSummaryStatItem
// 0x0020 (0x0258 - 0x0238)
class UFortSurvivorSquadSummaryStatItem : public UCommonUserWidget
{
public:
	TEnumAsByte<EFortBrushSize>                        ImageSize;                                                // 0x0238(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0239(0x0007) MISSED OFFSET
	class UImage*                                      Icon;                                                     // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonTextBlock*                            Value;                                                    // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonTextBlock*                            Name;                                                     // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSurvivorSquadSummaryStatItem");
		return ptr;
	}


	void SetAttributeModifierAccumulation(const struct FFortAttributeModifierAccumulation& Accumulation);
};


// Class FortniteUI.FortSZAwareImage
// 0x0008 (0x0208 - 0x0200)
class UFortSZAwareImage : public UImage
{
public:
	unsigned char                                      AnchorLeft : 1;                                           // 0x0200(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AnchorRight : 1;                                          // 0x0201(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AnchorTop : 1;                                            // 0x0202(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AnchorBottom : 1;                                         // 0x0203(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSZAwareImage");
		return ptr;
	}

};


// Class FortniteUI.FortTextStyleList
// 0x0008 (0x0240 - 0x0238)
class UFortTextStyleList : public UCommonUserWidget
{
public:
	struct FName                                       TextStylesPath;                                           // 0x0238(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTextStyleList");
		return ptr;
	}


	TArray<TAssetPtr<class UClass>> GetTextStyles();
};


// Class FortniteUI.FortTheaterSelect
// 0x0050 (0x0430 - 0x03E0)
class UFortTheaterSelect : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x03E0(0x0040) MISSED OFFSET
	class UOverlay*                                    OverlayMain;                                              // 0x0420(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTheaterSelect");
		return ptr;
	}


	void OnNavigationRight();
	void OnNavigationLeft();
	bool GetTheaterRecommendedRatingRange(const struct FString& UniqueId, int* Minimum, int* Maximum);
	bool GetSurvivalCMSText(struct FText* Title, struct FText* Body);
};


// Class FortniteUI.FortTierIndicator
// 0x0020 (0x0138 - 0x0118)
class UFortTierIndicator : public UWidget
{
public:
	TWeakObjectPtr<class UFortItem>                    ItemToRepresent;                                          // 0x0118(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortBrushSize>                        BrushSize;                                                // 0x0120(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	float                                              InterPipPadding;                                          // 0x0124(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0128(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTierIndicator");
		return ptr;
	}


	void SetPreviewState(int TierIncrease);
	void SetItemToRepresent(class UFortItem* ItemToRepresent);
	void SetInterPipPadding(float InterPipPadding);
	void SetBrushSize(TEnumAsByte<EFortBrushSize> BrushSize);
	void ClearPreviewState();
};


// Class FortniteUI.FortTooltipUIContext
// 0x0000 (0x0028 - 0x0028)
class UFortTooltipUIContext : public UBlueprintContextBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTooltipUIContext");
		return ptr;
	}


	TArray<struct FFortDisplayAttribute> GetUpgradeStats(class UObject* Object, class UFortTooltipContext* TooltipContext);
	bool GetUIDataForTag(const struct FGameplayTag& Tag, struct FFortTagUIData* OutData);
	TArray<struct FFortDisplayAttribute> GetTooltipStats(class UObject* Object, class UFortTooltipContext* TooltipContext);
	bool GetTooltipStat(class UObject* Object, class UFortTooltipContext* TooltipContext, const struct FGameplayTag& Token, struct FFortDisplayAttribute* OutDisplayAttribute);
	bool GetDisplayNameAndMultiBrushForTag(const struct FGameplayTag& Tag, struct FText* OutDisplayName, struct FFortMultiSizeBrush* OutBrush);
	bool GetDescription(class UObject* Object, class UFortTooltipContext* TooltipContext, TArray<struct FText>* OutDescription);
	TArray<struct FFortDisplayAttribute> GetComparisonStats(class UObject* Object, class UObject* ComparisonObject, class UFortTooltipContext* TooltipContext);
	bool GetCombinedDescription(class UObject* Object, class UFortTooltipContext* TooltipContext, struct FText* OutDescription);
};


// Class FortniteUI.FortTutorialContext
// 0x00C0 (0x00E8 - 0x0028)
class UFortTutorialContext : public UBlueprintContextBase
{
public:
	struct FScriptMulticastDelegate                    OnUpdateTutorialAnnouncement;                             // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNewAnnouncementStartedOnClientDelegate;                 // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0048(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTutorialContext");
		return ptr;
	}


	void UpdateTutorialAnnouncement(const struct FFortClientAnnouncementData_Tutorial& AnnouncementData, bool bShow);
	void UnhideTutorialCallout(const struct FName& WidgetName);
	void UnhideAllTutorialCallouts();
	void SkipTutorial();
	bool ShouldPromptToSkipTutorial();
	void OnNewAnnouncementStartedOnClient(class AFortClientAnnouncement* NewAnnouncement);
	void HideTutorialCallout(const struct FName& WidgetName);
	void GetTutorialCallouts(TArray<struct FName>* WidgetNames);
	void GetHiddenTutorialCallouts(TArray<struct FName>* WidgetNames);
	void EnableTutorialCallout(const struct FName& WidgetName);
	void DisableTutorialCallout(const struct FName& WidgetName);
	void ContinueTutorial();
	void ClearTutorialCallouts();
};


// Class FortniteUI.FortTwitchLogin
// 0x0058 (0x0290 - 0x0238)
class UFortTwitchLogin : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0238(0x0030) MISSED OFFSET
	TAssetPtr<class UClass>                            TwitchLoginModalWidgetClass;                              // 0x0268(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	class UFortTwitchLoginModalWidget*                 ActiveLoginModal;                                         // 0x0288(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTwitchLogin");
		return ptr;
	}


	void OnShowLoginError(const struct FText& ErrorTitle, const struct FText& ErrorMessage);
	void OnLoginStatusChanged(bool bLoggedIn, const struct FString& AccountName);
	void OnLoginFlowModalDismissed(class UFortTwitchLoginModalWidget* Modal);
	void OnLoginFlowModalCreated(class UFortTwitchLoginModalWidget* Modal);
	void OnLinkedTwitchAccountChanged(const struct FString& AccountName);
	void Logout();
	void Login();
	bool IsLoggedIn();
	struct FString GetLinkedTwitchAccountName();
	struct FString GetAccountName();
	void CancelLoginFlow();
};


// Class FortniteUI.FortUIBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UFortUIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIBlueprintFunctionLibrary");
		return ptr;
	}


	struct FString STATIC_GetMetaStringOnOffer(const struct FCardPackOffer& Offer, const struct FString& Key);
	int STATIC_GetMetaIntOnOffer(const struct FCardPackOffer& Offer, const struct FString& Key, int DefaultValue);
	bool STATIC_GetMetaBoolOnOffer(const struct FCardPackOffer& Offer, const struct FString& Key, bool bDefaultValue);
	struct FFortMultiSizeBrush STATIC_GetItemSmallPreviewImageMultiSizeBrush(class UFortItem* Item);
	struct FSlateBrush STATIC_GetItemSmallPreviewImageBrush(class UFortItem* Item, TEnumAsByte<EFortBrushSize> BrushSize);
	struct FFortMultiSizeBrush STATIC_GetItemDefinitionSmallPreviewImageMultiSizeBrush(class UFortItemDefinition* ItemDefinition);
	struct FSlateBrush STATIC_GetItemDefinitionSmallPreviewImageBrush(class UFortItemDefinition* ItemDefinition, TEnumAsByte<EFortBrushSize> BrushSize);
};


// Class FortniteUI.FortUIDataConfigurationContext
// 0x0000 (0x0028 - 0x0028)
class UFortUIDataConfigurationContext : public UBlueprintContextBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIDataConfigurationContext");
		return ptr;
	}


	bool IsLimitedToES2Features();
	bool IsChatEnabled();
	struct FPostProcessSettings GetFrontEndFFSettings();
	bool AreSocialFeaturesEnabled();
	bool ArePartyFeaturesEnabled();
};


// Class FortniteUI.FortUIManagerWidget_NUI
// 0x01C8 (0x0400 - 0x0238)
class UFortUIManagerWidget_NUI : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBeginSpokenDialog;                                      // 0x0240(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndSpokenDialog;                                        // 0x0250(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnShouldBlockSubtitlePortraitChanged;                     // 0x0260(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0270(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortUIManagerWidget_NUI.CurrentState
	unsigned char                                      UnknownData02[0x1];                                       // 0x0271(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortUIManagerWidget_NUI.PendingState
	unsigned char                                      UnknownData03[0x6];                                       // 0x0272(0x0006) MISSED OFFSET
	class UFortUIStateWidget_NUI*                      CurrentStateWidget;                                       // 0x0278(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0280(0x0010) MISSED OFFSET
	TArray<class UFortUIStateTrigger*>                 StateTriggers;                                            // 0x0290(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData05[0x8];                                       // 0x02A0(0x0008) MISSED OFFSET
	TArray<class UFortUINotificationQueue*>            UINotificationQueues;                                     // 0x02A8(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      bIsStateContentDisplayed : 1;                             // 0x02B8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x02B9(0x0007) MISSED OFFSET
	class UFortUINavigationManager*                    NavigationManager;                                        // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TMap<class UClass*, class UUserWidget*>            TypedWidgetCache;                                         // 0x02C8(0x0050) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData07[0xC8];                                      // 0x0318(0x00C8) MISSED OFFSET
	unsigned char                                      bSupressErrors : 1;                                       // 0x03E0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x17];                                      // 0x03E1(0x0017) MISSED OFFSET
	int                                                BlockSubtitlePortraitRefcount;                            // 0x03F8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIManagerWidget_NUI");
		return ptr;
	}


	void UpdateStateWidgetContent(class UFortUIStateWidget_NUI* StateWidget);
	void UnregisterStateTrigger(class UFortUIStateTrigger* TriggerToRemove);
	void STATIC_ShowErrorDialog(class UObject* WorldContextObject, const struct FText& OperationDesc, const struct FText& DisplayMessage, const struct FString& ErrorCode);
	bool ShouldBlockSubtitlePortrait();
	void SetStateContentDisplayed(bool bDisplay);
	void ReleaseNotification(class UFortUINotification* Notification);
	void RegisterStateTrigger(class UFortUIStateTrigger* StateTrigger);
	void QueueActivatablePanelIntoModalLayer(class UCommonActivatablePanel* Panel);
	void QueueActionPanelIntoModalLayer(class UFortActionHandlerPanel* Panel, TEnumAsByte<EHorizontalAlignment> HorizontalAlignment, TEnumAsByte<EVerticalAlignment> VerticalAlignment);
	void PushContentWidgetAdvanced(class UWidget* Widget, bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
	void PushContentWidget(class UWidget* Widget);
	void PopContentWidget();
	void PopActivatablePanelInModalLayer(class UCommonActivatablePanel* Panel);
	void OnStateStarted();
	void OnStateEnded();
	void OnShowConfirmation_NUI(const struct FFortDialogDescription_NUI& Description);
	void OnShowConfirmation(const struct FFortDialogDescription& Description);
	void OnShouldBlockSubtitlePortraitChanged__DelegateSignature(bool bShouldBlockSubtitlePortrait);
	void OnEndSpokenDialog__DelegateSignature();
	void OnEndLatentWaitForConfirmationDialog(struct FFortDialogExternalLatentActionHandle* WaitingDialogHandle);
	void OnBeginSpokenDialog__DelegateSignature(class UTexture2D* Image, const struct FText& Title, const struct FText& Subtitle);
	void STATIC_KillConfirmationDialog(class UObject* WorldContextObject);
	bool IsStateContentDisplayed();
	void IncrementShouldBlockSubtitlePortrait();
	class UFortUINotificationQueue* STATIC_GetUINotificationQueue(class UObject* WorldContextObject);
	class UFortUINavigationManager* STATIC_GetUINavigationManager(class UObject* WorldContextObject);
	class UFortUIManagerWidget_NUI* STATIC_GetUIManagerWidget(class UObject* WorldContextObject);
	class UFortUINavigationManager* GetNavigationManager();
	class UFortUIStateWidget_NUI* GetCurrentUIStateWidget();
	class UUserWidget* GetCachedWidget(class UClass* InClass);
	void DisplayStateContent(bool bDisplay);
	void DisplayErrorDialog(const struct FFortErrorInfo& Info);
	void DecrementShouldBlockSubtitlePortrait();
	class UFortUIStateTrigger* STATIC_CreateUIStateTrigger(class UClass* Class, class UObject* WorldContextObject);
	class UFortUINotification* CreateNotification(class UClass* UINotificationClass);
	void CloseErrorWindow();
	void CloseConfirmationWindow();
	void _BPGetCurrentUIState();
};


// Class FortniteUI.FortUIMessageItemWidget
// 0x0048 (0x0280 - 0x0238)
class UFortUIMessageItemWidget : public UCommonUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnMessageDisplayed;                                       // 0x0238(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMessageRemoved;                                         // 0x0248(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FName                                       MessageID;                                                // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                StackSize;                                                // 0x0260(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              DisplayDuration;                                          // 0x0264(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RemoveDuration;                                           // 0x0268(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x026C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIMessageItemWidget");
		return ptr;
	}


	void OnStackSizeChanged(int OldStackSize);
	void OnReturnedToPool();
	void OnBeginRemove();
};


// Class FortniteUI.FortUIMessageManager
// 0x0080 (0x00A8 - 0x0028)
class UFortUIMessageManager : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnMessageAvailable;                                       // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	TArray<class UFortUIMessageItemWidget*>            MessageQueue;                                             // 0x0038(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient)
	TArray<TWeakObjectPtr<class UFortUIMessageItemWidget>> CurrentlyDisplayedMessages;                               // 0x0048(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0058(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIMessageManager");
		return ptr;
	}


	void HandleMessageRemoved(class UFortUIMessageItemWidget* MessageItem);
	void HandleMessageDisplayed(class UFortUIMessageItemWidget* MessageItem);
	int GetNumDisplayedItems();
	class UFortUIMessageItemWidget* GetNextMessageInQueue();
	class UFortUIMessageItemWidget* AddMessageItem(class UClass* MessageItemClass, class APlayerController* OwningPlayer, const struct FName& MessageID, int StackCount);
};


// Class FortniteUI.FortUIMessagesPageBase
// 0x0020 (0x0400 - 0x03E0)
class UFortUIMessagesPageBase : public UCommonActivatablePanel
{
public:
	class UCommonListView*                             MessagesList;                                             // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET
	TArray<class UFortUINotification*>                 MessagesShown;                                            // 0x03F0(0x0010) (CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIMessagesPageBase");
		return ptr;
	}


	void OnNotificationCleared(class UFortUINotification* ClearedMessage);
	void OnMessageAvailable();
	void FillMessagesList();
};


// Class FortniteUI.FortUINotificationQueue
// 0x0028 (0x0050 - 0x0028)
class UFortUINotificationQueue : public UObject
{
public:
	int                                                MaxNotificationsInQueue;                                  // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<class UFortUINotification*>                 NotificationQueue;                                        // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUINotificationQueue");
		return ptr;
	}


	void UnregisterToReceiveNotifications();
	void RemoveNotification(class UFortUINotification* InNotificationDescription);
	void RegisterToReceiveNotifications(const struct FScriptDelegate& NotificationDelegate);
	class UFortUINotification* GetNextNotification();
};


// Class FortniteUI.FortUIRewardReport
// 0x0010 (0x0038 - 0x0028)
class UFortUIRewardReport : public UObject
{
public:
	class UFortLocalPlayer*                            LocalPlayer;                                              // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                TotalMissionPoints;                                       // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIRewardReport");
		return ptr;
	}


	int GetTotalMissionPoints();
};


// Class FortniteUI.FortUIScoreReport
// 0x0008 (0x0030 - 0x0028)
class UFortUIScoreReport : public UObject
{
public:
	class UFortLocalPlayer*                            LocalPlayer;                                              // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIScoreReport");
		return ptr;
	}


	bool IsLocalPlayer(int ScoreReportIndex);
	int GetXpToCompleteLevel(int Level);
	bool GetXpInfo(int ScoreReportIndex, struct FFortUIXpInfo* OutXpInfo);
	int GetTeamScore(TEnumAsByte<EFortUIScoreType> ScoreType);
	void GetScoreReportIndicesByPlayerID(TArray<int>* SortedScoreReportIndices);
	int GetScoreReportIndex(const struct FUniqueNetIdRepl& PlayerID);
	int GetPlayerScore(int ScoreReportIndex, TEnumAsByte<EFortUIScoreType> ScoreType);
	struct FText GetPlayerName(int ScoreReportIndex);
	void GetPlayerIDFromScoreReportIndex(int ScoreReportIndex, struct FUniqueNetIdRepl* OutUniqueNetIdRepl);
	int GetPlayerCount();
	float GetLevelProgress(int Level, int DisplayXp);
	int GetDifficultBonusScore();
	float GetDifficultBonusMultiplier();
	class AFortPlayerPawn* GetCurrentPlayerPawn(int ScoreReportIndex);
	int GetBadgeScore(class UFortItem* BadgeItem);
};


// Class FortniteUI.FortUIStateTrigger
// 0x0008 (0x0030 - 0x0028)
class UFortUIStateTrigger : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0028(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortUIStateTrigger.UIState

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIStateTrigger");
		return ptr;
	}


	bool IsLoggedIn();
	bool EvalBP();
};


// Class FortniteUI.FortUIStateTrigger_Athena
// 0x0000 (0x0030 - 0x0030)
class UFortUIStateTrigger_Athena : public UFortUIStateTrigger
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIStateTrigger_Athena");
		return ptr;
	}

};


// Class FortniteUI.FortUIStateTrigger_InGame
// 0x0000 (0x0030 - 0x0030)
class UFortUIStateTrigger_InGame : public UFortUIStateTrigger
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIStateTrigger_InGame");
		return ptr;
	}

};


// Class FortniteUI.FortUIStateTrigger_Login
// 0x0000 (0x0030 - 0x0030)
class UFortUIStateTrigger_Login : public UFortUIStateTrigger
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIStateTrigger_Login");
		return ptr;
	}

};


// Class FortniteUI.FortUIStateWidget_NUI
// 0x0010 (0x03F0 - 0x03E0)
class UFortUIStateWidget_NUI : public UCommonActivatablePanel
{
public:
	TArray<struct FContentPushState>                   StackStates;                                              // 0x03E0(0x0010) (CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIStateWidget_NUI");
		return ptr;
	}


	void PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State);
	void PushContentWidgetAdvanced(class UWidget* Widget, bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
	void PushContentWidget(class UWidget* Widget);
	class UWidget* PopContentWidgetInternal(const struct FContentPushState& State);
	class UWidget* PopContentWidget();
	void OnExitState();
	void OnEnterState();
};


// Class FortniteUI.AthenaHUDBase
// 0x0000 (0x03F0 - 0x03F0)
class UAthenaHUDBase : public UFortUIStateWidget_NUI
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaHUDBase");
		return ptr;
	}


	void TeamMembersChanged();
};


// Class FortniteUI.FortUIStateWidget_Frontend
// 0x0000 (0x03F0 - 0x03F0)
class UFortUIStateWidget_Frontend : public UFortUIStateWidget_NUI
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIStateWidget_Frontend");
		return ptr;
	}

};


// Class FortniteUI.FortUIStateWidget_Login
// 0x0040 (0x0430 - 0x03F0)
class UFortUIStateWidget_Login : public UFortUIStateWidget_NUI
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x03F0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIStateWidget_Login");
		return ptr;
	}


	void StartUpdateCheck();
	bool StartManualLogin(const struct FString& InEmail, const struct FString& InPassword);
	bool StartAutoLogin();
	void ShowPostLoginLogoutError();
	void SendEulaResponse(bool bAccepted);
	void OnShowLoginMessage(bool bShow, const struct FText& Tile, const struct FText& Body);
	void OnPostLoginLogoutComplete(const struct FText& Reason);
	void OnPatchingComplete(bool bProceed);
	void OnNeedsPurchaseOrAccountLinking(bool bLinkedAccountNeedsPurchase);
	void OnLogoutComplete();
	void OnLoginSuceeded();
	void OnLoginFailed(const struct FText& Reason);
	void OnEulaAvailable(const struct FText& EulaText);
	void OnDisplayErrorComplete();
	bool IsLoggingOut();
	bool IsLoggedIn();
	struct FText GetPlatformDisplayName();
	struct FText GetEULAText();
	void CheckShowLoginMessage();
	bool CheckNetworkError();
};


// Class FortniteUI.FortActionHandlerPanel
// 0x0028 (0x0268 - 0x0240)
class UFortActionHandlerPanel : public UFortUserWidget
{
public:
	unsigned char                                      bAutoActivate : 1;                                        // 0x0240(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0241(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortActionHandlerPanel.PlayerControllerProcessing
	unsigned char                                      bIsActive : 1;                                            // 0x0242(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0243(0x0005) MISSED OFFSET
	struct FScriptDelegate                             OnPanelActivated;                                         // 0x0248(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0243(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             OnPanelDeactivated;                                       // 0x0258(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0258(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortActionHandlerPanel");
		return ptr;
	}


	void SetOnPanelDeactivated(const struct FScriptDelegate& OnDeactivatedHandler);
	void SetOnPanelActivated(const struct FScriptDelegate& OnActivatedHandler);
	void RemoveOnPanelDeactivated(class UObject* BoundObject);
	void OnHandleAction(struct FEventReply* Result, bool* bPassThrough);
	void DeactivateActionHandler();
	void ActivateActionHandler();
};


// Class FortniteUI.FortConfirmationWindow
// 0x0178 (0x03E0 - 0x0268)
class UFortConfirmationWindow : public UFortActionHandlerPanel
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0268(0x0008) MISSED OFFSET
	struct FFortDialogDescription                      CurrentDescription;                                       // 0x0270(0x0170) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortConfirmationWindow");
		return ptr;
	}


	void ShowConfirmation(const struct FFortDialogDescription& Description);
	void ProcessResult();
	void OnShow();
	void OnKill();
	void KillConfirmation();
};


// Class FortniteUI.FortErrorDialog
// 0x0010 (0x0278 - 0x0268)
class UFortErrorDialog : public UFortActionHandlerPanel
{
public:
	TArray<struct FFortErrorInfo>                      ErrorInfo;                                                // 0x0268(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortErrorDialog");
		return ptr;
	}


	void ResetErrorInfo();
	void OnRebuildDialog(int NewIndex);
	void DisplayError(const struct FFortErrorInfo& ErrorInfo);
};


// Class FortniteUI.FortQuestRewardChoiceWidget
// 0x0000 (0x0268 - 0x0268)
class UFortQuestRewardChoiceWidget : public UFortActionHandlerPanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortQuestRewardChoiceWidget");
		return ptr;
	}


	void SetQuest(class UFortQuestItem* Quest);
};


// Class FortniteUI.FortUIStateWidget
// 0x0000 (0x0268 - 0x0268)
class UFortUIStateWidget : public UFortActionHandlerPanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIStateWidget");
		return ptr;
	}


	void OnExitState();
	void OnEnterState();
};


// Class FortniteUI.FortVaultWidget
// 0x00C8 (0x0330 - 0x0268)
class UFortVaultWidget : public UFortActionHandlerPanel
{
public:
	struct FScriptMulticastDelegate                    OnRecycleItemsChanged;                                    // 0x0268(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0278(0x0058) MISSED OFFSET
	TArray<class UFortItem*>                           RecycleItems;                                             // 0x02D0(0x0010) (CPF_ZeroConstructor)
	TMap<class UFortItemDefinition*, struct FFortItemQuantityPair> ResourceItemQuantitiesMap;                                // 0x02E0(0x0050) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortVaultWidget");
		return ptr;
	}


	bool ToggleItemRecycling(class UFortItem* Item);
	void SetCachedSortType();
	void RemoveItemFromRecycling(class UFortItem* Item);
	void RemoveAllItemsFromRecycling();
	void OnRecycleItemsChanged__DelegateSignature(TArray<class UFortItem*> ChangedItems, TArray<struct FFortItemQuantityPair> Resources, TArray<class UFortItem*> RecycleItems);
	void MarkVisibleItemsSeen(TArray<class UFortAccountItem*> InVisibleItems);
	void MarkSeenItemsInVault();
	bool IsSupportedSortType();
	bool IsRecyclingItemWithTier(TEnumAsByte<EFortItemTier> Tier);
	bool IsRecyclingItemWithRarity();
	bool IsRecyclingItemWithLevel(int Level);
	bool IsRecyclingItem(class UFortItem* Item);
	bool IsRecycling();
	int GetTotalRecycleValue();
	void GetItemList(const struct FVaultContentDetails& Details, TArray<class UFortAccountItem*>* OutItemList);
	void GetCachedSortType();
	void CommitRecycle();
	void AddItemToRecycling(class UFortItem* Item);
	void _BPOnContentUpdated();
};


// Class FortniteUI.FortAlterationsWidget
// 0x0018 (0x0258 - 0x0240)
class UFortAlterationsWidget : public UFortUserWidget
{
public:
	TArray<class UFortAlterationItemDefinition*>       AlterationList;                                           // 0x0240(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      bIsUpgrade : 1;                                           // 0x0250(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0251(0x0003) MISSED OFFSET
	int                                                CurrentItemLevel;                                         // 0x0254(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAlterationsWidget");
		return ptr;
	}


	void ProcessAlterations();
	void OnGenerateAlteration(const struct FFortUIAlteration& AlterationInfo);
};


// Class FortniteUI.FortAlterationWidget
// 0x0018 (0x0258 - 0x0240)
class UFortAlterationWidget : public UFortUserWidget
{
public:
	struct FFortUIAlteration                           AlterationInfo;                                           // 0x0240(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAlterationWidget");
		return ptr;
	}


	bool IsAlterationUnlocked();
	bool IsAlterationHighlighted();
	int GetRequiredLevel();
	class UFortAlterationItemDefinition* GetAlterationDefintion();
};


// Class FortniteUI.FortAttributeList
// 0x0018 (0x0258 - 0x0240)
class UFortAttributeList : public UFortUserWidget
{
public:
	class UClass*                                      AttributeItemClass;                                       // 0x0240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHoverEnabledOnElements : 1;                              // 0x0248(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	class UVerticalBox*                                AttributeContainer;                                       // 0x0250(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAttributeList");
		return ptr;
	}


	void SetPreviewData(TArray<struct FFortDisplayAttribute> Data);
	TArray<struct FFortDisplayAttribute> SetData(TArray<struct FFortDisplayAttribute> Data);
	void ClearPreviewData();
	void Clear();
};


// Class FortniteUI.FortItemWidget
// 0x0038 (0x08A0 - 0x0868)
class UFortItemWidget : public UFortBaseButton
{
public:
	struct FScriptDelegate                             OnGetItemToCompareDelegate;                               // 0x0868(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0868(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FName                                       CooldownMaterialParameterName;                            // 0x0878(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    CooldownMaterial;                                         // 0x0880(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LastCooldownTimeInSeconds;                                // 0x0888(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LastCooldownPct;                                          // 0x088C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      LastIsActivatable : 1;                                    // 0x0890(0x0001)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0891(0x000B) MISSED OFFSET
	int                                                QuantityOverride;                                         // 0x089C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemWidget");
		return ptr;
	}


	void SetOnGetItemToCompareDelegate(const struct FScriptDelegate& InDelegate);
	void SetItem(class UFortItem* InItem, int QuantityOverride);
	void SetCooldownMaterial(class UMaterialInstanceDynamic* NewCooldownMaterial);
	void OnGetItemToCompare__DelegateSignature(class UFortItem** ItemToCompare);
	void OnFortItemUpdated(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void OnFortItemDestroyed();
	bool IsSlotted();
	bool IsSchematic();
	bool IsItemValid();
	bool IsInventoryOverflowItem();
	bool IsEquipped();
	bool HasTertiaryCategory();
	bool HasSecondaryCategory();
	bool HasLevel();
	bool HasDurability();
	float GetType();
	int GetStackCount();
	void GetRarity();
	int GetLevel();
	class UFortItem* GetItemToCompare();
	class UFortItem* GetItem();
	class UTexture* GetIconTexture(TEnumAsByte<EFortBrushSize> InBrushSize);
	float GetDurability();
	struct FText GetDisplayName();
	struct FText GetDescription();
	void BPOnItemSet(class UFortItem* NewItem);
	void BPOnItemChanged();
	void BPOnCooldownSecondsChanged(int NewCooldownSeconds);
	void BPOnActivatableChanged(bool bNewActivatable);
};


// Class FortniteUI.FortBluGloCounter
// 0x0008 (0x0248 - 0x0240)
class UFortBluGloCounter : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0240(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortBluGloCounter");
		return ptr;
	}


	void OnBluGloQuantityChanged(int Quantity);
};


// Class FortniteUI.FortCapturePointWidget
// 0x0010 (0x0250 - 0x0240)
class UFortCapturePointWidget : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0240(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCapturePointWidget");
		return ptr;
	}


	void OnCapturePointDataChanged(bool bActivated, bool bLocked, float CapturePercentage, TEnumAsByte<ECaptureState> CaptureState, TEnumAsByte<EFortTeam> ControllingTeam);
};


// Class FortniteUI.FortChatContainer
// 0x0018 (0x0258 - 0x0240)
class UFortChatContainer : public UFortUserWidget
{
public:
	unsigned char                                      MinimizeEnabled : 1;                                      // 0x0240(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AutoReleaseFocus : 1;                                     // 0x0241(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AllowEmotes : 1;                                          // 0x0242(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0243(0x0001) MISSED OFFSET
	float                                              ListFadeTime;                                             // 0x0244(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinimizedChatMessageNum;                                  // 0x0248(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x024C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortChatContainer");
		return ptr;
	}


	void SetNativeWidgetHost(class UNativeWidgetHost* InNativeWidgetHost);
	void AttachChatWindowToNativeWidget();
};


// Class FortniteUI.FortGridPickerGrid
// 0x0000 (0x0240 - 0x0240)
class UFortGridPickerGrid : public UFortUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortGridPickerGrid");
		return ptr;
	}

};


// Class FortniteUI.FortItemCollectorWidget
// 0x0010 (0x0250 - 0x0240)
class UFortItemCollectorWidget : public UFortUserWidget
{
public:
	class ABuildingItemCollectorActor*                 ItemCollector;                                            // 0x0240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0248(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemCollectorWidget");
		return ptr;
	}


	void OnItemCollectorValuesChanged(TArray<int>* DepositAmounts, TArray<int>* DepositGoals);
	void OnItemCollectorStateChanged();
	void OnItemCollectorChanged(class ABuildingItemCollectorActor* OutItemCollector);
};


// Class FortniteUI.FortItemGroupSlotPicker
// 0x0030 (0x0270 - 0x0240)
class UFortItemGroupSlotPicker : public UFortUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnItemPickerSelectionCommittedEvent;                      // 0x0240(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	TWeakObjectPtr<class UFortItemGroupSlotWidget>     HostItemGroupSlotWidget;                                  // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UContentWidget*                              SlottedItemDetailsContainer;                              // 0x0258(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TWeakObjectPtr<class UWidget>                      SlottedItemDetailsWidget;                                 // 0x0260(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFortItem*                                   UpgradedItemForPreview;                                   // 0x0268(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemGroupSlotPicker");
		return ptr;
	}


	void SignalSelectionCommitted(class UFortItem* SelectedItem);
	void SetSelection(class UFortItem* SelectedItem);
	void OnItemPickerSelectionChanged__DelegateSignature(class UFortItem* SelectedItem);
	void HandleItemSetInternal(class UFortItemGroupSlotWidget* ItemGroupSlotWidget);
	void HandleItemSet();
	struct FName GetSquadId();
	int GetSlotIndexInGroup();
	struct FText STATIC_GetItemSlottingRestrictionReasonText();
	class UFortItem* GetCurrentlySlottedItem();
	TArray<class UFortItem*> GetCompatibleCandidateItems();
	void GetCandidateItemSlottingRestrictions(class UFortItem* CandidateItem);
	float GetCandidateFitnessValueForSlot(class UFortItem* Candidate);
	void EndUpgradePreview();
	void DetectCandidateSynergiesAndMatches(class UFortItem* Candidate, bool* OutHasSquadManagerSynergy, bool* OutHasPersonalitySynergy, bool* OutHasSetBonusMatch);
	class UWidget* CreateSlottedItemDetailsWidget(class UFortItem* Item);
	void BeginUpgradePreview();
};


// Class FortniteUI.FortItemGroupSlotWidget
// 0x00D8 (0x0318 - 0x0240)
class UFortItemGroupSlotWidget : public UFortUserWidget
{
public:
	int                                                SlotIndexInGroup;                                         // 0x0240(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsLocked : 1;                                             // 0x0244(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0245(0x0003) MISSED OFFSET
	TMap<struct FGameplayAttribute, float>             AttributeBonusValues;                                     // 0x0248(0x0050) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      HasSetBonusMatch : 1;                                     // 0x0298(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0299(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UFortItem>                    SlottedItem;                                              // 0x029C(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02A4(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData03[0x10];                                      // 0x02A4(0x0010) UNKNOWN PROPERTY: ArrayProperty FortniteUI.FortItemGroupSlotWidget.ItemTypeFilters
	struct FGameplayTagContainer                       ItemTagFilter;                                            // 0x02B8(0x0020) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FScriptMulticastDelegate                    OnItemSlotLockedStateChangedEvent;                        // 0x02D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemSetEvent;                                           // 0x02E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAttributeBonusValueChangedEvent;                        // 0x02F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	TWeakObjectPtr<class UFortItemGroupWidget>         HostItemGroupWidget;                                      // 0x0308(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UClass*                                      ItemPickerWidgetType;                                     // 0x0310(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemGroupSlotWidget");
		return ptr;
	}


	bool TryGetSquadSlot(struct FHomebaseSquadSlot* OutSquadSlot);
	bool TryGetSquad(struct FHomebaseSquad* OutSquad);
	void SetSlottingPreviewItem(class UFortItem* Item);
	void SetItem(class UFortItem* ItemToSlot);
	void OnItemSlotLockedStateChanged__DelegateSignature(class UFortItemGroupSlotWidget* ItemSlotWidget);
	void OnItemSet__DelegateSignature(class UFortItemGroupSlotWidget* ItemSlotWidget);
	void OnAttributeBonusValueChanged__DelegateSignature(class UFortItemGroupSlotWidget* ItemSlotWidget);
	bool IsManagerSlot();
	bool IsItemCompatible(class UFortItem* Item);
	void InitializeSlot(class UFortItemGroupWidget* HostItemGroupWidget, int SlotIndexInGroup);
	void HandleTraitStateChanged(bool SetBonusMatchStateChanged);
	void HandlePreviewStateChanged(bool IsSquadSlotAffectedByPreview, bool IsBeingReplacedOrRelocated, bool WouldHavePersonalitySynergy, bool WouldHaveSetBonusMatch, TMap<struct FGameplayAttribute, float> PreviewAttributeBonusValues);
	void HandleLockedStateChanged();
	void HandleItemSet();
	void HandleItemPickerSelectionCommittedInternal(class UFortItem* SelectedItem);
	void HandleItemPickerSelectionCommitted();
	void HandleAttributeBonusValueChanged();
	struct FName GetSquadId();
	class UFortItemGroupSlotPicker* CreatePickerWidget();
	void CancelSlottingPreview();
};


// Class FortniteUI.FortItemGroupWidget
// 0x0028 (0x0268 - 0x0240)
class UFortItemGroupWidget : public UFortUserWidget
{
public:
	struct FName                                       SquadId;                                                  // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      ItemSlotWidgetType;                                       // 0x0248(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPanelWidget*                                ItemSlotsContainer;                                       // 0x0250(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UFortItemGroupSlotWidget*>            SlotWidgets;                                              // 0x0258(0x0010) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemGroupWidget");
		return ptr;
	}


	bool TryGetSquad(struct FHomebaseSquad* OutSquad);
	void SetSquad(const struct FName& SquadId);
	void HandleItemSlotAdded(int SlotIndex, class UFortItemGroupSlotWidget* ItemSlotWidget);
	void HandleEffectsChanged();
	void HandleDifferentSquadSet();
	void GetTotalAttributeBonuses(TArray<struct FFortAttributeModifierDisplayData>* OutModifiers);
	struct FName GetSquadId();
	void GetActiveSetBonusTags(TArray<struct FGameplayTag>* OutActiveSetBonusTags);
};


// Class FortniteUI.FortListItem
// 0x0000 (0x0240 - 0x0240)
class UFortListItem : public UFortUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortListItem");
		return ptr;
	}


	void ToggleExpansion();
	void SetSelected(bool bSelected);
	void SetIndexInList(int InIndexInList);
	void SetData(class UObject* InData);
	void Private_OnExpanderArrowShiftClicked();
	bool IsItemExpanded();
	TEnumAsByte<ESelectionMode> GetSelectionMode();
	int GetIndentLevel();
	int DoesItemHaveChildren();
};


// Class FortniteUI.FortMovieWidget
// 0x0018 (0x0258 - 0x0240)
class UFortMovieWidget : public UFortUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnMediaOpened;                                            // 0x0240(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UMediaPlayer*                                MediaPlayer;                                              // 0x0250(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMovieWidget");
		return ptr;
	}


	void SetMediaSource(class UMediaSource* InMediaSource, class UMediaSoundWave* InMediaSoundWave);
	void RequestStopMovie();
	void RequestPlayMovie(bool bShouldRewind);
	void MediaDimensionsUpdated(float NewWidth, float NewHeight);
	bool HasPlayerForSource(class UMediaSource* InMediaSource);
	class UMediaTexture* GetMediaTexture();
	class UMediaPlayer* GetMediaPlayer();
};


// Class FortniteUI.FortNodeCanvasHost
// 0x0008 (0x0248 - 0x0240)
class UFortNodeCanvasHost : public UFortUserWidget
{
public:
	class UFortNodeCanvas*                             Canvas;                                                   // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortNodeCanvasHost");
		return ptr;
	}

};


// Class FortniteUI.FortNodeGraphHost
// 0x0138 (0x0378 - 0x0240)
class UFortNodeGraphHost : public UFortUserWidget
{
public:
	struct FFortCanvasProperties                       CanvasProperties;                                         // 0x0240(0x0070) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FScriptMulticastDelegate                    OnPageShownDelegate;                                      // 0x02B0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UFortNodeCanvasHost*                         CurrentNodeCanvasHost;                                    // 0x02C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UOverlay*                                    CanvasOverlay;                                            // 0x02C8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TMap<struct FName, class UClass*>                  NodePageIdToWidgetTypeMap;                                // 0x02D0(0x0050) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst)
	TMap<struct FName, class UFortNodeCanvasHost*>     NodePageIdToInstanceCache;                                // 0x0320(0x0050) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0370(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortNodeGraphHost");
		return ptr;
	}


	void ShowPage(const struct FName& NodePageId, const struct FName& SourceNodeId, const struct FName& DestinationNodeId, bool bSelectNode, bool bOnlyPanIfNew);
	void SetBackgroundMaterial(class UMaterialInstanceDynamic* InBackgroundMaterial);
	void OnPageShown__DelegateSignature(class UFortNodeCanvasHost* Page);
	bool IsEarlyGame();
	class UClass* GetWidgetTypeForNodePage(const struct FName& NodePageId);
	void GetTokensNeededForNodePage(class UFortNodeCanvasHost* Page, TArray<class UFortItemDefinition*>* OutTokens);
	bool GetPathToNode(const struct FName& NodePageId, const struct FName& NodeID, TArray<struct FName>* Pages, TArray<struct FName>* Nodes);
	struct FText GetNodePageName(const struct FName& NodePageId);
	struct FName GetInitialNodePageName();
	struct FName GetInitialNodeName();
};


// Class FortniteUI.FortNodePrerequisitesWidget
// 0x0010 (0x0250 - 0x0240)
class UFortNodePrerequisitesWidget : public UFortUserWidget
{
public:
	struct FDataTableRowHandle                         NodeStyleData;                                            // 0x0240(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortNodePrerequisitesWidget");
		return ptr;
	}


	void ProcessNodePrequisites(const struct FName& NodeID);
	void GenerateNodePrerequisiteConnector();
	void GenerateNodePrerequisite(const struct FFortUINodePrerequisite& NodePrerequisite);
};


// Class FortniteUI.FortPerksWidget
// 0x0018 (0x0258 - 0x0240)
class UFortPerksWidget : public UFortUserWidget
{
public:
	class UFortHero*                                   Hero;                                                     // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsUpgrade : 1;                                           // 0x0248(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsEvolution : 1;                                         // 0x0249(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x024A(0x0006) MISSED OFFSET
	class UFortHero*                                   EvolutionOption;                                          // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPerksWidget");
		return ptr;
	}


	void ProcessPerkTiers();
	void OnGeneratePerkTier(const struct FFortUIPerkTier& FortPerkTier);
};


// Class FortniteUI.FortPerkTierWidget
// 0x0020 (0x0260 - 0x0240)
class UFortPerkTierWidget : public UFortUserWidget
{
public:
	struct FFortUIPerkTier                             FortPerkTier;                                             // 0x0240(0x0020) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPerkTierWidget");
		return ptr;
	}


	void ProcessPerks();
	void OnGeneratePerk(const struct FFortUIPerk& Perk);
};


// Class FortniteUI.FortPvPMinimapWidget
// 0x0020 (0x0260 - 0x0240)
class UFortPvPMinimapWidget : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0240(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPvPMinimapWidget");
		return ptr;
	}

};


// Class FortniteUI.FortSocialItemWidget
// 0x0000 (0x0240 - 0x0240)
class UFortSocialItemWidget : public UFortUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSocialItemWidget");
		return ptr;
	}


	void SetSocialItem(class UFortSocialItem* InSocialItem);
};


// Class FortniteUI.FortSquadPanelWidget
// 0x0028 (0x0268 - 0x0240)
class UFortSquadPanelWidget : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0240(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortSquadPanelWidget.SquadTypeFilter
	unsigned char                                      UnknownData01[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	class UClass*                                      SquadWidgetType;                                          // 0x0248(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPanelWidget*                                SquadWidgetsContainer;                                    // 0x0250(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UFortItemGroupWidget*>                SquadWidgets;                                             // 0x0258(0x0010) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadPanelWidget");
		return ptr;
	}

};


// Class FortniteUI.FortStorefront
// 0x0000 (0x0240 - 0x0240)
class UFortStorefront : public UFortUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortStorefront");
		return ptr;
	}

};


// Class FortniteUI.FortUIManagerWidget
// 0x0250 (0x0490 - 0x0240)
class UFortUIManagerWidget : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0240(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBeginSpokenDialog;                                      // 0x0248(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndSpokenDialog;                                        // 0x0258(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	TAssetPtr<class UClass>                            StateWidgets[0xA];                                        // 0x0268(0x0020) (CPF_Edit)
	unsigned char                                      UnknownData01[0x1];                                       // 0x03A8(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortUIManagerWidget.CurrentState
	unsigned char                                      UnknownData02[0x1];                                       // 0x03A9(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteUI.FortUIManagerWidget.PendingState
	unsigned char                                      UnknownData03[0x6];                                       // 0x03AA(0x0006) MISSED OFFSET
	class UFortUIStateWidget*                          CurrentStateWidget;                                       // 0x03B0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UClass*>                              LoadedStateWidgetClasses;                                 // 0x03B8(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<class UFortUIStateTrigger*>                 StateTriggers;                                            // 0x03C8(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<class UFortActionHandlerPanel*>             ActionHandlerPanels;                                      // 0x03D8(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData04[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET
	class UFortNotificationQueue*                      UINotificationQueues[0x3];                                // 0x03F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bIsStateContentDisplayed : 1;                             // 0x0408(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0409(0x0007) MISSED OFFSET
	class UFortUINavigationManager*                    NavigationManager;                                        // 0x0410(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x78];                                      // 0x0418(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIManagerWidget");
		return ptr;
	}


	void UpdateStateWidgetContent(class UFortUIStateWidget* StateWidget);
	void UnregisterStateTrigger(class UFortUIStateTrigger* TriggerToRemove);
	void STATIC_ShowErrorDialog(class UObject* WorldContextObject, const struct FText& OperationDesc, const struct FText& DisplayMessage, const struct FString& ErrorCode);
	void SetStateContentDisplayed(bool bDisplay);
	void ReleaseNotification(class UFortUINotification* Notification);
	void RegisterStateTrigger(class UFortUIStateTrigger* StateTrigger);
	void QueueActivatablePanelIntoModalLayer(class UCommonActivatablePanel* Panel);
	void QueueActionPanelIntoModalLayer(class UFortActionHandlerPanel* Panel, TEnumAsByte<EHorizontalAlignment> HorizontalAlignment, TEnumAsByte<EVerticalAlignment> VerticalAlignment);
	void OnStateStarted();
	void OnShowConfirmation_NUI(const struct FFortDialogDescription_NUI& Description);
	void OnShowConfirmation(const struct FFortDialogDescription& Description);
	void OnEndSpokenDialog__DelegateSignature();
	void OnBeginSpokenDialog__DelegateSignature(class UTexture2D* Image, const struct FText& Title, const struct FText& Subtitle);
	void STATIC_KillConfirmationDialog(class UObject* WorldContextObject);
	bool IsStateContentDisplayed();
	class UFortUIManagerWidget* STATIC_GetUIManagerWidget(class UObject* WorldContextObject);
	class UFortUINavigationManager* GetNavigationManager();
	class UFortUIStateWidget* GetCurrentUIStateWidget();
	void DisplayStateContent(bool bDisplay);
	void DisplayErrorDialog(const struct FFortErrorInfo& Info);
	class UFortUIStateTrigger* STATIC_CreateUIStateTrigger(class UClass* Class, class UObject* WorldContextObject);
	class UFortUINotification* CreateNotification(class UClass* UINotificationClass);
	void _BPGetCurrentUIState();
};


// Class FortniteUI.FortUserChoiceWidget
// 0x0000 (0x0240 - 0x0240)
class UFortUserChoiceWidget : public UFortUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUserChoiceWidget");
		return ptr;
	}


	void SetChoices(const struct FChoiceData& ChoiceItems);
};


// Class FortniteUI.FortWorkerSetBonusIcon
// 0x0018 (0x0250 - 0x0238)
class UFortWorkerSetBonusIcon : public UCommonUserWidget
{
public:
	struct FGameplayTag                                GameplayTag;                                              // 0x0238(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<EFortBrushSize>                        ImageSize;                                                // 0x0240(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	class UImage*                                      Icon;                                                     // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortWorkerSetBonusIcon");
		return ptr;
	}


	void SetGameplayTag(const struct FGameplayTag& InGameplayTag);
	void HandleDifferentGameplayTagSetBP();
};


// Class FortniteUI.FriendCodeEntryBase
// 0x0000 (0x08A0 - 0x08A0)
class UFriendCodeEntryBase : public UCommonButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FriendCodeEntryBase");
		return ptr;
	}

};


// Class FortniteUI.FriendCodeListBase
// 0x0000 (0x03E0 - 0x03E0)
class UFriendCodeListBase : public UCommonActivatablePanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FriendCodeListBase");
		return ptr;
	}

};


// Class FortniteUI.UINavigationManager
// 0x0020 (0x0048 - 0x0028)
class UUINavigationManager : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnNavigationEvent;                                        // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	TArray<struct FUINavigationEntry>                  NavigationStack;                                          // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.UINavigationManager");
		return ptr;
	}


	void PushNavigation(const struct FText& DisplayName, class UObject* ObjectData, const struct FName& IdData, int IntData, const struct FScriptDelegate& OnNavigateTo, const struct FScriptDelegate& OnNavigateFrom);
	void PopNavigation();
	void NavigationToIndex(int Index);
	int GetStackSize();
	struct FText GetDisplayName(int Index);
	void ClearStack();
};


// Class FortniteUI.FortUINavigationManager
// 0x0100 (0x0148 - 0x0048)
class UFortUINavigationManager : public UUINavigationManager
{
public:
	struct FScriptMulticastDelegate                    OnMainTabNavigateRequest;                                 // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFeatureNavigateOp;                                      // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNodePageNavigateRequest;                                // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSquadSlotNavigateRequest;                               // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnVaultTabNavigateRequest;                                // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnVaultItemNavigateRequest;                               // 0x0098(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemEvolutionNavigateRequest;                           // 0x00A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnQuestItemNavigateRequest;                               // 0x00B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPopContentStackOp;                                      // 0x00C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSquadNavigationOp;                                      // 0x00D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    FortExpeditionsOp;                                        // 0x00E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    FortCollectionBookOp;                                     // 0x00F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnQuestItemOp;                                            // 0x0108(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0118(0x0020) MISSED OFFSET
	TArray<struct FFortUINavigationRequest>            NavigationRequests;                                       // 0x0138(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUINavigationManager");
		return ptr;
	}


	bool TryGetPendingNavigationOp(struct FFortUINavigationOperation* NavigationOp);
	void SetScrollWidget(class UWidget* Widget);
	void PushSquadManagementScreen(const struct FName& SquadId, int SquadSlotIndex);
	void PushSkillTreePage(const struct FName& SkillTreePageId);
	void PushSkillTreeNode(const struct FName& SkillTreeNodeId);
	void PushItemManagementScreen();
	void PushItemInspectionScreen(class UFortItem* ItemToInspect, bool bReadOnly, bool bAllowFavoriting, bool bIsTemporaryItem);
	void NavigateToSquadSlot(const struct FName& SquadId, int SquadSlotIndex);
	void NavigateToQuestObjective(class UFortQuestItem* QuestItem);
	void NavigateToNodePageByGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer);
	void NavigateToNodePage(const struct FName& PageId, const struct FName& NodeID);
	void NavigateToItemManagementScreen();
	void NavigateToItem(class UFortItem* Item);
	void NavigateToFeature();
	void NavigateToExpeditions();
	void NavigateToCollectionBook();
	bool HasPendingNavigationOp();
	void CompletePendingNavigationOp();
	void CenterWidget(class UWidget* Widget);
	bool CanNavigateToQuestObjective(class UFortQuestItem* QuestItem);
	void AttemptPlayQuest(class UFortQuestItem* Quest);
	bool AttemptMatchmakeForQuest(class UFortQuestItem* Quest, bool* OutContentNotDownloaded);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
