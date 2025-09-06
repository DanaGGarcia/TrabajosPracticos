// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/ActorC.h"
#include "Interface/PlayerInterface.h"
#include "Components/SphereComponent.h"



// Sets default values
AActorC::AActorC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	RootComponent = SphereCollision;

	SphereMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SphereMesh"));
	SphereMesh->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AActorC::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActorC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AActorC::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if (OtherActor->Implements<UPlayerInterface>())
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "golpe");
		IPlayerInterface::Execute_RecuperarVida(OtherActor, Curacion);
	}
		

}

