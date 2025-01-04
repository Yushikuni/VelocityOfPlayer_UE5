// Fill out your copyright notice in the Description page of Project Settings.


#include "Velocity_CharacterMovement.h"


// Sets default values for this component's properties
UVelocity_CharacterMovement::UVelocity_CharacterMovement()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UVelocity_CharacterMovement::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UVelocity_CharacterMovement::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

/*
* Checking if player is moving
* input: controller and deltatime
* output: true if actor is change location between deltatime or false if it stays at the same position
*/
bool UVelocity_CharacterMovement::IsMoving(AController Controller, float DeltaTime)
{
	actorLocation = Controller.GetActorLocation();
	actorRotation = Controller.GetControlRotation();

	return false;
}

// Is player moving

