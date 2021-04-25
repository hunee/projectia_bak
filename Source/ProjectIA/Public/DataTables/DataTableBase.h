// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Engine/DataTable.h"

#include "DataTableBase.generated.h"


USTRUCT(BlueprintType)
struct FLevelUpTableRow : public FTableRowBase
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LevelUp")
	int32 ExpToNextLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LevelUp")
	int32 TotalExp;
};

UCLASS()
class PROJECTIA_API ADataTableBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADataTableBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
