// Fill out your copyright notice in the Description page of Project Settings.


#include "UInventoryHub.h"

// Sets default values for this component's properties
UUInventoryHub::UUInventoryHub()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

void UUInventoryHub::AddItem(AItem* ItemToAdd)
{
	if (ItemToAdd == nullptr) return;

	for (const auto* Item : Items)
	{
		if (Item && Item->ItemID == ItemToAdd->ItemID) return;
	}
	
	Items.Add(ItemToAdd);
}

bool UUInventoryHub::HasItem(const AItem* ItemToAdd) const
{
	if (ItemToAdd == nullptr) return false;

	for (const auto* Item : Items)
	{
		if (Item && Item->ItemID == ItemToAdd->ItemID) return true;
	}

	return false;
}

// Called when the game starts
void UUInventoryHub::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UUInventoryHub::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

