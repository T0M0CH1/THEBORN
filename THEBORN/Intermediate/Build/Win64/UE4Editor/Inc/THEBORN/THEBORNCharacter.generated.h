// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEBORN_THEBORNCharacter_generated_h
#error "THEBORNCharacter.generated.h already included, missing '#pragma once' in THEBORNCharacter.h"
#endif
#define THEBORN_THEBORNCharacter_generated_h

#define THEBORN_Source_THEBORN_THEBORNCharacter_h_12_SPARSE_DATA
#define THEBORN_Source_THEBORN_THEBORNCharacter_h_12_RPC_WRAPPERS
#define THEBORN_Source_THEBORN_THEBORNCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define THEBORN_Source_THEBORN_THEBORNCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATHEBORNCharacter(); \
	friend struct Z_Construct_UClass_ATHEBORNCharacter_Statics; \
public: \
	DECLARE_CLASS(ATHEBORNCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/THEBORN"), NO_API) \
	DECLARE_SERIALIZER(ATHEBORNCharacter)


#define THEBORN_Source_THEBORN_THEBORNCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATHEBORNCharacter(); \
	friend struct Z_Construct_UClass_ATHEBORNCharacter_Statics; \
public: \
	DECLARE_CLASS(ATHEBORNCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/THEBORN"), NO_API) \
	DECLARE_SERIALIZER(ATHEBORNCharacter)


#define THEBORN_Source_THEBORN_THEBORNCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATHEBORNCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATHEBORNCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATHEBORNCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATHEBORNCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATHEBORNCharacter(ATHEBORNCharacter&&); \
	NO_API ATHEBORNCharacter(const ATHEBORNCharacter&); \
public:


#define THEBORN_Source_THEBORN_THEBORNCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATHEBORNCharacter(ATHEBORNCharacter&&); \
	NO_API ATHEBORNCharacter(const ATHEBORNCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATHEBORNCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATHEBORNCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATHEBORNCharacter)


#define THEBORN_Source_THEBORN_THEBORNCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(ATHEBORNCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATHEBORNCharacter, CameraBoom); }


#define THEBORN_Source_THEBORN_THEBORNCharacter_h_9_PROLOG
#define THEBORN_Source_THEBORN_THEBORNCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	THEBORN_Source_THEBORN_THEBORNCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	THEBORN_Source_THEBORN_THEBORNCharacter_h_12_SPARSE_DATA \
	THEBORN_Source_THEBORN_THEBORNCharacter_h_12_RPC_WRAPPERS \
	THEBORN_Source_THEBORN_THEBORNCharacter_h_12_INCLASS \
	THEBORN_Source_THEBORN_THEBORNCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define THEBORN_Source_THEBORN_THEBORNCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	THEBORN_Source_THEBORN_THEBORNCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	THEBORN_Source_THEBORN_THEBORNCharacter_h_12_SPARSE_DATA \
	THEBORN_Source_THEBORN_THEBORNCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	THEBORN_Source_THEBORN_THEBORNCharacter_h_12_INCLASS_NO_PURE_DECLS \
	THEBORN_Source_THEBORN_THEBORNCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEBORN_API UClass* StaticClass<class ATHEBORNCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID THEBORN_Source_THEBORN_THEBORNCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
