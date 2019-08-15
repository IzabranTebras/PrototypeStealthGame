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
	FPSSTEALTH_API UEnum* Z_Construct_UEnum_FPSStealth_EAIState();
	UPackage* Z_Construct_UPackage__Script_FPSStealth();
	FPSSTEALTH_API UClass* Z_Construct_UClass_AAIGuard_NoRegister();
	FPSSTEALTH_API UClass* Z_Construct_UClass_AAIGuard();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	FPSSTEALTH_API UFunction* Z_Construct_UFunction_AAIGuard_OnNoiseHeard();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	FPSSTEALTH_API UFunction* Z_Construct_UFunction_AAIGuard_OnPawnSeen();
	FPSSTEALTH_API UFunction* Z_Construct_UFunction_AAIGuard_OnStateChanged();
	FPSSTEALTH_API UFunction* Z_Construct_UFunction_AAIGuard_ResumePatrol();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
// End Cross Module References
	static UEnum* EAIState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FPSStealth_EAIState, Z_Construct_UPackage__Script_FPSStealth(), TEXT("EAIState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAIState(EAIState_StaticEnum, TEXT("/Script/FPSStealth"), TEXT("EAIState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FPSStealth_EAIState_CRC() { return 4109552301U; }
	UEnum* Z_Construct_UEnum_FPSStealth_EAIState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FPSStealth();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAIState"), 0, Get_Z_Construct_UEnum_FPSStealth_EAIState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAIState::PATROLLING", (int64)EAIState::PATROLLING },
				{ "EAIState::SUSPICIOUS", (int64)EAIState::SUSPICIOUS },
				{ "EAIState::ALERTED", (int64)EAIState::ALERTED },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AIGuard.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FPSStealth,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAIState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EAIState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_AAIGuard_OnStateChanged = FName(TEXT("OnStateChanged"));
	void AAIGuard::OnStateChanged(EAIState newState)
	{
		AIGuard_eventOnStateChanged_Parms Parms;
		Parms.newState=newState;
		ProcessEvent(FindFunctionChecked(NAME_AAIGuard_OnStateChanged),&Parms);
	}
	void AAIGuard::StaticRegisterNativesAAIGuard()
	{
		UClass* Class = AAIGuard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnNoiseHeard", &AAIGuard::execOnNoiseHeard },
			{ "OnPawnSeen", &AAIGuard::execOnPawnSeen },
			{ "ResumePatrol", &AAIGuard::execResumePatrol },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAIGuard_OnNoiseHeard_Statics
	{
		struct AIGuard_eventOnNoiseHeard_Parms
		{
			APawn* noisy;
			FVector location;
			float volume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_volume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_noisy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAIGuard_OnNoiseHeard_Statics::NewProp_volume = { UE4CodeGen_Private::EPropertyClass::Float, "volume", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIGuard_eventOnNoiseHeard_Parms, volume), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIGuard_OnNoiseHeard_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIGuard_OnNoiseHeard_Statics::NewProp_location = { UE4CodeGen_Private::EPropertyClass::Struct, "location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AIGuard_eventOnNoiseHeard_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAIGuard_OnNoiseHeard_Statics::NewProp_location_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AAIGuard_OnNoiseHeard_Statics::NewProp_location_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIGuard_OnNoiseHeard_Statics::NewProp_noisy = { UE4CodeGen_Private::EPropertyClass::Object, "noisy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIGuard_eventOnNoiseHeard_Parms, noisy), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIGuard_OnNoiseHeard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIGuard_OnNoiseHeard_Statics::NewProp_volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIGuard_OnNoiseHeard_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIGuard_OnNoiseHeard_Statics::NewProp_noisy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIGuard_OnNoiseHeard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIGuard_OnNoiseHeard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIGuard, "OnNoiseHeard", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00C80401, sizeof(AIGuard_eventOnNoiseHeard_Parms), Z_Construct_UFunction_AAIGuard_OnNoiseHeard_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIGuard_OnNoiseHeard_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIGuard_OnNoiseHeard_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIGuard_OnNoiseHeard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIGuard_OnNoiseHeard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIGuard_OnNoiseHeard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIGuard_OnPawnSeen_Statics
	{
		struct AIGuard_eventOnPawnSeen_Parms
		{
			APawn* seenPawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_seenPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIGuard_OnPawnSeen_Statics::NewProp_seenPawn = { UE4CodeGen_Private::EPropertyClass::Object, "seenPawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIGuard_eventOnPawnSeen_Parms, seenPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIGuard_OnPawnSeen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIGuard_OnPawnSeen_Statics::NewProp_seenPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIGuard_OnPawnSeen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIGuard_OnPawnSeen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIGuard, "OnPawnSeen", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(AIGuard_eventOnPawnSeen_Parms), Z_Construct_UFunction_AAIGuard_OnPawnSeen_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIGuard_OnPawnSeen_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIGuard_OnPawnSeen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIGuard_OnPawnSeen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIGuard_OnPawnSeen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIGuard_OnPawnSeen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIGuard_OnStateChanged_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAIGuard_OnStateChanged_Statics::NewProp_newState = { UE4CodeGen_Private::EPropertyClass::Enum, "newState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIGuard_eventOnStateChanged_Parms, newState), Z_Construct_UEnum_FPSStealth_EAIState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAIGuard_OnStateChanged_Statics::NewProp_newState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIGuard_OnStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIGuard_OnStateChanged_Statics::NewProp_newState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIGuard_OnStateChanged_Statics::NewProp_newState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIGuard_OnStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/AIGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIGuard_OnStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIGuard, "OnStateChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(AIGuard_eventOnStateChanged_Parms), Z_Construct_UFunction_AAIGuard_OnStateChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIGuard_OnStateChanged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIGuard_OnStateChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIGuard_OnStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIGuard_OnStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIGuard_OnStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIGuard_ResumePatrol_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIGuard_ResumePatrol_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIGuard_ResumePatrol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIGuard, "ResumePatrol", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIGuard_ResumePatrol_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIGuard_ResumePatrol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIGuard_ResumePatrol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIGuard_ResumePatrol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAIGuard_NoRegister()
	{
		return AAIGuard::StaticClass();
	}
	struct Z_Construct_UClass_AAIGuard_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_patrolPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_patrolPoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_patrolPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeToBackToGuard_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeToBackToGuard;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AAIGuard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAIGuard_OnNoiseHeard, "OnNoiseHeard" }, // 4000634193
		{ &Z_Construct_UFunction_AAIGuard_OnPawnSeen, "OnPawnSeen" }, // 1954762691
		{ &Z_Construct_UFunction_AAIGuard_OnStateChanged, "OnStateChanged" }, // 3270327063
		{ &Z_Construct_UFunction_AAIGuard_ResumePatrol, "ResumePatrol" }, // 3637963061
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIGuard_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AIGuard.h" },
		{ "ModuleRelativePath", "Public/AIGuard.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIGuard_Statics::NewProp_patrolPoints_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Public/AIGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAIGuard_Statics::NewProp_patrolPoints = { UE4CodeGen_Private::EPropertyClass::Array, "patrolPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000801, 1, nullptr, STRUCT_OFFSET(AAIGuard, patrolPoints), METADATA_PARAMS(Z_Construct_UClass_AAIGuard_Statics::NewProp_patrolPoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIGuard_Statics::NewProp_patrolPoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIGuard_Statics::NewProp_patrolPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "patrolPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIGuard_Statics::NewProp_timeToBackToGuard_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Public/AIGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIGuard_Statics::NewProp_timeToBackToGuard = { UE4CodeGen_Private::EPropertyClass::Float, "timeToBackToGuard", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(AAIGuard, timeToBackToGuard), METADATA_PARAMS(Z_Construct_UClass_AAIGuard_Statics::NewProp_timeToBackToGuard_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIGuard_Statics::NewProp_timeToBackToGuard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIGuard_Statics::NewProp_sensorComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AIGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIGuard_Statics::NewProp_sensorComponent = { UE4CodeGen_Private::EPropertyClass::Object, "sensorComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AAIGuard, sensorComponent), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIGuard_Statics::NewProp_sensorComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIGuard_Statics::NewProp_sensorComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIGuard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIGuard_Statics::NewProp_patrolPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIGuard_Statics::NewProp_patrolPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIGuard_Statics::NewProp_timeToBackToGuard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIGuard_Statics::NewProp_sensorComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIGuard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIGuard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIGuard_Statics::ClassParams = {
		&AAIGuard::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AAIGuard, 1511554610);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIGuard(Z_Construct_UClass_AAIGuard, &AAIGuard::StaticClass, TEXT("/Script/FPSStealth"), TEXT("AAIGuard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIGuard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
