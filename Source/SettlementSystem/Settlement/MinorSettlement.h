// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SettlementActorBase.h"
#include "SettlementSystem/Components/ResourceComponent.h"
#include "MinorSettlement.generated.h"



/**
 * 
 */
UCLASS()
class SETTLEMENTSYSTEM_API AMinorSettlement : public ASettlementActorBase
{
	GENERATED_BODY()
	
public:
    AMinorSettlement();

protected:
    virtual void BeginPlay() override;

private:
    UPROPERTY(EditAnywhere)
    float ProductionIntervalDays = 3.f;

    UPROPERTY(EditAnywhere)
    int32 GoldPerCycle = 50;

    void ProduceResources();

    FTimerHandle Timer;
};