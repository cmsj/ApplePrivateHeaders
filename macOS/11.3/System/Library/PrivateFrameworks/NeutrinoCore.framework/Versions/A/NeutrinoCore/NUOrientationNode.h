/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUTransformNode.h>

@class NUImageTransform;

@interface NUOrientationNode : NUTransformNode {

	long long _orientation;
	NUImageTransform* _transform;

}

@property (retain) NUImageTransform * transform;              //@synthesize transform=_transform - In the implementation block
@property (readonly) long long orientation;                   //@synthesize orientation=_orientation - In the implementation block
+(id)applyOrientation:(long long)arg1 to:(id)arg2 ;
-(NUImageTransform *)transform;
-(long long)orientation;
-(void)setTransform:(NUImageTransform *)arg1 ;
-(id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(char)canPropagateOriginalAuxiliaryData;
-(id)_evaluateImageGeometry:(out id*)arg1 ;
-(char)shouldCacheNodeForPipelineState:(id)arg1 ;
-(id)_evaluateVideo:(out id*)arg1 ;
-(char)requiresVideoComposition;
-(id)initWithSettings:(id)arg1 inputs:(id)arg2 ;
-(id)_evaluateVideoProperties:(out id*)arg1 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(id)_evaluateAuxiliaryImageForType:(long long)arg1 error:(out id*)arg2 ;
-(id)_transformWithError:(out id*)arg1 ;
-(char)isGeometryNode;
-(id)initWithOrientation:(long long)arg1 input:(id)arg2 ;
-(long long)outputImageOrientation:(long long)arg1 ;
@end

