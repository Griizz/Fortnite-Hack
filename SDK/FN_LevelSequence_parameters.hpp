#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
struct ULevelSequencePlayer_CreateLevelSequencePlayer_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ULevelSequence*                              LevelSequence;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMovieSceneSequencePlaybackSettings         Settings;                                                 // (CPF_Parm)
	class ULevelSequencePlayer*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.SetSequence
struct ALevelSequenceActor_SetSequence_Params
{
	class ULevelSequence*                              InSequence;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.SetBinding
struct ALevelSequenceActor_SetBinding_Params
{
	struct FMovieSceneObjectBindingPtr                 Binding;                                                  // (CPF_Parm)
	TArray<class AActor*>                              Actors;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	bool                                               bAllowBindingsFromAsset;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.ResetBindings
struct ALevelSequenceActor_ResetBindings_Params
{
};

// Function LevelSequence.LevelSequenceActor.ResetBinding
struct ALevelSequenceActor_ResetBinding_Params
{
	struct FMovieSceneObjectBindingPtr                 Binding;                                                  // (CPF_Parm)
};

// Function LevelSequence.LevelSequenceActor.RemoveBinding
struct ALevelSequenceActor_RemoveBinding_Params
{
	struct FMovieSceneObjectBindingPtr                 Binding;                                                  // (CPF_Parm)
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.GetSequence
struct ALevelSequenceActor_GetSequence_Params
{
	bool                                               Load;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ULevelSequence*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.AddBinding
struct ALevelSequenceActor_AddBinding_Params
{
	struct FMovieSceneObjectBindingPtr                 Binding;                                                  // (CPF_Parm)
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAllowBindingsFromAsset;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LevelSequence.LevelSequenceBurnIn.SetSettings
struct ULevelSequenceBurnIn_SetSettings_Params
{
	class UObject*                                     InSettings;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
struct ULevelSequenceBurnIn_GetSettingsClass_Params
{
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
