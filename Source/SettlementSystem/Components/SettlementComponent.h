// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SettlementComponent.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SETTLEMENTSYSTEM_API USettlementComponent : public UActorComponent
{
	GENERATED_BODY()


public:

    /* Level System ------------------------------*/

    bool CanUpgrade() const;
    bool UpgradeSettlement();

   //Population

    void SetPopulation(int32 NewPopulation);
    void AddPopulation(int32 Amount);


};