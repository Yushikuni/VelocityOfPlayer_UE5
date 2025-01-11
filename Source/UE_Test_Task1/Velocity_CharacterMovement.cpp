// Fill out your copyright notice in the Description page of Project Settings.


#include "GameFramework/Character.h"
#include "Velocity_CharacterMovement.h"
#include "MovementComponent.generated.h"


// Sets default values for this component's properties
UVelocity_CharacterMovement::UVelocity_CharacterMovement()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

float UVelocity_CharacterMovement::GetSpeed() const
{
	if (OwnerCharacter)
	{
		return OwnerCharacter->GetVelocity().Size();
	}
	return 0.0f;
}

void UVelocity_CharacterMovement::printVelocity()
{
	UE_LOG(LogTemp, Log, TEXT("Current Speed: %f"), GetSpeed());
	FString SpeedToString = FString::Printf(TEXT("Current Speed: %.2f"), GetSpeed());
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, SpeedToString);
	}
}


// Called when the game starts
void UVelocity_CharacterMovement::BeginPlay()
{
	Super::BeginPlay();

	// Getting owner
	OwnerCharacter = Cast<ACharacter>(GetOwner());
	if (!OwnerCharacter)
	{
		UE_LOG(LogTemp, Error, TEXT("Velocity Component is not attached to character!"));
	}
}


// Called every frame
void UVelocity_CharacterMovement::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	UVelocity_CharacterMovement::printVelocity();
}

