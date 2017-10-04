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

// Function ProgressWidget.ProgressWidget_C.SetIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateBrush             IconBrush                      (CPF_Parm)

void UProgressWidget_C::SetIcon(const struct FSlateBrush& IconBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressWidget.ProgressWidget_C.SetIcon");

	UProgressWidget_C_SetIcon_Params params;
	params.IconBrush = IconBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressWidget.ProgressWidget_C.SetDescription
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Description                    (CPF_Parm)

void UProgressWidget_C::SetDescription(const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressWidget.ProgressWidget_C.SetDescription");

	UProgressWidget_C_SetDescription_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressWidget.ProgressWidget_C.SetTitle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_Parm)

void UProgressWidget_C::SetTitle(const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressWidget.ProgressWidget_C.SetTitle");

	UProgressWidget_C_SetTitle_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
