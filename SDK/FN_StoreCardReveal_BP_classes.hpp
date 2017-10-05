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

// BlueprintGeneratedClass StoreCardReveal_BP.StoreCardReveal_BP_C
// 0x06AE (0x0A36 - 0x0388)
class AStoreCardReveal_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        CC_DummyLocInstalled_Bounce;                              // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        CardDummyLocShowFlipped_CCBounce;                         // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        CC_DummyPre_Install;                                      // 0x03A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidgetComponent*                            CCB_Count;                                                // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidgetComponent*                            CCA_Count;                                                // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidgetComponent*                            CCB_Name;                                                 // 0x03B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidgetComponent*                            CCA_Name;                                                 // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        CardDummyLocShowFlipped;                                  // 0x03C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPostProcessComponent*                       PostProcessCardRevealB;                                   // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPostProcessComponent*                       PostProcessCardRevealA;                                   // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAudioComponent*                             ChoiceCardDestroy_Cue;                                    // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    P_FireAshes_B;                                            // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    P_FireAshes_A;                                            // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_CC_QuestionMark;                                        // 0x03F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        CC_QuestionMarkDummySmall;                                // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        CC_QuestionMarkDummyLarge;                                // 0x0408(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        CCA_DummyLocDeath;                                        // 0x0410(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        CCB_DummyLocDeath;                                        // 0x0418(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_DataCardStatic;                                         // 0x0420(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_ChoiceCardB;                                            // 0x0428(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_ChoiceCardA;                                            // 0x0430(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        CC_CardDummyLocShow;                                      // 0x0438(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_CC_QuestionMarkInside;                                  // 0x0440(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        CCB_DummyLocShowRot;                                      // 0x0448(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        CCA_DummyLocShowRot;                                      // 0x0450(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        CCA_DummyLocShow;                                         // 0x0458(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        CCB_DummyLocShow;                                         // 0x0460(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        CC_DummyLocInstalled;                                     // 0x0468(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        CCA_DummyLocHide;                                         // 0x0470(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpotLightComponent*                         ChoiceCardSpotLight;                                      // 0x0478(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_VindertechCardGlowBasic;                                // 0x0480(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_ChoiceCard_B_BGFX;                                      // 0x0488(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_ChoiceCard_A_BGFX;                                      // 0x0490(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UArrowComponent*                             CardRootORIGLOC;                                          // 0x0498(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_SceneDarken;                                            // 0x04A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPostProcessComponent*                       ChoiceCardPostProcess;                                    // 0x04A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAudioComponent*                             FastForward_AudioComponent;                               // 0x04B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        CardDummyLocExit;                                         // 0x04B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        CardDummyLocHide;                                         // 0x04C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        CardDummyLocShow;                                         // 0x04C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidgetComponent*                            CardFrontWidget;                                          // 0x04D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_VindertechCardGlow;                                     // 0x04D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    P_CardReveal_Rays_01;                                     // 0x04E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_VindertechCard_Rays_01;                                 // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_VindertechCard01;                                       // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UArrowComponent*                             CardRoot;                                                 // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_GroundPlaceholder;                                      // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             GroundRoot;                                               // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             PinataSceneRoot;                                          // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CC_DataDiskBurns_EmissiveFade01_C4F384FF467C667ECC255EB28CDEAD75;// 0x0518(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CC_DataDiskBurns_RarityAndScreenFade_C4F384FF467C667ECC255EB28CDEAD75;// 0x051C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CC_DataDiskBurns_DataDisk_DeathDirectOpacity_C4F384FF467C667ECC255EB28CDEAD75;// 0x0520(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CC_DataDiskBurns_DataDisk_DeathMaster_C4F384FF467C667ECC255EB28CDEAD75;// 0x0524(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_CC_DataDiskBurns__Direction_C4F384FF467C667ECC255EB28CDEAD75;// 0x0528(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0529(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_CC_DataDiskBurns;                                      // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CC_QuestionMarkAnim_FadeOtherEmissive_56814F494B67D1AD46CB869B2A81B132;// 0x0538(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CC_QuestionMarkAnim_FadeScreenEmissiveMaster_56814F494B67D1AD46CB869B2A81B132;// 0x053C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CC_QuestionMarkAnim_FlashFadeUpgradeColors_56814F494B67D1AD46CB869B2A81B132;// 0x0540(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CC_QuestionMarkAnim_SubtleyMoveOutMainCard_56814F494B67D1AD46CB869B2A81B132;// 0x0544(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CC_QuestionMarkAnim_FadeInSceneDarkenMaterial_56814F494B67D1AD46CB869B2A81B132;// 0x0548(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CC_QuestionMarkAnim_Q_Opacity_Fade_56814F494B67D1AD46CB869B2A81B132;// 0x054C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CC_QuestionMarkAnim_FadeQInSlowly_56814F494B67D1AD46CB869B2A81B132;// 0x0550(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_CC_QuestionMarkAnim__Direction_56814F494B67D1AD46CB869B2A81B132;// 0x0554(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0555(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_CC_QuestionMarkAnim;                                   // 0x0558(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_FadeInRegularEmissive_9A213FD2494AEED292654EA4FDDB8006;// 0x0560(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_FadeInIconScreen_9A213FD2494AEED292654EA4FDDB8006;// 0x0564(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_InstallCCBounceMain_9A213FD2494AEED292654EA4FDDB8006;// 0x0568(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_Install2CC_LerpLoc_9A213FD2494AEED292654EA4FDDB8006;// 0x056C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_InstallCCLerpRot_9A213FD2494AEED292654EA4FDDB8006;// 0x0570(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_CCDeath_FadeOutSound_9A213FD2494AEED292654EA4FDDB8006;// 0x0574(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_CCDeathMaterial_DeathDirectOpacity_9A213FD2494AEED292654EA4FDDB8006;// 0x0578(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_FadeSceneDarkenBackOut_9A213FD2494AEED292654EA4FDDB8006;// 0x057C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_FadeSpotlight_9A213FD2494AEED292654EA4FDDB8006;// 0x0580(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_MoveParentCardBackToNormalPos_9A213FD2494AEED292654EA4FDDB8006;// 0x0584(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_InstallCCLerpLoc_9A213FD2494AEED292654EA4FDDB8006;// 0x0588(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_CCDeath_Loc_9A213FD2494AEED292654EA4FDDB8006;// 0x058C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_CCDeathMaterial_DeathMaster_9A213FD2494AEED292654EA4FDDB8006;// 0x0590(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_FadeQ_9A213FD2494AEED292654EA4FDDB8006;// 0x0594(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_FadeFlare_9A213FD2494AEED292654EA4FDDB8006;// 0x0598(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_FlourishFlare_9A213FD2494AEED292654EA4FDDB8006;// 0x059C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_SelectedChoiceCardAnims__Direction_9A213FD2494AEED292654EA4FDDB8006;// 0x05A0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x05A1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_SelectedChoiceCardAnims;                               // 0x05A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CCB_Reveal_RevealRotation_E1D990B64CDA6EF98CA6C6B5EC7169B0;// 0x05B0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CCB_Reveal_AddLocation_E1D990B64CDA6EF98CA6C6B5EC7169B0;// 0x05B4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CCB_Reveal_Rotation_E1D990B64CDA6EF98CA6C6B5EC7169B0;  // 0x05B8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CCB_Reveal_LerpWorldLoc_E1D990B64CDA6EF98CA6C6B5EC7169B0;// 0x05BC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_CCB_Reveal__Direction_E1D990B64CDA6EF98CA6C6B5EC7169B0;// 0x05C0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x05C1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_CCB_Reveal;                                            // 0x05C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CCA_Reveal_DelayAmount_60E254DA405DE2144D4B80B13BE5E72D;// 0x05D0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CCA_Reveal_RevealRotation_60E254DA405DE2144D4B80B13BE5E72D;// 0x05D4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CCA_Reveal_AddLocation_60E254DA405DE2144D4B80B13BE5E72D;// 0x05D8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CCA_Reveal_Rotation_60E254DA405DE2144D4B80B13BE5E72D;  // 0x05DC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CCA_Reveal_LerpWorldLoc_60E254DA405DE2144D4B80B13BE5E72D;// 0x05E0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_CCA_Reveal__Direction_60E254DA405DE2144D4B80B13BE5E72D;// 0x05E4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x05E5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_CCA_Reveal;                                            // 0x05E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_Reveal_CC_Choices_FadeInChoiceCardPost_76B596B14DFB3698760215B8A10E5A7F;// 0x05F0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_Reveal_CC_Choices_CCSpotFadeIn_76B596B14DFB3698760215B8A10E5A7F;// 0x05F4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_Reveal_CC_Choices__Direction_76B596B14DFB3698760215B8A10E5A7F;// 0x05F8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x05F9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_Reveal_CC_Choices;                                     // 0x0600(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CardMoveToScreen_PPBlend01_3798F2BC49D3B3B20C2AAC9734564E4B;// 0x0608(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CardMoveToScreen_Rotation_3798F2BC49D3B3B20C2AAC9734564E4B;// 0x060C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CardMoveToScreen_LerpWorldLoc_3798F2BC49D3B3B20C2AAC9734564E4B;// 0x0610(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_CardMoveToScreen__Direction_3798F2BC49D3B3B20C2AAC9734564E4B;// 0x0614(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0615(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_CardMoveToScreen;                                      // 0x0618(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CardUpgradeFast_PushGlow_949EB8324B003C2943D50781B70022F4;// 0x0620(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CardUpgradeFast_RaysFader_949EB8324B003C2943D50781B70022F4;// 0x0624(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CardUpgradeFast_CardUpgradeLerpAmtA_949EB8324B003C2943D50781B70022F4;// 0x0628(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_CardUpgradeFast__Direction_949EB8324B003C2943D50781B70022F4;// 0x062C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x062D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_CardUpgradeFast;                                       // 0x0630(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_ClearPostProcessDOFSettings_NewTrack_0_E9654CE64B23411962976AA13C3F7D8B;// 0x0638(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_ClearPostProcessDOFSettings__Direction_E9654CE64B23411962976AA13C3F7D8B;// 0x063C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x063D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_ClearPostProcessDOFSettings;                           // 0x0640(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CCB_AmbientAnim_Noise3_E46E9F8349C15D0AD549D7BDBA85CD06;// 0x0648(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CCB_AmbientAnim_Noise2_E46E9F8349C15D0AD549D7BDBA85CD06;// 0x064C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CCB_AmbientAnim_Noise1_E46E9F8349C15D0AD549D7BDBA85CD06;// 0x0650(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_CCB_AmbientAnim__Direction_E46E9F8349C15D0AD549D7BDBA85CD06;// 0x0654(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0655(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_CCB_AmbientAnim;                                       // 0x0658(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CCA_AmbientAnim_Noise3_D0F0F85F4E679E6EFE20D8B0C33E4C8F;// 0x0660(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CCA_AmbientAnim_Noise2_D0F0F85F4E679E6EFE20D8B0C33E4C8F;// 0x0664(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CCA_AmbientAnim_Noise1_D0F0F85F4E679E6EFE20D8B0C33E4C8F;// 0x0668(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_CCA_AmbientAnim__Direction_D0F0F85F4E679E6EFE20D8B0C33E4C8F;// 0x066C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x066D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_CCA_AmbientAnim;                                       // 0x0670(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CC_FlareFX_NewTrack_2_FB393D144ADF530367DF8CA361F07C5B;// 0x0678(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_CC_FlareFX__Direction_FB393D144ADF530367DF8CA361F07C5B;// 0x067C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x067D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_CC_FlareFX;                                            // 0x0680(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_MouseoverCC_B_End_CCBMOEFres_37ACF54F4F98A4D3BC4A9693803AC75D;// 0x0688(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_MouseoverCC_B_End_NewTrack_0_37ACF54F4F98A4D3BC4A9693803AC75D;// 0x068C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_MouseoverCC_B_End__Direction_37ACF54F4F98A4D3BC4A9693803AC75D;// 0x0690(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0691(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_MouseoverCC_B_End;                                     // 0x0698(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_MouseoverCC_A_End_CCaMOEFres_DBB7CB8C4047097B3D9B15ACE43DDA8D;// 0x06A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_MouseoverCC_A_End_NewTrack_0_DBB7CB8C4047097B3D9B15ACE43DDA8D;// 0x06A4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_MouseoverCC_A_End__Direction_DBB7CB8C4047097B3D9B15ACE43DDA8D;// 0x06A8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x06A9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_MouseoverCC_A_End;                                     // 0x06B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_MouseoverCC_B_CCBMOFres_679F468743296034690174823B6DA69D;// 0x06B8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_MouseoverCC_B_NewTrack_0_679F468743296034690174823B6DA69D;// 0x06BC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_MouseoverCC_B__Direction_679F468743296034690174823B6DA69D;// 0x06C0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x06C1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_MouseoverCC_B;                                         // 0x06C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_MouseoverCC_A_CCAMOFres_4E2719034FA877BA8DD27E8A8E9441E2;// 0x06D0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_MouseoverCC_A_CCAMOScale_4E2719034FA877BA8DD27E8A8E9441E2;// 0x06D4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_MouseoverCC_A__Direction_4E2719034FA877BA8DD27E8A8E9441E2;// 0x06D8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x06D9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_MouseoverCC_A;                                         // 0x06E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CardFlipToFront_NewTrack_6_8902A76E45F02B2EAFFF568387C58F2F;// 0x06E8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_CardFlipToFront__Direction_8902A76E45F02B2EAFFF568387C58F2F;// 0x06EC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x06ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_CardFlipToFront;                                       // 0x06F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CardExit_PPtoBGChange_5B7343EC450EC02002347D8C37622915;// 0x06F8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CardExit_BlendToExitLoc_5B7343EC450EC02002347D8C37622915;// 0x06FC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_CardExit__Direction_5B7343EC450EC02002347D8C37622915;  // 0x0700(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x0701(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_CardExit;                                              // 0x0708(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     LiveCardLocBeforeExit;                                    // 0x0710(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    LiveCardRotBeforeExit;                                    // 0x071C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               UserFF_Pressed;                                           // 0x0728(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortRarity                                        CurrentRarity;                                            // 0x0729(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	EFortRarity                                        TargetRarity;                                             // 0x072A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData18[0x5];                                       // 0x072B(0x0005) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MID_CardRarity;                                           // 0x0730(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_CardFoil;                                             // 0x0738(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    CardRaysMID;                                              // 0x0740(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                Card_Rays_Color;                                          // 0x0748(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_CardFlip;                                           // 0x0758(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_Greet_Current;                               // 0x0760(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_OpenNormal_Current;                          // 0x0768(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_UpgradeSilver_Current;                       // 0x0770(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_UpgradeGold_Current;                         // 0x0778(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_OpenSilver_Current;                          // 0x0780(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_OpenGold_Current;                            // 0x0788(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_Hover_Current;                               // 0x0790(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_Tickle_Current;                              // 0x0798(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class USoundBase*>                          Dialog_Llama_Depressed_Greet_Array;                       // 0x07A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class USoundBase*                                  Sound_CardFlyAtPlayer;                                    // 0x07B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_CardPutAway;                                        // 0x07B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_Store_Card_Summary;                                 // 0x07C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_Store_CardUpgrade_Blue;                             // 0x07C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_Store_CardUpgrade_Green;                            // 0x07D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_Store_CardUpgrade_Purple;                           // 0x07D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_Store_CardUpgrade_Gold;                             // 0x07E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_Store_CardUpgrade_Platinum;                         // 0x07E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class USoundBase*>                          Dialog_Llama_Mob_Greet_Array;                             // 0x07F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class USoundBase*>                          Dialog_Llama_Greet_Array_Current;                         // 0x0800(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class USoundBase*                                  Dialog_Llama_PreHit_Current;                              // 0x0810(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_CardGlow;                                             // 0x0818(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FCard                                       CardData;                                                 // 0x0820(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               SpecialCardPause;                                         // 0x0838(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x0839(0x0007) MISSED OFFSET
	class ATVPostProcessBP_C*                          TVPPEffect;                                               // 0x0840(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               FastForwardIsON;                                          // 0x0848(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               EnableUserToFF;                                           // 0x0849(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IsChoicePack_;                                            // 0x084A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData20[0x5];                                       // 0x084B(0x0005) MISSED OFFSET
	TArray<class UFortAccountItemDefinition*>          ChoiceCardsArray;                                         // 0x0850(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UFortAccountItemDefinition*                  ChoiceCard_0;                                             // 0x0860(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UFortAccountItemDefinition*                  ChoiceCard_1;                                             // 0x0868(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               DebugChoicePacks;                                         // 0x0870(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x0871(0x0003) MISSED OFFSET
	int                                                DebugRarityInt;                                           // 0x0874(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               DEBUGConsecutiveUpgrade;                                  // 0x0878(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               RevealChoicePack;                                         // 0x0879(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData22[0x6];                                       // 0x087A(0x0006) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MID_ChoiceASticker;                                       // 0x0880(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_ChoiceBSticker;                                       // 0x0888(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AStoreCamera_Blueprint_C*                    StoreCamera;                                              // 0x0890(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_SceneDarken;                                          // 0x0898(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  ChoiceCardATransform;                                     // 0x08A0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  ChoiceCardBTransform;                                     // 0x08D0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               CC_A_Selected;                                            // 0x0900(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData23[0x7];                                       // 0x0901(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    ChoiceB_BGFX_MID;                                         // 0x0908(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    ChoiceA_BGFX_MID;                                         // 0x0910(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_CardIconScreen;                                       // 0x0918(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_QuestionMark;                                         // 0x0920(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_CardGlowBasic;                                        // 0x0928(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               CC_ReadyForSelection;                                     // 0x0930(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData24[0x7];                                       // 0x0931(0x0007) MISSED OFFSET
	class USoundBase*                                  Sound_HoverSelect;                                        // 0x0938(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_HoverDeselect;                                      // 0x0940(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  NewUpgradeSound;                                          // 0x0948(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_MouseClick;                                         // 0x0950(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_QuestionMarkInside;                                   // 0x0958(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_ChoiceA;                                              // 0x0960(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_ChoiceB;                                              // 0x0968(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               DEBUGComponentVisibility;                                 // 0x0970(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData25[0xF];                                       // 0x0971(0x000F) MISSED OFFSET
	struct FTransform                                  SelectedCCTransform;                                      // 0x0980(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               PreHover_CC_A;                                            // 0x09B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               PreHover_CC_B;                                            // 0x09B1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData26[0xE];                                       // 0x09B2(0x000E) MISSED OFFSET
	struct FTransform                                  Un_SelectedCCTransform;                                   // 0x09C0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_ChoiceCardDestroy;                                  // 0x09F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_DataCardFrontSticker;                                 // 0x09F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_DataCard;                                             // 0x0A00(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_ChoiceCardInsert;                                   // 0x0A08(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               DebugCardRevealInLevel;                                   // 0x0A10(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData27[0x7];                                       // 0x0A11(0x0007) MISSED OFFSET
	class UClass*                                      CardFrontWidgetClass;                                     // 0x0A18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               OpenAllPacks;                                             // 0x0A20(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               SlomoPinata;                                              // 0x0A21(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               RightMousePressed;                                        // 0x0A22(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               RightMouseReleased;                                       // 0x0A23(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               SkipUpgradeAnim;                                          // 0x0A24(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               CardWillUpgrade;                                          // 0x0A25(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               DelayFirstCard;                                           // 0x0A26(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData28[0x1];                                       // 0x0A27(0x0001) MISSED OFFSET
	int                                                ChoiceIndex;                                              // 0x0A28(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               AnotherChoiceAvailable;                                   // 0x0A2C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               ChoiceCardHasBeenSelected;                                // 0x0A2D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IsUsingGamepad;                                           // 0x0A2E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               Gamepad_On_A;                                             // 0x0A2F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               Gamepad_On_B;                                             // 0x0A30(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               A_Hovered;                                                // 0x0A31(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               B_Hovered;                                                // 0x0A32(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               CC_B_Selected;                                            // 0x0A33(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IsES2Limited;                                             // 0x0A34(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               SetCCRarityColorBool;                                     // 0x0A35(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StoreCardReveal_BP.StoreCardReveal_BP_C");
		return ptr;
	}


	void RarityEnumToText(EFortRarity InRarity, struct FText* OutRarity);
	void IsDefender(class UFortAccountItemDefinition* Object, bool* IsDefender, struct FText* Result);
	void SetText_CCB(bool Hide);
	void SetText_CCA(bool Hide);
	void UserConstructionScript();
	void TL_CardExit__FinishedFunc();
	void TL_CardExit__UpdateFunc();
	void TL_CardExit__Proceed__EventFunc();
	void TL_CardFlipToFront__FinishedFunc();
	void TL_CardFlipToFront__UpdateFunc();
	void TL_CardUpgradeFast__FinishedFunc();
	void TL_CardUpgradeFast__UpdateFunc();
	void TL_Reveal_CC_Choices__FinishedFunc();
	void TL_Reveal_CC_Choices__UpdateFunc();
	void TL_ClearPostProcessDOFSettings__FinishedFunc();
	void TL_ClearPostProcessDOFSettings__UpdateFunc();
	void TL_CC_FlareFX__FinishedFunc();
	void TL_CC_FlareFX__UpdateFunc();
	void TL_SelectedChoiceCardAnims__FinishedFunc();
	void TL_SelectedChoiceCardAnims__UpdateFunc();
	void TL_SelectedChoiceCardAnims__SpeedTimeBackUp__EventFunc();
	void TL_SelectedChoiceCardAnims__CameraFOV__EventFunc();
	void TL_SelectedChoiceCardAnims__CC_Phase2_Hide__EventFunc();
	void TL_SelectedChoiceCardAnims__CC_Phase2__EventFunc();
	void TL_MouseoverCC_A__FinishedFunc();
	void TL_MouseoverCC_A__UpdateFunc();
	void TL_MouseoverCC_A_End__FinishedFunc();
	void TL_MouseoverCC_A_End__UpdateFunc();
	void TL_MouseoverCC_B__FinishedFunc();
	void TL_MouseoverCC_B__UpdateFunc();
	void TL_MouseoverCC_B_End__FinishedFunc();
	void TL_MouseoverCC_B_End__UpdateFunc();
	void TL_CCA_Reveal__FinishedFunc();
	void TL_CCA_Reveal__UpdateFunc();
	void TL_CCB_Reveal__FinishedFunc();
	void TL_CCB_Reveal__UpdateFunc();
	void TL_CC_QuestionMarkAnim__FinishedFunc();
	void TL_CC_QuestionMarkAnim__UpdateFunc();
	void TL_CCA_AmbientAnim__FinishedFunc();
	void TL_CCA_AmbientAnim__UpdateFunc();
	void TL_CCB_AmbientAnim__FinishedFunc();
	void TL_CCB_AmbientAnim__UpdateFunc();
	void TL_CC_DataDiskBurns__FinishedFunc();
	void TL_CC_DataDiskBurns__UpdateFunc();
	void TL_CC_DataDiskBurns__ChangeTexture__EventFunc();
	void TL_CardMoveToScreen__FinishedFunc();
	void TL_CardMoveToScreen__UpdateFunc();
	void OnLoaded_EFC62B084995CBCCD64787B5C4EF30E6(class UObject* Loaded);
	void OnLoaded_90006C1C471D136EF3B142B7181AC990(class UObject* Loaded);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void OnLoaded_EFC62B084995CBCCD64787B51198EA0F(class UObject* Loaded);
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void OnLoaded_90006C1C471D136EF3B142B7CD6D1379(class UObject* Loaded);
	void InpTchEvt_Released(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location);
	void InpTchEvt_Pressed(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InitiatePinata();
	void OnStoreStateChanged(EFortStoreState NewStoreState);
	void StartPackOpen();
	void CardEnterStart();
	void PackDestroyStart();
	void CardFlipStart();
	void CardExitStart();
	void TurnOffFastForward();
	void CardBackRevealStart();
	void CardFrontRevealStart();
	void TurnOnFastForward();
	void EnableMouseInputOnActor();
	void ReceiveBeginPlay();
	void CardPackStoreStart();
	void SpecialCardPauseAbort();
	void PresentChoiceStart();
	void ChoiceMadeStart();
	void BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void SkipBackRevealForChoicePack();
	void ContinueFinalChoiceCardProcess();
	void ConstructCardFront();
	void StopCCA_AmbientAnim();
	void GetReadyToShowCards();
	void Stop_CC_HoverAnims();
	void OnBeginCursorOver_ChoiceCardA(class UPrimitiveComponent* TouchedComponent);
	void OnEndCursorOver_ChoiceCardA(class UPrimitiveComponent* TouchedComponent);
	void HoverStart_CC_A();
	void HoverEnd_CC_A();
	void OnBeginCursorOver_ChoiceCardB(class UPrimitiveComponent* TouchedComponent);
	void OnEndCursorOver_ChoiceCardB(class UPrimitiveComponent* TouchedComponent);
	void HoverStart_CC_B();
	void HoverEnd_CC_B();
	void CheckHoverStatus();
	void RestartCCA_AmbientAnim();
	void StopCCB_AmbientAnim();
	void RestartCCB_AmbientAnim();
	void EnableOpenAllPacks();
	void CardInPlace();
	void CompareRarity();
	void PlayUpgradeAnim();
	void ReadyForCardToCome();
	void InpAxisEvt_MoveRight_Gamepad_K2Node_InputAxisEvent_1(float AxisValue);
	void Handle_Input_Mode_Changed(bool bUsingGamepad);
	void ExitPackStore();
	void BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature(TEnumAsByte<ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature(TEnumAsByte<ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void ResetGamepadInput();
	void OpenGamepadGate();
	void CloseGamepadGate();
	void EndQuestionMarkAnim();
	void SetCCRarityColor();
	void CCRarityColorReady();
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_41(float AxisValue);
	void ExecuteUbergraph_StoreCardReveal_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
