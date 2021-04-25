// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterBase.h"
#include "MultiPartCharacterBase.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTIA_API AMultiPartCharacterBase : public ACharacterBase
{
	GENERATED_BODY()
	
protected:
	AMultiPartCharacterBase();

	virtual void BeginPlay() override;


public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "MultiPart")
	class USkeletalMeshComponent* BodyMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "MultiPart")
	class USkeletalMeshComponent* HandMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "MultiPart")
	class USkeletalMeshComponent* FeetMesh;
	
public: 
	//CharacterBase.h
	//virtual void OnEquipmentEquipped_Implementation(EEquipmentType EquipmentType, class AEquipmentBase* Equipment) override;
	//virtual void OnEquipmentUnequipped_Implementation(EEquipmentType EquipmentType, class AEquipmentBase* Equipment) override;
};
