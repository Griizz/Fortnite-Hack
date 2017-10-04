// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ColorLibrary.ColorLibrary_C.Get Conning Color For Specific Difficulty
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Difficulty_Value               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Difficulty_Linear_Color        (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           Invalid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UColorLibrary_C::STATIC_Get_Conning_Color_For_Specific_Difficulty(int Difficulty_Value, class UObject* __WorldContext, struct FLinearColor* Difficulty_Linear_Color, bool* Invalid)
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorLibrary.ColorLibrary_C.Get Conning Color For Specific Difficulty");

	UColorLibrary_C_Get_Conning_Color_For_Specific_Difficulty_Params params;
	params.Difficulty_Value = Difficulty_Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Difficulty_Linear_Color != nullptr)
		*Difficulty_Linear_Color = params.Difficulty_Linear_Color;
	if (Invalid != nullptr)
		*Invalid = params.Invalid;
}


// Function ColorLibrary.ColorLibrary_C.Get Conning Color From Difficulty Value
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Skill_Level                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Content_Difficulty             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Difficulty_Linear_Color        (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            HexConningColor                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ToolTipText                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UColorLibrary_C::STATIC_Get_Conning_Color_From_Difficulty_Value(int Skill_Level, int Content_Difficulty, class UObject* __WorldContext, struct FLinearColor* Difficulty_Linear_Color, bool* Success, int* HexConningColor, struct FString* ToolTipText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorLibrary.ColorLibrary_C.Get Conning Color From Difficulty Value");

	UColorLibrary_C_Get_Conning_Color_From_Difficulty_Value_Params params;
	params.Skill_Level = Skill_Level;
	params.Content_Difficulty = Content_Difficulty;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Difficulty_Linear_Color != nullptr)
		*Difficulty_Linear_Color = params.Difficulty_Linear_Color;
	if (Success != nullptr)
		*Success = params.Success;
	if (HexConningColor != nullptr)
		*HexConningColor = params.HexConningColor;
	if (ToolTipText != nullptr)
		*ToolTipText = params.ToolTipText;
}


// Function ColorLibrary.ColorLibrary_C.Get HarvestWeakPoint Color
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FColorStylesheet        Stylesheet                     (CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            StyleSheetOut                  (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UColorLibrary_C::STATIC_Get_HarvestWeakPoint_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* StyleSheetOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorLibrary.ColorLibrary_C.Get HarvestWeakPoint Color");

	UColorLibrary_C_Get_HarvestWeakPoint_Color_Params params;
	params.Stylesheet = Stylesheet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StyleSheetOut != nullptr)
		*StyleSheetOut = params.StyleSheetOut;
}


// Function ColorLibrary.ColorLibrary_C.Get Base & Buff Colors
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FColorStylesheet        Stylesheet                     (CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Base                           (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FLinearColor            buff                           (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UColorLibrary_C::STATIC_Get_Base___Buff_Colors(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Base, struct FLinearColor* buff)
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorLibrary.ColorLibrary_C.Get Base & Buff Colors");

	UColorLibrary_C_Get_Base___Buff_Colors_Params params;
	params.Stylesheet = Stylesheet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Base != nullptr)
		*Base = params.Base;
	if (buff != nullptr)
		*buff = params.buff;
}


// Function ColorLibrary.ColorLibrary_C.Get Bolt Elemental Color
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FColorStylesheet        Stylesheet                     (CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UColorLibrary_C::STATIC_Get_Bolt_Elemental_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorLibrary.ColorLibrary_C.Get Bolt Elemental Color");

	UColorLibrary_C_Get_Bolt_Elemental_Color_Params params;
	params.Stylesheet = Stylesheet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function ColorLibrary.ColorLibrary_C.Get Ice Elemental Color
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FColorStylesheet        Stylesheet                     (CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UColorLibrary_C::STATIC_Get_Ice_Elemental_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorLibrary.ColorLibrary_C.Get Ice Elemental Color");

	UColorLibrary_C_Get_Ice_Elemental_Color_Params params;
	params.Stylesheet = Stylesheet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function ColorLibrary.ColorLibrary_C.Get Fire Elemental Color
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FColorStylesheet        Stylesheet                     (CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UColorLibrary_C::STATIC_Get_Fire_Elemental_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorLibrary.ColorLibrary_C.Get Fire Elemental Color");

	UColorLibrary_C_Get_Fire_Elemental_Color_Params params;
	params.Stylesheet = Stylesheet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function ColorLibrary.ColorLibrary_C.Get Unique Color
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FColorStylesheet        Stylesheet                     (CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UColorLibrary_C::STATIC_Get_Unique_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorLibrary.ColorLibrary_C.Get Unique Color");

	UColorLibrary_C_Get_Unique_Color_Params params;
	params.Stylesheet = Stylesheet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function ColorLibrary.ColorLibrary_C.Get Debuff Color
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FColorStylesheet        Stylesheet                     (CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UColorLibrary_C::STATIC_Get_Debuff_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorLibrary.ColorLibrary_C.Get Debuff Color");

	UColorLibrary_C_Get_Debuff_Color_Params params;
	params.Stylesheet = Stylesheet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function ColorLibrary.ColorLibrary_C.Get Buff Color
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FColorStylesheet        Stylesheet                     (CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UColorLibrary_C::STATIC_Get_Buff_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorLibrary.ColorLibrary_C.Get Buff Color");

	UColorLibrary_C_Get_Buff_Color_Params params;
	params.Stylesheet = Stylesheet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
