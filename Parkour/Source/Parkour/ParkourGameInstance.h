// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ParkourGameInstance.generated.h"

class UServerMenu;
/**
 * 
 */
UCLASS()
class PARKOUR_API UParkourGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	UParkourGameInstance();

	UFUNCTION(BlueprintCallable, Category = "UI")
	void LoadMainMenu();

	virtual void Init() override;
	
	void HostServer();

private:
	void SessionCreated(FName name, bool success);

	UPROPERTY()
	UClass *ServerMenuClass;

	UPROPERTY()
	UServerMenu *Menu;
};
