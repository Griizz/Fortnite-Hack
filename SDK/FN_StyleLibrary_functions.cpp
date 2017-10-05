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

// Function StyleLibrary.StyleLibrary_C.Get Conning Color For Specific Difficulty
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Difficulty_Value               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Difficulty_Linear_Color        (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           Invalid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_Conning_Color_For_Specific_Difficulty(int Difficulty_Value, class UObject* __WorldContext, struct FLinearColor* Difficulty_Linear_Color, bool* Invalid)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Conning Color For Specific Difficulty");

	UStyleLibrary_C_Get_Conning_Color_For_Specific_Difficulty_Params params;
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


// Function StyleLibrary.StyleLibrary_C.Get Conning Color From Difficulty Value
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Player_Skill_Level             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Content_Difficulty_Level       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameDifficultyInfo     Game_Difficulty_Info           (CPF_Parm)
// int                            Content_Skill_Points           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Difficulty_Linear_Color        (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   ToolTipText                    (CPF_Parm, CPF_OutParm)
// int                            DifficultyValue                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_Conning_Color_From_Difficulty_Value(int Player_Skill_Level, float Content_Difficulty_Level, const struct FGameDifficultyInfo& Game_Difficulty_Info, int Content_Skill_Points, class UObject* __WorldContext, struct FLinearColor* Difficulty_Linear_Color, bool* Success, struct FText* ToolTipText, int* DifficultyValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Conning Color From Difficulty Value");

	UStyleLibrary_C_Get_Conning_Color_From_Difficulty_Value_Params params;
	params.Player_Skill_Level = Player_Skill_Level;
	params.Content_Difficulty_Level = Content_Difficulty_Level;
	params.Game_Difficulty_Info = Game_Difficulty_Info;
	params.Content_Skill_Points = Content_Skill_Points;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Difficulty_Linear_Color != nullptr)
		*Difficulty_Linear_Color = params.Difficulty_Linear_Color;
	if (Success != nullptr)
		*Success = params.Success;
	if (ToolTipText != nullptr)
		*ToolTipText = params.ToolTipText;
	if (DifficultyValue != nullptr)
		*DifficultyValue = params.DifficultyValue;
}


// Function StyleLibrary.StyleLibrary_C.Get HarvestWeakPoint Color
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FFortUIStylesheet       Stylesheet                     (CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            StyleSheetOut                  (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_HarvestWeakPoint_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* StyleSheetOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get HarvestWeakPoint Color");

	UStyleLibrary_C_Get_HarvestWeakPoint_Color_Params params;
	params.Stylesheet = Stylesheet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StyleSheetOut != nullptr)
		*StyleSheetOut = params.StyleSheetOut;
}


// Function StyleLibrary.StyleLibrary_C.ResizeBrush
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortBrushSize>    BrushSize                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FSlateBrush             BaseBrush                      (CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FSlateBrush             NewParam                       (CPF_Parm, CPF_OutParm)

void UStyleLibrary_C::STATIC_ResizeBrush(TEnumAsByte<EFortBrushSize> BrushSize, const struct FSlateBrush& BaseBrush, class UObject* __WorldContext, struct FSlateBrush* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.ResizeBrush");

	UStyleLibrary_C_ResizeBrush_Params params;
	params.BrushSize = BrushSize;
	params.BaseBrush = BaseBrush;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function StyleLibrary.StyleLibrary_C.Get Base & Buff Colors
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EFortStatValueDisplayType      Display_Type                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EFortBuffState                 Buff_State                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFortUIStylesheet       Stylesheet                     (CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Base                           (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FLinearColor            buff                           (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_Base___Buff_Colors(EFortStatValueDisplayType Display_Type, EFortBuffState Buff_State, const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Base, struct FLinearColor* buff)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Base & Buff Colors");

	UStyleLibrary_C_Get_Base___Buff_Colors_Params params;
	params.Display_Type = Display_Type;
	params.Buff_State = Buff_State;
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


// Function StyleLibrary.StyleLibrary_C.Get Bolt Elemental Color
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FFortUIStylesheet       Stylesheet                     (CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_Bolt_Elemental_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Bolt Elemental Color");

	UStyleLibrary_C_Get_Bolt_Elemental_Color_Params params;
	params.Stylesheet = Stylesheet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function StyleLibrary.StyleLibrary_C.Get Ice Elemental Color
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FFortUIStylesheet       Stylesheet                     (CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_Ice_Elemental_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Ice Elemental Color");

	UStyleLibrary_C_Get_Ice_Elemental_Color_Params params;
	params.Stylesheet = Stylesheet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function StyleLibrary.StyleLibrary_C.Get Fire Elemental Color
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FFortUIStylesheet       Stylesheet                     (CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_Fire_Elemental_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Fire Elemental Color");

	UStyleLibrary_C_Get_Fire_Elemental_Color_Params params;
	params.Stylesheet = Stylesheet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function StyleLibrary.StyleLibrary_C.Get Unique Color
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FFortUIStylesheet       Stylesheet                     (CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_Unique_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Unique Color");

	UStyleLibrary_C_Get_Unique_Color_Params params;
	params.Stylesheet = Stylesheet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function StyleLibrary.StyleLibrary_C.Get Item Size
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortUIStylesheet       Stylesheet                     (CPF_Parm)
// TEnumAsByte<EFortBrushSize>    Brush_Size                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               Item_Size                      (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_Item_Size(const struct FFortUIStylesheet& Stylesheet, TEnumAsByte<EFortBrushSize> Brush_Size, class UObject* __WorldContext, struct FVector2D* Item_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Item Size");

	UStyleLibrary_C_Get_Item_Size_Params params;
	params.Stylesheet = Stylesheet;
	params.Brush_Size = Brush_Size;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item_Size != nullptr)
		*Item_Size = params.Item_Size;
}


// Function StyleLibrary.StyleLibrary_C.Get Debuff Color
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FFortUIStylesheet       Stylesheet                     (CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_Debuff_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Debuff Color");

	UStyleLibrary_C_Get_Debuff_Color_Params params;
	params.Stylesheet = Stylesheet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function StyleLibrary.StyleLibrary_C.Get Buff Color
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FFortUIStylesheet       Stylesheet                     (CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_Buff_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Buff Color");

	UStyleLibrary_C_Get_Buff_Color_Params params;
	params.Stylesheet = Stylesheet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function StyleLibrary.StyleLibrary_C.Get Item Icon Size
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortUIStylesheet       Stylesheet                     (CPF_Parm)
// TEnumAsByte<EFortBrushSize>    Brush_Size                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               Icon_Size                      (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_Item_Icon_Size(const struct FFortUIStylesheet& Stylesheet, TEnumAsByte<EFortBrushSize> Brush_Size, class UObject* __WorldContext, struct FVector2D* Icon_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Item Icon Size");

	UStyleLibrary_C_Get_Item_Icon_Size_Params params;
	params.Stylesheet = Stylesheet;
	params.Brush_Size = Brush_Size;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon_Size != nullptr)
		*Icon_Size = params.Icon_Size;
}


// Function StyleLibrary.StyleLibrary_C.Get Standard Icon Size
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortUIStylesheet       Stylesheet                     (CPF_Parm)
// TEnumAsByte<EFortBrushSize>    Brush_Size                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               Icon_Size                      (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_Standard_Icon_Size(const struct FFortUIStylesheet& Stylesheet, TEnumAsByte<EFortBrushSize> Brush_Size, class UObject* __WorldContext, struct FVector2D* Icon_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Standard Icon Size");

	UStyleLibrary_C_Get_Standard_Icon_Size_Params params;
	params.Stylesheet = Stylesheet;
	params.Brush_Size = Brush_Size;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon_Size != nullptr)
		*Icon_Size = params.Icon_Size;
}


// Function StyleLibrary.StyleLibrary_C.Get Theme
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FFortUIStylesheet       Stylesheet                     (CPF_Parm)
// TEnumAsByte<EFortUITheme>      Theme_Type                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFortUITheme            Theme                          (CPF_Parm, CPF_OutParm)

void UStyleLibrary_C::STATIC_Get_Theme(const struct FFortUIStylesheet& Stylesheet, TEnumAsByte<EFortUITheme> Theme_Type, class UObject* __WorldContext, struct FFortUITheme* Theme)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Theme");

	UStyleLibrary_C_Get_Theme_Params params;
	params.Stylesheet = Stylesheet;
	params.Theme_Type = Theme_Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Theme != nullptr)
		*Theme = params.Theme;
}


// Function StyleLibrary.StyleLibrary_C.Get Theme Color
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FFortUIStylesheet       Stylesheet                     (CPF_Parm)
// TEnumAsByte<EFortUITheme>      Theme_Type                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EFortUIThemeColor> Color_Type                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Theme_Color                    (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_Theme_Color(const struct FFortUIStylesheet& Stylesheet, TEnumAsByte<EFortUITheme> Theme_Type, TEnumAsByte<EFortUIThemeColor> Color_Type, class UObject* __WorldContext, struct FLinearColor* Theme_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Theme Color");

	UStyleLibrary_C_Get_Theme_Color_Params params;
	params.Stylesheet = Stylesheet;
	params.Theme_Type = Theme_Type;
	params.Color_Type = Color_Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Theme_Color != nullptr)
		*Theme_Color = params.Theme_Color;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
