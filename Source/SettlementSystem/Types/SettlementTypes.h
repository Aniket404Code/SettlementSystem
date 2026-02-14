// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SettlementTypes.generated.h"



UENUM(BlueprintType)
enum class ESettlementType : uint8
{
    Major   UMETA(DisplayName = "Major Settlement"),
    Minor   UMETA(DisplayName = "Minor Settlement")
};
