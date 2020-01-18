// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FPSSTEALTH_ExtractionZone_generated_h
#error "ExtractionZone.generated.h already included, missing '#pragma once' in ExtractionZone.h"
#endif
#define FPSSTEALTH_ExtractionZone_generated_h

#define FPSStealth_Source_FPSStealth_Public_ExtractionZone_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define FPSStealth_Source_FPSStealth_Public_ExtractionZone_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define FPSStealth_Source_FPSStealth_Public_ExtractionZone_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExtractionZone(); \
	friend struct Z_Construct_UClass_AExtractionZone_Statics; \
public: \
	DECLARE_CLASS(AExtractionZone, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSStealth"), NO_API) \
	DECLARE_SERIALIZER(AExtractionZone)


#define FPSStealth_Source_FPSStealth_Public_ExtractionZone_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAExtractionZone(); \
	friend struct Z_Construct_UClass_AExtractionZone_Statics; \
public: \
	DECLARE_CLASS(AExtractionZone, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSStealth"), NO_API) \
	DECLARE_SERIALIZER(AExtractionZone)


#define FPSStealth_Source_FPSStealth_Public_ExtractionZone_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExtractionZone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExtractionZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExtractionZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExtractionZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExtractionZone(AExtractionZone&&); \
	NO_API AExtractionZone(const AExtractionZone&); \
public:


#define FPSStealth_Source_FPSStealth_Public_ExtractionZone_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExtractionZone(AExtractionZone&&); \
	NO_API AExtractionZone(const AExtractionZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExtractionZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExtractionZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExtractionZone)


#define FPSStealth_Source_FPSStealth_Public_ExtractionZone_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__overlapBox() { return STRUCT_OFFSET(AExtractionZone, overlapBox); } \
	FORCEINLINE static uint32 __PPO__decalComp() { return STRUCT_OFFSET(AExtractionZone, decalComp); } \
	FORCEINLINE static uint32 __PPO__objectiveMissingSound() { return STRUCT_OFFSET(AExtractionZone, objectiveMissingSound); } \
	FORCEINLINE static uint32 __PPO__missionCompleteSound() { return STRUCT_OFFSET(AExtractionZone, missionCompleteSound); }


#define FPSStealth_Source_FPSStealth_Public_ExtractionZone_h_11_PROLOG
#define FPSStealth_Source_FPSStealth_Public_ExtractionZone_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSStealth_Source_FPSStealth_Public_ExtractionZone_h_14_PRIVATE_PROPERTY_OFFSET \
	FPSStealth_Source_FPSStealth_Public_ExtractionZone_h_14_RPC_WRAPPERS \
	FPSStealth_Source_FPSStealth_Public_ExtractionZone_h_14_INCLASS \
	FPSStealth_Source_FPSStealth_Public_ExtractionZone_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSStealth_Source_FPSStealth_Public_ExtractionZone_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSStealth_Source_FPSStealth_Public_ExtractionZone_h_14_PRIVATE_PROPERTY_OFFSET \
	FPSStealth_Source_FPSStealth_Public_ExtractionZone_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSStealth_Source_FPSStealth_Public_ExtractionZone_h_14_INCLASS_NO_PURE_DECLS \
	FPSStealth_Source_FPSStealth_Public_ExtractionZone_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSStealth_Source_FPSStealth_Public_ExtractionZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
