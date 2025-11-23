// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RoomBase.h"
#include "RB_Room3.generated.h"

/**
 * 
 */
UCLASS()
class DUNGEONGENERATOR_API ARB_Room3 : public ARoomBase
{
	GENERATED_BODY()

public:

	ARB_Room3();

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UArrowComponent* ExitArrow1;
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* ClosingWall1;
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* ClosingWall2;
	
};
