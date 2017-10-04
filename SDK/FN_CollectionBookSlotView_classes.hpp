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

// WidgetBlueprintGeneratedClass CollectionBookSlotView.CollectionBookSlotView_C
// 0x0008 (0x0378 - 0x0370)
class UCollectionBookSlotView_C : public UFortCollectionBookSlotView
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CollectionBookSlotView.CollectionBookSlotView_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_CollectionBookSlotView(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
