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

// BlueprintGeneratedClass FriendNotification.FriendNotification_C
// 0x0008 (0x00A0 - 0x0098)
class UFriendNotification_C : public UFortUIFriendNotification
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FriendNotification.FriendNotification_C");
		return ptr;
	}


	void ShowFriendInvites();
	void ShowPartyInvites();
	void TakeAction();
	void ExecuteUbergraph_FriendNotification(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
