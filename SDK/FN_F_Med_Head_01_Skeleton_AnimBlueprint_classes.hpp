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

// AnimBlueprintGeneratedClass F_Med_Head_01_Skeleton_AnimBlueprint.F_Med_Head_01_Skeleton_AnimBlueprint_C
// 0x0EB8 (0x12C8 - 0x0410)
class UF_Med_Head_01_Skeleton_AnimBlueprint_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_8B223DDB4D6C5B4B573337BD037B3EA5;// 0x0418(0x0098)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_DAAA55974A974C7391E2738414737C1A;// 0x04B0(0x0268)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_ADAB37DE4D0626D74E5B289531C43C2B;// 0x0718(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0636CDEC4754ABD475C03684CC485005;// 0x0760(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_87895A27417AC5E9596A6AAFC208A8AB;// 0x07A8(0x0268)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F322569444B8EAC4D76EDFB3DD1FFFA4;// 0x0A10(0x0268)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5FC365C8473A405E8D365596E3963183;// 0x0C78(0x0268)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EE6745244161B5BBC7CDC6A630489F45;      // 0x0EE0(0x0060)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_FB2B157E47A93660872C13BDA80F5382;// 0x0F40(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_7D36480A45BCB919AC54C88B614CD912;// 0x0FF0(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_34C24EC14C087D4CDC73CDB02E3DA5AF;// 0x10A0(0x00D0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_7578003E4B46F65767573F97536A9D09;// 0x1170(0x0098)
	struct FAnimNode_Root                              AnimGraphNode_Root_78C289E7415EB6B448CEBA94209DD0E0;      // 0x1208(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2B2874774D09EC4D49B608AE20C3B1E8;// 0x1250(0x0070)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x12C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass F_Med_Head_01_Skeleton_AnimBlueprint.F_Med_Head_01_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_Med_Head_01_Skeleton_AnimBlueprint_AnimGraphNode_BlendListByBool_34C24EC14C087D4CDC73CDB02E3DA5AF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_Med_Head_01_Skeleton_AnimBlueprint_AnimGraphNode_CopyPoseFromMesh_7578003E4B46F65767573F97536A9D09();
	void Playface();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_Med_Head_01_Skeleton_AnimBlueprint_AnimGraphNode_CopyPoseFromMesh_8B223DDB4D6C5B4B573337BD037B3EA5();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_Med_Head_01_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
