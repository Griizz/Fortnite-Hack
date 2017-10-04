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

// WidgetBlueprintGeneratedClass ItemManagementModeDetailsPanel.ItemManagementModeDetailsPanel_C
// 0x0008 (0x0270 - 0x0268)
class UItemManagementModeDetailsPanel_C : public UFortItemManagementModeDetailsPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0268(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemManagementModeDetailsPanel.ItemManagementModeDetailsPanel_C");
		return ptr;
	}


	void HandleDifferentItemManagementModeSetBP();
	void ExecuteUbergraph_ItemManagementModeDetailsPanel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
