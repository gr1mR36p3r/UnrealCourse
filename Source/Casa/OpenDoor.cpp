// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenDoor.h"
#include "Engine/World.h"
#include "Gameframework/Actor.h"
#include "GameFramework/Controller.h"
#include "GameFramework/PlayerController.h"



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
	// ...
	// UWorld* World = GetWorld();
	ActorThatOpensDoor = GetWorld()->GetFirstPlayerController()->GetPawn();
	pDoor = GetOwner();
	//note, error on getworld is just an intellisense errore, VS compiles just fine
	/*
	UWorld* World = GetWorld();
	APlayerController *pPlayer = World->GetFirstPlayerController();
	ActorThatOpensDoor = pPlayer->GetPawn();
	*/
}

void UOpenDoor::OpenDoor()
{
	FRotator DoorOpener = FRotator(0.0f, OpenAngle, 0.0f);
	pDoor->SetActorRotation(DoorOpener);
	UE_LOG(LogTemp, Warning, TEXT("Door was opened"));
	//these lines were meant to show rotation in the debug window of unreal editor
	// FString zObjectName = pDoor->GetName();
	// FString zObjectRotation = pDoor->GetActorRotation().ToString();
	// UE_LOG(LogTemp, Warning, TEXT("Object %s is at %s"), *zObjectName, *zObjectRotation);
}
void UOpenDoor::CloseDoor()
{
	FRotator DoorOpener = FRotator(0.0f, ClosedAngle, 0.0f);
	pDoor->SetActorRotation(DoorOpener);
	UE_LOG(LogTemp, Warning, TEXT("Door was closed"));
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	// ...
	//every tick
	//	if the actor that opens is in the volume
	//		open the door
	if (PressurePlate->IsOverlappingActor(ActorThatOpensDoor))
		{
		OpenDoor();
		DoorLastOpenTime = GetWorld()->GetTimeSeconds();
		}
	if (GetWorld()->GetTimeSeconds() - DoorLastOpenTime > DoorClosingDelay)
		{
		CloseDoor(); 
		}
}

