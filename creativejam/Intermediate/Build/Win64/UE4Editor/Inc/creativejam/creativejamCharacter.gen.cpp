// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "creativejam/creativejamCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecreativejamCharacter() {}
// Cross Module References
	CREATIVEJAM_API UScriptStruct* Z_Construct_UScriptStruct_FDestructibleData();
	UPackage* Z_Construct_UPackage__Script_creativejam();
	CREATIVEJAM_API UClass* Z_Construct_UClass_UDestructibleComponent_NoRegister();
	CREATIVEJAM_API UClass* Z_Construct_UClass_AcreativejamCharacter_NoRegister();
	CREATIVEJAM_API UClass* Z_Construct_UClass_AcreativejamCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FDestructibleData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATIVEJAM_API uint32 Get_Z_Construct_UScriptStruct_FDestructibleData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDestructibleData, Z_Construct_UPackage__Script_creativejam(), TEXT("DestructibleData"), sizeof(FDestructibleData), Get_Z_Construct_UScriptStruct_FDestructibleData_Hash());
	}
	return Singleton;
}
template<> CREATIVEJAM_API UScriptStruct* StaticStruct<FDestructibleData>()
{
	return FDestructibleData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDestructibleData(FDestructibleData::StaticStruct, TEXT("/Script/creativejam"), TEXT("DestructibleData"), false, nullptr, nullptr);
static struct FScriptStruct_creativejam_StaticRegisterNativesFDestructibleData
{
	FScriptStruct_creativejam_StaticRegisterNativesFDestructibleData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DestructibleData")),new UScriptStruct::TCppStructOps<FDestructibleData>);
	}
} ScriptStruct_creativejam_StaticRegisterNativesFDestructibleData;
	struct Z_Construct_UScriptStruct_FDestructibleData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastInteractionCheckTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastInteractionCheckTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewedDestructibleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ViewedDestructibleComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "creativejamCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDestructibleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDestructibleData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleData_Statics::NewProp_LastInteractionCheckTime_MetaData[] = {
		{ "Comment", "//The time when we last checked for an interactable\n" },
		{ "ModuleRelativePath", "creativejamCharacter.h" },
		{ "ToolTip", "The time when we last checked for an interactable" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDestructibleData_Statics::NewProp_LastInteractionCheckTime = { "LastInteractionCheckTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDestructibleData, LastInteractionCheckTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleData_Statics::NewProp_LastInteractionCheckTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleData_Statics::NewProp_LastInteractionCheckTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleData_Statics::NewProp_ViewedDestructibleComponent_MetaData[] = {
		{ "Comment", "//The current interactable component we're viewing, if there is one\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "creativejamCharacter.h" },
		{ "ToolTip", "The current interactable component we're viewing, if there is one" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDestructibleData_Statics::NewProp_ViewedDestructibleComponent = { "ViewedDestructibleComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDestructibleData, ViewedDestructibleComponent), Z_Construct_UClass_UDestructibleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleData_Statics::NewProp_ViewedDestructibleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleData_Statics::NewProp_ViewedDestructibleComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDestructibleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleData_Statics::NewProp_LastInteractionCheckTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleData_Statics::NewProp_ViewedDestructibleComponent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDestructibleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_creativejam,
		nullptr,
		&NewStructOps,
		"DestructibleData",
		sizeof(FDestructibleData),
		alignof(FDestructibleData),
		Z_Construct_UScriptStruct_FDestructibleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDestructibleData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDestructibleData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_creativejam();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DestructibleData"), sizeof(FDestructibleData), Get_Z_Construct_UScriptStruct_FDestructibleData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDestructibleData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDestructibleData_Hash() { return 3627868142U; }
	DEFINE_FUNCTION(AcreativejamCharacter::execSetKickSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetKickSpeed(Z_Param_speed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AcreativejamCharacter::execSetPunchSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPunchSpeed(Z_Param_speed);
		P_NATIVE_END;
	}
	static FName NAME_AcreativejamCharacter_OnDeath = FName(TEXT("OnDeath"));
	void AcreativejamCharacter::OnDeath()
	{
		ProcessEvent(FindFunctionChecked(NAME_AcreativejamCharacter_OnDeath),NULL);
	}
	void AcreativejamCharacter::StaticRegisterNativesAcreativejamCharacter()
	{
		UClass* Class = AcreativejamCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetKickSpeed", &AcreativejamCharacter::execSetKickSpeed },
			{ "SetPunchSpeed", &AcreativejamCharacter::execSetPunchSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AcreativejamCharacter_OnDeath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AcreativejamCharacter_OnDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "creativejamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AcreativejamCharacter_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AcreativejamCharacter, nullptr, "OnDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AcreativejamCharacter_OnDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AcreativejamCharacter_OnDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AcreativejamCharacter_OnDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AcreativejamCharacter_OnDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AcreativejamCharacter_SetKickSpeed_Statics
	{
		struct creativejamCharacter_eventSetKickSpeed_Parms
		{
			float speed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AcreativejamCharacter_SetKickSpeed_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(creativejamCharacter_eventSetKickSpeed_Parms, speed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AcreativejamCharacter_SetKickSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AcreativejamCharacter_SetKickSpeed_Statics::NewProp_speed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AcreativejamCharacter_SetKickSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "creativejamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AcreativejamCharacter_SetKickSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AcreativejamCharacter, nullptr, "SetKickSpeed", nullptr, nullptr, sizeof(creativejamCharacter_eventSetKickSpeed_Parms), Z_Construct_UFunction_AcreativejamCharacter_SetKickSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AcreativejamCharacter_SetKickSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AcreativejamCharacter_SetKickSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AcreativejamCharacter_SetKickSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AcreativejamCharacter_SetKickSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AcreativejamCharacter_SetKickSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AcreativejamCharacter_SetPunchSpeed_Statics
	{
		struct creativejamCharacter_eventSetPunchSpeed_Parms
		{
			float speed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AcreativejamCharacter_SetPunchSpeed_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(creativejamCharacter_eventSetPunchSpeed_Parms, speed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AcreativejamCharacter_SetPunchSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AcreativejamCharacter_SetPunchSpeed_Statics::NewProp_speed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AcreativejamCharacter_SetPunchSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "creativejamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AcreativejamCharacter_SetPunchSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AcreativejamCharacter, nullptr, "SetPunchSpeed", nullptr, nullptr, sizeof(creativejamCharacter_eventSetPunchSpeed_Parms), Z_Construct_UFunction_AcreativejamCharacter_SetPunchSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AcreativejamCharacter_SetPunchSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AcreativejamCharacter_SetPunchSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AcreativejamCharacter_SetPunchSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AcreativejamCharacter_SetPunchSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AcreativejamCharacter_SetPunchSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AcreativejamCharacter_NoRegister()
	{
		return AcreativejamCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AcreativejamCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Currentlevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Currentlevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeAttackDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeleeAttackDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KickSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastKickAttackTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastKickAttackTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PunchSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PunchSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastPunchAttackTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastPunchAttackTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickAttackDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KickAttackDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KickAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KickSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PunchAttackDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PunchAttackDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PunchAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PunchAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PunchSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PunchSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestructibleData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DestructibleData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AcreativejamCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_creativejam,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AcreativejamCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AcreativejamCharacter_OnDeath, "OnDeath" }, // 1928548592
		{ &Z_Construct_UFunction_AcreativejamCharacter_SetKickSpeed, "SetKickSpeed" }, // 3923342220
		{ &Z_Construct_UFunction_AcreativejamCharacter_SetPunchSpeed, "SetPunchSpeed" }, // 1636922268
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcreativejamCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*config=Game*/" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "creativejamCharacter.h" },
		{ "ModuleRelativePath", "creativejamCharacter.h" },
		{ "ToolTip", "config=Game" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_MaxLevel_MetaData[] = {
		{ "Category", "Leveling" },
		{ "ModuleRelativePath", "creativejamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_MaxLevel = { "MaxLevel", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcreativejamCharacter, MaxLevel), METADATA_PARAMS(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_MaxLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_MaxLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_Currentlevel_MetaData[] = {
		{ "Category", "Leveling" },
		{ "ModuleRelativePath", "creativejamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_Currentlevel = { "Currentlevel", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcreativejamCharacter, Currentlevel), METADATA_PARAMS(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_Currentlevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_Currentlevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "creativejamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcreativejamCharacter, CurrentHealth), METADATA_PARAMS(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_CurrentHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_CurrentHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "creativejamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcreativejamCharacter, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_MeleeAttackDistance_MetaData[] = {
		{ "Category", "Melee" },
		{ "ModuleRelativePath", "creativejamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_MeleeAttackDistance = { "MeleeAttackDistance", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcreativejamCharacter, MeleeAttackDistance), METADATA_PARAMS(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_MeleeAttackDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_MeleeAttackDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_KickSpeed_MetaData[] = {
		{ "Category", "Melee" },
		{ "ModuleRelativePath", "creativejamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_KickSpeed = { "KickSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcreativejamCharacter, KickSpeed), METADATA_PARAMS(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_KickSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_KickSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_LastKickAttackTime_MetaData[] = {
		{ "ModuleRelativePath", "creativejamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_LastKickAttackTime = { "LastKickAttackTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcreativejamCharacter, LastKickAttackTime), METADATA_PARAMS(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_LastKickAttackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_LastKickAttackTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_PunchSpeed_MetaData[] = {
		{ "Category", "Melee" },
		{ "ModuleRelativePath", "creativejamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_PunchSpeed = { "PunchSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcreativejamCharacter, PunchSpeed), METADATA_PARAMS(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_PunchSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_PunchSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_LastPunchAttackTime_MetaData[] = {
		{ "ModuleRelativePath", "creativejamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_LastPunchAttackTime = { "LastPunchAttackTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcreativejamCharacter, LastPunchAttackTime), METADATA_PARAMS(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_LastPunchAttackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_LastPunchAttackTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_KickAttackDamage_MetaData[] = {
		{ "Category", "Melee" },
		{ "ModuleRelativePath", "creativejamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_KickAttackDamage = { "KickAttackDamage", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcreativejamCharacter, KickAttackDamage), METADATA_PARAMS(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_KickAttackDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_KickAttackDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_KickAnimation_MetaData[] = {
		{ "Category", "Melee" },
		{ "Comment", "/** AnimMontage to play each time we fire */" },
		{ "ModuleRelativePath", "creativejamCharacter.h" },
		{ "ToolTip", "AnimMontage to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_KickAnimation = { "KickAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcreativejamCharacter, KickAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_KickAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_KickAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_KickSound_MetaData[] = {
		{ "Category", "Melee" },
		{ "Comment", "/** Sound to play each time we fire */" },
		{ "ModuleRelativePath", "creativejamCharacter.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_KickSound = { "KickSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcreativejamCharacter, KickSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_KickSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_KickSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_PunchAttackDamage_MetaData[] = {
		{ "Category", "Melee" },
		{ "ModuleRelativePath", "creativejamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_PunchAttackDamage = { "PunchAttackDamage", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcreativejamCharacter, PunchAttackDamage), METADATA_PARAMS(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_PunchAttackDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_PunchAttackDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_PunchAnimation_MetaData[] = {
		{ "Category", "Melee" },
		{ "Comment", "/** AnimMontage to play each time we fire */" },
		{ "ModuleRelativePath", "creativejamCharacter.h" },
		{ "ToolTip", "AnimMontage to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_PunchAnimation = { "PunchAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcreativejamCharacter, PunchAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_PunchAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_PunchAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_PunchSound_MetaData[] = {
		{ "Category", "Melee" },
		{ "Comment", "/** Sound to play each time we fire */" },
		{ "ModuleRelativePath", "creativejamCharacter.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_PunchSound = { "PunchSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcreativejamCharacter, PunchSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_PunchSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_PunchSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "creativejamCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcreativejamCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "creativejamCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcreativejamCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_DestructibleData_MetaData[] = {
		{ "Comment", "//Information about the current state of the players interaction\n" },
		{ "ModuleRelativePath", "creativejamCharacter.h" },
		{ "ToolTip", "Information about the current state of the players interaction" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_DestructibleData = { "DestructibleData", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcreativejamCharacter, DestructibleData), Z_Construct_UScriptStruct_FDestructibleData, METADATA_PARAMS(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_DestructibleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_DestructibleData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "creativejamCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcreativejamCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "creativejamCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcreativejamCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_Mesh1P_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AcreativejamCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_MaxLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_Currentlevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_CurrentHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_MeleeAttackDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_KickSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_LastKickAttackTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_PunchSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_LastPunchAttackTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_KickAttackDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_KickAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_KickSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_PunchAttackDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_PunchAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_PunchSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_DestructibleData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcreativejamCharacter_Statics::NewProp_Mesh1P,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AcreativejamCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AcreativejamCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AcreativejamCharacter_Statics::ClassParams = {
		&AcreativejamCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AcreativejamCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AcreativejamCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AcreativejamCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AcreativejamCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AcreativejamCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AcreativejamCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AcreativejamCharacter, 4211681753);
	template<> CREATIVEJAM_API UClass* StaticClass<AcreativejamCharacter>()
	{
		return AcreativejamCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AcreativejamCharacter(Z_Construct_UClass_AcreativejamCharacter, &AcreativejamCharacter::StaticClass, TEXT("/Script/creativejam"), TEXT("AcreativejamCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AcreativejamCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
