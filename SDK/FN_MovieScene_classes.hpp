#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MovieScene.MovieSceneSignedObject
// 0x0088 (0x00B0 - 0x0028)
class UMovieSceneSignedObject : public UObject
{
public:
	struct FGuid                                       Signature;                                                // 0x0028(0x0010) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0038(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSignedObject");
		return ptr;
	}

};


// Class MovieScene.MovieScene
// 0x0080 (0x0130 - 0x00B0)
class UMovieScene : public UMovieSceneSignedObject
{
public:
	TArray<struct FMovieSceneSpawnable>                Spawnables;                                               // 0x00B0(0x0010) (CPF_ZeroConstructor)
	TArray<struct FMovieScenePossessable>              Possessables;                                             // 0x00C0(0x0010) (CPF_ZeroConstructor)
	TArray<struct FMovieSceneBinding>                  ObjectBindings;                                           // 0x00D0(0x0010) (CPF_ZeroConstructor)
	TArray<class UMovieSceneTrack*>                    MasterTracks;                                             // 0x00E0(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	class UMovieSceneTrack*                            CameraCutTrack;                                           // 0x00F0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FFloatRange                                 SelectionRange;                                           // 0x00F8(0x0010)
	struct FFloatRange                                 PlaybackRange;                                            // 0x0108(0x0010)
	unsigned char                                      bForceFixedFrameIntervalPlayback : 1;                     // 0x0118(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	float                                              FixedFrameInterval;                                       // 0x011C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InTime;                                                   // 0x0120(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              OutTime;                                                  // 0x0124(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              StartTime;                                                // 0x0128(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              EndTime;                                                  // 0x012C(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieScene");
		return ptr;
	}

};


// Class MovieScene.MovieSceneBindingOverridesInterface
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneBindingOverridesInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOverridesInterface");
		return ptr;
	}

};


// Class MovieScene.MovieSceneBindingOverrides
// 0x0070 (0x0098 - 0x0028)
class UMovieSceneBindingOverrides : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FMovieSceneBindingOverrideData>      BindingData;                                              // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOverrides");
		return ptr;
	}

};


// Class MovieScene.MovieSceneBindingOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneBindingOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOwnerInterface");
		return ptr;
	}

};


// Class MovieScene.MovieSceneFolder
// 0x0048 (0x0070 - 0x0028)
class UMovieSceneFolder : public UObject
{
public:
	struct FName                                       FolderName;                                               // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UMovieSceneFolder*>                   ChildFolders;                                             // 0x0030(0x0010) (CPF_ZeroConstructor)
	TArray<class UMovieSceneTrack*>                    ChildMasterTracks;                                        // 0x0040(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	TArray<struct FString>                             ChildObjectBindingStrings;                                // 0x0050(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneFolder");
		return ptr;
	}

};


// Class MovieScene.MovieSceneSequencePlayer
// 0x0668 (0x0690 - 0x0028)
class UMovieSceneSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x358];                                     // 0x0028(0x0358) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlay;                                                   // 0x0380(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStop;                                                   // 0x0390(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPause;                                                  // 0x03A0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      bIsPlaying : 1;                                           // 0x03B0(0x0001)
	unsigned char                                      bReversePlayback : 1;                                     // 0x03B0(0x0001)
	unsigned char                                      bPendingFirstUpdate : 1;                                  // 0x03B0(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	class UMovieSceneSequence*                         Sequence;                                                 // 0x03B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              TimeCursorPosition;                                       // 0x03C0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartTime;                                                // 0x03C4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndTime;                                                  // 0x03C8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentNumLoops;                                          // 0x03CC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x03D0(0x0010) MISSED OFFSET
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x03E0(0x0028)
	unsigned char                                      UnknownData03[0x288];                                     // 0x0408(0x0288) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSequencePlayer");
		return ptr;
	}


	void Stop();
	void StartPlayingNextTick();
	void SetPlayRate(float PlayRate);
	void SetPlaybackRange(float NewStartTime, float NewEndTime);
	void SetPlaybackPosition(float NewPlaybackPosition);
	void PlayReverse();
	void PlayLooping(int NumLoops);
	void Play();
	void Pause();
	bool IsPlaying();
	float GetPlayRate();
	float GetPlaybackStart();
	float GetPlaybackPosition();
	float GetPlaybackEnd();
	float GetLength();
	void ChangePlaybackDirection();
};


// Class MovieScene.MovieSceneSection
// 0x0020 (0x00D0 - 0x00B0)
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneSectionEvalOptions               EvalOptions;                                              // 0x00B0(0x0002) (CPF_Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00B2(0x0002) MISSED OFFSET
	float                                              StartTime;                                                // 0x00B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndTime;                                                  // 0x00B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RowIndex;                                                 // 0x00BC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OverlapPriority;                                          // 0x00C0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsActive : 1;                                            // 0x00C4(0x0001) (CPF_Edit)
	unsigned char                                      bIsLocked : 1;                                            // 0x00C4(0x0001) (CPF_Edit)
	unsigned char                                      bIsInfinite : 1;                                          // 0x00C4(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData01[0xB];                                       // 0x00C5(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSection");
		return ptr;
	}

};


// Class MovieScene.MovieSceneTrack
// 0x0010 (0x00C0 - 0x00B0)
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneTrackEvalOptions                 EvalOptions;                                              // 0x00B0(0x0004) (CPF_Edit)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00B4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneTrack");
		return ptr;
	}

};


// Class MovieScene.MovieSceneSequence
// 0x0230 (0x02E0 - 0x00B0)
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	struct FCachedMovieSceneEvaluationTemplate         EvaluationTemplate;                                       // 0x00B0(0x0220)
	struct FMovieSceneTrackCompilationParams           TemplateParameters;                                       // 0x02D0(0x0001)
	unsigned char                                      bParentContextsAreSignificant : 1;                        // 0x02D1(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x02D2(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSequence");
		return ptr;
	}

};


// Class MovieScene.MovieSceneNameableTrack
// 0x0000 (0x00C0 - 0x00C0)
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneNameableTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
