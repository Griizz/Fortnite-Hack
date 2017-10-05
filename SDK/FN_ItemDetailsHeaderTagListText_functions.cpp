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

// Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.FormatItemDisplayTags
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FText>           TagTexts                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FText                   FormatedText                   (CPF_Parm, CPF_OutParm)

void UItemDetailsHeaderTagListText_C::FormatItemDisplayTags(TArray<struct FText>* TagTexts, struct FText* FormatedText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.FormatItemDisplayTags");

	UItemDetailsHeaderTagListText_C_FormatItemDisplayTags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TagTexts != nullptr)
		*TagTexts = params.TagTexts;
	if (FormatedText != nullptr)
		*FormatedText = params.FormatedText;
}


// Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.HandlePostDifferentItemToDetailSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemDetailsHeaderTagListText_C::HandlePostDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.HandlePostDifferentItemToDetailSet");

	UItemDetailsHeaderTagListText_C_HandlePostDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.HandlePostDifferentItemToCompareWithSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemDetailsHeaderTagListText_C::HandlePostDifferentItemToCompareWithSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.HandlePostDifferentItemToCompareWithSet");

	UItemDetailsHeaderTagListText_C_HandlePostDifferentItemToCompareWithSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemDetailsHeaderTagListText_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.Construct");

	UItemDetailsHeaderTagListText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.ExecuteUbergraph_ItemDetailsHeaderTagListText
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemDetailsHeaderTagListText_C::ExecuteUbergraph_ItemDetailsHeaderTagListText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.ExecuteUbergraph_ItemDetailsHeaderTagListText");

	UItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
