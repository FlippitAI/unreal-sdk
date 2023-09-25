// Copyright Epic Games, Inc. All Rights Reserved.

#include "FlippitEditorCommands.h"

#define LOCTEXT_NAMESPACE "FFlippitEditorModule"

void FFlippitEditorCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "FlippitEditor", "Bring up FlippitEditor window", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
