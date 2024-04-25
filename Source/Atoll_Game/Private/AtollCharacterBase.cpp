// DTD Studios


#include "AtollCharacterBase.h"

// Sets default values
AAtollCharacterBase::AAtollCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAtollCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAtollCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAtollCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

