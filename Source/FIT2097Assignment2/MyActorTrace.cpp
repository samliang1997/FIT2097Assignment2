// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorTrace.h"
#include "DrawDebugHelpers.h"

// Sets default values
AMyActorTrace::AMyActorTrace()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void AMyActorTrace::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActorTrace::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
}

