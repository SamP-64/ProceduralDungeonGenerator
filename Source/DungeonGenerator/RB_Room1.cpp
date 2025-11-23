// Fill out your copyright notice in the Description page of Project Settings.


#include "RB_Room1.h"
#include "Components/ArrowComponent.h"

ARB_Room1::ARB_Room1()
{
	ExitArrow1 = CreateDefaultSubobject<UArrowComponent>(TEXT("ExitArrow1"));
	ExitArrow2 = CreateDefaultSubobject<UArrowComponent>(TEXT("ExitArrow2"));
	ExitArrow3 = CreateDefaultSubobject<UArrowComponent>(TEXT("ExitArrow3"));

	ExitArrow1->SetupAttachment(ExitFolder);
	ExitArrow2->SetupAttachment(ExitFolder);
	ExitArrow3->SetupAttachment(ExitFolder);
}
