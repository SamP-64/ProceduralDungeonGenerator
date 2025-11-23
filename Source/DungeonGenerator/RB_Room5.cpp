// Fill out your copyright notice in the Description page of Project Settings.


#include "RB_Room5.h"

#include "Components/ArrowComponent.h"

ARB_Room5::ARB_Room5()
{
	ExitArrow1 = CreateDefaultSubobject<UArrowComponent>(TEXT("ExitArrow1"));
	ClosingWall1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ClosingWall1"));
	ClosingWall2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ClosingWall2"));

	ExitArrow1->SetupAttachment(ExitFolder);
	ClosingWall1->SetupAttachment(GeometryFolder);
	ClosingWall2->SetupAttachment(GeometryFolder);
}