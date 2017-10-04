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

// Function ItemRatingIndicator.ItemRatingIndicator_C.HandleViewModelChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemRatingIndicator_C::HandleViewModelChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemRatingIndicator.ItemRatingIndicator_C.HandleViewModelChanged");

	UItemRatingIndicator_C_HandleViewModelChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemRatingIndicator.ItemRatingIndicator_C.ExecuteUbergraph_ItemRatingIndicator
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemRatingIndicator_C::ExecuteUbergraph_ItemRatingIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemRatingIndicator.ItemRatingIndicator_C.ExecuteUbergraph_ItemRatingIndicator");

	UItemRatingIndicator_C_ExecuteUbergraph_ItemRatingIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
