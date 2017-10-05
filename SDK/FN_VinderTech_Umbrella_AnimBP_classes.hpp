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

// AnimBlueprintGeneratedClass VinderTech_Umbrella_AnimBP.VinderTech_Umbrella_AnimBP_C
// 0x05C0 (0x0918 - 0x0358)
class UVinderTech_Umbrella_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_47C162A34E75B5D855F1039C8811E06C;      // 0x0360(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_55B0C7EB4409F55E838D3CA7B7457964;      // 0x03A8(0x0060)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0408(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9592CEBA49F2B067A15FFFBB6AB5105E;// 0x0410(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F81EA3C344FA6DFC7A5EA1B792B511A5;// 0x0490(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3753F99B490EFDA0C68FF0B8819E664F;// 0x0510(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1A7F7CBD4C68973F2BBDFCBF93433107;// 0x0590(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8F6CE6514B2B120BE5A47CA93BF6B64F;// 0x0610(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0FA712374C2DD4AE7BAB068F07EF1E2A;// 0x0680(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FB121E7E466BDC2AEC2334AABA7B7973;// 0x06C8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_12B937664A6236CA6C6F30B310D7D872;// 0x0738(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CAD550DB43A0B090364489A1ED4F53F6;// 0x0780(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_90756A2C41FA0E67C991218B04CCA9C1;// 0x07F0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_AD38D8EC41D7A5D47CC14C9AC67E6D6E;// 0x0838(0x00D8)
	bool                                               IsParachuteOpen;                                          // 0x0910(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0911(0x0003) MISSED OFFSET
	float                                              DeltaSeconds;                                             // 0x0914(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass VinderTech_Umbrella_AnimBP.VinderTech_Umbrella_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_AnimGraphNode_TransitionResult_3753F99B490EFDA0C68FF0B8819E664F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_AnimGraphNode_TransitionResult_F81EA3C344FA6DFC7A5EA1B792B511A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_AnimGraphNode_TransitionResult_1A7F7CBD4C68973F2BBDFCBF93433107();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_AnimGraphNode_TransitionResult_9592CEBA49F2B067A15FFFBB6AB5105E();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_VinderTech_Umbrella_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
