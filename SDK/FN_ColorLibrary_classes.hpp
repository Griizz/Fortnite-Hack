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

// BlueprintGeneratedClass ColorLibrary.ColorLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UColorLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ColorLibrary.ColorLibrary_C");
		return ptr;
	}


	void STATIC_Get_Conning_Color_For_Specific_Difficulty(int Difficulty_Value, class UObject* __WorldContext, struct FLinearColor* Difficulty_Linear_Color, bool* Invalid);
	void STATIC_Get_Conning_Color_From_Difficulty_Value(int Skill_Level, int Content_Difficulty, class UObject* __WorldContext, struct FLinearColor* Difficulty_Linear_Color, bool* Success, int* HexConningColor, struct FString* ToolTipText);
	void STATIC_Get_HarvestWeakPoint_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* StyleSheetOut);
	void STATIC_Get_Base___Buff_Colors(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Base, struct FLinearColor* buff);
	void STATIC_Get_Bolt_Elemental_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	void STATIC_Get_Ice_Elemental_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	void STATIC_Get_Fire_Elemental_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	void STATIC_Get_Unique_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	void STATIC_Get_Debuff_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	void STATIC_Get_Buff_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
