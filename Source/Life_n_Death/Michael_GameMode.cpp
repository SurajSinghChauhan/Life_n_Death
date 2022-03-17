// Fill out your copyright notice in the Description page of Project Settings.


#include "Michael_GameMode.h"
#include "GameFramework/Actor.h"



AMichael_GameMode::AMichael_GameMode() {

	PrimaryActorTick.bCanEverTick = true;
}

void AMichael_GameMode::BeginPlay() {

	Super::BeginPlay();

	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(
		UnusedHandle, this, &AMichael_GameMode::SpawnPlayerRecharge, FMath::RandRange(2,5), true);
}

void AMichael_GameMode::Tick(float DeltaTime) {

	Super::Tick(DeltaTime);


}

void AMichael_GameMode::SpawnPlayerRecharge()
{

	float RandX = FMath::RandRange(Spawn_X_Min, Spawn_X_Max);
	float RandY = FMath::RandRange(Spawn_Y_Min, Spawn_Y_Max);

	FVector SpawnPosition = FVector(RandX,RandY,Spawn_Z);
	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);

	GetWorld()->SpawnActor(PlayerRecharge, &SpawnPosition, &SpawnRotation);



}
