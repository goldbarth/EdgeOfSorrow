// Fill out your copyright notice in the Description page of Project Settings.


#include "AItem.h"

#include "EdgeOfSorrow/Character/ABaseFirstPersonCharacter.h"


// Sets default values
AItem::AItem()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	const FGuid Guid = FGuid::NewGuid();
	ItemID = Guid.ToString();
}

void AItem::BeginPlay()
{
	Super::BeginPlay();

	CastAndSetOwner();
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AItem::CastAndSetOwner()
{
	AABaseFirstPersonCharacter* CastedOwner = Cast<AABaseFirstPersonCharacter>(GetOwner());
	
	if (CastedOwner != nullptr)
	{
		ItemOwner = CastedOwner;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AItem::CastAndSetOwner: Owner ist kein AABaseFirstPersonCharacter."));
	}
}




