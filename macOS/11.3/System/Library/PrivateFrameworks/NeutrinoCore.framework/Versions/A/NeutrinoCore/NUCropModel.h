/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NUCropModel : NSObject <NSCopying> {

	 _imageCenter;
	CGRect _cropRect;
	double _pitchRadians;
	double _yawRadians;
	double _rollRadians;
	double _fovRadians;
	char _isAutoCrop;
	unsigned long long _hitVertexID;
	SCD_Struct_NU8 _aspectRatio;
	CGRect _masterImageRect;
	CGRect _stitchedImageRect;

}

@property (nonatomic,readonly) char hasOvercapture; 
@property (assign,nonatomic) double pitchRadians; 
@property (assign,nonatomic) double yawRadians; 
@property (assign,nonatomic) double rollRadians; 
@property (nonatomic,readonly) CGSize masterImageSize; 
@property (nonatomic,readonly) CGRect masterImageRect;                //@synthesize masterImageRect=_masterImageRect - In the implementation block
@property (nonatomic,readonly) double fovRadians;                     //@synthesize fovRadians=_fovRadians - In the implementation block
@property (nonatomic,readonly) CGSize stitchedImageSize; 
@property (nonatomic,readonly) CGRect stitchedImageRect;              //@synthesize stitchedImageRect=_stitchedImageRect - In the implementation block
@property (assign) CGRect cropRect; 
@property (assign,nonatomic) SCD_Struct_NU8 aspectRatio;              //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (readonly) char hasCrop; 
@property (readonly) char cropNeedsOvercapture; 
@property (readonly) unsigned long long hitVertexID;                  //@synthesize hitVertexID=_hitVertexID - In the implementation block
@property (assign,nonatomic) char isAutoCrop;                         //@synthesize isAutoCrop=_isAutoCrop - In the implementation block
@property (nonatomic,readonly) double pitchDegreeUI; 
@property (nonatomic,readonly) double yawDegreeUI; 
@property (nonatomic,readonly) double rollDegreeUI; 
+(SCD_Struct_NU8)freeFormAspectRatio;
+(SCD_Struct_NU28)_imageTransformFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 imageRect:(CGRect)arg4 ;
+(double)defaultFocalLength;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)reset;
-(void)setAspectRatio:(SCD_Struct_NU8)arg1 ;
-(SCD_Struct_NU8)aspectRatio;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(char)_hasDefaultValues;
-(char)hasCrop;
-(id)initWithMasterImageSize:(CGSize)arg1 ;
-(id)initWithMasterImageRect:(CGRect)arg1 ;
-(id)initWithMasterImageSize:(CGSize)arg1 fovRadians:(double)arg2 ;
-(id)initWithMasterImageSize:(CGSize)arg1 stitchedImageSize:(CGSize)arg2 ;
-(id)initWithMasterImageRect:(CGRect)arg1 stitchedImageRect:(CGRect)arg2 ;
-(id)copyWithMasterImageSize:(CGSize)arg1 fovRadians:(double)arg2 ;
-(CGSize)masterImageSize;
-(char)hasOvercapture;
-(char)cropNeedsOvercapture;
-(CGSize)stitchedImageSize;
-(char)isEqualToCropModel:(id)arg1 ;
-(CGRect)_widestCropRect;
-(1)_defaultImageCenter;
-(CGRect)_defaultCropRect;
-(void)_setToDefaultValues;
-(Quad2dRef)_getBoundingQuad;
-(Quad2dRef)_getBoundingQuadFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 ;
-(Quad2dRef)_getBoundingQuadFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 imageRect:(CGRect)arg4 ;
-(SCD_Struct_NU28)_getBoundingQuadFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 withExpansionTol:(double)arg4 ;
-(SCD_Struct_NU28)_getBoundingQuadFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 withExpansionTol:(double)arg4 imageRect:(CGRect)arg5 ;
-(CGRect)integralCropRect:(CGRect)arg1 ;
-(CGRect)_integralCropRect:(CGRect)arg1 straightenAngle:(double)arg2 anchorPoint:(CGPoint)arg3 ;
-(void)_setCropRect:(CGRect)arg1 ;
-(void)_setCropRect:(CGRect)arg1 anchor:(CGPoint)arg2 ;
-(void)_setCropRectWithConstantSize:(CGRect)arg1 ;
-(unsigned long long)_hitMaskFromRect:(CGRect)arg1 ;
-(unsigned long long)_hitMaskFromRect:(CGRect)arg1 withTol:(double)arg2 ;
-(void)_debugPrintHitMask;
-(void)_debugPrintHitMask:(unsigned long long)arg1 ;
-(CGRect)_anchorAlignedRectFromCandidate:(CGRect)arg1 withAnchor:(CGPoint)arg2 ;
-(char)canGrowCropRect:(CGRect)arg1 constrainWithAnchorPoint:(CGPoint)arg2 strict:(char)arg3 withTol:(double)arg4 ;
-(char)imageContainsRect:(CGRect)arg1 withTol:(double)arg2 ;
-(unsigned long long)setCropRect:(CGRect)arg1 constrainWithAnchorPoint:(CGPoint)arg2 ;
-(unsigned long long)setCropRect:(CGRect)arg1 newCropRect:(CGRect)arg2 constrainWithAnchorPoint:(CGPoint)arg3 ;
-(unsigned long long)setCropRect:(CGRect)arg1 newCropRect:(CGRect)arg2 constrainWithAnchorPoint:(CGPoint)arg3 strict:(char)arg4 ;
-(unsigned long long)setForZoomCropRect:(CGRect)arg1 newCropRect:(CGRect)arg2 ;
-(CGRect)_expandedCropRectForZoom:(CGRect)arg1 candidateRect:(CGRect)arg2 ;
-(CGRect)getCropRect:(CGRect)arg1 newCropRect:(CGRect)arg2 pitch:(double)arg3 yaw:(double)arg4 roll:(double)arg5 constrainWithAnchorPoint:(CGPoint)arg6 strict:(char)arg7 aspectRatioIsFreeForm:(char)arg8 hitVertexId:(unsigned long long*)arg9 ;
-(CGRect)getCropRectThatCompletelyContainsMasterImageForPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 ;
-(unsigned long long)constrainedMoveCropRectBy:(CGVector)arg1 ;
-(unsigned long long)constrainedMoveCropRectBy:(CGVector)arg1 strict:(char)arg2 ;
-(unsigned long long)constrainedMoveCropRectBy:(CGVector)arg1 strict:(char)arg2 startRect:(CGRect)arg3 ;
-(unsigned long long)setRollAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2 ;
-(unsigned long long)setPitchAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2 ;
-(unsigned long long)setYawAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2 ;
-(unsigned long long)setRollAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2 startRect:(CGRect)arg3 startAngle:(double)arg4 ;
-(unsigned long long)setPitchAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2 startRect:(CGRect)arg3 startAngle:(double)arg4 ;
-(unsigned long long)setYawAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2 startRect:(CGRect)arg3 startAngle:(double)arg4 ;
-(unsigned long long)setAspectRatio:(SCD_Struct_NU8)arg1 constrainCropRect:(CGRect)arg2 withTargetArea:(double)arg3 ;
-(void)makeCurrentAspectRatioFreeForm;
-(void)makeCurrentFreeFormAspectFixed;
-(double)_currentAspectAsDouble:(CGRect)arg1 ;
-(SCD_Struct_NU8)_currentAspectRatio:(CGRect)arg1 ;
-(char)aspectRatioIsOriginal;
-(char)aspectRatioIsFreeForm;
-(SCD_Struct_NU8)originalAspectRatio;
-(double)pitchRadians;
-(double)yawRadians;
-(double)rollRadians;
-(void)setPitchRadians:(double)arg1 ;
-(void)setYawRadians:(double)arg1 ;
-(void)setRollRadians:(double)arg1 ;
-(double)pitchDegreeUI;
-(double)yawDegreeUI;
-(double)rollDegreeUI;
-(CGRect)masterImageRect;
-(double)fovRadians;
-(CGRect)stitchedImageRect;
-(unsigned long long)hitVertexID;
-(char)isAutoCrop;
-(void)setIsAutoCrop:(char)arg1 ;
@end

