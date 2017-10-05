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

// Function BasicRatingWidget.BasicRatingWidget_C.Update Power Rating Style
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  InStyle                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasicRatingWidget_C::Update_Power_Rating_Style(class UClass* InStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicRatingWidget.BasicRatingWidget_C.Update Power Rating Style");

	UBasicRatingWidget_C_Update_Power_Rating_Style_Params params;
	params.InStyle = InStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicRatingWidget.BasicRatingWidget_C.Get Current Rating
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          CurrentNumericValue            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasicRatingWidget_C::Get_Current_Rating(float* CurrentNumericValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicRatingWidget.BasicRatingWidget_C.Get Current Rating");

	UBasicRatingWidget_C_Get_Current_Rating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentNumericValue != nullptr)
		*CurrentNumericValue = params.CurrentNumericValue;
}


// Function BasicRatingWidget.BasicRatingWidget_C.Update Border Color
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color1                         (CPF_Parm, CPF_IsPlainOldData)
// struct FLinearColor            Color2                         (CPF_Parm, CPF_IsPlainOldData)

void UBasicRatingWidget_C::Update_Border_Color(const struct FLinearColor& Color1, const struct FLinearColor& Color2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicRatingWidget.BasicRatingWidget_C.Update Border Color");

	UBasicRatingWidget_C_Update_Border_Color_Params params;
	params.Color1 = Color1;
	params.Color2 = Color2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicRatingWidget.BasicRatingWidget_C.Update Power Rating Value
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Rating                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasicRatingWidget_C::Update_Power_Rating_Value(int Rating)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicRatingWidget.BasicRatingWidget_C.Update Power Rating Value");

	UBasicRatingWidget_C_Update_Power_Rating_Value_Params params;
	params.Rating = Rating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicRatingWidget.BasicRatingWidget_C.GetBorderVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               Visibility                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasicRatingWidget_C::GetBorderVisibility(ESlateVisibility* Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicRatingWidget.BasicRatingWidget_C.GetBorderVisibility");

	UBasicRatingWidget_C_GetBorderVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Visibility != nullptr)
		*Visibility = params.Visibility;
}


// Function BasicRatingWidget.BasicRatingWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasicRatingWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicRatingWidget.BasicRatingWidget_C.PreConstruct");

	UBasicRatingWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicRatingWidget.BasicRatingWidget_C.ExecuteUbergraph_BasicRatingWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasicRatingWidget_C::ExecuteUbergraph_BasicRatingWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicRatingWidget.BasicRatingWidget_C.ExecuteUbergraph_BasicRatingWidget");

	UBasicRatingWidget_C_ExecuteUbergraph_BasicRatingWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
