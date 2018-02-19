// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "VRCharacterPrototype.generated.h"

UCLASS()
class VRPROJ_API AVRCharacterPrototype : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AVRCharacterPrototype();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Components")
		class UCameraComponent* CameraComp;

	// Origin specification
	UPROPERTY(VisibleAnywhere, Category = "Components")
		USceneComponent* VROriginComp;

	UPROPERTY(EditDefaultsOnly, Category = "VR")
		bool bPositionalHeadTracking;

	// Motion Controllers
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		class UMotionControllerComponent* LeftHandComponent;

	UPROPERTY(EditAnywhere, Category = "Components")
		class UBoxComponent* LeftHandBoxCol;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		class UMotionControllerComponent* RightHandComponent;

	UPROPERTY(EditAnywhere, Category = "Components")
		class UBoxComponent* RightHandBoxCol;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		bool FlashlightActive;

	bool LeftHandGrabbing;
	bool RightHandGrabbing;

	bool TeleportActive;
	FVector TeleportLoc;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void OnLeftGrabPressed();
	void OnLeftGrabReleased();

	void OnRightGrabPressed();
	void OnRightGrabReleased();

	void OnTeleportPressed();
	void OnTeleportReleased();

	void Flashlight();
	void UVLight();

	UFUNCTION()
	void OnLeftHandOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnLeftHandOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex);

	UFUNCTION()
	void OnRightHandOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnRightHandOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex);
};
