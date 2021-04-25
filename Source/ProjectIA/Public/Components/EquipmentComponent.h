// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EquipmentComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTIA_API UEquipmentComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEquipmentComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
/**
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEquippedEvent, const EEquipmentType, EquipmentType, class AEquipmentBase*, Equipment);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUnequippedEvent, const EEquipmentType, EquipmentType, class AEquipmentBase*, Equipment);

	UPROPERTY(BlueprintAssignable, BlueprintReadOnly)
	FEquippedEvent OnEquipped;
	UPROPERTY(BlueprintAssignable, BlueprintReadOnly)
	FUnequippedEvent OnUnequipped;

	UFUNCTION(BlueprintCallable, Category = "Equipment")
	void Equip(EEquipmentType Type, TSubclassOf<class AEquipmentBase> EquipmentClass, int32 IndexInInventory);

	UFUNCTION(BlueprintCallable, Category = "Equipment")
	void Unequip(EEquipmentType Type);
**/		
};
