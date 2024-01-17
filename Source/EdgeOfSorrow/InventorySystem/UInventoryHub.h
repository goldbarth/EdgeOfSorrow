// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AItem.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UInventoryHub.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class EDGEOFSORROW_API UUInventoryHub : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UUInventoryHub();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	TArray<AItem*> Items;

	void AddItem(AItem* ItemToAdd);
	bool HasItem(const AItem* ItemToAdd) const;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
