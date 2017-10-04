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

// Function UsedPlacementActorsContext.UsedPlacementActorsContext_C.ProvideActorsSet
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UObject**                QuerierObject                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor**                 QuerierActor                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class AActor*>          ResultingActorsSet             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UUsedPlacementActorsContext_C::ProvideActorsSet(class UObject** QuerierObject, class AActor** QuerierActor, TArray<class AActor*>* ResultingActorsSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function UsedPlacementActorsContext.UsedPlacementActorsContext_C.ProvideActorsSet");

	UUsedPlacementActorsContext_C_ProvideActorsSet_Params params;
	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultingActorsSet != nullptr)
		*ResultingActorsSet = params.ResultingActorsSet;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
