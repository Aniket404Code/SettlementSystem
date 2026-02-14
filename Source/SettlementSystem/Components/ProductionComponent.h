// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SettlementSystem/Components/ResourceComponent.h"
#include "ProductionComponent.generated.h"


class UResourceComponent;


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SETTLEMENTSYSTEM_API UProductionComponent : public UActorComponent
{
	GENERATED_BODY()


private:
    UPROPERTY()
    UResourceComponent* ResourceComponent;

public:
    virtual void BeginPlay() override;

    void StartProduction(
        const TArray<FResourceAmount>& Output,
        float IntervalDays);
};