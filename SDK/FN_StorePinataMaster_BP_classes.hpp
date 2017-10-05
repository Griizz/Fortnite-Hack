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

// BlueprintGeneratedClass StorePinataMaster_BP.StorePinataMaster_BP_C
// 0x0841 (0x0BC9 - 0x0388)
class AStorePinataMaster_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        SM_SledgeHammer_UC;                                       // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UArrowComponent*                             Arrow3;                                                   // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDirectionalLightComponent*                  MobileDirectionalLight;                                   // 0x03A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             MobileLightsParent;                                       // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        MeshScreenshotRopeEraser;                                 // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        PhysicsBroomCube;                                         // 0x03B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDirectionalLightComponent*                  DirectionalLight_LightShafts;                             // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    PSC_PinataFallingDebris;                                  // 0x03C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    PSC_PinataExplode;                                        // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    PSC_PinataHit;                                            // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             FXRoot;                                                   // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpotLightComponent*                         SpotLightRim02_A;                                         // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpotLightComponent*                         SpotLightRim01_A;                                         // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UArrowComponent*                             Arrow2;                                                   // 0x03F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UArrowComponent*                             Arrow1;                                                   // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDirectionalLightComponent*                  DirectionalLight_A;                                       // 0x0408(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x0410(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpotLightComponent*                         SpotLightRim_B;                                           // 0x0418(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDirectionalLightComponent*                  DirectionalLight_B;                                       // 0x0420(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpotLightComponent*                         SpotLightMain_B;                                          // 0x0428(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USkyLightComponent*                          SkyLightStore;                                            // 0x0430(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             LightsRoot;                                               // 0x0438(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        MeshScreenshotBG;                                         // 0x0440(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        MeleeWeaponDummyAttackFinish;                             // 0x0448(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAudioComponent*                             Llama_Voice;                                              // 0x0450(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_VindertechCard01;                                       // 0x0458(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UArrowComponent*                             CardRoot;                                                 // 0x0460(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_CandyCorn02;                                            // 0x0468(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_CandyCorn01;                                            // 0x0470(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Mint13;                                           // 0x0478(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Mint12;                                           // 0x0480(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Mint11;                                           // 0x0488(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Mint10;                                           // 0x0490(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Jellybean08;                                      // 0x0498(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Mint09;                                           // 0x04A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Jellybean07;                                      // 0x04A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Jellybean06;                                      // 0x04B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Mint08;                                           // 0x04B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Jellybean05;                                      // 0x04C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Jellybean04;                                      // 0x04C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Mint07;                                           // 0x04D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Jellybean01;                                      // 0x04D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Mint05;                                           // 0x04E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Mint06;                                           // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Jellybean03;                                      // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Jellybean02;                                      // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Mint03;                                           // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Mint01;                                           // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Mint04;                                           // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    P_Broomdust_01;                                           // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      SK_PushBroom;                                             // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             GroundRoot;                                               // 0x0528(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        MeleeWeaponDummyCharge;                                   // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        MeleeWeaponDummyHidden;                                   // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        MeleeWeaponDummy;                                         // 0x0540(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        WeaponRoot;                                               // 0x0548(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             PinataSceneRoot;                                          // 0x0550(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_Upgrade3_UpgradeWipe_B21C849A48AE2BB921CD949CA9B9A20F; // 0x0558(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_Upgrade3__Direction_B21C849A48AE2BB921CD949CA9B9A20F;  // 0x055C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x055D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_Upgrade3;                                              // 0x0560(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_DropEyeAnim_Blink_4A309648421EBB6E126EF69E3A1C19D6;    // 0x0568(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_DropEyeAnim_LocLerp_4A309648421EBB6E126EF69E3A1C19D6;  // 0x056C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_DropEyeAnim_SizeLerp_4A309648421EBB6E126EF69E3A1C19D6; // 0x0570(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_DropEyeAnim__Direction_4A309648421EBB6E126EF69E3A1C19D6;// 0x0574(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0575(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_DropEyeAnim;                                           // 0x0578(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_PupilContracts_ContractLerpLoc_FE4A75A84413E69729FBCD9FE414408A;// 0x0580(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_PupilContracts_ContractLerpA_FE4A75A84413E69729FBCD9FE414408A;// 0x0584(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_PupilContracts__Direction_FE4A75A84413E69729FBCD9FE414408A;// 0x0588(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0589(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_PupilContracts;                                        // 0x0590(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_SuspiciousEyes_SuspiciousEyeLoc_D8D2FF1F436C6B879D28EFAA86F1BBC2;// 0x0598(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_SuspiciousEyes_SuspiciousEyelids_D8D2FF1F436C6B879D28EFAA86F1BBC2;// 0x059C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_SuspiciousEyes__Direction_D8D2FF1F436C6B879D28EFAA86F1BBC2;// 0x05A0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x05A1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_SuspiciousEyes;                                        // 0x05A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_WeaponCharge_AttackPlayRate_8CB70918473F7BE5EF5A2F827BB25ABF;// 0x05B0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_WeaponCharge_TimeHeld_8CB70918473F7BE5EF5A2F827BB25ABF;// 0x05B4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_WeaponCharge_EyesLerpB_8CB70918473F7BE5EF5A2F827BB25ABF;// 0x05B8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_WeaponCharge_EyesLerpA_8CB70918473F7BE5EF5A2F827BB25ABF;// 0x05BC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_WeaponCharge_WeaponChargeRotateLerp_8CB70918473F7BE5EF5A2F827BB25ABF;// 0x05C0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_WeaponCharge__Direction_8CB70918473F7BE5EF5A2F827BB25ABF;// 0x05C4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x05C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_WeaponCharge;                                          // 0x05C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_PushbroomAnim_LERP_5F6C90144EDBBEAF398302AB845E844F;   // 0x05D0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_PushbroomAnim_ParticleScaleOut_5F6C90144EDBBEAF398302AB845E844F;// 0x05D4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_PushbroomAnim_NewTrack_2_5F6C90144EDBBEAF398302AB845E844F;// 0x05D8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_PushbroomAnim__Direction_5F6C90144EDBBEAF398302AB845E844F;// 0x05DC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x05DD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_PushbroomAnim;                                         // 0x05E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_ChangeLighting_DirGround_A488F4E44EB8E7A0F9886E8F7CA1BDC4;// 0x05E8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_ChangeLighting_rimGround_A488F4E44EB8E7A0F9886E8F7CA1BDC4;// 0x05EC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_ChangeLighting_Ground_A488F4E44EB8E7A0F9886E8F7CA1BDC4;// 0x05F0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_ChangeLighting_Main_A488F4E44EB8E7A0F9886E8F7CA1BDC4;  // 0x05F4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_ChangeLighting__Direction_A488F4E44EB8E7A0F9886E8F7CA1BDC4;// 0x05F8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x05F9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_ChangeLighting;                                        // 0x0600(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Timeline_0_DirGround_7BEC5298479CA735A53B1CB25EC926EF;    // 0x0608(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Timeline_0_rimGround_7BEC5298479CA735A53B1CB25EC926EF;    // 0x060C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Timeline_0_MainGround_7BEC5298479CA735A53B1CB25EC926EF;   // 0x0610(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Timeline_0_MainLight_7BEC5298479CA735A53B1CB25EC926EF;    // 0x0614(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_7BEC5298479CA735A53B1CB25EC926EF;   // 0x0618(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0619(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0620(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CardCough_NewTrack_0_DAEEB3A641472A9A78E0BB93BA6CE0E0; // 0x0628(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_CardCough__Direction_DAEEB3A641472A9A78E0BB93BA6CE0E0; // 0x062C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x062D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_CardCough;                                             // 0x0630(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_EyesFollowMouseAgain_NewTrack_3_1BE27C46490CB7E2A3B07CA8042DE768;// 0x0638(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_EyesFollowMouseAgain__Direction_1BE27C46490CB7E2A3B07CA8042DE768;// 0x063C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x063D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_EyesFollowMouseAgain;                                  // 0x0640(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_Upgrade2_UpgradeWipe_3313188D45B89EDEAD5CC8BD30ABBAC3; // 0x0648(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_Upgrade2__Direction_3313188D45B89EDEAD5CC8BD30ABBAC3;  // 0x064C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x064D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_Upgrade2;                                              // 0x0650(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_UndarkenBG_NewTrack_0_C60EED984B4A5117E9941E920611D748;// 0x0658(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_UndarkenBG__Direction_C60EED984B4A5117E9941E920611D748;// 0x065C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x065D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_UndarkenBG;                                            // 0x0660(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_RegularEyes_DizzyEyes_2259ACD0444C6333BC4BD3BF1C9EE1E5;// 0x0668(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_RegularEyes_NewTrack_3_2259ACD0444C6333BC4BD3BF1C9EE1E5;// 0x066C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_RegularEyes__Direction_2259ACD0444C6333BC4BD3BF1C9EE1E5;// 0x0670(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0671(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_RegularEyes;                                           // 0x0678(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_DarkenBG_NewTrack_0_C89B3A6D43D94BAC2627F18DC7E2A1D1;  // 0x0680(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_DarkenBG__Direction_C89B3A6D43D94BAC2627F18DC7E2A1D1;  // 0x0684(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0685(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_DarkenBG;                                              // 0x0688(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_Upgrade1_UpgradeWipe_DE6D0868440970D949F11B98CC0FC434; // 0x0690(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_Upgrade1__Direction_DE6D0868440970D949F11B98CC0FC434;  // 0x0694(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0695(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_Upgrade1;                                              // 0x0698(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_Attack_WeaponRotateAttack_9355DE8041B051639599A9A8EA98EA0D;// 0x06A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_Attack__Direction_9355DE8041B051639599A9A8EA98EA0D;    // 0x06A4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x06A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_Attack;                                                // 0x06A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_EquipWeapon_NewTrack_2_443114684EA745E35026E98F24AA5387;// 0x06B0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_EquipWeapon__Direction_443114684EA745E35026E98F24AA5387;// 0x06B4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x06B5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_EquipWeapon;                                           // 0x06B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class USoundBase*>                          SoundWeaponGreetArray;                                    // 0x06C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              Current_Delta;                                            // 0x06D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     WorldLocationForMaterial;                                 // 0x06D4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               PackIsUpgrade1;                                           // 0x06E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               PackIsUpgrade2;                                           // 0x06E1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               PackIsUpgrade0;                                           // 0x06E2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               HasAttacked1X;                                            // 0x06E3(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               HasAttacked2X;                                            // 0x06E4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               HasAttacked3X;                                            // 0x06E5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               AbleToAttack;                                             // 0x06E6(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               CanFastForward;                                           // 0x06E7(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_PPT_Icon;                                             // 0x06E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               DebugUpgradeLevels;                                       // 0x06F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               DebugLevel0_;                                             // 0x06F1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               DebugLevel1_;                                             // 0x06F2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               DebugLevel2_;                                             // 0x06F3(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x06F4(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MID_PPT_Base;                                             // 0x06F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_PPT_Tassles;                                          // 0x0700(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTexture*                                    CardPackIconTexture;                                      // 0x0708(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                CardPackIconColor;                                        // 0x0710(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             FallingDebris_Lvl_0;                                      // 0x0720(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             FallingDebris_Lvl_1;                                      // 0x0728(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             Falling_Debris_Lvl_2;                                     // 0x0730(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             Explode_Lvl_0;                                            // 0x0738(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             Explode_Lvl_1;                                            // 0x0740(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             Explode_Lvl_2;                                            // 0x0748(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             Llama_Hit_Lvl_0;                                          // 0x0750(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             Llama_Hit_Lvl_1;                                          // 0x0758(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                Lvl1_Lightray_Color;                                      // 0x0760(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                Lvl2_Lightray_Color;                                      // 0x0770(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstance*                           Material_PPT_Confetti;                                    // 0x0780(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_PinataEyeLeft;                                        // 0x0788(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_PinataEyeRight;                                       // 0x0790(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                RandomWeaponNumber;                                       // 0x0798(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x079C(0x0004) MISSED OFFSET
	class USoundBase*                                  Sound_Llama_Appear;                                       // 0x07A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_CurrentWeaponReady;                                 // 0x07A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_CurrentWeaponSwing;                                 // 0x07B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_CurrentWeaponImpact;                                // 0x07B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_ChargeAttackLoop;                                   // 0x07C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_Upgrade_Silver;                                     // 0x07C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_Upgrade_Gold;                                       // 0x07D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_Open_Normal;                                        // 0x07D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_Open_Silver;                                        // 0x07E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_Open_Gold;                                          // 0x07E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_Greet_Current;                               // 0x07F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_OpenNormal_Current;                          // 0x07F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_UpgradeSilver_Current;                       // 0x0800(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_UpgradeGold_Current;                         // 0x0808(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_OpenSilver_Current;                          // 0x0810(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_OpenGold_Current;                            // 0x0818(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_Hover_Current;                               // 0x0820(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_Tickle_Current;                              // 0x0828(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class USoundBase*>                          Dialog_Llama_Depressed_Greet_Array;                       // 0x0830(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class USoundBase*                                  Sound_SweepUp;                                            // 0x0840(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class USoundBase*>                          Dialog_Llama_Mob_Greet_Array;                             // 0x0848(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class USoundBase*>                          Dialog_Llama_Greet_Array_Current;                         // 0x0858(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class USoundBase*                                  Sound_PinataSwing;                                        // 0x0868(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VO_Upgrade_Delay;                                         // 0x0870(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x0874(0x0004) MISSED OFFSET
	class AFort_Entry_Music_Controller_BP_C*           Fort_Entry_Music_Controller;                              // 0x0878(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_PreHit_Current;                              // 0x0880(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_Music_Drop;                                         // 0x0888(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_Music_Open;                                         // 0x0890(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  GreetGenericSound;                                        // 0x0898(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  GreetSledgehammerSound;                                   // 0x08A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  GreetBaseballBat_Sound;                                   // 0x08A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  GreetAxeSound;                                            // 0x08B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  HockeyStickGreet_Sound;                                   // 0x08B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Garden_Rake_Greet_Sound;                                  // 0x08C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Greet_Garden_Hoe_Sound;                                   // 0x08C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Greet_Scythe_Sound;                                       // 0x08D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  GreetPickaxe_Sound;                                       // 0x08D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Greet_Pitchfork_Sound;                                    // 0x08E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Greet_Sword_Sound;                                        // 0x08E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TimeHeldDown;                                             // 0x08F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x08F4(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      WeaponObject;                                             // 0x08F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FVector>                             WeaponListOffsetLoc;                                      // 0x0900(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class AStoreWeaponMaster_BP_C*                     SpawnedWeaponBlueprint;                                   // 0x0910(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AStoreCamera_Blueprint_C*                    StoreCameraInLevel;                                       // 0x0918(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      WeaponClass;                                              // 0x0920(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               AttackLeftMousePressed;                                   // 0x0928(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData21[0x7];                                       // 0x0929(0x0007) MISSED OFFSET
	class AStoreCardReveal_BP_C*                       StoreCardRevealInLevel;                                   // 0x0930(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                AmountOfWeapons;                                          // 0x0938(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x093C(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MID_PPT_Foil;                                             // 0x0940(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               DebugPinataScreenshot;                                    // 0x0948(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x0949(0x0003) MISSED OFFSET
	float                                              DirLightA_BaseSetting;                                    // 0x094C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RimLight01_A_BaseSetting;                                 // 0x0950(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpotLightMain_B_BaseSetting;                              // 0x0954(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RimLight_B_BaseSetting;                                   // 0x0958(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DirLight_B_BaseSetting;                                   // 0x095C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                DebugUseThisWeaponNumber;                                 // 0x0960(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               DebugUseSpecificWeapon;                                   // 0x0964(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x0965(0x0003) MISSED OFFSET
	class UFortPackPersonality*                        CurrentPackPersonality;                                   // 0x0968(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_PinataSmashed;                                      // 0x0970(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_PinataBonked;                                       // 0x0978(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               LetTickUpdate;                                            // 0x0980(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData25[0xF];                                       // 0x0981(0x000F) MISSED OFFSET
	struct FTransform                                  MeleeWeaponPreAttackTrans;                                // 0x0990(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AttackPlayRate;                                           // 0x09C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData26[0xC];                                       // 0x09C4(0x000C) MISSED OFFSET
	struct FTransform                                  MeleeWeaponHiddenTrans;                                   // 0x09D0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  MeleeWeaponAttackFinishTrans;                             // 0x0A00(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  MeleeWeaponChargeTrans;                                   // 0x0A30(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  MeleeWeaponPreChargeTrans;                                // 0x0A60(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  MeleeWeaponEquipDefaultTrans;                             // 0x0A90(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  MeleeWeaponEquipAdjustedTrans;                            // 0x0AC0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      PinataSKMeshComponent;                                    // 0x0AF0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimSequence*                               AnimDrop;                                                 // 0x0AF8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimSequence*                               AnimHit;                                                  // 0x0B00(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimSequence*                               AnimHitUpgradeA;                                          // 0x0B08(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimSequence*                               AnimHitUpgradeB;                                          // 0x0B10(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimSequence*                               AnimDestroy;                                              // 0x0B18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimSequence*                               AnimDestroyUpgradeA;                                      // 0x0B20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimSequence*                               AnimDestroyUpgradeB;                                      // 0x0B28(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       RightEyeBoneName;                                         // 0x0B30(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       LeftEyeBoneName;                                          // 0x0B38(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       BodyRootBoneName;                                         // 0x0B40(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               DebugCardRevealInLevel;                                   // 0x0B48(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x0B49(0x0003) MISSED OFFSET
	float                                              RimLight02_A_BaseSetting;                                 // 0x0B4C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               LetTickUpdateEyes;                                        // 0x0B50(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               FirstCard;                                                // 0x0B51(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               DebugLevel3_;                                             // 0x0B52(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               PackIsUpgrade3;                                           // 0x0B53(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               HasAttacked4X;                                            // 0x0B54(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x0B55(0x0003) MISSED OFFSET
	class UAnimSequence*                               AnimHitUpgradeC;                                          // 0x0B58(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimSequence*                               AnimDestroyUpgradeC;                                      // 0x0B60(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                Lvl3_Lightray_Color;                                      // 0x0B68(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             Explode_Lvl_3;                                            // 0x0B78(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             Falling_Debris_Lvl_3;                                     // 0x0B80(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             Llama_Hit_Lvl_2;                                          // 0x0B88(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class UStaticMeshComponent*>                CandyPhysicsComponentsArray;                              // 0x0B90(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                TotalCandySpawned;                                        // 0x0BA0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                TotalCandyAllowable;                                      // 0x0BA4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               StopCandySpawn;                                           // 0x0BA8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x0BA9(0x0003) MISSED OFFSET
	int                                                CandySpawnedTillSlowDown;                                 // 0x0BAC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               SlowCandySpawn;                                           // 0x0BB0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               ShowOpenAllPacks;                                         // 0x0BB1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               OpenAllPacks;                                             // 0x0BB2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               OpenAllPacksFirstCycle;                                   // 0x0BB3(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IsES2Limited;                                             // 0x0BB4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               DebugPinataMobile;                                        // 0x0BB5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               DebugWeapons;                                             // 0x0BB6(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData30[0x1];                                       // 0x0BB7(0x0001) MISSED OFFSET
	class UClass*                                      NewVar_1;                                                 // 0x0BB8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInterface*                          RegularMaterial_Confetti;                                 // 0x0BC0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               UseSpecificWeapon;                                        // 0x0BC8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StorePinataMaster_BP.StorePinataMaster_BP_C");
		return ptr;
	}


	void PackPersonalitySounds();
	void DefinePinataAssets();
	void UserConstructionScript();
	void TL_WeaponCharge__FinishedFunc();
	void TL_WeaponCharge__UpdateFunc();
	void TL_Upgrade2__FinishedFunc();
	void TL_Upgrade2__UpdateFunc();
	void TL_Upgrade2__TasslesDropOff2__EventFunc();
	void TL_DarkenBG__FinishedFunc();
	void TL_DarkenBG__UpdateFunc();
	void TL_UndarkenBG__FinishedFunc();
	void TL_UndarkenBG__UpdateFunc();
	void TL_RegularEyes__FinishedFunc();
	void TL_RegularEyes__UpdateFunc();
	void TL_EyesFollowMouseAgain__FinishedFunc();
	void TL_EyesFollowMouseAgain__UpdateFunc();
	void TL_ChangeLighting__FinishedFunc();
	void TL_ChangeLighting__UpdateFunc();
	void TL_CardCough__FinishedFunc();
	void TL_CardCough__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void TL_Upgrade1__FinishedFunc();
	void TL_Upgrade1__UpdateFunc();
	void TL_Upgrade1__TasslesDropOffEvent__EventFunc();
	void TL_PushbroomAnim__FinishedFunc();
	void TL_PushbroomAnim__UpdateFunc();
	void TL_PushbroomAnim__Trigger_Particles__EventFunc();
	void TL_Attack__FinishedFunc();
	void TL_Attack__UpdateFunc();
	void TL_Attack__EventTrackHit__EventFunc();
	void TL_EquipWeapon__FinishedFunc();
	void TL_EquipWeapon__UpdateFunc();
	void TL_SuspiciousEyes__FinishedFunc();
	void TL_SuspiciousEyes__UpdateFunc();
	void TL_PupilContracts__FinishedFunc();
	void TL_PupilContracts__UpdateFunc();
	void TL_DropEyeAnim__FinishedFunc();
	void TL_DropEyeAnim__UpdateFunc();
	void TL_Upgrade3__FinishedFunc();
	void TL_Upgrade3__UpdateFunc();
	void TL_Upgrade3__TasslesDropOff2__EventFunc();
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpTchEvt_Released(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location);
	void InpTchEvt_Pressed(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location);
	void OnLoaded_34AE763040BC26E1AD2CE4842CE48F91(class UClass* Loaded);
	void ReadyToAttack();
	void OpenPinata();
	void CardPackStoreStart();
	void ReceiveBeginPlay();
	void PackDestroyStart();
	void CardEnterStart();
	void StartPackOpen();
	void CameraTransitionComplete();
	void CameraResetComplete();
	void OnStoreStateChanged(EFortStoreState NewStoreState);
	void InitiatePinata();
	void ExitCardPackStore();
	void ReceiveTick(float* DeltaSeconds);
	void Stop_DropEyeAnim();
	void Stop_SwingingEyeAnim();
	void SpawnCandy();
	void ExecuteUbergraph_StorePinataMaster_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
