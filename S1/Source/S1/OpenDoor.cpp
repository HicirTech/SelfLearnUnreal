// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenDoor.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"


//void doorOpenDoor();
// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();
	this->owner = GetOwner();
	this->openObject = GetWorld()->GetFirstPlayerController()->GetPawn();
	
	//UE_LOG(LogTemp, Warning, TEXT("name : %s"),control->GetName());
	
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	this->DoorOpen();
	
	this->DoorClose();
	
}


void UOpenDoor::DoorOpen()
{
	if (this->trigger->IsOverlappingActor(this->openObject))
	{
		owner->SetActorRotation(FRotator(0.f, this->openAngle, 0.f));
		this->lastDoorOpen = GetWorld()->GetTimeSeconds();
	}
}
	

void UOpenDoor::DoorClose()
{
	if (doorCloseDelay + lastDoorOpen < GetWorld()->GetTimeSeconds())
	{		
		owner->SetActorRotation(FRotator(0.f, 0, 0.f));
	}
}
