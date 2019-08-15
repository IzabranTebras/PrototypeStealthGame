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
	FPSSTEALTH_API UFunction* Z_Construct_UFunction_AFPSStealthGameMode_OnCompleteMission();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static FName NAME_AFPSStealthGameMode_OnCompleteMission = FName(TEXT("OnCompleteMission"));
	void AFPSStealthGameMode::OnCompleteMission(APawn* pawnInside, bool success)
	{
		FPSStealthGameMode_eventOnCompleteMission_Parms Parms;
		Parms.pawnInside=pawnInside;
		Parms.success=success ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSStealthGameMode_OnCompleteMission),&Parms);
	}
	void AFPSStealthGameMode::StaticRegisterNativesAFPSStealthGameMode()
	{
	}
	struct Z_Construct_UFunction_AFPSStealthGameMode_OnCompleteMission_Statics
	{
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pawnInside;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSStealthGameMode_OnCompleteMission_Statics::NewProp_success_SetBit(void* Obj)
	{
		((FPSStealthGameMode_eventOnCompleteMission_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSStealthGameMode_OnCompleteMission_Statics::NewProp_success = { UE4CodeGen_Private::EPropertyClass::Bool, "success", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FPSStealthGameMode_eventOnCompleteMission_Parms), &Z_Construct_UFunction_AFPSStealthGameMode_OnCompleteMission_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSStealthGameMode_OnCompleteMission_Statics::NewProp_pawnInside = { UE4CodeGen_Private::EPropertyClass::Object, "pawnInside", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FPSStealthGameMode_eventOnCompleteMission_Parms, pawnInside), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSStealthGameMode_OnCompleteMission_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSStealthGameMode_OnCompleteMission_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSStealthGameMode_OnCompleteMission_Statics::NewProp_pawnInside,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSStealthGameMode_OnCompleteMission_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "FPSStealthGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSStealthGameMode_OnCompleteMission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSStealthGameMode, "OnCompleteMission", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(FPSStealthGameMode_eventOnCompleteMission_Parms), Z_Construct_UFunction_AFPSStealthGameMode_OnCompleteMission_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSStealthGameMode_OnCompleteMission_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSStealthGameMode_OnCompleteMission_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSStealthGameMode_OnCompleteMission_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSStealthGameMode_OnCompleteMission()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSStealthGameMode_OnCompleteMission_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSStealthGameMode_NoRegister()
	{
		return AFPSStealthGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFPSStealthGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spectatingViewportClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_spectatingViewportClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSStealthGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSStealth,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSStealthGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSStealthGameMode_OnCompleteMission, "OnCompleteMission" }, // 1848736063
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSStealthGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FPSStealthGameMode.h" },
		{ "ModuleRelativePath", "FPSStealthGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSStealthGameMode_Statics::NewProp_spectatingViewportClass_MetaData[] = {
		{ "Category", "Spectator" },
		{ "ModuleRelativePath", "FPSStealthGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSStealthGameMode_Statics::NewProp_spectatingViewportClass = { UE4CodeGen_Private::EPropertyClass::Class, "spectatingViewportClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(AFPSStealthGameMode, spectatingViewportClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFPSStealthGameMode_Statics::NewProp_spectatingViewportClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSStealthGameMode_Statics::NewProp_spectatingViewportClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSStealthGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSStealthGameMode_Statics::NewProp_spectatingViewportClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSStealthGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSStealthGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSStealthGameMode_Statics::ClassParams = {
		&AFPSStealthGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFPSStealthGameMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFPSStealthGameMode_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AFPSStealthGameMode, 2575183076);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSStealthGameMode(Z_Construct_UClass_AFPSStealthGameMode, &AFPSStealthGameMode::StaticClass, TEXT("/Script/FPSStealth"), TEXT("AFPSStealthGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSStealthGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
