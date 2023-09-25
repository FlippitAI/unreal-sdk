// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flippit/Public/FlippitBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlippitBPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	FLIPPIT_API UClass* Z_Construct_UClass_UFlippitBPLibrary();
	FLIPPIT_API UClass* Z_Construct_UClass_UFlippitBPLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Flippit();
// End Cross Module References
	DEFINE_FUNCTION(UFlippitBPLibrary::execOnAvatarRigLoaded)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_glb);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFlippitBPLibrary::OnAvatarRigLoaded(Z_Param_glb);
		P_NATIVE_END;
	}
	void UFlippitBPLibrary::StaticRegisterNativesUFlippitBPLibrary()
	{
		UClass* Class = UFlippitBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAvatarRigLoaded", &UFlippitBPLibrary::execOnAvatarRigLoaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFlippitBPLibrary_OnAvatarRigLoaded_Statics
	{
		struct FlippitBPLibrary_eventOnAvatarRigLoaded_Parms
		{
			FString glb;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_glb;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlippitBPLibrary_OnAvatarRigLoaded_Statics::NewProp_glb = { "glb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitBPLibrary_eventOnAvatarRigLoaded_Parms, glb), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlippitBPLibrary_OnAvatarRigLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlippitBPLibrary_eventOnAvatarRigLoaded_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlippitBPLibrary_OnAvatarRigLoaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlippitBPLibrary_OnAvatarRigLoaded_Statics::NewProp_glb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlippitBPLibrary_OnAvatarRigLoaded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlippitBPLibrary_OnAvatarRigLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlippitTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "Flippit sample test testing" },
		{ "ModuleRelativePath", "Public/FlippitBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlippitBPLibrary_OnAvatarRigLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlippitBPLibrary, nullptr, "OnAvatarRigLoaded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFlippitBPLibrary_OnAvatarRigLoaded_Statics::FlippitBPLibrary_eventOnAvatarRigLoaded_Parms), Z_Construct_UFunction_UFlippitBPLibrary_OnAvatarRigLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlippitBPLibrary_OnAvatarRigLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlippitBPLibrary_OnAvatarRigLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlippitBPLibrary_OnAvatarRigLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlippitBPLibrary_OnAvatarRigLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlippitBPLibrary_OnAvatarRigLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlippitBPLibrary);
	UClass* Z_Construct_UClass_UFlippitBPLibrary_NoRegister()
	{
		return UFlippitBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFlippitBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlippitBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Flippit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFlippitBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlippitBPLibrary_OnAvatarRigLoaded, "OnAvatarRigLoaded" }, // 3232103244
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlippitBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "FlippitBPLibrary.h" },
		{ "ModuleRelativePath", "Public/FlippitBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlippitBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlippitBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlippitBPLibrary_Statics::ClassParams = {
		&UFlippitBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlippitBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlippitBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlippitBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UFlippitBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlippitBPLibrary.OuterSingleton, Z_Construct_UClass_UFlippitBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFlippitBPLibrary.OuterSingleton;
	}
	template<> FLIPPIT_API UClass* StaticClass<UFlippitBPLibrary>()
	{
		return UFlippitBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlippitBPLibrary);
	UFlippitBPLibrary::~UFlippitBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFlippitBPLibrary, UFlippitBPLibrary::StaticClass, TEXT("UFlippitBPLibrary"), &Z_Registration_Info_UClass_UFlippitBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlippitBPLibrary), 3716389682U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitBPLibrary_h_910801940(TEXT("/Script/Flippit"),
		Z_CompiledInDeferFile_FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dhia_Documents_Unreal_Projects_MyProject_Plugins_Flippit_Source_Flippit_Public_FlippitBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
