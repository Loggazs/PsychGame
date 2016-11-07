// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "workWithCSV.generated.h"

/**
 * 
 */
UCLASS()
class PSYYCHGAME2_API UworkWithCSV : public UBlueprintFunctionLibrary
{
	public: 
	GENERATED_BODY()
		
		UFUNCTION(BlueprintCallable, Category = "fileMagic")
		static bool SaveStringToFile(FString SaveDirectory, FString FileName, FString SaveText, bool AllowOverWriting = false);
};
