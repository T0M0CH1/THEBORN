// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "THEBORNCharacter.h"
#include "Components/BoxComponent.h"
#include "Item.generated.h"

UCLASS()
class THEBORN_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY()
		USceneComponent* Scene;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxComp;
	

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* SM_Tbox;

	UPROPERTY(EditAnywhere)
		FString ItemName = FString(TEXT(""));


	void Pickup();
	void GetPlayer(AActor* Player);
	bool bItemIsWithinRage = false;

	UFUNCTION()
		void TriggerEnter(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult);

	UFUNCTION()
		void TriggerExit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

};
