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

// Function AthenaInventoryDragVisual.AthenaInventoryDragVisual_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaInventoryDragVisual_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryDragVisual.AthenaInventoryDragVisual_C.Construct");

	UAthenaInventoryDragVisual_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryDragVisual.AthenaInventoryDragVisual_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaInventoryDragVisual_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryDragVisual.AthenaInventoryDragVisual_C.PreConstruct");

	UAthenaInventoryDragVisual_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryDragVisual.AthenaInventoryDragVisual_C.ExecuteUbergraph_AthenaInventoryDragVisual
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaInventoryDragVisual_C::ExecuteUbergraph_AthenaInventoryDragVisual(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryDragVisual.AthenaInventoryDragVisual_C.ExecuteUbergraph_AthenaInventoryDragVisual");

	UAthenaInventoryDragVisual_C_ExecuteUbergraph_AthenaInventoryDragVisual_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
