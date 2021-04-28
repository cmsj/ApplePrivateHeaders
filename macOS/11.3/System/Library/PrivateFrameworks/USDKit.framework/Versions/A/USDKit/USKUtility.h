/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/Versions/A/USDKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <USDKit/USDKit-Structs.h>
@interface USKUtility : NSObject
+(void)setLocalTransformWithNode:(id)arg1 transform:(SCD_Struct_US18)arg2 time:(double)arg3 ;
+(char)isShaderOutputProperty:(id)arg1 ;
+(id)bufferMaterialPropertiesWithMaterial:(id)arg1 ;
+(id)meshUniqueAndTriangulate:(id)arg1 names:(id)arg2 ;
+(SCD_Struct_US18)localTransformWithNode:(id)arg1 time:(double)arg2 ;
+(id)constantMaterialPropertiesWithMaterial:(id)arg1 ;
+(id)shaderNodeType:(id)arg1 ;
+(id)targetPropertyWithProperty:(id)arg1 ;
+(char)isSceneGraphNode:(id)arg1 ;
+(char)isTransformNode:(id)arg1 ;
+(id)transformKeyTimesWithNode:(id)arg1 ;
+(id)meshGroupsWithNode:(id)arg1 ;
+(id)firstUVMeshAttributeNameInMaterial:(id)arg1 ;
+(id)USDPreviewSurfaceDefaults;
+(id)textureMaterialPropertiesWithMaterial:(id)arg1 ;
@end
