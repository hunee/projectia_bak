// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/PanelWidgetBase.h"

DEFINE_LOG_CATEGORY(LogPanelWidgetBase);

void UPanelWidgetBase::NativeConstruct()
{
	// Call the Blueprint "Event Construct" node
	Super::NativeConstruct();

  UE_LOG(LogPanelWidgetBase, Log, TEXT("->> UPanelWidgetBase::NativeConstruct()"));

 	// Listener
  // 1. UFUNCTION()
  ///StartGamePathButton->OnClicked.AddDynamic(this, &UPanelWidgetBase::OnStartGamePathButtonPressed);

  // 2. UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
  StartGamePathButton->OnClicked.AddDynamic(this, &UPanelWidgetBase::StartDialog);
}


void UPanelWidgetBase::OnStartGamePathButtonPressed()
{
  //GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("UPanelWidgetBase::OnStartGamePathButtonPressed."));  
  UE_LOG(LogPanelWidgetBase, Log, TEXT("->> UPanelWidgetBase::OnStartGamePathButtonPressed()"));

}

void UPanelWidgetBase::StartDialog_Implementation()
{
  UE_LOG(LogPanelWidgetBase, Log, TEXT("->> UPanelWidgetBase::StartDialog_Implementation()"));
}
void UPanelWidgetBase::FinishDialog_Implementation()
{
  UE_LOG(LogPanelWidgetBase, Log, TEXT("->> UPanelWidgetBase::FinishDialog_Implementation()"));
}