// Copyright Epic Games, Inc. All Rights Reserved.

#include "FlippitEditorStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "Framework/Application/SlateApplication.h"
#include "Slate/SlateGameResources.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"

#define RootToContentDir Style->RootToContentDir

TSharedPtr<FSlateStyleSet> FFlippitEditorStyle::StyleInstance = nullptr;

void FFlippitEditorStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FFlippitEditorStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FFlippitEditorStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("FlippitEditorStyle"));
	return StyleSetName;
}

const FVector2D Icon16x16(16.0f, 16.0f);
const FVector2D Icon20x20(20.0f, 20.0f);

TSharedRef< FSlateStyleSet > FFlippitEditorStyle::Create()
{
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet("FlippitEditorStyle"));
	Style->SetContentRoot(IPluginManager::Get().FindPlugin("Flippit")->GetBaseDir() / TEXT("Resources"));

	Style->Set("FlippitEditor.OpenPluginWindow", new IMAGE_BRUSH(TEXT("Flippit"), Icon20x20));

	return Style;
}

void FFlippitEditorStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FFlippitEditorStyle::Get()
{
	return *StyleInstance;
}
