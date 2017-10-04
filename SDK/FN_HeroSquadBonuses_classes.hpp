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

// WidgetBlueprintGeneratedClass HeroSquadBonuses.HeroSquadBonuses_C
// 0x0000 (0x0278 - 0x0278)
class UHeroSquadBonuses_C : public UFortHeroSquadBonusPerksWidgetBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HeroSquadBonuses.HeroSquadBonuses_C");
		return ptr;
	}


	void OnSquadSlotSelected(int SquadSlotIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
