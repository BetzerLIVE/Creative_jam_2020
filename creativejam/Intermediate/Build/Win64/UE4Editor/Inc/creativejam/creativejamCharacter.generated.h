// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CREATIVEJAM_creativejamCharacter_generated_h
#error "creativejamCharacter.generated.h already included, missing '#pragma once' in creativejamCharacter.h"
#endif
#define CREATIVEJAM_creativejamCharacter_generated_h

#define creativejam_Source_creativejam_creativejamCharacter_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDestructibleData_Statics; \
	CREATIVEJAM_API static class UScriptStruct* StaticStruct();


template<> CREATIVEJAM_API UScriptStruct* StaticStruct<struct FDestructibleData>();

#define creativejam_Source_creativejam_creativejamCharacter_h_38_SPARSE_DATA
#define creativejam_Source_creativejam_creativejamCharacter_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetKickSpeed); \
	DECLARE_FUNCTION(execSetPunchSpeed);


#define creativejam_Source_creativejam_creativejamCharacter_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetKickSpeed); \
	DECLARE_FUNCTION(execSetPunchSpeed);


#define creativejam_Source_creativejam_creativejamCharacter_h_38_EVENT_PARMS
#define creativejam_Source_creativejam_creativejamCharacter_h_38_CALLBACK_WRAPPERS
#define creativejam_Source_creativejam_creativejamCharacter_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAcreativejamCharacter(); \
	friend struct Z_Construct_UClass_AcreativejamCharacter_Statics; \
public: \
	DECLARE_CLASS(AcreativejamCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/creativejam"), NO_API) \
	DECLARE_SERIALIZER(AcreativejamCharacter)


#define creativejam_Source_creativejam_creativejamCharacter_h_38_INCLASS \
private: \
	static void StaticRegisterNativesAcreativejamCharacter(); \
	friend struct Z_Construct_UClass_AcreativejamCharacter_Statics; \
public: \
	DECLARE_CLASS(AcreativejamCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/creativejam"), NO_API) \
	DECLARE_SERIALIZER(AcreativejamCharacter)


#define creativejam_Source_creativejam_creativejamCharacter_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AcreativejamCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AcreativejamCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AcreativejamCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AcreativejamCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AcreativejamCharacter(AcreativejamCharacter&&); \
	NO_API AcreativejamCharacter(const AcreativejamCharacter&); \
public:


#define creativejam_Source_creativejam_creativejamCharacter_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AcreativejamCharacter(AcreativejamCharacter&&); \
	NO_API AcreativejamCharacter(const AcreativejamCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AcreativejamCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AcreativejamCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AcreativejamCharacter)


#define creativejam_Source_creativejam_creativejamCharacter_h_38_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AcreativejamCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AcreativejamCharacter, FirstPersonCameraComponent); }


#define creativejam_Source_creativejam_creativejamCharacter_h_35_PROLOG \
	creativejam_Source_creativejam_creativejamCharacter_h_38_EVENT_PARMS


#define creativejam_Source_creativejam_creativejamCharacter_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	creativejam_Source_creativejam_creativejamCharacter_h_38_PRIVATE_PROPERTY_OFFSET \
	creativejam_Source_creativejam_creativejamCharacter_h_38_SPARSE_DATA \
	creativejam_Source_creativejam_creativejamCharacter_h_38_RPC_WRAPPERS \
	creativejam_Source_creativejam_creativejamCharacter_h_38_CALLBACK_WRAPPERS \
	creativejam_Source_creativejam_creativejamCharacter_h_38_INCLASS \
	creativejam_Source_creativejam_creativejamCharacter_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define creativejam_Source_creativejam_creativejamCharacter_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	creativejam_Source_creativejam_creativejamCharacter_h_38_PRIVATE_PROPERTY_OFFSET \
	creativejam_Source_creativejam_creativejamCharacter_h_38_SPARSE_DATA \
	creativejam_Source_creativejam_creativejamCharacter_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	creativejam_Source_creativejam_creativejamCharacter_h_38_CALLBACK_WRAPPERS \
	creativejam_Source_creativejam_creativejamCharacter_h_38_INCLASS_NO_PURE_DECLS \
	creativejam_Source_creativejam_creativejamCharacter_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CREATIVEJAM_API UClass* StaticClass<class AcreativejamCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID creativejam_Source_creativejam_creativejamCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
