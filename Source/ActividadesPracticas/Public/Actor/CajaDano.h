// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CajaDano.generated.h"

class UBoxComponent;

UCLASS()
class ACTIVIDADESPRACTICAS_API ACajaDano : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACajaDano();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UBoxComponent> BoxCollision;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
