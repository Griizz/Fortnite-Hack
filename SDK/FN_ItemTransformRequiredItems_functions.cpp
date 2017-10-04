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

// Function ItemTransformRequiredItems.ItemTransformRequiredItems_C.UpdateItems
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               TransformKey                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            SacrificePoints                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformRequiredItems_C::UpdateItems(class UFortItem* TransformKey, int SacrificePoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformRequiredItems.ItemTransformRequiredItems_C.UpdateItems");

	UItemTransformRequiredItems_C_UpdateItems_Params params;
	params.TransformKey = TransformKey;
	params.SacrificePoints = SacrificePoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
