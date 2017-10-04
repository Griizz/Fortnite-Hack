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

// Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode
{
	ENiagaraNumericOutputTypeSelectionMode__None = 0,
	ENiagaraNumericOutputTypeSelectionMode__Largest = 1,
	ENiagaraNumericOutputTypeSelectionMode__Smallest = 2,
	ENiagaraNumericOutputTypeSelectionMode__Scalar = 3,
	ENiagaraNumericOutputTypeSelectionMode__ENiagaraNumericOutputTypeSelectionMode_MAX = 4
};


// Enum Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType
{
	ENiagaraDataSetType__ParticleData = 0,
	ENiagaraDataSetType__Shared    = 1,
	ENiagaraDataSetType__Event     = 2,
	ENiagaraDataSetType__ENiagaraDataSetType_MAX = 3
};


// Enum Niagara.ENiagaraScriptUsage
enum class ENiagaraScriptUsage
{
	ENiagaraScriptUsage__Function  = 0,
	ENiagaraScriptUsage__Module    = 1,
	ENiagaraScriptUsage__SpawnScript = 2,
	ENiagaraScriptUsage__UpdateScript = 3,
	ENiagaraScriptUsage__EffectScript = 4,
	ENiagaraScriptUsage__ENiagaraScriptUsage_MAX = 5
};


// Enum Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour
{
	EUnusedAttributeBehaviour__Copy = 0,
	EUnusedAttributeBehaviour__Zero = 1,
	EUnusedAttributeBehaviour__None = 2,
	EUnusedAttributeBehaviour__MarkInvalid = 3,
	EUnusedAttributeBehaviour__PassThrough = 4,
	EUnusedAttributeBehaviour__EUnusedAttributeBehaviour_MAX = 5
};


// Enum Niagara.ENiagaraCollisionMode
enum class ENiagaraCollisionMode
{
	ENiagaraCollisionMode__None    = 0,
	ENiagaraCollisionMode__SceneGeometry = 1,
	ENiagaraCollisionMode__DepthBuffer = 2,
	ENiagaraCollisionMode__DistanceField = 3,
	ENiagaraCollisionMode__ENiagaraCollisionMode_MAX = 4
};


// Enum Niagara.EScriptExecutionMode
enum class EScriptExecutionMode
{
	EScriptExecutionMode__EveryParticle = 0,
	EScriptExecutionMode__SpawnedParticles = 1,
	EScriptExecutionMode__SingleParticle = 2,
	EScriptExecutionMode__EScriptExecutionMode_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Niagara.NiagaraTypeDefinition
// 0x0008
struct FNiagaraTypeDefinition
{
	class UStruct*                                     Struct;                                                   // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraVariable
// 0x0030
struct FNiagaraVariable
{
	struct FGuid                                       ID;                                                       // 0x0000(0x0010) (CPF_IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FNiagaraTypeDefinition                      TypeDef;                                                  // 0x0018(0x0008) (CPF_Edit)
	TArray<unsigned char>                              VarData;                                                  // 0x0020(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraEmitterHandle
// 0x0038
struct FNiagaraEmitterHandle
{
	struct FGuid                                       ID;                                                       // 0x0000(0x0010) (CPF_Edit, CPF_EditConst, CPF_IsPlainOldData)
	struct FName                                       IdName;                                                   // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bIsEnabled : 1;                                           // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UNiagaraEmitterProperties*                   Source;                                                   // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UNiagaraEmitterProperties*                   Instance;                                                 // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraParameterBinding
// 0x0030
struct FNiagaraParameterBinding
{
	struct FGuid                                       SourceParameterId;                                        // 0x0000(0x0010) (CPF_IsPlainOldData)
	struct FGuid                                       DestinationEmitterId;                                     // 0x0010(0x0010) (CPF_IsPlainOldData)
	struct FGuid                                       DestinationParameterId;                                   // 0x0020(0x0010) (CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraParameters
// 0x0010
struct FNiagaraParameters
{
	TArray<struct FNiagaraVariable>                    Parameters;                                               // 0x0000(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraDataSetID
// 0x0010
struct FNiagaraDataSetID
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0008(0x0001) UNKNOWN PROPERTY: EnumProperty Niagara.NiagaraDataSetID.Type
};

// ScriptStruct Niagara.NiagaraDataSetProperties
// 0x0020
struct FNiagaraDataSetProperties
{
	struct FNiagaraDataSetID                           ID;                                                       // 0x0000(0x0010) (CPF_Edit, CPF_EditConst)
	TArray<struct FNiagaraVariable>                    Variables;                                                // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraScriptDataUsageInfo
// 0x0001
struct FNiagaraScriptDataUsageInfo
{
	unsigned char                                      bReadsAttriubteData : 1;                                  // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraFunctionSignature
// 0x0038
struct FNiagaraFunctionSignature
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FNiagaraVariable>                    Inputs;                                                   // 0x0008(0x0010) (CPF_ZeroConstructor)
	TArray<struct FNiagaraVariable>                    Outputs;                                                  // 0x0018(0x0010) (CPF_ZeroConstructor)
	struct FName                                       Owner;                                                    // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRequiresContext : 1;                                     // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bMemberFunction : 1;                                      // 0x0031(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
// 0x0018
struct FNiagaraScriptDataInterfaceInfo
{
	class UNiagaraDataInterface*                       DataInterface;                                            // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<struct FNiagaraFunctionSignature>           ExternalFunctions;                                        // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraEventReceiverProperties
// 0x0028
struct FNiagaraEventReceiverProperties
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SourceEventGenerator;                                     // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SourceEmitter;                                            // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UNiagaraEventReceiverEmitterAction*>  EmitterActions;                                           // 0x0018(0x0010) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraEventGeneratorProperties
// 0x0038
struct FNiagaraEventGeneratorProperties
{
	int                                                MaxEventsPerFrame;                                        // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
	struct FNiagaraDataSetProperties                   SetProps;                                                 // 0x0018(0x0020)
};

// ScriptStruct Niagara.NiagaraEmitterScriptProperties
// 0x0028
struct FNiagaraEmitterScriptProperties
{
	class UNiagaraScript*                              Script;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FNiagaraEventReceiverProperties>     EventReceivers;                                           // 0x0008(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<struct FNiagaraEventGeneratorProperties>    EventGenerators;                                          // 0x0018(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraEventScriptProperties
// 0x0028 (0x0050 - 0x0028)
struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0028(0x0001) UNKNOWN PROPERTY: EnumProperty Niagara.NiagaraEventScriptProperties.ExecutionMode
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	uint32_t                                           SpawnNumber;                                              // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           MaxEventsPerFrame;                                        // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       SourceEmitterID;                                          // 0x0034(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FName                                       SourceEventName;                                          // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraEmitterBurst
// 0x0010
struct FNiagaraEmitterBurst
{
	float                                              Time;                                                     // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeRange;                                                // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           SpawnMinimum;                                             // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           SpawnMaximum;                                             // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraTestStructInner
// 0x0018
struct FNiagaraTestStructInner
{
	struct FVector                                     InnerVector1;                                             // 0x0000(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     InnerVector2;                                             // 0x000C(0x000C) (CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraTestStruct
// 0x0048
struct FNiagaraTestStruct
{
	struct FVector                                     Vector1;                                                  // 0x0000(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     Vector2;                                                  // 0x000C(0x000C) (CPF_IsPlainOldData)
	struct FNiagaraTestStructInner                     InnerStruct1;                                             // 0x0018(0x0018)
	struct FNiagaraTestStructInner                     InnerStruct2;                                             // 0x0030(0x0018)
};

// ScriptStruct Niagara.NiagaraNumeric
// 0x0001
struct FNiagaraNumeric
{

};

// ScriptStruct Niagara.NiagaraBool
// 0x0004
struct FNiagaraBool
{
	int                                                Value;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraInt32
// 0x0004
struct FNiagaraInt32
{
	int                                                Value;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraFloat
// 0x0004
struct FNiagaraFloat
{
	float                                              Value;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraCollisionEventPayload
// 0x002C
struct FNiagaraCollisionEventPayload
{
	struct FVector                                     CollisionPos;                                             // 0x0000(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     CollisionNormal;                                          // 0x000C(0x000C) (CPF_IsPlainOldData)
	int                                                PhysicalMaterialIndex;                                    // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     CollisionVelocity;                                        // 0x001C(0x000C) (CPF_IsPlainOldData)
	int                                                ParticleIndex;                                            // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
