// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAZEBALL_Ball_generated_h
#error "Ball.generated.h already included, missing '#pragma once' in Ball.h"
#endif
#define MAZEBALL_Ball_generated_h

#define MazeBall_Source_MazeBall_Ball_h_16_SPARSE_DATA
#define MazeBall_Source_MazeBall_Ball_h_16_RPC_WRAPPERS
#define MazeBall_Source_MazeBall_Ball_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define MazeBall_Source_MazeBall_Ball_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MazeBall"), NO_API) \
	DECLARE_SERIALIZER(ABall)


#define MazeBall_Source_MazeBall_Ball_h_16_INCLASS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MazeBall"), NO_API) \
	DECLARE_SERIALIZER(ABall)


#define MazeBall_Source_MazeBall_Ball_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public:


#define MazeBall_Source_MazeBall_Ball_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABall)


#define MazeBall_Source_MazeBall_Ball_h_16_PRIVATE_PROPERTY_OFFSET
#define MazeBall_Source_MazeBall_Ball_h_13_PROLOG
#define MazeBall_Source_MazeBall_Ball_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MazeBall_Source_MazeBall_Ball_h_16_PRIVATE_PROPERTY_OFFSET \
	MazeBall_Source_MazeBall_Ball_h_16_SPARSE_DATA \
	MazeBall_Source_MazeBall_Ball_h_16_RPC_WRAPPERS \
	MazeBall_Source_MazeBall_Ball_h_16_INCLASS \
	MazeBall_Source_MazeBall_Ball_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MazeBall_Source_MazeBall_Ball_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MazeBall_Source_MazeBall_Ball_h_16_PRIVATE_PROPERTY_OFFSET \
	MazeBall_Source_MazeBall_Ball_h_16_SPARSE_DATA \
	MazeBall_Source_MazeBall_Ball_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MazeBall_Source_MazeBall_Ball_h_16_INCLASS_NO_PURE_DECLS \
	MazeBall_Source_MazeBall_Ball_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAZEBALL_API UClass* StaticClass<class ABall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MazeBall_Source_MazeBall_Ball_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
