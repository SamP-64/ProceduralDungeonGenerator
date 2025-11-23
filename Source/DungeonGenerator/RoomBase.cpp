#include "RoomBase.h"
#include "Components/BoxComponent.h"
#include "Components/ArrowComponent.h"

ARoomBase::ARoomBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	GeometryFolder = CreateDefaultSubobject<USceneComponent>(TEXT("GeometryFolder"));
	OverlapFolder = CreateDefaultSubobject<USceneComponent>(TEXT("OverlapFolder"));
	ExitFolder = CreateDefaultSubobject<USceneComponent>(TEXT("ExitFolder"));



	wall1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall1"));
	wall2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall2"));
	wall3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall3"));
	wall4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall4"));
	wall5 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall5"));
	wall6 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall6"));
	wall7 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall7"));
	wall8 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall8"));
	
	floor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Floor"));
	boxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));


	DefaultSceneRoot->SetupAttachment(RootComponent);
	GeometryFolder->SetupAttachment(DefaultSceneRoot);
	OverlapFolder->SetupAttachment(DefaultSceneRoot);
	ExitFolder->SetupAttachment(DefaultSceneRoot);
	arrow->SetupAttachment(DefaultSceneRoot);

	wall1->SetupAttachment(GeometryFolder);
	wall2->SetupAttachment(GeometryFolder);
	wall3->SetupAttachment(GeometryFolder);
	wall4->SetupAttachment(GeometryFolder);
	wall5->SetupAttachment(GeometryFolder);
	wall6->SetupAttachment(GeometryFolder);
	wall7->SetupAttachment(GeometryFolder);
	wall8->SetupAttachment(GeometryFolder);
	floor->SetupAttachment(GeometryFolder);

	boxCollision->SetupAttachment(OverlapFolder);

	arrow->bHiddenInGame = false;
}

// Called when the game starts or when spawned
void ARoomBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARoomBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

