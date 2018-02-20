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
#ifdef VRPROJ_VRCharacterPrototype_generated_h
#error "VRCharacterPrototype.generated.h already included, missing '#pragma once' in VRCharacterPrototype.h"
#endif
#define VRPROJ_VRCharacterPrototype_generated_h

#define GumshoeVR_Source_VRProj_VRCharacterPrototype_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRightHandOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRightHandOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRightHandOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRightHandOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLeftHandOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnLeftHandOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLeftHandOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnLeftHandOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define GumshoeVR_Source_VRProj_VRCharacterPrototype_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRightHandOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRightHandOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRightHandOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRightHandOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLeftHandOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnLeftHandOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLeftHandOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnLeftHandOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define GumshoeVR_Source_VRProj_VRCharacterPrototype_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRCharacterPrototype(); \
	friend VRPROJ_API class UClass* Z_Construct_UClass_AVRCharacterPrototype(); \
public: \
	DECLARE_CLASS(AVRCharacterPrototype, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRProj"), NO_API) \
	DECLARE_SERIALIZER(AVRCharacterPrototype) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GumshoeVR_Source_VRProj_VRCharacterPrototype_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAVRCharacterPrototype(); \
	friend VRPROJ_API class UClass* Z_Construct_UClass_AVRCharacterPrototype(); \
public: \
	DECLARE_CLASS(AVRCharacterPrototype, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRProj"), NO_API) \
	DECLARE_SERIALIZER(AVRCharacterPrototype) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GumshoeVR_Source_VRProj_VRCharacterPrototype_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRCharacterPrototype(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRCharacterPrototype) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRCharacterPrototype); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRCharacterPrototype); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRCharacterPrototype(AVRCharacterPrototype&&); \
	NO_API AVRCharacterPrototype(const AVRCharacterPrototype&); \
public:


#define GumshoeVR_Source_VRProj_VRCharacterPrototype_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRCharacterPrototype(AVRCharacterPrototype&&); \
	NO_API AVRCharacterPrototype(const AVRCharacterPrototype&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRCharacterPrototype); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRCharacterPrototype); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVRCharacterPrototype)


#define GumshoeVR_Source_VRProj_VRCharacterPrototype_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(AVRCharacterPrototype, CameraComp); } \
	FORCEINLINE static uint32 __PPO__VROriginComp() { return STRUCT_OFFSET(AVRCharacterPrototype, VROriginComp); } \
	FORCEINLINE static uint32 __PPO__bPositionalHeadTracking() { return STRUCT_OFFSET(AVRCharacterPrototype, bPositionalHeadTracking); } \
	FORCEINLINE static uint32 __PPO__LeftHandComponent() { return STRUCT_OFFSET(AVRCharacterPrototype, LeftHandComponent); } \
	FORCEINLINE static uint32 __PPO__LeftHandBoxCol() { return STRUCT_OFFSET(AVRCharacterPrototype, LeftHandBoxCol); } \
	FORCEINLINE static uint32 __PPO__RightHandComponent() { return STRUCT_OFFSET(AVRCharacterPrototype, RightHandComponent); } \
	FORCEINLINE static uint32 __PPO__RightHandBoxCol() { return STRUCT_OFFSET(AVRCharacterPrototype, RightHandBoxCol); } \
	FORCEINLINE static uint32 __PPO__FlashlightActive() { return STRUCT_OFFSET(AVRCharacterPrototype, FlashlightActive); }


#define GumshoeVR_Source_VRProj_VRCharacterPrototype_h_9_PROLOG
#define GumshoeVR_Source_VRProj_VRCharacterPrototype_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GumshoeVR_Source_VRProj_VRCharacterPrototype_h_12_PRIVATE_PROPERTY_OFFSET \
	GumshoeVR_Source_VRProj_VRCharacterPrototype_h_12_RPC_WRAPPERS \
	GumshoeVR_Source_VRProj_VRCharacterPrototype_h_12_INCLASS \
	GumshoeVR_Source_VRProj_VRCharacterPrototype_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GumshoeVR_Source_VRProj_VRCharacterPrototype_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GumshoeVR_Source_VRProj_VRCharacterPrototype_h_12_PRIVATE_PROPERTY_OFFSET \
	GumshoeVR_Source_VRProj_VRCharacterPrototype_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GumshoeVR_Source_VRProj_VRCharacterPrototype_h_12_INCLASS_NO_PURE_DECLS \
	GumshoeVR_Source_VRProj_VRCharacterPrototype_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GumshoeVR_Source_VRProj_VRCharacterPrototype_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
