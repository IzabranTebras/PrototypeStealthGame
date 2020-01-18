// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSSTEALTH_Objective_generated_h
#error "Objective.generated.h already included, missing '#pragma once' in Objective.h"
#endif
#define FPSSTEALTH_Objective_generated_h

#define FPSStealth_Source_FPSStealth_Public_Objective_h_14_RPC_WRAPPERS
#define FPSStealth_Source_FPSStealth_Public_Objective_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FPSStealth_Source_FPSStealth_Public_Objective_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObjective(); \
	friend struct Z_Construct_UClass_AObjective_Statics; \
public: \
	DECLARE_CLASS(AObjective, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSStealth"), NO_API) \
	DECLARE_SERIALIZER(AObjective)


#define FPSStealth_Source_FPSStealth_Public_Objective_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAObjective(); \
	friend struct Z_Construct_UClass_AObjective_Statics; \
public: \
	DECLARE_CLASS(AObjective, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSStealth"), NO_API) \
	DECLARE_SERIALIZER(AObjective)


#define FPSStealth_Source_FPSStealth_Public_Objective_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AObjective(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AObjective) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObjective); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObjective); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObjective(AObjective&&); \
	NO_API AObjective(const AObjective&); \
public:


#define FPSStealth_Source_FPSStealth_Public_Objective_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObjective(AObjective&&); \
	NO_API AObjective(const AObjective&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObjective); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObjective); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AObjective)


#define FPSStealth_Source_FPSStealth_Public_Objective_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__meshComp() { return STRUCT_OFFSET(AObjective, meshComp); } \
	FORCEINLINE static uint32 __PPO__sphereComp() { return STRUCT_OFFSET(AObjective, sphereComp); } \
	FORCEINLINE static uint32 __PPO__PickupFX() { return STRUCT_OFFSET(AObjective, PickupFX); }


#define FPSStealth_Source_FPSStealth_Public_Objective_h_11_PROLOG
#define FPSStealth_Source_FPSStealth_Public_Objective_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSStealth_Source_FPSStealth_Public_Objective_h_14_PRIVATE_PROPERTY_OFFSET \
	FPSStealth_Source_FPSStealth_Public_Objective_h_14_RPC_WRAPPERS \
	FPSStealth_Source_FPSStealth_Public_Objective_h_14_INCLASS \
	FPSStealth_Source_FPSStealth_Public_Objective_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSStealth_Source_FPSStealth_Public_Objective_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSStealth_Source_FPSStealth_Public_Objective_h_14_PRIVATE_PROPERTY_OFFSET \
	FPSStealth_Source_FPSStealth_Public_Objective_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSStealth_Source_FPSStealth_Public_Objective_h_14_INCLASS_NO_PURE_DECLS \
	FPSStealth_Source_FPSStealth_Public_Objective_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSStealth_Source_FPSStealth_Public_Objective_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
