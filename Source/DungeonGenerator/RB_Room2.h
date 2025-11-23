// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RoomBase.h"
#include "RB_Room2.generated.h"

/**
 * 
 */
UCLASS()
class DUNGEONGENERATOR_API ARB_Room2 : public ARoomBase
{
	GENERATED_BODY()
	
public:

	ARB_Room2();

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UArrowComponent* ExitArrow1;
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UArrowComponent* ExitArrow2;
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* ClosingWall;
};
