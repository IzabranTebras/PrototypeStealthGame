// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSStealth/Public/Objective.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjective() {}
// Cross Module References
	FPSSTEALTH_API UClass* Z_Construct_UClass_AObjective_NoRegister();
	FPSSTEALTH_API UClass* Z_Construct_UClass_AObjective();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSStealth();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AObjective::StaticRegisterNativesAObjective()
	{
	}
	UClass* Z_Construct_UClass_AObjective_NoRegister()
	{
		return AObjective::StaticClass();
	}
	struct Z_Construct_UClass_AObjective_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sphereComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sphereComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_meshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObjective_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSStealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjective_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Objective.h" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjective_Statics::NewProp_PickupFX_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObjective_Statics::NewProp_PickupFX = { UE4CodeGen_Private::EPropertyClass::Object, "PickupFX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AObjective, PickupFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObjective_Statics::NewProp_PickupFX_MetaData, ARRAY_COUNT(Z_Construct_UClass_AObjective_Statics::NewProp_PickupFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjective_Statics::NewProp_sphereComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObjective_Statics::NewProp_sphereComp = { UE4CodeGen_Private::EPropertyClass::Object, "sphereComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AObjective, sphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObjective_Statics::NewProp_sphereComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AObjective_Statics::NewProp_sphereComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjective_Statics::NewProp_meshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Objective.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObjective_Statics::NewProp_meshComp = { UE4CodeGen_Private::EPropertyClass::Object, "meshComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AObjective, meshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObjective_Statics::NewProp_meshComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AObjective_Statics::NewProp_meshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjective_Statics::NewProp_PickupFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjective_Statics::NewProp_sphereComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjective_Statics::NewProp_meshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObjective_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObjective>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObjective_Statics::ClassParams = {
		&AObjective::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AObjective_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AObjective_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AObjective_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AObjective_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObjective()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObjective_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObjective, 3277766222);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObjective(Z_Construct_UClass_AObjective, &AObjective::StaticClass, TEXT("/Script/FPSStealth"), TEXT("AObjective"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObjective);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
