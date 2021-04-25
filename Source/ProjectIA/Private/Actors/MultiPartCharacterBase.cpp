// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/MultiPartCharacterBase.h"

AMultiPartCharacterBase::AMultiPartCharacterBase()
{
	/**BodyMesh = CreateDefaultSubobject<USkeletalMeshComponent>("BodyMesh");
	BodyMesh->SetupAttachment(GetMesh());

	HandMesh = CreateDefaultSubobject<USkeletalMeshComponent>("HandMesh");
	HandMesh->SetupAttachment(GetMesh());

	FeetMesh = CreateDefaultSubobject<USkeletalMeshComponent>("FeetMesh");
	FeetMesh->SetupAttachment(GetMesh());

	BodyMesh->SetMasterPoseComponent(GetMesh());
	HandMesh->SetMasterPoseComponent(GetMesh());
	FeetMesh->SetMasterPoseComponent(GetMesh());**/
}

void AMultiPartCharacterBase::BeginPlay()
{
	Super::BeginPlay();

	///EquipmentComponent->OnEquipped.AddDynamic(this, &AMultiPartCharacterBase::OnEquipmentEquipped);
	///EquipmentComponent->OnUnequipped.AddDynamic(this, &AMultiPartCharacterBase::OnEquipmentUnequipped);
}
/**
void AMultiPartCharacterBase::OnEquipmentEquipped_Implementation(EEquipmentType EquipmentType, class AEquipmentBase* Equipment)
{
	switch (EquipmentType)
	{
	case EEquipmentType::EET_Invalid:
	{
	} break;
	case EEquipmentType::EET_Weapon:
	{
	} break;
	case EEquipmentType::EET_Shield:
	{
	} break;
	case EEquipmentType::EET_Head:
	{
	} break;
	case EEquipmentType::EET_Body:
	{
		BodyMesh->SetVisibility(false);
	} break;
  }
}

void AMultiPartCharacterBase::OnEquipmentUnequipped_Implementation(EEquipmentType EquipmentType, class AEquipmentBase* Equipment)
{
	switch (EquipmentType)
	{
	case EEquipmentType::EET_Body:
		BodyMesh->SetVisibility(true);
		break;
  }
}**/