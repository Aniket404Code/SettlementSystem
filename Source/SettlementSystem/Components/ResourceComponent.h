// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include <SettlementSystem/Buildings/BuildingData.h>
#include "SettlementSystem/Types/ResourceTypes.h"
#include "SettlementSystem/Settlement/SettlementActorBase.h"
#include "ResourceComponent.generated.h"





UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SETTLEMENTSYSTEM_API UResourceComponent : public UActorComponent
{
	GENERATED_BODY()


private:

    UPROPERTY()
    TMap<EResourceType, int32> Resources;

    // Reference to settlement owner
    UPROPERTY()
    ASettlementActorBase* SettlementOwner;

public:
    virtual void BeginPlay() override;

    void AddResource(EResourceType Type, int32 Amount);

    bool HasEnough(const TArray<FResourceAmount>& Cost) const;

    bool SpendResources(const TArray<FResourceAmount>& Cost);

    int32 GetResourceAmount(EResourceType Type) const;
};