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

// WidgetBlueprintGeneratedClass AthenaRotator.AthenaRotator_C
// 0x0028 (0x0958 - 0x0930)
class UAthenaRotator_C : public UCommonRotator
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0930(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FDataTableRowHandle                         Left_Triggering_Input_Action;                             // 0x0938(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FDataTableRowHandle                         Right_Triggering_Input_Action;                            // 0x0948(0x0010) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaRotator.AthenaRotator_C");
		return ptr;
	}


	void ChangeDirection(bool bDirection);
	void Construct();
	void BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void ExecuteUbergraph_AthenaRotator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
