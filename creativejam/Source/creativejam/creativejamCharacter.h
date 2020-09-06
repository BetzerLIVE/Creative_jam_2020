// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "creativejamCharacter.generated.h"

USTRUCT()
struct FDestructibleData
{
	GENERATED_BODY()

public:

	FDestructibleData()
	{
		ViewedDestructibleComponent = nullptr;
		LastInteractionCheckTime = 0.f;
	}

	//The current interactable component we're viewing, if there is one
	UPROPERTY()
		class UDestructibleComponent* ViewedDestructibleComponent;

	//The time when we last checked for an interactable
	UPROPERTY()
		float LastInteractionCheckTime;

};


//class UInputComponent;

UCLASS(/*config=Game*/)
class AcreativejamCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	class USkeletalMeshComponent* Mesh1P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstPersonCameraComponent;

public:
	AcreativejamCharacter();


	//Information about the current state of the players interaction
	UPROPERTY()
	FDestructibleData DestructibleData;

	FORCEINLINE class UDestructibleComponent* GetDestructible() const { return DestructibleData.ViewedDestructibleComponent; }

protected:
	virtual void BeginPlay();
	virtual void Tick(float DeltaTime) override;

public:
	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= Melee)
	class USoundBase* PunchSound;

	/** AnimMontage to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Melee)
	class UAnimMontage* PunchAnimation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Melee)
	float PunchAttackDamage;

	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Melee)
	class USoundBase* KickSound;

	/** AnimMontage to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Melee)
	class UAnimMontage* KickAnimation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Melee)
	float KickAttackDamage;

	UPROPERTY()
	float LastPunchAttackTime;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Melee)
	float PunchSpeed;

	UFUNCTION(BlueprintCallable)
	void SetPunchSpeed(float speed);

	UPROPERTY()
	float LastKickAttackTime;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Melee)
	float KickSpeed;

	UFUNCTION(BlueprintCallable)
	void SetKickSpeed(float speed);

	UPROPERTY(EditDefaultsOnly, Category = Melee)
	float MeleeAttackDistance;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health")
	float MaxHealth;

	float DestructibleCheckDistance;

	float DestructibleCheckFrequency;

	void SetDestructibleCheckDistance(float CheckDistance);

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health")
	float CurrentHealth;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Leveling")
	int Currentlevel;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Leveling")
	int CurrentExp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Leveling")
	int PastExp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Leveling")
	int MaxLevel;

	int  ExpRequiredPerLvl[10];

	void AddExp(int exp);

	bool IslevelingUp();

	UFUNCTION(BlueprintImplementableEvent)
	void OnLevelUp();

	UFUNCTION(BlueprintImplementableEvent)
	void OnDeath();

	void PerformDestructibleCheck();

	void CouldntFindDestructible();
	void FoundNewDestructible(UDestructibleComponent* Destructible);

	FTimerHandle TimerHandle;

protected:
	
	/** Fires a projectile. */
	void OnFire();

	void OnPunch();

	void OnKick();

	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles stafing movement, left and right */
	void MoveRight(float Val);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);
	
protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

public:
	/** Returns Mesh1P subobject **/
	FORCEINLINE class USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

};

