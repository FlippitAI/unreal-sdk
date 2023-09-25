// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "FlippitEditorStyle.h"

class FFlippitEditorCommands : public TCommands<FFlippitEditorCommands>
{
public:

	FFlippitEditorCommands()
		: TCommands<FFlippitEditorCommands>(TEXT("FlippitEditor"), NSLOCTEXT("Contexts", "FlippitEditor", "FlippitEditor Plugin"), NAME_None, FFlippitEditorStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
};