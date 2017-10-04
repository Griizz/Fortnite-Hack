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

// BlueprintGeneratedClass WM_PinManager.WM_PinManager_C
// 0x0010 (0x03B8 - 0x03A8)
class AWM_PinManager_C : public AWorldMapPinManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WM_PinManager.WM_PinManager_C");
		return ptr;
	}


	class AWorldMapPin* CreateWorldMapPin(struct FString* TheaterId);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WM_PinManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
