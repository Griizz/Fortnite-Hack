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

// WidgetBlueprintGeneratedClass JoinServer.JoinServer_C
// 0x007C (0x046C - 0x03F0)
class UJoinServer_C : public UFortUIStateWidget_NUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UBuildWatermark_C*                           BuildWatermark;                                           // 0x03F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UCommonWidgetStack*                          MainContentStack;                                         // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      ManualStart : 1;                                          // 0x0408(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0409(0x0007) MISSED OFFSET
	TArray<struct FConfirmationDialogAction>           TutorialCanceledConfirmActions;                           // 0x0410(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FName                                       NoneAction;                                               // 0x0420(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  SoundPromptTutorial;                                      // 0x0428(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                MatchmakingAttempts;                                      // 0x0430(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      TutorialMatchmakingStarted : 1;                           // 0x0434(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0435(0x0003) MISSED OFFSET
	class UProgressWidget_C*                           ProgressWidget;                                           // 0x0438(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTutorialWindow_C*                           TutorialWindow;                                           // 0x0440(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      AbandonSession : 1;                                       // 0x0448(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0449(0x0007) MISSED OFFSET
	class UObject*                                     MenuWidget;                                               // 0x0450(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                MaxMatchmakingAttempts;                                   // 0x0458(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	class URejoinWindow_C*                             RejoinWindow;                                             // 0x0460(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                RejoinAttemptCount;                                       // 0x0468(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass JoinServer.JoinServer_C");
		return ptr;
	}


	void HandleLobbyConnectingToGame();
	void ShowAbandoningProgress();
	void ShowRetryRejoinWindow(const struct FText& Failure, bool AllowRetry);
	void ShowRetryRejoinSession();
	void ShowRejoiningProgress();
	void HideRejoinWindow(bool AbandonSession);
	void ShowRejoinWindow();
	class UWidget* HandleGetMainMenuContent();
	void ShowTutorialCanceled();
	void GetMatchmakingError(struct FText* ErrorText);
	void HandleLobbyTimeUpdated(int TimeRemaining);
	void SkipTutorial();
	void StartTutorialMatchmakingFlow();
	void HandleEnterState();
	void HandleLobbyDisconnected();
	void HandleMatchmakingStateChange(TEnumAsByte<EMatchmakingState> OldState, TEnumAsByte<EMatchmakingState> NewState);
	void HandleMatchmakingComplete();
	void Initialize();
	void DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF(const struct FName& ResultName);
	void OnFailure_B419884742513722D11D8AB4D90DE5E2();
	void OnSuccess_B419884742513722D11D8AB4D90DE5E2();
	void OnFailure_C91A02504569664A4B1E259E5F57A79D();
	void OnSuccess_C91A02504569664A4B1E259E5F57A79D();
	void RequestTutorialRetry();
	void ShowSkipTutorial();
	void HandleClientEvent_RejoinStart(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleRequestRejoinRetry();
	void HandleRequestAbandon();
	void HandleClientEvent_OnboardingStartMatchmaking(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void Construct();
	void OnEnterState();
	void ExecuteUbergraph_JoinServer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
