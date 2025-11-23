#include "ClosingWallBase.h"

AClosingWallBase::AClosingWallBase()
{
 	PrimaryActorTick.bCanEverTick = true;

	ClosingWall = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ClosingWall"));
	ClosingWall->SetupAttachment(RootComponent);
}

void AClosingWallBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AClosingWallBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}