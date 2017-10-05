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

// BlueprintGeneratedClass TVPostProcessBP.TVPostProcessBP_C
// 0x017A (0x0502 - 0x0388)
class ATVPostProcessBP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UPostProcessComponent*                       FullScreenTVPP_StoreFF;                                   // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPostProcessComponent*                       FullScreenTVPP_OnlyMaterialModified;                      // 0x03A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPostProcessComponent*                       FullScreenTVPP;                                           // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrontEndCameraSwitchFade_DistortTheSceneTexture_FrontEnd02_A319E55147356F64E8D7AE9C824CC6C2;// 0x03B0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrontEndCameraSwitchFade_DistortTheSceneTexture_FrontEnd_A319E55147356F64E8D7AE9C824CC6C2;// 0x03B4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrontEndCameraSwitchFade_PostProcessVisibility_A319E55147356F64E8D7AE9C824CC6C2;// 0x03B8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FrontEndCameraSwitchFade__Direction_A319E55147356F64E8D7AE9C824CC6C2;// 0x03BC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FrontEndCameraSwitchFade;                                 // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Jitter_Timeline_use_solid_color_3FCD803A4A5E86474EA128B9EDBED56E;// 0x03C8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Jitter_Timeline_LerpImageAndScreen_3FCD803A4A5E86474EA128B9EDBED56E;// 0x03CC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Jitter_Timeline_Noise_Distortion_Amount_3FCD803A4A5E86474EA128B9EDBED56E;// 0x03D0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Jitter_Timeline_Screen_Modulation_3FCD803A4A5E86474EA128B9EDBED56E;// 0x03D4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Jitter_Timeline__Direction_3FCD803A4A5E86474EA128B9EDBED56E;// 0x03D8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Jitter_Timeline;                                          // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Camera_StartTheMonitor_Text_Timeline_SolidBackgroundModulation_8B52FB0849C47C5870E31DBE0A87A563;// 0x03E8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Camera_StartTheMonitor_Text_Timeline_Additive_screen_modulation_8B52FB0849C47C5870E31DBE0A87A563;// 0x03EC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Camera_StartTheMonitor_Text_Timeline_ReplacementAlpha_8B52FB0849C47C5870E31DBE0A87A563;// 0x03F0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Camera_StartTheMonitor_Text_Timeline_Vpos_8B52FB0849C47C5870E31DBE0A87A563;// 0x03F4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Camera_StartTheMonitor_Text_Timeline_Hpos_8B52FB0849C47C5870E31DBE0A87A563;// 0x03F8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Camera_StartTheMonitor_Text_Timeline_Noise_Distortion_Amount_8B52FB0849C47C5870E31DBE0A87A563;// 0x03FC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Camera_StartTheMonitor_Text_Timeline_Screen_Bend_Amount_8B52FB0849C47C5870E31DBE0A87A563;// 0x0400(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Camera_StartTheMonitor_Text_Timeline_Screen_Modulation_8B52FB0849C47C5870E31DBE0A87A563;// 0x0404(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Camera_StartTheMonitor_Text_Timeline__Direction_8B52FB0849C47C5870E31DBE0A87A563;// 0x0408(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0409(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Camera_StartTheMonitor_Text_Timeline;                     // 0x0410(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FadeOut_blendweight_D40D454F4B32910AAC407D9AB580EA07;     // 0x0418(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FadeOut_Fading_D40D454F4B32910AAC407D9AB580EA07;          // 0x041C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FadeOut_Effect_translucency_D40D454F4B32910AAC407D9AB580EA07;// 0x0420(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FadeOut_Kill_effect_amount_D40D454F4B32910AAC407D9AB580EA07;// 0x0424(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeOut__Direction_D40D454F4B32910AAC407D9AB580EA07;      // 0x0428(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0429(0x0007) MISSED OFFSET
	class UTimelineComponent*                          FadeOut;                                                  // 0x0430(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Switch_between_cameras_use_solid_color_E4FB35CD487A51ED1632BFAD49D21E03;// 0x0438(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Switch_between_cameras_LerpImageAndScreen_E4FB35CD487A51ED1632BFAD49D21E03;// 0x043C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Switch_between_cameras_Noise_Distortion_Amount_E4FB35CD487A51ED1632BFAD49D21E03;// 0x0440(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Switch_between_cameras_Screen_Modulation_E4FB35CD487A51ED1632BFAD49D21E03;// 0x0444(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Switch_between_cameras__Direction_E4FB35CD487A51ED1632BFAD49D21E03;// 0x0448(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0449(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Switch_between_cameras;                                   // 0x0450(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Switch_to_static_use_solid_color_010BC5074AA9D38B1E815EB7DA97273B;// 0x0458(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Switch_to_static_ShowScreenStatic_010BC5074AA9D38B1E815EB7DA97273B;// 0x045C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Switch_to_static_Noise_Distortion_Amount_010BC5074AA9D38B1E815EB7DA97273B;// 0x0460(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Switch_to_static_Screen_Modulation_010BC5074AA9D38B1E815EB7DA97273B;// 0x0464(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Switch_to_static__Direction_010BC5074AA9D38B1E815EB7DA97273B;// 0x0468(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Switch_to_static;                                         // 0x0470(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Switch_to_live_use_solid_color_DFB267304061CE3644C3E1B38972E94E;// 0x0478(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Switch_to_live_LerpImageAndScreen_DFB267304061CE3644C3E1B38972E94E;// 0x047C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Switch_to_live_Noise_Distortion_Amount_DFB267304061CE3644C3E1B38972E94E;// 0x0480(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Switch_to_live_Screen_Modulation_DFB267304061CE3644C3E1B38972E94E;// 0x0484(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Switch_to_live__Direction_DFB267304061CE3644C3E1B38972E94E;// 0x0488(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0489(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Switch_to_live;                                           // 0x0490(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Show_the_troll_HideTroll_060EDD8E4EDBC900E7D2F29D7A26DBF0;// 0x0498(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Show_the_troll_use_solid_color_060EDD8E4EDBC900E7D2F29D7A26DBF0;// 0x049C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Show_the_troll_Noise_Distortion_Amount_060EDD8E4EDBC900E7D2F29D7A26DBF0;// 0x04A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Show_the_troll__Direction_060EDD8E4EDBC900E7D2F29D7A26DBF0;// 0x04A4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x04A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Show_the_troll;                                           // 0x04A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartScreen_Replacement_randomization_676222D64F5268BA3215E5B98CEFBE8A;// 0x04B0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartScreen_ReplacementAlpha_676222D64F5268BA3215E5B98CEFBE8A;// 0x04B4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartScreen_Vpos_676222D64F5268BA3215E5B98CEFBE8A;        // 0x04B8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartScreen_Hpos_676222D64F5268BA3215E5B98CEFBE8A;        // 0x04BC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartScreen_Noise_Distortion_Amount_676222D64F5268BA3215E5B98CEFBE8A;// 0x04C0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartScreen_Screen_Bend_Amount_676222D64F5268BA3215E5B98CEFBE8A;// 0x04C4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartScreen_Screen_Modulation_676222D64F5268BA3215E5B98CEFBE8A;// 0x04C8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    StartScreen__Direction_676222D64F5268BA3215E5B98CEFBE8A;  // 0x04CC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x04CD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          StartScreen;                                              // 0x04D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               GrabNewColorBool;                                         // 0x04D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               increase_distortion_;                                     // 0x04D9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x04DA(0x0002) MISSED OFFSET
	float                                              AdditionalDistortionAmount;                               // 0x04DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               Show_troll;                                               // 0x04E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x04E1(0x0003) MISSED OFFSET
	int                                                Troll_counter;                                            // 0x04E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               NewVar;                                                   // 0x04E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               Camera_hasnt_switched_to_live_yet;                        // 0x04E9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x04EA(0x0002) MISSED OFFSET
	float                                              FluctuatingDisplaySceneValue;                             // 0x04EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Ideal_Display_scene_min_value;                            // 0x04F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Ideal_display_scene_max_value;                            // 0x04F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               SkipDos;                                                  // 0x04F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               DisableOnStartup;                                         // 0x04F9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               FrontEndCameraSwitch_InProgress;                          // 0x04FA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData12[0x1];                                       // 0x04FB(0x0001) MISSED OFFSET
	float                                              PreviousSceneModulation;                                  // 0x04FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               FFInProgress;                                             // 0x0500(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               RestartFrontEndCameraSwitch_;                             // 0x0501(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TVPostProcessBP.TVPostProcessBP_C");
		return ptr;
	}


	void RandomizeTheColor(float Use_Bluescreen, float Probablility_modulator, float Use_Flat_Blue, float MaxColorPerChannelValue, bool Control_replacement_alpha);
	void UserConstructionScript();
	void Show_the_troll__FinishedFunc();
	void Show_the_troll__UpdateFunc();
	void Switch_between_cameras__FinishedFunc();
	void Switch_between_cameras__UpdateFunc();
	void Switch_between_cameras__Switch_Camera_Position__EventFunc();
	void Switch_to_live__FinishedFunc();
	void Switch_to_live__UpdateFunc();
	void FadeOut__FinishedFunc();
	void FadeOut__UpdateFunc();
	void Switch_to_static__FinishedFunc();
	void Switch_to_static__UpdateFunc();
	void Camera_StartTheMonitor_Text_Timeline__FinishedFunc();
	void Camera_StartTheMonitor_Text_Timeline__UpdateFunc();
	void Jitter_Timeline__FinishedFunc();
	void Jitter_Timeline__UpdateFunc();
	void Jitter_Timeline__Switch_Camera_Position__EventFunc();
	void FrontEndCameraSwitchFade__FinishedFunc();
	void FrontEndCameraSwitchFade__UpdateFunc();
	void StartScreen__FinishedFunc();
	void StartScreen__UpdateFunc();
	void Camera_TriggerTheTroll();
	void Camera_SwitchBetweenLocations();
	void Camera_TransitionToLiveStatic();
	void Camera_TurnOffThePostProcess();
	void Camera_TransitionToLiveVideo();
	void Camera_DebugEvents();
	void Camera_StartTheMonitor_Text();
	void Camera_DosTextFinished();
	void Camera_ReturningPlayerInitializeWithLiveVideo();
	void FrontEndCameraSwitch();
	void Camera_LoadAndWait();
	void Camera_Sequence_Start_StaticWhoomp();
	void WriteOutLoading();
	void SequenceFinished(const struct FString& SequenceName);
	void Camera_InitializePost();
	void Camera_DisableEffects();
	void ReceiveTick(float* DeltaSeconds);
	void FastForwardPostProcess();
	void JitterTheScreen();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TVPostProcessBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
