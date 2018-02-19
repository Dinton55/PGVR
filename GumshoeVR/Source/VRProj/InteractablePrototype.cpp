// Fill out your copyright notice in the Description page of Project Settings.

#include "InteractablePrototype.h"
#include "Components/StaticMeshComponent.h"
#include "Components/LightComponent.h"
#include "Components/BoxComponent.h"
#include "MotionControllerComponent.h"

// Sets default values
AInteractablePrototype::AInteractablePrototype()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	m_StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	m_StaticMeshComp->SetSimulatePhysics(true);
	RootComponent = m_StaticMeshComp;


	m_LightComponent = CreateDefaultSubobject<ULightComponent>(TEXT("LightComp"));
	m_LightComponent->SetupAttachment(RootComponent);
	//m_LightComponent->IsActive = false;

	m_BoxColliderComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collider"));
	m_BoxColliderComp->OnComponentBeginOverlap.AddDynamic(this, 
		&AInteractablePrototype::OnOverlapBegin);
	m_BoxColliderComp->SetupAttachment(RootComponent);

	m_BoxColliderComp->SetWorldLocation(this->GetActorLocation());

	m_IsActive = false;
}

// Called when the game starts or when spawned
void AInteractablePrototype::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractablePrototype::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//TArray<UMotionControllerComponent*> comps;

	//this->GetComponents(comps);

	//for (UMotionControllerComponent* motionController : comps)
	//{
	//	if (motionController->Hand == EControllerHand::Left) 
	//	{
	//		if(motionController->)
	//	}
	//	else if (motionController->Hand == EControllerHand::Right) 
	//	{

	//	}
	//}

}

void AInteractablePrototype::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

}

