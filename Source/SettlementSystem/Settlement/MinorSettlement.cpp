// Fill out your copyright notice in the Description page of Project Settings.


#include "MinorSettlement.h"
#include "SettlementSystem/Components/ResourceComponent.h"
#include "TimerManager.h"




AMinorSettlement::AMinorSettlement()
{
    PrimaryActorTick.bCanEverTick = false;
}

void AMinorSettlement::BeginPlay()
{
    Super::BeginPlay();

    float IntervalSeconds = ProductionIntervalDays * 60.f;

    GetWorld()->GetTimerManager().SetTimer(
        Timer,
        this,
        &AMinorSettlement::ProduceResources,
        IntervalSeconds,
        true);
}

void AMinorSettlement::ProduceResources()
{
    ResourceComponent->AddResource(EResourceType::Gold, 50);
}