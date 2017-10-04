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

// BlueprintGeneratedClass PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C
// 0x00F8 (0x0480 - 0x0388)
class APartyCharacterPlacementHelper_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UWidgetComponent*                            LobbyPlayerAddPlayer;                                     // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidgetComponent*                            LobbyPlayerPadTop;                                        // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidgetComponent*                            LobbyPlayerPadGadgets;                                    // 0x03A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPointLightComponent*                        UnderlightBluePoint02;                                    // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPointLightComponent*                        UnderlightBluePoint01;                                    // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpotLightComponent*                         UnderlightBlue02;                                         // 0x03B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpotLightComponent*                         UnderlightBlue01;                                         // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpotLightComponent*                         RimSpotLight;                                             // 0x03C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpotLightComponent*                         TopSpotLight;                                             // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             LightsParent;                                             // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    PS_NoPlayer_Sparkle;                                      // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    PS_NoPlayer_Swirl02;                                      // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    PS_NoPlayer_Swirl01;                                      // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        SM_Lobby_Character_Pad_Light_Ring;                        // 0x03F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        SM_Lobby_Character_Pad;                                   // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        CharacterPlacement;                                       // 0x0408(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0410(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PlayerID;                                                 // 0x0418(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      PreviewMesh : 1;                                          // 0x041C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x041D(0x0003) MISSED OFFSET
	class UStaticMesh*                                 Mesh;                                                     // 0x0420(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsPlayerSelected : 1;                                    // 0x0428(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      PlayerOnPad : 1;                                          // 0x0429(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x042A(0x0006) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MID_Pad;                                                  // 0x0430(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      DebugFakePlayer : 1;                                      // 0x0438(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0439(0x0003) MISSED OFFSET
	int                                                DebugFakePlayerID_;                                       // 0x043C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    NewEventDispatcher_1;                                     // 0x0440(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	unsigned char                                      PlayerBeingRemoved : 1;                                   // 0x0450(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0451(0x0007) MISSED OFFSET
	class UOverlay*                                    OverlayEmptySpot;                                         // 0x0458(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UOverlay*                                    OverlayInputAction;                                       // 0x0460(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ULobbyPlayerPadTop_C*                        Top;                                                      // 0x0468(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ULobbyPlayerPadGadgets_C*                    Gadgets;                                                  // 0x0470(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ULobbyPlayerAddPlayer_C*                     PlayerAdd;                                                // 0x0478(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C");
		return ptr;
	}


	void OnPartyDataChanged(struct FFortTeamMemberInfo* MemberInfo);
	void CompletedQuestPrerequisites(bool* bCompleted);
	void IsInLobby(bool* IsInLobby);
	void PlayLobbyAnimation(int PartyMemberIndex);
	void OnLobbyDisconnected();
	void RefreshWidgets();
	void InitializeWidgets();
	void OnLobbyPlayerUnhovered(int PlayerIndex);
	void OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo);
	void OnTeamMemberRemoved(int TeamMemberRemovedInt);
	void OnTeamMemberAdded(const struct FFortTeamMemberInfo& TeamMemberInfo);
	void OnFrontEndCameraChanged();
	void OnLobbyStarted();
	void InitializePadUI();
	void Initialize();
	void InitializeContextEvents();
	void OnLobbyPlayerUnselected(int PlayerIndex);
	void OnLobbyPlayerSelected(int PlayerIndex);
	void OnLobbyPlayerHovered(int PlayerIndex);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void HandleClientEvent_StoreTabClosed(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_StoreTabSelected(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void ExecuteUbergraph_PartyCharacterPlacementHelper(int EntryPoint);
	void NewEventDispatcher_0__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
