// Fill out your copyright notice in the Description page of Project Settings.

#include "Item.h"
#include "Components/PrimitiveComponent.h"
#include "Engine.h"


// Sets default values
AItem::AItem()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	//RootComponent = Scene;
	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	//BoxComp->SetupAttachment(RootComponent);

	BoxComp->OnComponentBeginOverlap.AddDynamic(this, &AItem::TriggerEnter);
	BoxComp->OnComponentEndOverlap.AddDynamic(this, &AItem::TriggerExit);

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AItem::Pickup()
{

}

void AItem::GetPlayer(AActor * Player)
{

}

void AItem::TriggerEnter(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult)
{
	bItemIsWithinRage = true;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Press E to pickup %s"), *ItemName));
	GetPlayer(OtherActor);
}

void AItem::TriggerExit(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
	bItemIsWithinRage = false;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("pickout %s"), *ItemName));

}





