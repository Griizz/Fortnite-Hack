#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AudioMixer.SoundEffectLowPassFilterSettings
// 0x0008
struct FSoundEffectLowPassFilterSettings
{
	float                                              CutoffFrequency;                                          // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Q;                                                        // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AudioMixer.SubmixEffectReverbSettings
// 0x0008
struct FSubmixEffectReverbSettings
{
	class UReverbEffect*                               ReverbEffect;                                             // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
// 0x0001
struct FSubmixEffectSubmixEQSettings
{

};

// ScriptStruct AudioMixer.SubmixEffectTestSettings
// 0x0004
struct FSubmixEffectTestSettings
{
	float                                              TestVolume;                                               // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
