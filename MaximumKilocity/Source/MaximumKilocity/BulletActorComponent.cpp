// Fill out your copyright notice in the Description page of Project Settings.

// Unreal Min
#include "MaximumKilocity.h"

// Project
#include "BulletActorComponent.h"


// Sets default values for this component's properties
UBulletActorComponent::UBulletActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UBulletActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	Speed = 80.0f;

}


// Called every frame
void UBulletActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

}

