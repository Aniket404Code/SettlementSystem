// Fill out your copyright notice in the Description page of Project Settings.


#include "SettlementActorBase.h"
#include "SettlementSystem/Components/SettlementComponent.h"
#include "SettlementSystem/Components/ResourceComponent.h"

ASettlementActorBase::ASettlementActorBase()
{
    ResourceComponent = CreateDefaultSubobject<UResourceComponent>("ResourceComponent");
}

