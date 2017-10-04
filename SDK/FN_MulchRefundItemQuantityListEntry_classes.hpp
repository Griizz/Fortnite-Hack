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

// WidgetBlueprintGeneratedClass MulchRefundItemQuantityListEntry.MulchRefundItemQuantityListEntry_C
// 0x0010 (0x0268 - 0x0258)
class UMulchRefundItemQuantityListEntry_C : public UFortItemQuantityListEntryBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0258(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UItemCountRecycling_C*                       ItemCountRecycling;                                       // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MulchRefundItemQuantityListEntry.MulchRefundItemQuantityListEntry_C");
		return ptr;
	}


	void UpdateItemAndQuantity(bool DirectlySetQuantity);
	void HandleDifferentItemOrQuantitySetBP(bool* IsBeingReset);
	void Construct();
	void ExecuteUbergraph_MulchRefundItemQuantityListEntry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
