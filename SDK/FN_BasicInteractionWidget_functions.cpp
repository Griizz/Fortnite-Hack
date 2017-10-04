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

// Function BasicInteractionWidget.BasicInteractionWidget_C.UpdateDescription
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Description                    (CPF_Parm)

void UBasicInteractionWidget_C::UpdateDescription(const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicInteractionWidget.BasicInteractionWidget_C.UpdateDescription");

	UBasicInteractionWidget_C_UpdateDescription_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicInteractionWidget.BasicInteractionWidget_C.InitBasicInteraction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBasicInteractionWidget_C::InitBasicInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicInteractionWidget.BasicInteractionWidget_C.InitBasicInteraction");

	UBasicInteractionWidget_C_InitBasicInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicInteractionWidget.BasicInteractionWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBasicInteractionWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicInteractionWidget.BasicInteractionWidget_C.Construct");

	UBasicInteractionWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicInteractionWidget.BasicInteractionWidget_C.ExecuteUbergraph_BasicInteractionWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasicInteractionWidget_C::ExecuteUbergraph_BasicInteractionWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicInteractionWidget.BasicInteractionWidget_C.ExecuteUbergraph_BasicInteractionWidget");

	UBasicInteractionWidget_C_ExecuteUbergraph_BasicInteractionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
