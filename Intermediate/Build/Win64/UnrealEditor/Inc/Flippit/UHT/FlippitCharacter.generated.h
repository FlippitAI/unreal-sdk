// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FlippitCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAnimationAsset;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FLIPPIT_FlippitCharacter_generated_h
#error "FlippitCharacter.generated.h already included, missing '#pragma once' in FlippitCharacter.h"
#endif
#define FLIPPIT_FlippitCharacter_generated_h

#define FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_18_SPARSE_DATA
#define FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAssignAnimationToString); \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap); \
	DECLARE_FUNCTION(execSimulateForLoop); \
	DECLARE_FUNCTION(execOnEKeyReleased); \
	DECLARE_FUNCTION(execOnEKeyPressed); \
	DECLARE_FUNCTION(execDeleteFile); \
	DECLARE_FUNCTION(execPlaySoundsSequentially); \
	DECLARE_FUNCTION(execDecodeAudioString); \
	DECLARE_FUNCTION(execGetLocationOfActorByName); \
	DECLARE_FUNCTION(execLogNamesOfAllObjectsInLevel); \
	DECLARE_FUNCTION(execanimationSetformresponse); \
	DECLARE_FUNCTION(execNotEmpty); \
	DECLARE_FUNCTION(execConnectToWebSocket); \
	DECLARE_FUNCTION(execSendChatMessage); \
	DECLARE_FUNCTION(execHandleWebSocketMessage); \
	DECLARE_FUNCTION(execOnPlayerExitInteractionZone); \
	DECLARE_FUNCTION(execOnPlayerEnterInteractionZone); \
	DECLARE_FUNCTION(execCloseWebSocketConnection); \
	DECLARE_FUNCTION(execSendWebSocketMessage); \
	DECLARE_FUNCTION(execEstablishWebSocketConnection);


#define FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAssignAnimationToString); \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap); \
	DECLARE_FUNCTION(execSimulateForLoop); \
	DECLARE_FUNCTION(execOnEKeyReleased); \
	DECLARE_FUNCTION(execOnEKeyPressed); \
	DECLARE_FUNCTION(execDeleteFile); \
	DECLARE_FUNCTION(execPlaySoundsSequentially); \
	DECLARE_FUNCTION(execDecodeAudioString); \
	DECLARE_FUNCTION(execGetLocationOfActorByName); \
	DECLARE_FUNCTION(execLogNamesOfAllObjectsInLevel); \
	DECLARE_FUNCTION(execanimationSetformresponse); \
	DECLARE_FUNCTION(execNotEmpty); \
	DECLARE_FUNCTION(execConnectToWebSocket); \
	DECLARE_FUNCTION(execSendChatMessage); \
	DECLARE_FUNCTION(execHandleWebSocketMessage); \
	DECLARE_FUNCTION(execOnPlayerExitInteractionZone); \
	DECLARE_FUNCTION(execOnPlayerEnterInteractionZone); \
	DECLARE_FUNCTION(execCloseWebSocketConnection); \
	DECLARE_FUNCTION(execSendWebSocketMessage); \
	DECLARE_FUNCTION(execEstablishWebSocketConnection);


#define FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_18_ACCESSORS
#define FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_18_CALLBACK_WRAPPERS
#define FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlippitCharacter(); \
	friend struct Z_Construct_UClass_AFlippitCharacter_Statics; \
public: \
	DECLARE_CLASS(AFlippitCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flippit"), NO_API) \
	DECLARE_SERIALIZER(AFlippitCharacter)


#define FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAFlippitCharacter(); \
	friend struct Z_Construct_UClass_AFlippitCharacter_Statics; \
public: \
	DECLARE_CLASS(AFlippitCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flippit"), NO_API) \
	DECLARE_SERIALIZER(AFlippitCharacter)


#define FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlippitCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlippitCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlippitCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlippitCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlippitCharacter(AFlippitCharacter&&); \
	NO_API AFlippitCharacter(const AFlippitCharacter&); \
public: \
	NO_API virtual ~AFlippitCharacter();


#define FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlippitCharacter(AFlippitCharacter&&); \
	NO_API AFlippitCharacter(const AFlippitCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlippitCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlippitCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlippitCharacter) \
	NO_API virtual ~AFlippitCharacter();


#define FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_15_PROLOG
#define FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_18_SPARSE_DATA \
	FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_18_RPC_WRAPPERS \
	FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_18_ACCESSORS \
	FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_18_CALLBACK_WRAPPERS \
	FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_18_INCLASS \
	FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_18_SPARSE_DATA \
	FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_18_ACCESSORS \
	FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_18_CALLBACK_WRAPPERS \
	FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLIPPIT_API UClass* StaticClass<class AFlippitCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
