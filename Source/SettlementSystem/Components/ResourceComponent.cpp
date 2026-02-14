// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceComponent.h"



void UResourceComponent::BeginPlay()
{
    Super::BeginPlay();

    SettlementOwner = Cast<ASettlementActorBase>(GetOwner());

    if (SettlementOwner)
    {
        UE_LOG(LogTemp, Log,
            TEXT("ResourceComponent linked to Settlement"));
    }
}

void UResourceComponent::AddResource(EResourceType Type, int32 Amount)
{
    if (Amount <= 0)
    {
        UE_LOG(LogTemp, Warning,
            TEXT("AddResource failed: Invalid amount %d"), Amount);
        return;
    }
    // Find existing resource or create new entry from Map
    int32& ResourceAmount = Resources.FindOrAdd(Type);
    ResourceAmount += Amount;

    UE_LOG(LogTemp, Log,TEXT("Resource Added: Type=%d Amount=%d NewTotal=%d"),(int32)Type, Amount, ResourceAmount);
    
    // Notify UI here
    if (SettlementOwner)
    {
        SettlementOwner->OnResourceChangedUI.Broadcast(Type, ResourceAmount);
    }
}

bool UResourceComponent::HasEnough(const TArray<FResourceAmount>& Cost) const
{
    for (const FResourceAmount& Entry : Cost)
    {
        const int32* Found = Resources.Find(Entry.Type);

        // Resource not found
        if (!Found )
        {
            UE_LOG(LogTemp, Warning, TEXT("HasEnough failed: Resource Type=%d not found"), (int32)Entry.Type);
            return false;
        }
        
        // Resource insufficient
        if (*Found < Entry.Amount)
        {
            UE_LOG(LogTemp, Warning,
                TEXT("HasEnough failed: Resource Type=%d Required=%d Available=%d"),
                (int32)Entry.Type,
                Entry.Amount,
                *Found);

            return false;
        }
    }
    // Success 
    return true;
}

bool UResourceComponent::SpendResources(const TArray<FResourceAmount>& Cost)
{
    if (!HasEnough(Cost))
        return false;

    for (const FResourceAmount& Entry : Cost)
    {
        Resources[Entry.Type] -= Entry.Amount;
    }

    return true;
}

int32 UResourceComponent::GetResourceAmount(EResourceType Type) const
{
    const int32* Found = Resources.Find(Type);

    int32 Result = Found ? *Found : 0;
    return Result;
}
