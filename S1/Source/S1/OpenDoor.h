// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "OpenDoor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class S1_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenDoor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void DoorOpen();
	void DoorClose();
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	UPROPERTY(EditAnywhere) float openAngle = -60.0f;
	UPROPERTY(EditAnyWhere) ATriggerVolume* trigger;
	UPROPERTY(EditAnyWhere) AActor* openObject;
	UPROPERTY(EditAnyWhere) float doorCloseDelay;
	UPROPERTY(VisibleAnywhere) float lastDoorOpen;
	AActor* owner;
};
