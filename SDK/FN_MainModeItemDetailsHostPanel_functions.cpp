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

// Function MainModeItemDetailsHostPanel.MainModeItemDetailsHostPanel_C.UpdateDescriptionVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainModeItemDetailsHostPanel_C::UpdateDescriptionVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainModeItemDetailsHostPanel.MainModeItemDetailsHostPanel_C.UpdateDescriptionVisibility");

	UMainModeItemDetailsHostPanel_C_UpdateDescriptionVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainModeItemDetailsHostPanel.MainModeItemDetailsHostPanel_C.HandleHasItemMarkedForMulchingChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UMainModeItemDetailsHostPanel_C::HandleHasItemMarkedForMulchingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainModeItemDetailsHostPanel.MainModeItemDetailsHostPanel_C.HandleHasItemMarkedForMulchingChanged");

	UMainModeItemDetailsHostPanel_C_HandleHasItemMarkedForMulchingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainModeItemDetailsHostPanel.MainModeItemDetailsHostPanel_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMainModeItemDetailsHostPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainModeItemDetailsHostPanel.MainModeItemDetailsHostPanel_C.Construct");

	UMainModeItemDetailsHostPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainModeItemDetailsHostPanel.MainModeItemDetailsHostPanel_C.ExecuteUbergraph_MainModeItemDetailsHostPanel
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainModeItemDetailsHostPanel_C::ExecuteUbergraph_MainModeItemDetailsHostPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainModeItemDetailsHostPanel.MainModeItemDetailsHostPanel_C.ExecuteUbergraph_MainModeItemDetailsHostPanel");

	UMainModeItemDetailsHostPanel_C_ExecuteUbergraph_MainModeItemDetailsHostPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
