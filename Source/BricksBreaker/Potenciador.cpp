// Fill out your copyright notice in the Description page of Project Settings.


#include "Potenciador.h"

// Sets default values
APotenciador::APotenciador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void APotenciador::Color(float _color)
{
	color = _color;
}

// Called when the game starts or when spawned
void APotenciador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APotenciador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

