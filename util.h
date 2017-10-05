#pragma once
#include "SDK.hpp"
#include "variables.h"
#include "FindPattern.h"

#undef max
#define M_PI 3.14159265358979323846f

namespace Utils
{
	namespace Vector
	{
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
		if (Variables::m_LocalPlayer->PlayerController->AcknowledgedPawn == nullptr)
		{
			return true;
		}
		return (static_cast<SDK::APawn*>(player) == Variables::m_LocalPlayer->PlayerController->AcknowledgedPawn);
	}

	float GetDistance(SDK::FVector point1, SDK::FVector point2)
	{
		SDK::FVector heading = Vector::Subtract(point2, point1);
		float distanceSquared;
		float distance;

		distanceSquared = heading.X * heading.X + heading.Y * heading.Y + heading.Z * heading.Z;
		distance = sqrt(distanceSquared);

		return distance;
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

	SDK::AActor* GetClosestPlayer()
	{
        float distance = std::numeric_limits<float>::max();
		SDK::AActor* closestPlayer = nullptr;
		SDK::FVector localPos;

		if (Variables::m_LocalPlayer->PlayerController != nullptr)
		{
			localPos = Variables::m_LocalPlayer->PlayerController->RootComponent->Location;
		}
		else
		{
			printf("null at pos 01\n\n\n\n");
			return nullptr;
		}

		SDK::TArray<SDK::AActor*> actors = Variables::m_persistentLevel->AActors;
		for (int i = 0; i < actors.Num(); i++)
		{
			SDK::AActor* m_Player = 0;
			m_Player = Variables::m_persistentLevel->AActors[i];
			if (m_Player != nullptr)
			{
				if (m_Player->IsA(SDK::ACharacter::StaticClass()))
				{
					if (m_Player->RootComponent != nullptr && !IsLocalPlayer(m_Player))
					{
						SDK::FVector playerLoc;
						Utils::Engine::GetBoneLocation(static_cast<SDK::ACharacter*>(m_Player)->Mesh, &playerLoc, 66);
						float curDist = GetDistance(localPos, playerLoc);
						if (curDist < distance)
						{
							if (IsInFOV(Variables::m_LocalPlayer->PlayerController, playerLoc, Variables::fov))
							{
								distance = curDist;
								closestPlayer = m_Player;
							}
						}
					}
				}
			}
		}
		return closestPlayer;
	}

    SDK::AActor* GetClosestVisiblePlayer(float maxRange)
    {
        SDK::FVector localPos;

        auto playerController = Variables::m_LocalPlayer->PlayerController;

        if (playerController != nullptr)
        {
            localPos = playerController->RootComponent->Location;
        }
        else
        {
            return nullptr;
        }

        float distance = std::numeric_limits<float>::max();
        SDK::AActor* closestPlayer = nullptr;

        std::vector<SDK::AActor*> candidates;

        auto& actors = Variables::m_persistentLevel->AActors;
        for (int i = 0; i < actors.Num(); i++)
        {
            auto m_Player = Variables::m_persistentLevel->AActors[i];
            if (m_Player != nullptr)
            {
                if (m_Player->IsA(SDK::AFortPawn::StaticClass()))
                {
                    if (m_Player->RootComponent != nullptr && !IsLocalPlayer(m_Player))
                    {
                        SDK::FVector playerLoc;
                        Utils::Engine::GetBoneLocation(static_cast<SDK::AFortPawn*>(m_Player)->Mesh, &playerLoc, 66);
                        if (GetDistance(playerLoc, localPos) > maxRange * 0.95f)
                        {
                            continue;
                        }

                        SDK::FVector zero{ 0.0f, 0.0f, 0.0f };
                        if (!playerController->LineOfSightTo(m_Player, zero, false))
                        {
                            continue;
                        }

                        auto pawn = static_cast<SDK::AFortPawn*>(m_Player);
                        if (pawn->GetName().find("PlayerPawn_Athena_C") == string::npos)
                        {
                            continue;
                        }

                        if (pawn->GetHealth() <= 0.0f || pawn->bIsDBNO)
                        {
                            continue;
                        }

                        candidates.push_back(m_Player);
                    }
                }
            }
        }

        for (auto candidate : candidates)
        {
            SDK::FVector playerLoc;
            Utils::Engine::GetBoneLocation(static_cast<SDK::ACharacter*>(candidate)->Mesh, &playerLoc, 66);
            float curDist = GetDistance(localPos, playerLoc);

            if (curDist < distance)
            {
                distance = curDist;
                closestPlayer = candidate;
            }
        }

        int screenSizeX, screenSizeY;
        playerController->GetViewportSize(&screenSizeX, &screenSizeY);
        SDK::FVector2D centerScreen{ (float)screenSizeX / 2, (float)screenSizeY / 2 };

        distance = 360.0f;
        for (auto candidate : candidates)
        {
            SDK::FVector playerLoc;
            Utils::Engine::GetBoneLocation(static_cast<SDK::ACharacter*>(candidate)->Mesh, &playerLoc, 66);

            SDK::FVector2D screenPos;
            if (Engine::WorldToScreen(playerController, playerLoc, &screenPos))
            {
                float dist = GetDistance2D(centerScreen, screenPos);
                if (dist < distance)
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