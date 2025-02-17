// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/TriggerVolume.h"
#include "Components/ActorComponent.h"
#include "OpenDoor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CASA_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenDoor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void OpenDoor();
	void CloseDoor();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	UPROPERTY(EditAnywhere) //as opposed to VisibleAnywhere
		float OpenAngle = -180.f;
	UPROPERTY(EditAnywhere)
		float ClosedAngle = -90.f;
	UPROPERTY(EditAnywhere)
		ATriggerVolume *PressurePlate;
	UPROPERTY(EditAnywhere)
		float DoorClosingDelay = .75f;
	// UPROPERTY(EditAnywhere)
		AActor *ActorThatOpensDoor;
		AActor *pDoor; //door who is the owner
		float DoorLastOpenTime;
};
