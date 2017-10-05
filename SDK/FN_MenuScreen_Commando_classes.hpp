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

// AnimBlueprintGeneratedClass MenuScreen_Commando.MenuScreen_Commando_C
// 0x0611 (0x09E1 - 0x03D0)
class UMenuScreen_Commando_C : public UFrontendAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F70AA5C441806953E84736BA8BC1318A;      // 0x03D8(0x0048)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_91B5767B40519A79E7AEC38404372807; // 0x0420(0x00C0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_4B2EDC5B4B1A02DB26673C9C5AA47EF2; // 0x04E0(0x00C0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_476FB3144FF01CDECEC25D9FCA0BF170;// 0x05A0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_78BB02D34BB0CD13E52B729CD15EC48B;// 0x05E8(0x0048)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_43CBCFD8445ED0E03161C4B571134CE9; // 0x0630(0x00C0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_3695B48646E0C5839953A39C17D3DEF9; // 0x06F0(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_30CEFFAA4FD7F57FD5A6EDB40D31DE9D;      // 0x07B0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ECCC70F04489C85C49B82FB532A3D3A9;// 0x0810(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_A3E599E943E9B22B3BC78EA28C49C57B;// 0x0880(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CDEB41CC42B9DE30260861A50A7F4D48;// 0x0960(0x0070)
	struct FScriptMulticastDelegate                    MenuScreenDispatcher;                                     // 0x09D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	bool                                               HasBeenSelected;                                          // 0x09E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass MenuScreen_Commando.MenuScreen_Commando_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Commando_AnimGraphNode_BlendListByEnum_A3E599E943E9B22B3BC78EA28C49C57B();
	void AnimNotify_playFacialAnim();
	void UserFocus();
	void AnimNotify_LeftB();
	void ExecuteUbergraph_MenuScreen_Commando(int EntryPoint);
	void MenuScreenDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
