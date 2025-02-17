// Fill out your copyright notice in the Description page of Project Settings.

#include "cmpPositionReporter.h"
#include "Gameframework/Actor.h"


// Sets default values for this component's properties
UcmpPositionReporter::UcmpPositionReporter()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...

}


// Called when the game starts
void UcmpPositionReporter::BeginPlay()
{
	Super::BeginPlay();
	// ...
	//here we go...
	FString zObjectName = GetOwner()->GetName();
	//FString zObjectPosition ="X:..., Y=...";
	// FVector pPositionVector = GetOwner()->GetActorLocation();
	// FString zObjectPosition = pPositionVector.ToString();
	FString zObjectPosition = GetOwner()->GetActorLocation().ToString();
	// UE_LOG(LogTemp, Warning, TEXT("Position Reporting from object %s!"), *zObjectName);
	UE_LOG(LogTemp, Warning, TEXT("Object %s is at %s"), *zObjectName, *zObjectPosition);
}


// Called every frame
void UcmpPositionReporter::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

