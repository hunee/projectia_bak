// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTIA_API UStatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStatComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
/**	//Delegates
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStatChangedEvent, const float, CurrentStat, const float, MaxStat);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStatZeroEvent);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStatStateChangedEvent, const EStatState, NewState, const float, Percent);

	UPROPERTY(BlueprintAssignable, BlueprintReadOnly)
	FStatChangedEvent OnStatChanged;

	UPROPERTY(BlueprintAssignable, BlueprintReadOnly)
	FStatZeroEvent OnStatZeroEvent;

	UPROPERTY(BlueprintAssignable, BlueprintReadOnly)
	FStatStateChangedEvent OnStatStateChanged;
**/
};
