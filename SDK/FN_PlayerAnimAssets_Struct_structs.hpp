#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct PlayerAnimAssets_Struct.PlayerAnimAssets_Struct
// 0x0098
struct FPlayerAnimAssets_Struct
{
	unsigned char                                      ShouldAimOffsetsApplytoFullBody_31_5AE0E4754B3138F966FD11A295F7B78E : 1;// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UAnimSequence*                               TargetingPose_4_D2562A4A44A308F2ADE73F8A183BA29E;         // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAimOffsetBlendSpace*                        TargetingAimOffset_13_5040B0EC478A3717BCE10AB68ADAC339;   // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequence*                               Non_targetingPose_6_F51CE1094083841D799E088BFC14FC75;     // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAimOffsetBlendSpace*                        Non_targetingAimOffset_15_574096D842944F1FB55D99B96B4BABD5;// 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequence*                               RelaxedPose_8_4D1AB4BB4BD7EEC55A9019862A77E479;           // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequence*                               RelaxedPoseLevel2_10_F4785EB04522228F0B3B3596696BCDD1;    // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAimOffsetBlendSpace*                        RelaxedAimOffset_17_2966F03A4139AE7E3398C49A6FF4FBDC;     // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             JogAdditiveBlendspace_32_217FB7514CFC140374DEC382F65BF6D9;// 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             JogAdditiveBlendspaceRelaxed_26_8D02629A4399716009FAC4AAE76D46F8;// 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             JogAdditiveBlendspaceRelaxedLevel2_28_1EF70865423A10F9F28994BA129B363C;// 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequence*                               SprintAnimation_35_A3064CF24154B3DF2B20038B32241FD3;      // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequence*                               CrouchTargetingPose_41_1FFA1A6545F84EA0891EE18C82F8A76C;  // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequence*                               CrouchNon_targetingPose_43_D5E9B5694C7265D957BD7D980E6B3A4E;// 0x0068(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequence*                               CrouchRelaxedPose_46_1A119835439853E924A649AB27CA09E5;    // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             CrouchWalkAdditiveBlendspace_56_4FE3510D468664AA3406269481D4CF53;// 0x0078(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             CrouchJogAdditiveBlendspace_51_41E5549843DED39FC44214A095BDF5B0;// 0x0080(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             CrouchJogAdditiveBlendspaceRelaxed_53_8D84728C44041928BFA384B783F1F5AF;// 0x0088(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequence*                               CrouchSprintAnimation_48_15FC9EEA46F9EDFF96BABF8B183E8A77;// 0x0090(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
