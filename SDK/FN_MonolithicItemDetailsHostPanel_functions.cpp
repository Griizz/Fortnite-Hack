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

// Function MonolithicItemDetailsHostPanel.MonolithicItemDetailsHostPanel_C.HandleHasItemMarkedForMulchingChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UMonolithicItemDetailsHostPanel_C::HandleHasItemMarkedForMulchingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonolithicItemDetailsHostPanel.MonolithicItemDetailsHostPanel_C.HandleHasItemMarkedForMulchingChanged");

	UMonolithicItemDetailsHostPanel_C_HandleHasItemMarkedForMulchingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonolithicItemDetailsHostPanel.MonolithicItemDetailsHostPanel_C.ExecuteUbergraph_MonolithicItemDetailsHostPanel
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMonolithicItemDetailsHostPanel_C::ExecuteUbergraph_MonolithicItemDetailsHostPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonolithicItemDetailsHostPanel.MonolithicItemDetailsHostPanel_C.ExecuteUbergraph_MonolithicItemDetailsHostPanel");

	UMonolithicItemDetailsHostPanel_C_ExecuteUbergraph_MonolithicItemDetailsHostPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
