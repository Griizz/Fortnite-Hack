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

// BlueprintGeneratedClass NearestPlayerContext.NearestPlayerContext_C
// 0x0039 (0x0069 - 0x0030)
class UNearestPlayerContext_C : public UEnvQueryContext_BlueprintBase
{
public:
	struct FVector                                     QuerierLocation;                                          // 0x0030(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     GoalActorLocation;                                        // 0x003C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DistanceBetweenQuerierAndGoal;                            // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FinalHuntingRadiusToUse;                                  // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     FinalHuntingRadiusLocationToUse;                          // 0x0050(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	class AFortAIPawn*                                 Querier;                                                  // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Debug : 1;                                                // 0x0068(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NearestPlayerContext.NearestPlayerContext_C");
		return ptr;
	}


	void ProvideSingleLocation(class UObject** QuerierObject, class AActor** QuerierActor, struct FVector* ResultingLocation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
