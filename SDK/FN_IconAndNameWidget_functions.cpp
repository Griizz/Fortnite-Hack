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

// Function IconAndNameWidget.IconAndNameWidget_C.Set Border Color
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Value                          (CPF_Parm, CPF_IsPlainOldData)

void UIconAndNameWidget_C::Set_Border_Color(const struct FLinearColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconAndNameWidget.IconAndNameWidget_C.Set Border Color");

	UIconAndNameWidget_C_Set_Border_Color_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconAndNameWidget.IconAndNameWidget_C.Setup Text
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UIconAndNameWidget_C::Setup_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconAndNameWidget.IconAndNameWidget_C.Setup Text");

	UIconAndNameWidget_C_Setup_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconAndNameWidget.IconAndNameWidget_C.Setup Border
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UIconAndNameWidget_C::Setup_Border()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconAndNameWidget.IconAndNameWidget_C.Setup Border");

	UIconAndNameWidget_C_Setup_Border_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconAndNameWidget.IconAndNameWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UIconAndNameWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconAndNameWidget.IconAndNameWidget_C.PreConstruct");

	UIconAndNameWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconAndNameWidget.IconAndNameWidget_C.ExecuteUbergraph_IconAndNameWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UIconAndNameWidget_C::ExecuteUbergraph_IconAndNameWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconAndNameWidget.IconAndNameWidget_C.ExecuteUbergraph_IconAndNameWidget");

	UIconAndNameWidget_C_ExecuteUbergraph_IconAndNameWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
