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

// Function BasicStrokeBox.BasicStrokeBox_C.Customize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Shape_Style                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Fill_Color                     (CPF_Parm, CPF_IsPlainOldData)
// struct FLinearColor            Stroke_Color                   (CPF_Parm, CPF_IsPlainOldData)

void UBasicStrokeBox_C::Customize(int Shape_Style, const struct FLinearColor& Fill_Color, const struct FLinearColor& Stroke_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicStrokeBox.BasicStrokeBox_C.Customize");

	UBasicStrokeBox_C_Customize_Params params;
	params.Shape_Style = Shape_Style;
	params.Fill_Color = Fill_Color;
	params.Stroke_Color = Stroke_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicStrokeBox.BasicStrokeBox_C.Redraw
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBasicStrokeBox_C::Redraw()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicStrokeBox.BasicStrokeBox_C.Redraw");

	UBasicStrokeBox_C_Redraw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicStrokeBox.BasicStrokeBox_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasicStrokeBox_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicStrokeBox.BasicStrokeBox_C.PreConstruct");

	UBasicStrokeBox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicStrokeBox.BasicStrokeBox_C.ExecuteUbergraph_BasicStrokeBox
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasicStrokeBox_C::ExecuteUbergraph_BasicStrokeBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicStrokeBox.BasicStrokeBox_C.ExecuteUbergraph_BasicStrokeBox");

	UBasicStrokeBox_C_ExecuteUbergraph_BasicStrokeBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
