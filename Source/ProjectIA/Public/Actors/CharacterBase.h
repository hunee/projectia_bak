// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Enums/ItemEnums.h"
#include "CharacterBase.generated.h"

UCLASS()
class PROJECTIA_API ACharacterBase : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


//
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class USphereComponent* InteractionSphere;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UStateMachineComponent* StateMachineComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UStatComponent* HealthStatComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UStatComponent* StaminaStatComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UInventoryComponent* InventoryComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UEquipmentComponent* EquipmentComponent;

public:
	//Equipment Event
	/**UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnEquipmentEquipped(EEquipmentType EquipmentType, class AEquipmentBase* Equipment);
	virtual void OnEquipmentEquipped_Implementation(EEquipmentType EquipmentType, class AEquipmentBase* Equipment) {}
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnEquipmentUnequipped(EEquipmentType EquipmentType, class AEquipmentBase* Equipment);
	virtual void OnEquipmentUnequipped_Implementation(EEquipmentType EquipmentType, class AEquipmentBase* Equipment) {}
**/

/**
	//StateMachine Event Related
	UFUNCTION()
	virtual void OnStateEnd(enum EState State);
	UFUNCTION()
	virtual void OnStateEnter(enum EState State);
	//==========================================================================================//
**/

/**
	//Stat's Event Related
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Stat|Health")
	void OnHealthStatChanged(float Current, float Max);
	virtual void OnHealthStatChanged_Implementation(float Current, float Max) {}

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Stat|Health")
	void OnHealthStatStateChanged(EStatState NewState, float Percent);
	virtual void OnHealthStatStateChanged_Implementation(EStatState NewState, float Percent) {}

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Stat|Stamina")
	void OnStaminaStatStateChanged(EStatState NewState, float Percent);
	virtual void OnStaminaStatStateChanged_Implementation(EStatState NewState, float Percent) {}

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Stat|Stamina")
	void OnStaminaStatChanged(float Current, float Max);
	virtual void OnStaminaStatChanged_Implementation(float Current, float Max) {}
**/
	//==========================================================================================//

};
