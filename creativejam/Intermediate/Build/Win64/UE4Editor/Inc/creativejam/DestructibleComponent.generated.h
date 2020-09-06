// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AcreativejamCharacter;
#ifdef CREATIVEJAM_DestructibleComponent_generated_h
#error "DestructibleComponent.generated.h already included, missing '#pragma once' in DestructibleComponent.h"
#endif
#define CREATIVEJAM_DestructibleComponent_generated_h

#define creativejam_Source_creativejam_DestructibleComponent_h_13_DELEGATE \
struct _Script_creativejam_eventOnKick_Parms \
{ \
	AcreativejamCharacter* Character; \
}; \
static inline void FOnKick_DelegateWrapper(const FMulticastScriptDelegate& OnKick, AcreativejamCharacter* Character) \
{ \
	_Script_creativejam_eventOnKick_Parms Parms; \
	Parms.Character=Character; \
	OnKick.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define creativejam_Source_creativejam_DestructibleComponent_h_12_DELEGATE \
struct _Script_creativejam_eventOnPunch_Parms \
{ \
	AcreativejamCharacter* Character; \
}; \
static inline void FOnPunch_DelegateWrapper(const FMulticastScriptDelegate& OnPunch, AcreativejamCharacter* Character) \
{ \
	_Script_creativejam_eventOnPunch_Parms Parms; \
	Parms.Character=Character; \
	OnPunch.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define creativejam_Source_creativejam_DestructibleComponent_h_11_DELEGATE \
struct _Script_creativejam_eventOnEndFocus_Parms \
{ \
	AcreativejamCharacter* Character; \
}; \
static inline void FOnEndFocus_DelegateWrapper(const FMulticastScriptDelegate& OnEndFocus, AcreativejamCharacter* Character) \
{ \
	_Script_creativejam_eventOnEndFocus_Parms Parms; \
	Parms.Character=Character; \
	OnEndFocus.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define creativejam_Source_creativejam_DestructibleComponent_h_10_DELEGATE \
struct _Script_creativejam_eventOnBeginFocus_Parms \
{ \
	AcreativejamCharacter* Character; \
}; \
static inline void FOnBeginFocus_DelegateWrapper(const FMulticastScriptDelegate& OnBeginFocus, AcreativejamCharacter* Character) \
{ \
	_Script_creativejam_eventOnBeginFocus_Parms Parms; \
	Parms.Character=Character; \
	OnBeginFocus.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define creativejam_Source_creativejam_DestructibleComponent_h_20_SPARSE_DATA
#define creativejam_Source_creativejam_DestructibleComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetHealth); \
	DECLARE_FUNCTION(execGetRemainingHealth);


#define creativejam_Source_creativejam_DestructibleComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetHealth); \
	DECLARE_FUNCTION(execGetRemainingHealth);


#define creativejam_Source_creativejam_DestructibleComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDestructibleComponent(); \
	friend struct Z_Construct_UClass_UDestructibleComponent_Statics; \
public: \
	DECLARE_CLASS(UDestructibleComponent, UWidgetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/creativejam"), NO_API) \
	DECLARE_SERIALIZER(UDestructibleComponent)


#define creativejam_Source_creativejam_DestructibleComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUDestructibleComponent(); \
	friend struct Z_Construct_UClass_UDestructibleComponent_Statics; \
public: \
	DECLARE_CLASS(UDestructibleComponent, UWidgetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/creativejam"), NO_API) \
	DECLARE_SERIALIZER(UDestructibleComponent)


#define creativejam_Source_creativejam_DestructibleComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDestructibleComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDestructibleComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDestructibleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDestructibleComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDestructibleComponent(UDestructibleComponent&&); \
	NO_API UDestructibleComponent(const UDestructibleComponent&); \
public:


#define creativejam_Source_creativejam_DestructibleComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDestructibleComponent(UDestructibleComponent&&); \
	NO_API UDestructibleComponent(const UDestructibleComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDestructibleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDestructibleComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDestructibleComponent)


#define creativejam_Source_creativejam_DestructibleComponent_h_20_PRIVATE_PROPERTY_OFFSET
#define creativejam_Source_creativejam_DestructibleComponent_h_17_PROLOG
#define creativejam_Source_creativejam_DestructibleComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	creativejam_Source_creativejam_DestructibleComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	creativejam_Source_creativejam_DestructibleComponent_h_20_SPARSE_DATA \
	creativejam_Source_creativejam_DestructibleComponent_h_20_RPC_WRAPPERS \
	creativejam_Source_creativejam_DestructibleComponent_h_20_INCLASS \
	creativejam_Source_creativejam_DestructibleComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define creativejam_Source_creativejam_DestructibleComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	creativejam_Source_creativejam_DestructibleComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	creativejam_Source_creativejam_DestructibleComponent_h_20_SPARSE_DATA \
	creativejam_Source_creativejam_DestructibleComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	creativejam_Source_creativejam_DestructibleComponent_h_20_INCLASS_NO_PURE_DECLS \
	creativejam_Source_creativejam_DestructibleComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CREATIVEJAM_API UClass* StaticClass<class UDestructibleComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID creativejam_Source_creativejam_DestructibleComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
