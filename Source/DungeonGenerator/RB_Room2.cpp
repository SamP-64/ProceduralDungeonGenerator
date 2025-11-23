// Fill out your copyright notice in the Description page of Project Settings.


#include "RB_Room2.h"
#include "Components/ArrowComponent.h"

ARB_Room2::ARB_Room2()
{
	ExitArrow1 = CreateDefaultSubobject<UArrowComponent>(TEXT("ExitArrow1"));
	ExitArrow2 = CreateDefaultSubobject<UArrowComponent>(TEXT("ExitArrow2"));
	ClosingWall = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ClosingWall"));

	ExitArrow1->SetupAttachment(ExitFolder);
	ExitArrow2->SetupAttachment(ExitFolder);
	ClosingWall->SetupAttachment(GeometryFolder);
}