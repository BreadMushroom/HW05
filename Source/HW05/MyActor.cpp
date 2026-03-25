


#include "MyActor.h"


AMyActor::AMyActor()
{
 	
	PrimaryActorTick.bCanEverTick = true;

}


void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	FVector NewLocation = FVector(0.0f, 50.0f, 0.0f);
	SetActorLocation(NewLocation);
	
}


void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector MyLocation = GetActorLocation();
	FString PositionMessage = FString::Printf(TEXT("현재 위치: %s"), *MyLocation.ToString());

	if (GEngine)
	{
		 
		GEngine->AddOnScreenDebugMessage(1, 0.1f, FColor::Cyan, PositionMessage);
	}
}

