#pragma once
#include "SDK.hpp"
#include "global.h"

#undef max
#define M_PI 3.14159265358979323846f

namespace Util
{
    void LeftClick(bool down)
    {
        INPUT Input = { 0 };
        ::ZeroMemory(&Input, sizeof(INPUT));
        Input.type = INPUT_MOUSE;

        if (down)
        {
            Input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
        }
        else
        {
            Input.mi.dwFlags = MOUSEEVENTF_LEFTUP;
        }

        ::SendInput(1, &Input, sizeof(INPUT));
    }

    bool DataCompare(PBYTE pData, PBYTE bSig, char* szMask)
    {
        for (; *szMask; ++szMask, ++pData, ++bSig)
        {
            if (*szMask == 'x' && *pData != *bSig)
                return false;
        }
        return (*szMask) == 0;
    }

    PBYTE FindPattern(PBYTE dwAddress, DWORD dwSize, PBYTE pbSig, char* szMask, long offset)
    {
        size_t length = strlen(szMask);
        for (size_t i = NULL; i < dwSize - length; i++)
        {
            if (DataCompare(dwAddress + i, pbSig, szMask))
                return dwAddress + i + offset;
        }
        return nullptr;
    }

    namespace Vector
    {
        SDK::FVector Add(SDK::FVector point1, SDK::FVector point2)
        {
            SDK::FVector vector{ 0, 0, 0 };
            vector.X = point1.X + point2.X;
            vector.Y = point1.Y + point2.Y;
            vector.Z = point1.Z + point2.Z;
            return vector;
        }

        SDK::FVector Subtract(SDK::FVector point1, SDK::FVector point2)
        {
            SDK::FVector vector{ 0, 0, 0 };
            vector.X = point1.X - point2.X;
            vector.Y = point1.Y - point2.Y;
            vector.Z = point1.Z - point2.Z;
            return vector;
        }

        SDK::FVector Square(SDK::FVector vector)
        {
            return SDK::FVector{ vector.X * vector.X, vector.Y * vector.Y, vector.Z * vector.Z };
        }
    }

    namespace Vector2D
    {
        SDK::FVector2D Subtract(SDK::FVector2D point1, SDK::FVector2D point2)
        {
            SDK::FVector2D vector{ 0, 0 };
            vector.X = point1.X - point2.X;
            vector.Y = point1.Y - point2.Y;
            return vector;
        }
    }

    namespace Engine
    {
        DWORD_PTR w2sAddress;
        bool WorldToScreen(SDK::APlayerController* m_Player, SDK::FVector WorldPosition, SDK::FVector2D* ScreenPosition)
        {
            return reinterpret_cast<char(__fastcall*)(SDK::APlayerController*, SDK::FVector, SDK::FVector2D *, char)>(w2sAddress)(m_Player, WorldPosition, ScreenPosition, 0);
        }

        DWORD_PTR boneAddress;
        SDK::FMatrix* GetBoneMatrix(SDK::USkeletalMeshComponent* mesh, SDK::FMatrix* result, int boneid)
        {
            return reinterpret_cast<SDK::FMatrix*(__fastcall*)(SDK::USkeletalMeshComponent*, SDK::FMatrix*, int)>(boneAddress)(mesh, result, boneid);
        }

        void GetBoneLocation(SDK::USkeletalMeshComponent* mesh, SDK::FVector* result, int boneid)
        {
            SDK::FMatrix vMatrix;
            SDK::FMatrix *vTempMatrix = GetBoneMatrix(mesh, &vMatrix, boneid);
            *result = vMatrix.WPlane;
        }
    }

    bool IsLocalPlayer(SDK::AActor* player)
    {
        if (Global::m_LocalPlayer->PlayerController->AcknowledgedPawn == nullptr)
        {
            return true;
        }
        return (static_cast<SDK::APawn*>(player) == Global::m_LocalPlayer->PlayerController->AcknowledgedPawn);
    }

    bool IsTeammate(SDK::AActor* player)
    {
        if (!player)
        {
            return false;
        }

        if (!player->IsA(SDK::AFortPawn::StaticClass()))
        {
            return false;
        }

        auto myPawn = Global::m_LocalPlayer->PlayerController->AcknowledgedPawn;
        if (!myPawn)
        {
            return false;
        }

        auto otherPawn = static_cast<SDK::AFortPawn*>(player);
        if (!myPawn->PlayerState || !otherPawn->PlayerState)
        {
            return false;
        }

        if (!myPawn->PlayerState->IsA(SDK::AFortPlayerStateAthena::StaticClass()) || !otherPawn->PlayerState->IsA(SDK::AFortPlayerStateAthena::StaticClass()))
        {
            return false;
        }

        auto state = static_cast<SDK::AFortPlayerStateAthena*>(myPawn->PlayerState);
        auto state2 = static_cast<SDK::AFortPlayerStateAthena*>(otherPawn->PlayerState);

        return state->TeamIndex.GetValue() == state2->TeamIndex.GetValue();
    }

    std::wstring DistanceToString(float distance)
    {
        auto meters = distance * 0.01f;
        std::wstringstream ss;

        if (meters < 1000.0f)
        {
            ss << fixed << setprecision(2) << meters << "m";
        }
        else
        {
            ss.precision(3);
            ss << fixed << setprecision(2) << (meters / 1000.0f) << "km";
        }

        return ss.str();
    }

    float GetDistance(SDK::FVector x, SDK::FVector y)
    {
        auto z = Vector::Subtract(x, y);
        return sqrt(z.X * z.X + z.Y * z.Y + z.Z * z.Z);
    }

    float GetDistance2D(SDK::FVector2D point1, SDK::FVector2D point2)
    {
        SDK::FVector2D heading = Vector2D::Subtract(point2, point1);
        float distanceSquared;
        float distance;

        distanceSquared = heading.X * heading.X + heading.Y * heading.Y;
        distance = sqrt(distanceSquared);

        return distance;
    }

    bool IsInFOV(SDK::APlayerController* m_Player, SDK::FVector position, float fov)
    {
        int screenSizeX, screenSizeY;
        m_Player->GetViewportSize(&screenSizeX, &screenSizeY);
        SDK::FVector2D centerScreen{ (float)screenSizeX / 2, (float)screenSizeY / 2 };
        SDK::FVector2D screenPos;
        if (Engine::WorldToScreen(m_Player, position, &screenPos))
        {
            float dist = GetDistance2D(centerScreen, screenPos);
            if (dist < fov)
                return true;
        }
        return false;
    }

    SDK::AActor* GetClosestVisiblePlayer(float maxDistance, bool ignoreWalls)
    {
        SDK::FVector localPos;

        auto playerController = Global::m_LocalPlayer->PlayerController;

        if (playerController != nullptr)
        {
            localPos = playerController->RootComponent->Location;
        }
        else
        {
            return nullptr;
        }

        SDK::AActor* closestPlayer = nullptr;

        std::vector<SDK::AActor*> candidates;

        auto actors = Global::m_persistentLevel->AActors;
        for (int i = 0; i < actors.Num(); i++)
        {
            auto actor = Global::m_persistentLevel->AActors[i];
            if (actor == nullptr || !actor->IsA(SDK::AFortPawn::StaticClass()) || actor->RootComponent == nullptr || IsLocalPlayer(actor))
            {
                continue;
            }

            if (IsTeammate(actor))
            {
                continue;
            }

            SDK::FVector zero{ 0.0f, 0.0f, 0.0f };
            if (!ignoreWalls && !playerController->LineOfSightTo(actor, zero, false))
            {
                continue;
            }

            auto pawn = static_cast<SDK::AFortPawn*>(actor);
            if (pawn->GetName().find("PlayerPawn_Athena_C") == string::npos)
            {
                continue;
            }

            if (pawn->GetHealth() <= 0.0f || pawn->bIsDBNO)
            {
                continue;
            }

            candidates.push_back(actor);
        }

        float distance = std::numeric_limits<float>::max();

        if (!ignoreWalls)
        {
            for (auto candidate : candidates)
            {
                SDK::FVector playerLoc;
                Util::Engine::GetBoneLocation(static_cast<SDK::ACharacter*>(candidate)->Mesh, &playerLoc, 66);
                float curDist = GetDistance(localPos, playerLoc);

                if (curDist < distance && curDist < maxDistance)
                {
                    distance = curDist;
                    closestPlayer = candidate;
                }
            }
        }

        int screenSizeX, screenSizeY;
        playerController->GetViewportSize(&screenSizeX, &screenSizeY);
        SDK::FVector2D centerScreen{ (float)screenSizeX / 2, (float)screenSizeY / 2 };

        distance = 300.0f;
        for (auto candidate : candidates)
        {
            SDK::FVector playerLoc;
            Util::Engine::GetBoneLocation(static_cast<SDK::ACharacter*>(candidate)->Mesh, &playerLoc, 66);

            SDK::FVector2D screenPos;
            if (Engine::WorldToScreen(playerController, playerLoc, &screenPos))
            {
                float dist = GetDistance2D(centerScreen, screenPos);
                if (dist < 24.0f)
                {
                    closestPlayer = candidate;
                    break;
                }
                else if (dist < distance)
                {
                    closestPlayer = candidate;
                    distance = dist;
                }
            }
        }

        return closestPlayer;
    }

    void LookAt(SDK::APlayerController* m_Player, SDK::FVector position)
    {
        SDK::FVector localPos = m_Player->PlayerCameraManager->TransformComponent->Location;
        SDK::FVector relativePos = Vector::Subtract(position, localPos);
        float tmp = atan2(relativePos.Y, relativePos.X) * 180.0f / M_PI;
        float yaw = tmp;//(tmp < 0 ? tmp + 360 : tmp);
        float pitch = -((acos(relativePos.Z / GetDistance(localPos, position)) * 180.0f / M_PI) - 90.0f);

        m_Player->ControlRotation.Pitch = pitch;
        m_Player->ControlRotation.Yaw = yaw;
    }
}