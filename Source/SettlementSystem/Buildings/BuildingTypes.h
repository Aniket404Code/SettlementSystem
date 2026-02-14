// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BuildingTypes.generated.h"



UENUM(BlueprintType)
enum class EBuildingType : uint8
{
    Blacksmith_I    UMETA(DisplayName = "Blacksmith I"),
    Blacksmith_II   UMETA(DisplayName = "Blacksmith II"),
    Farmhouse       UMETA(DisplayName = "Farmhouse")
};
