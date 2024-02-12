// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ABaseFirstPersonCharacter.generated.h"

UCLASS()
class EDGEOFSORROW_API AABaseFirstPersonCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AABaseFirstPersonCharacter();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
};
