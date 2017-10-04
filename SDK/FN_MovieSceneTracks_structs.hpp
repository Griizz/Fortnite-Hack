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

// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class EMovieScene3DPathSection_Axis
{
	MovieScene3DPathSection_Axis__X = 0,
	MovieScene3DPathSection_Axis__Y = 1,
	MovieScene3DPathSection_Axis__Z = 2,
	MovieScene3DPathSection_Axis__NEG_X = 3,
	MovieScene3DPathSection_Axis__NEG_Y = 4,
	MovieScene3DPathSection_Axis__NEG_Z = 5,
	MovieScene3DPathSection_Axis__MovieScene3DPathSection_MAX = 6
};


// Enum MovieSceneTracks.EShow3DTrajectory
enum class EShow3DTrajectory
{
	EShow3DTrajectory__EST_OnlyWhenSelected = 0,
	EShow3DTrajectory__EST_Always  = 1,
	EShow3DTrajectory__EST_Never   = 2,
	EShow3DTrajectory__EST_MAX     = 3
};


// Enum MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility
{
	ELevelVisibility__Visible      = 0,
	ELevelVisibility__Hidden       = 1,
	ELevelVisibility__ELevelVisibility_MAX = 2
};


// Enum MovieSceneTracks.EParticleKey
enum class EParticleKey
{
	EParticleKey__Activate         = 0,
	EParticleKey__Deactivate       = 1,
	EParticleKey__Trigger          = 2,
	EParticleKey__EParticleKey_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
// 0x0020
struct FMovieSceneCameraAnimSectionData
{
	class UCameraAnim*                                 CameraAnim;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayScale;                                                // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlendInTime;                                              // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLooping : 1;                                             // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
// 0x0020
struct FMovieSceneCameraShakeSectionData
{
	class UClass*                                      ShakeClass;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayScale;                                                // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECameraAnimPlaySpace>                  PlaySpace;                                                // 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FRotator                                    UserDefinedPlaySpace;                                     // 0x0010(0x000C) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
// 0x0018
struct FMovieSceneEventParameters
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.EventPayload
// 0x0020
struct FEventPayload
{
	struct FName                                       EventName;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMovieSceneEventParameters                  Parameters;                                               // 0x0008(0x0018) (CPF_Edit)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
// 0x0020
struct FMovieSceneEventSectionData
{
	TArray<float>                                      KeyTimes;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FEventPayload>                       KeyValues;                                                // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// 0x0080
struct FScalarParameterNameAndCurve
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Index;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FRichCurve                                  ParameterCurve;                                           // 0x0010(0x0070)
};

// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// 0x0160
struct FVectorParameterNameAndCurves
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Index;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FRichCurve                                  XCurve;                                                   // 0x0010(0x0070)
	struct FRichCurve                                  YCurve;                                                   // 0x0080(0x0070)
	struct FRichCurve                                  ZCurve;                                                   // 0x00F0(0x0070)
};

// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
// 0x01D0
struct FColorParameterNameAndCurves
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Index;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FRichCurve                                  RedCurve;                                                 // 0x0010(0x0070)
	struct FRichCurve                                  GreenCurve;                                               // 0x0080(0x0070)
	struct FRichCurve                                  BlueCurve;                                                // 0x00F0(0x0070)
	struct FRichCurve                                  AlphaCurve;                                               // 0x0160(0x0070)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
// 0x0090
struct FMovieSceneSkeletalAnimationParams
{
	class UAnimSequenceBase*                           Animation;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartOffset;                                              // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndOffset;                                                // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bReverse : 1;                                             // 0x0014(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FName                                       SlotName;                                                 // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRichCurve                                  Weight;                                                   // 0x0020(0x0070) (CPF_Edit)
};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
// 0x0070 (0x0078 - 0x0008)
struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0014(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0020(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4C];                                      // 0x002C(0x004C) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
// 0x0028 (0x0030 - 0x0008)
struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{
	struct FVector                                     Scale;                                                    // 0x0008(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0014(0x001C) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
// 0x0028 (0x0030 - 0x0008)
struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{
	struct FRotator                                    Rotation;                                                 // 0x0008(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0014(0x001C) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
// 0x0028 (0x0030 - 0x0008)
struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0014(0x001C) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
// 0x0050 (0x0058 - 0x0008)
struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
{
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0018(0x0040) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
// 0x0040 (0x0048 - 0x0008)
struct FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
// 0x0018 (0x0060 - 0x0048)
struct FMovieSceneVector4KeyStruct : public FMovieSceneVectorKeyStructBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FVector4                                    Vector;                                                   // 0x0050(0x0010) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
// 0x0010 (0x0058 - 0x0048)
struct FMovieSceneVectorKeyStruct : public FMovieSceneVectorKeyStructBase
{
	struct FVector                                     Vector;                                                   // 0x0048(0x000C) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
// 0x0008 (0x0050 - 0x0048)
struct FMovieSceneVector2DKeyStruct : public FMovieSceneVectorKeyStructBase
{
	struct FVector2D                                   Vector;                                                   // 0x0048(0x0008) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// 0x0030 (0x0048 - 0x0018)
struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{
	TArray<struct FScalarParameterNameAndCurve>        Scalars;                                                  // 0x0018(0x0010) (CPF_ZeroConstructor)
	TArray<struct FVectorParameterNameAndCurves>       Vectors;                                                  // 0x0028(0x0010) (CPF_ZeroConstructor)
	TArray<struct FColorParameterNameAndCurves>        Colors;                                                   // 0x0038(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
// 0x0008 (0x0050 - 0x0048)
struct FMovieSceneComponentMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
	int                                                MaterialIndex;                                            // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneSpawnSectionTemplate
// 0x0070 (0x0088 - 0x0018)
struct FMovieSceneSpawnSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FIntegralCurve                              Curve;                                                    // 0x0018(0x0070)
};

// ScriptStruct MovieSceneTracks.MovieScene3DAttachSectionTemplate
// 0x0020 (0x0038 - 0x0018)
struct FMovieScene3DAttachSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FGuid                                       AttachGuid;                                               // 0x0018(0x0010) (CPF_IsPlainOldData)
	struct FName                                       AttachSocketName;                                         // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       AttachComponentName;                                      // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
// 0x0088 (0x00A0 - 0x0018)
struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FGuid                                       PathGuid;                                                 // 0x0018(0x0010) (CPF_IsPlainOldData)
	struct FRichCurve                                  TimingCurve;                                              // 0x0028(0x0070)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0098(0x0001) UNKNOWN PROPERTY: EnumProperty MovieSceneTracks.MovieScene3DPathSectionTemplate.FrontAxisEnum
	unsigned char                                      UnknownData01[0x1];                                       // 0x0099(0x0001) UNKNOWN PROPERTY: EnumProperty MovieSceneTracks.MovieScene3DPathSectionTemplate.UpAxisEnum
	unsigned char                                      UnknownData02[0x2];                                       // 0x009A(0x0002) MISSED OFFSET
	unsigned char                                      bFollow : 1;                                              // 0x009C(0x0001)
	unsigned char                                      bReverse : 1;                                             // 0x009C(0x0001)
	unsigned char                                      bForceUpright : 1;                                        // 0x009C(0x0001)
};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformSectionTemplate
// 0x03F0 (0x0408 - 0x0018)
struct FMovieScene3DTransformSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FRichCurve                                  TranslationCurve[0x3];                                    // 0x0018(0x0070)
	struct FRichCurve                                  RotationCurve[0x3];                                       // 0x0168(0x0070)
	struct FRichCurve                                  ScaleCurve[0x3];                                          // 0x02B8(0x0070)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
// 0x00A0 (0x00B8 - 0x0018)
struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                             // 0x0018(0x0020)
	struct FIntegralCurve                              ActorGuidIndexCurve;                                      // 0x0038(0x0070)
	TArray<struct FGuid>                               ActorGuids;                                               // 0x00A8(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplateData
// 0x0108
struct FMovieSceneAudioSectionTemplateData
{
	class USoundBase*                                  Sound;                                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AudioStartOffset;                                         // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFloatRange                                 AudioRange;                                               // 0x000C(0x0010)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FRichCurve                                  AudioPitchMultiplierCurve;                                // 0x0020(0x0070)
	struct FRichCurve                                  AudioVolumeCurve;                                         // 0x0090(0x0070)
	int                                                RowIndex;                                                 // 0x0100(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
// 0x0108 (0x0120 - 0x0018)
struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneAudioSectionTemplateData         AudioData;                                                // 0x0018(0x0108)
};

// ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTrackTemplate
// 0x0000 (0x0018 - 0x0018)
struct FMovieSceneAdditiveCameraAnimationTrackTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTemplate
// 0x0000 (0x0018 - 0x0018)
struct FMovieSceneAdditiveCameraAnimationTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
// 0x0028 (0x0040 - 0x0018)
struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{
	struct FMovieSceneCameraShakeSectionData           SourceData;                                               // 0x0018(0x0020)
	float                                              SectionStartTime;                                         // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
// 0x0028 (0x0040 - 0x0018)
struct FMovieSceneCameraAnimSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{
	struct FMovieSceneCameraAnimSectionData            SourceData;                                               // 0x0018(0x0020)
	float                                              SectionStartTime;                                         // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraCutSectionTemplate
// 0x0010 (0x0028 - 0x0018)
struct FMovieSceneCameraCutSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FGuid                                       CameraGuid;                                               // 0x0018(0x0010) (CPF_IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
// 0x01D8 (0x01F0 - 0x0018)
struct FMovieSceneColorSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FName                                       PropertyName;                                             // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     PropertyPath;                                             // 0x0020(0x0010) (CPF_ZeroConstructor)
	struct FRichCurve                                  Curves[0x4];                                              // 0x0030(0x0070)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
// 0x0028 (0x0040 - 0x0018)
struct FMovieSceneEventSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneEventSectionData                 EventData;                                                // 0x0018(0x0020)
	unsigned char                                      bFireEventsWhenForwards : 1;                              // 0x0038(0x0001)
	unsigned char                                      bFireEventsWhenBackwards : 1;                             // 0x0038(0x0001)
};

// ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
// 0x0088 (0x00A0 - 0x0018)
struct FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FRichCurve                                  FadeCurve;                                                // 0x0018(0x0070)
	struct FLinearColor                                FadeColor;                                                // 0x0088(0x0010) (CPF_IsPlainOldData)
	unsigned char                                      bFadeAudio : 1;                                           // 0x0098(0x0001)
};

// ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySharedTrack
// 0x0000 (0x0018 - 0x0018)
struct FMovieSceneLevelVisibilitySharedTrack : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate
// 0x0018 (0x0030 - 0x0018)
struct FMovieSceneLevelVisibilitySectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0018(0x0001) UNKNOWN PROPERTY: EnumProperty MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate.Visibility
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TArray<struct FName>                               LevelNames;                                               // 0x0020(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
// 0x0000 (0x0048 - 0x0048)
struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
// 0x0070 (0x0088 - 0x0018)
struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FIntegralCurve                              ParticleKeys;                                             // 0x0018(0x0070)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
// 0x01E8 (0x0200 - 0x0018)
struct FMovieSceneVectorPropertySectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                             // 0x0018(0x0020)
	struct FRichCurve                                  ComponentCurves[0x4];                                     // 0x0038(0x0070)
	int                                                NumChannelsUsed;                                          // 0x01F8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
// 0x0098 (0x00B0 - 0x0018)
struct FMovieSceneStringPropertySectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                             // 0x0018(0x0020)
	struct FStringCurve                                StringCurve;                                              // 0x0038(0x0078)
};

// ScriptStruct MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
// 0x0090 (0x00A8 - 0x0018)
struct FMovieSceneIntegerPropertySectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                             // 0x0018(0x0020)
	struct FIntegralCurve                              IntegerCurve;                                             // 0x0038(0x0070)
};

// ScriptStruct MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
// 0x0090 (0x00A8 - 0x0018)
struct FMovieSceneEnumPropertySectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                             // 0x0018(0x0020)
	struct FIntegralCurve                              EnumCurve;                                                // 0x0038(0x0070)
};

// ScriptStruct MovieSceneTracks.MovieSceneBytePropertySectionTemplate
// 0x0090 (0x00A8 - 0x0018)
struct FMovieSceneBytePropertySectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                             // 0x0018(0x0020)
	struct FIntegralCurve                              ByteCurve;                                                // 0x0038(0x0070)
};

// ScriptStruct MovieSceneTracks.MovieSceneFloatPropertySectionTemplate
// 0x0090 (0x00A8 - 0x0018)
struct FMovieSceneFloatPropertySectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                             // 0x0018(0x0020)
	struct FRichCurve                                  FloatCurve;                                               // 0x0038(0x0070)
};

// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// 0x0090 (0x00A8 - 0x0018)
struct FMovieSceneBoolPropertySectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                             // 0x0018(0x0020)
	struct FIntegralCurve                              BoolCurve;                                                // 0x0038(0x0070)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSharedTrack
// 0x0000 (0x0018 - 0x0018)
struct FMovieSceneSkeletalAnimationSharedTrack : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
// 0x0008 (0x0098 - 0x0090)
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams
{
	float                                              SectionStartTime;                                         // 0x0090(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SectionEndTime;                                           // 0x0094(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
// 0x0098 (0x00B0 - 0x0018)
struct FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneSkeletalAnimationSectionTemplateParameters Params;                                                   // 0x0018(0x0098)
};

// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
// 0x0070 (0x0088 - 0x0018)
struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FRichCurve                                  SlomoCurve;                                               // 0x0018(0x0070)
};

// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
// 0x0008 (0x00B0 - 0x00A8)
struct FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate
{
	unsigned char                                      bTemporarilyHiddenInGame : 1;                             // 0x00A8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
