// Fill out your copyright notice in the Description page of Project Settings.

#include "Actors/CharacterBase.h"

// Sets default values
ACharacterBase::ACharacterBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	InteractionSphere = CreateDefaultSubobject<USphereComponent>("InteractionSphere");
	InteractionSphere->SetupAttachment(RootComponent);
	InteractionSphere->SetCollisionProfileName("Interaction");

	InteractionSphere->OnComponentBeginOverlap.AddDynamic(this, &ACharacterBase::OnInteractionSphereBeginOverlap);
	InteractionSphere->OnComponentEndOverlap.AddDynamic(this, &ACharacterBase::OnInteractionSphereEndOverlap);

	//Setup StateMachine Component
	StateMachineComponent = CreateDefaultSubobject<UStateMachineComponent>("StateMachineComponent");

	//Setup HP StatComponent
	HealthStatComponent = CreateDefaultSubobject<UStatComponent>("HealthComponent");
	HealthStatComponent->ComponentTags.Add(FName("Health"));
	//Setup Stamina StatComponent
	StaminaStatComponent = CreateDefaultSubobject<UStatComponent>("StaminaComponent");
	StaminaStatComponent->ComponentTags.Add(FName("Stamina"));
	///StaminaStatComponent->SetRegenDelay(0.8f);
	///StaminaStatComponent->SetRegenPerSeconds(35.0f);

	//Setup InventoryComponent
	InventoryComponent = CreateDefaultSubobject<UInventoryComponent>("InventoryComponent");

	//Setup InventoryComponent
	EquipmentComponent = CreateDefaultSubobject<UEquipmentComponent>("EquipmentComponent");
}

// Called when the game starts or when spawned
void ACharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
	HealthStatComponent->OnStatChanged.AddDynamic(this, &ACharacterBase::OnHealthStatChanged);
	HealthStatComponent->OnStatStateChanged.AddDynamic(this, &ACharacterBase::OnHealthStatStateChanged);
	HealthStatComponent->OnStatZeroEvent.AddDynamic(this, &ACharacterBase::OnDead);

	StaminaStatComponent->OnStatChanged.AddDynamic(this, &ACharacterBase::OnStaminaStatChanged);
	StaminaStatComponent->OnStatStateChanged.AddDynamic(this, &ACharacterBase::OnStaminaStatStateChanged);
}

// Called every frame
void ACharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void ACharacterBase::OnStateEnter(EState State)
{
}

void ACharacterBase::OnStateEnd(EState State)
{
}
