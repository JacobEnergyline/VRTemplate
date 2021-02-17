// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class VRTEMPLATE_API AMyActor : public AActor
{
	GENERATED_BODY()


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SwitchComponents")
	class UPointLightComponent* PointLight1;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Sets default values for this actor's properties
	AMyActor();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SwitchComponents")
		class UStaticMeshComponent* Sphere1;
};
