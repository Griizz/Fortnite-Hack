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

// Function PlayerSpawnPlacementActor.PlayerSpawnPlacementActor_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerSpawnPlacementActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSpawnPlacementActor.PlayerSpawnPlacementActor_C.UserConstructionScript");

	APlayerSpawnPlacementActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
