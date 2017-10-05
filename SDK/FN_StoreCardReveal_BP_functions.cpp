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

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.RarityEnumToText
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EFortRarity                    InRarity                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   OutRarity                      (CPF_Parm, CPF_OutParm)

void AStoreCardReveal_BP_C::RarityEnumToText(EFortRarity InRarity, struct FText* OutRarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.RarityEnumToText");

	AStoreCardReveal_BP_C_RarityEnumToText_Params params;
	params.InRarity = InRarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRarity != nullptr)
		*OutRarity = params.OutRarity;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.IsDefender
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortAccountItemDefinition* Object                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsDefender                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Result                         (CPF_Parm, CPF_OutParm)

void AStoreCardReveal_BP_C::IsDefender(class UFortAccountItemDefinition* Object, bool* IsDefender, struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.IsDefender");

	AStoreCardReveal_BP_C_IsDefender_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDefender != nullptr)
		*IsDefender = params.IsDefender;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SetText_CCB
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Hide                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AStoreCardReveal_BP_C::SetText_CCB(bool Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.SetText_CCB");

	AStoreCardReveal_BP_C_SetText_CCB_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SetText_CCA
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Hide                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AStoreCardReveal_BP_C::SetText_CCA(bool Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.SetText_CCA");

	AStoreCardReveal_BP_C_SetText_CCA_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.UserConstructionScript");

	AStoreCardReveal_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardExit__FinishedFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_CardExit__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardExit__FinishedFunc");

	AStoreCardReveal_BP_C_TL_CardExit__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardExit__UpdateFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_CardExit__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardExit__UpdateFunc");

	AStoreCardReveal_BP_C_TL_CardExit__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardExit__Proceed__EventFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_CardExit__Proceed__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardExit__Proceed__EventFunc");

	AStoreCardReveal_BP_C_TL_CardExit__Proceed__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardFlipToFront__FinishedFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_CardFlipToFront__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardFlipToFront__FinishedFunc");

	AStoreCardReveal_BP_C_TL_CardFlipToFront__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardFlipToFront__UpdateFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_CardFlipToFront__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardFlipToFront__UpdateFunc");

	AStoreCardReveal_BP_C_TL_CardFlipToFront__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardUpgradeFast__FinishedFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_CardUpgradeFast__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardUpgradeFast__FinishedFunc");

	AStoreCardReveal_BP_C_TL_CardUpgradeFast__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardUpgradeFast__UpdateFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_CardUpgradeFast__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardUpgradeFast__UpdateFunc");

	AStoreCardReveal_BP_C_TL_CardUpgradeFast__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-Reveal-CC-Choices__FinishedFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_Reveal_CC_Choices__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-Reveal-CC-Choices__FinishedFunc");

	AStoreCardReveal_BP_C_TL_Reveal_CC_Choices__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-Reveal-CC-Choices__UpdateFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_Reveal_CC_Choices__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-Reveal-CC-Choices__UpdateFunc");

	AStoreCardReveal_BP_C_TL_Reveal_CC_Choices__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-ClearPostProcessDOFSettings__FinishedFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_ClearPostProcessDOFSettings__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-ClearPostProcessDOFSettings__FinishedFunc");

	AStoreCardReveal_BP_C_TL_ClearPostProcessDOFSettings__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-ClearPostProcessDOFSettings__UpdateFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_ClearPostProcessDOFSettings__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-ClearPostProcessDOFSettings__UpdateFunc");

	AStoreCardReveal_BP_C_TL_ClearPostProcessDOFSettings__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-FlareFX__FinishedFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_CC_FlareFX__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-FlareFX__FinishedFunc");

	AStoreCardReveal_BP_C_TL_CC_FlareFX__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-FlareFX__UpdateFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_CC_FlareFX__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-FlareFX__UpdateFunc");

	AStoreCardReveal_BP_C_TL_CC_FlareFX__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__FinishedFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_SelectedChoiceCardAnims__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__FinishedFunc");

	AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__UpdateFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_SelectedChoiceCardAnims__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__UpdateFunc");

	AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__SpeedTimeBackUp__EventFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_SelectedChoiceCardAnims__SpeedTimeBackUp__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__SpeedTimeBackUp__EventFunc");

	AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__SpeedTimeBackUp__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__CameraFOV__EventFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_SelectedChoiceCardAnims__CameraFOV__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__CameraFOV__EventFunc");

	AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__CameraFOV__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__CC-Phase2-Hide__EventFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_SelectedChoiceCardAnims__CC_Phase2_Hide__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__CC-Phase2-Hide__EventFunc");

	AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__CC_Phase2_Hide__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__CC-Phase2__EventFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_SelectedChoiceCardAnims__CC_Phase2__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__CC-Phase2__EventFunc");

	AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__CC_Phase2__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A__FinishedFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_MouseoverCC_A__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A__FinishedFunc");

	AStoreCardReveal_BP_C_TL_MouseoverCC_A__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A__UpdateFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_MouseoverCC_A__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A__UpdateFunc");

	AStoreCardReveal_BP_C_TL_MouseoverCC_A__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A-End__FinishedFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_MouseoverCC_A_End__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A-End__FinishedFunc");

	AStoreCardReveal_BP_C_TL_MouseoverCC_A_End__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A-End__UpdateFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_MouseoverCC_A_End__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A-End__UpdateFunc");

	AStoreCardReveal_BP_C_TL_MouseoverCC_A_End__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B__FinishedFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_MouseoverCC_B__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B__FinishedFunc");

	AStoreCardReveal_BP_C_TL_MouseoverCC_B__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B__UpdateFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_MouseoverCC_B__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B__UpdateFunc");

	AStoreCardReveal_BP_C_TL_MouseoverCC_B__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B-End__FinishedFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_MouseoverCC_B_End__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B-End__FinishedFunc");

	AStoreCardReveal_BP_C_TL_MouseoverCC_B_End__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B-End__UpdateFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_MouseoverCC_B_End__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B-End__UpdateFunc");

	AStoreCardReveal_BP_C_TL_MouseoverCC_B_End__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-Reveal__FinishedFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_CCA_Reveal__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-Reveal__FinishedFunc");

	AStoreCardReveal_BP_C_TL_CCA_Reveal__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-Reveal__UpdateFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_CCA_Reveal__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-Reveal__UpdateFunc");

	AStoreCardReveal_BP_C_TL_CCA_Reveal__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-Reveal__FinishedFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_CCB_Reveal__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-Reveal__FinishedFunc");

	AStoreCardReveal_BP_C_TL_CCB_Reveal__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-Reveal__UpdateFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_CCB_Reveal__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-Reveal__UpdateFunc");

	AStoreCardReveal_BP_C_TL_CCB_Reveal__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-QuestionMarkAnim__FinishedFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_CC_QuestionMarkAnim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-QuestionMarkAnim__FinishedFunc");

	AStoreCardReveal_BP_C_TL_CC_QuestionMarkAnim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-QuestionMarkAnim__UpdateFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_CC_QuestionMarkAnim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-QuestionMarkAnim__UpdateFunc");

	AStoreCardReveal_BP_C_TL_CC_QuestionMarkAnim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-AmbientAnim__FinishedFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_CCA_AmbientAnim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-AmbientAnim__FinishedFunc");

	AStoreCardReveal_BP_C_TL_CCA_AmbientAnim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-AmbientAnim__UpdateFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_CCA_AmbientAnim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-AmbientAnim__UpdateFunc");

	AStoreCardReveal_BP_C_TL_CCA_AmbientAnim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-AmbientAnim__FinishedFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_CCB_AmbientAnim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-AmbientAnim__FinishedFunc");

	AStoreCardReveal_BP_C_TL_CCB_AmbientAnim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-AmbientAnim__UpdateFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_CCB_AmbientAnim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-AmbientAnim__UpdateFunc");

	AStoreCardReveal_BP_C_TL_CCB_AmbientAnim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-DataDiskBurns__FinishedFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_CC_DataDiskBurns__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-DataDiskBurns__FinishedFunc");

	AStoreCardReveal_BP_C_TL_CC_DataDiskBurns__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-DataDiskBurns__UpdateFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_CC_DataDiskBurns__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-DataDiskBurns__UpdateFunc");

	AStoreCardReveal_BP_C_TL_CC_DataDiskBurns__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-DataDiskBurns__ChangeTexture__EventFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_CC_DataDiskBurns__ChangeTexture__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-DataDiskBurns__ChangeTexture__EventFunc");

	AStoreCardReveal_BP_C_TL_CC_DataDiskBurns__ChangeTexture__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardMoveToScreen__FinishedFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_CardMoveToScreen__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardMoveToScreen__FinishedFunc");

	AStoreCardReveal_BP_C_TL_CardMoveToScreen__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardMoveToScreen__UpdateFunc
// (FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TL_CardMoveToScreen__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardMoveToScreen__UpdateFunc");

	AStoreCardReveal_BP_C_TL_CardMoveToScreen__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_EFC62B084995CBCCD64787B5C4EF30E6
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AStoreCardReveal_BP_C::OnLoaded_EFC62B084995CBCCD64787B5C4EF30E6(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_EFC62B084995CBCCD64787B5C4EF30E6");

	AStoreCardReveal_BP_C_OnLoaded_EFC62B084995CBCCD64787B5C4EF30E6_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_90006C1C471D136EF3B142B7181AC990
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AStoreCardReveal_BP_C::OnLoaded_90006C1C471D136EF3B142B7181AC990(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_90006C1C471D136EF3B142B7181AC990");

	AStoreCardReveal_BP_C_OnLoaded_90006C1C471D136EF3B142B7181AC990_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_8
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void AStoreCardReveal_BP_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_8");

	AStoreCardReveal_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_7
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void AStoreCardReveal_BP_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_7");

	AStoreCardReveal_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_EFC62B084995CBCCD64787B51198EA0F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AStoreCardReveal_BP_C::OnLoaded_EFC62B084995CBCCD64787B51198EA0F(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_EFC62B084995CBCCD64787B51198EA0F");

	AStoreCardReveal_BP_C_OnLoaded_EFC62B084995CBCCD64787B51198EA0F_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_6
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void AStoreCardReveal_BP_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_6");

	AStoreCardReveal_BP_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_90006C1C471D136EF3B142B7CD6D1379
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AStoreCardReveal_BP_C::OnLoaded_90006C1C471D136EF3B142B7CD6D1379(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_90006C1C471D136EF3B142B7CD6D1379");

	AStoreCardReveal_BP_C_OnLoaded_90006C1C471D136EF3B142B7CD6D1379_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpTchEvt_Released
// (FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)

void AStoreCardReveal_BP_C::InpTchEvt_Released(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpTchEvt_Released");

	AStoreCardReveal_BP_C_InpTchEvt_Released_Params params;
	params.FingerIndex = FingerIndex;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpTchEvt_Pressed
// (FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)

void AStoreCardReveal_BP_C::InpTchEvt_Pressed(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpTchEvt_Pressed");

	AStoreCardReveal_BP_C_InpTchEvt_Pressed_Params params;
	params.FingerIndex = FingerIndex;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void AStoreCardReveal_BP_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5");

	AStoreCardReveal_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InitiatePinata
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::InitiatePinata()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.InitiatePinata");

	AStoreCardReveal_BP_C_InitiatePinata_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnStoreStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortStoreState                NewStoreState                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AStoreCardReveal_BP_C::OnStoreStateChanged(EFortStoreState NewStoreState)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnStoreStateChanged");

	AStoreCardReveal_BP_C_OnStoreStateChanged_Params params;
	params.NewStoreState = NewStoreState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.StartPackOpen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::StartPackOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.StartPackOpen");

	AStoreCardReveal_BP_C_StartPackOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardEnterStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::CardEnterStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardEnterStart");

	AStoreCardReveal_BP_C_CardEnterStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.PackDestroyStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::PackDestroyStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.PackDestroyStart");

	AStoreCardReveal_BP_C_PackDestroyStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardFlipStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::CardFlipStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardFlipStart");

	AStoreCardReveal_BP_C_CardFlipStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardExitStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::CardExitStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardExitStart");

	AStoreCardReveal_BP_C_CardExitStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TurnOffFastForward
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TurnOffFastForward()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TurnOffFastForward");

	AStoreCardReveal_BP_C_TurnOffFastForward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardBackRevealStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::CardBackRevealStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardBackRevealStart");

	AStoreCardReveal_BP_C_CardBackRevealStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardFrontRevealStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::CardFrontRevealStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardFrontRevealStart");

	AStoreCardReveal_BP_C_CardFrontRevealStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TurnOnFastForward
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::TurnOnFastForward()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.TurnOnFastForward");

	AStoreCardReveal_BP_C_TurnOnFastForward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.EnableMouseInputOnActor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::EnableMouseInputOnActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.EnableMouseInputOnActor");

	AStoreCardReveal_BP_C_EnableMouseInputOnActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.ReceiveBeginPlay");

	AStoreCardReveal_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardPackStoreStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::CardPackStoreStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardPackStoreStart");

	AStoreCardReveal_BP_C_CardPackStoreStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SpecialCardPauseAbort
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::SpecialCardPauseAbort()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.SpecialCardPauseAbort");

	AStoreCardReveal_BP_C_SpecialCardPauseAbort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.PresentChoiceStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::PresentChoiceStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.PresentChoiceStart");

	AStoreCardReveal_BP_C_PresentChoiceStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ChoiceMadeStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::ChoiceMadeStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.ChoiceMadeStart");

	AStoreCardReveal_BP_C_ChoiceMadeStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FKey                    ButtonPressed                  (CPF_Parm)

void AStoreCardReveal_BP_C::BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature");

	AStoreCardReveal_BP_C_BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FKey                    ButtonPressed                  (CPF_Parm)

void AStoreCardReveal_BP_C::BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature");

	AStoreCardReveal_BP_C_BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SkipBackRevealForChoicePack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::SkipBackRevealForChoicePack()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.SkipBackRevealForChoicePack");

	AStoreCardReveal_BP_C_SkipBackRevealForChoicePack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ContinueFinalChoiceCardProcess
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::ContinueFinalChoiceCardProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.ContinueFinalChoiceCardProcess");

	AStoreCardReveal_BP_C_ContinueFinalChoiceCardProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ConstructCardFront
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::ConstructCardFront()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.ConstructCardFront");

	AStoreCardReveal_BP_C_ConstructCardFront_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.StopCCA-AmbientAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::StopCCA_AmbientAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.StopCCA-AmbientAnim");

	AStoreCardReveal_BP_C_StopCCA_AmbientAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.GetReadyToShowCards
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::GetReadyToShowCards()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.GetReadyToShowCards");

	AStoreCardReveal_BP_C_GetReadyToShowCards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.Stop-CC-HoverAnims
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::Stop_CC_HoverAnims()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.Stop-CC-HoverAnims");

	AStoreCardReveal_BP_C_Stop_CC_HoverAnims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnBeginCursorOver_ChoiceCardA
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AStoreCardReveal_BP_C::OnBeginCursorOver_ChoiceCardA(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnBeginCursorOver_ChoiceCardA");

	AStoreCardReveal_BP_C_OnBeginCursorOver_ChoiceCardA_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnEndCursorOver_ChoiceCardA
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AStoreCardReveal_BP_C::OnEndCursorOver_ChoiceCardA(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnEndCursorOver_ChoiceCardA");

	AStoreCardReveal_BP_C_OnEndCursorOver_ChoiceCardA_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverStart-CC-A
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::HoverStart_CC_A()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverStart-CC-A");

	AStoreCardReveal_BP_C_HoverStart_CC_A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverEnd-CC-A
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::HoverEnd_CC_A()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverEnd-CC-A");

	AStoreCardReveal_BP_C_HoverEnd_CC_A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnBeginCursorOver_ChoiceCardB
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AStoreCardReveal_BP_C::OnBeginCursorOver_ChoiceCardB(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnBeginCursorOver_ChoiceCardB");

	AStoreCardReveal_BP_C_OnBeginCursorOver_ChoiceCardB_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnEndCursorOver_ChoiceCardB
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AStoreCardReveal_BP_C::OnEndCursorOver_ChoiceCardB(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnEndCursorOver_ChoiceCardB");

	AStoreCardReveal_BP_C_OnEndCursorOver_ChoiceCardB_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverStart-CC-B
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::HoverStart_CC_B()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverStart-CC-B");

	AStoreCardReveal_BP_C_HoverStart_CC_B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverEnd-CC-B
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::HoverEnd_CC_B()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverEnd-CC-B");

	AStoreCardReveal_BP_C_HoverEnd_CC_B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CheckHoverStatus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::CheckHoverStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.CheckHoverStatus");

	AStoreCardReveal_BP_C_CheckHoverStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.RestartCCA-AmbientAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::RestartCCA_AmbientAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.RestartCCA-AmbientAnim");

	AStoreCardReveal_BP_C_RestartCCA_AmbientAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.StopCCB-AmbientAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::StopCCB_AmbientAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.StopCCB-AmbientAnim");

	AStoreCardReveal_BP_C_StopCCB_AmbientAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.RestartCCB-AmbientAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::RestartCCB_AmbientAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.RestartCCB-AmbientAnim");

	AStoreCardReveal_BP_C_RestartCCB_AmbientAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.EnableOpenAllPacks
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::EnableOpenAllPacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.EnableOpenAllPacks");

	AStoreCardReveal_BP_C_EnableOpenAllPacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardInPlace
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::CardInPlace()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardInPlace");

	AStoreCardReveal_BP_C_CardInPlace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CompareRarity
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::CompareRarity()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.CompareRarity");

	AStoreCardReveal_BP_C_CompareRarity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.PlayUpgradeAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::PlayUpgradeAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.PlayUpgradeAnim");

	AStoreCardReveal_BP_C_PlayUpgradeAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ReadyForCardToCome
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::ReadyForCardToCome()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.ReadyForCardToCome");

	AStoreCardReveal_BP_C_ReadyForCardToCome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpAxisEvt_MoveRight_Gamepad_K2Node_InputAxisEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// float                          AxisValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AStoreCardReveal_BP_C::InpAxisEvt_MoveRight_Gamepad_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpAxisEvt_MoveRight_Gamepad_K2Node_InputAxisEvent_1");

	AStoreCardReveal_BP_C_InpAxisEvt_MoveRight_Gamepad_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.Handle Input Mode Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AStoreCardReveal_BP_C::Handle_Input_Mode_Changed(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.Handle Input Mode Changed");

	AStoreCardReveal_BP_C_Handle_Input_Mode_Changed_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ExitPackStore
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::ExitPackStore()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.ExitPackStore");

	AStoreCardReveal_BP_C_ExitPackStore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S-ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     TouchedComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AStoreCardReveal_BP_C::BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature(TEnumAsByte<ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S-ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature");

	AStoreCardReveal_BP_C_BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature_Params params;
	params.FingerIndex = FingerIndex;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S-ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     TouchedComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AStoreCardReveal_BP_C::BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature(TEnumAsByte<ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S-ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature");

	AStoreCardReveal_BP_C_BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature_Params params;
	params.FingerIndex = FingerIndex;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ResetGamepadInput
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::ResetGamepadInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.ResetGamepadInput");

	AStoreCardReveal_BP_C_ResetGamepadInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OpenGamepadGate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::OpenGamepadGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.OpenGamepadGate");

	AStoreCardReveal_BP_C_OpenGamepadGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CloseGamepadGate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::CloseGamepadGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.CloseGamepadGate");

	AStoreCardReveal_BP_C_CloseGamepadGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.EndQuestionMarkAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::EndQuestionMarkAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.EndQuestionMarkAnim");

	AStoreCardReveal_BP_C_EndQuestionMarkAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SetCCRarityColor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::SetCCRarityColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.SetCCRarityColor");

	AStoreCardReveal_BP_C_SetCCRarityColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CCRarityColorReady
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreCardReveal_BP_C::CCRarityColorReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.CCRarityColorReady");

	AStoreCardReveal_BP_C_CCRarityColorReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_41
// (FUNC_BlueprintEvent)
// Parameters:
// float                          AxisValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AStoreCardReveal_BP_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_41(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_41");

	AStoreCardReveal_BP_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_41_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ExecuteUbergraph_StoreCardReveal_BP
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AStoreCardReveal_BP_C::ExecuteUbergraph_StoreCardReveal_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreCardReveal_BP.StoreCardReveal_BP_C.ExecuteUbergraph_StoreCardReveal_BP");

	AStoreCardReveal_BP_C_ExecuteUbergraph_StoreCardReveal_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
