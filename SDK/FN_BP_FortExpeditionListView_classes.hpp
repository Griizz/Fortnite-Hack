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

// WidgetBlueprintGeneratedClass BP_FortExpeditionListView.BP_FortExpeditionListView_C
// 0x0028 (0x0298 - 0x0270)
class UBP_FortExpeditionListView_C : public UFortExpeditionListViewWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FScriptMulticastDelegate                    OnItemClicked;                                            // 0x0278(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemHovered;                                            // 0x0288(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_FortExpeditionListView.BP_FortExpeditionListView_C");
		return ptr;
	}


	void Construct();
	void BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_10_OnListViewItemClicked__DelegateSignature(class UObject* Item);
	void BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_52_OnListViewItemClicked__DelegateSignature(class UObject* Item);
	void BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_6_OnListViewItemClicked__DelegateSignature(class UObject* Item);
	void ExecuteUbergraph_BP_FortExpeditionListView(int EntryPoint);
	void OnItemHovered__DelegateSignature(class UObject* Item);
	void OnItemClicked__DelegateSignature(class UObject* Item);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
