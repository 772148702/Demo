// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class MYPROJECT_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveFront(float value);


	void MoveRight(float value);

	void BeginCrouch();

	void EndCrouch();

	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, Category = "Components")
		class USpringArmComponent* SpringArmComponent;

	UPROPERTY(VisibleAnywhere,BluePrintReadOnly,Category = "Components")
	class UCameraComponent* CameraComp;

	FVector GetPawnViewLocation() const override;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
