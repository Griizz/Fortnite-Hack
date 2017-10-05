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

// Function AlterationsWidget.AlterationsWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAlterationsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationsWidget.AlterationsWidget_C.Construct");

	UAlterationsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationsWidget.AlterationsWidget_C.OnGenerateAlteration
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFortUIAlteration*      AlterationInfo                 (CPF_Parm)

void UAlterationsWidget_C::OnGenerateAlteration(struct FFortUIAlteration* AlterationInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationsWidget.AlterationsWidget_C.OnGenerateAlteration");

	UAlterationsWidget_C_OnGenerateAlteration_Params params;
	params.AlterationInfo = AlterationInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationsWidget.AlterationsWidget_C.OnItemChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAlterationsWidget_C::OnItemChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationsWidget.AlterationsWidget_C.OnItemChanged");

	UAlterationsWidget_C_OnItemChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationsWidget.AlterationsWidget_C.OnItemToCompareWithChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAlterationsWidget_C::OnItemToCompareWithChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationsWidget.AlterationsWidget_C.OnItemToCompareWithChanged");

	UAlterationsWidget_C_OnItemToCompareWithChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationsWidget.AlterationsWidget_C.OnStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAlterationsWidget_C::OnStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationsWidget.AlterationsWidget_C.OnStateChanged");

	UAlterationsWidget_C_OnStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationsWidget.AlterationsWidget_C.ExecuteUbergraph_AlterationsWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAlterationsWidget_C::ExecuteUbergraph_AlterationsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationsWidget.AlterationsWidget_C.ExecuteUbergraph_AlterationsWidget");

	UAlterationsWidget_C_ExecuteUbergraph_AlterationsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
