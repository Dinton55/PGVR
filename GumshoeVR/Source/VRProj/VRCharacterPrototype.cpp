// Fill out your copyright notice in the Description page of Project Settings.

#include "VRCharacterPrototype.h"
#include "HeadMountedDisplay.h"
#include "MotionControllerComponent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "DrawDebugHelpers.h"
#include "Components/BoxComponent.h"
#include "InteractablePrototype.h"
#include "Components/SpotLightComponent.h"

// Sets default values
AVRCharacterPrototype::AVRCharacterPrototype()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	VROriginComp = CreateDefaultSubobject<USceneComponent>(TEXT("VRCameraOrigin"));
	VROriginComp->AttachToComponent(RootComponent,
		FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName("VRCameraOrigin"));

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComp->AttachToComponent(VROriginComp,
		FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName("Camera"));

	LeftHandComponent = CreateDefaultSubobject<UMotionControllerComponent>
		(TEXT("LeftHand"));
	LeftHandComponent->Hand = EControllerHand::Left;
	LeftHandComponent->AttachToComponent(VROriginComp,
		FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName("LeftHand"));;

	RightHandComponent = CreateDefaultSubobject<UMotionControllerComponent>
		(TEXT("RightHand"));
	RightHandComponent->Hand = EControllerHand::Right;
	RightHandComponent->AttachToComponent(VROriginComp,
		FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName("RightHand"));

	// Hand Colliders
	LeftHandBoxCol = CreateDefaultSubobject<UBoxComponent>(TEXT("LeftHandCollider"));
	LeftHandBoxCol->SetupAttachment(LeftHandComponent);
	LeftHandBoxCol->OnComponentBeginOverlap.AddDynamic(this, 
		&AVRCharacterPrototype::OnLeftHandOverlapBegin);
	LeftHandBoxCol->OnComponentEndOverlap.AddDynamic(this,
		&AVRCharacterPrototype::OnLeftHandOverlapEnd);

	RightHandBoxCol = CreateDefaultSubobject<UBoxComponent>(TEXT("RightHandCollider"));
	RightHandBoxCol->SetupAttachment(RightHandComponent);
	RightHandBoxCol->OnComponentBeginOverlap.AddDynamic(this, 
		&AVRCharacterPrototype::OnRightHandOverlapBegin);
	LeftHandBoxCol->OnComponentEndOverlap.AddDynamic(this,
		&AVRCharacterPrototype::OnRightHandOverlapEnd);

	bool LeftHandGrabbing = RightHandGrabbing = false;

	FlashlightActive = false;

	TeleportActive = false;
	TeleportLoc = FVector::ZeroVector;
}

// Called when the game starts or when spawned
void AVRCharacterPrototype::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AVRCharacterPrototype::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (TeleportActive)
	{
		FHitResult HitResult;
		FVector StartTrace = RightHandComponent->GetComponentLocation();
		FVector RayDirection = RightHandComponent->GetForwardVector();
		FVector EndTrace = ((RayDirection * 5000.0f) + StartTrace);
		FCollisionQueryParams* TraceParams = new FCollisionQueryParams();

		if(GetWorld()->LineTraceSingleByChannel(HitResult, StartTrace, EndTrace, ECC_Visibility))
		{
			DrawDebugSphere(GetWorld(), HitResult.ImpactPoint, 50.0f, 12, FColor::Cyan);
			TeleportLoc = HitResult.ImpactPoint;
		}
	}
}

// Called to bind functionality to input
void AVRCharacterPrototype::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAction("GrabLeft", IE_Pressed, this, 
		&AVRCharacterPrototype::OnLeftGrabPressed);

	InputComponent->BindAction("GrabLeft", IE_Released, this, 
		&AVRCharacterPrototype::OnLeftGrabReleased);

	InputComponent->BindAction("GrabRight", IE_Pressed, this, 
		&AVRCharacterPrototype::OnRightGrabPressed);

	InputComponent->BindAction("GrabRight", IE_Released,this, 
		&AVRCharacterPrototype::OnRightGrabReleased);

	InputComponent->BindAction("TeleportRight", IE_Pressed, this,
		&AVRCharacterPrototype::OnTeleportPressed);

	InputComponent->BindAction("TeleportRight", IE_Released, this,
		&AVRCharacterPrototype::OnTeleportReleased);

	InputComponent->BindAction("Flashlight", IE_Released, this,
		&AVRCharacterPrototype::Flashlight);

	InputComponent->BindAction("UVLight", IE_Released, this,
		&AVRCharacterPrototype::UVLight);
}

void AVRCharacterPrototype::OnLeftGrabPressed()
{
	LeftHandGrabbing = true;
}

void AVRCharacterPrototype::OnLeftGrabReleased()
{
	LeftHandGrabbing = false;
}

void AVRCharacterPrototype::OnRightGrabPressed()
{
	RightHandGrabbing = true;
}

void AVRCharacterPrototype::OnRightGrabReleased()
{
	RightHandGrabbing = false;
}

void AVRCharacterPrototype::OnTeleportPressed()
{
	TeleportActive = true;
}

void AVRCharacterPrototype::OnTeleportReleased()
{
	FVector ActorLoc = GetActorLocation();

	if (TeleportActive)
	{
		SetActorLocation(TeleportLoc);
		TeleportActive = false;
	}
}

void AVRCharacterPrototype::Flashlight()
{

}

void AVRCharacterPrototype::UVLight()
{
}

void AVRCharacterPrototype::OnLeftHandOverlapBegin(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	AInteractablePrototype* OtherObj = Cast<AInteractablePrototype>(OtherActor);

	if (LeftHandGrabbing && OtherObj)
	{
		OtherObj->SetActorLocation(LeftHandComponent->GetComponentLocation());
	}
}

void AVRCharacterPrototype::OnLeftHandOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex)
{
}

void AVRCharacterPrototype::OnRightHandOverlapBegin(UPrimitiveComponent * OverlappedComp, 
	AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	AInteractablePrototype* OtherObj = Cast<AInteractablePrototype>(OtherActor);

	if (RightHandGrabbing && OtherObj)
	{
		UE_LOG(LogTemp, Warning, TEXT("RIGHT HAND GRABBING OBJECT"));
		OtherObj->SetActorLocation(LeftHandComponent->GetComponentLocation());
	}
}

void AVRCharacterPrototype::OnRightHandOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex)
{
}
