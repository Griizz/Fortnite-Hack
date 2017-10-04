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

// BlueprintGeneratedClass Frontend_Lobby.Frontend_Lobby_C
// 0x0008 (0x03A8 - 0x03A0)
class AFrontend_Lobby_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Frontend_Lobby.Frontend_Lobby_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_Frontend_Lobby(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
