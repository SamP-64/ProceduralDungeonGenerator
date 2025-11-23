// Fill out your copyright notice in the Description page of Project Settings.


#include "Coin.h"

ACoin::ACoin()
{
    PrimaryActorTick.bCanEverTick = false;

    // Create the mesh
    CoinMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CoinMesh"));
    RootComponent = CoinMesh;

    // Optional: enable overlap collision so the player can pick it up
    CoinMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    CoinMesh->SetCollisionResponseToAllChannels(ECR_Overlap);
}