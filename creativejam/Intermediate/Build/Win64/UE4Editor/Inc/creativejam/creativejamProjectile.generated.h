// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef CREATIVEJAM_creativejamProjectile_generated_h
#error "creativejamProjectile.generated.h already included, missing '#pragma once' in creativejamProjectile.h"
#endif
#define CREATIVEJAM_creativejamProjectile_generated_h

#define creativejam_Source_creativejam_creativejamProjectile_h_12_SPARSE_DATA
#define creativejam_Source_creativejam_creativejamProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define creativejam_Source_creativejam_creativejamProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define creativejam_Source_creativejam_creativejamProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAcreativejamProjectile(); \
	friend struct Z_Construct_UClass_AcreativejamProjectile_Statics; \
public: \
	DECLARE_CLASS(AcreativejamProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/creativejam"), NO_API) \
	DECLARE_SERIALIZER(AcreativejamProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define creativejam_Source_creativejam_creativejamProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAcreativejamProjectile(); \
	friend struct Z_Construct_UClass_AcreativejamProjectile_Statics; \
public: \
	DECLARE_CLASS(AcreativejamProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/creativejam"), NO_API) \
	DECLARE_SERIALIZER(AcreativejamProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define creativejam_Source_creativejam_creativejamProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AcreativejamProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AcreativejamProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AcreativejamProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AcreativejamProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AcreativejamProjectile(AcreativejamProjectile&&); \
	NO_API AcreativejamProjectile(const AcreativejamProjectile&); \
public:


#define creativejam_Source_creativejam_creativejamProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AcreativejamProjectile(AcreativejamProjectile&&); \
	NO_API AcreativejamProjectile(const AcreativejamProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AcreativejamProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AcreativejamProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AcreativejamProjectile)


#define creativejam_Source_creativejam_creativejamProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AcreativejamProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AcreativejamProjectile, ProjectileMovement); }


#define creativejam_Source_creativejam_creativejamProjectile_h_9_PROLOG
#define creativejam_Source_creativejam_creativejamProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	creativejam_Source_creativejam_creativejamProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	creativejam_Source_creativejam_creativejamProjectile_h_12_SPARSE_DATA \
	creativejam_Source_creativejam_creativejamProjectile_h_12_RPC_WRAPPERS \
	creativejam_Source_creativejam_creativejamProjectile_h_12_INCLASS \
	creativejam_Source_creativejam_creativejamProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define creativejam_Source_creativejam_creativejamProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	creativejam_Source_creativejam_creativejamProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	creativejam_Source_creativejam_creativejamProjectile_h_12_SPARSE_DATA \
	creativejam_Source_creativejam_creativejamProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	creativejam_Source_creativejam_creativejamProjectile_h_12_INCLASS_NO_PURE_DECLS \
	creativejam_Source_creativejam_creativejamProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CREATIVEJAM_API UClass* StaticClass<class AcreativejamProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID creativejam_Source_creativejam_creativejamProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
