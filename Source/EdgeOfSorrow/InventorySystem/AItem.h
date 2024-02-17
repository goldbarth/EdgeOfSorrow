// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Misc/Guid.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AItem.generated.h"

UCLASS( Blueprintable  )
class EDGEOFSORROW_API AItem : public AActor
{
	GENERATED_BODY()

public:
	AItem();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Items")
	FString ItemID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Items")
	FString ItemName;
};
