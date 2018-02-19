// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractablePrototype.generated.h"

UCLASS()
class VRPROJ_API AInteractablePrototype : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractablePrototype();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
		class UStaticMeshComponent* m_StaticMeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
		class ULightComponent* m_LightComponent;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
		class UBoxComponent* m_BoxColliderComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
		bool m_IsActive;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Motion Controllers")
	//	class UMotionControllerComponent* m_LeftHand;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Motion Controllers")
	//	class UMotionControllerComponent* m_RightHand;

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
