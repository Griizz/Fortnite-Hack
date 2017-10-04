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

// WidgetBlueprintGeneratedClass CollectionBookPrimaryPanel.CollectionBookPrimaryPanel_C
// 0x0009 (0x04A9 - 0x04A0)
class UCollectionBookPrimaryPanel_C : public UFortCollectionBookPrimaryPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	unsigned char                                      CanShowCollectionBookHelp : 1;                            // 0x04A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CollectionBookPrimaryPanel.CollectionBookPrimaryPanel_C");
		return ptr;
	}


	void OnSummonInfoPanelExecuted(bool* bPassThrough);
	void HandleDisplayInfoBox();
	void ExecuteUbergraph_CollectionBookPrimaryPanel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
