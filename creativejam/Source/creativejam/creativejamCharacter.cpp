// Copyright Epic Games, Inc. All Rights Reserved.

#include "creativejamCharacter.h"
#include "creativejamProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "DestructibleComponent.h"
#include "MotionControllerComponent.h"
#include "XRMotionControllerBase.h" // for FXRMotionControllerBase::RightHandSourceId

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AcreativejamCharacter

AcreativejamCharacter::AcreativejamCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = true;
	Mesh1P->CastShadow = true;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	MaxHealth = 100.f;

	CurrentHealth = MaxHealth;

	DestructibleCheckDistance = 1000.f;

	DestructibleCheckFrequency = 0.f;

	Currentlevel = 1;
	CurrentExp = 0;
	PastExp = CurrentExp;
	MaxLevel = 10;

	PunchAttackDamage = 100;

	KickAttackDamage = PunchAttackDamage * 2;

	PunchSpeed = 2.f;

	KickSpeed = PunchSpeed * 2;
}

void AcreativejamCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
}

void AcreativejamCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetWorld()->TimeSince(DestructibleData.LastInteractionCheckTime) > DestructibleCheckFrequency)
	{
		PerformDestructibleCheck();
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void AcreativejamCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AcreativejamCharacter::OnPunch);
	// Bind secondary fire event
	PlayerInputComponent->BindAction("SecondaryFire", IE_Pressed, this, &AcreativejamCharacter::OnKick);
	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AcreativejamCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AcreativejamCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AcreativejamCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AcreativejamCharacter::LookUpAtRate);
}

void AcreativejamCharacter::SetPunchSpeed(float speed)
{
	PunchSpeed = speed;
}

void AcreativejamCharacter::SetKickSpeed(float speed)
{
	KickSpeed = speed;
}

void AcreativejamCharacter::SetDestructibleCheckDistance(float CheckDistance)
{
	CheckDistance = CheckDistance;
}


void AcreativejamCharacter::PerformDestructibleCheck()
{
	if (GetController() == nullptr)
	{
		return;
	}

	DestructibleData.LastInteractionCheckTime = GetWorld()->GetTimeSeconds();

	FVector EyesLoc;
	FRotator EyesRot;

	GetController()->GetPlayerViewPoint(EyesLoc, EyesRot);

	FVector TraceStart = EyesLoc;
	FVector TraceEnd = (EyesRot.Vector() * DestructibleCheckDistance) + TraceStart;
	FHitResult TraceHit;

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);

	if (GetWorld()->LineTraceSingleByChannel(TraceHit, TraceStart, TraceEnd, ECC_Visibility, QueryParams))
	{
		//Check if we hit an interactable object
		if (TraceHit.GetActor())
		{
			if (UDestructibleComponent* DestructibleComponent = Cast<UDestructibleComponent>(TraceHit.GetActor()->GetComponentByClass(UDestructibleComponent::StaticClass())))
			{
				float Distance = (TraceStart - TraceHit.ImpactPoint).Size();
				if (DestructibleComponent != GetDestructible() && Distance <= DestructibleCheckDistance)
				{
					FoundNewDestructible(DestructibleComponent);
				}
				else if (Distance > DestructibleCheckDistance && GetDestructible())
				{
					CouldntFindDestructible();
				}
				return;
			}
		}
	}
	CouldntFindDestructible();
}

void AcreativejamCharacter::CouldntFindDestructible()
{
	//We've lost focus on an interactable. Clear the timer.
	if (GetWorldTimerManager().IsTimerActive(TimerHandle))
	{
		GetWorldTimerManager().ClearTimer(TimerHandle);
	}

	//Tell the interactable we've stopped focusing on it, and clear the current interactable
	if (UDestructibleComponent* Destructible = GetDestructible())
	{
		Destructible->EndFocus(this);
	}

	DestructibleData.ViewedDestructibleComponent = nullptr;
}

void AcreativejamCharacter::FoundNewDestructible(UDestructibleComponent* Destructible)
{

	if (UDestructibleComponent* OldDestructible = GetDestructible())
	{
		OldDestructible->EndFocus(this);
	}

	DestructibleData.ViewedDestructibleComponent = Destructible;
	Destructible->BeginFocus(this);
}

void AcreativejamCharacter::OnFire()
{

}

void AcreativejamCharacter::OnPunch()
{
	GetWorldTimerManager().ClearTimer(TimerHandle);

	if (GetWorld()->TimeSince(LastPunchAttackTime > PunchSpeed))
	{
		if (UDestructibleComponent* destructible = GetDestructible())
		{
			destructible->Punch(this);
		}
	}

	LastPunchAttackTime = GetWorld()->GetTimeSeconds();
	Punch = false;
}

void AcreativejamCharacter::OnKick()
{
	GetWorldTimerManager().ClearTimer(TimerHandle);

	if (GetWorld()->TimeSince(LastKickAttackTime > KickSpeed))
	{
		if (UDestructibleComponent* destructible = GetDestructible())
		{
			destructible->Kick(this);
		}
	}

	LastKickAttackTime = GetWorld()->GetTimeSeconds();
	Kick = false;
}

void AcreativejamCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AcreativejamCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AcreativejamCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AcreativejamCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}