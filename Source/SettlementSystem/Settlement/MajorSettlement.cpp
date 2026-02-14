// Fill out your copyright notice in the Description page of Project Settings.


#include "MajorSettlement.h"
#include "SettlementSystem/Components/ResourceComponent.h"
#include "SettlementSystem/Components/BuildingManagerComponent.h"
#include "SettlementSystem/Components/ProductionComponent.h"
#include "SettlementSystem/Buildings/BuildingData.h"



AMajorSettlement::AMajorSettlement()
{
    BuildingManager = CreateDefaultSubobject<UBuildingManagerComponent>("BuildingManager");

    Production = CreateDefaultSubobject<UProductionComponent>("Production");
}

bool AMajorSettlement::TryConstructBuilding(const UBuildingData* Data) // take building configuration (type , amount)
{
    if (!Data)
        return false;

    if (!BuildingManager->CanConstructBuilding(Data))
        return false;

    if (!ResourceComponent->SpendResources(Data->ConstructionCost))
        return false;

  
    // Register Building
    BuildingManager->RegisterBuilding(Data);

    // NOTIFY UI HERE
    OnBuildingConstructedUI.Broadcast(Data->BuildingType);

    UE_LOG(LogTemp, Log,
        TEXT("UI Notified: Building Constructed"));

    // Start Production 
    Production->StartProduction(
        Data->ProductionOutput,
        Data->ProductionIntervalDays);

    return true;
}