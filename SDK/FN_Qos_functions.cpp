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

// Function Qos.QosBeaconClient.ServerQosRequest
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FString                 InSessionId                    (CPF_Parm, CPF_ZeroConstructor)

void AQosBeaconClient::ServerQosRequest(const struct FString& InSessionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Qos.QosBeaconClient.ServerQosRequest");

	AQosBeaconClient_ServerQosRequest_Params params;
	params.InSessionId = InSessionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Qos.QosBeaconClient.ClientQosResponse
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)

void AQosBeaconClient::ClientQosResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Qos.QosBeaconClient.ClientQosResponse");

	AQosBeaconClient_ClientQosResponse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
