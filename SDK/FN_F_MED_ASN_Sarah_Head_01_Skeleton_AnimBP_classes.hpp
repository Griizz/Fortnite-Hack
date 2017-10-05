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

// AnimBlueprintGeneratedClass F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP.F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C
// 0x1858 (0x1C68 - 0x0410)
class UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B2D640E04368BB3AFF2ABD8482F20712;      // 0x0418(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_5C7DD26F49546D1EBB268C82B88D92A7;// 0x0460(0x0098)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_AF97E05446D515DB720FD6AEFA524081;// 0x04F8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A9B81D6D419409628B8B1A9CE51487EA;      // 0x0540(0x0060)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_76F67A4C40E3FA184AC7A8A51B83C299;// 0x05A0(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E8C6639148055D384AD2469FE4F8B9C3;// 0x0650(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BB7F577143F6B8AE880680A99DE774D4;// 0x0700(0x00D0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_2617FA7A478129EDBC41F0B60D02F14F;// 0x07D0(0x0098)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_ED136C744F041E5EAE8AC190BBEBDC0B;// 0x0868(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_56A3F42B45DF5217E7FED9B251917621;// 0x08B0(0x0268)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B829034A42830E2555D025B70457A40B;// 0x0B18(0x0268)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4F124726418173899D090583DF3F7378;// 0x0D80(0x0268)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3EEAEF3D48EDB7FDEBD4709BAE5F6676;// 0x0FE8(0x0268)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_DBDE10B04D48F481FB253A8BA44ACC97;// 0x1250(0x0268)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_310B32CE4F1CA1D8E32A4AB96A9F13FC;// 0x14B8(0x0268)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6589B9834A2A8E87F6F00AB2E506957F;// 0x1720(0x0268)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_FAE2CFD3472EB9947B79D1B37B594444;// 0x1988(0x0268)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DA85215A4F9C03E4623785A8AA328C9B;// 0x1BF0(0x0070)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x1C60(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP.F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_4F124726418173899D090583DF3F7378();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_B829034A42830E2555D025B70457A40B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_56A3F42B45DF5217E7FED9B251917621();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_2617FA7A478129EDBC41F0B60D02F14F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_BB7F577143F6B8AE880680A99DE774D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_DBDE10B04D48F481FB253A8BA44ACC97();
	void Playface();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_5C7DD26F49546D1EBB268C82B88D92A7();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
