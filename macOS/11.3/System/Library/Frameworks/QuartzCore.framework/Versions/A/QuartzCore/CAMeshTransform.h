/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface CAMeshTransform : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {

	void* _impl;
	unsigned long long _normalization;
	long long _subdivisionSteps;
	char _replicatesEdges;

}

@property (readonly) unsigned long long vertexCount; 
@property (readonly) unsigned long long faceCount; 
@property (copy,readonly) NSString * depthNormalization; 
@property (readonly) int subdivisionSteps; 
@property (readonly) char replicatesEdges; 
+(void)CAMLParserEndElement:(id)arg1 content:(id)arg2 ;
+(void)CAMLParserStartElement:(id)arg1 ;
+(char)supportsSecureCoding;
+(id)meshTransformWithVertexCount:(unsigned long long)arg1 vertices:(const CAMeshVertex*)arg2 faceCount:(unsigned long long)arg3 faces:(const CAMeshFace*)arg4 depthNormalization:(id)arg5 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(NSString *)depthNormalization;
-(int)subdivisionSteps;
-(char)replicatesEdges;
-(id)initWithVertexCount:(unsigned long long)arg1 vertices:(const CAMeshVertex*)arg2 faceCount:(unsigned long long)arg3 faces:(const CAMeshFace*)arg4 depthNormalization:(id)arg5 ;
-(id)_initWithMeshTransform:(id)arg1 ;
-(char)_constructWithData:(id)arg1 ;
-(id)_subdivideToDepth:(long long)arg1 ;
-(id)inverseMesh;
-(id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator*)arg4 ;
-(id)meshTransformForLayer:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_data;
-(id)_init;
-(id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2 ;
-(double)CA_distanceToValue:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(unsigned long long)vertexCount;
-(CAMeshVertex)vertexAtIndex:(unsigned long long)arg1 ;
-(CAMeshFace)faceAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)faceCount;
-(id)subdividedMesh:(int)arg1 ;
@end

