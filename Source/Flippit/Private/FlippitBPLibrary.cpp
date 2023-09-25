// Copyright Epic Games, Inc. All Rights Reserved.

#include "FlippitBPLibrary.h"
#include "Flippit.h"

UFlippitBPLibrary::UFlippitBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

FString UFlippitBPLibrary::OnAvatarRigLoaded(FString glb)
{
    // Trigger the Blueprint event with the .glb URL
    return glb;
}

