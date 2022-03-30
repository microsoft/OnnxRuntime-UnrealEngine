// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/SphereComponent.h"
#include "TP_WeaponComponent.generated.h"

class AFPStyleTransferCharacter;
class USkeletalMeshComponent;
class USceneComponent;

UCLASS(Blueprintable, BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FPSTYLETRANSFER_API UTP_WeaponComponent : public USphereComponent
{
	GENERATED_BODY()
	/** Sphere collision to do Pick up */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
	USphereComponent* SphereCollision;

public:
	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category=Projectile)
	TSubclassOf<class AFPStyleTransferProjectile> ProjectileClass;

	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	USoundBase* FireSound;
	
	/** AnimMontage to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	UAnimMontage* FireAnimation;

	/** Gun muzzle's offset from the characters location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	FVector MuzzleOffset;

	// Sets default values for this component's properties
	UTP_WeaponComponent();

	// Make the weapon Fire a Projectile
	UFUNCTION(BlueprintCallable, Category="Weapon")
	void Fire();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	// Code for when something overlaps this component
	UFUNCTION()
	void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

private:
	/** The Character holding this weapon*/
	AFPStyleTransferCharacter* Character;
};
