// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSStealth/FPSStealthGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSStealthGameMode() {}
// Cross Module References
	FPSSTEALTH_API UClass* Z_Construct_UClass_AFPSStealthGameMode_NoRegister();
	FPSSTEALTH_API UClass* Z_Construct_UClass_AFPSStealthGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FPSStealth();
// End Cross Module References
	void AFPSStealthGameMode::StaticRegisterNativesAFPSStealthGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFPSStealthGameMode_NoRegister()
	{
		return AFPSStealthGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFPSStealthGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSStealthGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSStealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSStealthGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FPSStealthGameMode.h" },
		{ "ModuleRelativePath", "FPSStealthGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSStealthGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSStealthGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSStealthGameMode_Statics::ClassParams = {
		&AFPSStealthGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFPSStealthGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFPSStealthGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSStealthGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSStealthGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSStealthGameMode, 2770984107);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSStealthGameMode(Z_Construct_UClass_AFPSStealthGameMode, &AFPSStealthGameMode::StaticClass, TEXT("/Script/FPSStealth"), TEXT("AFPSStealthGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSStealthGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
