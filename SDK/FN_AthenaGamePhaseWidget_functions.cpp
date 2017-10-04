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

// Function AthenaGamePhaseWidget.AthenaGamePhaseWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaGamePhaseWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGamePhaseWidget.AthenaGamePhaseWidget_C.Construct");

	UAthenaGamePhaseWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGamePhaseWidget.AthenaGamePhaseWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaGamePhaseWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGamePhaseWidget.AthenaGamePhaseWidget_C.Tick");

	UAthenaGamePhaseWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGamePhaseWidget.AthenaGamePhaseWidget_C.ExecuteUbergraph_AthenaGamePhaseWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaGamePhaseWidget_C::ExecuteUbergraph_AthenaGamePhaseWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGamePhaseWidget.AthenaGamePhaseWidget_C.ExecuteUbergraph_AthenaGamePhaseWidget");

	UAthenaGamePhaseWidget_C_ExecuteUbergraph_AthenaGamePhaseWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
