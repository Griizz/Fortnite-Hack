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

// Function News.News_C.UpdateInfoPanel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   BodyText                       (CPF_Parm)

void UNews_C::UpdateInfoPanel(const struct FText& BodyText)
{
	static auto fn = UObject::FindObject<UFunction>("Function News.News_C.UpdateInfoPanel");

	UNews_C_UpdateInfoPanel_Params params;
	params.BodyText = BodyText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function News.News_C.Init
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNews_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function News.News_C.Init");

	UNews_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function News.News_C.PopulateEntries
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEmpty                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNews_C::PopulateEntries(bool* IsEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function News.News_C.PopulateEntries");

	UNews_C_PopulateEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEmpty != nullptr)
		*IsEmpty = params.IsEmpty;
}


// Function News.News_C.AddEntry
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   inEntryText                    (CPF_Parm)

void UNews_C::AddEntry(const struct FText& inEntryText)
{
	static auto fn = UObject::FindObject<UFunction>("Function News.News_C.AddEntry");

	UNews_C_AddEntry_Params params;
	params.inEntryText = inEntryText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function News.News_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNews_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function News.News_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature");

	UNews_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function News.News_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNews_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function News.News_C.Construct");

	UNews_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function News.News_C.ExecuteUbergraph_News
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNews_C::ExecuteUbergraph_News(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function News.News_C.ExecuteUbergraph_News");

	UNews_C_ExecuteUbergraph_News_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
