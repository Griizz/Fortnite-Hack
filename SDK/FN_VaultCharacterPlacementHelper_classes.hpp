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

// BlueprintGeneratedClass VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C
// 0x0028 (0x03B0 - 0x0388)
class AVaultCharacterPlacementHelper_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        CharacterPlacement;                                       // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    NewEventDispatcher_1;                                     // 0x03A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_VaultCharacterPlacementHelper(int EntryPoint);
	void NewEventDispatcher_0__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
