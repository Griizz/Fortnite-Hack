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

// Function StatsModeItemDetailsHostPanel.StatsModeItemDetailsHostPanel_C.HandleHasItemMarkedForMulchingChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UStatsModeItemDetailsHostPanel_C::HandleHasItemMarkedForMulchingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsModeItemDetailsHostPanel.StatsModeItemDetailsHostPanel_C.HandleHasItemMarkedForMulchingChanged");

	UStatsModeItemDetailsHostPanel_C_HandleHasItemMarkedForMulchingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsModeItemDetailsHostPanel.StatsModeItemDetailsHostPanel_C.ExecuteUbergraph_StatsModeItemDetailsHostPanel
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStatsModeItemDetailsHostPanel_C::ExecuteUbergraph_StatsModeItemDetailsHostPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsModeItemDetailsHostPanel.StatsModeItemDetailsHostPanel_C.ExecuteUbergraph_StatsModeItemDetailsHostPanel");

	UStatsModeItemDetailsHostPanel_C_ExecuteUbergraph_StatsModeItemDetailsHostPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
