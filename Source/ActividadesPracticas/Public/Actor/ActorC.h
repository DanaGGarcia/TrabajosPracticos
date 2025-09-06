// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorC.generated.h"

class USphereComponent;

UCLASS()

class ACTIVIDADESPRACTICAS_API AActorC : public AActor
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	AActorC();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats", meta = (ClampMin = 0, ToolTip = "Salud del personaje"))
	float Salud;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats", meta = (ClampMin = 0, ClampMax = 5000, UIMin = 0, UIMax = 5000, ToolTip = "Escudo del personaje"))
	int Escudo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<USphereComponent> SphereCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UStaticMeshComponent> SphereMesh;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
