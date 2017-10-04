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

// BlueprintGeneratedClass Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C
// 0x0068 (0x03F0 - 0x0388)
class AFort_Entry_Music_Controller_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UAudioComponent*                             MenuMusic_B;                                              // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAudioComponent*                             MenuMusic_A;                                              // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAudioComponent*                             Hexmap_Music;                                             // 0x03A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAudioComponent*                             Homebase_Music;                                           // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAudioComponent*                             OverView_Music;                                           // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAudioComponent*                             LobbyMusic;                                               // 0x03B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAudioComponent*                             LlamaVO;                                                  // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAudioComponent*                             LoginMusic;                                               // 0x03C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FadeOutTime;                                              // 0x03D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	class USoundBase*                                  Sound_Current_Music_A;                                    // 0x03E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_Current_Music_B;                                    // 0x03E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void Music_Login_FadeIn();
	void Music_Store_FadeIn();
	void Music_Lobby_FadeIn();
	void Music_WorldOverview_FadeIn();
	void Music_HomeBase_FadeIn();
	void Music_Hexmap_FadeIn();
	void Music_Heroes_FadeIn();
	void Music_Vault_FadeIn();
	void Music_Store_CardIntro_Fadein();
	void Store_Transition_To_Purchase();
	void Store_Llama_HangingOut();
	void Store_CardpackSummaryOpenAndLoop();
	void Store_HitLlamaAndLoop();
	void Store_Intro_Loop();
	void VBucks_Menu_Enter();
	void ReceiveBeginPlay();
	void On_Sub_Game_Changed();
	void Music_Lobby_Athena_FadeIn();
	void ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
