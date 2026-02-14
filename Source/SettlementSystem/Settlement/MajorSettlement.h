// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SettlementActorBase.h"
#include "SettlementSystem/Buildings/BuildingData.h"
#include "MajorSettlement.generated.h"



class UBuildingManagerComponent;
class UProductionComponent;
//struct UBuildingData;

/**
 * 
 */
UCLASS()
class SETTLEMENTSYSTEM_API AMajorSettlement : public ASettlementActorBase
{
	GENERATED_BODY()
	
public:
    AMajorSettlement();

    bool TryConstructBuilding(const UBuildingData* Data);

private:
    UPROPERTY(VisibleAnywhere)
    UBuildingManagerComponent* BuildingManager;

    UPROPERTY(VisibleAnywhere)
    UProductionComponent* Production;

};
