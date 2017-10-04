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

// BlueprintGeneratedClass Announce_LowHeath.Announce_LowHeath_C
// 0x0010 (0x04F8 - 0x04E8)
class AAnnounce_LowHeath_C : public AFortClientAnnouncement_Basic
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E8(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Announce_LowHeath.Announce_LowHeath_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnClientAnnouncementStart();
	void ExecuteUbergraph_Announce_LowHeath(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
