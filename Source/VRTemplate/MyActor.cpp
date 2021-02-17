// Fill out your copyright notice in the Description page of Project Settings.
#include "MyActor.h"
#include "VRTemplate.h"
#include "Components/PointLightComponent.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
AMyActor::AMyActor()
{
	PointLight1 = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight1"));

	PointLight1-> Intensity = 1000.0f;
	RootComponent = PointLight1;
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Sphere1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere1"));
	Sphere1-> AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

