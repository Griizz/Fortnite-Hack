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

// Function StoreItemCardFront.StoreItemCardFront_C.Get Type Text
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   OutText                        (CPF_Parm, CPF_OutParm)

void UStoreItemCardFront_C::Get_Type_Text(struct FText* OutText)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreItemCardFront.StoreItemCardFront_C.Get Type Text");

	UStoreItemCardFront_C_Get_Type_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutText != nullptr)
		*OutText = params.OutText;
}


// Function StoreItemCardFront.StoreItemCardFront_C.Get Card Name Text
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UStoreItemCardFront_C::Get_Card_Name_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreItemCardFront.StoreItemCardFront_C.Get Card Name Text");

	UStoreItemCardFront_C_Get_Card_Name_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreItemCardFront.StoreItemCardFront_C.Draw_Card
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStoreItemCardFront_C::Draw_Card()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreItemCardFront.StoreItemCardFront_C.Draw_Card");

	UStoreItemCardFront_C_Draw_Card_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreItemCardFront.StoreItemCardFront_C.Initialize_Card
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCard                   inCard                         (CPF_Parm)

void UStoreItemCardFront_C::Initialize_Card(const struct FCard& inCard)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreItemCardFront.StoreItemCardFront_C.Initialize_Card");

	UStoreItemCardFront_C_Initialize_Card_Params params;
	params.inCard = inCard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreItemCardFront.StoreItemCardFront_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStoreItemCardFront_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreItemCardFront.StoreItemCardFront_C.Construct");

	UStoreItemCardFront_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreItemCardFront.StoreItemCardFront_C.OnFortStoreStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStoreItemCardFront_C::OnFortStoreStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreItemCardFront.StoreItemCardFront_C.OnFortStoreStateChanged");

	UStoreItemCardFront_C_OnFortStoreStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreItemCardFront.StoreItemCardFront_C.InitFromObject
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 InitObject                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStoreItemCardFront_C::InitFromObject(class UObject* InitObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreItemCardFront.StoreItemCardFront_C.InitFromObject");

	UStoreItemCardFront_C_InitFromObject_Params params;
	params.InitObject = InitObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreItemCardFront.StoreItemCardFront_C.ExecuteUbergraph_StoreItemCardFront
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStoreItemCardFront_C::ExecuteUbergraph_StoreItemCardFront(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreItemCardFront.StoreItemCardFront_C.ExecuteUbergraph_StoreItemCardFront");

	UStoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
