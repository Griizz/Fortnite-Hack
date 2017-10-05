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

// AnimBlueprintGeneratedClass VinderTech_GliderChute_AnimBP.VinderTech_GliderChute_AnimBP_C
// 0x067C (0x09D4 - 0x0358)
class UVinderTech_GliderChute_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_EBDA468D4AE5D250B2B622A7005664B6;      // 0x0360(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_928EDF8F48A9073F91162CAB58A14585;      // 0x03A8(0x0060)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0408(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_953326594E4978729F3C6F9E722F8648;// 0x0410(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_326A11214546037B4E81ADB615DF6BEE;// 0x0490(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_713B895F48F2801365CB0CA497F43775;// 0x0510(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6AAED3AF491F53722B9FE2B1DDF77122;// 0x0590(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A98464EC49847793447025870BB3567D;// 0x0610(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2439A6B841320C06C4EE708432E4C44C;// 0x0680(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2133C7F047F09F18A630588EBA7E4D65;// 0x06C8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_ECEA977D46C391A751D73BB4275664EB;// 0x0738(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7E66AFF7488A41D3156C3C9367D0163D;// 0x0780(0x0120)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FD572ED741F2DDF85C3E83969BA5DAA1;// 0x08A0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B9156DAE4FE14BBC3C91B2BFEE37264F;// 0x08E8(0x00D8)
	bool                                               IsParachuteOpen;                                          // 0x09C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x09C1(0x0003) MISSED OFFSET
	float                                              DeltaSeconds;                                             // 0x09C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LeftRight;                                                // 0x09C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              YawDeltaSmoothed;                                         // 0x09CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AimPitch;                                                 // 0x09D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass VinderTech_GliderChute_AnimBP.VinderTech_GliderChute_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_GliderChute_AnimBP_AnimGraphNode_TransitionResult_713B895F48F2801365CB0CA497F43775();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_GliderChute_AnimBP_AnimGraphNode_TransitionResult_6AAED3AF491F53722B9FE2B1DDF77122();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_GliderChute_AnimBP_AnimGraphNode_TransitionResult_326A11214546037B4E81ADB615DF6BEE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_7E66AFF7488A41D3156C3C9367D0163D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_GliderChute_AnimBP_AnimGraphNode_TransitionResult_953326594E4978729F3C6F9E722F8648();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_VinderTech_GliderChute_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
