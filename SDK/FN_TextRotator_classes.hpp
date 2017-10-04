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

// WidgetBlueprintGeneratedClass TextRotator.TextRotator_C
// 0x0008 (0x0938 - 0x0930)
class UTextRotator_C : public UCommonRotator
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0930(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TextRotator.TextRotator_C");
		return ptr;
	}


	void Construct();
	void BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_TextRotator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
