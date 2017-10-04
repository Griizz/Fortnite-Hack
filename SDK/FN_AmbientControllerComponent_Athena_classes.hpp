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

// BlueprintGeneratedClass AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C
// 0x0078 (0x0168 - 0x00F0)
class UAmbientControllerComponent_Athena_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class USoundBase*                                  Loop_Morning;                                             // 0x00F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Loop_Evening;                                             // 0x0100(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Loop_Indoors;                                             // 0x0108(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Loop_Night;                                               // 0x0110(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Loop_Day;                                                 // 0x0118(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAudioComponent*                             AmbientMixA;                                              // 0x0120(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAudioComponent*                             AmbientMixB;                                              // 0x0128(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bActiveMixIsA : 1;                                        // 0x0130(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	float                                              CheckFrequency;                                           // 0x0134(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsInsidePrevious : 1;                                    // 0x0138(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsInsideCurrent : 1;                                     // 0x0139(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x013A(0x0006) MISSED OFFSET
	class UAudioComponent*                             AmbientMixIndoor;                                         // 0x0140(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // 0x0148(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TargetLPFFreq;                                            // 0x0150(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CurrentLPFFreq;                                           // 0x0154(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              InsideLPFFreq;                                            // 0x0158(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              OutsideLPFFreq;                                           // 0x015C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAudioComponent*                             CurrentOneShot;                                           // 0x0160(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C");
		return ptr;
	}


	void SetTargetLPFFreq(float Target);
	void SetIndoorMixEnabled(bool Enabled);
	bool Trace(const struct FVector& Start, const struct FVector& Direction);
	void Crossfade(class USoundBase* NewSound);
	void RegisterTimeOfDayCallbacks();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void OnCheckIfSurrounded();
	void Evaluate_Inside_State();
	void On_Day_Phase_Change(TEnumAsByte<EFortDayPhase> CurrentDayPhase, TEnumAsByte<EFortDayPhase> PreviousDayPhase, bool bAtCreation);
	void ReceiveTick(float* DeltaSeconds);
	void On_Game_Phase_Change();
	void On_Game_Phase_Step_Change();
	void Set_Storm_Amb_Layer_Enabled(bool Enabled);
	void ExecuteUbergraph_AmbientControllerComponent_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
