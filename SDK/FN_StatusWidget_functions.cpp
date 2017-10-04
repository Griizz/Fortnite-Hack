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

// Function StatusWidget.StatusWidget_C.UpdateLoginStatusText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UStatusWidget_C::UpdateLoginStatusText()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.UpdateLoginStatusText");

	UStatusWidget_C_UpdateLoginStatusText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StatusWidget.StatusWidget_C.SetStatusText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Status                         (CPF_Parm)

void UStatusWidget_C::SetStatusText(const struct FText& Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.SetStatusText");

	UStatusWidget_C_SetStatusText_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.SetTitleText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   TitleText                      (CPF_Parm)

void UStatusWidget_C::SetTitleText(const struct FText& TitleText)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.SetTitleText");

	UStatusWidget_C_SetTitleText_Params params;
	params.TitleText = TitleText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStatusWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.Construct");

	UStatusWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStatusWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.Destruct");

	UStatusWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.ExecuteUbergraph_StatusWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStatusWidget_C::ExecuteUbergraph_StatusWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.ExecuteUbergraph_StatusWidget");

	UStatusWidget_C_ExecuteUbergraph_StatusWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
