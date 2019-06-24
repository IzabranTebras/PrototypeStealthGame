// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSStealth/Public/AIGuard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIGuard() {}
// Cross Module References
	FPSSTEALTH_API UClass* Z_Construct_UClass_AAIGuard_NoRegister();
	FPSSTEALTH_API UClass* Z_Construct_UClass_AAIGuard();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FPSStealth();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
// End Cross Module References
	void AAIGuard::StaticRegisterNativesAAIGuard()
	{
	}
	UClass* Z_Construct_UClass_AAIGuard_NoRegister()
	{
		return AAIGuard::StaticClass();
	}
	struct Z_Construct_UClass_AAIGuard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sensorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sensorComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIGuard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSStealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIGuard_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AIGuard.h" },
		{ "ModuleRelativePath", "Public/AIGuard.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIGuard_Statics::NewProp_sensorComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AIGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIGuard_Statics::NewProp_sensorComponent = { UE4CodeGen_Private::EPropertyClass::Object, "sensorComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AAIGuard, sensorComponent), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIGuard_Statics::NewProp_sensorComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIGuard_Statics::NewProp_sensorComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIGuard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIGuard_Statics::NewProp_sensorComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIGuard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIGuard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIGuard_Statics::ClassParams = {
		&AAIGuard::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AAIGuard_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AAIGuard_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAIGuard_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAIGuard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIGuard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIGuard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIGuard, 578205151);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIGuard(Z_Construct_UClass_AAIGuard, &AAIGuard::StaticClass, TEXT("/Script/FPSStealth"), TEXT("AAIGuard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIGuard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
