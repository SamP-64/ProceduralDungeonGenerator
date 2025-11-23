// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SpawnableBase.h"
#include "ItemBase.generated.h"

/**
 * 
 */
UCLASS()
class DUNGEONGENERATOR_API AItemBase : public ASpawnableBase
{
	GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    FString ItemName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    float Value = 10.0f;

};

