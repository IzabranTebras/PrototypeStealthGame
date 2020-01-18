// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSStealth/Public/ExtractionZone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExtractionZone() {}
// Cross Module References
	FPSSTEALTH_API UClass* Z_Construct_UClass_AExtractionZone_NoRegister();
	FPSSTEALTH_API UClass* Z_Construct_UClass_AExtractionZone();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSStealth();
	FPSSTEALTH_API UFunction* Z_Construct_UFunction_AExtractionZone_HandleOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void AExtractionZone::StaticRegisterNativesAExtractionZone()
	{
		UClass* Class = AExtractionZone::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleOverlap", &AExtractionZone::execHandleOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics
	{
		struct ExtractionZone_eventHandleOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(ExtractionZone_eventHandleOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ExtractionZone_eventHandleOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ExtractionZone_eventHandleOverlap_Parms), &Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExtractionZone_eventHandleOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ExtractionZone_eventHandleOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExtractionZone_eventHandleOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ExtractionZone_eventHandleOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExtractionZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExtractionZone, "HandleOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00480401, sizeof(ExtractionZone_eventHandleOverlap_Parms), Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExtractionZone_HandleOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExtractionZone_HandleOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AExtractionZone_NoRegister()
	{
		return AExtractionZone::StaticClass();
	}
	struct Z_Construct_UClass_AExtractionZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_missionCompleteSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_missionCompleteSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_objectiveMissingSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_objectiveMissingSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_decalComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_decalComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlapBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlapBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExtractionZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSStealth,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AExtractionZone_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AExtractionZone_HandleOverlap, "HandleOverlap" }, // 98316167
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExtractionZone_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ExtractionZone.h" },
		{ "ModuleRelativePath", "Public/ExtractionZone.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExtractionZone_Statics::NewProp_missionCompleteSound_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Public/ExtractionZone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExtractionZone_Statics::NewProp_missionCompleteSound = { UE4CodeGen_Private::EPropertyClass::Object, "missionCompleteSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AExtractionZone, missionCompleteSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExtractionZone_Statics::NewProp_missionCompleteSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AExtractionZone_Statics::NewProp_missionCompleteSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExtractionZone_Statics::NewProp_objectiveMissingSound_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Public/ExtractionZone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExtractionZone_Statics::NewProp_objectiveMissingSound = { UE4CodeGen_Private::EPropertyClass::Object, "objectiveMissingSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AExtractionZone, objectiveMissingSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExtractionZone_Statics::NewProp_objectiveMissingSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AExtractionZone_Statics::NewProp_objectiveMissingSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExtractionZone_Statics::NewProp_decalComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ExtractionZone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExtractionZone_Statics::NewProp_decalComp = { UE4CodeGen_Private::EPropertyClass::Object, "decalComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AExtractionZone, decalComp), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExtractionZone_Statics::NewProp_decalComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AExtractionZone_Statics::NewProp_decalComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExtractionZone_Statics::NewProp_overlapBox_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ExtractionZone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExtractionZone_Statics::NewProp_overlapBox = { UE4CodeGen_Private::EPropertyClass::Object, "overlapBox", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AExtractionZone, overlapBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExtractionZone_Statics::NewProp_overlapBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_AExtractionZone_Statics::NewProp_overlapBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExtractionZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExtractionZone_Statics::NewProp_missionCompleteSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExtractionZone_Statics::NewProp_objectiveMissingSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExtractionZone_Statics::NewProp_decalComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExtractionZone_Statics::NewProp_overlapBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExtractionZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExtractionZone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExtractionZone_Statics::ClassParams = {
		&AExtractionZone::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AExtractionZone_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AExtractionZone_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AExtractionZone_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AExtractionZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExtractionZone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExtractionZone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExtractionZone, 2692019190);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExtractionZone(Z_Construct_UClass_AExtractionZone, &AExtractionZone::StaticClass, TEXT("/Script/FPSStealth"), TEXT("AExtractionZone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExtractionZone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
