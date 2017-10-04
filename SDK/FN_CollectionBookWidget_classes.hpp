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

// WidgetBlueprintGeneratedClass CollectionBookWidget.CollectionBookWidget_C
// 0x0008 (0x0438 - 0x0430)
class UCollectionBookWidget_C : public UFortCollectionBookWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CollectionBookWidget.CollectionBookWidget_C");
		return ptr;
	}


	void Construct();
	void SlotItemComplete(class UFortAccountItem* ItemSlotted, const struct FName& SlotId);
	void Destruct();
	void OnActivated();
	void ExecuteUbergraph_CollectionBookWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
