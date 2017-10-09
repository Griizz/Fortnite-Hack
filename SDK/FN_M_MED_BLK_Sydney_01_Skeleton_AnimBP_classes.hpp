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

// AnimBlueprintGeneratedClass M_MED_BLK_Sydney_01_Skeleton_AnimBP.M_MED_BLK_Sydney_01_Skeleton_AnimBP_C
// 0x0488 (0x0898 - 0x0410)
class UM_MED_BLK_Sydney_01_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B67577B1437A5E72A2A96FBF53853F39;      // 0x0418(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_205F747E477B9AB23F0ACEB95679AF9F;// 0x0460(0x0098)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CDA9F3D5454FD4724D3515AD7592E226;      // 0x04F8(0x0060)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8FBD9D21449E3E1C6AB8F894EB679AEE;// 0x0558(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_599E96B04D5802DB750D1A8064FE9257;// 0x0608(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D165706F485A4C579E56468E9B4786F9;// 0x06B8(0x00D0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_FA82137D403C3565CD766E8DEE9CA7BE;// 0x0788(0x0098)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C7E479204816452B491316BEB1224D64;// 0x0820(0x0070)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x0890(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M_MED_BLK_Sydney_01_Skeleton_AnimBP.M_MED_BLK_Sydney_01_Skeleton_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_BLK_Sydney_01_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_D165706F485A4C579E56468E9B4786F9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_BLK_Sydney_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_FA82137D403C3565CD766E8DEE9CA7BE();
	void Playface();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_BLK_Sydney_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_205F747E477B9AB23F0ACEB95679AF9F();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_M_MED_BLK_Sydney_01_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
