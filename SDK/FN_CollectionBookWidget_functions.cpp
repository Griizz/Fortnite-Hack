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

// Function CollectionBookWidget.CollectionBookWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCollectionBookWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookWidget.CollectionBookWidget_C.Construct");

	UCollectionBookWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookWidget.CollectionBookWidget_C.SlotItemComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortAccountItem*        ItemSlotted                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SlotId                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookWidget_C::SlotItemComplete(class UFortAccountItem* ItemSlotted, const struct FName& SlotId)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookWidget.CollectionBookWidget_C.SlotItemComplete");

	UCollectionBookWidget_C_SlotItemComplete_Params params;
	params.ItemSlotted = ItemSlotted;
	params.SlotId = SlotId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookWidget.CollectionBookWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCollectionBookWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookWidget.CollectionBookWidget_C.Destruct");

	UCollectionBookWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookWidget.CollectionBookWidget_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UCollectionBookWidget_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookWidget.CollectionBookWidget_C.OnActivated");

	UCollectionBookWidget_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookWidget.CollectionBookWidget_C.ExecuteUbergraph_CollectionBookWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookWidget_C::ExecuteUbergraph_CollectionBookWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookWidget.CollectionBookWidget_C.ExecuteUbergraph_CollectionBookWidget");

	UCollectionBookWidget_C_ExecuteUbergraph_CollectionBookWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
