#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8_t
{
	InnerSequence                  = 0,
	MasterSequence                 = 1,
	External                       = 2,
	ESpawnOwnership_MAX            = 3
};


// Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8_t
{
	Auto                           = 0,
	User                           = 1,
	Break                          = 2,
	Linear                         = 3,
	Constant                       = 4,
	EMovieSceneKeyInterpolation_MAX = 5
};


// Enum MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : uint8_t
{
	KeepState                      = 0,
	RestoreState                   = 1,
	EMovieSceneCompletionMode_MAX  = 2
};


// Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8_t
{
	Static                         = 0,
	Swept                          = 1,
	EEvaluationMethod_MAX          = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieScene.MovieSceneSpawnable
// 0x0040
struct FMovieSceneSpawnable
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (CPF_IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0010(0x0010) (CPF_ZeroConstructor)
	class UObject*                                     ObjectTemplate;                                           // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FGuid>                               ChildPossessables;                                        // 0x0028(0x0010) (CPF_ZeroConstructor)
	ESpawnOwnership                                    Ownership;                                                // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieScenePossessable
// 0x0038
struct FMovieScenePossessable
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (CPF_IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0010(0x0010) (CPF_ZeroConstructor)
	class UClass*                                      PossessedObjectClass;                                     // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       ParentGuid;                                               // 0x0028(0x0010) (CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneBinding
// 0x0030
struct FMovieSceneBinding
{
	struct FGuid                                       ObjectGuid;                                               // 0x0000(0x0010) (CPF_IsPlainOldData)
	struct FString                                     BindingName;                                              // 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<class UMovieSceneTrack*>                    Tracks;                                                   // 0x0020(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneObjectBindingPtr
// 0x0010
struct FMovieSceneObjectBindingPtr
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneBindingOverrideData
// 0x001C
struct FMovieSceneBindingOverrideData
{
	struct FMovieSceneObjectBindingPtr                 ObjectBindingId;                                          // 0x0000(0x0010) (CPF_Edit)
	TWeakObjectPtr<class UObject>                      Object;                                                   // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bOverridesDefault;                                        // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
// 0x0028
struct FMovieSceneSequencePlaybackSettings
{
	int                                                LoopCount;                                                // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRandomStartTime;                                         // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              StartTime;                                                // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRestoreState;                                            // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TScriptInterface<class UMovieSceneBindingOverridesInterface> BindingOverrides;                                         // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// 0x0002
struct FMovieSceneSectionEvalOptions
{
	bool                                               bCanEditCompletionMode;                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EMovieSceneCompletionMode                          CompletionMode;                                           // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
// 0x0004
struct FMovieSceneTrackEvalOptions
{
	unsigned char                                      bCanEvaluateNearestSection : 1;                           // 0x0000(0x0001)
	unsigned char                                      bEvaluateNearestSection : 1;                              // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bEvaluateInPreroll : 1;                                   // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bEvaluateInPostroll : 1;                                  // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSegment
// 0x0040
struct FMovieSceneSegment
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
// 0x0038
struct FMovieSceneEvalTemplatePtr
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
// 0x0038
struct FMovieSceneTrackImplementationPtr
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationTrack
// 0x0080
struct FMovieSceneEvaluationTrack
{
	struct FGuid                                       ObjectBindingId;                                          // 0x0000(0x0010) (CPF_IsPlainOldData)
	uint16_t                                           EvaluationPriority;                                       // 0x0010(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EEvaluationMethod                                  EvaluationMethod;                                         // 0x0012(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
	TArray<struct FMovieSceneSegment>                  Segments;                                                 // 0x0018(0x0010) (CPF_ZeroConstructor)
	TArray<struct FMovieSceneEvalTemplatePtr>          ChildTemplates;                                           // 0x0028(0x0010) (CPF_ZeroConstructor)
	struct FMovieSceneTrackImplementationPtr           TrackTemplate;                                            // 0x0038(0x0038)
	struct FName                                       EvaluationGroup;                                          // 0x0070(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEvaluateInPreroll : 1;                                   // 0x0078(0x0001)
	unsigned char                                      bEvaluateInPostroll : 1;                                  // 0x0078(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
// 0x0010
struct FMovieSceneEvaluationGroupLUTIndex
{
	bool                                               bRequiresImmediateFlush;                                  // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                LUTOffset;                                                // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumInitPtrs;                                              // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumEvalPtrs;                                              // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneSequenceID
// 0x0004
struct FMovieSceneSequenceID
{
	uint32_t                                           Value;                                                    // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneTrackIdentifier
// 0x0004
struct FMovieSceneTrackIdentifier
{
	uint32_t                                           Value;                                                    // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
// 0x0008
struct FMovieSceneEvaluationFieldTrackPtr
{
	struct FMovieSceneSequenceID                       SequenceID;                                               // 0x0000(0x0004)
	struct FMovieSceneTrackIdentifier                  TrackIdentifier;                                          // 0x0004(0x0004)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
// 0x0004 (0x000C - 0x0008)
struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr
{
	int                                                SegmentIndex;                                             // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroup
// 0x0020
struct FMovieSceneEvaluationGroup
{
	TArray<struct FMovieSceneEvaluationGroupLUTIndex>  LUTIndices;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT;                                            // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneEvaluationMetaData
// 0x0010
struct FMovieSceneEvaluationMetaData
{
	TArray<struct FMovieSceneSequenceID>               ActiveSequences;                                          // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneEvaluationField
// 0x0030
struct FMovieSceneEvaluationField
{
	TArray<struct FFloatRange>                         Ranges;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FMovieSceneEvaluationGroup>          Groups;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<struct FMovieSceneEvaluationMetaData>       MetaData;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneSequenceTransform
// 0x0008
struct FMovieSceneSequenceTransform
{
	float                                              TimeScale;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Offset;                                                   // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneSubSequenceData
// 0x0028
struct FMovieSceneSubSequenceData
{
	class UMovieSceneSequence*                         Sequence;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMovieSceneSequenceTransform                RootToSequenceTransform;                                  // 0x0008(0x0008)
	struct FGuid                                       SourceSequenceSignature;                                  // 0x0010(0x0010) (CPF_IsPlainOldData)
	struct FMovieSceneSequenceID                       DeterministicSequenceID;                                  // 0x0020(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
// 0x0018
struct FMovieSceneSequenceHierarchyNode
{
	struct FMovieSceneSequenceID                       ParentID;                                                 // 0x0000(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FMovieSceneSequenceID>               Children;                                                 // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchy
// 0x00A0
struct FMovieSceneSequenceHierarchy
{
	TMap<uint32_t, struct FMovieSceneSubSequenceData>  SubSequences;                                             // 0x0000(0x0050) (CPF_ZeroConstructor)
	TMap<uint32_t, struct FMovieSceneSequenceHierarchyNode> Hierarchy;                                                // 0x0050(0x0050) (CPF_ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneGenerationLedger
// 0x00A8
struct FMovieSceneGenerationLedger
{
	struct FMovieSceneTrackIdentifier                  LastTrackIdentifier;                                      // 0x0000(0x0004)
	unsigned char                                      UnknownData00[0xA4];                                      // 0x0004(0x00A4) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplate
// 0x0220
struct FMovieSceneEvaluationTemplate
{
	TMap<uint32_t, struct FMovieSceneEvaluationTrack>  Tracks;                                                   // 0x0000(0x0050) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0050(0x0050) MISSED OFFSET
	struct FMovieSceneEvaluationField                  EvaluationField;                                          // 0x00A0(0x0030)
	struct FMovieSceneSequenceHierarchy                Hierarchy;                                                // 0x00D0(0x00A0)
	struct FMovieSceneGenerationLedger                 Ledger;                                                   // 0x0170(0x00A8)
	unsigned char                                      bHasLegacyTrackInstances : 1;                             // 0x0218(0x0001)
	unsigned char                                      bKeepStaleTracks : 1;                                     // 0x0218(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0219(0x0007) MISSED OFFSET
};

// ScriptStruct MovieScene.CachedMovieSceneEvaluationTemplate
// 0x0000 (0x0220 - 0x0220)
struct FCachedMovieSceneEvaluationTemplate : public FMovieSceneEvaluationTemplate
{

};

// ScriptStruct MovieScene.MovieSceneTrackCompilationParams
// 0x0001
struct FMovieSceneTrackCompilationParams
{
	bool                                               bForEditorPreview;                                        // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneTrackLabels
// 0x0010
struct FMovieSceneTrackLabels
{
	TArray<struct FString>                             Strings;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneExpansionState
// 0x0001
struct FMovieSceneExpansionState
{
	bool                                               bExpanded;                                                // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneEditorData
// 0x0070
struct FMovieSceneEditorData
{
	TMap<struct FString, struct FMovieSceneExpansionState> ExpansionStates;                                          // 0x0000(0x0050) (CPF_ZeroConstructor)
	struct FFloatRange                                 WorkingRange;                                             // 0x0050(0x0010)
	struct FFloatRange                                 ViewRange;                                                // 0x0060(0x0010)
};

// ScriptStruct MovieScene.SectionEvaluationData
// 0x0008
struct FSectionEvaluationData
{
	int                                                ImplIndex;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForcedTime;                                               // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneEvalTemplateBase
// 0x0010
struct FMovieSceneEvalTemplateBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEmptyStruct
// 0x0001
struct FMovieSceneEmptyStruct
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvalTemplate
// 0x0008 (0x0018 - 0x0010)
struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
{
	EMovieSceneCompletionMode                          CompletionMode;                                           // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackImplementation
// 0x0000 (0x0010 - 0x0010)
struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
{

};

// ScriptStruct MovieScene.MovieSceneSectionParameters
// 0x0010
struct FMovieSceneSectionParameters
{
	float                                              StartOffset;                                              // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeScale;                                                // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PrerollTime;                                              // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PostrollTime;                                             // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneSequenceCachedSignature
// 0x0018
struct FMovieSceneSequenceCachedSignature
{
	TWeakObjectPtr<class UMovieSceneSequence>          Sequence;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       CachedSignature;                                          // 0x0008(0x0010) (CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneLegacyTrackInstanceTemplate
// 0x0008 (0x0020 - 0x0018)
struct FMovieSceneLegacyTrackInstanceTemplate : public FMovieSceneEvalTemplate
{
	class UMovieSceneTrack*                            Track;                                                    // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieScenePropertySectionData
// 0x0020
struct FMovieScenePropertySectionData
{
	struct FName                                       PropertyName;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     PropertyPath;                                             // 0x0008(0x0010) (CPF_ZeroConstructor)
	struct FName                                       FunctionName;                                             // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneKeyStruct
// 0x0008
struct FMovieSceneKeyStruct
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
