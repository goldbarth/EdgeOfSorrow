// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "ABaseProjectile.generated.h"

UCLASS()
class EDGEOFSORROW_API ABaseProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	ABaseProjectile();

protected:


public:	
	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
	UPrimitiveComponent* CollisionComponent;

	UPROPERTY(VisibleAnywhere, Category = Movement)
	UProjectileMovementComponent* ProjectileMovementComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
	UMeshComponent* ProjectileMeshComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = Movement)
	UMaterialInstanceDynamic* ProjectileMaterialInstance;

	// Makes sure to override this function in the child class (blueprint or c++)
	// Bridge between c++ and blueprint (Developers and designers)
	UFUNCTION(BlueprintNativeEvent, Category = "Projectile")
	void InitializeMeshComponent();
	virtual void InitializeMeshComponent_Implementation();

	UFUNCTION(BlueprintNativeEvent, Category = "Projectile")
	void InitializeCollisionComponent();
	virtual void InitializeCollisionComponent_Implementation();
	
	void FireDirection(const FVector& ShootDirection);
};
