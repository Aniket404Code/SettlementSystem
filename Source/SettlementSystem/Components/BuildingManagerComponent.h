// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SettlementSystem/Buildings/BuildingTypes.h"
#include "BuildingManagerComponent.generated.h"



class UBuildingData;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(
    FOnBuildingConstructed,
    EBuildingType,
    BuildingType);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SETTLEMENTSYSTEM_API UBuildingManagerComponent : public UActorComponent
{
	GENERATED_BODY()


private:

    UPROPERTY()
    TArray<EBuildingType> ConstructedBuildings;

public:

    UPROPERTY(BlueprintAssignable)
    FOnBuildingConstructed OnBuildingConstructed;

    bool CanConstructBuilding(const UBuildingData* Data) const;

    void RegisterBuilding(const UBuildingData* Data);
};
