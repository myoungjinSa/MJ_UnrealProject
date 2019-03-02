// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"			//For deriving from UObject
#include "MyObject.generated.h"				//Generated Code

/**
 * 
 */
UCLASS(Blueprintable,BlueprintType)
class FIRSTPRACTICE_API UMyObject : public UObject
{
	GENERATED_BODY()
public:
	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
	float Armor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
	float HpMax;
	*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = stats)
	FString Name;
};
