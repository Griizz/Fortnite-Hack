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

// BlueprintGeneratedClass HBOnboardingFlow.HBOnboardingFlow_C
// 0x0080 (0x0408 - 0x0388)
class AHBOnboardingFlow_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortQuestManager*                           QuestManager;                                             // 0x0398(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UFortQuestItemDefinition*                    OnboardingQuest;                                          // 0x03A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UFortQuestItemDefinition*                    OnboardingAfterOutpostQuest;                              // 0x03A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FDataTableRowHandle                         CompleteZoneObjective;                                    // 0x03B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         NameHomebaseObjective;                                    // 0x03C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UFortQuestItem*                              OnboardingQuestItem;                                      // 0x03D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FMargin                                     NotificationPadding;                                      // 0x03D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         PlaySatelliteCineObjective;                               // 0x03E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UFortAccountItemDefinition*                  ShowNewsToken;                                            // 0x03F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                ClientQuestLoginRetryCount;                               // 0x0400(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                ClientQuestLoginNumRetries;                               // 0x0404(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HBOnboardingFlow.HBOnboardingFlow_C");
		return ptr;
	}


	void Handle_Client_Quest_Login_Failed();
	void ShowBannerSelect();
	void HandleMcpFailure();
	void UpdateVariableCache(bool* Success);
	void UserConstructionScript();
	void OnAllClientsReady_C2C889344301B8DBF8F046A2A175D133();
	void OnAllClientsReady_856A325D44ECC73B857CE5B35313D7CD();
	void OnFailure_0A5ABC9C483947108FD9FB9980E7C62F();
	void OnIgnored_0A5ABC9C483947108FD9FB9980E7C62F();
	void OnSuccess_0A5ABC9C483947108FD9FB9980E7C62F();
	void OnFailure_F17CF9054AFDDDAF314AC4911BC9818F();
	void OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F();
	void OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F();
	void OnStateEntered_CC1C02F844ADF1F9F5546C8115CF00F0();
	void OnStateEntered_6973C4804831A19E4BDA22AFFEE0F251();
	void OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6();
	void OnStateEntered_99CD286F4BDD72A81163058464B73990();
	void OnFailure_74930F274B5470B17CF720953FE7E260();
	void OnSuccess_74930F274B5470B17CF720953FE7E260();
	void OnStateEntered_D3C1532F46B8ACB52198EBB597FE9EF0();
	void OnStateEntered_7FBC276641DD576B7417ED97A4734318();
	void OnStateEntered_B1212BA945BD8297BCCDC69BA3015CC2();
	void StartPlaySatelliteCine();
	void StartNameHomebase();
	void HandleClientEvent_HomebasePersonalized(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void StartOnboardingZone();
	void StartFlow();
	void RejoinCheckCompleted(ERejoinStatus RejoinStatus);
	void HandleCheckExistingSession();
	void HandleCheckOnboardingZoneComplete();
	void HandleSwitchToHomeBase();
	void HandlePlaySatelliteCine();
	void HandleNameHomebase();
	void Handle_Client_Quest_Login_Failed_Retry();
	void Handle_Client_Quest_Login_Retries_Exhausted();
	void HandleClientEvent_SubGameSelected(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleSubGameSelection();
	void HandleClientEvent_OnRejoinGameAbandoned(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void ExecuteUbergraph_HBOnboardingFlow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
