#include "DungeonSpawner.h"
#include "RB_Room1.h"
#include "RoomBase.h"
#include "ItemBase.h"
#include "ClosingWallBase.h"

#include "Components/BoxComponent.h"

// Sets default values
ADungeonSpawner::ADungeonSpawner()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ADungeonSpawner::SpawnStartRoom()
{
	canSpawn = true;
	ARB_Room1* SpawnedStarterRoom = this->GetWorld()->SpawnActor<ARB_Room1>(StarterRoom);
    SpawnedStarterRoom->SetActorLocation(this->GetActorLocation());
	
	SpawnedStarterRoom->ExitFolder->GetChildrenComponents(false, Exits);

}

void ADungeonSpawner::SpawnNexRoom()
{
	canSpawn = true;

	SpawnedRoom = this->GetWorld()->SpawnActor<ARoomBase>(RoomsToSpawn[rand() % RoomsToSpawn.Num()]);

	USceneComponent* SelectedExitPoint = Exits[rand() % Exits.Num()];

	SpawnedRoom->SetActorLocation(SelectedExitPoint->GetComponentLocation());
	SpawnedRoom->SetActorRotation(SelectedExitPoint->GetComponentRotation());

	RemoveOverlappingRooms(SelectedExitPoint);

	if (canSpawn)
	{
		Exits.Remove(SelectedExitPoint);
		TArray<USceneComponent*> LatestRoomExits;
		SpawnedRoom->ExitFolder->GetChildrenComponents(false, LatestRoomExits);
		Exits.Append(LatestRoomExits); // Adds latest rooms exits to the array

		// Decide whether to spawn a coin
		if (FMath::FRand() < 0.3f) // 30% chance
		{
			FVector SpawnLocation = SpawnedRoom->GetActorLocation() + FVector(0, -500, 200); // slightly above floor
			FRotator SpawnRotation = FRotator::ZeroRotator;

			GetWorld()->SpawnActor<AItemBase>(CoinClass, SpawnLocation, SpawnRotation);
		}

	}

	roomAmount = roomAmount - 1;

	if (roomAmount > 0)
	{
		SpawnNexRoom();
	}
}

void ADungeonSpawner::RemoveOverlappingRooms(USceneComponent* SelectedExitPoint)
{
	TArray<USceneComponent*> OverlapRooms;
	SpawnedRoom->OverlapFolder->GetChildrenComponents(false, OverlapRooms);

	TArray<UPrimitiveComponent*> OverlapComponents;
	for (USceneComponent* element : OverlapRooms)
	{
		Cast<UBoxComponent>(element)->GetOverlappingComponents(OverlapComponents);
	}

	for (UPrimitiveComponent* element : OverlapComponents)
	{
		canSpawn = false;
		roomAmount = roomAmount + 1;
		Exits.Remove(SelectedExitPoint); // Remove incompatable exit point
		SpawnedRoom->Destroy();
	}
}

void ADungeonSpawner::CloseExits()
{
	for (USceneComponent* element : Exits)
	{
		AClosingWallBase* SpawnedWall = GetWorld()->SpawnActor<AClosingWallBase>(ClosingWall);
		FVector RelativeOffset(0.0f,-350.f, 100.0f);
		FVector WorldOffset = element->GetComponentRotation().RotateVector(RelativeOffset);

		SpawnedWall->SetActorLocation(element->GetComponentLocation() + WorldOffset);
		SpawnedWall->SetActorRotation(element->GetComponentRotation() + FRotator(0.0f, 90.0f, 0.0f));

	}
}

void ADungeonSpawner::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle UnusedHandle;

	SpawnStartRoom();
	SpawnNexRoom();

	GetWorld()->GetTimerManager().SetTimer(UnusedHandle, this, &ADungeonSpawner::CloseExits, 1.0f);
}

void ADungeonSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

