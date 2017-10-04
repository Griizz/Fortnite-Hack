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

// WidgetBlueprintGeneratedClass NodeBackground.NodeBackground_C
// 0x0078 (0x0918 - 0x08A0)
class UNodeBackground_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08A0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	TEnumAsByte<ESkillTreeGroups>                      Group;                                                    // 0x08A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08A9(0x0003) MISSED OFFSET
	struct FSkillTreeGroupColors                       GroupColors;                                              // 0x08AC(0x0054) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      Horizontal : 1;                                           // 0x0900(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0901(0x0007) MISSED OFFSET
	class UClass*                                      VerticalStyle;                                            // 0x0908(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      HorizontalStyle;                                          // 0x0910(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NodeBackground.NodeBackground_C");
		return ptr;
	}


	void SetBackgroundColor();
	void PreConstruct(bool* IsDesignTime);
	void Construct();
	void ExecuteUbergraph_NodeBackground(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
