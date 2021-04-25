// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/EquipmentComponent.h"

// Sets default values for this component's properties
UEquipmentComponent::UEquipmentComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UEquipmentComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UEquipmentComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
/**
void UEquipmentComponent::Equip(EEquipmentType Type, TSubclassOf<class AEquipmentBase> EquipmentClass, int32 IndexInInventory)
{
	SetEquipmentClass(Type, EquipmentClass);
	UWorld* World = GetWorld();
	if (World != nullptr)
	{
		AEquipmentBase* SpawnedEquipment = World->SpawnActor<AEquipmentBase>(EquipmentClass);
		SpawnedEquipment->SetIndexInInventory(IndexInInventory);

		SetEquipmentActor(Type, SpawnedEquipment);
		if (IEquipable * Equipable = Cast<IEquipable>(SpawnedEquipment))
		{
			OnEquipped.Broadcast(Type, SpawnedEquipment);
			IEquipable::Execute_Equip(SpawnedEquipment, GetOwner()->FindComponentByClass<USkeletalMeshComponent>());
		}
	}
}

void UEquipmentComponent::Unequip(EEquipmentType Type)
{
	AEquipmentBase* Equipment = FindEquipmentActor(Type);
	if (Equipment != nullptr)
	{
		if (IEquipable * Equipable = Cast<IEquipable>(Equipment))
		{
			OnUnequipped.Broadcast(Type, Equipment);
			IEquipable::Execute_Unequip(Equipment);
		}
		EquipmentMap[Type] = nullptr;
	}
}
**/