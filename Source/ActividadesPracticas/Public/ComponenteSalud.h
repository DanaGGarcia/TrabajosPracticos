// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ComponenteSalud.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class ACTIVIDADESPRACTICAS_API UComponenteSalud : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UComponenteSalud();

	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	float VidaMaxima=100.f;

	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	float VidaActual=100.f;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void RecuperarVida(float Cura);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void RestarVida(float Danio);
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
};
