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

// Class CommonUI.CommonUserWidget
// 0x0008 (0x0238 - 0x0230)
class UCommonUserWidget : public UUserWidget
{
public:
	bool                                               bConsumePointerInput;                                     // 0x0230(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0231(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonUserWidget");
		return ptr;
	}


	void SetConsumePointerInput(bool bInConsumePointerInput);
};


// Class CommonUI.CommonTabListWidget
// 0x00C8 (0x0300 - 0x0238)
class UCommonTabListWidget : public UCommonUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnTabSelected;                                            // 0x0238(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTabButtonCreated;                                       // 0x0248(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTabButtonRemoved;                                       // 0x0258(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FDataTableRowHandle                         NextTabInputActionData;                                   // 0x0268(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FDataTableRowHandle                         PreviousTabInputActionData;                               // 0x0278(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	bool                                               bAutoListenForInput;                                      // 0x0288(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0289(0x0007) MISSED OFFSET
	class UCommonWidgetSwitcher*                       LinkedSwitcher;                                           // 0x0290(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TMap<struct FName, struct FCommonRegisteredTabInfo> RegisteredTabsByID;                                       // 0x0298(0x0050) (CPF_ZeroConstructor)
	class UCommonButtonGroup*                          TabButtonGroup;                                           // 0x02E8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x02F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonTabListWidget");
		return ptr;
	}


	void SetTabEnabled(const struct FName& TabNameID, bool bEnable);
	void SetListeningForInput(bool bShouldListen);
	void SetLinkedSwitcher(class UCommonWidgetSwitcher* CommonSwitcher);
	bool SelectTabByID(const struct FName& TabNameID, bool bSuppressClickFeedback);
	bool RemoveTab(const struct FName& TabNameID);
	void RemoveAllTabs();
	bool RegisterTab(const struct FName& TabNameID, class UClass* ButtonWidgetType, class UWidget* ContentWidget);
	void OnTabSelected__DelegateSignature(const struct FName& TabId);
	void OnTabButtonRemoved__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton);
	void OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton);
	void HandleTabRemoved(const struct FName& TabNameID, class UCommonButton* TabButton);
	void HandleTabCreated(const struct FName& TabNameID, class UCommonButton* TabButton);
	void HandleTabButtonSelected(class UCommonButton* SelectedTabButton, int ButtonIndex);
	void HandlePreviousTabInputAction(bool* bPassThrough);
	void HandlePreLinkedSwitcherChanged_BP();
	void HandlePostLinkedSwitcherChanged_BP();
	void HandleNextTabInputAction(bool* bPassThrough);
	int GetTabCount();
	class UCommonButton* GetTabButtonByID(const struct FName& TabNameID);
	class UCommonWidgetSwitcher* GetLinkedSwitcher();
	struct FName GetActiveTab();
	void DisableTabWithReason(const struct FName& TabNameID, const struct FText& Reason);
};


// Class CommonUI.CommonActivatablePanel
// 0x01A8 (0x03E0 - 0x0238)
class UCommonActivatablePanel : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnWidgetActivated;                                        // 0x0240(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWidgetDeactivated;                                      // 0x0250(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0x100];                                     // 0x0260(0x0100) MISSED OFFSET
	bool                                               bConsumeAllActions;                                       // 0x0360(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bExposeActionsExternally;                                 // 0x0361(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bShouldBypassStack;                                       // 0x0362(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7D];                                      // 0x0363(0x007D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonActivatablePanel");
		return ptr;
	}


	void SetInputActionHandlerWithProgress(const struct FDataTableRowHandle& InputActionRow, const struct FScriptDelegate& CommitedEvent, const struct FScriptDelegate& ProgressEvent);
	void SetInputActionHandler(const struct FDataTableRowHandle& InputActionRow, const struct FScriptDelegate& CommitedEvent);
	void SetActionHandlerStateWithDisabledCommitEvent(class UDataTable* DataTable, const struct FName& RowName, EInputActionState State, const struct FScriptDelegate& DisabledCommitEvent);
	void SetActionHandlerStateFromHandleWithDisabledCommitEvent(const struct FDataTableRowHandle& InputActionRow, EInputActionState State, const struct FScriptDelegate& DisabledCommitEvent);
	void SetActionHandlerStateFromHandle(const struct FDataTableRowHandle& InputActionRow, EInputActionState State);
	void SetActionHandlerState(class UDataTable* DataTable, const struct FName& RowName, EInputActionState State);
	void RemoveInputActionHandler(const struct FDataTableRowHandle& InputActionRow);
	void RemoveAllInputActionHandlers();
	void PopPanel();
	void OnDeactivated();
	void OnBeginOutro();
	void OnBeginIntro();
	void OnActivated();
	bool IsIntroed();
	bool IsActivated();
	bool HasInputActionHandler(const struct FDataTableRowHandle& InputActionRow);
	bool GetInputActions(TArray<struct FCommonInputActionHandlerData>* InputActionDataRows);
	void EndOutro();
	void EndIntro();
	void BeginOutro();
	void BeginIntro();
	void AddInputActionNoHandler(class UDataTable* DataTable, const struct FName& RowName);
	void AddInputActionHandlerWithProgress(class UDataTable* DataTable, const struct FName& RowName, const struct FScriptDelegate& CommitedEvent, const struct FScriptDelegate& ProgressEvent);
	void AddInputActionHandler(class UDataTable* DataTable, const struct FName& RowName, const struct FScriptDelegate& CommitedEvent);
};


// Class CommonUI.CommonButton
// 0x0668 (0x08A0 - 0x0238)
class UCommonButton : public UCommonUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectedChanged;                                        // 0x0238(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonClicked;                                          // 0x0248(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonDoubleClicked;                                    // 0x0258(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonHovered;                                          // 0x0268(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonUnhovered;                                        // 0x0278(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	int                                                MinWidth;                                                 // 0x0288(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinHeight;                                                // 0x028C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      Style;                                                    // 0x0290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bApplyAlphaOnDisable;                                     // 0x0298(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0299(0x0007) MISSED OFFSET
	struct FSlateSound                                 PressedSlateSoundOverride;                                // 0x02A0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FSlateSound                                 HoveredSlateSoundOverride;                                // 0x02B8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	bool                                               bSelectable;                                              // 0x02D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bShouldSelectUponReceivingFocus;                          // 0x02D1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bInteractableWhenSelected;                                // 0x02D2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bToggleable;                                              // 0x02D3(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDisplayInputActionWhenNotInteractable;                   // 0x02D4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                              // 0x02D5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x02D6(0x0002) MISSED OFFSET
	struct FDataTableRowHandle                         TriggeringInputAction;                                    // 0x02D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                InputPriority;                                            // 0x02E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bHideInputActionWithKeyboard;                             // 0x02EC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x43];                                      // 0x02ED(0x0043) MISSED OFFSET
	class UCommonActionWidget*                         InputActionWidget;                                        // 0x0330(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    SingleMaterialStyleMID;                                   // 0x0338(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FButtonStyle                                NormalStyle;                                              // 0x0340(0x02A8)
	struct FButtonStyle                                SelectedStyle;                                            // 0x05E8(0x02A8)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0890(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonButton");
		return ptr;
	}


	void SetTriggeredInputAction(const struct FDataTableRowHandle& InputActionRow, class UCommonActivatablePanel* OldPanel);
	void SetStyle(class UClass* InStyle);
	void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);
	void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);
	void SetMinDimensions(int InMinWidth, int InMinHeight);
	void SetIsToggleable(bool bInIsToggleable);
	void SetIsSelected(bool InSelected, bool bGiveClickFeedback);
	void SetIsSelectable(bool bInIsSelectable);
	void SetIsInteractionEnabled(bool bInIsInteractionEnabled);
	void SetInputActionProgressMaterial(const struct FSlateBrush& InProgressMaterialBrush, const struct FName& InProgressMaterialParam);
	void OnUnhovered();
	void OnTriggeredInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction);
	void OnSelected();
	void OnInputMethodChanged(bool bUsingGamepad);
	void OnHovered();
	void OnEnabled();
	void OnDoubleClicked();
	void OnDisabled();
	void OnDeselected();
	void OnCurrentTextStyleChanged();
	void OnClicked();
	void OnActionProgress(float HeldPercent);
	void OnActionComplete();
	void NativeOnActionProgress(float HeldPercent);
	void NativeOnActionComplete();
	bool IsPressed();
	bool IsInteractionEnabled();
	bool IsHovered();
	void HandleTriggeringActionCommited(bool* bPassThrough);
	void HandleFocusReceived();
	void HandleButtonDoubleClicked();
	void HandleButtonClicked();
	class UCommonButtonStyle* GetStyle();
	class UMaterialInstanceDynamic* GetSingleMaterialStyleMID();
	bool GetShouldSelectUponReceivingFocus();
	bool GetSelected();
	bool GetInputAction(struct FDataTableRowHandle* InputActionRow);
	class UClass* GetCurrentTextStyleClass();
	class UCommonTextStyle* GetCurrentTextStyle();
	void GetCurrentCustomPadding(struct FMargin* OutCustomPadding);
	void GetCurrentButtonPadding(struct FMargin* OutButtonPadding);
	void EnableButton();
	void DisableButtonWithReason(const struct FText& DisabledReason);
	void DisableButton();
	void ClearSelection();
};


// Class CommonUI.CommonWidgetGroupBase
// 0x0000 (0x0028 - 0x0028)
class UCommonWidgetGroupBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonWidgetGroupBase");
		return ptr;
	}


	void RemoveWidget(class UWidget* InWidget);
	void RemoveAll();
	void AddWidget(class UWidget* InWidget);
};


// Class CommonUI.CommonButtonGroup
// 0x0070 (0x0098 - 0x0028)
class UCommonButtonGroup : public UCommonWidgetGroupBase
{
public:
	struct FScriptMulticastDelegate                    OnSelectedButtonChanged;                                  // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHoveredButtonChanged;                                   // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonClicked;                                          // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonDoubleClicked;                                    // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSelectionCleared;                                       // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	bool                                               bSelectionRequired;                                       // 0x0078(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0079(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonButtonGroup");
		return ptr;
	}


	void SetSelectionRequired(bool bRequireSelection);
	void SelectPreviousButton(bool bAllowWrap);
	void SelectNextButton(bool bAllowWrap);
	void SelectButtonAtIndex(int ButtonIndex);
	void OnSelectionStateChanged(class UCommonButton* BaseButton, bool bIsSelected);
	void OnHandleButtonDoubleClicked(class UCommonButton* BaseButton);
	void OnHandleButtonClicked(class UCommonButton* BaseButton);
	void OnButtonUnhovered(class UCommonButton* BaseButton);
	void OnButtonHovered(class UCommonButton* BaseButton);
	bool HasAnyButtons();
	int GetSelectedButtonIndex();
	class UCommonButton* GetButtonAtIndex(int Index);
	int FindButtonIndex(class UCommonButton* ButtonToFind);
	void DeselectAll();
};


// Class CommonUI.CommonTextBlock
// 0x0050 (0x0298 - 0x0248)
class UCommonTextBlock : public UTextBlock
{
public:
	class UClass*                                      Style;                                                    // 0x0248(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      ScrollStyle;                                              // 0x0250(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0258(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonTextBlock");
		return ptr;
	}


	void SetWrapTextWidth(int InWrapTextAt);
	void SetStyle(class UClass* InStyle);
	void SetScrollStyle(class UClass* InScrollStyle);
	void SetProperties(class UClass* InStyle, class UClass* InScrollStyle);
	void ResetScrollState();
};


// Class CommonUI.CommonNumericTextBlock
// 0x0088 (0x0320 - 0x0298)
class UCommonNumericTextBlock : public UCommonTextBlock
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0298(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnOutroEvent;                                             // 0x02A0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInterpolationEndedEvent;                                // 0x02B0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	float                                              CurrentNumericValue;                                      // 0x02C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsPercentage;                                             // 0x02C4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02C5(0x0003) MISSED OFFSET
	struct FCommonNumberFormattingOptions              FormattingSpecification;                                  // 0x02C8(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	float                                              EaseOutInterpolationExponent;                             // 0x02DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InterpolationUpdateInterval;                              // 0x02E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PostInterpolationShrinkDuration;                          // 0x02E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x38];                                      // 0x02E8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonNumericTextBlock");
		return ptr;
	}


	void SetCurrentValue(float NewValue);
	void OnOutro__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);
	void OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);
	bool IsInterpolatingNumericValue();
	void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset);
	float GetTargetValue();
};


// Class CommonUI.CommonListView
// 0x0208 (0x0320 - 0x0118)
class UCommonListView : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnItemClicked;                                            // 0x0118(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemDoubleClicked;                                      // 0x0128(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemHovered;                                            // 0x0138(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemSelected;                                           // 0x0148(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemWidgetCreated;                                      // 0x0158(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemWidgetDestroyed;                                    // 0x0168(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	float                                              ItemHeight;                                               // 0x0178(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	struct FMargin                                     DesiredItemPadding;                                       // 0x017C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate)
	unsigned char                                      UnknownData00[0x4];                                       // 0x018C(0x0004) MISSED OFFSET
	class UClass*                                      ListItemClass;                                            // 0x0190(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	TEnumAsByte<ESelectionMode>                        SelectionMode;                                            // 0x0198(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	EConsumeMouseWheel                                 ConsumeMouseWheel;                                        // 0x0199(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	bool                                               bClearSelectionOnClick;                                   // 0x019A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x019B(0x0001) MISSED OFFSET
	int                                                NumPreAllocatedEntries;                                   // 0x019C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	bool                                               bSimulateDoubleClickOnSelectedItemClick;                  // 0x01A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x16F];                                     // 0x01A1(0x016F) MISSED OFFSET
	class UCommonListViewNullItem*                     NullItem;                                                 // 0x0310(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0318(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonListView");
		return ptr;
	}


	void SetSimulateDoubleClickOnSelectedItemClick(bool bInSimulateDoubleClick);
	void SetSelectionMode(TEnumAsByte<ESelectionMode> SelectionMode);
	bool SetSelectedItem(class UObject* Item, bool bWaitIfPendingRefresh);
	bool SetSelectedIndex(int Index);
	void SetItemSelection(class UObject* Item, bool bSelected);
	void SetItemHeight(float NewHeight);
	void SetDesiredItemPadding(const struct FMargin& DesiredPadding);
	void SetDataProvider(TArray<class UObject*> InDataProvider);
	void ScrollIntoView(class UObject* Item, bool NavigateOnScrollIntoView);
	bool IsRefreshPending();
	bool IsItemVisible(class UObject* Item);
	TEnumAsByte<ESelectionMode> GetSelectionModeBP();
	bool GetSelectedItems(TArray<class UObject*>* Items);
	class UObject* GetSelectedItem();
	int GetNumItemsSelected();
	int GetNumItems();
	class UObject* GetItemAt(int Index);
	int GetIndexForItem(class UObject* Item);
	void DynamicHandleItemUnhoveredCommonButton(class UCommonButton* Button);
	void DynamicHandleItemHoveredCommonButton(class UCommonButton* Button);
	void DynamicHandleItemDoubleClickedCommonButton(class UCommonButton* Button);
	void DynamicHandleItemClickedUserWidget(class UUserWidget* Widget);
	void DynamicHandleItemClickedCommonButton(class UCommonButton* Button);
	void ClearSelection();
	void Clear();
	void AddItem(class UObject* Item);
};


// Class CommonUI.CommonTileView
// 0x0010 (0x0330 - 0x0320)
class UCommonTileView : public UCommonListView
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0320(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonTileView");
		return ptr;
	}


	void SetItemWidth(float NewWidth);
};


// Class CommonUI.AnalogSlider
// 0x0010 (0x0420 - 0x0410)
class UAnalogSlider : public USlider
{
public:
	struct FScriptMulticastDelegate                    OnAnalogCapture;                                          // 0x0410(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.AnalogSlider");
		return ptr;
	}

};


// Class CommonUI.CommonActionHandlerInterface
// 0x0000 (0x0028 - 0x0028)
class UCommonActionHandlerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonActionHandlerInterface");
		return ptr;
	}

};


// Class CommonUI.CommonActionWidget
// 0x0228 (0x0340 - 0x0118)
class UCommonActionWidget : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnInputMethodChanged;                                     // 0x0118(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FDataTableRowHandle                         InputActionDataRow;                                       // 0x0128(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FSlateBrush                                 ProgressMaterialBrush;                                    // 0x0138(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FName                                       ProgressMaterialParam;                                    // 0x01C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FSlateBrush                                 IconRimBrush;                                             // 0x01D0(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UMaterialInstanceDynamic*                    ProgressDynamicMaterial;                                  // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0268(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonActionWidget");
		return ptr;
	}


	void SetInputAction(const struct FDataTableRowHandle& InputActionRow);
	void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	bool IsHeldAction();
	struct FSlateBrush GetIcon();
	struct FText GetDisplayText();
};


// Class CommonUI.CommonBorderStyle
// 0x0090 (0x00B8 - 0x0028)
class UCommonBorderStyle : public UObject
{
public:
	struct FSlateBrush                                 Background;                                               // 0x0028(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonBorderStyle");
		return ptr;
	}


	void GetBackgroundBrush(struct FSlateBrush* Brush);
};


// Class CommonUI.CommonBorder
// 0x0020 (0x02B0 - 0x0290)
class UCommonBorder : public UBorder
{
public:
	class UClass*                                      Style;                                                    // 0x0290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bReducePaddingBySafezone;                                 // 0x0298(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0299(0x0003) MISSED OFFSET
	struct FMargin                                     MinimumPadding;                                           // 0x029C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02AC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonBorder");
		return ptr;
	}


	void SetStyle(class UClass* InStyle);
};


// Class CommonUI.CommonVisibilityWidget
// 0x0010 (0x02C0 - 0x02B0)
class UCommonVisibilityWidget : public UCommonBorder
{
public:
	bool                                               bShowForGamepad;                                          // 0x02B0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bShowForMouseAndKeyboard;                                 // 0x02B1(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bShowForPC;                                               // 0x02B2(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bShowForMac;                                              // 0x02B3(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bShowForPS4;                                              // 0x02B4(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bShowForXBox;                                             // 0x02B5(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bShowForIOS;                                              // 0x02B6(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bShowForAndroid;                                          // 0x02B7(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	ESlateVisibility                                   VisibleType;                                              // 0x02B8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	ESlateVisibility                                   HiddenType;                                               // 0x02B9(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x02BA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonVisibilityWidget");
		return ptr;
	}

};


// Class CommonUI.CommonButtonStyle
// 0x0508 (0x0530 - 0x0028)
class UCommonButtonStyle : public UObject
{
public:
	bool                                               bSingleMaterial;                                          // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FSlateBrush                                 SingleMaterialBrush;                                      // 0x0030(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FSlateBrush                                 NormalBase;                                               // 0x00C0(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FSlateBrush                                 NormalHovered;                                            // 0x0150(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FSlateBrush                                 NormalPressed;                                            // 0x01E0(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FSlateBrush                                 SelectedBase;                                             // 0x0270(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FSlateBrush                                 SelectedHovered;                                          // 0x0300(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FSlateBrush                                 SelectedPressed;                                          // 0x0390(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FSlateBrush                                 Disabled;                                                 // 0x0420(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FMargin                                     ButtonPadding;                                            // 0x04B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FMargin                                     CustomPadding;                                            // 0x04C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	int                                                MinWidth;                                                 // 0x04D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                MinHeight;                                                // 0x04D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      NormalTextStyle;                                          // 0x04D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      NormalHoveredTextStyle;                                   // 0x04E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      SelectedTextStyle;                                        // 0x04E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      SelectedHoveredTextStyle;                                 // 0x04F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      DisabledTextStyle;                                        // 0x04F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x0500(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x0518(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonButtonStyle");
		return ptr;
	}


	class UCommonTextStyle* GetSelectedTextStyle();
	void GetSelectedPressedBrush(struct FSlateBrush* Brush);
	class UCommonTextStyle* GetSelectedHoveredTextStyle();
	void GetSelectedHoveredBrush(struct FSlateBrush* Brush);
	void GetSelectedBaseBrush(struct FSlateBrush* Brush);
	class UCommonTextStyle* GetNormalTextStyle();
	void GetNormalPressedBrush(struct FSlateBrush* Brush);
	class UCommonTextStyle* GetNormalHoveredTextStyle();
	void GetNormalHoveredBrush(struct FSlateBrush* Brush);
	void GetNormalBaseBrush(struct FSlateBrush* Brush);
	void GetMaterialBrush(struct FSlateBrush* Brush);
	class UCommonTextStyle* GetDisabledTextStyle();
	void GetDisabledBrush(struct FSlateBrush* Brush);
	void GetCustomPadding(struct FMargin* OutCustomPadding);
	void GetButtonPadding(struct FMargin* OutButtonPadding);
};


// Class CommonUI.CommonButtonInternal
// 0x0088 (0x04F0 - 0x0468)
class UCommonButtonInternal : public UButton
{
public:
	struct FScriptMulticastDelegate                    OnDoubleClicked;                                          // 0x0468(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0478(0x0048) MISSED OFFSET
	int                                                MinWidth;                                                 // 0x04C0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinHeight;                                                // 0x04C4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bButtonEnabled;                                           // 0x04C8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bInteractionEnabled;                                      // 0x04C9(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x26];                                      // 0x04CA(0x0026) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonButtonInternal");
		return ptr;
	}

};


// Class CommonUI.CommonCustomNavigation
// 0x0010 (0x02A0 - 0x0290)
class UCommonCustomNavigation : public UBorder
{
public:
	struct FScriptDelegate                             OnNavigationEvent;                                        // 0x0290(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonCustomNavigation");
		return ptr;
	}


	bool OnCustomNavigationEvent__DelegateSignature(EUINavigation NavigationType);
};


// Class CommonUI.CommonGlobalInputHandler
// 0x0048 (0x0070 - 0x0028)
class UCommonGlobalInputHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonGlobalInputHandler");
		return ptr;
	}

};


// Class CommonUI.CommonInputManager
// 0x0298 (0x02C0 - 0x0028)
class UCommonInputManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x238];                                     // 0x0028(0x0238) MISSED OFFSET
	TScriptInterface<class UCommonActionHandlerInterface> CurrentlyHeldActionInputHandler;                          // 0x0260(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UCommonActivatablePanel*>             ActivatablePanelStack;                                    // 0x0270(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	class UCommonGlobalInputHandler*                   GlobalInputHandler;                                       // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0288(0x0010) MISSED OFFSET
	TArray<struct FOperation>                          Operations;                                               // 0x0298(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonInputManager");
		return ptr;
	}


	bool StopListeningForExistingHeldAction(const struct FDataTableRowHandle& InputActionDataRow, const struct FScriptDelegate& CompleteEvent, const struct FScriptDelegate& ProgressEvent);
	bool StartListeningForExistingHeldAction(const struct FDataTableRowHandle& InputActionDataRow, const struct FScriptDelegate& CompleteEvent, const struct FScriptDelegate& ProgressEvent);
	void SetGlobalInputHandlerPriorityFilter(int InFilterPriority);
	void PushActivatablePanel(class UCommonActivatablePanel* ActivatablePanel, bool bIntroPanel, bool bOutroPanelBelow);
	void PopActivatablePanel(class UCommonActivatablePanel* ActivatablePanel);
	bool IsPanelOnStack(class UCommonActivatablePanel* InPanel);
	bool IsInputSuspended();
	int GetGlobalInputHandlerPriorityFilter();
	bool GetAvailableInputActions(TArray<struct FCommonInputActionHandlerData>* AvailableInputActions);
};


// Class CommonUI.CommonLoadGuard
// 0x0088 (0x01B8 - 0x0130)
class UCommonLoadGuard : public UContentWidget
{
public:
	struct FScriptMulticastDelegate                    OnLoadingStateChanged;                                    // 0x0130(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	TEnumAsByte<EHorizontalAlignment>                  ThrobberAlignment;                                        // 0x0140(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0141(0x0003) MISSED OFFSET
	struct FMargin                                     ThrobberPadding;                                          // 0x0144(0x0010) (CPF_Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	struct FText                                       LoadingText;                                              // 0x0158(0x0018) (CPF_Edit)
	struct FStringClassReference                       TextStyleClass;                                           // 0x0170(0x0010) (CPF_Config)
	class UClass*                                      TextStyle;                                                // 0x0180(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonTextBlock*                            Text_LoadingText;                                         // 0x0188(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0190(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonLoadGuard");
		return ptr;
	}


	void SetLoadingText(const struct FText& InLoadingText);
	void SetIsLoading(bool bInIsLoading);
	void OnAssetLoaded__DelegateSignature(class UObject* Object);
	bool IsLoading();
	void BP_GuardAndLoadAsset(TAssetPtr<class UObject> InLazyAsset, const struct FScriptDelegate& OnAssetLoaded);
};


// Class CommonUI.CommonLazyImage
// 0x0040 (0x0240 - 0x0200)
class UCommonLazyImage : public UImage
{
public:
	struct FScriptMulticastDelegate                    OnLoadingStateChanged;                                    // 0x0200(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0210(0x0028) MISSED OFFSET
	class UCommonLoadGuard*                            LoadGuard;                                                // 0x0238(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonLazyImage");
		return ptr;
	}


	void ShowDefaultImage();
	void SetBrushFromLazyTexture(TAssetPtr<class UTexture2D> LazyTexture, bool bMatchSize);
	void SetBrushFromLazyMaterial(TAssetPtr<class UMaterialInterface> LazyMaterial);
	void SetBrushFromLazyDisplayAsset(TAssetPtr<class UObject> LazyObject, bool bMatchTextureSize);
	bool IsLoading();
	void ForwardLoadingStateChanged(bool bIsLoading);
};


// Class CommonUI.CommonListViewNullItem
// 0x0000 (0x0028 - 0x0028)
class UCommonListViewNullItem : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonListViewNullItem");
		return ptr;
	}

};


// Class CommonUI.CommonTreeView
// 0x0020 (0x0340 - 0x0320)
class UCommonTreeView : public UCommonListView
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0320(0x0008) MISSED OFFSET
	bool                                               bAllowInvisibleItemSelection;                             // 0x0328(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0329(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonTreeView");
		return ptr;
	}


	void SetSelection(class UObject* InItem);
	void SetItemExpansion(class UObject* Item, bool InShouldExpandItem);
	void RequestRefresh();
	void DynamicHandleItemClickedCommonButton(class UCommonButton* Button);
};


// Class CommonUI.CommonPoolableWidgetInterface
// 0x0000 (0x0028 - 0x0028)
class UCommonPoolableWidgetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonPoolableWidgetInterface");
		return ptr;
	}


	void OnReleaseToPool();
	void OnAcquireFromPool();
};


// Class CommonUI.CommonListItem
// 0x0000 (0x0028 - 0x0028)
class UCommonListItem : public UCommonPoolableWidgetInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonListItem");
		return ptr;
	}


	void ToggleExpansion();
	void SetSelected(bool bSelected);
	void SetIndexInList(int InIndexInList);
	void SetExpanded(bool bExpanded);
	void RegisterOnClicked(const struct FScriptDelegate& Callback);
	void Private_OnExpanderArrowShiftClicked();
	bool IsItemExpanded();
	int GetIndentLevel();
	int DoesItemHaveChildren();
};


// Class CommonUI.CommonObjectListItem
// 0x0000 (0x0028 - 0x0028)
class UCommonObjectListItem : public UCommonListItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonObjectListItem");
		return ptr;
	}


	void SetData(class UObject* InData, class UCommonListView* OwningList);
	void Reset();
	class UObject* GetData();
};


// Class CommonUI.CommonTextStyle
// 0x00A8 (0x00D0 - 0x0028)
class UCommonTextStyle : public UObject
{
public:
	struct FSlateFontInfo                              Font;                                                     // 0x0028(0x0068) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FLinearColor                                Color;                                                    // 0x0090(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bUsesDropShadow;                                          // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	struct FVector2D                                   ShadowOffset;                                             // 0x00A4(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                ShadowColor;                                              // 0x00AC(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x00BC(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	float                                              LineHeightPercentage;                                     // 0x00CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonTextStyle");
		return ptr;
	}


	void GetShadowOffset(struct FVector2D* OutShadowOffset);
	void GetShadowColor(struct FLinearColor* OutColor);
	void GetMargin(struct FMargin* OutMargin);
	float GetLineHeightPercentage();
	void GetFont(struct FSlateFontInfo* OutFont);
	void GetColor(struct FLinearColor* OutColor);
};


// Class CommonUI.CommonTextScrollStyle
// 0x0018 (0x0040 - 0x0028)
class UCommonTextScrollStyle : public UObject
{
public:
	float                                              Speed;                                                    // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartDelay;                                               // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndDelay;                                                 // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FadeInDelay;                                              // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FadeOutDelay;                                             // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonTextScrollStyle");
		return ptr;
	}

};


// Class CommonUI.CommonUIContext
// 0x00B8 (0x00E0 - 0x0028)
class UCommonUIContext : public UBlueprintContextBase
{
public:
	struct FScriptMulticastDelegate                    OnInputMethodChanged;                                     // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0038(0x0078) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInputSuspensionChanged;                                 // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET
	class UCommonInputManager*                         CommonInputManager;                                       // 0x00D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bIsUsingGamepad;                                          // 0x00D8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bIsUsingTouch;                                            // 0x00D9(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	ECommonInputType                                   GamepadInputType;                                         // 0x00DA(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x00DB(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonUIContext");
		return ptr;
	}


	void SetGamepadInputType(ECommonInputType InGamepadInputType);
	bool IsUsingTouch();
	bool IsUsingPointerInput();
	bool IsUsingGamepad();
	void InputSuspensionChanged__DelegateSignature(bool bInputSuspended);
	void InputMethodChangedDelegate__DelegateSignature(bool bUsingGamepad);
	class UCommonInputManager* GetInputManager();
	struct FSlateBrush GetInputActionButtonIcon(const struct FDataTableRowHandle& InputActionRowHandle, ECommonInputType InputType);
	ECommonInputType GetCurrentInputType();
};


// Class CommonUI.CommonUILibrary
// 0x0000 (0x0028 - 0x0028)
class UCommonUILibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonUILibrary");
		return ptr;
	}


	class UWidget* STATIC_FindParentWidgetOfType(class UWidget* StartingWidget, class UClass* Type);
};


// Class CommonUI.CommonUISettings
// 0x0068 (0x0090 - 0x0028)
class UCommonUISettings : public UObject
{
public:
	struct FStringClassReference                       DefaultTextStyle_StringRef;                               // 0x0028(0x0010) (CPF_Edit, CPF_Config)
	class UClass*                                      DefaultTextStyle;                                         // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FStringClassReference                       DefaultButtonStyle_StringRef;                             // 0x0040(0x0010) (CPF_Edit, CPF_Config)
	class UClass*                                      DefaultButtonStyle;                                       // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FStringClassReference                       DefaultBorderStyle_StringRef;                             // 0x0058(0x0010) (CPF_Edit, CPF_Config)
	class UClass*                                      DefaultBorderStyle;                                       // 0x0068(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FCommonInputKeyDisplayConfiguration> InputKeyToPlatformSpecificDisplayDataMap;                 // 0x0070(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FDataTableRowHandle                         DefaultClickAction;                                       // 0x0080(0x0010) (CPF_Edit, CPF_Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonUISettings");
		return ptr;
	}

};


// Class CommonUI.CommonRotator
// 0x0090 (0x0930 - 0x08A0)
class UCommonRotator : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x08A0(0x0040) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnRotated;                                                // 0x08E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UCommonBorder*                               MainBorder;                                               // 0x08F0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonButton*                               ButtonLeft;                                               // 0x08F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonButton*                               ButtonRight;                                              // 0x0900(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonTextBlock*                            MyText;                                                   // 0x0908(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0910(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonRotator");
		return ptr;
	}


	void ShiftTextRight(class UCommonButton* Button);
	void ShiftTextLeft(class UCommonButton* Button);
	void SetSelectedItem(int InValue);
	void PopulateTextLabels(TArray<struct FText> Labels);
	struct FText GetSelectedText();
};


// Class CommonUI.CommonInputReflector
// 0x0028 (0x0260 - 0x0238)
class UCommonInputReflector : public UCommonUserWidget
{
public:
	class UClass*                                      ButtonType;                                               // 0x0238(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UCommonButton*>                       ActiveButtons;                                            // 0x0240(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	TArray<class UCommonButton*>                       InactiveButtons;                                          // 0x0250(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonInputReflector");
		return ptr;
	}


	void OnButtonAdded(class UCommonButton* AddedButton, const struct FCommonInputActionHandlerData& Data);
	void ClearButtons();
};


// Class CommonUI.CommonWidgetSwitcher
// 0x0050 (0x0198 - 0x0148)
class UCommonWidgetSwitcher : public UWidgetSwitcher
{
public:
	struct FScriptMulticastDelegate                    OnActiveWidgetDeactivated;                                // 0x0148(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActiveWidgetChanged;                                    // 0x0158(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	ECommonSwitcherTransition                          TransitionType;                                           // 0x0168(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	ETransitionCurve                                   TransitionCurveType;                                      // 0x0169(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x016A(0x0002) MISSED OFFSET
	float                                              TransitionDuration;                                       // 0x016C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x22];                                      // 0x0170(0x0022) MISSED OFFSET
	bool                                               bWidgetActivationEnabled;                                 // 0x0192(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bOutroPanelBelow;                                         // 0x0193(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0194(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonWidgetSwitcher");
		return ptr;
	}


	void SetActiveWidgetIndex_Advanced(int Index, bool AttemptActivationChange);
	void SetActiveWidget_Advanced(class UWidget* Widget, bool AttemptActivationChange);
	bool HasWidgets();
	void HandleActiveWidgetDeactivated(class UCommonActivatablePanel* DeactivatedPanel);
	void DeactivateWidget();
	void ActivateWidget();
	void ActivatePreviousWidget(bool bCanWrap);
	void ActivateNextWidget(bool bCanWrap);
};


// Class CommonUI.CommonWidgetCarousel
// 0x08E0 (0x0A10 - 0x0130)
class UCommonWidgetCarousel : public UPanelWidget
{
public:
	int                                                ActiveWidgetIndex;                                        // 0x0130(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCurrentPageIndexChanged;                                // 0x0138(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FWidgetCarouselNavigationBarStyle           NavigationStyle;                                          // 0x0148(0x0890)
	unsigned char                                      UnknownData01[0x38];                                      // 0x09D8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonWidgetCarousel");
		return ptr;
	}


	void SetActiveWidgetIndex(int Index);
	void SetActiveWidget(class UWidget* Widget);
	void PreviousPage();
	void NextPage();
	class UWidget* GetWidgetAtIndex(int Index);
	int GetActiveWidgetIndex();
	void EndAutoScrolling();
	void BeginAutoScrolling(float ScrollInterval);
};


// Class CommonUI.CommonWidgetStack
// 0x0000 (0x0198 - 0x0198)
class UCommonWidgetStack : public UCommonWidgetSwitcher
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonWidgetStack");
		return ptr;
	}


	void PushWidget(class UWidget* InWidget);
	class UWidget* PopWigdet();
	void DeactivateWidget();
	void ActivateWidget();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
