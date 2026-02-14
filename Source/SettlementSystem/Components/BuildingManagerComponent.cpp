// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildingManagerComponent.h"
//#include "ResourceComponent.h"
#include "SettlementSystem/Buildings/BuildingData.h"
#include "GameFramework/Actor.h"



bool UBuildingManagerComponent::CanConstructBuilding(const UBuildingData* Data) const
{
    if (!Data)
    {
        UE_LOG(LogTemp, Warning, TEXT("CanConstructBuilding failed: Data is NULL"));
        return false;
    }
       
    // Iterate through all required buildings for this building
    for (EBuildingType Required : Data->RequiredBuildings)
    {
        if (!ConstructedBuildings.Contains(Required)) // agar required building construct nhi hui hai to construction failed . Like BlacksmithII required BSI
        {
            UE_LOG(LogTemp, Warning,
                TEXT("Cannot construct %s. Missing required building: %d"),
                *Data->GetName(),
                (int32)Required);
            return false;

        }
    }

    UE_LOG(LogTemp, Log,TEXT("All requirements satisfied for building: %s"), *Data->GetName());
    return true;
}

void UBuildingManagerComponent::RegisterBuilding(const UBuildingData* Data)
{
    if (!Data)
    {
        UE_LOG(LogTemp, Warning, TEXT("RegisterBuilding failed: Data is NULL"));
        return;

    }

    ConstructedBuildings.Add(Data->BuildingType);  // Add building type to constructed buildings set

    UE_LOG(LogTemp, Log,
        TEXT("Building Registered: %s (Type: %d)"), *Data->GetName(), (int32)Data->BuildingType); // example message LogTemp: Building Registered: Farmhouse (Type: 1)  

    // Notify other systems that building successfully constructed
    OnBuildingConstructed.Broadcast(Data->BuildingType);
}