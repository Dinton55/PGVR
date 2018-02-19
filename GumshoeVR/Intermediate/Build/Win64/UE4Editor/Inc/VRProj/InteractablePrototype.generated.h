// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef VRPROJ_InteractablePrototype_generated_h
#error "InteractablePrototype.generated.h already included, missing '#pragma once' in InteractablePrototype.h"
#endif
#define VRPROJ_InteractablePrototype_generated_h

#define VRProj_4_18_Source_VRProj_InteractablePrototype_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define VRProj_4_18_Source_VRProj_InteractablePrototype_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define VRProj_4_18_Source_VRProj_InteractablePrototype_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractablePrototype(); \
	friend VRPROJ_API class UClass* Z_Construct_UClass_AInteractablePrototype(); \
public: \
	DECLARE_CLASS(AInteractablePrototype, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRProj"), NO_API) \
	DECLARE_SERIALIZER(AInteractablePrototype) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define VRProj_4_18_Source_VRProj_InteractablePrototype_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAInteractablePrototype(); \
	friend VRPROJ_API class UClass* Z_Construct_UClass_AInteractablePrototype(); \
public: \
	DECLARE_CLASS(AInteractablePrototype, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRProj"), NO_API) \
	DECLARE_SERIALIZER(AInteractablePrototype) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define VRProj_4_18_Source_VRProj_InteractablePrototype_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractablePrototype(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractablePrototype) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractablePrototype); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractablePrototype); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractablePrototype(AInteractablePrototype&&); \
	NO_API AInteractablePrototype(const AInteractablePrototype&); \
public:


#define VRProj_4_18_Source_VRProj_InteractablePrototype_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractablePrototype(AInteractablePrototype&&); \
	NO_API AInteractablePrototype(const AInteractablePrototype&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractablePrototype); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractablePrototype); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractablePrototype)


#define VRProj_4_18_Source_VRProj_InteractablePrototype_h_12_PRIVATE_PROPERTY_OFFSET
#define VRProj_4_18_Source_VRProj_InteractablePrototype_h_9_PROLOG
#define VRProj_4_18_Source_VRProj_InteractablePrototype_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRProj_4_18_Source_VRProj_InteractablePrototype_h_12_PRIVATE_PROPERTY_OFFSET \
	VRProj_4_18_Source_VRProj_InteractablePrototype_h_12_RPC_WRAPPERS \
	VRProj_4_18_Source_VRProj_InteractablePrototype_h_12_INCLASS \
	VRProj_4_18_Source_VRProj_InteractablePrototype_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRProj_4_18_Source_VRProj_InteractablePrototype_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRProj_4_18_Source_VRProj_InteractablePrototype_h_12_PRIVATE_PROPERTY_OFFSET \
	VRProj_4_18_Source_VRProj_InteractablePrototype_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	VRProj_4_18_Source_VRProj_InteractablePrototype_h_12_INCLASS_NO_PURE_DECLS \
	VRProj_4_18_Source_VRProj_InteractablePrototype_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRProj_4_18_Source_VRProj_InteractablePrototype_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
