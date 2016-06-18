#pragma once

// Unreal
#include "Components/StaticMeshComponent.h"

// Gen
#include "BulletActorComponent.generated.h"

UCLASS()
class MAXIMUMKILOCITY_API UBulletActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:

	// Sets default values for this component's properties
	UBulletActorComponent();

	// Called when the game starts
	virtual void BeginPlay() override;

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Mesh for the bullet
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Bullet, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* BulletMesh;

	// Bullet speed
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Bullet, meta = (AllowPrivateAccess = "true"))
	float Speed;
};