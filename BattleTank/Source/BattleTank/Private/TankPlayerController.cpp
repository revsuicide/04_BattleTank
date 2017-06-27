// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankPlayerController.h"	

void ATankPlayerController::BeginPlay() {
	Super::BeginPlay();
	auto ControlledTank = GetControlledTank();
	if (ControlledTank) {
		UE_LOG(LogTemp, Warning, TEXT("The player is in possesion of: %s"), *ControlledTank->GetName());
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("There is no player possessed tank"));
	}
}

// Tick called every frame
void ATankPlayerController::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	UE_LOG(LogTemp, Warning, TEXT("Tick..."));
	AimTowardsCrosshair();
}

ATank* ATankPlayerController::GetControlledTank() const {
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::AimTowardsCrosshair() {
	if (!GetControlledTank()) { return; }

	//Get world location through lintrace Crosshair
	// if it hits the landscape
		// Tell Controlled Tank to aim at this point
}


