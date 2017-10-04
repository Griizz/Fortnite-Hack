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

// Function HeroNotificationHandler.HeroNotificationHandler_C.CreateWidget
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController**      OwningPlayer                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UUserWidget*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UUserWidget* UHeroNotificationHandler_C::CreateWidget(class APlayerController** OwningPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroNotificationHandler.HeroNotificationHandler_C.CreateWidget");

	UHeroNotificationHandler_C_CreateWidget_Params params;
	params.OwningPlayer = OwningPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
