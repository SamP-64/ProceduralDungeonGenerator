#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnableBase.generated.h"

UCLASS()
class DUNGEONGENERATOR_API ASpawnableBase : public AActor
{
    GENERATED_BODY()

public:
    ASpawnableBase();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawnable")
    float SpawnWeight = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawnable")
    bool bIsEnemy = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawnable")
    bool bIsItem = false;
};
