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

// BlueprintGeneratedClass HeroNotificationHandler.HeroNotificationHandler_C
// 0x0000 (0x01F0 - 0x01F0)
class UHeroNotificationHandler_C : public UFortHeroNotificationHandler
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HeroNotificationHandler.HeroNotificationHandler_C");
		return ptr;
	}


	class UUserWidget* CreateWidget(class APlayerController** OwningPlayer);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
