// Fill out your copyright notice in the Description page of Project Settings.


#include "AItem.h"

// Sets default values
AItem::AItem()
{
	const FGuid Guid = FGuid::NewGuid();
	ItemID = Guid.ToString();
}

void AItem::BeginPlay()
{
	Super::BeginPlay();
	
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}




