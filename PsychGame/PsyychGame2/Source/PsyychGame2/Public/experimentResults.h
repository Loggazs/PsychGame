// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "experimentResults.generated.h"

/**
 * 
 */
UCLASS()
class PSYYCHGAME2_API UexperimentResults : public UBlueprintFunctionLibrary
{
	public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "fileMagic")
	static bool SaveStringToFile(FString SaveDirectory, FString FileName, FString SaveText, bool AllowOverWriting = false);
	
	
};
