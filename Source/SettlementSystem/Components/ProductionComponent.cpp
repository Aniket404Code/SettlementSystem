// Fill out your copyright notice in the Description page of Project Settings.


#include "ProductionComponent.h"
#include "SettlementSystem/Components/ResourceComponent.h"
#include "TimerManager.h"
#include "GameFramework/Actor.h"



void UProductionComponent::BeginPlay()
{
    if (!ResourceComponent) return;

    ResourceComponent = GetOwner()->FindComponentByClass<UResourceComponent>(); // give settlement actor like Major , Minor
}

void UProductionComponent::StartProduction(const TArray<FResourceAmount>& Output, float IntervalDays)
{
    if (!ResourceComponent)
        return;

    float IntervalSeconds = IntervalDays * 60.f;

    FTimerHandle Timer;

    GetWorld()->GetTimerManager().SetTimer(
        Timer,
        [this, Output]() // lamda function
        {
            for (const FResourceAmount& Entry : Output)
            {
                ResourceComponent->AddResource(Entry.Type, Entry.Amount);
            }
        },
        IntervalSeconds,
        true
    );
}