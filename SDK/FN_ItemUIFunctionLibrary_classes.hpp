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

// BlueprintGeneratedClass ItemUIFunctionLibrary.ItemUIFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UItemUIFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ItemUIFunctionLibrary.ItemUIFunctionLibrary_C");
		return ptr;
	}


	void STATIC_Truncate_Integer_Value(int Value, int Min_Fractional_Digits, int Max_Fractional_Digits, class UObject* __WorldContext, struct FText* Formatted_Value);
	void STATIC_Convert_Tier_To_Integer(TEnumAsByte<EFortItemTier> Tier, class UObject* __WorldContext, int* Numeric_Tier);
	void STATIC_ParseLevelRequiredFromString(const struct FString& inString, class UObject* __WorldContext, int* outInt);
	void STATIC_Add_Alteration_Widgets(class UVerticalBox* Host_Widget, class UFortItem* Item, int PreviewLevel, bool ShowInVaultDetails, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
