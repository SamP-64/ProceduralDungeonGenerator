// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DungeonSpawner.generated.h"

class ARB_Room1;
class ARoomBase;
class AItemBase;
class AClosingWallBase;

UCLASS()
class DUNGEONGENERATOR_API ADungeonSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	ADungeonSpawner();

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Rooms")
	TSubclassOf<ARB_Room1> StarterRoom;

	UPROPERTY(EditAnywhere, Category = "Rooms")
	TArray<TSubclassOf<ARoomBase>> RoomsToSpawn;

	UPROPERTY(EditAnywhere, Category = "Exits")
	TSubclassOf<AClosingWallBase> ClosingWall;

	UPROPERTY(EditAnywhere, Category = "Rooms")
	int roomAmount;


	TArray<USceneComponent*> Exits;

	ARoomBase* SpawnedRoom;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	TSubclassOf<AItemBase> CoinClass;

protected:
	virtual void BeginPlay() override;

	void SpawnStartRoom();
	void SpawnNexRoom();
	void RemoveOverlappingRooms(USceneComponent* SelectedExitPoint);
	void CloseExits();
	bool canSpawn;
};
