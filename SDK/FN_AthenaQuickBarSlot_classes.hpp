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

// WidgetBlueprintGeneratedClass AthenaQuickBarSlot.AthenaQuickBarSlot_C
// 0x0000 (0x0338 - 0x0338)
class UAthenaQuickBarSlot_C : public UQuickbarSlot_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaQuickBarSlot.AthenaQuickBarSlot_C");
		return ptr;
	}


	void GetKeyBindingAction_Gamepad(struct FName* KeyBindingAction);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
