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

// Function BP_SimpleItemWidget.BP_SimpleItemWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_SimpleItemWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimpleItemWidget.BP_SimpleItemWidget_C.Construct");

	UBP_SimpleItemWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SimpleItemWidget.BP_SimpleItemWidget_C.ExecuteUbergraph_BP_SimpleItemWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_SimpleItemWidget_C::ExecuteUbergraph_BP_SimpleItemWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimpleItemWidget.BP_SimpleItemWidget_C.ExecuteUbergraph_BP_SimpleItemWidget");

	UBP_SimpleItemWidget_C_ExecuteUbergraph_BP_SimpleItemWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
