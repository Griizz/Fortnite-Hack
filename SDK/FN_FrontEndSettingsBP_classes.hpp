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

// BlueprintGeneratedClass FrontEndSettingsBP.FrontEndSettingsBP_C
// 0x0008 (0x03A0 - 0x0398)
class AFrontEndSettingsBP_C : public AFrontEndSettings
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FrontEndSettingsBP.FrontEndSettingsBP_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
