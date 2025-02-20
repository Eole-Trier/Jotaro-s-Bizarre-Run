// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EntityData.h"
#include "Player/PlayerStarPlatinum.h"
#include "Bullet.generated.h"

UCLASS()
class TPS_SWITCH1_API ABullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABullet();
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	FEntityData EntityData;

	UFUNCTION(BlueprintCallable)
	void SetColor(APlayerStarPlatinum* starPlatinum);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
