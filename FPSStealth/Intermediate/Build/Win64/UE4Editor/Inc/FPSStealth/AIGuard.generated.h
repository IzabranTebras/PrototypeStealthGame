// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
struct FVector;
enum class EAIState : uint8;
#ifdef FPSSTEALTH_AIGuard_generated_h
#error "AIGuard.generated.h already included, missing '#pragma once' in AIGuard.h"
#endif
#define FPSSTEALTH_AIGuard_generated_h

#define FPSStealth_Source_FPSStealth_Public_AIGuard_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResumePatrol) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResumePatrol(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnNoiseHeard) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_noisy); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnNoiseHeard(Z_Param_noisy,Z_Param_Out_location,Z_Param_volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPawnSeen) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_seenPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPawnSeen(Z_Param_seenPawn); \
		P_NATIVE_END; \
	}


#define FPSStealth_Source_FPSStealth_Public_AIGuard_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResumePatrol) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResumePatrol(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnNoiseHeard) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_noisy); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnNoiseHeard(Z_Param_noisy,Z_Param_Out_location,Z_Param_volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPawnSeen) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_seenPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPawnSeen(Z_Param_seenPawn); \
		P_NATIVE_END; \
	}


#define FPSStealth_Source_FPSStealth_Public_AIGuard_h_23_EVENT_PARMS \
	struct AIGuard_eventOnStateChanged_Parms \
	{ \
		EAIState newState; \
	};


#define FPSStealth_Source_FPSStealth_Public_AIGuard_h_23_CALLBACK_WRAPPERS
#define FPSStealth_Source_FPSStealth_Public_AIGuard_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIGuard(); \
	friend struct Z_Construct_UClass_AAIGuard_Statics; \
public: \
	DECLARE_CLASS(AAIGuard, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSStealth"), NO_API) \
	DECLARE_SERIALIZER(AAIGuard)


#define FPSStealth_Source_FPSStealth_Public_AIGuard_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAAIGuard(); \
	friend struct Z_Construct_UClass_AAIGuard_Statics; \
public: \
	DECLARE_CLASS(AAIGuard, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSStealth"), NO_API) \
	DECLARE_SERIALIZER(AAIGuard)


#define FPSStealth_Source_FPSStealth_Public_AIGuard_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIGuard(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIGuard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIGuard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIGuard); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIGuard(AAIGuard&&); \
	NO_API AAIGuard(const AAIGuard&); \
public:


#define FPSStealth_Source_FPSStealth_Public_AIGuard_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIGuard(AAIGuard&&); \
	NO_API AAIGuard(const AAIGuard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIGuard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIGuard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAIGuard)


#define FPSStealth_Source_FPSStealth_Public_AIGuard_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__sensorComponent() { return STRUCT_OFFSET(AAIGuard, sensorComponent); } \
	FORCEINLINE static uint32 __PPO__timeToBackToGuard() { return STRUCT_OFFSET(AAIGuard, timeToBackToGuard); } \
	FORCEINLINE static uint32 __PPO__patrolPoints() { return STRUCT_OFFSET(AAIGuard, patrolPoints); }


#define FPSStealth_Source_FPSStealth_Public_AIGuard_h_20_PROLOG \
	FPSStealth_Source_FPSStealth_Public_AIGuard_h_23_EVENT_PARMS


#define FPSStealth_Source_FPSStealth_Public_AIGuard_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSStealth_Source_FPSStealth_Public_AIGuard_h_23_PRIVATE_PROPERTY_OFFSET \
	FPSStealth_Source_FPSStealth_Public_AIGuard_h_23_RPC_WRAPPERS \
	FPSStealth_Source_FPSStealth_Public_AIGuard_h_23_CALLBACK_WRAPPERS \
	FPSStealth_Source_FPSStealth_Public_AIGuard_h_23_INCLASS \
	FPSStealth_Source_FPSStealth_Public_AIGuard_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSStealth_Source_FPSStealth_Public_AIGuard_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSStealth_Source_FPSStealth_Public_AIGuard_h_23_PRIVATE_PROPERTY_OFFSET \
	FPSStealth_Source_FPSStealth_Public_AIGuard_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSStealth_Source_FPSStealth_Public_AIGuard_h_23_CALLBACK_WRAPPERS \
	FPSStealth_Source_FPSStealth_Public_AIGuard_h_23_INCLASS_NO_PURE_DECLS \
	FPSStealth_Source_FPSStealth_Public_AIGuard_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSStealth_Source_FPSStealth_Public_AIGuard_h


#define FOREACH_ENUM_EAISTATE(op) \
	op(EAIState::PATROLLING) \
	op(EAIState::SUSPICIOUS) \
	op(EAIState::ALERTED) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
