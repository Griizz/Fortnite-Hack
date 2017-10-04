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

// Function ItemWindow.ItemWindow_C.Set Description Text
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItemDefinition*     Item_Definition                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonTextBlock*        Text_Box_to_Set                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemWindow_C::Set_Description_Text(class UFortItemDefinition* Item_Definition, class UCommonTextBlock* Text_Box_to_Set)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.Set Description Text");

	UItemWindow_C_Set_Description_Text_Params params;
	params.Item_Definition = Item_Definition;
	params.Text_Box_to_Set = Text_Box_to_Set;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWindow.ItemWindow_C.InternalToExternalRarity
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ExternalRarity                 (CPF_Parm, CPF_OutParm)

void UItemWindow_C::InternalToExternalRarity(struct FText* ExternalRarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.InternalToExternalRarity");

	UItemWindow_C_InternalToExternalRarity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExternalRarity != nullptr)
		*ExternalRarity = params.ExternalRarity;
}


// Function ItemWindow.ItemWindow_C.HandleButton
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Content                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemWindow_C::HandleButton(class UWidget* Content, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.HandleButton");

	UItemWindow_C_HandleButton_Params params;
	params.Content = Content;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWindow.ItemWindow_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemWindow_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.Initialize");

	UItemWindow_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWindow.ItemWindow_C.AddInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFortItemDefinition*> Info_Items                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FText                   Title                          (CPF_Parm)

void UItemWindow_C::AddInfo(const struct FText& Title, TArray<class UFortItemDefinition*>* Info_Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.AddInfo");

	UItemWindow_C_AddInfo_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info_Items != nullptr)
		*Info_Items = params.Info_Items;
}


// Function ItemWindow.ItemWindow_C.OnSelectedButtonChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           AssociatedButton               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ButtonIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemWindow_C::OnSelectedButtonChanged_Event_1(class UCommonButton* AssociatedButton, int ButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.OnSelectedButtonChanged_Event_1");

	UItemWindow_C_OnSelectedButtonChanged_Event_1_Params params;
	params.AssociatedButton = AssociatedButton;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWindow.ItemWindow_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemWindow_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.Destruct");

	UItemWindow_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWindow.ItemWindow_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.Construct");

	UItemWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWindow.ItemWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemWindow_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature");

	UItemWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWindow.ItemWindow_C.ExecuteUbergraph_ItemWindow
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemWindow_C::ExecuteUbergraph_ItemWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.ExecuteUbergraph_ItemWindow");

	UItemWindow_C_ExecuteUbergraph_ItemWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
