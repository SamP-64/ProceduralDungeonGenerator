// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RoomBase.generated.h"

class UBoxComponent;
class UArrowComponent;

UCLASS()
class DUNGEONGENERATOR_API ARoomBase : public AActor
{
	GENERATED_BODY()
	
public:	
	ARoomBase();
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	USceneComponent* GeometryFolder;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	USceneComponent* OverlapFolder;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	USceneComponent* ExitFolder;


protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	USceneComponent* DefaultSceneRoot;


	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* wall1;
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* wall2;
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* wall3;
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* wall4;
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* wall5;
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* wall6;
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* wall7;
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* wall8;
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* floor;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UBoxComponent* boxCollision;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UArrowComponent* arrow;
};
