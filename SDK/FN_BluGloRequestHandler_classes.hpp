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

// BlueprintGeneratedClass BluGloRequestHandler.BluGloRequestHandler_C
// 0x0048 (0x00C0 - 0x0078)
class UBluGloRequestHandler_C : public UEnvQueryInstanceBlueprintWrapper
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0078(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FScriptMulticastDelegate                    OnBluGloQueryFinished;                                    // 0x0080(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	int                                                NumBluGloToSpawn;                                         // 0x0090(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	class AActor*                                      ActorToSpawnFrom;                                         // 0x0098(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     LocationToSpawnFrom;                                      // 0x00A0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	TArray<struct FVector>                             LocationsToSpawnTo;                                       // 0x00B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BluGloRequestHandler.BluGloRequestHandler_C");
		return ptr;
	}


	void BuildLocationsRandomly();
	void BuildLocationsFromQueryLocations(TArray<struct FVector>* QueryResultLocations);
	void EQSQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
	void InitializeBluGloRequestHandler(int NumBluGloToSpawn, class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid);
	void ExecuteUbergraph_BluGloRequestHandler(int EntryPoint);
	void OnBluGloQueryFinished__DelegateSignature(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid, TEnumAsByte<EEnvQueryStatus> QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int NumBluGloToSpawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
