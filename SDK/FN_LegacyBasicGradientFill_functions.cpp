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

// Function LegacyBasicGradientFill.LegacyBasicGradientFill_C.Set Brush Size
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               Brush_Size                     (CPF_Parm, CPF_IsPlainOldData)

void ULegacyBasicGradientFill_C::Set_Brush_Size(const struct FVector2D& Brush_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyBasicGradientFill.LegacyBasicGradientFill_C.Set Brush Size");

	ULegacyBasicGradientFill_C_Set_Brush_Size_Params params;
	params.Brush_Size = Brush_Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyBasicGradientFill.LegacyBasicGradientFill_C.Set Fill
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color_1                        (CPF_Parm, CPF_IsPlainOldData)
// struct FLinearColor            Color_2                        (CPF_Parm, CPF_IsPlainOldData)
// float                          Rotation__0___1_               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyBasicGradientFill_C::Set_Fill(const struct FLinearColor& Color_1, const struct FLinearColor& Color_2, float Rotation__0___1_)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyBasicGradientFill.LegacyBasicGradientFill_C.Set Fill");

	ULegacyBasicGradientFill_C_Set_Fill_Params params;
	params.Color_1 = Color_1;
	params.Color_2 = Color_2;
	params.Rotation__0___1_ = Rotation__0___1_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyBasicGradientFill.LegacyBasicGradientFill_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyBasicGradientFill_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyBasicGradientFill.LegacyBasicGradientFill_C.PreConstruct");

	ULegacyBasicGradientFill_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyBasicGradientFill.LegacyBasicGradientFill_C.ExecuteUbergraph_LegacyBasicGradientFill
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyBasicGradientFill_C::ExecuteUbergraph_LegacyBasicGradientFill(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyBasicGradientFill.LegacyBasicGradientFill_C.ExecuteUbergraph_LegacyBasicGradientFill");

	ULegacyBasicGradientFill_C_ExecuteUbergraph_LegacyBasicGradientFill_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
