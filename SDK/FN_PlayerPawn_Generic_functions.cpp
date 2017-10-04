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

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Melee_Effect_Color
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Melee_Color_Set                (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void APlayerPawn_Generic_C::Melee_Effect_Color(struct FVector* Melee_Color_Set)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Melee_Effect_Color");

	APlayerPawn_Generic_C_Melee_Effect_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Melee_Color_Set != nullptr)
		*Melee_Color_Set = params.Melee_Color_Set;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Are the wind and water RTT passes enabled
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_Generic_C::Are_the_wind_and_water_RTT_passes_enabled(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Are the wind and water RTT passes enabled");

	APlayerPawn_Generic_C_Are_the_wind_and_water_RTT_passes_enabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.DisableWaterLevelTick
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::DisableWaterLevelTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.DisableWaterLevelTick");

	APlayerPawn_Generic_C_DisableWaterLevelTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetAdrenalineRushVisibility
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_Generic_C::SetAdrenalineRushVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetAdrenalineRushVisibility");

	APlayerPawn_Generic_C_SetAdrenalineRushVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnRep_On_Player_Built_Floor
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::OnRep_On_Player_Built_Floor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnRep_On_Player_Built_Floor");

	APlayerPawn_Generic_C_OnRep_On_Player_Built_Floor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Setup FX Mesh Duplicates
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInterface*      Material_to_Apply              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> Charm_MID_Array                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class USkeletalMeshComponent*  Charm_Mesh                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> Head_MID_Array                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class USkeletalMeshComponent*  Head_Mesh                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> Body_MID_Array                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class USkeletalMeshComponent*  Body_Mesh                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// int                            Translucent_Sort_Order         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Transfer_Material_Parameters   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_Generic_C::Setup_FX_Mesh_Duplicates(int Translucent_Sort_Order, bool Transfer_Material_Parameters, class UMaterialInterface** Material_to_Apply, TArray<class UMaterialInstanceDynamic*>* Charm_MID_Array, class USkeletalMeshComponent** Charm_Mesh, TArray<class UMaterialInstanceDynamic*>* Head_MID_Array, class USkeletalMeshComponent** Head_Mesh, TArray<class UMaterialInstanceDynamic*>* Body_MID_Array, class USkeletalMeshComponent** Body_Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Setup FX Mesh Duplicates");

	APlayerPawn_Generic_C_Setup_FX_Mesh_Duplicates_Params params;
	params.Translucent_Sort_Order = Translucent_Sort_Order;
	params.Transfer_Material_Parameters = Transfer_Material_Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Material_to_Apply != nullptr)
		*Material_to_Apply = params.Material_to_Apply;
	if (Charm_MID_Array != nullptr)
		*Charm_MID_Array = params.Charm_MID_Array;
	if (Charm_Mesh != nullptr)
		*Charm_Mesh = params.Charm_Mesh;
	if (Head_MID_Array != nullptr)
		*Head_MID_Array = params.Head_MID_Array;
	if (Head_Mesh != nullptr)
		*Head_Mesh = params.Head_Mesh;
	if (Body_MID_Array != nullptr)
		*Body_MID_Array = params.Body_MID_Array;
	if (Body_Mesh != nullptr)
		*Body_Mesh = params.Body_Mesh;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Create and Duplicate Effect Poseable Skeletal Mesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortCustomPartType> BodyType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMaterialInterface*      Material_to_Apply              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> Empty_MID_Array                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            TranslucentSortPriority        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPoseableMeshComponent*  PoseableMesh                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void APlayerPawn_Generic_C::Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh(TEnumAsByte<EFortCustomPartType> BodyType, class UMaterialInterface* Material_to_Apply, int TranslucentSortPriority, TArray<class UMaterialInstanceDynamic*>* Empty_MID_Array, class UPoseableMeshComponent** PoseableMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Create and Duplicate Effect Poseable Skeletal Mesh");

	APlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh_Params params;
	params.BodyType = BodyType;
	params.Material_to_Apply = Material_to_Apply;
	params.TranslucentSortPriority = TranslucentSortPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Empty_MID_Array != nullptr)
		*Empty_MID_Array = params.Empty_MID_Array;
	if (PoseableMesh != nullptr)
		*PoseableMesh = params.PoseableMesh;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.ToggleShieldVisibility
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::ToggleShieldVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.ToggleShieldVisibility");

	APlayerPawn_Generic_C_ToggleShieldVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SlaveAMeshToTheBody
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Mesh                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USkeletalMeshComponent*  Master                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_Generic_C::SlaveAMeshToTheBody(class USkeletalMeshComponent* Mesh, class USkeletalMeshComponent* Master)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.SlaveAMeshToTheBody");

	APlayerPawn_Generic_C_SlaveAMeshToTheBody_Params params;
	params.Mesh = Mesh;
	params.Master = Master;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetShieldMids_InternalLoop
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Highlight_Cracks               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Set_Highlight_Cracks           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Push                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Set_Push                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> NewParam1                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void APlayerPawn_Generic_C::SetShieldMids_InternalLoop(float Highlight_Cracks, bool Set_Highlight_Cracks, float Push, bool Set_Push, TArray<class UMaterialInstanceDynamic*>* NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetShieldMids_InternalLoop");

	APlayerPawn_Generic_C_SetShieldMids_InternalLoop_Params params;
	params.Highlight_Cracks = Highlight_Cracks;
	params.Set_Highlight_Cracks = Set_Highlight_Cracks;
	params.Push = Push;
	params.Set_Push = Set_Push;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam1 != nullptr)
		*NewParam1 = params.NewParam1;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetShieldMids
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Highlight_Cracks               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Set_Highlight_Cracks           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Push                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Set_Push                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_Generic_C::SetShieldMids(float Highlight_Cracks, bool Set_Highlight_Cracks, float Push, bool Set_Push)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetShieldMids");

	APlayerPawn_Generic_C_SetShieldMids_Params params;
	params.Highlight_Cracks = Highlight_Cracks;
	params.Set_Highlight_Cracks = Set_Highlight_Cracks;
	params.Push = Push;
	params.Set_Push = Set_Push;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.FindShieldOpacity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::FindShieldOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.FindShieldOpacity");

	APlayerPawn_Generic_C_FindShieldOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Create and Duplicate Effect Skeletal Meshes Parent
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortCustomPartType> BodyType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USkeletalMeshComponent*  DuplicatedSkeletalMeshComponent (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UMaterialInterface*      Material_to_Apply              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> Empty_MID_Array                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            TranslucentSortPriority        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_Generic_C::Create_and_Duplicate_Effect_Skeletal_Meshes_Parent(TEnumAsByte<EFortCustomPartType> BodyType, class UMaterialInterface* Material_to_Apply, int TranslucentSortPriority, class USkeletalMeshComponent** DuplicatedSkeletalMeshComponent, TArray<class UMaterialInstanceDynamic*>* Empty_MID_Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Create and Duplicate Effect Skeletal Meshes Parent");

	APlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent_Params params;
	params.BodyType = BodyType;
	params.Material_to_Apply = Material_to_Apply;
	params.TranslucentSortPriority = TranslucentSortPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DuplicatedSkeletalMeshComponent != nullptr)
		*DuplicatedSkeletalMeshComponent = params.DuplicatedSkeletalMeshComponent;
	if (Empty_MID_Array != nullptr)
		*Empty_MID_Array = params.Empty_MID_Array;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.UserConstructionScript");

	APlayerPawn_Generic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.CapsuleFadeTL__FinishedFunc
// (FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::CapsuleFadeTL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.CapsuleFadeTL__FinishedFunc");

	APlayerPawn_Generic_C_CapsuleFadeTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.CapsuleFadeTL__UpdateFunc
// (FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::CapsuleFadeTL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.CapsuleFadeTL__UpdateFunc");

	APlayerPawn_Generic_C_CapsuleFadeTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.HealthSweep__FinishedFunc
// (FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::HealthSweep__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.HealthSweep__FinishedFunc");

	APlayerPawn_Generic_C_HealthSweep__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.HealthSweep__UpdateFunc
// (FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::HealthSweep__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.HealthSweep__UpdateFunc");

	APlayerPawn_Generic_C_HealthSweep__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield Regen Timeline__FinishedFunc
// (FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::Shield_Regen_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield Regen Timeline__FinishedFunc");

	APlayerPawn_Generic_C_Shield_Regen_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield Regen Timeline__UpdateFunc
// (FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::Shield_Regen_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield Regen Timeline__UpdateFunc");

	APlayerPawn_Generic_C_Shield_Regen_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_ShatterTimeline__FinishedFunc
// (FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::Shield_ShatterTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_ShatterTimeline__FinishedFunc");

	APlayerPawn_Generic_C_Shield_ShatterTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_ShatterTimeline__UpdateFunc
// (FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::Shield_ShatterTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_ShatterTimeline__UpdateFunc");

	APlayerPawn_Generic_C_Shield_ShatterTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_DamageTimeline__FinishedFunc
// (FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::Shield_DamageTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_DamageTimeline__FinishedFunc");

	APlayerPawn_Generic_C_Shield_DamageTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_DamageTimeline__UpdateFunc
// (FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::Shield_DamageTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_DamageTimeline__UpdateFunc");

	APlayerPawn_Generic_C_Shield_DamageTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Full Shield Health__FinishedFunc
// (FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::Full_Shield_Health__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Full Shield Health__FinishedFunc");

	APlayerPawn_Generic_C_Full_Shield_Health__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Full Shield Health__UpdateFunc
// (FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::Full_Shield_Health__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Full Shield Health__UpdateFunc");

	APlayerPawn_Generic_C_Full_Shield_Health__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingRight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::MeleeSwingRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingRight");

	APlayerPawn_Generic_C_MeleeSwingRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingLeft
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::MeleeSwingLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingLeft");

	APlayerPawn_Generic_C_MeleeSwingLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDamagePlayEffects
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// float*                         Damage                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FVector*                Momentum                       (CPF_Parm, CPF_IsPlainOldData)
// struct FHitResult*             HitInfo                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor**                 DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (CPF_Parm)

void APlayerPawn_Generic_C::OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDamagePlayEffects");

	APlayerPawn_Generic_C_OnDamagePlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnLanded
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void APlayerPawn_Generic_C::OnLanded(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnLanded");

	APlayerPawn_Generic_C_OnLanded_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDeathPlayEffects
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// float*                         Damage                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FVector*                Momentum                       (CPF_Parm, CPF_IsPlainOldData)
// struct FHitResult*             HitInfo                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor**                 DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (CPF_Parm)

void APlayerPawn_Generic_C::OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDeathPlayEffects");

	APlayerPawn_Generic_C_OnDeathPlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnWeaponEquipped
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AFortWeapon**            NewWeapon                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFortWeapon**            PrevWeapon                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_Generic_C::OnWeaponEquipped(class AFortWeapon** NewWeapon, class AFortWeapon** PrevWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnWeaponEquipped");

	APlayerPawn_Generic_C_OnWeaponEquipped_Params params;
	params.NewWeapon = NewWeapon;
	params.PrevWeapon = PrevWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_Generic_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.ReceiveTick");

	APlayerPawn_Generic_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.FootStepLeft
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::FootStepLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.FootStepLeft");

	APlayerPawn_Generic_C_FootStepLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.FootStepRight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::FootStepRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.FootStepRight");

	APlayerPawn_Generic_C_FootStepRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnCharacterPartsReinitialized
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::OnCharacterPartsReinitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnCharacterPartsReinitialized");

	APlayerPawn_Generic_C_OnCharacterPartsReinitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)

void APlayerPawn_Generic_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1");

	APlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)

void APlayerPawn_Generic_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2");

	APlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetFirstPersonCamera
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bNewUseFirstPersonCamera       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_Generic_C::SetFirstPersonCamera(bool* bNewUseFirstPersonCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetFirstPersonCamera");

	APlayerPawn_Generic_C_SetFirstPersonCamera_Params params;
	params.bNewUseFirstPersonCamera = bNewUseFirstPersonCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.GravitySphere
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)

void APlayerPawn_Generic_C::GameplayCue_GravitySphere(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.GravitySphere");

	APlayerPawn_Generic_C_GameplayCue_GravitySphere_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.InternalSetFirstPersonCamera
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           NewUseFirstPersonCamera        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_Generic_C::InternalSetFirstPersonCamera(bool NewUseFirstPersonCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.InternalSetFirstPersonCamera");

	APlayerPawn_Generic_C_InternalSetFirstPersonCamera_Params params;
	params.NewUseFirstPersonCamera = NewUseFirstPersonCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.DBNOResurrect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)

void APlayerPawn_Generic_C::GameplayCue_Abilities_Activation_DBNOResurrect(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.DBNOResurrect");

	APlayerPawn_Generic_C_GameplayCue_Abilities_Activation_DBNOResurrect_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnBaseChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AActor**                 NewBase                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_Generic_C::OnBaseChanged(class AActor** NewBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnBaseChanged");

	APlayerPawn_Generic_C_OnBaseChanged_Params params;
	params.NewBase = NewBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.ReceivePossessed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AController**            NewController                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_Generic_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.ReceivePossessed");

	APlayerPawn_Generic_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDisplaySentence
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText*                  SpeechText                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void APlayerPawn_Generic_C::OnDisplaySentence(struct FText* SpeechText)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDisplaySentence");

	APlayerPawn_Generic_C_OnDisplaySentence_Params params;
	params.SpeechText = SpeechText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnClearSentence
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::OnClearSentence()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnClearSentence");

	APlayerPawn_Generic_C_OnClearSentence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.CleanupGravitySphereFootEffects
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::CleanupGravitySphereFootEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.CleanupGravitySphereFootEffects");

	APlayerPawn_Generic_C_CleanupGravitySphereFootEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.ReceiveDestroyed");

	APlayerPawn_Generic_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.ClientBindWeaponSwap
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortWeapon*             NewWeapon                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFortWeapon*             PrevWeapon                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_Generic_C::ClientBindWeaponSwap(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.ClientBindWeaponSwap");

	APlayerPawn_Generic_C_ClientBindWeaponSwap_Params params;
	params.NewWeapon = NewWeapon;
	params.PrevWeapon = PrevWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.BindWeaponSwap
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InDuration                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_Generic_C::BindWeaponSwap(float InDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.BindWeaponSwap");

	APlayerPawn_Generic_C_BindWeaponSwap_Params params;
	params.InDuration = InDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.MultiSwapWeapon
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortWeapon*             New                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFortWeapon*             Prev                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_Generic_C::MultiSwapWeapon(class AFortWeapon* New, class AFortWeapon* Prev)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.MultiSwapWeapon");

	APlayerPawn_Generic_C_MultiSwapWeapon_Params params;
	params.New = New;
	params.Prev = Prev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.UnBindWeaponSwap
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::UnBindWeaponSwap()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.UnBindWeaponSwap");

	APlayerPawn_Generic_C_UnBindWeaponSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.MultiEndSwap
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortWeapon*             CurrentWeapon                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_Generic_C::MultiEndSwap(class AFortWeapon* CurrentWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.MultiEndSwap");

	APlayerPawn_Generic_C_MultiEndSwap_Params params;
	params.CurrentWeapon = CurrentWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Clean up DBNO fx
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::Clean_up_DBNO_fx()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Clean up DBNO fx");

	APlayerPawn_Generic_C_Clean_up_DBNO_fx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDeathServer
// (FUNC_BlueprintAuthorityOnly, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// float*                         Damage                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FVector*                Momentum                       (CPF_Parm, CPF_IsPlainOldData)
// struct FHitResult*             HitInfo                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// class AController**            InstigatedBy                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor**                 DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (CPF_Parm)

void APlayerPawn_Generic_C::OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDeathServer");

	APlayerPawn_Generic_C_OnDeathServer_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Entered WaterVolume
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::Entered_WaterVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Entered WaterVolume");

	APlayerPawn_Generic_C_Entered_WaterVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.CharacterDestroyed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_Generic_C::CharacterDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.CharacterDestroyed");

	APlayerPawn_Generic_C_CharacterDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.BindOnDestroyed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::BindOnDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.BindOnDestroyed");

	APlayerPawn_Generic_C_BindOnDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.FadeOutCapsuleShadow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::FadeOutCapsuleShadow()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.FadeOutCapsuleShadow");

	APlayerPawn_Generic_C_FadeOutCapsuleShadow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SpawnDBNOParticles
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 ParticleLocation               (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 HitNormal                      (CPF_Parm, CPF_IsPlainOldData)

void APlayerPawn_Generic_C::SpawnDBNOParticles(const struct FVector& ParticleLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.SpawnDBNOParticles");

	APlayerPawn_Generic_C_SpawnDBNOParticles_Params params;
	params.ParticleLocation = ParticleLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnLand_CE
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::OnLand_CE()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnLand_CE");

	APlayerPawn_Generic_C_OnLand_CE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Test Adrenaline Rush
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::Test_Adrenaline_Rush()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Test Adrenaline Rush");

	APlayerPawn_Generic_C_Test_Adrenaline_Rush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Generic.AdrenalineRush.PeriodicHeal
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)

void APlayerPawn_Generic_C::GameplayCue_Generic_AdrenalineRush_PeriodicHeal(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Generic.AdrenalineRush.PeriodicHeal");

	APlayerPawn_Generic_C_GameplayCue_Generic_AdrenalineRush_PeriodicHeal_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Generic.AdrenalineRush.DirectHeal
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)

void APlayerPawn_Generic_C::GameplayCue_Generic_AdrenalineRush_DirectHeal(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Generic.AdrenalineRush.DirectHeal");

	APlayerPawn_Generic_C_GameplayCue_Generic_AdrenalineRush_DirectHeal_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Damage.Shielded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)

void APlayerPawn_Generic_C::GameplayCue_Damage_Shielded(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Damage.Shielded");

	APlayerPawn_Generic_C_GameplayCue_Damage_Shielded_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.Destroyed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)

void APlayerPawn_Generic_C::GameplayCue_Shield_Destroyed(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.Destroyed");

	APlayerPawn_Generic_C_GameplayCue_Shield_Destroyed_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.FullyCharged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)

void APlayerPawn_Generic_C::GameplayCue_Shield_FullyCharged(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.FullyCharged");

	APlayerPawn_Generic_C_GameplayCue_Shield_FullyCharged_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.Reapplied
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)

void APlayerPawn_Generic_C::GameplayCue_Shield_Reapplied(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.Reapplied");

	APlayerPawn_Generic_C_GameplayCue_Shield_Reapplied_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.MultiEndAnimTrails
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::MultiEndAnimTrails()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.MultiEndAnimTrails");

	APlayerPawn_Generic_C_MultiEndAnimTrails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.DisableAnimTrails
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_Generic_C::DisableAnimTrails()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.DisableAnimTrails");

	APlayerPawn_Generic_C_DisableAnimTrails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.AnimTrailsCE
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_Generic_C::AnimTrailsCE(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.AnimTrailsCE");

	APlayerPawn_Generic_C_AnimTrailsCE_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetupAnimTrails
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UParticleSystem*         Particle_System_Reference      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   First_Socket_Name              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Second_Socket_Name             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Width                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_Generic_C::SetupAnimTrails(class UParticleSystem* Particle_System_Reference, const struct FName& First_Socket_Name, const struct FName& Second_Socket_Name, float Width)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetupAnimTrails");

	APlayerPawn_Generic_C_SetupAnimTrails_Params params;
	params.Particle_System_Reference = Particle_System_Reference;
	params.First_Socket_Name = First_Socket_Name;
	params.Second_Socket_Name = Second_Socket_Name;
	params.Width = Width;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.ExecuteUbergraph_PlayerPawn_Generic
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_Generic_C::ExecuteUbergraph_PlayerPawn_Generic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.ExecuteUbergraph_PlayerPawn_Generic");

	APlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
