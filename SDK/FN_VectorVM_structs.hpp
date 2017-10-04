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

// Enum VectorVM.EVectorVMOp
enum class EVectorVMOp
{
	EVectorVMOp__done              = 0,
	EVectorVMOp__add               = 1,
	EVectorVMOp__sub               = 2,
	EVectorVMOp__mul               = 3,
	EVectorVMOp__div               = 4,
	EVectorVMOp__mad               = 5,
	EVectorVMOp__lerp              = 6,
	EVectorVMOp__rcp               = 7,
	EVectorVMOp__rsq               = 8,
	EVectorVMOp__sqrt              = 9,
	EVectorVMOp__neg               = 10,
	EVectorVMOp__abs               = 11,
	EVectorVMOp__exp               = 12,
	EVectorVMOp__exp2              = 13,
	EVectorVMOp__log               = 14,
	EVectorVMOp__log2              = 15,
	EVectorVMOp__sin               = 16,
	EVectorVMOp__cos               = 17,
	EVectorVMOp__tan               = 18,
	EVectorVMOp__asin              = 19,
	EVectorVMOp__acos              = 20,
	EVectorVMOp__atan              = 21,
	EVectorVMOp__atan2             = 22,
	EVectorVMOp__ceil              = 23,
	EVectorVMOp__floor             = 24,
	EVectorVMOp__fmod              = 25,
	EVectorVMOp__frac              = 26,
	EVectorVMOp__trunc             = 27,
	EVectorVMOp__clamp             = 28,
	EVectorVMOp__min               = 29,
	EVectorVMOp__max               = 30,
	EVectorVMOp__pow               = 31,
	EVectorVMOp__sign              = 32,
	EVectorVMOp__step              = 33,
	EVectorVMOp__random            = 34,
	EVectorVMOp__noise             = 35,
	EVectorVMOp__output            = 36,
	EVectorVMOp__cmplt             = 37,
	EVectorVMOp__cmple             = 38,
	EVectorVMOp__cmpgt             = 39,
	EVectorVMOp__cmpge             = 40,
	EVectorVMOp__cmpeq             = 41,
	EVectorVMOp__cmpneq            = 42,
	EVectorVMOp__select            = 43,
	EVectorVMOp__addi              = 44,
	EVectorVMOp__subi              = 45,
	EVectorVMOp__muli              = 46,
	EVectorVMOp__clampi            = 47,
	EVectorVMOp__mini              = 48,
	EVectorVMOp__maxi              = 49,
	EVectorVMOp__absi              = 50,
	EVectorVMOp__negi              = 51,
	EVectorVMOp__signi             = 52,
	EVectorVMOp__cmplti            = 53,
	EVectorVMOp__cmplei            = 54,
	EVectorVMOp__cmpgti            = 55,
	EVectorVMOp__cmpgei            = 56,
	EVectorVMOp__cmpeqi            = 57,
	EVectorVMOp__cmpneqi           = 58,
	EVectorVMOp__bit_and           = 59,
	EVectorVMOp__bit_or            = 60,
	EVectorVMOp__bit_xor           = 61,
	EVectorVMOp__bit_not           = 62,
	EVectorVMOp__logic_and         = 63,
	EVectorVMOp__logic_or          = 64,
	EVectorVMOp__logic_xor         = 65,
	EVectorVMOp__logic_not         = 66,
	EVectorVMOp__f2i               = 67,
	EVectorVMOp__i2f               = 68,
	EVectorVMOp__f2b               = 69,
	EVectorVMOp__b2f               = 70,
	EVectorVMOp__i2b               = 71,
	EVectorVMOp__b2i               = 72,
	EVectorVMOp__inputdata_32bit   = 73,
	EVectorVMOp__inputdata_noadvance_32bit = 74,
	EVectorVMOp__outputdata_32bit  = 75,
	EVectorVMOp__acquireindex      = 76,
	EVectorVMOp__external_func_call = 77,
	EVectorVMOp__exec_index        = 78,
	EVectorVMOp__noise2D           = 79,
	EVectorVMOp__noise3D           = 80,
	EVectorVMOp__NumOpcodes        = 81,
	EVectorVMOp__EVectorVMOp_MAX   = 82
};


// Enum VectorVM.EVectorVMOperandLocation
enum class EVectorVMOperandLocation
{
	EVectorVMOperandLocation__Register = 0,
	EVectorVMOperandLocation__Constant = 1,
	EVectorVMOperandLocation__Num  = 2,
	EVectorVMOperandLocation__EVectorVMOperandLocation_MAX = 3
};


// Enum VectorVM.EVectorVMBaseTypes
enum class EVectorVMBaseTypes
{
	EVectorVMBaseTypes__Float      = 0,
	EVectorVMBaseTypes__Int        = 1,
	EVectorVMBaseTypes__Bool       = 2,
	EVectorVMBaseTypes__Num        = 3,
	EVectorVMBaseTypes__EVectorVMBaseTypes_MAX = 4
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
