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

// BlueprintGeneratedClass GAB_GenericDeath.GAB_GenericDeath_C
// 0x0190 (0x0BD0 - 0x0A40)
class UGAB_GenericDeath_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UAnimMontage*                                DeathMontage;                                             // 0x0A48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       DeathMontageSectionName;                                  // 0x0A50(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     DeathHitDirection;                                        // 0x0A58(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A64(0x0004) MISSED OFFSET
	struct FHitResult                                  DeathHitResult;                                           // 0x0A68(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // 0x0AF0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       SpawnDroneTags;                                           // 0x0B10(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UAnimMontage*                                Front;                                                    // 0x0B30(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                Left;                                                     // 0x0B38(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                Right;                                                    // 0x0B40(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                Back;                                                     // 0x0B48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                Head_Front;                                               // 0x0B50(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                Head_Left;                                                // 0x0B58(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                Head_Right;                                               // 0x0B60(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                Head_Back;                                                // 0x0B68(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                FrontSectionNameCount;                                    // 0x0B70(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LeftSectionNameCount;                                     // 0x0B74(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RightSectionNameCount;                                    // 0x0B78(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BackSectionNameCount;                                     // 0x0B7C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Head_FrontSectionNameCount;                               // 0x0B80(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Head_LeftSectionNameCount;                                // 0x0B84(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Head_RightSectionNameCount;                               // 0x0B88(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Head_BackSectionNameCount;                                // 0x0B8C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       FrontMontageSectionPrefix;                                // 0x0B90(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BackMontageSectionPrefix;                                 // 0x0B98(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       LeftMontageSectionPrefix;                                 // 0x0BA0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       RightMontageSectionPrefix;                                // 0x0BA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       HeadFrontMontageSectionPrefix;                            // 0x0BB0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       HeadBackMontageSectionPrefix;                             // 0x0BB8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       HeadLeftMontageSectionPrefix;                             // 0x0BC0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       HeadRightMontageSectionPrefix;                            // 0x0BC8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_GenericDeath.GAB_GenericDeath_C");
		return ptr;
	}


	void GetRandomSectionName(int MaxNumberOfSections, const struct FName& OriginalSectionName, struct FName* SectionName);
	void InitializeDeathHitDirection(const struct FGameplayEventData& EventHitData);
	void OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4();
	void OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4();
	void OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4();
	void OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4();
	void K2_OnEndAbility();
	void PickDeathMontageSection();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GAB_GenericDeath(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
