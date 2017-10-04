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

// Function KillerPortraitWidget.KillerPortraitWidget_C.Init
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortKillerVisualInfo   KillerVisualInfo               (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UKillerPortraitWidget_C::Init(struct FFortKillerVisualInfo* KillerVisualInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillerPortraitWidget.KillerPortraitWidget_C.Init");

	UKillerPortraitWidget_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KillerVisualInfo != nullptr)
		*KillerVisualInfo = params.KillerVisualInfo;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
