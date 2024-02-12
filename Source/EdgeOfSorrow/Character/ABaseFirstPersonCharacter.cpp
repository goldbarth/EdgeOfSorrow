// Fill out your copyright notice in the Description page of Project Settings.


#include "ABaseFirstPersonCharacter.h"

// Sets default values
AABaseFirstPersonCharacter::AABaseFirstPersonCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AABaseFirstPersonCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AABaseFirstPersonCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

