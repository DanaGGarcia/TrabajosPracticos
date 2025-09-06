// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/CajaDano.h"

#include "Components/BoxComponent.h"


// Sets default values
ACajaDano::ACajaDano()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	RootComponent = BoxCollision;
}

// Called when the game starts or when spawned
void ACajaDano::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACajaDano::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

