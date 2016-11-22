// Fill out your copyright notice in the Description page of Project Settings.

#include "PsyychGame2.h"
#include "experimentResults.h"


bool UexperimentResults::SaveStringToFile(
	FString SaveDirectory,
	FString FileName,
	FString SaveText,
	bool AllowOverWriting
) {
	SaveDirectory = FPaths::GameDir() + "\\ExperimentData";
	if (!FPlatformFileManager::Get().GetPlatformFile().DirectoryExists(*SaveDirectory))
	{
		FPlatformFileManager::Get().GetPlatformFile().CreateDirectory(*SaveDirectory);

		if (!FPlatformFileManager::Get().GetPlatformFile().DirectoryExists(*SaveDirectory))
		{
			return false;
		}
	}

	SaveDirectory += "\\";
	SaveDirectory += FileName;

	//if (!AllowOverWriting)
	//{
	//	if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*SaveDirectory))
	//	{
	//		return false;
	//	}
	//}
	SaveText += LINE_TERMINATOR;

	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();
	IFileHandle* handle = file.OpenWrite(*SaveDirectory, true);
	if (handle)
	{
		handle->Write((const uint8*)TCHAR_TO_ANSI(*SaveText), SaveText.Len());
		delete handle;
	}

	//return FFileHelper::SaveStringToFile(SaveText, *SaveDirectory);
	return true;
}

