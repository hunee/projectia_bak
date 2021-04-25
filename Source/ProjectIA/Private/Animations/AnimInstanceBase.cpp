// Fill out your copyright notice in the Description page of Project Settings.


#include "Animations/AnimInstanceBase.h"

UAnimInstanceBase::UAnimInstanceBase()
{
	IsAttack = false;


/**
		static ConstructorHelpers::FObjectFinder<UAnimMontage> MontageObj(TEXT("AnimMontage'/Game/Assets/Animations/BP_NormalMontage'"));
 		Montage = MontageObj.Object;
**/

  static ConstructorHelpers::FObjectFinder<UAnimMontage> ATTACK_MONTAGE(TEXT("AnimMontage'/Game/Blueprints/Animations/BP_RunAnimMontage'"));
	if (ATTACK_MONTAGE.Succeeded())
	{
		attackMontage = ATTACK_MONTAGE.Object;
	}
}

void UAnimInstanceBase::NativeBeginPlay()
{
	Super::NativeBeginPlay();
}

void UAnimInstanceBase::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
}

void UAnimInstanceBase::Attack()
{
	//TODO : Play Attack Montage
  Montage_Play(attackMontage);
}