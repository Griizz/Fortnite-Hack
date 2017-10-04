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

// BlueprintGeneratedClass Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C
// 0x0028 (0x0420 - 0x03F8)
class AAnnounce_OnboardingSatelliteCine_C : public AFortClientAnnouncement_Cinematic
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMediaSource*                                SatelliteMediaSource;                                     // 0x0408(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      AllowSkipping : 1;                                        // 0x0410(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0411(0x0001) UNKNOWN PROPERTY: EnumProperty Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.StartingState
	unsigned char                                      UnknownData01[0x6];                                       // 0x0412(0x0006) MISSED OFFSET
	class UFortMediaSubtitlesPlayer*                   SatelliteSubtitlesPlayer;                                 // 0x0418(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnStateEntered_9B2A7CB14D8998F7D97BBB902DE431B7();
	void OnStateEntered_9AA291E3426E3967D1365A9851D878CE();
	void OnClientAnnouncementStart();
	void OnClientAnnouncementStop();
	void OnPlayerSkippedCutscene();
	void HandleClientEvent_CinematicFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleAllowSkip();
	void ExecuteUbergraph_Announce_OnboardingSatelliteCine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
