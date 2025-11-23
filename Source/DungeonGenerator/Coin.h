// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemBase.h"
#include "Coin.generated.h"

/**
 * 
 */
UCLASS()
class DUNGEONGENERATOR_API ACoin : public AItemBase
{
	GENERATED_BODY()

	public:
    ACoin();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Coin")
	UStaticMeshComponent* CoinMesh;

};
