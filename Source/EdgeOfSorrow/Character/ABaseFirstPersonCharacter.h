// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EdgeOfSorrow/Projectiles/ABaseProjectile.h"
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

	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	TSubclassOf<ABaseProjectile> ProjectileClass;

public:	
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
