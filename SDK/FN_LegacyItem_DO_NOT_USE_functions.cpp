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

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnDrop
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (CPF_Parm)
// class UDragDropOperation**     Operation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ULegacyItem_DO_NOT_USE_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnDrop");

	ULegacyItem_DO_NOT_USE_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Base Opacity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Base_Opacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Base Opacity");

	ULegacyItem_DO_NOT_USE_C_Update_Base_Opacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Activatable State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Activatable                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::Update_Activatable_State(bool Activatable)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Activatable State");

	ULegacyItem_DO_NOT_USE_C_Update_Activatable_State_Params params;
	params.Activatable = Activatable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Rating Tag
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Rating_Tag()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Rating Tag");

	ULegacyItem_DO_NOT_USE_C_Update_Rating_Tag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Texture2D From Multi Size Brush
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortMultiSizeBrush     Multi_Size_Brush               (CPF_Parm)
// TEnumAsByte<EFortBrushSize>    Brush_Size                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTexture2D*              Texture2D                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::Get_Texture2D_From_Multi_Size_Brush(const struct FFortMultiSizeBrush& Multi_Size_Brush, TEnumAsByte<EFortBrushSize> Brush_Size, class UTexture2D** Texture2D, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Texture2D From Multi Size Brush");

	ULegacyItem_DO_NOT_USE_C_Get_Texture2D_From_Multi_Size_Brush_Params params;
	params.Multi_Size_Brush = Multi_Size_Brush;
	params.Brush_Size = Brush_Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture2D != nullptr)
		*Texture2D = params.Texture2D;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Num in Stack
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ULegacyItem_DO_NOT_USE_C::Get_Num_in_Stack()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Num in Stack");

	ULegacyItem_DO_NOT_USE_C_Get_Num_in_Stack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Display Style
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Override_Display_Style         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EItemDisplayStyle> DisplayStyle                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::Set_Display_Style(bool Override_Display_Style, TEnumAsByte<EItemDisplayStyle> DisplayStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Display Style");

	ULegacyItem_DO_NOT_USE_C_Set_Display_Style_Params params;
	params.Override_Display_Style = Override_Display_Style;
	params.DisplayStyle = DisplayStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Hide Subtype Icons
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Hide_Subtype_Icons()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Hide Subtype Icons");

	ULegacyItem_DO_NOT_USE_C_Hide_Subtype_Icons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Primary Icon Visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Override_Icon_Visibility       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::Set_Primary_Icon_Visibility(bool Override_Icon_Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Primary Icon Visibility");

	ULegacyItem_DO_NOT_USE_C_Set_Primary_Icon_Visibility_Params params;
	params.Override_Icon_Visibility = Override_Icon_Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Subtype Icons & Ammo Color
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Override_Secondary_Icon_Color  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Secondary_Icon_Override_Color  (CPF_Parm, CPF_IsPlainOldData)
// bool                           Override_Tertiary_Icon_Color   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Tertiary_Icon_Override_Color   (CPF_Parm, CPF_IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::Set_Subtype_Icons___Ammo_Color(bool Override_Secondary_Icon_Color, const struct FLinearColor& Secondary_Icon_Override_Color, bool Override_Tertiary_Icon_Color, const struct FLinearColor& Tertiary_Icon_Override_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Subtype Icons & Ammo Color");

	ULegacyItem_DO_NOT_USE_C_Set_Subtype_Icons___Ammo_Color_Params params;
	params.Override_Secondary_Icon_Color = Override_Secondary_Icon_Color;
	params.Secondary_Icon_Override_Color = Secondary_Icon_Override_Color;
	params.Override_Tertiary_Icon_Color = Override_Tertiary_Icon_Color;
	params.Tertiary_Icon_Override_Color = Tertiary_Icon_Override_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnMouseButtonDoubleClick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              InMyGeometry                   (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          InMouseEvent                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply ULegacyItem_DO_NOT_USE_C::OnMouseButtonDoubleClick(struct FGeometry* InMyGeometry, struct FPointerEvent* InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnMouseButtonDoubleClick");

	ULegacyItem_DO_NOT_USE_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Resize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortBrushSize>    Brush_Size                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::Resize(TEnumAsByte<EFortBrushSize> Brush_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Resize");

	ULegacyItem_DO_NOT_USE_C_Resize_Params params;
	params.Brush_Size = Brush_Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Refresh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Refresh");

	ULegacyItem_DO_NOT_USE_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Stack Count
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Count                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::Set_Stack_Count(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Stack Count");

	ULegacyItem_DO_NOT_USE_C_Set_Stack_Count_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Durability
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Durability                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::Set_Durability(float Durability)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Durability");

	ULegacyItem_DO_NOT_USE_C_Set_Durability_Params params;
	params.Durability = Durability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Cooldown Meter
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Cooldown_Meter()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Cooldown Meter");

	ULegacyItem_DO_NOT_USE_C_Update_Cooldown_Meter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Durability Meter
// (FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Durability_Meter()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Durability Meter");

	ULegacyItem_DO_NOT_USE_C_Update_Durability_Meter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Tooltip Header
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Header_Text                    (CPF_Parm)
// class USlateBrushAsset*        Icon_Brush                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::Set_Tooltip_Header(const struct FText& Header_Text, class USlateBrushAsset* Icon_Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Tooltip Header");

	ULegacyItem_DO_NOT_USE_C_Set_Tooltip_Header_Params params;
	params.Header_Text = Header_Text;
	params.Icon_Brush = Icon_Brush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Item Tooltip
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            OverrideStackCount             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* ULegacyItem_DO_NOT_USE_C::Get_Item_Tooltip(int OverrideStackCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Item Tooltip");

	ULegacyItem_DO_NOT_USE_C_Get_Item_Tooltip_Params params;
	params.OverrideStackCount = OverrideStackCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Display Mode
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Cursor_Mode                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::Set_Display_Mode(bool Cursor_Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Display Mode");

	ULegacyItem_DO_NOT_USE_C_Set_Display_Mode_Params params;
	params.Cursor_Mode = Cursor_Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Ammo Count
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Count                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::Set_Ammo_Count(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Ammo Count");

	ULegacyItem_DO_NOT_USE_C_Set_Ammo_Count_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Subtype Icons & Ammo
// (FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Subtype_Icons___Ammo()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Subtype Icons & Ammo");

	ULegacyItem_DO_NOT_USE_C_Update_Subtype_Icons___Ammo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Display Style
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EItemDisplayStyle> Style                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::Get_Display_Style(TEnumAsByte<EItemDisplayStyle>* Style)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Display Style");

	ULegacyItem_DO_NOT_USE_C_Get_Display_Style_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Style != nullptr)
		*Style = params.Style;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Tier Badge
// (FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Tier_Badge()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Tier Badge");

	ULegacyItem_DO_NOT_USE_C_Update_Tier_Badge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Primary Icon
// (FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Primary_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Primary Icon");

	ULegacyItem_DO_NOT_USE_C_Update_Primary_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Item Texture Set
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EItemDisplayStyle> Display_Style                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FItemTextureSet         Texture_Set                    (CPF_Parm, CPF_OutParm)

void ULegacyItem_DO_NOT_USE_C::Get_Item_Texture_Set(TEnumAsByte<EItemDisplayStyle> Display_Style, struct FItemTextureSet* Texture_Set)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Item Texture Set");

	ULegacyItem_DO_NOT_USE_C_Get_Item_Texture_Set_Params params;
	params.Display_Style = Display_Style;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture_Set != nullptr)
		*Texture_Set = params.Texture_Set;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Size Box
// (FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Size_Box()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Size Box");

	ULegacyItem_DO_NOT_USE_C_Update_Size_Box_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnDragDetected
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UDragDropOperation*      Operation                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnDragDetected");

	ULegacyItem_DO_NOT_USE_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply ULegacyItem_DO_NOT_USE_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnMouseButtonDown");

	ULegacyItem_DO_NOT_USE_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update All
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_All()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update All");

	ULegacyItem_DO_NOT_USE_C_Update_All_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Stack Counter
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Stack_Counter()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Stack Counter");

	ULegacyItem_DO_NOT_USE_C_Update_Stack_Counter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Item Data
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item_Data                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::Set_Item_Data(class UFortItem* Item_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Item Data");

	ULegacyItem_DO_NOT_USE_C_Set_Item_Data_Params params;
	params.Item_Data = Item_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Base Material
// (FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Base_Material()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Base Material");

	ULegacyItem_DO_NOT_USE_C_Update_Base_Material_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.BPOnItemChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::BPOnItemChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.BPOnItemChanged");

	ULegacyItem_DO_NOT_USE_C_BPOnItemChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Construct");

	ULegacyItem_DO_NOT_USE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.PreConstruct");

	ULegacyItem_DO_NOT_USE_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.BPOnItemSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem**              NewItem                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::BPOnItemSet(class UFortItem** NewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.BPOnItemSet");

	ULegacyItem_DO_NOT_USE_C_BPOnItemSet_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnCursorModeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bCursorModeEnabled             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ActionName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UUserWidget*             CursorModeContentWidget        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::OnCursorModeChanged(bool bCursorModeEnabled, const struct FName& ActionName, class UUserWidget* CursorModeContentWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnCursorModeChanged");

	ULegacyItem_DO_NOT_USE_C_OnCursorModeChanged_Params params;
	params.bCursorModeEnabled = bCursorModeEnabled;
	params.ActionName = ActionName;
	params.CursorModeContentWidget = CursorModeContentWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ULegacyItem_DO_NOT_USE_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnMouseEnter");

	ULegacyItem_DO_NOT_USE_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.BPOnCooldownSecondsChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int*                           NewCooldownSeconds             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::BPOnCooldownSecondsChanged(int* NewCooldownSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.BPOnCooldownSecondsChanged");

	ULegacyItem_DO_NOT_USE_C_BPOnCooldownSecondsChanged_Params params;
	params.NewCooldownSeconds = NewCooldownSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.BPOnActivatableChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bNewActivatable                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::BPOnActivatableChanged(bool* bNewActivatable)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.BPOnActivatableChanged");

	ULegacyItem_DO_NOT_USE_C_BPOnActivatableChanged_Params params;
	params.bNewActivatable = bNewActivatable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.ExecuteUbergraph_LegacyItem_DO_NOT_USE
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::ExecuteUbergraph_LegacyItem_DO_NOT_USE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.ExecuteUbergraph_LegacyItem_DO_NOT_USE");

	ULegacyItem_DO_NOT_USE_C_ExecuteUbergraph_LegacyItem_DO_NOT_USE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
