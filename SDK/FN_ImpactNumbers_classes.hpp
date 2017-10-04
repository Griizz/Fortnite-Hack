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

// BlueprintGeneratedClass ImpactNumbers.ImpactNumbers_C
// 0x0080 (0x05E0 - 0x0560)
class AImpactNumbers_C : public AFortDamageNumbersActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0568(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Spacing_percentage_for_1s;                                // 0x0570(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FontYSize_1;                                              // 0x0574(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FontXSize_1;                                              // 0x0578(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FontSizeScaleMaxPerc;                                     // 0x057C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                Standard_Hit_Color;                                       // 0x0580(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                Critical_Wall_Hit_Color;                                  // 0x0590(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                Player_Damage_Color;                                      // 0x05A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Number_Spacing_Multiplier;                                // 0x05B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Number_of_number_rotations;                               // 0x05B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Critical_Hit_Multiplier;                                  // 0x05B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Distance_from_Camera_Before_Doubling_Size;                // 0x05BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                Critical_Enemy_Hit_Color;                                 // 0x05C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FVector>                             Number_offset_per;                                        // 0x05D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ImpactNumbers.ImpactNumbers_C");
		return ptr;
	}


	void Set_Material_Pararmeters(const struct FTransform& CameraTransform, const struct FVector& NumberLocation, struct FFortDamageNumberInfo* NewDamageHitInfoStruct);
	void init_a_new_number_set(struct FFortDamageNumberInfo* NewDamageHitInfoStruct, struct FTransform* OutCameraTransform, struct FVector* OutNumberLocation);
	void UserConstructionScript();
	void OnNewDamageNumber(struct FFortDamageNumberInfo* NewDamageNumberInfo);
	void ExecuteUbergraph_ImpactNumbers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
