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

// Function LegacyButtonIconText.LegacyButtonIconText_C.Outro
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyButtonIconText_C::Outro()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.Outro");

	ULegacyButtonIconText_C_Outro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyButtonIconText.LegacyButtonIconText_C.Intro
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyButtonIconText_C::Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.Intro");

	ULegacyButtonIconText_C_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyButtonIconText.LegacyButtonIconText_C.Toggle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show_Button                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyButtonIconText_C::Toggle(bool Show_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.Toggle");

	ULegacyButtonIconText_C_Toggle_Params params;
	params.Show_Button = Show_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyButtonIconText.LegacyButtonIconText_C.Set Alignment
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ETextJustify>      Align                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyButtonIconText_C::Set_Alignment(TEnumAsByte<ETextJustify> Align)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.Set Alignment");

	ULegacyButtonIconText_C_Set_Alignment_Params params;
	params.Align = Align;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyButtonIconText.LegacyButtonIconText_C.Update Size Box
// (FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyButtonIconText_C::Update_Size_Box()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.Update Size Box");

	ULegacyButtonIconText_C_Update_Size_Box_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyButtonIconText.LegacyButtonIconText_C.Get Primary Color
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateColor ULegacyButtonIconText_C::Get_Primary_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.Get Primary Color");

	ULegacyButtonIconText_C_Get_Primary_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LegacyButtonIconText.LegacyButtonIconText_C.Get Secondary Color
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor ULegacyButtonIconText_C::Get_Secondary_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.Get Secondary Color");

	ULegacyButtonIconText_C_Get_Secondary_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LegacyButtonIconText.LegacyButtonIconText_C.Update Padding
// (FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyButtonIconText_C::Update_Padding()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.Update Padding");

	ULegacyButtonIconText_C_Update_Padding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyButtonIconText.LegacyButtonIconText_C.Set Icon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateBrush             InBrush                        (CPF_Parm)
// bool                           RefreshPadding                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyButtonIconText_C::Set_Icon(const struct FSlateBrush& InBrush, bool RefreshPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.Set Icon");

	ULegacyButtonIconText_C_Set_Icon_Params params;
	params.InBrush = InBrush;
	params.RefreshPadding = RefreshPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyButtonIconText.LegacyButtonIconText_C.Set Text
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_Parm)
// bool                           RefreshPadding                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyButtonIconText_C::Set_Text(const struct FText& InText, bool RefreshPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.Set Text");

	ULegacyButtonIconText_C_Set_Text_Params params;
	params.InText = InText;
	params.RefreshPadding = RefreshPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyButtonIconText.LegacyButtonIconText_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyButtonIconText_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.PreConstruct");

	ULegacyButtonIconText_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyButtonIconText.LegacyButtonIconText_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ULegacyButtonIconText_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.OnMouseEnter");

	ULegacyButtonIconText_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyButtonIconText.LegacyButtonIconText_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ULegacyButtonIconText_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.OnMouseLeave");

	ULegacyButtonIconText_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyButtonIconText.LegacyButtonIconText_C.ExecuteUbergraph_LegacyButtonIconText
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyButtonIconText_C::ExecuteUbergraph_LegacyButtonIconText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.ExecuteUbergraph_LegacyButtonIconText");

	ULegacyButtonIconText_C_ExecuteUbergraph_LegacyButtonIconText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyButtonIconText.LegacyButtonIconText_C.On Mouse Hovered Changed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Is_Hovered                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyButtonIconText_C::On_Mouse_Hovered_Changed__DelegateSignature(bool Is_Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.On Mouse Hovered Changed__DelegateSignature");

	ULegacyButtonIconText_C_On_Mouse_Hovered_Changed__DelegateSignature_Params params;
	params.Is_Hovered = Is_Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
