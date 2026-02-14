// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SettlementSystem/Types/ResourceTypes.h"
#include "SettlementSystem/Buildings/BuildingData.h"
#include "SettlementSystem/Buildings/BuildingTypes.h"
#include "SettlementActorBase.generated.h"


// Notify when building constructed
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(
	FOnBuildingConstructedUI,
	EBuildingType, BuildingType);

// Notify when resource amount changes
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
	FOnResourceChangedUI,
	EResourceType, ResourceType,
	int32, NewAmount);


class USettlementComponent;
class UResourceComponent;



UCLASS()
class SETTLEMENTSYSTEM_API ASettlementActorBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASettlementActorBase();

	// Fired when building constructed
	UPROPERTY(BlueprintAssignable, Category = "Settlement|UI")
	FOnBuildingConstructedUI OnBuildingConstructedUI;

	// Fired when resource amount changes
	UPROPERTY(BlueprintAssignable, Category = "Settlement|UI")
	FOnResourceChangedUI OnResourceChangedUI;

protected:

	UPROPERTY(VisibleAnywhere)
	UResourceComponent* ResourceComponent;
};
