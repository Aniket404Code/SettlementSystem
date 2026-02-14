// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SettlementSystem/Types/ResourceTypes.h"
#include "BuildingTypes.h"
#include "BuildingData.generated.h"



UCLASS()
class UBuildingData : public UDataAsset
{
    GENERATED_BODY()

public:

    UPROPERTY(EditAnywhere)
    EBuildingType BuildingType;

    UPROPERTY(EditAnywhere)
    TArray<FResourceAmount> ConstructionCost;

    UPROPERTY(EditAnywhere)
    TArray<EBuildingType> RequiredBuildings;

    UPROPERTY(EditAnywhere)
    float ProductionIntervalDays;

    UPROPERTY(EditAnywhere)
    TArray<FResourceAmount> ProductionOutput;
};
