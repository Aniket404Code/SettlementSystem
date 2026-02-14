#pragma once
#include "CoreMinimal.h"
#include "ResourceTypes.generated.h"

UENUM(BlueprintType)
enum class EResourceType : uint8
{
    Wood,
    Stone,
    Gold,
    Food,
    Weaponry
};

USTRUCT(BlueprintType)
struct FResourceAmount
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EResourceType Type;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 Amount = 0;
};
