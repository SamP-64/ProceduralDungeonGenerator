// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RoomBase.h"
#include "RB_Room1.generated.h"

/**
 * 
 */
UCLASS()
class DUNGEONGENERATOR_API ARB_Room1 : public ARoomBase
{
	GENERATED_BODY()
	
public:

	ARB_Room1();
    
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UArrowComponent* ExitArrow1;
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UArrowComponent* ExitArrow2;
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UArrowComponent* ExitArrow3;

};
