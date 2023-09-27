// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flippit/Public/FlippitCharacter.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlippitCharacter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	FLIPPIT_API UClass* Z_Construct_UClass_AFlippitCharacter();
	FLIPPIT_API UClass* Z_Construct_UClass_AFlippitCharacter_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_Flippit();
// End Cross Module References
	DEFINE_FUNCTION(AFlippitCharacter::execAssignAnimationToString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Word1);
		P_GET_OBJECT(UAnimationAsset,Z_Param_AnimationAsset1);
		P_GET_PROPERTY(FStrProperty,Z_Param_Word2);
		P_GET_OBJECT(UAnimationAsset,Z_Param_AnimationAsset2);
		P_GET_PROPERTY(FStrProperty,Z_Param_Word3);
		P_GET_OBJECT(UAnimationAsset,Z_Param_AnimationAsset3);
		P_GET_PROPERTY(FStrProperty,Z_Param_Word4);
		P_GET_OBJECT(UAnimationAsset,Z_Param_AnimationAsset4);
		P_GET_PROPERTY(FStrProperty,Z_Param_Word5);
		P_GET_OBJECT(UAnimationAsset,Z_Param_AnimationAsset5);
		P_GET_PROPERTY(FStrProperty,Z_Param_Word6);
		P_GET_OBJECT(UAnimationAsset,Z_Param_AnimationAsset6);
		P_GET_PROPERTY(FStrProperty,Z_Param_Word7);
		P_GET_OBJECT(UAnimationAsset,Z_Param_AnimationAsset7);
		P_GET_PROPERTY(FStrProperty,Z_Param_Word8);
		P_GET_OBJECT(UAnimationAsset,Z_Param_AnimationAsset8);
		P_GET_PROPERTY(FStrProperty,Z_Param_Word9);
		P_GET_OBJECT(UAnimationAsset,Z_Param_AnimationAsset9);
		P_GET_PROPERTY(FStrProperty,Z_Param_Word10);
		P_GET_OBJECT(UAnimationAsset,Z_Param_AnimationAsset10);
		P_GET_PROPERTY(FStrProperty,Z_Param_Word11);
		P_GET_OBJECT(UAnimationAsset,Z_Param_AnimationAsset11);
		P_GET_PROPERTY(FStrProperty,Z_Param_Word12);
		P_GET_OBJECT(UAnimationAsset,Z_Param_AnimationAsset12);
		P_GET_PROPERTY(FStrProperty,Z_Param_Word13);
		P_GET_OBJECT(UAnimationAsset,Z_Param_AnimationAsset13);
		P_GET_PROPERTY(FStrProperty,Z_Param_ReceivedKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimationAsset**)Z_Param__Result=P_THIS->AssignAnimationToString(Z_Param_Word1,Z_Param_AnimationAsset1,Z_Param_Word2,Z_Param_AnimationAsset2,Z_Param_Word3,Z_Param_AnimationAsset3,Z_Param_Word4,Z_Param_AnimationAsset4,Z_Param_Word5,Z_Param_AnimationAsset5,Z_Param_Word6,Z_Param_AnimationAsset6,Z_Param_Word7,Z_Param_AnimationAsset7,Z_Param_Word8,Z_Param_AnimationAsset8,Z_Param_Word9,Z_Param_AnimationAsset9,Z_Param_Word10,Z_Param_AnimationAsset10,Z_Param_Word11,Z_Param_AnimationAsset11,Z_Param_Word12,Z_Param_AnimationAsset12,Z_Param_Word13,Z_Param_AnimationAsset13,Z_Param_ReceivedKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlippitCharacter::execOnEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlippitCharacter::execOnBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlippitCharacter::execSimulateForLoop)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_FirstIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_LastIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DelayBetweenLoops);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SimulateForLoop(Z_Param_FirstIndex,Z_Param_LastIndex,Z_Param_DelayBetweenLoops);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlippitCharacter::execOnEKeyReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEKeyReleased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlippitCharacter::execOnEKeyPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEKeyPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlippitCharacter::execDeleteFile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeleteFile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlippitCharacter::execPlaySoundsSequentially)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaySoundsSequentially();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlippitCharacter::execDecodeAudioString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EncodedAudioString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecodeAudioString(Z_Param_EncodedAudioString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlippitCharacter::execGetLocationOfActorByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ActorNameToFind);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLocationOfActorByName(Z_Param_ActorNameToFind);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlippitCharacter::execLogNamesOfAllObjectsInLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LogNamesOfAllObjectsInLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlippitCharacter::execanimationSetformresponse)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_animation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->animationSetformresponse(Z_Param_animation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlippitCharacter::execNotEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NotEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlippitCharacter::execConnectToWebSocket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConnectToWebSocket();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlippitCharacter::execSendChatMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_chatMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendChatMessage(Z_Param_chatMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlippitCharacter::execHandleWebSocketMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->HandleWebSocketMessage(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlippitCharacter::execOnPlayerExitInteractionZone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerExitInteractionZone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlippitCharacter::execOnPlayerEnterInteractionZone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerEnterInteractionZone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlippitCharacter::execCloseWebSocketConnection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseWebSocketConnection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlippitCharacter::execSendWebSocketMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendWebSocketMessage(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlippitCharacter::execEstablishWebSocketConnection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EstablishWebSocketConnection();
		P_NATIVE_END;
	}
	static FName NAME_AFlippitCharacter_heytriggerme = FName(TEXT("heytriggerme"));
	void AFlippitCharacter::heytriggerme()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFlippitCharacter_heytriggerme),NULL);
	}
	void AFlippitCharacter::StaticRegisterNativesAFlippitCharacter()
	{
		UClass* Class = AFlippitCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "animationSetformresponse", &AFlippitCharacter::execanimationSetformresponse },
			{ "AssignAnimationToString", &AFlippitCharacter::execAssignAnimationToString },
			{ "CloseWebSocketConnection", &AFlippitCharacter::execCloseWebSocketConnection },
			{ "ConnectToWebSocket", &AFlippitCharacter::execConnectToWebSocket },
			{ "DecodeAudioString", &AFlippitCharacter::execDecodeAudioString },
			{ "DeleteFile", &AFlippitCharacter::execDeleteFile },
			{ "EstablishWebSocketConnection", &AFlippitCharacter::execEstablishWebSocketConnection },
			{ "GetLocationOfActorByName", &AFlippitCharacter::execGetLocationOfActorByName },
			{ "HandleWebSocketMessage", &AFlippitCharacter::execHandleWebSocketMessage },
			{ "LogNamesOfAllObjectsInLevel", &AFlippitCharacter::execLogNamesOfAllObjectsInLevel },
			{ "NotEmpty", &AFlippitCharacter::execNotEmpty },
			{ "OnBeginOverlap", &AFlippitCharacter::execOnBeginOverlap },
			{ "OnEKeyPressed", &AFlippitCharacter::execOnEKeyPressed },
			{ "OnEKeyReleased", &AFlippitCharacter::execOnEKeyReleased },
			{ "OnEndOverlap", &AFlippitCharacter::execOnEndOverlap },
			{ "OnPlayerEnterInteractionZone", &AFlippitCharacter::execOnPlayerEnterInteractionZone },
			{ "OnPlayerExitInteractionZone", &AFlippitCharacter::execOnPlayerExitInteractionZone },
			{ "PlaySoundsSequentially", &AFlippitCharacter::execPlaySoundsSequentially },
			{ "SendChatMessage", &AFlippitCharacter::execSendChatMessage },
			{ "SendWebSocketMessage", &AFlippitCharacter::execSendWebSocketMessage },
			{ "SimulateForLoop", &AFlippitCharacter::execSimulateForLoop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFlippitCharacter_animationSetformresponse_Statics
	{
		struct FlippitCharacter_eventanimationSetformresponse_Parms
		{
			FString animation;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_animation;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFlippitCharacter_animationSetformresponse_Statics::NewProp_animation = { "animation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventanimationSetformresponse_Parms, animation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFlippitCharacter_animationSetformresponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventanimationSetformresponse_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlippitCharacter_animationSetformresponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_animationSetformresponse_Statics::NewProp_animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_animationSetformresponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_animationSetformresponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlippitCharacter_animationSetformresponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlippitCharacter, nullptr, "animationSetformresponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFlippitCharacter_animationSetformresponse_Statics::FlippitCharacter_eventanimationSetformresponse_Parms), Z_Construct_UFunction_AFlippitCharacter_animationSetformresponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_animationSetformresponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_animationSetformresponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_animationSetformresponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlippitCharacter_animationSetformresponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlippitCharacter_animationSetformresponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics
	{
		struct FlippitCharacter_eventAssignAnimationToString_Parms
		{
			FString Word1;
			UAnimationAsset* AnimationAsset1;
			FString Word2;
			UAnimationAsset* AnimationAsset2;
			FString Word3;
			UAnimationAsset* AnimationAsset3;
			FString Word4;
			UAnimationAsset* AnimationAsset4;
			FString Word5;
			UAnimationAsset* AnimationAsset5;
			FString Word6;
			UAnimationAsset* AnimationAsset6;
			FString Word7;
			UAnimationAsset* AnimationAsset7;
			FString Word8;
			UAnimationAsset* AnimationAsset8;
			FString Word9;
			UAnimationAsset* AnimationAsset9;
			FString Word10;
			UAnimationAsset* AnimationAsset10;
			FString Word11;
			UAnimationAsset* AnimationAsset11;
			FString Word12;
			UAnimationAsset* AnimationAsset12;
			FString Word13;
			UAnimationAsset* AnimationAsset13;
			FString ReceivedKey;
			UAnimationAsset* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Word1;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationAsset1;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Word2;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationAsset2;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Word3;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationAsset3;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Word4;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationAsset4;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Word5;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationAsset5;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Word6;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationAsset6;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Word7;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationAsset7;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Word8;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationAsset8;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Word9;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationAsset9;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Word10;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationAsset10;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Word11;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationAsset11;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Word12;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationAsset12;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Word13;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationAsset13;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReceivedKey;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_Word1 = { "Word1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventAssignAnimationToString_Parms, Word1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_AnimationAsset1 = { "AnimationAsset1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventAssignAnimationToString_Parms, AnimationAsset1), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_Word2 = { "Word2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventAssignAnimationToString_Parms, Word2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_AnimationAsset2 = { "AnimationAsset2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventAssignAnimationToString_Parms, AnimationAsset2), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_Word3 = { "Word3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventAssignAnimationToString_Parms, Word3), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_AnimationAsset3 = { "AnimationAsset3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventAssignAnimationToString_Parms, AnimationAsset3), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_Word4 = { "Word4", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventAssignAnimationToString_Parms, Word4), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_AnimationAsset4 = { "AnimationAsset4", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventAssignAnimationToString_Parms, AnimationAsset4), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_Word5 = { "Word5", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventAssignAnimationToString_Parms, Word5), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_AnimationAsset5 = { "AnimationAsset5", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventAssignAnimationToString_Parms, AnimationAsset5), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_Word6 = { "Word6", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventAssignAnimationToString_Parms, Word6), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_AnimationAsset6 = { "AnimationAsset6", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventAssignAnimationToString_Parms, AnimationAsset6), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_Word7 = { "Word7", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventAssignAnimationToString_Parms, Word7), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_AnimationAsset7 = { "AnimationAsset7", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventAssignAnimationToString_Parms, AnimationAsset7), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_Word8 = { "Word8", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventAssignAnimationToString_Parms, Word8), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_AnimationAsset8 = { "AnimationAsset8", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventAssignAnimationToString_Parms, AnimationAsset8), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_Word9 = { "Word9", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventAssignAnimationToString_Parms, Word9), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_AnimationAsset9 = { "AnimationAsset9", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventAssignAnimationToString_Parms, AnimationAsset9), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_Word10 = { "Word10", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventAssignAnimationToString_Parms, Word10), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_AnimationAsset10 = { "AnimationAsset10", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventAssignAnimationToString_Parms, AnimationAsset10), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_Word11 = { "Word11", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventAssignAnimationToString_Parms, Word11), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_AnimationAsset11 = { "AnimationAsset11", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventAssignAnimationToString_Parms, AnimationAsset11), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_Word12 = { "Word12", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventAssignAnimationToString_Parms, Word12), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_AnimationAsset12 = { "AnimationAsset12", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventAssignAnimationToString_Parms, AnimationAsset12), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_Word13 = { "Word13", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventAssignAnimationToString_Parms, Word13), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_AnimationAsset13 = { "AnimationAsset13", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventAssignAnimationToString_Parms, AnimationAsset13), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_ReceivedKey = { "ReceivedKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventAssignAnimationToString_Parms, ReceivedKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventAssignAnimationToString_Parms, ReturnValue), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_Word1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_AnimationAsset1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_Word2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_AnimationAsset2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_Word3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_AnimationAsset3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_Word4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_AnimationAsset4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_Word5,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_AnimationAsset5,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_Word6,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_AnimationAsset6,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_Word7,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_AnimationAsset7,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_Word8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_AnimationAsset8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_Word9,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_AnimationAsset9,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_Word10,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_AnimationAsset10,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_Word11,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_AnimationAsset11,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_Word12,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_AnimationAsset12,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_Word13,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_AnimationAsset13,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_ReceivedKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlippitCharacter, nullptr, "AssignAnimationToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::FlippitCharacter_eventAssignAnimationToString_Parms), Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlippitCharacter_CloseWebSocketConnection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_CloseWebSocketConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "// Function to close WebSocket connection\n" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
		{ "ToolTip", "Function to close WebSocket connection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlippitCharacter_CloseWebSocketConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlippitCharacter, nullptr, "CloseWebSocketConnection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_CloseWebSocketConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_CloseWebSocketConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlippitCharacter_CloseWebSocketConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlippitCharacter_CloseWebSocketConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlippitCharacter_ConnectToWebSocket_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_ConnectToWebSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlippitCharacter_ConnectToWebSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlippitCharacter, nullptr, "ConnectToWebSocket", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_ConnectToWebSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_ConnectToWebSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlippitCharacter_ConnectToWebSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlippitCharacter_ConnectToWebSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlippitCharacter_DecodeAudioString_Statics
	{
		struct FlippitCharacter_eventDecodeAudioString_Parms
		{
			FString EncodedAudioString;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EncodedAudioString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EncodedAudioString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_DecodeAudioString_Statics::NewProp_EncodedAudioString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFlippitCharacter_DecodeAudioString_Statics::NewProp_EncodedAudioString = { "EncodedAudioString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventDecodeAudioString_Parms, EncodedAudioString), METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_DecodeAudioString_Statics::NewProp_EncodedAudioString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_DecodeAudioString_Statics::NewProp_EncodedAudioString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlippitCharacter_DecodeAudioString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_DecodeAudioString_Statics::NewProp_EncodedAudioString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_DecodeAudioString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlippitCharacter_DecodeAudioString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlippitCharacter, nullptr, "DecodeAudioString", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFlippitCharacter_DecodeAudioString_Statics::FlippitCharacter_eventDecodeAudioString_Parms), Z_Construct_UFunction_AFlippitCharacter_DecodeAudioString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_DecodeAudioString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_DecodeAudioString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_DecodeAudioString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlippitCharacter_DecodeAudioString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlippitCharacter_DecodeAudioString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlippitCharacter_DeleteFile_Statics
	{
		struct FlippitCharacter_eventDeleteFile_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFlippitCharacter_DeleteFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlippitCharacter_eventDeleteFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFlippitCharacter_DeleteFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FlippitCharacter_eventDeleteFile_Parms), &Z_Construct_UFunction_AFlippitCharacter_DeleteFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlippitCharacter_DeleteFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_DeleteFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_DeleteFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlippitCharacter_DeleteFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlippitCharacter, nullptr, "DeleteFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFlippitCharacter_DeleteFile_Statics::FlippitCharacter_eventDeleteFile_Parms), Z_Construct_UFunction_AFlippitCharacter_DeleteFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_DeleteFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_DeleteFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_DeleteFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlippitCharacter_DeleteFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlippitCharacter_DeleteFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlippitCharacter_EstablishWebSocketConnection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_EstablishWebSocketConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlippitCharacter_EstablishWebSocketConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlippitCharacter, nullptr, "EstablishWebSocketConnection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_EstablishWebSocketConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_EstablishWebSocketConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlippitCharacter_EstablishWebSocketConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlippitCharacter_EstablishWebSocketConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlippitCharacter_GetLocationOfActorByName_Statics
	{
		struct FlippitCharacter_eventGetLocationOfActorByName_Parms
		{
			FString ActorNameToFind;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorNameToFind_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActorNameToFind;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_GetLocationOfActorByName_Statics::NewProp_ActorNameToFind_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFlippitCharacter_GetLocationOfActorByName_Statics::NewProp_ActorNameToFind = { "ActorNameToFind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventGetLocationOfActorByName_Parms, ActorNameToFind), METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_GetLocationOfActorByName_Statics::NewProp_ActorNameToFind_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_GetLocationOfActorByName_Statics::NewProp_ActorNameToFind_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlippitCharacter_GetLocationOfActorByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventGetLocationOfActorByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlippitCharacter_GetLocationOfActorByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_GetLocationOfActorByName_Statics::NewProp_ActorNameToFind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_GetLocationOfActorByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_GetLocationOfActorByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlippitCharacter_GetLocationOfActorByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlippitCharacter, nullptr, "GetLocationOfActorByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFlippitCharacter_GetLocationOfActorByName_Statics::FlippitCharacter_eventGetLocationOfActorByName_Parms), Z_Construct_UFunction_AFlippitCharacter_GetLocationOfActorByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_GetLocationOfActorByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_GetLocationOfActorByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_GetLocationOfActorByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlippitCharacter_GetLocationOfActorByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlippitCharacter_GetLocationOfActorByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlippitCharacter_HandleWebSocketMessage_Statics
	{
		struct FlippitCharacter_eventHandleWebSocketMessage_Parms
		{
			FString Message;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_HandleWebSocketMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFlippitCharacter_HandleWebSocketMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventHandleWebSocketMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_HandleWebSocketMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_HandleWebSocketMessage_Statics::NewProp_Message_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFlippitCharacter_HandleWebSocketMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventHandleWebSocketMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlippitCharacter_HandleWebSocketMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_HandleWebSocketMessage_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_HandleWebSocketMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_HandleWebSocketMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "// Function to handle player exiting the interaction zone\n" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
		{ "ToolTip", "Function to handle player exiting the interaction zone" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlippitCharacter_HandleWebSocketMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlippitCharacter, nullptr, "HandleWebSocketMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFlippitCharacter_HandleWebSocketMessage_Statics::FlippitCharacter_eventHandleWebSocketMessage_Parms), Z_Construct_UFunction_AFlippitCharacter_HandleWebSocketMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_HandleWebSocketMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_HandleWebSocketMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_HandleWebSocketMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlippitCharacter_HandleWebSocketMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlippitCharacter_HandleWebSocketMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlippitCharacter_heytriggerme_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_heytriggerme_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom Events" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlippitCharacter_heytriggerme_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlippitCharacter, nullptr, "heytriggerme", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_heytriggerme_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_heytriggerme_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlippitCharacter_heytriggerme()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlippitCharacter_heytriggerme_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlippitCharacter_LogNamesOfAllObjectsInLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_LogNamesOfAllObjectsInLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlippitCharacter_LogNamesOfAllObjectsInLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlippitCharacter, nullptr, "LogNamesOfAllObjectsInLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_LogNamesOfAllObjectsInLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_LogNamesOfAllObjectsInLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlippitCharacter_LogNamesOfAllObjectsInLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlippitCharacter_LogNamesOfAllObjectsInLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlippitCharacter_NotEmpty_Statics
	{
		struct FlippitCharacter_eventNotEmpty_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFlippitCharacter_NotEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlippitCharacter_eventNotEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFlippitCharacter_NotEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FlippitCharacter_eventNotEmpty_Parms), &Z_Construct_UFunction_AFlippitCharacter_NotEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlippitCharacter_NotEmpty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_NotEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_NotEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlippitCharacter_NotEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlippitCharacter, nullptr, "NotEmpty", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFlippitCharacter_NotEmpty_Statics::FlippitCharacter_eventNotEmpty_Parms), Z_Construct_UFunction_AFlippitCharacter_NotEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_NotEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_NotEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_NotEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlippitCharacter_NotEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlippitCharacter_NotEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics
	{
		struct FlippitCharacter_eventOnBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventOnBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventOnBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((FlippitCharacter_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FlippitCharacter_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlippitCharacter, nullptr, "OnBeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::FlippitCharacter_eventOnBeginOverlap_Parms), Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlippitCharacter_OnEKeyPressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_OnEKeyPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlippitCharacter_OnEKeyPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlippitCharacter, nullptr, "OnEKeyPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_OnEKeyPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_OnEKeyPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlippitCharacter_OnEKeyPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlippitCharacter_OnEKeyPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlippitCharacter_OnEKeyReleased_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_OnEKeyReleased_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlippitCharacter_OnEKeyReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlippitCharacter, nullptr, "OnEKeyReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_OnEKeyReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_OnEKeyReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlippitCharacter_OnEKeyReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlippitCharacter_OnEKeyReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlippitCharacter_OnEndOverlap_Statics
	{
		struct FlippitCharacter_eventOnEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlippitCharacter_OnEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventOnEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlippitCharacter_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_OnEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlippitCharacter_OnEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventOnEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_OnEndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_OnEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFlippitCharacter_OnEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventOnEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlippitCharacter_OnEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_OnEndOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_OnEndOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_OnEndOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_OnEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_OnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Function called when player exits the collision zone\n" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
		{ "ToolTip", "Function called when player exits the collision zone" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlippitCharacter_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlippitCharacter, nullptr, "OnEndOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFlippitCharacter_OnEndOverlap_Statics::FlippitCharacter_eventOnEndOverlap_Parms), Z_Construct_UFunction_AFlippitCharacter_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_OnEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_OnEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_OnEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlippitCharacter_OnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlippitCharacter_OnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlippitCharacter_OnPlayerEnterInteractionZone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_OnPlayerEnterInteractionZone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "// Function to handle player entering the interaction zone\n" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
		{ "ToolTip", "Function to handle player entering the interaction zone" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlippitCharacter_OnPlayerEnterInteractionZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlippitCharacter, nullptr, "OnPlayerEnterInteractionZone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_OnPlayerEnterInteractionZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_OnPlayerEnterInteractionZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlippitCharacter_OnPlayerEnterInteractionZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlippitCharacter_OnPlayerEnterInteractionZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlippitCharacter_OnPlayerExitInteractionZone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_OnPlayerExitInteractionZone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "// Function to handle player exiting the interaction zone\n" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
		{ "ToolTip", "Function to handle player exiting the interaction zone" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlippitCharacter_OnPlayerExitInteractionZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlippitCharacter, nullptr, "OnPlayerExitInteractionZone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_OnPlayerExitInteractionZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_OnPlayerExitInteractionZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlippitCharacter_OnPlayerExitInteractionZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlippitCharacter_OnPlayerExitInteractionZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlippitCharacter_PlaySoundsSequentially_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_PlaySoundsSequentially_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlippitCharacter_PlaySoundsSequentially_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlippitCharacter, nullptr, "PlaySoundsSequentially", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_PlaySoundsSequentially_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_PlaySoundsSequentially_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlippitCharacter_PlaySoundsSequentially()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlippitCharacter_PlaySoundsSequentially_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlippitCharacter_SendChatMessage_Statics
	{
		struct FlippitCharacter_eventSendChatMessage_Parms
		{
			FString chatMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chatMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_chatMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_SendChatMessage_Statics::NewProp_chatMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFlippitCharacter_SendChatMessage_Statics::NewProp_chatMessage = { "chatMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventSendChatMessage_Parms, chatMessage), METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_SendChatMessage_Statics::NewProp_chatMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_SendChatMessage_Statics::NewProp_chatMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlippitCharacter_SendChatMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_SendChatMessage_Statics::NewProp_chatMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_SendChatMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlippitCharacter_SendChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlippitCharacter, nullptr, "SendChatMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFlippitCharacter_SendChatMessage_Statics::FlippitCharacter_eventSendChatMessage_Parms), Z_Construct_UFunction_AFlippitCharacter_SendChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_SendChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_SendChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_SendChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlippitCharacter_SendChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlippitCharacter_SendChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlippitCharacter_SendWebSocketMessage_Statics
	{
		struct FlippitCharacter_eventSendWebSocketMessage_Parms
		{
			FString Message;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_SendWebSocketMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFlippitCharacter_SendWebSocketMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventSendWebSocketMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_SendWebSocketMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_SendWebSocketMessage_Statics::NewProp_Message_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlippitCharacter_SendWebSocketMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_SendWebSocketMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_SendWebSocketMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "// Function to send message over WebSocket\n" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
		{ "ToolTip", "Function to send message over WebSocket" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlippitCharacter_SendWebSocketMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlippitCharacter, nullptr, "SendWebSocketMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFlippitCharacter_SendWebSocketMessage_Statics::FlippitCharacter_eventSendWebSocketMessage_Parms), Z_Construct_UFunction_AFlippitCharacter_SendWebSocketMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_SendWebSocketMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_SendWebSocketMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_SendWebSocketMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlippitCharacter_SendWebSocketMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlippitCharacter_SendWebSocketMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlippitCharacter_SimulateForLoop_Statics
	{
		struct FlippitCharacter_eventSimulateForLoop_Parms
		{
			int32 FirstIndex;
			int32 LastIndex;
			float DelayBetweenLoops;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_FirstIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayBetweenLoops;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFlippitCharacter_SimulateForLoop_Statics::NewProp_FirstIndex = { "FirstIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventSimulateForLoop_Parms, FirstIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFlippitCharacter_SimulateForLoop_Statics::NewProp_LastIndex = { "LastIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventSimulateForLoop_Parms, LastIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFlippitCharacter_SimulateForLoop_Statics::NewProp_DelayBetweenLoops = { "DelayBetweenLoops", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitCharacter_eventSimulateForLoop_Parms, DelayBetweenLoops), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlippitCharacter_SimulateForLoop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_SimulateForLoop_Statics::NewProp_FirstIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_SimulateForLoop_Statics::NewProp_LastIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlippitCharacter_SimulateForLoop_Statics::NewProp_DelayBetweenLoops,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippitCharacter_SimulateForLoop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlippitCharacter_SimulateForLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlippitCharacter, nullptr, "SimulateForLoop", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFlippitCharacter_SimulateForLoop_Statics::FlippitCharacter_eventSimulateForLoop_Parms), Z_Construct_UFunction_AFlippitCharacter_SimulateForLoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_SimulateForLoop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlippitCharacter_SimulateForLoop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippitCharacter_SimulateForLoop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlippitCharacter_SimulateForLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlippitCharacter_SimulateForLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlippitCharacter);
	UClass* Z_Construct_UClass_AFlippitCharacter_NoRegister()
	{
		return AFlippitCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFlippitCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_glbURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_glbURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_characterId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApiKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ApiKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_characterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Messagesrecieved_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Messagesrecieved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_i_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_i;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Delay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMessageSentAndReceived_MetaData[];
#endif
		static void NewProp_bMessageSentAndReceived_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMessageSentAndReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotEmpy_MetaData[];
#endif
		static void NewProp_NotEmpy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NotEmpy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connected_MetaData[];
#endif
		static void NewProp_Connected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Connected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Streaming_MetaData[];
#endif
		static void NewProp_Streaming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Streaming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAudioStreamingInProgress_MetaData[];
#endif
		static void NewProp_bAudioStreamingInProgress_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAudioStreamingInProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseMicrophone_MetaData[];
#endif
		static void NewProp_UseMicrophone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseMicrophone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseVoice_MetaData[];
#endif
		static void NewProp_UseVoice_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseVoice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseText_MetaData[];
#endif
		static void NewProp_UseText_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_animationKeys_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_animationKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_destinationkey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_destinationkey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AWSSecretKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AWSSecretKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AWSKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AWSKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpenAIKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OpenAIKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_audioByte_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_audioByte;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldKeyToRecord_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoldKeyToRecord;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundWaveArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundWaveArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundWaveArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollisionComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WordToAnimationMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_WordToAnimationMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WordToAnimationMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_WordToAnimationMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlippitCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Flippit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFlippitCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlippitCharacter_animationSetformresponse, "animationSetformresponse" }, // 653388875
		{ &Z_Construct_UFunction_AFlippitCharacter_AssignAnimationToString, "AssignAnimationToString" }, // 2215716300
		{ &Z_Construct_UFunction_AFlippitCharacter_CloseWebSocketConnection, "CloseWebSocketConnection" }, // 3740488893
		{ &Z_Construct_UFunction_AFlippitCharacter_ConnectToWebSocket, "ConnectToWebSocket" }, // 4076328427
		{ &Z_Construct_UFunction_AFlippitCharacter_DecodeAudioString, "DecodeAudioString" }, // 1608213338
		{ &Z_Construct_UFunction_AFlippitCharacter_DeleteFile, "DeleteFile" }, // 1356052333
		{ &Z_Construct_UFunction_AFlippitCharacter_EstablishWebSocketConnection, "EstablishWebSocketConnection" }, // 173952756
		{ &Z_Construct_UFunction_AFlippitCharacter_GetLocationOfActorByName, "GetLocationOfActorByName" }, // 1900618060
		{ &Z_Construct_UFunction_AFlippitCharacter_HandleWebSocketMessage, "HandleWebSocketMessage" }, // 2321737860
		{ &Z_Construct_UFunction_AFlippitCharacter_heytriggerme, "heytriggerme" }, // 2064482625
		{ &Z_Construct_UFunction_AFlippitCharacter_LogNamesOfAllObjectsInLevel, "LogNamesOfAllObjectsInLevel" }, // 3053665772
		{ &Z_Construct_UFunction_AFlippitCharacter_NotEmpty, "NotEmpty" }, // 3415804285
		{ &Z_Construct_UFunction_AFlippitCharacter_OnBeginOverlap, "OnBeginOverlap" }, // 1265956196
		{ &Z_Construct_UFunction_AFlippitCharacter_OnEKeyPressed, "OnEKeyPressed" }, // 3718651617
		{ &Z_Construct_UFunction_AFlippitCharacter_OnEKeyReleased, "OnEKeyReleased" }, // 1139575147
		{ &Z_Construct_UFunction_AFlippitCharacter_OnEndOverlap, "OnEndOverlap" }, // 773113443
		{ &Z_Construct_UFunction_AFlippitCharacter_OnPlayerEnterInteractionZone, "OnPlayerEnterInteractionZone" }, // 2992632854
		{ &Z_Construct_UFunction_AFlippitCharacter_OnPlayerExitInteractionZone, "OnPlayerExitInteractionZone" }, // 3354335711
		{ &Z_Construct_UFunction_AFlippitCharacter_PlaySoundsSequentially, "PlaySoundsSequentially" }, // 789712059
		{ &Z_Construct_UFunction_AFlippitCharacter_SendChatMessage, "SendChatMessage" }, // 1425166669
		{ &Z_Construct_UFunction_AFlippitCharacter_SendWebSocketMessage, "SendWebSocketMessage" }, // 98362895
		{ &Z_Construct_UFunction_AFlippitCharacter_SimulateForLoop, "SimulateForLoop" }, // 1032751614
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippitCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FlippitCharacter.h" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_glbURL_MetaData[] = {
		{ "Category", "avatar" },
		{ "Comment", "// Sets default values for this actor's properties\n" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
		{ "ToolTip", "Sets default values for this actor's properties" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_glbURL = { "glbURL", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlippitCharacter, glbURL), METADATA_PARAMS(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_glbURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_glbURL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_characterId_MetaData[] = {
		{ "Category", "avatar" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_characterId = { "characterId", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlippitCharacter, characterId), METADATA_PARAMS(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_characterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_characterId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_ApiKey_MetaData[] = {
		{ "Category", "avatar" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_ApiKey = { "ApiKey", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlippitCharacter, ApiKey), METADATA_PARAMS(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_ApiKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_ApiKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_characterName_MetaData[] = {
		{ "Category", "avatar" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_characterName = { "characterName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlippitCharacter, characterName), METADATA_PARAMS(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_characterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_characterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_Messagesrecieved_MetaData[] = {
		{ "Category", "avatar" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_Messagesrecieved = { "Messagesrecieved", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlippitCharacter, Messagesrecieved), METADATA_PARAMS(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_Messagesrecieved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_Messagesrecieved_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_i_MetaData[] = {
		{ "Category", "avatar" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_i = { "i", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlippitCharacter, i), METADATA_PARAMS(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_i_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_i_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_Delay_MetaData[] = {
		{ "Category", "avatar" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlippitCharacter, Delay), METADATA_PARAMS(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_Delay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_Delay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_bMessageSentAndReceived_MetaData[] = {
		{ "Category", "avatar" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_bMessageSentAndReceived_SetBit(void* Obj)
	{
		((AFlippitCharacter*)Obj)->bMessageSentAndReceived = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_bMessageSentAndReceived = { "bMessageSentAndReceived", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AFlippitCharacter), &Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_bMessageSentAndReceived_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_bMessageSentAndReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_bMessageSentAndReceived_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_NotEmpy_MetaData[] = {
		{ "Category", "avatar" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_NotEmpy_SetBit(void* Obj)
	{
		((AFlippitCharacter*)Obj)->NotEmpy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_NotEmpy = { "NotEmpy", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AFlippitCharacter), &Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_NotEmpy_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_NotEmpy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_NotEmpy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_Connected_MetaData[] = {
		{ "Category", "avatar" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_Connected_SetBit(void* Obj)
	{
		((AFlippitCharacter*)Obj)->Connected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_Connected = { "Connected", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AFlippitCharacter), &Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_Connected_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_Connected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_Connected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_Streaming_MetaData[] = {
		{ "Category", "avatar" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_Streaming_SetBit(void* Obj)
	{
		((AFlippitCharacter*)Obj)->Streaming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_Streaming = { "Streaming", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AFlippitCharacter), &Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_Streaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_Streaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_Streaming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_bAudioStreamingInProgress_MetaData[] = {
		{ "Category", "avatar" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_bAudioStreamingInProgress_SetBit(void* Obj)
	{
		((AFlippitCharacter*)Obj)->bAudioStreamingInProgress = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_bAudioStreamingInProgress = { "bAudioStreamingInProgress", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AFlippitCharacter), &Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_bAudioStreamingInProgress_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_bAudioStreamingInProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_bAudioStreamingInProgress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_UseMicrophone_MetaData[] = {
		{ "Category", "Interaction Configuration" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_UseMicrophone_SetBit(void* Obj)
	{
		((AFlippitCharacter*)Obj)->UseMicrophone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_UseMicrophone = { "UseMicrophone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AFlippitCharacter), &Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_UseMicrophone_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_UseMicrophone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_UseMicrophone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_UseVoice_MetaData[] = {
		{ "Category", "Interaction Configuration" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_UseVoice_SetBit(void* Obj)
	{
		((AFlippitCharacter*)Obj)->UseVoice = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_UseVoice = { "UseVoice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AFlippitCharacter), &Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_UseVoice_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_UseVoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_UseVoice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_UseText_MetaData[] = {
		{ "Category", "Interaction Configuration" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_UseText_SetBit(void* Obj)
	{
		((AFlippitCharacter*)Obj)->UseText = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_UseText = { "UseText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AFlippitCharacter), &Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_UseText_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_UseText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_UseText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_animationKeys_MetaData[] = {
		{ "Category", "avatar" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_animationKeys = { "animationKeys", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlippitCharacter, animationKeys), METADATA_PARAMS(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_animationKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_animationKeys_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_destinationkey_MetaData[] = {
		{ "Category", "avatar" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_destinationkey = { "destinationkey", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlippitCharacter, destinationkey), METADATA_PARAMS(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_destinationkey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_destinationkey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_AWSSecretKey_MetaData[] = {
		{ "Category", "avatar" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_AWSSecretKey = { "AWSSecretKey", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlippitCharacter, AWSSecretKey), METADATA_PARAMS(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_AWSSecretKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_AWSSecretKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_AWSKey_MetaData[] = {
		{ "Category", "avatar" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_AWSKey = { "AWSKey", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlippitCharacter, AWSKey), METADATA_PARAMS(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_AWSKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_AWSKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_OpenAIKey_MetaData[] = {
		{ "Category", "avatar" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_OpenAIKey = { "OpenAIKey", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlippitCharacter, OpenAIKey), METADATA_PARAMS(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_OpenAIKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_OpenAIKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_audioByte_MetaData[] = {
		{ "Category", "avatar" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_audioByte = { "audioByte", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlippitCharacter, audioByte), METADATA_PARAMS(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_audioByte_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_audioByte_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_HoldKeyToRecord_MetaData[] = {
		{ "Category", "Interaction Configuration" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_HoldKeyToRecord = { "HoldKeyToRecord", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlippitCharacter, HoldKeyToRecord), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_HoldKeyToRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_HoldKeyToRecord_MetaData)) }; // 2101135134
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_SoundWaveArray_Inner = { "SoundWaveArray", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_SoundWaveArray_MetaData[] = {
		{ "Category", "avatar" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_SoundWaveArray = { "SoundWaveArray", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlippitCharacter, SoundWaveArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_SoundWaveArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_SoundWaveArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_BoxCollisionComponent_MetaData[] = {
		{ "Category", "FlippitCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_BoxCollisionComponent = { "BoxCollisionComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlippitCharacter, BoxCollisionComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_BoxCollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_BoxCollisionComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_WordToAnimationMap_ValueProp = { "WordToAnimationMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_WordToAnimationMap_Key_KeyProp = { "WordToAnimationMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_WordToAnimationMap_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/FlippitCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_WordToAnimationMap = { "WordToAnimationMap", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlippitCharacter, WordToAnimationMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_WordToAnimationMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_WordToAnimationMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlippitCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_glbURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_characterId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_ApiKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_characterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_Messagesrecieved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_i,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_Delay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_bMessageSentAndReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_NotEmpy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_Connected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_Streaming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_bAudioStreamingInProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_UseMicrophone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_UseVoice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_UseText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_animationKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_destinationkey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_AWSSecretKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_AWSKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_OpenAIKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_audioByte,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_HoldKeyToRecord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_SoundWaveArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_SoundWaveArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_BoxCollisionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_WordToAnimationMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_WordToAnimationMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippitCharacter_Statics::NewProp_WordToAnimationMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlippitCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlippitCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlippitCharacter_Statics::ClassParams = {
		&AFlippitCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFlippitCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlippitCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFlippitCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippitCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlippitCharacter()
	{
		if (!Z_Registration_Info_UClass_AFlippitCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlippitCharacter.OuterSingleton, Z_Construct_UClass_AFlippitCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFlippitCharacter.OuterSingleton;
	}
	template<> FLIPPIT_API UClass* StaticClass<AFlippitCharacter>()
	{
		return AFlippitCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlippitCharacter);
	AFlippitCharacter::~AFlippitCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFlippitCharacter, AFlippitCharacter::StaticClass, TEXT("AFlippitCharacter"), &Z_Registration_Info_UClass_AFlippitCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlippitCharacter), 3939528180U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_1481430416(TEXT("/Script/Flippit"),
		Z_CompiledInDeferFile_FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
